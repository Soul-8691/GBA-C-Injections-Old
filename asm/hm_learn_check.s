.align 2
.thumb

HMLearnCheck:
push {r0-r5, lr}
mov r5, #0x0

loopback:
ldr r0, =(0x2024284) /* Player's party in RAM */
mov r2, #0x64
mov r1, r5
mul r1, r1, r2
add r0, r0, r1
mov r1, #0xB
ldr r3, =(0x803FBE8 +1) /* Pokemon decrypter */
bl linker

ldr r3, =(gTeachableLearnsets) /* TM Compatibility table */
lsl r0, r0, #0x2
add r3, r0, r3
ldr r2, [r3]
ldr r1, =(0x20370D0) /* Var 0x800D in RAM */
ldrb r0, [r1]
@mov r3, r0
@and r3, r2, r3

fuckidk:
ldrh r3, [r2]
cmp r3, r0
beq end
cmp r3, r1
beq endfail
add r2, #2
mov r1, #0xFF
lsl r1, #8
add r1, #0xFF
b fuckidk

ldr r3, =(0x2024029) /* Player's team size */
ldrb r3, [r3]
add r5, r5, #0x1
cmp r5, r3
beq endfail
b loopback

end:
strb r5, [r1]
pop {r0-r5, pc}

endfail:
mov r5, #0x6
strb r5, [r1]
pop {r0-r5, pc}

linker:
bx r3

.text
.thumb
.align 2

.include "xse_commands.s"
.include "xse_defines.s"

EventScript_CutTree_:
    special 0x187
    compare LASTRESULT 0x2
    if equal _goto snippet1
    lockall
    setvar LASTRESULT 0xF
    callasm HMLearnCheck+1
    compare LASTRESULT 0x6
    if equal _goto snippet2
    setanimation 0x0 LASTRESULT
    bufferpartypokemon 0x0 LASTRESULT
    bufferattack 0x1 0xF
    msgbox string1 MSG_YESNO
    compare LASTRESULT 0x0
    if equal _goto snippet3
    msgbox string2 MSG_KEEPOPEN
    closeonkeypress
    doanimation 0x2
    waitstate
    goto snippet4

snippet1:
    release
    end

snippet2:
    msgbox string3 MSG_SIGN
    releaseall
    end

snippet3:
    closeonkeypress
    releaseall
    end

snippet4:
    applymovement LASTTALKED move1
    waitmovement 0x0
    hidesprite LASTTALKED
    releaseall
    end

move1:
    .byte 0x69, 0xFE
