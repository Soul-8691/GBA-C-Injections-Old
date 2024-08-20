#include "../include/global.h"
#include "../include/gflib.h"
#include "../include/bike.h"
#include "../include/coord_event_weather.h"
#include "../include/daycare.h"
#include "../include/event_data.h"
#include "../include/event_object_movement.h"
#include "../include/event_scripts.h"
#include "../include/fieldmap.h"
#include "../include/field_control_avatar.h"
#include "../include/field_fadetransition.h"
#include "../include/field_player_avatar.h"
#include "../include/field_poison.h"
#include "../include/field_specials.h"
#include "../include/item_menu.h"
#include "../include/link.h"
#include "../include/wonder_news.h"
#include "../include/metatile_behavior.h"
#include "../include/overworld.h"
#include "../include/renewable_hidden_items.h"
#include "../include/quest_log.h"
#include "../include/safari_zone.h"
#include "../include/script.h"
#include "../include/start_menu.h"
#include "../include/trainer_see.h"
#include "../include/vs_seeker.h"
#include "../include/wild_encounter.h"
#include "../include/constants/songs.h"
#include "../include/constants/event_bg.h"
#include "../include/constants/event_objects.h"
#include "../include/constants/maps.h"
#include "../include/constants/metatile_behaviors.h"

extern const u8 SurfEventScript[];

const u8 *GetInteractedWaterScript(struct MapPosition *unused1, u8 metatileBehavior, u8 direction)
{
    if (MetatileBehavior_IsFastWater(metatileBehavior) == TRUE && PartyHasMonWithSurf() == TRUE)
        return EventScript_CurrentTooFast;
    if (IsPlayerFacingSurfableFishableWater() == TRUE)
        return SurfEventScript;

    if (MetatileBehavior_IsWaterfall(metatileBehavior) == TRUE)
    {
        if (FlagGet(FLAG_BADGE07_GET) == TRUE && IsPlayerSurfingNorth() == TRUE)
            return EventScript_Waterfall;
        else
            return EventScript_CantUseWaterfall;
    }
    return NULL;
}