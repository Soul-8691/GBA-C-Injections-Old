#include "../include/global.h"
#include "../include/gflib.h"
#include "../include/constants/songs.h"
#include "../include/easy_chat.h"
#include "../include/task.h"
#include "../include/link.h"
#include "../include/link_rfu.h"
#include "../include/util.h"
#include "../include/script.h"
#include "../include/event_data.h"
#include "../include/battle_tower.h"
#include "../include/new_game.h"
#include "../include/wonder_news.h"
#include "../include/mystery_gift_menu.h"
#include "../include/help_system.h"
#include "../include/mystery_gift.h"
#include "../include/strings.h"

bool32 ValidateStamp(const u16 * stamp)
{
    if (stamp[STAMP_ID] == 0)
        return FALSE;
    if (stamp[STAMP_SPECIES] == SPECIES_NONE)
        return FALSE;
    if (stamp[STAMP_SPECIES] >= NUM_SPECIES)
        return FALSE;
    return TRUE;
}