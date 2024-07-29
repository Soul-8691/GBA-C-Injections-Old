#include "../include/global.h"
#include "../include/decompress.h"
#include "../include/palette.h"

static const u16 sCopyright_Pal[] = INCBIN_U16("graphics/4bpp/intro/copyright.gbapal");
static const u8 sCopyright_Gfx[]  = INCBIN_U8( "graphics/4bpp/intro/copyright.4bpp.lz");
static const u8 sCopyright_Map[]  = INCBIN_U8( "graphics/4bpp/intro/copyright.bin.lz");

void LoadCopyrightGraphics(u16 charBase, u16 screenBase, u16 palOffset)
{
    LZ77UnCompVram(sCopyright_Gfx, (void *)BG_VRAM + charBase);
    LZ77UnCompVram(sCopyright_Map, (void *)BG_VRAM + screenBase);
    LoadPalette(sCopyright_Pal, palOffset, 0x20);
}