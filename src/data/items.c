#include "../../include/global.h"
#include "../../include/constants/global.h"
#include "../../include/constants/items.h"
#include "../../include/constants/hold_effects.h"
#include "../../include/item.h"
#include "../../include/item_use.h"
#include "../../include/mail.h"

static const u8 sDummyDesc[] = _(
    "?????");

// Pokeballs
static const u8 sMasterBallDesc[] = _(
    "The best BALL that\n"
    "catches a POKéMON\n"
    "without fail.");

static const u8 sUltraBallDesc[] = _(
    "A better BALL with\n"
    "a higher catch rate\n"
    "than a GREAT BALL.");

static const u8 sGreatBallDesc[] = _(
    "A good BALL with a\n"
    "higher catch rate\n"
    "than a POKé BALL.");

static const u8 sPokeBallDesc[] = _(
    "A tool used for\n"
    "catching wild\n"
    "POKéMON.");

static const u8 sSafariBallDesc[] = _(
    "A special BALL that\n"
    "is used only in the\n"
    "SAFARI ZONE.");

static const u8 sNetBallDesc[] = _(
    "A BALL that works\n"
    "well on WATER- and\n"
    "BUG-type POKéMON.");

static const u8 sDiveBallDesc[] = _(
    "A BALL that works\n"
    "better on POKéMON\n"
    "on the ocean floor.");

static const u8 sNestBallDesc[] = _(
    "A BALL that works\n"
    "better on weaker\n"
    "POKéMON.");

static const u8 sRepeatBallDesc[] = _(
    "A BALL that works\n"
    "better on POKéMON\n"
    "caught before.");

static const u8 sTimerBallDesc[] = _(
    "A BALL that gains\n"
    "power in battles\n"
    "taking many turns.");

static const u8 sLuxuryBallDesc[] = _(
    "A cozy BALL that\n"
    "makes POKéMON\n"
    "more friendly.");

static const u8 sPremierBallDesc[] = _(
    "A rare BALL made\n"
    "in commemoration\n"
    "of some event.");

// Medicine
static const u8 sPotionDesc[] = _(
    "Restores the HP of\n"
    "a POKéMON by\n"
    "20 points.");

static const u8 sAntidoteDesc[] = _(
    "Heals a poisoned\n"
    "POKéMON.");

static const u8 sBurnHealDesc[] = _(
    "Heals POKéMON\n"
    "of a burn.");

static const u8 sIceHealDesc[] = _(
    "Defrosts a frozen\n"
    "POKéMON.");

static const u8 sAwakeningDesc[] = _(
    "Awakens a sleeping\n"
    "POKéMON.");

static const u8 sParalyzeHealDesc[] = _(
    "Heals a paralyzed\n"
    "POKéMON.");

static const u8 sFullRestoreDesc[] = _(
    "Fully restores the\n"
    "HP and status of a\n"
    "POKéMON.");

static const u8 sMaxPotionDesc[] = _(
    "Fully restores the\n"
    "HP of a POKéMON.");

static const u8 sHyperPotionDesc[] = _(
    "Restores the HP of\n"
    "a POKéMON by\n"
    "200 points.");

static const u8 sSuperPotionDesc[] = _(
    "Restores the HP of\n"
    "a POKéMON by\n"
    "50 points.");

static const u8 sFullHealDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one POKéMON.");

static const u8 sReviveDesc[] = _(
    "Revives a fainted\n"
    "POKéMON with half\n"
    "its HP.");

static const u8 sMaxReviveDesc[] = _(
    "Revives a fainted\n"
    "POKéMON with all\n"
    "its HP.");

static const u8 sFreshWaterDesc[] = _(
    "A mineral water\n"
    "that restores HP\n"
    "by 50 points.");

static const u8 sSodaPopDesc[] = _(
    "A fizzy soda drink\n"
    "that restores HP\n"
    "by 60 points.");

static const u8 sLemonadeDesc[] = _(
    "A very sweet drink\n"
    "that restores HP\n"
    "by 80 points.");

static const u8 sMoomooMilkDesc[] = _(
    "A nutritious milk\n"
    "that restores HP\n"
    "by 100 points.");

static const u8 sEnergyPowderDesc[] = _(
    "A bitter powder\n"
    "that restores HP\n"
    "by 50 points.");

static const u8 sEnergyRootDesc[] = _(
    "A bitter root\n"
    "that restores HP\n"
    "by 200 points.");

static const u8 sHealPowderDesc[] = _(
    "A bitter powder\n"
    "that heals all\n"
    "status problems.");

static const u8 sRevivalHerbDesc[] = _(
    "A very bitter herb\n"
    "that revives a\n"
    "fainted POKéMON.");

static const u8 sEtherDesc[] = _(
    "Restores the PP\n"
    "of a selected move\n"
    "by 10.");

static const u8 sMaxEtherDesc[] = _(
    "Fully restores the\n"
    "PP of a selected\n"
    "move.");

static const u8 sElixirDesc[] = _(
    "Restores the PP\n"
    "of all moves by 10.");

static const u8 sMaxElixirDesc[] = _(
    "Fully restores the\n"
    "PP of a POKéMON's\n"
    "moves.");

static const u8 sLavaCookieDesc[] = _(
    "A local specialty\n"
    "that heals all\n"
    "status problems.");

static const u8 sBlueFluteDesc[] = _(
    "A glass flute that\n"
    "awakens sleeping\n"
    "POKéMON.");

static const u8 sYellowFluteDesc[] = _(
    "A glass flute that\n"
    "snaps POKéMON\n"
    "out of confusion.");

static const u8 sRedFluteDesc[] = _(
    "A glass flute that\n"
    "snaps POKéMON\n"
    "out of attraction.");

static const u8 sBlackFluteDesc[] = _(
    "A glass flute that\n"
    "keeps away wild\n"
    "POKéMON.");

static const u8 sWhiteFluteDesc[] = _(
    "A glass flute that\n"
    "lures wild POKéMON.");

static const u8 sBerryJuiceDesc[] = _(
    "A 100% pure juice\n"
    "that restores HP\n"
    "by 20 points.");

static const u8 sSacredAshDesc[] = _(
    "Fully revives and\n"
    "restores all\n"
    "fainted POKéMON.");

// Collectibles
static const u8 sShoalSaltDesc[] = _(
    "Salt obtained from\n"
    "deep inside the\n"
    "SHOAL CAVE.");

static const u8 sShoalShellDesc[] = _(
    "A seashell found\n"
    "deep inside the\n"
    "SHOAL CAVE.");

static const u8 sRedShardDesc[] = _(
    "A shard from an\n"
    "ancient item. Can\n"
    "be sold cheaply.");

static const u8 sBlueShardDesc[] = _(
    "A shard from an\n"
    "ancient item. Can\n"
    "be sold cheaply.");

static const u8 sYellowShardDesc[] = _(
    "A shard from an\n"
    "ancient item. Can\n"
    "be sold cheaply.");

static const u8 sGreenShardDesc[] = _(
    "A shard from an\n"
    "ancient item. Can\n"
    "be sold cheaply.");

// Vitamins
static const u8 sHPUpDesc[] = _(
    "Raises the base HP\n"
    "of one POKéMON.");

static const u8 sProteinDesc[] = _(
    "Raises the base\n"
    "ATTACK stat of one\n"
    "POKéMON.");

static const u8 sIronDesc[] = _(
    "Raises the base\n"
    "DEFENSE stat of\n"
    "one POKéMON.");

static const u8 sCarbosDesc[] = _(
    "Raises the base\n"
    "SPEED stat of one\n"
    "POKéMON.");

static const u8 sCalciumDesc[] = _(
    "Raises the base\n"
    "SP. ATK stat of one\n"
    "POKéMON.");

static const u8 sRareCandyDesc[] = _(
    "Raises the level\n"
    "of a POKéMON by\n"
    "one.");

static const u8 sPPUpDesc[] = _(
    "Raises the maximum\n"
    "PP of a selected\n"
    "move.");

static const u8 sZincDesc[] = _(
    "Raises the base\n"
    "SP. DEF stat of one\n"
    "POKéMON.");

static const u8 sPPMaxDesc[] = _(
    "Raises the PP of a\n"
    "move to its maximum\n"
    "points.");

// Battle items
static const u8 sGuardSpecDesc[] = _(
    "Prevents stat\n"
    "reduction when\n"
    "used in battle.");

static const u8 sDireHitDesc[] = _(
    "Raises the\n"
    "critical-hit ratio\n"
    "during one battle.");

static const u8 sXAttackDesc[] = _(
    "Raises the stat\n"
    "ATTACK during one\n"
    "battle.");

static const u8 sXDefendDesc[] = _(
    "Raises the stat\n"
    "DEFENSE during one\n"
    "battle.");

static const u8 sXSpeedDesc[] = _(
    "Raises the stat\n"
    "SPEED during one\n"
    "battle.");

static const u8 sXAccuracyDesc[] = _(
    "Raises accuracy\n"
    "of attack moves\n"
    "during one battle.");

static const u8 sXSpecialDesc[] = _(
    "Raises the stat\n"
    "SP. ATK during one\n"
    "battle.");

static const u8 sPokeDollDesc[] = _(
    "Use to flee from\n"
    "any battle with\n"
    "a wild POKéMON.");

static const u8 sFluffyTailDesc[] = _(
    "Use to flee from\n"
    "any battle with\n"
    "a wild POKéMON.");

// Field items
static const u8 sSuperRepelDesc[] = _(
    "Repels weak wild\n"
    "POKéMON for 200\n"
    "steps.");

static const u8 sMaxRepelDesc[] = _(
    "Repels weak wild\n"
    "POKéMON for 250\n"
    "steps.");

static const u8 sEscapeRopeDesc[] = _(
    "Use to escape\n"
    "instantly from a\n"
    "cave or a dungeon.");

static const u8 sRepelDesc[] = _(
    "Repels weak wild\n"
    "POKéMON for 100\n"
    "steps.");

// Evolution stones
static const u8 sSunStoneDesc[] = _(
    "Makes certain\n"
    "species of POKéMON\n"
    "evolve.");

static const u8 sMoonStoneDesc[] = _(
    "Makes certain\n"
    "species of POKéMON\n"
    "evolve.");

static const u8 sFireStoneDesc[] = _(
    "Makes certain\n"
    "species of POKéMON\n"
    "evolve.");

static const u8 sThunderStoneDesc[] = _(
    "Makes certain\n"
    "species of POKéMON\n"
    "evolve.");

static const u8 sWaterStoneDesc[] = _(
    "Makes certain\n"
    "species of POKéMON\n"
    "evolve.");

static const u8 sLeafStoneDesc[] = _(
    "Makes certain\n"
    "species of POKéMON\n"
    "evolve.");

// Valuable items
static const u8 sTinyMushroomDesc[] = _(
    "A plain mushroom\n"
    "that would sell\n"
    "at a cheap price.");

static const u8 sBigMushroomDesc[] = _(
    "A rare mushroom\n"
    "that would sell at a\n"
    "high price.");

static const u8 sPearlDesc[] = _(
    "A pretty pearl\n"
    "that would sell at a\n"
    "cheap price.");

static const u8 sBigPearlDesc[] = _(
    "A lovely large pearl\n"
    "that would sell at a\n"
    "high price.");

static const u8 sStardustDesc[] = _(
    "Beautiful red sand.\n"
    "Can be sold at a\n"
    "high price.");

static const u8 sStarPieceDesc[] = _(
    "A red gem shard.\n"
    "It would sell for a\n"
    "very high price.");

static const u8 sNuggetDesc[] = _(
    "A nugget of pure\n"
    "gold. Can be sold at\n"
    "a high price.");

static const u8 sHeartScaleDesc[] = _(
    "A lovely scale.\n"
    "It is coveted by\n"
    "collectors.");

// Mail
static const u8 sOrangeMailDesc[] = _(
    "A ZIGZAGOON-print\n"
    "MAIL to be held by\n"
    "a POKéMON.");

static const u8 sHarborMailDesc[] = _(
    "A WINGULL-print\n"
    "MAIL to be held by\n"
    "a POKéMON.");

static const u8 sGlitterMailDesc[] = _(
    "A PIKACHU-print\n"
    "MAIL to be held by\n"
    "a POKéMON.");

static const u8 sMechMailDesc[] = _(
    "A MAGNEMITE-print\n"
    "MAIL to be held by\n"
    "a POKéMON.");

static const u8 sWoodMailDesc[] = _(
    "A SLAKOTH-print\n"
    "MAIL to be held by\n"
    "a POKéMON.");

static const u8 sWaveMailDesc[] = _(
    "A WAILMER-print\n"
    "MAIL to be held by\n"
    "a POKéMON.");

static const u8 sBeadMailDesc[] = _(
    "MAIL featuring a\n"
    "sketch of the\n"
    "holding POKéMON.");

static const u8 sShadowMailDesc[] = _(
    "A DUSKULL-print\n"
    "MAIL to be held by\n"
    "a POKéMON.");

static const u8 sTropicMailDesc[] = _(
    "A BELLOSSOM-print\n"
    "MAIL to be held by\n"
    "a POKéMON.");

static const u8 sDreamMailDesc[] = _(
    "MAIL featuring a\n"
    "sketch of the\n"
    "holding POKéMON.");

