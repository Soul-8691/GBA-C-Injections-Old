#include "../include/global.h"
#include "../include/gflib.h"
#include "../include/battle_anim.h"
#include "../include/data.h"
#include "../include/decompress.h"
#include "../include/pokemon_icon.h"
#include "../include/task.h"
#include "../include/trig.h"
#include "../include/util.h"
#include "../include/constants/battle_anim.h"

extern const u8 sCastformBackSpriteYCoords[NUM_CASTFORM_FORMS];
extern const u8 sCastformElevations[NUM_CASTFORM_FORMS];

u8 GetBattlerYDelta(u8 battlerId, u16 species)
{
    u16 letter;
    u32 personality;
    struct BattleSpriteInfo *spriteInfo;
    u8 ret;
    u16 coordSpecies;

    if (GetBattlerSide(battlerId) == B_SIDE_PLAYER)
    {
        if (species == SPECIES_UNOWN)
        {
            spriteInfo = gBattleSpritesDataPtr->battlerData;
            if (!spriteInfo[battlerId].transformSpecies)
                personality = GetMonData(&gPlayerParty[gBattlerPartyIndexes[battlerId]], MON_DATA_PERSONALITY);
            else
                personality = gTransformedPersonalities[battlerId];
            letter = GET_UNOWN_LETTER(personality);
            if (!letter)
                coordSpecies = species;
            else
                coordSpecies = letter + SPECIES_UNOWN_B - 1;
            ret = gMonBackPicCoords[coordSpecies].y_offset;
        }
        else if (species == SPECIES_CASTFORM)
        {
            ret = sCastformBackSpriteYCoords[gBattleMonForms[battlerId]];
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
            spriteInfo = gBattleSpritesDataPtr->battlerData;
            if (!spriteInfo[battlerId].transformSpecies)
                personality = GetMonData(&gEnemyParty[gBattlerPartyIndexes[battlerId]], MON_DATA_PERSONALITY);
            else
                personality = gTransformedPersonalities[battlerId];
            letter = GET_UNOWN_LETTER(personality);
            if (!letter)
                coordSpecies = species;
            else
                coordSpecies = letter + SPECIES_UNOWN_B - 1;
            ret = gMonFrontPicCoords[coordSpecies].y_offset;
        }
        else if (species == SPECIES_CASTFORM)
        {
            ret = gCastformFrontSpriteCoords[gBattleMonForms[battlerId]].y_offset;
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

u8 GetBattlerElevation(u8 battlerId, u16 species)
{
    u8 ret = 0;

    if (GetBattlerSide(battlerId) == B_SIDE_OPPONENT)
    {
        if (species == SPECIES_CASTFORM)
            ret = sCastformElevations[gBattleMonForms[battlerId]];
        else if (species > NUM_SPECIES)
            ret = gEnemyMonElevation[0];
        else
            ret = gEnemyMonElevation[species];
    }
    return ret;
}

s16 GetBattlerSpriteCoordAttr(u8 battlerId, u8 attr)
{
    u16 species;
    u32 personality;
    u16 letter;
    u16 unownSpecies;
    s32 ret;
    const struct MonCoords *coords;
    struct BattleSpriteInfo *spriteInfo;

    if (GetBattlerSide(battlerId) == B_SIDE_PLAYER)
    {
        spriteInfo = gBattleSpritesDataPtr->battlerData;
        if (!spriteInfo[battlerId].transformSpecies)
        {
            species = GetMonData(&gPlayerParty[gBattlerPartyIndexes[battlerId]], MON_DATA_SPECIES);
            personality = GetMonData(&gPlayerParty[gBattlerPartyIndexes[battlerId]], MON_DATA_PERSONALITY);
        }
        else
        {
            species = spriteInfo[battlerId].transformSpecies;
            personality = gTransformedPersonalities[battlerId];
        }
        if (species == SPECIES_UNOWN)
        {
            letter = GET_UNOWN_LETTER(personality);
            if (!letter)
                unownSpecies = SPECIES_UNOWN;
            else
                unownSpecies = letter + SPECIES_UNOWN_B - 1;
            coords = &gMonBackPicCoords[unownSpecies];
        }
        else if (species > NUM_SPECIES)
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
        spriteInfo = gBattleSpritesDataPtr->battlerData;
        if (!spriteInfo[battlerId].transformSpecies)
        {
            species = GetMonData(&gEnemyParty[gBattlerPartyIndexes[battlerId]], MON_DATA_SPECIES);
            personality = GetMonData(&gEnemyParty[gBattlerPartyIndexes[battlerId]], MON_DATA_PERSONALITY);
        }
        else
        {
            species = spriteInfo[battlerId].transformSpecies;
            personality = gTransformedPersonalities[battlerId];
        }

        if (species == SPECIES_UNOWN)
        {
            letter = GET_UNOWN_LETTER(personality);
            if (!letter)
                unownSpecies = SPECIES_UNOWN;
            else
                unownSpecies = letter + SPECIES_UNOWN_B - 1;
            coords = &gMonFrontPicCoords[unownSpecies];
        }
        else if (species == SPECIES_CASTFORM)
        {
            coords = &gCastformFrontSpriteCoords[gBattleMonForms[battlerId]];
        }
        else if (species > NUM_SPECIES)
        {
            coords = &gMonFrontPicCoords[0];
        }
        else
        {
            coords = &gMonFrontPicCoords[species];
        }
    }
    switch (attr)
    {
    case BATTLER_COORD_ATTR_HEIGHT:
        return GET_MON_COORDS_HEIGHT(coords->size);
    case BATTLER_COORD_ATTR_WIDTH:
        return GET_MON_COORDS_WIDTH(coords->size);
    case BATTLER_COORD_ATTR_LEFT:
        return GetBattlerSpriteCoord(battlerId, BATTLER_COORD_X_2) - (GET_MON_COORDS_WIDTH(coords->size) / 2);
    case BATTLER_COORD_ATTR_RIGHT:
        return GetBattlerSpriteCoord(battlerId, BATTLER_COORD_X_2) + (GET_MON_COORDS_WIDTH(coords->size) / 2);
    case BATTLER_COORD_ATTR_TOP:
        return GetBattlerSpriteCoord(battlerId, BATTLER_COORD_Y_PIC_OFFSET) - (GET_MON_COORDS_HEIGHT(coords->size) / 2);
    case BATTLER_COORD_ATTR_BOTTOM:
        return GetBattlerSpriteCoord(battlerId, BATTLER_COORD_Y_PIC_OFFSET) + (GET_MON_COORDS_HEIGHT(coords->size) / 2);
    case BATTLER_COORD_ATTR_RAW_BOTTOM:
        ret = GetBattlerSpriteCoord(battlerId, BATTLER_COORD_Y) + 31;
        return ret - coords->y_offset;
    default:
        return 0;
    }
}