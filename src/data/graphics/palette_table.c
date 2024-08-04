#include "../../../include/global.h"
#include "../../../include/gflib.h"
#include "../../../include/mail_data.h"
#include "../../../include/pokemon_icon.h"
#include "../../../include/graphics.h"
#include "../../../include/constants/species.h"
#include "../../../include/gba/types.h"

#define SPECIES_PAL(species, pal) [SPECIES_##species] = {pal, SPECIES_##species}

extern const u32 gMonPalette_CircledQuestionMark[];
extern const u32 gMonPalette_Bulbasaur[];
extern const u32 gMonPalette_Ivysaur[];
extern const u32 gMonPalette_Venusaur[];
extern const u32 gMonPalette_Charmander[];
extern const u32 gMonPalette_Charmeleon[];
extern const u32 gMonPalette_Charizard[];
extern const u32 gMonPalette_Squirtle[];
extern const u32 gMonPalette_Wartortle[];
extern const u32 gMonPalette_Blastoise[];
extern const u32 gMonPalette_Caterpie[];
extern const u32 gMonPalette_Metapod[];
extern const u32 gMonPalette_Butterfree[];
extern const u32 gMonPalette_Weedle[];
extern const u32 gMonPalette_Kakuna[];
extern const u32 gMonPalette_Beedrill[];
extern const u32 gMonPalette_Pidgey[];
extern const u32 gMonPalette_Pidgeotto[];
extern const u32 gMonPalette_Pidgeot[];
extern const u32 gMonPalette_Rattata[];
extern const u32 gMonPalette_Raticate[];
extern const u32 gMonPalette_Spearow[];
extern const u32 gMonPalette_Fearow[];
extern const u32 gMonPalette_Ekans[];
extern const u32 gMonPalette_Arbok[];
extern const u32 gMonPalette_Pikachu[];
extern const u32 gMonPalette_Raichu[];
extern const u32 gMonPalette_Sandshrew[];
extern const u32 gMonPalette_Sandslash[];
extern const u32 gMonPalette_Nidoransf[];
extern const u32 gMonPalette_Nidorina[];
extern const u32 gMonPalette_Nidoqueen[];
extern const u32 gMonPalette_Nidoransm[];
extern const u32 gMonPalette_Nidorino[];
extern const u32 gMonPalette_Nidoking[];
extern const u32 gMonPalette_Clefairy[];
extern const u32 gMonPalette_Clefable[];
extern const u32 gMonPalette_Vulpix[];
extern const u32 gMonPalette_Ninetales[];
extern const u32 gMonPalette_Jigglypuff[];
extern const u32 gMonPalette_Wigglytuff[];
extern const u32 gMonPalette_Zubat[];
extern const u32 gMonPalette_Golbat[];
extern const u32 gMonPalette_Oddish[];
extern const u32 gMonPalette_Gloom[];
extern const u32 gMonPalette_Vileplume[];
extern const u32 gMonPalette_Paras[];
extern const u32 gMonPalette_Parasect[];
extern const u32 gMonPalette_Venonat[];
extern const u32 gMonPalette_Venomoth[];
extern const u32 gMonPalette_Diglett[];
extern const u32 gMonPalette_Dugtrio[];
extern const u32 gMonPalette_Meowth[];
extern const u32 gMonPalette_Persian[];
extern const u32 gMonPalette_Psyduck[];
extern const u32 gMonPalette_Golduck[];
extern const u32 gMonPalette_Mankey[];
extern const u32 gMonPalette_Primeape[];
extern const u32 gMonPalette_Growlithe[];
extern const u32 gMonPalette_Arcanine[];
extern const u32 gMonPalette_Poliwag[];
extern const u32 gMonPalette_Poliwhirl[];
extern const u32 gMonPalette_Poliwrath[];
extern const u32 gMonPalette_Abra[];
extern const u32 gMonPalette_Kadabra[];
extern const u32 gMonPalette_Alakazam[];
extern const u32 gMonPalette_Machop[];
extern const u32 gMonPalette_Machoke[];
extern const u32 gMonPalette_Machamp[];
extern const u32 gMonPalette_Bellsprout[];
extern const u32 gMonPalette_Weepinbell[];
extern const u32 gMonPalette_Victreebel[];
extern const u32 gMonPalette_Tentacool[];
extern const u32 gMonPalette_Tentacruel[];
extern const u32 gMonPalette_Geodude[];
extern const u32 gMonPalette_Graveler[];
extern const u32 gMonPalette_Golem[];
extern const u32 gMonPalette_Ponyta[];
extern const u32 gMonPalette_Rapidash[];
extern const u32 gMonPalette_Slowpoke[];
extern const u32 gMonPalette_Slowbro[];
extern const u32 gMonPalette_Magnemite[];
extern const u32 gMonPalette_Magneton[];
extern const u32 gMonPalette_Farfetchd[];
extern const u32 gMonPalette_Doduo[];
extern const u32 gMonPalette_Dodrio[];
extern const u32 gMonPalette_Seel[];
extern const u32 gMonPalette_Dewgong[];
extern const u32 gMonPalette_Grimer[];
extern const u32 gMonPalette_Muk[];
extern const u32 gMonPalette_Shellder[];
extern const u32 gMonPalette_Cloyster[];
extern const u32 gMonPalette_Gastly[];
extern const u32 gMonPalette_Haunter[];
extern const u32 gMonPalette_Gengar[];
extern const u32 gMonPalette_Onix[];
extern const u32 gMonPalette_Drowzee[];
extern const u32 gMonPalette_Hypno[];
extern const u32 gMonPalette_Krabby[];
extern const u32 gMonPalette_Kingler[];
extern const u32 gMonPalette_Voltorb[];
extern const u32 gMonPalette_Electrode[];
extern const u32 gMonPalette_Exeggcute[];
extern const u32 gMonPalette_Exeggutor[];
extern const u32 gMonPalette_Cubone[];
extern const u32 gMonPalette_Marowak[];
extern const u32 gMonPalette_Hitmonlee[];
extern const u32 gMonPalette_Hitmonchan[];
extern const u32 gMonPalette_Lickitung[];
extern const u32 gMonPalette_Koffing[];
extern const u32 gMonPalette_Weezing[];
extern const u32 gMonPalette_Rhyhorn[];
extern const u32 gMonPalette_Rhydon[];
extern const u32 gMonPalette_Chansey[];
extern const u32 gMonPalette_Tangela[];
extern const u32 gMonPalette_Kangaskhan[];
extern const u32 gMonPalette_Horsea[];
extern const u32 gMonPalette_Seadra[];
extern const u32 gMonPalette_Goldeen[];
extern const u32 gMonPalette_Seaking[];
extern const u32 gMonPalette_Staryu[];
extern const u32 gMonPalette_Starmie[];
extern const u32 gMonPalette_MrMime[];
extern const u32 gMonPalette_Scyther[];
extern const u32 gMonPalette_Jynx[];
extern const u32 gMonPalette_Electabuzz[];
extern const u32 gMonPalette_Magmar[];
extern const u32 gMonPalette_Pinsir[];
extern const u32 gMonPalette_Tauros[];
extern const u32 gMonPalette_Magikarp[];
extern const u32 gMonPalette_Gyarados[];
extern const u32 gMonPalette_Lapras[];
extern const u32 gMonPalette_Ditto[];
extern const u32 gMonPalette_Eevee[];
extern const u32 gMonPalette_Vaporeon[];
extern const u32 gMonPalette_Jolteon[];
extern const u32 gMonPalette_Flareon[];
extern const u32 gMonPalette_Porygon[];
extern const u32 gMonPalette_Omanyte[];
extern const u32 gMonPalette_Omastar[];
extern const u32 gMonPalette_Kabuto[];
extern const u32 gMonPalette_Kabutops[];
extern const u32 gMonPalette_Aerodactyl[];
extern const u32 gMonPalette_Snorlax[];
extern const u32 gMonPalette_Articuno[];
extern const u32 gMonPalette_Zapdos[];
extern const u32 gMonPalette_Moltres[];
extern const u32 gMonPalette_Dratini[];
extern const u32 gMonPalette_Dragonair[];
extern const u32 gMonPalette_Dragonite[];
extern const u32 gMonPalette_Mewtwo[];
extern const u32 gMonPalette_Mew[];
extern const u32 gMonPalette_Chikorita[];
extern const u32 gMonPalette_Bayleef[];
extern const u32 gMonPalette_Meganium[];
extern const u32 gMonPalette_Cyndaquil[];
extern const u32 gMonPalette_Quilava[];
extern const u32 gMonPalette_Typhlosion[];
extern const u32 gMonPalette_Totodile[];
extern const u32 gMonPalette_Croconaw[];
extern const u32 gMonPalette_Feraligatr[];
extern const u32 gMonPalette_Sentret[];
extern const u32 gMonPalette_Furret[];
extern const u32 gMonPalette_Hoothoot[];
extern const u32 gMonPalette_Noctowl[];
extern const u32 gMonPalette_Ledyba[];
extern const u32 gMonPalette_Ledian[];
extern const u32 gMonPalette_Spinarak[];
extern const u32 gMonPalette_Ariados[];
extern const u32 gMonPalette_Crobat[];
extern const u32 gMonPalette_Chinchou[];
extern const u32 gMonPalette_Lanturn[];
extern const u32 gMonPalette_Pichu[];
extern const u32 gMonPalette_Cleffa[];
extern const u32 gMonPalette_Igglybuff[];
extern const u32 gMonPalette_Togepi[];
extern const u32 gMonPalette_Togetic[];
extern const u32 gMonPalette_Natu[];
extern const u32 gMonPalette_Xatu[];
extern const u32 gMonPalette_Mareep[];
extern const u32 gMonPalette_Flaaffy[];
extern const u32 gMonPalette_Ampharos[];
extern const u32 gMonPalette_Bellossom[];
extern const u32 gMonPalette_Marill[];
extern const u32 gMonPalette_Azumarill[];
extern const u32 gMonPalette_Sudowoodo[];
extern const u32 gMonPalette_Politoed[];
extern const u32 gMonPalette_Hoppip[];
extern const u32 gMonPalette_Skiploom[];
extern const u32 gMonPalette_Jumpluff[];
extern const u32 gMonPalette_Aipom[];
extern const u32 gMonPalette_Sunkern[];
extern const u32 gMonPalette_Sunflora[];
extern const u32 gMonPalette_Yanma[];
extern const u32 gMonPalette_Wooper[];
extern const u32 gMonPalette_Quagsire[];
extern const u32 gMonPalette_Espeon[];
extern const u32 gMonPalette_Umbreon[];
extern const u32 gMonPalette_Murkrow[];
extern const u32 gMonPalette_Slowking[];
extern const u32 gMonPalette_Misdreavus[];
extern const u32 gMonPalette_Unown[];
extern const u32 gMonPalette_Wobbuffet[];
extern const u32 gMonPalette_Girafarig[];
extern const u32 gMonPalette_Pineco[];
extern const u32 gMonPalette_Forretress[];
extern const u32 gMonPalette_Dunsparce[];
extern const u32 gMonPalette_Gligar[];
extern const u32 gMonPalette_Steelix[];
extern const u32 gMonPalette_Snubbull[];
extern const u32 gMonPalette_Granbull[];
extern const u32 gMonPalette_Qwilfish[];
extern const u32 gMonPalette_Scizor[];
extern const u32 gMonPalette_Shuckle[];
extern const u32 gMonPalette_Heracross[];
extern const u32 gMonPalette_Sneasel[];
extern const u32 gMonPalette_Teddiursa[];
extern const u32 gMonPalette_Ursaring[];
extern const u32 gMonPalette_Slugma[];
extern const u32 gMonPalette_Magcargo[];
extern const u32 gMonPalette_Swinub[];
extern const u32 gMonPalette_Piloswine[];
extern const u32 gMonPalette_Corsola[];
extern const u32 gMonPalette_Remoraid[];
extern const u32 gMonPalette_Octillery[];
extern const u32 gMonPalette_Delibird[];
extern const u32 gMonPalette_Mantine[];
extern const u32 gMonPalette_Skarmory[];
extern const u32 gMonPalette_Houndour[];
extern const u32 gMonPalette_Houndoom[];
extern const u32 gMonPalette_Kingdra[];
extern const u32 gMonPalette_Phanpy[];
extern const u32 gMonPalette_Donphan[];
extern const u32 gMonPalette_Porygon2[];
extern const u32 gMonPalette_Stantler[];
extern const u32 gMonPalette_Smeargle[];
extern const u32 gMonPalette_Tyrogue[];
extern const u32 gMonPalette_Hitmontop[];
extern const u32 gMonPalette_Smoochum[];
extern const u32 gMonPalette_Elekid[];
extern const u32 gMonPalette_Magby[];
extern const u32 gMonPalette_Miltank[];
extern const u32 gMonPalette_Blissey[];
extern const u32 gMonPalette_Raikou[];
extern const u32 gMonPalette_Entei[];
extern const u32 gMonPalette_Suicune[];
extern const u32 gMonPalette_Larvitar[];
extern const u32 gMonPalette_Pupitar[];
extern const u32 gMonPalette_Tyranitar[];
extern const u32 gMonPalette_Lugia[];
extern const u32 gMonPalette_HoOh[];
extern const u32 gMonPalette_Celebi[];
extern const u32 gMonPalette_Treecko[];
extern const u32 gMonPalette_Grovyle[];
extern const u32 gMonPalette_Sceptile[];
extern const u32 gMonPalette_Torchic[];
extern const u32 gMonPalette_Combusken[];
extern const u32 gMonPalette_Blaziken[];
extern const u32 gMonPalette_Mudkip[];
extern const u32 gMonPalette_Marshtomp[];
extern const u32 gMonPalette_Swampert[];
extern const u32 gMonPalette_Poochyena[];
extern const u32 gMonPalette_Mightyena[];
extern const u32 gMonPalette_Zigzagoon[];
extern const u32 gMonPalette_Linoone[];
extern const u32 gMonPalette_Wurmple[];
extern const u32 gMonPalette_Silcoon[];
extern const u32 gMonPalette_Beautifly[];
extern const u32 gMonPalette_Cascoon[];
extern const u32 gMonPalette_Dustox[];
extern const u32 gMonPalette_Lotad[];
extern const u32 gMonPalette_Lombre[];
extern const u32 gMonPalette_Ludicolo[];
extern const u32 gMonPalette_Seedot[];
extern const u32 gMonPalette_Nuzleaf[];
extern const u32 gMonPalette_Shiftry[];
extern const u32 gMonPalette_Taillow[];
extern const u32 gMonPalette_Swellow[];
extern const u32 gMonPalette_Wingull[];
extern const u32 gMonPalette_Pelipper[];
extern const u32 gMonPalette_Ralts[];
extern const u32 gMonPalette_Kirlia[];
extern const u32 gMonPalette_Gardevoir[];
extern const u32 gMonPalette_Surskit[];
extern const u32 gMonPalette_Masquerain[];
extern const u32 gMonPalette_Shroomish[];
extern const u32 gMonPalette_Breloom[];
extern const u32 gMonPalette_Slakoth[];
extern const u32 gMonPalette_Vigoroth[];
extern const u32 gMonPalette_Slaking[];
extern const u32 gMonPalette_Nincada[];
extern const u32 gMonPalette_Ninjask[];
extern const u32 gMonPalette_Shedinja[];
extern const u32 gMonPalette_Whismur[];
extern const u32 gMonPalette_Loudred[];
extern const u32 gMonPalette_Exploud[];
extern const u32 gMonPalette_Makuhita[];
extern const u32 gMonPalette_Hariyama[];
extern const u32 gMonPalette_Azurill[];
extern const u32 gMonPalette_Nosepass[];
extern const u32 gMonPalette_Skitty[];
extern const u32 gMonPalette_Delcatty[];
extern const u32 gMonPalette_Sableye[];
extern const u32 gMonPalette_Mawile[];
extern const u32 gMonPalette_Aron[];
extern const u32 gMonPalette_Lairon[];
extern const u32 gMonPalette_Aggron[];
extern const u32 gMonPalette_Meditite[];
extern const u32 gMonPalette_Medicham[];
extern const u32 gMonPalette_Electrike[];
extern const u32 gMonPalette_Manectric[];
extern const u32 gMonPalette_Plusle[];
extern const u32 gMonPalette_Minun[];
extern const u32 gMonPalette_Volbeat[];
extern const u32 gMonPalette_Illumise[];
extern const u32 gMonPalette_Roselia[];
extern const u32 gMonPalette_Gulpin[];
extern const u32 gMonPalette_Swalot[];
extern const u32 gMonPalette_Carvanha[];
extern const u32 gMonPalette_Sharpedo[];
extern const u32 gMonPalette_Wailmer[];
extern const u32 gMonPalette_Wailord[];
extern const u32 gMonPalette_Numel[];
extern const u32 gMonPalette_Camerupt[];
extern const u32 gMonPalette_Torkoal[];
extern const u32 gMonPalette_Spoink[];
extern const u32 gMonPalette_Grumpig[];
extern const u32 gMonPalette_Spinda[];
extern const u32 gMonPalette_Trapinch[];
extern const u32 gMonPalette_Vibrava[];
extern const u32 gMonPalette_Flygon[];
extern const u32 gMonPalette_Cacnea[];
extern const u32 gMonPalette_Cacturne[];
extern const u32 gMonPalette_Swablu[];
extern const u32 gMonPalette_Altaria[];
extern const u32 gMonPalette_Zangoose[];
extern const u32 gMonPalette_Seviper[];
extern const u32 gMonPalette_Lunatone[];
extern const u32 gMonPalette_Solrock[];
extern const u32 gMonPalette_Barboach[];
extern const u32 gMonPalette_Whiscash[];
extern const u32 gMonPalette_Corphish[];
extern const u32 gMonPalette_Crawdaunt[];
extern const u32 gMonPalette_Baltoy[];
extern const u32 gMonPalette_Claydol[];
extern const u32 gMonPalette_Lileep[];
extern const u32 gMonPalette_Cradily[];
extern const u32 gMonPalette_Anorith[];
extern const u32 gMonPalette_Armaldo[];
extern const u32 gMonPalette_Feebas[];
extern const u32 gMonPalette_Milotic[];
extern const u32 gMonPalette_Castform[];
extern const u32 gMonPalette_Kecleon[];
extern const u32 gMonPalette_Shuppet[];
extern const u32 gMonPalette_Banette[];
extern const u32 gMonPalette_Duskull[];
extern const u32 gMonPalette_Dusclops[];
extern const u32 gMonPalette_Tropius[];
extern const u32 gMonPalette_Chimecho[];
extern const u32 gMonPalette_Absol[];
extern const u32 gMonPalette_Wynaut[];
extern const u32 gMonPalette_Snorunt[];
extern const u32 gMonPalette_Glalie[];
extern const u32 gMonPalette_Spheal[];
extern const u32 gMonPalette_Sealeo[];
extern const u32 gMonPalette_Walrein[];
extern const u32 gMonPalette_Clamperl[];
extern const u32 gMonPalette_Huntail[];
extern const u32 gMonPalette_Gorebyss[];
extern const u32 gMonPalette_Relicanth[];
extern const u32 gMonPalette_Luvdisc[];
extern const u32 gMonPalette_Bagon[];
extern const u32 gMonPalette_Shelgon[];
extern const u32 gMonPalette_Salamence[];
extern const u32 gMonPalette_Beldum[];
extern const u32 gMonPalette_Metang[];
extern const u32 gMonPalette_Metagross[];
extern const u32 gMonPalette_Regirock[];
extern const u32 gMonPalette_Regice[];
extern const u32 gMonPalette_Registeel[];
extern const u32 gMonPalette_Latias[];
extern const u32 gMonPalette_Latios[];
extern const u32 gMonPalette_Kyogre[];
extern const u32 gMonPalette_Groudon[];
extern const u32 gMonPalette_Rayquaza[];
extern const u32 gMonPalette_Jirachi[];
extern const u32 gMonPalette_Deoxys[];
extern const u32 gMonPalette_Turtwig[];
extern const u32 gMonPalette_Grotle[];
extern const u32 gMonPalette_Torterra[];
extern const u32 gMonPalette_Chimchar[];
extern const u32 gMonPalette_Monferno[];
extern const u32 gMonPalette_Infernape[];
extern const u32 gMonPalette_Piplup[];
extern const u32 gMonPalette_Prinplup[];
extern const u32 gMonPalette_Empoleon[];
extern const u32 gMonPalette_Starly[];
extern const u32 gMonPalette_Staravia[];
extern const u32 gMonPalette_Staraptor[];
extern const u32 gMonPalette_Bidoof[];
extern const u32 gMonPalette_Bibarel[];
extern const u32 gMonPalette_Kricketot[];
extern const u32 gMonPalette_Kricketune[];
extern const u32 gMonPalette_Shinx[];
extern const u32 gMonPalette_Luxio[];
extern const u32 gMonPalette_Luxray[];
extern const u32 gMonPalette_Budew[];
extern const u32 gMonPalette_Roserade[];
extern const u32 gMonPalette_Cranidos[];
extern const u32 gMonPalette_Rampardos[];
extern const u32 gMonPalette_Shieldon[];
extern const u32 gMonPalette_Bastiodon[];
extern const u32 gMonPalette_Burmy[];
extern const u32 gMonPalette_Wormadam[];
extern const u32 gMonPalette_Mothim[];
extern const u32 gMonPalette_Combee[];
extern const u32 gMonPalette_Vespiquen[];
extern const u32 gMonPalette_Pachirisu[];
extern const u32 gMonPalette_Buizel[];
extern const u32 gMonPalette_Floatzel[];
extern const u32 gMonPalette_Cherubi[];
extern const u32 gMonPalette_Cherrim[];
extern const u32 gMonPalette_Shellos[];
extern const u32 gMonPalette_Gastrodon[];
extern const u32 gMonPalette_Ambipom[];
extern const u32 gMonPalette_Drifloon[];
extern const u32 gMonPalette_Drifblim[];
extern const u32 gMonPalette_Buneary[];
extern const u32 gMonPalette_Lopunny[];
extern const u32 gMonPalette_Mismagius[];
extern const u32 gMonPalette_Honchkrow[];
extern const u32 gMonPalette_Glameow[];
extern const u32 gMonPalette_Purugly[];
extern const u32 gMonPalette_Chingling[];
extern const u32 gMonPalette_Stunky[];
extern const u32 gMonPalette_Skuntank[];
extern const u32 gMonPalette_Bronzor[];
extern const u32 gMonPalette_Bronzong[];
extern const u32 gMonPalette_Bonsly[];
extern const u32 gMonPalette_MimeJr[];
extern const u32 gMonPalette_Happiny[];
extern const u32 gMonPalette_Chatot[];
extern const u32 gMonPalette_Spiritomb[];
extern const u32 gMonPalette_Gible[];
extern const u32 gMonPalette_Gabite[];
extern const u32 gMonPalette_Garchomp[];
extern const u32 gMonPalette_Munchlax[];
extern const u32 gMonPalette_Riolu[];
extern const u32 gMonPalette_Lucario[];
extern const u32 gMonPalette_Hippopotas[];
extern const u32 gMonPalette_Hippowdon[];
extern const u32 gMonPalette_Skorupi[];
extern const u32 gMonPalette_Drapion[];
extern const u32 gMonPalette_Croagunk[];
extern const u32 gMonPalette_Toxicroak[];
extern const u32 gMonPalette_Carnivine[];
extern const u32 gMonPalette_Finneon[];
extern const u32 gMonPalette_Lumineon[];
extern const u32 gMonPalette_Mantyke[];
extern const u32 gMonPalette_Snover[];
extern const u32 gMonPalette_Abomasnow[];
extern const u32 gMonPalette_Weavile[];
extern const u32 gMonPalette_Magnezone[];
extern const u32 gMonPalette_Lickilicky[];
extern const u32 gMonPalette_Rhyperior[];
extern const u32 gMonPalette_Tangrowth[];
extern const u32 gMonPalette_Electivire[];
extern const u32 gMonPalette_Magmortar[];
extern const u32 gMonPalette_Togekiss[];
extern const u32 gMonPalette_Yanmega[];
extern const u32 gMonPalette_Leafeon[];
extern const u32 gMonPalette_Glaceon[];
extern const u32 gMonPalette_Gliscor[];
extern const u32 gMonPalette_Mamoswine[];
extern const u32 gMonPalette_PorygonZ[];
extern const u32 gMonPalette_Gallade[];
extern const u32 gMonPalette_Probopass[];
extern const u32 gMonPalette_Dusknoir[];
extern const u32 gMonPalette_Froslass[];
extern const u32 gMonPalette_Rotom[];
extern const u32 gMonPalette_Uxie[];
extern const u32 gMonPalette_Mesprit[];
extern const u32 gMonPalette_Azelf[];
extern const u32 gMonPalette_Dialga[];
extern const u32 gMonPalette_Palkia[];
extern const u32 gMonPalette_Heatran[];
extern const u32 gMonPalette_Regigigas[];
extern const u32 gMonPalette_Giratina[];
extern const u32 gMonPalette_Cresselia[];
extern const u32 gMonPalette_Phione[];
extern const u32 gMonPalette_Manaphy[];
extern const u32 gMonPalette_Darkrai[];
extern const u32 gMonPalette_Shaymin[];
extern const u32 gMonPalette_Arceus[];
extern const u32 gMonPalette_Victini[];
extern const u32 gMonPalette_Snivy[];
extern const u32 gMonPalette_Servine[];
extern const u32 gMonPalette_Serperior[];
extern const u32 gMonPalette_Tepig[];
extern const u32 gMonPalette_Pignite[];
extern const u32 gMonPalette_Emboar[];
extern const u32 gMonPalette_Oshawott[];
extern const u32 gMonPalette_Dewott[];
extern const u32 gMonPalette_Samurott[];
extern const u32 gMonPalette_Patrat[];
extern const u32 gMonPalette_Watchog[];
extern const u32 gMonPalette_Lillipup[];
extern const u32 gMonPalette_Herdier[];
extern const u32 gMonPalette_Stoutland[];
extern const u32 gMonPalette_Purrloin[];
extern const u32 gMonPalette_Liepard[];
extern const u32 gMonPalette_Pansage[];
extern const u32 gMonPalette_Simisage[];
extern const u32 gMonPalette_Pansear[];
extern const u32 gMonPalette_Simisear[];
extern const u32 gMonPalette_Panpour[];
extern const u32 gMonPalette_Simipour[];
extern const u32 gMonPalette_Munna[];
extern const u32 gMonPalette_Musharna[];
extern const u32 gMonPalette_Pidove[];
extern const u32 gMonPalette_Tranquill[];
extern const u32 gMonPalette_Unfezant[];
extern const u32 gMonPalette_Blitzle[];
extern const u32 gMonPalette_Zebstrika[];
extern const u32 gMonPalette_Roggenrola[];
extern const u32 gMonPalette_Boldore[];
extern const u32 gMonPalette_Gigalith[];
extern const u32 gMonPalette_Woobat[];
extern const u32 gMonPalette_Swoobat[];
extern const u32 gMonPalette_Drilbur[];
extern const u32 gMonPalette_Excadrill[];
extern const u32 gMonPalette_Audino[];
extern const u32 gMonPalette_Timburr[];
extern const u32 gMonPalette_Gurdurr[];
extern const u32 gMonPalette_Conkeldurr[];
extern const u32 gMonPalette_Tympole[];
extern const u32 gMonPalette_Palpitoad[];
extern const u32 gMonPalette_Seismitoad[];
extern const u32 gMonPalette_Throh[];
extern const u32 gMonPalette_Sawk[];
extern const u32 gMonPalette_Sewaddle[];
extern const u32 gMonPalette_Swadloon[];
extern const u32 gMonPalette_Leavanny[];
extern const u32 gMonPalette_Venipede[];
extern const u32 gMonPalette_Whirlipede[];
extern const u32 gMonPalette_Scolipede[];
extern const u32 gMonPalette_Cottonee[];
extern const u32 gMonPalette_Whimsicott[];
extern const u32 gMonPalette_Petilil[];
extern const u32 gMonPalette_Lilligant[];
extern const u32 gMonPalette_Basculin[];
extern const u32 gMonPalette_Sandile[];
extern const u32 gMonPalette_Krokorok[];
extern const u32 gMonPalette_Krookodile[];
extern const u32 gMonPalette_Darumaka[];
extern const u32 gMonPalette_Darmanitan[];
extern const u32 gMonPalette_Maractus[];
extern const u32 gMonPalette_Dwebble[];
extern const u32 gMonPalette_Crustle[];
extern const u32 gMonPalette_Scraggy[];
extern const u32 gMonPalette_Scrafty[];
extern const u32 gMonPalette_Sigilyph[];
extern const u32 gMonPalette_Yamask[];
extern const u32 gMonPalette_Cofagrigus[];
extern const u32 gMonPalette_Tirtouga[];
extern const u32 gMonPalette_Carracosta[];
extern const u32 gMonPalette_Archen[];
extern const u32 gMonPalette_Archeops[];
extern const u32 gMonPalette_Trubbish[];
extern const u32 gMonPalette_Garbodor[];
extern const u32 gMonPalette_Zorua[];
extern const u32 gMonPalette_Zoroark[];
extern const u32 gMonPalette_Minccino[];
extern const u32 gMonPalette_Cinccino[];
extern const u32 gMonPalette_Gothita[];
extern const u32 gMonPalette_Gothorita[];
extern const u32 gMonPalette_Gothitelle[];
extern const u32 gMonPalette_Solosis[];
extern const u32 gMonPalette_Duosion[];
extern const u32 gMonPalette_Reuniclus[];
extern const u32 gMonPalette_Ducklett[];
extern const u32 gMonPalette_Swanna[];
extern const u32 gMonPalette_Vanillite[];
extern const u32 gMonPalette_Vanillish[];
extern const u32 gMonPalette_Vanilluxe[];
extern const u32 gMonPalette_Deerling[];
extern const u32 gMonPalette_Sawsbuck[];
extern const u32 gMonPalette_Emolga[];
extern const u32 gMonPalette_Karrablast[];
extern const u32 gMonPalette_Escavalier[];
extern const u32 gMonPalette_Foongus[];
extern const u32 gMonPalette_Amoonguss[];
extern const u32 gMonPalette_Frillish[];
extern const u32 gMonPalette_Jellicent[];
extern const u32 gMonPalette_Alomomola[];
extern const u32 gMonPalette_Joltik[];
extern const u32 gMonPalette_Galvantula[];
extern const u32 gMonPalette_Ferroseed[];
extern const u32 gMonPalette_Ferrothorn[];
extern const u32 gMonPalette_Klink[];
extern const u32 gMonPalette_Klang[];
extern const u32 gMonPalette_Klinklang[];
extern const u32 gMonPalette_Tynamo[];
extern const u32 gMonPalette_Eelektrik[];
extern const u32 gMonPalette_Eelektross[];
extern const u32 gMonPalette_Elgyem[];
extern const u32 gMonPalette_Beheeyem[];
extern const u32 gMonPalette_Litwick[];
extern const u32 gMonPalette_Lampent[];
extern const u32 gMonPalette_Chandelure[];
extern const u32 gMonPalette_Axew[];
extern const u32 gMonPalette_Fraxure[];
extern const u32 gMonPalette_Haxorus[];
extern const u32 gMonPalette_Cubchoo[];
extern const u32 gMonPalette_Beartic[];
extern const u32 gMonPalette_Cryogonal[];
extern const u32 gMonPalette_Shelmet[];
extern const u32 gMonPalette_Accelgor[];
extern const u32 gMonPalette_Stunfisk[];
extern const u32 gMonPalette_Mienfoo[];
extern const u32 gMonPalette_Mienshao[];
extern const u32 gMonPalette_Druddigon[];
extern const u32 gMonPalette_Golett[];
extern const u32 gMonPalette_Golurk[];
extern const u32 gMonPalette_Pawniard[];
extern const u32 gMonPalette_Bisharp[];
extern const u32 gMonPalette_Bouffalant[];
extern const u32 gMonPalette_Rufflet[];
extern const u32 gMonPalette_Braviary[];
extern const u32 gMonPalette_Vullaby[];
extern const u32 gMonPalette_Mandibuzz[];
extern const u32 gMonPalette_Heatmor[];
extern const u32 gMonPalette_Durant[];
extern const u32 gMonPalette_Deino[];
extern const u32 gMonPalette_Zweilous[];
extern const u32 gMonPalette_Hydreigon[];
extern const u32 gMonPalette_Larvesta[];
extern const u32 gMonPalette_Volcarona[];
extern const u32 gMonPalette_Cobalion[];
extern const u32 gMonPalette_Terrakion[];
extern const u32 gMonPalette_Virizion[];
extern const u32 gMonPalette_Tornadus[];
extern const u32 gMonPalette_Thundurus[];
extern const u32 gMonPalette_Reshiram[];
extern const u32 gMonPalette_Zekrom[];
extern const u32 gMonPalette_Landorus[];
extern const u32 gMonPalette_Kyurem[];
extern const u32 gMonPalette_Keldeo[];
extern const u32 gMonPalette_Meloetta[];
extern const u32 gMonPalette_Genesect[];
extern const u32 gMonPalette_Chespin[];
extern const u32 gMonPalette_Quilladin[];
extern const u32 gMonPalette_Chesnaught[];
extern const u32 gMonPalette_Fennekin[];
extern const u32 gMonPalette_Braixen[];
extern const u32 gMonPalette_Delphox[];
extern const u32 gMonPalette_Froakie[];
extern const u32 gMonPalette_Frogadier[];
extern const u32 gMonPalette_Greninja[];
extern const u32 gMonPalette_Bunnelby[];
extern const u32 gMonPalette_Diggersby[];
extern const u32 gMonPalette_Fletchling[];
extern const u32 gMonPalette_Flechinder[];
extern const u32 gMonPalette_Talonflame[];
extern const u32 gMonPalette_Scatterbug[];
extern const u32 gMonPalette_Spewpa[];
extern const u32 gMonPalette_Vivillon[];
extern const u32 gMonPalette_Litleo[];
extern const u32 gMonPalette_Pyroar[];
extern const u32 gMonPalette_Flabebe[];
extern const u32 gMonPalette_Floette[];
extern const u32 gMonPalette_Florges[];
extern const u32 gMonPalette_Skiddo[];
extern const u32 gMonPalette_Gogoat[];
extern const u32 gMonPalette_Pancham[];
extern const u32 gMonPalette_Pangoro[];
extern const u32 gMonPalette_Furfrou[];
extern const u32 gMonPalette_Espurr[];
extern const u32 gMonPalette_Meowstic[];
extern const u32 gMonPalette_Honedge[];
extern const u32 gMonPalette_Doublade[];
extern const u32 gMonPalette_Aegislash[];
extern const u32 gMonPalette_Spritzee[];
extern const u32 gMonPalette_Aromatisse[];
extern const u32 gMonPalette_Swirlix[];
extern const u32 gMonPalette_Slurpuff[];
extern const u32 gMonPalette_Inkay[];
extern const u32 gMonPalette_Malamar[];
extern const u32 gMonPalette_Binacle[];
extern const u32 gMonPalette_Barbaracle[];
extern const u32 gMonPalette_Skrelp[];
extern const u32 gMonPalette_Dragalge[];
extern const u32 gMonPalette_Clauncher[];
extern const u32 gMonPalette_Clawitzer[];
extern const u32 gMonPalette_Helioptile[];
extern const u32 gMonPalette_Heliolisk[];
extern const u32 gMonPalette_Tyrunt[];
extern const u32 gMonPalette_Tyrantrum[];
extern const u32 gMonPalette_Amaura[];
extern const u32 gMonPalette_Aurorus[];
extern const u32 gMonPalette_Sylveon[];
extern const u32 gMonPalette_Hawlucha[];
extern const u32 gMonPalette_Dedenne[];
extern const u32 gMonPalette_Carbink[];
extern const u32 gMonPalette_Goomy[];
extern const u32 gMonPalette_Sliggoo[];
extern const u32 gMonPalette_Goodra[];
extern const u32 gMonPalette_Klefki[];
extern const u32 gMonPalette_Phantump[];
extern const u32 gMonPalette_Trevenant[];
extern const u32 gMonPalette_Pumpkaboo[];
extern const u32 gMonPalette_Gourgeist[];
extern const u32 gMonPalette_Bergmite[];
extern const u32 gMonPalette_Avalugg[];
extern const u32 gMonPalette_Noibat[];
extern const u32 gMonPalette_Noivern[];
extern const u32 gMonPalette_Xerneas[];
extern const u32 gMonPalette_Yveltal[];
extern const u32 gMonPalette_Zygarde[];
extern const u32 gMonPalette_Diancie[];
extern const u32 gMonPalette_Hoopa[];
extern const u32 gMonPalette_Volcanion[];
extern const u32 gMonPalette_Rowlet[];
extern const u32 gMonPalette_Dartrix[];
extern const u32 gMonPalette_Decidueye[];
extern const u32 gMonPalette_Litten[];
extern const u32 gMonPalette_Torracat[];
extern const u32 gMonPalette_Incineroar[];
extern const u32 gMonPalette_Popplio[];
extern const u32 gMonPalette_Brionne[];
extern const u32 gMonPalette_Primarina[];
extern const u32 gMonPalette_Pikipek[];
extern const u32 gMonPalette_Trumbeak[];
extern const u32 gMonPalette_Toucannon[];
extern const u32 gMonPalette_Yungoos[];
extern const u32 gMonPalette_Gumshoos[];
extern const u32 gMonPalette_Grubbin[];
extern const u32 gMonPalette_Charjabug[];
extern const u32 gMonPalette_Vikavolt[];
extern const u32 gMonPalette_Crabrawler[];
extern const u32 gMonPalette_Crabminabl[];
extern const u32 gMonPalette_Oricorio[];
extern const u32 gMonPalette_Cutiefly[];
extern const u32 gMonPalette_Ribombee[];
extern const u32 gMonPalette_Rockruff[];
extern const u32 gMonPalette_Lycanroc[];
extern const u32 gMonPalette_Wishiwashi[];
extern const u32 gMonPalette_Mareanie[];
extern const u32 gMonPalette_Toxapex[];
extern const u32 gMonPalette_Mudbray[];
extern const u32 gMonPalette_Mudsdale[];
extern const u32 gMonPalette_Dewpider[];
extern const u32 gMonPalette_Araquanid[];
extern const u32 gMonPalette_Fomantis[];
extern const u32 gMonPalette_Lurantis[];
extern const u32 gMonPalette_Morelull[];
extern const u32 gMonPalette_Shiinotic[];
extern const u32 gMonPalette_Salandit[];
extern const u32 gMonPalette_Salazzle[];
extern const u32 gMonPalette_Stufful[];
extern const u32 gMonPalette_Bewear[];
extern const u32 gMonPalette_Bounsweet[];
extern const u32 gMonPalette_Steenee[];
extern const u32 gMonPalette_Tsareena[];
extern const u32 gMonPalette_Comfey[];
extern const u32 gMonPalette_Oranguru[];
extern const u32 gMonPalette_Passimian[];
extern const u32 gMonPalette_Wimpod[];
extern const u32 gMonPalette_Golisopod[];
extern const u32 gMonPalette_Sandygast[];
extern const u32 gMonPalette_Palossand[];
extern const u32 gMonPalette_Pyukumuku[];
extern const u32 gMonPalette_TypeNull[];
extern const u32 gMonPalette_Silvally[];
extern const u32 gMonPalette_Minior[];
extern const u32 gMonPalette_Komala[];
extern const u32 gMonPalette_Turtonator[];
extern const u32 gMonPalette_Togedemaru[];
extern const u32 gMonPalette_Mimikyu[];
extern const u32 gMonPalette_Bruxish[];
extern const u32 gMonPalette_Drampa[];
extern const u32 gMonPalette_Dhelmise[];
extern const u32 gMonPalette_Jangmoo[];
extern const u32 gMonPalette_Hakamoo[];
extern const u32 gMonPalette_Kommoo[];
extern const u32 gMonPalette_TapuKoko[];
extern const u32 gMonPalette_TapuLele[];
extern const u32 gMonPalette_TapuBulu[];
extern const u32 gMonPalette_TapuFini[];
extern const u32 gMonPalette_Cosmog[];
extern const u32 gMonPalette_Cosmoem[];
extern const u32 gMonPalette_Solgaleo[];
extern const u32 gMonPalette_Lunala[];
extern const u32 gMonPalette_Nihilego[];
extern const u32 gMonPalette_Buzzwole[];
extern const u32 gMonPalette_Pheromosa[];
extern const u32 gMonPalette_Xurkitree[];
extern const u32 gMonPalette_Celesteela[];
extern const u32 gMonPalette_Kartana[];
extern const u32 gMonPalette_Guzzlord[];
extern const u32 gMonPalette_Necrozma[];
extern const u32 gMonPalette_Magearna[];
extern const u32 gMonPalette_Marshadow[];
extern const u32 gMonPalette_Poipole[];
extern const u32 gMonPalette_Naganadel[];
extern const u32 gMonPalette_Stakataka[];
extern const u32 gMonPalette_Blacephaln[];
extern const u32 gMonPalette_Zeraora[];
extern const u32 gMonPalette_Meltan[];
extern const u32 gMonPalette_Melmetal[];
extern const u32 gMonPalette_Grookey[];
extern const u32 gMonPalette_Thwackey[];
extern const u32 gMonPalette_Rillaboom[];
extern const u32 gMonPalette_Scorbunny[];
extern const u32 gMonPalette_Raboot[];
extern const u32 gMonPalette_Cinderace[];
extern const u32 gMonPalette_Sobble[];
extern const u32 gMonPalette_Drizzile[];
extern const u32 gMonPalette_Inteleon[];
extern const u32 gMonPalette_Skwovet[];
extern const u32 gMonPalette_Greedent[];
extern const u32 gMonPalette_Rookidee[];
extern const u32 gMonPalette_Corvisquir[];
extern const u32 gMonPalette_Corviknigh[];
extern const u32 gMonPalette_Blipbug[];
extern const u32 gMonPalette_Dottler[];
extern const u32 gMonPalette_Orbeetle[];
extern const u32 gMonPalette_Nickit[];
extern const u32 gMonPalette_Thievul[];
extern const u32 gMonPalette_Gossifleur[];
extern const u32 gMonPalette_Eldegoss[];
extern const u32 gMonPalette_Wooloo[];
extern const u32 gMonPalette_Dubwool[];
extern const u32 gMonPalette_Chewtle[];
extern const u32 gMonPalette_Drednaw[];
extern const u32 gMonPalette_Yamper[];
extern const u32 gMonPalette_Boltund[];
extern const u32 gMonPalette_Rolycoly[];
extern const u32 gMonPalette_Carkol[];
extern const u32 gMonPalette_Coalossal[];
extern const u32 gMonPalette_Applin[];
extern const u32 gMonPalette_Flapple[];
extern const u32 gMonPalette_Appletun[];
extern const u32 gMonPalette_Silicobra[];
extern const u32 gMonPalette_Sandaconda[];
extern const u32 gMonPalette_Cramorant[];
extern const u32 gMonPalette_Arrokuda[];
extern const u32 gMonPalette_Barraskewd[];
extern const u32 gMonPalette_Toxel[];
extern const u32 gMonPalette_Toxtricity[];
extern const u32 gMonPalette_Sizzlipede[];
extern const u32 gMonPalette_Centiskorc[];
extern const u32 gMonPalette_Clobbopus[];
extern const u32 gMonPalette_Grapploct[];
extern const u32 gMonPalette_Sinistea[];
extern const u32 gMonPalette_Polteageis[];
extern const u32 gMonPalette_Hatenna[];
extern const u32 gMonPalette_Hattrem[];
extern const u32 gMonPalette_Hatterene[];
extern const u32 gMonPalette_Impidimp[];
extern const u32 gMonPalette_Morgrem[];
extern const u32 gMonPalette_Grimmsnarl[];
extern const u32 gMonPalette_Obstagoon[];
extern const u32 gMonPalette_Perrserker[];
extern const u32 gMonPalette_Cursola[];
extern const u32 gMonPalette_Sirfetchd[];
extern const u32 gMonPalette_MrRime[];
extern const u32 gMonPalette_Runerigus[];
extern const u32 gMonPalette_Milcery[];
extern const u32 gMonPalette_Alcremie[];
extern const u32 gMonPalette_Falinks[];
extern const u32 gMonPalette_Pincurchin[];
extern const u32 gMonPalette_Snom[];
extern const u32 gMonPalette_Frosmoth[];
extern const u32 gMonPalette_Stonjourne[];
extern const u32 gMonPalette_Eiscue[];
extern const u32 gMonPalette_Indeedee[];
extern const u32 gMonPalette_Morpeko[];
extern const u32 gMonPalette_Cufant[];
extern const u32 gMonPalette_Copperajah[];
extern const u32 gMonPalette_Dracozolt[];
extern const u32 gMonPalette_Arctozolt[];
extern const u32 gMonPalette_Dracovish[];
extern const u32 gMonPalette_Arctovish[];
extern const u32 gMonPalette_Duraludon[];
extern const u32 gMonPalette_Dreepy[];
extern const u32 gMonPalette_Drakloak[];
extern const u32 gMonPalette_Dragapult[];
extern const u32 gMonPalette_Zacian[];
extern const u32 gMonPalette_Zamazenta[];
extern const u32 gMonPalette_Eternatus[];
extern const u32 gMonPalette_Kubfu[];
extern const u32 gMonPalette_Urshifu[];
extern const u32 gMonPalette_Zarude[];
extern const u32 gMonPalette_Regieleki[];
extern const u32 gMonPalette_Regidrago[];
extern const u32 gMonPalette_Glastrier[];
extern const u32 gMonPalette_Spectrier[];
extern const u32 gMonPalette_Calyrex[];
extern const u32 gMonPalette_Wyrdeer[];
extern const u32 gMonPalette_Kleavor[];
extern const u32 gMonPalette_Ursaluna[];
extern const u32 gMonPalette_Bsculegion[];
extern const u32 gMonPalette_Sneasler[];
extern const u32 gMonPalette_Overqwil[];
extern const u32 gMonPalette_Enamorus[];
extern const u32 gMonPalette_Venusaur2[];
extern const u32 gMonPalette_Charizard2[];
extern const u32 gMonPalette_Charizard3[];
extern const u32 gMonPalette_Blastoise2[];
extern const u32 gMonPalette_Beedrill2[];
extern const u32 gMonPalette_Pidgeot2[];
extern const u32 gMonPalette_Alakazam2[];
extern const u32 gMonPalette_Slowbro2[];
extern const u32 gMonPalette_Gengar2[];
extern const u32 gMonPalette_Kangaskhan2[];
extern const u32 gMonPalette_Pinsir2[];
extern const u32 gMonPalette_Gyarados2[];
extern const u32 gMonPalette_Aerodactyl2[];
extern const u32 gMonPalette_Mewtwo2[];
extern const u32 gMonPalette_Mewtwo3[];
extern const u32 gMonPalette_Ampharos2[];
extern const u32 gMonPalette_Steelix2[];
extern const u32 gMonPalette_Scizor2[];
extern const u32 gMonPalette_Heracross2[];
extern const u32 gMonPalette_Houndoom2[];
extern const u32 gMonPalette_Tyranitar2[];
extern const u32 gMonPalette_Sceptile2[];
extern const u32 gMonPalette_Blaziken2[];
extern const u32 gMonPalette_Swampert2[];
extern const u32 gMonPalette_Gardevoir2[];
extern const u32 gMonPalette_Sableye2[];
extern const u32 gMonPalette_Mawile2[];
extern const u32 gMonPalette_Aggron2[];
extern const u32 gMonPalette_Medicham2[];
extern const u32 gMonPalette_Manectric2[];
extern const u32 gMonPalette_Sharpedo2[];
extern const u32 gMonPalette_Camerupt2[];
extern const u32 gMonPalette_Altaria2[];
extern const u32 gMonPalette_Banette2[];
extern const u32 gMonPalette_Absol2[];
extern const u32 gMonPalette_Glalie2[];
extern const u32 gMonPalette_Salamence2[];
extern const u32 gMonPalette_Metagross2[];
extern const u32 gMonPalette_Latias2[];
extern const u32 gMonPalette_Latios2[];
extern const u32 gMonPalette_Lopunny2[];
extern const u32 gMonPalette_Garchomp2[];
extern const u32 gMonPalette_Lucario2[];
extern const u32 gMonPalette_Abomasnow2[];
extern const u32 gMonPalette_Gallade2[];
extern const u32 gMonPalette_Audino2[];
extern const u32 gMonPalette_Diancie2[];
extern const u32 gMonPalette_Rayquaza2[];
extern const u32 gMonPalette_Kyogre2[];
extern const u32 gMonPalette_Groudon2[];
extern const u32 gMonPalette_Rattata2[];
extern const u32 gMonPalette_Raticate2[];
extern const u32 gMonPalette_Raichu2[];
extern const u32 gMonPalette_Sandshrew2[];
extern const u32 gMonPalette_Sandslash2[];
extern const u32 gMonPalette_Vulpix2[];
extern const u32 gMonPalette_Ninetales2[];
extern const u32 gMonPalette_Diglett2[];
extern const u32 gMonPalette_Dugtrio2[];
extern const u32 gMonPalette_Meowth2[];
extern const u32 gMonPalette_Persian2[];
extern const u32 gMonPalette_Geodude2[];
extern const u32 gMonPalette_Graveler2[];
extern const u32 gMonPalette_Golem2[];
extern const u32 gMonPalette_Grimer2[];
extern const u32 gMonPalette_Muk2[];
extern const u32 gMonPalette_Exeggutor2[];
extern const u32 gMonPalette_Marowak2[];
extern const u32 gMonPalette_Meowth3[];
extern const u32 gMonPalette_Ponyta2[];
extern const u32 gMonPalette_Rapidash2[];
extern const u32 gMonPalette_Slowpoke2[];
extern const u32 gMonPalette_Slowbro3[];
extern const u32 gMonPalette_Farfetchd2[];
extern const u32 gMonPalette_Weezing2[];
extern const u32 gMonPalette_MrMime2[];
extern const u32 gMonPalette_Articuno2[];
extern const u32 gMonPalette_Zapdos2[];
extern const u32 gMonPalette_Moltres2[];
extern const u32 gMonPalette_Slowking2[];
extern const u32 gMonPalette_Corsola2[];
extern const u32 gMonPalette_Zigzagoon2[];
extern const u32 gMonPalette_Linoone2[];
extern const u32 gMonPalette_Darumaka2[];
extern const u32 gMonPalette_Darmanitan2[];
extern const u32 gMonPalette_Yamask2[];
extern const u32 gMonPalette_Stunfisk2[];
extern const u32 gMonPalette_Growlithe2[];
extern const u32 gMonPalette_Arcanine2[];
extern const u32 gMonPalette_Voltorb2[];
extern const u32 gMonPalette_Electrode2[];
extern const u32 gMonPalette_Typhlosion2[];
extern const u32 gMonPalette_Qwilfish2[];
extern const u32 gMonPalette_Sneasel2[];
extern const u32 gMonPalette_Samurott2[];
extern const u32 gMonPalette_Lilligant2[];
extern const u32 gMonPalette_Zorua2[];
extern const u32 gMonPalette_Zoroark2[];
extern const u32 gMonPalette_Braviary2[];
extern const u32 gMonPalette_Sliggoo2[];
extern const u32 gMonPalette_Goodra2[];
extern const u32 gMonPalette_Avalugg2[];
extern const u32 gMonPalette_Decidueye2[];
extern const u32 gMonPalette_Pikachu2[];
extern const u32 gMonPalette_Pikachu3[];
extern const u32 gMonPalette_Pikachu4[];
extern const u32 gMonPalette_Pikachu5[];
extern const u32 gMonPalette_Pikachu6[];
extern const u32 gMonPalette_Pikachu7[];
extern const u32 gMonPalette_Pikachu8[];
extern const u32 gMonPalette_Pikachu9[];
extern const u32 gMonPalette_Pikachu10[];
extern const u32 gMonPalette_Pikachu11[];
extern const u32 gMonPalette_Pikachu12[];
extern const u32 gMonPalette_Pikachu13[];
extern const u32 gMonPalette_Pikachu14[];
extern const u32 gMonPalette_Pikachu15[];
extern const u32 gMonPalette_Pichu2[];
extern const u32 gMonPalette_UnownB[];
extern const u32 gMonPalette_UnownC[];
extern const u32 gMonPalette_UnownD[];
extern const u32 gMonPalette_UnownE[];
extern const u32 gMonPalette_UnownF[];
extern const u32 gMonPalette_UnownG[];
extern const u32 gMonPalette_UnownH[];
extern const u32 gMonPalette_UnownI[];
extern const u32 gMonPalette_UnownJ[];
extern const u32 gMonPalette_UnownK[];
extern const u32 gMonPalette_UnownL[];
extern const u32 gMonPalette_UnownM[];
extern const u32 gMonPalette_UnownN[];
extern const u32 gMonPalette_UnownO[];
extern const u32 gMonPalette_UnownP[];
extern const u32 gMonPalette_UnownQ[];
extern const u32 gMonPalette_UnownR[];
extern const u32 gMonPalette_UnownS[];
extern const u32 gMonPalette_UnownT[];
extern const u32 gMonPalette_UnownU[];
extern const u32 gMonPalette_UnownV[];
extern const u32 gMonPalette_UnownW[];
extern const u32 gMonPalette_UnownX[];
extern const u32 gMonPalette_UnownY[];
extern const u32 gMonPalette_UnownZ[];
extern const u32 gMonPalette_UnownEMark[];
extern const u32 gMonPalette_UnownQMark[];
extern const u32 gMonPalette_Castform2[];
extern const u32 gMonPalette_Castform3[];
extern const u32 gMonPalette_Castform4[];
extern const u32 gMonPalette_Deoxys2[];
extern const u32 gMonPalette_Deoxys3[];
extern const u32 gMonPalette_Deoxys4[];
extern const u32 gMonPalette_Burmy2[];
extern const u32 gMonPalette_Burmy3[];
extern const u32 gMonPalette_Wormadam2[];
extern const u32 gMonPalette_Wormadam3[];
extern const u32 gMonPalette_Cherrim2[];
extern const u32 gMonPalette_Shellos2[];
extern const u32 gMonPalette_Gastrodon2[];
extern const u32 gMonPalette_Rotom2[];
extern const u32 gMonPalette_Rotom3[];
extern const u32 gMonPalette_Rotom4[];
extern const u32 gMonPalette_Rotom5[];
extern const u32 gMonPalette_Rotom6[];
extern const u32 gMonPalette_Dialga2[];
extern const u32 gMonPalette_Palkia2[];
extern const u32 gMonPalette_Giratina2[];
extern const u32 gMonPalette_Shaymin2[];
extern const u32 gMonPalette_Arceus2[];
extern const u32 gMonPalette_Arceus3[];
extern const u32 gMonPalette_Arceus4[];
extern const u32 gMonPalette_Arceus5[];
extern const u32 gMonPalette_Arceus6[];
extern const u32 gMonPalette_Arceus7[];
extern const u32 gMonPalette_Arceus8[];
extern const u32 gMonPalette_Arceus9[];
extern const u32 gMonPalette_Arceus10[];
extern const u32 gMonPalette_Arceus11[];
extern const u32 gMonPalette_Arceus12[];
extern const u32 gMonPalette_Arceus13[];
extern const u32 gMonPalette_Arceus14[];
extern const u32 gMonPalette_Arceus15[];
extern const u32 gMonPalette_Arceus16[];
extern const u32 gMonPalette_Arceus17[];
extern const u32 gMonPalette_Arceus18[];
extern const u32 gMonPalette_Basculin2[];
extern const u32 gMonPalette_Basculin3[];
extern const u32 gMonPalette_Darmanitan3[];
extern const u32 gMonPalette_Darmanitan4[];
extern const u32 gMonPalette_Deerling2[];
extern const u32 gMonPalette_Deerling3[];
extern const u32 gMonPalette_Deerling4[];
extern const u32 gMonPalette_Sawsbuck2[];
extern const u32 gMonPalette_Sawsbuck3[];
extern const u32 gMonPalette_Sawsbuck4[];
extern const u32 gMonPalette_Tornadus2[];
extern const u32 gMonPalette_Thundurus2[];
extern const u32 gMonPalette_Landorus2[];
extern const u32 gMonPalette_Enamorus2[];
extern const u32 gMonPalette_Kyurem2[];
extern const u32 gMonPalette_Kyurem3[];
extern const u32 gMonPalette_Keldeo2[];
extern const u32 gMonPalette_Meloetta2[];
extern const u32 gMonPalette_Genesect2[];
extern const u32 gMonPalette_Genesect3[];
extern const u32 gMonPalette_Genesect4[];
extern const u32 gMonPalette_Genesect5[];
extern const u32 gMonPalette_Greninja2[];
extern const u32 gMonPalette_Greninja3[];
extern const u32 gMonPalette_Vivillon2[];
extern const u32 gMonPalette_Vivillon3[];
extern const u32 gMonPalette_Vivillon4[];
extern const u32 gMonPalette_Vivillon5[];
extern const u32 gMonPalette_Vivillon6[];
extern const u32 gMonPalette_Vivillon7[];
extern const u32 gMonPalette_Vivillon8[];
extern const u32 gMonPalette_Vivillon9[];
extern const u32 gMonPalette_Vivillon10[];
extern const u32 gMonPalette_Vivillon11[];
extern const u32 gMonPalette_Vivillon12[];
extern const u32 gMonPalette_Vivillon13[];
extern const u32 gMonPalette_Vivillon14[];
extern const u32 gMonPalette_Vivillon15[];
extern const u32 gMonPalette_Vivillon16[];
extern const u32 gMonPalette_Vivillon17[];
extern const u32 gMonPalette_Vivillon18[];
extern const u32 gMonPalette_Vivillon19[];
extern const u32 gMonPalette_Vivillon20[];
extern const u32 gMonPalette_Flabebe2[];
extern const u32 gMonPalette_Flabebe3[];
extern const u32 gMonPalette_Flabebe4[];
extern const u32 gMonPalette_Flabebe5[];
extern const u32 gMonPalette_Floette2[];
extern const u32 gMonPalette_Floette3[];
extern const u32 gMonPalette_Floette4[];
extern const u32 gMonPalette_Floette5[];
extern const u32 gMonPalette_Floette6[];
extern const u32 gMonPalette_Florges2[];
extern const u32 gMonPalette_Florges3[];
extern const u32 gMonPalette_Florges4[];
extern const u32 gMonPalette_Florges5[];
extern const u32 gMonPalette_Furfrou2[];
extern const u32 gMonPalette_Furfrou3[];
extern const u32 gMonPalette_Furfrou4[];
extern const u32 gMonPalette_Furfrou5[];
extern const u32 gMonPalette_Furfrou6[];
extern const u32 gMonPalette_Furfrou7[];
extern const u32 gMonPalette_Furfrou8[];
extern const u32 gMonPalette_Furfrou9[];
extern const u32 gMonPalette_Furfrou10[];
extern const u32 gMonPalette_Meowstic2[];
extern const u32 gMonPalette_Aegislash2[];
extern const u32 gMonPalette_Pumpkaboo2[];
extern const u32 gMonPalette_Pumpkaboo3[];
extern const u32 gMonPalette_Pumpkaboo4[];
extern const u32 gMonPalette_Gourgeist2[];
extern const u32 gMonPalette_Gourgeist3[];
extern const u32 gMonPalette_Gourgeist4[];
extern const u32 gMonPalette_Xerneas2[];
extern const u32 gMonPalette_Zygarde2[];
extern const u32 gMonPalette_Zygarde3[];
extern const u32 gMonPalette_Zygarde4[];
extern const u32 gMonPalette_Zygarde5[];
extern const u32 gMonPalette_Hoopa2[];
extern const u32 gMonPalette_Oricorio2[];
extern const u32 gMonPalette_Oricorio3[];
extern const u32 gMonPalette_Oricorio4[];
extern const u32 gMonPalette_Rockruff2[];
extern const u32 gMonPalette_Lycanroc2[];
extern const u32 gMonPalette_Lycanroc3[];
extern const u32 gMonPalette_Wishiwashi2[];
extern const u32 gMonPalette_Silvally2[];
extern const u32 gMonPalette_Silvally3[];
extern const u32 gMonPalette_Silvally4[];
extern const u32 gMonPalette_Silvally5[];
extern const u32 gMonPalette_Silvally6[];
extern const u32 gMonPalette_Silvally7[];
extern const u32 gMonPalette_Silvally8[];
extern const u32 gMonPalette_Silvally9[];
extern const u32 gMonPalette_Silvally10[];
extern const u32 gMonPalette_Silvally11[];
extern const u32 gMonPalette_Silvally12[];
extern const u32 gMonPalette_Silvally13[];
extern const u32 gMonPalette_Silvally14[];
extern const u32 gMonPalette_Silvally15[];
extern const u32 gMonPalette_Silvally16[];
extern const u32 gMonPalette_Silvally17[];
extern const u32 gMonPalette_Silvally18[];
extern const u32 gMonPalette_Minior2[];
extern const u32 gMonPalette_Minior3[];
extern const u32 gMonPalette_Minior4[];
extern const u32 gMonPalette_Minior5[];
extern const u32 gMonPalette_Minior6[];
extern const u32 gMonPalette_Minior7[];
extern const u32 gMonPalette_Minior8[];
extern const u32 gMonPalette_Minior9[];
extern const u32 gMonPalette_Minior10[];
extern const u32 gMonPalette_Minior11[];
extern const u32 gMonPalette_Minior12[];
extern const u32 gMonPalette_Minior13[];
extern const u32 gMonPalette_Minior14[];
extern const u32 gMonPalette_Mimikyu2[];
extern const u32 gMonPalette_Necrozma2[];
extern const u32 gMonPalette_Necrozma3[];
extern const u32 gMonPalette_Necrozma4[];
extern const u32 gMonPalette_Magearna2[];
extern const u32 gMonPalette_Cramorant2[];
extern const u32 gMonPalette_Cramorant3[];
extern const u32 gMonPalette_Toxtricity2[];
extern const u32 gMonPalette_Sinistea2[];
extern const u32 gMonPalette_Polteageis2[];
extern const u32 gMonPalette_Alcremie2[];
extern const u32 gMonPalette_Alcremie3[];
extern const u32 gMonPalette_Alcremie4[];
extern const u32 gMonPalette_Alcremie5[];
extern const u32 gMonPalette_Alcremie6[];
extern const u32 gMonPalette_Alcremie7[];
extern const u32 gMonPalette_Alcremie8[];
extern const u32 gMonPalette_Alcremie9[];
extern const u32 gMonPalette_Eiscue2[];
extern const u32 gMonPalette_Indeedee2[];
extern const u32 gMonPalette_Morpeko2[];
extern const u32 gMonPalette_Zacian2[];
extern const u32 gMonPalette_Zamazenta2[];
extern const u32 gMonPalette_Eternatus2[];
extern const u32 gMonPalette_Urshifu2[];
extern const u32 gMonPalette_Zarude2[];
extern const u32 gMonPalette_Calyrex2[];
extern const u32 gMonPalette_Calyrex3[];
extern const u32 gMonPalette_Bsculegion2[];
extern const u32 gMonPalette_Alcremie10[];
extern const u32 gMonPalette_Alcremie11[];
extern const u32 gMonPalette_Alcremie12[];
extern const u32 gMonPalette_Alcremie13[];
extern const u32 gMonPalette_Alcremie14[];
extern const u32 gMonPalette_Alcremie15[];
extern const u32 gMonPalette_Alcremie16[];
extern const u32 gMonPalette_Alcremie17[];
extern const u32 gMonPalette_Alcremie18[];
extern const u32 gMonPalette_Alcremie19[];
extern const u32 gMonPalette_Alcremie20[];
extern const u32 gMonPalette_Alcremie21[];
extern const u32 gMonPalette_Alcremie22[];
extern const u32 gMonPalette_Alcremie23[];
extern const u32 gMonPalette_Alcremie24[];
extern const u32 gMonPalette_Alcremie25[];
extern const u32 gMonPalette_Alcremie26[];
extern const u32 gMonPalette_Alcremie27[];
extern const u32 gMonPalette_Alcremie28[];
extern const u32 gMonPalette_Alcremie29[];
extern const u32 gMonPalette_Alcremie30[];
extern const u32 gMonPalette_Alcremie31[];
extern const u32 gMonPalette_Alcremie32[];
extern const u32 gMonPalette_Alcremie33[];
extern const u32 gMonPalette_Alcremie34[];
extern const u32 gMonPalette_Alcremie35[];
extern const u32 gMonPalette_Alcremie36[];
extern const u32 gMonPalette_Alcremie37[];
extern const u32 gMonPalette_Alcremie38[];
extern const u32 gMonPalette_Alcremie39[];
extern const u32 gMonPalette_Alcremie40[];
extern const u32 gMonPalette_Alcremie41[];
extern const u32 gMonPalette_Alcremie42[];
extern const u32 gMonPalette_Alcremie43[];
extern const u32 gMonPalette_Alcremie44[];
extern const u32 gMonPalette_Alcremie45[];
extern const u32 gMonPalette_Alcremie46[];
extern const u32 gMonPalette_Alcremie47[];
extern const u32 gMonPalette_Alcremie48[];
extern const u32 gMonPalette_Alcremie49[];
extern const u32 gMonPalette_Alcremie50[];
extern const u32 gMonPalette_Alcremie51[];
extern const u32 gMonPalette_Alcremie52[];
extern const u32 gMonPalette_Alcremie53[];
extern const u32 gMonPalette_Alcremie54[];
extern const u32 gMonPalette_Alcremie55[];
extern const u32 gMonPalette_Alcremie56[];
extern const u32 gMonPalette_Alcremie57[];
extern const u32 gMonPalette_Alcremie58[];
extern const u32 gMonPalette_Alcremie59[];
extern const u32 gMonPalette_Alcremie60[];
extern const u32 gMonPalette_Alcremie61[];
extern const u32 gMonPalette_Alcremie62[];
extern const u32 gMonPalette_Alcremie63[];
extern const u32 gMonPalette_Sprigatito[];
extern const u32 gMonPalette_Floragato[];
extern const u32 gMonPalette_Meowscarad[];
extern const u32 gMonPalette_Fuecoco[];
extern const u32 gMonPalette_Crocalor[];
extern const u32 gMonPalette_Skeledirge[];
extern const u32 gMonPalette_Quaxly[];
extern const u32 gMonPalette_Quaxwell[];
extern const u32 gMonPalette_Quaquaval[];
extern const u32 gMonPalette_Lechonk[];
extern const u32 gMonPalette_Oinkologne[];
extern const u32 gMonPalette_Oinkologne2[];
extern const u32 gMonPalette_Tarountula[];
extern const u32 gMonPalette_Spidops[];
extern const u32 gMonPalette_Nymble[];
extern const u32 gMonPalette_Lokix[];
extern const u32 gMonPalette_Pawmi[];
extern const u32 gMonPalette_Pawmo[];
extern const u32 gMonPalette_Pawmot[];
extern const u32 gMonPalette_Tandemaus[];
extern const u32 gMonPalette_Maushold[];
extern const u32 gMonPalette_Maushold2[];
extern const u32 gMonPalette_Fidough[];
extern const u32 gMonPalette_Dachsbun[];
extern const u32 gMonPalette_Smoliv[];
extern const u32 gMonPalette_Dolliv[];
extern const u32 gMonPalette_Arboliva[];
extern const u32 gMonPalette_Sqawkabily[];
extern const u32 gMonPalette_Sqawkabily2[];
extern const u32 gMonPalette_Sqawkabily3[];
extern const u32 gMonPalette_Sqawkabily4[];
extern const u32 gMonPalette_Nacli[];
extern const u32 gMonPalette_Naclstack[];
extern const u32 gMonPalette_Garganacl[];
extern const u32 gMonPalette_Charcadet[];
extern const u32 gMonPalette_Armarouge[];
extern const u32 gMonPalette_Ceruledge[];
extern const u32 gMonPalette_Tadbulb[];
extern const u32 gMonPalette_Bellibolt[];
extern const u32 gMonPalette_Wattrel[];
extern const u32 gMonPalette_Kilowatrel[];
extern const u32 gMonPalette_Maschiff[];
extern const u32 gMonPalette_Mabosstiff[];
extern const u32 gMonPalette_Shroodle[];
extern const u32 gMonPalette_Grafaiai[];
extern const u32 gMonPalette_Bramblin[];
extern const u32 gMonPalette_Brmblghast[];
extern const u32 gMonPalette_Toedscool[];
extern const u32 gMonPalette_Toedscruel[];
extern const u32 gMonPalette_Klawf[];
extern const u32 gMonPalette_Capsakid[];
extern const u32 gMonPalette_Scovillain[];
extern const u32 gMonPalette_Rellor[];
extern const u32 gMonPalette_Rabsca[];
extern const u32 gMonPalette_Flittle[];
extern const u32 gMonPalette_Espathra[];
extern const u32 gMonPalette_Tinkatink[];
extern const u32 gMonPalette_Tinkatuff[];
extern const u32 gMonPalette_Tinkaton[];
extern const u32 gMonPalette_Wiglett[];
extern const u32 gMonPalette_Wugtrio[];
extern const u32 gMonPalette_Bombirdier[];
extern const u32 gMonPalette_Finizen[];
extern const u32 gMonPalette_Palafin[];
extern const u32 gMonPalette_Palafin2[];
extern const u32 gMonPalette_Varoom[];
extern const u32 gMonPalette_Revavroom[];
extern const u32 gMonPalette_Cyclizar[];
extern const u32 gMonPalette_Orthworm[];
extern const u32 gMonPalette_Glimmet[];
extern const u32 gMonPalette_Glimmora[];
extern const u32 gMonPalette_Greavard[];
extern const u32 gMonPalette_Houndstone[];
extern const u32 gMonPalette_Flamigo[];
extern const u32 gMonPalette_Cetoddle[];
extern const u32 gMonPalette_Cetitan[];
extern const u32 gMonPalette_Veluza[];
extern const u32 gMonPalette_Dondozo[];
extern const u32 gMonPalette_Tatsugiri[];
extern const u32 gMonPalette_Tatsugiri2[];
extern const u32 gMonPalette_Tatsugiri3[];
extern const u32 gMonPalette_Annihilape[];
extern const u32 gMonPalette_Clodsire[];
extern const u32 gMonPalette_Farigiraf[];
extern const u32 gMonPalette_Dudunsprce[];
extern const u32 gMonPalette_Dudunsprce2[];
extern const u32 gMonPalette_Kingambit[];
extern const u32 gMonPalette_GreatTusk[];
extern const u32 gMonPalette_ScreamTail[];
extern const u32 gMonPalette_BruteBonet[];
extern const u32 gMonPalette_FluttrMane[];
extern const u32 gMonPalette_SlithrWing[];
extern const u32 gMonPalette_SndyShocks[];
extern const u32 gMonPalette_IronTreads[];
extern const u32 gMonPalette_IronBundle[];
extern const u32 gMonPalette_IronHands[];
extern const u32 gMonPalette_IronJuguls[];
extern const u32 gMonPalette_IronMoth[];
extern const u32 gMonPalette_IronThorns[];
extern const u32 gMonPalette_Frigibax[];
extern const u32 gMonPalette_Arctibax[];
extern const u32 gMonPalette_Baxcalibur[];
extern const u32 gMonPalette_Gimmighoul[];
extern const u32 gMonPalette_Gimmighoul2[];
extern const u32 gMonPalette_Gholdengo[];
extern const u32 gMonPalette_WoChien[];
extern const u32 gMonPalette_ChienPao[];
extern const u32 gMonPalette_TingLu[];
extern const u32 gMonPalette_ChiYu[];
extern const u32 gMonPalette_RoarngMoon[];
extern const u32 gMonPalette_IronVliant[];
extern const u32 gMonPalette_Koraidon[];
extern const u32 gMonPalette_Miraidon[];
extern const u32 gMonPalette_Tauros2[];
extern const u32 gMonPalette_Tauros3[];
extern const u32 gMonPalette_Tauros4[];
extern const u32 gMonPalette_Wooper2[];
extern const u32 gMonPalette_WalkngWake[];
extern const u32 gMonPalette_IronLeaves[];
extern const u32 gMonPalette_Dipplin[];
extern const u32 gMonPalette_Ptchageist[];
extern const u32 gMonPalette_Ptchageist2[];
extern const u32 gMonPalette_Sinistcha[];
extern const u32 gMonPalette_Sinistcha2[];
extern const u32 gMonPalette_Okidogi[];
extern const u32 gMonPalette_Munkidori[];
extern const u32 gMonPalette_Fezndipiti[];
extern const u32 gMonPalette_Ogerpon[];
extern const u32 gMonPalette_Ogerpon2[];
extern const u32 gMonPalette_Ogerpon3[];
extern const u32 gMonPalette_Ogerpon4[];
extern const u32 gMonPalette_Ogerpon5[];
extern const u32 gMonPalette_Ogerpon6[];
extern const u32 gMonPalette_Ogerpon7[];
extern const u32 gMonPalette_Ogerpon8[];
extern const u32 gMonPalette_Ursaluna2[];
extern const u32 gMonPalette_Archaludon[];
extern const u32 gMonPalette_Hydrapple[];
extern const u32 gMonPalette_GouginFire[];
extern const u32 gMonPalette_RagingBolt[];
extern const u32 gMonPalette_IronBouldr[];
extern const u32 gMonPalette_IronCrown[];
extern const u32 gMonPalette_Terapagos[];
extern const u32 gMonPalette_Terapagos2[];
extern const u32 gMonPalette_Terapagos3[];
extern const u32 gMonPalette_Pecharunt[];
extern const u32 gMonPalette_Mothim2[];
extern const u32 gMonPalette_Mothim3[];
extern const u32 gMonPalette_Scatterbug2[];
extern const u32 gMonPalette_Scatterbug3[];
extern const u32 gMonPalette_Scatterbug4[];
extern const u32 gMonPalette_Scatterbug5[];
extern const u32 gMonPalette_Scatterbug6[];
extern const u32 gMonPalette_Scatterbug7[];
extern const u32 gMonPalette_Scatterbug8[];
extern const u32 gMonPalette_Scatterbug9[];
extern const u32 gMonPalette_Scatterbug10[];
extern const u32 gMonPalette_Scatterbug11[];
extern const u32 gMonPalette_Scatterbug12[];
extern const u32 gMonPalette_Scatterbug13[];
extern const u32 gMonPalette_Scatterbug14[];
extern const u32 gMonPalette_Scatterbug15[];
extern const u32 gMonPalette_Scatterbug16[];
extern const u32 gMonPalette_Scatterbug17[];
extern const u32 gMonPalette_Scatterbug18[];
extern const u32 gMonPalette_Scatterbug19[];
extern const u32 gMonPalette_Scatterbug20[];
extern const u32 gMonPalette_Spewpa2[];
extern const u32 gMonPalette_Spewpa3[];
extern const u32 gMonPalette_Spewpa4[];
extern const u32 gMonPalette_Spewpa5[];
extern const u32 gMonPalette_Spewpa6[];
extern const u32 gMonPalette_Spewpa7[];
extern const u32 gMonPalette_Spewpa8[];
extern const u32 gMonPalette_Spewpa9[];
extern const u32 gMonPalette_Spewpa10[];
extern const u32 gMonPalette_Spewpa11[];
extern const u32 gMonPalette_Spewpa12[];
extern const u32 gMonPalette_Spewpa13[];
extern const u32 gMonPalette_Spewpa14[];
extern const u32 gMonPalette_Spewpa15[];
extern const u32 gMonPalette_Spewpa16[];
extern const u32 gMonPalette_Spewpa17[];
extern const u32 gMonPalette_Spewpa18[];
extern const u32 gMonPalette_Spewpa19[];
extern const u32 gMonPalette_Spewpa20[];
extern const u32 gMonPalette_Raticate3[];
extern const u32 gMonPalette_Gumshoos2[];
extern const u32 gMonPalette_Vikavolt2[];
extern const u32 gMonPalette_Lurantis2[];
extern const u32 gMonPalette_Salazzle2[];
extern const u32 gMonPalette_Mimikyu3[];
extern const u32 gMonPalette_Kommoo2[];
extern const u32 gMonPalette_Marowak3[];
extern const u32 gMonPalette_Ribombee2[];
extern const u32 gMonPalette_Araquanid2[];
extern const u32 gMonPalette_Togedemaru2[];
extern const u32 gMonPalette_Pikachu16[];
extern const u32 gMonPalette_Eevee2[];
extern const u32 gMonPalette_Venusaur3[];
extern const u32 gMonPalette_Blastoise3[];
extern const u32 gMonPalette_Charizard4[];
extern const u32 gMonPalette_Butterfree2[];
extern const u32 gMonPalette_Pikachu17[];
extern const u32 gMonPalette_Meowth4[];
extern const u32 gMonPalette_Machamp2[];
extern const u32 gMonPalette_Gengar3[];
extern const u32 gMonPalette_Kingler2[];
extern const u32 gMonPalette_Lapras2[];
extern const u32 gMonPalette_Eevee3[];
extern const u32 gMonPalette_Snorlax2[];
extern const u32 gMonPalette_Garbodor2[];
extern const u32 gMonPalette_Melmetal2[];
extern const u32 gMonPalette_Rillaboom2[];
extern const u32 gMonPalette_Cinderace2[];
extern const u32 gMonPalette_Inteleon2[];
extern const u32 gMonPalette_Corviknigh2[];
extern const u32 gMonPalette_Orbeetle2[];
extern const u32 gMonPalette_Drednaw2[];
extern const u32 gMonPalette_Coalossal2[];
extern const u32 gMonPalette_Flapple2[];
extern const u32 gMonPalette_Appletun2[];
extern const u32 gMonPalette_Sandaconda2[];
extern const u32 gMonPalette_Toxtricity3[];
extern const u32 gMonPalette_Toxtricity4[];
extern const u32 gMonPalette_Centiskorc2[];
extern const u32 gMonPalette_Hatterene2[];
extern const u32 gMonPalette_Grimmsnarl2[];
extern const u32 gMonPalette_Alcremie64[];
extern const u32 gMonPalette_Copperajah2[];
extern const u32 gMonPalette_Duraludon2[];
extern const u32 gMonPalette_Urshifu3[];
extern const u32 gMonPalette_Urshifu4[];
extern const u32 gMonPalette_Mimikyu4[];

