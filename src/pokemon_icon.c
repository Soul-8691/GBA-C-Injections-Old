#include "../include/global.h"
#include "../include/gflib.h"
#include "../include/mail_data.h"
#include "../include/pokemon_icon.h"
#include "../include/graphics.h"

#define POKE_ICON_BASE_PAL_TAG 56000

struct MonIconSpriteTemplate
{
    const struct OamData * oam;
    const u8 *image;
    const union AnimCmd *const * anims;
    const union AffineAnimCmd *const * affineAnims;
    SpriteCallback callback;
    u16 paletteTag;
};

extern const struct OamData sMonIconOamData;
extern const union AnimCmd *const sMonIconAnims[];
extern const union AffineAnimCmd *const sMonIconAffineAnims[];
extern u8 CreateMonIconSprite(const struct MonIconSpriteTemplate * template, s16 x, s16 y, u8 subpriority);

extern const u8 gMonIcon_[];
extern const u8 gMonIcon_Bulbasaur[];
extern const u8 gMonIcon_Ivysaur[];
extern const u8 gMonIcon_Venusaur[];
extern const u8 gMonIcon_Charmander[];
extern const u8 gMonIcon_Charmeleon[];
extern const u8 gMonIcon_Charizard[];
extern const u8 gMonIcon_Squirtle[];
extern const u8 gMonIcon_Wartortle[];
extern const u8 gMonIcon_Blastoise[];
extern const u8 gMonIcon_Caterpie[];
extern const u8 gMonIcon_Metapod[];
extern const u8 gMonIcon_Butterfree[];
extern const u8 gMonIcon_Weedle[];
extern const u8 gMonIcon_Kakuna[];
extern const u8 gMonIcon_Beedrill[];
extern const u8 gMonIcon_Pidgey[];
extern const u8 gMonIcon_Pidgeotto[];
extern const u8 gMonIcon_Pidgeot[];
extern const u8 gMonIcon_Rattata[];
extern const u8 gMonIcon_Raticate[];
extern const u8 gMonIcon_Spearow[];
extern const u8 gMonIcon_Fearow[];
extern const u8 gMonIcon_Ekans[];
extern const u8 gMonIcon_Arbok[];
extern const u8 gMonIcon_Pikachu[];
extern const u8 gMonIcon_Raichu[];
extern const u8 gMonIcon_Sandshrew[];
extern const u8 gMonIcon_Sandslash[];
extern const u8 gMonIcon_Nidoransf[];
extern const u8 gMonIcon_Nidorina[];
extern const u8 gMonIcon_Nidoqueen[];
extern const u8 gMonIcon_Nidoransm[];
extern const u8 gMonIcon_Nidorino[];
extern const u8 gMonIcon_Nidoking[];
extern const u8 gMonIcon_Clefairy[];
extern const u8 gMonIcon_Clefable[];
extern const u8 gMonIcon_Vulpix[];
extern const u8 gMonIcon_Ninetales[];
extern const u8 gMonIcon_Jigglypuff[];
extern const u8 gMonIcon_Wigglytuff[];
extern const u8 gMonIcon_Zubat[];
extern const u8 gMonIcon_Golbat[];
extern const u8 gMonIcon_Oddish[];
extern const u8 gMonIcon_Gloom[];
extern const u8 gMonIcon_Vileplume[];
extern const u8 gMonIcon_Paras[];
extern const u8 gMonIcon_Parasect[];
extern const u8 gMonIcon_Venonat[];
extern const u8 gMonIcon_Venomoth[];
extern const u8 gMonIcon_Diglett[];
extern const u8 gMonIcon_Dugtrio[];
extern const u8 gMonIcon_Meowth[];
extern const u8 gMonIcon_Persian[];
extern const u8 gMonIcon_Psyduck[];
extern const u8 gMonIcon_Golduck[];
extern const u8 gMonIcon_Mankey[];
extern const u8 gMonIcon_Primeape[];
extern const u8 gMonIcon_Growlithe[];
extern const u8 gMonIcon_Arcanine[];
extern const u8 gMonIcon_Poliwag[];
extern const u8 gMonIcon_Poliwhirl[];
extern const u8 gMonIcon_Poliwrath[];
extern const u8 gMonIcon_Abra[];
extern const u8 gMonIcon_Kadabra[];
extern const u8 gMonIcon_Alakazam[];
extern const u8 gMonIcon_Machop[];
extern const u8 gMonIcon_Machoke[];
extern const u8 gMonIcon_Machamp[];
extern const u8 gMonIcon_Bellsprout[];
extern const u8 gMonIcon_Weepinbell[];
extern const u8 gMonIcon_Victreebel[];
extern const u8 gMonIcon_Tentacool[];
extern const u8 gMonIcon_Tentacruel[];
extern const u8 gMonIcon_Geodude[];
extern const u8 gMonIcon_Graveler[];
extern const u8 gMonIcon_Golem[];
extern const u8 gMonIcon_Ponyta[];
extern const u8 gMonIcon_Rapidash[];
extern const u8 gMonIcon_Slowpoke[];
extern const u8 gMonIcon_Slowbro[];
extern const u8 gMonIcon_Magnemite[];
extern const u8 gMonIcon_Magneton[];
extern const u8 gMonIcon_Farfetchd[];
extern const u8 gMonIcon_Doduo[];
extern const u8 gMonIcon_Dodrio[];
extern const u8 gMonIcon_Seel[];
extern const u8 gMonIcon_Dewgong[];
extern const u8 gMonIcon_Grimer[];
extern const u8 gMonIcon_Muk[];
extern const u8 gMonIcon_Shellder[];
extern const u8 gMonIcon_Cloyster[];
extern const u8 gMonIcon_Gastly[];
extern const u8 gMonIcon_Haunter[];
extern const u8 gMonIcon_Gengar[];
extern const u8 gMonIcon_Onix[];
extern const u8 gMonIcon_Drowzee[];
extern const u8 gMonIcon_Hypno[];
extern const u8 gMonIcon_Krabby[];
extern const u8 gMonIcon_Kingler[];
extern const u8 gMonIcon_Voltorb[];
extern const u8 gMonIcon_Electrode[];
extern const u8 gMonIcon_Exeggcute[];
extern const u8 gMonIcon_Exeggutor[];
extern const u8 gMonIcon_Cubone[];
extern const u8 gMonIcon_Marowak[];
extern const u8 gMonIcon_Hitmonlee[];
extern const u8 gMonIcon_Hitmonchan[];
extern const u8 gMonIcon_Lickitung[];
extern const u8 gMonIcon_Koffing[];
extern const u8 gMonIcon_Weezing[];
extern const u8 gMonIcon_Rhyhorn[];
extern const u8 gMonIcon_Rhydon[];
extern const u8 gMonIcon_Chansey[];
extern const u8 gMonIcon_Tangela[];
extern const u8 gMonIcon_Kangaskhan[];
extern const u8 gMonIcon_Horsea[];
extern const u8 gMonIcon_Seadra[];
extern const u8 gMonIcon_Goldeen[];
extern const u8 gMonIcon_Seaking[];
extern const u8 gMonIcon_Staryu[];
extern const u8 gMonIcon_Starmie[];
extern const u8 gMonIcon_MrMime[];
extern const u8 gMonIcon_Scyther[];
extern const u8 gMonIcon_Jynx[];
extern const u8 gMonIcon_Electabuzz[];
extern const u8 gMonIcon_Magmar[];
extern const u8 gMonIcon_Pinsir[];
extern const u8 gMonIcon_Tauros[];
extern const u8 gMonIcon_Magikarp[];
extern const u8 gMonIcon_Gyarados[];
extern const u8 gMonIcon_Lapras[];
extern const u8 gMonIcon_Ditto[];
extern const u8 gMonIcon_Eevee[];
extern const u8 gMonIcon_Vaporeon[];
extern const u8 gMonIcon_Jolteon[];
extern const u8 gMonIcon_Flareon[];
extern const u8 gMonIcon_Porygon[];
extern const u8 gMonIcon_Omanyte[];
extern const u8 gMonIcon_Omastar[];
extern const u8 gMonIcon_Kabuto[];
extern const u8 gMonIcon_Kabutops[];
extern const u8 gMonIcon_Aerodactyl[];
extern const u8 gMonIcon_Snorlax[];
extern const u8 gMonIcon_Articuno[];
extern const u8 gMonIcon_Zapdos[];
extern const u8 gMonIcon_Moltres[];
extern const u8 gMonIcon_Dratini[];
extern const u8 gMonIcon_Dragonair[];
extern const u8 gMonIcon_Dragonite[];
extern const u8 gMonIcon_Mewtwo[];
extern const u8 gMonIcon_Mew[];
extern const u8 gMonIcon_Chikorita[];
extern const u8 gMonIcon_Bayleef[];
extern const u8 gMonIcon_Meganium[];
extern const u8 gMonIcon_Cyndaquil[];
extern const u8 gMonIcon_Quilava[];
extern const u8 gMonIcon_Typhlosion[];
extern const u8 gMonIcon_Totodile[];
extern const u8 gMonIcon_Croconaw[];
extern const u8 gMonIcon_Feraligatr[];
extern const u8 gMonIcon_Sentret[];
extern const u8 gMonIcon_Furret[];
extern const u8 gMonIcon_Hoothoot[];
extern const u8 gMonIcon_Noctowl[];
extern const u8 gMonIcon_Ledyba[];
extern const u8 gMonIcon_Ledian[];
extern const u8 gMonIcon_Spinarak[];
extern const u8 gMonIcon_Ariados[];
extern const u8 gMonIcon_Crobat[];
extern const u8 gMonIcon_Chinchou[];
extern const u8 gMonIcon_Lanturn[];
extern const u8 gMonIcon_Pichu[];
extern const u8 gMonIcon_Cleffa[];
extern const u8 gMonIcon_Igglybuff[];
extern const u8 gMonIcon_Togepi[];
extern const u8 gMonIcon_Togetic[];
extern const u8 gMonIcon_Natu[];
extern const u8 gMonIcon_Xatu[];
extern const u8 gMonIcon_Mareep[];
extern const u8 gMonIcon_Flaaffy[];
extern const u8 gMonIcon_Ampharos[];
extern const u8 gMonIcon_Bellossom[];
extern const u8 gMonIcon_Marill[];
extern const u8 gMonIcon_Azumarill[];
extern const u8 gMonIcon_Sudowoodo[];
extern const u8 gMonIcon_Politoed[];
extern const u8 gMonIcon_Hoppip[];
extern const u8 gMonIcon_Skiploom[];
extern const u8 gMonIcon_Jumpluff[];
extern const u8 gMonIcon_Aipom[];
extern const u8 gMonIcon_Sunkern[];
extern const u8 gMonIcon_Sunflora[];
extern const u8 gMonIcon_Yanma[];
extern const u8 gMonIcon_Wooper[];
extern const u8 gMonIcon_Quagsire[];
extern const u8 gMonIcon_Espeon[];
extern const u8 gMonIcon_Umbreon[];
extern const u8 gMonIcon_Murkrow[];
extern const u8 gMonIcon_Slowking[];
extern const u8 gMonIcon_Misdreavus[];
extern const u8 gMonIcon_Unown[];
extern const u8 gMonIcon_Wobbuffet[];
extern const u8 gMonIcon_Girafarig[];
extern const u8 gMonIcon_Pineco[];
extern const u8 gMonIcon_Forretress[];
extern const u8 gMonIcon_Dunsparce[];
extern const u8 gMonIcon_Gligar[];
extern const u8 gMonIcon_Steelix[];
extern const u8 gMonIcon_Snubbull[];
extern const u8 gMonIcon_Granbull[];
extern const u8 gMonIcon_Qwilfish[];
extern const u8 gMonIcon_Scizor[];
extern const u8 gMonIcon_Shuckle[];
extern const u8 gMonIcon_Heracross[];
extern const u8 gMonIcon_Sneasel[];
extern const u8 gMonIcon_Teddiursa[];
extern const u8 gMonIcon_Ursaring[];
extern const u8 gMonIcon_Slugma[];
extern const u8 gMonIcon_Magcargo[];
extern const u8 gMonIcon_Swinub[];
extern const u8 gMonIcon_Piloswine[];
extern const u8 gMonIcon_Corsola[];
extern const u8 gMonIcon_Remoraid[];
extern const u8 gMonIcon_Octillery[];
extern const u8 gMonIcon_Delibird[];
extern const u8 gMonIcon_Mantine[];
extern const u8 gMonIcon_Skarmory[];
extern const u8 gMonIcon_Houndour[];
extern const u8 gMonIcon_Houndoom[];
extern const u8 gMonIcon_Kingdra[];
extern const u8 gMonIcon_Phanpy[];
extern const u8 gMonIcon_Donphan[];
extern const u8 gMonIcon_Porygon2[];
extern const u8 gMonIcon_Stantler[];
extern const u8 gMonIcon_Smeargle[];
extern const u8 gMonIcon_Tyrogue[];
extern const u8 gMonIcon_Hitmontop[];
extern const u8 gMonIcon_Smoochum[];
extern const u8 gMonIcon_Elekid[];
extern const u8 gMonIcon_Magby[];
extern const u8 gMonIcon_Miltank[];
extern const u8 gMonIcon_Blissey[];
extern const u8 gMonIcon_Raikou[];
extern const u8 gMonIcon_Entei[];
extern const u8 gMonIcon_Suicune[];
extern const u8 gMonIcon_Larvitar[];
extern const u8 gMonIcon_Pupitar[];
extern const u8 gMonIcon_Tyranitar[];
extern const u8 gMonIcon_Lugia[];
extern const u8 gMonIcon_HoOh[];
extern const u8 gMonIcon_Celebi[];
extern const u8 gMonIcon_Treecko[];
extern const u8 gMonIcon_Grovyle[];
extern const u8 gMonIcon_Sceptile[];
extern const u8 gMonIcon_Torchic[];
extern const u8 gMonIcon_Combusken[];
extern const u8 gMonIcon_Blaziken[];
extern const u8 gMonIcon_Mudkip[];
extern const u8 gMonIcon_Marshtomp[];
extern const u8 gMonIcon_Swampert[];
extern const u8 gMonIcon_Poochyena[];
extern const u8 gMonIcon_Mightyena[];
extern const u8 gMonIcon_Zigzagoon[];
extern const u8 gMonIcon_Linoone[];
extern const u8 gMonIcon_Wurmple[];
extern const u8 gMonIcon_Silcoon[];
extern const u8 gMonIcon_Beautifly[];
extern const u8 gMonIcon_Cascoon[];
extern const u8 gMonIcon_Dustox[];
extern const u8 gMonIcon_Lotad[];
extern const u8 gMonIcon_Lombre[];
extern const u8 gMonIcon_Ludicolo[];
extern const u8 gMonIcon_Seedot[];
extern const u8 gMonIcon_Nuzleaf[];
extern const u8 gMonIcon_Shiftry[];
extern const u8 gMonIcon_Taillow[];
extern const u8 gMonIcon_Swellow[];
extern const u8 gMonIcon_Wingull[];
extern const u8 gMonIcon_Pelipper[];
extern const u8 gMonIcon_Ralts[];
extern const u8 gMonIcon_Kirlia[];
extern const u8 gMonIcon_Gardevoir[];
extern const u8 gMonIcon_Surskit[];
extern const u8 gMonIcon_Masquerain[];
extern const u8 gMonIcon_Shroomish[];
extern const u8 gMonIcon_Breloom[];
extern const u8 gMonIcon_Slakoth[];
extern const u8 gMonIcon_Vigoroth[];
extern const u8 gMonIcon_Slaking[];
extern const u8 gMonIcon_Nincada[];
extern const u8 gMonIcon_Ninjask[];
extern const u8 gMonIcon_Shedinja[];
extern const u8 gMonIcon_Whismur[];
extern const u8 gMonIcon_Loudred[];
extern const u8 gMonIcon_Exploud[];
extern const u8 gMonIcon_Makuhita[];
extern const u8 gMonIcon_Hariyama[];
extern const u8 gMonIcon_Azurill[];
extern const u8 gMonIcon_Nosepass[];
extern const u8 gMonIcon_Skitty[];
extern const u8 gMonIcon_Delcatty[];
extern const u8 gMonIcon_Sableye[];
extern const u8 gMonIcon_Mawile[];
extern const u8 gMonIcon_Aron[];
extern const u8 gMonIcon_Lairon[];
extern const u8 gMonIcon_Aggron[];
extern const u8 gMonIcon_Meditite[];
extern const u8 gMonIcon_Medicham[];
extern const u8 gMonIcon_Electrike[];
extern const u8 gMonIcon_Manectric[];
extern const u8 gMonIcon_Plusle[];
extern const u8 gMonIcon_Minun[];
extern const u8 gMonIcon_Volbeat[];
extern const u8 gMonIcon_Illumise[];
extern const u8 gMonIcon_Roselia[];
extern const u8 gMonIcon_Gulpin[];
extern const u8 gMonIcon_Swalot[];
extern const u8 gMonIcon_Carvanha[];
extern const u8 gMonIcon_Sharpedo[];
extern const u8 gMonIcon_Wailmer[];
extern const u8 gMonIcon_Wailord[];
extern const u8 gMonIcon_Numel[];
extern const u8 gMonIcon_Camerupt[];
extern const u8 gMonIcon_Torkoal[];
extern const u8 gMonIcon_Spoink[];
extern const u8 gMonIcon_Grumpig[];
extern const u8 gMonIcon_Spinda[];
extern const u8 gMonIcon_Trapinch[];
extern const u8 gMonIcon_Vibrava[];
extern const u8 gMonIcon_Flygon[];
extern const u8 gMonIcon_Cacnea[];
extern const u8 gMonIcon_Cacturne[];
extern const u8 gMonIcon_Swablu[];
extern const u8 gMonIcon_Altaria[];
extern const u8 gMonIcon_Zangoose[];
extern const u8 gMonIcon_Seviper[];
extern const u8 gMonIcon_Lunatone[];
extern const u8 gMonIcon_Solrock[];
extern const u8 gMonIcon_Barboach[];
extern const u8 gMonIcon_Whiscash[];
extern const u8 gMonIcon_Corphish[];
extern const u8 gMonIcon_Crawdaunt[];
extern const u8 gMonIcon_Baltoy[];
extern const u8 gMonIcon_Claydol[];
extern const u8 gMonIcon_Lileep[];
extern const u8 gMonIcon_Cradily[];
extern const u8 gMonIcon_Anorith[];
extern const u8 gMonIcon_Armaldo[];
extern const u8 gMonIcon_Feebas[];
extern const u8 gMonIcon_Milotic[];
extern const u8 gMonIcon_Castform[];
extern const u8 gMonIcon_Kecleon[];
extern const u8 gMonIcon_Shuppet[];
extern const u8 gMonIcon_Banette[];
extern const u8 gMonIcon_Duskull[];
extern const u8 gMonIcon_Dusclops[];
extern const u8 gMonIcon_Tropius[];
extern const u8 gMonIcon_Chimecho[];
extern const u8 gMonIcon_Absol[];
extern const u8 gMonIcon_Wynaut[];
extern const u8 gMonIcon_Snorunt[];
extern const u8 gMonIcon_Glalie[];
extern const u8 gMonIcon_Spheal[];
extern const u8 gMonIcon_Sealeo[];
extern const u8 gMonIcon_Walrein[];
extern const u8 gMonIcon_Clamperl[];
extern const u8 gMonIcon_Huntail[];
extern const u8 gMonIcon_Gorebyss[];
extern const u8 gMonIcon_Relicanth[];
extern const u8 gMonIcon_Luvdisc[];
extern const u8 gMonIcon_Bagon[];
extern const u8 gMonIcon_Shelgon[];
extern const u8 gMonIcon_Salamence[];
extern const u8 gMonIcon_Beldum[];
extern const u8 gMonIcon_Metang[];
extern const u8 gMonIcon_Metagross[];
extern const u8 gMonIcon_Regirock[];
extern const u8 gMonIcon_Regice[];
extern const u8 gMonIcon_Registeel[];
extern const u8 gMonIcon_Latias[];
extern const u8 gMonIcon_Latios[];
extern const u8 gMonIcon_Kyogre[];
extern const u8 gMonIcon_Groudon[];
extern const u8 gMonIcon_Rayquaza[];
extern const u8 gMonIcon_Jirachi[];
extern const u8 gMonIcon_Deoxys[];
extern const u8 gMonIcon_Turtwig[];
extern const u8 gMonIcon_Grotle[];
extern const u8 gMonIcon_Torterra[];
extern const u8 gMonIcon_Chimchar[];
extern const u8 gMonIcon_Monferno[];
extern const u8 gMonIcon_Infernape[];
extern const u8 gMonIcon_Piplup[];
extern const u8 gMonIcon_Prinplup[];
extern const u8 gMonIcon_Empoleon[];
extern const u8 gMonIcon_Starly[];
extern const u8 gMonIcon_Staravia[];
extern const u8 gMonIcon_Staraptor[];
extern const u8 gMonIcon_Bidoof[];
extern const u8 gMonIcon_Bibarel[];
extern const u8 gMonIcon_Kricketot[];
extern const u8 gMonIcon_Kricketune[];
extern const u8 gMonIcon_Shinx[];
extern const u8 gMonIcon_Luxio[];
extern const u8 gMonIcon_Luxray[];
extern const u8 gMonIcon_Budew[];
extern const u8 gMonIcon_Roserade[];
extern const u8 gMonIcon_Cranidos[];
extern const u8 gMonIcon_Rampardos[];
extern const u8 gMonIcon_Shieldon[];
extern const u8 gMonIcon_Bastiodon[];
extern const u8 gMonIcon_Burmy[];
extern const u8 gMonIcon_Wormadam[];
extern const u8 gMonIcon_Mothim[];
extern const u8 gMonIcon_Combee[];
extern const u8 gMonIcon_Vespiquen[];
extern const u8 gMonIcon_Pachirisu[];
extern const u8 gMonIcon_Buizel[];
extern const u8 gMonIcon_Floatzel[];
extern const u8 gMonIcon_Cherubi[];
extern const u8 gMonIcon_Cherrim[];
extern const u8 gMonIcon_Shellos[];
extern const u8 gMonIcon_Gastrodon[];
extern const u8 gMonIcon_Ambipom[];
extern const u8 gMonIcon_Drifloon[];
extern const u8 gMonIcon_Drifblim[];
extern const u8 gMonIcon_Buneary[];
extern const u8 gMonIcon_Lopunny[];
extern const u8 gMonIcon_Mismagius[];
extern const u8 gMonIcon_Honchkrow[];
extern const u8 gMonIcon_Glameow[];
extern const u8 gMonIcon_Purugly[];
extern const u8 gMonIcon_Chingling[];
extern const u8 gMonIcon_Stunky[];
extern const u8 gMonIcon_Skuntank[];
extern const u8 gMonIcon_Bronzor[];
extern const u8 gMonIcon_Bronzong[];
extern const u8 gMonIcon_Bonsly[];
extern const u8 gMonIcon_MimeJr[];
extern const u8 gMonIcon_Happiny[];
extern const u8 gMonIcon_Chatot[];
extern const u8 gMonIcon_Spiritomb[];
extern const u8 gMonIcon_Gible[];
extern const u8 gMonIcon_Gabite[];
extern const u8 gMonIcon_Garchomp[];
extern const u8 gMonIcon_Munchlax[];
extern const u8 gMonIcon_Riolu[];
extern const u8 gMonIcon_Lucario[];
extern const u8 gMonIcon_Hippopotas[];
extern const u8 gMonIcon_Hippowdon[];
extern const u8 gMonIcon_Skorupi[];
extern const u8 gMonIcon_Drapion[];
extern const u8 gMonIcon_Croagunk[];
extern const u8 gMonIcon_Toxicroak[];
extern const u8 gMonIcon_Carnivine[];
extern const u8 gMonIcon_Finneon[];
extern const u8 gMonIcon_Lumineon[];
extern const u8 gMonIcon_Mantyke[];
extern const u8 gMonIcon_Snover[];
extern const u8 gMonIcon_Abomasnow[];
extern const u8 gMonIcon_Weavile[];
extern const u8 gMonIcon_Magnezone[];
extern const u8 gMonIcon_Lickilicky[];
extern const u8 gMonIcon_Rhyperior[];
extern const u8 gMonIcon_Tangrowth[];
extern const u8 gMonIcon_Electivire[];
extern const u8 gMonIcon_Magmortar[];
extern const u8 gMonIcon_Togekiss[];
extern const u8 gMonIcon_Yanmega[];
extern const u8 gMonIcon_Leafeon[];
extern const u8 gMonIcon_Glaceon[];
extern const u8 gMonIcon_Gliscor[];
extern const u8 gMonIcon_Mamoswine[];
extern const u8 gMonIcon_PorygonZ[];
extern const u8 gMonIcon_Gallade[];
extern const u8 gMonIcon_Probopass[];
extern const u8 gMonIcon_Dusknoir[];
extern const u8 gMonIcon_Froslass[];
extern const u8 gMonIcon_Rotom[];
extern const u8 gMonIcon_Uxie[];
extern const u8 gMonIcon_Mesprit[];
extern const u8 gMonIcon_Azelf[];
extern const u8 gMonIcon_Dialga[];
extern const u8 gMonIcon_Palkia[];
extern const u8 gMonIcon_Heatran[];
extern const u8 gMonIcon_Regigigas[];
extern const u8 gMonIcon_Giratina[];
extern const u8 gMonIcon_Cresselia[];
extern const u8 gMonIcon_Phione[];
extern const u8 gMonIcon_Manaphy[];
extern const u8 gMonIcon_Darkrai[];
extern const u8 gMonIcon_Shaymin[];
extern const u8 gMonIcon_Arceus[];
extern const u8 gMonIcon_Victini[];
extern const u8 gMonIcon_Snivy[];
extern const u8 gMonIcon_Servine[];
extern const u8 gMonIcon_Serperior[];
extern const u8 gMonIcon_Tepig[];
extern const u8 gMonIcon_Pignite[];
extern const u8 gMonIcon_Emboar[];
extern const u8 gMonIcon_Oshawott[];
extern const u8 gMonIcon_Dewott[];
extern const u8 gMonIcon_Samurott[];
extern const u8 gMonIcon_Patrat[];
extern const u8 gMonIcon_Watchog[];
extern const u8 gMonIcon_Lillipup[];
extern const u8 gMonIcon_Herdier[];
extern const u8 gMonIcon_Stoutland[];
extern const u8 gMonIcon_Purrloin[];
extern const u8 gMonIcon_Liepard[];
extern const u8 gMonIcon_Pansage[];
extern const u8 gMonIcon_Simisage[];
extern const u8 gMonIcon_Pansear[];
extern const u8 gMonIcon_Simisear[];
extern const u8 gMonIcon_Panpour[];
extern const u8 gMonIcon_Simipour[];
extern const u8 gMonIcon_Munna[];
extern const u8 gMonIcon_Musharna[];
extern const u8 gMonIcon_Pidove[];
extern const u8 gMonIcon_Tranquill[];
extern const u8 gMonIcon_Unfezant[];
extern const u8 gMonIcon_Blitzle[];
extern const u8 gMonIcon_Zebstrika[];
extern const u8 gMonIcon_Roggenrola[];
extern const u8 gMonIcon_Boldore[];
extern const u8 gMonIcon_Gigalith[];
extern const u8 gMonIcon_Woobat[];
extern const u8 gMonIcon_Swoobat[];
extern const u8 gMonIcon_Drilbur[];
extern const u8 gMonIcon_Excadrill[];
extern const u8 gMonIcon_Audino[];
extern const u8 gMonIcon_Timburr[];
extern const u8 gMonIcon_Gurdurr[];
extern const u8 gMonIcon_Conkeldurr[];
extern const u8 gMonIcon_Tympole[];
extern const u8 gMonIcon_Palpitoad[];
extern const u8 gMonIcon_Seismitoad[];
extern const u8 gMonIcon_Throh[];
extern const u8 gMonIcon_Sawk[];
extern const u8 gMonIcon_Sewaddle[];
extern const u8 gMonIcon_Swadloon[];
extern const u8 gMonIcon_Leavanny[];
extern const u8 gMonIcon_Venipede[];
extern const u8 gMonIcon_Whirlipede[];
extern const u8 gMonIcon_Scolipede[];
extern const u8 gMonIcon_Cottonee[];
extern const u8 gMonIcon_Whimsicott[];
extern const u8 gMonIcon_Petilil[];
extern const u8 gMonIcon_Lilligant[];
extern const u8 gMonIcon_Basculin[];
extern const u8 gMonIcon_Sandile[];
extern const u8 gMonIcon_Krokorok[];
extern const u8 gMonIcon_Krookodile[];
extern const u8 gMonIcon_Darumaka[];
extern const u8 gMonIcon_Darmanitan[];
extern const u8 gMonIcon_Maractus[];
extern const u8 gMonIcon_Dwebble[];
extern const u8 gMonIcon_Crustle[];
extern const u8 gMonIcon_Scraggy[];
extern const u8 gMonIcon_Scrafty[];
extern const u8 gMonIcon_Sigilyph[];
extern const u8 gMonIcon_Yamask[];
extern const u8 gMonIcon_Cofagrigus[];
extern const u8 gMonIcon_Tirtouga[];
extern const u8 gMonIcon_Carracosta[];
extern const u8 gMonIcon_Archen[];
extern const u8 gMonIcon_Archeops[];
extern const u8 gMonIcon_Trubbish[];
extern const u8 gMonIcon_Garbodor[];
extern const u8 gMonIcon_Zorua[];
extern const u8 gMonIcon_Zoroark[];
extern const u8 gMonIcon_Minccino[];
extern const u8 gMonIcon_Cinccino[];
extern const u8 gMonIcon_Gothita[];
extern const u8 gMonIcon_Gothorita[];
extern const u8 gMonIcon_Gothitelle[];
extern const u8 gMonIcon_Solosis[];
extern const u8 gMonIcon_Duosion[];
extern const u8 gMonIcon_Reuniclus[];
extern const u8 gMonIcon_Ducklett[];
extern const u8 gMonIcon_Swanna[];
extern const u8 gMonIcon_Vanillite[];
extern const u8 gMonIcon_Vanillish[];
extern const u8 gMonIcon_Vanilluxe[];
extern const u8 gMonIcon_Deerling[];
extern const u8 gMonIcon_Sawsbuck[];
extern const u8 gMonIcon_Emolga[];
extern const u8 gMonIcon_Karrablast[];
extern const u8 gMonIcon_Escavalier[];
extern const u8 gMonIcon_Foongus[];
extern const u8 gMonIcon_Amoonguss[];
extern const u8 gMonIcon_Frillish[];
extern const u8 gMonIcon_Jellicent[];
extern const u8 gMonIcon_Alomomola[];
extern const u8 gMonIcon_Joltik[];
extern const u8 gMonIcon_Galvantula[];
extern const u8 gMonIcon_Ferroseed[];
extern const u8 gMonIcon_Ferrothorn[];
extern const u8 gMonIcon_Klink[];
extern const u8 gMonIcon_Klang[];
extern const u8 gMonIcon_Klinklang[];
extern const u8 gMonIcon_Tynamo[];
extern const u8 gMonIcon_Eelektrik[];
extern const u8 gMonIcon_Eelektross[];
extern const u8 gMonIcon_Elgyem[];
extern const u8 gMonIcon_Beheeyem[];
extern const u8 gMonIcon_Litwick[];
extern const u8 gMonIcon_Lampent[];
extern const u8 gMonIcon_Chandelure[];
extern const u8 gMonIcon_Axew[];
extern const u8 gMonIcon_Fraxure[];
extern const u8 gMonIcon_Haxorus[];
extern const u8 gMonIcon_Cubchoo[];
extern const u8 gMonIcon_Beartic[];
extern const u8 gMonIcon_Cryogonal[];
extern const u8 gMonIcon_Shelmet[];
extern const u8 gMonIcon_Accelgor[];
extern const u8 gMonIcon_Stunfisk[];
extern const u8 gMonIcon_Mienfoo[];
extern const u8 gMonIcon_Mienshao[];
extern const u8 gMonIcon_Druddigon[];
extern const u8 gMonIcon_Golett[];
extern const u8 gMonIcon_Golurk[];
extern const u8 gMonIcon_Pawniard[];
extern const u8 gMonIcon_Bisharp[];
extern const u8 gMonIcon_Bouffalant[];
extern const u8 gMonIcon_Rufflet[];
extern const u8 gMonIcon_Braviary[];
extern const u8 gMonIcon_Vullaby[];
extern const u8 gMonIcon_Mandibuzz[];
extern const u8 gMonIcon_Heatmor[];
extern const u8 gMonIcon_Durant[];
extern const u8 gMonIcon_Deino[];
extern const u8 gMonIcon_Zweilous[];
extern const u8 gMonIcon_Hydreigon[];
extern const u8 gMonIcon_Larvesta[];
extern const u8 gMonIcon_Volcarona[];
extern const u8 gMonIcon_Cobalion[];
extern const u8 gMonIcon_Terrakion[];
extern const u8 gMonIcon_Virizion[];
extern const u8 gMonIcon_Tornadus[];
extern const u8 gMonIcon_Thundurus[];
extern const u8 gMonIcon_Reshiram[];
extern const u8 gMonIcon_Zekrom[];
extern const u8 gMonIcon_Landorus[];
extern const u8 gMonIcon_Kyurem[];
extern const u8 gMonIcon_Keldeo[];
extern const u8 gMonIcon_Meloetta[];
extern const u8 gMonIcon_Genesect[];
extern const u8 gMonIcon_Chespin[];
extern const u8 gMonIcon_Quilladin[];
extern const u8 gMonIcon_Chesnaught[];
extern const u8 gMonIcon_Fennekin[];
extern const u8 gMonIcon_Braixen[];
extern const u8 gMonIcon_Delphox[];
extern const u8 gMonIcon_Froakie[];
extern const u8 gMonIcon_Frogadier[];
extern const u8 gMonIcon_Greninja[];
extern const u8 gMonIcon_Bunnelby[];
extern const u8 gMonIcon_Diggersby[];
extern const u8 gMonIcon_Fletchling[];
extern const u8 gMonIcon_Flechinder[];
extern const u8 gMonIcon_Talonflame[];
extern const u8 gMonIcon_Scatterbug[];
extern const u8 gMonIcon_Spewpa[];
extern const u8 gMonIcon_Vivillon[];
extern const u8 gMonIcon_Litleo[];
extern const u8 gMonIcon_Pyroar[];
extern const u8 gMonIcon_Flabebe[];
extern const u8 gMonIcon_Floette[];
extern const u8 gMonIcon_Florges[];
extern const u8 gMonIcon_Skiddo[];
extern const u8 gMonIcon_Gogoat[];
extern const u8 gMonIcon_Pancham[];
extern const u8 gMonIcon_Pangoro[];
extern const u8 gMonIcon_Furfrou[];
extern const u8 gMonIcon_Espurr[];
extern const u8 gMonIcon_Meowstic[];
extern const u8 gMonIcon_Honedge[];
extern const u8 gMonIcon_Doublade[];
extern const u8 gMonIcon_Aegislash[];
extern const u8 gMonIcon_Spritzee[];
extern const u8 gMonIcon_Aromatisse[];
extern const u8 gMonIcon_Swirlix[];
extern const u8 gMonIcon_Slurpuff[];
extern const u8 gMonIcon_Inkay[];
extern const u8 gMonIcon_Malamar[];
extern const u8 gMonIcon_Binacle[];
extern const u8 gMonIcon_Barbaracle[];
extern const u8 gMonIcon_Skrelp[];
extern const u8 gMonIcon_Dragalge[];
extern const u8 gMonIcon_Clauncher[];
extern const u8 gMonIcon_Clawitzer[];
extern const u8 gMonIcon_Helioptile[];
extern const u8 gMonIcon_Heliolisk[];
extern const u8 gMonIcon_Tyrunt[];
extern const u8 gMonIcon_Tyrantrum[];
extern const u8 gMonIcon_Amaura[];
extern const u8 gMonIcon_Aurorus[];
extern const u8 gMonIcon_Sylveon[];
extern const u8 gMonIcon_Hawlucha[];
extern const u8 gMonIcon_Dedenne[];
extern const u8 gMonIcon_Carbink[];
extern const u8 gMonIcon_Goomy[];
extern const u8 gMonIcon_Sliggoo[];
extern const u8 gMonIcon_Goodra[];
extern const u8 gMonIcon_Klefki[];
extern const u8 gMonIcon_Phantump[];
extern const u8 gMonIcon_Trevenant[];
extern const u8 gMonIcon_Pumpkaboo[];
extern const u8 gMonIcon_Gourgeist[];
extern const u8 gMonIcon_Bergmite[];
extern const u8 gMonIcon_Avalugg[];
extern const u8 gMonIcon_Noibat[];
extern const u8 gMonIcon_Noivern[];
extern const u8 gMonIcon_Xerneas[];
extern const u8 gMonIcon_Yveltal[];
extern const u8 gMonIcon_Zygarde[];
extern const u8 gMonIcon_Diancie[];
extern const u8 gMonIcon_Hoopa[];
extern const u8 gMonIcon_Volcanion[];
extern const u8 gMonIcon_Rowlet[];
extern const u8 gMonIcon_Dartrix[];
extern const u8 gMonIcon_Decidueye[];
extern const u8 gMonIcon_Litten[];
extern const u8 gMonIcon_Torracat[];
extern const u8 gMonIcon_Incineroar[];
extern const u8 gMonIcon_Popplio[];
extern const u8 gMonIcon_Brionne[];
extern const u8 gMonIcon_Primarina[];
extern const u8 gMonIcon_Pikipek[];
extern const u8 gMonIcon_Trumbeak[];
extern const u8 gMonIcon_Toucannon[];
extern const u8 gMonIcon_Yungoos[];
extern const u8 gMonIcon_Gumshoos[];
extern const u8 gMonIcon_Grubbin[];
extern const u8 gMonIcon_Charjabug[];
extern const u8 gMonIcon_Vikavolt[];
extern const u8 gMonIcon_Crabrawler[];
extern const u8 gMonIcon_Crabminabl[];
extern const u8 gMonIcon_Oricorio[];
extern const u8 gMonIcon_Cutiefly[];
extern const u8 gMonIcon_Ribombee[];
extern const u8 gMonIcon_Rockruff[];
extern const u8 gMonIcon_Lycanroc[];
extern const u8 gMonIcon_Wishiwashi[];
extern const u8 gMonIcon_Mareanie[];
extern const u8 gMonIcon_Toxapex[];
extern const u8 gMonIcon_Mudbray[];
extern const u8 gMonIcon_Mudsdale[];
extern const u8 gMonIcon_Dewpider[];
extern const u8 gMonIcon_Araquanid[];
extern const u8 gMonIcon_Fomantis[];
extern const u8 gMonIcon_Lurantis[];
extern const u8 gMonIcon_Morelull[];
extern const u8 gMonIcon_Shiinotic[];
extern const u8 gMonIcon_Salandit[];
extern const u8 gMonIcon_Salazzle[];
extern const u8 gMonIcon_Stufful[];
extern const u8 gMonIcon_Bewear[];
extern const u8 gMonIcon_Bounsweet[];
extern const u8 gMonIcon_Steenee[];
extern const u8 gMonIcon_Tsareena[];
extern const u8 gMonIcon_Comfey[];
extern const u8 gMonIcon_Oranguru[];
extern const u8 gMonIcon_Passimian[];
extern const u8 gMonIcon_Wimpod[];
extern const u8 gMonIcon_Golisopod[];
extern const u8 gMonIcon_Sandygast[];
extern const u8 gMonIcon_Palossand[];
extern const u8 gMonIcon_Pyukumuku[];
extern const u8 gMonIcon_TypeNull[];
extern const u8 gMonIcon_Silvally[];
extern const u8 gMonIcon_Minior[];
extern const u8 gMonIcon_Komala[];
extern const u8 gMonIcon_Turtonator[];
extern const u8 gMonIcon_Togedemaru[];
extern const u8 gMonIcon_Mimikyu[];
extern const u8 gMonIcon_Bruxish[];
extern const u8 gMonIcon_Drampa[];
extern const u8 gMonIcon_Dhelmise[];
extern const u8 gMonIcon_Jangmoo[];
extern const u8 gMonIcon_Hakamoo[];
extern const u8 gMonIcon_Kommoo[];
extern const u8 gMonIcon_TapuKoko[];
extern const u8 gMonIcon_TapuLele[];
extern const u8 gMonIcon_TapuBulu[];
extern const u8 gMonIcon_TapuFini[];
extern const u8 gMonIcon_Cosmog[];
extern const u8 gMonIcon_Cosmoem[];
extern const u8 gMonIcon_Solgaleo[];
extern const u8 gMonIcon_Lunala[];
extern const u8 gMonIcon_Nihilego[];
extern const u8 gMonIcon_Buzzwole[];
extern const u8 gMonIcon_Pheromosa[];
extern const u8 gMonIcon_Xurkitree[];
extern const u8 gMonIcon_Celesteela[];
extern const u8 gMonIcon_Kartana[];
extern const u8 gMonIcon_Guzzlord[];
extern const u8 gMonIcon_Necrozma[];
extern const u8 gMonIcon_Magearna[];
extern const u8 gMonIcon_Marshadow[];
extern const u8 gMonIcon_Poipole[];
extern const u8 gMonIcon_Naganadel[];
extern const u8 gMonIcon_Stakataka[];
extern const u8 gMonIcon_Blacephaln[];
extern const u8 gMonIcon_Zeraora[];
extern const u8 gMonIcon_Meltan[];
extern const u8 gMonIcon_Melmetal[];
extern const u8 gMonIcon_Grookey[];
extern const u8 gMonIcon_Thwackey[];
extern const u8 gMonIcon_Rillaboom[];
extern const u8 gMonIcon_Scorbunny[];
extern const u8 gMonIcon_Raboot[];
extern const u8 gMonIcon_Cinderace[];
extern const u8 gMonIcon_Sobble[];
extern const u8 gMonIcon_Drizzile[];
extern const u8 gMonIcon_Inteleon[];
extern const u8 gMonIcon_Skwovet[];
extern const u8 gMonIcon_Greedent[];
extern const u8 gMonIcon_Rookidee[];
extern const u8 gMonIcon_Corvisquir[];
extern const u8 gMonIcon_Corviknigh[];
extern const u8 gMonIcon_Blipbug[];
extern const u8 gMonIcon_Dottler[];
extern const u8 gMonIcon_Orbeetle[];
extern const u8 gMonIcon_Nickit[];
extern const u8 gMonIcon_Thievul[];
extern const u8 gMonIcon_Gossifleur[];
extern const u8 gMonIcon_Eldegoss[];
extern const u8 gMonIcon_Wooloo[];
extern const u8 gMonIcon_Dubwool[];
extern const u8 gMonIcon_Chewtle[];
extern const u8 gMonIcon_Drednaw[];
extern const u8 gMonIcon_Yamper[];
extern const u8 gMonIcon_Boltund[];
extern const u8 gMonIcon_Rolycoly[];
extern const u8 gMonIcon_Carkol[];
extern const u8 gMonIcon_Coalossal[];
extern const u8 gMonIcon_Applin[];
extern const u8 gMonIcon_Flapple[];
extern const u8 gMonIcon_Appletun[];
extern const u8 gMonIcon_Silicobra[];
extern const u8 gMonIcon_Sandaconda[];
extern const u8 gMonIcon_Cramorant[];
extern const u8 gMonIcon_Arrokuda[];
extern const u8 gMonIcon_Barraskewd[];
extern const u8 gMonIcon_Toxel[];
extern const u8 gMonIcon_Toxtricity[];
extern const u8 gMonIcon_Sizzlipede[];
extern const u8 gMonIcon_Centiskorc[];
extern const u8 gMonIcon_Clobbopus[];
extern const u8 gMonIcon_Grapploct[];
extern const u8 gMonIcon_Sinistea[];
extern const u8 gMonIcon_Polteageis[];
extern const u8 gMonIcon_Hatenna[];
extern const u8 gMonIcon_Hattrem[];
extern const u8 gMonIcon_Hatterene[];
extern const u8 gMonIcon_Impidimp[];
extern const u8 gMonIcon_Morgrem[];
extern const u8 gMonIcon_Grimmsnarl[];
extern const u8 gMonIcon_Obstagoon[];
extern const u8 gMonIcon_Perrserker[];
extern const u8 gMonIcon_Cursola[];
extern const u8 gMonIcon_Sirfetchd[];
extern const u8 gMonIcon_MrRime[];
extern const u8 gMonIcon_Runerigus[];
extern const u8 gMonIcon_Milcery[];
extern const u8 gMonIcon_Alcremie[];
extern const u8 gMonIcon_Falinks[];
extern const u8 gMonIcon_Pincurchin[];
extern const u8 gMonIcon_Snom[];
extern const u8 gMonIcon_Frosmoth[];
extern const u8 gMonIcon_Stonjourne[];
extern const u8 gMonIcon_Eiscue[];
extern const u8 gMonIcon_Indeedee[];
extern const u8 gMonIcon_Morpeko[];
extern const u8 gMonIcon_Cufant[];
extern const u8 gMonIcon_Copperajah[];
extern const u8 gMonIcon_Dracozolt[];
extern const u8 gMonIcon_Arctozolt[];
extern const u8 gMonIcon_Dracovish[];
extern const u8 gMonIcon_Arctovish[];
extern const u8 gMonIcon_Duraludon[];
extern const u8 gMonIcon_Dreepy[];
extern const u8 gMonIcon_Drakloak[];
extern const u8 gMonIcon_Dragapult[];
extern const u8 gMonIcon_Zacian[];
extern const u8 gMonIcon_Zamazenta[];
extern const u8 gMonIcon_Eternatus[];
extern const u8 gMonIcon_Kubfu[];
extern const u8 gMonIcon_Urshifu[];
extern const u8 gMonIcon_Zarude[];
extern const u8 gMonIcon_Regieleki[];
extern const u8 gMonIcon_Regidrago[];
extern const u8 gMonIcon_Glastrier[];
extern const u8 gMonIcon_Spectrier[];
extern const u8 gMonIcon_Calyrex[];
extern const u8 gMonIcon_Wyrdeer[];
extern const u8 gMonIcon_Kleavor[];
extern const u8 gMonIcon_Ursaluna[];
extern const u8 gMonIcon_Bsculegion[];
extern const u8 gMonIcon_Sneasler[];
extern const u8 gMonIcon_Overqwil[];
extern const u8 gMonIcon_Enamorus[];
extern const u8 gMonIcon_Venusaur2[];
extern const u8 gMonIcon_Charizard2[];
extern const u8 gMonIcon_Charizard3[];
extern const u8 gMonIcon_Blastoise2[];
extern const u8 gMonIcon_Beedrill2[];
extern const u8 gMonIcon_Pidgeot2[];
extern const u8 gMonIcon_Alakazam2[];
extern const u8 gMonIcon_Slowbro2[];
extern const u8 gMonIcon_Gengar2[];
extern const u8 gMonIcon_Kangaskhan2[];
extern const u8 gMonIcon_Pinsir2[];
extern const u8 gMonIcon_Gyarados2[];
extern const u8 gMonIcon_Aerodactyl2[];
extern const u8 gMonIcon_Mewtwo2[];
extern const u8 gMonIcon_Mewtwo3[];
extern const u8 gMonIcon_Ampharos2[];
extern const u8 gMonIcon_Steelix2[];
extern const u8 gMonIcon_Scizor2[];
extern const u8 gMonIcon_Heracross2[];
extern const u8 gMonIcon_Houndoom2[];
extern const u8 gMonIcon_Tyranitar2[];
extern const u8 gMonIcon_Sceptile2[];
extern const u8 gMonIcon_Blaziken2[];
extern const u8 gMonIcon_Swampert2[];
extern const u8 gMonIcon_Gardevoir2[];
extern const u8 gMonIcon_Sableye2[];
extern const u8 gMonIcon_Mawile2[];
extern const u8 gMonIcon_Aggron2[];
extern const u8 gMonIcon_Medicham2[];
extern const u8 gMonIcon_Manectric2[];
extern const u8 gMonIcon_Sharpedo2[];
extern const u8 gMonIcon_Camerupt2[];
extern const u8 gMonIcon_Altaria2[];
extern const u8 gMonIcon_Banette2[];
extern const u8 gMonIcon_Absol2[];
extern const u8 gMonIcon_Glalie2[];
extern const u8 gMonIcon_Salamence2[];
extern const u8 gMonIcon_Metagross2[];
extern const u8 gMonIcon_Latias2[];
extern const u8 gMonIcon_Latios2[];
extern const u8 gMonIcon_Lopunny2[];
extern const u8 gMonIcon_Garchomp2[];
extern const u8 gMonIcon_Lucario2[];
extern const u8 gMonIcon_Abomasnow2[];
extern const u8 gMonIcon_Gallade2[];
extern const u8 gMonIcon_Audino2[];
extern const u8 gMonIcon_Diancie2[];
extern const u8 gMonIcon_Rayquaza2[];
extern const u8 gMonIcon_Kyogre2[];
extern const u8 gMonIcon_Groudon2[];
extern const u8 gMonIcon_Rattata2[];
extern const u8 gMonIcon_Raticate2[];
extern const u8 gMonIcon_Raichu2[];
extern const u8 gMonIcon_Sandshrew2[];
extern const u8 gMonIcon_Sandslash2[];
extern const u8 gMonIcon_Vulpix2[];
extern const u8 gMonIcon_Ninetales2[];
extern const u8 gMonIcon_Diglett2[];
extern const u8 gMonIcon_Dugtrio2[];
extern const u8 gMonIcon_Meowth2[];
extern const u8 gMonIcon_Persian2[];
extern const u8 gMonIcon_Geodude2[];
extern const u8 gMonIcon_Graveler2[];
extern const u8 gMonIcon_Golem2[];
extern const u8 gMonIcon_Grimer2[];
extern const u8 gMonIcon_Muk2[];
extern const u8 gMonIcon_Exeggutor2[];
extern const u8 gMonIcon_Marowak2[];
extern const u8 gMonIcon_Meowth3[];
extern const u8 gMonIcon_Ponyta2[];
extern const u8 gMonIcon_Rapidash2[];
extern const u8 gMonIcon_Slowpoke2[];
extern const u8 gMonIcon_Slowbro3[];
extern const u8 gMonIcon_Farfetchd2[];
extern const u8 gMonIcon_Weezing2[];
extern const u8 gMonIcon_MrMime2[];
extern const u8 gMonIcon_Articuno2[];
extern const u8 gMonIcon_Zapdos2[];
extern const u8 gMonIcon_Moltres2[];
extern const u8 gMonIcon_Slowking2[];
extern const u8 gMonIcon_Corsola2[];
extern const u8 gMonIcon_Zigzagoon2[];
extern const u8 gMonIcon_Linoone2[];
extern const u8 gMonIcon_Darumaka2[];
extern const u8 gMonIcon_Darmanitan2[];
extern const u8 gMonIcon_Yamask2[];
extern const u8 gMonIcon_Stunfisk2[];
extern const u8 gMonIcon_Growlithe2[];
extern const u8 gMonIcon_Arcanine2[];
extern const u8 gMonIcon_Voltorb2[];
extern const u8 gMonIcon_Electrode2[];
extern const u8 gMonIcon_Typhlosion2[];
extern const u8 gMonIcon_Qwilfish2[];
extern const u8 gMonIcon_Sneasel2[];
extern const u8 gMonIcon_Samurott2[];
extern const u8 gMonIcon_Lilligant2[];
extern const u8 gMonIcon_Zorua2[];
extern const u8 gMonIcon_Zoroark2[];
extern const u8 gMonIcon_Braviary2[];
extern const u8 gMonIcon_Sliggoo2[];
extern const u8 gMonIcon_Goodra2[];
extern const u8 gMonIcon_Avalugg2[];
extern const u8 gMonIcon_Decidueye2[];
extern const u8 gMonIcon_Pikachu2[];
extern const u8 gMonIcon_Pikachu3[];
extern const u8 gMonIcon_Pikachu4[];
extern const u8 gMonIcon_Pikachu5[];
extern const u8 gMonIcon_Pikachu6[];
extern const u8 gMonIcon_Pikachu7[];
extern const u8 gMonIcon_Pikachu8[];
extern const u8 gMonIcon_Pikachu9[];
extern const u8 gMonIcon_Pikachu10[];
extern const u8 gMonIcon_Pikachu11[];
extern const u8 gMonIcon_Pikachu12[];
extern const u8 gMonIcon_Pikachu13[];
extern const u8 gMonIcon_Pikachu14[];
extern const u8 gMonIcon_Pikachu15[];
extern const u8 gMonIcon_Pichu2[];
extern const u8 gMonIcon_Unown2[];
extern const u8 gMonIcon_Unown3[];
extern const u8 gMonIcon_Unown4[];
extern const u8 gMonIcon_Unown5[];
extern const u8 gMonIcon_Unown6[];
extern const u8 gMonIcon_Unown7[];
extern const u8 gMonIcon_Unown8[];
extern const u8 gMonIcon_Unown9[];
extern const u8 gMonIcon_Unown10[];
extern const u8 gMonIcon_Unown11[];
extern const u8 gMonIcon_Unown12[];
extern const u8 gMonIcon_Unown13[];
extern const u8 gMonIcon_Unown14[];
extern const u8 gMonIcon_Unown15[];
extern const u8 gMonIcon_Unown16[];
extern const u8 gMonIcon_Unown17[];
extern const u8 gMonIcon_Unown18[];
extern const u8 gMonIcon_Unown19[];
extern const u8 gMonIcon_Unown20[];
extern const u8 gMonIcon_Unown21[];
extern const u8 gMonIcon_Unown22[];
extern const u8 gMonIcon_Unown23[];
extern const u8 gMonIcon_Unown24[];
extern const u8 gMonIcon_Unown25[];
extern const u8 gMonIcon_Unown26[];
extern const u8 gMonIcon_Unown27[];
extern const u8 gMonIcon_Unown28[];
extern const u8 gMonIcon_Castform2[];
extern const u8 gMonIcon_Castform3[];
extern const u8 gMonIcon_Castform4[];
extern const u8 gMonIcon_Deoxys2[];
extern const u8 gMonIcon_Deoxys3[];
extern const u8 gMonIcon_Deoxys4[];
extern const u8 gMonIcon_Burmy2[];
extern const u8 gMonIcon_Burmy3[];
extern const u8 gMonIcon_Wormadam2[];
extern const u8 gMonIcon_Wormadam3[];
extern const u8 gMonIcon_Cherrim2[];
extern const u8 gMonIcon_Shellos2[];
extern const u8 gMonIcon_Gastrodon2[];
extern const u8 gMonIcon_Rotom2[];
extern const u8 gMonIcon_Rotom3[];
extern const u8 gMonIcon_Rotom4[];
extern const u8 gMonIcon_Rotom5[];
extern const u8 gMonIcon_Rotom6[];
extern const u8 gMonIcon_Dialga2[];
extern const u8 gMonIcon_Palkia2[];
extern const u8 gMonIcon_Giratina2[];
extern const u8 gMonIcon_Shaymin2[];
extern const u8 gMonIcon_Arceus2[];
extern const u8 gMonIcon_Arceus3[];
extern const u8 gMonIcon_Arceus4[];
extern const u8 gMonIcon_Arceus5[];
extern const u8 gMonIcon_Arceus6[];
extern const u8 gMonIcon_Arceus7[];
extern const u8 gMonIcon_Arceus8[];
extern const u8 gMonIcon_Arceus9[];
extern const u8 gMonIcon_Arceus10[];
extern const u8 gMonIcon_Arceus11[];
extern const u8 gMonIcon_Arceus12[];
extern const u8 gMonIcon_Arceus13[];
extern const u8 gMonIcon_Arceus14[];
extern const u8 gMonIcon_Arceus15[];
extern const u8 gMonIcon_Arceus16[];
extern const u8 gMonIcon_Arceus17[];
extern const u8 gMonIcon_Arceus18[];
extern const u8 gMonIcon_Basculin2[];
extern const u8 gMonIcon_Basculin3[];
extern const u8 gMonIcon_Darmanitan3[];
extern const u8 gMonIcon_Darmanitan4[];
extern const u8 gMonIcon_Deerling2[];
extern const u8 gMonIcon_Deerling3[];
extern const u8 gMonIcon_Deerling4[];
extern const u8 gMonIcon_Sawsbuck2[];
extern const u8 gMonIcon_Sawsbuck3[];
extern const u8 gMonIcon_Sawsbuck4[];
extern const u8 gMonIcon_Tornadus2[];
extern const u8 gMonIcon_Thundurus2[];
extern const u8 gMonIcon_Landorus2[];
extern const u8 gMonIcon_Enamorus2[];
extern const u8 gMonIcon_Kyurem2[];
extern const u8 gMonIcon_Kyurem3[];
extern const u8 gMonIcon_Keldeo2[];
extern const u8 gMonIcon_Meloetta2[];
extern const u8 gMonIcon_Genesect2[];
extern const u8 gMonIcon_Genesect3[];
extern const u8 gMonIcon_Genesect4[];
extern const u8 gMonIcon_Genesect5[];
extern const u8 gMonIcon_Greninja2[];
extern const u8 gMonIcon_Greninja3[];
extern const u8 gMonIcon_Vivillon2[];
extern const u8 gMonIcon_Vivillon3[];
extern const u8 gMonIcon_Vivillon4[];
extern const u8 gMonIcon_Vivillon5[];
extern const u8 gMonIcon_Vivillon6[];
extern const u8 gMonIcon_Vivillon7[];
extern const u8 gMonIcon_Vivillon8[];
extern const u8 gMonIcon_Vivillon9[];
extern const u8 gMonIcon_Vivillon10[];
extern const u8 gMonIcon_Vivillon11[];
extern const u8 gMonIcon_Vivillon12[];
extern const u8 gMonIcon_Vivillon13[];
extern const u8 gMonIcon_Vivillon14[];
extern const u8 gMonIcon_Vivillon15[];
extern const u8 gMonIcon_Vivillon16[];
extern const u8 gMonIcon_Vivillon17[];
extern const u8 gMonIcon_Vivillon18[];
extern const u8 gMonIcon_Vivillon19[];
extern const u8 gMonIcon_Vivillon20[];
extern const u8 gMonIcon_Flabebe2[];
extern const u8 gMonIcon_Flabebe3[];
extern const u8 gMonIcon_Flabebe4[];
extern const u8 gMonIcon_Flabebe5[];
extern const u8 gMonIcon_Floette2[];
extern const u8 gMonIcon_Floette3[];
extern const u8 gMonIcon_Floette4[];
extern const u8 gMonIcon_Floette5[];
extern const u8 gMonIcon_Floette6[];
extern const u8 gMonIcon_Florges2[];
extern const u8 gMonIcon_Florges3[];
extern const u8 gMonIcon_Florges4[];
extern const u8 gMonIcon_Florges5[];
extern const u8 gMonIcon_Furfrou2[];
extern const u8 gMonIcon_Furfrou3[];
extern const u8 gMonIcon_Furfrou4[];
extern const u8 gMonIcon_Furfrou5[];
extern const u8 gMonIcon_Furfrou6[];
extern const u8 gMonIcon_Furfrou7[];
extern const u8 gMonIcon_Furfrou8[];
extern const u8 gMonIcon_Furfrou9[];
extern const u8 gMonIcon_Furfrou10[];
extern const u8 gMonIcon_Meowstic2[];
extern const u8 gMonIcon_Aegislash2[];
extern const u8 gMonIcon_Pumpkaboo2[];
extern const u8 gMonIcon_Pumpkaboo3[];
extern const u8 gMonIcon_Pumpkaboo4[];
extern const u8 gMonIcon_Gourgeist2[];
extern const u8 gMonIcon_Gourgeist3[];
extern const u8 gMonIcon_Gourgeist4[];
extern const u8 gMonIcon_Xerneas2[];
extern const u8 gMonIcon_Zygarde2[];
extern const u8 gMonIcon_Zygarde3[];
extern const u8 gMonIcon_Zygarde4[];
extern const u8 gMonIcon_Zygarde5[];
extern const u8 gMonIcon_Hoopa2[];
extern const u8 gMonIcon_Oricorio2[];
extern const u8 gMonIcon_Oricorio3[];
extern const u8 gMonIcon_Oricorio4[];
extern const u8 gMonIcon_Rockruff2[];
extern const u8 gMonIcon_Lycanroc2[];
extern const u8 gMonIcon_Lycanroc3[];
extern const u8 gMonIcon_Wishiwashi2[];
extern const u8 gMonIcon_Silvally2[];
extern const u8 gMonIcon_Silvally3[];
extern const u8 gMonIcon_Silvally4[];
extern const u8 gMonIcon_Silvally5[];
extern const u8 gMonIcon_Silvally6[];
extern const u8 gMonIcon_Silvally7[];
extern const u8 gMonIcon_Silvally8[];
extern const u8 gMonIcon_Silvally9[];
extern const u8 gMonIcon_Silvally10[];
extern const u8 gMonIcon_Silvally11[];
extern const u8 gMonIcon_Silvally12[];
extern const u8 gMonIcon_Silvally13[];
extern const u8 gMonIcon_Silvally14[];
extern const u8 gMonIcon_Silvally15[];
extern const u8 gMonIcon_Silvally16[];
extern const u8 gMonIcon_Silvally17[];
extern const u8 gMonIcon_Silvally18[];
extern const u8 gMonIcon_Minior2[];
extern const u8 gMonIcon_Minior3[];
extern const u8 gMonIcon_Minior4[];
extern const u8 gMonIcon_Minior5[];
extern const u8 gMonIcon_Minior6[];
extern const u8 gMonIcon_Minior7[];
extern const u8 gMonIcon_Minior8[];
extern const u8 gMonIcon_Minior9[];
extern const u8 gMonIcon_Minior10[];
extern const u8 gMonIcon_Minior11[];
extern const u8 gMonIcon_Minior12[];
extern const u8 gMonIcon_Minior13[];
extern const u8 gMonIcon_Minior14[];
extern const u8 gMonIcon_Mimikyu2[];
extern const u8 gMonIcon_Necrozma2[];
extern const u8 gMonIcon_Necrozma3[];
extern const u8 gMonIcon_Necrozma4[];
extern const u8 gMonIcon_Magearna2[];
extern const u8 gMonIcon_Cramorant2[];
extern const u8 gMonIcon_Cramorant3[];
extern const u8 gMonIcon_Toxtricity2[];
extern const u8 gMonIcon_Sinistea2[];
extern const u8 gMonIcon_Polteageis2[];
extern const u8 gMonIcon_Alcremie2[];
extern const u8 gMonIcon_Alcremie3[];
extern const u8 gMonIcon_Alcremie4[];
extern const u8 gMonIcon_Alcremie5[];
extern const u8 gMonIcon_Alcremie6[];
extern const u8 gMonIcon_Alcremie7[];
extern const u8 gMonIcon_Alcremie8[];
extern const u8 gMonIcon_Alcremie9[];
extern const u8 gMonIcon_Eiscue2[];
extern const u8 gMonIcon_Indeedee2[];
extern const u8 gMonIcon_Morpeko2[];
extern const u8 gMonIcon_Zacian2[];
extern const u8 gMonIcon_Zamazenta2[];
extern const u8 gMonIcon_Eternatus2[];
extern const u8 gMonIcon_Urshifu2[];
extern const u8 gMonIcon_Zarude2[];
extern const u8 gMonIcon_Calyrex2[];
extern const u8 gMonIcon_Calyrex3[];
extern const u8 gMonIcon_Bsculegion2[];
extern const u8 gMonIcon_Alcremie10[];
extern const u8 gMonIcon_Alcremie11[];
extern const u8 gMonIcon_Alcremie12[];
extern const u8 gMonIcon_Alcremie13[];
extern const u8 gMonIcon_Alcremie14[];
extern const u8 gMonIcon_Alcremie15[];
extern const u8 gMonIcon_Alcremie16[];
extern const u8 gMonIcon_Alcremie17[];
extern const u8 gMonIcon_Alcremie18[];
extern const u8 gMonIcon_Alcremie19[];
extern const u8 gMonIcon_Alcremie20[];
extern const u8 gMonIcon_Alcremie21[];
extern const u8 gMonIcon_Alcremie22[];
extern const u8 gMonIcon_Alcremie23[];
extern const u8 gMonIcon_Alcremie24[];
extern const u8 gMonIcon_Alcremie25[];
extern const u8 gMonIcon_Alcremie26[];
extern const u8 gMonIcon_Alcremie27[];
extern const u8 gMonIcon_Alcremie28[];
extern const u8 gMonIcon_Alcremie29[];
extern const u8 gMonIcon_Alcremie30[];
extern const u8 gMonIcon_Alcremie31[];
extern const u8 gMonIcon_Alcremie32[];
extern const u8 gMonIcon_Alcremie33[];
extern const u8 gMonIcon_Alcremie34[];
extern const u8 gMonIcon_Alcremie35[];
extern const u8 gMonIcon_Alcremie36[];
extern const u8 gMonIcon_Alcremie37[];
extern const u8 gMonIcon_Alcremie38[];
extern const u8 gMonIcon_Alcremie39[];
extern const u8 gMonIcon_Alcremie40[];
extern const u8 gMonIcon_Alcremie41[];
extern const u8 gMonIcon_Alcremie42[];
extern const u8 gMonIcon_Alcremie43[];
extern const u8 gMonIcon_Alcremie44[];
extern const u8 gMonIcon_Alcremie45[];
extern const u8 gMonIcon_Alcremie46[];
extern const u8 gMonIcon_Alcremie47[];
extern const u8 gMonIcon_Alcremie48[];
extern const u8 gMonIcon_Alcremie49[];
extern const u8 gMonIcon_Alcremie50[];
extern const u8 gMonIcon_Alcremie51[];
extern const u8 gMonIcon_Alcremie52[];
extern const u8 gMonIcon_Alcremie53[];
extern const u8 gMonIcon_Alcremie54[];
extern const u8 gMonIcon_Alcremie55[];
extern const u8 gMonIcon_Alcremie56[];
extern const u8 gMonIcon_Alcremie57[];
extern const u8 gMonIcon_Alcremie58[];
extern const u8 gMonIcon_Alcremie59[];
extern const u8 gMonIcon_Alcremie60[];
extern const u8 gMonIcon_Alcremie61[];
extern const u8 gMonIcon_Alcremie62[];
extern const u8 gMonIcon_Alcremie63[];
extern const u8 gMonIcon_Sprigatito[];
extern const u8 gMonIcon_Floragato[];
extern const u8 gMonIcon_Meowscarad[];
extern const u8 gMonIcon_Fuecoco[];
extern const u8 gMonIcon_Crocalor[];
extern const u8 gMonIcon_Skeledirge[];
extern const u8 gMonIcon_Quaxly[];
extern const u8 gMonIcon_Quaxwell[];
extern const u8 gMonIcon_Quaquaval[];
extern const u8 gMonIcon_Lechonk[];
extern const u8 gMonIcon_Oinkologne[];
extern const u8 gMonIcon_Oinkologne2[];
extern const u8 gMonIcon_Tarountula[];
extern const u8 gMonIcon_Spidops[];
extern const u8 gMonIcon_Nymble[];
extern const u8 gMonIcon_Lokix[];
extern const u8 gMonIcon_Pawmi[];
extern const u8 gMonIcon_Pawmo[];
extern const u8 gMonIcon_Pawmot[];
extern const u8 gMonIcon_Tandemaus[];
extern const u8 gMonIcon_Maushold[];
extern const u8 gMonIcon_Maushold2[];
extern const u8 gMonIcon_Fidough[];
extern const u8 gMonIcon_Dachsbun[];
extern const u8 gMonIcon_Smoliv[];
extern const u8 gMonIcon_Dolliv[];
extern const u8 gMonIcon_Arboliva[];
extern const u8 gMonIcon_Sqawkabily[];
extern const u8 gMonIcon_Sqawkabily2[];
extern const u8 gMonIcon_Sqawkabily3[];
extern const u8 gMonIcon_Sqawkabily4[];
extern const u8 gMonIcon_Nacli[];
extern const u8 gMonIcon_Naclstack[];
extern const u8 gMonIcon_Garganacl[];
extern const u8 gMonIcon_Charcadet[];
extern const u8 gMonIcon_Armarouge[];
extern const u8 gMonIcon_Ceruledge[];
extern const u8 gMonIcon_Tadbulb[];
extern const u8 gMonIcon_Bellibolt[];
extern const u8 gMonIcon_Wattrel[];
extern const u8 gMonIcon_Kilowatrel[];
extern const u8 gMonIcon_Maschiff[];
extern const u8 gMonIcon_Mabosstiff[];
extern const u8 gMonIcon_Shroodle[];
extern const u8 gMonIcon_Grafaiai[];
extern const u8 gMonIcon_Bramblin[];
extern const u8 gMonIcon_Brmblghast[];
extern const u8 gMonIcon_Toedscool[];
extern const u8 gMonIcon_Toedscruel[];
extern const u8 gMonIcon_Klawf[];
extern const u8 gMonIcon_Capsakid[];
extern const u8 gMonIcon_Scovillain[];
extern const u8 gMonIcon_Rellor[];
extern const u8 gMonIcon_Rabsca[];
extern const u8 gMonIcon_Flittle[];
extern const u8 gMonIcon_Espathra[];
extern const u8 gMonIcon_Tinkatink[];
extern const u8 gMonIcon_Tinkatuff[];
extern const u8 gMonIcon_Tinkaton[];
extern const u8 gMonIcon_Wiglett[];
extern const u8 gMonIcon_Wugtrio[];
extern const u8 gMonIcon_Bombirdier[];
extern const u8 gMonIcon_Finizen[];
extern const u8 gMonIcon_Palafin[];
extern const u8 gMonIcon_Palafin2[];
extern const u8 gMonIcon_Varoom[];
extern const u8 gMonIcon_Revavroom[];
extern const u8 gMonIcon_Cyclizar[];
extern const u8 gMonIcon_Orthworm[];
extern const u8 gMonIcon_Glimmet[];
extern const u8 gMonIcon_Glimmora[];
extern const u8 gMonIcon_Greavard[];
extern const u8 gMonIcon_Houndstone[];
extern const u8 gMonIcon_Flamigo[];
extern const u8 gMonIcon_Cetoddle[];
extern const u8 gMonIcon_Cetitan[];
extern const u8 gMonIcon_Veluza[];
extern const u8 gMonIcon_Dondozo[];
extern const u8 gMonIcon_Tatsugiri[];
extern const u8 gMonIcon_Tatsugiri2[];
extern const u8 gMonIcon_Tatsugiri3[];
extern const u8 gMonIcon_Annihilape[];
extern const u8 gMonIcon_Clodsire[];
extern const u8 gMonIcon_Farigiraf[];
extern const u8 gMonIcon_Dudunsprce[];
extern const u8 gMonIcon_Dudunsprce2[];
extern const u8 gMonIcon_Kingambit[];
extern const u8 gMonIcon_GreatTusk[];
extern const u8 gMonIcon_ScreamTail[];
extern const u8 gMonIcon_BruteBonet[];
extern const u8 gMonIcon_FluttrMane[];
extern const u8 gMonIcon_SlithrWing[];
extern const u8 gMonIcon_SndyShocks[];
extern const u8 gMonIcon_IronTreads[];
extern const u8 gMonIcon_IronBundle[];
extern const u8 gMonIcon_IronHands[];
extern const u8 gMonIcon_IronJuguls[];
extern const u8 gMonIcon_IronMoth[];
extern const u8 gMonIcon_IronThorns[];
extern const u8 gMonIcon_Frigibax[];
extern const u8 gMonIcon_Arctibax[];
extern const u8 gMonIcon_Baxcalibur[];
extern const u8 gMonIcon_Gimmighoul[];
extern const u8 gMonIcon_Gimmighoul2[];
extern const u8 gMonIcon_Gholdengo[];
extern const u8 gMonIcon_WoChien[];
extern const u8 gMonIcon_ChienPao[];
extern const u8 gMonIcon_TingLu[];
extern const u8 gMonIcon_ChiYu[];
extern const u8 gMonIcon_RoarngMoon[];
extern const u8 gMonIcon_IronVliant[];
extern const u8 gMonIcon_Koraidon[];
extern const u8 gMonIcon_Miraidon[];
extern const u8 gMonIcon_Tauros2[];
extern const u8 gMonIcon_Tauros3[];
extern const u8 gMonIcon_Tauros4[];
extern const u8 gMonIcon_Wooper2[];
extern const u8 gMonIcon_WalkngWake[];
extern const u8 gMonIcon_IronLeaves[];
extern const u8 gMonIcon_Dipplin[];
extern const u8 gMonIcon_Ptchageist[];
extern const u8 gMonIcon_Ptchageist2[];
extern const u8 gMonIcon_Sinistcha[];
extern const u8 gMonIcon_Sinistcha2[];
extern const u8 gMonIcon_Okidogi[];
extern const u8 gMonIcon_Munkidori[];
extern const u8 gMonIcon_Fezndipiti[];
extern const u8 gMonIcon_Ogerpon[];
extern const u8 gMonIcon_Ogerpon2[];
extern const u8 gMonIcon_Ogerpon3[];
extern const u8 gMonIcon_Ogerpon4[];
extern const u8 gMonIcon_Ogerpon5[];
extern const u8 gMonIcon_Ogerpon6[];
extern const u8 gMonIcon_Ogerpon7[];
extern const u8 gMonIcon_Ogerpon8[];
extern const u8 gMonIcon_Ursaluna2[];
extern const u8 gMonIcon_Archaludon[];
extern const u8 gMonIcon_Hydrapple[];
extern const u8 gMonIcon_GouginFire[];
extern const u8 gMonIcon_RagingBolt[];
extern const u8 gMonIcon_IronBouldr[];
extern const u8 gMonIcon_IronCrown[];
extern const u8 gMonIcon_Terapagos[];
extern const u8 gMonIcon_Terapagos2[];
extern const u8 gMonIcon_Terapagos3[];
extern const u8 gMonIcon_Pecharunt[];
extern const u8 gMonIcon_Mothim2[];
extern const u8 gMonIcon_Mothim3[];
extern const u8 gMonIcon_Scatterbug2[];
extern const u8 gMonIcon_Scatterbug3[];
extern const u8 gMonIcon_Scatterbug4[];
extern const u8 gMonIcon_Scatterbug5[];
extern const u8 gMonIcon_Scatterbug6[];
extern const u8 gMonIcon_Scatterbug7[];
extern const u8 gMonIcon_Scatterbug8[];
extern const u8 gMonIcon_Scatterbug9[];
extern const u8 gMonIcon_Scatterbug10[];
extern const u8 gMonIcon_Scatterbug11[];
extern const u8 gMonIcon_Scatterbug12[];
extern const u8 gMonIcon_Scatterbug13[];
extern const u8 gMonIcon_Scatterbug14[];
extern const u8 gMonIcon_Scatterbug15[];
extern const u8 gMonIcon_Scatterbug16[];
extern const u8 gMonIcon_Scatterbug17[];
extern const u8 gMonIcon_Scatterbug18[];
extern const u8 gMonIcon_Scatterbug19[];
extern const u8 gMonIcon_Scatterbug20[];
extern const u8 gMonIcon_Spewpa2[];
extern const u8 gMonIcon_Spewpa3[];
extern const u8 gMonIcon_Spewpa4[];
extern const u8 gMonIcon_Spewpa5[];
extern const u8 gMonIcon_Spewpa6[];
extern const u8 gMonIcon_Spewpa7[];
extern const u8 gMonIcon_Spewpa8[];
extern const u8 gMonIcon_Spewpa9[];
extern const u8 gMonIcon_Spewpa10[];
extern const u8 gMonIcon_Spewpa11[];
extern const u8 gMonIcon_Spewpa12[];
extern const u8 gMonIcon_Spewpa13[];
extern const u8 gMonIcon_Spewpa14[];
extern const u8 gMonIcon_Spewpa15[];
extern const u8 gMonIcon_Spewpa16[];
extern const u8 gMonIcon_Spewpa17[];
extern const u8 gMonIcon_Spewpa18[];
extern const u8 gMonIcon_Spewpa19[];
extern const u8 gMonIcon_Spewpa20[];
extern const u8 gMonIcon_Raticate3[];
extern const u8 gMonIcon_Gumshoos2[];
extern const u8 gMonIcon_Vikavolt2[];
extern const u8 gMonIcon_Lurantis2[];
extern const u8 gMonIcon_Salazzle2[];
extern const u8 gMonIcon_Mimikyu3[];
extern const u8 gMonIcon_Kommoo2[];
extern const u8 gMonIcon_Marowak3[];
extern const u8 gMonIcon_Ribombee2[];
extern const u8 gMonIcon_Araquanid2[];
extern const u8 gMonIcon_Togedemaru2[];
extern const u8 gMonIcon_Pikachu16[];
extern const u8 gMonIcon_Eevee2[];
extern const u8 gMonIcon_Venusaur3[];
extern const u8 gMonIcon_Blastoise3[];
extern const u8 gMonIcon_Charizard4[];
extern const u8 gMonIcon_Butterfree2[];
extern const u8 gMonIcon_Pikachu17[];
extern const u8 gMonIcon_Meowth4[];
extern const u8 gMonIcon_Machamp2[];
extern const u8 gMonIcon_Gengar3[];
extern const u8 gMonIcon_Kingler2[];
extern const u8 gMonIcon_Lapras2[];
extern const u8 gMonIcon_Eevee3[];
extern const u8 gMonIcon_Snorlax2[];
extern const u8 gMonIcon_Garbodor2[];
extern const u8 gMonIcon_Melmetal2[];
extern const u8 gMonIcon_Rillaboom2[];
extern const u8 gMonIcon_Cinderace2[];
extern const u8 gMonIcon_Inteleon2[];
extern const u8 gMonIcon_Corviknigh2[];
extern const u8 gMonIcon_Orbeetle2[];
extern const u8 gMonIcon_Drednaw2[];
extern const u8 gMonIcon_Coalossal2[];
extern const u8 gMonIcon_Flapple2[];
extern const u8 gMonIcon_Appletun2[];
extern const u8 gMonIcon_Sandaconda2[];
extern const u8 gMonIcon_Toxtricity3[];
extern const u8 gMonIcon_Toxtricity4[];
extern const u8 gMonIcon_Centiskorc2[];
extern const u8 gMonIcon_Hatterene2[];
extern const u8 gMonIcon_Grimmsnarl2[];
extern const u8 gMonIcon_Alcremie64[];
extern const u8 gMonIcon_Copperajah2[];
extern const u8 gMonIcon_Duraludon2[];
extern const u8 gMonIcon_Urshifu3[];
extern const u8 gMonIcon_Urshifu4[];
extern const u8 gMonIcon_Mimikyu4[];

