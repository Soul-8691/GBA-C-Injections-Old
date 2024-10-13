#include "../include/global.h"
#include "../include/constants/abilities.h"
#include "../include/constants/battle_move_effects.h"
#include "../include/constants/hold_effects.h"
#include "../include/constants/items.h"
#include "../include/constants/moves.h"
#include "../include/constants/songs.h"
#include "../include/constants/species.h"
#include "../include/gba/flash_internal.h"
#include "../include/battle.h"
#include "../include/battle_ai_script_commands.h"
#include "../include/battle_controllers.h"
#include "../include/battle_interface.h"
#include "../include/battle_message.h"
#include "../include/battle_setup.h"
#include "../include/battle_util.h"
#include "../include/data2.h"
#include "../include/decompress.h"
#include "../include/event_data.h"
#include "../include/evolution_scene.h"
#include "../include/item.h"
#include "../include/item_menu.h"
#include "../include/link.h"
#include "../include/main.h"
#include "../include/m4a.h"
#include "../include/name_string_util.h"
#include "../include/overworld.h"
#include "../include/palette.h"
#include "../include/party_menu.h"
#include "../include/pokeball.h"
#include "../include/pokeblock.h"
#include "../include/pokedex.h"
#include "../include/pokemon.h"
#include "../include/random.h"
#include "../include/roamer.h"
#include "../include/rom_8077ABC.h"
#include "../include/rom_8094928.h"
#include "../include/safari_zone.h"
#include "../include/sound.h"
#include "../include/sprite.h"
#include "../include/string_util.h"
#include "../include/task.h"
#include "../include/text.h"
#include "../include/trainer.h"
#include "../include/trig.h"
#include "../include/tv.h"
#include "../include/scanline_effect.h"
#include "../include/util.h"
#include "../include/ewram.h"
#include "../include/battle_string_ids.h"

extern u16 gBattlerPartyIndexes[];
extern const struct MonCoords gCastformFrontSpriteCoords[];
extern u8 gBattleMonForms[];

void sub_8010384(struct Sprite *sprite)
{
    u8 r6 = sprite->data[0];
    u16 species;
    u8 yOffset;

    if (gBattleSpriteInfo[r6].transformedSpecies != 0)
        species = gBattleSpriteInfo[r6].transformedSpecies;
    else
        species = sprite->data[2];

    GetMonData(&gEnemyParty[gBattlerPartyIndexes[r6]], MON_DATA_PERSONALITY);  // Unused return value

    if (species == SPECIES_UNOWN)
    {
        u32 personalityValue = GetMonData(&gEnemyParty[gBattlerPartyIndexes[r6]], MON_DATA_PERSONALITY);
        u16 unownForm = ((((personalityValue & 0x3000000) >> 18) | ((personalityValue & 0x30000) >> 12) | ((personalityValue & 0x300) >> 6) | (personalityValue & 3)) % 0x1C);
        u16 unownSpecies;

        if (unownForm == 0)
            unownSpecies = SPECIES_UNOWN;  // Use the A Unown form
        else
            unownSpecies = SPECIES_EGG + unownForm;  // Use one of the other Unown letters

        yOffset = gMonFrontPicCoords[unownSpecies].y_offset;
    }
    else if (species == SPECIES_CASTFORM)
    {
        yOffset = gCastformFrontSpriteCoords[gBattleMonForms[r6]].y_offset;
    }
    else if (species > NUM_SPECIES)
    {
        yOffset = gMonFrontPicCoords[SPECIES_NONE].y_offset;
    }
    else
    {
        yOffset = gMonFrontPicCoords[species].y_offset;
    }

    sprite->data[3] = 8 - yOffset / 8;
    sprite->data[4] = 1;
    sprite->callback = sub_8010494;
}