static const u8 sFabMailDesc[] = _(
    "A gorgeous-print\n"
    "MAIL to be held\n"
    "by a POKéMON.");

static const u8 sRetroMailDesc[] = _(
    "MAIL featuring the\n"
    "drawings of three\n"
    "POKéMON.");

// Berries
static const u8 sCheriBerryDesc[] = _(
    "A hold item that\n"
    "heals paralysis\n"
    "in battle.");

static const u8 sChestoBerryDesc[] = _(
    "A hold item that\n"
    "awakens POKéMON\n"
    "in battle.");

static const u8 sPechaBerryDesc[] = _(
    "A hold item that\n"
    "heals poisoning\n"
    "in battle.");

static const u8 sRawstBerryDesc[] = _(
    "A hold item that\n"
    "heals a burn in\n"
    "battle.");

static const u8 sAspearBerryDesc[] = _(
    "A hold item that\n"
    "defrosts POKéMON\n"
    "in battle.");

static const u8 sLeppaBerryDesc[] = _(
    "A hold item that\n"
    "restores 10 PP in\n"
    "battle.");

static const u8 sOranBerryDesc[] = _(
    "A hold item that\n"
    "restores 10 HP in\n"
    "battle.");

static const u8 sPersimBerryDesc[] = _(
    "A hold item that\n"
    "heals confusion\n"
    "in battle.");

static const u8 sLumBerryDesc[] = _(
    "A hold item that\n"
    "heals any status\n"
    "problem in battle.");

static const u8 sSitrusBerryDesc[] = _(
    "A hold item that\n"
    "restores 30 HP in\n"
    "battle.");

static const u8 sFigyBerryDesc[] = _(
    "A hold item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sWikiBerryDesc[] = _(
    "A hold item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sMagoBerryDesc[] = _(
    "A hold item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sAguavBerryDesc[] = _(
    "A hold item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sIapapaBerryDesc[] = _(
    "A hold item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sRazzBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow RAZZ.");

static const u8 sBlukBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow BLUK.");

static const u8 sNanabBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow NANAB.");

static const u8 sWepearBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow WEPEAR.");

static const u8 sPinapBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow PINAP.");

static const u8 sPomegBerryDesc[] = _(
    "Makes a POKéMON\n"
    "friendly but lowers\n"
    "base HP.");

static const u8 sKelpsyBerryDesc[] = _(
    "Makes a POKéMON\n"
    "friendly but lowers\n"
    "base ATTACK.");

static const u8 sQualotBerryDesc[] = _(
    "Makes a POKéMON\n"
    "friendly but lowers\n"
    "base DEFENSE.");

static const u8 sHondewBerryDesc[] = _(
    "Makes a POKéMON\n"
    "friendly but lowers\n"
    "base SP. ATK.");

static const u8 sGrepaBerryDesc[] = _(
    "Makes a POKéMON\n"
    "friendly but lowers\n"
    "base SP. DEF.");

static const u8 sTamatoBerryDesc[] = _(
    "Makes a POKéMON\n"
    "friendly but lowers\n"
    "base SPEED.");

static const u8 sCornnBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow CORNN.");

static const u8 sMagostBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow MAGOST.");

static const u8 sRabutaBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow RABUTA.");

static const u8 sNomelBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow NOMEL.");

static const u8 sSpelonBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow SPELON.");

static const u8 sPamtreBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow PAMTRE.");

static const u8 sWatmelBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow WATMEL.");

static const u8 sDurinBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow DURIN.");

static const u8 sBelueBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow BELUE.");

static const u8 sLiechiBerryDesc[] = _(
    "A hold item that\n"
    "raises ATTACK in\n"
    "a pinch.");

static const u8 sGanlonBerryDesc[] = _(
    "A hold item that\n"
    "raises DEFENSE in\n"
    "a pinch.");

static const u8 sSalacBerryDesc[] = _(
    "A hold item that\n"
    "raises SPEED in\n"
    "a pinch.");

static const u8 sPetayaBerryDesc[] = _(
    "A hold item that\n"
    "raises SP. ATK in\n"
    "a pinch.");

static const u8 sApicotBerryDesc[] = _(
    "A hold item that\n"
    "raises SP. DEF in\n"
    "a pinch.");

static const u8 sLansatBerryDesc[] = _(
    "A hold item that\n"
    "ups the critical-\n"
    "hit rate in a pinch.");

static const u8 sStarfBerryDesc[] = _(
    "A hold item that\n"
    "sharply boosts a\n"
    "stat in a pinch.");

static const u8 sEnigmaBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow a mystery.");

// Hold items
static const u8 sBrightPowderDesc[] = _(
    "A hold item that\n"
    "casts a glare to\n"
    "reduce accuracy.");

static const u8 sWhiteHerbDesc[] = _(
    "A hold item that\n"
    "restores any\n"
    "lowered stat.");

static const u8 sMachoBraceDesc[] = _(
    "A hold item that\n"
    "promotes growth,\n"
    "but reduces SPEED.");

static const u8 sExpShareDesc[] = _(
    "A hold item that\n"
    "gets EXP. points\n"
    "from battles.");

static const u8 sQuickClawDesc[] = _(
    "A hold item that\n"
    "occasionally allows\n"
    "the first strike.");

static const u8 sSootheBellDesc[] = _(
    "A hold item that\n"
    "calms spirits and\n"
    "fosters friendship.");

static const u8 sMentalHerbDesc[] = _(
    "A hold item that\n"
    "snaps POKéMON out\n"
    "of infatuation.");

static const u8 sChoiceBandDesc[] = _(
    "Raises a move's\n"
    "power, but permits\n"
    "only that move.");

static const u8 sKingsRockDesc[] = _(
    "A hold item that\n"
    "may cause flinching\n"
    "when the foe is hit.");

static const u8 sSilverPowderDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "BUG-type moves.");

static const u8 sAmuletCoinDesc[] = _(
    "Doubles money in\n"
    "battle if the\n"
    "holder takes part.");

static const u8 sCleanseTagDesc[] = _(
    "A hold item that\n"
    "helps repel wild\n"
    "POKéMON.");

static const u8 sSoulDewDesc[] = _(
    "Hold item: raises\n"
    "SP. ATK & SP. DEF of\n"
    "LATIOS & LATIAS.");

static const u8 sDeepSeaToothDesc[] = _(
    "A hold item that\n"
    "raises the SP. ATK\n"
    "of CLAMPERL.");

static const u8 sDeepSeaScaleDesc[] = _(
    "A hold item that\n"
    "raises the SP. DEF\n"
    "of CLAMPERL.");

static const u8 sSmokeBallDesc[] = _(
    "A hold item that\n"
    "assures fleeing\n"
    "from wild POKéMON.");

static const u8 sEverstoneDesc[] = _(
    "A wondrous hold\n"
    "item that prevents\n"
    "evolution.");

static const u8 sFocusBandDesc[] = _(
    "A hold item that\n"
    "occasionally\n"
    "prevents fainting.");

static const u8 sLuckyEggDesc[] = _(
    "A hold item that\n"
    "boosts EXP. points\n"
    "earned in battle.");

static const u8 sScopeLensDesc[] = _(
    "A hold item that\n"
    "improves the\n"
    "critical-hit rate.");

static const u8 sMetalCoatDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "STEEL-type moves.");

static const u8 sLeftoversDesc[] = _(
    "A hold item that\n"
    "gradually restores\n"
    "HP in battle.");

static const u8 sDragonScaleDesc[] = _(
    "A strange scale\n"
    "held by DRAGON-\n"
    "type POKéMON.");

static const u8 sLightBallDesc[] = _(
    "A hold item that\n"
    "raises the SP. ATK\n"
    "of PIKACHU.");

static const u8 sSoftSandDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "GROUND-type moves.");

static const u8 sHardStoneDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "ROCK-type moves.");

static const u8 sMiracleSeedDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "GRASS-type moves.");

static const u8 sBlackGlassesDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "DARK-type moves.");

static const u8 sBlackBeltDesc[] = _(
    "A hold item that\n"
    "boosts FIGHTING-\n"
    "type moves.");

static const u8 sMagnetDesc[] = _(
    "A hold item that\n"
    "boosts ELECTRIC-\n"
    "type moves.");

static const u8 sMysticWaterDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "WATER-type moves.");

static const u8 sSharpBeakDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "FLYING-type moves.");

static const u8 sPoisonBarbDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "POISON-type moves.");

static const u8 sNeverMeltIceDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "ICE-type moves.");

static const u8 sSpellTagDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "GHOST-type moves.");

static const u8 sTwistedSpoonDesc[] = _(
    "A hold item that\n"
    "boosts PSYCHIC-\n"
    "type moves.");

static const u8 sCharcoalDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "FIRE-type moves.");

static const u8 sDragonFangDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "DRAGON-type moves.");

static const u8 sSilkScarfDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "NORMAL-type moves.");

static const u8 sUpGradeDesc[] = _(
    "A peculiar box made\n"
    "by SILPH CO.");

static const u8 sShellBellDesc[] = _(
    "A hold item that\n"
    "restores HP upon\n"
    "striking the foe.");

static const u8 sSeaIncenseDesc[] = _(
    "A hold item that\n"
    "slightly boosts\n"
    "WATER-type moves.");

static const u8 sLaxIncenseDesc[] = _(
    "A hold item that\n"
    "slightly lowers the\n"
    "foe's accuracy.");

static const u8 sLuckyPunchDesc[] = _(
    "A hold item that\n"
    "raises CHANSEY's\n"
    "critical-hit rate.");

static const u8 sMetalPowderDesc[] = _(
    "A hold item that\n"
    "raises DITTO's\n"
    "DEFENSE.");

static const u8 sThickClubDesc[] = _(
    "A hold item that \n"
    "raises CUBONE or\n"
    "MAROWAK's ATTACK.");

static const u8 sStickDesc[] = _(
    "A hold item that\n"
    "raises FARFETCH'D's\n"
    "critical-hit ratio.");

static const u8 sRedScarfDesc[] = _(
    "A hold item that\n"
    "raises COOL in\n"
    "CONTESTS.");

static const u8 sBlueScarfDesc[] = _(
    "A hold item that\n"
    "raises BEAUTY in\n"
    "CONTESTS.");

static const u8 sPinkScarfDesc[] = _(
    "A hold item that\n"
    "raises CUTE in\n"
    "CONTESTS.");

static const u8 sGreenScarfDesc[] = _(
    "A hold item that\n"
    "raises SMART in\n"
    "CONTESTS.");

static const u8 sYellowScarfDesc[] = _(
    "A hold item that\n"
    "raises TOUGH in\n"
    "CONTESTS.");

// Key items
static const u8 sMachBikeDesc[] = _(
    "A folding bicycle\n"
    "that doubles your\n"
    "speed or better.");

static const u8 sCoinCaseDesc[] = _(
    "A case that holds\n"
    "up to 9,999 COINS.");

static const u8 sItemfinderDesc[] = _(
    "A device that\n"
    "signals an invisible\n"
    "item by sound.");

static const u8 sOldRodDesc[] = _(
    "Use by any body of\n"
    "water to fish for\n"
    "wild POKéMON.");

static const u8 sGoodRodDesc[] = _(
    "A decent fishing\n"
    "rod for catching\n"
    "wild POKéMON.");

static const u8 sSuperRodDesc[] = _(
    "The best fishing\n"
    "rod for catching\n"
    "wild POKéMON.");

static const u8 sSSTicketDesc[] = _(
    "The ticket required\n"
    "for sailing on a\n"
    "ferry.");

static const u8 sContestPassDesc[] = _(
    "The pass required\n"
    "for entering\n"
    "POKéMON CONTESTS.");

static const u8 sWailmerPailDesc[] = _(
    "A tool used for\n"
    "watering BERRIES\n"
    "and plants.");

static const u8 sDevonGoodsDesc[] = _(
    "A package that\n"
    "contains DEVON's\n"
    "machine parts.");

static const u8 sSootSackDesc[] = _(
    "A sack used to\n"
    "gather and hold\n"
    "volcanic ash.");

static const u8 sBasementKeyDesc[] = _(
    "The key for NEW\n"
    "MAUVILLE beneath\n"
    "MAUVILLE CITY.");

static const u8 sAcroBikeDesc[] = _(
    "A folding bicycle\n"
    "capable of jumps\n"
    "and wheelies.");

static const u8 sPokeblockCaseDesc[] = _(
    "A case for holding\n"
    "{POKEBLOCK}S made with\n"
    "a BERRY BLENDER.");

static const u8 sLetterDesc[] = _(
    "A letter to STEVEN\n"
    "from the PRESIDENT\n"
    "of the DEVON CORP.");

static const u8 sEonTicketDesc[] = _(
    "The ticket for a\n"
    "ferry to a distant\n"
    "southern island.");

static const u8 sRedOrbDesc[] = _(
    "A red, glowing orb\n"
    "said to contain an\n"
    "ancient power.");

static const u8 sBlueOrbDesc[] = _(
    "A blue, glowing orb\n"
    "said to contain an\n"
    "ancient power.");

static const u8 sScannerDesc[] = _(
    "A device found\n"
    "inside the\n"
    "ABANDONED SHIP.");

static const u8 sGoGogglesDesc[] = _(
    "Nifty goggles that\n"
    "protect eyes from\n"
    "desert sandstorms.");

