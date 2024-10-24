#include "../include/global.h"
#include "../include/metatile_behavior.h"
#include "../include/constants/metatile_behaviors.h"

bool8 MetatileBehavior_IsSand(u8 metatileBehavior)
{
    if (metatileBehavior == MB_SAND)
        return TRUE;
    else
        return FALSE;
}

bool8 MetatileBehavior_IsSandWildEncounter(u8 metatileBehavior)
{
    if (MetatileBehavior_IsSurfableWaterOrUnderwater(metatileBehavior) == FALSE
     && MetatileBehavior_IsSand(metatileBehavior) == TRUE)
        return TRUE;
    else
        return FALSE;
}

