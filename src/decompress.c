#include "../include/global.h"
#include "../include/decompress.h"
#include "../include/data2.h"
#include "../include/constants/species.h"
#include "../include/text.h"
#include "../include/ewram.h"

void DecompressPicFromTable_2_(const struct CompressedSpriteSheet *src, u8 coords, u8 y_offset, void *d, void *dest, s32 species)
{
    LZ77UnCompWram(src->data, dest);
}

void LoadSpecialPokePic_(const struct CompressedSpriteSheet *src, u32 b, u32 c,
    void *decompBuffer, void *dest, s32 species, u32 pid, u32 frontOrBack)
{
    u8 frontOrBack8 = frontOrBack;

    /*if (species == SPECIES_UNOWN)
    {
        u16 i = (((pid & 0x3000000) >> 18) | ((pid & 0x30000) >> 12) | ((pid & 0x300) >> 6) | (pid & 3)) % 0x1C;

        // The other Unowns are separate from Unown A.
        if (i == 0)
            i = SPECIES_UNOWN;
        else
            i += SPECIES_UNOWN_B - 1;

        if (frontOrBack8 == 0)
            LZ77UnCompWram(gMonBackPicTable[i].data, dest);
        else
            LZ77UnCompWram(gMonFrontPicTable[i].data, dest);
    }
    else */LZ77UnCompWram(src->data, dest);

    DrawSpindaSpots(species, pid, dest, frontOrBack8);
}