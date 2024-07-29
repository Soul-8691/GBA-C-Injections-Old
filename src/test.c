#include "../include/global.h"
#include "../include/decompress.h"
#include "../include/palette.h"

extern const u8 sCopyright_Gfx[];
extern const u8 sCopyright_Map[];
extern const u16 sCopyright_Pal[];

void LoadCopyrightGraphics(u16 charBase, u16 screenBase, u16 palOffset)
{
    LZ77UnCompVram(sCopyright_Gfx, (void *)BG_VRAM + charBase);
    LZ77UnCompVram(sCopyright_Map, (void *)BG_VRAM + screenBase);
    LoadPalette(sCopyright_Pal, palOffset, 0x20);
}