static const u8 sMeteoriteDesc[] = _(
    "A meteorite found\n"
    "at METEOR FALLS.");

static const u8 sRoom1KeyDesc[] = _(
    "A key that opens a\n"
    "door inside the\n"
    "ABANDONED SHIP.");

static const u8 sRoom2KeyDesc[] = _(
    "A key that opens a\n"
    "door inside the\n"
    "ABANDONED SHIP.");

static const u8 sRoom4KeyDesc[] = _(
    "A key that opens a\n"
    "door inside the\n"
    "ABANDONED SHIP.");

static const u8 sRoom6KeyDesc[] = _(
    "A key that opens a\n"
    "door inside the\n"
    "ABANDONED SHIP.");

static const u8 sStorageKeyDesc[] = _(
    "The key to the\n"
    "storage inside the\n"
    "ABANDONED SHIP.");

static const u8 sRootFossilDesc[] = _(
    "A fossil of an\n"
    "ancient, seafloor-\n"
    "dwelling POKéMON.");

static const u8 sClawFossilDesc[] = _(
    "A fossil of an\n"
    "ancient, seafloor-\n"
    "dwelling POKéMON.");

static const u8 sDevonScopeDesc[] = _(
    "A device by DEVON\n"
    "that signals any\n"
    "unseeable POKéMON.");

// TMs/HMs
static const u8 sTM01Desc[] = _(
    "Powerful, but makes\n"
    "the user flinch if\n"
    "hit by the foe.");

static const u8 sTM02Desc[] = _(
    "Hooks and slashes\n"
    "the foe with long,\n"
    "sharp claws.");

static const u8 sTM03Desc[] = _(
    "Generates an\n"
    "ultrasonic wave\n"
    "that may confuse.");

static const u8 sTM04Desc[] = _(
    "Raises SP. ATK and\n"
    "SP. DEF by focusing\n"
    "the mind.");

static const u8 sTM05Desc[] = _(
    "A savage roar that\n"
    "makes the foe flee \n"
    "to end the battle.");

static const u8 sTM06Desc[] = _(
    "Poisons the foe\n"
    "with a toxin that\n"
    "gradually worsens.");

static const u8 sTM07Desc[] = _(
    "Creates a hailstorm\n"
    "that damages all\n"
    "types except ICE.");

static const u8 sTM08Desc[] = _(
    "Bulks up the body\n"
    "to boost both\n"
    "ATTACK & DEFENSE.");

static const u8 sTM09Desc[] = _(
    "Shoots 2 to 5 seeds\n"
    "in a row to strike\n"
    "the foe.");

static const u8 sTM10Desc[] = _(
    "The attack power\n"
    "varies among\n"
    "different POKéMON.");

static const u8 sTM11Desc[] = _(
    "Raises the power of\n"
    "FIRE-type moves\n"
    "for 5 turns.");

static const u8 sTM12Desc[] = _(
    "Enrages the foe so\n"
    "it can only use\n"
    "attack moves.");

static const u8 sTM13Desc[] = _(
    "Fires an icy cold\n"
    "beam that may\n"
    "freeze the foe.");

static const u8 sTM14Desc[] = _(
    "A brutal snow-and-\n"
    "wind attack that\n"
    "may freeze the foe.");

static const u8 sTM15Desc[] = _(
    "Powerful, but needs\n"
    "recharging the\n"
    "next turn.");

static const u8 sTM16Desc[] = _(
    "Creates a wall of\n"
    "light that lowers\n"
    "SP. ATK damage.");

static const u8 sTM17Desc[] = _(
    "Negates all damage,\n"
    "but may fail if used\n"
    "in succession.");

static const u8 sTM18Desc[] = _(
    "Raises the power of\n"
    "WATER-type moves\n"
    "for 5 turns.");

static const u8 sTM19Desc[] = _(
    "Recovers half the\n"
    "HP of the damage \n"
    "this move inflicts.");

static const u8 sTM20Desc[] = _(
    "Prevents status\n"
    "abnormality with a\n"
    "mystical power.");

static const u8 sTM21Desc[] = _(
    "The less the user\n"
    "likes you, the more\n"
    "powerful this move.");

static const u8 sTM22Desc[] = _(
    "Absorbs sunlight in\n"
    "the 1st turn, then\n"
    "attacks next turn.");

static const u8 sTM23Desc[] = _(
    "Slams the foe with\n"
    "a hard tail. It may\n"
    "lower DEFENSE.");

static const u8 sTM24Desc[] = _(
    "A powerful electric\n"
    "attack that may\n"
    "cause paralysis.");

static const u8 sTM25Desc[] = _(
    "Strikes the foe\n"
    "with a thunderbolt.\n"
    "It may paralyze.");

static const u8 sTM26Desc[] = _(
    "Causes a quake\n"
    "that has no effect\n"
    "on flying foes.");

static const u8 sTM27Desc[] = _(
    "The more the user\n"
    "likes you, the more\n"
    "powerful this move.");

static const u8 sTM28Desc[] = _(
    "Digs underground\n"
    "the 1st turn, then\n"
    "strikes next turn.");

static const u8 sTM29Desc[] = _(
    "A powerful psychic\n"
    "attack that may\n"
    "lower SP. DEF.");

static const u8 sTM30Desc[] = _(
    "Hurls a dark lump\n"
    "at the foe. It may\n"
    "lower SP. DEF.");

static const u8 sTM31Desc[] = _(
    "Destroys barriers\n"
    "like LIGHT SCREEN\n"
    "and causes damage.");

static const u8 sTM32Desc[] = _(
    "Creates illusory\n"
    "copies to enhance\n"
    "elusiveness.");

static const u8 sTM33Desc[] = _(
    "Creates a wall of\n"
    "light that weakens\n"
    "physical attacks.");

static const u8 sTM34Desc[] = _(
    "Zaps the foe with a\n"
    "jolt of electricity\n"
    "that never misses.");

static const u8 sTM35Desc[] = _(
    "Looses a stream of\n"
    "fire that may burn\n"
    "the foe.");

static const u8 sTM36Desc[] = _(
    "Hurls sludge at the\n"
    "foe. It may poison\n"
    "the foe.");

static const u8 sTM37Desc[] = _(
    "Causes a sandstorm\n"
    "that hits the foe\n"
    "over several turns.");

static const u8 sTM38Desc[] = _(
    "A powerful fire\n"
    "attack that may\n"
    "burn the foe.");

static const u8 sTM39Desc[] = _(
    "Stops the foe from\n"
    "moving with rocks.\n"
    "May lower SPEED.");

static const u8 sTM40Desc[] = _(
    "An extremely fast\n"
    "attack that can't\n"
    "be avoided.");

static const u8 sTM41Desc[] = _(
    "Prevents the foe\n"
    "from using the same\n"
    "move in a row.");

static const u8 sTM42Desc[] = _(
    "Raises ATTACK when\n"
    "poisoned, burned,\n"
    "or paralyzed.");

static const u8 sTM43Desc[] = _(
    "Adds an effect to\n"
    "attack depending\n"
    "on the location.");

static const u8 sTM44Desc[] = _(
    "The user sleeps for\n"
    "2 turns to restore\n"
    "health and status.");

static const u8 sTM45Desc[] = _(
    "Makes it tough to\n"
    "attack a foe of the\n"
    "opposite gender.");

static const u8 sTM46Desc[] = _(
    "While attacking,\n"
    "it may steal the\n"
    "foe's held item.");

static const u8 sTM47Desc[] = _(
    "Spreads hard-\n"
    "edged wings and\n"
    "slams into the foe.");

static const u8 sTM48Desc[] = _(
    "Switches abilities\n"
    "with the foe on the\n"
    "turn this is used.");

static const u8 sTM49Desc[] = _(
    "Steals the effects\n"
    "of the move the foe\n"
    "is trying to use.");

static const u8 sTM50Desc[] = _(
    "Enables full-power\n"
    "attack, but sharply\n"
    "lowers SP. ATK.");


static const u8 sHM01Desc[] = _(
    "Attacks the foe\n"
    "with sharp blades\n"
    "or claws.");

static const u8 sHM02Desc[] = _(
    "Flies up on the\n"
    "first turn, then\n"
    "attacks next turn.");

static const u8 sHM03Desc[] = _(
    "Creates a huge\n"
    "wave, then crashes\n"
    "it down on the foe.");

static const u8 sHM04Desc[] = _(
    "Builds enormous\n"
    "power, then slams\n"
    "the foe.");

static const u8 sHM05Desc[] = _(
    "Looses a powerful\n"
    "blast of light that\n"
    "reduces accuracy.");

static const u8 sHM06Desc[] = _(
    "A rock-crushingly\n"
    "tough attack that\n"
    "may lower DEFENSE.");

static const u8 sHM07Desc[] = _(
    "Attacks the foe\n"
    "with enough power\n"
    "to climb waterfalls.");

static const u8 sHM08Desc[] = _(
    "Dives underwater\n"
    "the 1st turn, then\n"
    "attacks next turn.");

// FireRed/LeafGreen key items
static const u8 sOaksParcelDesc[] = _(
    "A parcel for PROF.\n"
    "OAK from a POKéMON\n"
    "MART's clerk.");

static const u8 sPokeFluteDesc[] = _(
    "A sweet-sounding\n"
    "flute that awakens\n"
    "POKéMON.");

static const u8 sSecretKeyDesc[] = _(
    "The key to the\n"
    "CINNABAR ISLAND\n"
    "GYM's entrance.");

static const u8 sBikeVoucherDesc[] = _(
    "A voucher for\n"
    "obtaining a bicycle\n"
    "from the BIKE SHOP.");

static const u8 sGoldTeethDesc[] = _(
    "Gold dentures lost\n"
    "by the SAFARI\n"
    "ZONE's WARDEN.");

static const u8 sOldAmberDesc[] = _(
    "A stone containing\n"
    "the genes of an\n"
    "ancient POKéMON.");

static const u8 sCardKeyDesc[] = _(
    "A card-type door\n"
    "key used in SILPH\n"
    "CO's office.");

static const u8 sLiftKeyDesc[] = _(
    "An elevator key\n"
    "used in TEAM\n"
    "ROCKET's HIDEOUT.");

static const u8 sHelixFossilDesc[] = _(
    "A piece of an\n"
    "ancient marine\n"
    "POKéMON's seashell.");

static const u8 sDomeFossilDesc[] = _(
    "A piece of an\n"
    "ancient marine\n"
    "POKéMON's shell.");

static const u8 sSilphScopeDesc[] = _(
    "SILPH CO's scope\n"
    "makes unseeable\n"
    "POKéMON visible.");

static const u8 sBicycleDesc[] = _(
    "A folding bicycle\n"
    "that is faster than\n"
    "the RUNNING SHOES.");

static const u8 sTownMapDesc[] = _(
    "Can be viewed\n"
    "anytime. Shows your\n"
    "present location.");

static const u8 sVSSeekerDesc[] = _(
    "A rechargeable unit\n"
    "that flags battle-\n"
    "ready TRAINERS.");

static const u8 sFameCheckerDesc[] = _(
    "Stores information\n"
    "on famous people\n"
    "for instant recall.");

static const u8 sTMCaseDesc[] = _(
    "A convenient case \n"
    "that holds TMs and\n"
    "HMs.");

static const u8 sBerryPouchDesc[] = _(
    "A convenient\n"
    "container that\n"
    "holds BERRIES.");

static const u8 sTeachyTVDesc[] = _(
    "A TV set tuned to\n"
    "an advice program\n"
    "for TRAINERS.");

static const u8 sTriPassDesc[] = _(
    "A pass for ferries\n"
    "between ONE, TWO,\n"
    "and THREE ISLAND.");

static const u8 sRainbowPassDesc[] = _(
    "For ferries serving\n"
    "VERMILION and the\n"
    "SEVII ISLANDS.");

static const u8 sTeaDesc[] = _(
    "A thirst-quenching\n"
    "tea prepared by an\n"
    "old lady.");

static const u8 sMysticTicketDesc[] = _(
    "A ticket required\n"
    "to board the ship\n"
    "to NAVEL ROCK.");

static const u8 sAuroraTicketDesc[] = _(
    "A ticket required\n"
    "to board the ship\n"
    "to BIRTH ISLAND.");

static const u8 sPowderJarDesc[] = _(
    "Stores BERRY\n"
    "POWDER made using\n"
    "a BERRY CRUSHER.");

static const u8 sRubyDesc[] = _(
    "An exquisite, red-\n"
    "glowing gem that\n"
    "symbolizes passion.");

static const u8 sSapphireDesc[] = _(
    "A brilliant blue gem\n"
    "that symbolizes\n"
    "honesty.");

