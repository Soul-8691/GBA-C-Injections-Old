import re
f = open('output.txt', 'w', encoding='utf8')

f.write('const u16 *const gLevelUpLearnsets[NUM_SPECIES] =\n{\n')
mons = []
for mon in data.pokemon.names:
    species_name = mon.name
    if species_name not in mons:
        f.write('\t[SPECIES_' + re.sub('[^0-9a-zA-Z]+', '', species_name).upper() + '] = s' + re.sub('[^0-9a-zA-Z]+', '', species_name) + 'LevelUpLearnset,\n')
    else:
        f.write('\t[SPECIES_' + re.sub('[^0-9a-zA-Z]+', '', species_name).upper() + '_' + str(mons.count(species_name) + 1) + '] = s' + re.sub('[^0-9a-zA-Z]+', '', species_name) + 'LevelUpLearnset,\n')
    mons.append(species_name)
f.close()

f.write('const u8 gSpeciesNames[][POKEMON_NAME_LENGTH + 1] =\n{\n')
mons = []
for mon in data.pokemon.names:
    species_name = mon.name
    if species_name not in mons:
        f.write('\t[SPECIES_' + re.sub('[^0-9a-zA-Z]+', '', species_name).upper() + '] = _("' + species_name + '"),\n')
    else:
        f.write('\t[SPECIES_' + re.sub('[^0-9a-zA-Z]+', '', species_name).upper() + '_' + str(mons.count(species_name) + 1) + '] = _("' + species_name + '"),\n')
    mons.append(species_name)
f.close()

f.write('const u8 *const gMonIconTable[] =\n{\n')
mons = []
for mon in data.pokemon.names:
    species_name = mon.name
    if species_name not in mons:
        f.write('\t[SPECIES_' + re.sub('[^0-9a-zA-Z]+', '', species_name).upper() + '] = gMonIcon_' + re.sub('[^0-9a-zA-Z]+', '', species_name) + ',\n')
    else:
        f.write('\t[SPECIES_' + re.sub('[^0-9a-zA-Z]+', '', species_name).upper() + '_' c + '] = gMonIcon_' + re.sub('[^0-9a-zA-Z]+', '', species_name) + str(mons.count(species_name) + 1) + ',\n')
    mons.append(species_name)
f.close()

mons = []
counter = 0
for mon in data.pokemon.names:
    if counter > 251 and counter < 277:
        counter = 277
    if counter > 411 and counter < 440:
        counter = 440
    species_name = mon.name
    if species_name not in mons:
        f.write('const u8 gMonIcon_' + re.sub('[^0-9a-zA-Z]+', '', species_name) + '[] = INCBIN_U8("graphics/4bpp/pokemon/' + str(counter) + '.4bpp")\n')
    else:
        f.write('const u8 gMonIcon_' + re.sub('[^0-9a-zA-Z]+', '', species_name) + str(mons.count(species_name) + 1) + '[] = INCBIN_U8("graphics/4bpp/pokemon/' + str(counter) + '.4bpp")\n')
    mons.append(species_name)
    counter = counter + 1
f.close()

mons = []
for mon in data.pokemon.names:
    if counter > 251 and counter < 277:
        counter = 277
    if counter > 411 and counter < 440:
        counter = 440
    species_name = mon.name
    if species_name not in mons:
        f.write('extern const u8 gMonIcon_' + re.sub('[^0-9a-zA-Z]+', '', species_name) + '[];\n')
    else:
        f.write('extern const u8 gMonIcon_' + re.sub('[^0-9a-zA-Z]+', '', species_name) + str(mons.count(species_name) + 1) + '[];\n')
    mons.append(species_name)
f.close()

mons = []
counter = 0
for mon in data.pokemon.names:
    if counter > 251 and counter < 277:
        counter = 277
    if counter > 411 and counter < 440:
        counter = 440
    species_name = mon.name
    if species_name not in mons:
        f.write('const u32 gMonPalette_' + re.sub('[^0-9a-zA-Z]+', '', species_name) + '[] = INCBIN_U8("graphics/4bpp/pokemon/' + str(counter) + '.gbapal.lz")\n')
    else:
        f.write('const u32 gMonPalette_' + re.sub('[^0-9a-zA-Z]+', '', species_name) + str(mons.count(species_name) + 1) + '[] = INCBIN_U8("graphics/4bpp/pokemon/' + str(counter) + '.gbapal.lz")\n')
    mons.append(species_name)
    counter = counter + 1