const u8 *const gMonIconTable_[] =
{
	[SPECIES_NONE] = gMonIcon_QuestionMark,
	[SPECIES_BULBASAUR] = gMonIcon_Bulbasaur,
	[SPECIES_IVYSAUR] = gMonIcon_Ivysaur,
	[SPECIES_VENUSAUR] = gMonIcon_Venusaur,
	[SPECIES_CHARMANDER] = gMonIcon_Charmander,
	[SPECIES_CHARMELEON] = gMonIcon_Charmeleon,
	[SPECIES_CHARIZARD] = gMonIcon_Charizard,
	[SPECIES_SQUIRTLE] = gMonIcon_Squirtle,
	[SPECIES_WARTORTLE] = gMonIcon_Wartortle,
	[SPECIES_BLASTOISE] = gMonIcon_Blastoise,
	[SPECIES_CATERPIE] = gMonIcon_Caterpie,
	[SPECIES_METAPOD] = gMonIcon_Metapod,
	[SPECIES_BUTTERFREE] = gMonIcon_Butterfree,
	[SPECIES_WEEDLE] = gMonIcon_Weedle,
	[SPECIES_KAKUNA] = gMonIcon_Kakuna,
	[SPECIES_BEEDRILL] = gMonIcon_Beedrill,
	[SPECIES_PIDGEY] = gMonIcon_Pidgey,
	[SPECIES_PIDGEOTTO] = gMonIcon_Pidgeotto,
	[SPECIES_PIDGEOT] = gMonIcon_Pidgeot,
	[SPECIES_RATTATA] = gMonIcon_Rattata,
	[SPECIES_RATICATE] = gMonIcon_Raticate,
	[SPECIES_SPEAROW] = gMonIcon_Spearow,
	[SPECIES_FEAROW] = gMonIcon_Fearow,
	[SPECIES_EKANS] = gMonIcon_Ekans,
	[SPECIES_ARBOK] = gMonIcon_Arbok,
	[SPECIES_PIKACHU] = gMonIcon_Pikachu,
	[SPECIES_RAICHU] = gMonIcon_Raichu,
	[SPECIES_SANDSHREW] = gMonIcon_Sandshrew,
	[SPECIES_SANDSLASH] = gMonIcon_Sandslash,
	[SPECIES_NIDORANSF] = gMonIcon_NidoranF,
	[SPECIES_NIDORINA] = gMonIcon_Nidorina,
	[SPECIES_NIDOQUEEN] = gMonIcon_Nidoqueen,
	[SPECIES_NIDORANSM] = gMonIcon_NidoranM,
	[SPECIES_NIDORINO] = gMonIcon_Nidorino,
	[SPECIES_NIDOKING] = gMonIcon_Nidoking,
	[SPECIES_CLEFAIRY] = gMonIcon_Clefairy,
	[SPECIES_CLEFABLE] = gMonIcon_Clefable,
	[SPECIES_VULPIX] = gMonIcon_Vulpix,
	[SPECIES_NINETALES] = gMonIcon_Ninetales,
	[SPECIES_JIGGLYPUFF] = gMonIcon_Jigglypuff,
	[SPECIES_WIGGLYTUFF] = gMonIcon_Wigglytuff,
	[SPECIES_ZUBAT] = gMonIcon_Zubat,
	[SPECIES_GOLBAT] = gMonIcon_Golbat,
	[SPECIES_ODDISH] = gMonIcon_Oddish,
	[SPECIES_GLOOM] = gMonIcon_Gloom,
	[SPECIES_VILEPLUME] = gMonIcon_Vileplume,
	[SPECIES_PARAS] = gMonIcon_Paras,
	[SPECIES_PARASECT] = gMonIcon_Parasect,
	[SPECIES_VENONAT] = gMonIcon_Venonat,
	[SPECIES_VENOMOTH] = gMonIcon_Venomoth,
	[SPECIES_DIGLETT] = gMonIcon_Diglett,
	[SPECIES_DUGTRIO] = gMonIcon_Dugtrio,
	[SPECIES_MEOWTH] = gMonIcon_Meowth,
	[SPECIES_PERSIAN] = gMonIcon_Persian,
	[SPECIES_PSYDUCK] = gMonIcon_Psyduck,
	[SPECIES_GOLDUCK] = gMonIcon_Golduck,
	[SPECIES_MANKEY] = gMonIcon_Mankey,
	[SPECIES_PRIMEAPE] = gMonIcon_Primeape,
	[SPECIES_GROWLITHE] = gMonIcon_Growlithe,
	[SPECIES_ARCANINE] = gMonIcon_Arcanine,
	[SPECIES_POLIWAG] = gMonIcon_Poliwag,
	[SPECIES_POLIWHIRL] = gMonIcon_Poliwhirl,
	[SPECIES_POLIWRATH] = gMonIcon_Poliwrath,
	[SPECIES_ABRA] = gMonIcon_Abra,
	[SPECIES_KADABRA] = gMonIcon_Kadabra,
	[SPECIES_ALAKAZAM] = gMonIcon_Alakazam,
	[SPECIES_MACHOP] = gMonIcon_Machop,
	[SPECIES_MACHOKE] = gMonIcon_Machoke,
	[SPECIES_MACHAMP] = gMonIcon_Machamp,
	[SPECIES_BELLSPROUT] = gMonIcon_Bellsprout,
	[SPECIES_WEEPINBELL] = gMonIcon_Weepinbell,
	[SPECIES_VICTREEBEL] = gMonIcon_Victreebel,
	[SPECIES_TENTACOOL] = gMonIcon_Tentacool,
	[SPECIES_TENTACRUEL] = gMonIcon_Tentacruel,
	[SPECIES_GEODUDE] = gMonIcon_Geodude,
	[SPECIES_GRAVELER] = gMonIcon_Graveler,
	[SPECIES_GOLEM] = gMonIcon_Golem,
	[SPECIES_PONYTA] = gMonIcon_Ponyta,
	[SPECIES_RAPIDASH] = gMonIcon_Rapidash,
	[SPECIES_SLOWPOKE] = gMonIcon_Slowpoke,
	[SPECIES_SLOWBRO] = gMonIcon_Slowbro,
	[SPECIES_MAGNEMITE] = gMonIcon_Magnemite,
	[SPECIES_MAGNETON] = gMonIcon_Magneton,
	[SPECIES_FARFETCHD] = gMonIcon_Farfetchd,
	[SPECIES_DODUO] = gMonIcon_Doduo,
	[SPECIES_DODRIO] = gMonIcon_Dodrio,
	[SPECIES_SEEL] = gMonIcon_Seel,
	[SPECIES_DEWGONG] = gMonIcon_Dewgong,
	[SPECIES_GRIMER] = gMonIcon_Grimer,
	[SPECIES_MUK] = gMonIcon_Muk,
	[SPECIES_SHELLDER] = gMonIcon_Shellder,
	[SPECIES_CLOYSTER] = gMonIcon_Cloyster,
	[SPECIES_GASTLY] = gMonIcon_Gastly,
	[SPECIES_HAUNTER] = gMonIcon_Haunter,
	[SPECIES_GENGAR] = gMonIcon_Gengar,
	[SPECIES_ONIX] = gMonIcon_Onix,
	[SPECIES_DROWZEE] = gMonIcon_Drowzee,
	[SPECIES_HYPNO] = gMonIcon_Hypno,
	[SPECIES_KRABBY] = gMonIcon_Krabby,
	[SPECIES_KINGLER] = gMonIcon_Kingler,
	[SPECIES_VOLTORB] = gMonIcon_Voltorb,
	[SPECIES_ELECTRODE] = gMonIcon_Electrode,
	[SPECIES_EXEGGCUTE] = gMonIcon_Exeggcute,
	[SPECIES_EXEGGUTOR] = gMonIcon_Exeggutor,
	[SPECIES_CUBONE] = gMonIcon_Cubone,
	[SPECIES_MAROWAK] = gMonIcon_Marowak,
	[SPECIES_HITMONLEE] = gMonIcon_Hitmonlee,
	[SPECIES_HITMONCHAN] = gMonIcon_Hitmonchan,
	[SPECIES_LICKITUNG] = gMonIcon_Lickitung,
	[SPECIES_KOFFING] = gMonIcon_Koffing,
	[SPECIES_WEEZING] = gMonIcon_Weezing,
	[SPECIES_RHYHORN] = gMonIcon_Rhyhorn,
	[SPECIES_RHYDON] = gMonIcon_Rhydon,
	[SPECIES_CHANSEY] = gMonIcon_Chansey,
	[SPECIES_TANGELA] = gMonIcon_Tangela,
	[SPECIES_KANGASKHAN] = gMonIcon_Kangaskhan,
	[SPECIES_HORSEA] = gMonIcon_Horsea,
	[SPECIES_SEADRA] = gMonIcon_Seadra,
	[SPECIES_GOLDEEN] = gMonIcon_Goldeen,
	[SPECIES_SEAKING] = gMonIcon_Seaking,
	[SPECIES_STARYU] = gMonIcon_Staryu,
	[SPECIES_STARMIE] = gMonIcon_Starmie,
	[SPECIES_MRMIME] = gMonIcon_MrMime,
	[SPECIES_SCYTHER] = gMonIcon_Scyther,
	[SPECIES_JYNX] = gMonIcon_Jynx,
	[SPECIES_ELECTABUZZ] = gMonIcon_Electabuzz,
	[SPECIES_MAGMAR] = gMonIcon_Magmar,
	[SPECIES_PINSIR] = gMonIcon_Pinsir,
	[SPECIES_TAUROS] = gMonIcon_Tauros,
	[SPECIES_MAGIKARP] = gMonIcon_Magikarp,
	[SPECIES_GYARADOS] = gMonIcon_Gyarados,
	[SPECIES_LAPRAS] = gMonIcon_Lapras,
	[SPECIES_DITTO] = gMonIcon_Ditto,
	[SPECIES_EEVEE] = gMonIcon_Eevee,
	[SPECIES_VAPOREON] = gMonIcon_Vaporeon,
	[SPECIES_JOLTEON] = gMonIcon_Jolteon,
	[SPECIES_FLAREON] = gMonIcon_Flareon,
	[SPECIES_PORYGON] = gMonIcon_Porygon,
	[SPECIES_OMANYTE] = gMonIcon_Omanyte,
	[SPECIES_OMASTAR] = gMonIcon_Omastar,
	[SPECIES_KABUTO] = gMonIcon_Kabuto,
	[SPECIES_KABUTOPS] = gMonIcon_Kabutops,
	[SPECIES_AERODACTYL] = gMonIcon_Aerodactyl,
	[SPECIES_SNORLAX] = gMonIcon_Snorlax,
	[SPECIES_ARTICUNO] = gMonIcon_Articuno,
	[SPECIES_ZAPDOS] = gMonIcon_Zapdos,
	[SPECIES_MOLTRES] = gMonIcon_Moltres,
	[SPECIES_DRATINI] = gMonIcon_Dratini,
	[SPECIES_DRAGONAIR] = gMonIcon_Dragonair,
	[SPECIES_DRAGONITE] = gMonIcon_Dragonite,
	[SPECIES_MEWTWO] = gMonIcon_Mewtwo,
	[SPECIES_MEW] = gMonIcon_Mew,
	[SPECIES_CHIKORITA] = gMonIcon_Chikorita,
	[SPECIES_BAYLEEF] = gMonIcon_Bayleef,
	[SPECIES_MEGANIUM] = gMonIcon_Meganium,
	[SPECIES_CYNDAQUIL] = gMonIcon_Cyndaquil,
	[SPECIES_QUILAVA] = gMonIcon_Quilava,
	[SPECIES_TYPHLOSION] = gMonIcon_Typhlosion,
	[SPECIES_TOTODILE] = gMonIcon_Totodile,
	[SPECIES_CROCONAW] = gMonIcon_Croconaw,
	[SPECIES_FERALIGATR] = gMonIcon_Feraligatr,
	[SPECIES_SENTRET] = gMonIcon_Sentret,
	[SPECIES_FURRET] = gMonIcon_Furret,
	[SPECIES_HOOTHOOT] = gMonIcon_Hoothoot,
	[SPECIES_NOCTOWL] = gMonIcon_Noctowl,
	[SPECIES_LEDYBA] = gMonIcon_Ledyba,
	[SPECIES_LEDIAN] = gMonIcon_Ledian,
	[SPECIES_SPINARAK] = gMonIcon_Spinarak,
	[SPECIES_ARIADOS] = gMonIcon_Ariados,
	[SPECIES_CROBAT] = gMonIcon_Crobat,
	[SPECIES_CHINCHOU] = gMonIcon_Chinchou,
	[SPECIES_LANTURN] = gMonIcon_Lanturn,
	[SPECIES_PICHU] = gMonIcon_Pichu,
	[SPECIES_CLEFFA] = gMonIcon_Cleffa,
	[SPECIES_IGGLYBUFF] = gMonIcon_Igglybuff,
	[SPECIES_TOGEPI] = gMonIcon_Togepi,
	[SPECIES_TOGETIC] = gMonIcon_Togetic,
	[SPECIES_NATU] = gMonIcon_Natu,
	[SPECIES_XATU] = gMonIcon_Xatu,
	[SPECIES_MAREEP] = gMonIcon_Mareep,
	[SPECIES_FLAAFFY] = gMonIcon_Flaaffy,
	[SPECIES_AMPHAROS] = gMonIcon_Ampharos,
	[SPECIES_BELLOSSOM] = gMonIcon_Bellossom,
	[SPECIES_MARILL] = gMonIcon_Marill,
	[SPECIES_AZUMARILL] = gMonIcon_Azumarill,
	[SPECIES_SUDOWOODO] = gMonIcon_Sudowoodo,
	[SPECIES_POLITOED] = gMonIcon_Politoed,
	[SPECIES_HOPPIP] = gMonIcon_Hoppip,
	[SPECIES_SKIPLOOM] = gMonIcon_Skiploom,
	[SPECIES_JUMPLUFF] = gMonIcon_Jumpluff,
	[SPECIES_AIPOM] = gMonIcon_Aipom,
	[SPECIES_SUNKERN] = gMonIcon_Sunkern,
	[SPECIES_SUNFLORA] = gMonIcon_Sunflora,
	[SPECIES_YANMA] = gMonIcon_Yanma,
	[SPECIES_WOOPER] = gMonIcon_Wooper,
	[SPECIES_QUAGSIRE] = gMonIcon_Quagsire,
	[SPECIES_ESPEON] = gMonIcon_Espeon,
	[SPECIES_UMBREON] = gMonIcon_Umbreon,
	[SPECIES_MURKROW] = gMonIcon_Murkrow,
	[SPECIES_SLOWKING] = gMonIcon_Slowking,
	[SPECIES_MISDREAVUS] = gMonIcon_Misdreavus,
	[SPECIES_UNOWN] = gMonIcon_Unown,
	[SPECIES_WOBBUFFET] = gMonIcon_Wobbuffet,
	[SPECIES_GIRAFARIG] = gMonIcon_Girafarig,
	[SPECIES_PINECO] = gMonIcon_Pineco,
	[SPECIES_FORRETRESS] = gMonIcon_Forretress,
	[SPECIES_DUNSPARCE] = gMonIcon_Dunsparce,
	[SPECIES_GLIGAR] = gMonIcon_Gligar,
	[SPECIES_STEELIX] = gMonIcon_Steelix,
	[SPECIES_SNUBBULL] = gMonIcon_Snubbull,
	[SPECIES_GRANBULL] = gMonIcon_Granbull,
	[SPECIES_QWILFISH] = gMonIcon_Qwilfish,
	[SPECIES_SCIZOR] = gMonIcon_Scizor,
	[SPECIES_SHUCKLE] = gMonIcon_Shuckle,
	[SPECIES_HERACROSS] = gMonIcon_Heracross,
	[SPECIES_SNEASEL] = gMonIcon_Sneasel,
	[SPECIES_TEDDIURSA] = gMonIcon_Teddiursa,
	[SPECIES_URSARING] = gMonIcon_Ursaring,
	[SPECIES_SLUGMA] = gMonIcon_Slugma,
	[SPECIES_MAGCARGO] = gMonIcon_Magcargo,
	[SPECIES_SWINUB] = gMonIcon_Swinub,
	[SPECIES_PILOSWINE] = gMonIcon_Piloswine,
	[SPECIES_CORSOLA] = gMonIcon_Corsola,
	[SPECIES_REMORAID] = gMonIcon_Remoraid,
	[SPECIES_OCTILLERY] = gMonIcon_Octillery,
	[SPECIES_DELIBIRD] = gMonIcon_Delibird,
	[SPECIES_MANTINE] = gMonIcon_Mantine,
	[SPECIES_SKARMORY] = gMonIcon_Skarmory,
	[SPECIES_HOUNDOUR] = gMonIcon_Houndour,
	[SPECIES_HOUNDOOM] = gMonIcon_Houndoom,
	[SPECIES_KINGDRA] = gMonIcon_Kingdra,
	[SPECIES_PHANPY] = gMonIcon_Phanpy,
	[SPECIES_DONPHAN] = gMonIcon_Donphan,
	[SPECIES_PORYGON2] = gMonIcon_Porygon2,
	[SPECIES_STANTLER] = gMonIcon_Stantler,
	[SPECIES_SMEARGLE] = gMonIcon_Smeargle,
	[SPECIES_TYROGUE] = gMonIcon_Tyrogue,
	[SPECIES_HITMONTOP] = gMonIcon_Hitmontop,
	[SPECIES_SMOOCHUM] = gMonIcon_Smoochum,
	[SPECIES_ELEKID] = gMonIcon_Elekid,
	[SPECIES_MAGBY] = gMonIcon_Magby,
	[SPECIES_MILTANK] = gMonIcon_Miltank,
	[SPECIES_BLISSEY] = gMonIcon_Blissey,
	[SPECIES_RAIKOU] = gMonIcon_Raikou,
	[SPECIES_ENTEI] = gMonIcon_Entei,
	[SPECIES_SUICUNE] = gMonIcon_Suicune,
	[SPECIES_LARVITAR] = gMonIcon_Larvitar,
	[SPECIES_PUPITAR] = gMonIcon_Pupitar,
	[SPECIES_TYRANITAR] = gMonIcon_Tyranitar,
	[SPECIES_LUGIA] = gMonIcon_Lugia,
	[SPECIES_HOOH] = gMonIcon_HoOh,
	[SPECIES_CELEBI] = gMonIcon_Celebi,
    [SPECIES_OLD_UNOWN_B] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_C] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_D] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_E] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_F] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_G] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_H] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_I] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_J] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_K] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_L] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_M] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_N] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_O] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_P] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_Q] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_R] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_S] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_T] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_U] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_V] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_W] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_X] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_Y] = gMonIcon_QuestionMark,
    [SPECIES_OLD_UNOWN_Z] = gMonIcon_QuestionMark,
	[SPECIES_TREECKO] = gMonIcon_Treecko,
	[SPECIES_GROVYLE] = gMonIcon_Grovyle,
	[SPECIES_SCEPTILE] = gMonIcon_Sceptile,
	[SPECIES_TORCHIC] = gMonIcon_Torchic,
	[SPECIES_COMBUSKEN] = gMonIcon_Combusken,
	[SPECIES_BLAZIKEN] = gMonIcon_Blaziken,
	[SPECIES_MUDKIP] = gMonIcon_Mudkip,
	[SPECIES_MARSHTOMP] = gMonIcon_Marshtomp,
	[SPECIES_SWAMPERT] = gMonIcon_Swampert,
	[SPECIES_POOCHYENA] = gMonIcon_Poochyena,
	[SPECIES_MIGHTYENA] = gMonIcon_Mightyena,
	[SPECIES_ZIGZAGOON] = gMonIcon_Zigzagoon,
	[SPECIES_LINOONE] = gMonIcon_Linoone,
	[SPECIES_WURMPLE] = gMonIcon_Wurmple,
	[SPECIES_SILCOON] = gMonIcon_Silcoon,
	[SPECIES_BEAUTIFLY] = gMonIcon_Beautifly,
	[SPECIES_CASCOON] = gMonIcon_Cascoon,
	[SPECIES_DUSTOX] = gMonIcon_Dustox,
	[SPECIES_LOTAD] = gMonIcon_Lotad,
	[SPECIES_LOMBRE] = gMonIcon_Lombre,
	[SPECIES_LUDICOLO] = gMonIcon_Ludicolo,
	[SPECIES_SEEDOT] = gMonIcon_Seedot,
	[SPECIES_NUZLEAF] = gMonIcon_Nuzleaf,
	[SPECIES_SHIFTRY] = gMonIcon_Shiftry,
	[SPECIES_TAILLOW] = gMonIcon_Taillow,
	[SPECIES_SWELLOW] = gMonIcon_Swellow,
	[SPECIES_WINGULL] = gMonIcon_Wingull,
	[SPECIES_PELIPPER] = gMonIcon_Pelipper,
	[SPECIES_RALTS] = gMonIcon_Ralts,
	[SPECIES_KIRLIA] = gMonIcon_Kirlia,
	[SPECIES_GARDEVOIR] = gMonIcon_Gardevoir,
	[SPECIES_SURSKIT] = gMonIcon_Surskit,
	[SPECIES_MASQUERAIN] = gMonIcon_Masquerain,
	[SPECIES_SHROOMISH] = gMonIcon_Shroomish,
	[SPECIES_BRELOOM] = gMonIcon_Breloom,
	[SPECIES_SLAKOTH] = gMonIcon_Slakoth,
	[SPECIES_VIGOROTH] = gMonIcon_Vigoroth,
	[SPECIES_SLAKING] = gMonIcon_Slaking,
	[SPECIES_NINCADA] = gMonIcon_Nincada,
	[SPECIES_NINJASK] = gMonIcon_Ninjask,
	[SPECIES_SHEDINJA] = gMonIcon_Shedinja,
	[SPECIES_WHISMUR] = gMonIcon_Whismur,
	[SPECIES_LOUDRED] = gMonIcon_Loudred,
	[SPECIES_EXPLOUD] = gMonIcon_Exploud,
	[SPECIES_MAKUHITA] = gMonIcon_Makuhita,
	[SPECIES_HARIYAMA] = gMonIcon_Hariyama,
	[SPECIES_AZURILL] = gMonIcon_Azurill,
	[SPECIES_NOSEPASS] = gMonIcon_Nosepass,
	[SPECIES_SKITTY] = gMonIcon_Skitty,
	[SPECIES_DELCATTY] = gMonIcon_Delcatty,
	[SPECIES_SABLEYE] = gMonIcon_Sableye,
	[SPECIES_MAWILE] = gMonIcon_Mawile,
	[SPECIES_ARON] = gMonIcon_Aron,
	[SPECIES_LAIRON] = gMonIcon_Lairon,
	[SPECIES_AGGRON] = gMonIcon_Aggron,
	[SPECIES_MEDITITE] = gMonIcon_Meditite,
	[SPECIES_MEDICHAM] = gMonIcon_Medicham,
	[SPECIES_ELECTRIKE] = gMonIcon_Electrike,
	[SPECIES_MANECTRIC] = gMonIcon_Manectric,
	[SPECIES_PLUSLE] = gMonIcon_Plusle,
	[SPECIES_MINUN] = gMonIcon_Minun,
	[SPECIES_VOLBEAT] = gMonIcon_Volbeat,
	[SPECIES_ILLUMISE] = gMonIcon_Illumise,
	[SPECIES_ROSELIA] = gMonIcon_Roselia,
	[SPECIES_GULPIN] = gMonIcon_Gulpin,
	[SPECIES_SWALOT] = gMonIcon_Swalot,
	[SPECIES_CARVANHA] = gMonIcon_Carvanha,
	[SPECIES_SHARPEDO] = gMonIcon_Sharpedo,
	[SPECIES_WAILMER] = gMonIcon_Wailmer,
	[SPECIES_WAILORD] = gMonIcon_Wailord,
	[SPECIES_NUMEL] = gMonIcon_Numel,
	[SPECIES_CAMERUPT] = gMonIcon_Camerupt,
	[SPECIES_TORKOAL] = gMonIcon_Torkoal,
	[SPECIES_SPOINK] = gMonIcon_Spoink,
	[SPECIES_GRUMPIG] = gMonIcon_Grumpig,
	[SPECIES_SPINDA] = gMonIcon_Spinda,
	[SPECIES_TRAPINCH] = gMonIcon_Trapinch,
	[SPECIES_VIBRAVA] = gMonIcon_Vibrava,
	[SPECIES_FLYGON] = gMonIcon_Flygon,
	[SPECIES_CACNEA] = gMonIcon_Cacnea,
	[SPECIES_CACTURNE] = gMonIcon_Cacturne,
	[SPECIES_SWABLU] = gMonIcon_Swablu,
	[SPECIES_ALTARIA] = gMonIcon_Altaria,
	[SPECIES_ZANGOOSE] = gMonIcon_Zangoose,
	[SPECIES_SEVIPER] = gMonIcon_Seviper,
	[SPECIES_LUNATONE] = gMonIcon_Lunatone,
	[SPECIES_SOLROCK] = gMonIcon_Solrock,
	[SPECIES_BARBOACH] = gMonIcon_Barboach,
	[SPECIES_WHISCASH] = gMonIcon_Whiscash,
	[SPECIES_CORPHISH] = gMonIcon_Corphish,
	[SPECIES_CRAWDAUNT] = gMonIcon_Crawdaunt,
	[SPECIES_BALTOY] = gMonIcon_Baltoy,
	[SPECIES_CLAYDOL] = gMonIcon_Claydol,
	[SPECIES_LILEEP] = gMonIcon_Lileep,
	[SPECIES_CRADILY] = gMonIcon_Cradily,
	[SPECIES_ANORITH] = gMonIcon_Anorith,
	[SPECIES_ARMALDO] = gMonIcon_Armaldo,
	[SPECIES_FEEBAS] = gMonIcon_Feebas,
	[SPECIES_MILOTIC] = gMonIcon_Milotic,
	[SPECIES_CASTFORM] = gMonIcon_Castform,
	[SPECIES_KECLEON] = gMonIcon_Kecleon,
	[SPECIES_SHUPPET] = gMonIcon_Shuppet,
	[SPECIES_BANETTE] = gMonIcon_Banette,
	[SPECIES_DUSKULL] = gMonIcon_Duskull,
	[SPECIES_DUSCLOPS] = gMonIcon_Dusclops,
	[SPECIES_TROPIUS] = gMonIcon_Tropius,
	[SPECIES_CHIMECHO] = gMonIcon_Chimecho,
	[SPECIES_ABSOL] = gMonIcon_Absol,
	[SPECIES_WYNAUT] = gMonIcon_Wynaut,
	[SPECIES_SNORUNT] = gMonIcon_Snorunt,
	[SPECIES_GLALIE] = gMonIcon_Glalie,
	[SPECIES_SPHEAL] = gMonIcon_Spheal,
	[SPECIES_SEALEO] = gMonIcon_Sealeo,
	[SPECIES_WALREIN] = gMonIcon_Walrein,
	[SPECIES_CLAMPERL] = gMonIcon_Clamperl,
	[SPECIES_HUNTAIL] = gMonIcon_Huntail,
	[SPECIES_GOREBYSS] = gMonIcon_Gorebyss,
	[SPECIES_RELICANTH] = gMonIcon_Relicanth,
	[SPECIES_LUVDISC] = gMonIcon_Luvdisc,
	[SPECIES_BAGON] = gMonIcon_Bagon,
	[SPECIES_SHELGON] = gMonIcon_Shelgon,
	[SPECIES_SALAMENCE] = gMonIcon_Salamence,
	[SPECIES_BELDUM] = gMonIcon_Beldum,
	[SPECIES_METANG] = gMonIcon_Metang,
	[SPECIES_METAGROSS] = gMonIcon_Metagross,
	[SPECIES_REGIROCK] = gMonIcon_Regirock,
	[SPECIES_REGICE] = gMonIcon_Regice,
	[SPECIES_REGISTEEL] = gMonIcon_Registeel,
	[SPECIES_LATIAS] = gMonIcon_Latias,
	[SPECIES_LATIOS] = gMonIcon_Latios,
	[SPECIES_KYOGRE] = gMonIcon_Kyogre,
	[SPECIES_GROUDON] = gMonIcon_Groudon,
	[SPECIES_RAYQUAZA] = gMonIcon_Rayquaza,
	[SPECIES_JIRACHI] = gMonIcon_Jirachi,
	[SPECIES_DEOXYS] = gMonIcon_Deoxys,
    [SPECIES_UNOWN_B] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_C] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_D] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_E] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_F] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_G] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_H] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_I] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_J] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_K] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_L] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_M] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_N] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_O] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_P] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_Q] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_R] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_S] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_T] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_U] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_V] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_W] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_X] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_Y] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_Z] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_EMARK] = gMonIcon_QuestionMark,
    [SPECIES_UNOWN_QMARK] = gMonIcon_QuestionMark,
	[SPECIES_TURTWIG] = gMonIcon_Turtwig,
	[SPECIES_GROTLE] = gMonIcon_Grotle,
	[SPECIES_TORTERRA] = gMonIcon_Torterra,
	[SPECIES_CHIMCHAR] = gMonIcon_Chimchar,
	[SPECIES_MONFERNO] = gMonIcon_Monferno,
	[SPECIES_INFERNAPE] = gMonIcon_Infernape,
	[SPECIES_PIPLUP] = gMonIcon_Piplup,
	[SPECIES_PRINPLUP] = gMonIcon_Prinplup,
	[SPECIES_EMPOLEON] = gMonIcon_Empoleon,
	[SPECIES_STARLY] = gMonIcon_Starly,
	[SPECIES_STARAVIA] = gMonIcon_Staravia,
	[SPECIES_STARAPTOR] = gMonIcon_Staraptor,
	[SPECIES_BIDOOF] = gMonIcon_Bidoof,
	[SPECIES_BIBAREL] = gMonIcon_Bibarel,
	[SPECIES_KRICKETOT] = gMonIcon_Kricketot,
	[SPECIES_KRICKETUNE] = gMonIcon_Kricketune,
	[SPECIES_SHINX] = gMonIcon_Shinx,
	[SPECIES_LUXIO] = gMonIcon_Luxio,
	[SPECIES_LUXRAY] = gMonIcon_Luxray,
	[SPECIES_BUDEW] = gMonIcon_Budew,
	[SPECIES_ROSERADE] = gMonIcon_Roserade,
	[SPECIES_CRANIDOS] = gMonIcon_Cranidos,
	[SPECIES_RAMPARDOS] = gMonIcon_Rampardos,
	[SPECIES_SHIELDON] = gMonIcon_Shieldon,
	[SPECIES_BASTIODON] = gMonIcon_Bastiodon,
	[SPECIES_BURMY] = gMonIcon_Burmy,
	[SPECIES_WORMADAM] = gMonIcon_Wormadam,
	[SPECIES_MOTHIM] = gMonIcon_Mothim,
	[SPECIES_COMBEE] = gMonIcon_Combee,
	[SPECIES_VESPIQUEN] = gMonIcon_Vespiquen,
	[SPECIES_PACHIRISU] = gMonIcon_Pachirisu,
	[SPECIES_BUIZEL] = gMonIcon_Buizel,
	[SPECIES_FLOATZEL] = gMonIcon_Floatzel,
	[SPECIES_CHERUBI] = gMonIcon_Cherubi,
	[SPECIES_CHERRIM] = gMonIcon_Cherrim,
	[SPECIES_SHELLOS] = gMonIcon_Shellos,
	[SPECIES_GASTRODON] = gMonIcon_Gastrodon,
	[SPECIES_AMBIPOM] = gMonIcon_Ambipom,
	[SPECIES_DRIFLOON] = gMonIcon_Drifloon,
	[SPECIES_DRIFBLIM] = gMonIcon_Drifblim,
	[SPECIES_BUNEARY] = gMonIcon_Buneary,
	[SPECIES_LOPUNNY] = gMonIcon_Lopunny,
	[SPECIES_MISMAGIUS] = gMonIcon_Mismagius,
	[SPECIES_HONCHKROW] = gMonIcon_Honchkrow,
	[SPECIES_GLAMEOW] = gMonIcon_Glameow,
	[SPECIES_PURUGLY] = gMonIcon_Purugly,
	[SPECIES_CHINGLING] = gMonIcon_Chingling,
	[SPECIES_STUNKY] = gMonIcon_Stunky,
	[SPECIES_SKUNTANK] = gMonIcon_Skuntank,
	[SPECIES_BRONZOR] = gMonIcon_Bronzor,
	[SPECIES_BRONZONG] = gMonIcon_Bronzong,
	[SPECIES_BONSLY] = gMonIcon_Bonsly,
	[SPECIES_MIMEJR] = gMonIcon_MimeJr,
	[SPECIES_HAPPINY] = gMonIcon_Happiny,
	[SPECIES_CHATOT] = gMonIcon_Chatot,
	[SPECIES_SPIRITOMB] = gMonIcon_Spiritomb,
	[SPECIES_GIBLE] = gMonIcon_Gible,
	[SPECIES_GABITE] = gMonIcon_Gabite,
	[SPECIES_GARCHOMP] = gMonIcon_Garchomp,
	[SPECIES_MUNCHLAX] = gMonIcon_Munchlax,
	[SPECIES_RIOLU] = gMonIcon_Riolu,
	[SPECIES_LUCARIO] = gMonIcon_Lucario,
	[SPECIES_HIPPOPOTAS] = gMonIcon_Hippopotas,
	[SPECIES_HIPPOWDON] = gMonIcon_Hippowdon,
	[SPECIES_SKORUPI] = gMonIcon_Skorupi,
	[SPECIES_DRAPION] = gMonIcon_Drapion,
	[SPECIES_CROAGUNK] = gMonIcon_Croagunk,
	[SPECIES_TOXICROAK] = gMonIcon_Toxicroak,
	[SPECIES_CARNIVINE] = gMonIcon_Carnivine,
	[SPECIES_FINNEON] = gMonIcon_Finneon,
	[SPECIES_LUMINEON] = gMonIcon_Lumineon,
	[SPECIES_MANTYKE] = gMonIcon_Mantyke,
	[SPECIES_SNOVER] = gMonIcon_Snover,
	[SPECIES_ABOMASNOW] = gMonIcon_Abomasnow,
	[SPECIES_WEAVILE] = gMonIcon_Weavile,
	[SPECIES_MAGNEZONE] = gMonIcon_Magnezone,
	[SPECIES_LICKILICKY] = gMonIcon_Lickilicky,
	[SPECIES_RHYPERIOR] = gMonIcon_Rhyperior,
	[SPECIES_TANGROWTH] = gMonIcon_Tangrowth,
	[SPECIES_ELECTIVIRE] = gMonIcon_Electivire,
	[SPECIES_MAGMORTAR] = gMonIcon_Magmortar,
	[SPECIES_TOGEKISS] = gMonIcon_Togekiss,
	[SPECIES_YANMEGA] = gMonIcon_Yanmega,
	[SPECIES_LEAFEON] = gMonIcon_Leafeon,
	[SPECIES_GLACEON] = gMonIcon_Glaceon,
	[SPECIES_GLISCOR] = gMonIcon_Gliscor,
	[SPECIES_MAMOSWINE] = gMonIcon_Mamoswine,
	[SPECIES_PORYGONZ] = gMonIcon_PorygonZ,
	[SPECIES_GALLADE] = gMonIcon_Gallade,
	[SPECIES_PROBOPASS] = gMonIcon_Probopass,
	[SPECIES_DUSKNOIR] = gMonIcon_Dusknoir,
	[SPECIES_FROSLASS] = gMonIcon_Froslass,
	[SPECIES_ROTOM] = gMonIcon_Rotom,
	[SPECIES_UXIE] = gMonIcon_Uxie,
	[SPECIES_MESPRIT] = gMonIcon_Mesprit,
	[SPECIES_AZELF] = gMonIcon_Azelf,
	[SPECIES_DIALGA] = gMonIcon_Dialga,
	[SPECIES_PALKIA] = gMonIcon_Palkia,
	[SPECIES_HEATRAN] = gMonIcon_Heatran,
	[SPECIES_REGIGIGAS] = gMonIcon_Regigigas,
	[SPECIES_GIRATINA] = gMonIcon_Giratina,
	[SPECIES_CRESSELIA] = gMonIcon_Cresselia,
	[SPECIES_PHIONE] = gMonIcon_Phione,
	[SPECIES_MANAPHY] = gMonIcon_Manaphy,
	[SPECIES_DARKRAI] = gMonIcon_Darkrai,
	[SPECIES_SHAYMIN] = gMonIcon_Shaymin,
	[SPECIES_ARCEUS] = gMonIcon_Arceus,
	[SPECIES_VICTINI] = gMonIcon_Victini,
	[SPECIES_SNIVY] = gMonIcon_Snivy,
	[SPECIES_SERVINE] = gMonIcon_Servine,
	[SPECIES_SERPERIOR] = gMonIcon_Serperior,
	[SPECIES_TEPIG] = gMonIcon_Tepig,
	[SPECIES_PIGNITE] = gMonIcon_Pignite,
	[SPECIES_EMBOAR] = gMonIcon_Emboar,
	[SPECIES_OSHAWOTT] = gMonIcon_Oshawott,
	[SPECIES_DEWOTT] = gMonIcon_Dewott,
	[SPECIES_SAMUROTT] = gMonIcon_Samurott,
	[SPECIES_PATRAT] = gMonIcon_Patrat,
	[SPECIES_WATCHOG] = gMonIcon_Watchog,
	[SPECIES_LILLIPUP] = gMonIcon_Lillipup,
	[SPECIES_HERDIER] = gMonIcon_Herdier,
	[SPECIES_STOUTLAND] = gMonIcon_Stoutland,
	[SPECIES_PURRLOIN] = gMonIcon_Purrloin,
	[SPECIES_LIEPARD] = gMonIcon_Liepard,
	[SPECIES_PANSAGE] = gMonIcon_Pansage,
	[SPECIES_SIMISAGE] = gMonIcon_Simisage,
	[SPECIES_PANSEAR] = gMonIcon_Pansear,
	[SPECIES_SIMISEAR] = gMonIcon_Simisear,
	[SPECIES_PANPOUR] = gMonIcon_Panpour,
	[SPECIES_SIMIPOUR] = gMonIcon_Simipour,
	[SPECIES_MUNNA] = gMonIcon_Munna,
	[SPECIES_MUSHARNA] = gMonIcon_Musharna,
	[SPECIES_PIDOVE] = gMonIcon_Pidove,
	[SPECIES_TRANQUILL] = gMonIcon_Tranquill,
	[SPECIES_UNFEZANT] = gMonIcon_Unfezant,
	[SPECIES_BLITZLE] = gMonIcon_Blitzle,
	[SPECIES_ZEBSTRIKA] = gMonIcon_Zebstrika,
	[SPECIES_ROGGENROLA] = gMonIcon_Roggenrola,
	[SPECIES_BOLDORE] = gMonIcon_Boldore,
	[SPECIES_GIGALITH] = gMonIcon_Gigalith,
	[SPECIES_WOOBAT] = gMonIcon_Woobat,
	[SPECIES_SWOOBAT] = gMonIcon_Swoobat,
	[SPECIES_DRILBUR] = gMonIcon_Drilbur,
	[SPECIES_EXCADRILL] = gMonIcon_Excadrill,
	[SPECIES_AUDINO] = gMonIcon_Audino,
	[SPECIES_TIMBURR] = gMonIcon_Timburr,
	[SPECIES_GURDURR] = gMonIcon_Gurdurr,
	[SPECIES_CONKELDURR] = gMonIcon_Conkeldurr,
	[SPECIES_TYMPOLE] = gMonIcon_Tympole,
	[SPECIES_PALPITOAD] = gMonIcon_Palpitoad,
	[SPECIES_SEISMITOAD] = gMonIcon_Seismitoad,
	[SPECIES_THROH] = gMonIcon_Throh,
	[SPECIES_SAWK] = gMonIcon_Sawk,
	[SPECIES_SEWADDLE] = gMonIcon_Sewaddle,
	[SPECIES_SWADLOON] = gMonIcon_Swadloon,
	[SPECIES_LEAVANNY] = gMonIcon_Leavanny,
	[SPECIES_VENIPEDE] = gMonIcon_Venipede,
	[SPECIES_WHIRLIPEDE] = gMonIcon_Whirlipede,
	[SPECIES_SCOLIPEDE] = gMonIcon_Scolipede,
	[SPECIES_COTTONEE] = gMonIcon_Cottonee,
	[SPECIES_WHIMSICOTT] = gMonIcon_Whimsicott,
	[SPECIES_PETILIL] = gMonIcon_Petilil,
	[SPECIES_LILLIGANT] = gMonIcon_Lilligant,
	[SPECIES_BASCULIN] = gMonIcon_Basculin,
	[SPECIES_SANDILE] = gMonIcon_Sandile,
	[SPECIES_KROKOROK] = gMonIcon_Krokorok,
	[SPECIES_KROOKODILE] = gMonIcon_Krookodile,
	[SPECIES_DARUMAKA] = gMonIcon_Darumaka,
	[SPECIES_DARMANITAN] = gMonIcon_Darmanitan,
	[SPECIES_MARACTUS] = gMonIcon_Maractus,
	[SPECIES_DWEBBLE] = gMonIcon_Dwebble,
	[SPECIES_CRUSTLE] = gMonIcon_Crustle,
	[SPECIES_SCRAGGY] = gMonIcon_Scraggy,
	[SPECIES_SCRAFTY] = gMonIcon_Scrafty,
	[SPECIES_SIGILYPH] = gMonIcon_Sigilyph,
	[SPECIES_YAMASK] = gMonIcon_Yamask,
	[SPECIES_COFAGRIGUS] = gMonIcon_Cofagrigus,
	[SPECIES_TIRTOUGA] = gMonIcon_Tirtouga,
	[SPECIES_CARRACOSTA] = gMonIcon_Carracosta,
	[SPECIES_ARCHEN] = gMonIcon_Archen,
	[SPECIES_ARCHEOPS] = gMonIcon_Archeops,
	[SPECIES_TRUBBISH] = gMonIcon_Trubbish,
	[SPECIES_GARBODOR] = gMonIcon_Garbodor,
	[SPECIES_ZORUA] = gMonIcon_Zorua,
	[SPECIES_ZOROARK] = gMonIcon_Zoroark,
	[SPECIES_MINCCINO] = gMonIcon_Minccino,
	[SPECIES_CINCCINO] = gMonIcon_Cinccino,
	[SPECIES_GOTHITA] = gMonIcon_Gothita,
	[SPECIES_GOTHORITA] = gMonIcon_Gothorita,
	[SPECIES_GOTHITELLE] = gMonIcon_Gothitelle,
	[SPECIES_SOLOSIS] = gMonIcon_Solosis,
	[SPECIES_DUOSION] = gMonIcon_Duosion,
	[SPECIES_REUNICLUS] = gMonIcon_Reuniclus,
	[SPECIES_DUCKLETT] = gMonIcon_Ducklett,
	[SPECIES_SWANNA] = gMonIcon_Swanna,
	[SPECIES_VANILLITE] = gMonIcon_Vanillite,
	[SPECIES_VANILLISH] = gMonIcon_Vanillish,
	[SPECIES_VANILLUXE] = gMonIcon_Vanilluxe,
	[SPECIES_DEERLING] = gMonIcon_Deerling,
	[SPECIES_SAWSBUCK] = gMonIcon_Sawsbuck,
	[SPECIES_EMOLGA] = gMonIcon_Emolga,
	[SPECIES_KARRABLAST] = gMonIcon_Karrablast,
	[SPECIES_ESCAVALIER] = gMonIcon_Escavalier,
	[SPECIES_FOONGUS] = gMonIcon_Foongus,
	[SPECIES_AMOONGUSS] = gMonIcon_Amoonguss,
	[SPECIES_FRILLISH] = gMonIcon_Frillish,
	[SPECIES_JELLICENT] = gMonIcon_Jellicent,
	[SPECIES_ALOMOMOLA] = gMonIcon_Alomomola,
	[SPECIES_JOLTIK] = gMonIcon_Joltik,
	[SPECIES_GALVANTULA] = gMonIcon_Galvantula,
	[SPECIES_FERROSEED] = gMonIcon_Ferroseed,
	[SPECIES_FERROTHORN] = gMonIcon_Ferrothorn,
	[SPECIES_KLINK] = gMonIcon_Klink,
	[SPECIES_KLANG] = gMonIcon_Klang,
	[SPECIES_KLINKLANG] = gMonIcon_Klinklang,
	[SPECIES_TYNAMO] = gMonIcon_Tynamo,
	[SPECIES_EELEKTRIK] = gMonIcon_Eelektrik,
	[SPECIES_EELEKTROSS] = gMonIcon_Eelektross,
	[SPECIES_ELGYEM] = gMonIcon_Elgyem,
	[SPECIES_BEHEEYEM] = gMonIcon_Beheeyem,
	[SPECIES_LITWICK] = gMonIcon_Litwick,
	[SPECIES_LAMPENT] = gMonIcon_Lampent,
	[SPECIES_CHANDELURE] = gMonIcon_Chandelure,
	[SPECIES_AXEW] = gMonIcon_Axew,
	[SPECIES_FRAXURE] = gMonIcon_Fraxure,
	[SPECIES_HAXORUS] = gMonIcon_Haxorus,
	[SPECIES_CUBCHOO] = gMonIcon_Cubchoo,
	[SPECIES_BEARTIC] = gMonIcon_Beartic,
	[SPECIES_CRYOGONAL] = gMonIcon_Cryogonal,
	[SPECIES_SHELMET] = gMonIcon_Shelmet,
	[SPECIES_ACCELGOR] = gMonIcon_Accelgor,
	[SPECIES_STUNFISK] = gMonIcon_Stunfisk,
	[SPECIES_MIENFOO] = gMonIcon_Mienfoo,
	[SPECIES_MIENSHAO] = gMonIcon_Mienshao,
	[SPECIES_DRUDDIGON] = gMonIcon_Druddigon,
	[SPECIES_GOLETT] = gMonIcon_Golett,
	[SPECIES_GOLURK] = gMonIcon_Golurk,
	[SPECIES_PAWNIARD] = gMonIcon_Pawniard,
	[SPECIES_BISHARP] = gMonIcon_Bisharp,
	[SPECIES_BOUFFALANT] = gMonIcon_Bouffalant,
	[SPECIES_RUFFLET] = gMonIcon_Rufflet,
	[SPECIES_BRAVIARY] = gMonIcon_Braviary,
	[SPECIES_VULLABY] = gMonIcon_Vullaby,
	[SPECIES_MANDIBUZZ] = gMonIcon_Mandibuzz,
	[SPECIES_HEATMOR] = gMonIcon_Heatmor,
	[SPECIES_DURANT] = gMonIcon_Durant,
	[SPECIES_DEINO] = gMonIcon_Deino,
	[SPECIES_ZWEILOUS] = gMonIcon_Zweilous,
	[SPECIES_HYDREIGON] = gMonIcon_Hydreigon,
	[SPECIES_LARVESTA] = gMonIcon_Larvesta,
	[SPECIES_VOLCARONA] = gMonIcon_Volcarona,
	[SPECIES_COBALION] = gMonIcon_Cobalion,
	[SPECIES_TERRAKION] = gMonIcon_Terrakion,
	[SPECIES_VIRIZION] = gMonIcon_Virizion,
	[SPECIES_TORNADUS] = gMonIcon_Tornadus,
	[SPECIES_THUNDURUS] = gMonIcon_Thundurus,
	[SPECIES_RESHIRAM] = gMonIcon_Reshiram,
	[SPECIES_ZEKROM] = gMonIcon_Zekrom,
	[SPECIES_LANDORUS] = gMonIcon_Landorus,
	[SPECIES_KYUREM] = gMonIcon_Kyurem,
	[SPECIES_KELDEO] = gMonIcon_Keldeo,
	[SPECIES_MELOETTA] = gMonIcon_Meloetta,
	[SPECIES_GENESECT] = gMonIcon_Genesect,
	[SPECIES_CHESPIN] = gMonIcon_Chespin,
	[SPECIES_QUILLADIN] = gMonIcon_Quilladin,
	[SPECIES_CHESNAUGHT] = gMonIcon_Chesnaught,
	[SPECIES_FENNEKIN] = gMonIcon_Fennekin,
	[SPECIES_BRAIXEN] = gMonIcon_Braixen,
	[SPECIES_DELPHOX] = gMonIcon_Delphox,
	[SPECIES_FROAKIE] = gMonIcon_Froakie,
	[SPECIES_FROGADIER] = gMonIcon_Frogadier,
	[SPECIES_GRENINJA] = gMonIcon_Greninja,
	[SPECIES_BUNNELBY] = gMonIcon_Bunnelby,
	[SPECIES_DIGGERSBY] = gMonIcon_Diggersby,
	[SPECIES_FLETCHLING] = gMonIcon_Fletchling,
	[SPECIES_FLECHINDER] = gMonIcon_Flechinder,
	[SPECIES_TALONFLAME] = gMonIcon_Talonflame,
	[SPECIES_SCATTERBUG] = gMonIcon_Scatterbug,
	[SPECIES_SPEWPA] = gMonIcon_Spewpa,
	[SPECIES_VIVILLON] = gMonIcon_Vivillon,
	[SPECIES_LITLEO] = gMonIcon_Litleo,
	[SPECIES_PYROAR] = gMonIcon_Pyroar,
	[SPECIES_FLABEBE] = gMonIcon_Flabebe,
	[SPECIES_FLOETTE] = gMonIcon_Floette,
	[SPECIES_FLORGES] = gMonIcon_Florges,
	[SPECIES_SKIDDO] = gMonIcon_Skiddo,
	[SPECIES_GOGOAT] = gMonIcon_Gogoat,
	[SPECIES_PANCHAM] = gMonIcon_Pancham,
	[SPECIES_PANGORO] = gMonIcon_Pangoro,
	[SPECIES_FURFROU] = gMonIcon_Furfrou,
	[SPECIES_ESPURR] = gMonIcon_Espurr,
	[SPECIES_MEOWSTIC] = gMonIcon_Meowstic,
	[SPECIES_HONEDGE] = gMonIcon_Honedge,
	[SPECIES_DOUBLADE] = gMonIcon_Doublade,
	[SPECIES_AEGISLASH] = gMonIcon_Aegislash,
	[SPECIES_SPRITZEE] = gMonIcon_Spritzee,
	[SPECIES_AROMATISSE] = gMonIcon_Aromatisse,
	[SPECIES_SWIRLIX] = gMonIcon_Swirlix,
	[SPECIES_SLURPUFF] = gMonIcon_Slurpuff,
	[SPECIES_INKAY] = gMonIcon_Inkay,
	[SPECIES_MALAMAR] = gMonIcon_Malamar,
	[SPECIES_BINACLE] = gMonIcon_Binacle,
	[SPECIES_BARBARACLE] = gMonIcon_Barbaracle,
	[SPECIES_SKRELP] = gMonIcon_Skrelp,
	[SPECIES_DRAGALGE] = gMonIcon_Dragalge,
	[SPECIES_CLAUNCHER] = gMonIcon_Clauncher,
	[SPECIES_CLAWITZER] = gMonIcon_Clawitzer,
	[SPECIES_HELIOPTILE] = gMonIcon_Helioptile,
	[SPECIES_HELIOLISK] = gMonIcon_Heliolisk,
	[SPECIES_TYRUNT] = gMonIcon_Tyrunt,
	[SPECIES_TYRANTRUM] = gMonIcon_Tyrantrum,
	[SPECIES_AMAURA] = gMonIcon_Amaura,
	[SPECIES_AURORUS] = gMonIcon_Aurorus,
	[SPECIES_SYLVEON] = gMonIcon_Sylveon,
	[SPECIES_HAWLUCHA] = gMonIcon_Hawlucha,
	[SPECIES_DEDENNE] = gMonIcon_Dedenne,
	[SPECIES_CARBINK] = gMonIcon_Carbink,
	[SPECIES_GOOMY] = gMonIcon_Goomy,
	[SPECIES_SLIGGOO] = gMonIcon_Sliggoo,
	[SPECIES_GOODRA] = gMonIcon_Goodra,
	[SPECIES_KLEFKI] = gMonIcon_Klefki,
	[SPECIES_PHANTUMP] = gMonIcon_Phantump,
	[SPECIES_TREVENANT] = gMonIcon_Trevenant,
	[SPECIES_PUMPKABOO] = gMonIcon_Pumpkaboo,
	[SPECIES_GOURGEIST] = gMonIcon_Gourgeist,
	[SPECIES_BERGMITE] = gMonIcon_Bergmite,
	[SPECIES_AVALUGG] = gMonIcon_Avalugg,
	[SPECIES_NOIBAT] = gMonIcon_Noibat,
	[SPECIES_NOIVERN] = gMonIcon_Noivern,
	[SPECIES_XERNEAS] = gMonIcon_Xerneas,
	[SPECIES_YVELTAL] = gMonIcon_Yveltal,
	[SPECIES_ZYGARDE] = gMonIcon_Zygarde,
	[SPECIES_DIANCIE] = gMonIcon_Diancie,
	[SPECIES_HOOPA] = gMonIcon_Hoopa,
	[SPECIES_VOLCANION] = gMonIcon_Volcanion,
	[SPECIES_ROWLET] = gMonIcon_Rowlet,
	[SPECIES_DARTRIX] = gMonIcon_Dartrix,
	[SPECIES_DECIDUEYE] = gMonIcon_Decidueye,
	[SPECIES_LITTEN] = gMonIcon_Litten,
	[SPECIES_TORRACAT] = gMonIcon_Torracat,
	[SPECIES_INCINEROAR] = gMonIcon_Incineroar,
	[SPECIES_POPPLIO] = gMonIcon_Popplio,
	[SPECIES_BRIONNE] = gMonIcon_Brionne,
	[SPECIES_PRIMARINA] = gMonIcon_Primarina,
	[SPECIES_PIKIPEK] = gMonIcon_Pikipek,
	[SPECIES_TRUMBEAK] = gMonIcon_Trumbeak,
	[SPECIES_TOUCANNON] = gMonIcon_Toucannon,
	[SPECIES_YUNGOOS] = gMonIcon_Yungoos,
	[SPECIES_GUMSHOOS] = gMonIcon_Gumshoos,
	[SPECIES_GRUBBIN] = gMonIcon_Grubbin,
	[SPECIES_CHARJABUG] = gMonIcon_Charjabug,
	[SPECIES_VIKAVOLT] = gMonIcon_Vikavolt,
	[SPECIES_CRABRAWLER] = gMonIcon_Crabrawler,
	[SPECIES_CRABMINABL] = gMonIcon_Crabminabl,
	[SPECIES_ORICORIO] = gMonIcon_Oricorio,
	[SPECIES_CUTIEFLY] = gMonIcon_Cutiefly,
	[SPECIES_RIBOMBEE] = gMonIcon_Ribombee,
	[SPECIES_ROCKRUFF] = gMonIcon_Rockruff,
	[SPECIES_LYCANROC] = gMonIcon_Lycanroc,
	[SPECIES_WISHIWASHI] = gMonIcon_Wishiwashi,
	[SPECIES_MAREANIE] = gMonIcon_Mareanie,
	[SPECIES_TOXAPEX] = gMonIcon_Toxapex,
	[SPECIES_MUDBRAY] = gMonIcon_Mudbray,
	[SPECIES_MUDSDALE] = gMonIcon_Mudsdale,
	[SPECIES_DEWPIDER] = gMonIcon_Dewpider,
	[SPECIES_ARAQUANID] = gMonIcon_Araquanid,
	[SPECIES_FOMANTIS] = gMonIcon_Fomantis,
	[SPECIES_LURANTIS] = gMonIcon_Lurantis,
	[SPECIES_MORELULL] = gMonIcon_Morelull,
	[SPECIES_SHIINOTIC] = gMonIcon_Shiinotic,
	[SPECIES_SALANDIT] = gMonIcon_Salandit,
	[SPECIES_SALAZZLE] = gMonIcon_Salazzle,
	[SPECIES_STUFFUL] = gMonIcon_Stufful,
	[SPECIES_BEWEAR] = gMonIcon_Bewear,
	[SPECIES_BOUNSWEET] = gMonIcon_Bounsweet,
	[SPECIES_STEENEE] = gMonIcon_Steenee,
	[SPECIES_TSAREENA] = gMonIcon_Tsareena,
	[SPECIES_COMFEY] = gMonIcon_Comfey,
	[SPECIES_ORANGURU] = gMonIcon_Oranguru,
	[SPECIES_PASSIMIAN] = gMonIcon_Passimian,
	[SPECIES_WIMPOD] = gMonIcon_Wimpod,
	[SPECIES_GOLISOPOD] = gMonIcon_Golisopod,
	[SPECIES_SANDYGAST] = gMonIcon_Sandygast,
	[SPECIES_PALOSSAND] = gMonIcon_Palossand,
	[SPECIES_PYUKUMUKU] = gMonIcon_Pyukumuku,
	[SPECIES_TYPENULL] = gMonIcon_TypeNull,
	[SPECIES_SILVALLY] = gMonIcon_Silvally,
	[SPECIES_MINIOR] = gMonIcon_Minior,
	[SPECIES_KOMALA] = gMonIcon_Komala,
	[SPECIES_TURTONATOR] = gMonIcon_Turtonator,
	[SPECIES_TOGEDEMARU] = gMonIcon_Togedemaru,
	[SPECIES_MIMIKYU] = gMonIcon_Mimikyu,
	[SPECIES_BRUXISH] = gMonIcon_Bruxish,
	[SPECIES_DRAMPA] = gMonIcon_Drampa,
	[SPECIES_DHELMISE] = gMonIcon_Dhelmise,
	[SPECIES_JANGMOO] = gMonIcon_Jangmoo,
	[SPECIES_HAKAMOO] = gMonIcon_Hakamoo,
	[SPECIES_KOMMOO] = gMonIcon_Kommoo,
	[SPECIES_TAPUKOKO] = gMonIcon_TapuKoko,
	[SPECIES_TAPULELE] = gMonIcon_TapuLele,
	[SPECIES_TAPUBULU] = gMonIcon_TapuBulu,
	[SPECIES_TAPUFINI] = gMonIcon_TapuFini,
	[SPECIES_COSMOG] = gMonIcon_Cosmog,
	[SPECIES_COSMOEM] = gMonIcon_Cosmoem,
	[SPECIES_SOLGALEO] = gMonIcon_Solgaleo,
	[SPECIES_LUNALA] = gMonIcon_Lunala,
	[SPECIES_NIHILEGO] = gMonIcon_Nihilego,
	[SPECIES_BUZZWOLE] = gMonIcon_Buzzwole,
	[SPECIES_PHEROMOSA] = gMonIcon_Pheromosa,
	[SPECIES_XURKITREE] = gMonIcon_Xurkitree,
	[SPECIES_CELESTEELA] = gMonIcon_Celesteela,
	[SPECIES_KARTANA] = gMonIcon_Kartana,
	[SPECIES_GUZZLORD] = gMonIcon_Guzzlord,
	[SPECIES_NECROZMA] = gMonIcon_Necrozma,
	[SPECIES_MAGEARNA] = gMonIcon_Magearna,
	[SPECIES_MARSHADOW] = gMonIcon_Marshadow,
	[SPECIES_POIPOLE] = gMonIcon_Poipole,
	[SPECIES_NAGANADEL] = gMonIcon_Naganadel,
	[SPECIES_STAKATAKA] = gMonIcon_Stakataka,
	[SPECIES_BLACEPHALN] = gMonIcon_Blacephaln,
	[SPECIES_ZERAORA] = gMonIcon_Zeraora,
	[SPECIES_MELTAN] = gMonIcon_Meltan,
	[SPECIES_MELMETAL] = gMonIcon_Melmetal,
	[SPECIES_GROOKEY] = gMonIcon_Grookey,
	[SPECIES_THWACKEY] = gMonIcon_Thwackey,
	[SPECIES_RILLABOOM] = gMonIcon_Rillaboom,
	[SPECIES_SCORBUNNY] = gMonIcon_Scorbunny,
	[SPECIES_RABOOT] = gMonIcon_Raboot,
	[SPECIES_CINDERACE] = gMonIcon_Cinderace,
	[SPECIES_SOBBLE] = gMonIcon_Sobble,
	[SPECIES_DRIZZILE] = gMonIcon_Drizzile,
	[SPECIES_INTELEON] = gMonIcon_Inteleon,
	[SPECIES_SKWOVET] = gMonIcon_Skwovet,
	[SPECIES_GREEDENT] = gMonIcon_Greedent,
	[SPECIES_ROOKIDEE] = gMonIcon_Rookidee,
	[SPECIES_CORVISQUIR] = gMonIcon_Corvisquir,
	[SPECIES_CORVIKNIGH] = gMonIcon_Corviknigh,
	[SPECIES_BLIPBUG] = gMonIcon_Blipbug,
	[SPECIES_DOTTLER] = gMonIcon_Dottler,
	[SPECIES_ORBEETLE] = gMonIcon_Orbeetle,
	[SPECIES_NICKIT] = gMonIcon_Nickit,
	[SPECIES_THIEVUL] = gMonIcon_Thievul,
	[SPECIES_GOSSIFLEUR] = gMonIcon_Gossifleur,
	[SPECIES_ELDEGOSS] = gMonIcon_Eldegoss,
	[SPECIES_WOOLOO] = gMonIcon_Wooloo,
	[SPECIES_DUBWOOL] = gMonIcon_Dubwool,
	[SPECIES_CHEWTLE] = gMonIcon_Chewtle,
	[SPECIES_DREDNAW] = gMonIcon_Drednaw,
	[SPECIES_YAMPER] = gMonIcon_Yamper,
	[SPECIES_BOLTUND] = gMonIcon_Boltund,
	[SPECIES_ROLYCOLY] = gMonIcon_Rolycoly,
	[SPECIES_CARKOL] = gMonIcon_Carkol,
	[SPECIES_COALOSSAL] = gMonIcon_Coalossal,
	[SPECIES_APPLIN] = gMonIcon_Applin,
	[SPECIES_FLAPPLE] = gMonIcon_Flapple,
	[SPECIES_APPLETUN] = gMonIcon_Appletun,
	[SPECIES_SILICOBRA] = gMonIcon_Silicobra,
	[SPECIES_SANDACONDA] = gMonIcon_Sandaconda,
	[SPECIES_CRAMORANT] = gMonIcon_Cramorant,
	[SPECIES_ARROKUDA] = gMonIcon_Arrokuda,
	[SPECIES_BARRASKEWD] = gMonIcon_Barraskewd,
	[SPECIES_TOXEL] = gMonIcon_Toxel,
	[SPECIES_TOXTRICITY] = gMonIcon_Toxtricity,
	[SPECIES_SIZZLIPEDE] = gMonIcon_Sizzlipede,
	[SPECIES_CENTISKORC] = gMonIcon_Centiskorc,
	[SPECIES_CLOBBOPUS] = gMonIcon_Clobbopus,
	[SPECIES_GRAPPLOCT] = gMonIcon_Grapploct,
	[SPECIES_SINISTEA] = gMonIcon_Sinistea,
	[SPECIES_POLTEAGEIS] = gMonIcon_Polteageis,
	[SPECIES_HATENNA] = gMonIcon_Hatenna,
	[SPECIES_HATTREM] = gMonIcon_Hattrem,
	[SPECIES_HATTERENE] = gMonIcon_Hatterene,
	[SPECIES_IMPIDIMP] = gMonIcon_Impidimp,
	[SPECIES_MORGREM] = gMonIcon_Morgrem,
	[SPECIES_GRIMMSNARL] = gMonIcon_Grimmsnarl,
	[SPECIES_OBSTAGOON] = gMonIcon_Obstagoon,
	[SPECIES_PERRSERKER] = gMonIcon_Perrserker,
	[SPECIES_CURSOLA] = gMonIcon_Cursola,
	[SPECIES_SIRFETCHD] = gMonIcon_Sirfetchd,
	[SPECIES_MRRIME] = gMonIcon_MrRime,
	[SPECIES_RUNERIGUS] = gMonIcon_Runerigus,
	[SPECIES_MILCERY] = gMonIcon_Milcery,
	[SPECIES_ALCREMIE] = gMonIcon_Alcremie,
	[SPECIES_FALINKS] = gMonIcon_Falinks,
	[SPECIES_PINCURCHIN] = gMonIcon_Pincurchin,
	[SPECIES_SNOM] = gMonIcon_Snom,
	[SPECIES_FROSMOTH] = gMonIcon_Frosmoth,
	[SPECIES_STONJOURNE] = gMonIcon_Stonjourne,
	[SPECIES_EISCUE] = gMonIcon_Eiscue,
	[SPECIES_INDEEDEE] = gMonIcon_Indeedee,
	[SPECIES_MORPEKO] = gMonIcon_Morpeko,
	[SPECIES_CUFANT] = gMonIcon_Cufant,
	[SPECIES_COPPERAJAH] = gMonIcon_Copperajah,
	[SPECIES_DRACOZOLT] = gMonIcon_Dracozolt,
	[SPECIES_ARCTOZOLT] = gMonIcon_Arctozolt,
	[SPECIES_DRACOVISH] = gMonIcon_Dracovish,
	[SPECIES_ARCTOVISH] = gMonIcon_Arctovish,
	[SPECIES_DURALUDON] = gMonIcon_Duraludon,
	[SPECIES_DREEPY] = gMonIcon_Dreepy,
	[SPECIES_DRAKLOAK] = gMonIcon_Drakloak,
	[SPECIES_DRAGAPULT] = gMonIcon_Dragapult,
	[SPECIES_ZACIAN] = gMonIcon_Zacian,
	[SPECIES_ZAMAZENTA] = gMonIcon_Zamazenta,
	[SPECIES_ETERNATUS] = gMonIcon_Eternatus,
	[SPECIES_KUBFU] = gMonIcon_Kubfu,
	[SPECIES_URSHIFU] = gMonIcon_Urshifu,
	[SPECIES_ZARUDE] = gMonIcon_Zarude,
	[SPECIES_REGIELEKI] = gMonIcon_Regieleki,
	[SPECIES_REGIDRAGO] = gMonIcon_Regidrago,
	[SPECIES_GLASTRIER] = gMonIcon_Glastrier,
	[SPECIES_SPECTRIER] = gMonIcon_Spectrier,
	[SPECIES_CALYREX] = gMonIcon_Calyrex,
	[SPECIES_WYRDEER] = gMonIcon_Wyrdeer,
	[SPECIES_KLEAVOR] = gMonIcon_Kleavor,
	[SPECIES_URSALUNA] = gMonIcon_Ursaluna,
	[SPECIES_BSCULEGION] = gMonIcon_Bsculegion,
	[SPECIES_SNEASLER] = gMonIcon_Sneasler,
	[SPECIES_OVERQWIL] = gMonIcon_Overqwil,
	[SPECIES_ENAMORUS] = gMonIcon_Enamorus,
	[SPECIES_VENUSAUR_2] = gMonIcon_Venusaur2,
	[SPECIES_CHARIZARD_2] = gMonIcon_Charizard2,
	[SPECIES_CHARIZARD_3] = gMonIcon_Charizard3,
	[SPECIES_BLASTOISE_2] = gMonIcon_Blastoise2,
	[SPECIES_BEEDRILL_2] = gMonIcon_Beedrill2,
	[SPECIES_PIDGEOT_2] = gMonIcon_Pidgeot2,
	[SPECIES_ALAKAZAM_2] = gMonIcon_Alakazam2,
	[SPECIES_SLOWBRO_2] = gMonIcon_Slowbro2,
	[SPECIES_GENGAR_2] = gMonIcon_Gengar2,
	[SPECIES_KANGASKHAN_2] = gMonIcon_Kangaskhan2,
	[SPECIES_PINSIR_2] = gMonIcon_Pinsir2,
	[SPECIES_GYARADOS_2] = gMonIcon_Gyarados2,
	[SPECIES_AERODACTYL_2] = gMonIcon_Aerodactyl2,
	[SPECIES_MEWTWO_2] = gMonIcon_Mewtwo2,
	[SPECIES_MEWTWO_3] = gMonIcon_Mewtwo3,
	[SPECIES_AMPHAROS_2] = gMonIcon_Ampharos2,
	[SPECIES_STEELIX_2] = gMonIcon_Steelix2,
	[SPECIES_SCIZOR_2] = gMonIcon_Scizor2,
	[SPECIES_HERACROSS_2] = gMonIcon_Heracross2,
	[SPECIES_HOUNDOOM_2] = gMonIcon_Houndoom2,
	[SPECIES_TYRANITAR_2] = gMonIcon_Tyranitar2,
	[SPECIES_SCEPTILE_2] = gMonIcon_Sceptile2,
	[SPECIES_BLAZIKEN_2] = gMonIcon_Blaziken2,
	[SPECIES_SWAMPERT_2] = gMonIcon_Swampert2,
	[SPECIES_GARDEVOIR_2] = gMonIcon_Gardevoir2,
	[SPECIES_SABLEYE_2] = gMonIcon_Sableye2,
	[SPECIES_MAWILE_2] = gMonIcon_Mawile2,
	[SPECIES_AGGRON_2] = gMonIcon_Aggron2,
	[SPECIES_MEDICHAM_2] = gMonIcon_Medicham2,
	[SPECIES_MANECTRIC_2] = gMonIcon_Manectric2,
	[SPECIES_SHARPEDO_2] = gMonIcon_Sharpedo2,
	[SPECIES_CAMERUPT_2] = gMonIcon_Camerupt2,
	[SPECIES_ALTARIA_2] = gMonIcon_Altaria2,
	[SPECIES_BANETTE_2] = gMonIcon_Banette2,
	[SPECIES_ABSOL_2] = gMonIcon_Absol2,
	[SPECIES_GLALIE_2] = gMonIcon_Glalie2,
	[SPECIES_SALAMENCE_2] = gMonIcon_Salamence2,
	[SPECIES_METAGROSS_2] = gMonIcon_Metagross2,
	[SPECIES_LATIAS_2] = gMonIcon_Latias2,
	[SPECIES_LATIOS_2] = gMonIcon_Latios2,
	[SPECIES_LOPUNNY_2] = gMonIcon_Lopunny2,
	[SPECIES_GARCHOMP_2] = gMonIcon_Garchomp2,
	[SPECIES_LUCARIO_2] = gMonIcon_Lucario2,
	[SPECIES_ABOMASNOW_2] = gMonIcon_Abomasnow2,
	[SPECIES_GALLADE_2] = gMonIcon_Gallade2,
	[SPECIES_AUDINO_2] = gMonIcon_Audino2,
	[SPECIES_DIANCIE_2] = gMonIcon_Diancie2,
	[SPECIES_RAYQUAZA_2] = gMonIcon_Rayquaza2,
	[SPECIES_KYOGRE_2] = gMonIcon_Kyogre2,
	[SPECIES_GROUDON_2] = gMonIcon_Groudon2,
	[SPECIES_RATTATA_2] = gMonIcon_Rattata2,
	[SPECIES_RATICATE_2] = gMonIcon_Raticate2,
	[SPECIES_RAICHU_2] = gMonIcon_Raichu2,
	[SPECIES_SANDSHREW_2] = gMonIcon_Sandshrew2,
	[SPECIES_SANDSLASH_2] = gMonIcon_Sandslash2,
	[SPECIES_VULPIX_2] = gMonIcon_Vulpix2,
	[SPECIES_NINETALES_2] = gMonIcon_Ninetales2,
	[SPECIES_DIGLETT_2] = gMonIcon_Diglett2,
	[SPECIES_DUGTRIO_2] = gMonIcon_Dugtrio2,
	[SPECIES_MEOWTH_2] = gMonIcon_Meowth2,
	[SPECIES_PERSIAN_2] = gMonIcon_Persian2,
	[SPECIES_GEODUDE_2] = gMonIcon_Geodude2,
	[SPECIES_GRAVELER_2] = gMonIcon_Graveler2,
	[SPECIES_GOLEM_2] = gMonIcon_Golem2,
	[SPECIES_GRIMER_2] = gMonIcon_Grimer2,
	[SPECIES_MUK_2] = gMonIcon_Muk2,
	[SPECIES_EXEGGUTOR_2] = gMonIcon_Exeggutor2,
	[SPECIES_MAROWAK_2] = gMonIcon_Marowak2,
	[SPECIES_MEOWTH_3] = gMonIcon_Meowth3,
	[SPECIES_PONYTA_2] = gMonIcon_Ponyta2,
	[SPECIES_RAPIDASH_2] = gMonIcon_Rapidash2,
	[SPECIES_SLOWPOKE_2] = gMonIcon_Slowpoke2,
	[SPECIES_SLOWBRO_3] = gMonIcon_Slowbro3,
	[SPECIES_FARFETCHD_2] = gMonIcon_Farfetchd2,
	[SPECIES_WEEZING_2] = gMonIcon_Weezing2,
	[SPECIES_MRMIME_2] = gMonIcon_MrMime2,
	[SPECIES_ARTICUNO_2] = gMonIcon_Articuno2,
	[SPECIES_ZAPDOS_2] = gMonIcon_Zapdos2,
	[SPECIES_MOLTRES_2] = gMonIcon_Moltres2,
	[SPECIES_SLOWKING_2] = gMonIcon_Slowking2,
	[SPECIES_CORSOLA_2] = gMonIcon_Corsola2,
	[SPECIES_ZIGZAGOON_2] = gMonIcon_Zigzagoon2,
	[SPECIES_LINOONE_2] = gMonIcon_Linoone2,
	[SPECIES_DARUMAKA_2] = gMonIcon_Darumaka2,
	[SPECIES_DARMANITAN_2] = gMonIcon_Darmanitan2,
	[SPECIES_YAMASK_2] = gMonIcon_Yamask2,
	[SPECIES_STUNFISK_2] = gMonIcon_Stunfisk2,
	[SPECIES_GROWLITHE_2] = gMonIcon_Growlithe2,
	[SPECIES_ARCANINE_2] = gMonIcon_Arcanine2,
	[SPECIES_VOLTORB_2] = gMonIcon_Voltorb2,
	[SPECIES_ELECTRODE_2] = gMonIcon_Electrode2,
	[SPECIES_TYPHLOSION_2] = gMonIcon_Typhlosion2,
	[SPECIES_QWILFISH_2] = gMonIcon_Qwilfish2,
	[SPECIES_SNEASEL_2] = gMonIcon_Sneasel2,
	[SPECIES_SAMUROTT_2] = gMonIcon_Samurott2,
	[SPECIES_LILLIGANT_2] = gMonIcon_Lilligant2,
	[SPECIES_ZORUA_2] = gMonIcon_Zorua2,
	[SPECIES_ZOROARK_2] = gMonIcon_Zoroark2,
	[SPECIES_BRAVIARY_2] = gMonIcon_Braviary2,
	[SPECIES_SLIGGOO_2] = gMonIcon_Sliggoo2,
	[SPECIES_GOODRA_2] = gMonIcon_Goodra2,
	[SPECIES_AVALUGG_2] = gMonIcon_Avalugg2,
	[SPECIES_DECIDUEYE_2] = gMonIcon_Decidueye2,
	[SPECIES_PIKACHU_2] = gMonIcon_Pikachu2,
	[SPECIES_PIKACHU_3] = gMonIcon_Pikachu3,
	[SPECIES_PIKACHU_4] = gMonIcon_Pikachu4,
	[SPECIES_PIKACHU_5] = gMonIcon_Pikachu5,
	[SPECIES_PIKACHU_6] = gMonIcon_Pikachu6,
	[SPECIES_PIKACHU_7] = gMonIcon_Pikachu7,
	[SPECIES_PIKACHU_8] = gMonIcon_Pikachu8,
	[SPECIES_PIKACHU_9] = gMonIcon_Pikachu9,
	[SPECIES_PIKACHU_10] = gMonIcon_Pikachu10,
	[SPECIES_PIKACHU_11] = gMonIcon_Pikachu11,
	[SPECIES_PIKACHU_12] = gMonIcon_Pikachu12,
	[SPECIES_PIKACHU_13] = gMonIcon_Pikachu13,
	[SPECIES_PIKACHU_14] = gMonIcon_Pikachu14,
	[SPECIES_PIKACHU_15] = gMonIcon_Pikachu15,
	[SPECIES_PICHU_2] = gMonIcon_Pichu2,
	[SPECIES_UNOWN_2] = gMonIcon_Unown2,
	[SPECIES_UNOWN_3] = gMonIcon_Unown3,
	[SPECIES_UNOWN_4] = gMonIcon_Unown4,
	[SPECIES_UNOWN_5] = gMonIcon_Unown5,
	[SPECIES_UNOWN_6] = gMonIcon_Unown6,
	[SPECIES_UNOWN_7] = gMonIcon_Unown7,
	[SPECIES_UNOWN_8] = gMonIcon_Unown8,
	[SPECIES_UNOWN_9] = gMonIcon_Unown9,
	[SPECIES_UNOWN_10] = gMonIcon_Unown10,
	[SPECIES_UNOWN_11] = gMonIcon_Unown11,
	[SPECIES_UNOWN_12] = gMonIcon_Unown12,
	[SPECIES_UNOWN_13] = gMonIcon_Unown13,
	[SPECIES_UNOWN_14] = gMonIcon_Unown14,
	[SPECIES_UNOWN_15] = gMonIcon_Unown15,
	[SPECIES_UNOWN_16] = gMonIcon_Unown16,
	[SPECIES_UNOWN_17] = gMonIcon_Unown17,
	[SPECIES_UNOWN_18] = gMonIcon_Unown18,
	[SPECIES_UNOWN_19] = gMonIcon_Unown19,
	[SPECIES_UNOWN_20] = gMonIcon_Unown20,
	[SPECIES_UNOWN_21] = gMonIcon_Unown21,
	[SPECIES_UNOWN_22] = gMonIcon_Unown22,
	[SPECIES_UNOWN_23] = gMonIcon_Unown23,
	[SPECIES_UNOWN_24] = gMonIcon_Unown24,
	[SPECIES_UNOWN_25] = gMonIcon_Unown25,
	[SPECIES_UNOWN_26] = gMonIcon_Unown26,
	[SPECIES_UNOWN_27] = gMonIcon_Unown27,
	[SPECIES_UNOWN_28] = gMonIcon_Unown28,
	[SPECIES_CASTFORM_2] = gMonIcon_Castform2,
	[SPECIES_CASTFORM_3] = gMonIcon_Castform3,
	[SPECIES_CASTFORM_4] = gMonIcon_Castform4,
	[SPECIES_DEOXYS_2] = gMonIcon_Deoxys2,
	[SPECIES_DEOXYS_3] = gMonIcon_Deoxys3,
	[SPECIES_DEOXYS_4] = gMonIcon_Deoxys4,
	[SPECIES_BURMY_2] = gMonIcon_Burmy2,
	[SPECIES_BURMY_3] = gMonIcon_Burmy3,
	[SPECIES_WORMADAM_2] = gMonIcon_Wormadam2,
	[SPECIES_WORMADAM_3] = gMonIcon_Wormadam3,
	[SPECIES_CHERRIM_2] = gMonIcon_Cherrim2,
	[SPECIES_SHELLOS_2] = gMonIcon_Shellos2,
	[SPECIES_GASTRODON_2] = gMonIcon_Gastrodon2,
	[SPECIES_ROTOM_2] = gMonIcon_Rotom2,
	[SPECIES_ROTOM_3] = gMonIcon_Rotom3,
	[SPECIES_ROTOM_4] = gMonIcon_Rotom4,
	[SPECIES_ROTOM_5] = gMonIcon_Rotom5,
	[SPECIES_ROTOM_6] = gMonIcon_Rotom6,
	[SPECIES_DIALGA_2] = gMonIcon_Dialga2,
	[SPECIES_PALKIA_2] = gMonIcon_Palkia2,
	[SPECIES_GIRATINA_2] = gMonIcon_Giratina2,
	[SPECIES_SHAYMIN_2] = gMonIcon_Shaymin2,
	[SPECIES_ARCEUS_2] = gMonIcon_Arceus2,
	[SPECIES_ARCEUS_3] = gMonIcon_Arceus3,
	[SPECIES_ARCEUS_4] = gMonIcon_Arceus4,
	[SPECIES_ARCEUS_5] = gMonIcon_Arceus5,
	[SPECIES_ARCEUS_6] = gMonIcon_Arceus6,
	[SPECIES_ARCEUS_7] = gMonIcon_Arceus7,
	[SPECIES_ARCEUS_8] = gMonIcon_Arceus8,
	[SPECIES_ARCEUS_9] = gMonIcon_Arceus9,
	[SPECIES_ARCEUS_10] = gMonIcon_Arceus10,
	[SPECIES_ARCEUS_11] = gMonIcon_Arceus11,
	[SPECIES_ARCEUS_12] = gMonIcon_Arceus12,
	[SPECIES_ARCEUS_13] = gMonIcon_Arceus13,
	[SPECIES_ARCEUS_14] = gMonIcon_Arceus14,
	[SPECIES_ARCEUS_15] = gMonIcon_Arceus15,
	[SPECIES_ARCEUS_16] = gMonIcon_Arceus16,
	[SPECIES_ARCEUS_17] = gMonIcon_Arceus17,
	[SPECIES_ARCEUS_18] = gMonIcon_Arceus18,
	[SPECIES_BASCULIN_2] = gMonIcon_Basculin2,
	[SPECIES_BASCULIN_3] = gMonIcon_Basculin3,
	[SPECIES_DARMANITAN_3] = gMonIcon_Darmanitan3,
	[SPECIES_DARMANITAN_4] = gMonIcon_Darmanitan4,
	[SPECIES_DEERLING_2] = gMonIcon_Deerling2,
	[SPECIES_DEERLING_3] = gMonIcon_Deerling3,
	[SPECIES_DEERLING_4] = gMonIcon_Deerling4,
	[SPECIES_SAWSBUCK_2] = gMonIcon_Sawsbuck2,
	[SPECIES_SAWSBUCK_3] = gMonIcon_Sawsbuck3,
	[SPECIES_SAWSBUCK_4] = gMonIcon_Sawsbuck4,
	[SPECIES_TORNADUS_2] = gMonIcon_Tornadus2,
	[SPECIES_THUNDURUS_2] = gMonIcon_Thundurus2,
	[SPECIES_LANDORUS_2] = gMonIcon_Landorus2,
	[SPECIES_ENAMORUS_2] = gMonIcon_Enamorus2,
	[SPECIES_KYUREM_2] = gMonIcon_Kyurem2,
	[SPECIES_KYUREM_3] = gMonIcon_Kyurem3,
	[SPECIES_KELDEO_2] = gMonIcon_Keldeo2,
	[SPECIES_MELOETTA_2] = gMonIcon_Meloetta2,
	[SPECIES_GENESECT_2] = gMonIcon_Genesect2,
	[SPECIES_GENESECT_3] = gMonIcon_Genesect3,
	[SPECIES_GENESECT_4] = gMonIcon_Genesect4,
	[SPECIES_GENESECT_5] = gMonIcon_Genesect5,
	[SPECIES_GRENINJA_2] = gMonIcon_Greninja2,
	[SPECIES_GRENINJA_3] = gMonIcon_Greninja3,
	[SPECIES_VIVILLON_2] = gMonIcon_Vivillon2,
	[SPECIES_VIVILLON_3] = gMonIcon_Vivillon3,
	[SPECIES_VIVILLON_4] = gMonIcon_Vivillon4,
	[SPECIES_VIVILLON_5] = gMonIcon_Vivillon5,
	[SPECIES_VIVILLON_6] = gMonIcon_Vivillon6,
	[SPECIES_VIVILLON_7] = gMonIcon_Vivillon7,
	[SPECIES_VIVILLON_8] = gMonIcon_Vivillon8,
	[SPECIES_VIVILLON_9] = gMonIcon_Vivillon9,
	[SPECIES_VIVILLON_10] = gMonIcon_Vivillon10,
	[SPECIES_VIVILLON_11] = gMonIcon_Vivillon11,
	[SPECIES_VIVILLON_12] = gMonIcon_Vivillon12,
	[SPECIES_VIVILLON_13] = gMonIcon_Vivillon13,
	[SPECIES_VIVILLON_14] = gMonIcon_Vivillon14,
	[SPECIES_VIVILLON_15] = gMonIcon_Vivillon15,
	[SPECIES_VIVILLON_16] = gMonIcon_Vivillon16,
	[SPECIES_VIVILLON_17] = gMonIcon_Vivillon17,
	[SPECIES_VIVILLON_18] = gMonIcon_Vivillon18,
	[SPECIES_VIVILLON_19] = gMonIcon_Vivillon19,
	[SPECIES_VIVILLON_20] = gMonIcon_Vivillon20,
	[SPECIES_FLABEBE_2] = gMonIcon_Flabebe2,
	[SPECIES_FLABEBE_3] = gMonIcon_Flabebe3,
	[SPECIES_FLABEBE_4] = gMonIcon_Flabebe4,
	[SPECIES_FLABEBE_5] = gMonIcon_Flabebe5,
	[SPECIES_FLOETTE_2] = gMonIcon_Floette2,
	[SPECIES_FLOETTE_3] = gMonIcon_Floette3,
	[SPECIES_FLOETTE_4] = gMonIcon_Floette4,
	[SPECIES_FLOETTE_5] = gMonIcon_Floette5,
	[SPECIES_FLOETTE_6] = gMonIcon_Floette6,
	[SPECIES_FLORGES_2] = gMonIcon_Florges2,
	[SPECIES_FLORGES_3] = gMonIcon_Florges3,
	[SPECIES_FLORGES_4] = gMonIcon_Florges4,
	[SPECIES_FLORGES_5] = gMonIcon_Florges5,
	[SPECIES_FURFROU_2] = gMonIcon_Furfrou2,
	[SPECIES_FURFROU_3] = gMonIcon_Furfrou3,
	[SPECIES_FURFROU_4] = gMonIcon_Furfrou4,
	[SPECIES_FURFROU_5] = gMonIcon_Furfrou5,
	[SPECIES_FURFROU_6] = gMonIcon_Furfrou6,
	[SPECIES_FURFROU_7] = gMonIcon_Furfrou7,
	[SPECIES_FURFROU_8] = gMonIcon_Furfrou8,
	[SPECIES_FURFROU_9] = gMonIcon_Furfrou9,
	[SPECIES_FURFROU_10] = gMonIcon_Furfrou10,
	[SPECIES_MEOWSTIC_2] = gMonIcon_Meowstic2,
	[SPECIES_AEGISLASH_2] = gMonIcon_Aegislash2,
	[SPECIES_PUMPKABOO_2] = gMonIcon_Pumpkaboo2,
	[SPECIES_PUMPKABOO_3] = gMonIcon_Pumpkaboo3,
	[SPECIES_PUMPKABOO_4] = gMonIcon_Pumpkaboo4,
	[SPECIES_GOURGEIST_2] = gMonIcon_Gourgeist2,
	[SPECIES_GOURGEIST_3] = gMonIcon_Gourgeist3,
	[SPECIES_GOURGEIST_4] = gMonIcon_Gourgeist4,
	[SPECIES_XERNEAS_2] = gMonIcon_Xerneas2,
	[SPECIES_ZYGARDE_2] = gMonIcon_Zygarde2,
	[SPECIES_ZYGARDE_3] = gMonIcon_Zygarde3,
	[SPECIES_ZYGARDE_4] = gMonIcon_Zygarde4,
	[SPECIES_ZYGARDE_5] = gMonIcon_Zygarde5,
	[SPECIES_HOOPA_2] = gMonIcon_Hoopa2,
	[SPECIES_ORICORIO_2] = gMonIcon_Oricorio2,
	[SPECIES_ORICORIO_3] = gMonIcon_Oricorio3,
	[SPECIES_ORICORIO_4] = gMonIcon_Oricorio4,
	[SPECIES_ROCKRUFF_2] = gMonIcon_Rockruff2,
	[SPECIES_LYCANROC_2] = gMonIcon_Lycanroc2,
	[SPECIES_LYCANROC_3] = gMonIcon_Lycanroc3,
	[SPECIES_WISHIWASHI_2] = gMonIcon_Wishiwashi2,
	[SPECIES_SILVALLY_2] = gMonIcon_Silvally2,
	[SPECIES_SILVALLY_3] = gMonIcon_Silvally3,
	[SPECIES_SILVALLY_4] = gMonIcon_Silvally4,
	[SPECIES_SILVALLY_5] = gMonIcon_Silvally5,
	[SPECIES_SILVALLY_6] = gMonIcon_Silvally6,
	[SPECIES_SILVALLY_7] = gMonIcon_Silvally7,
	[SPECIES_SILVALLY_8] = gMonIcon_Silvally8,
	[SPECIES_SILVALLY_9] = gMonIcon_Silvally9,
	[SPECIES_SILVALLY_10] = gMonIcon_Silvally10,
	[SPECIES_SILVALLY_11] = gMonIcon_Silvally11,
	[SPECIES_SILVALLY_12] = gMonIcon_Silvally12,
	[SPECIES_SILVALLY_13] = gMonIcon_Silvally13,
	[SPECIES_SILVALLY_14] = gMonIcon_Silvally14,
	[SPECIES_SILVALLY_15] = gMonIcon_Silvally15,
	[SPECIES_SILVALLY_16] = gMonIcon_Silvally16,
	[SPECIES_SILVALLY_17] = gMonIcon_Silvally17,
	[SPECIES_SILVALLY_18] = gMonIcon_Silvally18,
	[SPECIES_MINIOR_2] = gMonIcon_Minior2,
	[SPECIES_MINIOR_3] = gMonIcon_Minior3,
	[SPECIES_MINIOR_4] = gMonIcon_Minior4,
	[SPECIES_MINIOR_5] = gMonIcon_Minior5,
	[SPECIES_MINIOR_6] = gMonIcon_Minior6,
	[SPECIES_MINIOR_7] = gMonIcon_Minior7,
	[SPECIES_MINIOR_8] = gMonIcon_Minior8,
	[SPECIES_MINIOR_9] = gMonIcon_Minior9,
	[SPECIES_MINIOR_10] = gMonIcon_Minior10,
	[SPECIES_MINIOR_11] = gMonIcon_Minior11,
	[SPECIES_MINIOR_12] = gMonIcon_Minior12,
	[SPECIES_MINIOR_13] = gMonIcon_Minior13,
	[SPECIES_MINIOR_14] = gMonIcon_Minior14,
	[SPECIES_MIMIKYU_2] = gMonIcon_Mimikyu2,
	[SPECIES_NECROZMA_2] = gMonIcon_Necrozma2,
	[SPECIES_NECROZMA_3] = gMonIcon_Necrozma3,
	[SPECIES_NECROZMA_4] = gMonIcon_Necrozma4,
	[SPECIES_MAGEARNA_2] = gMonIcon_Magearna2,
	[SPECIES_CRAMORANT_2] = gMonIcon_Cramorant2,
	[SPECIES_CRAMORANT_3] = gMonIcon_Cramorant3,
	[SPECIES_TOXTRICITY_2] = gMonIcon_Toxtricity2,
	[SPECIES_SINISTEA_2] = gMonIcon_Sinistea2,
	[SPECIES_POLTEAGEIS_2] = gMonIcon_Polteageis2,
	[SPECIES_ALCREMIE_2] = gMonIcon_Alcremie2,
	[SPECIES_ALCREMIE_3] = gMonIcon_Alcremie3,
	[SPECIES_ALCREMIE_4] = gMonIcon_Alcremie4,
	[SPECIES_ALCREMIE_5] = gMonIcon_Alcremie5,
	[SPECIES_ALCREMIE_6] = gMonIcon_Alcremie6,
	[SPECIES_ALCREMIE_7] = gMonIcon_Alcremie7,
	[SPECIES_ALCREMIE_8] = gMonIcon_Alcremie8,
	[SPECIES_ALCREMIE_9] = gMonIcon_Alcremie9,
	[SPECIES_EISCUE_2] = gMonIcon_Eiscue2,
	[SPECIES_INDEEDEE_2] = gMonIcon_Indeedee2,
	[SPECIES_MORPEKO_2] = gMonIcon_Morpeko2,
	[SPECIES_ZACIAN_2] = gMonIcon_Zacian2,
	[SPECIES_ZAMAZENTA_2] = gMonIcon_Zamazenta2,
	[SPECIES_ETERNATUS_2] = gMonIcon_Eternatus2,
	[SPECIES_URSHIFU_2] = gMonIcon_Urshifu2,
	[SPECIES_ZARUDE_2] = gMonIcon_Zarude2,
	[SPECIES_CALYREX_2] = gMonIcon_Calyrex2,
	[SPECIES_CALYREX_3] = gMonIcon_Calyrex3,
	[SPECIES_BSCULEGION_2] = gMonIcon_Bsculegion2,
	[SPECIES_ALCREMIE_10] = gMonIcon_Alcremie10,
	[SPECIES_ALCREMIE_11] = gMonIcon_Alcremie11,
	[SPECIES_ALCREMIE_12] = gMonIcon_Alcremie12,
	[SPECIES_ALCREMIE_13] = gMonIcon_Alcremie13,
	[SPECIES_ALCREMIE_14] = gMonIcon_Alcremie14,
	[SPECIES_ALCREMIE_15] = gMonIcon_Alcremie15,
	[SPECIES_ALCREMIE_16] = gMonIcon_Alcremie16,
	[SPECIES_ALCREMIE_17] = gMonIcon_Alcremie17,
	[SPECIES_ALCREMIE_18] = gMonIcon_Alcremie18,
	[SPECIES_ALCREMIE_19] = gMonIcon_Alcremie19,
	[SPECIES_ALCREMIE_20] = gMonIcon_Alcremie20,
	[SPECIES_ALCREMIE_21] = gMonIcon_Alcremie21,
	[SPECIES_ALCREMIE_22] = gMonIcon_Alcremie22,
	[SPECIES_ALCREMIE_23] = gMonIcon_Alcremie23,
	[SPECIES_ALCREMIE_24] = gMonIcon_Alcremie24,
	[SPECIES_ALCREMIE_25] = gMonIcon_Alcremie25,
	[SPECIES_ALCREMIE_26] = gMonIcon_Alcremie26,
	[SPECIES_ALCREMIE_27] = gMonIcon_Alcremie27,
	[SPECIES_ALCREMIE_28] = gMonIcon_Alcremie28,
	[SPECIES_ALCREMIE_29] = gMonIcon_Alcremie29,
	[SPECIES_ALCREMIE_30] = gMonIcon_Alcremie30,
	[SPECIES_ALCREMIE_31] = gMonIcon_Alcremie31,
	[SPECIES_ALCREMIE_32] = gMonIcon_Alcremie32,
	[SPECIES_ALCREMIE_33] = gMonIcon_Alcremie33,
	[SPECIES_ALCREMIE_34] = gMonIcon_Alcremie34,
	[SPECIES_ALCREMIE_35] = gMonIcon_Alcremie35,
	[SPECIES_ALCREMIE_36] = gMonIcon_Alcremie36,
	[SPECIES_ALCREMIE_37] = gMonIcon_Alcremie37,
	[SPECIES_ALCREMIE_38] = gMonIcon_Alcremie38,
	[SPECIES_ALCREMIE_39] = gMonIcon_Alcremie39,
	[SPECIES_ALCREMIE_40] = gMonIcon_Alcremie40,
	[SPECIES_ALCREMIE_41] = gMonIcon_Alcremie41,
	[SPECIES_ALCREMIE_42] = gMonIcon_Alcremie42,
	[SPECIES_ALCREMIE_43] = gMonIcon_Alcremie43,
	[SPECIES_ALCREMIE_44] = gMonIcon_Alcremie44,
	[SPECIES_ALCREMIE_45] = gMonIcon_Alcremie45,
	[SPECIES_ALCREMIE_46] = gMonIcon_Alcremie46,
	[SPECIES_ALCREMIE_47] = gMonIcon_Alcremie47,
	[SPECIES_ALCREMIE_48] = gMonIcon_Alcremie48,
	[SPECIES_ALCREMIE_49] = gMonIcon_Alcremie49,
	[SPECIES_ALCREMIE_50] = gMonIcon_Alcremie50,
	[SPECIES_ALCREMIE_51] = gMonIcon_Alcremie51,
	[SPECIES_ALCREMIE_52] = gMonIcon_Alcremie52,
	[SPECIES_ALCREMIE_53] = gMonIcon_Alcremie53,
	[SPECIES_ALCREMIE_54] = gMonIcon_Alcremie54,
	[SPECIES_ALCREMIE_55] = gMonIcon_Alcremie55,
	[SPECIES_ALCREMIE_56] = gMonIcon_Alcremie56,
	[SPECIES_ALCREMIE_57] = gMonIcon_Alcremie57,
	[SPECIES_ALCREMIE_58] = gMonIcon_Alcremie58,
	[SPECIES_ALCREMIE_59] = gMonIcon_Alcremie59,
	[SPECIES_ALCREMIE_60] = gMonIcon_Alcremie60,
	[SPECIES_ALCREMIE_61] = gMonIcon_Alcremie61,
	[SPECIES_ALCREMIE_62] = gMonIcon_Alcremie62,
	[SPECIES_ALCREMIE_63] = gMonIcon_Alcremie63,
	[SPECIES_SPRIGATITO] = gMonIcon_Sprigatito,
	[SPECIES_FLORAGATO] = gMonIcon_Floragato,
	[SPECIES_MEOWSCARAD] = gMonIcon_Meowscarad,
	[SPECIES_FUECOCO] = gMonIcon_Fuecoco,
	[SPECIES_CROCALOR] = gMonIcon_Crocalor,
	[SPECIES_SKELEDIRGE] = gMonIcon_Skeledirge,
	[SPECIES_QUAXLY] = gMonIcon_Quaxly,
	[SPECIES_QUAXWELL] = gMonIcon_Quaxwell,
	[SPECIES_QUAQUAVAL] = gMonIcon_Quaquaval,
	[SPECIES_LECHONK] = gMonIcon_Lechonk,
	[SPECIES_OINKOLOGNE] = gMonIcon_Oinkologne,
	[SPECIES_OINKOLOGNE_2] = gMonIcon_Oinkologne2,
	[SPECIES_TAROUNTULA] = gMonIcon_Tarountula,
	[SPECIES_SPIDOPS] = gMonIcon_Spidops,
	[SPECIES_NYMBLE] = gMonIcon_Nymble,
	[SPECIES_LOKIX] = gMonIcon_Lokix,
	[SPECIES_PAWMI] = gMonIcon_Pawmi,
	[SPECIES_PAWMO] = gMonIcon_Pawmo,
	[SPECIES_PAWMOT] = gMonIcon_Pawmot,
	[SPECIES_TANDEMAUS] = gMonIcon_Tandemaus,
	[SPECIES_MAUSHOLD] = gMonIcon_Maushold,
	[SPECIES_MAUSHOLD_2] = gMonIcon_Maushold2,
	[SPECIES_FIDOUGH] = gMonIcon_Fidough,
	[SPECIES_DACHSBUN] = gMonIcon_Dachsbun,
	[SPECIES_SMOLIV] = gMonIcon_Smoliv,
	[SPECIES_DOLLIV] = gMonIcon_Dolliv,
	[SPECIES_ARBOLIVA] = gMonIcon_Arboliva,
	[SPECIES_SQAWKABILY] = gMonIcon_Sqawkabily,
	[SPECIES_SQAWKABILY_2] = gMonIcon_Sqawkabily2,
	[SPECIES_SQAWKABILY_3] = gMonIcon_Sqawkabily3,
	[SPECIES_SQAWKABILY_4] = gMonIcon_Sqawkabily4,
	[SPECIES_NACLI] = gMonIcon_Nacli,
	[SPECIES_NACLSTACK] = gMonIcon_Naclstack,
	[SPECIES_GARGANACL] = gMonIcon_Garganacl,
	[SPECIES_CHARCADET] = gMonIcon_Charcadet,
	[SPECIES_ARMAROUGE] = gMonIcon_Armarouge,
	[SPECIES_CERULEDGE] = gMonIcon_Ceruledge,
	[SPECIES_TADBULB] = gMonIcon_Tadbulb,
	[SPECIES_BELLIBOLT] = gMonIcon_Bellibolt,
	[SPECIES_WATTREL] = gMonIcon_Wattrel,
	[SPECIES_KILOWATREL] = gMonIcon_Kilowatrel,
	[SPECIES_MASCHIFF] = gMonIcon_Maschiff,
	[SPECIES_MABOSSTIFF] = gMonIcon_Mabosstiff,
	[SPECIES_SHROODLE] = gMonIcon_Shroodle,
	[SPECIES_GRAFAIAI] = gMonIcon_Grafaiai,
	[SPECIES_BRAMBLIN] = gMonIcon_Bramblin,
	[SPECIES_BRMBLGHAST] = gMonIcon_Brmblghast,
	[SPECIES_TOEDSCOOL] = gMonIcon_Toedscool,
	[SPECIES_TOEDSCRUEL] = gMonIcon_Toedscruel,
	[SPECIES_KLAWF] = gMonIcon_Klawf,
	[SPECIES_CAPSAKID] = gMonIcon_Capsakid,
	[SPECIES_SCOVILLAIN] = gMonIcon_Scovillain,
	[SPECIES_RELLOR] = gMonIcon_Rellor,
	[SPECIES_RABSCA] = gMonIcon_Rabsca,
	[SPECIES_FLITTLE] = gMonIcon_Flittle,
	[SPECIES_ESPATHRA] = gMonIcon_Espathra,
	[SPECIES_TINKATINK] = gMonIcon_Tinkatink,
	[SPECIES_TINKATUFF] = gMonIcon_Tinkatuff,
	[SPECIES_TINKATON] = gMonIcon_Tinkaton,
	[SPECIES_WIGLETT] = gMonIcon_Wiglett,
	[SPECIES_WUGTRIO] = gMonIcon_Wugtrio,
	[SPECIES_BOMBIRDIER] = gMonIcon_Bombirdier,
	[SPECIES_FINIZEN] = gMonIcon_Finizen,
	[SPECIES_PALAFIN] = gMonIcon_Palafin,
	[SPECIES_PALAFIN_2] = gMonIcon_Palafin2,
	[SPECIES_VAROOM] = gMonIcon_Varoom,
	[SPECIES_REVAVROOM] = gMonIcon_Revavroom,
	[SPECIES_CYCLIZAR] = gMonIcon_Cyclizar,
	[SPECIES_ORTHWORM] = gMonIcon_Orthworm,
	[SPECIES_GLIMMET] = gMonIcon_Glimmet,
	[SPECIES_GLIMMORA] = gMonIcon_Glimmora,
	[SPECIES_GREAVARD] = gMonIcon_Greavard,
	[SPECIES_HOUNDSTONE] = gMonIcon_Houndstone,
	[SPECIES_FLAMIGO] = gMonIcon_Flamigo,
	[SPECIES_CETODDLE] = gMonIcon_Cetoddle,
	[SPECIES_CETITAN] = gMonIcon_Cetitan,
	[SPECIES_VELUZA] = gMonIcon_Veluza,
	[SPECIES_DONDOZO] = gMonIcon_Dondozo,
	[SPECIES_TATSUGIRI] = gMonIcon_Tatsugiri,
	[SPECIES_TATSUGIRI_2] = gMonIcon_Tatsugiri2,
	[SPECIES_TATSUGIRI_3] = gMonIcon_Tatsugiri3,
	[SPECIES_ANNIHILAPE] = gMonIcon_Annihilape,
	[SPECIES_CLODSIRE] = gMonIcon_Clodsire,
	[SPECIES_FARIGIRAF] = gMonIcon_Farigiraf,
	[SPECIES_DUDUNSPRCE] = gMonIcon_Dudunsprce,
	[SPECIES_DUDUNSPRCE_2] = gMonIcon_Dudunsprce2,
	[SPECIES_KINGAMBIT] = gMonIcon_Kingambit,
	[SPECIES_GREATTUSK] = gMonIcon_GreatTusk,
	[SPECIES_SCREAMTAIL] = gMonIcon_ScreamTail,
	[SPECIES_BRUTEBONET] = gMonIcon_BruteBonet,
	[SPECIES_FLUTTRMANE] = gMonIcon_FluttrMane,
	[SPECIES_SLITHRWING] = gMonIcon_SlithrWing,
	[SPECIES_SNDYSHOCKS] = gMonIcon_SndyShocks,
	[SPECIES_IRONTREADS] = gMonIcon_IronTreads,
	[SPECIES_IRONBUNDLE] = gMonIcon_IronBundle,
	[SPECIES_IRONHANDS] = gMonIcon_IronHands,
	[SPECIES_IRONJUGULS] = gMonIcon_IronJuguls,
	[SPECIES_IRONMOTH] = gMonIcon_IronMoth,
	[SPECIES_IRONTHORNS] = gMonIcon_IronThorns,
	[SPECIES_FRIGIBAX] = gMonIcon_Frigibax,
	[SPECIES_ARCTIBAX] = gMonIcon_Arctibax,
	[SPECIES_BAXCALIBUR] = gMonIcon_Baxcalibur,
	[SPECIES_GIMMIGHOUL] = gMonIcon_Gimmighoul,
	[SPECIES_GIMMIGHOUL_2] = gMonIcon_Gimmighoul2,
	[SPECIES_GHOLDENGO] = gMonIcon_Gholdengo,
	[SPECIES_WOCHIEN] = gMonIcon_WoChien,
	[SPECIES_CHIENPAO] = gMonIcon_ChienPao,
	[SPECIES_TINGLU] = gMonIcon_TingLu,
	[SPECIES_CHIYU] = gMonIcon_ChiYu,
	[SPECIES_ROARNGMOON] = gMonIcon_RoarngMoon,
	[SPECIES_IRONVLIANT] = gMonIcon_IronVliant,
	[SPECIES_KORAIDON] = gMonIcon_Koraidon,
	[SPECIES_MIRAIDON] = gMonIcon_Miraidon,
	[SPECIES_TAUROS_2] = gMonIcon_Tauros2,
	[SPECIES_TAUROS_3] = gMonIcon_Tauros3,
	[SPECIES_TAUROS_4] = gMonIcon_Tauros4,
	[SPECIES_WOOPER_2] = gMonIcon_Wooper2,
	[SPECIES_WALKNGWAKE] = gMonIcon_WalkngWake,
	[SPECIES_IRONLEAVES] = gMonIcon_IronLeaves,
	[SPECIES_DIPPLIN] = gMonIcon_Dipplin,
	[SPECIES_PTCHAGEIST] = gMonIcon_Ptchageist,
	[SPECIES_PTCHAGEIST_2] = gMonIcon_Ptchageist2,
	[SPECIES_SINISTCHA] = gMonIcon_Sinistcha,
	[SPECIES_SINISTCHA_2] = gMonIcon_Sinistcha2,
	[SPECIES_OKIDOGI] = gMonIcon_Okidogi,
	[SPECIES_MUNKIDORI] = gMonIcon_Munkidori,
	[SPECIES_FEZNDIPITI] = gMonIcon_Fezndipiti,
	[SPECIES_OGERPON] = gMonIcon_Ogerpon,
	[SPECIES_OGERPON_2] = gMonIcon_Ogerpon2,
	[SPECIES_OGERPON_3] = gMonIcon_Ogerpon3,
	[SPECIES_OGERPON_4] = gMonIcon_Ogerpon4,
	[SPECIES_OGERPON_5] = gMonIcon_Ogerpon5,
	[SPECIES_OGERPON_6] = gMonIcon_Ogerpon6,
	[SPECIES_OGERPON_7] = gMonIcon_Ogerpon7,
	[SPECIES_OGERPON_8] = gMonIcon_Ogerpon8,
	[SPECIES_URSALUNA_2] = gMonIcon_Ursaluna2,
	[SPECIES_ARCHALUDON] = gMonIcon_Archaludon,
	[SPECIES_HYDRAPPLE] = gMonIcon_Hydrapple,
	[SPECIES_GOUGINFIRE] = gMonIcon_GouginFire,
	[SPECIES_RAGINGBOLT] = gMonIcon_RagingBolt,
	[SPECIES_IRONBOULDR] = gMonIcon_IronBouldr,
	[SPECIES_IRONCROWN] = gMonIcon_IronCrown,
	[SPECIES_TERAPAGOS] = gMonIcon_Terapagos,
	[SPECIES_TERAPAGOS_2] = gMonIcon_Terapagos2,
	[SPECIES_TERAPAGOS_3] = gMonIcon_Terapagos3,
	[SPECIES_PECHARUNT] = gMonIcon_Pecharunt,
	[SPECIES_MOTHIM_2] = gMonIcon_Mothim2,
	[SPECIES_MOTHIM_3] = gMonIcon_Mothim3,
	[SPECIES_SCATTERBUG_2] = gMonIcon_Scatterbug2,
	[SPECIES_SCATTERBUG_3] = gMonIcon_Scatterbug3,
	[SPECIES_SCATTERBUG_4] = gMonIcon_Scatterbug4,
	[SPECIES_SCATTERBUG_5] = gMonIcon_Scatterbug5,
	[SPECIES_SCATTERBUG_6] = gMonIcon_Scatterbug6,
	[SPECIES_SCATTERBUG_7] = gMonIcon_Scatterbug7,
	[SPECIES_SCATTERBUG_8] = gMonIcon_Scatterbug8,
	[SPECIES_SCATTERBUG_9] = gMonIcon_Scatterbug9,
	[SPECIES_SCATTERBUG_10] = gMonIcon_Scatterbug10,
	[SPECIES_SCATTERBUG_11] = gMonIcon_Scatterbug11,
	[SPECIES_SCATTERBUG_12] = gMonIcon_Scatterbug12,
	[SPECIES_SCATTERBUG_13] = gMonIcon_Scatterbug13,
	[SPECIES_SCATTERBUG_14] = gMonIcon_Scatterbug14,
	[SPECIES_SCATTERBUG_15] = gMonIcon_Scatterbug15,
	[SPECIES_SCATTERBUG_16] = gMonIcon_Scatterbug16,
	[SPECIES_SCATTERBUG_17] = gMonIcon_Scatterbug17,
	[SPECIES_SCATTERBUG_18] = gMonIcon_Scatterbug18,
	[SPECIES_SCATTERBUG_19] = gMonIcon_Scatterbug19,
	[SPECIES_SCATTERBUG_20] = gMonIcon_Scatterbug20,
	[SPECIES_SPEWPA_2] = gMonIcon_Spewpa2,
	[SPECIES_SPEWPA_3] = gMonIcon_Spewpa3,
	[SPECIES_SPEWPA_4] = gMonIcon_Spewpa4,
	[SPECIES_SPEWPA_5] = gMonIcon_Spewpa5,
	[SPECIES_SPEWPA_6] = gMonIcon_Spewpa6,
	[SPECIES_SPEWPA_7] = gMonIcon_Spewpa7,
	[SPECIES_SPEWPA_8] = gMonIcon_Spewpa8,
	[SPECIES_SPEWPA_9] = gMonIcon_Spewpa9,
	[SPECIES_SPEWPA_10] = gMonIcon_Spewpa10,
	[SPECIES_SPEWPA_11] = gMonIcon_Spewpa11,
	[SPECIES_SPEWPA_12] = gMonIcon_Spewpa12,
	[SPECIES_SPEWPA_13] = gMonIcon_Spewpa13,
	[SPECIES_SPEWPA_14] = gMonIcon_Spewpa14,
	[SPECIES_SPEWPA_15] = gMonIcon_Spewpa15,
	[SPECIES_SPEWPA_16] = gMonIcon_Spewpa16,
	[SPECIES_SPEWPA_17] = gMonIcon_Spewpa17,
	[SPECIES_SPEWPA_18] = gMonIcon_Spewpa18,
	[SPECIES_SPEWPA_19] = gMonIcon_Spewpa19,
	[SPECIES_SPEWPA_20] = gMonIcon_Spewpa20,
	[SPECIES_RATICATE_3] = gMonIcon_Raticate3,
	[SPECIES_GUMSHOOS_2] = gMonIcon_Gumshoos2,
	[SPECIES_VIKAVOLT_2] = gMonIcon_Vikavolt2,
	[SPECIES_LURANTIS_2] = gMonIcon_Lurantis2,
	[SPECIES_SALAZZLE_2] = gMonIcon_Salazzle2,
	[SPECIES_MIMIKYU_3] = gMonIcon_Mimikyu3,
	[SPECIES_KOMMOO_2] = gMonIcon_Kommoo2,
	[SPECIES_MAROWAK_3] = gMonIcon_Marowak3,
	[SPECIES_RIBOMBEE_2] = gMonIcon_Ribombee2,
	[SPECIES_ARAQUANID_2] = gMonIcon_Araquanid2,
	[SPECIES_TOGEDEMARU_2] = gMonIcon_Togedemaru2,
	[SPECIES_PIKACHU_16] = gMonIcon_Pikachu16,
	[SPECIES_EEVEE_2] = gMonIcon_Eevee2,
	[SPECIES_VENUSAUR_3] = gMonIcon_Venusaur3,
	[SPECIES_BLASTOISE_3] = gMonIcon_Blastoise3,
	[SPECIES_CHARIZARD_4] = gMonIcon_Charizard4,
	[SPECIES_BUTTERFREE_2] = gMonIcon_Butterfree2,
	[SPECIES_PIKACHU_17] = gMonIcon_Pikachu17,
	[SPECIES_MEOWTH_4] = gMonIcon_Meowth4,
	[SPECIES_MACHAMP_2] = gMonIcon_Machamp2,
	[SPECIES_GENGAR_3] = gMonIcon_Gengar3,
	[SPECIES_KINGLER_2] = gMonIcon_Kingler2,
	[SPECIES_LAPRAS_2] = gMonIcon_Lapras2,
	[SPECIES_EEVEE_3] = gMonIcon_Eevee3,
	[SPECIES_SNORLAX_2] = gMonIcon_Snorlax2,
	[SPECIES_GARBODOR_2] = gMonIcon_Garbodor2,
	[SPECIES_MELMETAL_2] = gMonIcon_Melmetal2,
	[SPECIES_RILLABOOM_2] = gMonIcon_Rillaboom2,
	[SPECIES_CINDERACE_2] = gMonIcon_Cinderace2,
	[SPECIES_INTELEON_2] = gMonIcon_Inteleon2,
	[SPECIES_CORVIKNIGH_2] = gMonIcon_Corviknigh2,
	[SPECIES_ORBEETLE_2] = gMonIcon_Orbeetle2,
	[SPECIES_DREDNAW_2] = gMonIcon_Drednaw2,
	[SPECIES_COALOSSAL_2] = gMonIcon_Coalossal2,
	[SPECIES_FLAPPLE_2] = gMonIcon_Flapple2,
	[SPECIES_APPLETUN_2] = gMonIcon_Appletun2,
	[SPECIES_SANDACONDA_2] = gMonIcon_Sandaconda2,
	[SPECIES_TOXTRICITY_3] = gMonIcon_Toxtricity3,
	[SPECIES_TOXTRICITY_4] = gMonIcon_Toxtricity4,
	[SPECIES_CENTISKORC_2] = gMonIcon_Centiskorc2,
	[SPECIES_HATTERENE_2] = gMonIcon_Hatterene2,
	[SPECIES_GRIMMSNARL_2] = gMonIcon_Grimmsnarl2,
	[SPECIES_ALCREMIE_64] = gMonIcon_Alcremie64,
	[SPECIES_COPPERAJAH_2] = gMonIcon_Copperajah2,
	[SPECIES_DURALUDON_2] = gMonIcon_Duraludon2,
	[SPECIES_URSHIFU_3] = gMonIcon_Urshifu3,
	[SPECIES_URSHIFU_4] = gMonIcon_Urshifu4,
	[SPECIES_MIMIKYU_4] = gMonIcon_Mimikyu4,
};