const struct CompressedSpritePalette gMonPaletteTable_[] =
{
	SPECIES_PAL(NONE, gMonPalette_CircledQuestionMark),
	SPECIES_PAL(BULBASAUR, gMonPalette_Bulbasaur),
	SPECIES_PAL(IVYSAUR, gMonPalette_Ivysaur),
	SPECIES_PAL(VENUSAUR, gMonPalette_Venusaur),
	SPECIES_PAL(CHARMANDER, gMonPalette_Charmander),
	SPECIES_PAL(CHARMELEON, gMonPalette_Charmeleon),
	SPECIES_PAL(CHARIZARD, gMonPalette_Charizard),
	SPECIES_PAL(SQUIRTLE, gMonPalette_Squirtle),
	SPECIES_PAL(WARTORTLE, gMonPalette_Wartortle),
	SPECIES_PAL(BLASTOISE, gMonPalette_Blastoise),
	SPECIES_PAL(CATERPIE, gMonPalette_Caterpie),
	SPECIES_PAL(METAPOD, gMonPalette_Metapod),
	SPECIES_PAL(BUTTERFREE, gMonPalette_Butterfree),
	SPECIES_PAL(WEEDLE, gMonPalette_Weedle),
	SPECIES_PAL(KAKUNA, gMonPalette_Kakuna),
	SPECIES_PAL(BEEDRILL, gMonPalette_Beedrill),
	SPECIES_PAL(PIDGEY, gMonPalette_Pidgey),
	SPECIES_PAL(PIDGEOTTO, gMonPalette_Pidgeotto),
	SPECIES_PAL(PIDGEOT, gMonPalette_Pidgeot),
	SPECIES_PAL(RATTATA, gMonPalette_Rattata),
	SPECIES_PAL(RATICATE, gMonPalette_Raticate),
	SPECIES_PAL(SPEAROW, gMonPalette_Spearow),
	SPECIES_PAL(FEAROW, gMonPalette_Fearow),
	SPECIES_PAL(EKANS, gMonPalette_Ekans),
	SPECIES_PAL(ARBOK, gMonPalette_Arbok),
	SPECIES_PAL(PIKACHU, gMonPalette_Pikachu),
	SPECIES_PAL(RAICHU, gMonPalette_Raichu),
	SPECIES_PAL(SANDSHREW, gMonPalette_Sandshrew),
	SPECIES_PAL(SANDSLASH, gMonPalette_Sandslash),
	SPECIES_PAL(NIDORANSF, gMonPalette_Nidoransf),
	SPECIES_PAL(NIDORINA, gMonPalette_Nidorina),
	SPECIES_PAL(NIDOQUEEN, gMonPalette_Nidoqueen),
	SPECIES_PAL(NIDORANSM, gMonPalette_Nidoransm),
	SPECIES_PAL(NIDORINO, gMonPalette_Nidorino),
	SPECIES_PAL(NIDOKING, gMonPalette_Nidoking),
	SPECIES_PAL(CLEFAIRY, gMonPalette_Clefairy),
	SPECIES_PAL(CLEFABLE, gMonPalette_Clefable),
	SPECIES_PAL(VULPIX, gMonPalette_Vulpix),
	SPECIES_PAL(NINETALES, gMonPalette_Ninetales),
	SPECIES_PAL(JIGGLYPUFF, gMonPalette_Jigglypuff),
	SPECIES_PAL(WIGGLYTUFF, gMonPalette_Wigglytuff),
	SPECIES_PAL(ZUBAT, gMonPalette_Zubat),
	SPECIES_PAL(GOLBAT, gMonPalette_Golbat),
	SPECIES_PAL(ODDISH, gMonPalette_Oddish),
	SPECIES_PAL(GLOOM, gMonPalette_Gloom),
	SPECIES_PAL(VILEPLUME, gMonPalette_Vileplume),
	SPECIES_PAL(PARAS, gMonPalette_Paras),
	SPECIES_PAL(PARASECT, gMonPalette_Parasect),
	SPECIES_PAL(VENONAT, gMonPalette_Venonat),
	SPECIES_PAL(VENOMOTH, gMonPalette_Venomoth),
	SPECIES_PAL(DIGLETT, gMonPalette_Diglett),
	SPECIES_PAL(DUGTRIO, gMonPalette_Dugtrio),
	SPECIES_PAL(MEOWTH, gMonPalette_Meowth),
	SPECIES_PAL(PERSIAN, gMonPalette_Persian),
	SPECIES_PAL(PSYDUCK, gMonPalette_Psyduck),
	SPECIES_PAL(GOLDUCK, gMonPalette_Golduck),
	SPECIES_PAL(MANKEY, gMonPalette_Mankey),
	SPECIES_PAL(PRIMEAPE, gMonPalette_Primeape),
	SPECIES_PAL(GROWLITHE, gMonPalette_Growlithe),
	SPECIES_PAL(ARCANINE, gMonPalette_Arcanine),
	SPECIES_PAL(POLIWAG, gMonPalette_Poliwag),
	SPECIES_PAL(POLIWHIRL, gMonPalette_Poliwhirl),
	SPECIES_PAL(POLIWRATH, gMonPalette_Poliwrath),
	SPECIES_PAL(ABRA, gMonPalette_Abra),
	SPECIES_PAL(KADABRA, gMonPalette_Kadabra),
	SPECIES_PAL(ALAKAZAM, gMonPalette_Alakazam),
	SPECIES_PAL(MACHOP, gMonPalette_Machop),
	SPECIES_PAL(MACHOKE, gMonPalette_Machoke),
	SPECIES_PAL(MACHAMP, gMonPalette_Machamp),
	SPECIES_PAL(BELLSPROUT, gMonPalette_Bellsprout),
	SPECIES_PAL(WEEPINBELL, gMonPalette_Weepinbell),
	SPECIES_PAL(VICTREEBEL, gMonPalette_Victreebel),
	SPECIES_PAL(TENTACOOL, gMonPalette_Tentacool),
	SPECIES_PAL(TENTACRUEL, gMonPalette_Tentacruel),
	SPECIES_PAL(GEODUDE, gMonPalette_Geodude),
	SPECIES_PAL(GRAVELER, gMonPalette_Graveler),
	SPECIES_PAL(GOLEM, gMonPalette_Golem),
	SPECIES_PAL(PONYTA, gMonPalette_Ponyta),
	SPECIES_PAL(RAPIDASH, gMonPalette_Rapidash),
	SPECIES_PAL(SLOWPOKE, gMonPalette_Slowpoke),
	SPECIES_PAL(SLOWBRO, gMonPalette_Slowbro),
	SPECIES_PAL(MAGNEMITE, gMonPalette_Magnemite),
	SPECIES_PAL(MAGNETON, gMonPalette_Magneton),
	SPECIES_PAL(FARFETCHD, gMonPalette_Farfetchd),
	SPECIES_PAL(DODUO, gMonPalette_Doduo),
	SPECIES_PAL(DODRIO, gMonPalette_Dodrio),
	SPECIES_PAL(SEEL, gMonPalette_Seel),
	SPECIES_PAL(DEWGONG, gMonPalette_Dewgong),
	SPECIES_PAL(GRIMER, gMonPalette_Grimer),
	SPECIES_PAL(MUK, gMonPalette_Muk),
	SPECIES_PAL(SHELLDER, gMonPalette_Shellder),
	SPECIES_PAL(CLOYSTER, gMonPalette_Cloyster),
	SPECIES_PAL(GASTLY, gMonPalette_Gastly),
	SPECIES_PAL(HAUNTER, gMonPalette_Haunter),
	SPECIES_PAL(GENGAR, gMonPalette_Gengar),
	SPECIES_PAL(ONIX, gMonPalette_Onix),
	SPECIES_PAL(DROWZEE, gMonPalette_Drowzee),
	SPECIES_PAL(HYPNO, gMonPalette_Hypno),
	SPECIES_PAL(KRABBY, gMonPalette_Krabby),
	SPECIES_PAL(KINGLER, gMonPalette_Kingler),
	SPECIES_PAL(VOLTORB, gMonPalette_Voltorb),
	SPECIES_PAL(ELECTRODE, gMonPalette_Electrode),
	SPECIES_PAL(EXEGGCUTE, gMonPalette_Exeggcute),
	SPECIES_PAL(EXEGGUTOR, gMonPalette_Exeggutor),
	SPECIES_PAL(CUBONE, gMonPalette_Cubone),
	SPECIES_PAL(MAROWAK, gMonPalette_Marowak),
	SPECIES_PAL(HITMONLEE, gMonPalette_Hitmonlee),
	SPECIES_PAL(HITMONCHAN, gMonPalette_Hitmonchan),
	SPECIES_PAL(LICKITUNG, gMonPalette_Lickitung),
	SPECIES_PAL(KOFFING, gMonPalette_Koffing),
	SPECIES_PAL(WEEZING, gMonPalette_Weezing),
	SPECIES_PAL(RHYHORN, gMonPalette_Rhyhorn),
	SPECIES_PAL(RHYDON, gMonPalette_Rhydon),
	SPECIES_PAL(CHANSEY, gMonPalette_Chansey),
	SPECIES_PAL(TANGELA, gMonPalette_Tangela),
	SPECIES_PAL(KANGASKHAN, gMonPalette_Kangaskhan),
	SPECIES_PAL(HORSEA, gMonPalette_Horsea),
	SPECIES_PAL(SEADRA, gMonPalette_Seadra),
	SPECIES_PAL(GOLDEEN, gMonPalette_Goldeen),
	SPECIES_PAL(SEAKING, gMonPalette_Seaking),
	SPECIES_PAL(STARYU, gMonPalette_Staryu),
	SPECIES_PAL(STARMIE, gMonPalette_Starmie),
	SPECIES_PAL(MRMIME, gMonPalette_MrMime),
	SPECIES_PAL(SCYTHER, gMonPalette_Scyther),
	SPECIES_PAL(JYNX, gMonPalette_Jynx),
	SPECIES_PAL(ELECTABUZZ, gMonPalette_Electabuzz),
	SPECIES_PAL(MAGMAR, gMonPalette_Magmar),
	SPECIES_PAL(PINSIR, gMonPalette_Pinsir),
	SPECIES_PAL(TAUROS, gMonPalette_Tauros),
	SPECIES_PAL(MAGIKARP, gMonPalette_Magikarp),
	SPECIES_PAL(GYARADOS, gMonPalette_Gyarados),
	SPECIES_PAL(LAPRAS, gMonPalette_Lapras),
	SPECIES_PAL(DITTO, gMonPalette_Ditto),
	SPECIES_PAL(EEVEE, gMonPalette_Eevee),
	SPECIES_PAL(VAPOREON, gMonPalette_Vaporeon),
	SPECIES_PAL(JOLTEON, gMonPalette_Jolteon),
	SPECIES_PAL(FLAREON, gMonPalette_Flareon),
	SPECIES_PAL(PORYGON, gMonPalette_Porygon),
	SPECIES_PAL(OMANYTE, gMonPalette_Omanyte),
	SPECIES_PAL(OMASTAR, gMonPalette_Omastar),
	SPECIES_PAL(KABUTO, gMonPalette_Kabuto),
	SPECIES_PAL(KABUTOPS, gMonPalette_Kabutops),
	SPECIES_PAL(AERODACTYL, gMonPalette_Aerodactyl),
	SPECIES_PAL(SNORLAX, gMonPalette_Snorlax),
	SPECIES_PAL(ARTICUNO, gMonPalette_Articuno),
	SPECIES_PAL(ZAPDOS, gMonPalette_Zapdos),
	SPECIES_PAL(MOLTRES, gMonPalette_Moltres),
	SPECIES_PAL(DRATINI, gMonPalette_Dratini),
	SPECIES_PAL(DRAGONAIR, gMonPalette_Dragonair),
	SPECIES_PAL(DRAGONITE, gMonPalette_Dragonite),
	SPECIES_PAL(MEWTWO, gMonPalette_Mewtwo),
	SPECIES_PAL(MEW, gMonPalette_Mew),
	SPECIES_PAL(CHIKORITA, gMonPalette_Chikorita),
	SPECIES_PAL(BAYLEEF, gMonPalette_Bayleef),
	SPECIES_PAL(MEGANIUM, gMonPalette_Meganium),
	SPECIES_PAL(CYNDAQUIL, gMonPalette_Cyndaquil),
	SPECIES_PAL(QUILAVA, gMonPalette_Quilava),
	SPECIES_PAL(TYPHLOSION, gMonPalette_Typhlosion),
	SPECIES_PAL(TOTODILE, gMonPalette_Totodile),
	SPECIES_PAL(CROCONAW, gMonPalette_Croconaw),
	SPECIES_PAL(FERALIGATR, gMonPalette_Feraligatr),
	SPECIES_PAL(SENTRET, gMonPalette_Sentret),
	SPECIES_PAL(FURRET, gMonPalette_Furret),
	SPECIES_PAL(HOOTHOOT, gMonPalette_Hoothoot),
	SPECIES_PAL(NOCTOWL, gMonPalette_Noctowl),
	SPECIES_PAL(LEDYBA, gMonPalette_Ledyba),
	SPECIES_PAL(LEDIAN, gMonPalette_Ledian),
	SPECIES_PAL(SPINARAK, gMonPalette_Spinarak),
	SPECIES_PAL(ARIADOS, gMonPalette_Ariados),
	SPECIES_PAL(CROBAT, gMonPalette_Crobat),
	SPECIES_PAL(CHINCHOU, gMonPalette_Chinchou),
	SPECIES_PAL(LANTURN, gMonPalette_Lanturn),
	SPECIES_PAL(PICHU, gMonPalette_Pichu),
	SPECIES_PAL(CLEFFA, gMonPalette_Cleffa),
	SPECIES_PAL(IGGLYBUFF, gMonPalette_Igglybuff),
	SPECIES_PAL(TOGEPI, gMonPalette_Togepi),
	SPECIES_PAL(TOGETIC, gMonPalette_Togetic),
	SPECIES_PAL(NATU, gMonPalette_Natu),
	SPECIES_PAL(XATU, gMonPalette_Xatu),
	SPECIES_PAL(MAREEP, gMonPalette_Mareep),
	SPECIES_PAL(FLAAFFY, gMonPalette_Flaaffy),
	SPECIES_PAL(AMPHAROS, gMonPalette_Ampharos),
	SPECIES_PAL(BELLOSSOM, gMonPalette_Bellossom),
	SPECIES_PAL(MARILL, gMonPalette_Marill),
	SPECIES_PAL(AZUMARILL, gMonPalette_Azumarill),
	SPECIES_PAL(SUDOWOODO, gMonPalette_Sudowoodo),
	SPECIES_PAL(POLITOED, gMonPalette_Politoed),
	SPECIES_PAL(HOPPIP, gMonPalette_Hoppip),
	SPECIES_PAL(SKIPLOOM, gMonPalette_Skiploom),
	SPECIES_PAL(JUMPLUFF, gMonPalette_Jumpluff),
	SPECIES_PAL(AIPOM, gMonPalette_Aipom),
	SPECIES_PAL(SUNKERN, gMonPalette_Sunkern),
	SPECIES_PAL(SUNFLORA, gMonPalette_Sunflora),
	SPECIES_PAL(YANMA, gMonPalette_Yanma),
	SPECIES_PAL(WOOPER, gMonPalette_Wooper),
	SPECIES_PAL(QUAGSIRE, gMonPalette_Quagsire),
	SPECIES_PAL(ESPEON, gMonPalette_Espeon),
	SPECIES_PAL(UMBREON, gMonPalette_Umbreon),
	SPECIES_PAL(MURKROW, gMonPalette_Murkrow),
	SPECIES_PAL(SLOWKING, gMonPalette_Slowking),
	SPECIES_PAL(MISDREAVUS, gMonPalette_Misdreavus),
	SPECIES_PAL(UNOWN, gMonPalette_Unown),
	SPECIES_PAL(WOBBUFFET, gMonPalette_Wobbuffet),
	SPECIES_PAL(GIRAFARIG, gMonPalette_Girafarig),
	SPECIES_PAL(PINECO, gMonPalette_Pineco),
	SPECIES_PAL(FORRETRESS, gMonPalette_Forretress),
	SPECIES_PAL(DUNSPARCE, gMonPalette_Dunsparce),
	SPECIES_PAL(GLIGAR, gMonPalette_Gligar),
	SPECIES_PAL(STEELIX, gMonPalette_Steelix),
	SPECIES_PAL(SNUBBULL, gMonPalette_Snubbull),
	SPECIES_PAL(GRANBULL, gMonPalette_Granbull),
	SPECIES_PAL(QWILFISH, gMonPalette_Qwilfish),
	SPECIES_PAL(SCIZOR, gMonPalette_Scizor),
	SPECIES_PAL(SHUCKLE, gMonPalette_Shuckle),
	SPECIES_PAL(HERACROSS, gMonPalette_Heracross),
	SPECIES_PAL(SNEASEL, gMonPalette_Sneasel),
	SPECIES_PAL(TEDDIURSA, gMonPalette_Teddiursa),
	SPECIES_PAL(URSARING, gMonPalette_Ursaring),
	SPECIES_PAL(SLUGMA, gMonPalette_Slugma),
	SPECIES_PAL(MAGCARGO, gMonPalette_Magcargo),
	SPECIES_PAL(SWINUB, gMonPalette_Swinub),
	SPECIES_PAL(PILOSWINE, gMonPalette_Piloswine),
	SPECIES_PAL(CORSOLA, gMonPalette_Corsola),
	SPECIES_PAL(REMORAID, gMonPalette_Remoraid),
	SPECIES_PAL(OCTILLERY, gMonPalette_Octillery),
	SPECIES_PAL(DELIBIRD, gMonPalette_Delibird),
	SPECIES_PAL(MANTINE, gMonPalette_Mantine),
	SPECIES_PAL(SKARMORY, gMonPalette_Skarmory),
	SPECIES_PAL(HOUNDOUR, gMonPalette_Houndour),
	SPECIES_PAL(HOUNDOOM, gMonPalette_Houndoom),
	SPECIES_PAL(KINGDRA, gMonPalette_Kingdra),
	SPECIES_PAL(PHANPY, gMonPalette_Phanpy),
	SPECIES_PAL(DONPHAN, gMonPalette_Donphan),
	SPECIES_PAL(PORYGON2, gMonPalette_Porygon2),
	SPECIES_PAL(STANTLER, gMonPalette_Stantler),
	SPECIES_PAL(SMEARGLE, gMonPalette_Smeargle),
	SPECIES_PAL(TYROGUE, gMonPalette_Tyrogue),
	SPECIES_PAL(HITMONTOP, gMonPalette_Hitmontop),
	SPECIES_PAL(SMOOCHUM, gMonPalette_Smoochum),
	SPECIES_PAL(ELEKID, gMonPalette_Elekid),
	SPECIES_PAL(MAGBY, gMonPalette_Magby),
	SPECIES_PAL(MILTANK, gMonPalette_Miltank),
	SPECIES_PAL(BLISSEY, gMonPalette_Blissey),
	SPECIES_PAL(RAIKOU, gMonPalette_Raikou),
	SPECIES_PAL(ENTEI, gMonPalette_Entei),
	SPECIES_PAL(SUICUNE, gMonPalette_Suicune),
	SPECIES_PAL(LARVITAR, gMonPalette_Larvitar),
	SPECIES_PAL(PUPITAR, gMonPalette_Pupitar),
	SPECIES_PAL(TYRANITAR, gMonPalette_Tyranitar),
	SPECIES_PAL(LUGIA, gMonPalette_Lugia),
	SPECIES_PAL(HOOH, gMonPalette_HoOh),
	SPECIES_PAL(CELEBI, gMonPalette_Celebi),
	SPECIES_PAL(TREECKO, gMonPalette_Treecko),
	SPECIES_PAL(GROVYLE, gMonPalette_Grovyle),
	SPECIES_PAL(SCEPTILE, gMonPalette_Sceptile),
	SPECIES_PAL(TORCHIC, gMonPalette_Torchic),
	SPECIES_PAL(COMBUSKEN, gMonPalette_Combusken),
	SPECIES_PAL(BLAZIKEN, gMonPalette_Blaziken),
	SPECIES_PAL(MUDKIP, gMonPalette_Mudkip),
	SPECIES_PAL(MARSHTOMP, gMonPalette_Marshtomp),
	SPECIES_PAL(SWAMPERT, gMonPalette_Swampert),
	SPECIES_PAL(POOCHYENA, gMonPalette_Poochyena),
	SPECIES_PAL(MIGHTYENA, gMonPalette_Mightyena),
	SPECIES_PAL(ZIGZAGOON, gMonPalette_Zigzagoon),
	SPECIES_PAL(LINOONE, gMonPalette_Linoone),
	SPECIES_PAL(WURMPLE, gMonPalette_Wurmple),
	SPECIES_PAL(SILCOON, gMonPalette_Silcoon),
	SPECIES_PAL(BEAUTIFLY, gMonPalette_Beautifly),
	SPECIES_PAL(CASCOON, gMonPalette_Cascoon),
	SPECIES_PAL(DUSTOX, gMonPalette_Dustox),
	SPECIES_PAL(LOTAD, gMonPalette_Lotad),
	SPECIES_PAL(LOMBRE, gMonPalette_Lombre),
	SPECIES_PAL(LUDICOLO, gMonPalette_Ludicolo),
	SPECIES_PAL(SEEDOT, gMonPalette_Seedot),
	SPECIES_PAL(NUZLEAF, gMonPalette_Nuzleaf),
	SPECIES_PAL(SHIFTRY, gMonPalette_Shiftry),
	SPECIES_PAL(TAILLOW, gMonPalette_Taillow),
	SPECIES_PAL(SWELLOW, gMonPalette_Swellow),
	SPECIES_PAL(WINGULL, gMonPalette_Wingull),
	SPECIES_PAL(PELIPPER, gMonPalette_Pelipper),
	SPECIES_PAL(RALTS, gMonPalette_Ralts),
	SPECIES_PAL(KIRLIA, gMonPalette_Kirlia),
	SPECIES_PAL(GARDEVOIR, gMonPalette_Gardevoir),
	SPECIES_PAL(SURSKIT, gMonPalette_Surskit),
	SPECIES_PAL(MASQUERAIN, gMonPalette_Masquerain),
	SPECIES_PAL(SHROOMISH, gMonPalette_Shroomish),
	SPECIES_PAL(BRELOOM, gMonPalette_Breloom),
	SPECIES_PAL(SLAKOTH, gMonPalette_Slakoth),
	SPECIES_PAL(VIGOROTH, gMonPalette_Vigoroth),
	SPECIES_PAL(SLAKING, gMonPalette_Slaking),
	SPECIES_PAL(NINCADA, gMonPalette_Nincada),
	SPECIES_PAL(NINJASK, gMonPalette_Ninjask),
	SPECIES_PAL(SHEDINJA, gMonPalette_Shedinja),
	SPECIES_PAL(WHISMUR, gMonPalette_Whismur),
	SPECIES_PAL(LOUDRED, gMonPalette_Loudred),
	SPECIES_PAL(EXPLOUD, gMonPalette_Exploud),
	SPECIES_PAL(MAKUHITA, gMonPalette_Makuhita),
	SPECIES_PAL(HARIYAMA, gMonPalette_Hariyama),
	SPECIES_PAL(AZURILL, gMonPalette_Azurill),
	SPECIES_PAL(NOSEPASS, gMonPalette_Nosepass),
	SPECIES_PAL(SKITTY, gMonPalette_Skitty),
	SPECIES_PAL(DELCATTY, gMonPalette_Delcatty),
	SPECIES_PAL(SABLEYE, gMonPalette_Sableye),
	SPECIES_PAL(MAWILE, gMonPalette_Mawile),
	SPECIES_PAL(ARON, gMonPalette_Aron),
	SPECIES_PAL(LAIRON, gMonPalette_Lairon),
	SPECIES_PAL(AGGRON, gMonPalette_Aggron),
	SPECIES_PAL(MEDITITE, gMonPalette_Meditite),
	SPECIES_PAL(MEDICHAM, gMonPalette_Medicham),
	SPECIES_PAL(ELECTRIKE, gMonPalette_Electrike),
	SPECIES_PAL(MANECTRIC, gMonPalette_Manectric),
	SPECIES_PAL(PLUSLE, gMonPalette_Plusle),
	SPECIES_PAL(MINUN, gMonPalette_Minun),
	SPECIES_PAL(VOLBEAT, gMonPalette_Volbeat),
	SPECIES_PAL(ILLUMISE, gMonPalette_Illumise),
	SPECIES_PAL(ROSELIA, gMonPalette_Roselia),
	SPECIES_PAL(GULPIN, gMonPalette_Gulpin),
	SPECIES_PAL(SWALOT, gMonPalette_Swalot),
	SPECIES_PAL(CARVANHA, gMonPalette_Carvanha),
	SPECIES_PAL(SHARPEDO, gMonPalette_Sharpedo),
	SPECIES_PAL(WAILMER, gMonPalette_Wailmer),
	SPECIES_PAL(WAILORD, gMonPalette_Wailord),
	SPECIES_PAL(NUMEL, gMonPalette_Numel),
	SPECIES_PAL(CAMERUPT, gMonPalette_Camerupt),
	SPECIES_PAL(TORKOAL, gMonPalette_Torkoal),
	SPECIES_PAL(SPOINK, gMonPalette_Spoink),
	SPECIES_PAL(GRUMPIG, gMonPalette_Grumpig),
	SPECIES_PAL(SPINDA, gMonPalette_Spinda),
	SPECIES_PAL(TRAPINCH, gMonPalette_Trapinch),
	SPECIES_PAL(VIBRAVA, gMonPalette_Vibrava),
	SPECIES_PAL(FLYGON, gMonPalette_Flygon),
	SPECIES_PAL(CACNEA, gMonPalette_Cacnea),
	SPECIES_PAL(CACTURNE, gMonPalette_Cacturne),
	SPECIES_PAL(SWABLU, gMonPalette_Swablu),
	SPECIES_PAL(ALTARIA, gMonPalette_Altaria),
	SPECIES_PAL(ZANGOOSE, gMonPalette_Zangoose),
	SPECIES_PAL(SEVIPER, gMonPalette_Seviper),
	SPECIES_PAL(LUNATONE, gMonPalette_Lunatone),
	SPECIES_PAL(SOLROCK, gMonPalette_Solrock),
	SPECIES_PAL(BARBOACH, gMonPalette_Barboach),
	SPECIES_PAL(WHISCASH, gMonPalette_Whiscash),
	SPECIES_PAL(CORPHISH, gMonPalette_Corphish),
	SPECIES_PAL(CRAWDAUNT, gMonPalette_Crawdaunt),
	SPECIES_PAL(BALTOY, gMonPalette_Baltoy),
	SPECIES_PAL(CLAYDOL, gMonPalette_Claydol),
	SPECIES_PAL(LILEEP, gMonPalette_Lileep),
	SPECIES_PAL(CRADILY, gMonPalette_Cradily),
	SPECIES_PAL(ANORITH, gMonPalette_Anorith),
	SPECIES_PAL(ARMALDO, gMonPalette_Armaldo),
	SPECIES_PAL(FEEBAS, gMonPalette_Feebas),
	SPECIES_PAL(MILOTIC, gMonPalette_Milotic),
	SPECIES_PAL(CASTFORM, gMonPalette_Castform),
	SPECIES_PAL(KECLEON, gMonPalette_Kecleon),
	SPECIES_PAL(SHUPPET, gMonPalette_Shuppet),
	SPECIES_PAL(BANETTE, gMonPalette_Banette),
	SPECIES_PAL(DUSKULL, gMonPalette_Duskull),
	SPECIES_PAL(DUSCLOPS, gMonPalette_Dusclops),
	SPECIES_PAL(TROPIUS, gMonPalette_Tropius),
	SPECIES_PAL(CHIMECHO, gMonPalette_Chimecho),
	SPECIES_PAL(ABSOL, gMonPalette_Absol),
	SPECIES_PAL(WYNAUT, gMonPalette_Wynaut),
	SPECIES_PAL(SNORUNT, gMonPalette_Snorunt),
	SPECIES_PAL(GLALIE, gMonPalette_Glalie),
	SPECIES_PAL(SPHEAL, gMonPalette_Spheal),
	SPECIES_PAL(SEALEO, gMonPalette_Sealeo),
	SPECIES_PAL(WALREIN, gMonPalette_Walrein),
	SPECIES_PAL(CLAMPERL, gMonPalette_Clamperl),
	SPECIES_PAL(HUNTAIL, gMonPalette_Huntail),
	SPECIES_PAL(GOREBYSS, gMonPalette_Gorebyss),
	SPECIES_PAL(RELICANTH, gMonPalette_Relicanth),
	SPECIES_PAL(LUVDISC, gMonPalette_Luvdisc),
	SPECIES_PAL(BAGON, gMonPalette_Bagon),
	SPECIES_PAL(SHELGON, gMonPalette_Shelgon),
	SPECIES_PAL(SALAMENCE, gMonPalette_Salamence),
	SPECIES_PAL(BELDUM, gMonPalette_Beldum),
	SPECIES_PAL(METANG, gMonPalette_Metang),
	SPECIES_PAL(METAGROSS, gMonPalette_Metagross),
	SPECIES_PAL(REGIROCK, gMonPalette_Regirock),
	SPECIES_PAL(REGICE, gMonPalette_Regice),
	SPECIES_PAL(REGISTEEL, gMonPalette_Registeel),
	SPECIES_PAL(LATIAS, gMonPalette_Latias),
	SPECIES_PAL(LATIOS, gMonPalette_Latios),
	SPECIES_PAL(KYOGRE, gMonPalette_Kyogre),
	SPECIES_PAL(GROUDON, gMonPalette_Groudon),
	SPECIES_PAL(RAYQUAZA, gMonPalette_Rayquaza),
	SPECIES_PAL(JIRACHI, gMonPalette_Jirachi),
	SPECIES_PAL(DEOXYS, gMonPalette_Deoxys),
	SPECIES_PAL(TURTWIG, gMonPalette_Turtwig),
	SPECIES_PAL(GROTLE, gMonPalette_Grotle),
	SPECIES_PAL(TORTERRA, gMonPalette_Torterra),
	SPECIES_PAL(CHIMCHAR, gMonPalette_Chimchar),
	SPECIES_PAL(MONFERNO, gMonPalette_Monferno),
	SPECIES_PAL(INFERNAPE, gMonPalette_Infernape),
	SPECIES_PAL(PIPLUP, gMonPalette_Piplup),
	SPECIES_PAL(PRINPLUP, gMonPalette_Prinplup),
	SPECIES_PAL(EMPOLEON, gMonPalette_Empoleon),
	SPECIES_PAL(STARLY, gMonPalette_Starly),
	SPECIES_PAL(STARAVIA, gMonPalette_Staravia),
	SPECIES_PAL(STARAPTOR, gMonPalette_Staraptor),
	SPECIES_PAL(BIDOOF, gMonPalette_Bidoof),
	SPECIES_PAL(BIBAREL, gMonPalette_Bibarel),
	SPECIES_PAL(KRICKETOT, gMonPalette_Kricketot),
	SPECIES_PAL(KRICKETUNE, gMonPalette_Kricketune),
	SPECIES_PAL(SHINX, gMonPalette_Shinx),
	SPECIES_PAL(LUXIO, gMonPalette_Luxio),
	SPECIES_PAL(LUXRAY, gMonPalette_Luxray),
	SPECIES_PAL(BUDEW, gMonPalette_Budew),
	SPECIES_PAL(ROSERADE, gMonPalette_Roserade),
	SPECIES_PAL(CRANIDOS, gMonPalette_Cranidos),
	SPECIES_PAL(RAMPARDOS, gMonPalette_Rampardos),
	SPECIES_PAL(SHIELDON, gMonPalette_Shieldon),
	SPECIES_PAL(BASTIODON, gMonPalette_Bastiodon),
	SPECIES_PAL(BURMY, gMonPalette_Burmy),
	SPECIES_PAL(WORMADAM, gMonPalette_Wormadam),
	SPECIES_PAL(MOTHIM, gMonPalette_Mothim),
	SPECIES_PAL(COMBEE, gMonPalette_Combee),
	SPECIES_PAL(VESPIQUEN, gMonPalette_Vespiquen),
	SPECIES_PAL(PACHIRISU, gMonPalette_Pachirisu),
	SPECIES_PAL(BUIZEL, gMonPalette_Buizel),
	SPECIES_PAL(FLOATZEL, gMonPalette_Floatzel),
	SPECIES_PAL(CHERUBI, gMonPalette_Cherubi),
	SPECIES_PAL(CHERRIM, gMonPalette_Cherrim),
	SPECIES_PAL(SHELLOS, gMonPalette_Shellos),
	SPECIES_PAL(GASTRODON, gMonPalette_Gastrodon),
	SPECIES_PAL(AMBIPOM, gMonPalette_Ambipom),
	SPECIES_PAL(DRIFLOON, gMonPalette_Drifloon),
	SPECIES_PAL(DRIFBLIM, gMonPalette_Drifblim),
	SPECIES_PAL(BUNEARY, gMonPalette_Buneary),
	SPECIES_PAL(LOPUNNY, gMonPalette_Lopunny),
	SPECIES_PAL(MISMAGIUS, gMonPalette_Mismagius),
	SPECIES_PAL(HONCHKROW, gMonPalette_Honchkrow),
	SPECIES_PAL(GLAMEOW, gMonPalette_Glameow),
	SPECIES_PAL(PURUGLY, gMonPalette_Purugly),
	SPECIES_PAL(CHINGLING, gMonPalette_Chingling),
	SPECIES_PAL(STUNKY, gMonPalette_Stunky),
	SPECIES_PAL(SKUNTANK, gMonPalette_Skuntank),
	SPECIES_PAL(BRONZOR, gMonPalette_Bronzor),
	SPECIES_PAL(BRONZONG, gMonPalette_Bronzong),
	SPECIES_PAL(BONSLY, gMonPalette_Bonsly),
	SPECIES_PAL(MIMEJR, gMonPalette_MimeJr),
	SPECIES_PAL(HAPPINY, gMonPalette_Happiny),
	SPECIES_PAL(CHATOT, gMonPalette_Chatot),
	SPECIES_PAL(SPIRITOMB, gMonPalette_Spiritomb),
	SPECIES_PAL(GIBLE, gMonPalette_Gible),
	SPECIES_PAL(GABITE, gMonPalette_Gabite),
	SPECIES_PAL(GARCHOMP, gMonPalette_Garchomp),
	SPECIES_PAL(MUNCHLAX, gMonPalette_Munchlax),
	SPECIES_PAL(RIOLU, gMonPalette_Riolu),
	SPECIES_PAL(LUCARIO, gMonPalette_Lucario),
	SPECIES_PAL(HIPPOPOTAS, gMonPalette_Hippopotas),
	SPECIES_PAL(HIPPOWDON, gMonPalette_Hippowdon),
	SPECIES_PAL(SKORUPI, gMonPalette_Skorupi),
	SPECIES_PAL(DRAPION, gMonPalette_Drapion),
	SPECIES_PAL(CROAGUNK, gMonPalette_Croagunk),
	SPECIES_PAL(TOXICROAK, gMonPalette_Toxicroak),
	SPECIES_PAL(CARNIVINE, gMonPalette_Carnivine),
	SPECIES_PAL(FINNEON, gMonPalette_Finneon),
	SPECIES_PAL(LUMINEON, gMonPalette_Lumineon),
	SPECIES_PAL(MANTYKE, gMonPalette_Mantyke),
	SPECIES_PAL(SNOVER, gMonPalette_Snover),
	SPECIES_PAL(ABOMASNOW, gMonPalette_Abomasnow),
	SPECIES_PAL(WEAVILE, gMonPalette_Weavile),
	SPECIES_PAL(MAGNEZONE, gMonPalette_Magnezone),
	SPECIES_PAL(LICKILICKY, gMonPalette_Lickilicky),
	SPECIES_PAL(RHYPERIOR, gMonPalette_Rhyperior),
	SPECIES_PAL(TANGROWTH, gMonPalette_Tangrowth),
	SPECIES_PAL(ELECTIVIRE, gMonPalette_Electivire),
	SPECIES_PAL(MAGMORTAR, gMonPalette_Magmortar),
	SPECIES_PAL(TOGEKISS, gMonPalette_Togekiss),
	SPECIES_PAL(YANMEGA, gMonPalette_Yanmega),
	SPECIES_PAL(LEAFEON, gMonPalette_Leafeon),
	SPECIES_PAL(GLACEON, gMonPalette_Glaceon),
	SPECIES_PAL(GLISCOR, gMonPalette_Gliscor),
	SPECIES_PAL(MAMOSWINE, gMonPalette_Mamoswine),
	SPECIES_PAL(PORYGONZ, gMonPalette_PorygonZ),
	SPECIES_PAL(GALLADE, gMonPalette_Gallade),
	SPECIES_PAL(PROBOPASS, gMonPalette_Probopass),
	SPECIES_PAL(DUSKNOIR, gMonPalette_Dusknoir),
	SPECIES_PAL(FROSLASS, gMonPalette_Froslass),
	SPECIES_PAL(ROTOM, gMonPalette_Rotom),
	SPECIES_PAL(UXIE, gMonPalette_Uxie),
	SPECIES_PAL(MESPRIT, gMonPalette_Mesprit),
	SPECIES_PAL(AZELF, gMonPalette_Azelf),
	SPECIES_PAL(DIALGA, gMonPalette_Dialga),
	SPECIES_PAL(PALKIA, gMonPalette_Palkia),
	SPECIES_PAL(HEATRAN, gMonPalette_Heatran),
	SPECIES_PAL(REGIGIGAS, gMonPalette_Regigigas),
	SPECIES_PAL(GIRATINA, gMonPalette_Giratina),
	SPECIES_PAL(CRESSELIA, gMonPalette_Cresselia),
	SPECIES_PAL(PHIONE, gMonPalette_Phione),
	SPECIES_PAL(MANAPHY, gMonPalette_Manaphy),
	SPECIES_PAL(DARKRAI, gMonPalette_Darkrai),
	SPECIES_PAL(SHAYMIN, gMonPalette_Shaymin),
	SPECIES_PAL(ARCEUS, gMonPalette_Arceus),
	SPECIES_PAL(VICTINI, gMonPalette_Victini),
	SPECIES_PAL(SNIVY, gMonPalette_Snivy),
	SPECIES_PAL(SERVINE, gMonPalette_Servine),
	SPECIES_PAL(SERPERIOR, gMonPalette_Serperior),
	SPECIES_PAL(TEPIG, gMonPalette_Tepig),
	SPECIES_PAL(PIGNITE, gMonPalette_Pignite),
	SPECIES_PAL(EMBOAR, gMonPalette_Emboar),
	SPECIES_PAL(OSHAWOTT, gMonPalette_Oshawott),
	SPECIES_PAL(DEWOTT, gMonPalette_Dewott),
	SPECIES_PAL(SAMUROTT, gMonPalette_Samurott),
	SPECIES_PAL(PATRAT, gMonPalette_Patrat),
	SPECIES_PAL(WATCHOG, gMonPalette_Watchog),
	SPECIES_PAL(LILLIPUP, gMonPalette_Lillipup),
	SPECIES_PAL(HERDIER, gMonPalette_Herdier),
	SPECIES_PAL(STOUTLAND, gMonPalette_Stoutland),
	SPECIES_PAL(PURRLOIN, gMonPalette_Purrloin),
	SPECIES_PAL(LIEPARD, gMonPalette_Liepard),
	SPECIES_PAL(PANSAGE, gMonPalette_Pansage),
	SPECIES_PAL(SIMISAGE, gMonPalette_Simisage),
	SPECIES_PAL(PANSEAR, gMonPalette_Pansear),
	SPECIES_PAL(SIMISEAR, gMonPalette_Simisear),
	SPECIES_PAL(PANPOUR, gMonPalette_Panpour),
	SPECIES_PAL(SIMIPOUR, gMonPalette_Simipour),
	SPECIES_PAL(MUNNA, gMonPalette_Munna),
	SPECIES_PAL(MUSHARNA, gMonPalette_Musharna),
	SPECIES_PAL(PIDOVE, gMonPalette_Pidove),
	SPECIES_PAL(TRANQUILL, gMonPalette_Tranquill),
	SPECIES_PAL(UNFEZANT, gMonPalette_Unfezant),
	SPECIES_PAL(BLITZLE, gMonPalette_Blitzle),
	SPECIES_PAL(ZEBSTRIKA, gMonPalette_Zebstrika),
	SPECIES_PAL(ROGGENROLA, gMonPalette_Roggenrola),
	SPECIES_PAL(BOLDORE, gMonPalette_Boldore),
	SPECIES_PAL(GIGALITH, gMonPalette_Gigalith),
	SPECIES_PAL(WOOBAT, gMonPalette_Woobat),
	SPECIES_PAL(SWOOBAT, gMonPalette_Swoobat),
	SPECIES_PAL(DRILBUR, gMonPalette_Drilbur),
	SPECIES_PAL(EXCADRILL, gMonPalette_Excadrill),
	SPECIES_PAL(AUDINO, gMonPalette_Audino),
	SPECIES_PAL(TIMBURR, gMonPalette_Timburr),
	SPECIES_PAL(GURDURR, gMonPalette_Gurdurr),
	SPECIES_PAL(CONKELDURR, gMonPalette_Conkeldurr),
	SPECIES_PAL(TYMPOLE, gMonPalette_Tympole),
	SPECIES_PAL(PALPITOAD, gMonPalette_Palpitoad),
	SPECIES_PAL(SEISMITOAD, gMonPalette_Seismitoad),
	SPECIES_PAL(THROH, gMonPalette_Throh),
	SPECIES_PAL(SAWK, gMonPalette_Sawk),
	SPECIES_PAL(SEWADDLE, gMonPalette_Sewaddle),
	SPECIES_PAL(SWADLOON, gMonPalette_Swadloon),
	SPECIES_PAL(LEAVANNY, gMonPalette_Leavanny),
	SPECIES_PAL(VENIPEDE, gMonPalette_Venipede),
	SPECIES_PAL(WHIRLIPEDE, gMonPalette_Whirlipede),
	SPECIES_PAL(SCOLIPEDE, gMonPalette_Scolipede),
	SPECIES_PAL(COTTONEE, gMonPalette_Cottonee),
	SPECIES_PAL(WHIMSICOTT, gMonPalette_Whimsicott),
	SPECIES_PAL(PETILIL, gMonPalette_Petilil),
	SPECIES_PAL(LILLIGANT, gMonPalette_Lilligant),
	SPECIES_PAL(BASCULIN, gMonPalette_Basculin),
	SPECIES_PAL(SANDILE, gMonPalette_Sandile),
	SPECIES_PAL(KROKOROK, gMonPalette_Krokorok),
	SPECIES_PAL(KROOKODILE, gMonPalette_Krookodile),
	SPECIES_PAL(DARUMAKA, gMonPalette_Darumaka),
	SPECIES_PAL(DARMANITAN, gMonPalette_Darmanitan),
	SPECIES_PAL(MARACTUS, gMonPalette_Maractus),
	SPECIES_PAL(DWEBBLE, gMonPalette_Dwebble),
	SPECIES_PAL(CRUSTLE, gMonPalette_Crustle),
	SPECIES_PAL(SCRAGGY, gMonPalette_Scraggy),
	SPECIES_PAL(SCRAFTY, gMonPalette_Scrafty),
	SPECIES_PAL(SIGILYPH, gMonPalette_Sigilyph),
	SPECIES_PAL(YAMASK, gMonPalette_Yamask),
	SPECIES_PAL(COFAGRIGUS, gMonPalette_Cofagrigus),
	SPECIES_PAL(TIRTOUGA, gMonPalette_Tirtouga),
	SPECIES_PAL(CARRACOSTA, gMonPalette_Carracosta),
	SPECIES_PAL(ARCHEN, gMonPalette_Archen),
	SPECIES_PAL(ARCHEOPS, gMonPalette_Archeops),
	SPECIES_PAL(TRUBBISH, gMonPalette_Trubbish),
	SPECIES_PAL(GARBODOR, gMonPalette_Garbodor),
	SPECIES_PAL(ZORUA, gMonPalette_Zorua),
	SPECIES_PAL(ZOROARK, gMonPalette_Zoroark),
	SPECIES_PAL(MINCCINO, gMonPalette_Minccino),
	SPECIES_PAL(CINCCINO, gMonPalette_Cinccino),
	SPECIES_PAL(GOTHITA, gMonPalette_Gothita),
	SPECIES_PAL(GOTHORITA, gMonPalette_Gothorita),
	SPECIES_PAL(GOTHITELLE, gMonPalette_Gothitelle),
	SPECIES_PAL(SOLOSIS, gMonPalette_Solosis),
	SPECIES_PAL(DUOSION, gMonPalette_Duosion),
	SPECIES_PAL(REUNICLUS, gMonPalette_Reuniclus),
	SPECIES_PAL(DUCKLETT, gMonPalette_Ducklett),
	SPECIES_PAL(SWANNA, gMonPalette_Swanna),
	SPECIES_PAL(VANILLITE, gMonPalette_Vanillite),
	SPECIES_PAL(VANILLISH, gMonPalette_Vanillish),
	SPECIES_PAL(VANILLUXE, gMonPalette_Vanilluxe),
	SPECIES_PAL(DEERLING, gMonPalette_Deerling),
	SPECIES_PAL(SAWSBUCK, gMonPalette_Sawsbuck),
	SPECIES_PAL(EMOLGA, gMonPalette_Emolga),
	SPECIES_PAL(KARRABLAST, gMonPalette_Karrablast),
	SPECIES_PAL(ESCAVALIER, gMonPalette_Escavalier),
	SPECIES_PAL(FOONGUS, gMonPalette_Foongus),
	SPECIES_PAL(AMOONGUSS, gMonPalette_Amoonguss),
	SPECIES_PAL(FRILLISH, gMonPalette_Frillish),
	SPECIES_PAL(JELLICENT, gMonPalette_Jellicent),
	SPECIES_PAL(ALOMOMOLA, gMonPalette_Alomomola),
	SPECIES_PAL(JOLTIK, gMonPalette_Joltik),
	SPECIES_PAL(GALVANTULA, gMonPalette_Galvantula),
	SPECIES_PAL(FERROSEED, gMonPalette_Ferroseed),
	SPECIES_PAL(FERROTHORN, gMonPalette_Ferrothorn),
	SPECIES_PAL(KLINK, gMonPalette_Klink),
	SPECIES_PAL(KLANG, gMonPalette_Klang),
	SPECIES_PAL(KLINKLANG, gMonPalette_Klinklang),
	SPECIES_PAL(TYNAMO, gMonPalette_Tynamo),
	SPECIES_PAL(EELEKTRIK, gMonPalette_Eelektrik),
	SPECIES_PAL(EELEKTROSS, gMonPalette_Eelektross),
	SPECIES_PAL(ELGYEM, gMonPalette_Elgyem),
	SPECIES_PAL(BEHEEYEM, gMonPalette_Beheeyem),
	SPECIES_PAL(LITWICK, gMonPalette_Litwick),
	SPECIES_PAL(LAMPENT, gMonPalette_Lampent),
	SPECIES_PAL(CHANDELURE, gMonPalette_Chandelure),
	SPECIES_PAL(AXEW, gMonPalette_Axew),
	SPECIES_PAL(FRAXURE, gMonPalette_Fraxure),
	SPECIES_PAL(HAXORUS, gMonPalette_Haxorus),
	SPECIES_PAL(CUBCHOO, gMonPalette_Cubchoo),
	SPECIES_PAL(BEARTIC, gMonPalette_Beartic),
	SPECIES_PAL(CRYOGONAL, gMonPalette_Cryogonal),
	SPECIES_PAL(SHELMET, gMonPalette_Shelmet),
	SPECIES_PAL(ACCELGOR, gMonPalette_Accelgor),
	SPECIES_PAL(STUNFISK, gMonPalette_Stunfisk),
	SPECIES_PAL(MIENFOO, gMonPalette_Mienfoo),
	SPECIES_PAL(MIENSHAO, gMonPalette_Mienshao),
	SPECIES_PAL(DRUDDIGON, gMonPalette_Druddigon),
	SPECIES_PAL(GOLETT, gMonPalette_Golett),
	SPECIES_PAL(GOLURK, gMonPalette_Golurk),
	SPECIES_PAL(PAWNIARD, gMonPalette_Pawniard),
	SPECIES_PAL(BISHARP, gMonPalette_Bisharp),
	SPECIES_PAL(BOUFFALANT, gMonPalette_Bouffalant),
	SPECIES_PAL(RUFFLET, gMonPalette_Rufflet),
	SPECIES_PAL(BRAVIARY, gMonPalette_Braviary),
	SPECIES_PAL(VULLABY, gMonPalette_Vullaby),
	SPECIES_PAL(MANDIBUZZ, gMonPalette_Mandibuzz),
	SPECIES_PAL(HEATMOR, gMonPalette_Heatmor),
	SPECIES_PAL(DURANT, gMonPalette_Durant),
	SPECIES_PAL(DEINO, gMonPalette_Deino),
	SPECIES_PAL(ZWEILOUS, gMonPalette_Zweilous),
	SPECIES_PAL(HYDREIGON, gMonPalette_Hydreigon),
	SPECIES_PAL(LARVESTA, gMonPalette_Larvesta),
	SPECIES_PAL(VOLCARONA, gMonPalette_Volcarona),
	SPECIES_PAL(COBALION, gMonPalette_Cobalion),
	SPECIES_PAL(TERRAKION, gMonPalette_Terrakion),
	SPECIES_PAL(VIRIZION, gMonPalette_Virizion),
	SPECIES_PAL(TORNADUS, gMonPalette_Tornadus),
	SPECIES_PAL(THUNDURUS, gMonPalette_Thundurus),
	SPECIES_PAL(RESHIRAM, gMonPalette_Reshiram),
	SPECIES_PAL(ZEKROM, gMonPalette_Zekrom),
	SPECIES_PAL(LANDORUS, gMonPalette_Landorus),
	SPECIES_PAL(KYUREM, gMonPalette_Kyurem),
	SPECIES_PAL(KELDEO, gMonPalette_Keldeo),
	SPECIES_PAL(MELOETTA, gMonPalette_Meloetta),
	SPECIES_PAL(GENESECT, gMonPalette_Genesect),
	SPECIES_PAL(CHESPIN, gMonPalette_Chespin),
	SPECIES_PAL(QUILLADIN, gMonPalette_Quilladin),
	SPECIES_PAL(CHESNAUGHT, gMonPalette_Chesnaught),
	SPECIES_PAL(FENNEKIN, gMonPalette_Fennekin),
	SPECIES_PAL(BRAIXEN, gMonPalette_Braixen),
	SPECIES_PAL(DELPHOX, gMonPalette_Delphox),
	SPECIES_PAL(FROAKIE, gMonPalette_Froakie),
	SPECIES_PAL(FROGADIER, gMonPalette_Frogadier),
	SPECIES_PAL(GRENINJA, gMonPalette_Greninja),
	SPECIES_PAL(BUNNELBY, gMonPalette_Bunnelby),
	SPECIES_PAL(DIGGERSBY, gMonPalette_Diggersby),
	SPECIES_PAL(FLETCHLING, gMonPalette_Fletchling),
	SPECIES_PAL(FLECHINDER, gMonPalette_Flechinder),
	SPECIES_PAL(TALONFLAME, gMonPalette_Talonflame),
	SPECIES_PAL(SCATTERBUG, gMonPalette_Scatterbug),
	SPECIES_PAL(SPEWPA, gMonPalette_Spewpa),
	SPECIES_PAL(VIVILLON, gMonPalette_Vivillon),
	SPECIES_PAL(LITLEO, gMonPalette_Litleo),
	SPECIES_PAL(PYROAR, gMonPalette_Pyroar),
	SPECIES_PAL(FLABEBE, gMonPalette_Flabebe),
	SPECIES_PAL(FLOETTE, gMonPalette_Floette),
	SPECIES_PAL(FLORGES, gMonPalette_Florges),
	SPECIES_PAL(SKIDDO, gMonPalette_Skiddo),
	SPECIES_PAL(GOGOAT, gMonPalette_Gogoat),
	SPECIES_PAL(PANCHAM, gMonPalette_Pancham),
	SPECIES_PAL(PANGORO, gMonPalette_Pangoro),
	SPECIES_PAL(FURFROU, gMonPalette_Furfrou),
	SPECIES_PAL(ESPURR, gMonPalette_Espurr),
	SPECIES_PAL(MEOWSTIC, gMonPalette_Meowstic),
	SPECIES_PAL(HONEDGE, gMonPalette_Honedge),
	SPECIES_PAL(DOUBLADE, gMonPalette_Doublade),
	SPECIES_PAL(AEGISLASH, gMonPalette_Aegislash),
	SPECIES_PAL(SPRITZEE, gMonPalette_Spritzee),
	SPECIES_PAL(AROMATISSE, gMonPalette_Aromatisse),
	SPECIES_PAL(SWIRLIX, gMonPalette_Swirlix),
	SPECIES_PAL(SLURPUFF, gMonPalette_Slurpuff),
	SPECIES_PAL(INKAY, gMonPalette_Inkay),
	SPECIES_PAL(MALAMAR, gMonPalette_Malamar),
	SPECIES_PAL(BINACLE, gMonPalette_Binacle),
	SPECIES_PAL(BARBARACLE, gMonPalette_Barbaracle),
	SPECIES_PAL(SKRELP, gMonPalette_Skrelp),
	SPECIES_PAL(DRAGALGE, gMonPalette_Dragalge),
	SPECIES_PAL(CLAUNCHER, gMonPalette_Clauncher),
	SPECIES_PAL(CLAWITZER, gMonPalette_Clawitzer),
	SPECIES_PAL(HELIOPTILE, gMonPalette_Helioptile),
	SPECIES_PAL(HELIOLISK, gMonPalette_Heliolisk),
	SPECIES_PAL(TYRUNT, gMonPalette_Tyrunt),
	SPECIES_PAL(TYRANTRUM, gMonPalette_Tyrantrum),
	SPECIES_PAL(AMAURA, gMonPalette_Amaura),
	SPECIES_PAL(AURORUS, gMonPalette_Aurorus),
	SPECIES_PAL(SYLVEON, gMonPalette_Sylveon),
	SPECIES_PAL(HAWLUCHA, gMonPalette_Hawlucha),
	SPECIES_PAL(DEDENNE, gMonPalette_Dedenne),
	SPECIES_PAL(CARBINK, gMonPalette_Carbink),
	SPECIES_PAL(GOOMY, gMonPalette_Goomy),
	SPECIES_PAL(SLIGGOO, gMonPalette_Sliggoo),
	SPECIES_PAL(GOODRA, gMonPalette_Goodra),
	SPECIES_PAL(KLEFKI, gMonPalette_Klefki),
	SPECIES_PAL(PHANTUMP, gMonPalette_Phantump),
	SPECIES_PAL(TREVENANT, gMonPalette_Trevenant),
	SPECIES_PAL(PUMPKABOO, gMonPalette_Pumpkaboo),
	SPECIES_PAL(GOURGEIST, gMonPalette_Gourgeist),
	SPECIES_PAL(BERGMITE, gMonPalette_Bergmite),
	SPECIES_PAL(AVALUGG, gMonPalette_Avalugg),
	SPECIES_PAL(NOIBAT, gMonPalette_Noibat),
	SPECIES_PAL(NOIVERN, gMonPalette_Noivern),
	SPECIES_PAL(XERNEAS, gMonPalette_Xerneas),
	SPECIES_PAL(YVELTAL, gMonPalette_Yveltal),
	SPECIES_PAL(ZYGARDE, gMonPalette_Zygarde),
	SPECIES_PAL(DIANCIE, gMonPalette_Diancie),
	SPECIES_PAL(HOOPA, gMonPalette_Hoopa),
	SPECIES_PAL(VOLCANION, gMonPalette_Volcanion),
	SPECIES_PAL(ROWLET, gMonPalette_Rowlet),
	SPECIES_PAL(DARTRIX, gMonPalette_Dartrix),
	SPECIES_PAL(DECIDUEYE, gMonPalette_Decidueye),
	SPECIES_PAL(LITTEN, gMonPalette_Litten),
	SPECIES_PAL(TORRACAT, gMonPalette_Torracat),
	SPECIES_PAL(INCINEROAR, gMonPalette_Incineroar),
	SPECIES_PAL(POPPLIO, gMonPalette_Popplio),
	SPECIES_PAL(BRIONNE, gMonPalette_Brionne),
	SPECIES_PAL(PRIMARINA, gMonPalette_Primarina),
	SPECIES_PAL(PIKIPEK, gMonPalette_Pikipek),
	SPECIES_PAL(TRUMBEAK, gMonPalette_Trumbeak),
	SPECIES_PAL(TOUCANNON, gMonPalette_Toucannon),
	SPECIES_PAL(YUNGOOS, gMonPalette_Yungoos),
	SPECIES_PAL(GUMSHOOS, gMonPalette_Gumshoos),
	SPECIES_PAL(GRUBBIN, gMonPalette_Grubbin),
	SPECIES_PAL(CHARJABUG, gMonPalette_Charjabug),
	SPECIES_PAL(VIKAVOLT, gMonPalette_Vikavolt),
	SPECIES_PAL(CRABRAWLER, gMonPalette_Crabrawler),
	SPECIES_PAL(CRABMINABL, gMonPalette_Crabminabl),
	SPECIES_PAL(ORICORIO, gMonPalette_Oricorio),
	SPECIES_PAL(CUTIEFLY, gMonPalette_Cutiefly),
	SPECIES_PAL(RIBOMBEE, gMonPalette_Ribombee),
	SPECIES_PAL(ROCKRUFF, gMonPalette_Rockruff),
	SPECIES_PAL(LYCANROC, gMonPalette_Lycanroc),
	SPECIES_PAL(WISHIWASHI, gMonPalette_Wishiwashi),
	SPECIES_PAL(MAREANIE, gMonPalette_Mareanie),
	SPECIES_PAL(TOXAPEX, gMonPalette_Toxapex),
	SPECIES_PAL(MUDBRAY, gMonPalette_Mudbray),
	SPECIES_PAL(MUDSDALE, gMonPalette_Mudsdale),
	SPECIES_PAL(DEWPIDER, gMonPalette_Dewpider),
	SPECIES_PAL(ARAQUANID, gMonPalette_Araquanid),
	SPECIES_PAL(FOMANTIS, gMonPalette_Fomantis),
	SPECIES_PAL(LURANTIS, gMonPalette_Lurantis),
	SPECIES_PAL(MORELULL, gMonPalette_Morelull),
	SPECIES_PAL(SHIINOTIC, gMonPalette_Shiinotic),
	SPECIES_PAL(SALANDIT, gMonPalette_Salandit),
	SPECIES_PAL(SALAZZLE, gMonPalette_Salazzle),
	SPECIES_PAL(STUFFUL, gMonPalette_Stufful),
	SPECIES_PAL(BEWEAR, gMonPalette_Bewear),
	SPECIES_PAL(BOUNSWEET, gMonPalette_Bounsweet),
	SPECIES_PAL(STEENEE, gMonPalette_Steenee),
	SPECIES_PAL(TSAREENA, gMonPalette_Tsareena),
	SPECIES_PAL(COMFEY, gMonPalette_Comfey),
	SPECIES_PAL(ORANGURU, gMonPalette_Oranguru),
	SPECIES_PAL(PASSIMIAN, gMonPalette_Passimian),
	SPECIES_PAL(WIMPOD, gMonPalette_Wimpod),
	SPECIES_PAL(GOLISOPOD, gMonPalette_Golisopod),
	SPECIES_PAL(SANDYGAST, gMonPalette_Sandygast),
	SPECIES_PAL(PALOSSAND, gMonPalette_Palossand),
	SPECIES_PAL(PYUKUMUKU, gMonPalette_Pyukumuku),
	SPECIES_PAL(TYPENULL, gMonPalette_TypeNull),
	SPECIES_PAL(SILVALLY, gMonPalette_Silvally),
	SPECIES_PAL(MINIOR, gMonPalette_Minior),
	SPECIES_PAL(KOMALA, gMonPalette_Komala),
	SPECIES_PAL(TURTONATOR, gMonPalette_Turtonator),
	SPECIES_PAL(TOGEDEMARU, gMonPalette_Togedemaru),
	SPECIES_PAL(MIMIKYU, gMonPalette_Mimikyu),
	SPECIES_PAL(BRUXISH, gMonPalette_Bruxish),
	SPECIES_PAL(DRAMPA, gMonPalette_Drampa),
	SPECIES_PAL(DHELMISE, gMonPalette_Dhelmise),
	SPECIES_PAL(JANGMOO, gMonPalette_Jangmoo),
	SPECIES_PAL(HAKAMOO, gMonPalette_Hakamoo),
	SPECIES_PAL(KOMMOO, gMonPalette_Kommoo),
	SPECIES_PAL(TAPUKOKO, gMonPalette_TapuKoko),
	SPECIES_PAL(TAPULELE, gMonPalette_TapuLele),
	SPECIES_PAL(TAPUBULU, gMonPalette_TapuBulu),
	SPECIES_PAL(TAPUFINI, gMonPalette_TapuFini),
	SPECIES_PAL(COSMOG, gMonPalette_Cosmog),
	SPECIES_PAL(COSMOEM, gMonPalette_Cosmoem),
	SPECIES_PAL(SOLGALEO, gMonPalette_Solgaleo),
	SPECIES_PAL(LUNALA, gMonPalette_Lunala),
	SPECIES_PAL(NIHILEGO, gMonPalette_Nihilego),
	SPECIES_PAL(BUZZWOLE, gMonPalette_Buzzwole),
	SPECIES_PAL(PHEROMOSA, gMonPalette_Pheromosa),
	SPECIES_PAL(XURKITREE, gMonPalette_Xurkitree),
	SPECIES_PAL(CELESTEELA, gMonPalette_Celesteela),
	SPECIES_PAL(KARTANA, gMonPalette_Kartana),
	SPECIES_PAL(GUZZLORD, gMonPalette_Guzzlord),
	SPECIES_PAL(NECROZMA, gMonPalette_Necrozma),
	SPECIES_PAL(MAGEARNA, gMonPalette_Magearna),
	SPECIES_PAL(MARSHADOW, gMonPalette_Marshadow),
	SPECIES_PAL(POIPOLE, gMonPalette_Poipole),
	SPECIES_PAL(NAGANADEL, gMonPalette_Naganadel),
	SPECIES_PAL(STAKATAKA, gMonPalette_Stakataka),
	SPECIES_PAL(BLACEPHALN, gMonPalette_Blacephaln),
	SPECIES_PAL(ZERAORA, gMonPalette_Zeraora),
	SPECIES_PAL(MELTAN, gMonPalette_Meltan),
	SPECIES_PAL(MELMETAL, gMonPalette_Melmetal),
	SPECIES_PAL(GROOKEY, gMonPalette_Grookey),
	SPECIES_PAL(THWACKEY, gMonPalette_Thwackey),
	SPECIES_PAL(RILLABOOM, gMonPalette_Rillaboom),
	SPECIES_PAL(SCORBUNNY, gMonPalette_Scorbunny),
	SPECIES_PAL(RABOOT, gMonPalette_Raboot),
	SPECIES_PAL(CINDERACE, gMonPalette_Cinderace),
	SPECIES_PAL(SOBBLE, gMonPalette_Sobble),
	SPECIES_PAL(DRIZZILE, gMonPalette_Drizzile),
	SPECIES_PAL(INTELEON, gMonPalette_Inteleon),
	SPECIES_PAL(SKWOVET, gMonPalette_Skwovet),
	SPECIES_PAL(GREEDENT, gMonPalette_Greedent),
	SPECIES_PAL(ROOKIDEE, gMonPalette_Rookidee),
	SPECIES_PAL(CORVISQUIR, gMonPalette_Corvisquir),
	SPECIES_PAL(CORVIKNIGH, gMonPalette_Corviknigh),
	SPECIES_PAL(BLIPBUG, gMonPalette_Blipbug),
	SPECIES_PAL(DOTTLER, gMonPalette_Dottler),
	SPECIES_PAL(ORBEETLE, gMonPalette_Orbeetle),
	SPECIES_PAL(NICKIT, gMonPalette_Nickit),
	SPECIES_PAL(THIEVUL, gMonPalette_Thievul),
	SPECIES_PAL(GOSSIFLEUR, gMonPalette_Gossifleur),
	SPECIES_PAL(ELDEGOSS, gMonPalette_Eldegoss),
	SPECIES_PAL(WOOLOO, gMonPalette_Wooloo),
	SPECIES_PAL(DUBWOOL, gMonPalette_Dubwool),
	SPECIES_PAL(CHEWTLE, gMonPalette_Chewtle),
	SPECIES_PAL(DREDNAW, gMonPalette_Drednaw),
	SPECIES_PAL(YAMPER, gMonPalette_Yamper),
	SPECIES_PAL(BOLTUND, gMonPalette_Boltund),
	SPECIES_PAL(ROLYCOLY, gMonPalette_Rolycoly),
	SPECIES_PAL(CARKOL, gMonPalette_Carkol),
	SPECIES_PAL(COALOSSAL, gMonPalette_Coalossal),
	SPECIES_PAL(APPLIN, gMonPalette_Applin),
	SPECIES_PAL(FLAPPLE, gMonPalette_Flapple),
	SPECIES_PAL(APPLETUN, gMonPalette_Appletun),
	SPECIES_PAL(SILICOBRA, gMonPalette_Silicobra),
	SPECIES_PAL(SANDACONDA, gMonPalette_Sandaconda),
	SPECIES_PAL(CRAMORANT, gMonPalette_Cramorant),
	SPECIES_PAL(ARROKUDA, gMonPalette_Arrokuda),
	SPECIES_PAL(BARRASKEWD, gMonPalette_Barraskewd),
	SPECIES_PAL(TOXEL, gMonPalette_Toxel),
	SPECIES_PAL(TOXTRICITY, gMonPalette_Toxtricity),
	SPECIES_PAL(SIZZLIPEDE, gMonPalette_Sizzlipede),
	SPECIES_PAL(CENTISKORC, gMonPalette_Centiskorc),
	SPECIES_PAL(CLOBBOPUS, gMonPalette_Clobbopus),
	SPECIES_PAL(GRAPPLOCT, gMonPalette_Grapploct),
	SPECIES_PAL(SINISTEA, gMonPalette_Sinistea),
	SPECIES_PAL(POLTEAGEIS, gMonPalette_Polteageis),
	SPECIES_PAL(HATENNA, gMonPalette_Hatenna),
	SPECIES_PAL(HATTREM, gMonPalette_Hattrem),
	SPECIES_PAL(HATTERENE, gMonPalette_Hatterene),
	SPECIES_PAL(IMPIDIMP, gMonPalette_Impidimp),
	SPECIES_PAL(MORGREM, gMonPalette_Morgrem),
	SPECIES_PAL(GRIMMSNARL, gMonPalette_Grimmsnarl),
	SPECIES_PAL(OBSTAGOON, gMonPalette_Obstagoon),
	SPECIES_PAL(PERRSERKER, gMonPalette_Perrserker),
	SPECIES_PAL(CURSOLA, gMonPalette_Cursola),
	SPECIES_PAL(SIRFETCHD, gMonPalette_Sirfetchd),
	SPECIES_PAL(MRRIME, gMonPalette_MrRime),
	SPECIES_PAL(RUNERIGUS, gMonPalette_Runerigus),
	SPECIES_PAL(MILCERY, gMonPalette_Milcery),
	SPECIES_PAL(ALCREMIE, gMonPalette_Alcremie),
	SPECIES_PAL(FALINKS, gMonPalette_Falinks),
	SPECIES_PAL(PINCURCHIN, gMonPalette_Pincurchin),
	SPECIES_PAL(SNOM, gMonPalette_Snom),
	SPECIES_PAL(FROSMOTH, gMonPalette_Frosmoth),
	SPECIES_PAL(STONJOURNE, gMonPalette_Stonjourne),
	SPECIES_PAL(EISCUE, gMonPalette_Eiscue),
	SPECIES_PAL(INDEEDEE, gMonPalette_Indeedee),
	SPECIES_PAL(MORPEKO, gMonPalette_Morpeko),
	SPECIES_PAL(CUFANT, gMonPalette_Cufant),
	SPECIES_PAL(COPPERAJAH, gMonPalette_Copperajah),
	SPECIES_PAL(DRACOZOLT, gMonPalette_Dracozolt),
	SPECIES_PAL(ARCTOZOLT, gMonPalette_Arctozolt),
	SPECIES_PAL(DRACOVISH, gMonPalette_Dracovish),
	SPECIES_PAL(ARCTOVISH, gMonPalette_Arctovish),
	SPECIES_PAL(DURALUDON, gMonPalette_Duraludon),
	SPECIES_PAL(DREEPY, gMonPalette_Dreepy),
	SPECIES_PAL(DRAKLOAK, gMonPalette_Drakloak),
	SPECIES_PAL(DRAGAPULT, gMonPalette_Dragapult),
	SPECIES_PAL(ZACIAN, gMonPalette_Zacian),
	SPECIES_PAL(ZAMAZENTA, gMonPalette_Zamazenta),
	SPECIES_PAL(ETERNATUS, gMonPalette_Eternatus),
	SPECIES_PAL(KUBFU, gMonPalette_Kubfu),
	SPECIES_PAL(URSHIFU, gMonPalette_Urshifu),
	SPECIES_PAL(ZARUDE, gMonPalette_Zarude),
	SPECIES_PAL(REGIELEKI, gMonPalette_Regieleki),
	SPECIES_PAL(REGIDRAGO, gMonPalette_Regidrago),
	SPECIES_PAL(GLASTRIER, gMonPalette_Glastrier),
	SPECIES_PAL(SPECTRIER, gMonPalette_Spectrier),
	SPECIES_PAL(CALYREX, gMonPalette_Calyrex),
	SPECIES_PAL(WYRDEER, gMonPalette_Wyrdeer),
	SPECIES_PAL(KLEAVOR, gMonPalette_Kleavor),
	SPECIES_PAL(URSALUNA, gMonPalette_Ursaluna),
	SPECIES_PAL(BSCULEGION, gMonPalette_Bsculegion),
	SPECIES_PAL(SNEASLER, gMonPalette_Sneasler),
	SPECIES_PAL(OVERQWIL, gMonPalette_Overqwil),
	SPECIES_PAL(ENAMORUS, gMonPalette_Enamorus),
	SPECIES_PAL(VENUSAUR_2, gMonPalette_Venusaur2),
	SPECIES_PAL(CHARIZARD_2, gMonPalette_Charizard2),
	SPECIES_PAL(CHARIZARD_3, gMonPalette_Charizard3),
	SPECIES_PAL(BLASTOISE_2, gMonPalette_Blastoise2),
	SPECIES_PAL(BEEDRILL_2, gMonPalette_Beedrill2),
	SPECIES_PAL(PIDGEOT_2, gMonPalette_Pidgeot2),
	SPECIES_PAL(ALAKAZAM_2, gMonPalette_Alakazam2),
	SPECIES_PAL(SLOWBRO_2, gMonPalette_Slowbro2),
	SPECIES_PAL(GENGAR_2, gMonPalette_Gengar2),
	SPECIES_PAL(KANGASKHAN_2, gMonPalette_Kangaskhan2),
	SPECIES_PAL(PINSIR_2, gMonPalette_Pinsir2),
	SPECIES_PAL(GYARADOS_2, gMonPalette_Gyarados2),
	SPECIES_PAL(AERODACTYL_2, gMonPalette_Aerodactyl2),
	SPECIES_PAL(MEWTWO_2, gMonPalette_Mewtwo2),
	SPECIES_PAL(MEWTWO_3, gMonPalette_Mewtwo3),
	SPECIES_PAL(AMPHAROS_2, gMonPalette_Ampharos2),
	SPECIES_PAL(STEELIX_2, gMonPalette_Steelix2),
	SPECIES_PAL(SCIZOR_2, gMonPalette_Scizor2),
	SPECIES_PAL(HERACROSS_2, gMonPalette_Heracross2),
	SPECIES_PAL(HOUNDOOM_2, gMonPalette_Houndoom2),
	SPECIES_PAL(TYRANITAR_2, gMonPalette_Tyranitar2),
	SPECIES_PAL(SCEPTILE_2, gMonPalette_Sceptile2),
	SPECIES_PAL(BLAZIKEN_2, gMonPalette_Blaziken2),
	SPECIES_PAL(SWAMPERT_2, gMonPalette_Swampert2),
	SPECIES_PAL(GARDEVOIR_2, gMonPalette_Gardevoir2),
	SPECIES_PAL(SABLEYE_2, gMonPalette_Sableye2),
	SPECIES_PAL(MAWILE_2, gMonPalette_Mawile2),
	SPECIES_PAL(AGGRON_2, gMonPalette_Aggron2),
	SPECIES_PAL(MEDICHAM_2, gMonPalette_Medicham2),
	SPECIES_PAL(MANECTRIC_2, gMonPalette_Manectric2),
	SPECIES_PAL(SHARPEDO_2, gMonPalette_Sharpedo2),
	SPECIES_PAL(CAMERUPT_2, gMonPalette_Camerupt2),
	SPECIES_PAL(ALTARIA_2, gMonPalette_Altaria2),
	SPECIES_PAL(BANETTE_2, gMonPalette_Banette2),
	SPECIES_PAL(ABSOL_2, gMonPalette_Absol2),
	SPECIES_PAL(GLALIE_2, gMonPalette_Glalie2),
	SPECIES_PAL(SALAMENCE_2, gMonPalette_Salamence2),
	SPECIES_PAL(METAGROSS_2, gMonPalette_Metagross2),
	SPECIES_PAL(LATIAS_2, gMonPalette_Latias2),
	SPECIES_PAL(LATIOS_2, gMonPalette_Latios2),
	SPECIES_PAL(LOPUNNY_2, gMonPalette_Lopunny2),
	SPECIES_PAL(GARCHOMP_2, gMonPalette_Garchomp2),
	SPECIES_PAL(LUCARIO_2, gMonPalette_Lucario2),
	SPECIES_PAL(ABOMASNOW_2, gMonPalette_Abomasnow2),
	SPECIES_PAL(GALLADE_2, gMonPalette_Gallade2),
	SPECIES_PAL(AUDINO_2, gMonPalette_Audino2),
	SPECIES_PAL(DIANCIE_2, gMonPalette_Diancie2),
	SPECIES_PAL(RAYQUAZA_2, gMonPalette_Rayquaza2),
	SPECIES_PAL(KYOGRE_2, gMonPalette_Kyogre2),
	SPECIES_PAL(GROUDON_2, gMonPalette_Groudon2),
	SPECIES_PAL(RATTATA_2, gMonPalette_Rattata2),
	SPECIES_PAL(RATICATE_2, gMonPalette_Raticate2),
	SPECIES_PAL(RAICHU_2, gMonPalette_Raichu2),
	SPECIES_PAL(SANDSHREW_2, gMonPalette_Sandshrew2),
	SPECIES_PAL(SANDSLASH_2, gMonPalette_Sandslash2),
	SPECIES_PAL(VULPIX_2, gMonPalette_Vulpix2),
	SPECIES_PAL(NINETALES_2, gMonPalette_Ninetales2),
	SPECIES_PAL(DIGLETT_2, gMonPalette_Diglett2),
	SPECIES_PAL(DUGTRIO_2, gMonPalette_Dugtrio2),
	SPECIES_PAL(MEOWTH_2, gMonPalette_Meowth2),
	SPECIES_PAL(PERSIAN_2, gMonPalette_Persian2),
	SPECIES_PAL(GEODUDE_2, gMonPalette_Geodude2),
	SPECIES_PAL(GRAVELER_2, gMonPalette_Graveler2),
	SPECIES_PAL(GOLEM_2, gMonPalette_Golem2),
	SPECIES_PAL(GRIMER_2, gMonPalette_Grimer2),
	SPECIES_PAL(MUK_2, gMonPalette_Muk2),
	SPECIES_PAL(EXEGGUTOR_2, gMonPalette_Exeggutor2),
	SPECIES_PAL(MAROWAK_2, gMonPalette_Marowak2),
	SPECIES_PAL(MEOWTH_3, gMonPalette_Meowth3),
	SPECIES_PAL(PONYTA_2, gMonPalette_Ponyta2),
	SPECIES_PAL(RAPIDASH_2, gMonPalette_Rapidash2),
	SPECIES_PAL(SLOWPOKE_2, gMonPalette_Slowpoke2),
	SPECIES_PAL(SLOWBRO_3, gMonPalette_Slowbro3),
	SPECIES_PAL(FARFETCHD_2, gMonPalette_Farfetchd2),
	SPECIES_PAL(WEEZING_2, gMonPalette_Weezing2),
	SPECIES_PAL(MRMIME_2, gMonPalette_MrMime2),
	SPECIES_PAL(ARTICUNO_2, gMonPalette_Articuno2),
	SPECIES_PAL(ZAPDOS_2, gMonPalette_Zapdos2),
	SPECIES_PAL(MOLTRES_2, gMonPalette_Moltres2),
	SPECIES_PAL(SLOWKING_2, gMonPalette_Slowking2),
	SPECIES_PAL(CORSOLA_2, gMonPalette_Corsola2),
	SPECIES_PAL(ZIGZAGOON_2, gMonPalette_Zigzagoon2),
	SPECIES_PAL(LINOONE_2, gMonPalette_Linoone2),
	SPECIES_PAL(DARUMAKA_2, gMonPalette_Darumaka2),
	SPECIES_PAL(DARMANITAN_2, gMonPalette_Darmanitan2),
	SPECIES_PAL(YAMASK_2, gMonPalette_Yamask2),
	SPECIES_PAL(STUNFISK_2, gMonPalette_Stunfisk2),
	SPECIES_PAL(GROWLITHE_2, gMonPalette_Growlithe2),
	SPECIES_PAL(ARCANINE_2, gMonPalette_Arcanine2),
	SPECIES_PAL(VOLTORB_2, gMonPalette_Voltorb2),
	SPECIES_PAL(ELECTRODE_2, gMonPalette_Electrode2),
	SPECIES_PAL(TYPHLOSION_2, gMonPalette_Typhlosion2),
	SPECIES_PAL(QWILFISH_2, gMonPalette_Qwilfish2),
	SPECIES_PAL(SNEASEL_2, gMonPalette_Sneasel2),
	SPECIES_PAL(SAMUROTT_2, gMonPalette_Samurott2),
	SPECIES_PAL(LILLIGANT_2, gMonPalette_Lilligant2),
	SPECIES_PAL(ZORUA_2, gMonPalette_Zorua2),
	SPECIES_PAL(ZOROARK_2, gMonPalette_Zoroark2),
	SPECIES_PAL(BRAVIARY_2, gMonPalette_Braviary2),
	SPECIES_PAL(SLIGGOO_2, gMonPalette_Sliggoo2),
	SPECIES_PAL(GOODRA_2, gMonPalette_Goodra2),
	SPECIES_PAL(AVALUGG_2, gMonPalette_Avalugg2),
	SPECIES_PAL(DECIDUEYE_2, gMonPalette_Decidueye2),
	SPECIES_PAL(PIKACHU_2, gMonPalette_Pikachu2),
	SPECIES_PAL(PIKACHU_3, gMonPalette_Pikachu3),
	SPECIES_PAL(PIKACHU_4, gMonPalette_Pikachu4),
	SPECIES_PAL(PIKACHU_5, gMonPalette_Pikachu5),
	SPECIES_PAL(PIKACHU_6, gMonPalette_Pikachu6),
	SPECIES_PAL(PIKACHU_7, gMonPalette_Pikachu7),
	SPECIES_PAL(PIKACHU_8, gMonPalette_Pikachu8),
	SPECIES_PAL(PIKACHU_9, gMonPalette_Pikachu9),
	SPECIES_PAL(PIKACHU_10, gMonPalette_Pikachu10),
	SPECIES_PAL(PIKACHU_11, gMonPalette_Pikachu11),
	SPECIES_PAL(PIKACHU_12, gMonPalette_Pikachu12),
	SPECIES_PAL(PIKACHU_13, gMonPalette_Pikachu13),
	SPECIES_PAL(PIKACHU_14, gMonPalette_Pikachu14),
	SPECIES_PAL(PIKACHU_15, gMonPalette_Pikachu15),
	SPECIES_PAL(UNOWN_B, gMonPalette_UnownB),
    SPECIES_PAL(UNOWN_C, gMonPalette_UnownC),
    SPECIES_PAL(UNOWN_D, gMonPalette_UnownD),
    SPECIES_PAL(UNOWN_E, gMonPalette_UnownE),
    SPECIES_PAL(UNOWN_F, gMonPalette_UnownF),
    SPECIES_PAL(UNOWN_G, gMonPalette_UnownG),
    SPECIES_PAL(UNOWN_H, gMonPalette_UnownH),
    SPECIES_PAL(UNOWN_I, gMonPalette_UnownI),
    SPECIES_PAL(UNOWN_J, gMonPalette_UnownJ),
    SPECIES_PAL(UNOWN_K, gMonPalette_UnownK),
    SPECIES_PAL(UNOWN_L, gMonPalette_UnownL),
    SPECIES_PAL(UNOWN_M, gMonPalette_UnownM),
    SPECIES_PAL(UNOWN_N, gMonPalette_UnownN),
    SPECIES_PAL(UNOWN_O, gMonPalette_UnownO),
    SPECIES_PAL(UNOWN_P, gMonPalette_UnownP),
    SPECIES_PAL(UNOWN_Q, gMonPalette_UnownQ),
    SPECIES_PAL(UNOWN_R, gMonPalette_UnownR),
    SPECIES_PAL(UNOWN_S, gMonPalette_UnownS),
    SPECIES_PAL(UNOWN_T, gMonPalette_UnownT),
    SPECIES_PAL(UNOWN_U, gMonPalette_UnownU),
    SPECIES_PAL(UNOWN_V, gMonPalette_UnownV),
    SPECIES_PAL(UNOWN_W, gMonPalette_UnownW),
    SPECIES_PAL(UNOWN_X, gMonPalette_UnownX),
    SPECIES_PAL(UNOWN_Y, gMonPalette_UnownY),
    SPECIES_PAL(UNOWN_Z, gMonPalette_UnownZ),
	SPECIES_PAL(CASTFORM_2, gMonPalette_Castform2),
	SPECIES_PAL(CASTFORM_3, gMonPalette_Castform3),
	SPECIES_PAL(CASTFORM_4, gMonPalette_Castform4),
	SPECIES_PAL(DEOXYS_2, gMonPalette_Deoxys2),
	SPECIES_PAL(DEOXYS_3, gMonPalette_Deoxys3),
	SPECIES_PAL(DEOXYS_4, gMonPalette_Deoxys4),
	SPECIES_PAL(BURMY_2, gMonPalette_Burmy2),
	SPECIES_PAL(BURMY_3, gMonPalette_Burmy3),
	SPECIES_PAL(WORMADAM_2, gMonPalette_Wormadam2),
	SPECIES_PAL(WORMADAM_3, gMonPalette_Wormadam3),
	SPECIES_PAL(CHERRIM_2, gMonPalette_Cherrim2),
	SPECIES_PAL(SHELLOS_2, gMonPalette_Shellos2),
	SPECIES_PAL(GASTRODON_2, gMonPalette_Gastrodon2),
	SPECIES_PAL(ROTOM_2, gMonPalette_Rotom2),
	SPECIES_PAL(ROTOM_3, gMonPalette_Rotom3),
	SPECIES_PAL(ROTOM_4, gMonPalette_Rotom4),
	SPECIES_PAL(ROTOM_5, gMonPalette_Rotom5),
	SPECIES_PAL(ROTOM_6, gMonPalette_Rotom6),
	SPECIES_PAL(DIALGA_2, gMonPalette_Dialga2),
	SPECIES_PAL(PALKIA_2, gMonPalette_Palkia2),
	SPECIES_PAL(GIRATINA_2, gMonPalette_Giratina2),
	SPECIES_PAL(SHAYMIN_2, gMonPalette_Shaymin2),
	SPECIES_PAL(ARCEUS_2, gMonPalette_Arceus2),
	SPECIES_PAL(ARCEUS_3, gMonPalette_Arceus3),
	SPECIES_PAL(ARCEUS_4, gMonPalette_Arceus4),
	SPECIES_PAL(ARCEUS_5, gMonPalette_Arceus5),
	SPECIES_PAL(ARCEUS_6, gMonPalette_Arceus6),
	SPECIES_PAL(ARCEUS_7, gMonPalette_Arceus7),
	SPECIES_PAL(ARCEUS_8, gMonPalette_Arceus8),
	SPECIES_PAL(ARCEUS_9, gMonPalette_Arceus9),
	SPECIES_PAL(ARCEUS_10, gMonPalette_Arceus10),
	SPECIES_PAL(ARCEUS_11, gMonPalette_Arceus11),
	SPECIES_PAL(ARCEUS_12, gMonPalette_Arceus12),
	SPECIES_PAL(ARCEUS_13, gMonPalette_Arceus13),
	SPECIES_PAL(ARCEUS_14, gMonPalette_Arceus14),
	SPECIES_PAL(ARCEUS_15, gMonPalette_Arceus15),
	SPECIES_PAL(ARCEUS_16, gMonPalette_Arceus16),
	SPECIES_PAL(ARCEUS_17, gMonPalette_Arceus17),
	SPECIES_PAL(ARCEUS_18, gMonPalette_Arceus18),
	SPECIES_PAL(BASCULIN_2, gMonPalette_Basculin2),
	SPECIES_PAL(BASCULIN_3, gMonPalette_Basculin3),
	SPECIES_PAL(DARMANITAN_3, gMonPalette_Darmanitan3),
	SPECIES_PAL(DARMANITAN_4, gMonPalette_Darmanitan4),
	SPECIES_PAL(DEERLING_2, gMonPalette_Deerling2),
	SPECIES_PAL(DEERLING_3, gMonPalette_Deerling3),
	SPECIES_PAL(DEERLING_4, gMonPalette_Deerling4),
	SPECIES_PAL(SAWSBUCK_2, gMonPalette_Sawsbuck2),
	SPECIES_PAL(SAWSBUCK_3, gMonPalette_Sawsbuck3),
	SPECIES_PAL(SAWSBUCK_4, gMonPalette_Sawsbuck4),
	SPECIES_PAL(TORNADUS_2, gMonPalette_Tornadus2),
	SPECIES_PAL(THUNDURUS_2, gMonPalette_Thundurus2),
	SPECIES_PAL(LANDORUS_2, gMonPalette_Landorus2),
	SPECIES_PAL(ENAMORUS_2, gMonPalette_Enamorus2),
	SPECIES_PAL(KYUREM_2, gMonPalette_Kyurem2),
	SPECIES_PAL(KYUREM_3, gMonPalette_Kyurem3),
	SPECIES_PAL(KELDEO_2, gMonPalette_Keldeo2),
	SPECIES_PAL(MELOETTA_2, gMonPalette_Meloetta2),
	SPECIES_PAL(GENESECT_2, gMonPalette_Genesect2),
	SPECIES_PAL(GENESECT_3, gMonPalette_Genesect3),
	SPECIES_PAL(GENESECT_4, gMonPalette_Genesect4),
	SPECIES_PAL(GENESECT_5, gMonPalette_Genesect5),
	SPECIES_PAL(GRENINJA_2, gMonPalette_Greninja2),
	SPECIES_PAL(GRENINJA_3, gMonPalette_Greninja3),
	SPECIES_PAL(VIVILLON_2, gMonPalette_Vivillon2),
	SPECIES_PAL(VIVILLON_3, gMonPalette_Vivillon3),
	SPECIES_PAL(VIVILLON_4, gMonPalette_Vivillon4),
	SPECIES_PAL(VIVILLON_5, gMonPalette_Vivillon5),
	SPECIES_PAL(VIVILLON_6, gMonPalette_Vivillon6),
	SPECIES_PAL(VIVILLON_7, gMonPalette_Vivillon7),
	SPECIES_PAL(VIVILLON_8, gMonPalette_Vivillon8),
	SPECIES_PAL(VIVILLON_9, gMonPalette_Vivillon9),
	SPECIES_PAL(VIVILLON_10, gMonPalette_Vivillon10),
	SPECIES_PAL(VIVILLON_11, gMonPalette_Vivillon11),
	SPECIES_PAL(VIVILLON_12, gMonPalette_Vivillon12),
	SPECIES_PAL(VIVILLON_13, gMonPalette_Vivillon13),
	SPECIES_PAL(VIVILLON_14, gMonPalette_Vivillon14),
	SPECIES_PAL(VIVILLON_15, gMonPalette_Vivillon15),
	SPECIES_PAL(VIVILLON_16, gMonPalette_Vivillon16),
	SPECIES_PAL(VIVILLON_17, gMonPalette_Vivillon17),
	SPECIES_PAL(VIVILLON_18, gMonPalette_Vivillon18),
	SPECIES_PAL(VIVILLON_19, gMonPalette_Vivillon19),
	SPECIES_PAL(VIVILLON_20, gMonPalette_Vivillon20),
	SPECIES_PAL(FLABEBE_2, gMonPalette_Flabebe2),
	SPECIES_PAL(FLABEBE_3, gMonPalette_Flabebe3),
	SPECIES_PAL(FLABEBE_4, gMonPalette_Flabebe4),
	SPECIES_PAL(FLABEBE_5, gMonPalette_Flabebe5),
	SPECIES_PAL(FLOETTE_2, gMonPalette_Floette2),
	SPECIES_PAL(FLOETTE_3, gMonPalette_Floette3),
	SPECIES_PAL(FLOETTE_4, gMonPalette_Floette4),
	SPECIES_PAL(FLOETTE_5, gMonPalette_Floette5),
	SPECIES_PAL(FLOETTE_6, gMonPalette_Floette6),
	SPECIES_PAL(FLORGES_2, gMonPalette_Florges2),
	SPECIES_PAL(FLORGES_3, gMonPalette_Florges3),
	SPECIES_PAL(FLORGES_4, gMonPalette_Florges4),
	SPECIES_PAL(FLORGES_5, gMonPalette_Florges5),
	SPECIES_PAL(FURFROU_2, gMonPalette_Furfrou2),
	SPECIES_PAL(FURFROU_3, gMonPalette_Furfrou3),
	SPECIES_PAL(FURFROU_4, gMonPalette_Furfrou4),
	SPECIES_PAL(FURFROU_5, gMonPalette_Furfrou5),
	SPECIES_PAL(FURFROU_6, gMonPalette_Furfrou6),
	SPECIES_PAL(FURFROU_7, gMonPalette_Furfrou7),
	SPECIES_PAL(FURFROU_8, gMonPalette_Furfrou8),
	SPECIES_PAL(FURFROU_9, gMonPalette_Furfrou9),
	SPECIES_PAL(FURFROU_10, gMonPalette_Furfrou10),
	SPECIES_PAL(MEOWSTIC_2, gMonPalette_Meowstic2),
	SPECIES_PAL(AEGISLASH_2, gMonPalette_Aegislash2),
	SPECIES_PAL(PUMPKABOO_2, gMonPalette_Pumpkaboo2),
	SPECIES_PAL(PUMPKABOO_3, gMonPalette_Pumpkaboo3),
	SPECIES_PAL(PUMPKABOO_4, gMonPalette_Pumpkaboo4),
	SPECIES_PAL(GOURGEIST_2, gMonPalette_Gourgeist2),
	SPECIES_PAL(GOURGEIST_3, gMonPalette_Gourgeist3),
	SPECIES_PAL(GOURGEIST_4, gMonPalette_Gourgeist4),
	SPECIES_PAL(XERNEAS_2, gMonPalette_Xerneas2),
	SPECIES_PAL(ZYGARDE_2, gMonPalette_Zygarde2),
	SPECIES_PAL(ZYGARDE_3, gMonPalette_Zygarde3),
	SPECIES_PAL(ZYGARDE_4, gMonPalette_Zygarde4),
	SPECIES_PAL(ZYGARDE_5, gMonPalette_Zygarde5),
	SPECIES_PAL(HOOPA_2, gMonPalette_Hoopa2),
	SPECIES_PAL(ORICORIO_2, gMonPalette_Oricorio2),
	SPECIES_PAL(ORICORIO_3, gMonPalette_Oricorio3),
	SPECIES_PAL(ORICORIO_4, gMonPalette_Oricorio4),
	SPECIES_PAL(ROCKRUFF_2, gMonPalette_Rockruff2),
	SPECIES_PAL(LYCANROC_2, gMonPalette_Lycanroc2),
	SPECIES_PAL(LYCANROC_3, gMonPalette_Lycanroc3),
	SPECIES_PAL(WISHIWASHI_2, gMonPalette_Wishiwashi2),
	SPECIES_PAL(SILVALLY_2, gMonPalette_Silvally2),
	SPECIES_PAL(SILVALLY_3, gMonPalette_Silvally3),
	SPECIES_PAL(SILVALLY_4, gMonPalette_Silvally4),
	SPECIES_PAL(SILVALLY_5, gMonPalette_Silvally5),
	SPECIES_PAL(SILVALLY_6, gMonPalette_Silvally6),
	SPECIES_PAL(SILVALLY_7, gMonPalette_Silvally7),
	SPECIES_PAL(SILVALLY_8, gMonPalette_Silvally8),
	SPECIES_PAL(SILVALLY_9, gMonPalette_Silvally9),
	SPECIES_PAL(SILVALLY_10, gMonPalette_Silvally10),
	SPECIES_PAL(SILVALLY_11, gMonPalette_Silvally11),
	SPECIES_PAL(SILVALLY_12, gMonPalette_Silvally12),
	SPECIES_PAL(SILVALLY_13, gMonPalette_Silvally13),
	SPECIES_PAL(SILVALLY_14, gMonPalette_Silvally14),
	SPECIES_PAL(SILVALLY_15, gMonPalette_Silvally15),
	SPECIES_PAL(SILVALLY_16, gMonPalette_Silvally16),
	SPECIES_PAL(SILVALLY_17, gMonPalette_Silvally17),
	SPECIES_PAL(SILVALLY_18, gMonPalette_Silvally18),
	SPECIES_PAL(MINIOR_2, gMonPalette_Minior2),
	SPECIES_PAL(MINIOR_3, gMonPalette_Minior3),
	SPECIES_PAL(MINIOR_4, gMonPalette_Minior4),
	SPECIES_PAL(MINIOR_5, gMonPalette_Minior5),
	SPECIES_PAL(MINIOR_6, gMonPalette_Minior6),
	SPECIES_PAL(MINIOR_7, gMonPalette_Minior7),
	SPECIES_PAL(MINIOR_8, gMonPalette_Minior8),
	SPECIES_PAL(MINIOR_9, gMonPalette_Minior9),
	SPECIES_PAL(MINIOR_10, gMonPalette_Minior10),
	SPECIES_PAL(MINIOR_11, gMonPalette_Minior11),
	SPECIES_PAL(MINIOR_12, gMonPalette_Minior12),
	SPECIES_PAL(MINIOR_13, gMonPalette_Minior13),
	SPECIES_PAL(MINIOR_14, gMonPalette_Minior14),
	SPECIES_PAL(MIMIKYU_2, gMonPalette_Mimikyu2),
	SPECIES_PAL(NECROZMA_2, gMonPalette_Necrozma2),
	SPECIES_PAL(NECROZMA_3, gMonPalette_Necrozma3),
	SPECIES_PAL(NECROZMA_4, gMonPalette_Necrozma4),
	SPECIES_PAL(MAGEARNA_2, gMonPalette_Magearna2),
	SPECIES_PAL(CRAMORANT_2, gMonPalette_Cramorant2),
	SPECIES_PAL(CRAMORANT_3, gMonPalette_Cramorant3),
	SPECIES_PAL(TOXTRICITY_2, gMonPalette_Toxtricity2),
	SPECIES_PAL(SINISTEA_2, gMonPalette_Sinistea2),
	SPECIES_PAL(POLTEAGEIS_2, gMonPalette_Polteageis2),
	SPECIES_PAL(ALCREMIE_2, gMonPalette_Alcremie2),
	SPECIES_PAL(ALCREMIE_3, gMonPalette_Alcremie3),
	SPECIES_PAL(ALCREMIE_4, gMonPalette_Alcremie4),
	SPECIES_PAL(ALCREMIE_5, gMonPalette_Alcremie5),
	SPECIES_PAL(ALCREMIE_6, gMonPalette_Alcremie6),
	SPECIES_PAL(ALCREMIE_7, gMonPalette_Alcremie7),
	SPECIES_PAL(ALCREMIE_8, gMonPalette_Alcremie8),
	SPECIES_PAL(ALCREMIE_9, gMonPalette_Alcremie9),
	SPECIES_PAL(EISCUE_2, gMonPalette_Eiscue2),
	SPECIES_PAL(INDEEDEE_2, gMonPalette_Indeedee2),
	SPECIES_PAL(MORPEKO_2, gMonPalette_Morpeko2),
	SPECIES_PAL(ZACIAN_2, gMonPalette_Zacian2),
	SPECIES_PAL(ZAMAZENTA_2, gMonPalette_Zamazenta2),
	SPECIES_PAL(ETERNATUS_2, gMonPalette_Eternatus2),
	SPECIES_PAL(URSHIFU_2, gMonPalette_Urshifu2),
	SPECIES_PAL(ZARUDE_2, gMonPalette_Zarude2),
	SPECIES_PAL(CALYREX_2, gMonPalette_Calyrex2),
	SPECIES_PAL(CALYREX_3, gMonPalette_Calyrex3),
	SPECIES_PAL(BSCULEGION_2, gMonPalette_Bsculegion2),
	SPECIES_PAL(ALCREMIE_10, gMonPalette_Alcremie10),
	SPECIES_PAL(ALCREMIE_11, gMonPalette_Alcremie11),
	SPECIES_PAL(ALCREMIE_12, gMonPalette_Alcremie12),
	SPECIES_PAL(ALCREMIE_13, gMonPalette_Alcremie13),
	SPECIES_PAL(ALCREMIE_14, gMonPalette_Alcremie14),
	SPECIES_PAL(ALCREMIE_15, gMonPalette_Alcremie15),
	SPECIES_PAL(ALCREMIE_16, gMonPalette_Alcremie16),
	SPECIES_PAL(ALCREMIE_17, gMonPalette_Alcremie17),
	SPECIES_PAL(ALCREMIE_18, gMonPalette_Alcremie18),
	SPECIES_PAL(ALCREMIE_19, gMonPalette_Alcremie19),
	SPECIES_PAL(ALCREMIE_20, gMonPalette_Alcremie20),
	SPECIES_PAL(ALCREMIE_21, gMonPalette_Alcremie21),
	SPECIES_PAL(ALCREMIE_22, gMonPalette_Alcremie22),
	SPECIES_PAL(ALCREMIE_23, gMonPalette_Alcremie23),
	SPECIES_PAL(ALCREMIE_24, gMonPalette_Alcremie24),
	SPECIES_PAL(ALCREMIE_25, gMonPalette_Alcremie25),
	SPECIES_PAL(ALCREMIE_26, gMonPalette_Alcremie26),
	SPECIES_PAL(ALCREMIE_27, gMonPalette_Alcremie27),
	SPECIES_PAL(ALCREMIE_28, gMonPalette_Alcremie28),
	SPECIES_PAL(ALCREMIE_29, gMonPalette_Alcremie29),
	SPECIES_PAL(ALCREMIE_30, gMonPalette_Alcremie30),
	SPECIES_PAL(ALCREMIE_31, gMonPalette_Alcremie31),
	SPECIES_PAL(ALCREMIE_32, gMonPalette_Alcremie32),
	SPECIES_PAL(ALCREMIE_33, gMonPalette_Alcremie33),
	SPECIES_PAL(ALCREMIE_34, gMonPalette_Alcremie34),
	SPECIES_PAL(ALCREMIE_35, gMonPalette_Alcremie35),
	SPECIES_PAL(ALCREMIE_36, gMonPalette_Alcremie36),
	SPECIES_PAL(ALCREMIE_37, gMonPalette_Alcremie37),
	SPECIES_PAL(ALCREMIE_38, gMonPalette_Alcremie38),
	SPECIES_PAL(ALCREMIE_39, gMonPalette_Alcremie39),
	SPECIES_PAL(ALCREMIE_40, gMonPalette_Alcremie40),
	SPECIES_PAL(ALCREMIE_41, gMonPalette_Alcremie41),
	SPECIES_PAL(ALCREMIE_42, gMonPalette_Alcremie42),
	SPECIES_PAL(ALCREMIE_43, gMonPalette_Alcremie43),
	SPECIES_PAL(ALCREMIE_44, gMonPalette_Alcremie44),
	SPECIES_PAL(ALCREMIE_45, gMonPalette_Alcremie45),
	SPECIES_PAL(ALCREMIE_46, gMonPalette_Alcremie46),
	SPECIES_PAL(ALCREMIE_47, gMonPalette_Alcremie47),
	SPECIES_PAL(ALCREMIE_48, gMonPalette_Alcremie48),
	SPECIES_PAL(ALCREMIE_49, gMonPalette_Alcremie49),
	SPECIES_PAL(ALCREMIE_50, gMonPalette_Alcremie50),
	SPECIES_PAL(ALCREMIE_51, gMonPalette_Alcremie51),
	SPECIES_PAL(ALCREMIE_52, gMonPalette_Alcremie52),
	SPECIES_PAL(ALCREMIE_53, gMonPalette_Alcremie53),
	SPECIES_PAL(ALCREMIE_54, gMonPalette_Alcremie54),
	SPECIES_PAL(ALCREMIE_55, gMonPalette_Alcremie55),
	SPECIES_PAL(ALCREMIE_56, gMonPalette_Alcremie56),
	SPECIES_PAL(ALCREMIE_57, gMonPalette_Alcremie57),
	SPECIES_PAL(ALCREMIE_58, gMonPalette_Alcremie58),
	SPECIES_PAL(ALCREMIE_59, gMonPalette_Alcremie59),
	SPECIES_PAL(ALCREMIE_60, gMonPalette_Alcremie60),
	SPECIES_PAL(ALCREMIE_61, gMonPalette_Alcremie61),
	SPECIES_PAL(ALCREMIE_62, gMonPalette_Alcremie62),
	SPECIES_PAL(ALCREMIE_63, gMonPalette_Alcremie63),
	SPECIES_PAL(SPRIGATITO, gMonPalette_Sprigatito),
	SPECIES_PAL(FLORAGATO, gMonPalette_Floragato),
	SPECIES_PAL(MEOWSCARAD, gMonPalette_Meowscarad),
	SPECIES_PAL(FUECOCO, gMonPalette_Fuecoco),
	SPECIES_PAL(CROCALOR, gMonPalette_Crocalor),
	SPECIES_PAL(SKELEDIRGE, gMonPalette_Skeledirge),
	SPECIES_PAL(QUAXLY, gMonPalette_Quaxly),
	SPECIES_PAL(QUAXWELL, gMonPalette_Quaxwell),
	SPECIES_PAL(QUAQUAVAL, gMonPalette_Quaquaval),
	SPECIES_PAL(LECHONK, gMonPalette_Lechonk),
	SPECIES_PAL(OINKOLOGNE, gMonPalette_Oinkologne),
	SPECIES_PAL(OINKOLOGNE_2, gMonPalette_Oinkologne2),
	SPECIES_PAL(TAROUNTULA, gMonPalette_Tarountula),
	SPECIES_PAL(SPIDOPS, gMonPalette_Spidops),
	SPECIES_PAL(NYMBLE, gMonPalette_Nymble),
	SPECIES_PAL(LOKIX, gMonPalette_Lokix),
	SPECIES_PAL(PAWMI, gMonPalette_Pawmi),
	SPECIES_PAL(PAWMO, gMonPalette_Pawmo),
	SPECIES_PAL(PAWMOT, gMonPalette_Pawmot),
	SPECIES_PAL(TANDEMAUS, gMonPalette_Tandemaus),
	SPECIES_PAL(MAUSHOLD, gMonPalette_Maushold),
	SPECIES_PAL(MAUSHOLD_2, gMonPalette_Maushold2),
	SPECIES_PAL(FIDOUGH, gMonPalette_Fidough),
	SPECIES_PAL(DACHSBUN, gMonPalette_Dachsbun),
	SPECIES_PAL(SMOLIV, gMonPalette_Smoliv),
	SPECIES_PAL(DOLLIV, gMonPalette_Dolliv),
	SPECIES_PAL(ARBOLIVA, gMonPalette_Arboliva),
	SPECIES_PAL(SQAWKABILY, gMonPalette_Sqawkabily),
	SPECIES_PAL(SQAWKABILY_2, gMonPalette_Sqawkabily2),
	SPECIES_PAL(SQAWKABILY_3, gMonPalette_Sqawkabily3),
	SPECIES_PAL(SQAWKABILY_4, gMonPalette_Sqawkabily4),
	SPECIES_PAL(NACLI, gMonPalette_Nacli),
	SPECIES_PAL(NACLSTACK, gMonPalette_Naclstack),
	SPECIES_PAL(GARGANACL, gMonPalette_Garganacl),
	SPECIES_PAL(CHARCADET, gMonPalette_Charcadet),
	SPECIES_PAL(ARMAROUGE, gMonPalette_Armarouge),
	SPECIES_PAL(CERULEDGE, gMonPalette_Ceruledge),
	SPECIES_PAL(TADBULB, gMonPalette_Tadbulb),
	SPECIES_PAL(BELLIBOLT, gMonPalette_Bellibolt),
	SPECIES_PAL(WATTREL, gMonPalette_Wattrel),
	SPECIES_PAL(KILOWATREL, gMonPalette_Kilowatrel),
	SPECIES_PAL(MASCHIFF, gMonPalette_Maschiff),
	SPECIES_PAL(MABOSSTIFF, gMonPalette_Mabosstiff),
	SPECIES_PAL(SHROODLE, gMonPalette_Shroodle),
	SPECIES_PAL(GRAFAIAI, gMonPalette_Grafaiai),
	SPECIES_PAL(BRAMBLIN, gMonPalette_Bramblin),
	SPECIES_PAL(BRMBLGHAST, gMonPalette_Brmblghast),
	SPECIES_PAL(TOEDSCOOL, gMonPalette_Toedscool),
	SPECIES_PAL(TOEDSCRUEL, gMonPalette_Toedscruel),
	SPECIES_PAL(KLAWF, gMonPalette_Klawf),
	SPECIES_PAL(CAPSAKID, gMonPalette_Capsakid),
	SPECIES_PAL(SCOVILLAIN, gMonPalette_Scovillain),
	SPECIES_PAL(RELLOR, gMonPalette_Rellor),
	SPECIES_PAL(RABSCA, gMonPalette_Rabsca),
	SPECIES_PAL(FLITTLE, gMonPalette_Flittle),
	SPECIES_PAL(ESPATHRA, gMonPalette_Espathra),
	SPECIES_PAL(TINKATINK, gMonPalette_Tinkatink),
	SPECIES_PAL(TINKATUFF, gMonPalette_Tinkatuff),
	SPECIES_PAL(TINKATON, gMonPalette_Tinkaton),
	SPECIES_PAL(WIGLETT, gMonPalette_Wiglett),
	SPECIES_PAL(WUGTRIO, gMonPalette_Wugtrio),
	SPECIES_PAL(BOMBIRDIER, gMonPalette_Bombirdier),
	SPECIES_PAL(FINIZEN, gMonPalette_Finizen),
	SPECIES_PAL(PALAFIN, gMonPalette_Palafin),
	SPECIES_PAL(PALAFIN_2, gMonPalette_Palafin2),
	SPECIES_PAL(VAROOM, gMonPalette_Varoom),
	SPECIES_PAL(REVAVROOM, gMonPalette_Revavroom),
	SPECIES_PAL(CYCLIZAR, gMonPalette_Cyclizar),
	SPECIES_PAL(ORTHWORM, gMonPalette_Orthworm),
	SPECIES_PAL(GLIMMET, gMonPalette_Glimmet),
	SPECIES_PAL(GLIMMORA, gMonPalette_Glimmora),
	SPECIES_PAL(GREAVARD, gMonPalette_Greavard),
	SPECIES_PAL(HOUNDSTONE, gMonPalette_Houndstone),
	SPECIES_PAL(FLAMIGO, gMonPalette_Flamigo),
	SPECIES_PAL(CETODDLE, gMonPalette_Cetoddle),
	SPECIES_PAL(CETITAN, gMonPalette_Cetitan),
	SPECIES_PAL(VELUZA, gMonPalette_Veluza),
	SPECIES_PAL(DONDOZO, gMonPalette_Dondozo),
	SPECIES_PAL(TATSUGIRI, gMonPalette_Tatsugiri),
	SPECIES_PAL(TATSUGIRI_2, gMonPalette_Tatsugiri2),
	SPECIES_PAL(TATSUGIRI_3, gMonPalette_Tatsugiri3),
	SPECIES_PAL(ANNIHILAPE, gMonPalette_Annihilape),
	SPECIES_PAL(CLODSIRE, gMonPalette_Clodsire),
	SPECIES_PAL(FARIGIRAF, gMonPalette_Farigiraf),
	SPECIES_PAL(DUDUNSPRCE, gMonPalette_Dudunsprce),
	SPECIES_PAL(DUDUNSPRCE_2, gMonPalette_Dudunsprce2),
	SPECIES_PAL(KINGAMBIT, gMonPalette_Kingambit),
	SPECIES_PAL(GREATTUSK, gMonPalette_GreatTusk),
	SPECIES_PAL(SCREAMTAIL, gMonPalette_ScreamTail),
	SPECIES_PAL(BRUTEBONET, gMonPalette_BruteBonet),
	SPECIES_PAL(FLUTTRMANE, gMonPalette_FluttrMane),
	SPECIES_PAL(SLITHRWING, gMonPalette_SlithrWing),
	SPECIES_PAL(SNDYSHOCKS, gMonPalette_SndyShocks),
	SPECIES_PAL(IRONTREADS, gMonPalette_IronTreads),
	SPECIES_PAL(IRONBUNDLE, gMonPalette_IronBundle),
	SPECIES_PAL(IRONHANDS, gMonPalette_IronHands),
	SPECIES_PAL(IRONJUGULS, gMonPalette_IronJuguls),
	SPECIES_PAL(IRONMOTH, gMonPalette_IronMoth),
	SPECIES_PAL(IRONTHORNS, gMonPalette_IronThorns),
	SPECIES_PAL(FRIGIBAX, gMonPalette_Frigibax),
	SPECIES_PAL(ARCTIBAX, gMonPalette_Arctibax),
	SPECIES_PAL(BAXCALIBUR, gMonPalette_Baxcalibur),
	SPECIES_PAL(GIMMIGHOUL, gMonPalette_Gimmighoul),
	SPECIES_PAL(GIMMIGHOUL_2, gMonPalette_Gimmighoul2),
	SPECIES_PAL(GHOLDENGO, gMonPalette_Gholdengo),
	SPECIES_PAL(WOCHIEN, gMonPalette_WoChien),
	SPECIES_PAL(CHIENPAO, gMonPalette_ChienPao),
	SPECIES_PAL(TINGLU, gMonPalette_TingLu),
	SPECIES_PAL(CHIYU, gMonPalette_ChiYu),
	SPECIES_PAL(ROARNGMOON, gMonPalette_RoarngMoon),
	SPECIES_PAL(IRONVLIANT, gMonPalette_IronVliant),
	SPECIES_PAL(KORAIDON, gMonPalette_Koraidon),
	SPECIES_PAL(MIRAIDON, gMonPalette_Miraidon),
	SPECIES_PAL(TAUROS_2, gMonPalette_Tauros2),
	SPECIES_PAL(TAUROS_3, gMonPalette_Tauros3),
	SPECIES_PAL(TAUROS_4, gMonPalette_Tauros4),
	SPECIES_PAL(WOOPER_2, gMonPalette_Wooper2),
	SPECIES_PAL(WALKNGWAKE, gMonPalette_WalkngWake),
	SPECIES_PAL(IRONLEAVES, gMonPalette_IronLeaves),
	SPECIES_PAL(DIPPLIN, gMonPalette_Dipplin),
	SPECIES_PAL(PTCHAGEIST, gMonPalette_Ptchageist),
	SPECIES_PAL(PTCHAGEIST_2, gMonPalette_Ptchageist2),
	SPECIES_PAL(SINISTCHA, gMonPalette_Sinistcha),
	SPECIES_PAL(SINISTCHA_2, gMonPalette_Sinistcha2),
	SPECIES_PAL(OKIDOGI, gMonPalette_Okidogi),
	SPECIES_PAL(MUNKIDORI, gMonPalette_Munkidori),
	SPECIES_PAL(FEZNDIPITI, gMonPalette_Fezndipiti),
	SPECIES_PAL(OGERPON, gMonPalette_Ogerpon),
	SPECIES_PAL(OGERPON_2, gMonPalette_Ogerpon2),
	SPECIES_PAL(OGERPON_3, gMonPalette_Ogerpon3),
	SPECIES_PAL(OGERPON_4, gMonPalette_Ogerpon4),
	SPECIES_PAL(OGERPON_5, gMonPalette_Ogerpon5),
	SPECIES_PAL(OGERPON_6, gMonPalette_Ogerpon6),
	SPECIES_PAL(OGERPON_7, gMonPalette_Ogerpon7),
	SPECIES_PAL(OGERPON_8, gMonPalette_Ogerpon8),
	SPECIES_PAL(URSALUNA_2, gMonPalette_Ursaluna2),
	SPECIES_PAL(ARCHALUDON, gMonPalette_Archaludon),
	SPECIES_PAL(HYDRAPPLE, gMonPalette_Hydrapple),
	SPECIES_PAL(GOUGINFIRE, gMonPalette_GouginFire),
	SPECIES_PAL(RAGINGBOLT, gMonPalette_RagingBolt),
	SPECIES_PAL(IRONBOULDR, gMonPalette_IronBouldr),
	SPECIES_PAL(IRONCROWN, gMonPalette_IronCrown),
	SPECIES_PAL(TERAPAGOS, gMonPalette_Terapagos),
	SPECIES_PAL(TERAPAGOS_2, gMonPalette_Terapagos2),
	SPECIES_PAL(TERAPAGOS_3, gMonPalette_Terapagos3),
	SPECIES_PAL(PECHARUNT, gMonPalette_Pecharunt),
	SPECIES_PAL(MOTHIM_2, gMonPalette_Mothim2),
	SPECIES_PAL(MOTHIM_3, gMonPalette_Mothim3),
	SPECIES_PAL(SCATTERBUG_2, gMonPalette_Scatterbug2),
	SPECIES_PAL(SCATTERBUG_3, gMonPalette_Scatterbug3),
	SPECIES_PAL(SCATTERBUG_4, gMonPalette_Scatterbug4),
	SPECIES_PAL(SCATTERBUG_5, gMonPalette_Scatterbug5),
	SPECIES_PAL(SCATTERBUG_6, gMonPalette_Scatterbug6),
	SPECIES_PAL(SCATTERBUG_7, gMonPalette_Scatterbug7),
	SPECIES_PAL(SCATTERBUG_8, gMonPalette_Scatterbug8),
	SPECIES_PAL(SCATTERBUG_9, gMonPalette_Scatterbug9),
	SPECIES_PAL(SCATTERBUG_10, gMonPalette_Scatterbug10),
	SPECIES_PAL(SCATTERBUG_11, gMonPalette_Scatterbug11),
	SPECIES_PAL(SCATTERBUG_12, gMonPalette_Scatterbug12),
	SPECIES_PAL(SCATTERBUG_13, gMonPalette_Scatterbug13),
	SPECIES_PAL(SCATTERBUG_14, gMonPalette_Scatterbug14),
	SPECIES_PAL(SCATTERBUG_15, gMonPalette_Scatterbug15),
	SPECIES_PAL(SCATTERBUG_16, gMonPalette_Scatterbug16),
	SPECIES_PAL(SCATTERBUG_17, gMonPalette_Scatterbug17),
	SPECIES_PAL(SCATTERBUG_18, gMonPalette_Scatterbug18),
	SPECIES_PAL(SCATTERBUG_19, gMonPalette_Scatterbug19),
	SPECIES_PAL(SCATTERBUG_20, gMonPalette_Scatterbug20),
	SPECIES_PAL(SPEWPA_2, gMonPalette_Spewpa2),
	SPECIES_PAL(SPEWPA_3, gMonPalette_Spewpa3),
	SPECIES_PAL(SPEWPA_4, gMonPalette_Spewpa4),
	SPECIES_PAL(SPEWPA_5, gMonPalette_Spewpa5),
	SPECIES_PAL(SPEWPA_6, gMonPalette_Spewpa6),
	SPECIES_PAL(SPEWPA_7, gMonPalette_Spewpa7),
	SPECIES_PAL(SPEWPA_8, gMonPalette_Spewpa8),
	SPECIES_PAL(SPEWPA_9, gMonPalette_Spewpa9),
	SPECIES_PAL(SPEWPA_10, gMonPalette_Spewpa10),
	SPECIES_PAL(SPEWPA_11, gMonPalette_Spewpa11),
	SPECIES_PAL(SPEWPA_12, gMonPalette_Spewpa12),
	SPECIES_PAL(SPEWPA_13, gMonPalette_Spewpa13),
	SPECIES_PAL(SPEWPA_14, gMonPalette_Spewpa14),
	SPECIES_PAL(SPEWPA_15, gMonPalette_Spewpa15),
	SPECIES_PAL(SPEWPA_16, gMonPalette_Spewpa16),
	SPECIES_PAL(SPEWPA_17, gMonPalette_Spewpa17),
	SPECIES_PAL(SPEWPA_18, gMonPalette_Spewpa18),
	SPECIES_PAL(SPEWPA_19, gMonPalette_Spewpa19),
	SPECIES_PAL(SPEWPA_20, gMonPalette_Spewpa20),
	SPECIES_PAL(RATICATE_3, gMonPalette_Raticate3),
	SPECIES_PAL(GUMSHOOS_2, gMonPalette_Gumshoos2),
	SPECIES_PAL(VIKAVOLT_2, gMonPalette_Vikavolt2),
	SPECIES_PAL(LURANTIS_2, gMonPalette_Lurantis2),
	SPECIES_PAL(SALAZZLE_2, gMonPalette_Salazzle2),
	SPECIES_PAL(MIMIKYU_3, gMonPalette_Mimikyu3),
	SPECIES_PAL(KOMMOO_2, gMonPalette_Kommoo2),
	SPECIES_PAL(MAROWAK_3, gMonPalette_Marowak3),
	SPECIES_PAL(RIBOMBEE_2, gMonPalette_Ribombee2),
	SPECIES_PAL(ARAQUANID_2, gMonPalette_Araquanid2),
	SPECIES_PAL(TOGEDEMARU_2, gMonPalette_Togedemaru2),
	SPECIES_PAL(PIKACHU_16, gMonPalette_Pikachu16),
	SPECIES_PAL(EEVEE_2, gMonPalette_Eevee2),
	SPECIES_PAL(VENUSAUR_3, gMonPalette_Venusaur3),
	SPECIES_PAL(BLASTOISE_3, gMonPalette_Blastoise3),
	SPECIES_PAL(CHARIZARD_4, gMonPalette_Charizard4),
	SPECIES_PAL(BUTTERFREE_2, gMonPalette_Butterfree2),
	SPECIES_PAL(PIKACHU_17, gMonPalette_Pikachu17),
	SPECIES_PAL(MEOWTH_4, gMonPalette_Meowth4),
	SPECIES_PAL(MACHAMP_2, gMonPalette_Machamp2),
	SPECIES_PAL(GENGAR_3, gMonPalette_Gengar3),
	SPECIES_PAL(KINGLER_2, gMonPalette_Kingler2),
	SPECIES_PAL(LAPRAS_2, gMonPalette_Lapras2),
	SPECIES_PAL(EEVEE_3, gMonPalette_Eevee3),
	SPECIES_PAL(SNORLAX_2, gMonPalette_Snorlax2),
	SPECIES_PAL(GARBODOR_2, gMonPalette_Garbodor2),
	SPECIES_PAL(MELMETAL_2, gMonPalette_Melmetal2),
	SPECIES_PAL(RILLABOOM_2, gMonPalette_Rillaboom2),
	SPECIES_PAL(CINDERACE_2, gMonPalette_Cinderace2),
	SPECIES_PAL(INTELEON_2, gMonPalette_Inteleon2),
	SPECIES_PAL(CORVIKNIGH_2, gMonPalette_Corviknigh2),
	SPECIES_PAL(ORBEETLE_2, gMonPalette_Orbeetle2),
	SPECIES_PAL(DREDNAW_2, gMonPalette_Drednaw2),
	SPECIES_PAL(COALOSSAL_2, gMonPalette_Coalossal2),
	SPECIES_PAL(FLAPPLE_2, gMonPalette_Flapple2),
	SPECIES_PAL(APPLETUN_2, gMonPalette_Appletun2),
	SPECIES_PAL(SANDACONDA_2, gMonPalette_Sandaconda2),
	SPECIES_PAL(TOXTRICITY_3, gMonPalette_Toxtricity3),
	SPECIES_PAL(TOXTRICITY_4, gMonPalette_Toxtricity4),
	SPECIES_PAL(CENTISKORC_2, gMonPalette_Centiskorc2),
	SPECIES_PAL(HATTERENE_2, gMonPalette_Hatterene2),
	SPECIES_PAL(GRIMMSNARL_2, gMonPalette_Grimmsnarl2),
	SPECIES_PAL(ALCREMIE_64, gMonPalette_Alcremie64),
	SPECIES_PAL(COPPERAJAH_2, gMonPalette_Copperajah2),
	SPECIES_PAL(DURALUDON_2, gMonPalette_Duraludon2),
	SPECIES_PAL(URSHIFU_3, gMonPalette_Urshifu3),
	SPECIES_PAL(URSHIFU_4, gMonPalette_Urshifu4),
	SPECIES_PAL(MIMIKYU_4, gMonPalette_Mimikyu4),
};