const struct Item gItems_[] =
{
    [ITEM_NONE] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

// Pokeballs

    [ITEM_MASTER_BALL] =
    {
        .name = _("MASTER BALL"),
        .itemId = ITEM_MASTER_BALL,
        .price = 0,
        .description = sMasterBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_MASTER_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_PokeBallEtc,
        .secondaryId = ITEM_MASTER_BALL - FIRST_BALL,
    },

    [ITEM_ULTRA_BALL] =
    {
        .name = _("ULTRA BALL"),
        .itemId = ITEM_ULTRA_BALL,
        .price = 1200,
        .description = sUltraBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_ULTRA_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_PokeBallEtc,
        .secondaryId = ITEM_ULTRA_BALL - FIRST_BALL,
    },

    [ITEM_GREAT_BALL] =
    {
        .name = _("GREAT BALL"),
        .itemId = ITEM_GREAT_BALL,
        .price = 600,
        .description = sGreatBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_GREAT_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_PokeBallEtc,
        .secondaryId = ITEM_GREAT_BALL - FIRST_BALL,
    },

    [ITEM_POKE_BALL] =
    {
        .name = _("POKé BALL"),
        .itemId = ITEM_POKE_BALL,
        .price = 200,
        .description = sPokeBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_POKE_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_PokeBallEtc,
        .secondaryId = ITEM_POKE_BALL - FIRST_BALL,
    },

    [ITEM_SAFARI_BALL] =
    {
        .name = _("SAFARI BALL"),
        .itemId = ITEM_SAFARI_BALL,
        .price = 0,
        .description = sSafariBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_SAFARI_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_PokeBallEtc,
        .secondaryId = ITEM_SAFARI_BALL - FIRST_BALL,
    },

    [ITEM_NET_BALL] =
    {
        .name = _("NET BALL"),
        .itemId = ITEM_NET_BALL,
        .price = 1000,
        .description = sNetBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_NET_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_PokeBallEtc,
        .secondaryId = ITEM_NET_BALL - FIRST_BALL,
    },

    [ITEM_DIVE_BALL] =
    {
        .name = _("DIVE BALL"),
        .itemId = ITEM_DIVE_BALL,
        .price = 1000,
        .description = sDiveBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_DIVE_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_PokeBallEtc,
        .secondaryId = ITEM_DIVE_BALL - FIRST_BALL,
    },

    [ITEM_NEST_BALL] =
    {
        .name = _("NEST BALL"),
        .itemId = ITEM_NEST_BALL,
        .price = 1000,
        .description = sNestBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_NEST_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_PokeBallEtc,
        .secondaryId = ITEM_NEST_BALL - FIRST_BALL,
    },

    [ITEM_REPEAT_BALL] =
    {
        .name = _("REPEAT BALL"),
        .itemId = ITEM_REPEAT_BALL,
        .price = 1000,
        .description = sRepeatBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_REPEAT_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_PokeBallEtc,
        .secondaryId = ITEM_REPEAT_BALL - FIRST_BALL,
    },

    [ITEM_TIMER_BALL] =
    {
        .name = _("TIMER BALL"),
        .itemId = ITEM_TIMER_BALL,
        .price = 1000,
        .description = sTimerBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_TIMER_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_PokeBallEtc,
        .secondaryId = ITEM_TIMER_BALL - FIRST_BALL,
    },

    [ITEM_LUXURY_BALL] =
    {
        .name = _("LUXURY BALL"),
        .itemId = ITEM_LUXURY_BALL,
        .price = 1000,
        .description = sLuxuryBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_LUXURY_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_PokeBallEtc,
        .secondaryId = ITEM_LUXURY_BALL - FIRST_BALL,
    },

    [ITEM_PREMIER_BALL] =
    {
        .name = _("PREMIER BALL"),
        .itemId = ITEM_PREMIER_BALL,
        .price = 200,
        .description = sPremierBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_PREMIER_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_PokeBallEtc,
        .secondaryId = ITEM_PREMIER_BALL - FIRST_BALL,
    },

// Medicine

    [ITEM_POTION] =
    {
        .name = _("POTION"),
        .itemId = ITEM_POTION,
        .price = 300,
        .holdEffectParam = 20,
        .description = sPotionDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_ANTIDOTE] =
    {
        .name = _("ANTIDOTE"),
        .itemId = ITEM_ANTIDOTE,
        .price = 100,
        .description = sAntidoteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_BURN_HEAL] =
    {
        .name = _("BURN HEAL"),
        .itemId = ITEM_BURN_HEAL,
        .price = 250,
        .description = sBurnHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_ICE_HEAL] =
    {
        .name = _("ICE HEAL"),
        .itemId = ITEM_ICE_HEAL,
        .price = 250,
        .description = sIceHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_AWAKENING] =
    {
        .name = _("AWAKENING"),
        .itemId = ITEM_AWAKENING,
        .price = 250,
        .description = sAwakeningDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_PARALYZE_HEAL] =
    {
        .name = _("PARLYZ HEAL"),
        .itemId = ITEM_PARALYZE_HEAL,
        .price = 200,
        .description = sParalyzeHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_FULL_RESTORE] =
    {
        .name = _("FULL RESTORE"),
        .itemId = ITEM_FULL_RESTORE,
        .price = 3000,
        .holdEffectParam = 255,
        .description = sFullRestoreDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_MAX_POTION] =
    {
        .name = _("MAX POTION"),
        .itemId = ITEM_MAX_POTION,
        .price = 2500,
        .holdEffectParam = 255,
        .description = sMaxPotionDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_HYPER_POTION] =
    {
        .name = _("HYPER POTION"),
        .itemId = ITEM_HYPER_POTION,
        .price = 1200,
        .holdEffectParam = 200,
        .description = sHyperPotionDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_SUPER_POTION] =
    {
        .name = _("SUPER POTION"),
        .itemId = ITEM_SUPER_POTION,
        .price = 700,
        .holdEffectParam = 50,
        .description = sSuperPotionDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_FULL_HEAL] =
    {
        .name = _("FULL HEAL"),
        .itemId = ITEM_FULL_HEAL,
        .price = 600,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_REVIVE] =
    {
        .name = _("REVIVE"),
        .itemId = ITEM_REVIVE,
        .price = 1500,
        .description = sReviveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_MAX_REVIVE] =
    {
        .name = _("MAX REVIVE"),
        .itemId = ITEM_MAX_REVIVE,
        .price = 4000,
        .description = sMaxReviveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_FRESH_WATER] =
    {
        .name = _("FRESH WATER"),
        .itemId = ITEM_FRESH_WATER,
        .price = 200,
        .holdEffectParam = 50,
        .description = sFreshWaterDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_SODA_POP] =
    {
        .name = _("SODA POP"),
        .itemId = ITEM_SODA_POP,
        .price = 300,
        .holdEffectParam = 60,
        .description = sSodaPopDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_LEMONADE] =
    {
        .name = _("LEMONADE"),
        .itemId = ITEM_LEMONADE,
        .price = 350,
        .holdEffectParam = 80,
        .description = sLemonadeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_MOOMOO_MILK] =
    {
        .name = _("MOOMOO MILK"),
        .itemId = ITEM_MOOMOO_MILK,
        .price = 500,
        .holdEffectParam = 100,
        .description = sMoomooMilkDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_ENERGY_POWDER] =
    {
        .name = _("ENERGYPOWDER"),
        .itemId = ITEM_ENERGY_POWDER,
        .price = 500,
        .description = sEnergyPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_ENERGY_ROOT] =
    {
        .name = _("ENERGY ROOT"),
        .itemId = ITEM_ENERGY_ROOT,
        .price = 800,
        .description = sEnergyRootDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_HEAL_POWDER] =
    {
        .name = _("HEAL POWDER"),
        .itemId = ITEM_HEAL_POWDER,
        .price = 450,
        .description = sHealPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_REVIVAL_HERB] =
    {
        .name = _("REVIVAL HERB"),
        .itemId = ITEM_REVIVAL_HERB,
        .price = 2800,
        .description = sRevivalHerbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_ETHER] =
    {
        .name = _("ETHER"),
        .itemId = ITEM_ETHER,
        .price = 1200,
        .holdEffectParam = 10,
        .description = sEtherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Ether,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Ether,
    },

    [ITEM_MAX_ETHER] =
    {
        .name = _("MAX ETHER"),
        .itemId = ITEM_MAX_ETHER,
        .price = 2000,
        .holdEffectParam = 255,
        .description = sMaxEtherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Ether,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Ether,
    },

    [ITEM_ELIXIR] =
    {
        .name = _("ELIXIR"),
        .itemId = ITEM_ELIXIR,
        .price = 3000,
        .holdEffectParam = 10,
        .description = sElixirDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Ether,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Ether,
    },

    [ITEM_MAX_ELIXIR] =
    {
        .name = _("MAX ELIXIR"),
        .itemId = ITEM_MAX_ELIXIR,
        .price = 4500,
        .holdEffectParam = 255,
        .description = sMaxElixirDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Ether,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Ether,
    },

    [ITEM_LAVA_COOKIE] =
    {
        .name = _("LAVA COOKIE"),
        .itemId = ITEM_LAVA_COOKIE,
        .price = 200,
        .description = sLavaCookieDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_BLUE_FLUTE] =
    {
        .name = _("BLUE FLUTE"),
        .itemId = ITEM_BLUE_FLUTE,
        .price = 100,
        .description = sBlueFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_YELLOW_FLUTE] =
    {
        .name = _("YELLOW FLUTE"),
        .itemId = ITEM_YELLOW_FLUTE,
        .price = 200,
        .description = sYellowFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_RED_FLUTE] =
    {
        .name = _("RED FLUTE"),
        .itemId = ITEM_RED_FLUTE,
        .price = 300,
        .description = sRedFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_BLACK_FLUTE] =
    {
        .name = _("BLACK FLUTE"),
        .itemId = ITEM_BLACK_FLUTE,
        .price = 400,
        .holdEffectParam = 50,
        .description = sBlackFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_BlackWhiteFlute,
    },

    [ITEM_WHITE_FLUTE] =
    {
        .name = _("WHITE FLUTE"),
        .itemId = ITEM_WHITE_FLUTE,
        .price = 500,
        .holdEffectParam = 150,
        .description = sWhiteFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_BlackWhiteFlute,
    },

    [ITEM_BERRY_JUICE] =
    {
        .name = _("BERRY JUICE"),
        .itemId = ITEM_BERRY_JUICE,
        .price = 100,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 20,
        .description = sBerryJuiceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_SACRED_ASH] =
    {
        .name = _("SACRED ASH"),
        .itemId = ITEM_SACRED_ASH,
        .price = 200,
        .description = sSacredAshDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_SacredAsh,
    },

// Collectibles

    [ITEM_SHOAL_SALT] =
    {
        .name = _("SHOAL SALT"),
        .itemId = ITEM_SHOAL_SALT,
        .price = 20,
        .description = sShoalSaltDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_SHOAL_SHELL] =
    {
        .name = _("SHOAL SHELL"),
        .itemId = ITEM_SHOAL_SHELL,
        .price = 20,
        .description = sShoalShellDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_RED_SHARD] =
    {
        .name = _("RED SHARD"),
        .itemId = ITEM_RED_SHARD,
        .price = 200,
        .description = sRedShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_BLUE_SHARD] =
    {
        .name = _("BLUE SHARD"),
        .itemId = ITEM_BLUE_SHARD,
        .price = 200,
        .description = sBlueShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_YELLOW_SHARD] =
    {
        .name = _("YELLOW SHARD"),
        .itemId = ITEM_YELLOW_SHARD,
        .price = 200,
        .description = sYellowShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_GREEN_SHARD] =
    {
        .name = _("GREEN SHARD"),
        .itemId = ITEM_GREEN_SHARD,
        .price = 200,
        .description = sGreenShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_034] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_035] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_036] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_037] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_038] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_039] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_03A] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_03B] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_03C] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_03D] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_03E] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

// Vitamins

    [ITEM_HP_UP] =
    {
        .name = _("HP UP"),
        .itemId = ITEM_HP_UP,
        .price = 9800,
        .description = sHPUpDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
    },

    [ITEM_PROTEIN] =
    {
        .name = _("PROTEIN"),
        .itemId = ITEM_PROTEIN,
        .price = 9800,
        .description = sProteinDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
    },

    [ITEM_IRON] =
    {
        .name = _("IRON"),
        .itemId = ITEM_IRON,
        .price = 9800,
        .description = sIronDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
    },

    [ITEM_CARBOS] =
    {
        .name = _("CARBOS"),
        .itemId = ITEM_CARBOS,
        .price = 9800,
        .description = sCarbosDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
    },

    [ITEM_CALCIUM] =
    {
        .name = _("CALCIUM"),
        .itemId = ITEM_CALCIUM,
        .price = 9800,
        .description = sCalciumDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
    },

    [ITEM_RARE_CANDY] =
    {
        .name = _("RARE CANDY"),
        .itemId = ITEM_RARE_CANDY,
        .price = 4800,
        .description = sRareCandyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_RareCandy,
    },

    [ITEM_PP_UP] =
    {
        .name = _("PP UP"),
        .itemId = ITEM_PP_UP,
        .price = 9800,
        .description = sPPUpDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_PpUp,
    },

    [ITEM_ZINC] =
    {
        .name = _("ZINC"),
        .itemId = ITEM_ZINC,
        .price = 9800,
        .description = sZincDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
    },

    [ITEM_PP_MAX] =
    {
        .name = _("PP MAX"),
        .itemId = ITEM_PP_MAX,
        .price = 9800,
        .description = sPPMaxDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_PpUp,
    },

    [ITEM_048] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

