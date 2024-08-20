#include "../include/global.h"
#include "../include/gflib.h"
#include "../include/battle.h"
#include "../include/battle_anim.h"
#include "../include/battle_ai_script_commands.h"
#include "../include/battle_controllers.h"
#include "../include/battle_interface.h"
#include "../include/battle_main.h"
#include "../include/battle_message.h"
#include "../include/battle_scripts.h"
#include "../include/battle_setup.h"
#include "../include/berry.h"
#include "../include/data.h"
#include "../include/decompress.h"
#include "../include/event_data.h"
#include "../include/evolution_scene.h"
#include "../include/graphics.h"
#include "../include/help_system.h"
#include "../include/item.h"
#include "../include/link.h"
#include "../include/link_rfu.h"
#include "../include/load_save.h"
#include "../include/m4a.h"
#include "../include/party_menu.h"
#include "../include/pokeball.h"
#include "../include/pokedex.h"
#include "../include/quest_log.h"
#include "../include/random.h"
#include "../include/roamer.h"
#include "../include/safari_zone.h"
#include "../include/scanline_effect.h"
#include "../include/task.h"
#include "../include/trig.h"
#include "../include/vs_seeker.h"
#include "../include/util.h"
#include "../include/constants/abilities.h"
#include "../include/constants/battle_move_effects.h"
#include "../include/constants/battle_setup.h"
#include "../include/constants/hold_effects.h"
#include "../include/constants/items.h"
#include "../include/constants/moves.h"
#include "../include/constants/pokemon.h"
#include "../include/constants/songs.h"
#include "../include/constants/trainers.h"
#include "../include/overworld.h"
#include "../include/constants/map_groups.h"

extern struct Evolution gEvolutionTable[][EVOS_PER_MON];

static const u16 sGymMaps[] = 
{
    MAP_MIKAN_GYM,
    MAP_NAVEL_MOUNTAIN,
    MAP_TROVITA_ISLAND_GYM,
    MAP_KUMQUAT_ISLAND_GYM
};

static const u16 sBirdKeeperMons[] = 
{
    SPECIES_PIDGEY,
    SPECIES_SPEAROW,
    SPECIES_TAILLOW,
    SPECIES_HOOTHOOT,
    SPECIES_DODUO,
    SPECIES_WINGULL,
    SPECIES_NATU,
    SPECIES_SWABLU,
    SPECIES_FARFETCHD,
    SPECIES_SKARMORY,
    SPECIES_TROPIUS,
};

