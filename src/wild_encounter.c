#include "../include/global.h"
#include "../include/wild_encounter.h"
#include "../include/constants/abilities.h"
#include "../include/battle_setup.h"
#include "../include/event_data.h"
#include "../include/field_player_avatar.h"
#include "../include/fieldmap.h"
#include "../include/constants/maps.h"
#include "../include/metatile_behavior.h"
#include "../include/pokeblock.h"
#include "../include/random.h"
#include "../include/roamer.h"
#include "../include/overworld.h"
#include "../include/safari_zone.h"
#include "../include/script.h"
#include "../include/constants/species.h"
#include "../include/tv.h"

extern u8 gWildEncountersDisabled;

bool8 StandardWildEncounter_(u16 curMetatileBehavior, u16 prevMetatileBehavior)
{
    u16 headerNum;
    struct Roamer *roamer;

    if (gWildEncountersDisabled == TRUE)
        return 0;
    else
    {
        headerNum = GetCurrentMapWildMonHeader();
        if (headerNum != 0xFFFF)
        {
            if (MetatileBehavior_IsLandWildEncounter(curMetatileBehavior) == TRUE)
            {
                if (gWildMonHeaders[headerNum].landMonsInfo)
                {
                    if (prevMetatileBehavior != curMetatileBehavior && !DoGlobalWildEncounterDiceRoll())
                        return 0;

                    if (DoWildEncounterTest(gWildMonHeaders[headerNum].landMonsInfo->encounterRate, 0) == TRUE)
                    {
                        if (TryStartRoamerEncounter() == TRUE)
                        {
                            roamer = &gSaveBlock1.roamer;
                            if (IsWildLevelAllowedByRepel(roamer->level))
                            {
                                BattleSetup_StartRoamerBattle();
                                return 1;
                            }
                        }
                        else
                        {
                            if (DoMassOutbreakEncounterTest() == TRUE && SetUpMassOutbreakEncounter(1) == TRUE)
                            {
                                BattleSetup_StartWildBattle();
                                return 1;
                            }
                            if (GenerateWildMon(gWildMonHeaders[headerNum].landMonsInfo, 0, TRUE) == TRUE)
                            {
                                goto label;
                            }
                        }
                    }
                }
            }
            else if (MetatileBehavior_IsSandWildEncounter(curMetatileBehavior) == TRUE)
            {
                if (gWildMonHeaders[headerNum].rockSmashMonsInfo)
                {
                    ScrSpecial_RockSmashWildEncounter();
                }
            }
            else if (MetatileBehavior_IsWaterWildEncounter(curMetatileBehavior) == TRUE
             || (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_SURFING) && MetatileBehavior_IsBridge(curMetatileBehavior) == TRUE))
            {
                if (gWildMonHeaders[headerNum].waterMonsInfo)
                {
                    if (prevMetatileBehavior != curMetatileBehavior && !DoGlobalWildEncounterDiceRoll())
                        return 0;

                    if (DoWildEncounterTest(gWildMonHeaders[headerNum].waterMonsInfo->encounterRate, 0) == TRUE)
                    {
                        if (TryStartRoamerEncounter() == TRUE)
                        {
                            roamer = &gSaveBlock1.roamer;
                            if (IsWildLevelAllowedByRepel(roamer->level))
                            {
                                BattleSetup_StartRoamerBattle();
                                return 1;
                            }
                        }
                        else
                        {
                            //_08085268
                            if (GenerateWildMon(gWildMonHeaders[headerNum].waterMonsInfo, 1, TRUE) == TRUE)
                            {
                            label:
                                //_0808527A
                                BattleSetup_StartWildBattle();
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}