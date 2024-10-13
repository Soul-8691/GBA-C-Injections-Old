#include "../include/global.h"
#include "../include/constants/battle_anim.h"
#include "../include/constants/species.h"
#include "../include/rom_8077ABC.h"
#include "../include/battle.h"
#include "../include/battle_anim.h"
#include "../include/blend_palette.h"
#include "../include/contest.h"
#include "../include/data2.h"
#include "../include/decompress.h"
#include "../include/palette.h"
#include "../include/pokemon_icon.h"
#include "../include/sprite.h"
#include "../include/task.h"
#include "../include/trig.h"
#include "../include/util.h"
#include "../include/ewram.h"

// #include "data/pokemon_graphics/front_pic_coordinates.c"
// #include "data/pokemon_graphics/back_pic_coordinates.c"

#define GET_UNOWN_LETTER(personality) ((\
      (((personality & 0x03000000) >> 24) << 6) \
    | (((personality & 0x00030000) >> 16) << 4) \
    | (((personality & 0x00000300) >> 8) << 2) \
    | (((personality & 0x00000003) >> 0) << 0) \
) % 28)

// One entry for each of the four Castform forms.
// Coords are probably front pic coords or back pic coords, but this data does not seem to be
// used during battle, party summary, or pokedex screens.
const struct MonCoords gCastformFrontSpriteCoords[] =
{
    { 0x44, 17 }, // NORMAL
    { 0x66, 9 }, // SUN
    { 0x46, 9 }, // RAIN
    { 0x86, 8 }, // HAIL
};

// Y position of the backsprite for each of the four Castform forms.
const u8 gCastformBackSpriteYCoords[] =
{
    0, // NORMAL
    0, // SUN
    0, // RAIN
    0, // HAIL
};

const u8 gCastformElevations[] =
{
    13, // NORMAL
    14, // SUN
    13, // RAIN
    13, // HAIL
};

#define NUM_BATTLE_SLOTS 4

extern u16 gBattlerPartyIndexes[];
extern u8 gBattleMonForms[NUM_BATTLE_SLOTS];
extern u32 gTransformPersonalities[NUM_BATTLE_SLOTS];
extern u32 gTransformedPersonalities[];

#define gBattleMonPartyPositions gBattlerPartyIndexes
#define gTransformPersonalities gTransformedPersonalities

struct Struct_gUnknown_0837F578
{
    u8 field_0;
    u8 field_1;
};

const struct Struct_gUnknown_0837F578 gUnknown_0837F578[][4] =
{
    {
        { 72, 80 },
        { 176, 40 },
        { 48, 40 },
        { 112, 80 },
    },
    {
        { 32, 80 },
        { 200, 40 },
        { 90, 88 },
        { 152, 32 },
    },
};

#define IS_DOUBLE_BATTLE() ((gBattleTypeFlags & BATTLE_TYPE_DOUBLE) ? TRUE : FALSE)

u8 sub_8077BFC_(u8 slot, u16 species)
{
    u16 letter;
    u32 personality;
    struct BattleSpriteInfo *transform;
    u8 ret;
    u16 var;

    if (GetBattlerSide(slot) == 0 || IsContest())
    {
        if (species == SPECIES_UNOWN)
        {
            if (IsContest())
            {
                if (gContestResources__moveAnim.hasTargetAnim)
                    personality = gContestResources__moveAnim.targetPersonality;
                else
                    personality = gContestResources__moveAnim.personality;
            }
            else
            {
                transform = &gBattleSpriteInfo[slot];
                if (!transform->transformedSpecies)
                    personality = GetMonData(&gPlayerParty[gBattleMonPartyPositions[slot]], MON_DATA_PERSONALITY);
                else
                    personality = gTransformPersonalities[slot];
            }
            letter = GET_UNOWN_LETTER(personality);
            if (!letter)
                var = species;
            else
                var = letter + SPECIES_UNOWN_B - 1;
            ret = gMonBackPicCoords[var].y_offset;
        }
        else if (species == SPECIES_CASTFORM)
        {
            ret = gCastformBackSpriteYCoords[gBattleMonForms[slot]];
        }
        else if (species > NUM_SPECIES)
        {
            ret = gMonBackPicCoords[0].y_offset;
        }
        else
        {
            ret = gMonBackPicCoords[species].y_offset;
        }
    }
    else
    {
        if (species == SPECIES_UNOWN)
        {
            transform = &gBattleSpriteInfo[slot];
            if (!transform->transformedSpecies)
                personality = GetMonData(&gEnemyParty[gBattleMonPartyPositions[slot]], MON_DATA_PERSONALITY);
            else
                personality = gTransformPersonalities[slot];
            letter = GET_UNOWN_LETTER(personality);
            if (!letter)
                var = species;
            else
                var = letter + SPECIES_UNOWN_B - 1;
            ret = gMonFrontPicCoords[var].y_offset;
        }
        else if (species == SPECIES_CASTFORM)
        {
            ret = gCastformFrontSpriteCoords[gBattleMonForms[slot]].y_offset;
        }
        else if (species > NUM_SPECIES)
        {
            ret = gMonFrontPicCoords[0].y_offset;
        }
        else
        {
            ret = gMonFrontPicCoords[species].y_offset;
        }
    }
    return ret;
}

