#ifndef GUARD_DECOMPRESS_H
#define GUARD_DECOMPRESS_H

#include "global.h"

#include "sprite.h"

extern u8 gDecompressionBuffer[0x4000];

void DecompressPicFromTable(const struct CompressedSpriteSheet *src, void *buffer, s32 species);
void DecompressPicFromTable_2(const struct CompressedSpriteSheet *src, void *buffer, s32 species);
void DecompressPicFromTable_DontHandleDeoxys(const struct CompressedSpriteSheet *src, void *buffer, s32 species);

void HandleLoadSpecialPokePic(const struct CompressedSpriteSheet *src, void *dest, s32 species, u32 personality);
void HandleLoadSpecialPokePic_DontHandleDeoxys(const struct CompressedSpriteSheet *src, void *dest, s32 species, u32 personality);

void LoadSpecialPokePic(const struct CompressedSpriteSheet *src, void *dest, s32 species, u32 personality, bool8 isFrontPic);
void LoadSpecialPokePic_2(const struct CompressedSpriteSheet *src, void *dest, s32 species, u32 personality, bool8 isFrontPic);

u32 GetDecompressedDataSize(const u8 *ptr);

void __attribute__((long_call)) LZDecompressVram(const void *src, void *dest);
void __attribute__((long_call)) LZDecompressWram(const void *src, void *dest);
void __attribute__((long_call)) LZ77UnCompWram(const void *src, void *dest);
void __attribute__((long_call)) LZ77UnCompVram(const void *src, void *dest);
bool8 __attribute__((long_call)) LoadCompressedSpriteSheetUsingHeap(const struct CompressedSpriteSheet* src);
bool8 __attribute__((long_call)) LoadCompressedSpritePaletteUsingHeap(const struct CompressedSpritePalette *src);
void __attribute__((long_call)) LoadCompressedSpritePaletteOverrideBuffer(const struct CompressedSpritePalette *a, void *buffer);
void __attribute__((long_call)) LoadCompressedSpriteSheetOverrideBuffer(const struct CompressedSpriteSheet *src, void *buffer);
u16 __attribute__((long_call)) LoadCompressedSpriteSheet(const struct CompressedSpriteSheet *src);
void __attribute__((long_call)) HandleLoadSpecialPokePic_DontHandleDeoxys(const struct CompressedSpriteSheet *src, void *dest, s32 species, u32 personality);

#endif // GUARD_DECOMPRESS_H