// Battle items

    [ITEM_GUARD_SPEC] =
    {
        .name = _("GUARD SPEC."),
        .itemId = ITEM_GUARD_SPEC,
        .price = 700,
        .description = sGuardSpecDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_StatBooster,
    },

    [ITEM_DIRE_HIT] =
    {
        .name = _("DIRE HIT"),
        .itemId = ITEM_DIRE_HIT,
        .price = 650,
        .description = sDireHitDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_StatBooster,
    },

    [ITEM_X_ATTACK] =
    {
        .name = _("X ATTACK"),
        .itemId = ITEM_X_ATTACK,
        .price = 500,
        .description = sXAttackDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_StatBooster,
    },

    [ITEM_X_DEFEND] =
    {
        .name = _("X DEFEND"),
        .itemId = ITEM_X_DEFEND,
        .price = 550,
        .description = sXDefendDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_StatBooster,
    },

    [ITEM_X_SPEED] =
    {
        .name = _("X SPEED"),
        .itemId = ITEM_X_SPEED,
        .price = 350,
        .description = sXSpeedDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_StatBooster,
    },

    [ITEM_X_ACCURACY] =
    {
        .name = _("X ACCURACY"),
        .itemId = ITEM_X_ACCURACY,
        .price = 950,
        .description = sXAccuracyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_StatBooster,
    },

    [ITEM_X_SPECIAL] =
    {
        .name = _("X SPECIAL"),
        .itemId = ITEM_X_SPECIAL,
        .price = 350,
        .description = sXSpecialDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_StatBooster,
    },

    [ITEM_POKE_DOLL] =
    {
        .name = _("POKé DOLL"),
        .itemId = ITEM_POKE_DOLL,
        .price = 1000,
        .description = sPokeDollDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_PokeDoll,
    },

    [ITEM_FLUFFY_TAIL] =
    {
        .name = _("FLUFFY TAIL"),
        .itemId = ITEM_FLUFFY_TAIL,
        .price = 1000,
        .description = sFluffyTailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
        .battleUsage = ITEM_B_TYPE_OTHER,
        .battleUseFunc = BattleUseFunc_PokeDoll,
    },

    [ITEM_052] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

// Field items

    [ITEM_SUPER_REPEL] =
    {
        .name = _("SUPER REPEL"),
        .itemId = ITEM_SUPER_REPEL,
        .price = 500,
        .holdEffectParam = 200,
        .description = sSuperRepelDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_Repel,
    },

    [ITEM_MAX_REPEL] =
    {
        .name = _("MAX REPEL"),
        .itemId = ITEM_MAX_REPEL,
        .price = 700,
        .holdEffectParam = 250,
        .description = sMaxRepelDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_Repel,
    },

    [ITEM_ESCAPE_ROPE] =
    {
        .name = _("ESCAPE ROPE"),
        .itemId = ITEM_ESCAPE_ROPE,
        .price = 550,
        .description = sEscapeRopeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_EscapeRope,
    },

    [ITEM_REPEL] =
    {
        .name = _("REPEL"),
        .itemId = ITEM_REPEL,
        .price = 350,
        .holdEffectParam = 100,
        .description = sRepelDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_Repel,
    },

    [ITEM_057] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_058] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_059] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_05A] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_05B] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_05C] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

// Evolution stones

    [ITEM_SUN_STONE] =
    {
        .name = _("SUN STONE"),
        .itemId = ITEM_SUN_STONE,
        .price = 2100,
        .description = sSunStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_EvoItem,
    },

    [ITEM_MOON_STONE] =
    {
        .name = _("MOON STONE"),
        .itemId = ITEM_MOON_STONE,
        .price = 0,
        .description = sMoonStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_EvoItem,
    },

    [ITEM_FIRE_STONE] =
    {
        .name = _("FIRE STONE"),
        .itemId = ITEM_FIRE_STONE,
        .price = 2100,
        .description = sFireStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_EvoItem,
    },

    [ITEM_THUNDER_STONE] =
    {
        .name = _("THUNDERSTONE"),
        .itemId = ITEM_THUNDER_STONE,
        .price = 2100,
        .description = sThunderStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_EvoItem,
    },

    [ITEM_WATER_STONE] =
    {
        .name = _("WATER STONE"),
        .itemId = ITEM_WATER_STONE,
        .price = 2100,
        .description = sWaterStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_EvoItem,
    },

    [ITEM_LEAF_STONE] =
    {
        .name = _("LEAF STONE"),
        .itemId = ITEM_LEAF_STONE,
        .price = 2100,
        .description = sLeafStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_EvoItem,
    },

    [ITEM_063] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_064] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_065] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_066] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

// Valuable items

    [ITEM_TINY_MUSHROOM] =
    {
        .name = _("TINYMUSHROOM"),
        .itemId = ITEM_TINY_MUSHROOM,
        .price = 500,
        .description = sTinyMushroomDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_BIG_MUSHROOM] =
    {
        .name = _("BIG MUSHROOM"),
        .itemId = ITEM_BIG_MUSHROOM,
        .price = 5000,
        .description = sBigMushroomDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_069] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_PEARL] =
    {
        .name = _("PEARL"),
        .itemId = ITEM_PEARL,
        .price = 1400,
        .description = sPearlDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_BIG_PEARL] =
    {
        .name = _("BIG PEARL"),
        .itemId = ITEM_BIG_PEARL,
        .price = 7500,
        .description = sBigPearlDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_STARDUST] =
    {
        .name = _("STARDUST"),
        .itemId = ITEM_STARDUST,
        .price = 2000,
        .description = sStardustDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_STAR_PIECE] =
    {
        .name = _("STAR PIECE"),
        .itemId = ITEM_STAR_PIECE,
        .price = 9800,
        .description = sStarPieceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_NUGGET] =
    {
        .name = _("NUGGET"),
        .itemId = ITEM_NUGGET,
        .price = 10000,
        .description = sNuggetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_HEART_SCALE] =
    {
        .name = _("HEART SCALE"),
        .itemId = ITEM_HEART_SCALE,
        .price = 100,
        .description = sHeartScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_070] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_071] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_072] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_073] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_074] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_075] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_076] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_077] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_078] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

// Mail
    [ITEM_ORANGE_MAIL] =
    {
        .name = _("ORANGE MAIL"),
        .itemId = ITEM_ORANGE_MAIL,
        .price = 50,
        .description = sOrangeMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_MAIL,
        .fieldUseFunc = FieldUseFunc_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_ORANGE_MAIL),
    },

    [ITEM_HARBOR_MAIL] =
    {
        .name = _("HARBOR MAIL"),
        .itemId = ITEM_HARBOR_MAIL,
        .price = 50,
        .description = sHarborMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_MAIL,
        .fieldUseFunc = FieldUseFunc_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_HARBOR_MAIL),
    },

    [ITEM_GLITTER_MAIL] =
    {
        .name = _("GLITTER MAIL"),
        .itemId = ITEM_GLITTER_MAIL,
        .price = 50,
        .description = sGlitterMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_MAIL,
        .fieldUseFunc = FieldUseFunc_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_GLITTER_MAIL),
    },

    [ITEM_MECH_MAIL] =
    {
        .name = _("MECH MAIL"),
        .itemId = ITEM_MECH_MAIL,
        .price = 50,
        .description = sMechMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_MAIL,
        .fieldUseFunc = FieldUseFunc_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_MECH_MAIL),
    },

    [ITEM_WOOD_MAIL] =
    {
        .name = _("WOOD MAIL"),
        .itemId = ITEM_WOOD_MAIL,
        .price = 50,
        .description = sWoodMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_MAIL,
        .fieldUseFunc = FieldUseFunc_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_WOOD_MAIL),
    },

    [ITEM_WAVE_MAIL] =
    {
        .name = _("WAVE MAIL"),
        .itemId = ITEM_WAVE_MAIL,
        .price = 50,
        .description = sWaveMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_MAIL,
        .fieldUseFunc = FieldUseFunc_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_WAVE_MAIL),
    },

    [ITEM_BEAD_MAIL] =
    {
        .name = _("BEAD MAIL"),
        .itemId = ITEM_BEAD_MAIL,
        .price = 50,
        .description = sBeadMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_MAIL,
        .fieldUseFunc = FieldUseFunc_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_BEAD_MAIL),
    },

    [ITEM_SHADOW_MAIL] =
    {
        .name = _("SHADOW MAIL"),
        .itemId = ITEM_SHADOW_MAIL,
        .price = 50,
        .description = sShadowMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_MAIL,
        .fieldUseFunc = FieldUseFunc_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_SHADOW_MAIL),
    },

    [ITEM_TROPIC_MAIL] =
    {
        .name = _("TROPIC MAIL"),
        .itemId = ITEM_TROPIC_MAIL,
        .price = 50,
        .description = sTropicMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_MAIL,
        .fieldUseFunc = FieldUseFunc_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_TROPIC_MAIL),
    },

    [ITEM_DREAM_MAIL] =
    {
        .name = _("DREAM MAIL"),
        .itemId = ITEM_DREAM_MAIL,
        .price = 50,
        .description = sDreamMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_MAIL,
        .fieldUseFunc = FieldUseFunc_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_DREAM_MAIL),
    },

    [ITEM_FAB_MAIL] =
    {
        .name = _("FAB MAIL"),
        .itemId = ITEM_FAB_MAIL,
        .price = 50,
        .description = sFabMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_MAIL,
        .fieldUseFunc = FieldUseFunc_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_FAB_MAIL),
    },

    [ITEM_RETRO_MAIL] =
    {
        .name = _("RETRO MAIL"),
        .itemId = ITEM_RETRO_MAIL,
        .price = 0,
        .description = sRetroMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_MAIL,
        .fieldUseFunc = FieldUseFunc_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_RETRO_MAIL),
    },