u8 sub_8077DD8_(u8 slot, u16 species)
{
    u8 ret = 0;
    if (GetBattlerSide(slot) == 1)
    {
        if (!IsContest())
        {
            if (species == SPECIES_CASTFORM)
                ret = gCastformElevations[gBattleMonForms[slot]];
            else if (species > NUM_SPECIES)
                ret = gEnemyMonElevation[0];
            else
                ret = gEnemyMonElevation[species];
        }
    }
    return ret;
}

u8 GetBattlerSpriteFinal_Y_(u8 slot, u16 species, u8 a3)
{
    u16 offset;
    u8 y;

    if (GetBattlerSide(slot) == 0 || IsContest())
    {
        offset = sub_8077BFC_(slot, species);
    }
    else
    {
        offset = sub_8077BFC_(slot, species);
        offset -= sub_8077DD8_(slot, species);
    }
    y = offset + gUnknown_0837F578[IS_DOUBLE_BATTLE()][GetBattlerPosition(slot)].field_1;
    if (a3)
    {
        if (GetBattlerSide(slot) == 0)
            y += 8;
        if (y > 104)
            y = 104;
    }
    return y;
}

s16 GetBattlerSpriteCoordAttr_(u8 slot, u8 a2)
{
    u16 species;
    u32 personality;
    u16 letter;
    u16 var;
    int ret;
    const struct MonCoords *coords;
    struct BattleSpriteInfo *transform;

    if (IsContest())
    {
        if (gContestResources__moveAnim.hasTargetAnim)
        {
            species = gContestResources__moveAnim.targetSpecies;
            personality = gContestResources__moveAnim.targetPersonality;
        }
        else
        {
            species = gContestResources__moveAnim.species;
            personality = gContestResources__moveAnim.personality;
        }
        if (species == SPECIES_UNOWN)
        {
            letter = GET_UNOWN_LETTER(personality);
            if (!letter)
                var = SPECIES_UNOWN;
            else
                var = letter + SPECIES_UNOWN_B - 1;
            coords = &gMonBackPicCoords[var];
        }
        else if (species == SPECIES_CASTFORM)
        {
            coords = &gCastformFrontSpriteCoords[gBattleMonForms[slot]];
        }
        else if (species <= SPECIES_EGG && species <= SPECIES_UNOWN_QMARK)
        {
            coords = &gMonBackPicCoords[species];
        }
        else
        {
            coords = &gMonBackPicCoords[0];
        }
    }
    else
    {
        if (!GetBattlerSide(slot))
        {
            transform = &gBattleSpriteInfo[slot];
            if (!transform->transformedSpecies)
            {
                species = GetMonData(&gPlayerParty[gBattleMonPartyPositions[slot]], MON_DATA_SPECIES);
                personality = GetMonData(&gPlayerParty[gBattleMonPartyPositions[slot]], MON_DATA_PERSONALITY);
            }
            else
            {
                species = transform->transformedSpecies;
                personality = gTransformPersonalities[slot];
            }
            if (species == SPECIES_UNOWN)
            {
                letter = GET_UNOWN_LETTER(personality);
                if (!letter)
                    var = SPECIES_UNOWN;
                else
                    var = letter + SPECIES_UNOWN_B - 1;
                coords = &gMonBackPicCoords[var];
            }
            else if (species > SPECIES_EGG && species <= SPECIES_UNOWN_QMARK)
            {
                coords = &gMonBackPicCoords[0];
            }
            else
            {
                coords = &gMonBackPicCoords[species];
            }
        }
        else
        {
            transform = &gBattleSpriteInfo[slot];
            if (!transform->transformedSpecies)
            {
                species = GetMonData(&gEnemyParty[gBattleMonPartyPositions[slot]], MON_DATA_SPECIES);
                personality = GetMonData(&gEnemyParty[gBattleMonPartyPositions[slot]], MON_DATA_PERSONALITY);
            }
            else
            {
                species = transform->transformedSpecies;
                personality = gTransformPersonalities[slot];
            }
            if (species == SPECIES_UNOWN)
            {
                letter = GET_UNOWN_LETTER(personality);
                if (!letter)
                    var = SPECIES_UNOWN;
                else
                    var = letter + SPECIES_UNOWN_B - 1;
                coords = &gMonFrontPicCoords[var];
            }
            else if (species == SPECIES_CASTFORM)
            {
                coords = &gCastformFrontSpriteCoords[gBattleMonForms[slot]];
            }
            else if (species > SPECIES_EGG && species <= SPECIES_UNOWN_QMARK)
            {
                coords = &gMonFrontPicCoords[0];
            }
            else
            {
                coords = &gMonFrontPicCoords[species];
            }
        }
    }

    switch (a2)
    {
    case 0:
        return (coords->coords & 0xf) * 8;
    case 1:
        return (coords->coords >> 4) * 8;
    case 4:
        return GetBattlerSpriteCoord(slot, 2) - ((coords->coords >> 4) * 4);
    case 5:
        return GetBattlerSpriteCoord(slot, 2) + ((coords->coords >> 4) * 4);
    case 2:
        return GetBattlerSpriteCoord(slot, 3) - ((coords->coords & 0xf) * 4);
    case 3:
        return GetBattlerSpriteCoord(slot, 3) + ((coords->coords & 0xf) * 4);
    case 6:
        ret = GetBattlerSpriteCoord(slot, 1) + 0x1f;
        return ret - coords->y_offset;
    default:
        return 0;
    }
}

