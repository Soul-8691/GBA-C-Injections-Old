#include "../include/global.h"
#include "../include/gflib.h"
#include "../include/decompress.h"
#include "../include/event_data.h"
#include "../include/event_object_movement.h"
#include "../include/field_camera.h"
#include "../include/field_control_avatar.h"
#include "../include/field_effect.h"
#include "../include/field_effect_helpers.h"
#include "../include/field_effect_scripts.h"
#include "../include/field_fadetransition.h"
#include "../include/field_player_avatar.h"
#include "../include/field_weather.h"
#include "../include/fieldmap.h"
#include "../include/help_system.h"
#include "../include/metatile_behavior.h"
#include "../include/new_menu_helpers.h"
#include "../include/overworld.h"
#include "../include/party_menu.h"
#include "../include/quest_log.h"
#include "../include/script.h"
#include "../include/special_field_anim.h"
#include "../include/task.h"
#include "../include/trainer_pokemon_sprites.h"
#include "../include/trig.h"
#include "../include/util.h"
#include "../include/constants/event_object_movement.h"
#include "../include/constants/metatile_behaviors.h"
#include "../include/constants/songs.h"
#include "../include/constants/sound.h"

u32 FldEff_FieldMoveShowMonInit_(void)
{
    u32 r6 = gFieldEffectArguments[0] & 0x80000000;
    u8 partyIdx = gFieldEffectArguments[0];
    gFieldEffectArguments[0] = GetMonData(&gPlayerParty[partyIdx], MON_DATA_SPECIES);
    gFieldEffectArguments[1] = GetMonData(&gPlayerParty[partyIdx], MON_DATA_OT_ID);
    gFieldEffectArguments[2] = GetMonData(&gPlayerParty[partyIdx], MON_DATA_PERSONALITY);
    gFieldEffectArguments[0] |= r6;
    // FieldEffectStart(FLDEFF_FIELD_MOVE_SHOW_MON);
    FieldEffectActiveListRemove(FLDEFF_FIELD_MOVE_SHOW_MON_INIT);
    return 0;
}