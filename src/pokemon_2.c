#include "../include/global.h"
#include "../include/constants/hold_effects.h"
#include "../include/constants/moves.h"
#include "../include/battle.h"
#include "../include/battle_util.h"
#include "../include/data2.h"
#include "../include/event_data.h"
#include "../include/main.h"
#include "../include/pokemon.h"
#include "../include/random.h"
#include "../include/rom_8077ABC.h"
#include "../include/constants/species.h"
#include "../include/sprite.h"
#include "../include/string_util.h"
#include "../include/strings2.h"
#include "../include/text.h"
#include "../include/trainer.h"
#include "../include/util.h"
#include "../include/ewram.h"

void GetSpeciesName_(u8 *name, u16 species)
{
    s32 i;

    for (i = 0; i <= POKEMON_NAME_LENGTH; i++)
    {
        if (species > NUM_SPECIES)
            name[i] = gSpeciesNames[0][i];
        else
            name[i] = gSpeciesNames[species][i];

        if (name[i] == EOS)
            break;
    }

    name[i] = EOS;
}