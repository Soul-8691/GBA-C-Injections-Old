#include "../include/global.h"
#include "../include/constants/hold_effects.h"
#include "../include/constants/items.h"
#include "../include/constants/moves.h"
#include "../include/battle.h"
#include "../include/battle_message.h"
#include "../include/data2.h"
#include "../include/event_data.h"
#include "../include/item.h"
#include "../include/link.h"
#include "../include/m4a.h"
#include "../include/main.h"
#include "../include/move_tutor_menu.h"
#include "../include/pokemon.h"
#include "../include/pokedex.h"
#include "../include/random.h"
#include "../include/overworld.h"
#include "../include/rom_8077ABC.h"
#include "../include/rom_8094928.h"
#include "../include/rtc.h"
#include "../include/constants/songs.h"
#include "../include/sound.h"
#include "../include/constants/species.h"
#include "../include/sprite.h"
#include "../include/string_util.h"
#include "../include/text.h"
#include "../include/trainer.h"
#include "../include/util.h"
#include "../include/ewram.h"

const u8 *GetMonSpritePalFromOtIdPersonality_(u16 species, u32 otId, u32 personality)
{
    u32 shinyValue;

    shinyValue = HIHALF(otId) ^ LOHALF(otId) ^ HIHALF(personality) ^ LOHALF(personality);
    if (shinyValue < 8)
        return gMonShinyPaletteTable[species].data;
    else
        return gMonPaletteTable[species].data;
}