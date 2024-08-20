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