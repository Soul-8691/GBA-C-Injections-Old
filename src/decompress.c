#include "../include/global.h"
#include "../include/gflib.h"
#include "../include/decompress.h"
#include "../include/pokemon.h"

extern const struct CompressedSpriteSheet gMonFrontPicTable_[];
extern const struct CompressedSpriteSheet gMonBackPicTable[];

extern void DuplicateDeoxysTiles(void *pointer, s32 species);

void DecompressPicFromTable_(const struct CompressedSpriteSheet *src, void *buffer, s32 species)
{
    if (species > NUM_SPECIES)
        LZ77UnCompWram(gMonFrontPicTable_[0].data, buffer);
    else
        LZ77UnCompWram(src->data, buffer);
    DuplicateDeoxysTiles(buffer, species);
}

void LoadSpecialPokePic_(const struct CompressedSpriteSheet *src, void *dest, s32 species, u32 personality, bool8 isFrontPic)
{
    if (species == SPECIES_UNOWN)
    {
        u16 i = (((personality & 0x3000000) >> 18) | ((personality & 0x30000) >> 12) | ((personality & 0x300) >> 6) | (personality & 3)) % 0x1C;

        // The other Unowns are separate from Unown A.
        if (i == 0)
            i = SPECIES_UNOWN;
        else
            i += SPECIES_UNOWN_B - 1;
        if (!isFrontPic)
            LZ77UnCompWram(gMonBackPicTable[i].data, dest);
        else
            LZ77UnCompWram(gMonFrontPicTable_[i].data, dest);
    }
    else if (species > NUM_SPECIES) // is species unknown? draw the ? icon
        LZ77UnCompWram(gMonFrontPicTable_[0].data, dest);
    else
        LZ77UnCompWram(src->data, dest);

    DuplicateDeoxysTiles(dest, species);
    DrawSpindaSpots(species, personality, dest, isFrontPic);
}

void DecompressPicFromTable_DontHandleDeoxys_(const struct CompressedSpriteSheet *src, void *buffer, s32 species)
{
    if (species > NUM_SPECIES)
        LZ77UnCompWram(gMonFrontPicTable_[0].data, buffer);
    else
        LZ77UnCompWram(src->data, buffer);
}

void LoadSpecialPokePic_DontHandleDeoxys_(const struct CompressedSpriteSheet *src, void *dest, s32 species, u32 personality, bool8 isFrontPic)
{
    if (species == SPECIES_UNOWN)
    {
        u16 i = (((personality & 0x3000000) >> 18) | ((personality & 0x30000) >> 12) | ((personality & 0x300) >> 6) | (personality & 3)) % 0x1C;

        // The other Unowns are separate from Unown A.
        if (i == 0)
            i = SPECIES_UNOWN;
        else
            i += SPECIES_UNOWN_B - 1;
        if (!isFrontPic)
            LZ77UnCompWram(gMonBackPicTable[i].data, dest);
        else
            LZ77UnCompWram(gMonFrontPicTable_[i].data, dest);
    }
    else if (species > NUM_SPECIES) // is species unknown? draw the ? icon
    {
        LZ77UnCompWram(gMonFrontPicTable_[0].data, dest);
    }
    else
    {
        LZ77UnCompWram(src->data, dest);
    }
    DrawSpindaSpots(species, personality, dest, isFrontPic);
}