u8 CreateMonIcon_(u16 species, SpriteCallback callback, s16 x, s16 y, u8 subpriority, u32 personality, bool32 extra)
{
    u8 spriteId;
    struct MonIconSpriteTemplate iconTemplate =
        {
            .oam = &sMonIconOamData,
            .image = GetMonIconPtr(species, personality, extra),
            .anims = sMonIconAnims,
            .affineAnims = sMonIconAffineAnims,
            .callback = callback,
            .paletteTag = POKE_ICON_BASE_PAL_TAG + gMonIconPaletteIndices[species],
        };

    if (species > NUM_SPECIES)
        iconTemplate.paletteTag = POKE_ICON_BASE_PAL_TAG;

    spriteId = CreateMonIconSprite(&iconTemplate, x, y, subpriority);

    UpdateMonIconFrame(&gSprites[spriteId]);

    return spriteId;
}

u16 GetIconSpecies_(u16 species, u32 personality)
{
    u16 result;

    if (species == SPECIES_UNOWN)
    {
        u16 letter = GetUnownLetterByPersonality(personality);
        if (letter == 0)
            letter = SPECIES_UNOWN;
        else
            letter += (SPECIES_UNOWN_B - 1);
        result = letter;
    }
    else
    {
        if (species > NUM_SPECIES)
            result = SPECIES_NONE;
        else
            result = species;
    }

    return result;
}

void SafeLoadMonIconPalette_(u16 species)
{
    u8 palIndex;
    if (species > NUM_SPECIES)
        species = SPECIES_NONE;
    palIndex = gMonIconPaletteIndices[species];
    if (IndexOfSpritePaletteTag(gMonIconPaletteTable[palIndex].tag) == 0xFF)
        LoadSpritePalette(&gMonIconPaletteTable[palIndex]);
}

void SafeFreeMonIconPalette_(u16 species)
{
    u8 palIndex;
    if (species > NUM_SPECIES)
        species = SPECIES_NONE;
    palIndex = gMonIconPaletteIndices[species];
    FreeSpritePaletteByTag(gMonIconPaletteTable[palIndex].tag);
}

const u16 *GetValidMonIconPalettePtr_(u16 species)
{
    if (species > NUM_SPECIES)
        species = SPECIES_NONE;
    return gMonIconPaletteTable[gMonIconPaletteIndices[species]].data;
}

u8 GetValidMonIconPalIndex_(u16 species)
{
    if (species > NUM_SPECIES)
        species = SPECIES_NONE;
    return gMonIconPaletteIndices[species];
}