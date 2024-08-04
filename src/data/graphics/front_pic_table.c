#include "../../../include/global.h"
#include "../../../include/gflib.h"
#include "../../../include/mail_data.h"
#include "../../../include/pokemon_icon.h"
#include "../../../include/graphics.h"
#include "../../../include/constants/species.h"
#include "../../../include/gba/types.h"

#define SPECIES_SPRITE(species, sprite) [SPECIES_##species] = {sprite, 0x800, SPECIES_##species}

extern const u32 gMonFrontPic_CircledQuestionMark[];
extern const u32 gMonFrontPic_Bulbasaur[];
extern const u32 gMonFrontPic_Ivysaur[];
extern const u32 gMonFrontPic_Venusaur[];
extern const u32 gMonFrontPic_Charmander[];
extern const u32 gMonFrontPic_Charmeleon[];
extern const u32 gMonFrontPic_Charizard[];
extern const u32 gMonFrontPic_Squirtle[];
extern const u32 gMonFrontPic_Wartortle[];
extern const u32 gMonFrontPic_Blastoise[];
extern const u32 gMonFrontPic_Caterpie[];
extern const u32 gMonFrontPic_Metapod[];
extern const u32 gMonFrontPic_Butterfree[];
extern const u32 gMonFrontPic_Weedle[];
extern const u32 gMonFrontPic_Kakuna[];
extern const u32 gMonFrontPic_Beedrill[];
extern const u32 gMonFrontPic_Pidgey[];
extern const u32 gMonFrontPic_Pidgeotto[];
extern const u32 gMonFrontPic_Pidgeot[];
extern const u32 gMonFrontPic_Rattata[];
extern const u32 gMonFrontPic_Raticate[];
extern const u32 gMonFrontPic_Spearow[];
extern const u32 gMonFrontPic_Fearow[];
extern const u32 gMonFrontPic_Ekans[];
extern const u32 gMonFrontPic_Arbok[];
extern const u32 gMonFrontPic_Pikachu[];
extern const u32 gMonFrontPic_Raichu[];
extern const u32 gMonFrontPic_Sandshrew[];
extern const u32 gMonFrontPic_Sandslash[];
extern const u32 gMonFrontPic_Nidoransf[];
extern const u32 gMonFrontPic_Nidorina[];
extern const u32 gMonFrontPic_Nidoqueen[];
extern const u32 gMonFrontPic_Nidoransm[];
extern const u32 gMonFrontPic_Nidorino[];
extern const u32 gMonFrontPic_Nidoking[];
extern const u32 gMonFrontPic_Clefairy[];
extern const u32 gMonFrontPic_Clefable[];
extern const u32 gMonFrontPic_Vulpix[];
extern const u32 gMonFrontPic_Ninetales[];
extern const u32 gMonFrontPic_Jigglypuff[];
extern const u32 gMonFrontPic_Wigglytuff[];
extern const u32 gMonFrontPic_Zubat[];
extern const u32 gMonFrontPic_Golbat[];
extern const u32 gMonFrontPic_Oddish[];
extern const u32 gMonFrontPic_Gloom[];
extern const u32 gMonFrontPic_Vileplume[];
extern const u32 gMonFrontPic_Paras[];
extern const u32 gMonFrontPic_Parasect[];
extern const u32 gMonFrontPic_Venonat[];
extern const u32 gMonFrontPic_Venomoth[];
extern const u32 gMonFrontPic_Diglett[];
extern const u32 gMonFrontPic_Dugtrio[];
extern const u32 gMonFrontPic_Meowth[];
extern const u32 gMonFrontPic_Persian[];
extern const u32 gMonFrontPic_Psyduck[];
extern const u32 gMonFrontPic_Golduck[];
extern const u32 gMonFrontPic_Mankey[];
extern const u32 gMonFrontPic_Primeape[];
extern const u32 gMonFrontPic_Growlithe[];
extern const u32 gMonFrontPic_Arcanine[];
extern const u32 gMonFrontPic_Poliwag[];
extern const u32 gMonFrontPic_Poliwhirl[];
extern const u32 gMonFrontPic_Poliwrath[];
extern const u32 gMonFrontPic_Abra[];
extern const u32 gMonFrontPic_Kadabra[];
extern const u32 gMonFrontPic_Alakazam[];
extern const u32 gMonFrontPic_Machop[];
extern const u32 gMonFrontPic_Machoke[];
extern const u32 gMonFrontPic_Machamp[];
extern const u32 gMonFrontPic_Bellsprout[];
extern const u32 gMonFrontPic_Weepinbell[];
extern const u32 gMonFrontPic_Victreebel[];
extern const u32 gMonFrontPic_Tentacool[];
extern const u32 gMonFrontPic_Tentacruel[];
extern const u32 gMonFrontPic_Geodude[];
extern const u32 gMonFrontPic_Graveler[];
extern const u32 gMonFrontPic_Golem[];
extern const u32 gMonFrontPic_Ponyta[];
extern const u32 gMonFrontPic_Rapidash[];
extern const u32 gMonFrontPic_Slowpoke[];
extern const u32 gMonFrontPic_Slowbro[];
extern const u32 gMonFrontPic_Magnemite[];
extern const u32 gMonFrontPic_Magneton[];
extern const u32 gMonFrontPic_Farfetchd[];
extern const u32 gMonFrontPic_Doduo[];
extern const u32 gMonFrontPic_Dodrio[];
extern const u32 gMonFrontPic_Seel[];
extern const u32 gMonFrontPic_Dewgong[];
extern const u32 gMonFrontPic_Grimer[];
extern const u32 gMonFrontPic_Muk[];
extern const u32 gMonFrontPic_Shellder[];
extern const u32 gMonFrontPic_Cloyster[];
extern const u32 gMonFrontPic_Gastly[];
extern const u32 gMonFrontPic_Haunter[];
extern const u32 gMonFrontPic_Gengar[];
extern const u32 gMonFrontPic_Onix[];
extern const u32 gMonFrontPic_Drowzee[];
extern const u32 gMonFrontPic_Hypno[];
extern const u32 gMonFrontPic_Krabby[];
extern const u32 gMonFrontPic_Kingler[];
extern const u32 gMonFrontPic_Voltorb[];
extern const u32 gMonFrontPic_Electrode[];
extern const u32 gMonFrontPic_Exeggcute[];
extern const u32 gMonFrontPic_Exeggutor[];
extern const u32 gMonFrontPic_Cubone[];
extern const u32 gMonFrontPic_Marowak[];
extern const u32 gMonFrontPic_Hitmonlee[];
extern const u32 gMonFrontPic_Hitmonchan[];
extern const u32 gMonFrontPic_Lickitung[];
extern const u32 gMonFrontPic_Koffing[];
extern const u32 gMonFrontPic_Weezing[];
extern const u32 gMonFrontPic_Rhyhorn[];
extern const u32 gMonFrontPic_Rhydon[];
extern const u32 gMonFrontPic_Chansey[];
extern const u32 gMonFrontPic_Tangela[];
extern const u32 gMonFrontPic_Kangaskhan[];
extern const u32 gMonFrontPic_Horsea[];
extern const u32 gMonFrontPic_Seadra[];
extern const u32 gMonFrontPic_Goldeen[];
extern const u32 gMonFrontPic_Seaking[];
extern const u32 gMonFrontPic_Staryu[];
extern const u32 gMonFrontPic_Starmie[];
extern const u32 gMonFrontPic_MrMime[];
extern const u32 gMonFrontPic_Scyther[];
extern const u32 gMonFrontPic_Jynx[];
extern const u32 gMonFrontPic_Electabuzz[];
extern const u32 gMonFrontPic_Magmar[];
extern const u32 gMonFrontPic_Pinsir[];
extern const u32 gMonFrontPic_Tauros[];
extern const u32 gMonFrontPic_Magikarp[];
extern const u32 gMonFrontPic_Gyarados[];
extern const u32 gMonFrontPic_Lapras[];
extern const u32 gMonFrontPic_Ditto[];
extern const u32 gMonFrontPic_Eevee[];
extern const u32 gMonFrontPic_Vaporeon[];
extern const u32 gMonFrontPic_Jolteon[];
extern const u32 gMonFrontPic_Flareon[];
extern const u32 gMonFrontPic_Porygon[];
extern const u32 gMonFrontPic_Omanyte[];
extern const u32 gMonFrontPic_Omastar[];
extern const u32 gMonFrontPic_Kabuto[];
extern const u32 gMonFrontPic_Kabutops[];
extern const u32 gMonFrontPic_Aerodactyl[];
extern const u32 gMonFrontPic_Snorlax[];
extern const u32 gMonFrontPic_Articuno[];
extern const u32 gMonFrontPic_Zapdos[];
extern const u32 gMonFrontPic_Moltres[];
extern const u32 gMonFrontPic_Dratini[];
extern const u32 gMonFrontPic_Dragonair[];
extern const u32 gMonFrontPic_Dragonite[];
extern const u32 gMonFrontPic_Mewtwo[];
extern const u32 gMonFrontPic_Mew[];
extern const u32 gMonFrontPic_Chikorita[];
extern const u32 gMonFrontPic_Bayleef[];
extern const u32 gMonFrontPic_Meganium[];
extern const u32 gMonFrontPic_Cyndaquil[];
extern const u32 gMonFrontPic_Quilava[];
extern const u32 gMonFrontPic_Typhlosion[];
extern const u32 gMonFrontPic_Totodile[];
extern const u32 gMonFrontPic_Croconaw[];
extern const u32 gMonFrontPic_Feraligatr[];
extern const u32 gMonFrontPic_Sentret[];
extern const u32 gMonFrontPic_Furret[];
extern const u32 gMonFrontPic_Hoothoot[];
extern const u32 gMonFrontPic_Noctowl[];
extern const u32 gMonFrontPic_Ledyba[];
extern const u32 gMonFrontPic_Ledian[];
extern const u32 gMonFrontPic_Spinarak[];
extern const u32 gMonFrontPic_Ariados[];
extern const u32 gMonFrontPic_Crobat[];
extern const u32 gMonFrontPic_Chinchou[];
extern const u32 gMonFrontPic_Lanturn[];
extern const u32 gMonFrontPic_Pichu[];
extern const u32 gMonFrontPic_Cleffa[];
extern const u32 gMonFrontPic_Igglybuff[];
extern const u32 gMonFrontPic_Togepi[];
extern const u32 gMonFrontPic_Togetic[];
extern const u32 gMonFrontPic_Natu[];
extern const u32 gMonFrontPic_Xatu[];
extern const u32 gMonFrontPic_Mareep[];
extern const u32 gMonFrontPic_Flaaffy[];
extern const u32 gMonFrontPic_Ampharos[];
extern const u32 gMonFrontPic_Bellossom[];
extern const u32 gMonFrontPic_Marill[];
extern const u32 gMonFrontPic_Azumarill[];
extern const u32 gMonFrontPic_Sudowoodo[];
extern const u32 gMonFrontPic_Politoed[];
extern const u32 gMonFrontPic_Hoppip[];
extern const u32 gMonFrontPic_Skiploom[];
extern const u32 gMonFrontPic_Jumpluff[];
extern const u32 gMonFrontPic_Aipom[];
extern const u32 gMonFrontPic_Sunkern[];
extern const u32 gMonFrontPic_Sunflora[];
extern const u32 gMonFrontPic_Yanma[];
extern const u32 gMonFrontPic_Wooper[];
extern const u32 gMonFrontPic_Quagsire[];
extern const u32 gMonFrontPic_Espeon[];
extern const u32 gMonFrontPic_Umbreon[];
extern const u32 gMonFrontPic_Murkrow[];
extern const u32 gMonFrontPic_Slowking[];
extern const u32 gMonFrontPic_Misdreavus[];
extern const u32 gMonFrontPic_Unown[];
extern const u32 gMonFrontPic_Wobbuffet[];
extern const u32 gMonFrontPic_Girafarig[];
extern const u32 gMonFrontPic_Pineco[];
extern const u32 gMonFrontPic_Forretress[];
extern const u32 gMonFrontPic_Dunsparce[];
extern const u32 gMonFrontPic_Gligar[];
extern const u32 gMonFrontPic_Steelix[];
extern const u32 gMonFrontPic_Snubbull[];
extern const u32 gMonFrontPic_Granbull[];
extern const u32 gMonFrontPic_Qwilfish[];
extern const u32 gMonFrontPic_Scizor[];
extern const u32 gMonFrontPic_Shuckle[];
extern const u32 gMonFrontPic_Heracross[];
extern const u32 gMonFrontPic_Sneasel[];
extern const u32 gMonFrontPic_Teddiursa[];
extern const u32 gMonFrontPic_Ursaring[];
extern const u32 gMonFrontPic_Slugma[];
extern const u32 gMonFrontPic_Magcargo[];
extern const u32 gMonFrontPic_Swinub[];
extern const u32 gMonFrontPic_Piloswine[];
extern const u32 gMonFrontPic_Corsola[];
extern const u32 gMonFrontPic_Remoraid[];
extern const u32 gMonFrontPic_Octillery[];
extern const u32 gMonFrontPic_Delibird[];
extern const u32 gMonFrontPic_Mantine[];
extern const u32 gMonFrontPic_Skarmory[];
extern const u32 gMonFrontPic_Houndour[];
extern const u32 gMonFrontPic_Houndoom[];
extern const u32 gMonFrontPic_Kingdra[];
extern const u32 gMonFrontPic_Phanpy[];
extern const u32 gMonFrontPic_Donphan[];
extern const u32 gMonFrontPic_Porygon2[];
extern const u32 gMonFrontPic_Stantler[];
extern const u32 gMonFrontPic_Smeargle[];
extern const u32 gMonFrontPic_Tyrogue[];
extern const u32 gMonFrontPic_Hitmontop[];
extern const u32 gMonFrontPic_Smoochum[];
extern const u32 gMonFrontPic_Elekid[];
extern const u32 gMonFrontPic_Magby[];
extern const u32 gMonFrontPic_Miltank[];
extern const u32 gMonFrontPic_Blissey[];
extern const u32 gMonFrontPic_Raikou[];
extern const u32 gMonFrontPic_Entei[];
extern const u32 gMonFrontPic_Suicune[];
extern const u32 gMonFrontPic_Larvitar[];
extern const u32 gMonFrontPic_Pupitar[];
extern const u32 gMonFrontPic_Tyranitar[];
extern const u32 gMonFrontPic_Lugia[];
extern const u32 gMonFrontPic_HoOh[];
extern const u32 gMonFrontPic_Celebi[];
extern const u32 gMonFrontPic_Treecko[];
extern const u32 gMonFrontPic_Grovyle[];
extern const u32 gMonFrontPic_Sceptile[];
extern const u32 gMonFrontPic_Torchic[];
extern const u32 gMonFrontPic_Combusken[];
extern const u32 gMonFrontPic_Blaziken[];
extern const u32 gMonFrontPic_Mudkip[];
extern const u32 gMonFrontPic_Marshtomp[];
extern const u32 gMonFrontPic_Swampert[];
extern const u32 gMonFrontPic_Poochyena[];
extern const u32 gMonFrontPic_Mightyena[];
extern const u32 gMonFrontPic_Zigzagoon[];
extern const u32 gMonFrontPic_Linoone[];
extern const u32 gMonFrontPic_Wurmple[];
extern const u32 gMonFrontPic_Silcoon[];
extern const u32 gMonFrontPic_Beautifly[];
extern const u32 gMonFrontPic_Cascoon[];
extern const u32 gMonFrontPic_Dustox[];
extern const u32 gMonFrontPic_Lotad[];
extern const u32 gMonFrontPic_Lombre[];
extern const u32 gMonFrontPic_Ludicolo[];
extern const u32 gMonFrontPic_Seedot[];
extern const u32 gMonFrontPic_Nuzleaf[];
extern const u32 gMonFrontPic_Shiftry[];
extern const u32 gMonFrontPic_Taillow[];
extern const u32 gMonFrontPic_Swellow[];
extern const u32 gMonFrontPic_Wingull[];
extern const u32 gMonFrontPic_Pelipper[];
extern const u32 gMonFrontPic_Ralts[];
extern const u32 gMonFrontPic_Kirlia[];
extern const u32 gMonFrontPic_Gardevoir[];
extern const u32 gMonFrontPic_Surskit[];
extern const u32 gMonFrontPic_Masquerain[];
extern const u32 gMonFrontPic_Shroomish[];
extern const u32 gMonFrontPic_Breloom[];
extern const u32 gMonFrontPic_Slakoth[];
extern const u32 gMonFrontPic_Vigoroth[];
extern const u32 gMonFrontPic_Slaking[];
extern const u32 gMonFrontPic_Nincada[];
extern const u32 gMonFrontPic_Ninjask[];
extern const u32 gMonFrontPic_Shedinja[];
extern const u32 gMonFrontPic_Whismur[];
extern const u32 gMonFrontPic_Loudred[];
extern const u32 gMonFrontPic_Exploud[];
extern const u32 gMonFrontPic_Makuhita[];
extern const u32 gMonFrontPic_Hariyama[];
extern const u32 gMonFrontPic_Azurill[];
extern const u32 gMonFrontPic_Nosepass[];
extern const u32 gMonFrontPic_Skitty[];
extern const u32 gMonFrontPic_Delcatty[];
extern const u32 gMonFrontPic_Sableye[];
extern const u32 gMonFrontPic_Mawile[];
extern const u32 gMonFrontPic_Aron[];
extern const u32 gMonFrontPic_Lairon[];
extern const u32 gMonFrontPic_Aggron[];
extern const u32 gMonFrontPic_Meditite[];
extern const u32 gMonFrontPic_Medicham[];
extern const u32 gMonFrontPic_Electrike[];
extern const u32 gMonFrontPic_Manectric[];
extern const u32 gMonFrontPic_Plusle[];
extern const u32 gMonFrontPic_Minun[];
extern const u32 gMonFrontPic_Volbeat[];
extern const u32 gMonFrontPic_Illumise[];
extern const u32 gMonFrontPic_Roselia[];
extern const u32 gMonFrontPic_Gulpin[];
extern const u32 gMonFrontPic_Swalot[];
extern const u32 gMonFrontPic_Carvanha[];
extern const u32 gMonFrontPic_Sharpedo[];
extern const u32 gMonFrontPic_Wailmer[];
extern const u32 gMonFrontPic_Wailord[];
extern const u32 gMonFrontPic_Numel[];
extern const u32 gMonFrontPic_Camerupt[];
extern const u32 gMonFrontPic_Torkoal[];
extern const u32 gMonFrontPic_Spoink[];
extern const u32 gMonFrontPic_Grumpig[];
extern const u32 gMonFrontPic_Spinda[];
extern const u32 gMonFrontPic_Trapinch[];
extern const u32 gMonFrontPic_Vibrava[];
extern const u32 gMonFrontPic_Flygon[];
extern const u32 gMonFrontPic_Cacnea[];
extern const u32 gMonFrontPic_Cacturne[];
extern const u32 gMonFrontPic_Swablu[];
extern const u32 gMonFrontPic_Altaria[];
extern const u32 gMonFrontPic_Zangoose[];
extern const u32 gMonFrontPic_Seviper[];
extern const u32 gMonFrontPic_Lunatone[];
extern const u32 gMonFrontPic_Solrock[];
extern const u32 gMonFrontPic_Barboach[];
extern const u32 gMonFrontPic_Whiscash[];
extern const u32 gMonFrontPic_Corphish[];
extern const u32 gMonFrontPic_Crawdaunt[];
extern const u32 gMonFrontPic_Baltoy[];
extern const u32 gMonFrontPic_Claydol[];
extern const u32 gMonFrontPic_Lileep[];
extern const u32 gMonFrontPic_Cradily[];
extern const u32 gMonFrontPic_Anorith[];
extern const u32 gMonFrontPic_Armaldo[];
extern const u32 gMonFrontPic_Feebas[];
extern const u32 gMonFrontPic_Milotic[];
extern const u32 gMonFrontPic_Castform[];
extern const u32 gMonFrontPic_Kecleon[];
extern const u32 gMonFrontPic_Shuppet[];
extern const u32 gMonFrontPic_Banette[];
extern const u32 gMonFrontPic_Duskull[];
extern const u32 gMonFrontPic_Dusclops[];
extern const u32 gMonFrontPic_Tropius[];
extern const u32 gMonFrontPic_Chimecho[];
extern const u32 gMonFrontPic_Absol[];
extern const u32 gMonFrontPic_Wynaut[];
extern const u32 gMonFrontPic_Snorunt[];
extern const u32 gMonFrontPic_Glalie[];
extern const u32 gMonFrontPic_Spheal[];
extern const u32 gMonFrontPic_Sealeo[];
extern const u32 gMonFrontPic_Walrein[];
extern const u32 gMonFrontPic_Clamperl[];
extern const u32 gMonFrontPic_Huntail[];
extern const u32 gMonFrontPic_Gorebyss[];
extern const u32 gMonFrontPic_Relicanth[];
extern const u32 gMonFrontPic_Luvdisc[];
extern const u32 gMonFrontPic_Bagon[];
extern const u32 gMonFrontPic_Shelgon[];
extern const u32 gMonFrontPic_Salamence[];
extern const u32 gMonFrontPic_Beldum[];
extern const u32 gMonFrontPic_Metang[];
extern const u32 gMonFrontPic_Metagross[];
extern const u32 gMonFrontPic_Regirock[];
extern const u32 gMonFrontPic_Regice[];
extern const u32 gMonFrontPic_Registeel[];
extern const u32 gMonFrontPic_Latias[];
extern const u32 gMonFrontPic_Latios[];
extern const u32 gMonFrontPic_Kyogre[];
extern const u32 gMonFrontPic_Groudon[];
extern const u32 gMonFrontPic_Rayquaza[];
extern const u32 gMonFrontPic_Jirachi[];
extern const u32 gMonFrontPic_Deoxys[];
extern const u32 gMonFrontPic_Turtwig[];
extern const u32 gMonFrontPic_Grotle[];
extern const u32 gMonFrontPic_Torterra[];
extern const u32 gMonFrontPic_Chimchar[];
extern const u32 gMonFrontPic_Monferno[];
extern const u32 gMonFrontPic_Infernape[];
extern const u32 gMonFrontPic_Piplup[];
extern const u32 gMonFrontPic_Prinplup[];
extern const u32 gMonFrontPic_Empoleon[];
extern const u32 gMonFrontPic_Starly[];
extern const u32 gMonFrontPic_Staravia[];
extern const u32 gMonFrontPic_Staraptor[];
extern const u32 gMonFrontPic_Bidoof[];
extern const u32 gMonFrontPic_Bibarel[];
extern const u32 gMonFrontPic_Kricketot[];
extern const u32 gMonFrontPic_Kricketune[];
extern const u32 gMonFrontPic_Shinx[];
extern const u32 gMonFrontPic_Luxio[];
extern const u32 gMonFrontPic_Luxray[];
extern const u32 gMonFrontPic_Budew[];
extern const u32 gMonFrontPic_Roserade[];
extern const u32 gMonFrontPic_Cranidos[];
extern const u32 gMonFrontPic_Rampardos[];
extern const u32 gMonFrontPic_Shieldon[];
extern const u32 gMonFrontPic_Bastiodon[];
extern const u32 gMonFrontPic_Burmy[];
extern const u32 gMonFrontPic_Wormadam[];
extern const u32 gMonFrontPic_Mothim[];
extern const u32 gMonFrontPic_Combee[];
extern const u32 gMonFrontPic_Vespiquen[];
extern const u32 gMonFrontPic_Pachirisu[];
extern const u32 gMonFrontPic_Buizel[];
extern const u32 gMonFrontPic_Floatzel[];
extern const u32 gMonFrontPic_Cherubi[];
extern const u32 gMonFrontPic_Cherrim[];
extern const u32 gMonFrontPic_Shellos[];
extern const u32 gMonFrontPic_Gastrodon[];
extern const u32 gMonFrontPic_Ambipom[];
extern const u32 gMonFrontPic_Drifloon[];
extern const u32 gMonFrontPic_Drifblim[];
extern const u32 gMonFrontPic_Buneary[];
extern const u32 gMonFrontPic_Lopunny[];
extern const u32 gMonFrontPic_Mismagius[];
extern const u32 gMonFrontPic_Honchkrow[];
extern const u32 gMonFrontPic_Glameow[];
extern const u32 gMonFrontPic_Purugly[];
extern const u32 gMonFrontPic_Chingling[];
extern const u32 gMonFrontPic_Stunky[];
extern const u32 gMonFrontPic_Skuntank[];
extern const u32 gMonFrontPic_Bronzor[];
extern const u32 gMonFrontPic_Bronzong[];
extern const u32 gMonFrontPic_Bonsly[];
extern const u32 gMonFrontPic_MimeJr[];
extern const u32 gMonFrontPic_Happiny[];
extern const u32 gMonFrontPic_Chatot[];
extern const u32 gMonFrontPic_Spiritomb[];
extern const u32 gMonFrontPic_Gible[];
extern const u32 gMonFrontPic_Gabite[];
extern const u32 gMonFrontPic_Garchomp[];
extern const u32 gMonFrontPic_Munchlax[];
extern const u32 gMonFrontPic_Riolu[];
extern const u32 gMonFrontPic_Lucario[];
extern const u32 gMonFrontPic_Hippopotas[];
extern const u32 gMonFrontPic_Hippowdon[];
extern const u32 gMonFrontPic_Skorupi[];
extern const u32 gMonFrontPic_Drapion[];
extern const u32 gMonFrontPic_Croagunk[];
extern const u32 gMonFrontPic_Toxicroak[];
extern const u32 gMonFrontPic_Carnivine[];
extern const u32 gMonFrontPic_Finneon[];
extern const u32 gMonFrontPic_Lumineon[];
extern const u32 gMonFrontPic_Mantyke[];
extern const u32 gMonFrontPic_Snover[];
extern const u32 gMonFrontPic_Abomasnow[];
extern const u32 gMonFrontPic_Weavile[];
extern const u32 gMonFrontPic_Magnezone[];
extern const u32 gMonFrontPic_Lickilicky[];
extern const u32 gMonFrontPic_Rhyperior[];
extern const u32 gMonFrontPic_Tangrowth[];
extern const u32 gMonFrontPic_Electivire[];
extern const u32 gMonFrontPic_Magmortar[];
extern const u32 gMonFrontPic_Togekiss[];
extern const u32 gMonFrontPic_Yanmega[];
extern const u32 gMonFrontPic_Leafeon[];
extern const u32 gMonFrontPic_Glaceon[];
extern const u32 gMonFrontPic_Gliscor[];
extern const u32 gMonFrontPic_Mamoswine[];
extern const u32 gMonFrontPic_PorygonZ[];
extern const u32 gMonFrontPic_Gallade[];
extern const u32 gMonFrontPic_Probopass[];
extern const u32 gMonFrontPic_Dusknoir[];
extern const u32 gMonFrontPic_Froslass[];
extern const u32 gMonFrontPic_Rotom[];
extern const u32 gMonFrontPic_Uxie[];
extern const u32 gMonFrontPic_Mesprit[];
extern const u32 gMonFrontPic_Azelf[];
extern const u32 gMonFrontPic_Dialga[];
extern const u32 gMonFrontPic_Palkia[];
extern const u32 gMonFrontPic_Heatran[];
extern const u32 gMonFrontPic_Regigigas[];
extern const u32 gMonFrontPic_Giratina[];
extern const u32 gMonFrontPic_Cresselia[];
extern const u32 gMonFrontPic_Phione[];
extern const u32 gMonFrontPic_Manaphy[];
extern const u32 gMonFrontPic_Darkrai[];
extern const u32 gMonFrontPic_Shaymin[];
extern const u32 gMonFrontPic_Arceus[];
extern const u32 gMonFrontPic_Victini[];
extern const u32 gMonFrontPic_Snivy[];
extern const u32 gMonFrontPic_Servine[];
extern const u32 gMonFrontPic_Serperior[];
extern const u32 gMonFrontPic_Tepig[];
extern const u32 gMonFrontPic_Pignite[];
extern const u32 gMonFrontPic_Emboar[];
extern const u32 gMonFrontPic_Oshawott[];
extern const u32 gMonFrontPic_Dewott[];
extern const u32 gMonFrontPic_Samurott[];
extern const u32 gMonFrontPic_Patrat[];
extern const u32 gMonFrontPic_Watchog[];
extern const u32 gMonFrontPic_Lillipup[];
extern const u32 gMonFrontPic_Herdier[];
extern const u32 gMonFrontPic_Stoutland[];
extern const u32 gMonFrontPic_Purrloin[];
extern const u32 gMonFrontPic_Liepard[];
extern const u32 gMonFrontPic_Pansage[];
extern const u32 gMonFrontPic_Simisage[];
extern const u32 gMonFrontPic_Pansear[];
extern const u32 gMonFrontPic_Simisear[];
extern const u32 gMonFrontPic_Panpour[];
extern const u32 gMonFrontPic_Simipour[];
extern const u32 gMonFrontPic_Munna[];
extern const u32 gMonFrontPic_Musharna[];
extern const u32 gMonFrontPic_Pidove[];
extern const u32 gMonFrontPic_Tranquill[];
extern const u32 gMonFrontPic_Unfezant[];
extern const u32 gMonFrontPic_Blitzle[];
extern const u32 gMonFrontPic_Zebstrika[];
extern const u32 gMonFrontPic_Roggenrola[];
extern const u32 gMonFrontPic_Boldore[];
extern const u32 gMonFrontPic_Gigalith[];
extern const u32 gMonFrontPic_Woobat[];
extern const u32 gMonFrontPic_Swoobat[];
extern const u32 gMonFrontPic_Drilbur[];
extern const u32 gMonFrontPic_Excadrill[];
extern const u32 gMonFrontPic_Audino[];
extern const u32 gMonFrontPic_Timburr[];
extern const u32 gMonFrontPic_Gurdurr[];
extern const u32 gMonFrontPic_Conkeldurr[];
extern const u32 gMonFrontPic_Tympole[];
extern const u32 gMonFrontPic_Palpitoad[];
extern const u32 gMonFrontPic_Seismitoad[];
extern const u32 gMonFrontPic_Throh[];
extern const u32 gMonFrontPic_Sawk[];
extern const u32 gMonFrontPic_Sewaddle[];
extern const u32 gMonFrontPic_Swadloon[];
extern const u32 gMonFrontPic_Leavanny[];
extern const u32 gMonFrontPic_Venipede[];
extern const u32 gMonFrontPic_Whirlipede[];
extern const u32 gMonFrontPic_Scolipede[];
extern const u32 gMonFrontPic_Cottonee[];
extern const u32 gMonFrontPic_Whimsicott[];
extern const u32 gMonFrontPic_Petilil[];
extern const u32 gMonFrontPic_Lilligant[];
extern const u32 gMonFrontPic_Basculin[];
extern const u32 gMonFrontPic_Sandile[];
extern const u32 gMonFrontPic_Krokorok[];
extern const u32 gMonFrontPic_Krookodile[];
extern const u32 gMonFrontPic_Darumaka[];
extern const u32 gMonFrontPic_Darmanitan[];
extern const u32 gMonFrontPic_Maractus[];
extern const u32 gMonFrontPic_Dwebble[];
extern const u32 gMonFrontPic_Crustle[];
extern const u32 gMonFrontPic_Scraggy[];
extern const u32 gMonFrontPic_Scrafty[];
extern const u32 gMonFrontPic_Sigilyph[];
extern const u32 gMonFrontPic_Yamask[];
extern const u32 gMonFrontPic_Cofagrigus[];
extern const u32 gMonFrontPic_Tirtouga[];
extern const u32 gMonFrontPic_Carracosta[];
extern const u32 gMonFrontPic_Archen[];
extern const u32 gMonFrontPic_Archeops[];
extern const u32 gMonFrontPic_Trubbish[];
extern const u32 gMonFrontPic_Garbodor[];
extern const u32 gMonFrontPic_Zorua[];
extern const u32 gMonFrontPic_Zoroark[];
extern const u32 gMonFrontPic_Minccino[];
extern const u32 gMonFrontPic_Cinccino[];
extern const u32 gMonFrontPic_Gothita[];
extern const u32 gMonFrontPic_Gothorita[];
extern const u32 gMonFrontPic_Gothitelle[];
extern const u32 gMonFrontPic_Solosis[];
extern const u32 gMonFrontPic_Duosion[];
extern const u32 gMonFrontPic_Reuniclus[];
extern const u32 gMonFrontPic_Ducklett[];
extern const u32 gMonFrontPic_Swanna[];
extern const u32 gMonFrontPic_Vanillite[];
extern const u32 gMonFrontPic_Vanillish[];
extern const u32 gMonFrontPic_Vanilluxe[];
extern const u32 gMonFrontPic_Deerling[];
extern const u32 gMonFrontPic_Sawsbuck[];
extern const u32 gMonFrontPic_Emolga[];
extern const u32 gMonFrontPic_Karrablast[];
extern const u32 gMonFrontPic_Escavalier[];
extern const u32 gMonFrontPic_Foongus[];
extern const u32 gMonFrontPic_Amoonguss[];
extern const u32 gMonFrontPic_Frillish[];
extern const u32 gMonFrontPic_Jellicent[];
extern const u32 gMonFrontPic_Alomomola[];
extern const u32 gMonFrontPic_Joltik[];
extern const u32 gMonFrontPic_Galvantula[];
extern const u32 gMonFrontPic_Ferroseed[];
extern const u32 gMonFrontPic_Ferrothorn[];
extern const u32 gMonFrontPic_Klink[];
extern const u32 gMonFrontPic_Klang[];
extern const u32 gMonFrontPic_Klinklang[];
extern const u32 gMonFrontPic_Tynamo[];
extern const u32 gMonFrontPic_Eelektrik[];
extern const u32 gMonFrontPic_Eelektross[];
extern const u32 gMonFrontPic_Elgyem[];
extern const u32 gMonFrontPic_Beheeyem[];
extern const u32 gMonFrontPic_Litwick[];
extern const u32 gMonFrontPic_Lampent[];
extern const u32 gMonFrontPic_Chandelure[];
extern const u32 gMonFrontPic_Axew[];
extern const u32 gMonFrontPic_Fraxure[];
extern const u32 gMonFrontPic_Haxorus[];
extern const u32 gMonFrontPic_Cubchoo[];
extern const u32 gMonFrontPic_Beartic[];
extern const u32 gMonFrontPic_Cryogonal[];
extern const u32 gMonFrontPic_Shelmet[];
extern const u32 gMonFrontPic_Accelgor[];
extern const u32 gMonFrontPic_Stunfisk[];
extern const u32 gMonFrontPic_Mienfoo[];
extern const u32 gMonFrontPic_Mienshao[];
extern const u32 gMonFrontPic_Druddigon[];
extern const u32 gMonFrontPic_Golett[];
extern const u32 gMonFrontPic_Golurk[];
extern const u32 gMonFrontPic_Pawniard[];
extern const u32 gMonFrontPic_Bisharp[];
extern const u32 gMonFrontPic_Bouffalant[];
extern const u32 gMonFrontPic_Rufflet[];
extern const u32 gMonFrontPic_Braviary[];
extern const u32 gMonFrontPic_Vullaby[];
extern const u32 gMonFrontPic_Mandibuzz[];
extern const u32 gMonFrontPic_Heatmor[];
extern const u32 gMonFrontPic_Durant[];
extern const u32 gMonFrontPic_Deino[];
extern const u32 gMonFrontPic_Zweilous[];
extern const u32 gMonFrontPic_Hydreigon[];
extern const u32 gMonFrontPic_Larvesta[];
extern const u32 gMonFrontPic_Volcarona[];
extern const u32 gMonFrontPic_Cobalion[];
extern const u32 gMonFrontPic_Terrakion[];
extern const u32 gMonFrontPic_Virizion[];
extern const u32 gMonFrontPic_Tornadus[];
extern const u32 gMonFrontPic_Thundurus[];
extern const u32 gMonFrontPic_Reshiram[];
extern const u32 gMonFrontPic_Zekrom[];
extern const u32 gMonFrontPic_Landorus[];
extern const u32 gMonFrontPic_Kyurem[];
extern const u32 gMonFrontPic_Keldeo[];
extern const u32 gMonFrontPic_Meloetta[];
extern const u32 gMonFrontPic_Genesect[];
extern const u32 gMonFrontPic_Chespin[];
extern const u32 gMonFrontPic_Quilladin[];
extern const u32 gMonFrontPic_Chesnaught[];
extern const u32 gMonFrontPic_Fennekin[];
extern const u32 gMonFrontPic_Braixen[];
extern const u32 gMonFrontPic_Delphox[];
extern const u32 gMonFrontPic_Froakie[];
extern const u32 gMonFrontPic_Frogadier[];
extern const u32 gMonFrontPic_Greninja[];
extern const u32 gMonFrontPic_Bunnelby[];
extern const u32 gMonFrontPic_Diggersby[];
extern const u32 gMonFrontPic_Fletchling[];
extern const u32 gMonFrontPic_Flechinder[];
extern const u32 gMonFrontPic_Talonflame[];
extern const u32 gMonFrontPic_Scatterbug[];
extern const u32 gMonFrontPic_Spewpa[];
extern const u32 gMonFrontPic_Vivillon[];
extern const u32 gMonFrontPic_Litleo[];
extern const u32 gMonFrontPic_Pyroar[];
extern const u32 gMonFrontPic_Flabebe[];
extern const u32 gMonFrontPic_Floette[];
extern const u32 gMonFrontPic_Florges[];
extern const u32 gMonFrontPic_Skiddo[];
extern const u32 gMonFrontPic_Gogoat[];
extern const u32 gMonFrontPic_Pancham[];
extern const u32 gMonFrontPic_Pangoro[];
extern const u32 gMonFrontPic_Furfrou[];
extern const u32 gMonFrontPic_Espurr[];
extern const u32 gMonFrontPic_Meowstic[];
extern const u32 gMonFrontPic_Honedge[];
extern const u32 gMonFrontPic_Doublade[];
extern const u32 gMonFrontPic_Aegislash[];
extern const u32 gMonFrontPic_Spritzee[];
extern const u32 gMonFrontPic_Aromatisse[];
extern const u32 gMonFrontPic_Swirlix[];
extern const u32 gMonFrontPic_Slurpuff[];
extern const u32 gMonFrontPic_Inkay[];
extern const u32 gMonFrontPic_Malamar[];
extern const u32 gMonFrontPic_Binacle[];
extern const u32 gMonFrontPic_Barbaracle[];
extern const u32 gMonFrontPic_Skrelp[];
extern const u32 gMonFrontPic_Dragalge[];
extern const u32 gMonFrontPic_Clauncher[];
extern const u32 gMonFrontPic_Clawitzer[];
extern const u32 gMonFrontPic_Helioptile[];
extern const u32 gMonFrontPic_Heliolisk[];
extern const u32 gMonFrontPic_Tyrunt[];
extern const u32 gMonFrontPic_Tyrantrum[];
extern const u32 gMonFrontPic_Amaura[];
extern const u32 gMonFrontPic_Aurorus[];
extern const u32 gMonFrontPic_Sylveon[];
extern const u32 gMonFrontPic_Hawlucha[];
extern const u32 gMonFrontPic_Dedenne[];
extern const u32 gMonFrontPic_Carbink[];
extern const u32 gMonFrontPic_Goomy[];
extern const u32 gMonFrontPic_Sliggoo[];
extern const u32 gMonFrontPic_Goodra[];
extern const u32 gMonFrontPic_Klefki[];
extern const u32 gMonFrontPic_Phantump[];
extern const u32 gMonFrontPic_Trevenant[];
extern const u32 gMonFrontPic_Pumpkaboo[];
extern const u32 gMonFrontPic_Gourgeist[];
extern const u32 gMonFrontPic_Bergmite[];
extern const u32 gMonFrontPic_Avalugg[];
extern const u32 gMonFrontPic_Noibat[];
extern const u32 gMonFrontPic_Noivern[];
extern const u32 gMonFrontPic_Xerneas[];
extern const u32 gMonFrontPic_Yveltal[];
extern const u32 gMonFrontPic_Zygarde[];
extern const u32 gMonFrontPic_Diancie[];
extern const u32 gMonFrontPic_Hoopa[];
extern const u32 gMonFrontPic_Volcanion[];
extern const u32 gMonFrontPic_Rowlet[];
extern const u32 gMonFrontPic_Dartrix[];
extern const u32 gMonFrontPic_Decidueye[];
extern const u32 gMonFrontPic_Litten[];
extern const u32 gMonFrontPic_Torracat[];
extern const u32 gMonFrontPic_Incineroar[];
extern const u32 gMonFrontPic_Popplio[];
extern const u32 gMonFrontPic_Brionne[];
extern const u32 gMonFrontPic_Primarina[];
extern const u32 gMonFrontPic_Pikipek[];
extern const u32 gMonFrontPic_Trumbeak[];
extern const u32 gMonFrontPic_Toucannon[];
extern const u32 gMonFrontPic_Yungoos[];
extern const u32 gMonFrontPic_Gumshoos[];
extern const u32 gMonFrontPic_Grubbin[];
extern const u32 gMonFrontPic_Charjabug[];
extern const u32 gMonFrontPic_Vikavolt[];
extern const u32 gMonFrontPic_Crabrawler[];
extern const u32 gMonFrontPic_Crabminabl[];
extern const u32 gMonFrontPic_Oricorio[];
extern const u32 gMonFrontPic_Cutiefly[];
extern const u32 gMonFrontPic_Ribombee[];
extern const u32 gMonFrontPic_Rockruff[];
extern const u32 gMonFrontPic_Lycanroc[];
extern const u32 gMonFrontPic_Wishiwashi[];
extern const u32 gMonFrontPic_Mareanie[];
extern const u32 gMonFrontPic_Toxapex[];
extern const u32 gMonFrontPic_Mudbray[];
extern const u32 gMonFrontPic_Mudsdale[];
extern const u32 gMonFrontPic_Dewpider[];
extern const u32 gMonFrontPic_Araquanid[];
extern const u32 gMonFrontPic_Fomantis[];
extern const u32 gMonFrontPic_Lurantis[];
extern const u32 gMonFrontPic_Morelull[];
extern const u32 gMonFrontPic_Shiinotic[];
extern const u32 gMonFrontPic_Salandit[];
extern const u32 gMonFrontPic_Salazzle[];
extern const u32 gMonFrontPic_Stufful[];
extern const u32 gMonFrontPic_Bewear[];
extern const u32 gMonFrontPic_Bounsweet[];
extern const u32 gMonFrontPic_Steenee[];
extern const u32 gMonFrontPic_Tsareena[];
extern const u32 gMonFrontPic_Comfey[];
extern const u32 gMonFrontPic_Oranguru[];
extern const u32 gMonFrontPic_Passimian[];
extern const u32 gMonFrontPic_Wimpod[];
extern const u32 gMonFrontPic_Golisopod[];
extern const u32 gMonFrontPic_Sandygast[];
extern const u32 gMonFrontPic_Palossand[];
extern const u32 gMonFrontPic_Pyukumuku[];
extern const u32 gMonFrontPic_TypeNull[];
extern const u32 gMonFrontPic_Silvally[];
extern const u32 gMonFrontPic_Minior[];
extern const u32 gMonFrontPic_Komala[];
extern const u32 gMonFrontPic_Turtonator[];
extern const u32 gMonFrontPic_Togedemaru[];
extern const u32 gMonFrontPic_Mimikyu[];
extern const u32 gMonFrontPic_Bruxish[];
extern const u32 gMonFrontPic_Drampa[];
extern const u32 gMonFrontPic_Dhelmise[];
extern const u32 gMonFrontPic_Jangmoo[];
extern const u32 gMonFrontPic_Hakamoo[];
extern const u32 gMonFrontPic_Kommoo[];
extern const u32 gMonFrontPic_TapuKoko[];
extern const u32 gMonFrontPic_TapuLele[];
extern const u32 gMonFrontPic_TapuBulu[];
extern const u32 gMonFrontPic_TapuFini[];
extern const u32 gMonFrontPic_Cosmog[];
extern const u32 gMonFrontPic_Cosmoem[];
extern const u32 gMonFrontPic_Solgaleo[];
extern const u32 gMonFrontPic_Lunala[];
extern const u32 gMonFrontPic_Nihilego[];
extern const u32 gMonFrontPic_Buzzwole[];
extern const u32 gMonFrontPic_Pheromosa[];
extern const u32 gMonFrontPic_Xurkitree[];
extern const u32 gMonFrontPic_Celesteela[];
extern const u32 gMonFrontPic_Kartana[];
extern const u32 gMonFrontPic_Guzzlord[];
extern const u32 gMonFrontPic_Necrozma[];
extern const u32 gMonFrontPic_Magearna[];
extern const u32 gMonFrontPic_Marshadow[];
extern const u32 gMonFrontPic_Poipole[];
extern const u32 gMonFrontPic_Naganadel[];
extern const u32 gMonFrontPic_Stakataka[];
extern const u32 gMonFrontPic_Blacephaln[];
extern const u32 gMonFrontPic_Zeraora[];
extern const u32 gMonFrontPic_Meltan[];
extern const u32 gMonFrontPic_Melmetal[];
extern const u32 gMonFrontPic_Grookey[];
extern const u32 gMonFrontPic_Thwackey[];
extern const u32 gMonFrontPic_Rillaboom[];
extern const u32 gMonFrontPic_Scorbunny[];
extern const u32 gMonFrontPic_Raboot[];
extern const u32 gMonFrontPic_Cinderace[];
extern const u32 gMonFrontPic_Sobble[];
extern const u32 gMonFrontPic_Drizzile[];
extern const u32 gMonFrontPic_Inteleon[];
extern const u32 gMonFrontPic_Skwovet[];
extern const u32 gMonFrontPic_Greedent[];
extern const u32 gMonFrontPic_Rookidee[];
extern const u32 gMonFrontPic_Corvisquir[];
extern const u32 gMonFrontPic_Corviknigh[];
extern const u32 gMonFrontPic_Blipbug[];
extern const u32 gMonFrontPic_Dottler[];
extern const u32 gMonFrontPic_Orbeetle[];
extern const u32 gMonFrontPic_Nickit[];
extern const u32 gMonFrontPic_Thievul[];
extern const u32 gMonFrontPic_Gossifleur[];
extern const u32 gMonFrontPic_Eldegoss[];
extern const u32 gMonFrontPic_Wooloo[];
extern const u32 gMonFrontPic_Dubwool[];
extern const u32 gMonFrontPic_Chewtle[];
extern const u32 gMonFrontPic_Drednaw[];
extern const u32 gMonFrontPic_Yamper[];
extern const u32 gMonFrontPic_Boltund[];
extern const u32 gMonFrontPic_Rolycoly[];
extern const u32 gMonFrontPic_Carkol[];
extern const u32 gMonFrontPic_Coalossal[];
extern const u32 gMonFrontPic_Applin[];
extern const u32 gMonFrontPic_Flapple[];
extern const u32 gMonFrontPic_Appletun[];
extern const u32 gMonFrontPic_Silicobra[];
extern const u32 gMonFrontPic_Sandaconda[];
extern const u32 gMonFrontPic_Cramorant[];
extern const u32 gMonFrontPic_Arrokuda[];
extern const u32 gMonFrontPic_Barraskewd[];
extern const u32 gMonFrontPic_Toxel[];
extern const u32 gMonFrontPic_Toxtricity[];
extern const u32 gMonFrontPic_Sizzlipede[];
extern const u32 gMonFrontPic_Centiskorc[];
extern const u32 gMonFrontPic_Clobbopus[];
extern const u32 gMonFrontPic_Grapploct[];
extern const u32 gMonFrontPic_Sinistea[];
extern const u32 gMonFrontPic_Polteageis[];
extern const u32 gMonFrontPic_Hatenna[];
extern const u32 gMonFrontPic_Hattrem[];
extern const u32 gMonFrontPic_Hatterene[];
extern const u32 gMonFrontPic_Impidimp[];
extern const u32 gMonFrontPic_Morgrem[];
extern const u32 gMonFrontPic_Grimmsnarl[];
extern const u32 gMonFrontPic_Obstagoon[];
extern const u32 gMonFrontPic_Perrserker[];
extern const u32 gMonFrontPic_Cursola[];
extern const u32 gMonFrontPic_Sirfetchd[];
extern const u32 gMonFrontPic_MrRime[];
extern const u32 gMonFrontPic_Runerigus[];
extern const u32 gMonFrontPic_Milcery[];
extern const u32 gMonFrontPic_Alcremie[];
extern const u32 gMonFrontPic_Falinks[];
extern const u32 gMonFrontPic_Pincurchin[];
extern const u32 gMonFrontPic_Snom[];
extern const u32 gMonFrontPic_Frosmoth[];
extern const u32 gMonFrontPic_Stonjourne[];
extern const u32 gMonFrontPic_Eiscue[];
extern const u32 gMonFrontPic_Indeedee[];
extern const u32 gMonFrontPic_Morpeko[];
extern const u32 gMonFrontPic_Cufant[];
extern const u32 gMonFrontPic_Copperajah[];
extern const u32 gMonFrontPic_Dracozolt[];
extern const u32 gMonFrontPic_Arctozolt[];
extern const u32 gMonFrontPic_Dracovish[];
extern const u32 gMonFrontPic_Arctovish[];
extern const u32 gMonFrontPic_Duraludon[];
extern const u32 gMonFrontPic_Dreepy[];
extern const u32 gMonFrontPic_Drakloak[];
extern const u32 gMonFrontPic_Dragapult[];
extern const u32 gMonFrontPic_Zacian[];
extern const u32 gMonFrontPic_Zamazenta[];
extern const u32 gMonFrontPic_Eternatus[];
extern const u32 gMonFrontPic_Kubfu[];
extern const u32 gMonFrontPic_Urshifu[];
extern const u32 gMonFrontPic_Zarude[];
extern const u32 gMonFrontPic_Regieleki[];
extern const u32 gMonFrontPic_Regidrago[];
extern const u32 gMonFrontPic_Glastrier[];
extern const u32 gMonFrontPic_Spectrier[];
extern const u32 gMonFrontPic_Calyrex[];
extern const u32 gMonFrontPic_Wyrdeer[];
extern const u32 gMonFrontPic_Kleavor[];
extern const u32 gMonFrontPic_Ursaluna[];
extern const u32 gMonFrontPic_Bsculegion[];
extern const u32 gMonFrontPic_Sneasler[];
extern const u32 gMonFrontPic_Overqwil[];
extern const u32 gMonFrontPic_Enamorus[];
extern const u32 gMonFrontPic_Venusaur2[];
extern const u32 gMonFrontPic_Charizard2[];
extern const u32 gMonFrontPic_Charizard3[];
extern const u32 gMonFrontPic_Blastoise2[];
extern const u32 gMonFrontPic_Beedrill2[];
extern const u32 gMonFrontPic_Pidgeot2[];
extern const u32 gMonFrontPic_Alakazam2[];
extern const u32 gMonFrontPic_Slowbro2[];
extern const u32 gMonFrontPic_Gengar2[];
extern const u32 gMonFrontPic_Kangaskhan2[];
extern const u32 gMonFrontPic_Pinsir2[];
extern const u32 gMonFrontPic_Gyarados2[];
extern const u32 gMonFrontPic_Aerodactyl2[];
extern const u32 gMonFrontPic_Mewtwo2[];
extern const u32 gMonFrontPic_Mewtwo3[];
extern const u32 gMonFrontPic_Ampharos2[];
extern const u32 gMonFrontPic_Steelix2[];
extern const u32 gMonFrontPic_Scizor2[];
extern const u32 gMonFrontPic_Heracross2[];
extern const u32 gMonFrontPic_Houndoom2[];
extern const u32 gMonFrontPic_Tyranitar2[];
extern const u32 gMonFrontPic_Sceptile2[];
extern const u32 gMonFrontPic_Blaziken2[];
extern const u32 gMonFrontPic_Swampert2[];
extern const u32 gMonFrontPic_Gardevoir2[];
extern const u32 gMonFrontPic_Sableye2[];
extern const u32 gMonFrontPic_Mawile2[];
extern const u32 gMonFrontPic_Aggron2[];
extern const u32 gMonFrontPic_Medicham2[];
extern const u32 gMonFrontPic_Manectric2[];
extern const u32 gMonFrontPic_Sharpedo2[];
extern const u32 gMonFrontPic_Camerupt2[];
extern const u32 gMonFrontPic_Altaria2[];
extern const u32 gMonFrontPic_Banette2[];
extern const u32 gMonFrontPic_Absol2[];
extern const u32 gMonFrontPic_Glalie2[];
extern const u32 gMonFrontPic_Salamence2[];
extern const u32 gMonFrontPic_Metagross2[];
extern const u32 gMonFrontPic_Latias2[];
extern const u32 gMonFrontPic_Latios2[];
extern const u32 gMonFrontPic_Lopunny2[];
extern const u32 gMonFrontPic_Garchomp2[];
extern const u32 gMonFrontPic_Lucario2[];
extern const u32 gMonFrontPic_Abomasnow2[];
extern const u32 gMonFrontPic_Gallade2[];
extern const u32 gMonFrontPic_Audino2[];
extern const u32 gMonFrontPic_Diancie2[];
extern const u32 gMonFrontPic_Rayquaza2[];
extern const u32 gMonFrontPic_Kyogre2[];
extern const u32 gMonFrontPic_Groudon2[];
extern const u32 gMonFrontPic_Rattata2[];
extern const u32 gMonFrontPic_Raticate2[];
extern const u32 gMonFrontPic_Raichu2[];
extern const u32 gMonFrontPic_Sandshrew2[];
extern const u32 gMonFrontPic_Sandslash2[];
extern const u32 gMonFrontPic_Vulpix2[];
extern const u32 gMonFrontPic_Ninetales2[];
extern const u32 gMonFrontPic_Diglett2[];
extern const u32 gMonFrontPic_Dugtrio2[];
extern const u32 gMonFrontPic_Meowth2[];
extern const u32 gMonFrontPic_Persian2[];
extern const u32 gMonFrontPic_Geodude2[];
extern const u32 gMonFrontPic_Graveler2[];
extern const u32 gMonFrontPic_Golem2[];
extern const u32 gMonFrontPic_Grimer2[];
extern const u32 gMonFrontPic_Muk2[];
extern const u32 gMonFrontPic_Exeggutor2[];
extern const u32 gMonFrontPic_Marowak2[];
extern const u32 gMonFrontPic_Meowth3[];
extern const u32 gMonFrontPic_Ponyta2[];
extern const u32 gMonFrontPic_Rapidash2[];
extern const u32 gMonFrontPic_Slowpoke2[];
extern const u32 gMonFrontPic_Slowbro3[];
extern const u32 gMonFrontPic_Farfetchd2[];
extern const u32 gMonFrontPic_Weezing2[];
extern const u32 gMonFrontPic_MrMime2[];
extern const u32 gMonFrontPic_Articuno2[];
extern const u32 gMonFrontPic_Zapdos2[];
extern const u32 gMonFrontPic_Moltres2[];
extern const u32 gMonFrontPic_Slowking2[];
extern const u32 gMonFrontPic_Corsola2[];
extern const u32 gMonFrontPic_Zigzagoon2[];
extern const u32 gMonFrontPic_Linoone2[];
extern const u32 gMonFrontPic_Darumaka2[];
extern const u32 gMonFrontPic_Darmanitan2[];
extern const u32 gMonFrontPic_Yamask2[];
extern const u32 gMonFrontPic_Stunfisk2[];
extern const u32 gMonFrontPic_Growlithe2[];
extern const u32 gMonFrontPic_Arcanine2[];
extern const u32 gMonFrontPic_Voltorb2[];
extern const u32 gMonFrontPic_Electrode2[];
extern const u32 gMonFrontPic_Typhlosion2[];
extern const u32 gMonFrontPic_Qwilfish2[];
extern const u32 gMonFrontPic_Sneasel2[];
extern const u32 gMonFrontPic_Samurott2[];
extern const u32 gMonFrontPic_Lilligant2[];
extern const u32 gMonFrontPic_Zorua2[];
extern const u32 gMonFrontPic_Zoroark2[];
extern const u32 gMonFrontPic_Braviary2[];
extern const u32 gMonFrontPic_Sliggoo2[];
extern const u32 gMonFrontPic_Goodra2[];
extern const u32 gMonFrontPic_Avalugg2[];
extern const u32 gMonFrontPic_Decidueye2[];
extern const u32 gMonFrontPic_Pikachu2[];
extern const u32 gMonFrontPic_Pikachu3[];
extern const u32 gMonFrontPic_Pikachu4[];
extern const u32 gMonFrontPic_Pikachu5[];
extern const u32 gMonFrontPic_Pikachu6[];
extern const u32 gMonFrontPic_Pikachu7[];
extern const u32 gMonFrontPic_Pikachu8[];
extern const u32 gMonFrontPic_Pikachu9[];
extern const u32 gMonFrontPic_Pikachu10[];
extern const u32 gMonFrontPic_Pikachu11[];
extern const u32 gMonFrontPic_Pikachu12[];
extern const u32 gMonFrontPic_Pikachu13[];
extern const u32 gMonFrontPic_Pikachu14[];
extern const u32 gMonFrontPic_Pikachu15[];
extern const u32 gMonFrontPic_Pichu2[];
extern const u32 gMonFrontPic_Castform2[];
extern const u32 gMonFrontPic_Castform3[];
extern const u32 gMonFrontPic_Castform4[];
extern const u32 gMonFrontPic_Deoxys2[];
extern const u32 gMonFrontPic_Deoxys3[];
extern const u32 gMonFrontPic_Deoxys4[];
extern const u32 gMonFrontPic_Burmy2[];
extern const u32 gMonFrontPic_Burmy3[];
extern const u32 gMonFrontPic_Wormadam2[];
extern const u32 gMonFrontPic_Wormadam3[];
extern const u32 gMonFrontPic_Cherrim2[];
extern const u32 gMonFrontPic_Shellos2[];
extern const u32 gMonFrontPic_Gastrodon2[];
extern const u32 gMonFrontPic_Rotom2[];
extern const u32 gMonFrontPic_Rotom3[];
extern const u32 gMonFrontPic_Rotom4[];
extern const u32 gMonFrontPic_Rotom5[];
extern const u32 gMonFrontPic_Rotom6[];
extern const u32 gMonFrontPic_Dialga2[];
extern const u32 gMonFrontPic_Palkia2[];
extern const u32 gMonFrontPic_Giratina2[];
extern const u32 gMonFrontPic_Shaymin2[];
extern const u32 gMonFrontPic_Arceus2[];
extern const u32 gMonFrontPic_Arceus3[];
extern const u32 gMonFrontPic_Arceus4[];
extern const u32 gMonFrontPic_Arceus5[];
extern const u32 gMonFrontPic_Arceus6[];
extern const u32 gMonFrontPic_Arceus7[];
extern const u32 gMonFrontPic_Arceus8[];
extern const u32 gMonFrontPic_Arceus9[];
extern const u32 gMonFrontPic_Arceus10[];
extern const u32 gMonFrontPic_Arceus11[];
extern const u32 gMonFrontPic_Arceus12[];
extern const u32 gMonFrontPic_Arceus13[];
extern const u32 gMonFrontPic_Arceus14[];
extern const u32 gMonFrontPic_Arceus15[];
extern const u32 gMonFrontPic_Arceus16[];
extern const u32 gMonFrontPic_Arceus17[];
extern const u32 gMonFrontPic_Arceus18[];
extern const u32 gMonFrontPic_Basculin2[];
extern const u32 gMonFrontPic_Basculin3[];
extern const u32 gMonFrontPic_Darmanitan3[];
extern const u32 gMonFrontPic_Darmanitan4[];
extern const u32 gMonFrontPic_Deerling2[];
extern const u32 gMonFrontPic_Deerling3[];
extern const u32 gMonFrontPic_Deerling4[];
extern const u32 gMonFrontPic_Sawsbuck2[];
extern const u32 gMonFrontPic_Sawsbuck3[];
extern const u32 gMonFrontPic_Sawsbuck4[];
extern const u32 gMonFrontPic_Tornadus2[];
extern const u32 gMonFrontPic_Thundurus2[];
extern const u32 gMonFrontPic_Landorus2[];
extern const u32 gMonFrontPic_Enamorus2[];
extern const u32 gMonFrontPic_Kyurem2[];
extern const u32 gMonFrontPic_Kyurem3[];
extern const u32 gMonFrontPic_Keldeo2[];
extern const u32 gMonFrontPic_Meloetta2[];
extern const u32 gMonFrontPic_Genesect2[];
extern const u32 gMonFrontPic_Genesect3[];
extern const u32 gMonFrontPic_Genesect4[];
extern const u32 gMonFrontPic_Genesect5[];
extern const u32 gMonFrontPic_Greninja2[];
extern const u32 gMonFrontPic_Greninja3[];
extern const u32 gMonFrontPic_Vivillon2[];
extern const u32 gMonFrontPic_Vivillon3[];
extern const u32 gMonFrontPic_Vivillon4[];
extern const u32 gMonFrontPic_Vivillon5[];
extern const u32 gMonFrontPic_Vivillon6[];
extern const u32 gMonFrontPic_Vivillon7[];
extern const u32 gMonFrontPic_Vivillon8[];
extern const u32 gMonFrontPic_Vivillon9[];
extern const u32 gMonFrontPic_Vivillon10[];
extern const u32 gMonFrontPic_Vivillon11[];
extern const u32 gMonFrontPic_Vivillon12[];
extern const u32 gMonFrontPic_Vivillon13[];
extern const u32 gMonFrontPic_Vivillon14[];
extern const u32 gMonFrontPic_Vivillon15[];
extern const u32 gMonFrontPic_Vivillon16[];
extern const u32 gMonFrontPic_Vivillon17[];
extern const u32 gMonFrontPic_Vivillon18[];
extern const u32 gMonFrontPic_Vivillon19[];
extern const u32 gMonFrontPic_Vivillon20[];
extern const u32 gMonFrontPic_Flabebe2[];
extern const u32 gMonFrontPic_Flabebe3[];
extern const u32 gMonFrontPic_Flabebe4[];
extern const u32 gMonFrontPic_Flabebe5[];
extern const u32 gMonFrontPic_Floette2[];
extern const u32 gMonFrontPic_Floette3[];
extern const u32 gMonFrontPic_Floette4[];
extern const u32 gMonFrontPic_Floette5[];
extern const u32 gMonFrontPic_Floette6[];
extern const u32 gMonFrontPic_Florges2[];
extern const u32 gMonFrontPic_Florges3[];
extern const u32 gMonFrontPic_Florges4[];
extern const u32 gMonFrontPic_Florges5[];
extern const u32 gMonFrontPic_Furfrou2[];
extern const u32 gMonFrontPic_Furfrou3[];
extern const u32 gMonFrontPic_Furfrou4[];
extern const u32 gMonFrontPic_Furfrou5[];
extern const u32 gMonFrontPic_Furfrou6[];
extern const u32 gMonFrontPic_Furfrou7[];
extern const u32 gMonFrontPic_Furfrou8[];
extern const u32 gMonFrontPic_Furfrou9[];
extern const u32 gMonFrontPic_Furfrou10[];
extern const u32 gMonFrontPic_Meowstic2[];
extern const u32 gMonFrontPic_Aegislash2[];
extern const u32 gMonFrontPic_Pumpkaboo2[];
extern const u32 gMonFrontPic_Pumpkaboo3[];
extern const u32 gMonFrontPic_Pumpkaboo4[];
extern const u32 gMonFrontPic_Gourgeist2[];
extern const u32 gMonFrontPic_Gourgeist3[];
extern const u32 gMonFrontPic_Gourgeist4[];
extern const u32 gMonFrontPic_Xerneas2[];
extern const u32 gMonFrontPic_Zygarde2[];
extern const u32 gMonFrontPic_Zygarde3[];
extern const u32 gMonFrontPic_Zygarde4[];
extern const u32 gMonFrontPic_Zygarde5[];
extern const u32 gMonFrontPic_Hoopa2[];
extern const u32 gMonFrontPic_Oricorio2[];
extern const u32 gMonFrontPic_Oricorio3[];
extern const u32 gMonFrontPic_Oricorio4[];
extern const u32 gMonFrontPic_Rockruff2[];
extern const u32 gMonFrontPic_Lycanroc2[];
extern const u32 gMonFrontPic_Lycanroc3[];
extern const u32 gMonFrontPic_Wishiwashi2[];
extern const u32 gMonFrontPic_Silvally2[];
extern const u32 gMonFrontPic_Silvally3[];
extern const u32 gMonFrontPic_Silvally4[];
extern const u32 gMonFrontPic_Silvally5[];
extern const u32 gMonFrontPic_Silvally6[];
extern const u32 gMonFrontPic_Silvally7[];
extern const u32 gMonFrontPic_Silvally8[];
extern const u32 gMonFrontPic_Silvally9[];
extern const u32 gMonFrontPic_Silvally10[];
extern const u32 gMonFrontPic_Silvally11[];
extern const u32 gMonFrontPic_Silvally12[];
extern const u32 gMonFrontPic_Silvally13[];
extern const u32 gMonFrontPic_Silvally14[];
extern const u32 gMonFrontPic_Silvally15[];
extern const u32 gMonFrontPic_Silvally16[];
extern const u32 gMonFrontPic_Silvally17[];
extern const u32 gMonFrontPic_Silvally18[];
extern const u32 gMonFrontPic_Minior2[];
extern const u32 gMonFrontPic_Minior3[];
extern const u32 gMonFrontPic_Minior4[];
extern const u32 gMonFrontPic_Minior5[];
extern const u32 gMonFrontPic_Minior6[];
extern const u32 gMonFrontPic_Minior7[];
extern const u32 gMonFrontPic_Minior8[];
extern const u32 gMonFrontPic_Minior9[];
extern const u32 gMonFrontPic_Minior10[];
extern const u32 gMonFrontPic_Minior11[];
extern const u32 gMonFrontPic_Minior12[];
extern const u32 gMonFrontPic_Minior13[];
extern const u32 gMonFrontPic_Minior14[];
extern const u32 gMonFrontPic_Mimikyu2[];
extern const u32 gMonFrontPic_Necrozma2[];
extern const u32 gMonFrontPic_Necrozma3[];
extern const u32 gMonFrontPic_Necrozma4[];
extern const u32 gMonFrontPic_Magearna2[];
extern const u32 gMonFrontPic_Cramorant2[];
extern const u32 gMonFrontPic_Cramorant3[];
extern const u32 gMonFrontPic_Toxtricity2[];
extern const u32 gMonFrontPic_Sinistea2[];
extern const u32 gMonFrontPic_Polteageis2[];
extern const u32 gMonFrontPic_Alcremie2[];
extern const u32 gMonFrontPic_Alcremie3[];
extern const u32 gMonFrontPic_Alcremie4[];
extern const u32 gMonFrontPic_Alcremie5[];
extern const u32 gMonFrontPic_Alcremie6[];
extern const u32 gMonFrontPic_Alcremie7[];
extern const u32 gMonFrontPic_Alcremie8[];
extern const u32 gMonFrontPic_Alcremie9[];
extern const u32 gMonFrontPic_Eiscue2[];
extern const u32 gMonFrontPic_Indeedee2[];
extern const u32 gMonFrontPic_Morpeko2[];
extern const u32 gMonFrontPic_Zacian2[];
extern const u32 gMonFrontPic_Zamazenta2[];
extern const u32 gMonFrontPic_Eternatus2[];
extern const u32 gMonFrontPic_Urshifu2[];
extern const u32 gMonFrontPic_Zarude2[];
extern const u32 gMonFrontPic_Calyrex2[];
extern const u32 gMonFrontPic_Calyrex3[];
extern const u32 gMonFrontPic_Bsculegion2[];
extern const u32 gMonFrontPic_Alcremie10[];
extern const u32 gMonFrontPic_Alcremie11[];
extern const u32 gMonFrontPic_Alcremie12[];
extern const u32 gMonFrontPic_Alcremie13[];
extern const u32 gMonFrontPic_Alcremie14[];
extern const u32 gMonFrontPic_Alcremie15[];
extern const u32 gMonFrontPic_Alcremie16[];
extern const u32 gMonFrontPic_Alcremie17[];
extern const u32 gMonFrontPic_Alcremie18[];
extern const u32 gMonFrontPic_Alcremie19[];
extern const u32 gMonFrontPic_Alcremie20[];
extern const u32 gMonFrontPic_Alcremie21[];
extern const u32 gMonFrontPic_Alcremie22[];
extern const u32 gMonFrontPic_Alcremie23[];
extern const u32 gMonFrontPic_Alcremie24[];
extern const u32 gMonFrontPic_Alcremie25[];
extern const u32 gMonFrontPic_Alcremie26[];
extern const u32 gMonFrontPic_Alcremie27[];
extern const u32 gMonFrontPic_Alcremie28[];
extern const u32 gMonFrontPic_Alcremie29[];
extern const u32 gMonFrontPic_Alcremie30[];
extern const u32 gMonFrontPic_Alcremie31[];
extern const u32 gMonFrontPic_Alcremie32[];
extern const u32 gMonFrontPic_Alcremie33[];
extern const u32 gMonFrontPic_Alcremie34[];
extern const u32 gMonFrontPic_Alcremie35[];
extern const u32 gMonFrontPic_Alcremie36[];
extern const u32 gMonFrontPic_Alcremie37[];
extern const u32 gMonFrontPic_Alcremie38[];
extern const u32 gMonFrontPic_Alcremie39[];
extern const u32 gMonFrontPic_Alcremie40[];
extern const u32 gMonFrontPic_Alcremie41[];
extern const u32 gMonFrontPic_Alcremie42[];
extern const u32 gMonFrontPic_Alcremie43[];
extern const u32 gMonFrontPic_Alcremie44[];
extern const u32 gMonFrontPic_Alcremie45[];
extern const u32 gMonFrontPic_Alcremie46[];
extern const u32 gMonFrontPic_Alcremie47[];
extern const u32 gMonFrontPic_Alcremie48[];
extern const u32 gMonFrontPic_Alcremie49[];
extern const u32 gMonFrontPic_Alcremie50[];
extern const u32 gMonFrontPic_Alcremie51[];
extern const u32 gMonFrontPic_Alcremie52[];
extern const u32 gMonFrontPic_Alcremie53[];
extern const u32 gMonFrontPic_Alcremie54[];
extern const u32 gMonFrontPic_Alcremie55[];
extern const u32 gMonFrontPic_Alcremie56[];
extern const u32 gMonFrontPic_Alcremie57[];
extern const u32 gMonFrontPic_Alcremie58[];
extern const u32 gMonFrontPic_Alcremie59[];
extern const u32 gMonFrontPic_Alcremie60[];
extern const u32 gMonFrontPic_Alcremie61[];
extern const u32 gMonFrontPic_Alcremie62[];
extern const u32 gMonFrontPic_Alcremie63[];
extern const u32 gMonFrontPic_Sprigatito[];
extern const u32 gMonFrontPic_Floragato[];
extern const u32 gMonFrontPic_Meowscarad[];
extern const u32 gMonFrontPic_Fuecoco[];
extern const u32 gMonFrontPic_Crocalor[];
extern const u32 gMonFrontPic_Skeledirge[];
extern const u32 gMonFrontPic_Quaxly[];
extern const u32 gMonFrontPic_Quaxwell[];
extern const u32 gMonFrontPic_Quaquaval[];
extern const u32 gMonFrontPic_Lechonk[];
extern const u32 gMonFrontPic_Oinkologne[];
extern const u32 gMonFrontPic_Oinkologne2[];
extern const u32 gMonFrontPic_Tarountula[];
extern const u32 gMonFrontPic_Spidops[];
extern const u32 gMonFrontPic_Nymble[];
extern const u32 gMonFrontPic_Lokix[];
extern const u32 gMonFrontPic_Pawmi[];
extern const u32 gMonFrontPic_Pawmo[];
extern const u32 gMonFrontPic_Pawmot[];
extern const u32 gMonFrontPic_Tandemaus[];
extern const u32 gMonFrontPic_Maushold[];
extern const u32 gMonFrontPic_Maushold2[];
extern const u32 gMonFrontPic_Fidough[];
extern const u32 gMonFrontPic_Dachsbun[];
extern const u32 gMonFrontPic_Smoliv[];
extern const u32 gMonFrontPic_Dolliv[];
extern const u32 gMonFrontPic_Arboliva[];
extern const u32 gMonFrontPic_Sqawkabily[];
extern const u32 gMonFrontPic_Sqawkabily2[];
extern const u32 gMonFrontPic_Sqawkabily3[];
extern const u32 gMonFrontPic_Sqawkabily4[];
extern const u32 gMonFrontPic_Nacli[];
extern const u32 gMonFrontPic_Naclstack[];
extern const u32 gMonFrontPic_Garganacl[];
extern const u32 gMonFrontPic_Charcadet[];
extern const u32 gMonFrontPic_Armarouge[];
extern const u32 gMonFrontPic_Ceruledge[];
extern const u32 gMonFrontPic_Tadbulb[];
extern const u32 gMonFrontPic_Bellibolt[];
extern const u32 gMonFrontPic_Wattrel[];
extern const u32 gMonFrontPic_Kilowatrel[];
extern const u32 gMonFrontPic_Maschiff[];
extern const u32 gMonFrontPic_Mabosstiff[];
extern const u32 gMonFrontPic_Shroodle[];
extern const u32 gMonFrontPic_Grafaiai[];
extern const u32 gMonFrontPic_Bramblin[];
extern const u32 gMonFrontPic_Brmblghast[];
extern const u32 gMonFrontPic_Toedscool[];
extern const u32 gMonFrontPic_Toedscruel[];
extern const u32 gMonFrontPic_Klawf[];
extern const u32 gMonFrontPic_Capsakid[];
extern const u32 gMonFrontPic_Scovillain[];
extern const u32 gMonFrontPic_Rellor[];
extern const u32 gMonFrontPic_Rabsca[];
extern const u32 gMonFrontPic_Flittle[];
extern const u32 gMonFrontPic_Espathra[];
extern const u32 gMonFrontPic_Tinkatink[];
extern const u32 gMonFrontPic_Tinkatuff[];
extern const u32 gMonFrontPic_Tinkaton[];
extern const u32 gMonFrontPic_Wiglett[];
extern const u32 gMonFrontPic_Wugtrio[];
extern const u32 gMonFrontPic_Bombirdier[];
extern const u32 gMonFrontPic_Finizen[];
extern const u32 gMonFrontPic_Palafin[];
extern const u32 gMonFrontPic_Palafin2[];
extern const u32 gMonFrontPic_Varoom[];
extern const u32 gMonFrontPic_Revavroom[];
extern const u32 gMonFrontPic_Cyclizar[];
extern const u32 gMonFrontPic_Orthworm[];
extern const u32 gMonFrontPic_Glimmet[];
extern const u32 gMonFrontPic_Glimmora[];
extern const u32 gMonFrontPic_Greavard[];
extern const u32 gMonFrontPic_Houndstone[];
extern const u32 gMonFrontPic_Flamigo[];
extern const u32 gMonFrontPic_Cetoddle[];
extern const u32 gMonFrontPic_Cetitan[];
extern const u32 gMonFrontPic_Veluza[];
extern const u32 gMonFrontPic_Dondozo[];
extern const u32 gMonFrontPic_Tatsugiri[];
extern const u32 gMonFrontPic_Tatsugiri2[];
extern const u32 gMonFrontPic_Tatsugiri3[];
extern const u32 gMonFrontPic_Annihilape[];
extern const u32 gMonFrontPic_Clodsire[];
extern const u32 gMonFrontPic_Farigiraf[];
extern const u32 gMonFrontPic_Dudunsprce[];
extern const u32 gMonFrontPic_Dudunsprce2[];
extern const u32 gMonFrontPic_Kingambit[];
extern const u32 gMonFrontPic_GreatTusk[];
extern const u32 gMonFrontPic_ScreamTail[];
extern const u32 gMonFrontPic_BruteBonet[];
extern const u32 gMonFrontPic_FluttrMane[];
extern const u32 gMonFrontPic_SlithrWing[];
extern const u32 gMonFrontPic_SndyShocks[];
extern const u32 gMonFrontPic_IronTreads[];
extern const u32 gMonFrontPic_IronBundle[];
extern const u32 gMonFrontPic_IronHands[];
extern const u32 gMonFrontPic_IronJuguls[];
extern const u32 gMonFrontPic_IronMoth[];
extern const u32 gMonFrontPic_IronThorns[];
extern const u32 gMonFrontPic_Frigibax[];
extern const u32 gMonFrontPic_Arctibax[];
extern const u32 gMonFrontPic_Baxcalibur[];
extern const u32 gMonFrontPic_Gimmighoul[];
extern const u32 gMonFrontPic_Gimmighoul2[];
extern const u32 gMonFrontPic_Gholdengo[];
extern const u32 gMonFrontPic_WoChien[];
extern const u32 gMonFrontPic_ChienPao[];
extern const u32 gMonFrontPic_TingLu[];
extern const u32 gMonFrontPic_ChiYu[];
extern const u32 gMonFrontPic_RoarngMoon[];
extern const u32 gMonFrontPic_IronVliant[];
extern const u32 gMonFrontPic_Koraidon[];
extern const u32 gMonFrontPic_Miraidon[];
extern const u32 gMonFrontPic_Tauros2[];
extern const u32 gMonFrontPic_Tauros3[];
extern const u32 gMonFrontPic_Tauros4[];
extern const u32 gMonFrontPic_Wooper2[];
extern const u32 gMonFrontPic_WalkngWake[];
extern const u32 gMonFrontPic_IronLeaves[];
extern const u32 gMonFrontPic_Dipplin[];
extern const u32 gMonFrontPic_Ptchageist[];
extern const u32 gMonFrontPic_Ptchageist2[];
extern const u32 gMonFrontPic_Sinistcha[];
extern const u32 gMonFrontPic_Sinistcha2[];
extern const u32 gMonFrontPic_Okidogi[];
extern const u32 gMonFrontPic_Munkidori[];
extern const u32 gMonFrontPic_Fezndipiti[];
extern const u32 gMonFrontPic_Ogerpon[];
extern const u32 gMonFrontPic_Ogerpon2[];
extern const u32 gMonFrontPic_Ogerpon3[];
extern const u32 gMonFrontPic_Ogerpon4[];
extern const u32 gMonFrontPic_Ogerpon5[];
extern const u32 gMonFrontPic_Ogerpon6[];
extern const u32 gMonFrontPic_Ogerpon7[];
extern const u32 gMonFrontPic_Ogerpon8[];
extern const u32 gMonFrontPic_Ursaluna2[];
extern const u32 gMonFrontPic_Archaludon[];
extern const u32 gMonFrontPic_Hydrapple[];
extern const u32 gMonFrontPic_GouginFire[];
extern const u32 gMonFrontPic_RagingBolt[];
extern const u32 gMonFrontPic_IronBouldr[];
extern const u32 gMonFrontPic_IronCrown[];
extern const u32 gMonFrontPic_Terapagos[];
extern const u32 gMonFrontPic_Terapagos2[];
extern const u32 gMonFrontPic_Terapagos3[];
extern const u32 gMonFrontPic_Pecharunt[];
extern const u32 gMonFrontPic_Mothim2[];
extern const u32 gMonFrontPic_Mothim3[];
extern const u32 gMonFrontPic_Scatterbug2[];
extern const u32 gMonFrontPic_Scatterbug3[];
extern const u32 gMonFrontPic_Scatterbug4[];
extern const u32 gMonFrontPic_Scatterbug5[];
extern const u32 gMonFrontPic_Scatterbug6[];
extern const u32 gMonFrontPic_Scatterbug7[];
extern const u32 gMonFrontPic_Scatterbug8[];
extern const u32 gMonFrontPic_Scatterbug9[];
extern const u32 gMonFrontPic_Scatterbug10[];
extern const u32 gMonFrontPic_Scatterbug11[];
extern const u32 gMonFrontPic_Scatterbug12[];
extern const u32 gMonFrontPic_Scatterbug13[];
extern const u32 gMonFrontPic_Scatterbug14[];
extern const u32 gMonFrontPic_Scatterbug15[];
extern const u32 gMonFrontPic_Scatterbug16[];
extern const u32 gMonFrontPic_Scatterbug17[];
extern const u32 gMonFrontPic_Scatterbug18[];
extern const u32 gMonFrontPic_Scatterbug19[];
extern const u32 gMonFrontPic_Scatterbug20[];
extern const u32 gMonFrontPic_Spewpa2[];
extern const u32 gMonFrontPic_Spewpa3[];
extern const u32 gMonFrontPic_Spewpa4[];
extern const u32 gMonFrontPic_Spewpa5[];
extern const u32 gMonFrontPic_Spewpa6[];
extern const u32 gMonFrontPic_Spewpa7[];
extern const u32 gMonFrontPic_Spewpa8[];
extern const u32 gMonFrontPic_Spewpa9[];
extern const u32 gMonFrontPic_Spewpa10[];
extern const u32 gMonFrontPic_Spewpa11[];
extern const u32 gMonFrontPic_Spewpa12[];
extern const u32 gMonFrontPic_Spewpa13[];
extern const u32 gMonFrontPic_Spewpa14[];
extern const u32 gMonFrontPic_Spewpa15[];
extern const u32 gMonFrontPic_Spewpa16[];
extern const u32 gMonFrontPic_Spewpa17[];
extern const u32 gMonFrontPic_Spewpa18[];
extern const u32 gMonFrontPic_Spewpa19[];
extern const u32 gMonFrontPic_Spewpa20[];
extern const u32 gMonFrontPic_Raticate3[];
extern const u32 gMonFrontPic_Gumshoos2[];
extern const u32 gMonFrontPic_Vikavolt2[];
extern const u32 gMonFrontPic_Lurantis2[];
extern const u32 gMonFrontPic_Salazzle2[];
extern const u32 gMonFrontPic_Mimikyu3[];
extern const u32 gMonFrontPic_Kommoo2[];
extern const u32 gMonFrontPic_Marowak3[];
extern const u32 gMonFrontPic_Ribombee2[];
extern const u32 gMonFrontPic_Araquanid2[];
extern const u32 gMonFrontPic_Togedemaru2[];
extern const u32 gMonFrontPic_Pikachu16[];
extern const u32 gMonFrontPic_Eevee2[];
extern const u32 gMonFrontPic_Venusaur3[];
extern const u32 gMonFrontPic_Blastoise3[];
extern const u32 gMonFrontPic_Charizard4[];
extern const u32 gMonFrontPic_Butterfree2[];
extern const u32 gMonFrontPic_Pikachu17[];
extern const u32 gMonFrontPic_Meowth4[];
extern const u32 gMonFrontPic_Machamp2[];
extern const u32 gMonFrontPic_Gengar3[];
extern const u32 gMonFrontPic_Kingler2[];
extern const u32 gMonFrontPic_Lapras2[];
extern const u32 gMonFrontPic_Eevee3[];
extern const u32 gMonFrontPic_Snorlax2[];
extern const u32 gMonFrontPic_Garbodor2[];
extern const u32 gMonFrontPic_Melmetal2[];
extern const u32 gMonFrontPic_Rillaboom2[];
extern const u32 gMonFrontPic_Cinderace2[];
extern const u32 gMonFrontPic_Inteleon2[];
extern const u32 gMonFrontPic_Corviknigh2[];
extern const u32 gMonFrontPic_Orbeetle2[];
extern const u32 gMonFrontPic_Drednaw2[];
extern const u32 gMonFrontPic_Coalossal2[];
extern const u32 gMonFrontPic_Flapple2[];
extern const u32 gMonFrontPic_Appletun2[];
extern const u32 gMonFrontPic_Sandaconda2[];
extern const u32 gMonFrontPic_Toxtricity3[];
extern const u32 gMonFrontPic_Toxtricity4[];
extern const u32 gMonFrontPic_Centiskorc2[];
extern const u32 gMonFrontPic_Hatterene2[];
extern const u32 gMonFrontPic_Grimmsnarl2[];
extern const u32 gMonFrontPic_Alcremie64[];
extern const u32 gMonFrontPic_Copperajah2[];
extern const u32 gMonFrontPic_Duraludon2[];
extern const u32 gMonFrontPic_Urshifu3[];
extern const u32 gMonFrontPic_Urshifu4[];
extern const u32 gMonFrontPic_Mimikyu4[];

