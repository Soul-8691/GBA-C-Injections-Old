#include "../include/global.h"
#include "../include/daycare.h"
#include "../include/event_data.h"
#include "../include/field_effect.h"
#include "../include/constants/items.h"
#include "../include/mail_data.h"
#include "../include/main.h"
#include "../include/menu.h"
#include "../include/constants/moves.h"
#include "../include/name_string_util.h"
#include "../include/overworld.h"
#include "../include/party_menu.h"
#include "../include/pokemon.h"
#include "../include/pokemon_storage_system.h"
#include "../include/random.h"
#include "../include/script.h"
#include "../include/constants/songs.h"
#include "../include/sound.h"
#include "../include/constants/species.h"
#include "../include/string_util.h"
#include "../include/strings2.h"
#include "../include/text.h"
#include "../include/trade.h"

// Determines what the species of an Egg would be based on the given species.
// It determines this by working backwards through the evolution chain of the
// given species.
u16 GetEggSpecies(u16 species)
{
    int i, j, k;
    bool8 found;

    // Working backwards up to 5 times seems arbitrary, since the maximum number
    // of times would only be 3 for 3-stage evolutions.
    for (i = 0; i < 5; i++)
    {
        found = FALSE;
        for (j = 1; j < NUM_SPECIES; j++)
        {
            for (k = 0; k < 5; k++)
            {
                if (gEvolutionTable[j][k].targetSpecies == species)
                {
                    species = j;
                    found = TRUE;
                    break;
                }
            }

            if (found)
                break;
        }

        if (j == NUM_SPECIES)
            break;
    }

    return species;
}