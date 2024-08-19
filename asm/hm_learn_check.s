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

fuckidk:
ldrh r3, [r2]
cmp r3, r0
beq end
add r2, #2
mov r1, #0xFF
lsl r1, #8
add r1, #0xFF
cmp r3, r1
beq next
b fuckidk

next:
ldr r3, =(0x2024029) /* Player's team size */
ldrb r3, [r3]
add r5, r5, #0x1
cmp r5, r3
beq endfail
b loopback

end:
ldr r1, =(0x20370D0) /* Var 0x800D in RAM */
strb r5, [r1]
pop {r0-r5, pc}

endfail:
mov r5, #0x6
pop {r0-r5, pc}

linker:
bx r3

.text
.thumb
.align 2

.text
.align 2
.thumb
.thumb_func

HMFlyFromMenu1:
	push {lr}
	ldr r0, .VAR @set paramaters for special
	mov r1, #0x2
	strb r0, [r1]
	ldr r1, =(0x80C4EF8 +1)
	bl CALLER
	b END

NORMALMAP:
	ldr r1, =(0x80A1CC0 +1)
	bl CALLER
	b END

CALLER:
	bx r1

END:
	pop {pc}
	

.align 2
.VAR:
	.word 0x020270B4 + (0x8000 * 2)

.text
.align 2
.thumb
.thumb_func

HMFlyFromMenu2:
	push {r4-r5}
	mov r4, r1 @save r1 contents
	ldr r0, =  0x828
	ldr r1, = (0x806E6D0 +1) @checkflag
	bl linkerOne
	lsl r0, r0, #0x18
	lsr r0, r0, #0x18
	@cmp r0, #0x1
	@bne end_
	mov r0, #0x1 @load rest of menu manually
	ldr r1, = (0x806ED94 +1) 
	bl linkerOne
	mov r0, #0x2
	ldr r1, = (0x806ED94 +1)
	bl linkerOne
	mov r0, #0x3
	ldr r1, = (0x806ED94 +1)
	bl linkerOne
	mov r0, #0x4
	ldr r1, = (0x806ED94 +1)
	bl linkerOne
	mov r0, #0x5
	ldr r1, = (0x806ED94 +1)
	bl linkerOne
	mov r0, #0x6
	ldr r1, = (0x806ED94 +1)
	bl linkerOne
	pop {r4-r5}
	pop {r0} @put separately for readability 
	bx r0
	

end_:
	pop {r4-r5}
	ldr r0, =(0x806EDDA +1) @if no party
	bx r0


linkerOne:
	bx r1
	

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