u8 CreateNPCTrainerPartyBadgeLevelScaling(struct Pokemon *party, u16 trainerNum)
{
    u32 nameHash = 0;
    u32 personalityValue;
    u8 fixedIV;
    s32 i, j;

    if (trainerNum == TRAINER_SECRET_BASE)
        return 0;

    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER
     && !(gBattleTypeFlags & (BATTLE_TYPE_BATTLE_TOWER | BATTLE_TYPE_EREADER_TRAINER | BATTLE_TYPE_TRAINER_TOWER)))
    {
        u8 badgeCount = CountBadgesForOverworldWhiteOutLossCalculation();
        u8 partySize;
        if (badgeCount == 0)
            partySize = (Random() % 2) + 1;
        ZeroEnemyPartyMons();
        for (i = 0; i < gTrainers[trainerNum].partySize; i++)
        {

            if (gTrainers[trainerNum].doubleBattle == TRUE)
                personalityValue = 0x80;
            else if (gTrainers[trainerNum].encounterMusic_gender & F_TRAINER_FEMALE)
                personalityValue = 0x78; // Use personality more likely to result in a female Pokémon
            else
                personalityValue = 0x88; // Use personality more likely to result in a male Pokémon

            for (j = 0; gTrainers[trainerNum].trainerName[j] != EOS; j++)
                nameHash += gTrainers[trainerNum].trainerName[j];

            switch (gTrainers[trainerNum].partyFlags)
            {
            case 0:
            {
                const struct TrainerMonNoItemDefaultMoves *partyData = gTrainers[trainerNum].party.NoItemDefaultMoves;
                u8 level = partyData[i].lvl;
                u16 species = GetEggSpecies(partyData[i].species);
                // if (gTrainers[gTrainerBattleOpponent_A].trainerClass == TRAINER_CLASS_BIRD_KEEPER)
                // {
                //     if (Random() % 100 < 15)
                //         species = GetEggSpecies(sBirdKeeperMons[0]);
                //     else if (Random() % 100 < 30)
                //         species = GetEggSpecies(sBirdKeeperMons[1]);
                //     else if (Random() % 100 < 45)
                //         species = GetEggSpecies(sBirdKeeperMons[2]);
                //     else if (Random() % 100 < 55)
                //         species = GetEggSpecies(sBirdKeeperMons[3]);
                //     else if (Random() % 100 < 65)
                //         species = GetEggSpecies(sBirdKeeperMons[4]);
                //     else if (Random() % 100 < 75)
                //         species = GetEggSpecies(sBirdKeeperMons[5]);
                //     else if (Random() % 100 < 85)
                //         species = GetEggSpecies(sBirdKeeperMons[6]);
                //     else if (Random() % 100 < 90)
                //         species = GetEggSpecies(sBirdKeeperMons[7]);
                //     else if (Random() % 100 < 94)
                //         species = GetEggSpecies(sBirdKeeperMons[8]);
                //     else if (Random() % 100 < 97)
                //         species = GetEggSpecies(sBirdKeeperMons[9]);
                //     else
                //         species = GetEggSpecies(sBirdKeeperMons[10]);
                // }
                if (gTrainers[gTrainerBattleOpponent_A].trainerClass != TRAINER_CLASS_LEADER && !IsCurMapInLocationList(sGymMaps)) {
                    if (badgeCount == 0) level = (Random() % 4) + 10;
                    else if (badgeCount == 1) level = (Random() % 6) + 20;
                    else if (badgeCount == 2) level = (Random() % 6) + 30;
                    else if (badgeCount == 3) level = (Random() % 6) + 35;
                    else if (badgeCount == 4) level = (Random() % 6) + 40;
                }
                else if (gTrainers[gTrainerBattleOpponent_A].trainerClass != TRAINER_CLASS_LEADER && IsCurMapInLocationList(sGymMaps)) {
                    if (badgeCount == 0) level = (Random() % 4) + 13;
                    else if (badgeCount == 1) level = (Random() % 6) + 23;
                    else if (badgeCount == 2) level = (Random() % 6) + 33;
                    else if (badgeCount == 3) level = (Random() % 6) + 38;
                    else if (badgeCount == 4) level = (Random() % 6) + 43;
                }
                else if (gTrainers[gTrainerBattleOpponent_A].trainerClass == TRAINER_CLASS_LEADER) {
                    if (badgeCount == 0) level = (Random() % 4) + 15;
                    else if (badgeCount == 1) level = (Random() % 6) + 25;
                    else if (badgeCount == 2) level = (Random() % 6) + 35;
                    else if (badgeCount == 3) level = (Random() % 6) + 40;
                    else if (badgeCount == 4) level = (Random() % 6) + 45;
                }
                if (gEvolutionTable[species][0].method == EVO_LEVEL && gEvolutionTable[species][0].param <= level) species = gEvolutionTable[species][0].targetSpecies;
                if (gEvolutionTable[species][0].method == EVO_LEVEL && gEvolutionTable[species][0].param <= level) species = gEvolutionTable[species][0].targetSpecies;
                for (j = 0; gSpeciesNames[species][j] != EOS; j++)
                    nameHash += gSpeciesNames[species][j];

                personalityValue += nameHash << 8;
                fixedIV = partyData[i].iv * MAX_PER_STAT_IVS / 255;
                CreateMon_(&party[i], species, level, fixedIV, TRUE, personalityValue, OT_ID_RANDOM_NO_SHINY, 0);
                break;
            }
            case F_TRAINER_PARTY_CUSTOM_MOVESET:
            {
                const struct TrainerMonNoItemCustomMoves *partyData = gTrainers[trainerNum].party.NoItemCustomMoves;

                for (j = 0; gSpeciesNames[partyData[i].species][j] != EOS; j++)
                    nameHash += gSpeciesNames[partyData[i].species][j];

                personalityValue += nameHash << 8;
                fixedIV = partyData[i].iv * MAX_PER_STAT_IVS / 255;
                CreateMon_(&party[i], partyData[i].species, partyData[i].lvl, fixedIV, TRUE, personalityValue, OT_ID_RANDOM_NO_SHINY, 0);

                for (j = 0; j < MAX_MON_MOVES; j++)
                {
                    SetMonData(&party[i], MON_DATA_MOVE1 + j, &partyData[i].moves[j]);
                    SetMonData(&party[i], MON_DATA_PP1 + j, &gBattleMoves[partyData[i].moves[j]].pp);
                }
                break;
            }
            case F_TRAINER_PARTY_HELD_ITEM:
            {
                const struct TrainerMonItemDefaultMoves *partyData = gTrainers[trainerNum].party.ItemDefaultMoves;

                for (j = 0; gSpeciesNames[partyData[i].species][j] != EOS; j++)
                    nameHash += gSpeciesNames[partyData[i].species][j];

                personalityValue += nameHash << 8;
                fixedIV = partyData[i].iv * MAX_PER_STAT_IVS / 255;
                CreateMon_(&party[i], partyData[i].species, partyData[i].lvl, fixedIV, TRUE, personalityValue, OT_ID_RANDOM_NO_SHINY, 0);

                SetMonData(&party[i], MON_DATA_HELD_ITEM, &partyData[i].heldItem);
                break;
            }
            case F_TRAINER_PARTY_CUSTOM_MOVESET | F_TRAINER_PARTY_HELD_ITEM:
            {
                const struct TrainerMonItemCustomMoves *partyData = gTrainers[trainerNum].party.ItemCustomMoves;

                for (j = 0; gSpeciesNames[partyData[i].species][j] != EOS; j++)
                    nameHash += gSpeciesNames[partyData[i].species][j];

                personalityValue += nameHash << 8;
                fixedIV = partyData[i].iv * MAX_PER_STAT_IVS / 255;
                CreateMon_(&party[i], partyData[i].species, partyData[i].lvl, fixedIV, TRUE, personalityValue, OT_ID_RANDOM_NO_SHINY, 0);
                SetMonData(&party[i], MON_DATA_HELD_ITEM, &partyData[i].heldItem);

                for (j = 0; j < MAX_MON_MOVES; j++)
                {
                    SetMonData(&party[i], MON_DATA_MOVE1 + j, &partyData[i].moves[j]);
                    SetMonData(&party[i], MON_DATA_PP1 + j, &gBattleMoves[partyData[i].moves[j]].pp);
                }
                break;
            }
            }
        }

        gBattleTypeFlags |= gTrainers[trainerNum].doubleBattle;
    }

    return gTrainers[trainerNum].partySize;
}