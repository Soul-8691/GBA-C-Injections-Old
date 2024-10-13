#include "../include/global.h"
#include "../include/contest.h"
#include "../include/battle.h"
#include "../include/battle_anim.h"
#include "../include/blend_palette.h"
#include "../include/constants/event_objects.h"
#include "../include/constants/items.h"
#include "../include/constants/moves.h"
#include "../include/constants/songs.h"
#include "../include/constants/species.h"
#include "../include/contest_ai.h"
#include "../include/contest_effect.h"
#include "../include/data2.h"
#include "../include/decompress.h"
#include "../include/ewram.h"
#include "../include/graphics.h"
#include "../include/link.h"
#include "../include/m4a.h"
#include "../include/menu.h"
#include "../include/palette.h"
#include "../include/random.h"
#include "../include/rom_8077ABC.h"
#include "../include/sound.h"
#include "../include/sprite.h"
#include "../include/string_util.h"
#include "../include/task.h"
#include "../include/text.h"
#include "../include/util.h"

#include "../include/contest_internal.h"

u16 SanitizeSpecies_(u16 species)
{
    if (species >= NUM_SPECIES)
        species = SPECIES_NONE;
    return species;
}