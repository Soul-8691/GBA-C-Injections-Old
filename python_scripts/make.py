import platform
import sys
import os
import subprocess
import itertools
from datetime import datetime
from glob import glob
import hashlib
import _io
import shutil
import math

SOURCE_ROM = "OI.gba"
OFFSET_TO_PUT = 0x1000000

def ChangeFileLine(filePath: str, lineToChange: int, replacement: str):
    with open(filePath, 'r') as file:
        copy = file.read()
        file.seek(0x0)
        lineNum = 1
        for line in file:
            if lineNum == lineToChange:
                copy = copy.replace(line, replacement)
                break
            lineNum += 1

    with open(filePath, 'w') as file:
        file.write(copy)


def EditLinker(offset: int):
    ChangeFileLine("linker.ld", 4, "\t\trom     : ORIGIN = (0x08000000 + " + hex(offset) + "), LENGTH = 32M\n")


def ClearFromTo(rom, from_: int, to_: int):
    rom.seek(from_)
    for i in range(0, to_ - from_):
        rom.write(b'\xFF')


def TryProcessFileInclusion(line: str, definesDict: dict) -> bool:
    if line.startswith('#include "'):
        try:
            path = line.split('"')[1].strip()
            with open(path, 'r') as file:
                for line in file:
                    if line.startswith('#define '):
                        try:
                            lineList = line.strip().split()
                            title = lineList[1]

                            if len(lineList) == 2 or lineList[2].startswith('//') or lineList[2].startswith('/*'):
                                define = True
                            else:
                                define = lineList[2]

                            definesDict[title] = define
                        except IndexError:
                            print('Error reading define on line"' + line.strip() + '" in file "' + path + '".')

        except Exception as e:
            print('Error including file on line "' + line.strip() + '".')
            print(e)

        return True  # Inclusion line; don't read otherwise

    return False


def TryProcessConditionalCompilation(line: str, definesDict: dict, conditionals: [(str, bool)]) -> bool:
    line = line.strip()
    upperLine = line.upper()
    numWordsOnLine = len(line.split())

    if upperLine.startswith('#IFDEF ') and numWordsOnLine > 1:
        condition = line.strip().split()[1]
        conditionals.insert(0, (condition, True))  # Insert at front
        return True
    elif upperLine.startswith('#IFNDEF ') and numWordsOnLine > 1:
        condition = line.strip().split()[1]
        conditionals.insert(0, (condition, False))  # Insert at front
        return True
    elif upperLine == '#ELSE':
        if len(conditionals) >= 1:  # At least one statement was pushed before
            condition = conditionals.pop(0)
            if condition[1] is True:
                conditionals.insert(0, (condition[0], False))  # Invert old statement
            else:
                conditionals.insert(0, (condition[0], True))  # Invert old statement
            return True
    elif upperLine == '#ENDIF':
        conditionals.pop(0)  # Remove first element (last pushed)
        return True
    else:
        for condition in conditionals:
            definedType = condition[1]
            condition = condition[0]

            if definedType is True:  # From #ifdef
                if condition not in definesDict:
                    return True  # If something isn't defined then skip the line
            else:  # From #ifndef
                if condition in definesDict:
                    return True  # If something is defined then skip the line

    return False


