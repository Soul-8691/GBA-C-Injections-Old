#define IS_POKEMON_C

#include "../include/global.h"
#include "../include/gflib.h"
#include "../include/random.h"
#include "../include/text.h"
#include "../include/data.h"
#include "../include/battle.h"
#include "../include/battle_anim.h"
#include "../include/item.h"
#include "../include/event_data.h"
#include "../include/util.h"
#include "../include/pokemon_storage_system.h"
#include "../include/battle_gfx_sfx_util.h"
#include "../include/battle_controllers.h"
#include "../include/evolution_scene.h"
#include "../include/battle_message.h"
#include "../include/battle_util.h"
#include "../include/link.h"
#include "../include/m4a.h"
#include "../include/pokedex.h"
#include "../include/strings.h"
#include "../include/overworld.h"
#include "../include/party_menu.h"
#include "../include/field_specials.h"
#include "../include/berry.h"
#include "../include/constants/items.h"
#include "../include/constants/item_effects.h"
#include "../include/constants/hoenn_cries.h"
#include "../include/constants/pokemon.h"
#include "../include/constants/abilities.h"
#include "../include/constants/moves.h"
#include "../include/constants/songs.h"
#include "../include/constants/item_effects.h"
#include "../include/constants/trainers.h"
#include "../include/constants/hold_effects.h"
#include "../include/constants/battle_move_effects.h"
#include "../include/constants/union_room.h"

extern const u16 *const gSmogonLevelUpLearnsets[];

extern u8 sLearningMoveTableID;

u16 MonTryLearningNewMove_(struct Pokemon *mon, bool8 firstMove)
{
    u32 retVal = MOVE_NONE;
    u16 species = GetMonData(mon, MON_DATA_SPECIES, NULL);
    u8 level = GetMonData(mon, MON_DATA_LEVEL, NULL);
    u32 i;

    // since you can learn more than one move per level
    // the game needs to know whether you decided to
    // learn it or keep the old set to avoid asking
    // you to learn the same move over and over again
    if (firstMove)
    {
        sLearningMoveTableID = 0;

        while ((gLevelUpLearnsets[species][sLearningMoveTableID] & LEVEL_UP_MOVE_LV) != (level << 9))
        {
            sLearningMoveTableID++;
            if (gLevelUpLearnsets[species][sLearningMoveTableID] == LEVEL_UP_END)
                return MOVE_NONE;
        }
    }

    if ((gLevelUpLearnsets[species][sLearningMoveTableID] & LEVEL_UP_MOVE_LV) == (level << 9))
    {
        gMoveToLearn = (gLevelUpLearnsets[species][sLearningMoveTableID] & LEVEL_UP_MOVE_ID);
        sLearningMoveTableID++;
        retVal = GiveMoveToMon(mon, gMoveToLearn);
    }

    if (Random() % 4 == 0)
    {
        if (firstMove)
        {
            sLearningMoveTableID = 0;

            while ((gSmogonLevelUpLearnsets[species][sLearningMoveTableID] & LEVEL_UP_MOVE_LV) != (level << 9))
            {
                sLearningMoveTableID++;
                if (gSmogonLevelUpLearnsets[species][sLearningMoveTableID] == LEVEL_UP_END)
                    return MOVE_NONE;
            }
        }

        if ((gSmogonLevelUpLearnsets[species][sLearningMoveTableID] & LEVEL_UP_MOVE_LV) == (level << 9))
        {
            gMoveToLearn = (gSmogonLevelUpLearnsets[species][sLearningMoveTableID] & LEVEL_UP_MOVE_ID);
            sLearningMoveTableID++;
            retVal = GiveMoveToMon(mon, gMoveToLearn);
        }
    }

    return retVal;
}

static void GiveBoxMonInitialSmogonMoveset(struct BoxPokemon *boxMon)
{
    u16 species = GetBoxMonData(boxMon, MON_DATA_SPECIES, NULL);
    s32 level = GetLevelFromBoxMonExp(boxMon);
    s32 i;

    for (i = 0; gSmogonLevelUpLearnsets[species][i] != LEVEL_UP_END; i++)
    {
        u16 moveLevel;
        u16 move;

        moveLevel = (gSmogonLevelUpLearnsets[species][i] & LEVEL_UP_MOVE_LV);

        if (moveLevel > (level << 9))
            break;

        move = (gSmogonLevelUpLearnsets[species][i] & LEVEL_UP_MOVE_ID);

        if (GiveMoveToBoxMon(boxMon, move) == MON_HAS_MAX_MOVES)
            DeleteFirstMoveAndGiveMoveToBoxMon(boxMon, move);
    }
}