const struct CompressedSpriteSheet gMonFrontPicTable_[] =
{
	SPECIES_SPRITE(NONE, gMonFrontPic_CircledQuestionMark),
	SPECIES_SPRITE(BULBASAUR, gMonFrontPic_Bulbasaur),
	SPECIES_SPRITE(IVYSAUR, gMonFrontPic_Ivysaur),
	SPECIES_SPRITE(VENUSAUR, gMonFrontPic_Venusaur),
	SPECIES_SPRITE(CHARMANDER, gMonFrontPic_Charmander),
	SPECIES_SPRITE(CHARMELEON, gMonFrontPic_Charmeleon),
	SPECIES_SPRITE(CHARIZARD, gMonFrontPic_Charizard),
	SPECIES_SPRITE(SQUIRTLE, gMonFrontPic_Squirtle),
	SPECIES_SPRITE(WARTORTLE, gMonFrontPic_Wartortle),
	SPECIES_SPRITE(BLASTOISE, gMonFrontPic_Blastoise),
	SPECIES_SPRITE(CATERPIE, gMonFrontPic_Caterpie),
	SPECIES_SPRITE(METAPOD, gMonFrontPic_Metapod),
	SPECIES_SPRITE(BUTTERFREE, gMonFrontPic_Butterfree),
	SPECIES_SPRITE(WEEDLE, gMonFrontPic_Weedle),
	SPECIES_SPRITE(KAKUNA, gMonFrontPic_Kakuna),
	SPECIES_SPRITE(BEEDRILL, gMonFrontPic_Beedrill),
	SPECIES_SPRITE(PIDGEY, gMonFrontPic_Pidgey),
	SPECIES_SPRITE(PIDGEOTTO, gMonFrontPic_Pidgeotto),
	SPECIES_SPRITE(PIDGEOT, gMonFrontPic_Pidgeot),
	SPECIES_SPRITE(RATTATA, gMonFrontPic_Rattata),
	SPECIES_SPRITE(RATICATE, gMonFrontPic_Raticate),
	SPECIES_SPRITE(SPEAROW, gMonFrontPic_Spearow),
	SPECIES_SPRITE(FEAROW, gMonFrontPic_Fearow),
	SPECIES_SPRITE(EKANS, gMonFrontPic_Ekans),
	SPECIES_SPRITE(ARBOK, gMonFrontPic_Arbok),
	SPECIES_SPRITE(PIKACHU, gMonFrontPic_Pikachu),
	SPECIES_SPRITE(RAICHU, gMonFrontPic_Raichu),
	SPECIES_SPRITE(SANDSHREW, gMonFrontPic_Sandshrew),
	SPECIES_SPRITE(SANDSLASH, gMonFrontPic_Sandslash),
	SPECIES_SPRITE(NIDORANSF, gMonFrontPic_Nidoransf),
	SPECIES_SPRITE(NIDORINA, gMonFrontPic_Nidorina),
	SPECIES_SPRITE(NIDOQUEEN, gMonFrontPic_Nidoqueen),
	SPECIES_SPRITE(NIDORANSM, gMonFrontPic_Nidoransm),
	SPECIES_SPRITE(NIDORINO, gMonFrontPic_Nidorino),
	SPECIES_SPRITE(NIDOKING, gMonFrontPic_Nidoking),
	SPECIES_SPRITE(CLEFAIRY, gMonFrontPic_Clefairy),
	SPECIES_SPRITE(CLEFABLE, gMonFrontPic_Clefable),
	SPECIES_SPRITE(VULPIX, gMonFrontPic_Vulpix),
	SPECIES_SPRITE(NINETALES, gMonFrontPic_Ninetales),
	SPECIES_SPRITE(JIGGLYPUFF, gMonFrontPic_Jigglypuff),
	SPECIES_SPRITE(WIGGLYTUFF, gMonFrontPic_Wigglytuff),
	SPECIES_SPRITE(ZUBAT, gMonFrontPic_Zubat),
	SPECIES_SPRITE(GOLBAT, gMonFrontPic_Golbat),
	SPECIES_SPRITE(ODDISH, gMonFrontPic_Oddish),
	SPECIES_SPRITE(GLOOM, gMonFrontPic_Gloom),
	SPECIES_SPRITE(VILEPLUME, gMonFrontPic_Vileplume),
	SPECIES_SPRITE(PARAS, gMonFrontPic_Paras),
	SPECIES_SPRITE(PARASECT, gMonFrontPic_Parasect),
	SPECIES_SPRITE(VENONAT, gMonFrontPic_Venonat),
	SPECIES_SPRITE(VENOMOTH, gMonFrontPic_Venomoth),
	SPECIES_SPRITE(DIGLETT, gMonFrontPic_Diglett),
	SPECIES_SPRITE(DUGTRIO, gMonFrontPic_Dugtrio),
	SPECIES_SPRITE(MEOWTH, gMonFrontPic_Meowth),
	SPECIES_SPRITE(PERSIAN, gMonFrontPic_Persian),
	SPECIES_SPRITE(PSYDUCK, gMonFrontPic_Psyduck),
	SPECIES_SPRITE(GOLDUCK, gMonFrontPic_Golduck),
	SPECIES_SPRITE(MANKEY, gMonFrontPic_Mankey),
	SPECIES_SPRITE(PRIMEAPE, gMonFrontPic_Primeape),
	SPECIES_SPRITE(GROWLITHE, gMonFrontPic_Growlithe),
	SPECIES_SPRITE(ARCANINE, gMonFrontPic_Arcanine),
	SPECIES_SPRITE(POLIWAG, gMonFrontPic_Poliwag),
	SPECIES_SPRITE(POLIWHIRL, gMonFrontPic_Poliwhirl),
	SPECIES_SPRITE(POLIWRATH, gMonFrontPic_Poliwrath),
	SPECIES_SPRITE(ABRA, gMonFrontPic_Abra),
	SPECIES_SPRITE(KADABRA, gMonFrontPic_Kadabra),
	SPECIES_SPRITE(ALAKAZAM, gMonFrontPic_Alakazam),
	SPECIES_SPRITE(MACHOP, gMonFrontPic_Machop),
	SPECIES_SPRITE(MACHOKE, gMonFrontPic_Machoke),
	SPECIES_SPRITE(MACHAMP, gMonFrontPic_Machamp),
	SPECIES_SPRITE(BELLSPROUT, gMonFrontPic_Bellsprout),
	SPECIES_SPRITE(WEEPINBELL, gMonFrontPic_Weepinbell),
	SPECIES_SPRITE(VICTREEBEL, gMonFrontPic_Victreebel),
	SPECIES_SPRITE(TENTACOOL, gMonFrontPic_Tentacool),
	SPECIES_SPRITE(TENTACRUEL, gMonFrontPic_Tentacruel),
	SPECIES_SPRITE(GEODUDE, gMonFrontPic_Geodude),
	SPECIES_SPRITE(GRAVELER, gMonFrontPic_Graveler),
	SPECIES_SPRITE(GOLEM, gMonFrontPic_Golem),
	SPECIES_SPRITE(PONYTA, gMonFrontPic_Ponyta),
	SPECIES_SPRITE(RAPIDASH, gMonFrontPic_Rapidash),
	SPECIES_SPRITE(SLOWPOKE, gMonFrontPic_Slowpoke),
	SPECIES_SPRITE(SLOWBRO, gMonFrontPic_Slowbro),
	SPECIES_SPRITE(MAGNEMITE, gMonFrontPic_Magnemite),
	SPECIES_SPRITE(MAGNETON, gMonFrontPic_Magneton),
	SPECIES_SPRITE(FARFETCHD, gMonFrontPic_Farfetchd),
	SPECIES_SPRITE(DODUO, gMonFrontPic_Doduo),
	SPECIES_SPRITE(DODRIO, gMonFrontPic_Dodrio),
	SPECIES_SPRITE(SEEL, gMonFrontPic_Seel),
	SPECIES_SPRITE(DEWGONG, gMonFrontPic_Dewgong),
	SPECIES_SPRITE(GRIMER, gMonFrontPic_Grimer),
	SPECIES_SPRITE(MUK, gMonFrontPic_Muk),
	SPECIES_SPRITE(SHELLDER, gMonFrontPic_Shellder),
	SPECIES_SPRITE(CLOYSTER, gMonFrontPic_Cloyster),
	SPECIES_SPRITE(GASTLY, gMonFrontPic_Gastly),
	SPECIES_SPRITE(HAUNTER, gMonFrontPic_Haunter),
	SPECIES_SPRITE(GENGAR, gMonFrontPic_Gengar),
	SPECIES_SPRITE(ONIX, gMonFrontPic_Onix),
	SPECIES_SPRITE(DROWZEE, gMonFrontPic_Drowzee),
	SPECIES_SPRITE(HYPNO, gMonFrontPic_Hypno),
	SPECIES_SPRITE(KRABBY, gMonFrontPic_Krabby),
	SPECIES_SPRITE(KINGLER, gMonFrontPic_Kingler),
	SPECIES_SPRITE(VOLTORB, gMonFrontPic_Voltorb),
	SPECIES_SPRITE(ELECTRODE, gMonFrontPic_Electrode),
	SPECIES_SPRITE(EXEGGCUTE, gMonFrontPic_Exeggcute),
	SPECIES_SPRITE(EXEGGUTOR, gMonFrontPic_Exeggutor),
	SPECIES_SPRITE(CUBONE, gMonFrontPic_Cubone),
	SPECIES_SPRITE(MAROWAK, gMonFrontPic_Marowak),
	SPECIES_SPRITE(HITMONLEE, gMonFrontPic_Hitmonlee),
	SPECIES_SPRITE(HITMONCHAN, gMonFrontPic_Hitmonchan),
	SPECIES_SPRITE(LICKITUNG, gMonFrontPic_Lickitung),
	SPECIES_SPRITE(KOFFING, gMonFrontPic_Koffing),
	SPECIES_SPRITE(WEEZING, gMonFrontPic_Weezing),
	SPECIES_SPRITE(RHYHORN, gMonFrontPic_Rhyhorn),
	SPECIES_SPRITE(RHYDON, gMonFrontPic_Rhydon),
	SPECIES_SPRITE(CHANSEY, gMonFrontPic_Chansey),
	SPECIES_SPRITE(TANGELA, gMonFrontPic_Tangela),
	SPECIES_SPRITE(KANGASKHAN, gMonFrontPic_Kangaskhan),
	SPECIES_SPRITE(HORSEA, gMonFrontPic_Horsea),
	SPECIES_SPRITE(SEADRA, gMonFrontPic_Seadra),
	SPECIES_SPRITE(GOLDEEN, gMonFrontPic_Goldeen),
	SPECIES_SPRITE(SEAKING, gMonFrontPic_Seaking),
	SPECIES_SPRITE(STARYU, gMonFrontPic_Staryu),
	SPECIES_SPRITE(STARMIE, gMonFrontPic_Starmie),
	SPECIES_SPRITE(MRMIME, gMonFrontPic_MrMime),
	SPECIES_SPRITE(SCYTHER, gMonFrontPic_Scyther),
	SPECIES_SPRITE(JYNX, gMonFrontPic_Jynx),
	SPECIES_SPRITE(ELECTABUZZ, gMonFrontPic_Electabuzz),
	SPECIES_SPRITE(MAGMAR, gMonFrontPic_Magmar),
	SPECIES_SPRITE(PINSIR, gMonFrontPic_Pinsir),
	SPECIES_SPRITE(TAUROS, gMonFrontPic_Tauros),
	SPECIES_SPRITE(MAGIKARP, gMonFrontPic_Magikarp),
	SPECIES_SPRITE(GYARADOS, gMonFrontPic_Gyarados),
	SPECIES_SPRITE(LAPRAS, gMonFrontPic_Lapras),
	SPECIES_SPRITE(DITTO, gMonFrontPic_Ditto),
	SPECIES_SPRITE(EEVEE, gMonFrontPic_Eevee),
	SPECIES_SPRITE(VAPOREON, gMonFrontPic_Vaporeon),
	SPECIES_SPRITE(JOLTEON, gMonFrontPic_Jolteon),
	SPECIES_SPRITE(FLAREON, gMonFrontPic_Flareon),
	SPECIES_SPRITE(PORYGON, gMonFrontPic_Porygon),
	SPECIES_SPRITE(OMANYTE, gMonFrontPic_Omanyte),
	SPECIES_SPRITE(OMASTAR, gMonFrontPic_Omastar),
	SPECIES_SPRITE(KABUTO, gMonFrontPic_Kabuto),
	SPECIES_SPRITE(KABUTOPS, gMonFrontPic_Kabutops),
	SPECIES_SPRITE(AERODACTYL, gMonFrontPic_Aerodactyl),
	SPECIES_SPRITE(SNORLAX, gMonFrontPic_Snorlax),
	SPECIES_SPRITE(ARTICUNO, gMonFrontPic_Articuno),
	SPECIES_SPRITE(ZAPDOS, gMonFrontPic_Zapdos),
	SPECIES_SPRITE(MOLTRES, gMonFrontPic_Moltres),
	SPECIES_SPRITE(DRATINI, gMonFrontPic_Dratini),
	SPECIES_SPRITE(DRAGONAIR, gMonFrontPic_Dragonair),
	SPECIES_SPRITE(DRAGONITE, gMonFrontPic_Dragonite),
	SPECIES_SPRITE(MEWTWO, gMonFrontPic_Mewtwo),
	SPECIES_SPRITE(MEW, gMonFrontPic_Mew),
	SPECIES_SPRITE(CHIKORITA, gMonFrontPic_Chikorita),
	SPECIES_SPRITE(BAYLEEF, gMonFrontPic_Bayleef),
	SPECIES_SPRITE(MEGANIUM, gMonFrontPic_Meganium),
	SPECIES_SPRITE(CYNDAQUIL, gMonFrontPic_Cyndaquil),
	SPECIES_SPRITE(QUILAVA, gMonFrontPic_Quilava),
	SPECIES_SPRITE(TYPHLOSION, gMonFrontPic_Typhlosion),
	SPECIES_SPRITE(TOTODILE, gMonFrontPic_Totodile),
	SPECIES_SPRITE(CROCONAW, gMonFrontPic_Croconaw),
	SPECIES_SPRITE(FERALIGATR, gMonFrontPic_Feraligatr),
	SPECIES_SPRITE(SENTRET, gMonFrontPic_Sentret),
	SPECIES_SPRITE(FURRET, gMonFrontPic_Furret),
	SPECIES_SPRITE(HOOTHOOT, gMonFrontPic_Hoothoot),
	SPECIES_SPRITE(NOCTOWL, gMonFrontPic_Noctowl),
	SPECIES_SPRITE(LEDYBA, gMonFrontPic_Ledyba),
	SPECIES_SPRITE(LEDIAN, gMonFrontPic_Ledian),
	SPECIES_SPRITE(SPINARAK, gMonFrontPic_Spinarak),
	SPECIES_SPRITE(ARIADOS, gMonFrontPic_Ariados),
	SPECIES_SPRITE(CROBAT, gMonFrontPic_Crobat),
	SPECIES_SPRITE(CHINCHOU, gMonFrontPic_Chinchou),
	SPECIES_SPRITE(LANTURN, gMonFrontPic_Lanturn),
	SPECIES_SPRITE(PICHU, gMonFrontPic_Pichu),
	SPECIES_SPRITE(CLEFFA, gMonFrontPic_Cleffa),
	SPECIES_SPRITE(IGGLYBUFF, gMonFrontPic_Igglybuff),
	SPECIES_SPRITE(TOGEPI, gMonFrontPic_Togepi),
	SPECIES_SPRITE(TOGETIC, gMonFrontPic_Togetic),
	SPECIES_SPRITE(NATU, gMonFrontPic_Natu),
	SPECIES_SPRITE(XATU, gMonFrontPic_Xatu),
	SPECIES_SPRITE(MAREEP, gMonFrontPic_Mareep),
	SPECIES_SPRITE(FLAAFFY, gMonFrontPic_Flaaffy),
	SPECIES_SPRITE(AMPHAROS, gMonFrontPic_Ampharos),
	SPECIES_SPRITE(BELLOSSOM, gMonFrontPic_Bellossom),
	SPECIES_SPRITE(MARILL, gMonFrontPic_Marill),
	SPECIES_SPRITE(AZUMARILL, gMonFrontPic_Azumarill),
	SPECIES_SPRITE(SUDOWOODO, gMonFrontPic_Sudowoodo),
	SPECIES_SPRITE(POLITOED, gMonFrontPic_Politoed),
	SPECIES_SPRITE(HOPPIP, gMonFrontPic_Hoppip),
	SPECIES_SPRITE(SKIPLOOM, gMonFrontPic_Skiploom),
	SPECIES_SPRITE(JUMPLUFF, gMonFrontPic_Jumpluff),
	SPECIES_SPRITE(AIPOM, gMonFrontPic_Aipom),
	SPECIES_SPRITE(SUNKERN, gMonFrontPic_Sunkern),
	SPECIES_SPRITE(SUNFLORA, gMonFrontPic_Sunflora),
	SPECIES_SPRITE(YANMA, gMonFrontPic_Yanma),
	SPECIES_SPRITE(WOOPER, gMonFrontPic_Wooper),
	SPECIES_SPRITE(QUAGSIRE, gMonFrontPic_Quagsire),
	SPECIES_SPRITE(ESPEON, gMonFrontPic_Espeon),
	SPECIES_SPRITE(UMBREON, gMonFrontPic_Umbreon),
	SPECIES_SPRITE(MURKROW, gMonFrontPic_Murkrow),
	SPECIES_SPRITE(SLOWKING, gMonFrontPic_Slowking),
	SPECIES_SPRITE(MISDREAVUS, gMonFrontPic_Misdreavus),
	SPECIES_SPRITE(UNOWN, gMonFrontPic_Unown),
	SPECIES_SPRITE(WOBBUFFET, gMonFrontPic_Wobbuffet),
	SPECIES_SPRITE(GIRAFARIG, gMonFrontPic_Girafarig),
	SPECIES_SPRITE(PINECO, gMonFrontPic_Pineco),
	SPECIES_SPRITE(FORRETRESS, gMonFrontPic_Forretress),
	SPECIES_SPRITE(DUNSPARCE, gMonFrontPic_Dunsparce),
	SPECIES_SPRITE(GLIGAR, gMonFrontPic_Gligar),
	SPECIES_SPRITE(STEELIX, gMonFrontPic_Steelix),
	SPECIES_SPRITE(SNUBBULL, gMonFrontPic_Snubbull),
	SPECIES_SPRITE(GRANBULL, gMonFrontPic_Granbull),
	SPECIES_SPRITE(QWILFISH, gMonFrontPic_Qwilfish),
	SPECIES_SPRITE(SCIZOR, gMonFrontPic_Scizor),
	SPECIES_SPRITE(SHUCKLE, gMonFrontPic_Shuckle),
	SPECIES_SPRITE(HERACROSS, gMonFrontPic_Heracross),
	SPECIES_SPRITE(SNEASEL, gMonFrontPic_Sneasel),
	SPECIES_SPRITE(TEDDIURSA, gMonFrontPic_Teddiursa),
	SPECIES_SPRITE(URSARING, gMonFrontPic_Ursaring),
	SPECIES_SPRITE(SLUGMA, gMonFrontPic_Slugma),
	SPECIES_SPRITE(MAGCARGO, gMonFrontPic_Magcargo),
	SPECIES_SPRITE(SWINUB, gMonFrontPic_Swinub),
	SPECIES_SPRITE(PILOSWINE, gMonFrontPic_Piloswine),
	SPECIES_SPRITE(CORSOLA, gMonFrontPic_Corsola),
	SPECIES_SPRITE(REMORAID, gMonFrontPic_Remoraid),
	SPECIES_SPRITE(OCTILLERY, gMonFrontPic_Octillery),
	SPECIES_SPRITE(DELIBIRD, gMonFrontPic_Delibird),
	SPECIES_SPRITE(MANTINE, gMonFrontPic_Mantine),
	SPECIES_SPRITE(SKARMORY, gMonFrontPic_Skarmory),
	SPECIES_SPRITE(HOUNDOUR, gMonFrontPic_Houndour),
	SPECIES_SPRITE(HOUNDOOM, gMonFrontPic_Houndoom),
	SPECIES_SPRITE(KINGDRA, gMonFrontPic_Kingdra),
	SPECIES_SPRITE(PHANPY, gMonFrontPic_Phanpy),
	SPECIES_SPRITE(DONPHAN, gMonFrontPic_Donphan),
	SPECIES_SPRITE(PORYGON2, gMonFrontPic_Porygon2),
	SPECIES_SPRITE(STANTLER, gMonFrontPic_Stantler),
	SPECIES_SPRITE(SMEARGLE, gMonFrontPic_Smeargle),
	SPECIES_SPRITE(TYROGUE, gMonFrontPic_Tyrogue),
	SPECIES_SPRITE(HITMONTOP, gMonFrontPic_Hitmontop),
	SPECIES_SPRITE(SMOOCHUM, gMonFrontPic_Smoochum),
	SPECIES_SPRITE(ELEKID, gMonFrontPic_Elekid),
	SPECIES_SPRITE(MAGBY, gMonFrontPic_Magby),
	SPECIES_SPRITE(MILTANK, gMonFrontPic_Miltank),
	SPECIES_SPRITE(BLISSEY, gMonFrontPic_Blissey),
	SPECIES_SPRITE(RAIKOU, gMonFrontPic_Raikou),
	SPECIES_SPRITE(ENTEI, gMonFrontPic_Entei),
	SPECIES_SPRITE(SUICUNE, gMonFrontPic_Suicune),
	SPECIES_SPRITE(LARVITAR, gMonFrontPic_Larvitar),
	SPECIES_SPRITE(PUPITAR, gMonFrontPic_Pupitar),
	SPECIES_SPRITE(TYRANITAR, gMonFrontPic_Tyranitar),
	SPECIES_SPRITE(LUGIA, gMonFrontPic_Lugia),
	SPECIES_SPRITE(HOOH, gMonFrontPic_HoOh),
	SPECIES_SPRITE(CELEBI, gMonFrontPic_Celebi),
	SPECIES_SPRITE(TREECKO, gMonFrontPic_Treecko),
	SPECIES_SPRITE(GROVYLE, gMonFrontPic_Grovyle),
	SPECIES_SPRITE(SCEPTILE, gMonFrontPic_Sceptile),
	SPECIES_SPRITE(TORCHIC, gMonFrontPic_Torchic),
	SPECIES_SPRITE(COMBUSKEN, gMonFrontPic_Combusken),
	SPECIES_SPRITE(BLAZIKEN, gMonFrontPic_Blaziken),
	SPECIES_SPRITE(MUDKIP, gMonFrontPic_Mudkip),
	SPECIES_SPRITE(MARSHTOMP, gMonFrontPic_Marshtomp),
	SPECIES_SPRITE(SWAMPERT, gMonFrontPic_Swampert),
	SPECIES_SPRITE(POOCHYENA, gMonFrontPic_Poochyena),
	SPECIES_SPRITE(MIGHTYENA, gMonFrontPic_Mightyena),
	SPECIES_SPRITE(ZIGZAGOON, gMonFrontPic_Zigzagoon),
	SPECIES_SPRITE(LINOONE, gMonFrontPic_Linoone),
	SPECIES_SPRITE(WURMPLE, gMonFrontPic_Wurmple),
	SPECIES_SPRITE(SILCOON, gMonFrontPic_Silcoon),
	SPECIES_SPRITE(BEAUTIFLY, gMonFrontPic_Beautifly),
	SPECIES_SPRITE(CASCOON, gMonFrontPic_Cascoon),
	SPECIES_SPRITE(DUSTOX, gMonFrontPic_Dustox),
	SPECIES_SPRITE(LOTAD, gMonFrontPic_Lotad),
	SPECIES_SPRITE(LOMBRE, gMonFrontPic_Lombre),
	SPECIES_SPRITE(LUDICOLO, gMonFrontPic_Ludicolo),
	SPECIES_SPRITE(SEEDOT, gMonFrontPic_Seedot),
	SPECIES_SPRITE(NUZLEAF, gMonFrontPic_Nuzleaf),
	SPECIES_SPRITE(SHIFTRY, gMonFrontPic_Shiftry),
	SPECIES_SPRITE(TAILLOW, gMonFrontPic_Taillow),
	SPECIES_SPRITE(SWELLOW, gMonFrontPic_Swellow),
	SPECIES_SPRITE(WINGULL, gMonFrontPic_Wingull),
	SPECIES_SPRITE(PELIPPER, gMonFrontPic_Pelipper),
	SPECIES_SPRITE(RALTS, gMonFrontPic_Ralts),
	SPECIES_SPRITE(KIRLIA, gMonFrontPic_Kirlia),
	SPECIES_SPRITE(GARDEVOIR, gMonFrontPic_Gardevoir),
	SPECIES_SPRITE(SURSKIT, gMonFrontPic_Surskit),
	SPECIES_SPRITE(MASQUERAIN, gMonFrontPic_Masquerain),
	SPECIES_SPRITE(SHROOMISH, gMonFrontPic_Shroomish),
	SPECIES_SPRITE(BRELOOM, gMonFrontPic_Breloom),
	SPECIES_SPRITE(SLAKOTH, gMonFrontPic_Slakoth),
	SPECIES_SPRITE(VIGOROTH, gMonFrontPic_Vigoroth),
	SPECIES_SPRITE(SLAKING, gMonFrontPic_Slaking),
	SPECIES_SPRITE(NINCADA, gMonFrontPic_Nincada),
	SPECIES_SPRITE(NINJASK, gMonFrontPic_Ninjask),
	SPECIES_SPRITE(SHEDINJA, gMonFrontPic_Shedinja),
	SPECIES_SPRITE(WHISMUR, gMonFrontPic_Whismur),
	SPECIES_SPRITE(LOUDRED, gMonFrontPic_Loudred),
	SPECIES_SPRITE(EXPLOUD, gMonFrontPic_Exploud),
	SPECIES_SPRITE(MAKUHITA, gMonFrontPic_Makuhita),
	SPECIES_SPRITE(HARIYAMA, gMonFrontPic_Hariyama),
	SPECIES_SPRITE(AZURILL, gMonFrontPic_Azurill),
	SPECIES_SPRITE(NOSEPASS, gMonFrontPic_Nosepass),
	SPECIES_SPRITE(SKITTY, gMonFrontPic_Skitty),
	SPECIES_SPRITE(DELCATTY, gMonFrontPic_Delcatty),
	SPECIES_SPRITE(SABLEYE, gMonFrontPic_Sableye),
	SPECIES_SPRITE(MAWILE, gMonFrontPic_Mawile),
	SPECIES_SPRITE(ARON, gMonFrontPic_Aron),
	SPECIES_SPRITE(LAIRON, gMonFrontPic_Lairon),
	SPECIES_SPRITE(AGGRON, gMonFrontPic_Aggron),
	SPECIES_SPRITE(MEDITITE, gMonFrontPic_Meditite),
	SPECIES_SPRITE(MEDICHAM, gMonFrontPic_Medicham),
	SPECIES_SPRITE(ELECTRIKE, gMonFrontPic_Electrike),
	SPECIES_SPRITE(MANECTRIC, gMonFrontPic_Manectric),
	SPECIES_SPRITE(PLUSLE, gMonFrontPic_Plusle),
	SPECIES_SPRITE(MINUN, gMonFrontPic_Minun),
	SPECIES_SPRITE(VOLBEAT, gMonFrontPic_Volbeat),
	SPECIES_SPRITE(ILLUMISE, gMonFrontPic_Illumise),
	SPECIES_SPRITE(ROSELIA, gMonFrontPic_Roselia),
	SPECIES_SPRITE(GULPIN, gMonFrontPic_Gulpin),
	SPECIES_SPRITE(SWALOT, gMonFrontPic_Swalot),
	SPECIES_SPRITE(CARVANHA, gMonFrontPic_Carvanha),
	SPECIES_SPRITE(SHARPEDO, gMonFrontPic_Sharpedo),
	SPECIES_SPRITE(WAILMER, gMonFrontPic_Wailmer),
	SPECIES_SPRITE(WAILORD, gMonFrontPic_Wailord),
	SPECIES_SPRITE(NUMEL, gMonFrontPic_Numel),
	SPECIES_SPRITE(CAMERUPT, gMonFrontPic_Camerupt),
	SPECIES_SPRITE(TORKOAL, gMonFrontPic_Torkoal),
	SPECIES_SPRITE(SPOINK, gMonFrontPic_Spoink),
	SPECIES_SPRITE(GRUMPIG, gMonFrontPic_Grumpig),
	SPECIES_SPRITE(SPINDA, gMonFrontPic_Spinda),
	SPECIES_SPRITE(TRAPINCH, gMonFrontPic_Trapinch),
	SPECIES_SPRITE(VIBRAVA, gMonFrontPic_Vibrava),
	SPECIES_SPRITE(FLYGON, gMonFrontPic_Flygon),
	SPECIES_SPRITE(CACNEA, gMonFrontPic_Cacnea),
	SPECIES_SPRITE(CACTURNE, gMonFrontPic_Cacturne),
	SPECIES_SPRITE(SWABLU, gMonFrontPic_Swablu),
	SPECIES_SPRITE(ALTARIA, gMonFrontPic_Altaria),
	SPECIES_SPRITE(ZANGOOSE, gMonFrontPic_Zangoose),
	SPECIES_SPRITE(SEVIPER, gMonFrontPic_Seviper),
	SPECIES_SPRITE(LUNATONE, gMonFrontPic_Lunatone),
	SPECIES_SPRITE(SOLROCK, gMonFrontPic_Solrock),
	SPECIES_SPRITE(BARBOACH, gMonFrontPic_Barboach),
	SPECIES_SPRITE(WHISCASH, gMonFrontPic_Whiscash),
	SPECIES_SPRITE(CORPHISH, gMonFrontPic_Corphish),
	SPECIES_SPRITE(CRAWDAUNT, gMonFrontPic_Crawdaunt),
	SPECIES_SPRITE(BALTOY, gMonFrontPic_Baltoy),
	SPECIES_SPRITE(CLAYDOL, gMonFrontPic_Claydol),
	SPECIES_SPRITE(LILEEP, gMonFrontPic_Lileep),
	SPECIES_SPRITE(CRADILY, gMonFrontPic_Cradily),
	SPECIES_SPRITE(ANORITH, gMonFrontPic_Anorith),
	SPECIES_SPRITE(ARMALDO, gMonFrontPic_Armaldo),
	SPECIES_SPRITE(FEEBAS, gMonFrontPic_Feebas),
	SPECIES_SPRITE(MILOTIC, gMonFrontPic_Milotic),
	SPECIES_SPRITE(CASTFORM, gMonFrontPic_Castform),
	SPECIES_SPRITE(KECLEON, gMonFrontPic_Kecleon),
	SPECIES_SPRITE(SHUPPET, gMonFrontPic_Shuppet),
	SPECIES_SPRITE(BANETTE, gMonFrontPic_Banette),
	SPECIES_SPRITE(DUSKULL, gMonFrontPic_Duskull),
	SPECIES_SPRITE(DUSCLOPS, gMonFrontPic_Dusclops),
	SPECIES_SPRITE(TROPIUS, gMonFrontPic_Tropius),
	SPECIES_SPRITE(CHIMECHO, gMonFrontPic_Chimecho),
	SPECIES_SPRITE(ABSOL, gMonFrontPic_Absol),
	SPECIES_SPRITE(WYNAUT, gMonFrontPic_Wynaut),
	SPECIES_SPRITE(SNORUNT, gMonFrontPic_Snorunt),
	SPECIES_SPRITE(GLALIE, gMonFrontPic_Glalie),
	SPECIES_SPRITE(SPHEAL, gMonFrontPic_Spheal),
	SPECIES_SPRITE(SEALEO, gMonFrontPic_Sealeo),
	SPECIES_SPRITE(WALREIN, gMonFrontPic_Walrein),
	SPECIES_SPRITE(CLAMPERL, gMonFrontPic_Clamperl),
	SPECIES_SPRITE(HUNTAIL, gMonFrontPic_Huntail),
	SPECIES_SPRITE(GOREBYSS, gMonFrontPic_Gorebyss),
	SPECIES_SPRITE(RELICANTH, gMonFrontPic_Relicanth),
	SPECIES_SPRITE(LUVDISC, gMonFrontPic_Luvdisc),
	SPECIES_SPRITE(BAGON, gMonFrontPic_Bagon),
	SPECIES_SPRITE(SHELGON, gMonFrontPic_Shelgon),
	SPECIES_SPRITE(SALAMENCE, gMonFrontPic_Salamence),
	SPECIES_SPRITE(BELDUM, gMonFrontPic_Beldum),
	SPECIES_SPRITE(METANG, gMonFrontPic_Metang),
	SPECIES_SPRITE(METAGROSS, gMonFrontPic_Metagross),
	SPECIES_SPRITE(REGIROCK, gMonFrontPic_Regirock),
	SPECIES_SPRITE(REGICE, gMonFrontPic_Regice),
	SPECIES_SPRITE(REGISTEEL, gMonFrontPic_Registeel),
	SPECIES_SPRITE(LATIAS, gMonFrontPic_Latias),
	SPECIES_SPRITE(LATIOS, gMonFrontPic_Latios),
	SPECIES_SPRITE(KYOGRE, gMonFrontPic_Kyogre),
	SPECIES_SPRITE(GROUDON, gMonFrontPic_Groudon),
	SPECIES_SPRITE(RAYQUAZA, gMonFrontPic_Rayquaza),
	SPECIES_SPRITE(JIRACHI, gMonFrontPic_Jirachi),
	SPECIES_SPRITE(DEOXYS, gMonFrontPic_Deoxys),
	SPECIES_SPRITE(TURTWIG, gMonFrontPic_Turtwig),
	SPECIES_SPRITE(GROTLE, gMonFrontPic_Grotle),
	SPECIES_SPRITE(TORTERRA, gMonFrontPic_Torterra),
	SPECIES_SPRITE(CHIMCHAR, gMonFrontPic_Chimchar),
	SPECIES_SPRITE(MONFERNO, gMonFrontPic_Monferno),
	SPECIES_SPRITE(INFERNAPE, gMonFrontPic_Infernape),
	SPECIES_SPRITE(PIPLUP, gMonFrontPic_Piplup),
	SPECIES_SPRITE(PRINPLUP, gMonFrontPic_Prinplup),
	SPECIES_SPRITE(EMPOLEON, gMonFrontPic_Empoleon),
	SPECIES_SPRITE(STARLY, gMonFrontPic_Starly),
	SPECIES_SPRITE(STARAVIA, gMonFrontPic_Staravia),
	SPECIES_SPRITE(STARAPTOR, gMonFrontPic_Staraptor),
	SPECIES_SPRITE(BIDOOF, gMonFrontPic_Bidoof),
	SPECIES_SPRITE(BIBAREL, gMonFrontPic_Bibarel),
	SPECIES_SPRITE(KRICKETOT, gMonFrontPic_Kricketot),
	SPECIES_SPRITE(KRICKETUNE, gMonFrontPic_Kricketune),
	SPECIES_SPRITE(SHINX, gMonFrontPic_Shinx),
	SPECIES_SPRITE(LUXIO, gMonFrontPic_Luxio),
	SPECIES_SPRITE(LUXRAY, gMonFrontPic_Luxray),
	SPECIES_SPRITE(BUDEW, gMonFrontPic_Budew),
	SPECIES_SPRITE(ROSERADE, gMonFrontPic_Roserade),
	SPECIES_SPRITE(CRANIDOS, gMonFrontPic_Cranidos),
	SPECIES_SPRITE(RAMPARDOS, gMonFrontPic_Rampardos),
	SPECIES_SPRITE(SHIELDON, gMonFrontPic_Shieldon),
	SPECIES_SPRITE(BASTIODON, gMonFrontPic_Bastiodon),
	SPECIES_SPRITE(BURMY, gMonFrontPic_Burmy),
	SPECIES_SPRITE(WORMADAM, gMonFrontPic_Wormadam),
	SPECIES_SPRITE(MOTHIM, gMonFrontPic_Mothim),
	SPECIES_SPRITE(COMBEE, gMonFrontPic_Combee),
	SPECIES_SPRITE(VESPIQUEN, gMonFrontPic_Vespiquen),
	SPECIES_SPRITE(PACHIRISU, gMonFrontPic_Pachirisu),
	SPECIES_SPRITE(BUIZEL, gMonFrontPic_Buizel),
	SPECIES_SPRITE(FLOATZEL, gMonFrontPic_Floatzel),
	SPECIES_SPRITE(CHERUBI, gMonFrontPic_Cherubi),
	SPECIES_SPRITE(CHERRIM, gMonFrontPic_Cherrim),
	SPECIES_SPRITE(SHELLOS, gMonFrontPic_Shellos),
	SPECIES_SPRITE(GASTRODON, gMonFrontPic_Gastrodon),
	SPECIES_SPRITE(AMBIPOM, gMonFrontPic_Ambipom),
	SPECIES_SPRITE(DRIFLOON, gMonFrontPic_Drifloon),
	SPECIES_SPRITE(DRIFBLIM, gMonFrontPic_Drifblim),
	SPECIES_SPRITE(BUNEARY, gMonFrontPic_Buneary),
	SPECIES_SPRITE(LOPUNNY, gMonFrontPic_Lopunny),
	SPECIES_SPRITE(MISMAGIUS, gMonFrontPic_Mismagius),
	SPECIES_SPRITE(HONCHKROW, gMonFrontPic_Honchkrow),
	SPECIES_SPRITE(GLAMEOW, gMonFrontPic_Glameow),
	SPECIES_SPRITE(PURUGLY, gMonFrontPic_Purugly),
	SPECIES_SPRITE(CHINGLING, gMonFrontPic_Chingling),
	SPECIES_SPRITE(STUNKY, gMonFrontPic_Stunky),
	SPECIES_SPRITE(SKUNTANK, gMonFrontPic_Skuntank),
	SPECIES_SPRITE(BRONZOR, gMonFrontPic_Bronzor),
	SPECIES_SPRITE(BRONZONG, gMonFrontPic_Bronzong),
	SPECIES_SPRITE(BONSLY, gMonFrontPic_Bonsly),
	SPECIES_SPRITE(MIMEJR, gMonFrontPic_MimeJr),
	SPECIES_SPRITE(HAPPINY, gMonFrontPic_Happiny),
	SPECIES_SPRITE(CHATOT, gMonFrontPic_Chatot),
	SPECIES_SPRITE(SPIRITOMB, gMonFrontPic_Spiritomb),
	SPECIES_SPRITE(GIBLE, gMonFrontPic_Gible),
	SPECIES_SPRITE(GABITE, gMonFrontPic_Gabite),
	SPECIES_SPRITE(GARCHOMP, gMonFrontPic_Garchomp),
	SPECIES_SPRITE(MUNCHLAX, gMonFrontPic_Munchlax),
	SPECIES_SPRITE(RIOLU, gMonFrontPic_Riolu),
	SPECIES_SPRITE(LUCARIO, gMonFrontPic_Lucario),
	SPECIES_SPRITE(HIPPOPOTAS, gMonFrontPic_Hippopotas),
	SPECIES_SPRITE(HIPPOWDON, gMonFrontPic_Hippowdon),
	SPECIES_SPRITE(SKORUPI, gMonFrontPic_Skorupi),
	SPECIES_SPRITE(DRAPION, gMonFrontPic_Drapion),
	SPECIES_SPRITE(CROAGUNK, gMonFrontPic_Croagunk),
	SPECIES_SPRITE(TOXICROAK, gMonFrontPic_Toxicroak),
	SPECIES_SPRITE(CARNIVINE, gMonFrontPic_Carnivine),
	SPECIES_SPRITE(FINNEON, gMonFrontPic_Finneon),
	SPECIES_SPRITE(LUMINEON, gMonFrontPic_Lumineon),
	SPECIES_SPRITE(MANTYKE, gMonFrontPic_Mantyke),
	SPECIES_SPRITE(SNOVER, gMonFrontPic_Snover),
	SPECIES_SPRITE(ABOMASNOW, gMonFrontPic_Abomasnow),
	SPECIES_SPRITE(WEAVILE, gMonFrontPic_Weavile),
	SPECIES_SPRITE(MAGNEZONE, gMonFrontPic_Magnezone),
	SPECIES_SPRITE(LICKILICKY, gMonFrontPic_Lickilicky),
	SPECIES_SPRITE(RHYPERIOR, gMonFrontPic_Rhyperior),
	SPECIES_SPRITE(TANGROWTH, gMonFrontPic_Tangrowth),
	SPECIES_SPRITE(ELECTIVIRE, gMonFrontPic_Electivire),
	SPECIES_SPRITE(MAGMORTAR, gMonFrontPic_Magmortar),
	SPECIES_SPRITE(TOGEKISS, gMonFrontPic_Togekiss),
	SPECIES_SPRITE(YANMEGA, gMonFrontPic_Yanmega),
	SPECIES_SPRITE(LEAFEON, gMonFrontPic_Leafeon),
	SPECIES_SPRITE(GLACEON, gMonFrontPic_Glaceon),
	SPECIES_SPRITE(GLISCOR, gMonFrontPic_Gliscor),
	SPECIES_SPRITE(MAMOSWINE, gMonFrontPic_Mamoswine),
	SPECIES_SPRITE(PORYGONZ, gMonFrontPic_PorygonZ),
	SPECIES_SPRITE(GALLADE, gMonFrontPic_Gallade),
	SPECIES_SPRITE(PROBOPASS, gMonFrontPic_Probopass),
	SPECIES_SPRITE(DUSKNOIR, gMonFrontPic_Dusknoir),
	SPECIES_SPRITE(FROSLASS, gMonFrontPic_Froslass),
	SPECIES_SPRITE(ROTOM, gMonFrontPic_Rotom),
	SPECIES_SPRITE(UXIE, gMonFrontPic_Uxie),
	SPECIES_SPRITE(MESPRIT, gMonFrontPic_Mesprit),
	SPECIES_SPRITE(AZELF, gMonFrontPic_Azelf),
	SPECIES_SPRITE(DIALGA, gMonFrontPic_Dialga),
	SPECIES_SPRITE(PALKIA, gMonFrontPic_Palkia),
	SPECIES_SPRITE(HEATRAN, gMonFrontPic_Heatran),
	SPECIES_SPRITE(REGIGIGAS, gMonFrontPic_Regigigas),
	SPECIES_SPRITE(GIRATINA, gMonFrontPic_Giratina),
	SPECIES_SPRITE(CRESSELIA, gMonFrontPic_Cresselia),
	SPECIES_SPRITE(PHIONE, gMonFrontPic_Phione),
	SPECIES_SPRITE(MANAPHY, gMonFrontPic_Manaphy),
	SPECIES_SPRITE(DARKRAI, gMonFrontPic_Darkrai),
	SPECIES_SPRITE(SHAYMIN, gMonFrontPic_Shaymin),
	SPECIES_SPRITE(ARCEUS, gMonFrontPic_Arceus),
	SPECIES_SPRITE(VICTINI, gMonFrontPic_Victini),
	SPECIES_SPRITE(SNIVY, gMonFrontPic_Snivy),
	SPECIES_SPRITE(SERVINE, gMonFrontPic_Servine),
	SPECIES_SPRITE(SERPERIOR, gMonFrontPic_Serperior),
	SPECIES_SPRITE(TEPIG, gMonFrontPic_Tepig),
	SPECIES_SPRITE(PIGNITE, gMonFrontPic_Pignite),
	SPECIES_SPRITE(EMBOAR, gMonFrontPic_Emboar),
	SPECIES_SPRITE(OSHAWOTT, gMonFrontPic_Oshawott),
	SPECIES_SPRITE(DEWOTT, gMonFrontPic_Dewott),
	SPECIES_SPRITE(SAMUROTT, gMonFrontPic_Samurott),
	SPECIES_SPRITE(PATRAT, gMonFrontPic_Patrat),
	SPECIES_SPRITE(WATCHOG, gMonFrontPic_Watchog),
	SPECIES_SPRITE(LILLIPUP, gMonFrontPic_Lillipup),
	SPECIES_SPRITE(HERDIER, gMonFrontPic_Herdier),
	SPECIES_SPRITE(STOUTLAND, gMonFrontPic_Stoutland),
	SPECIES_SPRITE(PURRLOIN, gMonFrontPic_Purrloin),
	SPECIES_SPRITE(LIEPARD, gMonFrontPic_Liepard),
	SPECIES_SPRITE(PANSAGE, gMonFrontPic_Pansage),
	SPECIES_SPRITE(SIMISAGE, gMonFrontPic_Simisage),
	SPECIES_SPRITE(PANSEAR, gMonFrontPic_Pansear),
	SPECIES_SPRITE(SIMISEAR, gMonFrontPic_Simisear),
	SPECIES_SPRITE(PANPOUR, gMonFrontPic_Panpour),
	SPECIES_SPRITE(SIMIPOUR, gMonFrontPic_Simipour),
	SPECIES_SPRITE(MUNNA, gMonFrontPic_Munna),
	SPECIES_SPRITE(MUSHARNA, gMonFrontPic_Musharna),
	SPECIES_SPRITE(PIDOVE, gMonFrontPic_Pidove),
	SPECIES_SPRITE(TRANQUILL, gMonFrontPic_Tranquill),
	SPECIES_SPRITE(UNFEZANT, gMonFrontPic_Unfezant),
	SPECIES_SPRITE(BLITZLE, gMonFrontPic_Blitzle),
	SPECIES_SPRITE(ZEBSTRIKA, gMonFrontPic_Zebstrika),
	SPECIES_SPRITE(ROGGENROLA, gMonFrontPic_Roggenrola),
	SPECIES_SPRITE(BOLDORE, gMonFrontPic_Boldore),
	SPECIES_SPRITE(GIGALITH, gMonFrontPic_Gigalith),
	SPECIES_SPRITE(WOOBAT, gMonFrontPic_Woobat),
	SPECIES_SPRITE(SWOOBAT, gMonFrontPic_Swoobat),
	SPECIES_SPRITE(DRILBUR, gMonFrontPic_Drilbur),
	SPECIES_SPRITE(EXCADRILL, gMonFrontPic_Excadrill),
	SPECIES_SPRITE(AUDINO, gMonFrontPic_Audino),
	SPECIES_SPRITE(TIMBURR, gMonFrontPic_Timburr),
	SPECIES_SPRITE(GURDURR, gMonFrontPic_Gurdurr),
	SPECIES_SPRITE(CONKELDURR, gMonFrontPic_Conkeldurr),
	SPECIES_SPRITE(TYMPOLE, gMonFrontPic_Tympole),
	SPECIES_SPRITE(PALPITOAD, gMonFrontPic_Palpitoad),
	SPECIES_SPRITE(SEISMITOAD, gMonFrontPic_Seismitoad),
	SPECIES_SPRITE(THROH, gMonFrontPic_Throh),
	SPECIES_SPRITE(SAWK, gMonFrontPic_Sawk),
	SPECIES_SPRITE(SEWADDLE, gMonFrontPic_Sewaddle),
	SPECIES_SPRITE(SWADLOON, gMonFrontPic_Swadloon),
	SPECIES_SPRITE(LEAVANNY, gMonFrontPic_Leavanny),
	SPECIES_SPRITE(VENIPEDE, gMonFrontPic_Venipede),
	SPECIES_SPRITE(WHIRLIPEDE, gMonFrontPic_Whirlipede),
	SPECIES_SPRITE(SCOLIPEDE, gMonFrontPic_Scolipede),
	SPECIES_SPRITE(COTTONEE, gMonFrontPic_Cottonee),
	SPECIES_SPRITE(WHIMSICOTT, gMonFrontPic_Whimsicott),
	SPECIES_SPRITE(PETILIL, gMonFrontPic_Petilil),
	SPECIES_SPRITE(LILLIGANT, gMonFrontPic_Lilligant),
	SPECIES_SPRITE(BASCULIN, gMonFrontPic_Basculin),
	SPECIES_SPRITE(SANDILE, gMonFrontPic_Sandile),
	SPECIES_SPRITE(KROKOROK, gMonFrontPic_Krokorok),
	SPECIES_SPRITE(KROOKODILE, gMonFrontPic_Krookodile),
	SPECIES_SPRITE(DARUMAKA, gMonFrontPic_Darumaka),
	SPECIES_SPRITE(DARMANITAN, gMonFrontPic_Darmanitan),
	SPECIES_SPRITE(MARACTUS, gMonFrontPic_Maractus),
	SPECIES_SPRITE(DWEBBLE, gMonFrontPic_Dwebble),
	SPECIES_SPRITE(CRUSTLE, gMonFrontPic_Crustle),
	SPECIES_SPRITE(SCRAGGY, gMonFrontPic_Scraggy),
	SPECIES_SPRITE(SCRAFTY, gMonFrontPic_Scrafty),
	SPECIES_SPRITE(SIGILYPH, gMonFrontPic_Sigilyph),
	SPECIES_SPRITE(YAMASK, gMonFrontPic_Yamask),
	SPECIES_SPRITE(COFAGRIGUS, gMonFrontPic_Cofagrigus),
	SPECIES_SPRITE(TIRTOUGA, gMonFrontPic_Tirtouga),
	SPECIES_SPRITE(CARRACOSTA, gMonFrontPic_Carracosta),
	SPECIES_SPRITE(ARCHEN, gMonFrontPic_Archen),
	SPECIES_SPRITE(ARCHEOPS, gMonFrontPic_Archeops),
	SPECIES_SPRITE(TRUBBISH, gMonFrontPic_Trubbish),
	SPECIES_SPRITE(GARBODOR, gMonFrontPic_Garbodor),
	SPECIES_SPRITE(ZORUA, gMonFrontPic_Zorua),
	SPECIES_SPRITE(ZOROARK, gMonFrontPic_Zoroark),
	SPECIES_SPRITE(MINCCINO, gMonFrontPic_Minccino),
	SPECIES_SPRITE(CINCCINO, gMonFrontPic_Cinccino),
	SPECIES_SPRITE(GOTHITA, gMonFrontPic_Gothita),
	SPECIES_SPRITE(GOTHORITA, gMonFrontPic_Gothorita),
	SPECIES_SPRITE(GOTHITELLE, gMonFrontPic_Gothitelle),
	SPECIES_SPRITE(SOLOSIS, gMonFrontPic_Solosis),
	SPECIES_SPRITE(DUOSION, gMonFrontPic_Duosion),
	SPECIES_SPRITE(REUNICLUS, gMonFrontPic_Reuniclus),
	SPECIES_SPRITE(DUCKLETT, gMonFrontPic_Ducklett),
	SPECIES_SPRITE(SWANNA, gMonFrontPic_Swanna),
	SPECIES_SPRITE(VANILLITE, gMonFrontPic_Vanillite),
	SPECIES_SPRITE(VANILLISH, gMonFrontPic_Vanillish),
	SPECIES_SPRITE(VANILLUXE, gMonFrontPic_Vanilluxe),
	SPECIES_SPRITE(DEERLING, gMonFrontPic_Deerling),
	SPECIES_SPRITE(SAWSBUCK, gMonFrontPic_Sawsbuck),
	SPECIES_SPRITE(EMOLGA, gMonFrontPic_Emolga),
	SPECIES_SPRITE(KARRABLAST, gMonFrontPic_Karrablast),
	SPECIES_SPRITE(ESCAVALIER, gMonFrontPic_Escavalier),
	SPECIES_SPRITE(FOONGUS, gMonFrontPic_Foongus),
	SPECIES_SPRITE(AMOONGUSS, gMonFrontPic_Amoonguss),
	SPECIES_SPRITE(FRILLISH, gMonFrontPic_Frillish),
	SPECIES_SPRITE(JELLICENT, gMonFrontPic_Jellicent),
	SPECIES_SPRITE(ALOMOMOLA, gMonFrontPic_Alomomola),
	SPECIES_SPRITE(JOLTIK, gMonFrontPic_Joltik),
	SPECIES_SPRITE(GALVANTULA, gMonFrontPic_Galvantula),
	SPECIES_SPRITE(FERROSEED, gMonFrontPic_Ferroseed),
	SPECIES_SPRITE(FERROTHORN, gMonFrontPic_Ferrothorn),
	SPECIES_SPRITE(KLINK, gMonFrontPic_Klink),
	SPECIES_SPRITE(KLANG, gMonFrontPic_Klang),
	SPECIES_SPRITE(KLINKLANG, gMonFrontPic_Klinklang),
	SPECIES_SPRITE(TYNAMO, gMonFrontPic_Tynamo),
	SPECIES_SPRITE(EELEKTRIK, gMonFrontPic_Eelektrik),
	SPECIES_SPRITE(EELEKTROSS, gMonFrontPic_Eelektross),
	SPECIES_SPRITE(ELGYEM, gMonFrontPic_Elgyem),
	SPECIES_SPRITE(BEHEEYEM, gMonFrontPic_Beheeyem),
	SPECIES_SPRITE(LITWICK, gMonFrontPic_Litwick),
	SPECIES_SPRITE(LAMPENT, gMonFrontPic_Lampent),
	SPECIES_SPRITE(CHANDELURE, gMonFrontPic_Chandelure),
	SPECIES_SPRITE(AXEW, gMonFrontPic_Axew),
	SPECIES_SPRITE(FRAXURE, gMonFrontPic_Fraxure),
	SPECIES_SPRITE(HAXORUS, gMonFrontPic_Haxorus),
	SPECIES_SPRITE(CUBCHOO, gMonFrontPic_Cubchoo),
	SPECIES_SPRITE(BEARTIC, gMonFrontPic_Beartic),
	SPECIES_SPRITE(CRYOGONAL, gMonFrontPic_Cryogonal),
	SPECIES_SPRITE(SHELMET, gMonFrontPic_Shelmet),
	SPECIES_SPRITE(ACCELGOR, gMonFrontPic_Accelgor),
	SPECIES_SPRITE(STUNFISK, gMonFrontPic_Stunfisk),
	SPECIES_SPRITE(MIENFOO, gMonFrontPic_Mienfoo),
	SPECIES_SPRITE(MIENSHAO, gMonFrontPic_Mienshao),
	SPECIES_SPRITE(DRUDDIGON, gMonFrontPic_Druddigon),
	SPECIES_SPRITE(GOLETT, gMonFrontPic_Golett),
	SPECIES_SPRITE(GOLURK, gMonFrontPic_Golurk),
	SPECIES_SPRITE(PAWNIARD, gMonFrontPic_Pawniard),
	SPECIES_SPRITE(BISHARP, gMonFrontPic_Bisharp),
	SPECIES_SPRITE(BOUFFALANT, gMonFrontPic_Bouffalant),
	SPECIES_SPRITE(RUFFLET, gMonFrontPic_Rufflet),
	SPECIES_SPRITE(BRAVIARY, gMonFrontPic_Braviary),
	SPECIES_SPRITE(VULLABY, gMonFrontPic_Vullaby),
	SPECIES_SPRITE(MANDIBUZZ, gMonFrontPic_Mandibuzz),
	SPECIES_SPRITE(HEATMOR, gMonFrontPic_Heatmor),
	SPECIES_SPRITE(DURANT, gMonFrontPic_Durant),
	SPECIES_SPRITE(DEINO, gMonFrontPic_Deino),
	SPECIES_SPRITE(ZWEILOUS, gMonFrontPic_Zweilous),
	SPECIES_SPRITE(HYDREIGON, gMonFrontPic_Hydreigon),
	SPECIES_SPRITE(LARVESTA, gMonFrontPic_Larvesta),
	SPECIES_SPRITE(VOLCARONA, gMonFrontPic_Volcarona),
	SPECIES_SPRITE(COBALION, gMonFrontPic_Cobalion),
	SPECIES_SPRITE(TERRAKION, gMonFrontPic_Terrakion),
	SPECIES_SPRITE(VIRIZION, gMonFrontPic_Virizion),
	SPECIES_SPRITE(TORNADUS, gMonFrontPic_Tornadus),
	SPECIES_SPRITE(THUNDURUS, gMonFrontPic_Thundurus),
	SPECIES_SPRITE(RESHIRAM, gMonFrontPic_Reshiram),
	SPECIES_SPRITE(ZEKROM, gMonFrontPic_Zekrom),
	SPECIES_SPRITE(LANDORUS, gMonFrontPic_Landorus),
	SPECIES_SPRITE(KYUREM, gMonFrontPic_Kyurem),
	SPECIES_SPRITE(KELDEO, gMonFrontPic_Keldeo),
	SPECIES_SPRITE(MELOETTA, gMonFrontPic_Meloetta),
	SPECIES_SPRITE(GENESECT, gMonFrontPic_Genesect),
	SPECIES_SPRITE(CHESPIN, gMonFrontPic_Chespin),
	SPECIES_SPRITE(QUILLADIN, gMonFrontPic_Quilladin),
	SPECIES_SPRITE(CHESNAUGHT, gMonFrontPic_Chesnaught),
	SPECIES_SPRITE(FENNEKIN, gMonFrontPic_Fennekin),
	SPECIES_SPRITE(BRAIXEN, gMonFrontPic_Braixen),
	SPECIES_SPRITE(DELPHOX, gMonFrontPic_Delphox),
	SPECIES_SPRITE(FROAKIE, gMonFrontPic_Froakie),
	SPECIES_SPRITE(FROGADIER, gMonFrontPic_Frogadier),
	SPECIES_SPRITE(GRENINJA, gMonFrontPic_Greninja),
	SPECIES_SPRITE(BUNNELBY, gMonFrontPic_Bunnelby),
	SPECIES_SPRITE(DIGGERSBY, gMonFrontPic_Diggersby),
	SPECIES_SPRITE(FLETCHLING, gMonFrontPic_Fletchling),
	SPECIES_SPRITE(FLECHINDER, gMonFrontPic_Flechinder),
	SPECIES_SPRITE(TALONFLAME, gMonFrontPic_Talonflame),
	SPECIES_SPRITE(SCATTERBUG, gMonFrontPic_Scatterbug),
	SPECIES_SPRITE(SPEWPA, gMonFrontPic_Spewpa),
	SPECIES_SPRITE(VIVILLON, gMonFrontPic_Vivillon),
	SPECIES_SPRITE(LITLEO, gMonFrontPic_Litleo),
	SPECIES_SPRITE(PYROAR, gMonFrontPic_Pyroar),
	SPECIES_SPRITE(FLABEBE, gMonFrontPic_Flabebe),
	SPECIES_SPRITE(FLOETTE, gMonFrontPic_Floette),
	SPECIES_SPRITE(FLORGES, gMonFrontPic_Florges),
	SPECIES_SPRITE(SKIDDO, gMonFrontPic_Skiddo),
	SPECIES_SPRITE(GOGOAT, gMonFrontPic_Gogoat),
	SPECIES_SPRITE(PANCHAM, gMonFrontPic_Pancham),
	SPECIES_SPRITE(PANGORO, gMonFrontPic_Pangoro),
	SPECIES_SPRITE(FURFROU, gMonFrontPic_Furfrou),
	SPECIES_SPRITE(ESPURR, gMonFrontPic_Espurr),
	SPECIES_SPRITE(MEOWSTIC, gMonFrontPic_Meowstic),
	SPECIES_SPRITE(HONEDGE, gMonFrontPic_Honedge),
	SPECIES_SPRITE(DOUBLADE, gMonFrontPic_Doublade),
	SPECIES_SPRITE(AEGISLASH, gMonFrontPic_Aegislash),
	SPECIES_SPRITE(SPRITZEE, gMonFrontPic_Spritzee),
	SPECIES_SPRITE(AROMATISSE, gMonFrontPic_Aromatisse),
	SPECIES_SPRITE(SWIRLIX, gMonFrontPic_Swirlix),
	SPECIES_SPRITE(SLURPUFF, gMonFrontPic_Slurpuff),
	SPECIES_SPRITE(INKAY, gMonFrontPic_Inkay),
	SPECIES_SPRITE(MALAMAR, gMonFrontPic_Malamar),
	SPECIES_SPRITE(BINACLE, gMonFrontPic_Binacle),
	SPECIES_SPRITE(BARBARACLE, gMonFrontPic_Barbaracle),
	SPECIES_SPRITE(SKRELP, gMonFrontPic_Skrelp),
	SPECIES_SPRITE(DRAGALGE, gMonFrontPic_Dragalge),
	SPECIES_SPRITE(CLAUNCHER, gMonFrontPic_Clauncher),
	SPECIES_SPRITE(CLAWITZER, gMonFrontPic_Clawitzer),
	SPECIES_SPRITE(HELIOPTILE, gMonFrontPic_Helioptile),
	SPECIES_SPRITE(HELIOLISK, gMonFrontPic_Heliolisk),
	SPECIES_SPRITE(TYRUNT, gMonFrontPic_Tyrunt),
	SPECIES_SPRITE(TYRANTRUM, gMonFrontPic_Tyrantrum),
	SPECIES_SPRITE(AMAURA, gMonFrontPic_Amaura),
	SPECIES_SPRITE(AURORUS, gMonFrontPic_Aurorus),
	SPECIES_SPRITE(SYLVEON, gMonFrontPic_Sylveon),
	SPECIES_SPRITE(HAWLUCHA, gMonFrontPic_Hawlucha),
	SPECIES_SPRITE(DEDENNE, gMonFrontPic_Dedenne),
	SPECIES_SPRITE(CARBINK, gMonFrontPic_Carbink),
	SPECIES_SPRITE(GOOMY, gMonFrontPic_Goomy),
	SPECIES_SPRITE(SLIGGOO, gMonFrontPic_Sliggoo),
	SPECIES_SPRITE(GOODRA, gMonFrontPic_Goodra),
	SPECIES_SPRITE(KLEFKI, gMonFrontPic_Klefki),
	SPECIES_SPRITE(PHANTUMP, gMonFrontPic_Phantump),
	SPECIES_SPRITE(TREVENANT, gMonFrontPic_Trevenant),
	SPECIES_SPRITE(PUMPKABOO, gMonFrontPic_Pumpkaboo),
	SPECIES_SPRITE(GOURGEIST, gMonFrontPic_Gourgeist),
	SPECIES_SPRITE(BERGMITE, gMonFrontPic_Bergmite),
	SPECIES_SPRITE(AVALUGG, gMonFrontPic_Avalugg),
	SPECIES_SPRITE(NOIBAT, gMonFrontPic_Noibat),
	SPECIES_SPRITE(NOIVERN, gMonFrontPic_Noivern),
	SPECIES_SPRITE(XERNEAS, gMonFrontPic_Xerneas),
	SPECIES_SPRITE(YVELTAL, gMonFrontPic_Yveltal),
	SPECIES_SPRITE(ZYGARDE, gMonFrontPic_Zygarde),
	SPECIES_SPRITE(DIANCIE, gMonFrontPic_Diancie),
	SPECIES_SPRITE(HOOPA, gMonFrontPic_Hoopa),
	SPECIES_SPRITE(VOLCANION, gMonFrontPic_Volcanion),
	SPECIES_SPRITE(ROWLET, gMonFrontPic_Rowlet),
	SPECIES_SPRITE(DARTRIX, gMonFrontPic_Dartrix),
	SPECIES_SPRITE(DECIDUEYE, gMonFrontPic_Decidueye),
	SPECIES_SPRITE(LITTEN, gMonFrontPic_Litten),
	SPECIES_SPRITE(TORRACAT, gMonFrontPic_Torracat),
	SPECIES_SPRITE(INCINEROAR, gMonFrontPic_Incineroar),
	SPECIES_SPRITE(POPPLIO, gMonFrontPic_Popplio),
	SPECIES_SPRITE(BRIONNE, gMonFrontPic_Brionne),
	SPECIES_SPRITE(PRIMARINA, gMonFrontPic_Primarina),
	SPECIES_SPRITE(PIKIPEK, gMonFrontPic_Pikipek),
	SPECIES_SPRITE(TRUMBEAK, gMonFrontPic_Trumbeak),
	SPECIES_SPRITE(TOUCANNON, gMonFrontPic_Toucannon),
	SPECIES_SPRITE(YUNGOOS, gMonFrontPic_Yungoos),
	SPECIES_SPRITE(GUMSHOOS, gMonFrontPic_Gumshoos),
	SPECIES_SPRITE(GRUBBIN, gMonFrontPic_Grubbin),
	SPECIES_SPRITE(CHARJABUG, gMonFrontPic_Charjabug),
	SPECIES_SPRITE(VIKAVOLT, gMonFrontPic_Vikavolt),
	SPECIES_SPRITE(CRABRAWLER, gMonFrontPic_Crabrawler),
	SPECIES_SPRITE(CRABMINABL, gMonFrontPic_Crabminabl),
	SPECIES_SPRITE(ORICORIO, gMonFrontPic_Oricorio),
	SPECIES_SPRITE(CUTIEFLY, gMonFrontPic_Cutiefly),
	SPECIES_SPRITE(RIBOMBEE, gMonFrontPic_Ribombee),
	SPECIES_SPRITE(ROCKRUFF, gMonFrontPic_Rockruff),
	SPECIES_SPRITE(LYCANROC, gMonFrontPic_Lycanroc),
	SPECIES_SPRITE(WISHIWASHI, gMonFrontPic_Wishiwashi),
	SPECIES_SPRITE(MAREANIE, gMonFrontPic_Mareanie),
	SPECIES_SPRITE(TOXAPEX, gMonFrontPic_Toxapex),
	SPECIES_SPRITE(MUDBRAY, gMonFrontPic_Mudbray),
	SPECIES_SPRITE(MUDSDALE, gMonFrontPic_Mudsdale),
	SPECIES_SPRITE(DEWPIDER, gMonFrontPic_Dewpider),
	SPECIES_SPRITE(ARAQUANID, gMonFrontPic_Araquanid),
	SPECIES_SPRITE(FOMANTIS, gMonFrontPic_Fomantis),
	SPECIES_SPRITE(LURANTIS, gMonFrontPic_Lurantis),
	SPECIES_SPRITE(MORELULL, gMonFrontPic_Morelull),
	SPECIES_SPRITE(SHIINOTIC, gMonFrontPic_Shiinotic),
	SPECIES_SPRITE(SALANDIT, gMonFrontPic_Salandit),
	SPECIES_SPRITE(SALAZZLE, gMonFrontPic_Salazzle),
	SPECIES_SPRITE(STUFFUL, gMonFrontPic_Stufful),
	SPECIES_SPRITE(BEWEAR, gMonFrontPic_Bewear),
	SPECIES_SPRITE(BOUNSWEET, gMonFrontPic_Bounsweet),
	SPECIES_SPRITE(STEENEE, gMonFrontPic_Steenee),
	SPECIES_SPRITE(TSAREENA, gMonFrontPic_Tsareena),
	SPECIES_SPRITE(COMFEY, gMonFrontPic_Comfey),
	SPECIES_SPRITE(ORANGURU, gMonFrontPic_Oranguru),
	SPECIES_SPRITE(PASSIMIAN, gMonFrontPic_Passimian),
	SPECIES_SPRITE(WIMPOD, gMonFrontPic_Wimpod),
	SPECIES_SPRITE(GOLISOPOD, gMonFrontPic_Golisopod),
	SPECIES_SPRITE(SANDYGAST, gMonFrontPic_Sandygast),
	SPECIES_SPRITE(PALOSSAND, gMonFrontPic_Palossand),
	SPECIES_SPRITE(PYUKUMUKU, gMonFrontPic_Pyukumuku),
	SPECIES_SPRITE(TYPENULL, gMonFrontPic_TypeNull),
	SPECIES_SPRITE(SILVALLY, gMonFrontPic_Silvally),
	SPECIES_SPRITE(MINIOR, gMonFrontPic_Minior),
	SPECIES_SPRITE(KOMALA, gMonFrontPic_Komala),
	SPECIES_SPRITE(TURTONATOR, gMonFrontPic_Turtonator),
	SPECIES_SPRITE(TOGEDEMARU, gMonFrontPic_Togedemaru),
	SPECIES_SPRITE(MIMIKYU, gMonFrontPic_Mimikyu),
	SPECIES_SPRITE(BRUXISH, gMonFrontPic_Bruxish),
	SPECIES_SPRITE(DRAMPA, gMonFrontPic_Drampa),
	SPECIES_SPRITE(DHELMISE, gMonFrontPic_Dhelmise),
	SPECIES_SPRITE(JANGMOO, gMonFrontPic_Jangmoo),
	SPECIES_SPRITE(HAKAMOO, gMonFrontPic_Hakamoo),
	SPECIES_SPRITE(KOMMOO, gMonFrontPic_Kommoo),
	SPECIES_SPRITE(TAPUKOKO, gMonFrontPic_TapuKoko),
	SPECIES_SPRITE(TAPULELE, gMonFrontPic_TapuLele),
	SPECIES_SPRITE(TAPUBULU, gMonFrontPic_TapuBulu),
	SPECIES_SPRITE(TAPUFINI, gMonFrontPic_TapuFini),
	SPECIES_SPRITE(COSMOG, gMonFrontPic_Cosmog),
	SPECIES_SPRITE(COSMOEM, gMonFrontPic_Cosmoem),
	SPECIES_SPRITE(SOLGALEO, gMonFrontPic_Solgaleo),
	SPECIES_SPRITE(LUNALA, gMonFrontPic_Lunala),
	SPECIES_SPRITE(NIHILEGO, gMonFrontPic_Nihilego),
	SPECIES_SPRITE(BUZZWOLE, gMonFrontPic_Buzzwole),
	SPECIES_SPRITE(PHEROMOSA, gMonFrontPic_Pheromosa),
	SPECIES_SPRITE(XURKITREE, gMonFrontPic_Xurkitree),
	SPECIES_SPRITE(CELESTEELA, gMonFrontPic_Celesteela),
	SPECIES_SPRITE(KARTANA, gMonFrontPic_Kartana),
	SPECIES_SPRITE(GUZZLORD, gMonFrontPic_Guzzlord),
	SPECIES_SPRITE(NECROZMA, gMonFrontPic_Necrozma),
	SPECIES_SPRITE(MAGEARNA, gMonFrontPic_Magearna),
	SPECIES_SPRITE(MARSHADOW, gMonFrontPic_Marshadow),
	SPECIES_SPRITE(POIPOLE, gMonFrontPic_Poipole),
	SPECIES_SPRITE(NAGANADEL, gMonFrontPic_Naganadel),
	SPECIES_SPRITE(STAKATAKA, gMonFrontPic_Stakataka),
	SPECIES_SPRITE(BLACEPHALN, gMonFrontPic_Blacephaln),
	SPECIES_SPRITE(ZERAORA, gMonFrontPic_Zeraora),
	SPECIES_SPRITE(MELTAN, gMonFrontPic_Meltan),
	SPECIES_SPRITE(MELMETAL, gMonFrontPic_Melmetal),
	SPECIES_SPRITE(GROOKEY, gMonFrontPic_Grookey),
	SPECIES_SPRITE(THWACKEY, gMonFrontPic_Thwackey),
	SPECIES_SPRITE(RILLABOOM, gMonFrontPic_Rillaboom),
	SPECIES_SPRITE(SCORBUNNY, gMonFrontPic_Scorbunny),
	SPECIES_SPRITE(RABOOT, gMonFrontPic_Raboot),
	SPECIES_SPRITE(CINDERACE, gMonFrontPic_Cinderace),
	SPECIES_SPRITE(SOBBLE, gMonFrontPic_Sobble),
	SPECIES_SPRITE(DRIZZILE, gMonFrontPic_Drizzile),
	SPECIES_SPRITE(INTELEON, gMonFrontPic_Inteleon),
	SPECIES_SPRITE(SKWOVET, gMonFrontPic_Skwovet),
	SPECIES_SPRITE(GREEDENT, gMonFrontPic_Greedent),
	SPECIES_SPRITE(ROOKIDEE, gMonFrontPic_Rookidee),
	SPECIES_SPRITE(CORVISQUIR, gMonFrontPic_Corvisquir),
	SPECIES_SPRITE(CORVIKNIGH, gMonFrontPic_Corviknigh),
	SPECIES_SPRITE(BLIPBUG, gMonFrontPic_Blipbug),
	SPECIES_SPRITE(DOTTLER, gMonFrontPic_Dottler),
	SPECIES_SPRITE(ORBEETLE, gMonFrontPic_Orbeetle),
	SPECIES_SPRITE(NICKIT, gMonFrontPic_Nickit),
	SPECIES_SPRITE(THIEVUL, gMonFrontPic_Thievul),
	SPECIES_SPRITE(GOSSIFLEUR, gMonFrontPic_Gossifleur),
	SPECIES_SPRITE(ELDEGOSS, gMonFrontPic_Eldegoss),
	SPECIES_SPRITE(WOOLOO, gMonFrontPic_Wooloo),
	SPECIES_SPRITE(DUBWOOL, gMonFrontPic_Dubwool),
	SPECIES_SPRITE(CHEWTLE, gMonFrontPic_Chewtle),
	SPECIES_SPRITE(DREDNAW, gMonFrontPic_Drednaw),
	SPECIES_SPRITE(YAMPER, gMonFrontPic_Yamper),
	SPECIES_SPRITE(BOLTUND, gMonFrontPic_Boltund),
	SPECIES_SPRITE(ROLYCOLY, gMonFrontPic_Rolycoly),
	SPECIES_SPRITE(CARKOL, gMonFrontPic_Carkol),
	SPECIES_SPRITE(COALOSSAL, gMonFrontPic_Coalossal),
	SPECIES_SPRITE(APPLIN, gMonFrontPic_Applin),
	SPECIES_SPRITE(FLAPPLE, gMonFrontPic_Flapple),
	SPECIES_SPRITE(APPLETUN, gMonFrontPic_Appletun),
	SPECIES_SPRITE(SILICOBRA, gMonFrontPic_Silicobra),
	SPECIES_SPRITE(SANDACONDA, gMonFrontPic_Sandaconda),
	SPECIES_SPRITE(CRAMORANT, gMonFrontPic_Cramorant),
	SPECIES_SPRITE(ARROKUDA, gMonFrontPic_Arrokuda),
	SPECIES_SPRITE(BARRASKEWD, gMonFrontPic_Barraskewd),
	SPECIES_SPRITE(TOXEL, gMonFrontPic_Toxel),
	SPECIES_SPRITE(TOXTRICITY, gMonFrontPic_Toxtricity),
	SPECIES_SPRITE(SIZZLIPEDE, gMonFrontPic_Sizzlipede),
	SPECIES_SPRITE(CENTISKORC, gMonFrontPic_Centiskorc),
	SPECIES_SPRITE(CLOBBOPUS, gMonFrontPic_Clobbopus),
	SPECIES_SPRITE(GRAPPLOCT, gMonFrontPic_Grapploct),
	SPECIES_SPRITE(SINISTEA, gMonFrontPic_Sinistea),
	SPECIES_SPRITE(POLTEAGEIS, gMonFrontPic_Polteageis),
	SPECIES_SPRITE(HATENNA, gMonFrontPic_Hatenna),
	SPECIES_SPRITE(HATTREM, gMonFrontPic_Hattrem),
	SPECIES_SPRITE(HATTERENE, gMonFrontPic_Hatterene),
	SPECIES_SPRITE(IMPIDIMP, gMonFrontPic_Impidimp),
	SPECIES_SPRITE(MORGREM, gMonFrontPic_Morgrem),
	SPECIES_SPRITE(GRIMMSNARL, gMonFrontPic_Grimmsnarl),
	SPECIES_SPRITE(OBSTAGOON, gMonFrontPic_Obstagoon),
	SPECIES_SPRITE(PERRSERKER, gMonFrontPic_Perrserker),
	SPECIES_SPRITE(CURSOLA, gMonFrontPic_Cursola),
	SPECIES_SPRITE(SIRFETCHD, gMonFrontPic_Sirfetchd),
	SPECIES_SPRITE(MRRIME, gMonFrontPic_MrRime),
	SPECIES_SPRITE(RUNERIGUS, gMonFrontPic_Runerigus),
	SPECIES_SPRITE(MILCERY, gMonFrontPic_Milcery),
	SPECIES_SPRITE(ALCREMIE, gMonFrontPic_Alcremie),
	SPECIES_SPRITE(FALINKS, gMonFrontPic_Falinks),
	SPECIES_SPRITE(PINCURCHIN, gMonFrontPic_Pincurchin),
	SPECIES_SPRITE(SNOM, gMonFrontPic_Snom),
	SPECIES_SPRITE(FROSMOTH, gMonFrontPic_Frosmoth),
	SPECIES_SPRITE(STONJOURNE, gMonFrontPic_Stonjourne),
	SPECIES_SPRITE(EISCUE, gMonFrontPic_Eiscue),
	SPECIES_SPRITE(INDEEDEE, gMonFrontPic_Indeedee),
	SPECIES_SPRITE(MORPEKO, gMonFrontPic_Morpeko),
	SPECIES_SPRITE(CUFANT, gMonFrontPic_Cufant),
	SPECIES_SPRITE(COPPERAJAH, gMonFrontPic_Copperajah),
	SPECIES_SPRITE(DRACOZOLT, gMonFrontPic_Dracozolt),
	SPECIES_SPRITE(ARCTOZOLT, gMonFrontPic_Arctozolt),
	SPECIES_SPRITE(DRACOVISH, gMonFrontPic_Dracovish),
	SPECIES_SPRITE(ARCTOVISH, gMonFrontPic_Arctovish),
	SPECIES_SPRITE(DURALUDON, gMonFrontPic_Duraludon),
	SPECIES_SPRITE(DREEPY, gMonFrontPic_Dreepy),
	SPECIES_SPRITE(DRAKLOAK, gMonFrontPic_Drakloak),
	SPECIES_SPRITE(DRAGAPULT, gMonFrontPic_Dragapult),
	SPECIES_SPRITE(ZACIAN, gMonFrontPic_Zacian),
	SPECIES_SPRITE(ZAMAZENTA, gMonFrontPic_Zamazenta),
	SPECIES_SPRITE(ETERNATUS, gMonFrontPic_Eternatus),
	SPECIES_SPRITE(KUBFU, gMonFrontPic_Kubfu),
	SPECIES_SPRITE(URSHIFU, gMonFrontPic_Urshifu),
	SPECIES_SPRITE(ZARUDE, gMonFrontPic_Zarude),
	SPECIES_SPRITE(REGIELEKI, gMonFrontPic_Regieleki),
	SPECIES_SPRITE(REGIDRAGO, gMonFrontPic_Regidrago),
	SPECIES_SPRITE(GLASTRIER, gMonFrontPic_Glastrier),
	SPECIES_SPRITE(SPECTRIER, gMonFrontPic_Spectrier),
	SPECIES_SPRITE(CALYREX, gMonFrontPic_Calyrex),
	SPECIES_SPRITE(WYRDEER, gMonFrontPic_Wyrdeer),
	SPECIES_SPRITE(KLEAVOR, gMonFrontPic_Kleavor),
	SPECIES_SPRITE(URSALUNA, gMonFrontPic_Ursaluna),
	SPECIES_SPRITE(BSCULEGION, gMonFrontPic_Bsculegion),
	SPECIES_SPRITE(SNEASLER, gMonFrontPic_Sneasler),
	SPECIES_SPRITE(OVERQWIL, gMonFrontPic_Overqwil),
	SPECIES_SPRITE(ENAMORUS, gMonFrontPic_Enamorus),
	SPECIES_SPRITE(VENUSAUR_2, gMonFrontPic_Venusaur2),
	SPECIES_SPRITE(CHARIZARD_2, gMonFrontPic_Charizard2),
	SPECIES_SPRITE(CHARIZARD_3, gMonFrontPic_Charizard3),
	SPECIES_SPRITE(BLASTOISE_2, gMonFrontPic_Blastoise2),
	SPECIES_SPRITE(BEEDRILL_2, gMonFrontPic_Beedrill2),
	SPECIES_SPRITE(PIDGEOT_2, gMonFrontPic_Pidgeot2),
	SPECIES_SPRITE(ALAKAZAM_2, gMonFrontPic_Alakazam2),
	SPECIES_SPRITE(SLOWBRO_2, gMonFrontPic_Slowbro2),
	SPECIES_SPRITE(GENGAR_2, gMonFrontPic_Gengar2),
	SPECIES_SPRITE(KANGASKHAN_2, gMonFrontPic_Kangaskhan2),
	SPECIES_SPRITE(PINSIR_2, gMonFrontPic_Pinsir2),
	SPECIES_SPRITE(GYARADOS_2, gMonFrontPic_Gyarados2),
	SPECIES_SPRITE(AERODACTYL_2, gMonFrontPic_Aerodactyl2),
	SPECIES_SPRITE(MEWTWO_2, gMonFrontPic_Mewtwo2),
	SPECIES_SPRITE(MEWTWO_3, gMonFrontPic_Mewtwo3),
	SPECIES_SPRITE(AMPHAROS_2, gMonFrontPic_Ampharos2),
	SPECIES_SPRITE(STEELIX_2, gMonFrontPic_Steelix2),
	SPECIES_SPRITE(SCIZOR_2, gMonFrontPic_Scizor2),
	SPECIES_SPRITE(HERACROSS_2, gMonFrontPic_Heracross2),
	SPECIES_SPRITE(HOUNDOOM_2, gMonFrontPic_Houndoom2),
	SPECIES_SPRITE(TYRANITAR_2, gMonFrontPic_Tyranitar2),
	SPECIES_SPRITE(SCEPTILE_2, gMonFrontPic_Sceptile2),
	SPECIES_SPRITE(BLAZIKEN_2, gMonFrontPic_Blaziken2),
	SPECIES_SPRITE(SWAMPERT_2, gMonFrontPic_Swampert2),
	SPECIES_SPRITE(GARDEVOIR_2, gMonFrontPic_Gardevoir2),
	SPECIES_SPRITE(SABLEYE_2, gMonFrontPic_Sableye2),
	SPECIES_SPRITE(MAWILE_2, gMonFrontPic_Mawile2),
	SPECIES_SPRITE(AGGRON_2, gMonFrontPic_Aggron2),
	SPECIES_SPRITE(MEDICHAM_2, gMonFrontPic_Medicham2),
	SPECIES_SPRITE(MANECTRIC_2, gMonFrontPic_Manectric2),
	SPECIES_SPRITE(SHARPEDO_2, gMonFrontPic_Sharpedo2),
	SPECIES_SPRITE(CAMERUPT_2, gMonFrontPic_Camerupt2),
	SPECIES_SPRITE(ALTARIA_2, gMonFrontPic_Altaria2),
	SPECIES_SPRITE(BANETTE_2, gMonFrontPic_Banette2),
	SPECIES_SPRITE(ABSOL_2, gMonFrontPic_Absol2),
	SPECIES_SPRITE(GLALIE_2, gMonFrontPic_Glalie2),
	SPECIES_SPRITE(SALAMENCE_2, gMonFrontPic_Salamence2),
	SPECIES_SPRITE(METAGROSS_2, gMonFrontPic_Metagross2),
	SPECIES_SPRITE(LATIAS_2, gMonFrontPic_Latias2),
	SPECIES_SPRITE(LATIOS_2, gMonFrontPic_Latios2),
	SPECIES_SPRITE(LOPUNNY_2, gMonFrontPic_Lopunny2),
	SPECIES_SPRITE(GARCHOMP_2, gMonFrontPic_Garchomp2),
	SPECIES_SPRITE(LUCARIO_2, gMonFrontPic_Lucario2),
	SPECIES_SPRITE(ABOMASNOW_2, gMonFrontPic_Abomasnow2),
	SPECIES_SPRITE(GALLADE_2, gMonFrontPic_Gallade2),
	SPECIES_SPRITE(AUDINO_2, gMonFrontPic_Audino2),
	SPECIES_SPRITE(DIANCIE_2, gMonFrontPic_Diancie2),
	SPECIES_SPRITE(RAYQUAZA_2, gMonFrontPic_Rayquaza2),
	SPECIES_SPRITE(KYOGRE_2, gMonFrontPic_Kyogre2),
	SPECIES_SPRITE(GROUDON_2, gMonFrontPic_Groudon2),
	SPECIES_SPRITE(RATTATA_2, gMonFrontPic_Rattata2),
	SPECIES_SPRITE(RATICATE_2, gMonFrontPic_Raticate2),
	SPECIES_SPRITE(RAICHU_2, gMonFrontPic_Raichu2),
	SPECIES_SPRITE(SANDSHREW_2, gMonFrontPic_Sandshrew2),
	SPECIES_SPRITE(SANDSLASH_2, gMonFrontPic_Sandslash2),
	SPECIES_SPRITE(VULPIX_2, gMonFrontPic_Vulpix2),
	SPECIES_SPRITE(NINETALES_2, gMonFrontPic_Ninetales2),
	SPECIES_SPRITE(DIGLETT_2, gMonFrontPic_Diglett2),
	SPECIES_SPRITE(DUGTRIO_2, gMonFrontPic_Dugtrio2),
	SPECIES_SPRITE(MEOWTH_2, gMonFrontPic_Meowth2),
	SPECIES_SPRITE(PERSIAN_2, gMonFrontPic_Persian2),
	SPECIES_SPRITE(GEODUDE_2, gMonFrontPic_Geodude2),
	SPECIES_SPRITE(GRAVELER_2, gMonFrontPic_Graveler2),
	SPECIES_SPRITE(GOLEM_2, gMonFrontPic_Golem2),
	SPECIES_SPRITE(GRIMER_2, gMonFrontPic_Grimer2),
	SPECIES_SPRITE(MUK_2, gMonFrontPic_Muk2),
	SPECIES_SPRITE(EXEGGUTOR_2, gMonFrontPic_Exeggutor2),
	SPECIES_SPRITE(MAROWAK_2, gMonFrontPic_Marowak2),
	SPECIES_SPRITE(MEOWTH_3, gMonFrontPic_Meowth3),
	SPECIES_SPRITE(PONYTA_2, gMonFrontPic_Ponyta2),
	SPECIES_SPRITE(RAPIDASH_2, gMonFrontPic_Rapidash2),
	SPECIES_SPRITE(SLOWPOKE_2, gMonFrontPic_Slowpoke2),
	SPECIES_SPRITE(SLOWBRO_3, gMonFrontPic_Slowbro3),
	SPECIES_SPRITE(FARFETCHD_2, gMonFrontPic_Farfetchd2),
	SPECIES_SPRITE(WEEZING_2, gMonFrontPic_Weezing2),
	SPECIES_SPRITE(MRMIME_2, gMonFrontPic_MrMime2),
	SPECIES_SPRITE(ARTICUNO_2, gMonFrontPic_Articuno2),
	SPECIES_SPRITE(ZAPDOS_2, gMonFrontPic_Zapdos2),
	SPECIES_SPRITE(MOLTRES_2, gMonFrontPic_Moltres2),
	SPECIES_SPRITE(SLOWKING_2, gMonFrontPic_Slowking2),
	SPECIES_SPRITE(CORSOLA_2, gMonFrontPic_Corsola2),
	SPECIES_SPRITE(ZIGZAGOON_2, gMonFrontPic_Zigzagoon2),
	SPECIES_SPRITE(LINOONE_2, gMonFrontPic_Linoone2),
	SPECIES_SPRITE(DARUMAKA_2, gMonFrontPic_Darumaka2),
	SPECIES_SPRITE(DARMANITAN_2, gMonFrontPic_Darmanitan2),
	SPECIES_SPRITE(YAMASK_2, gMonFrontPic_Yamask2),
	SPECIES_SPRITE(STUNFISK_2, gMonFrontPic_Stunfisk2),
	SPECIES_SPRITE(GROWLITHE_2, gMonFrontPic_Growlithe2),
	SPECIES_SPRITE(ARCANINE_2, gMonFrontPic_Arcanine2),
	SPECIES_SPRITE(VOLTORB_2, gMonFrontPic_Voltorb2),
	SPECIES_SPRITE(ELECTRODE_2, gMonFrontPic_Electrode2),
	SPECIES_SPRITE(TYPHLOSION_2, gMonFrontPic_Typhlosion2),
	SPECIES_SPRITE(QWILFISH_2, gMonFrontPic_Qwilfish2),
	SPECIES_SPRITE(SNEASEL_2, gMonFrontPic_Sneasel2),
	SPECIES_SPRITE(SAMUROTT_2, gMonFrontPic_Samurott2),
	SPECIES_SPRITE(LILLIGANT_2, gMonFrontPic_Lilligant2),
	SPECIES_SPRITE(ZORUA_2, gMonFrontPic_Zorua2),
	SPECIES_SPRITE(ZOROARK_2, gMonFrontPic_Zoroark2),
	SPECIES_SPRITE(BRAVIARY_2, gMonFrontPic_Braviary2),
	SPECIES_SPRITE(SLIGGOO_2, gMonFrontPic_Sliggoo2),
	SPECIES_SPRITE(GOODRA_2, gMonFrontPic_Goodra2),
	SPECIES_SPRITE(AVALUGG_2, gMonFrontPic_Avalugg2),
	SPECIES_SPRITE(DECIDUEYE_2, gMonFrontPic_Decidueye2),
	SPECIES_SPRITE(PIKACHU_2, gMonFrontPic_Pikachu2),
	SPECIES_SPRITE(PIKACHU_3, gMonFrontPic_Pikachu3),
	SPECIES_SPRITE(PIKACHU_4, gMonFrontPic_Pikachu4),
	SPECIES_SPRITE(PIKACHU_5, gMonFrontPic_Pikachu5),
	SPECIES_SPRITE(PIKACHU_6, gMonFrontPic_Pikachu6),
	SPECIES_SPRITE(PIKACHU_7, gMonFrontPic_Pikachu7),
	SPECIES_SPRITE(PIKACHU_8, gMonFrontPic_Pikachu8),
	SPECIES_SPRITE(PIKACHU_9, gMonFrontPic_Pikachu9),
	SPECIES_SPRITE(PIKACHU_10, gMonFrontPic_Pikachu10),
	SPECIES_SPRITE(PIKACHU_11, gMonFrontPic_Pikachu11),
	SPECIES_SPRITE(PIKACHU_12, gMonFrontPic_Pikachu12),
	SPECIES_SPRITE(PIKACHU_13, gMonFrontPic_Pikachu13),
	SPECIES_SPRITE(PIKACHU_14, gMonFrontPic_Pikachu14),
	SPECIES_SPRITE(PIKACHU_15, gMonFrontPic_Pikachu15),
	SPECIES_SPRITE(PICHU_2, gMonFrontPic_Pichu2),
	SPECIES_SPRITE(CASTFORM_2, gMonFrontPic_Castform2),
	SPECIES_SPRITE(CASTFORM_3, gMonFrontPic_Castform3),
	SPECIES_SPRITE(CASTFORM_4, gMonFrontPic_Castform4),
	SPECIES_SPRITE(DEOXYS_2, gMonFrontPic_Deoxys2),
	SPECIES_SPRITE(DEOXYS_3, gMonFrontPic_Deoxys3),
	SPECIES_SPRITE(DEOXYS_4, gMonFrontPic_Deoxys4),
	SPECIES_SPRITE(BURMY_2, gMonFrontPic_Burmy2),
	SPECIES_SPRITE(BURMY_3, gMonFrontPic_Burmy3),
	SPECIES_SPRITE(WORMADAM_2, gMonFrontPic_Wormadam2),
	SPECIES_SPRITE(WORMADAM_3, gMonFrontPic_Wormadam3),
	SPECIES_SPRITE(CHERRIM_2, gMonFrontPic_Cherrim2),
	SPECIES_SPRITE(SHELLOS_2, gMonFrontPic_Shellos2),
	SPECIES_SPRITE(GASTRODON_2, gMonFrontPic_Gastrodon2),
	SPECIES_SPRITE(ROTOM_2, gMonFrontPic_Rotom2),
	SPECIES_SPRITE(ROTOM_3, gMonFrontPic_Rotom3),
	SPECIES_SPRITE(ROTOM_4, gMonFrontPic_Rotom4),
	SPECIES_SPRITE(ROTOM_5, gMonFrontPic_Rotom5),
	SPECIES_SPRITE(ROTOM_6, gMonFrontPic_Rotom6),
	SPECIES_SPRITE(DIALGA_2, gMonFrontPic_Dialga2),
	SPECIES_SPRITE(PALKIA_2, gMonFrontPic_Palkia2),
	SPECIES_SPRITE(GIRATINA_2, gMonFrontPic_Giratina2),
	SPECIES_SPRITE(SHAYMIN_2, gMonFrontPic_Shaymin2),
	SPECIES_SPRITE(ARCEUS_2, gMonFrontPic_Arceus2),
	SPECIES_SPRITE(ARCEUS_3, gMonFrontPic_Arceus3),
	SPECIES_SPRITE(ARCEUS_4, gMonFrontPic_Arceus4),
	SPECIES_SPRITE(ARCEUS_5, gMonFrontPic_Arceus5),
	SPECIES_SPRITE(ARCEUS_6, gMonFrontPic_Arceus6),
	SPECIES_SPRITE(ARCEUS_7, gMonFrontPic_Arceus7),
	SPECIES_SPRITE(ARCEUS_8, gMonFrontPic_Arceus8),
	SPECIES_SPRITE(ARCEUS_9, gMonFrontPic_Arceus9),
	SPECIES_SPRITE(ARCEUS_10, gMonFrontPic_Arceus10),
	SPECIES_SPRITE(ARCEUS_11, gMonFrontPic_Arceus11),
	SPECIES_SPRITE(ARCEUS_12, gMonFrontPic_Arceus12),
	SPECIES_SPRITE(ARCEUS_13, gMonFrontPic_Arceus13),
	SPECIES_SPRITE(ARCEUS_14, gMonFrontPic_Arceus14),
	SPECIES_SPRITE(ARCEUS_15, gMonFrontPic_Arceus15),
	SPECIES_SPRITE(ARCEUS_16, gMonFrontPic_Arceus16),
	SPECIES_SPRITE(ARCEUS_17, gMonFrontPic_Arceus17),
	SPECIES_SPRITE(ARCEUS_18, gMonFrontPic_Arceus18),
	SPECIES_SPRITE(BASCULIN_2, gMonFrontPic_Basculin2),
	SPECIES_SPRITE(BASCULIN_3, gMonFrontPic_Basculin3),
	SPECIES_SPRITE(DARMANITAN_3, gMonFrontPic_Darmanitan3),
	SPECIES_SPRITE(DARMANITAN_4, gMonFrontPic_Darmanitan4),
	SPECIES_SPRITE(DEERLING_2, gMonFrontPic_Deerling2),
	SPECIES_SPRITE(DEERLING_3, gMonFrontPic_Deerling3),
	SPECIES_SPRITE(DEERLING_4, gMonFrontPic_Deerling4),
	SPECIES_SPRITE(SAWSBUCK_2, gMonFrontPic_Sawsbuck2),
	SPECIES_SPRITE(SAWSBUCK_3, gMonFrontPic_Sawsbuck3),
	SPECIES_SPRITE(SAWSBUCK_4, gMonFrontPic_Sawsbuck4),
	SPECIES_SPRITE(TORNADUS_2, gMonFrontPic_Tornadus2),
	SPECIES_SPRITE(THUNDURUS_2, gMonFrontPic_Thundurus2),
	SPECIES_SPRITE(LANDORUS_2, gMonFrontPic_Landorus2),
	SPECIES_SPRITE(ENAMORUS_2, gMonFrontPic_Enamorus2),
	SPECIES_SPRITE(KYUREM_2, gMonFrontPic_Kyurem2),
	SPECIES_SPRITE(KYUREM_3, gMonFrontPic_Kyurem3),
	SPECIES_SPRITE(KELDEO_2, gMonFrontPic_Keldeo2),
	SPECIES_SPRITE(MELOETTA_2, gMonFrontPic_Meloetta2),
	SPECIES_SPRITE(GENESECT_2, gMonFrontPic_Genesect2),
	SPECIES_SPRITE(GENESECT_3, gMonFrontPic_Genesect3),
	SPECIES_SPRITE(GENESECT_4, gMonFrontPic_Genesect4),
	SPECIES_SPRITE(GENESECT_5, gMonFrontPic_Genesect5),
	SPECIES_SPRITE(GRENINJA_2, gMonFrontPic_Greninja2),
	SPECIES_SPRITE(GRENINJA_3, gMonFrontPic_Greninja3),
	SPECIES_SPRITE(VIVILLON_2, gMonFrontPic_Vivillon2),
	SPECIES_SPRITE(VIVILLON_3, gMonFrontPic_Vivillon3),
	SPECIES_SPRITE(VIVILLON_4, gMonFrontPic_Vivillon4),
	SPECIES_SPRITE(VIVILLON_5, gMonFrontPic_Vivillon5),
	SPECIES_SPRITE(VIVILLON_6, gMonFrontPic_Vivillon6),
	SPECIES_SPRITE(VIVILLON_7, gMonFrontPic_Vivillon7),
	SPECIES_SPRITE(VIVILLON_8, gMonFrontPic_Vivillon8),
	SPECIES_SPRITE(VIVILLON_9, gMonFrontPic_Vivillon9),
	SPECIES_SPRITE(VIVILLON_10, gMonFrontPic_Vivillon10),
	SPECIES_SPRITE(VIVILLON_11, gMonFrontPic_Vivillon11),
	SPECIES_SPRITE(VIVILLON_12, gMonFrontPic_Vivillon12),
	SPECIES_SPRITE(VIVILLON_13, gMonFrontPic_Vivillon13),
	SPECIES_SPRITE(VIVILLON_14, gMonFrontPic_Vivillon14),
	SPECIES_SPRITE(VIVILLON_15, gMonFrontPic_Vivillon15),
	SPECIES_SPRITE(VIVILLON_16, gMonFrontPic_Vivillon16),
	SPECIES_SPRITE(VIVILLON_17, gMonFrontPic_Vivillon17),
	SPECIES_SPRITE(VIVILLON_18, gMonFrontPic_Vivillon18),
	SPECIES_SPRITE(VIVILLON_19, gMonFrontPic_Vivillon19),
	SPECIES_SPRITE(VIVILLON_20, gMonFrontPic_Vivillon20),
	SPECIES_SPRITE(FLABEBE_2, gMonFrontPic_Flabebe2),
	SPECIES_SPRITE(FLABEBE_3, gMonFrontPic_Flabebe3),
	SPECIES_SPRITE(FLABEBE_4, gMonFrontPic_Flabebe4),
	SPECIES_SPRITE(FLABEBE_5, gMonFrontPic_Flabebe5),
	SPECIES_SPRITE(FLOETTE_2, gMonFrontPic_Floette2),
	SPECIES_SPRITE(FLOETTE_3, gMonFrontPic_Floette3),
	SPECIES_SPRITE(FLOETTE_4, gMonFrontPic_Floette4),
	SPECIES_SPRITE(FLOETTE_5, gMonFrontPic_Floette5),
	SPECIES_SPRITE(FLOETTE_6, gMonFrontPic_Floette6),
	SPECIES_SPRITE(FLORGES_2, gMonFrontPic_Florges2),
	SPECIES_SPRITE(FLORGES_3, gMonFrontPic_Florges3),
	SPECIES_SPRITE(FLORGES_4, gMonFrontPic_Florges4),
	SPECIES_SPRITE(FLORGES_5, gMonFrontPic_Florges5),
	SPECIES_SPRITE(FURFROU_2, gMonFrontPic_Furfrou2),
	SPECIES_SPRITE(FURFROU_3, gMonFrontPic_Furfrou3),
	SPECIES_SPRITE(FURFROU_4, gMonFrontPic_Furfrou4),
	SPECIES_SPRITE(FURFROU_5, gMonFrontPic_Furfrou5),
	SPECIES_SPRITE(FURFROU_6, gMonFrontPic_Furfrou6),
	SPECIES_SPRITE(FURFROU_7, gMonFrontPic_Furfrou7),
	SPECIES_SPRITE(FURFROU_8, gMonFrontPic_Furfrou8),
	SPECIES_SPRITE(FURFROU_9, gMonFrontPic_Furfrou9),
	SPECIES_SPRITE(FURFROU_10, gMonFrontPic_Furfrou10),
	SPECIES_SPRITE(MEOWSTIC_2, gMonFrontPic_Meowstic2),
	SPECIES_SPRITE(AEGISLASH_2, gMonFrontPic_Aegislash2),
	SPECIES_SPRITE(PUMPKABOO_2, gMonFrontPic_Pumpkaboo2),
	SPECIES_SPRITE(PUMPKABOO_3, gMonFrontPic_Pumpkaboo3),
	SPECIES_SPRITE(PUMPKABOO_4, gMonFrontPic_Pumpkaboo4),
	SPECIES_SPRITE(GOURGEIST_2, gMonFrontPic_Gourgeist2),
	SPECIES_SPRITE(GOURGEIST_3, gMonFrontPic_Gourgeist3),
	SPECIES_SPRITE(GOURGEIST_4, gMonFrontPic_Gourgeist4),
	SPECIES_SPRITE(XERNEAS_2, gMonFrontPic_Xerneas2),
	SPECIES_SPRITE(ZYGARDE_2, gMonFrontPic_Zygarde2),
	SPECIES_SPRITE(ZYGARDE_3, gMonFrontPic_Zygarde3),
	SPECIES_SPRITE(ZYGARDE_4, gMonFrontPic_Zygarde4),
	SPECIES_SPRITE(ZYGARDE_5, gMonFrontPic_Zygarde5),
	SPECIES_SPRITE(HOOPA_2, gMonFrontPic_Hoopa2),
	SPECIES_SPRITE(ORICORIO_2, gMonFrontPic_Oricorio2),
	SPECIES_SPRITE(ORICORIO_3, gMonFrontPic_Oricorio3),
	SPECIES_SPRITE(ORICORIO_4, gMonFrontPic_Oricorio4),
	SPECIES_SPRITE(ROCKRUFF_2, gMonFrontPic_Rockruff2),
	SPECIES_SPRITE(LYCANROC_2, gMonFrontPic_Lycanroc2),
	SPECIES_SPRITE(LYCANROC_3, gMonFrontPic_Lycanroc3),
	SPECIES_SPRITE(WISHIWASHI_2, gMonFrontPic_Wishiwashi2),
	SPECIES_SPRITE(SILVALLY_2, gMonFrontPic_Silvally2),
	SPECIES_SPRITE(SILVALLY_3, gMonFrontPic_Silvally3),
	SPECIES_SPRITE(SILVALLY_4, gMonFrontPic_Silvally4),
	SPECIES_SPRITE(SILVALLY_5, gMonFrontPic_Silvally5),
	SPECIES_SPRITE(SILVALLY_6, gMonFrontPic_Silvally6),
	SPECIES_SPRITE(SILVALLY_7, gMonFrontPic_Silvally7),
	SPECIES_SPRITE(SILVALLY_8, gMonFrontPic_Silvally8),
	SPECIES_SPRITE(SILVALLY_9, gMonFrontPic_Silvally9),
	SPECIES_SPRITE(SILVALLY_10, gMonFrontPic_Silvally10),
	SPECIES_SPRITE(SILVALLY_11, gMonFrontPic_Silvally11),
	SPECIES_SPRITE(SILVALLY_12, gMonFrontPic_Silvally12),
	SPECIES_SPRITE(SILVALLY_13, gMonFrontPic_Silvally13),
	SPECIES_SPRITE(SILVALLY_14, gMonFrontPic_Silvally14),
	SPECIES_SPRITE(SILVALLY_15, gMonFrontPic_Silvally15),
	SPECIES_SPRITE(SILVALLY_16, gMonFrontPic_Silvally16),
	SPECIES_SPRITE(SILVALLY_17, gMonFrontPic_Silvally17),
	SPECIES_SPRITE(SILVALLY_18, gMonFrontPic_Silvally18),
	SPECIES_SPRITE(MINIOR_2, gMonFrontPic_Minior2),
	SPECIES_SPRITE(MINIOR_3, gMonFrontPic_Minior3),
	SPECIES_SPRITE(MINIOR_4, gMonFrontPic_Minior4),
	SPECIES_SPRITE(MINIOR_5, gMonFrontPic_Minior5),
	SPECIES_SPRITE(MINIOR_6, gMonFrontPic_Minior6),
	SPECIES_SPRITE(MINIOR_7, gMonFrontPic_Minior7),
	SPECIES_SPRITE(MINIOR_8, gMonFrontPic_Minior8),
	SPECIES_SPRITE(MINIOR_9, gMonFrontPic_Minior9),
	SPECIES_SPRITE(MINIOR_10, gMonFrontPic_Minior10),
	SPECIES_SPRITE(MINIOR_11, gMonFrontPic_Minior11),
	SPECIES_SPRITE(MINIOR_12, gMonFrontPic_Minior12),
	SPECIES_SPRITE(MINIOR_13, gMonFrontPic_Minior13),
	SPECIES_SPRITE(MINIOR_14, gMonFrontPic_Minior14),
	SPECIES_SPRITE(MIMIKYU_2, gMonFrontPic_Mimikyu2),
	SPECIES_SPRITE(NECROZMA_2, gMonFrontPic_Necrozma2),
	SPECIES_SPRITE(NECROZMA_3, gMonFrontPic_Necrozma3),
	SPECIES_SPRITE(NECROZMA_4, gMonFrontPic_Necrozma4),
	SPECIES_SPRITE(MAGEARNA_2, gMonFrontPic_Magearna2),
	SPECIES_SPRITE(CRAMORANT_2, gMonFrontPic_Cramorant2),
	SPECIES_SPRITE(CRAMORANT_3, gMonFrontPic_Cramorant3),
	SPECIES_SPRITE(TOXTRICITY_2, gMonFrontPic_Toxtricity2),
	SPECIES_SPRITE(SINISTEA_2, gMonFrontPic_Sinistea2),
	SPECIES_SPRITE(POLTEAGEIS_2, gMonFrontPic_Polteageis2),
	SPECIES_SPRITE(ALCREMIE_2, gMonFrontPic_Alcremie2),
	SPECIES_SPRITE(ALCREMIE_3, gMonFrontPic_Alcremie3),
	SPECIES_SPRITE(ALCREMIE_4, gMonFrontPic_Alcremie4),
	SPECIES_SPRITE(ALCREMIE_5, gMonFrontPic_Alcremie5),
	SPECIES_SPRITE(ALCREMIE_6, gMonFrontPic_Alcremie6),
	SPECIES_SPRITE(ALCREMIE_7, gMonFrontPic_Alcremie7),
	SPECIES_SPRITE(ALCREMIE_8, gMonFrontPic_Alcremie8),
	SPECIES_SPRITE(ALCREMIE_9, gMonFrontPic_Alcremie9),
	SPECIES_SPRITE(EISCUE_2, gMonFrontPic_Eiscue2),
	SPECIES_SPRITE(INDEEDEE_2, gMonFrontPic_Indeedee2),
	SPECIES_SPRITE(MORPEKO_2, gMonFrontPic_Morpeko2),
	SPECIES_SPRITE(ZACIAN_2, gMonFrontPic_Zacian2),
	SPECIES_SPRITE(ZAMAZENTA_2, gMonFrontPic_Zamazenta2),
	SPECIES_SPRITE(ETERNATUS_2, gMonFrontPic_Eternatus2),
	SPECIES_SPRITE(URSHIFU_2, gMonFrontPic_Urshifu2),
	SPECIES_SPRITE(ZARUDE_2, gMonFrontPic_Zarude2),
	SPECIES_SPRITE(CALYREX_2, gMonFrontPic_Calyrex2),
	SPECIES_SPRITE(CALYREX_3, gMonFrontPic_Calyrex3),
	SPECIES_SPRITE(BSCULEGION_2, gMonFrontPic_Bsculegion2),
	SPECIES_SPRITE(ALCREMIE_10, gMonFrontPic_Alcremie10),
	SPECIES_SPRITE(ALCREMIE_11, gMonFrontPic_Alcremie11),
	SPECIES_SPRITE(ALCREMIE_12, gMonFrontPic_Alcremie12),
	SPECIES_SPRITE(ALCREMIE_13, gMonFrontPic_Alcremie13),
	SPECIES_SPRITE(ALCREMIE_14, gMonFrontPic_Alcremie14),
	SPECIES_SPRITE(ALCREMIE_15, gMonFrontPic_Alcremie15),
	SPECIES_SPRITE(ALCREMIE_16, gMonFrontPic_Alcremie16),
	SPECIES_SPRITE(ALCREMIE_17, gMonFrontPic_Alcremie17),
	SPECIES_SPRITE(ALCREMIE_18, gMonFrontPic_Alcremie18),
	SPECIES_SPRITE(ALCREMIE_19, gMonFrontPic_Alcremie19),
	SPECIES_SPRITE(ALCREMIE_20, gMonFrontPic_Alcremie20),
	SPECIES_SPRITE(ALCREMIE_21, gMonFrontPic_Alcremie21),
	SPECIES_SPRITE(ALCREMIE_22, gMonFrontPic_Alcremie22),
	SPECIES_SPRITE(ALCREMIE_23, gMonFrontPic_Alcremie23),
	SPECIES_SPRITE(ALCREMIE_24, gMonFrontPic_Alcremie24),
	SPECIES_SPRITE(ALCREMIE_25, gMonFrontPic_Alcremie25),
	SPECIES_SPRITE(ALCREMIE_26, gMonFrontPic_Alcremie26),
	SPECIES_SPRITE(ALCREMIE_27, gMonFrontPic_Alcremie27),
	SPECIES_SPRITE(ALCREMIE_28, gMonFrontPic_Alcremie28),
	SPECIES_SPRITE(ALCREMIE_29, gMonFrontPic_Alcremie29),
	SPECIES_SPRITE(ALCREMIE_30, gMonFrontPic_Alcremie30),
	SPECIES_SPRITE(ALCREMIE_31, gMonFrontPic_Alcremie31),
	SPECIES_SPRITE(ALCREMIE_32, gMonFrontPic_Alcremie32),
	SPECIES_SPRITE(ALCREMIE_33, gMonFrontPic_Alcremie33),
	SPECIES_SPRITE(ALCREMIE_34, gMonFrontPic_Alcremie34),
	SPECIES_SPRITE(ALCREMIE_35, gMonFrontPic_Alcremie35),
	SPECIES_SPRITE(ALCREMIE_36, gMonFrontPic_Alcremie36),
	SPECIES_SPRITE(ALCREMIE_37, gMonFrontPic_Alcremie37),
	SPECIES_SPRITE(ALCREMIE_38, gMonFrontPic_Alcremie38),
	SPECIES_SPRITE(ALCREMIE_39, gMonFrontPic_Alcremie39),
	SPECIES_SPRITE(ALCREMIE_40, gMonFrontPic_Alcremie40),
	SPECIES_SPRITE(ALCREMIE_41, gMonFrontPic_Alcremie41),
	SPECIES_SPRITE(ALCREMIE_42, gMonFrontPic_Alcremie42),
	SPECIES_SPRITE(ALCREMIE_43, gMonFrontPic_Alcremie43),
	SPECIES_SPRITE(ALCREMIE_44, gMonFrontPic_Alcremie44),
	SPECIES_SPRITE(ALCREMIE_45, gMonFrontPic_Alcremie45),
	SPECIES_SPRITE(ALCREMIE_46, gMonFrontPic_Alcremie46),
	SPECIES_SPRITE(ALCREMIE_47, gMonFrontPic_Alcremie47),
	SPECIES_SPRITE(ALCREMIE_48, gMonFrontPic_Alcremie48),
	SPECIES_SPRITE(ALCREMIE_49, gMonFrontPic_Alcremie49),
	SPECIES_SPRITE(ALCREMIE_50, gMonFrontPic_Alcremie50),
	SPECIES_SPRITE(ALCREMIE_51, gMonFrontPic_Alcremie51),
	SPECIES_SPRITE(ALCREMIE_52, gMonFrontPic_Alcremie52),
	SPECIES_SPRITE(ALCREMIE_53, gMonFrontPic_Alcremie53),
	SPECIES_SPRITE(ALCREMIE_54, gMonFrontPic_Alcremie54),
	SPECIES_SPRITE(ALCREMIE_55, gMonFrontPic_Alcremie55),
	SPECIES_SPRITE(ALCREMIE_56, gMonFrontPic_Alcremie56),
	SPECIES_SPRITE(ALCREMIE_57, gMonFrontPic_Alcremie57),
	SPECIES_SPRITE(ALCREMIE_58, gMonFrontPic_Alcremie58),
	SPECIES_SPRITE(ALCREMIE_59, gMonFrontPic_Alcremie59),
	SPECIES_SPRITE(ALCREMIE_60, gMonFrontPic_Alcremie60),
	SPECIES_SPRITE(ALCREMIE_61, gMonFrontPic_Alcremie61),
	SPECIES_SPRITE(ALCREMIE_62, gMonFrontPic_Alcremie62),
	SPECIES_SPRITE(ALCREMIE_63, gMonFrontPic_Alcremie63),
	SPECIES_SPRITE(SPRIGATITO, gMonFrontPic_Sprigatito),
	SPECIES_SPRITE(FLORAGATO, gMonFrontPic_Floragato),
	SPECIES_SPRITE(MEOWSCARAD, gMonFrontPic_Meowscarad),
	SPECIES_SPRITE(FUECOCO, gMonFrontPic_Fuecoco),
	SPECIES_SPRITE(CROCALOR, gMonFrontPic_Crocalor),
	SPECIES_SPRITE(SKELEDIRGE, gMonFrontPic_Skeledirge),
	SPECIES_SPRITE(QUAXLY, gMonFrontPic_Quaxly),
	SPECIES_SPRITE(QUAXWELL, gMonFrontPic_Quaxwell),
	SPECIES_SPRITE(QUAQUAVAL, gMonFrontPic_Quaquaval),
	SPECIES_SPRITE(LECHONK, gMonFrontPic_Lechonk),
	SPECIES_SPRITE(OINKOLOGNE, gMonFrontPic_Oinkologne),
	SPECIES_SPRITE(OINKOLOGNE_2, gMonFrontPic_Oinkologne2),
	SPECIES_SPRITE(TAROUNTULA, gMonFrontPic_Tarountula),
	SPECIES_SPRITE(SPIDOPS, gMonFrontPic_Spidops),
	SPECIES_SPRITE(NYMBLE, gMonFrontPic_Nymble),
	SPECIES_SPRITE(LOKIX, gMonFrontPic_Lokix),
	SPECIES_SPRITE(PAWMI, gMonFrontPic_Pawmi),
	SPECIES_SPRITE(PAWMO, gMonFrontPic_Pawmo),
	SPECIES_SPRITE(PAWMOT, gMonFrontPic_Pawmot),
	SPECIES_SPRITE(TANDEMAUS, gMonFrontPic_Tandemaus),
	SPECIES_SPRITE(MAUSHOLD, gMonFrontPic_Maushold),
	SPECIES_SPRITE(MAUSHOLD_2, gMonFrontPic_Maushold2),
	SPECIES_SPRITE(FIDOUGH, gMonFrontPic_Fidough),
	SPECIES_SPRITE(DACHSBUN, gMonFrontPic_Dachsbun),
	SPECIES_SPRITE(SMOLIV, gMonFrontPic_Smoliv),
	SPECIES_SPRITE(DOLLIV, gMonFrontPic_Dolliv),
	SPECIES_SPRITE(ARBOLIVA, gMonFrontPic_Arboliva),
	SPECIES_SPRITE(SQAWKABILY, gMonFrontPic_Sqawkabily),
	SPECIES_SPRITE(SQAWKABILY_2, gMonFrontPic_Sqawkabily2),
	SPECIES_SPRITE(SQAWKABILY_3, gMonFrontPic_Sqawkabily3),
	SPECIES_SPRITE(SQAWKABILY_4, gMonFrontPic_Sqawkabily4),
	SPECIES_SPRITE(NACLI, gMonFrontPic_Nacli),
	SPECIES_SPRITE(NACLSTACK, gMonFrontPic_Naclstack),
	SPECIES_SPRITE(GARGANACL, gMonFrontPic_Garganacl),
	SPECIES_SPRITE(CHARCADET, gMonFrontPic_Charcadet),
	SPECIES_SPRITE(ARMAROUGE, gMonFrontPic_Armarouge),
	SPECIES_SPRITE(CERULEDGE, gMonFrontPic_Ceruledge),
	SPECIES_SPRITE(TADBULB, gMonFrontPic_Tadbulb),
	SPECIES_SPRITE(BELLIBOLT, gMonFrontPic_Bellibolt),
	SPECIES_SPRITE(WATTREL, gMonFrontPic_Wattrel),
	SPECIES_SPRITE(KILOWATREL, gMonFrontPic_Kilowatrel),
	SPECIES_SPRITE(MASCHIFF, gMonFrontPic_Maschiff),
	SPECIES_SPRITE(MABOSSTIFF, gMonFrontPic_Mabosstiff),
	SPECIES_SPRITE(SHROODLE, gMonFrontPic_Shroodle),
	SPECIES_SPRITE(GRAFAIAI, gMonFrontPic_Grafaiai),
	SPECIES_SPRITE(BRAMBLIN, gMonFrontPic_Bramblin),
	SPECIES_SPRITE(BRMBLGHAST, gMonFrontPic_Brmblghast),
	SPECIES_SPRITE(TOEDSCOOL, gMonFrontPic_Toedscool),
	SPECIES_SPRITE(TOEDSCRUEL, gMonFrontPic_Toedscruel),
	SPECIES_SPRITE(KLAWF, gMonFrontPic_Klawf),
	SPECIES_SPRITE(CAPSAKID, gMonFrontPic_Capsakid),
	SPECIES_SPRITE(SCOVILLAIN, gMonFrontPic_Scovillain),
	SPECIES_SPRITE(RELLOR, gMonFrontPic_Rellor),
	SPECIES_SPRITE(RABSCA, gMonFrontPic_Rabsca),
	SPECIES_SPRITE(FLITTLE, gMonFrontPic_Flittle),
	SPECIES_SPRITE(ESPATHRA, gMonFrontPic_Espathra),
	SPECIES_SPRITE(TINKATINK, gMonFrontPic_Tinkatink),
	SPECIES_SPRITE(TINKATUFF, gMonFrontPic_Tinkatuff),
	SPECIES_SPRITE(TINKATON, gMonFrontPic_Tinkaton),
	SPECIES_SPRITE(WIGLETT, gMonFrontPic_Wiglett),
	SPECIES_SPRITE(WUGTRIO, gMonFrontPic_Wugtrio),
	SPECIES_SPRITE(BOMBIRDIER, gMonFrontPic_Bombirdier),
	SPECIES_SPRITE(FINIZEN, gMonFrontPic_Finizen),
	SPECIES_SPRITE(PALAFIN, gMonFrontPic_Palafin),
	SPECIES_SPRITE(PALAFIN_2, gMonFrontPic_Palafin2),
	SPECIES_SPRITE(VAROOM, gMonFrontPic_Varoom),
	SPECIES_SPRITE(REVAVROOM, gMonFrontPic_Revavroom),
	SPECIES_SPRITE(CYCLIZAR, gMonFrontPic_Cyclizar),
	SPECIES_SPRITE(ORTHWORM, gMonFrontPic_Orthworm),
	SPECIES_SPRITE(GLIMMET, gMonFrontPic_Glimmet),
	SPECIES_SPRITE(GLIMMORA, gMonFrontPic_Glimmora),
	SPECIES_SPRITE(GREAVARD, gMonFrontPic_Greavard),
	SPECIES_SPRITE(HOUNDSTONE, gMonFrontPic_Houndstone),
	SPECIES_SPRITE(FLAMIGO, gMonFrontPic_Flamigo),
	SPECIES_SPRITE(CETODDLE, gMonFrontPic_Cetoddle),
	SPECIES_SPRITE(CETITAN, gMonFrontPic_Cetitan),
	SPECIES_SPRITE(VELUZA, gMonFrontPic_Veluza),
	SPECIES_SPRITE(DONDOZO, gMonFrontPic_Dondozo),
	SPECIES_SPRITE(TATSUGIRI, gMonFrontPic_Tatsugiri),
	SPECIES_SPRITE(TATSUGIRI_2, gMonFrontPic_Tatsugiri2),
	SPECIES_SPRITE(TATSUGIRI_3, gMonFrontPic_Tatsugiri3),
	SPECIES_SPRITE(ANNIHILAPE, gMonFrontPic_Annihilape),
	SPECIES_SPRITE(CLODSIRE, gMonFrontPic_Clodsire),
	SPECIES_SPRITE(FARIGIRAF, gMonFrontPic_Farigiraf),
	SPECIES_SPRITE(DUDUNSPRCE, gMonFrontPic_Dudunsprce),
	SPECIES_SPRITE(DUDUNSPRCE_2, gMonFrontPic_Dudunsprce2),
	SPECIES_SPRITE(KINGAMBIT, gMonFrontPic_Kingambit),
	SPECIES_SPRITE(GREATTUSK, gMonFrontPic_GreatTusk),
	SPECIES_SPRITE(SCREAMTAIL, gMonFrontPic_ScreamTail),
	SPECIES_SPRITE(BRUTEBONET, gMonFrontPic_BruteBonet),
	SPECIES_SPRITE(FLUTTRMANE, gMonFrontPic_FluttrMane),
	SPECIES_SPRITE(SLITHRWING, gMonFrontPic_SlithrWing),
	SPECIES_SPRITE(SNDYSHOCKS, gMonFrontPic_SndyShocks),
	SPECIES_SPRITE(IRONTREADS, gMonFrontPic_IronTreads),
	SPECIES_SPRITE(IRONBUNDLE, gMonFrontPic_IronBundle),
	SPECIES_SPRITE(IRONHANDS, gMonFrontPic_IronHands),
	SPECIES_SPRITE(IRONJUGULS, gMonFrontPic_IronJuguls),
	SPECIES_SPRITE(IRONMOTH, gMonFrontPic_IronMoth),
	SPECIES_SPRITE(IRONTHORNS, gMonFrontPic_IronThorns),
	SPECIES_SPRITE(FRIGIBAX, gMonFrontPic_Frigibax),
	SPECIES_SPRITE(ARCTIBAX, gMonFrontPic_Arctibax),
	SPECIES_SPRITE(BAXCALIBUR, gMonFrontPic_Baxcalibur),
	SPECIES_SPRITE(GIMMIGHOUL, gMonFrontPic_Gimmighoul),
	SPECIES_SPRITE(GIMMIGHOUL_2, gMonFrontPic_Gimmighoul2),
	SPECIES_SPRITE(GHOLDENGO, gMonFrontPic_Gholdengo),
	SPECIES_SPRITE(WOCHIEN, gMonFrontPic_WoChien),
	SPECIES_SPRITE(CHIENPAO, gMonFrontPic_ChienPao),
	SPECIES_SPRITE(TINGLU, gMonFrontPic_TingLu),
	SPECIES_SPRITE(CHIYU, gMonFrontPic_ChiYu),
	SPECIES_SPRITE(ROARNGMOON, gMonFrontPic_RoarngMoon),
	SPECIES_SPRITE(IRONVLIANT, gMonFrontPic_IronVliant),
	SPECIES_SPRITE(KORAIDON, gMonFrontPic_Koraidon),
	SPECIES_SPRITE(MIRAIDON, gMonFrontPic_Miraidon),
	SPECIES_SPRITE(TAUROS_2, gMonFrontPic_Tauros2),
	SPECIES_SPRITE(TAUROS_3, gMonFrontPic_Tauros3),
	SPECIES_SPRITE(TAUROS_4, gMonFrontPic_Tauros4),
	SPECIES_SPRITE(WOOPER_2, gMonFrontPic_Wooper2),
	SPECIES_SPRITE(WALKNGWAKE, gMonFrontPic_WalkngWake),
	SPECIES_SPRITE(IRONLEAVES, gMonFrontPic_IronLeaves),
	SPECIES_SPRITE(DIPPLIN, gMonFrontPic_Dipplin),
	SPECIES_SPRITE(PTCHAGEIST, gMonFrontPic_Ptchageist),
	SPECIES_SPRITE(PTCHAGEIST_2, gMonFrontPic_Ptchageist2),
	SPECIES_SPRITE(SINISTCHA, gMonFrontPic_Sinistcha),
	SPECIES_SPRITE(SINISTCHA_2, gMonFrontPic_Sinistcha2),
	SPECIES_SPRITE(OKIDOGI, gMonFrontPic_Okidogi),
	SPECIES_SPRITE(MUNKIDORI, gMonFrontPic_Munkidori),
	SPECIES_SPRITE(FEZNDIPITI, gMonFrontPic_Fezndipiti),
	SPECIES_SPRITE(OGERPON, gMonFrontPic_Ogerpon),
	SPECIES_SPRITE(OGERPON_2, gMonFrontPic_Ogerpon2),
	SPECIES_SPRITE(OGERPON_3, gMonFrontPic_Ogerpon3),
	SPECIES_SPRITE(OGERPON_4, gMonFrontPic_Ogerpon4),
	SPECIES_SPRITE(OGERPON_5, gMonFrontPic_Ogerpon5),
	SPECIES_SPRITE(OGERPON_6, gMonFrontPic_Ogerpon6),
	SPECIES_SPRITE(OGERPON_7, gMonFrontPic_Ogerpon7),
	SPECIES_SPRITE(OGERPON_8, gMonFrontPic_Ogerpon8),
	SPECIES_SPRITE(URSALUNA_2, gMonFrontPic_Ursaluna2),
	SPECIES_SPRITE(ARCHALUDON, gMonFrontPic_Archaludon),
	SPECIES_SPRITE(HYDRAPPLE, gMonFrontPic_Hydrapple),
	SPECIES_SPRITE(GOUGINFIRE, gMonFrontPic_GouginFire),
	SPECIES_SPRITE(RAGINGBOLT, gMonFrontPic_RagingBolt),
	SPECIES_SPRITE(IRONBOULDR, gMonFrontPic_IronBouldr),
	SPECIES_SPRITE(IRONCROWN, gMonFrontPic_IronCrown),
	SPECIES_SPRITE(TERAPAGOS, gMonFrontPic_Terapagos),
	SPECIES_SPRITE(TERAPAGOS_2, gMonFrontPic_Terapagos2),
	SPECIES_SPRITE(TERAPAGOS_3, gMonFrontPic_Terapagos3),
	SPECIES_SPRITE(PECHARUNT, gMonFrontPic_Pecharunt),
	SPECIES_SPRITE(MOTHIM_2, gMonFrontPic_Mothim2),
	SPECIES_SPRITE(MOTHIM_3, gMonFrontPic_Mothim3),
	SPECIES_SPRITE(SCATTERBUG_2, gMonFrontPic_Scatterbug2),
	SPECIES_SPRITE(SCATTERBUG_3, gMonFrontPic_Scatterbug3),
	SPECIES_SPRITE(SCATTERBUG_4, gMonFrontPic_Scatterbug4),
	SPECIES_SPRITE(SCATTERBUG_5, gMonFrontPic_Scatterbug5),
	SPECIES_SPRITE(SCATTERBUG_6, gMonFrontPic_Scatterbug6),
	SPECIES_SPRITE(SCATTERBUG_7, gMonFrontPic_Scatterbug7),
	SPECIES_SPRITE(SCATTERBUG_8, gMonFrontPic_Scatterbug8),
	SPECIES_SPRITE(SCATTERBUG_9, gMonFrontPic_Scatterbug9),
	SPECIES_SPRITE(SCATTERBUG_10, gMonFrontPic_Scatterbug10),
	SPECIES_SPRITE(SCATTERBUG_11, gMonFrontPic_Scatterbug11),
	SPECIES_SPRITE(SCATTERBUG_12, gMonFrontPic_Scatterbug12),
	SPECIES_SPRITE(SCATTERBUG_13, gMonFrontPic_Scatterbug13),
	SPECIES_SPRITE(SCATTERBUG_14, gMonFrontPic_Scatterbug14),
	SPECIES_SPRITE(SCATTERBUG_15, gMonFrontPic_Scatterbug15),
	SPECIES_SPRITE(SCATTERBUG_16, gMonFrontPic_Scatterbug16),
	SPECIES_SPRITE(SCATTERBUG_17, gMonFrontPic_Scatterbug17),
	SPECIES_SPRITE(SCATTERBUG_18, gMonFrontPic_Scatterbug18),
	SPECIES_SPRITE(SCATTERBUG_19, gMonFrontPic_Scatterbug19),
	SPECIES_SPRITE(SCATTERBUG_20, gMonFrontPic_Scatterbug20),
	SPECIES_SPRITE(SPEWPA_2, gMonFrontPic_Spewpa2),
	SPECIES_SPRITE(SPEWPA_3, gMonFrontPic_Spewpa3),
	SPECIES_SPRITE(SPEWPA_4, gMonFrontPic_Spewpa4),
	SPECIES_SPRITE(SPEWPA_5, gMonFrontPic_Spewpa5),
	SPECIES_SPRITE(SPEWPA_6, gMonFrontPic_Spewpa6),
	SPECIES_SPRITE(SPEWPA_7, gMonFrontPic_Spewpa7),
	SPECIES_SPRITE(SPEWPA_8, gMonFrontPic_Spewpa8),
	SPECIES_SPRITE(SPEWPA_9, gMonFrontPic_Spewpa9),
	SPECIES_SPRITE(SPEWPA_10, gMonFrontPic_Spewpa10),
	SPECIES_SPRITE(SPEWPA_11, gMonFrontPic_Spewpa11),
	SPECIES_SPRITE(SPEWPA_12, gMonFrontPic_Spewpa12),
	SPECIES_SPRITE(SPEWPA_13, gMonFrontPic_Spewpa13),
	SPECIES_SPRITE(SPEWPA_14, gMonFrontPic_Spewpa14),
	SPECIES_SPRITE(SPEWPA_15, gMonFrontPic_Spewpa15),
	SPECIES_SPRITE(SPEWPA_16, gMonFrontPic_Spewpa16),
	SPECIES_SPRITE(SPEWPA_17, gMonFrontPic_Spewpa17),
	SPECIES_SPRITE(SPEWPA_18, gMonFrontPic_Spewpa18),
	SPECIES_SPRITE(SPEWPA_19, gMonFrontPic_Spewpa19),
	SPECIES_SPRITE(SPEWPA_20, gMonFrontPic_Spewpa20),
	SPECIES_SPRITE(RATICATE_3, gMonFrontPic_Raticate3),
	SPECIES_SPRITE(GUMSHOOS_2, gMonFrontPic_Gumshoos2),
	SPECIES_SPRITE(VIKAVOLT_2, gMonFrontPic_Vikavolt2),
	SPECIES_SPRITE(LURANTIS_2, gMonFrontPic_Lurantis2),
	SPECIES_SPRITE(SALAZZLE_2, gMonFrontPic_Salazzle2),
	SPECIES_SPRITE(MIMIKYU_3, gMonFrontPic_Mimikyu3),
	SPECIES_SPRITE(KOMMOO_2, gMonFrontPic_Kommoo2),
	SPECIES_SPRITE(MAROWAK_3, gMonFrontPic_Marowak3),
	SPECIES_SPRITE(RIBOMBEE_2, gMonFrontPic_Ribombee2),
	SPECIES_SPRITE(ARAQUANID_2, gMonFrontPic_Araquanid2),
	SPECIES_SPRITE(TOGEDEMARU_2, gMonFrontPic_Togedemaru2),
	SPECIES_SPRITE(PIKACHU_16, gMonFrontPic_Pikachu16),
	SPECIES_SPRITE(EEVEE_2, gMonFrontPic_Eevee2),
	SPECIES_SPRITE(VENUSAUR_3, gMonFrontPic_Venusaur3),
	SPECIES_SPRITE(BLASTOISE_3, gMonFrontPic_Blastoise3),
	SPECIES_SPRITE(CHARIZARD_4, gMonFrontPic_Charizard4),
	SPECIES_SPRITE(BUTTERFREE_2, gMonFrontPic_Butterfree2),
	SPECIES_SPRITE(PIKACHU_17, gMonFrontPic_Pikachu17),
	SPECIES_SPRITE(MEOWTH_4, gMonFrontPic_Meowth4),
	SPECIES_SPRITE(MACHAMP_2, gMonFrontPic_Machamp2),
	SPECIES_SPRITE(GENGAR_3, gMonFrontPic_Gengar3),
	SPECIES_SPRITE(KINGLER_2, gMonFrontPic_Kingler2),
	SPECIES_SPRITE(LAPRAS_2, gMonFrontPic_Lapras2),
	SPECIES_SPRITE(EEVEE_3, gMonFrontPic_Eevee3),
	SPECIES_SPRITE(SNORLAX_2, gMonFrontPic_Snorlax2),
	SPECIES_SPRITE(GARBODOR_2, gMonFrontPic_Garbodor2),
	SPECIES_SPRITE(MELMETAL_2, gMonFrontPic_Melmetal2),
	SPECIES_SPRITE(RILLABOOM_2, gMonFrontPic_Rillaboom2),
	SPECIES_SPRITE(CINDERACE_2, gMonFrontPic_Cinderace2),
	SPECIES_SPRITE(INTELEON_2, gMonFrontPic_Inteleon2),
	SPECIES_SPRITE(CORVIKNIGH_2, gMonFrontPic_Corviknigh2),
	SPECIES_SPRITE(ORBEETLE_2, gMonFrontPic_Orbeetle2),
	SPECIES_SPRITE(DREDNAW_2, gMonFrontPic_Drednaw2),
	SPECIES_SPRITE(COALOSSAL_2, gMonFrontPic_Coalossal2),
	SPECIES_SPRITE(FLAPPLE_2, gMonFrontPic_Flapple2),
	SPECIES_SPRITE(APPLETUN_2, gMonFrontPic_Appletun2),
	SPECIES_SPRITE(SANDACONDA_2, gMonFrontPic_Sandaconda2),
	SPECIES_SPRITE(TOXTRICITY_3, gMonFrontPic_Toxtricity3),
	SPECIES_SPRITE(TOXTRICITY_4, gMonFrontPic_Toxtricity4),
	SPECIES_SPRITE(CENTISKORC_2, gMonFrontPic_Centiskorc2),
	SPECIES_SPRITE(HATTERENE_2, gMonFrontPic_Hatterene2),
	SPECIES_SPRITE(GRIMMSNARL_2, gMonFrontPic_Grimmsnarl2),
	SPECIES_SPRITE(ALCREMIE_64, gMonFrontPic_Alcremie64),
	SPECIES_SPRITE(COPPERAJAH_2, gMonFrontPic_Copperajah2),
	SPECIES_SPRITE(DURALUDON_2, gMonFrontPic_Duraludon2),
	SPECIES_SPRITE(URSHIFU_3, gMonFrontPic_Urshifu3),
	SPECIES_SPRITE(URSHIFU_4, gMonFrontPic_Urshifu4),
	SPECIES_SPRITE(MIMIKYU_4, gMonFrontPic_Mimikyu4),
};