def BuildCode():
    on_wsl = "microsoft" in platform.uname()[3].lower()

    if sys.platform.startswith('win'):
        PathVar = os.environ.get('Path')
        Paths = PathVar.split(';')
        PATH = ''
        for candidatePath in Paths:
            if 'devkitARM' in candidatePath:
                PATH = candidatePath
                break
        if PATH == '':
            print('DevKit does not exist in your Path variable.\nChecking default location.')
            PATH = 'C://devkitPro//devkitARM//bin'
            if os.path.isdir(PATH) is False:
                print('...\nDevkit not found.')
                sys.exit(1)
            else:
                print('Devkit found.')
        
        PREFIX = '/arm-none-eabi-'
        AS = PATH + PREFIX + 'as'
        CC = PATH + PREFIX + 'gcc'
        LD = PATH + PREFIX + 'ld'
        GBAGFX = 'deps/gbagfx.exe'
        SUPERFAMICONV = 'deps/superfamiconv.exe'
        WAV2AGB = 'deps/wav2agb.exe'
        MID2AGB = 'deps/mid2agb.exe'
        PREPROC = 'deps/preproc.exe'
        OBJCOPY = PATH + PREFIX + 'objcopy'

    else:  # Linux, OSX, etc.
        PREFIX = 'arm-none-eabi-'
        AS = PREFIX + 'as'
        CC = PREFIX + 'gcc'
        LD = PREFIX + 'ld'
        if on_wsl:
            WAV2AGB = 'deps/wav2agb.exe'
            MID2AGB = 'deps/mid2agb.exe'
            GBAGFX = 'deps/gbagfx.exe'
            SUPERFAMICONV = 'deps/superfamiconv.exe'
            PREPROC = 'deps/preproc.exe'
        else:
            WAV2AGB = 'deps/wav2agb'
            MID2AGB = 'deps/mid2agb'
            GBAGFX = 'deps/gbagfx'
            SUPERFAMICONV = 'deps/superfamiconv'
            PREPROC = 'deps/preproc'

        OBJCOPY = PREFIX + 'objcopy'

    SRC = './src'
    GRAPHICS = './graphics'
    ASSEMBLY = './asm'
    STRINGS = './strings'
    AUDIO = './audio'
    BUILD = './build'
    ASFLAGS = ['-mthumb', '-I', ASSEMBLY]
    LDFLAGS = ['-R', 'pokefirered.elf', 'OI.ld', '-T', 'linker.ld']
    CFLAGS = ['-x', 'c', '-mthumb', '-mthumb-interwork', '-mcpu=arm7tdmi', '-mtune=arm7tdmi',
            '-mlong-calls', '-march=armv4t', '-Wall', '-Wextra', '-Os', '-fira-loop-pressure', '-fipa-pta']
    CHARMAP = 'charmap.txt'

    class Master:
        @staticmethod
        def init():
            Master.printedCompilingImages = False
            Master.printedCompilingAudio = False
            Master.printedCompilingMusic = False

        @staticmethod
        def printCompilingImages():
            if not Master.printedCompilingImages:
                # Used to tell the script whether or not the string 'Compiling Images' has been printed
                Master.printedCompilingImages = True
                print('Compiling Images')

        @staticmethod
        def printCompilingAudio():
            if not Master.printedCompilingAudio:
                # Used to tell the script whether or not the string 'Compiling Audio' has been printed
                Master.printedCompilingAudio = True
                print('Compiling Audio')

        @staticmethod
        def printCompilingMusic():
            if not Master.printedCompilingMusic:
                # Used to tell the script whether or not the string 'Compiling Music' has been printed
                Master.printedCompilingMusic = True
                print('Compiling Music')


    def RunCommand(cmd: [str]):
        """Runs the command line command."""
        try:
            output = subprocess.check_output(cmd, stderr=subprocess.STDOUT)
            return output.decode()
        except subprocess.CalledProcessError as e:
            try:
                print(e.output.decode(), file=sys.stderr)
            except:
                print(e)
            sys.exit(1)


    def CreateOutputFile(fileName: str, newFileName: str) -> [str, bool]:
        """Helper function to produce object file output."""
        if not os.path.isfile(fileName):
            return [newFileName, False]

        fileExists = os.path.isfile(newFileName)

        # If the object file was created after the file was last modified
        if fileExists and os.path.getmtime(newFileName) > os.path.getmtime(fileName):
            return [newFileName, False]

        return [newFileName, True]


    def MakeGeneralOutputFile(fileName: str) -> [str, bool]:
        """Return hash of filename to use as object filename."""
        m = hashlib.md5()
        m.update(fileName.encode())
        newFileName = os.path.join(BUILD, m.hexdigest() + '.o')

        return CreateOutputFile(fileName, newFileName)

    def MakePreprocessedFile(fileName: str, isAsm: bool) -> [str, bool]:
        """Return a preprocessed filename for a given source file."""
        ext = '.ps' if isAsm else '.pc'

        # In case there's no extension, just assume that we should put the new extension at the end.
        lastDotIdx = len(fileName)

        # rindex throws an exception instead of just silently failing, for some reason.
        try:
            lastDotIdx = fileName.rindex('.')
        except: pass

        newFileName = fileName[:lastDotIdx] + ext

        return CreateOutputFile(fileName, newFileName)

    def MakeOutputAudioFile(assemblyFile: str) -> [str, bool]:
        """Return "SND_" + hash of filename to use as object filename."""
        objectFile = os.path.join(BUILD, 'SND_' + assemblyFile.split("Wav_")[1].split(".s")[0] + '.o')
        return CreateOutputFile(assemblyFile, objectFile)


    def MakeOutputMusicFile(assemblyFile: str) -> [str, bool]:
        """Return "MUS_" + hash of filename to use as object filename."""
        if sys.platform.startswith('win'):  # Windows
            objectFile = os.path.join(BUILD, 'MUS_'
                                    + assemblyFile.split('\\')[len(assemblyFile.split('\\')) - 1].split(".s")[0] + '.o')
        else:  # Linux, OSX, etc.
            objectFile = os.path.join(BUILD, 'MUS_'
                                    + assemblyFile.split('/')[len(assemblyFile.split('/')) - 1].split(".s")[0] + '.o')

        return CreateOutputFile(assemblyFile, objectFile)


    def DoMiddleManAssembly(originalFile: str, assemblyFile: str, flagFile: str, flags: [str],
                            cmd: [str], func, printingFunc, isMusic: bool) -> str:
        """Process assembly files generated by things like grit, wav2agb, or mid2agb."""
        objectFile = func(assemblyFile)[0]
        fileExists = os.path.isfile(objectFile)

        if fileExists \
                and os.path.getmtime(objectFile) > os.path.getmtime(originalFile) \
                and (flagFile == "" or os.path.getmtime(objectFile) > os.path.getmtime(flagFile)):
            # If the .o file was created after the original and flag file were last modified
            return objectFile
        else:  # The original file or the flag file were modified recently
            printingFunc()
            RunCommand(cmd)

        if isMusic:  # Try to update the voicegroup manually
            counter = 0
            lineToChange = ''
            with open(assemblyFile, 'r') as file:
                for line in file:
                    counter += 1
                    if '_grp,' in line:
                        lineToChange = line.split('voicegroup')[0]
                        break

            if flags != [] and lineToChange != '' and '-G' in flags:
                ChangeFileLine(assemblyFile, counter, lineToChange + flags[flags.index('-G') + 1] + '\n')

        regenerateObjectFile = func(assemblyFile)[1]
        if regenerateObjectFile is False:
            os.remove(assemblyFile)
            return objectFile  # No point in recompiling file

        cmd = [AS] + ASFLAGS + ['-c', assemblyFile, '-o', objectFile]
        RunCommand(cmd)
        os.remove(assemblyFile)
        return objectFile


    def ProcessAssembly(assemblyFile: str) -> str:
        """Assemble."""
        processedFile, reprocessFile = MakePreprocessedFile(assemblyFile, True)
        if reprocessFile is True:
            cmd = [PREPROC, assemblyFile, CHARMAP]
            content = RunCommand(cmd)

            with open(processedFile, 'w') as f:
                f.write(content)

        objectFile, regenerateObjectFile = MakeGeneralOutputFile(processedFile)
        if regenerateObjectFile is False:
            return objectFile  # No point in recompiling file

        try:
            print('Assembling %s' % processedFile)
            cmd = [AS] + ASFLAGS + ['-c', processedFile, '-o', objectFile]

            RunCommand(cmd)

        except FileNotFoundError:
            print('Error! The assembler could not be located.\n'
                + 'Are you sure you set up your path to devkitPro/devkitARM/bin correctly?')
            sys.exit(1)

        return objectFile


    def ProcessC(cFile: str) -> str:
        """Compile C."""
        processedFile, reprocessFile = MakePreprocessedFile(cFile, False)
        if reprocessFile is True:
            cmd = [PREPROC, cFile, CHARMAP]
            content = RunCommand(cmd)

            with open(processedFile, 'w') as f:
                f.write(content)

        objectFile, regenerateObjectFile = MakeGeneralOutputFile(processedFile)
        if regenerateObjectFile is False:
            return objectFile  # No point in recompiling file
        
        return ProcessCToObjectFile(processedFile, objectFile)


    def ProcessCToObjectFile(cFile: str, objectFile: str) -> str:
        try:
            print('Compiling %s' % cFile)
            cmd = [CC] + CFLAGS + ['-c', cFile, '-o', objectFile]
            RunCommand(cmd)

        except FileNotFoundError:
            print('Error! The C compiler could not be located.\n'
                + 'Are you sure you set up your path to devkitPro/devkitARM/bin correctly?')
            sys.exit(1)

        return objectFile


    def ProcessString(stringFile: str) -> str:
        """Build and assemble strings."""
        CharMap = "charmap.tbl"

        SpecialBuffers = {
            ".": ["B0"],
            "BUFFER": ["FD"],
            "ATTACKER": ["FD", "0F"],
            "TARGET": ["FD", "10"],
            "EFFECT_BANK": ["FD", "11"],
            "SCRIPTING_BANK": ["FD", "13"],
            "CURRENT_MOVE": ["FD", "14"],
            "LAST_ITEM": ["FD", "16"],
            "LAST_ABILITY": ["FD", "17"],
            "ATTACKER_ABILITY": ["FD", "18"],
            "TARGET_ABILITY": ["FD", "19"],
            "SCRIPTING_BANK_ABILITY": ["FD", "1A"],
            "TRAINER1_CLASS": ["FD", "1C"],
            "TRAINER1_NAME": ["FD", "1D"],
            "PLAYER_NAME": ["FD", "23"],
            "TARGET_NAME": ["FD", "3B"],
            "TARGET_PARTNER_NAME": ["FD", "3C"],
            "DEF_PREFIX_5": ["FD", "3D"],

            "PLAYER": ["FD", "01"],
            "BUFFER1": ["FD", "02"],
            "BUFFER2": ["FD", "03"],
            "BUFFER3": ["FD", "04"],
            "RIVAL": ["FD", "06"],

            "ARROW_UP": ["79"],
            "ARROW_DOWN": ["7A"],
            "ARROW_LEFT": ["7B"],
            "ARROW_RIGHT": ["7C"],

            "MAIN_COLOUR": ["FC", "01"],  # Takes 1 byte
            "WHITE": ["FC", "01", "01"],
            "BLACK": ["FC", "01", "02"],
            "GRAY": ["FC", "01", "03"],
            "RED": ["FC", "01", "04"],
            "ORANGE": ["FC", "01", "05"],
            "GREEN": ["FC", "01", "06"],
            "LIGHT_GREEN": ["FC", "01", "07"],
            "BLUE": ["FC", "01", "08"],
            "LIGHT_BLUE": ["FC", "01", "09"],
            "HIGHLIGHT": ["FC", "02"],  # Same as MAIN_COLOUR
            "SHADOW_COLOUR": ["FC", "03"],
            "COLOR_HIGHLIGHT_SHADOW": ["FC", "04"],  # Takes 3 bytes
            "PALETTE": ["FC", "05"],
            "SHRINK": ["FC", "06", "00"],
            "RESET_SIZE": ["FC", "07"],
            "PAUSE": ["FC", "08"],
            "PAUSE_UNTIL_PRESS": ["FC", "09"],
            "WAIT_SE": ["FC", "0A"],
            "PLAY_BGM": ["FC", "0B"],
            "ESCAPE": ["FC", "0C"],
            "SHIFT_RIGHT": ["FC", "0D"],
            "SHIFT_DOWN": ["FC", "0E"],
            "FILL_WINDOW": ["FC", "0F"],
            "PLAY_SE": ["FC", "10"],
            "CLEAR": ["FC", "11"],
            "SKIP": ["FC", "12"],
            "ALIGN": ["FC", "13"],
            "MIN_LETTER_SPACING": ["FC", "14"],
            "PAUSE_MUSIC": ["FC", "17"],
            "RESUME_MUSIC": ["FC", "18"],

            "A_BUTTON": ["F8", "00"],
            "B_BUTTON": ["F8", "01"],
            "L_BUTTON": ["F8", "02"],
            "R_BUTTON": ["F8", "03"],
            "START_BUTTON": ["F8", "04"],
            "SELECT_BUTTON": ["F8", "05"],
            "DPAD_UP": ["F8", "06"],
            "DPAD_DOWN": ["F8", "07"],
            "DPAD_LEFT": ["F8", "08"],
            "DPAD_RIGHT": ["F8", "09"],
            "DPAD_UP_DOWN": ["F8", "0A"],
            "DPAD_LEFT_RIGHT": ["F8", "0B"],
            "DPAD": ["F8", "0C"],

            "UP_ARROW_2": ["F9", "00"],
            "DOWN_ARROW_2": ["F9", "01"],
            "LEFT_ARROW_2": ["F9", "02"],
            "RIGHT_ARROW_2": ["F9", "03"],
            "PLUS": ["F9", "04"],
            "LV_2": ["F9", "05"],
            "PP": ["F9", "06"],
            "ID": ["F9", "07"],
            "NO": ["F9", "08"],
            "UNDERSCORE": ["F9", "09"],
            "CIRCLE_1": ["F9", "0A"],
            "CIRCLE_2": ["F9", "0B"],
            "CIRCLE_3": ["F9", "0C"],
            "CIRCLE_4": ["F9", "0D"],
            "CIRCLE_5": ["F9", "0E"],
            "CIRCLE_6": ["F9", "0F"],
            "CIRCLE_7": ["F9", "10"],
            "CIRCLE_8": ["F9", "11"],
            "CIRCLE_9": ["F9", "12"],
            "LEFT_PAREN": ["F9", "13"],
            "RIGHT_PAREN": ["F9", "14"],
            "CIRCLE_DOT": ["F9", "15"],
            "TRIANGLE": ["F9", "16"],
            "BIG_MULT_X": ["F9", "17"],

            "EMOJI_UNDERSCORE": ["F9", "D0"],
            "EMOJI_PIPE": ["F9", "D1"],
            "EMOJI_HIGHBAR": ["F9", "D2"],
            "EMOJI_TILDE": ["F9", "D3"],
            "EMOJI_LEFT_PAREN": ["F9", "D4"],
            "EMOJI_RIGHT_PAREN": ["F9", "D5"],
            "EMOJI_UNION": ["F9", "D6"],
            "EMOJI_GREATER_THAN": ["F9", "D7"],
            "EMOJI_LEFT_EYE": ["F9", "D8"],
            "EMOJI_RIGHT_EYE": ["F9", "D9"],
            "EMOJI_AT": ["F9", "DA"],
            "EMOJI_SEMICOLON": ["F9", "DB"],
            "EMOJI_PLUS": ["F9", "DC"],
            "EMOJI_MINUS": ["F9", "DD"],
            "EMOJI_EQUALS": ["F9", "DE"],
            "EMOJI_SPIRAL": ["F9", "DF"],
            "EMOJI_TONGUE": ["F9", "E0"],
            "EMOJI_TRIANGLE_OUTLINE": ["F9", "E1"],
            "EMOJI_ACUTE": ["F9", "E2"],
            "EMOJI_GRAVE": ["F9", "E3"],
            "EMOJI_CIRCLE": ["F9", "E4"],
            "EMOJI_TRIANGLE": ["F9", "E5"],
            "EMOJI_SQUARE": ["F9", "E6"],
            "EMOJI_HEART": ["F9", "E7"],
            "EMOJI_MOON": ["F9", "E8"],
            "EMOJI_NOTE": ["F9", "E9"],
            "EMOJI_BALL": ["F9", "EA"],
            "EMOJI_BOLT": ["F9", "EB"],
            "EMOJI_LEAF": ["F9", "EC"],
            "EMOJI_FIRE": ["F9", "ED"],
            "EMOJI_WATER": ["F9", "EE"],
            "EMOJI_LEFT_FIST": ["F9", "EF"],
            "EMOJI_RIGHT_FIST": ["F9", "F0"],
            "EMOJI_BIGWHEEL": ["F9", "F1"],
            "EMOJI_SMALLWHEEL": ["F9", "F2"],
            "EMOJI_SPHERE": ["F9", "F3"],
            "EMOJI_IRRITATED": ["F9", "F4"],
            "EMOJI_MISCHIEVOUS": ["F9", "F5"],
            "EMOJI_HAPPY": ["F9", "F6"],
            "EMOJI_ANGRY": ["F9", "F7"],
            "EMOJI_SURPRISED": ["F9", "F8"],
            "EMOJI_BIGSMILE": ["F9", "F9"],
            "EMOJI_EVIL": ["F9", "FA"],
            "EMOJI_TIRED": ["F9", "FB"],
            "EMOJI_NEUTRAL": ["F9", "FC"],
            "EMOJI_SHOCKED": ["F9", "FD"],
            "EMOJI_BIGANGER": ["F9", "FE"],
        }


        def StringFileConverter(fileName: str):
            stringToWrite = ".thumb\n.text\n.align 2\n\n"
            with open(fileName, 'r', encoding="utf-8") as file:
                maxLength = 0
                fillFF = False
                readingState = 0
                lineNum = 0
                definesDict = {}
                conditionals = []

                for line in file:
                    lineNum += 1
                    line = line.rstrip("\n\r")  # Remove only newline characters
                    if TryProcessFileInclusion(line, definesDict):
                        continue
                    if TryProcessConditionalCompilation(line, definesDict, conditionals):
                        continue
                    if line.strip() == "" or line[:2] == "//":  # Ignore blank lines and comment lines
                        continue
                    
                    if readingState == 0:  # Only when the file starts
                        line = line.strip()
                        if line[:6].upper() == "#ORG @" and line[6:] != "":
                            title = line[6:]
                            stringToWrite += ".global " + title + "\n" + title + ":\n"
                            readingState = 1
                        elif "MAX_LENGTH" in line and "=" in line:
                            try:
                                maxLength = int(line.split("=")[1])
                            except:
                                print('Error reading max length on line ' + str(lineNum) + ' in file: "' + fileName + '"')
                                sys.exit(0)
                        elif "FILL_FF" in line and "=" in line:
                            try:
                                fillFF = bool(line.split("=")[1])
                            except:
                                print('Error reading FF fill on line ' + str(lineNum) + ' in file: "' + fileName + '"')
                                sys.exit(0)
                        else:
                            print('Warning! Error on line ' + str(lineNum) + ' in file: "' + fileName + '"')
                            
                    elif readingState == 1:
                        if line[:6].upper() == "#ORG @" and line[6:] != "":
                            line = line.strip()
                            title = line[6:]
                            stringToWrite += ".global " + title + "\n" + title + ":\n"
                        else:
                            stringToWrite += ProcessString(line, lineNum, maxLength, fillFF)
                            stringToWrite += "0xFF\n\n"  # Only print line in everything went alright

            output = open(fileName.split(".string")[0] + '.s', 'w')  # Only open file once we know everything went okay.
            output.write(stringToWrite)
            output.close()


        def ProcessString(string: str, lineNum: int, maxLength=0, fillWithFF=False) -> str:
            charMap = PokeByteTableMaker()
            stringToWrite = ".byte "
            buffer = False
            escapeChar = False
            bufferChars = ""
            strLen = 0

            for char in string:
                if 0 < maxLength <= strLen:
                    print('Warning: The string "' + string + '" has exceeded the maximum length of '
                        + str(maxLength) + ' and has been truncated!')
                    break

                if buffer is True:
                    if char == ']':
                        buffer = False

                        if bufferChars in SpecialBuffers:
                            for bufferChar in SpecialBuffers[bufferChars]:
                                if 0 < maxLength <= strLen:  # End buffer in middle
                                    print('Warning: The string buffer "' + bufferChars + '" has exceeded the maximum length of '
                                        + str(maxLength) + ' and has been truncated!')
                                    break

                                stringToWrite += ("0x" + bufferChar + ", ")
                                strLen += 1

                        elif len(bufferChars) > 2:  # Unrecognized buffer
                            print('Warning: The string buffer "' + bufferChars + '" is not recognized!')
                            stringToWrite += "0x0, "  # Place whitespace where the buffer should have gone
                            strLen += 1
                        else:
                            stringToWrite += ("0x" + bufferChars + ", ")
                            strLen += 1

                        bufferChars = ""
                    else:
                        bufferChars += char

                elif escapeChar is True:
                    escapeChar = False
                    try:
                        stringToWrite += hex(charMap["\\" + char]) + ", "
                        strLen += 1

                    except KeyError:
                        print('Error parsing string: "' + string + '" (Line ' + str(lineNum) + ')')
                        sys.exit(0)

                else:
                    try:
                        stringToWrite += hex(charMap[char]) + ", "
                        strLen += 1

                    except KeyError:
                        if char == '[':
                            buffer = True
                        elif char == '\\':
                            escapeChar = True
                        elif char == '"':
                            stringToWrite += hex(charMap["\\" + char])
                            strLen += 1
                        else:
                            print('Error parsing string on line ' + str(lineNum) + ' at character "' + char + '".')
                            sys.exit(1)
            
            if strLen < maxLength and fillWithFF:
                while strLen < maxLength:
                    stringToWrite += "0xFF, "
                    strLen += 1

            return stringToWrite


        def PokeByteTableMaker():
            dictionary = {}
            with open(CharMap, 'r', encoding="utf-8") as file:
                for line in file:
                    if line.strip() != "/FF" and line.strip() != "":
                        if line[2] == '=' and line[3] != "":
                            try:
                                if line[3] == '\\':
                                    dictionary[line[3] + line[4]] = int(line.split('=')[0], 16)
                                else:
                                    dictionary[line[3]] = int(line.split('=')[0], 16)
                            except:
                                pass
                dictionary[' '] = 0
            return dictionary


        assemblyFile = stringFile.split('.string')[0] + '.s'
        objectFile = MakeGeneralOutputFile(assemblyFile)[0]
        fileExists = os.path.isfile(objectFile)

        if fileExists and os.path.getmtime(objectFile) > os.path.getmtime(stringFile):
            # If the .o file was created after the string file was last modified
            return objectFile

        print('Building Strings %s' % stringFile)
        StringFileConverter(stringFile)

        cmd = [AS] + ASFLAGS + ['-c', assemblyFile, '-o', objectFile]
        RunCommand(cmd)
        os.remove(assemblyFile)
        return objectFile


    def ProcessImage(imageFile: str):
        """Compile image."""
        bpp = os.path.dirname(imageFile)

        if '4bpp' in bpp:
            if '.png' in imageFile and '_Tiles' not in imageFile:
                # generate_png = [SUPERFAMICONV, '-M', 'gba', '-v', '--in-image', imageFile, '--out-tiles-image', imageFile.replace('.png', '_Tiles.png')]
                # RunCommand(generate_png)
                generate_4bpp = [GBAGFX, imageFile, imageFile.replace('.png', '.4bpp')]
                if not glob(imageFile.replace('.png', '.4bpp')):
                    RunCommand(generate_4bpp)
                generate_4bpp_lz = [GBAGFX, imageFile.replace('.png', '.4bpp'), imageFile.replace('.png', '.4bpp.lz')]
                if not glob(imageFile.replace('.png', '.4bpp.lz')):
                    RunCommand(generate_4bpp_lz)
                # generate_bin = [SUPERFAMICONV, '-M', 'gba', '-v', '--in-image', imageFile, '--out-map', imageFile.replace('.png', '.bin')]
                # RunCommand(generate_bin)
                # generate_bin_lz = [GBAGFX, imageFile.replace('.png', '.bin'), imageFile.replace('.png', '.bin.lz')]
                # RunCommand(generate_bin_lz)
        if '4bpp'in bpp or '8bpp'in bpp or '6bpp'in bpp:
            if '.png' in imageFile: # and '_Tiles' not in imageFile:
                generate_gbapal = [GBAGFX, imageFile, imageFile.replace('.png', '.gbapal')]
                if not glob(imageFile.replace('.png', '.gbapal')):
                    RunCommand(generate_gbapal)
                generate_gbapal_lz = [GBAGFX, imageFile.replace('.png', '.gbapal'), imageFile.replace('.png', '.gbapal.lz')]
                if not glob(imageFile.replace('.png', '.gbapal.lz')):
                    RunCommand(generate_gbapal_lz)
        else:
            print('Error: Folder not name a valid bpp type.')
            sys.exit(1)



    def ProcessAudio(audioFile: str) -> str:
        """Compile audio."""
        assemblyFile = audioFile.split('.wav')[0] + '.s'

        flags = []
        flagFile = audioFile.split('.wav')[0] + '_flags.txt'

        try:
            with open(flagFile, 'r') as file:
                line = file.readline()  # Only needs the first line
                flags = line.strip().split()
        except FileNotFoundError:
            flagFile = ""

        cmd = [WAV2AGB, audioFile, assemblyFile] + flags

        return DoMiddleManAssembly(audioFile, assemblyFile, flagFile, flags, cmd,
                                MakeOutputAudioFile, Master.printCompilingAudio, False)


    def ProcessMusic(midiFile: str) -> str:
        """Compile audio."""
        assemblyFile = midiFile.split('.mid')[0] + '.s'

        flags = []
        flagFile = midiFile.split('.mid')[0] + '_flags.txt'

        try:
            with open(flagFile, 'r') as file:
                line = file.readline()  # Only needs the first line
                flags = line.strip().split()
        except FileNotFoundError:
            pass

        cmd = [MID2AGB, midiFile, assemblyFile] + flags

        return DoMiddleManAssembly(midiFile, assemblyFile, flagFile, flags, cmd,
                                MakeOutputMusicFile, Master.printCompilingMusic, True)


    def LinkObjects(objects: itertools.chain) -> str:
        """Link objects into one binary."""
        linked = 'build/linked.o'
        cmd = [LD] + LDFLAGS + ['-o', linked] + list(filter(None, objects))
        RunCommand(cmd)
        return linked


    def Objcopy(binary: str):
        """Run the objcopy."""
        cmd = [OBJCOPY, '-O', 'binary', binary, 'build/output.bin']
        RunCommand(cmd)


    def RunGlob(globString: str, fn) -> map:
        """Glob recursively and run the processor function on each file in result."""
        if globString == '**/**/*.png' or globString == '**/**/*.bmp' or globString == '**/**/*.jpg':  # Search the GRAPHICS location
            directory = GRAPHICS
        elif globString == '**/*.s':
            directory = ASSEMBLY
        elif globString == '**/*.string':
            directory = STRINGS
        elif globString == '**/*.wav' or globString == '**/*.mid':
            directory = AUDIO
        else:
            directory = SRC

        if sys.version_info > (3, 4):
            try:
                files = glob(os.path.join(directory, globString), recursive=True)
                return map(fn, files)

            except TypeError:
                print('Error compiling. Please make sure Python has been updated to the latest version.')
                sys.exit(1)
        else:
            files = Path(directory).glob(globString)
            return map(fn, map(str, files))

    Master.init()
    startTime = datetime.now()
    globs = {
            '**/*.s': ProcessAssembly,
            '**/*.string': ProcessString,
            '**/**/*.png': ProcessImage,
            '**/**/*.bmp': ProcessImage,
            '**/**/*.jpg': ProcessImage,
            '**/*.wav': ProcessAudio,
            '**/*.mid': ProcessMusic,
            '**/*.c': ProcessC,
    }

    if sys.version_info.major >= 3 and sys.version_info.minor >= 8:
        print("Warning! Python 3.8 may not be able to build this engine.\nPlease downgrade to Python 3.7.4")

    # Create output directory
    try:
        os.makedirs(BUILD)
    except FileExistsError:
        pass

    try:
        # Gather source files and process them
        objects = itertools.starmap(RunGlob, globs.items())

        # Link and extract raw binary
        linked = LinkObjects(itertools.chain.from_iterable(objects))
        Objcopy(linked)

    except Exception as e:
        print("There was an error compiling the engine: {}".format(e))
        sys.exit(1)

    print('Built in ' + str(datetime.now() - startTime) + '.')