// Berries

    [ITEM_CHERI_BERRY] =
    {
        .name = _("CHERI BERRY"),
        .itemId = ITEM_CHERI_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_PAR,
        .description = sCheriBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_CHESTO_BERRY] =
    {
        .name = _("CHESTO BERRY"),
        .itemId = ITEM_CHESTO_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_SLP,
        .description = sChestoBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_PECHA_BERRY] =
    {
        .name = _("PECHA BERRY"),
        .itemId = ITEM_PECHA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_PSN,
        .description = sPechaBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_RAWST_BERRY] =
    {
        .name = _("RAWST BERRY"),
        .itemId = ITEM_RAWST_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_BRN,
        .description = sRawstBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_ASPEAR_BERRY] =
    {
        .name = _("ASPEAR BERRY"),
        .itemId = ITEM_ASPEAR_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_FRZ,
        .description = sAspearBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_LEPPA_BERRY] =
    {
        .name = _("LEPPA BERRY"),
        .itemId = ITEM_LEPPA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESTORE_PP,
        .holdEffectParam = 10,
        .description = sLeppaBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Ether,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Ether,
    },

    [ITEM_ORAN_BERRY] =
    {
        .name = _("ORAN BERRY"),
        .itemId = ITEM_ORAN_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 10,
        .description = sOranBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_PERSIM_BERRY] =
    {
        .name = _("PERSIM BERRY"),
        .itemId = ITEM_PERSIM_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_CONFUSION,
        .description = sPersimBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_LUM_BERRY] =
    {
        .name = _("LUM BERRY"),
        .itemId = ITEM_LUM_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_STATUS,
        .description = sLumBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_SITRUS_BERRY] =
    {
        .name = _("SITRUS BERRY"),
        .itemId = ITEM_SITRUS_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 30,
        .description = sSitrusBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_Medicine,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = BattleUseFunc_Medicine,
    },

    [ITEM_FIGY_BERRY] =
    {
        .name = _("FIGY BERRY"),
        .itemId = ITEM_FIGY_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SPICY,
        .holdEffectParam = 8,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_WIKI_BERRY] =
    {
        .name = _("WIKI BERRY"),
        .itemId = ITEM_WIKI_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_DRY,
        .holdEffectParam = 8,
        .description = sWikiBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_MAGO_BERRY] =
    {
        .name = _("MAGO BERRY"),
        .itemId = ITEM_MAGO_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SWEET,
        .holdEffectParam = 8,
        .description = sMagoBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_AGUAV_BERRY] =
    {
        .name = _("AGUAV BERRY"),
        .itemId = ITEM_AGUAV_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_BITTER,
        .holdEffectParam = 8,
        .description = sAguavBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_IAPAPA_BERRY] =
    {
        .name = _("IAPAPA BERRY"),
        .itemId = ITEM_IAPAPA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SOUR,
        .holdEffectParam = 8,
        .description = sIapapaBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_RAZZ_BERRY] =
    {
        .name = _("RAZZ BERRY"),
        .itemId = ITEM_RAZZ_BERRY,
        .price = 20,
        .description = sRazzBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_BLUK_BERRY] =
    {
        .name = _("BLUK BERRY"),
        .itemId = ITEM_BLUK_BERRY,
        .price = 20,
        .description = sBlukBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_NANAB_BERRY] =
    {
        .name = _("NANAB BERRY"),
        .itemId = ITEM_NANAB_BERRY,
        .price = 20,
        .description = sNanabBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_WEPEAR_BERRY] =
    {
        .name = _("WEPEAR BERRY"),
        .itemId = ITEM_WEPEAR_BERRY,
        .price = 20,
        .description = sWepearBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_PINAP_BERRY] =
    {
        .name = _("PINAP BERRY"),
        .itemId = ITEM_PINAP_BERRY,
        .price = 20,
        .description = sPinapBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_POMEG_BERRY] =
    {
        .name = _("POMEG BERRY"),
        .itemId = ITEM_POMEG_BERRY,
        .price = 20,
        .description = sPomegBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_KELPSY_BERRY] =
    {
        .name = _("KELPSY BERRY"),
        .itemId = ITEM_KELPSY_BERRY,
        .price = 20,
        .description = sKelpsyBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_QUALOT_BERRY] =
    {
        .name = _("QUALOT BERRY"),
        .itemId = ITEM_QUALOT_BERRY,
        .price = 20,
        .description = sQualotBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_HONDEW_BERRY] =
    {
        .name = _("HONDEW BERRY"),
        .itemId = ITEM_HONDEW_BERRY,
        .price = 20,
        .description = sHondewBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_GREPA_BERRY] =
    {
        .name = _("GREPA BERRY"),
        .itemId = ITEM_GREPA_BERRY,
        .price = 20,
        .description = sGrepaBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_TAMATO_BERRY] =
    {
        .name = _("TAMATO BERRY"),
        .itemId = ITEM_TAMATO_BERRY,
        .price = 20,
        .description = sTamatoBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_CORNN_BERRY] =
    {
        .name = _("CORNN BERRY"),
        .itemId = ITEM_CORNN_BERRY,
        .price = 20,
        .description = sCornnBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_MAGOST_BERRY] =
    {
        .name = _("MAGOST BERRY"),
        .itemId = ITEM_MAGOST_BERRY,
        .price = 20,
        .description = sMagostBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_RABUTA_BERRY] =
    {
        .name = _("RABUTA BERRY"),
        .itemId = ITEM_RABUTA_BERRY,
        .price = 20,
        .description = sRabutaBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_NOMEL_BERRY] =
    {
        .name = _("NOMEL BERRY"),
        .itemId = ITEM_NOMEL_BERRY,
        .price = 20,
        .description = sNomelBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_SPELON_BERRY] =
    {
        .name = _("SPELON BERRY"),
        .itemId = ITEM_SPELON_BERRY,
        .price = 20,
        .description = sSpelonBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_PAMTRE_BERRY] =
    {
        .name = _("PAMTRE BERRY"),
        .itemId = ITEM_PAMTRE_BERRY,
        .price = 20,
        .description = sPamtreBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_WATMEL_BERRY] =
    {
        .name = _("WATMEL BERRY"),
        .itemId = ITEM_WATMEL_BERRY,
        .price = 20,
        .description = sWatmelBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_DURIN_BERRY] =
    {
        .name = _("DURIN BERRY"),
        .itemId = ITEM_DURIN_BERRY,
        .price = 20,
        .description = sDurinBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_BELUE_BERRY] =
    {
        .name = _("BELUE BERRY"),
        .itemId = ITEM_BELUE_BERRY,
        .price = 20,
        .description = sBelueBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_LIECHI_BERRY] =
    {
        .name = _("LIECHI BERRY"),
        .itemId = ITEM_LIECHI_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_ATTACK_UP,
        .holdEffectParam = 4,
        .description = sLiechiBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_GANLON_BERRY] =
    {
        .name = _("GANLON BERRY"),
        .itemId = ITEM_GANLON_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = sGanlonBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_SALAC_BERRY] =
    {
        .name = _("SALAC BERRY"),
        .itemId = ITEM_SALAC_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_SPEED_UP,
        .holdEffectParam = 4,
        .description = sSalacBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_PETAYA_BERRY] =
    {
        .name = _("PETAYA BERRY"),
        .itemId = ITEM_PETAYA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_SP_ATTACK_UP,
        .holdEffectParam = 4,
        .description = sPetayaBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_APICOT_BERRY] =
    {
        .name = _("APICOT BERRY"),
        .itemId = ITEM_APICOT_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_SP_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = sApicotBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_LANSAT_BERRY] =
    {
        .name = _("LANSAT BERRY"),
        .itemId = ITEM_LANSAT_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CRITICAL_UP,
        .holdEffectParam = 4,
        .description = sLansatBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_STARF_BERRY] =
    {
        .name = _("STARF BERRY"),
        .itemId = ITEM_STARF_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RANDOM_STAT_UP,
        .holdEffectParam = 4,
        .description = sStarfBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_ENIGMA_BERRY] =
    {
        .name = _("ENIGMA BERRY"),
        .itemId = ITEM_ENIGMA_BERRY,
        .price = 20,
        .description = sEnigmaBerryDesc,
        .pocket = POCKET_BERRY_POUCH,
        .type = ITEM_TYPE_BAG_MENU, // Type handled by ItemUseOutOfBattle_EnigmaBerry
        .fieldUseFunc = ItemUseOutOfBattle_EnigmaBerry,
        .battleUsage = ITEM_B_TYPE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_EnigmaBerry,
    },

    [ITEM_UNUSED_BERRY_1] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_UNUSED_BERRY_2] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_UNUSED_BERRY_3] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

