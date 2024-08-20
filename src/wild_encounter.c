#include "../include/global.h"
#include "../include/random.h"
#include "../include/wild_encounter.h"
#include "../include/event_data.h"
#include "../include/fieldmap.h"
#include "../include/random.h"
#include "../include/roamer.h"
#include "../include/field_player_avatar.h"
#include "../include/battle_setup.h"
#include "../include/overworld.h"
#include "../include/metatile_behavior.h"
#include "../include/event_scripts.h"
#include "../include/script.h"
#include "../include/link.h"
#include "../include/quest_log.h"
#include "../include/constants/maps.h"
#include "../include/constants/abilities.h"
#include "../include/constants/items.h"

extern struct Evolution gEvolutionTable[][EVOS_PER_MON];

enum
{
    WILD_AREA_LAND,
    WILD_AREA_WATER,
    WILD_AREA_ROCKS,
    WILD_AREA_FISHING,
};

#define WILD_CHECK_REPEL    0x1
#define WILD_CHECK_KEEN_EYE 0x2

static const u16 sForestMaps[] = 
{
    MAP_VALENCIA_PARK,
    MAP_POKEMON_PARK
};

static const u16 sForestMons[] = 
{
    SPECIES_CATERPIE,
    SPECIES_WEEDLE,
    SPECIES_PARAS,
    SPECIES_VENONAT,
    SPECIES_EXEGGCUTE,
    SPECIES_MEOWTH,
    SPECIES_IGGLYBUFF,
    SPECIES_DITTO,
    SPECIES_FARFETCHD,
    SPECIES_EEVEE,
    SPECIES_BULBASAUR
};

bool8 TryGenerateWildMonLevelScaling(const struct WildPokemonInfo * info, u8 area, u8 flags)
{
    u8 slot = 0;
    u8 level;
    u8 badgeCount = CountBadgesForOverworldWhiteOutLossCalculation();
    u16 species;
    switch (area)
    {
    case WILD_AREA_LAND:
        slot = ChooseWildMonIndex_Land();
        break;
    case WILD_AREA_WATER:
        slot = ChooseWildMonIndex_WaterRock();
        break;
    case WILD_AREA_ROCKS:
        slot = ChooseWildMonIndex_WaterRock();
        break;
    }
    level = ChooseWildMonLevel(&info->wildPokemon[slot]);
    if (badgeCount == 0) level = (Random() % 3) + 10;
    else if (badgeCount == 1) level = (Random() % 6) + 7;
    else if (badgeCount == 2) level = (Random() % 6) + 11;
    else if (badgeCount == 3) level = (Random() % 6) + 15;
    else if (badgeCount == 4) level = (Random() % 6) + 19;
    else if (badgeCount == 5) level = (Random() % 6) + 23;
    else if (badgeCount == 6) level = (Random() % 6) + 27;
    else if (badgeCount == 7) level = (Random() % 6) + 31;
    else if (badgeCount == 8) level = (Random() % 6) + 35;
    species = GetEggSpecies(info->wildPokemon[slot].species);
    // if (IsCurMapInLocationList(sForestMaps))
    // {
    //     if (Random() % 100 < 15)
    //         species = GetEggSpecies(sForestMons[0]);
    //     else if (Random() % 100 < 30)
    //         species = GetEggSpecies(sForestMons[1]);
    //     else if (Random() % 100 < 45)
    //         species = GetEggSpecies(sForestMons[2]);
    //     else if (Random() % 100 < 55)
    //         species = GetEggSpecies(sForestMons[3]);
    //     else if (Random() % 100 < 65)
    //         species = GetEggSpecies(sForestMons[4]);
    //     else if (Random() % 100 < 75)
    //         species = GetEggSpecies(sForestMons[5]);
    //     else if (Random() % 100 < 85)
    //         species = GetEggSpecies(sForestMons[6]);
    //     else if (Random() % 100 < 90)
    //         species = GetEggSpecies(sForestMons[7]);
    //     else if (Random() % 100 < 94)
    //         species = GetEggSpecies(sForestMons[8]);
    //     else if (Random() % 100 < 97)
    //         species = GetEggSpecies(sForestMons[9]);
    //     else
    //         species = GetEggSpecies(sForestMons[10]);
    // }
    if (gEvolutionTable[species][0].method == EVO_LEVEL && gEvolutionTable[species][0].param <= level) species = gEvolutionTable[species][0].targetSpecies;
    if (gEvolutionTable[species][0].method == EVO_LEVEL && gEvolutionTable[species][0].param <= level) species = gEvolutionTable[species][0].targetSpecies;
    if (flags == WILD_CHECK_REPEL && !IsWildLevelAllowedByRepel(level))
    {
        return FALSE;
    }
    GenerateWildMon(species, level, slot);
    return TRUE;
}