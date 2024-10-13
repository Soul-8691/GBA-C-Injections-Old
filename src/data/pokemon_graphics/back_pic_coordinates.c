#include "../../../include/constants/species.h"
#include "../../../include/gba/types.h"
#include "../../../include/data2.h"
#define DIV_ROUND_UP(val, roundBy) (((val) / (roundBy)) + (((val) % (roundBy)) ? 1 : 0))
#define MON_COORDS_SIZE(width, height) (DIV_ROUND_UP(width, 8) << 4 | DIV_ROUND_UP(height, 8))

// All Pokémon pics are 64x64, but this data table defines where in this 64x64 frame
// the sprite's non-transparent pixels actually are.
// .coords is the dimensions of this drawn pixel area.
// .y_offset is the number of pixels between the drawn pixel area and the bottom edge.
const struct MonCoords gMonBackPicCoords[] =
{
    [SPECIES_NONE]        = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_BULBASAUR]   = { .coords = MON_COORDS_SIZE(48, 32), .y_offset = 16 },
    [SPECIES_IVYSAUR]     = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_VENUSAUR]    = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_CHARMANDER]  = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 14 },
    [SPECIES_CHARMELEON]  = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_CHARIZARD]   = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_SQUIRTLE]    = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 14 },
    [SPECIES_WARTORTLE]   = { .coords = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_BLASTOISE]   = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_CATERPIE]    = { .coords = MON_COORDS_SIZE(40, 40), .y_offset = 15 },
    [SPECIES_METAPOD]     = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_BUTTERFREE]  = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_WEEDLE]      = { .coords = MON_COORDS_SIZE(40, 48), .y_offset = 11 },
    [SPECIES_KAKUNA]      = { .coords = MON_COORDS_SIZE(32, 48), .y_offset = 10 },
    [SPECIES_BEEDRILL]    = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_PIDGEY]      = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_PIDGEOTTO]   = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 12 },
    [SPECIES_PIDGEOT]     = { .coords = MON_COORDS_SIZE(56, 64), .y_offset =  2 },
    [SPECIES_RATTATA]     = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_RATICATE]    = { .coords = MON_COORDS_SIZE(56, 40), .y_offset = 13 },
    [SPECIES_SPEAROW]     = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_FEAROW]      = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_EKANS]       = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_ARBOK]       = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_PIKACHU]     = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_RAICHU]      = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_SANDSHREW]   = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_SANDSLASH]   = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_NIDORAN_F]   = { .coords = MON_COORDS_SIZE(40, 40), .y_offset = 12 },
    [SPECIES_NIDORINA]    = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_NIDOQUEEN]   = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_NIDORAN_M]   = { .coords = MON_COORDS_SIZE(40, 48), .y_offset =  8 },
    [SPECIES_NIDORINO]    = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_NIDOKING]    = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_CLEFAIRY]    = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_CLEFABLE]    = { .coords = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_VULPIX]      = { .coords = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_NINETALES]   = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_JIGGLYPUFF]  = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_WIGGLYTUFF]  = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_ZUBAT]       = { .coords = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_GOLBAT]      = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_ODDISH]      = { .coords = MON_COORDS_SIZE(40, 48), .y_offset = 11 },
    [SPECIES_GLOOM]       = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_VILEPLUME]   = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_PARAS]       = { .coords = MON_COORDS_SIZE(48, 24), .y_offset = 20 },
    [SPECIES_PARASECT]    = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_VENONAT]     = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_VENOMOTH]    = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_DIGLETT]     = { .coords = MON_COORDS_SIZE(40, 32), .y_offset = 16 },
    [SPECIES_DUGTRIO]     = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_MEOWTH]      = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_PERSIAN]     = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_PSYDUCK]     = { .coords = MON_COORDS_SIZE(48, 56), .y_offset =  7 },
    [SPECIES_GOLDUCK]     = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_MANKEY]      = { .coords = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_PRIMEAPE]    = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_GROWLITHE]   = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_ARCANINE]    = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_POLIWAG]     = { .coords = MON_COORDS_SIZE(56, 32), .y_offset = 16 },
    [SPECIES_POLIWHIRL]   = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_POLIWRATH]   = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_ABRA]        = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_KADABRA]     = { .coords = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_ALAKAZAM]    = { .coords = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
    [SPECIES_MACHOP]      = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_MACHOKE]     = { .coords = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_MACHAMP]     = { .coords = MON_COORDS_SIZE(48, 56), .y_offset =  4 },
    [SPECIES_BELLSPROUT]  = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_WEEPINBELL]  = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_VICTREEBEL]  = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_TENTACOOL]   = { .coords = MON_COORDS_SIZE(40, 48), .y_offset = 10 },
    [SPECIES_TENTACRUEL]  = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_GEODUDE]     = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_GRAVELER]    = { .coords = MON_COORDS_SIZE(56, 40), .y_offset = 12 },
    [SPECIES_GOLEM]       = { .coords = MON_COORDS_SIZE(64, 32), .y_offset = 16 },
    [SPECIES_PONYTA]      = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_RAPIDASH]    = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_SLOWPOKE]    = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 14 },
    [SPECIES_SLOWBRO]     = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_MAGNEMITE]   = { .coords = MON_COORDS_SIZE(32, 24), .y_offset = 20 },
    [SPECIES_MAGNETON]    = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_FARFETCHD]   = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_DODUO]       = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_DODRIO]      = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_SEEL]        = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_DEWGONG]     = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_GRIMER]      = { .coords = MON_COORDS_SIZE(56, 40), .y_offset = 12 },
    [SPECIES_MUK]         = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_SHELLDER]    = { .coords = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_CLOYSTER]    = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_GASTLY]      = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 14 },
    [SPECIES_HAUNTER]     = { .coords = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_GENGAR]      = { .coords = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_ONIX]        = { .coords = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_DROWZEE]     = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_HYPNO]       = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_KRABBY]      = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_KINGLER]     = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_VOLTORB]     = { .coords = MON_COORDS_SIZE(40, 40), .y_offset = 14 },
    [SPECIES_ELECTRODE]   = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_EXEGGCUTE]   = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_EXEGGUTOR]   = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_CUBONE]      = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_MAROWAK]     = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_HITMONLEE]   = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_HITMONCHAN]  = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_LICKITUNG]   = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 14 },
    [SPECIES_KOFFING]     = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_WEEZING]     = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_RHYHORN]     = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 12 },
    [SPECIES_RHYDON]      = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_CHANSEY]     = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_TANGELA]     = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 14 },
    [SPECIES_KANGASKHAN]  = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_HORSEA]      = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_SEADRA]      = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_GOLDEEN]     = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_SEAKING]     = { .coords = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_STARYU]      = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_STARMIE]     = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 14 },
    [SPECIES_MR_MIME]     = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_SCYTHER]     = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_JYNX]        = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_ELECTABUZZ]  = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_MAGMAR]      = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_PINSIR]      = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_TAUROS]      = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_MAGIKARP]    = { .coords = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_GYARADOS]    = { .coords = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_LAPRAS]      = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_DITTO]       = { .coords = MON_COORDS_SIZE(40, 32), .y_offset = 17 },
    [SPECIES_EEVEE]       = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_VAPOREON]    = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_JOLTEON]     = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_FLAREON]     = { .coords = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
    [SPECIES_PORYGON]     = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_OMANYTE]     = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_OMASTAR]     = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_KABUTO]      = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_KABUTOPS]    = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_AERODACTYL]  = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_SNORLAX]     = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_ARTICUNO]    = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_ZAPDOS]      = { .coords = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_MOLTRES]     = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_DRATINI]     = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_DRAGONAIR]   = { .coords = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_DRAGONITE]   = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_MEWTWO]      = { .coords = MON_COORDS_SIZE(56, 64), .y_offset =  1 },
    [SPECIES_MEW]         = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_CHIKORITA]   = { .coords = MON_COORDS_SIZE(40, 48), .y_offset = 10 },
    [SPECIES_BAYLEEF]     = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_MEGANIUM]    = { .coords = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_CYNDAQUIL]   = { .coords = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_QUILAVA]     = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_TYPHLOSION]  = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_TOTODILE]    = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_CROCONAW]    = { .coords = MON_COORDS_SIZE(48, 56), .y_offset =  7 },
    [SPECIES_FERALIGATR]  = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_SENTRET]     = { .coords = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
    [SPECIES_FURRET]      = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_HOOTHOOT]    = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_NOCTOWL]     = { .coords = MON_COORDS_SIZE(48, 64), .y_offset =  3 },
    [SPECIES_LEDYBA]      = { .coords = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_LEDIAN]      = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_SPINARAK]    = { .coords = MON_COORDS_SIZE(56, 24), .y_offset = 21 },
    [SPECIES_ARIADOS]     = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_CROBAT]      = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_CHINCHOU]    = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_LANTURN]     = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_PICHU]       = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_CLEFFA]      = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 15 },
    [SPECIES_IGGLYBUFF]   = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_TOGEPI]      = { .coords = MON_COORDS_SIZE(40, 32), .y_offset = 16 },
    [SPECIES_TOGETIC]     = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_NATU]        = { .coords = MON_COORDS_SIZE(40, 32), .y_offset = 17 },
    [SPECIES_XATU]        = { .coords = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_MAREEP]      = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_FLAAFFY]     = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_AMPHAROS]    = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_BELLOSSOM]   = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_MARILL]      = { .coords = MON_COORDS_SIZE(56, 40), .y_offset = 12 },
    [SPECIES_AZUMARILL]   = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_SUDOWOODO]   = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_POLITOED]    = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_HOPPIP]      = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_SKIPLOOM]    = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_JUMPLUFF]    = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_AIPOM]       = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_SUNKERN]     = { .coords = MON_COORDS_SIZE(40, 48), .y_offset = 10 },
    [SPECIES_SUNFLORA]    = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_YANMA]       = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_WOOPER]      = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 15 },
    [SPECIES_QUAGSIRE]    = { .coords = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_ESPEON]      = { .coords = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_UMBREON]     = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_MURKROW]     = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  9 },
    [SPECIES_SLOWKING]    = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_MISDREAVUS]  = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_UNOWN]       = { .coords = MON_COORDS_SIZE(24, 48), .y_offset =  8 },
    [SPECIES_WOBBUFFET]   = { .coords = MON_COORDS_SIZE(56, 40), .y_offset = 12 },
    [SPECIES_GIRAFARIG]   = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_PINECO]      = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 15 },
    [SPECIES_FORRETRESS]  = { .coords = MON_COORDS_SIZE(64, 32), .y_offset = 16 },
    [SPECIES_DUNSPARCE]   = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 15 },
    [SPECIES_GLIGAR]      = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_STEELIX]     = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_SNUBBULL]    = { .coords = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_GRANBULL]    = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_QWILFISH]    = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_SCIZOR]      = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_SHUCKLE]     = { .coords = MON_COORDS_SIZE(40, 48), .y_offset = 11 },
    [SPECIES_HERACROSS]   = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_SNEASEL]     = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_TEDDIURSA]   = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_URSARING]    = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_SLUGMA]      = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_MAGCARGO]    = { .coords = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_SWINUB]      = { .coords = MON_COORDS_SIZE(48, 24), .y_offset = 21 },
    [SPECIES_PILOSWINE]   = { .coords = MON_COORDS_SIZE(56, 40), .y_offset = 13 },
    [SPECIES_CORSOLA]     = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_REMORAID]    = { .coords = MON_COORDS_SIZE(56, 40), .y_offset = 13 },
    [SPECIES_OCTILLERY]   = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_DELIBIRD]    = { .coords = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_MANTINE]     = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_SKARMORY]    = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_HOUNDOUR]    = { .coords = MON_COORDS_SIZE(40, 40), .y_offset = 12 },
    [SPECIES_HOUNDOOM]    = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_KINGDRA]     = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_PHANPY]      = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 14 },
    [SPECIES_DONPHAN]     = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_PORYGON2]    = { .coords = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_STANTLER]    = { .coords = MON_COORDS_SIZE(56, 64), .y_offset =  3 },
    [SPECIES_SMEARGLE]    = { .coords = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_TYROGUE]     = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_HITMONTOP]   = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_SMOOCHUM]    = { .coords = MON_COORDS_SIZE(40, 48), .y_offset =  9 },
    [SPECIES_ELEKID]      = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_MAGBY]       = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_MILTANK]     = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_BLISSEY]     = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_RAIKOU]      = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_ENTEI]       = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_SUICUNE]     = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_LARVITAR]    = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_PUPITAR]     = { .coords = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
    [SPECIES_TYRANITAR]   = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_LUGIA]       = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_HO_OH]       = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_CELEBI]      = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_OLD_UNOWN_B] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_C] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_D] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_E] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_F] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_G] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_H] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_I] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_J] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_K] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_L] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_M] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_N] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_O] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_P] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_Q] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_R] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_S] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_T] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_U] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_V] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_W] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_X] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_Y] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_OLD_UNOWN_Z] = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_TREECKO]     = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_GROVYLE]     = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_SCEPTILE]    = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_TORCHIC]     = { .coords = MON_COORDS_SIZE(48, 56), .y_offset =  5 },
    [SPECIES_COMBUSKEN]   = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_BLAZIKEN]    = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_MUDKIP]      = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_MARSHTOMP]   = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_SWAMPERT]    = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_POOCHYENA]   = { .coords = MON_COORDS_SIZE(56, 48), .y_offset =  9 },
    [SPECIES_MIGHTYENA]   = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_ZIGZAGOON]   = { .coords = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_LINOONE]     = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 15 },
    [SPECIES_WURMPLE]     = { .coords = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_SILCOON]     = { .coords = MON_COORDS_SIZE(64, 24), .y_offset = 21 },
    [SPECIES_BEAUTIFLY]   = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_CASCOON]     = { .coords = MON_COORDS_SIZE(56, 24), .y_offset = 20 },
    [SPECIES_DUSTOX]      = { .coords = MON_COORDS_SIZE(64, 24), .y_offset = 20 },
    [SPECIES_LOTAD]       = { .coords = MON_COORDS_SIZE(56, 40), .y_offset = 15 },
    [SPECIES_LOMBRE]      = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_LUDICOLO]    = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_SEEDOT]      = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_NUZLEAF]     = { .coords = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_SHIFTRY]     = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_NINCADA]     = { .coords = MON_COORDS_SIZE(64, 24), .y_offset = 20 },
    [SPECIES_NINJASK]     = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_SHEDINJA]    = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_TAILLOW]     = { .coords = MON_COORDS_SIZE(48, 32), .y_offset = 17 },
    [SPECIES_SWELLOW]     = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_SHROOMISH]   = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_BRELOOM]     = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_SPINDA]      = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_WINGULL]     = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 14 },
    [SPECIES_PELIPPER]    = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_SURSKIT]     = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_MASQUERAIN]  = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  0 },
    [SPECIES_WAILMER]     = { .coords = MON_COORDS_SIZE(64, 24), .y_offset = 21 },
    [SPECIES_WAILORD]     = { .coords = MON_COORDS_SIZE(64, 24), .y_offset = 22 },
    [SPECIES_SKITTY]      = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_DELCATTY]    = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_KECLEON]     = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_BALTOY]      = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_CLAYDOL]     = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_NOSEPASS]    = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 12 },
    [SPECIES_TORKOAL]     = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_SABLEYE]     = { .coords = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_BARBOACH]    = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_WHISCASH]    = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_LUVDISC]     = { .coords = MON_COORDS_SIZE(32, 48), .y_offset = 10 },
    [SPECIES_CORPHISH]    = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_CRAWDAUNT]   = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_FEEBAS]      = { .coords = MON_COORDS_SIZE(48, 56), .y_offset =  7 },
    [SPECIES_MILOTIC]     = { .coords = MON_COORDS_SIZE(48, 64), .y_offset =  2 },
    [SPECIES_CARVANHA]    = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_SHARPEDO]    = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_TRAPINCH]    = { .coords = MON_COORDS_SIZE(56, 40), .y_offset = 14 },
    [SPECIES_VIBRAVA]     = { .coords = MON_COORDS_SIZE(56, 32), .y_offset = 17 },
    [SPECIES_FLYGON]      = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_MAKUHITA]    = { .coords = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_HARIYAMA]    = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_ELECTRIKE]   = { .coords = MON_COORDS_SIZE(64, 32), .y_offset = 16 },
    [SPECIES_MANECTRIC]   = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_NUMEL]       = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 11 },
    [SPECIES_CAMERUPT]    = { .coords = MON_COORDS_SIZE(64, 32), .y_offset = 19 },
    [SPECIES_SPHEAL]      = { .coords = MON_COORDS_SIZE(48, 32), .y_offset = 18 },
    [SPECIES_SEALEO]      = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_WALREIN]     = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_CACNEA]      = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 15 },
    [SPECIES_CACTURNE]    = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_SNORUNT]     = { .coords = MON_COORDS_SIZE(56, 48), .y_offset = 10 },
    [SPECIES_GLALIE]      = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 12 },
    [SPECIES_LUNATONE]    = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_SOLROCK]     = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_AZURILL]     = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_SPOINK]      = { .coords = MON_COORDS_SIZE(40, 48), .y_offset = 11 },
    [SPECIES_GRUMPIG]     = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_PLUSLE]      = { .coords = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_MINUN]       = { .coords = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_MAWILE]      = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  4 },
    [SPECIES_MEDITITE]    = { .coords = MON_COORDS_SIZE(56, 48), .y_offset = 11 },
    [SPECIES_MEDICHAM]    = { .coords = MON_COORDS_SIZE(48, 64), .y_offset =  3 },
    [SPECIES_SWABLU]      = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_ALTARIA]     = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  6 },
    [SPECIES_WYNAUT]      = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  7 },
    [SPECIES_DUSKULL]     = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_DUSCLOPS]    = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_ROSELIA]     = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_SLAKOTH]     = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 15 },
    [SPECIES_VIGOROTH]    = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_SLAKING]     = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  8 },
    [SPECIES_GULPIN]      = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 11 },
    [SPECIES_SWALOT]      = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_TROPIUS]     = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_WHISMUR]     = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_LOUDRED]     = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_EXPLOUD]     = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_CLAMPERL]    = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_HUNTAIL]     = { .coords = MON_COORDS_SIZE(48, 64), .y_offset =  2 },
    [SPECIES_GOREBYSS]    = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_ABSOL]       = { .coords = MON_COORDS_SIZE(56, 64), .y_offset =  3 },
    [SPECIES_SHUPPET]     = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_BANETTE]     = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 12 },
    [SPECIES_SEVIPER]     = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_ZANGOOSE]    = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  1 },
    [SPECIES_RELICANTH]   = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_ARON]        = { .coords = MON_COORDS_SIZE(40, 32), .y_offset = 17 },
    [SPECIES_LAIRON]      = { .coords = MON_COORDS_SIZE(64, 32), .y_offset = 17 },
    [SPECIES_AGGRON]      = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_CASTFORM]    = { .coords = MON_COORDS_SIZE(32, 40), .y_offset = 13 },
    [SPECIES_VOLBEAT]     = { .coords = MON_COORDS_SIZE(56, 48), .y_offset =  8 },
    [SPECIES_ILLUMISE]    = { .coords = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_LILEEP]      = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_CRADILY]     = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_ANORITH]     = { .coords = MON_COORDS_SIZE(64, 24), .y_offset = 23 },
    [SPECIES_ARMALDO]     = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  5 },
    [SPECIES_RALTS]       = { .coords = MON_COORDS_SIZE(32, 40), .y_offset = 13 },
    [SPECIES_KIRLIA]      = { .coords = MON_COORDS_SIZE(40, 56), .y_offset =  6 },
    [SPECIES_GARDEVOIR]   = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  4 },
    [SPECIES_BAGON]       = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_SHELGON]     = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 13 },
    [SPECIES_SALAMENCE]   = { .coords = MON_COORDS_SIZE(56, 56), .y_offset =  6 },
    [SPECIES_BELDUM]      = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_METANG]      = { .coords = MON_COORDS_SIZE(64, 32), .y_offset = 16 },
    [SPECIES_METAGROSS]   = { .coords = MON_COORDS_SIZE(64, 24), .y_offset = 20 },
    [SPECIES_REGIROCK]    = { .coords = MON_COORDS_SIZE(64, 48), .y_offset = 10 },
    [SPECIES_REGICE]      = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 14 },
    [SPECIES_REGISTEEL]   = { .coords = MON_COORDS_SIZE(64, 40), .y_offset = 14 },
    [SPECIES_KYOGRE]      = { .coords = MON_COORDS_SIZE(64, 32), .y_offset = 19 },
    [SPECIES_GROUDON]     = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  7 },
    [SPECIES_RAYQUAZA]    = { .coords = MON_COORDS_SIZE(56, 64), .y_offset =  0 },
    [SPECIES_LATIAS]      = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  2 },
    [SPECIES_LATIOS]      = { .coords = MON_COORDS_SIZE(64, 64), .y_offset =  3 },
    [SPECIES_JIRACHI]     = { .coords = MON_COORDS_SIZE(64, 56), .y_offset =  5 },
    [SPECIES_DEOXYS]      = { .coords = MON_COORDS_SIZE(64, 48), .y_offset =  9 },
    [SPECIES_CHIMECHO]    = { .coords = MON_COORDS_SIZE(32, 56), .y_offset =  7 },
    [SPECIES_EGG]         = { .coords = MON_COORDS_SIZE(24, 48), .y_offset = 10 },
    [SPECIES_UNOWN_B]     = { .coords = MON_COORDS_SIZE(40, 48), .y_offset =  9 },
    [SPECIES_UNOWN_C]     = { .coords = MON_COORDS_SIZE(48, 56), .y_offset =  6 },
    [SPECIES_UNOWN_D]     = { .coords = MON_COORDS_SIZE(40, 48), .y_offset =  8 },
    [SPECIES_UNOWN_E]     = { .coords = MON_COORDS_SIZE(40, 48), .y_offset = 10 },
    [SPECIES_UNOWN_F]     = { .coords = MON_COORDS_SIZE(48, 48), .y_offset = 10 },
    [SPECIES_UNOWN_G]     = { .coords = MON_COORDS_SIZE(40, 56), .y_offset =  5 },
    [SPECIES_UNOWN_H]     = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_UNOWN_I]     = { .coords = MON_COORDS_SIZE(24, 56), .y_offset =  7 },
    [SPECIES_UNOWN_J]     = { .coords = MON_COORDS_SIZE(32, 48), .y_offset =  9 },
    [SPECIES_UNOWN_K]     = { .coords = MON_COORDS_SIZE(40, 56), .y_offset =  7 },
    [SPECIES_UNOWN_L]     = { .coords = MON_COORDS_SIZE(32, 48), .y_offset = 10 },
    [SPECIES_UNOWN_M]     = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_UNOWN_N]     = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_UNOWN_O]     = { .coords = MON_COORDS_SIZE(48, 48), .y_offset =  8 },
    [SPECIES_UNOWN_P]     = { .coords = MON_COORDS_SIZE(32, 48), .y_offset = 10 },
    [SPECIES_UNOWN_Q]     = { .coords = MON_COORDS_SIZE(40, 40), .y_offset = 15 },
    [SPECIES_UNOWN_R]     = { .coords = MON_COORDS_SIZE(32, 40), .y_offset = 12 },
    [SPECIES_UNOWN_S]     = { .coords = MON_COORDS_SIZE(40, 56), .y_offset =  4 },
    [SPECIES_UNOWN_T]     = { .coords = MON_COORDS_SIZE(32, 40), .y_offset = 13 },
    [SPECIES_UNOWN_U]     = { .coords = MON_COORDS_SIZE(48, 40), .y_offset = 13 },
    [SPECIES_UNOWN_V]     = { .coords = MON_COORDS_SIZE(40, 48), .y_offset = 11 },
    [SPECIES_UNOWN_W]     = { .coords = MON_COORDS_SIZE(40, 40), .y_offset = 13 },
    [SPECIES_UNOWN_X]     = { .coords = MON_COORDS_SIZE(40, 40), .y_offset = 15 },
    [SPECIES_UNOWN_Y]     = { .coords = MON_COORDS_SIZE(32, 48), .y_offset = 10 },
    [SPECIES_UNOWN_Z]     = { .coords = MON_COORDS_SIZE(32, 48), .y_offset = 10 },
    [SPECIES_UNOWN_EMARK] = { .coords = MON_COORDS_SIZE(24, 56), .y_offset =  6 },
    [SPECIES_UNOWN_QMARK] = { .coords = MON_COORDS_SIZE(32, 56), .y_offset =  6 },
};

