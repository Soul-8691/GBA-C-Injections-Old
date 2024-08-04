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

extern const u8 gSpeciesNames_[][POKEMON_NAME_LENGTH + 1];
extern const struct CompressedSpritePalette gMonPaletteTable_[];
extern const struct CompressedSpritePalette gMonShinyPaletteTable_[];

void GetSpeciesName_(u8 *name, u16 species)
{
    s32 i;

    // Hmm? FRLG has < while Ruby/Emerald has <=
    for (i = 0; i < POKEMON_NAME_LENGTH; i++)
    {
        if (species > NUM_SPECIES)
            name[i] = gSpeciesNames_[0][i];
        else
            name[i] = gSpeciesNames_[species][i];

        if (name[i] == EOS)
            break;
    }

    name[i] = EOS;
}

const u32 *GetMonSpritePalFromSpeciesAndPersonality_(u16 species, u32 otId, u32 personality)
{
    u32 shinyValue;

    if (species > NUM_SPECIES)
        return gMonPaletteTable_[0].data;

    shinyValue = GET_SHINY_VALUE(otId, personality);
    if (shinyValue < SHINY_ODDS)
        return gMonShinyPaletteTable_[species].data;
    else
        return gMonPaletteTable_[species].data;
}