// Hold items

    [ITEM_BRIGHT_POWDER] =
    {
        .name = _("BRIGHTPOWDER"),
        .itemId = ITEM_BRIGHT_POWDER,
        .price = 10,
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 10,
        .description = sBrightPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_WHITE_HERB] =
    {
        .name = _("WHITE HERB"),
        .itemId = ITEM_WHITE_HERB,
        .price = 100,
        .holdEffect = HOLD_EFFECT_RESTORE_STATS,
        .description = sWhiteHerbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_MACHO_BRACE] =
    {
        .name = _("MACHO BRACE"),
        .itemId = ITEM_MACHO_BRACE,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_MACHO_BRACE,
        .description = sMachoBraceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_EXP_SHARE] =
    {
        .name = _("EXP. SHARE"),
        .itemId = ITEM_EXP_SHARE,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_EXP_SHARE,
        .description = sExpShareDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_QUICK_CLAW] =
    {
        .name = _("QUICK CLAW"),
        .itemId = ITEM_QUICK_CLAW,
        .price = 100,
        .holdEffect = HOLD_EFFECT_QUICK_CLAW,
        .holdEffectParam = 20,
        .description = sQuickClawDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_SOOTHE_BELL] =
    {
        .name = _("SOOTHE BELL"),
        .itemId = ITEM_SOOTHE_BELL,
        .price = 100,
        .holdEffect = HOLD_EFFECT_FRIENDSHIP_UP,
        .description = sSootheBellDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_MENTAL_HERB] =
    {
        .name = _("MENTAL HERB"),
        .itemId = ITEM_MENTAL_HERB,
        .price = 100,
        .holdEffect = HOLD_EFFECT_CURE_ATTRACT,
        .description = sMentalHerbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_CHOICE_BAND] =
    {
        .name = _("CHOICE BAND"),
        .itemId = ITEM_CHOICE_BAND,
        .price = 100,
        .holdEffect = HOLD_EFFECT_CHOICE_BAND,
        .description = sChoiceBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_KINGS_ROCK] =
    {
        .name = _("KING'S ROCK"),
        .itemId = ITEM_KINGS_ROCK,
        .price = 100,
        .holdEffect = HOLD_EFFECT_FLINCH,
        .holdEffectParam = 10,
        .description = sKingsRockDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_SILVER_POWDER] =
    {
        .name = _("SILVERPOWDER"),
        .itemId = ITEM_SILVER_POWDER,
        .price = 100,
        .holdEffect = HOLD_EFFECT_BUG_POWER,
        .holdEffectParam = 10,
        .description = sSilverPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_AMULET_COIN] =
    {
        .name = _("AMULET COIN"),
        .itemId = ITEM_AMULET_COIN,
        .price = 100,
        .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
        .holdEffectParam = 10,
        .description = sAmuletCoinDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_CLEANSE_TAG] =
    {
        .name = _("CLEANSE TAG"),
        .itemId = ITEM_CLEANSE_TAG,
        .price = 200,
        .holdEffect = HOLD_EFFECT_REPEL,
        .description = sCleanseTagDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_SOUL_DEW] =
    {
        .name = _("SOUL DEW"),
        .itemId = ITEM_SOUL_DEW,
        .price = 200,
        .holdEffect = HOLD_EFFECT_SOUL_DEW,
        .description = sSoulDewDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_DEEP_SEA_TOOTH] =
    {
        .name = _("DEEPSEATOOTH"),
        .itemId = ITEM_DEEP_SEA_TOOTH,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_TOOTH,
        .description = sDeepSeaToothDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_DEEP_SEA_SCALE] =
    {
        .name = _("DEEPSEASCALE"),
        .itemId = ITEM_DEEP_SEA_SCALE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_SCALE,
        .description = sDeepSeaScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_SMOKE_BALL] =
    {
        .name = _("SMOKE BALL"),
        .itemId = ITEM_SMOKE_BALL,
        .price = 200,
        .holdEffect = HOLD_EFFECT_CAN_ALWAYS_RUN,
        .description = sSmokeBallDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_EVERSTONE] =
    {
        .name = _("EVERSTONE"),
        .itemId = ITEM_EVERSTONE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PREVENT_EVOLVE,
        .description = sEverstoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_FOCUS_BAND] =
    {
        .name = _("FOCUS BAND"),
        .itemId = ITEM_FOCUS_BAND,
        .price = 200,
        .holdEffect = HOLD_EFFECT_FOCUS_BAND,
        .holdEffectParam = 10,
        .description = sFocusBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_LUCKY_EGG] =
    {
        .name = _("LUCKY EGG"),
        .itemId = ITEM_LUCKY_EGG,
        .price = 200,
        .holdEffect = HOLD_EFFECT_LUCKY_EGG,
        .description = sLuckyEggDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_SCOPE_LENS] =
    {
        .name = _("SCOPE LENS"),
        .itemId = ITEM_SCOPE_LENS,
        .price = 200,
        .holdEffect = HOLD_EFFECT_SCOPE_LENS,
        .description = sScopeLensDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_METAL_COAT] =
    {
        .name = _("METAL COAT"),
        .itemId = ITEM_METAL_COAT,
        .price = 100,
        .holdEffect = HOLD_EFFECT_STEEL_POWER,
        .holdEffectParam = 10,
        .description = sMetalCoatDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_LEFTOVERS] =
    {
        .name = _("LEFTOVERS"),
        .itemId = ITEM_LEFTOVERS,
        .price = 200,
        .holdEffect = HOLD_EFFECT_LEFTOVERS,
        .holdEffectParam = 10,
        .description = sLeftoversDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_DRAGON_SCALE] =
    {
        .name = _("DRAGON SCALE"),
        .itemId = ITEM_DRAGON_SCALE,
        .price = 2100,
        .holdEffect = HOLD_EFFECT_DRAGON_SCALE,
        .holdEffectParam = 10,
        .description = sDragonScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_LIGHT_BALL] =
    {
        .name = _("LIGHT BALL"),
        .itemId = ITEM_LIGHT_BALL,
        .price = 100,
        .holdEffect = HOLD_EFFECT_LIGHT_BALL,
        .description = sLightBallDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_SOFT_SAND] =
    {
        .name = _("SOFT SAND"),
        .itemId = ITEM_SOFT_SAND,
        .price = 100,
        .holdEffect = HOLD_EFFECT_GROUND_POWER,
        .holdEffectParam = 10,
        .description = sSoftSandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_HARD_STONE] =
    {
        .name = _("HARD STONE"),
        .itemId = ITEM_HARD_STONE,
        .price = 100,
        .holdEffect = HOLD_EFFECT_ROCK_POWER,
        .holdEffectParam = 10,
        .description = sHardStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_MIRACLE_SEED] =
    {
        .name = _("MIRACLE SEED"),
        .itemId = ITEM_MIRACLE_SEED,
        .price = 100,
        .holdEffect = HOLD_EFFECT_GRASS_POWER,
        .holdEffectParam = 10,
        .description = sMiracleSeedDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_BLACK_GLASSES] =
    {
        .name = _("BLACKGLASSES"),
        .itemId = ITEM_BLACK_GLASSES,
        .price = 100,
        .holdEffect = HOLD_EFFECT_DARK_POWER,
        .holdEffectParam = 10,
        .description = sBlackGlassesDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_BLACK_BELT] =
    {
        .name = _("BLACK BELT"),
        .itemId = ITEM_BLACK_BELT,
        .price = 100,
        .holdEffect = HOLD_EFFECT_FIGHTING_POWER,
        .holdEffectParam = 10,
        .description = sBlackBeltDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_MAGNET] =
    {
        .name = _("MAGNET"),
        .itemId = ITEM_MAGNET,
        .price = 100,
        .holdEffect = HOLD_EFFECT_ELECTRIC_POWER,
        .holdEffectParam = 10,
        .description = sMagnetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_MYSTIC_WATER] =
    {
        .name = _("MYSTIC WATER"),
        .itemId = ITEM_MYSTIC_WATER,
        .price = 100,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 10,
        .description = sMysticWaterDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_SHARP_BEAK] =
    {
        .name = _("SHARP BEAK"),
        .itemId = ITEM_SHARP_BEAK,
        .price = 100,
        .holdEffect = HOLD_EFFECT_FLYING_POWER,
        .holdEffectParam = 10,
        .description = sSharpBeakDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_POISON_BARB] =
    {
        .name = _("POISON BARB"),
        .itemId = ITEM_POISON_BARB,
        .price = 100,
        .holdEffect = HOLD_EFFECT_POISON_POWER,
        .holdEffectParam = 10,
        .description = sPoisonBarbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_NEVER_MELT_ICE] =
    {
        .name = _("NEVERMELTICE"),
        .itemId = ITEM_NEVER_MELT_ICE,
        .price = 100,
        .holdEffect = HOLD_EFFECT_ICE_POWER,
        .holdEffectParam = 10,
        .description = sNeverMeltIceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_SPELL_TAG] =
    {
        .name = _("SPELL TAG"),
        .itemId = ITEM_SPELL_TAG,
        .price = 100,
        .holdEffect = HOLD_EFFECT_GHOST_POWER,
        .holdEffectParam = 10,
        .description = sSpellTagDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_TWISTED_SPOON] =
    {
        .name = _("TWISTEDSPOON"),
        .itemId = ITEM_TWISTED_SPOON,
        .price = 100,
        .holdEffect = HOLD_EFFECT_PSYCHIC_POWER,
        .holdEffectParam = 10,
        .description = sTwistedSpoonDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_CHARCOAL] =
    {
        .name = _("CHARCOAL"),
        .itemId = ITEM_CHARCOAL,
        .price = 9800,
        .holdEffect = HOLD_EFFECT_FIRE_POWER,
        .holdEffectParam = 10,
        .description = sCharcoalDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_DRAGON_FANG] =
    {
        .name = _("DRAGON FANG"),
        .itemId = ITEM_DRAGON_FANG,
        .price = 100,
        .holdEffect = HOLD_EFFECT_DRAGON_POWER,
        .holdEffectParam = 10,
        .description = sDragonFangDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_SILK_SCARF] =
    {
        .name = _("SILK SCARF"),
        .itemId = ITEM_SILK_SCARF,
        .price = 100,
        .holdEffect = HOLD_EFFECT_NORMAL_POWER,
        .holdEffectParam = 10,
        .description = sSilkScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_UP_GRADE] =
    {
        .name = _("UP-GRADE"),
        .itemId = ITEM_UP_GRADE,
        .price = 2100,
        .holdEffect = HOLD_EFFECT_UP_GRADE,
        .description = sUpGradeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_SHELL_BELL] =
    {
        .name = _("SHELL BELL"),
        .itemId = ITEM_SHELL_BELL,
        .price = 200,
        .holdEffect = HOLD_EFFECT_SHELL_BELL,
        .holdEffectParam = 8,
        .description = sShellBellDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_SEA_INCENSE] =
    {
        .name = _("SEA INCENSE"),
        .itemId = ITEM_SEA_INCENSE,
        .price = 9600,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 5,
        .description = sSeaIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_LAX_INCENSE] =
    {
        .name = _("LAX INCENSE"),
        .itemId = ITEM_LAX_INCENSE,
        .price = 9600,
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 5,
        .description = sLaxIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_LUCKY_PUNCH] =
    {
        .name = _("LUCKY PUNCH"),
        .itemId = ITEM_LUCKY_PUNCH,
        .price = 10,
        .holdEffect = HOLD_EFFECT_LUCKY_PUNCH,
        .description = sLuckyPunchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_METAL_POWDER] =
    {
        .name = _("METAL POWDER"),
        .itemId = ITEM_METAL_POWDER,
        .price = 10,
        .holdEffect = HOLD_EFFECT_METAL_POWDER,
        .description = sMetalPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_THICK_CLUB] =
    {
        .name = _("THICK CLUB"),
        .itemId = ITEM_THICK_CLUB,
        .price = 500,
        .holdEffect = HOLD_EFFECT_THICK_CLUB,
        .description = sThickClubDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_STICK] =
    {
        .name = _("STICK"),
        .itemId = ITEM_STICK,
        .price = 200,
        .holdEffect = HOLD_EFFECT_STICK,
        .description = sStickDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0E2] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0E3] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0E4] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0E5] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0E6] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0E7] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0E8] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0E9] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0EA] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0EB] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0EC] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0ED] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0EE] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0EF] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0F0] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0F1] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0F2] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0F3] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0F4] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0F5] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0F6] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0F7] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0F8] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0F9] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0FA] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0FB] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0FC] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_0FD] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_RED_SCARF] =
    {
        .name = _("RED SCARF"),
        .itemId = ITEM_RED_SCARF,
        .price = 100,
        .description = sRedScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_BLUE_SCARF] =
    {
        .name = _("BLUE SCARF"),
        .itemId = ITEM_BLUE_SCARF,
        .price = 100,
        .description = sBlueScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_PINK_SCARF] =
    {
        .name = _("PINK SCARF"),
        .itemId = ITEM_PINK_SCARF,
        .price = 100,
        .description = sPinkScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_GREEN_SCARF] =
    {
        .name = _("GREEN SCARF"),
        .itemId = ITEM_GREEN_SCARF,
        .price = 100,
        .description = sGreenScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_YELLOW_SCARF] =
    {
        .name = _("YELLOW SCARF"),
        .itemId = ITEM_YELLOW_SCARF,
        .price = 100,
        .description = sYellowScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

// Key items

    [ITEM_MACH_BIKE] =
    {
        .name = _("MACH BIKE"),
        .itemId = ITEM_MACH_BIKE,
        .price = 0,
        .description = sMachBikeDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_FIELD,
        .fieldUseFunc = FieldUseFunc_Bike,
        .secondaryId = NULL,
    },

    [ITEM_COIN_CASE] =
    {
        .name = _("COIN CASE"),
        .itemId = ITEM_COIN_CASE,
        .price = 0,
        .description = sCoinCaseDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_CoinCase,
    },

    [ITEM_ITEMFINDER] =
    {
        .name = _("ITEMFINDER"),
        .itemId = ITEM_ITEMFINDER,
        .price = 0,
        .description = sItemfinderDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Itemfinder,
    },

    [ITEM_OLD_ROD] =
    {
        .name = _("OLD ROD"),
        .itemId = ITEM_OLD_ROD,
        .price = 0,
        .description = sOldRodDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_FIELD,
        .fieldUseFunc = FieldUseFunc_Rod,
        .secondaryId = OLD_ROD,
    },

    [ITEM_GOOD_ROD] =
    {
        .name = _("GOOD ROD"),
        .itemId = ITEM_GOOD_ROD,
        .price = 0,
        .description = sGoodRodDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_FIELD,
        .fieldUseFunc = FieldUseFunc_Rod,
        .secondaryId = GOOD_ROD,
    },

    [ITEM_SUPER_ROD] =
    {
        .name = _("SUPER ROD"),
        .itemId = ITEM_SUPER_ROD,
        .price = 0,
        .description = sSuperRodDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_FIELD,
        .fieldUseFunc = FieldUseFunc_Rod,
        .secondaryId = SUPER_ROD,
    },

    [ITEM_SS_TICKET] =
    {
        .name = _("S.S. TICKET"),
        .itemId = ITEM_SS_TICKET,
        .price = 0,
        .description = sSSTicketDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_CONTEST_PASS] =
    {
        .name = _("CONTEST PASS"),
        .itemId = ITEM_CONTEST_PASS,
        .price = 0,
        .description = sContestPassDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_10B] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_WAILMER_PAIL] =
    {
        .name = _("WAILMER PAIL"),
        .itemId = ITEM_WAILMER_PAIL,
        .price = 0,
        .description = sWailmerPailDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_FIELD,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_DEVON_GOODS] =
    {
        .name = _("DEVON GOODS"),
        .itemId = ITEM_DEVON_GOODS,
        .price = 0,
        .description = sDevonGoodsDesc,
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_SOOT_SACK] =
    {
        .name = _("SOOT SACK"),
        .itemId = ITEM_SOOT_SACK,
        .price = 0,
        .description = sSootSackDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_BASEMENT_KEY] =
    {
        .name = _("BASEMENT KEY"),
        .itemId = ITEM_BASEMENT_KEY,
        .price = 0,
        .description = sBasementKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_ACRO_BIKE] =
    {
        .name = _("ACRO BIKE"),
        .itemId = ITEM_ACRO_BIKE,
        .price = 0,
        .description = sAcroBikeDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_FIELD,
        .fieldUseFunc = FieldUseFunc_Bike,
        .secondaryId = NULL,
    },

    [ITEM_POKEBLOCK_CASE] =
    {
        .name = _("{POKEBLOCK} CASE"),
        .itemId = ITEM_POKEBLOCK_CASE,
        .price = 0,
        .description = sPokeblockCaseDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_LETTER] =
    {
        .name = _("LETTER"),
        .itemId = ITEM_LETTER,
        .price = 0,
        .description = sLetterDesc,
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_EON_TICKET] =
    {
        .name = _("EON TICKET"),
        .itemId = ITEM_EON_TICKET,
        .price = 0,
        .description = sEonTicketDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
        .secondaryId = 1,
    },

    [ITEM_RED_ORB] =
    {
        .name = _("RED ORB"),
        .itemId = ITEM_RED_ORB,
        .price = 0,
        .description = sRedOrbDesc,
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_BLUE_ORB] =
    {
        .name = _("BLUE ORB"),
        .itemId = ITEM_BLUE_ORB,
        .price = 0,
        .description = sBlueOrbDesc,
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_SCANNER] =
    {
        .name = _("SCANNER"),
        .itemId = ITEM_SCANNER,
        .price = 0,
        .description = sScannerDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_GO_GOGGLES] =
    {
        .name = _("GO-GOGGLES"),
        .itemId = ITEM_GO_GOGGLES,
        .price = 0,
        .description = sGoGogglesDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_METEORITE] =
    {
        .name = _("METEORITE"),
        .itemId = ITEM_METEORITE,
        .price = 0,
        .description = sMeteoriteDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_ROOM_1_KEY] =
    {
        .name = _("RM. 1 KEY"),
        .itemId = ITEM_ROOM_1_KEY,
        .price = 0,
        .description = sRoom1KeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_ROOM_2_KEY] =
    {
        .name = _("RM. 2 KEY"),
        .itemId = ITEM_ROOM_2_KEY,
        .price = 0,
        .description = sRoom2KeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_ROOM_4_KEY] =
    {
        .name = _("RM. 4 KEY"),
        .itemId = ITEM_ROOM_4_KEY,
        .price = 0,
        .description = sRoom4KeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_ROOM_6_KEY] =
    {
        .name = _("RM. 6 KEY"),
        .itemId = ITEM_ROOM_6_KEY,
        .price = 0,
        .description = sRoom6KeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_STORAGE_KEY] =
    {
        .name = _("STORAGE KEY"),
        .itemId = ITEM_STORAGE_KEY,
        .price = 0,
        .description = sStorageKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_ROOT_FOSSIL] =
    {
        .name = _("ROOT FOSSIL"),
        .itemId = ITEM_ROOT_FOSSIL,
        .price = 0,
        .description = sRootFossilDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_CLAW_FOSSIL] =
    {
        .name = _("CLAW FOSSIL"),
        .itemId = ITEM_CLAW_FOSSIL,
        .price = 0,
        .description = sClawFossilDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_DEVON_SCOPE] =
    {
        .name = _("DEVON SCOPE"),
        .itemId = ITEM_DEVON_SCOPE,
        .price = 0,
        .description = sDevonScopeDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

// TMs/HMs

    [ITEM_TM01_FOCUS_PUNCH] =
    {
        .name = _("TM01"),
        .itemId = ITEM_TM01_FOCUS_PUNCH,
        .price = 3000,
        .description = sTM01Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM02_DRAGON_CLAW] =
    {
        .name = _("TM02"),
        .itemId = ITEM_TM02_DRAGON_CLAW,
        .price = 3000,
        .description = sTM02Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM03_WATER_PULSE] =
    {
        .name = _("TM03"),
        .itemId = ITEM_TM03_WATER_PULSE,
        .price = 3000,
        .description = sTM03Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM04_CALM_MIND] =
    {
        .name = _("TM04"),
        .itemId = ITEM_TM04_CALM_MIND,
        .price = 3000,
        .description = sTM04Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM05_ROAR] =
    {
        .name = _("TM05"),
        .itemId = ITEM_TM05_ROAR,
        .price = 1000,
        .description = sTM05Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM06_TOXIC] =
    {
        .name = _("TM06"),
        .itemId = ITEM_TM06_TOXIC,
        .price = 3000,
        .description = sTM06Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM07_HAIL] =
    {
        .name = _("TM07"),
        .itemId = ITEM_TM07_HAIL,
        .price = 3000,
        .description = sTM07Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM08_BULK_UP] =
    {
        .name = _("TM08"),
        .itemId = ITEM_TM08_BULK_UP,
        .price = 3000,
        .description = sTM08Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM09_BULLET_SEED] =
    {
        .name = _("TM09"),
        .itemId = ITEM_TM09_BULLET_SEED,
        .price = 3000,
        .description = sTM09Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM10_HIDDEN_POWER] =
    {
        .name = _("TM10"),
        .itemId = ITEM_TM10_HIDDEN_POWER,
        .price = 3000,
        .description = sTM10Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM11_SUNNY_DAY] =
    {
        .name = _("TM11"),
        .itemId = ITEM_TM11_SUNNY_DAY,
        .price = 2000,
        .description = sTM11Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM12_TAUNT] =
    {
        .name = _("TM12"),
        .itemId = ITEM_TM12_TAUNT,
        .price = 3000,
        .description = sTM12Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM13_ICE_BEAM] =
    {
        .name = _("TM13"),
        .itemId = ITEM_TM13_ICE_BEAM,
        .price = 3000,
        .description = sTM13Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM14_BLIZZARD] =
    {
        .name = _("TM14"),
        .itemId = ITEM_TM14_BLIZZARD,
        .price = 5500,
        .description = sTM14Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM15_HYPER_BEAM] =
    {
        .name = _("TM15"),
        .itemId = ITEM_TM15_HYPER_BEAM,
        .price = 7500,
        .description = sTM15Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM16_LIGHT_SCREEN] =
    {
        .name = _("TM16"),
        .itemId = ITEM_TM16_LIGHT_SCREEN,
        .price = 3000,
        .description = sTM16Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM17_PROTECT] =
    {
        .name = _("TM17"),
        .itemId = ITEM_TM17_PROTECT,
        .price = 3000,
        .description = sTM17Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM18_RAIN_DANCE] =
    {
        .name = _("TM18"),
        .itemId = ITEM_TM18_RAIN_DANCE,
        .price = 2000,
        .description = sTM18Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM19_GIGA_DRAIN] =
    {
        .name = _("TM19"),
        .itemId = ITEM_TM19_GIGA_DRAIN,
        .price = 3000,
        .description = sTM19Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM20_SAFEGUARD] =
    {
        .name = _("TM20"),
        .itemId = ITEM_TM20_SAFEGUARD,
        .price = 3000,
        .description = sTM20Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM21_FRUSTRATION] =
    {
        .name = _("TM21"),
        .itemId = ITEM_TM21_FRUSTRATION,
        .price = 1000,
        .description = sTM21Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM22_SOLAR_BEAM] =
    {
        .name = _("TM22"),
        .itemId = ITEM_TM22_SOLAR_BEAM,
        .price = 3000,
        .description = sTM22Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM23_IRON_TAIL] =
    {
        .name = _("TM23"),
        .itemId = ITEM_TM23_IRON_TAIL,
        .price = 3000,
        .description = sTM23Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM24_THUNDERBOLT] =
    {
        .name = _("TM24"),
        .itemId = ITEM_TM24_THUNDERBOLT,
        .price = 3000,
        .description = sTM24Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM25_THUNDER] =
    {
        .name = _("TM25"),
        .itemId = ITEM_TM25_THUNDER,
        .price = 5500,
        .description = sTM25Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM26_EARTHQUAKE] =
    {
        .name = _("TM26"),
        .itemId = ITEM_TM26_EARTHQUAKE,
        .price = 3000,
        .description = sTM26Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM27_RETURN] =
    {
        .name = _("TM27"),
        .itemId = ITEM_TM27_RETURN,
        .price = 1000,
        .description = sTM27Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM28_DIG] =
    {
        .name = _("TM28"),
        .itemId = ITEM_TM28_DIG,
        .price = 2000,
        .description = sTM28Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM29_PSYCHIC] =
    {
        .name = _("TM29"),
        .itemId = ITEM_TM29_PSYCHIC,
        .price = 2000,
        .description = sTM29Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM30_SHADOW_BALL] =
    {
        .name = _("TM30"),
        .itemId = ITEM_TM30_SHADOW_BALL,
        .price = 3000,
        .description = sTM30Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM31_BRICK_BREAK] =
    {
        .name = _("TM31"),
        .itemId = ITEM_TM31_BRICK_BREAK,
        .price = 3000,
        .description = sTM31Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM32_DOUBLE_TEAM] =
    {
        .name = _("TM32"),
        .itemId = ITEM_TM32_DOUBLE_TEAM,
        .price = 2000,
        .description = sTM32Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM33_REFLECT] =
    {
        .name = _("TM33"),
        .itemId = ITEM_TM33_REFLECT,
        .price = 3000,
        .description = sTM33Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM34_SHOCK_WAVE] =
    {
        .name = _("TM34"),
        .itemId = ITEM_TM34_SHOCK_WAVE,
        .price = 3000,
        .description = sTM34Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM35_FLAMETHROWER] =
    {
        .name = _("TM35"),
        .itemId = ITEM_TM35_FLAMETHROWER,
        .price = 3000,
        .description = sTM35Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM36_SLUDGE_BOMB] =
    {
        .name = _("TM36"),
        .itemId = ITEM_TM36_SLUDGE_BOMB,
        .price = 1000,
        .description = sTM36Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM37_SANDSTORM] =
    {
        .name = _("TM37"),
        .itemId = ITEM_TM37_SANDSTORM,
        .price = 2000,
        .description = sTM37Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM38_FIRE_BLAST] =
    {
        .name = _("TM38"),
        .itemId = ITEM_TM38_FIRE_BLAST,
        .price = 5500,
        .description = sTM38Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM39_ROCK_TOMB] =
    {
        .name = _("TM39"),
        .itemId = ITEM_TM39_ROCK_TOMB,
        .price = 3000,
        .description = sTM39Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM40_AERIAL_ACE] =
    {
        .name = _("TM40"),
        .itemId = ITEM_TM40_AERIAL_ACE,
        .price = 3000,
        .description = sTM40Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM41_TORMENT] =
    {
        .name = _("TM41"),
        .itemId = ITEM_TM41_TORMENT,
        .price = 3000,
        .description = sTM41Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM42_FACADE] =
    {
        .name = _("TM42"),
        .itemId = ITEM_TM42_FACADE,
        .price = 3000,
        .description = sTM42Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM43_SECRET_POWER] =
    {
        .name = _("TM43"),
        .itemId = ITEM_TM43_SECRET_POWER,
        .price = 3000,
        .description = sTM43Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM44_REST] =
    {
        .name = _("TM44"),
        .itemId = ITEM_TM44_REST,
        .price = 3000,
        .description = sTM44Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM45_ATTRACT] =
    {
        .name = _("TM45"),
        .itemId = ITEM_TM45_ATTRACT,
        .price = 3000,
        .description = sTM45Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM46_THIEF] =
    {
        .name = _("TM46"),
        .itemId = ITEM_TM46_THIEF,
        .price = 3000,
        .description = sTM46Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM47_STEEL_WING] =
    {
        .name = _("TM47"),
        .itemId = ITEM_TM47_STEEL_WING,
        .price = 3000,
        .description = sTM47Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM48_SKILL_SWAP] =
    {
        .name = _("TM48"),
        .itemId = ITEM_TM48_SKILL_SWAP,
        .price = 3000,
        .description = sTM48Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM49_SNATCH] =
    {
        .name = _("TM49"),
        .itemId = ITEM_TM49_SNATCH,
        .price = 3000,
        .description = sTM49Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_TM50_OVERHEAT] =
    {
        .name = _("TM50"),
        .itemId = ITEM_TM50_OVERHEAT,
        .price = 3000,
        .description = sTM50Desc,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_HM01_CUT] =
    {
        .name = _("HM01"),
        .itemId = ITEM_HM01_CUT,
        .price = 0,
        .description = sHM01Desc,
        .importance = 1,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_HM02_FLY] =
    {
        .name = _("HM02"),
        .itemId = ITEM_HM02_FLY,
        .price = 0,
        .description = sHM02Desc,
        .importance = 1,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_HM03_SURF] =
    {
        .name = _("HM03"),
        .itemId = ITEM_HM03_SURF,
        .price = 0,
        .description = sHM03Desc,
        .importance = 1,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_HM04_STRENGTH] =
    {
        .name = _("HM04"),
        .itemId = ITEM_HM04_STRENGTH,
        .price = 0,
        .description = sHM04Desc,
        .importance = 1,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_HM05_FLASH] =
    {
        .name = _("HM05"),
        .itemId = ITEM_HM05_FLASH,
        .price = 0,
        .description = sHM05Desc,
        .importance = 1,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_HM06_ROCK_SMASH] =
    {
        .name = _("HM06"),
        .itemId = ITEM_HM06_ROCK_SMASH,
        .price = 0,
        .description = sHM06Desc,
        .importance = 1,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_HM07_WATERFALL] =
    {
        .name = _("HM07"),
        .itemId = ITEM_HM07_WATERFALL,
        .price = 0,
        .description = sHM07Desc,
        .importance = 1,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_HM08_DIVE] =
    {
        .name = _("HM08"),
        .itemId = ITEM_HM08_DIVE,
        .price = 0,
        .description = sHM08Desc,
        .importance = 1,
        .pocket = POCKET_TM_CASE,
        .type = ITEM_TYPE_PARTY_MENU,
        .fieldUseFunc = "NULL",
    },

    [ITEM_15B] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_15C] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

