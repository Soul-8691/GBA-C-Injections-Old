#include "../include/global.h"
#include "../include/gflib.h"
#include "../include/data.h"
#include "../include/battle.h"
#include "../include/constants/items.h"
#include "../include/mail_data.h"
#include "../include/pokemon_storage_system.h"
#include "../include/event_data.h"
#include "../include/random.h"
#include "../include/constants/moves.h"
#include "../include/menu.h"
#include "../include/new_menu_helpers.h"
#include "../include/script.h"
#include "../include/strings.h"
#include "../include/party_menu.h"
#include "../include/list_menu.h"
#include "../include/overworld.h"
#include "../include/pokedex.h"
#include "../include/decompress.h"
#include "../include/constants/songs.h"
#include "../include/text_window.h"
#include "../include/trig.h"
#include "../include/m4a.h"
#include "../include/graphics.h"
#include "../include/scanline_effect.h"
#include "../include/naming_screen.h"
#include "../include/help_system.h"
#include "../include/field_fadetransition.h"
#include "../include/trade.h"
#include "../include/constants/daycare.h"
#include "../include/constants/region_map_sections.h"

extern const struct Evolution gEvolutionTable[][EVOS_PER_MON];

// Determines what the species of an Egg would be based on the given species.
// It determines this by working backwards through the evolution chain of the
// given species.
u16 GetEggSpecies(u16 species)
{
    int i, j, k;
    bool8 found;

    // Working backwards up to 5 times seems arbitrary, since the maximum number
    // of times would only be 3 for 3-stage evolutions.
    for (i = 0; i < EVOS_PER_MON; i++)
    {
        found = FALSE;
        for (j = 1; j < NUM_SPECIES; j++)
        {
            for (k = 0; k < EVOS_PER_MON; k++)
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