def InsertCode():
    OUTPUT_ROM = "output.gba"

    if sys.platform.startswith('win'):
        PathVar = os.environ.get('Path')
        Paths = PathVar.split(';')
        PATH = ''
        for candidatePath in Paths:
            if 'devkitARM' in candidatePath:
                PATH = candidatePath
                break
        if PATH == '':
            PATH = 'C://devkitPro//devkitARM//bin'
            if os.path.isdir(PATH) is False:
                print('Devkit not found.')
                sys.exit(1)

        PREFIX = 'arm-none-eabi-'
        OBJDUMP = os.path.join(PATH, PREFIX + 'objdump')
        NM = os.path.join(PATH, PREFIX + 'nm')

    else:  # Linux, OSX, etc.
        PREFIX = 'arm-none-eabi-'
        OBJDUMP = (PREFIX + 'objdump')
        NM = (PREFIX + 'nm')

    OUTPUT = 'build/output.bin'
    BYTE_REPLACEMENT = 'bytereplacement'
    HOOKS = 'hooks'
    REPOINTS = 'repoints'
    REPOINT_BYTES = 'repointbytes'
    GENERATED_REPOINTS = 'generatedrepoints'
    REPOINT_ALL = 'repointall'
    ROUTINE_POINTERS = 'routinepointers'
    FUNCTION_REWRITES = 'functionrewrites'
    EVENT_SCRIPTS = "eventscripts"
    SONGS = "songs"
    SPECIAL_INSERTS = 'special_inserts.asm'
    SPECIAL_INSERTS_OUT = 'build/special_inserts.bin'


    def ExtractPointer(byteList: [bytes]):
        pointer = 0
        for a in range(len(byteList)):
            pointer += (int(byteList[a])) << (8 * a)

        return pointer


    def GetTextSection() -> int:
        try:
            # Dump sections
            out = subprocess.check_output([OBJDUMP, '-t', 'build/linked.o'])
            lines = out.decode().split('\n')

            # Find text section
            text = filter(lambda x: x.strip().endswith('.text'), lines)
            section = (list(text))[0]

            # Get the offset
            offset = int(section.split(' ')[0], 16)
            return offset

        except:
            print("Error: The insertion process could not be completed.\n"
                + "The linker symbol file was not found. Most likely the compilation process was not completed.")
            sys.exit(1)


    def GetSymbols(subtract=0) -> {str: int}:
        out = subprocess.check_output([NM, 'build/linked.o'])
        lines = out.decode().split('\n')
        nonlocal offset_
        nonlocal offset__
        nonlocal bytes__
        nonlocal bytes____
        repointed = list()
        symbols = list()
        if os.path.isfile(REPOINT_BYTES):
            repointList = open(REPOINT_BYTES, 'r')
            repointListLines = repointList.readlines()

        ret = {}
        for line__ in range(len(repointListLines)):
            line_ = repointListLines[line__]
            if len(line_.split()) == 3:
                symbol, offset___, bytes_ = line_.split()
                symbols.append(symbol)
            if len(line_.split()) == 4:
                symbol, offset___, bytes_, replace_bytes = line_.split()
                symbols.append(symbol)
        for symbol_ in symbols:
            for line in lines:
                parts = line.strip().split()

                if len(parts) < 3:
                    continue

                if parts[1].lower() not in {'t', 'd'}:
                    continue
                
                offset = int(parts[0], 16)
                if (offset - OFFSET_TO_PUT - 0x08000000) > offset_:
                    offset_ = offset - OFFSET_TO_PUT - 0x08000000
                ret[parts[2]] = offset + bytes__ - subtract
                with open(OUTPUT, 'rb+') as binary:
                    for i in range(0, math.floor((offset - OFFSET_TO_PUT - 0x08000000) / 4)):
                        binary.seek(offset - subtract + (i * 4) + (offset - subtract) % 4)
                        bytes___ = hex(int.from_bytes(binary.read(4), byteorder=sys.byteorder)).replace('0x', '').zfill(8)
                        for line__ in range(len(repointListLines)):
                            line_ = repointListLines[line__]
                            if len(line_.split()) == 3:
                                symbol, offset___, bytes_ = line_.split()
                                if offset___ == bytes___ and symbol == symbol_ and symbol not in repointed:
                                    uh = offset_ + OFFSET_TO_PUT + 0x08000000 + bytes____
                                    bytes_ = int(bytes_, 16)
                                    bytes____ = bytes____ + bytes_
                                    binary.seek(offset - subtract + (i * 4) + (offset - subtract) % 4)
                                    binary.write(uh.to_bytes(4, 'little'))
                                    repointed.append(symbol)
        
        for line__ in range(len(repointListLines)):
            line_ = repointListLines[line__]
            if len(line_.split()) == 3:
                symbol, offset___, bytes_ = line_.split()
                offset___ = int(offset___, 16)
                bytes_ = int(bytes_, 16)
                ret[symbol] = OFFSET_TO_PUT + offset_ + bytes__ - subtract + 0x08000000
                bytes__ = bytes__ + bytes_
                with open(OUTPUT, 'rb+') as binary:
                    rom.seek(offset___ - 0x08000000)
                    binary.seek(offset_)
                    binary.write(rom.read(bytes_))
            if len(line_.split()) == 4:
                symbol, offset___, bytes_, replace_bytes = line_.split()
                offset___ = int(offset___, 16)
                bytes_ = int(bytes_, 16)
                ret[symbol] = OFFSET_TO_PUT + offset_ + bytes__ - subtract + 0x08000000
                bytes__ = bytes__ + bytes_
                with open(OUTPUT, 'rb+') as binary:
                    rom.seek(offset___ - 0x08000000)
                    binary.seek(offset_)
                    binary.write(rom.read(bytes_))
        for line in lines:
            parts = line.strip().split()

            if len(parts) < 3:
                continue

            if parts[1].lower() not in {'t', 'd'}:
                continue
            
            offset = int(parts[0], 16)
            if (offset - OFFSET_TO_PUT - 0x08000000) > offset_:
                offset_ = offset - OFFSET_TO_PUT - 0x08000000
            ret[parts[2]] = offset + bytes__ - subtract

        return ret


    def Hook(rom: _io.BufferedReader, space: int, hookAt: int, register=0):
        # Align 2
        if hookAt & 1:
            hookAt -= 1

        rom.seek(hookAt)

        register &= 7

        if hookAt % 4:
            data = bytes([0x01, 0x48 | register, 0x00 | (register << 3), 0x47, 0x0, 0x0])
        else:
            data = bytes([0x00, 0x48 | register, 0x00 | (register << 3), 0x47])

        space += 0x08000001
        data += (space.to_bytes(4, 'little'))
        rom.write(bytes(data))


    def FunctionWrap(rom: _io.BufferedReader, space: int, hookAt: int, numParams: int, isReturning: int):
        # Align 2
        if hookAt & 1:
            hookAt -= 1

        rom.seek(hookAt)
        numParams = numParams - 1

        if numParams < 4:
            data = bytes([0x10, 0xB5, 0x3, 0x4C, 0x0, 0xF0, 0x3, 0xF8, 0x10, 0xBC,
                        (isReturning + 1), 0xBC, (isReturning << 3), 0x47, 0x20, 0x47])
        else:
            k = numParams - 3
            data = bytes([0x10, 0xB5, 0x82, 0xB0])
            for i in range(k + 2):
                data += bytes([i + 2, 0x9C, i, 0x94])
            data += bytes([0x0, 0x9C, numParams - 1, 0x94, 0x1, 0x9C, numParams, 0x94, 0x2, 0xB0, k + 8, 0x4C,
                        0x0, 0xF0, (k << 1) + 13, 0xF8, 0x82, 0xB0, numParams, 0x9C, 0x1, 0x94, numParams - 1,
                        0x9C, 0x0, 0x94])

            for i in reversed(range(k + 2)):
                data += bytes([i, 0x9C, i+2, 0x94])
            data += bytes([0x2, 0xB0, 0x10, 0xBC, isReturning + 1, 0xBC, isReturning << 3, 0x47, 0x20, 0x47])

        space += 0x08000001
        data += (space.to_bytes(4, 'little'))
        rom.write(bytes(data))


    def Repoint(rom: _io.BufferedReader, space: int, repointAt: int, slideFactor=0):
        rom.seek(repointAt)

        space += (0x08000000 + slideFactor)
        data = (space.to_bytes(4, 'little'))
        rom.write(bytes(data))


    def RepointBytes(rom: _io.BufferedReader, space: int, repointAt: int, bytes_: int, replace_bytes: bool):
        rom.seek(repointAt)

        data = (rom.read(bytes_))
        rom.seek(space)
        rom.write(bytes(data))
        if replace_bytes:
            rom.seek(repointAt)
            rom.write(b'\xFF' * bytes_)


    def RealRepoint(sourceRom: _io.BufferedReader, targetRom: _io.BufferedReader, offsetTuples: [(int, int, str)], endInsertOffset):
        pointerList = []
        pointerDict = {}
        for tup in offsetTuples:  # Format is (Double Pointer, New Pointer, Symbol)
            offset = tup[0]
            sourceRom.seek(offset)
            pointer = ExtractPointer(sourceRom.read(4))
            pointerList.append(pointer)
            pointerDict[pointer] = (tup[1] + 0x08000000, tup[2])

        offset = 0
        offsetList = []

        while offset < 0xFFFFFD:
            if OFFSET_TO_PUT <= offset < endInsertOffset:  # Skip insert area
                offset = endInsertOffset
                while offset % 4 != 0:  # End insert offset is not divisible by 4
                    offset += 1  # Make divisible by 4
                continue

            sourceRom.seek(offset)
            word = ExtractPointer(sourceRom.read(4))
            targetRom.seek(offset)

            for pointer in pointerList:
                if word == pointer:
                    offsetList.append((offset, pointerDict[pointer][1]))
                    targetRom.write(bytes(pointerDict[pointer][0].to_bytes(4, 'little')))
                    break

            offset += 4

        return offsetList


    def ReplaceBytes(rom: _io.BufferedReader, offset: int, data: str):
        ar = offset
        words = data.split()
        for i in range(0, len(words)):
            rom.seek(ar)
            intByte = int(words[i], 16)
            rom.write(bytes(intByte.to_bytes(1, 'big')))
            ar += 1


    startTime = datetime.now()
    offset_ = 0
    offset__ = 0
    bytes__ = 0
    bytes____ = 0

    try:
        shutil.copyfile(SOURCE_ROM, OUTPUT_ROM)
    except FileNotFoundError:
        print('Error: Insertion could not be completed.\n'
              + 'Could not find source rom: "' + SOURCE_ROM + '".\n'
              + 'Please make sure a rom with this name exists in the root.')
        sys.exit(1)
    except PermissionError:
        print('Error: Insertion could not be completed.\n'
              + '"' + OUTPUT_ROM + '" is currently in use by another application.'
              + '\nPlease free it up before trying again.')
        sys.exit(1)

    with open(OUTPUT_ROM, 'rb+') as rom:
        print("Inserting code.")
        with open(OUTPUT, 'rb') as binary:
            endInsertOffset = OFFSET_TO_PUT + os.path.getsize(OUTPUT)
        table = GetSymbols(GetTextSection())
        rom.seek(OFFSET_TO_PUT)
        with open(OUTPUT, 'rb') as binary:
            endInsertOffset = endInsertOffset + bytes__
            rom.write(binary.read())
            binary.close()

        # Adjust symbol table
        for entry in table:
            table[entry] += OFFSET_TO_PUT

        # Deal with en masse repoints
        symbolsRepointed = set()
        if os.path.isfile(GENERATED_REPOINTS):
            with open(GENERATED_REPOINTS, 'r') as repointList:
                for line in repointList:
                    if line.strip().startswith('#') or line.strip() == '':
                        continue

                    symbol, address = line.split()
                    offset = int(address)
                    try:
                        code = table[symbol]
                    except KeyError:
                        print('Symbol missing:', symbol)
                        continue

                    symbolsRepointed.add(symbol)
                    Repoint(rom, code, offset)

        else:
            with open(GENERATED_REPOINTS, 'w') as repointList:
                repointList.write('##This is a generated file at runtime. Do not modify it!\n')

        if os.path.isfile(REPOINT_ALL):
            offsetsToRepointTogether = []
            with open(REPOINT_ALL, 'r') as repointList:
                definesDict = {}
                conditionals = []
                for line in repointList:
                    if TryProcessFileInclusion(line, definesDict):
                        continue
                    if TryProcessConditionalCompilation(line, definesDict, conditionals):
                        continue
                    if line.strip().startswith('#') or line.strip() == '':
                        continue

                    symbol, address = line.split()
                    offset = int(address, 16) - 0x08000000

                    if symbol in symbolsRepointed:
                        continue

                    try:
                        code = table[symbol]
                    except KeyError:
                        print('Symbol missing:', symbol)
                        continue
                    offsetsToRepointTogether.append((offset, code, symbol))

                if offsetsToRepointTogether != []:
                    with open(SOURCE_ROM, 'rb') as sourceRom: # Repoint from source rom so new data doesn't accidentally get repointed
                        offsets = RealRepoint(sourceRom, rom, offsetsToRepointTogether, endInsertOffset) # Format is [(offset, symbol), ...]

                        output = open(GENERATED_REPOINTS, 'a')
                        for tup in offsets:
                            output.write(tup[1] + ' ' + str(tup[0]) + '\n')
                        output.close()

        # Do Special Inserts - Before bytereplacement!
        if os.path.isfile(SPECIAL_INSERTS) and os.path.isfile(SPECIAL_INSERTS_OUT):
            with open(SPECIAL_INSERTS, 'r') as file:
                offsetList = []
                for line in file:
                    if line.strip().startswith('.org '):
                        offsetList.append(int(line.split('.org ')[1].split(',')[0], 16))

                offsetList.sort()

            with open(SPECIAL_INSERTS_OUT, 'rb') as binFile:
                for offset in offsetList:
                    originalOffset = offset
                    dataList = ""

                    if offsetList.index(offset) == len(offsetList) - 1:
                        while True:
                            try:
                                binFile.seek(offset)
                                dataList += hex(binFile.read(1)[0]) + ' '
                            except IndexError:
                                break

                            offset += 1
                    else:
                        binFile.seek(offset)
                        word = ExtractPointer(binFile.read(4))

                        while word != 0xFFFFFFFF:
                            binFile.seek(offset)
                            dataList += hex(binFile.read(1)[0]) + ' '
                            offset += 1

                            if offset in offsetList:  # Overlapping data
                                break

                            word = ExtractPointer(binFile.read(4))

                    ReplaceBytes(rom, originalOffset, dataList.strip())

        # Insert byte changes
        if os.path.isfile(BYTE_REPLACEMENT):
            with open(BYTE_REPLACEMENT, 'r') as replacelist:
                definesDict = {}
                conditionals = []
                for line in replacelist:
                    if TryProcessFileInclusion(line, definesDict):
                        continue
                    if TryProcessConditionalCompilation(line, definesDict, conditionals):
                        continue
                    if line.strip().startswith('#') or line.strip() == '':
                        continue
 
                    offset = int(line[:8], 16) - 0x08000000
                    try:
                        ReplaceBytes(rom, offset, line[9:].strip())
                    except ValueError: #Try loading from the defines dict if unrecognizable character
                        newNumber = definesDict[line[9:].strip()]
                        try:
                            newNumber = int(newNumber)
                        except ValueError:
                            newNumber = int(newNumber, 16)

                        newNumber = str(hex(newNumber)).split('0x')[1]
                        ReplaceBytes(rom, offset, newNumber) 

        # Read hooks from a file
        if os.path.isfile(HOOKS):
            with open(HOOKS, 'r') as hookList:
                definesDict = {}
                conditionals = []
                for line in hookList:
                    if TryProcessFileInclusion(line, definesDict):
                        continue
                    if TryProcessConditionalCompilation(line, definesDict, conditionals):
                        continue
                    if line.strip().startswith('#') or line.strip() == '':
                        continue

                    symbol, address, register = line.split()
                    offset = int(address, 16) - 0x08000000
                    try:
                        code = table[symbol]
                    except KeyError:
                        print('Symbol missing:', symbol)
                        continue

                    Hook(rom, code, offset, int(register))

        # Read repoints from a file
        if os.path.isfile(REPOINTS):
            with open(REPOINTS, 'r') as repointList:
                definesDict = {}
                conditionals = []
                for line in repointList:
                    if TryProcessFileInclusion(line, definesDict):
                        continue
                    if TryProcessConditionalCompilation(line, definesDict, conditionals):
                        continue
                    if line.strip().startswith('#') or line.strip() == '':
                        continue

                    if len(line.split()) == 2:
                        symbol, address = line.split()
                        offset = int(address, 16) - 0x08000000
                        try:
                            code = table[symbol]
                        except KeyError:
                            print('Symbol missing:', symbol)
                            continue

                        Repoint(rom, code, offset)

                    if len(line.split()) == 3:
                        symbol, address, slide = line.split()
                        offset = int(address, 16) - 0x08000000
                        try:
                            code = table[symbol]
                        except KeyError:
                            print('Symbol missing:', symbol)
                            continue

                        Repoint(rom, code, offset, int(slide))

        if os.path.isfile(REPOINT_BYTES):
            with open(REPOINT_BYTES, 'r') as repointList:
                definesDict = {}
                conditionals = []
                for line in repointList:
                    if TryProcessFileInclusion(line, definesDict):
                        continue
                    if TryProcessConditionalCompilation(line, definesDict, conditionals):
                        continue
                    if line.strip().startswith('#') or line.strip() == '':
                        continue

                    if len(line.split()) == 3:
                        symbol, address, bytes_ = line.split()
                        offset = int(address, 16) - 0x08000000
                        bytes_ = int(bytes_, 16)
                        try:
                            code = table[symbol]
                        except KeyError:
                            print('Symbol missing:', symbol)
                            continue

                        RepointBytes(rom, code, offset, bytes_, False)
                    
                    if len(line.split()) == 4:
                        symbol, address, bytes_, replace_bytes = line.split()
                        offset = int(address, 16) - 0x08000000
                        bytes_ = int(bytes_, 16)
                        try:
                            code = table[symbol]
                        except KeyError:
                            print('Symbol missing:', symbol)
                            continue

                        RepointBytes(rom, code, offset, bytes_, replace_bytes)

        # Read routine repoints from a file
        if os.path.isfile(ROUTINE_POINTERS):
            with open(ROUTINE_POINTERS, 'r') as pointerlist:
                definesDict = {}
                conditionals = []
                for line in pointerlist:
                    if TryProcessFileInclusion(line, definesDict):
                        continue
                    if TryProcessConditionalCompilation(line, definesDict, conditionals):
                        continue
                    if line.strip().startswith('#') or line.strip() == '':
                        continue

                    symbol, address = line.split()
                    offset = int(address, 16) - 0x08000000
                    try:
                        code = table[symbol]
                    except KeyError:
                        print('Symbol missing:', symbol)
                        continue

                    Repoint(rom, code, offset, 1)

        # Read routine rewrite wrapper from a file
        if os.path.isfile(FUNCTION_REWRITES):
            with open(FUNCTION_REWRITES, 'r') as frwlist:
                definesDict = {}
                conditionals = []
                for line in frwlist:
                    if TryProcessFileInclusion(line, definesDict):
                        continue
                    if TryProcessConditionalCompilation(line, definesDict, conditionals):
                        continue
                    if line.strip().startswith('#') or line.strip() == '':
                        continue

                    symbol, address, numParams, isReturning = line.split()
                    offset = int(address, 16) - 0x08000000
                    try:
                        code = table[symbol]
                    except KeyError:
                        print('Symbol missing:', symbol)
                        continue

                    FunctionWrap(rom, code, offset, int(numParams), int(isReturning))

        # Insert Event Scripts
        if os.path.isfile(EVENT_SCRIPTS):
            definesDict = {}

            mapHeaders = {}  # For signpost events
            npcTables = {}  # For people events
            tileTables = {}  # For script tiles
            signTables = {}  # For signpost events

            npcCounts = {}  # For people events
            tileCounts = {}  # For script tiles
            signCounts = {}  # For signpost events

            conditionals = []
            rom.seek(0x5524C)
            mapBanksHeader = ExtractPointer(rom.read(4)) - 0x08000000

            with open(EVENT_SCRIPTS, 'r') as file:
                for i, line in enumerate(file):
                    if TryProcessFileInclusion(line, definesDict):
                        continue
                    if TryProcessConditionalCompilation(line, definesDict, conditionals):
                        continue
                    if line.strip().startswith('#') or line.strip() == '':
                        continue

                    try:
                        eventId = -1  # Reset just in case of error
                        if len(line.split()) == 4 or len(line.split()) == 5:
                            if len(line.split()) == 5:
                                eventType, mapBank, mapNum, eventId, symbol = line.split()
                                eventId = int(eventId)
                            else:  # 4
                                eventType, mapBank, mapNum, symbol = line.split()

                            eventType = eventType.lower()
                            mapBank = int(mapBank)
                            mapNum = int(mapNum)
                            dictId = (mapBank << 8) | mapNum

                            if dictId not in mapHeaders:
                                rom.seek(mapBanksHeader + mapBank * 4)
                                mapBankHeader = ExtractPointer(rom.read(4)) - 0x08000000
                                if mapBankHeader == (0xF7F7F7F7 - 0x08000000):
                                    continue  # Garbage map bank header
                                rom.seek(mapBankHeader + mapNum * 4)
                                mapHeader = ExtractPointer(rom.read(4)) - 0x08000000
                                if mapHeader == (0xF7F7F7F7 - 0x08000000):
                                    continue  # Garbage map header
                                mapHeaders[dictId] = mapHeader  # Store for later
                            else:
                                mapHeader = mapHeaders[dictId]

                            if eventType == "map":
                                offset = mapHeader + 0x8
                            elif eventType == "npc" or eventType == "trainer" or eventType == "item":
                                if eventId < 0:
                                    raise(OSError)
                                if dictId not in npcTables:
                                    rom.seek(mapHeader + 0x4)
                                    eventHeader = ExtractPointer(rom.read(4)) - 0x08000000
                                    rom.seek(eventHeader)
                                    npcCount = int(rom.read(1)[0])
                                    rom.seek(eventHeader + 0x4)
                                    npcTable = ExtractPointer(rom.read(4)) - 0x08000000
                                    npcTables[dictId] = npcTable  # Store for later
                                    npcCounts[dictId] = npcCount  # Store for later
                                else:
                                    npcTable = npcTables[dictId]
                                    npcCount = npcCounts[dictId]

                                # Check if valid npc
                                if eventId >= npcCount:
                                    print("Errror! NPC id {} exceeds the count of {} on line {}: {}".format(eventId, npcCount, i, line.strip()))
                                    continue

                                # Check shortcut npcs and modify symbol
                                if eventType == "trainer":
                                    symbol = "EventScript_" + symbol
                                elif eventType == "item":
                                    symbol = "ItemFindScript_" + symbol

                                length = 0x18  # Length of one entry
                                offset = npcTable + eventId * 0x18 + 0x10

                            elif eventType == "tile":
                                if eventId < 0:
                                    raise(OSError)
                                if dictId not in tileTables:
                                    rom.seek(mapHeader + 0x4)
                                    eventHeader = ExtractPointer(rom.read(4)) - 0x08000000
                                    rom.seek(eventHeader + 0xC)
                                    tileTable = ExtractPointer(rom.read(4)) - 0x08000000
                                    tileTables[dictId] = tileTable  # Store for later
                                else:
                                    tileTable = tileTables[dictId]
                                length = 0x10  # Length of one entry
                                offset = tileTable + eventId * length + 0xC

                            elif eventType == "sign":
                                if eventId < 0:
                                    raise(OSError)
                                if dictId not in signTables:
                                    rom.seek(mapHeader + 0x4)
                                    eventHeader = ExtractPointer(rom.read(4)) - 0x08000000
                                    rom.seek(eventHeader + 0x10)
                                    signTable = ExtractPointer(rom.read(4)) - 0x08000000
                                    signTables[dictId] = signTable  # Store for later
                                else:
                                    signTable = signTables[dictId]
                                length = 0xC  # Length of one entry
                                offset = signTable + eventId * length + 0x8

                            else:
                                print("Unknown event type \"{}\"!".format(eventType))
                                continue

                            if symbol in definesDict:
                                symbol = definesDict[symbol]

                            try:
                                code = table[symbol]
                            except KeyError:
                                try:
                                    code = int(symbol, 16)  # If script offset was written in hex
                                except ValueError:
                                    print('Symbol missing:', symbol)
                                    continue

                            Repoint(rom, code, offset)
                    except OSError:
                        print("There was an error inserting the event script on line {}: {}".format(i, line.strip()))

        # Insert Song Pointers
        if os.path.isfile(SONGS):
            rom.seek(0x1DD11C)  # m4aSongNumStart
            songTable = ExtractPointer(rom.read(4)) - 0x08000000

            with open(SONGS, "r") as file:
                for i, line in enumerate(file):
                    if TryProcessFileInclusion(line, definesDict):
                        continue
                    if TryProcessConditionalCompilation(line, definesDict, conditionals):
                        continue
                    if line.strip().startswith('#') or line.strip() == '':
                        continue

                    try:
                        lineList = line.split()
                        try:
                            songId = int(lineList[0])
                        except ValueError:
                            songId = int(lineList[0], 16)  # Hex
                        song = lineList[1]
                        offset = songTable + songId * 8

                        try:
                                code = table[song]
                        except KeyError:
                            try:
                                code = int(song, 16)  # If script offset was written in hex
                            except ValueError:
                                print('Symbol missing:', song)
                                continue

                        Repoint(rom, code, offset)
                    except:
                        print("There was an error inserting the song on line {}: {}".format(i, line.strip()))

        width = max(map(len, table.keys())) + 1
        if os.path.isfile('offsets.ini'):
            offsetIni = open('offsets.ini', 'r+')
        else:
            offsetIni = open('offsets.ini', 'w')

        offsetIni.truncate()
        for key in sorted(table.keys()):
            fstr = ('{:' + str(width) + '} {:08X}')
            offsetIni.write(fstr.format(key + ':', table[key] + 0x08000000) + '\n')
        offsetIni.close()

        print('Inserted in ' + str(datetime.now() - startTime) + '.')


def main():
    try:
        with open(SOURCE_ROM, 'rb+') as rom:
            offset = OFFSET_TO_PUT

            EditLinker(offset)
            BuildCode()
            InsertCode()
            rom.close()

    except FileNotFoundError:
        print('Error: Could not find source rom: "' + SOURCE_ROM + '".\n'
              + 'Please make sure a rom with this name exists in the root.')


if __name__ == '__main__':
    main()