f.close()

f.write('const struct CompressedSpritePalette gMonPaletteTable[] =\n{\n')
mons = []
for mon in data.pokemon.names:
    species_name = mon.name
    if species_name not in mons:
        f.write('\tSPECIES_PAL(' + re.sub('[^0-9a-zA-Z]+', '', species_name).upper() + ', gMonPalette_' + re.sub('[^0-9a-zA-Z]+', '', species_name) + '),\n')
    else:
        f.write('\tSPECIES_PAL(' + re.sub('[^0-9a-zA-Z]+', '', species_name).upper() + '_' + str(mons.count(species_name) + 1) + ', gMonPalette_' + re.sub('[^0-9a-zA-Z]+', '', species_name) + str(mons.count(species_name) + 1) + '),\n')
    mons.append(species_name)
f.close()

mons = []
for mon in data.pokemon.names:
    if counter > 251 and counter < 277:
        counter = 277
    if counter > 411 and counter < 440:
        counter = 440
    species_name = mon.name
    if species_name not in mons:
        f.write('extern const u32 gMonPalette_' + re.sub('[^0-9a-zA-Z]+', '', species_name) + '[];\n')
    else:
        f.write('extern const u32 gMonPalette_' + re.sub('[^0-9a-zA-Z]+', '', species_name) + str(mons.count(species_name) + 1) + '[];\n')
    mons.append(species_name)
f.close()

mons = []
counter = 0
for mon in data.pokemon.names:
    if counter > 251 and counter < 277:
        counter = 277
    if counter > 411 and counter < 440:
        counter = 440
    species_name = mon.name
    if species_name not in mons:
        f.write('const u32 gMonFrontPic_' + re.sub('[^0-9a-zA-Z]+', '', species_name) + '[] = INCBIN_U32("graphics/4bpp/pokemon/front/' + str(counter) + '.4bpp.lz")\n')
    else:
        f.write('const u32 gMonFrontPic_' + re.sub('[^0-9a-zA-Z]+', '', species_name) + str(mons.count(species_name) + 1) + '[] = INCBIN_U32("graphics/4bpp/pokemon/front/' + str(counter) + '.4bpp.lz")\n')
    mons.append(species_name)
    counter = counter + 1
f.close()

f.write('const struct CompressedSpriteSheet gMonFrontPicTable[] =\n{\n')
mons = []
for mon in data.pokemon.names:
    species_name = mon.name
    if species_name not in mons:
        f.write('\tSPECIES_SPRITE(' + re.sub('[^0-9a-zA-Z]+', '', species_name).upper() + ', gMonFrontPic_' + re.sub('[^0-9a-zA-Z]+', '', species_name) + '),\n')
    else:
        f.write('\tSPECIES_SPRITE(' + re.sub('[^0-9a-zA-Z]+', '', species_name).upper() + '_' + str(mons.count(species_name) + 1) + ', gMonFrontPic_' + re.sub('[^0-9a-zA-Z]+', '', species_name) + str(mons.count(species_name) + 1) + '),\n')
    mons.append(species_name)
f.close()

mons = []
for mon in data.pokemon.names:
    if counter > 251 and counter < 277:
        counter = 277
    if counter > 411 and counter < 440:
        counter = 440
    species_name = mon.name
    if species_name not in mons:
        f.write('extern const u32 gMonFrontPic_' + re.sub('[^0-9a-zA-Z]+', '', species_name) + '[];\n')
    else:
        f.write('extern const u32 gMonFrontPic_' + re.sub('[^0-9a-zA-Z]+', '', species_name) + str(mons.count(species_name) + 1) + '[];\n')
    mons.append(species_name)
f.close()

f.write('const u8 gMonIconPaletteIndices[] =\n{\n')
mons = []
for mon_index in range(len(data.pokemon.names)):
    species_name = data.pokemon.names[mon_index].name
    if species_name not in mons:
        f.write('\t[SPECIES_' + re.sub('[^0-9a-zA-Z]+', '', species_name).upper() + '] = ' + str(data.pokemon.info[mon_index].iconpal.index) + ',\n')
    else:
        f.write('\t[SPECIES_' + re.sub('[^0-9a-zA-Z]+', '', species_name).upper() + '_' + str(mons.count(species_name) + 1) + '] = ' + str(data.pokemon.info[mon_index].iconpal.index) + ',\n')
    mons.append(species_name)
f.close()