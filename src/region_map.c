#include "../include/global.h"
#include "../include/gflib.h"
#include "../include/scanline_effect.h"
#include "../include/task.h"
#include "../include/m4a.h"
#include "../include/overworld.h"
#include "../include/event_data.h"
#include "../include/region_map.h"
#include "../include/party_menu.h"
#include "../include/field_effect.h"
#include "../include/new_menu_helpers.h"
#include "../include/menu.h"
#include "../include/strings.h"
#include "../include/map_preview_screen.h"
#include "../include/constants/songs.h"
#include "../include/constants/region_map_sections.h"
#include "../include/constants/heal_locations.h"
#include "../include/constants/maps.h"

enum {
    MAPSECTYPE_NONE,
    MAPSECTYPE_ROUTE,
    MAPSECTYPE_VISITED,
    MAPSECTYPE_NOT_VISITED,
    MAPSECTYPE_UNKNOWN, // Checked but never used
};

u8 GetMapsecType(u8 mapsec)
{
    switch (mapsec)
    {
    case MAPSEC_PALLET_TOWN:
        return FlagGet(FLAG_WORLD_MAP_PALLET_TOWN) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_VIRIDIAN_CITY:
        return FlagGet(FLAG_WORLD_MAP_VIRIDIAN_CITY) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_PEWTER_CITY:
        return FlagGet(FLAG_WORLD_MAP_PEWTER_CITY) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_CERULEAN_CITY:
        return FlagGet(FLAG_WORLD_MAP_CERULEAN_CITY) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_LAVENDER_TOWN:
        return FlagGet(FLAG_WORLD_MAP_LAVENDER_TOWN) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_VERMILION_CITY:
        return FlagGet(FLAG_WORLD_MAP_VERMILION_CITY) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_CELADON_CITY:
        return FlagGet(FLAG_WORLD_MAP_CELADON_CITY) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_FUCHSIA_CITY:
        return FlagGet(FLAG_WORLD_MAP_FUCHSIA_CITY) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_CINNABAR_ISLAND:
        return FlagGet(FLAG_WORLD_MAP_CINNABAR_ISLAND) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_INDIGO_PLATEAU:
        return FlagGet(FLAG_WORLD_MAP_INDIGO_PLATEAU_EXTERIOR) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_SAFFRON_CITY:
        return FlagGet(FLAG_WORLD_MAP_SAFFRON_CITY) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_ONE_ISLAND:
        return FlagGet(FLAG_WORLD_MAP_ONE_ISLAND) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_TWO_ISLAND:
        return FlagGet(FLAG_WORLD_MAP_TWO_ISLAND) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_THREE_ISLAND:
        return FlagGet(FLAG_WORLD_MAP_THREE_ISLAND) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_FOUR_ISLAND:
        return FlagGet(FLAG_WORLD_MAP_FOUR_ISLAND) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_FIVE_ISLAND:
        return FlagGet(FLAG_WORLD_MAP_FIVE_ISLAND) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_SEVEN_ISLAND:
        return FlagGet(FLAG_WORLD_MAP_SEVEN_ISLAND) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_SIX_ISLAND:
        return FlagGet(FLAG_WORLD_MAP_SIX_ISLAND) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_ROUTE_4_POKECENTER:
        return FlagGet(FLAG_WORLD_MAP_ROUTE4_POKEMON_CENTER_1F) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_ROUTE_10_POKECENTER:
        return FlagGet(FLAG_WORLD_MAP_ROUTE10_POKEMON_CENTER_1F) ? MAPSECTYPE_VISITED : MAPSECTYPE_VISITED;
    case MAPSEC_NONE:
        return MAPSECTYPE_NONE;
    default:
        return MAPSECTYPE_ROUTE;
    }
}