void SetAverageBattlerPositions_(u8 slot, bool8 a2, s16 *x, s16 *y)
{
    u8 v1, v2;
    s16 v3, v4;
    s16 v5, v6;

    if (!a2)
    {
        v1 = 0;
        v2 = 1;
    }
    else
    {
        v1 = 2;
        v2 = 3;
    }
    v3 = GetBattlerSpriteCoord(slot, v1);
    v4 = GetBattlerSpriteCoord(slot, v2);
    if (IsDoubleBattle() && !IsContest())
    {
        v5 = GetBattlerSpriteCoord(slot ^ 2, v1);
        v6 = GetBattlerSpriteCoord(slot ^ 2, v2);
    }
    else
    {
        v5 = v3;
        v6 = v4;
    }
    *x = (v3 + v5) / 2;
    *y = (v4 + v6) / 2;
}

const struct SpriteTemplate gSpriteTemplate_837F5B0[] =
{
    {
        .tileTag = 55125,
        .paletteTag = 55125,
        .oam = &gOamData_837DF9C,
        .anims = gDummySpriteAnimTable,
        .images = NULL,
        .affineAnims = gDummySpriteAffineAnimTable,
        .callback = SpriteCallbackDummy,
    },
    {
        .tileTag = 55126,
        .paletteTag = 55126,
        .oam = &gOamData_837DF9C,
        .anims = gDummySpriteAnimTable,
        .images = NULL,
        .affineAnims = gDummySpriteAffineAnimTable,
        .callback = SpriteCallbackDummy,
    }
};

const struct SpriteSheet gUnknown_0837F5E0[] =
{
    { gMiscBlank_Gfx, 0x800, 55125, },
    { gMiscBlank_Gfx, 0x800, 55126, },
};

u8 sub_8079F44_(u16 species, bool8 isBackpic, u8 a3, s16 a4, s16 a5, u8 a6, u32 a7, u32 a8)
{
    u8 sprite;
    u16 sheet = LoadSpriteSheet(&gUnknown_0837F5E0[a3]);
    u16 palette = AllocSpritePalette(gSpriteTemplate_837F5B0[a3].paletteTag);

    if (!isBackpic)
    {
        LoadCompressedPalette(GetMonSpritePalFromOtIdPersonality(species, a8, a7), (palette * 0x10) + 0x100, 0x20);
        LoadSpecialPokePic(
            &gMonFrontPicTable[species],
            gMonFrontPicCoords[species].coords,
            gMonFrontPicCoords[species].y_offset,
            (void *)EWRAM,
            (void *)EWRAM,
            species,
            a7,
            1
        );
    }
    else
    {
        LoadCompressedPalette(GetMonSpritePalFromOtIdPersonality(species, a8, a7), (palette * 0x10) + 0x100, 0x20);
        LoadSpecialPokePic(
            &gMonBackPicTable[species],
            gMonBackPicCoords[species].coords,
            gMonBackPicCoords[species].y_offset,
            (void *)EWRAM,
            (void *)EWRAM,
            species,
            a7,
            0
        );
    }

    DmaCopy32Defvars(3, (void *)EWRAM, (void *)(OBJ_VRAM0 + (sheet * 0x20)), 0x800);

    if (!isBackpic)
        sprite = CreateSprite(&gSpriteTemplate_837F5B0[a3], a4, a5 + gMonFrontPicCoords[species].y_offset, a6);
    else
        sprite = CreateSprite(&gSpriteTemplate_837F5B0[a3], a4, a5 + gMonBackPicCoords[species].y_offset, a6);

    if (IsContest())
    {
        gSprites[sprite].affineAnims = gAffineAnims_BattleSpriteContest;
        StartSpriteAffineAnim(&gSprites[sprite], 0);
    }
    return sprite;
}