// FireRed/LeafGreen key items

    [ITEM_OAKS_PARCEL] =
    {
        .name = _("OAK'S PARCEL"),
        .itemId = ITEM_OAKS_PARCEL,
        .price = 0,
        .description = sOaksParcelDesc,
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_POKE_FLUTE] =
    {
        .name = _("POKé FLUTE"),
        .itemId = ITEM_POKE_FLUTE,
        .price = 0,
        .description = sPokeFluteDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_SECRET_KEY] =
    {
        .name = _("SECRET KEY"),
        .itemId = ITEM_SECRET_KEY,
        .price = 0,
        .description = sSecretKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_BIKE_VOUCHER] =
    {
        .name = _("BIKE VOUCHER"),
        .itemId = ITEM_BIKE_VOUCHER,
        .price = 0,
        .description = sBikeVoucherDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_GOLD_TEETH] =
    {
        .name = _("GOLD TEETH"),
        .itemId = ITEM_GOLD_TEETH,
        .price = 0,
        .description = sGoldTeethDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_OLD_AMBER] =
    {
        .name = _("OLD AMBER"),
        .itemId = ITEM_OLD_AMBER,
        .price = 0,
        .description = sOldAmberDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_CARD_KEY] =
    {
        .name = _("CARD KEY"),
        .itemId = ITEM_CARD_KEY,
        .price = 0,
        .description = sCardKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_LIFT_KEY] =
    {
        .name = _("LIFT KEY"),
        .itemId = ITEM_LIFT_KEY,
        .price = 0,
        .description = sLiftKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_HELIX_FOSSIL] =
    {
        .name = _("HELIX FOSSIL"),
        .itemId = ITEM_HELIX_FOSSIL,
        .price = 0,
        .description = sHelixFossilDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_DOME_FOSSIL] =
    {
        .name = _("DOME FOSSIL"),
        .itemId = ITEM_DOME_FOSSIL,
        .price = 0,
        .description = sDomeFossilDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_SILPH_SCOPE] =
    {
        .name = _("SILPH SCOPE"),
        .itemId = ITEM_SILPH_SCOPE,
        .price = 0,
        .description = sSilphScopeDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_BICYCLE] =
    {
        .name = _("BICYCLE"),
        .itemId = ITEM_BICYCLE,
        .price = 0,
        .description = sBicycleDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_FIELD,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_TOWN_MAP] =
    {
        .name = _("TOWN MAP"),
        .itemId = ITEM_TOWN_MAP,
        .price = 0,
        .description = sTownMapDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_VS_SEEKER] =
    {
        .name = _("VS SEEKER"),
        .itemId = ITEM_VS_SEEKER,
        .price = 0,
        .description = sVSSeekerDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_FIELD,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_FAME_CHECKER] =
    {
        .name = _("FAME CHECKER"),
        .itemId = ITEM_FAME_CHECKER,
        .price = 0,
        .description = sFameCheckerDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_TM_CASE] =
    {
        .name = _("TM CASE"),
        .itemId = ITEM_TM_CASE,
        .price = 0,
        .description = sTMCaseDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_BERRY_POUCH] =
    {
        .name = _("BERRY POUCH"),
        .itemId = ITEM_BERRY_POUCH,
        .price = 0,
        .description = sBerryPouchDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_TEACHY_TV] =
    {
        .name = _("TEACHY TV"),
        .itemId = ITEM_TEACHY_TV,
        .price = 0,
        .description = sTeachyTVDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_FIELD,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_TRI_PASS] =
    {
        .name = _("TRI-PASS"),
        .itemId = ITEM_TRI_PASS,
        .price = 0,
        .description = sTriPassDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_RAINBOW_PASS] =
    {
        .name = _("RAINBOW PASS"),
        .itemId = ITEM_RAINBOW_PASS,
        .price = 0,
        .description = sRainbowPassDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_TEA] =
    {
        .name = _("TEA"),
        .itemId = ITEM_TEA,
        .price = 0,
        .description = sTeaDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_MYSTIC_TICKET] =
    {
        .name = _("MYSTICTICKET"),
        .itemId = ITEM_MYSTIC_TICKET,
        .price = 0,
        .description = sMysticTicketDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_AURORA_TICKET] =
    {
        .name = _("AURORATICKET"),
        .itemId = ITEM_AURORA_TICKET,
        .price = 0,
        .description = sAuroraTicketDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_POWDER_JAR] =
    {
        .name = _("POWDER JAR"),
        .itemId = ITEM_POWDER_JAR,
        .price = 0,
        .description = sPowderJarDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_PowderJar,
    },

    [ITEM_RUBY] =
    {
        .name = _("RUBY"),
        .itemId = ITEM_RUBY,
        .price = 0,
        .description = sRubyDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },

    [ITEM_SAPPHIRE] =
    {
        .name = _("SAPPHIRE"),
        .itemId = ITEM_SAPPHIRE,
        .price = 0,
        .description = sSapphireDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_TYPE_BAG_MENU,
        .fieldUseFunc = FieldUseFunc_OakStopsYou,
    },
};