void CreateBoxMon_(struct BoxPokemon *boxMon, u16 species, u8 level, u8 fixedIV, u8 hasFixedPersonality, u32 fixedPersonality, u8 otIdType, u32 fixedOtId)
{
    u8 speciesName[POKEMON_NAME_LENGTH + 1];
    u32 personality;
    u32 value;
    u16 checksum;

    ZeroBoxMonData(boxMon);

    if (hasFixedPersonality)
        personality = fixedPersonality;
    else
        personality = Random32();

    SetBoxMonData(boxMon, MON_DATA_PERSONALITY, &personality);

    //Determine original trainer ID
    if (otIdType == OT_ID_RANDOM_NO_SHINY) //Pokemon cannot be shiny
    {
        u32 shinyValue;
        do
        {
            value = Random32();
            shinyValue = GET_SHINY_VALUE(value, personality);
        } while (shinyValue < SHINY_ODDS);
    }
    else if (otIdType == OT_ID_PRESET) //Pokemon has a preset OT ID
    {
        value = fixedOtId;
    }
    else //Player is the OT
    {
        value = gSaveBlock2Ptr->playerTrainerId[0]
              | (gSaveBlock2Ptr->playerTrainerId[1] << 8)
              | (gSaveBlock2Ptr->playerTrainerId[2] << 16)
              | (gSaveBlock2Ptr->playerTrainerId[3] << 24);
    }

    SetBoxMonData(boxMon, MON_DATA_OT_ID, &value);

    checksum = CalculateBoxMonChecksum(boxMon);
    SetBoxMonData(boxMon, MON_DATA_CHECKSUM, &checksum);
    EncryptBoxMon(boxMon);
    GetSpeciesName(speciesName, species);
    SetBoxMonData(boxMon, MON_DATA_NICKNAME, speciesName);
    SetBoxMonData(boxMon, MON_DATA_LANGUAGE, &gGameLanguage);
    SetBoxMonData(boxMon, MON_DATA_OT_NAME, gSaveBlock2Ptr->playerName);
    SetBoxMonData(boxMon, MON_DATA_SPECIES, &species);
    SetBoxMonData(boxMon, MON_DATA_EXP, &gExperienceTables[gSpeciesInfo[species].growthRate][level]);
    SetBoxMonData(boxMon, MON_DATA_FRIENDSHIP, &gSpeciesInfo[species].friendship);
    value = GetCurrentRegionMapSectionId();
    SetBoxMonData(boxMon, MON_DATA_MET_LOCATION, &value);
    SetBoxMonData(boxMon, MON_DATA_MET_LEVEL, &level);
    SetBoxMonData(boxMon, MON_DATA_MET_GAME, &gGameVersion);
    value = ITEM_POKE_BALL;
    SetBoxMonData(boxMon, MON_DATA_POKEBALL, &value);
    SetBoxMonData(boxMon, MON_DATA_OT_GENDER, &gSaveBlock2Ptr->playerGender);

    if (fixedIV < USE_RANDOM_IVS)
    {
        SetBoxMonData(boxMon, MON_DATA_HP_IV, &fixedIV);
        SetBoxMonData(boxMon, MON_DATA_ATK_IV, &fixedIV);
        SetBoxMonData(boxMon, MON_DATA_DEF_IV, &fixedIV);
        SetBoxMonData(boxMon, MON_DATA_SPEED_IV, &fixedIV);
        SetBoxMonData(boxMon, MON_DATA_SPATK_IV, &fixedIV);
        SetBoxMonData(boxMon, MON_DATA_SPDEF_IV, &fixedIV);
    }
    else
    {
        u32 iv;
        value = Random();

        iv = value & MAX_IV_MASK;
        SetBoxMonData(boxMon, MON_DATA_HP_IV, &iv);
        iv = (value & (MAX_IV_MASK << 5)) >> 5;
        SetBoxMonData(boxMon, MON_DATA_ATK_IV, &iv);
        iv = (value & (MAX_IV_MASK << 10)) >> 10;
        SetBoxMonData(boxMon, MON_DATA_DEF_IV, &iv);

        value = Random();

        iv = value & MAX_IV_MASK;
        SetBoxMonData(boxMon, MON_DATA_SPEED_IV, &iv);
        iv = (value & (MAX_IV_MASK << 5)) >> 5;
        SetBoxMonData(boxMon, MON_DATA_SPATK_IV, &iv);
        iv = (value & (MAX_IV_MASK << 10)) >> 10;
        SetBoxMonData(boxMon, MON_DATA_SPDEF_IV, &iv);
    }

    if (gSpeciesInfo[species].abilities[1])
    {
        value = personality & 1;
        SetBoxMonData(boxMon, MON_DATA_ABILITY_NUM, &value);
    }

    if (gSmogonLevelUpLearnsets[species] && Random() % 10 == 0)
        GiveBoxMonInitialSmogonMoveset(boxMon);
    else
        GiveBoxMonInitialMoveset(boxMon);
}

void CreateMon_(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 hasFixedPersonality, u32 fixedPersonality, u8 otIdType, u32 fixedOtId)
{
    u32 arg;
    ZeroMonData(mon);
    CreateBoxMon_(&mon->box, species, level, fixedIV, hasFixedPersonality, fixedPersonality, otIdType, fixedOtId);
    SetMonData(mon, MON_DATA_LEVEL, &level);
    arg = MAIL_NONE;
    SetMonData(mon, MON_DATA_MAIL, &arg);
    CalculateMonStats(mon);
}