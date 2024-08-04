#include "../../../include/global.h"
#include "../../../include/gflib.h"
#include "../../../include/mail_data.h"
#include "../../../include/pokemon_icon.h"
#include "../../../include/graphics.h"
#include "../../../include/constants/species.h"
#include "../../../include/gba/types.h"
#include "../../../include/data.h"

#define SPECIES_SHINY_PAL(species, pal) [SPECIES_##species] = {pal, SPECIES_##species + SPECIES_SHINY_TAG}

extern const u32 gMonShinyPalette_CircledQuestionMark[];
extern const u32 gMonShinyPalette_Bulbasaur_[];
extern const u32 gMonShinyPalette_Ivysaur_[];
extern const u32 gMonShinyPalette_Venusaur_[];
extern const u32 gMonShinyPalette_Charmander_[];
extern const u32 gMonShinyPalette_Charmeleon_[];
extern const u32 gMonShinyPalette_Charizard_[];
extern const u32 gMonShinyPalette_Squirtle_[];
extern const u32 gMonShinyPalette_Wartortle_[];
extern const u32 gMonShinyPalette_Blastoise_[];
extern const u32 gMonShinyPalette_Caterpie_[];
extern const u32 gMonShinyPalette_Metapod_[];
extern const u32 gMonShinyPalette_Butterfree_[];
extern const u32 gMonShinyPalette_Weedle_[];
extern const u32 gMonShinyPalette_Kakuna_[];
extern const u32 gMonShinyPalette_Beedrill_[];
extern const u32 gMonShinyPalette_Pidgey_[];
extern const u32 gMonShinyPalette_Pidgeotto_[];
extern const u32 gMonShinyPalette_Pidgeot_[];
extern const u32 gMonShinyPalette_Rattata_[];
extern const u32 gMonShinyPalette_Raticate_[];
extern const u32 gMonShinyPalette_Spearow_[];
extern const u32 gMonShinyPalette_Fearow_[];
extern const u32 gMonShinyPalette_Ekans_[];
extern const u32 gMonShinyPalette_Arbok_[];
extern const u32 gMonShinyPalette_Pikachu_[];
extern const u32 gMonShinyPalette_Raichu_[];
extern const u32 gMonShinyPalette_Sandshrew_[];
extern const u32 gMonShinyPalette_Sandslash_[];
extern const u32 gMonShinyPalette_Nidoransf_[];
extern const u32 gMonShinyPalette_Nidorina_[];
extern const u32 gMonShinyPalette_Nidoqueen_[];
extern const u32 gMonShinyPalette_Nidoransm_[];
extern const u32 gMonShinyPalette_Nidorino_[];
extern const u32 gMonShinyPalette_Nidoking_[];
extern const u32 gMonShinyPalette_Clefairy_[];
extern const u32 gMonShinyPalette_Clefable_[];
extern const u32 gMonShinyPalette_Vulpix_[];
extern const u32 gMonShinyPalette_Ninetales_[];
extern const u32 gMonShinyPalette_Jigglypuff_[];
extern const u32 gMonShinyPalette_Wigglytuff_[];
extern const u32 gMonShinyPalette_Zubat_[];
extern const u32 gMonShinyPalette_Golbat_[];
extern const u32 gMonShinyPalette_Oddish_[];
extern const u32 gMonShinyPalette_Gloom_[];
extern const u32 gMonShinyPalette_Vileplume_[];
extern const u32 gMonShinyPalette_Paras_[];
extern const u32 gMonShinyPalette_Parasect_[];
extern const u32 gMonShinyPalette_Venonat_[];
extern const u32 gMonShinyPalette_Venomoth_[];
extern const u32 gMonShinyPalette_Diglett_[];
extern const u32 gMonShinyPalette_Dugtrio_[];
extern const u32 gMonShinyPalette_Meowth_[];
extern const u32 gMonShinyPalette_Persian_[];
extern const u32 gMonShinyPalette_Psyduck_[];
extern const u32 gMonShinyPalette_Golduck_[];
extern const u32 gMonShinyPalette_Mankey_[];
extern const u32 gMonShinyPalette_Primeape_[];
extern const u32 gMonShinyPalette_Growlithe_[];
extern const u32 gMonShinyPalette_Arcanine_[];
extern const u32 gMonShinyPalette_Poliwag_[];
extern const u32 gMonShinyPalette_Poliwhirl_[];
extern const u32 gMonShinyPalette_Poliwrath_[];
extern const u32 gMonShinyPalette_Abra_[];
extern const u32 gMonShinyPalette_Kadabra_[];
extern const u32 gMonShinyPalette_Alakazam_[];
extern const u32 gMonShinyPalette_Machop_[];
extern const u32 gMonShinyPalette_Machoke_[];
extern const u32 gMonShinyPalette_Machamp_[];
extern const u32 gMonShinyPalette_Bellsprout_[];
extern const u32 gMonShinyPalette_Weepinbell_[];
extern const u32 gMonShinyPalette_Victreebel_[];
extern const u32 gMonShinyPalette_Tentacool_[];
extern const u32 gMonShinyPalette_Tentacruel_[];
extern const u32 gMonShinyPalette_Geodude_[];
extern const u32 gMonShinyPalette_Graveler_[];
extern const u32 gMonShinyPalette_Golem_[];
extern const u32 gMonShinyPalette_Ponyta_[];
extern const u32 gMonShinyPalette_Rapidash_[];
extern const u32 gMonShinyPalette_Slowpoke_[];
extern const u32 gMonShinyPalette_Slowbro_[];
extern const u32 gMonShinyPalette_Magnemite_[];
extern const u32 gMonShinyPalette_Magneton_[];
extern const u32 gMonShinyPalette_Farfetchd_[];
extern const u32 gMonShinyPalette_Doduo_[];
extern const u32 gMonShinyPalette_Dodrio_[];
extern const u32 gMonShinyPalette_Seel_[];
extern const u32 gMonShinyPalette_Dewgong_[];
extern const u32 gMonShinyPalette_Grimer_[];
extern const u32 gMonShinyPalette_Muk_[];
extern const u32 gMonShinyPalette_Shellder_[];
extern const u32 gMonShinyPalette_Cloyster_[];
extern const u32 gMonShinyPalette_Gastly_[];
extern const u32 gMonShinyPalette_Haunter_[];
extern const u32 gMonShinyPalette_Gengar_[];
extern const u32 gMonShinyPalette_Onix_[];
extern const u32 gMonShinyPalette_Drowzee_[];
extern const u32 gMonShinyPalette_Hypno_[];
extern const u32 gMonShinyPalette_Krabby_[];
extern const u32 gMonShinyPalette_Kingler_[];
extern const u32 gMonShinyPalette_Voltorb_[];
extern const u32 gMonShinyPalette_Electrode_[];
extern const u32 gMonShinyPalette_Exeggcute_[];
extern const u32 gMonShinyPalette_Exeggutor_[];
extern const u32 gMonShinyPalette_Cubone_[];
extern const u32 gMonShinyPalette_Marowak_[];
extern const u32 gMonShinyPalette_Hitmonlee_[];
extern const u32 gMonShinyPalette_Hitmonchan_[];
extern const u32 gMonShinyPalette_Lickitung_[];
extern const u32 gMonShinyPalette_Koffing_[];
extern const u32 gMonShinyPalette_Weezing_[];
extern const u32 gMonShinyPalette_Rhyhorn_[];
extern const u32 gMonShinyPalette_Rhydon_[];
extern const u32 gMonShinyPalette_Chansey_[];
extern const u32 gMonShinyPalette_Tangela_[];
extern const u32 gMonShinyPalette_Kangaskhan_[];
extern const u32 gMonShinyPalette_Horsea_[];
extern const u32 gMonShinyPalette_Seadra_[];
extern const u32 gMonShinyPalette_Goldeen_[];
extern const u32 gMonShinyPalette_Seaking_[];
extern const u32 gMonShinyPalette_Staryu_[];
extern const u32 gMonShinyPalette_Starmie_[];
extern const u32 gMonShinyPalette_MrMime_[];
extern const u32 gMonShinyPalette_Scyther_[];
extern const u32 gMonShinyPalette_Jynx_[];
extern const u32 gMonShinyPalette_Electabuzz_[];
extern const u32 gMonShinyPalette_Magmar_[];
extern const u32 gMonShinyPalette_Pinsir_[];
extern const u32 gMonShinyPalette_Tauros_[];
extern const u32 gMonShinyPalette_Magikarp_[];
extern const u32 gMonShinyPalette_Gyarados_[];
extern const u32 gMonShinyPalette_Lapras_[];
extern const u32 gMonShinyPalette_Ditto_[];
extern const u32 gMonShinyPalette_Eevee_[];
extern const u32 gMonShinyPalette_Vaporeon_[];
extern const u32 gMonShinyPalette_Jolteon_[];
extern const u32 gMonShinyPalette_Flareon_[];
extern const u32 gMonShinyPalette_Porygon_[];
extern const u32 gMonShinyPalette_Omanyte_[];
extern const u32 gMonShinyPalette_Omastar_[];
extern const u32 gMonShinyPalette_Kabuto_[];
extern const u32 gMonShinyPalette_Kabutops_[];
extern const u32 gMonShinyPalette_Aerodactyl_[];
extern const u32 gMonShinyPalette_Snorlax_[];
extern const u32 gMonShinyPalette_Articuno_[];
extern const u32 gMonShinyPalette_Zapdos_[];
extern const u32 gMonShinyPalette_Moltres_[];
extern const u32 gMonShinyPalette_Dratini_[];
extern const u32 gMonShinyPalette_Dragonair_[];
extern const u32 gMonShinyPalette_Dragonite_[];
extern const u32 gMonShinyPalette_Mewtwo_[];
extern const u32 gMonShinyPalette_Mew_[];
extern const u32 gMonShinyPalette_Chikorita_[];
extern const u32 gMonShinyPalette_Bayleef_[];
extern const u32 gMonShinyPalette_Meganium_[];
extern const u32 gMonShinyPalette_Cyndaquil_[];
extern const u32 gMonShinyPalette_Quilava_[];
extern const u32 gMonShinyPalette_Typhlosion_[];
extern const u32 gMonShinyPalette_Totodile_[];
extern const u32 gMonShinyPalette_Croconaw_[];
extern const u32 gMonShinyPalette_Feraligatr_[];
extern const u32 gMonShinyPalette_Sentret_[];
extern const u32 gMonShinyPalette_Furret_[];
extern const u32 gMonShinyPalette_Hoothoot_[];
extern const u32 gMonShinyPalette_Noctowl_[];
extern const u32 gMonShinyPalette_Ledyba_[];
extern const u32 gMonShinyPalette_Ledian_[];
extern const u32 gMonShinyPalette_Spinarak_[];
extern const u32 gMonShinyPalette_Ariados_[];
extern const u32 gMonShinyPalette_Crobat_[];
extern const u32 gMonShinyPalette_Chinchou_[];
extern const u32 gMonShinyPalette_Lanturn_[];
extern const u32 gMonShinyPalette_Pichu_[];
extern const u32 gMonShinyPalette_Cleffa_[];
extern const u32 gMonShinyPalette_Igglybuff_[];
extern const u32 gMonShinyPalette_Togepi_[];
extern const u32 gMonShinyPalette_Togetic_[];
extern const u32 gMonShinyPalette_Natu_[];
extern const u32 gMonShinyPalette_Xatu_[];
extern const u32 gMonShinyPalette_Mareep_[];
extern const u32 gMonShinyPalette_Flaaffy_[];
extern const u32 gMonShinyPalette_Ampharos_[];
extern const u32 gMonShinyPalette_Bellossom_[];
extern const u32 gMonShinyPalette_Marill_[];
extern const u32 gMonShinyPalette_Azumarill_[];
extern const u32 gMonShinyPalette_Sudowoodo_[];
extern const u32 gMonShinyPalette_Politoed_[];
extern const u32 gMonShinyPalette_Hoppip_[];
extern const u32 gMonShinyPalette_Skiploom_[];
extern const u32 gMonShinyPalette_Jumpluff_[];
extern const u32 gMonShinyPalette_Aipom_[];
extern const u32 gMonShinyPalette_Sunkern_[];
extern const u32 gMonShinyPalette_Sunflora_[];
extern const u32 gMonShinyPalette_Yanma_[];
extern const u32 gMonShinyPalette_Wooper_[];
extern const u32 gMonShinyPalette_Quagsire_[];
extern const u32 gMonShinyPalette_Espeon_[];
extern const u32 gMonShinyPalette_Umbreon_[];
extern const u32 gMonShinyPalette_Murkrow_[];
extern const u32 gMonShinyPalette_Slowking_[];
extern const u32 gMonShinyPalette_Misdreavus_[];
extern const u32 gMonShinyPalette_Unown_[];
extern const u32 gMonShinyPalette_Wobbuffet_[];
extern const u32 gMonShinyPalette_Girafarig_[];
extern const u32 gMonShinyPalette_Pineco_[];
extern const u32 gMonShinyPalette_Forretress_[];
extern const u32 gMonShinyPalette_Dunsparce_[];
extern const u32 gMonShinyPalette_Gligar_[];
extern const u32 gMonShinyPalette_Steelix_[];
extern const u32 gMonShinyPalette_Snubbull_[];
extern const u32 gMonShinyPalette_Granbull_[];
extern const u32 gMonShinyPalette_Qwilfish_[];
extern const u32 gMonShinyPalette_Scizor_[];
extern const u32 gMonShinyPalette_Shuckle_[];
extern const u32 gMonShinyPalette_Heracross_[];
extern const u32 gMonShinyPalette_Sneasel_[];
extern const u32 gMonShinyPalette_Teddiursa_[];
extern const u32 gMonShinyPalette_Ursaring_[];
extern const u32 gMonShinyPalette_Slugma_[];
extern const u32 gMonShinyPalette_Magcargo_[];
extern const u32 gMonShinyPalette_Swinub_[];
extern const u32 gMonShinyPalette_Piloswine_[];
extern const u32 gMonShinyPalette_Corsola_[];
extern const u32 gMonShinyPalette_Remoraid_[];
extern const u32 gMonShinyPalette_Octillery_[];
extern const u32 gMonShinyPalette_Delibird_[];
extern const u32 gMonShinyPalette_Mantine_[];
extern const u32 gMonShinyPalette_Skarmory_[];
extern const u32 gMonShinyPalette_Houndour_[];
extern const u32 gMonShinyPalette_Houndoom_[];
extern const u32 gMonShinyPalette_Kingdra_[];
extern const u32 gMonShinyPalette_Phanpy_[];
extern const u32 gMonShinyPalette_Donphan_[];
extern const u32 gMonShinyPalette_Porygon2_[];
extern const u32 gMonShinyPalette_Stantler_[];
extern const u32 gMonShinyPalette_Smeargle_[];
extern const u32 gMonShinyPalette_Tyrogue_[];
extern const u32 gMonShinyPalette_Hitmontop_[];
extern const u32 gMonShinyPalette_Smoochum_[];
extern const u32 gMonShinyPalette_Elekid_[];
extern const u32 gMonShinyPalette_Magby_[];
extern const u32 gMonShinyPalette_Miltank_[];
extern const u32 gMonShinyPalette_Blissey_[];
extern const u32 gMonShinyPalette_Raikou_[];
extern const u32 gMonShinyPalette_Entei_[];
extern const u32 gMonShinyPalette_Suicune_[];
extern const u32 gMonShinyPalette_Larvitar_[];
extern const u32 gMonShinyPalette_Pupitar_[];
extern const u32 gMonShinyPalette_Tyranitar_[];
extern const u32 gMonShinyPalette_Lugia_[];
extern const u32 gMonShinyPalette_HoOh_[];
extern const u32 gMonShinyPalette_Celebi_[];
extern const u32 gMonShinyPalette_Treecko_[];
extern const u32 gMonShinyPalette_Grovyle_[];
extern const u32 gMonShinyPalette_Sceptile_[];
extern const u32 gMonShinyPalette_Torchic_[];
extern const u32 gMonShinyPalette_Combusken_[];
extern const u32 gMonShinyPalette_Blaziken_[];
extern const u32 gMonShinyPalette_Mudkip_[];
extern const u32 gMonShinyPalette_Marshtomp_[];
extern const u32 gMonShinyPalette_Swampert_[];
extern const u32 gMonShinyPalette_Poochyena_[];
extern const u32 gMonShinyPalette_Mightyena_[];
extern const u32 gMonShinyPalette_Zigzagoon_[];
extern const u32 gMonShinyPalette_Linoone_[];
extern const u32 gMonShinyPalette_Wurmple_[];
extern const u32 gMonShinyPalette_Silcoon_[];
extern const u32 gMonShinyPalette_Beautifly_[];
extern const u32 gMonShinyPalette_Cascoon_[];
extern const u32 gMonShinyPalette_Dustox_[];
extern const u32 gMonShinyPalette_Lotad_[];
extern const u32 gMonShinyPalette_Lombre_[];
extern const u32 gMonShinyPalette_Ludicolo_[];
extern const u32 gMonShinyPalette_Seedot_[];
extern const u32 gMonShinyPalette_Nuzleaf_[];
extern const u32 gMonShinyPalette_Shiftry_[];
extern const u32 gMonShinyPalette_Taillow_[];
extern const u32 gMonShinyPalette_Swellow_[];
extern const u32 gMonShinyPalette_Wingull_[];
extern const u32 gMonShinyPalette_Pelipper_[];
extern const u32 gMonShinyPalette_Ralts_[];
extern const u32 gMonShinyPalette_Kirlia_[];
extern const u32 gMonShinyPalette_Gardevoir_[];
extern const u32 gMonShinyPalette_Surskit_[];
extern const u32 gMonShinyPalette_Masquerain_[];
extern const u32 gMonShinyPalette_Shroomish_[];
extern const u32 gMonShinyPalette_Breloom_[];
extern const u32 gMonShinyPalette_Slakoth_[];
extern const u32 gMonShinyPalette_Vigoroth_[];
extern const u32 gMonShinyPalette_Slaking_[];
extern const u32 gMonShinyPalette_Nincada_[];
extern const u32 gMonShinyPalette_Ninjask_[];
extern const u32 gMonShinyPalette_Shedinja_[];
extern const u32 gMonShinyPalette_Whismur_[];
extern const u32 gMonShinyPalette_Loudred_[];
extern const u32 gMonShinyPalette_Exploud_[];
extern const u32 gMonShinyPalette_Makuhita_[];
extern const u32 gMonShinyPalette_Hariyama_[];
extern const u32 gMonShinyPalette_Azurill_[];
extern const u32 gMonShinyPalette_Nosepass_[];
extern const u32 gMonShinyPalette_Skitty_[];
extern const u32 gMonShinyPalette_Delcatty_[];
extern const u32 gMonShinyPalette_Sableye_[];
extern const u32 gMonShinyPalette_Mawile_[];
extern const u32 gMonShinyPalette_Aron_[];
extern const u32 gMonShinyPalette_Lairon_[];
extern const u32 gMonShinyPalette_Aggron_[];
extern const u32 gMonShinyPalette_Meditite_[];
extern const u32 gMonShinyPalette_Medicham_[];
extern const u32 gMonShinyPalette_Electrike_[];
extern const u32 gMonShinyPalette_Manectric_[];
extern const u32 gMonShinyPalette_Plusle_[];
extern const u32 gMonShinyPalette_Minun_[];
extern const u32 gMonShinyPalette_Volbeat_[];
extern const u32 gMonShinyPalette_Illumise_[];
extern const u32 gMonShinyPalette_Roselia_[];
extern const u32 gMonShinyPalette_Gulpin_[];
extern const u32 gMonShinyPalette_Swalot_[];
extern const u32 gMonShinyPalette_Carvanha_[];
extern const u32 gMonShinyPalette_Sharpedo_[];
extern const u32 gMonShinyPalette_Wailmer_[];
extern const u32 gMonShinyPalette_Wailord_[];
extern const u32 gMonShinyPalette_Numel_[];
extern const u32 gMonShinyPalette_Camerupt_[];
extern const u32 gMonShinyPalette_Torkoal_[];
extern const u32 gMonShinyPalette_Spoink_[];
extern const u32 gMonShinyPalette_Grumpig_[];
extern const u32 gMonShinyPalette_Spinda_[];
extern const u32 gMonShinyPalette_Trapinch_[];
extern const u32 gMonShinyPalette_Vibrava_[];
extern const u32 gMonShinyPalette_Flygon_[];
extern const u32 gMonShinyPalette_Cacnea_[];
extern const u32 gMonShinyPalette_Cacturne_[];
extern const u32 gMonShinyPalette_Swablu_[];
extern const u32 gMonShinyPalette_Altaria_[];
extern const u32 gMonShinyPalette_Zangoose_[];
extern const u32 gMonShinyPalette_Seviper_[];
extern const u32 gMonShinyPalette_Lunatone_[];
extern const u32 gMonShinyPalette_Solrock_[];
extern const u32 gMonShinyPalette_Barboach_[];
extern const u32 gMonShinyPalette_Whiscash_[];
extern const u32 gMonShinyPalette_Corphish_[];
extern const u32 gMonShinyPalette_Crawdaunt_[];
extern const u32 gMonShinyPalette_Baltoy_[];
extern const u32 gMonShinyPalette_Claydol_[];
extern const u32 gMonShinyPalette_Lileep_[];
extern const u32 gMonShinyPalette_Cradily_[];
extern const u32 gMonShinyPalette_Anorith_[];
extern const u32 gMonShinyPalette_Armaldo_[];
extern const u32 gMonShinyPalette_Feebas_[];
extern const u32 gMonShinyPalette_Milotic_[];
extern const u32 gMonShinyPalette_Castform_[];
extern const u32 gMonShinyPalette_Kecleon_[];
extern const u32 gMonShinyPalette_Shuppet_[];
extern const u32 gMonShinyPalette_Banette_[];
extern const u32 gMonShinyPalette_Duskull_[];
extern const u32 gMonShinyPalette_Dusclops_[];
extern const u32 gMonShinyPalette_Tropius_[];
extern const u32 gMonShinyPalette_Chimecho_[];
extern const u32 gMonShinyPalette_Absol_[];
extern const u32 gMonShinyPalette_Wynaut_[];
extern const u32 gMonShinyPalette_Snorunt_[];
extern const u32 gMonShinyPalette_Glalie_[];
extern const u32 gMonShinyPalette_Spheal_[];
extern const u32 gMonShinyPalette_Sealeo_[];
extern const u32 gMonShinyPalette_Walrein_[];
extern const u32 gMonShinyPalette_Clamperl_[];
extern const u32 gMonShinyPalette_Huntail_[];
extern const u32 gMonShinyPalette_Gorebyss_[];
extern const u32 gMonShinyPalette_Relicanth_[];
extern const u32 gMonShinyPalette_Luvdisc_[];
extern const u32 gMonShinyPalette_Bagon_[];
extern const u32 gMonShinyPalette_Shelgon_[];
extern const u32 gMonShinyPalette_Salamence_[];
extern const u32 gMonShinyPalette_Beldum_[];
extern const u32 gMonShinyPalette_Metang_[];
extern const u32 gMonShinyPalette_Metagross_[];
extern const u32 gMonShinyPalette_Regirock_[];
extern const u32 gMonShinyPalette_Regice_[];
extern const u32 gMonShinyPalette_Registeel_[];
extern const u32 gMonShinyPalette_Latias_[];
extern const u32 gMonShinyPalette_Latios_[];
extern const u32 gMonShinyPalette_Kyogre_[];
extern const u32 gMonShinyPalette_Groudon_[];
extern const u32 gMonShinyPalette_Rayquaza_[];
extern const u32 gMonShinyPalette_Jirachi_[];
extern const u32 gMonShinyPalette_Deoxys_[];
extern const u32 gMonShinyPalette_Turtwig_[];
extern const u32 gMonShinyPalette_Grotle_[];
extern const u32 gMonShinyPalette_Torterra_[];
extern const u32 gMonShinyPalette_Chimchar_[];
extern const u32 gMonShinyPalette_Monferno_[];
extern const u32 gMonShinyPalette_Infernape_[];
extern const u32 gMonShinyPalette_Piplup_[];
extern const u32 gMonShinyPalette_Prinplup_[];
extern const u32 gMonShinyPalette_Empoleon_[];
extern const u32 gMonShinyPalette_Starly_[];
extern const u32 gMonShinyPalette_Staravia_[];
extern const u32 gMonShinyPalette_Staraptor_[];
extern const u32 gMonShinyPalette_Bidoof_[];
extern const u32 gMonShinyPalette_Bibarel_[];
extern const u32 gMonShinyPalette_Kricketot_[];
extern const u32 gMonShinyPalette_Kricketune_[];
extern const u32 gMonShinyPalette_Shinx_[];
extern const u32 gMonShinyPalette_Luxio_[];
extern const u32 gMonShinyPalette_Luxray_[];
extern const u32 gMonShinyPalette_Budew_[];
extern const u32 gMonShinyPalette_Roserade_[];
extern const u32 gMonShinyPalette_Cranidos_[];
extern const u32 gMonShinyPalette_Rampardos_[];
extern const u32 gMonShinyPalette_Shieldon_[];
extern const u32 gMonShinyPalette_Bastiodon_[];
extern const u32 gMonShinyPalette_Burmy_[];
extern const u32 gMonShinyPalette_Wormadam_[];
extern const u32 gMonShinyPalette_Mothim_[];
extern const u32 gMonShinyPalette_Combee_[];
extern const u32 gMonShinyPalette_Vespiquen_[];
extern const u32 gMonShinyPalette_Pachirisu_[];
extern const u32 gMonShinyPalette_Buizel_[];
extern const u32 gMonShinyPalette_Floatzel_[];
extern const u32 gMonShinyPalette_Cherubi_[];
extern const u32 gMonShinyPalette_Cherrim_[];
extern const u32 gMonShinyPalette_Shellos_[];
extern const u32 gMonShinyPalette_Gastrodon_[];
extern const u32 gMonShinyPalette_Ambipom_[];
extern const u32 gMonShinyPalette_Drifloon_[];
extern const u32 gMonShinyPalette_Drifblim_[];
extern const u32 gMonShinyPalette_Buneary_[];
extern const u32 gMonShinyPalette_Lopunny_[];
extern const u32 gMonShinyPalette_Mismagius_[];
extern const u32 gMonShinyPalette_Honchkrow_[];
extern const u32 gMonShinyPalette_Glameow_[];
extern const u32 gMonShinyPalette_Purugly_[];
extern const u32 gMonShinyPalette_Chingling_[];
extern const u32 gMonShinyPalette_Stunky_[];
extern const u32 gMonShinyPalette_Skuntank_[];
extern const u32 gMonShinyPalette_Bronzor_[];
extern const u32 gMonShinyPalette_Bronzong_[];
extern const u32 gMonShinyPalette_Bonsly_[];
extern const u32 gMonShinyPalette_MimeJr_[];
extern const u32 gMonShinyPalette_Happiny_[];
extern const u32 gMonShinyPalette_Chatot_[];
extern const u32 gMonShinyPalette_Spiritomb_[];
extern const u32 gMonShinyPalette_Gible_[];
extern const u32 gMonShinyPalette_Gabite_[];
extern const u32 gMonShinyPalette_Garchomp_[];
extern const u32 gMonShinyPalette_Munchlax_[];
extern const u32 gMonShinyPalette_Riolu_[];
extern const u32 gMonShinyPalette_Lucario_[];
extern const u32 gMonShinyPalette_Hippopotas_[];
extern const u32 gMonShinyPalette_Hippowdon_[];
extern const u32 gMonShinyPalette_Skorupi_[];
extern const u32 gMonShinyPalette_Drapion_[];
extern const u32 gMonShinyPalette_Croagunk_[];
extern const u32 gMonShinyPalette_Toxicroak_[];
extern const u32 gMonShinyPalette_Carnivine_[];
extern const u32 gMonShinyPalette_Finneon_[];
extern const u32 gMonShinyPalette_Lumineon_[];
extern const u32 gMonShinyPalette_Mantyke_[];
extern const u32 gMonShinyPalette_Snover_[];
extern const u32 gMonShinyPalette_Abomasnow_[];
extern const u32 gMonShinyPalette_Weavile_[];
extern const u32 gMonShinyPalette_Magnezone_[];
extern const u32 gMonShinyPalette_Lickilicky_[];
extern const u32 gMonShinyPalette_Rhyperior_[];
extern const u32 gMonShinyPalette_Tangrowth_[];
extern const u32 gMonShinyPalette_Electivire_[];
extern const u32 gMonShinyPalette_Magmortar_[];
extern const u32 gMonShinyPalette_Togekiss_[];
extern const u32 gMonShinyPalette_Yanmega_[];
extern const u32 gMonShinyPalette_Leafeon_[];
extern const u32 gMonShinyPalette_Glaceon_[];
extern const u32 gMonShinyPalette_Gliscor_[];
extern const u32 gMonShinyPalette_Mamoswine_[];
extern const u32 gMonShinyPalette_PorygonZ_[];
extern const u32 gMonShinyPalette_Gallade_[];
extern const u32 gMonShinyPalette_Probopass_[];
extern const u32 gMonShinyPalette_Dusknoir_[];
extern const u32 gMonShinyPalette_Froslass_[];
extern const u32 gMonShinyPalette_Rotom_[];
extern const u32 gMonShinyPalette_Uxie_[];
extern const u32 gMonShinyPalette_Mesprit_[];
extern const u32 gMonShinyPalette_Azelf_[];
extern const u32 gMonShinyPalette_Dialga_[];
extern const u32 gMonShinyPalette_Palkia_[];
extern const u32 gMonShinyPalette_Heatran_[];
extern const u32 gMonShinyPalette_Regigigas_[];
extern const u32 gMonShinyPalette_Giratina_[];
extern const u32 gMonShinyPalette_Cresselia_[];
extern const u32 gMonShinyPalette_Phione_[];
extern const u32 gMonShinyPalette_Manaphy_[];
extern const u32 gMonShinyPalette_Darkrai_[];
extern const u32 gMonShinyPalette_Shaymin_[];
extern const u32 gMonShinyPalette_Arceus_[];
extern const u32 gMonShinyPalette_Victini_[];
extern const u32 gMonShinyPalette_Snivy_[];
extern const u32 gMonShinyPalette_Servine_[];
extern const u32 gMonShinyPalette_Serperior_[];
extern const u32 gMonShinyPalette_Tepig_[];
extern const u32 gMonShinyPalette_Pignite_[];
extern const u32 gMonShinyPalette_Emboar_[];
extern const u32 gMonShinyPalette_Oshawott_[];
extern const u32 gMonShinyPalette_Dewott_[];
extern const u32 gMonShinyPalette_Samurott_[];
extern const u32 gMonShinyPalette_Patrat_[];
extern const u32 gMonShinyPalette_Watchog_[];
extern const u32 gMonShinyPalette_Lillipup_[];
extern const u32 gMonShinyPalette_Herdier_[];
extern const u32 gMonShinyPalette_Stoutland_[];
extern const u32 gMonShinyPalette_Purrloin_[];
extern const u32 gMonShinyPalette_Liepard_[];
extern const u32 gMonShinyPalette_Pansage_[];
extern const u32 gMonShinyPalette_Simisage_[];
extern const u32 gMonShinyPalette_Pansear_[];
extern const u32 gMonShinyPalette_Simisear_[];
extern const u32 gMonShinyPalette_Panpour_[];
extern const u32 gMonShinyPalette_Simipour_[];
extern const u32 gMonShinyPalette_Munna_[];
extern const u32 gMonShinyPalette_Musharna_[];
extern const u32 gMonShinyPalette_Pidove_[];
extern const u32 gMonShinyPalette_Tranquill_[];
extern const u32 gMonShinyPalette_Unfezant_[];
extern const u32 gMonShinyPalette_Blitzle_[];
extern const u32 gMonShinyPalette_Zebstrika_[];
extern const u32 gMonShinyPalette_Roggenrola_[];
extern const u32 gMonShinyPalette_Boldore_[];
extern const u32 gMonShinyPalette_Gigalith_[];
extern const u32 gMonShinyPalette_Woobat_[];
extern const u32 gMonShinyPalette_Swoobat_[];
extern const u32 gMonShinyPalette_Drilbur_[];
extern const u32 gMonShinyPalette_Excadrill_[];
extern const u32 gMonShinyPalette_Audino_[];
extern const u32 gMonShinyPalette_Timburr_[];
extern const u32 gMonShinyPalette_Gurdurr_[];
extern const u32 gMonShinyPalette_Conkeldurr_[];
extern const u32 gMonShinyPalette_Tympole_[];
extern const u32 gMonShinyPalette_Palpitoad_[];
extern const u32 gMonShinyPalette_Seismitoad_[];
extern const u32 gMonShinyPalette_Throh_[];
extern const u32 gMonShinyPalette_Sawk_[];
extern const u32 gMonShinyPalette_Sewaddle_[];
extern const u32 gMonShinyPalette_Swadloon_[];
extern const u32 gMonShinyPalette_Leavanny_[];
extern const u32 gMonShinyPalette_Venipede_[];
extern const u32 gMonShinyPalette_Whirlipede_[];
extern const u32 gMonShinyPalette_Scolipede_[];
extern const u32 gMonShinyPalette_Cottonee_[];
extern const u32 gMonShinyPalette_Whimsicott_[];
extern const u32 gMonShinyPalette_Petilil_[];
extern const u32 gMonShinyPalette_Lilligant_[];
extern const u32 gMonShinyPalette_Basculin_[];
extern const u32 gMonShinyPalette_Sandile_[];
extern const u32 gMonShinyPalette_Krokorok_[];
extern const u32 gMonShinyPalette_Krookodile_[];
extern const u32 gMonShinyPalette_Darumaka_[];
extern const u32 gMonShinyPalette_Darmanitan_[];
extern const u32 gMonShinyPalette_Maractus_[];
extern const u32 gMonShinyPalette_Dwebble_[];
extern const u32 gMonShinyPalette_Crustle_[];
extern const u32 gMonShinyPalette_Scraggy_[];
extern const u32 gMonShinyPalette_Scrafty_[];
extern const u32 gMonShinyPalette_Sigilyph_[];
extern const u32 gMonShinyPalette_Yamask_[];
extern const u32 gMonShinyPalette_Cofagrigus_[];
extern const u32 gMonShinyPalette_Tirtouga_[];
extern const u32 gMonShinyPalette_Carracosta_[];
extern const u32 gMonShinyPalette_Archen_[];
extern const u32 gMonShinyPalette_Archeops_[];
extern const u32 gMonShinyPalette_Trubbish_[];
extern const u32 gMonShinyPalette_Garbodor_[];
extern const u32 gMonShinyPalette_Zorua_[];
extern const u32 gMonShinyPalette_Zoroark_[];
extern const u32 gMonShinyPalette_Minccino_[];
extern const u32 gMonShinyPalette_Cinccino_[];
extern const u32 gMonShinyPalette_Gothita_[];
extern const u32 gMonShinyPalette_Gothorita_[];
extern const u32 gMonShinyPalette_Gothitelle_[];
extern const u32 gMonShinyPalette_Solosis_[];
extern const u32 gMonShinyPalette_Duosion_[];
extern const u32 gMonShinyPalette_Reuniclus_[];
extern const u32 gMonShinyPalette_Ducklett_[];
extern const u32 gMonShinyPalette_Swanna_[];
extern const u32 gMonShinyPalette_Vanillite_[];
extern const u32 gMonShinyPalette_Vanillish_[];
extern const u32 gMonShinyPalette_Vanilluxe_[];
extern const u32 gMonShinyPalette_Deerling_[];
extern const u32 gMonShinyPalette_Sawsbuck_[];
extern const u32 gMonShinyPalette_Emolga_[];
extern const u32 gMonShinyPalette_Karrablast_[];
extern const u32 gMonShinyPalette_Escavalier_[];
extern const u32 gMonShinyPalette_Foongus_[];
extern const u32 gMonShinyPalette_Amoonguss_[];
extern const u32 gMonShinyPalette_Frillish_[];
extern const u32 gMonShinyPalette_Jellicent_[];
extern const u32 gMonShinyPalette_Alomomola_[];
extern const u32 gMonShinyPalette_Joltik_[];
extern const u32 gMonShinyPalette_Galvantula_[];
extern const u32 gMonShinyPalette_Ferroseed_[];
extern const u32 gMonShinyPalette_Ferrothorn_[];
extern const u32 gMonShinyPalette_Klink_[];
extern const u32 gMonShinyPalette_Klang_[];
extern const u32 gMonShinyPalette_Klinklang_[];
extern const u32 gMonShinyPalette_Tynamo_[];
extern const u32 gMonShinyPalette_Eelektrik_[];
extern const u32 gMonShinyPalette_Eelektross_[];
extern const u32 gMonShinyPalette_Elgyem_[];
extern const u32 gMonShinyPalette_Beheeyem_[];
extern const u32 gMonShinyPalette_Litwick_[];
extern const u32 gMonShinyPalette_Lampent_[];
extern const u32 gMonShinyPalette_Chandelure_[];
extern const u32 gMonShinyPalette_Axew_[];
extern const u32 gMonShinyPalette_Fraxure_[];
extern const u32 gMonShinyPalette_Haxorus_[];
extern const u32 gMonShinyPalette_Cubchoo_[];
extern const u32 gMonShinyPalette_Beartic_[];
extern const u32 gMonShinyPalette_Cryogonal_[];
extern const u32 gMonShinyPalette_Shelmet_[];
extern const u32 gMonShinyPalette_Accelgor_[];
extern const u32 gMonShinyPalette_Stunfisk_[];
extern const u32 gMonShinyPalette_Mienfoo_[];
extern const u32 gMonShinyPalette_Mienshao_[];
extern const u32 gMonShinyPalette_Druddigon_[];
extern const u32 gMonShinyPalette_Golett_[];
extern const u32 gMonShinyPalette_Golurk_[];
extern const u32 gMonShinyPalette_Pawniard_[];
extern const u32 gMonShinyPalette_Bisharp_[];
extern const u32 gMonShinyPalette_Bouffalant_[];
extern const u32 gMonShinyPalette_Rufflet_[];
extern const u32 gMonShinyPalette_Braviary_[];
extern const u32 gMonShinyPalette_Vullaby_[];
extern const u32 gMonShinyPalette_Mandibuzz_[];
extern const u32 gMonShinyPalette_Heatmor_[];
extern const u32 gMonShinyPalette_Durant_[];
extern const u32 gMonShinyPalette_Deino_[];
extern const u32 gMonShinyPalette_Zweilous_[];
extern const u32 gMonShinyPalette_Hydreigon_[];
extern const u32 gMonShinyPalette_Larvesta_[];
extern const u32 gMonShinyPalette_Volcarona_[];
extern const u32 gMonShinyPalette_Cobalion_[];
extern const u32 gMonShinyPalette_Terrakion_[];
extern const u32 gMonShinyPalette_Virizion_[];
extern const u32 gMonShinyPalette_Tornadus_[];
extern const u32 gMonShinyPalette_Thundurus_[];
extern const u32 gMonShinyPalette_Reshiram_[];
extern const u32 gMonShinyPalette_Zekrom_[];
extern const u32 gMonShinyPalette_Landorus_[];
extern const u32 gMonShinyPalette_Kyurem_[];
extern const u32 gMonShinyPalette_Keldeo_[];
extern const u32 gMonShinyPalette_Meloetta_[];
extern const u32 gMonShinyPalette_Genesect_[];
extern const u32 gMonShinyPalette_Chespin_[];
extern const u32 gMonShinyPalette_Quilladin_[];
extern const u32 gMonShinyPalette_Chesnaught_[];
extern const u32 gMonShinyPalette_Fennekin_[];
extern const u32 gMonShinyPalette_Braixen_[];
extern const u32 gMonShinyPalette_Delphox_[];
extern const u32 gMonShinyPalette_Froakie_[];
extern const u32 gMonShinyPalette_Frogadier_[];
extern const u32 gMonShinyPalette_Greninja_[];
extern const u32 gMonShinyPalette_Bunnelby_[];
extern const u32 gMonShinyPalette_Diggersby_[];
extern const u32 gMonShinyPalette_Fletchling_[];
extern const u32 gMonShinyPalette_Flechinder_[];
extern const u32 gMonShinyPalette_Talonflame_[];
extern const u32 gMonShinyPalette_Scatterbug_[];
extern const u32 gMonShinyPalette_Spewpa_[];
extern const u32 gMonShinyPalette_Vivillon_[];
extern const u32 gMonShinyPalette_Litleo_[];
extern const u32 gMonShinyPalette_Pyroar_[];
extern const u32 gMonShinyPalette_Flabebe_[];
extern const u32 gMonShinyPalette_Floette_[];
extern const u32 gMonShinyPalette_Florges_[];
extern const u32 gMonShinyPalette_Skiddo_[];
extern const u32 gMonShinyPalette_Gogoat_[];
extern const u32 gMonShinyPalette_Pancham_[];
extern const u32 gMonShinyPalette_Pangoro_[];
extern const u32 gMonShinyPalette_Furfrou_[];
extern const u32 gMonShinyPalette_Espurr_[];
extern const u32 gMonShinyPalette_Meowstic_[];
extern const u32 gMonShinyPalette_Honedge_[];
extern const u32 gMonShinyPalette_Doublade_[];
extern const u32 gMonShinyPalette_Aegislash_[];
extern const u32 gMonShinyPalette_Spritzee_[];
extern const u32 gMonShinyPalette_Aromatisse_[];
extern const u32 gMonShinyPalette_Swirlix_[];
extern const u32 gMonShinyPalette_Slurpuff_[];
extern const u32 gMonShinyPalette_Inkay_[];
extern const u32 gMonShinyPalette_Malamar_[];
extern const u32 gMonShinyPalette_Binacle_[];
extern const u32 gMonShinyPalette_Barbaracle_[];
extern const u32 gMonShinyPalette_Skrelp_[];
extern const u32 gMonShinyPalette_Dragalge_[];
extern const u32 gMonShinyPalette_Clauncher_[];
extern const u32 gMonShinyPalette_Clawitzer_[];
extern const u32 gMonShinyPalette_Helioptile_[];
extern const u32 gMonShinyPalette_Heliolisk_[];
extern const u32 gMonShinyPalette_Tyrunt_[];
extern const u32 gMonShinyPalette_Tyrantrum_[];
extern const u32 gMonShinyPalette_Amaura_[];
extern const u32 gMonShinyPalette_Aurorus_[];
extern const u32 gMonShinyPalette_Sylveon_[];
extern const u32 gMonShinyPalette_Hawlucha_[];
extern const u32 gMonShinyPalette_Dedenne_[];
extern const u32 gMonShinyPalette_Carbink_[];
extern const u32 gMonShinyPalette_Goomy_[];
extern const u32 gMonShinyPalette_Sliggoo_[];
extern const u32 gMonShinyPalette_Goodra_[];
extern const u32 gMonShinyPalette_Klefki_[];
extern const u32 gMonShinyPalette_Phantump_[];
extern const u32 gMonShinyPalette_Trevenant_[];
extern const u32 gMonShinyPalette_Pumpkaboo_[];
extern const u32 gMonShinyPalette_Gourgeist_[];
extern const u32 gMonShinyPalette_Bergmite_[];
extern const u32 gMonShinyPalette_Avalugg_[];
extern const u32 gMonShinyPalette_Noibat_[];
extern const u32 gMonShinyPalette_Noivern_[];
extern const u32 gMonShinyPalette_Xerneas_[];
extern const u32 gMonShinyPalette_Yveltal_[];
extern const u32 gMonShinyPalette_Zygarde_[];
extern const u32 gMonShinyPalette_Diancie_[];
extern const u32 gMonShinyPalette_Hoopa_[];
extern const u32 gMonShinyPalette_Volcanion_[];
extern const u32 gMonShinyPalette_Rowlet_[];
extern const u32 gMonShinyPalette_Dartrix_[];
extern const u32 gMonShinyPalette_Decidueye_[];
extern const u32 gMonShinyPalette_Litten_[];
extern const u32 gMonShinyPalette_Torracat_[];
extern const u32 gMonShinyPalette_Incineroar_[];
extern const u32 gMonShinyPalette_Popplio_[];
extern const u32 gMonShinyPalette_Brionne_[];
extern const u32 gMonShinyPalette_Primarina_[];
extern const u32 gMonShinyPalette_Pikipek_[];
extern const u32 gMonShinyPalette_Trumbeak_[];
extern const u32 gMonShinyPalette_Toucannon_[];
extern const u32 gMonShinyPalette_Yungoos_[];
extern const u32 gMonShinyPalette_Gumshoos_[];
extern const u32 gMonShinyPalette_Grubbin_[];
extern const u32 gMonShinyPalette_Charjabug_[];
extern const u32 gMonShinyPalette_Vikavolt_[];
extern const u32 gMonShinyPalette_Crabrawler_[];
extern const u32 gMonShinyPalette_Crabminabl_[];
extern const u32 gMonShinyPalette_Oricorio_[];
extern const u32 gMonShinyPalette_Cutiefly_[];
extern const u32 gMonShinyPalette_Ribombee_[];
extern const u32 gMonShinyPalette_Rockruff_[];
extern const u32 gMonShinyPalette_Lycanroc_[];
extern const u32 gMonShinyPalette_Wishiwashi_[];
extern const u32 gMonShinyPalette_Mareanie_[];
extern const u32 gMonShinyPalette_Toxapex_[];
extern const u32 gMonShinyPalette_Mudbray_[];
extern const u32 gMonShinyPalette_Mudsdale_[];
extern const u32 gMonShinyPalette_Dewpider_[];
extern const u32 gMonShinyPalette_Araquanid_[];
extern const u32 gMonShinyPalette_Fomantis_[];
extern const u32 gMonShinyPalette_Lurantis_[];
extern const u32 gMonShinyPalette_Morelull_[];
extern const u32 gMonShinyPalette_Shiinotic_[];
extern const u32 gMonShinyPalette_Salandit_[];
extern const u32 gMonShinyPalette_Salazzle_[];
extern const u32 gMonShinyPalette_Stufful_[];
extern const u32 gMonShinyPalette_Bewear_[];
extern const u32 gMonShinyPalette_Bounsweet_[];
extern const u32 gMonShinyPalette_Steenee_[];
extern const u32 gMonShinyPalette_Tsareena_[];
extern const u32 gMonShinyPalette_Comfey_[];
extern const u32 gMonShinyPalette_Oranguru_[];
extern const u32 gMonShinyPalette_Passimian_[];
extern const u32 gMonShinyPalette_Wimpod_[];
extern const u32 gMonShinyPalette_Golisopod_[];
extern const u32 gMonShinyPalette_Sandygast_[];
extern const u32 gMonShinyPalette_Palossand_[];
extern const u32 gMonShinyPalette_Pyukumuku_[];
extern const u32 gMonShinyPalette_TypeNull_[];
extern const u32 gMonShinyPalette_Silvally_[];
extern const u32 gMonShinyPalette_Minior_[];
extern const u32 gMonShinyPalette_Komala_[];
extern const u32 gMonShinyPalette_Turtonator_[];
extern const u32 gMonShinyPalette_Togedemaru_[];
extern const u32 gMonShinyPalette_Mimikyu_[];
extern const u32 gMonShinyPalette_Bruxish_[];
extern const u32 gMonShinyPalette_Drampa_[];
extern const u32 gMonShinyPalette_Dhelmise_[];
extern const u32 gMonShinyPalette_Jangmoo_[];
extern const u32 gMonShinyPalette_Hakamoo_[];
extern const u32 gMonShinyPalette_Kommoo_[];
extern const u32 gMonShinyPalette_TapuKoko_[];
extern const u32 gMonShinyPalette_TapuLele_[];
extern const u32 gMonShinyPalette_TapuBulu_[];
extern const u32 gMonShinyPalette_TapuFini_[];
extern const u32 gMonShinyPalette_Cosmog_[];
extern const u32 gMonShinyPalette_Cosmoem_[];
extern const u32 gMonShinyPalette_Solgaleo_[];
extern const u32 gMonShinyPalette_Lunala_[];
extern const u32 gMonShinyPalette_Nihilego_[];
extern const u32 gMonShinyPalette_Buzzwole_[];
extern const u32 gMonShinyPalette_Pheromosa_[];
extern const u32 gMonShinyPalette_Xurkitree_[];
extern const u32 gMonShinyPalette_Celesteela_[];
extern const u32 gMonShinyPalette_Kartana_[];
extern const u32 gMonShinyPalette_Guzzlord_[];
extern const u32 gMonShinyPalette_Necrozma_[];
extern const u32 gMonShinyPalette_Magearna_[];
extern const u32 gMonShinyPalette_Marshadow_[];
extern const u32 gMonShinyPalette_Poipole_[];
extern const u32 gMonShinyPalette_Naganadel_[];
extern const u32 gMonShinyPalette_Stakataka_[];
extern const u32 gMonShinyPalette_Blacephaln_[];
extern const u32 gMonShinyPalette_Zeraora_[];
extern const u32 gMonShinyPalette_Meltan_[];
extern const u32 gMonShinyPalette_Melmetal_[];
extern const u32 gMonShinyPalette_Grookey_[];
extern const u32 gMonShinyPalette_Thwackey_[];
extern const u32 gMonShinyPalette_Rillaboom_[];
extern const u32 gMonShinyPalette_Scorbunny_[];
extern const u32 gMonShinyPalette_Raboot_[];
extern const u32 gMonShinyPalette_Cinderace_[];
extern const u32 gMonShinyPalette_Sobble_[];
extern const u32 gMonShinyPalette_Drizzile_[];
extern const u32 gMonShinyPalette_Inteleon_[];
extern const u32 gMonShinyPalette_Skwovet_[];
extern const u32 gMonShinyPalette_Greedent_[];
extern const u32 gMonShinyPalette_Rookidee_[];
extern const u32 gMonShinyPalette_Corvisquir_[];
extern const u32 gMonShinyPalette_Corviknigh_[];
extern const u32 gMonShinyPalette_Blipbug_[];
extern const u32 gMonShinyPalette_Dottler_[];
extern const u32 gMonShinyPalette_Orbeetle_[];
extern const u32 gMonShinyPalette_Nickit_[];
extern const u32 gMonShinyPalette_Thievul_[];
extern const u32 gMonShinyPalette_Gossifleur_[];
extern const u32 gMonShinyPalette_Eldegoss_[];
extern const u32 gMonShinyPalette_Wooloo_[];
extern const u32 gMonShinyPalette_Dubwool_[];
extern const u32 gMonShinyPalette_Chewtle_[];
extern const u32 gMonShinyPalette_Drednaw_[];
extern const u32 gMonShinyPalette_Yamper_[];
extern const u32 gMonShinyPalette_Boltund_[];
extern const u32 gMonShinyPalette_Rolycoly_[];
extern const u32 gMonShinyPalette_Carkol_[];
extern const u32 gMonShinyPalette_Coalossal_[];
extern const u32 gMonShinyPalette_Applin_[];
extern const u32 gMonShinyPalette_Flapple_[];
extern const u32 gMonShinyPalette_Appletun_[];
extern const u32 gMonShinyPalette_Silicobra_[];
extern const u32 gMonShinyPalette_Sandaconda_[];
extern const u32 gMonShinyPalette_Cramorant_[];
extern const u32 gMonShinyPalette_Arrokuda_[];
extern const u32 gMonShinyPalette_Barraskewd_[];
extern const u32 gMonShinyPalette_Toxel_[];
extern const u32 gMonShinyPalette_Toxtricity_[];
extern const u32 gMonShinyPalette_Sizzlipede_[];
extern const u32 gMonShinyPalette_Centiskorc_[];
extern const u32 gMonShinyPalette_Clobbopus_[];
extern const u32 gMonShinyPalette_Grapploct_[];
extern const u32 gMonShinyPalette_Sinistea_[];
extern const u32 gMonShinyPalette_Polteageis_[];
extern const u32 gMonShinyPalette_Hatenna_[];
extern const u32 gMonShinyPalette_Hattrem_[];
extern const u32 gMonShinyPalette_Hatterene_[];
extern const u32 gMonShinyPalette_Impidimp_[];
extern const u32 gMonShinyPalette_Morgrem_[];
extern const u32 gMonShinyPalette_Grimmsnarl_[];
extern const u32 gMonShinyPalette_Obstagoon_[];
extern const u32 gMonShinyPalette_Perrserker_[];
extern const u32 gMonShinyPalette_Cursola_[];
extern const u32 gMonShinyPalette_Sirfetchd_[];
extern const u32 gMonShinyPalette_MrRime_[];
extern const u32 gMonShinyPalette_Runerigus_[];
extern const u32 gMonShinyPalette_Milcery_[];
extern const u32 gMonShinyPalette_Alcremie_[];
extern const u32 gMonShinyPalette_Falinks_[];
extern const u32 gMonShinyPalette_Pincurchin_[];
extern const u32 gMonShinyPalette_Snom_[];
extern const u32 gMonShinyPalette_Frosmoth_[];
extern const u32 gMonShinyPalette_Stonjourne_[];
extern const u32 gMonShinyPalette_Eiscue_[];
extern const u32 gMonShinyPalette_Indeedee_[];
extern const u32 gMonShinyPalette_Morpeko_[];
extern const u32 gMonShinyPalette_Cufant_[];
extern const u32 gMonShinyPalette_Copperajah_[];
extern const u32 gMonShinyPalette_Dracozolt_[];
extern const u32 gMonShinyPalette_Arctozolt_[];
extern const u32 gMonShinyPalette_Dracovish_[];
extern const u32 gMonShinyPalette_Arctovish_[];
extern const u32 gMonShinyPalette_Duraludon_[];
extern const u32 gMonShinyPalette_Dreepy_[];
extern const u32 gMonShinyPalette_Drakloak_[];
extern const u32 gMonShinyPalette_Dragapult_[];
extern const u32 gMonShinyPalette_Zacian_[];
extern const u32 gMonShinyPalette_Zamazenta_[];
extern const u32 gMonShinyPalette_Eternatus_[];
extern const u32 gMonShinyPalette_Kubfu_[];
extern const u32 gMonShinyPalette_Urshifu_[];
extern const u32 gMonShinyPalette_Zarude_[];
extern const u32 gMonShinyPalette_Regieleki_[];
extern const u32 gMonShinyPalette_Regidrago_[];
extern const u32 gMonShinyPalette_Glastrier_[];
extern const u32 gMonShinyPalette_Spectrier_[];
extern const u32 gMonShinyPalette_Calyrex_[];
extern const u32 gMonShinyPalette_Wyrdeer_[];
extern const u32 gMonShinyPalette_Kleavor_[];
extern const u32 gMonShinyPalette_Ursaluna_[];
extern const u32 gMonShinyPalette_Bsculegion_[];
extern const u32 gMonShinyPalette_Sneasler_[];
extern const u32 gMonShinyPalette_Overqwil_[];
extern const u32 gMonShinyPalette_Enamorus_[];
extern const u32 gMonShinyPalette_Venusaur2_[];
extern const u32 gMonShinyPalette_Charizard2_[];
extern const u32 gMonShinyPalette_Charizard3_[];
extern const u32 gMonShinyPalette_Blastoise2_[];
extern const u32 gMonShinyPalette_Beedrill2_[];
extern const u32 gMonShinyPalette_Pidgeot2_[];
extern const u32 gMonShinyPalette_Alakazam2_[];
extern const u32 gMonShinyPalette_Slowbro2_[];
extern const u32 gMonShinyPalette_Gengar2_[];
extern const u32 gMonShinyPalette_Kangaskhan2_[];
extern const u32 gMonShinyPalette_Pinsir2_[];
extern const u32 gMonShinyPalette_Gyarados2_[];
extern const u32 gMonShinyPalette_Aerodactyl2_[];
extern const u32 gMonShinyPalette_Mewtwo2_[];
extern const u32 gMonShinyPalette_Mewtwo3_[];
extern const u32 gMonShinyPalette_Ampharos2_[];
extern const u32 gMonShinyPalette_Steelix2_[];
extern const u32 gMonShinyPalette_Scizor2_[];
extern const u32 gMonShinyPalette_Heracross2_[];
extern const u32 gMonShinyPalette_Houndoom2_[];
extern const u32 gMonShinyPalette_Tyranitar2_[];
extern const u32 gMonShinyPalette_Sceptile2_[];
extern const u32 gMonShinyPalette_Blaziken2_[];
extern const u32 gMonShinyPalette_Swampert2_[];
extern const u32 gMonShinyPalette_Gardevoir2_[];
extern const u32 gMonShinyPalette_Sableye2_[];
extern const u32 gMonShinyPalette_Mawile2_[];
extern const u32 gMonShinyPalette_Aggron2_[];
extern const u32 gMonShinyPalette_Medicham2_[];
extern const u32 gMonShinyPalette_Manectric2_[];
extern const u32 gMonShinyPalette_Sharpedo2_[];
extern const u32 gMonShinyPalette_Camerupt2_[];
extern const u32 gMonShinyPalette_Altaria2_[];
extern const u32 gMonShinyPalette_Banette2_[];
extern const u32 gMonShinyPalette_Absol2_[];
extern const u32 gMonShinyPalette_Glalie2_[];
extern const u32 gMonShinyPalette_Salamence2_[];
extern const u32 gMonShinyPalette_Metagross2_[];
extern const u32 gMonShinyPalette_Latias2_[];
extern const u32 gMonShinyPalette_Latios2_[];
extern const u32 gMonShinyPalette_Lopunny2_[];
extern const u32 gMonShinyPalette_Garchomp2_[];
extern const u32 gMonShinyPalette_Lucario2_[];
extern const u32 gMonShinyPalette_Abomasnow2_[];
extern const u32 gMonShinyPalette_Gallade2_[];
extern const u32 gMonShinyPalette_Audino2_[];
extern const u32 gMonShinyPalette_Diancie2_[];
extern const u32 gMonShinyPalette_Rayquaza2_[];
extern const u32 gMonShinyPalette_Kyogre2_[];
extern const u32 gMonShinyPalette_Groudon2_[];
extern const u32 gMonShinyPalette_Rattata2_[];
extern const u32 gMonShinyPalette_Raticate2_[];
extern const u32 gMonShinyPalette_Raichu2_[];
extern const u32 gMonShinyPalette_Sandshrew2_[];
extern const u32 gMonShinyPalette_Sandslash2_[];
extern const u32 gMonShinyPalette_Vulpix2_[];
extern const u32 gMonShinyPalette_Ninetales2_[];
extern const u32 gMonShinyPalette_Diglett2_[];
extern const u32 gMonShinyPalette_Dugtrio2_[];
extern const u32 gMonShinyPalette_Meowth2_[];
extern const u32 gMonShinyPalette_Persian2_[];
extern const u32 gMonShinyPalette_Geodude2_[];
extern const u32 gMonShinyPalette_Graveler2_[];
extern const u32 gMonShinyPalette_Golem2_[];
extern const u32 gMonShinyPalette_Grimer2_[];
extern const u32 gMonShinyPalette_Muk2_[];
extern const u32 gMonShinyPalette_Exeggutor2_[];
extern const u32 gMonShinyPalette_Marowak2_[];
extern const u32 gMonShinyPalette_Meowth3_[];
extern const u32 gMonShinyPalette_Ponyta2_[];
extern const u32 gMonShinyPalette_Rapidash2_[];
extern const u32 gMonShinyPalette_Slowpoke2_[];
extern const u32 gMonShinyPalette_Slowbro3_[];
extern const u32 gMonShinyPalette_Farfetchd2_[];
extern const u32 gMonShinyPalette_Weezing2_[];
extern const u32 gMonShinyPalette_MrMime2_[];
extern const u32 gMonShinyPalette_Articuno2_[];
extern const u32 gMonShinyPalette_Zapdos2_[];
extern const u32 gMonShinyPalette_Moltres2_[];
extern const u32 gMonShinyPalette_Slowking2_[];
extern const u32 gMonShinyPalette_Corsola2_[];
extern const u32 gMonShinyPalette_Zigzagoon2_[];
extern const u32 gMonShinyPalette_Linoone2_[];
extern const u32 gMonShinyPalette_Darumaka2_[];
extern const u32 gMonShinyPalette_Darmanitan2_[];
extern const u32 gMonShinyPalette_Yamask2_[];
extern const u32 gMonShinyPalette_Stunfisk2_[];
extern const u32 gMonShinyPalette_Growlithe2_[];
extern const u32 gMonShinyPalette_Arcanine2_[];
extern const u32 gMonShinyPalette_Voltorb2_[];
extern const u32 gMonShinyPalette_Electrode2_[];
extern const u32 gMonShinyPalette_Typhlosion2_[];
extern const u32 gMonShinyPalette_Qwilfish2_[];
extern const u32 gMonShinyPalette_Sneasel2_[];
extern const u32 gMonShinyPalette_Samurott2_[];
extern const u32 gMonShinyPalette_Lilligant2_[];
extern const u32 gMonShinyPalette_Zorua2_[];
extern const u32 gMonShinyPalette_Zoroark2_[];
extern const u32 gMonShinyPalette_Braviary2_[];
extern const u32 gMonShinyPalette_Sliggoo2_[];
extern const u32 gMonShinyPalette_Goodra2_[];
extern const u32 gMonShinyPalette_Avalugg2_[];
extern const u32 gMonShinyPalette_Decidueye2_[];
extern const u32 gMonShinyPalette_Pikachu2_[];
extern const u32 gMonShinyPalette_Pikachu3_[];
extern const u32 gMonShinyPalette_Pikachu4_[];
extern const u32 gMonShinyPalette_Pikachu5_[];
extern const u32 gMonShinyPalette_Pikachu6_[];
extern const u32 gMonShinyPalette_Pikachu7_[];
extern const u32 gMonShinyPalette_Pikachu8_[];
extern const u32 gMonShinyPalette_Pikachu9_[];
extern const u32 gMonShinyPalette_Pikachu10_[];
extern const u32 gMonShinyPalette_Pikachu11_[];
extern const u32 gMonShinyPalette_Pikachu12_[];
extern const u32 gMonShinyPalette_Pikachu13_[];
extern const u32 gMonShinyPalette_Pikachu14_[];
extern const u32 gMonShinyPalette_Pikachu15_[];
extern const u32 gMonShinyPalette_Pichu2_[];
extern const u32 gMonShinyPalette_UnownB_[];
extern const u32 gMonShinyPalette_UnownC_[];
extern const u32 gMonShinyPalette_UnownD_[];
extern const u32 gMonShinyPalette_UnownE_[];
extern const u32 gMonShinyPalette_UnownF_[];
extern const u32 gMonShinyPalette_UnownG_[];
extern const u32 gMonShinyPalette_UnownH_[];
extern const u32 gMonShinyPalette_UnownI_[];
extern const u32 gMonShinyPalette_UnownJ_[];
extern const u32 gMonShinyPalette_UnownK_[];
extern const u32 gMonShinyPalette_UnownL_[];
extern const u32 gMonShinyPalette_UnownM_[];
extern const u32 gMonShinyPalette_UnownN_[];
extern const u32 gMonShinyPalette_UnownO_[];
extern const u32 gMonShinyPalette_UnownP_[];
extern const u32 gMonShinyPalette_UnownQ_[];
extern const u32 gMonShinyPalette_UnownR_[];
extern const u32 gMonShinyPalette_UnownS_[];
extern const u32 gMonShinyPalette_UnownT_[];
extern const u32 gMonShinyPalette_UnownU_[];
extern const u32 gMonShinyPalette_UnownV_[];
extern const u32 gMonShinyPalette_UnownW_[];
extern const u32 gMonShinyPalette_UnownX_[];
extern const u32 gMonShinyPalette_UnownY_[];
extern const u32 gMonShinyPalette_UnownZ_[];
extern const u32 gMonShinyPalette_UnownEMark_[];
extern const u32 gMonShinyPalette_UnownQMark_[];
extern const u32 gMonShinyPalette_Castform2_[];
extern const u32 gMonShinyPalette_Castform3_[];
extern const u32 gMonShinyPalette_Castform4_[];
extern const u32 gMonShinyPalette_Deoxys2_[];
extern const u32 gMonShinyPalette_Deoxys3_[];
extern const u32 gMonShinyPalette_Deoxys4_[];
extern const u32 gMonShinyPalette_Burmy2_[];
extern const u32 gMonShinyPalette_Burmy3_[];
extern const u32 gMonShinyPalette_Wormadam2_[];
extern const u32 gMonShinyPalette_Wormadam3_[];
extern const u32 gMonShinyPalette_Cherrim2_[];
extern const u32 gMonShinyPalette_Shellos2_[];
extern const u32 gMonShinyPalette_Gastrodon2_[];
extern const u32 gMonShinyPalette_Rotom2_[];
extern const u32 gMonShinyPalette_Rotom3_[];
extern const u32 gMonShinyPalette_Rotom4_[];
extern const u32 gMonShinyPalette_Rotom5_[];
extern const u32 gMonShinyPalette_Rotom6_[];
extern const u32 gMonShinyPalette_Dialga2_[];
extern const u32 gMonShinyPalette_Palkia2_[];
extern const u32 gMonShinyPalette_Giratina2_[];
extern const u32 gMonShinyPalette_Shaymin2_[];
extern const u32 gMonShinyPalette_Arceus2_[];
extern const u32 gMonShinyPalette_Arceus3_[];
extern const u32 gMonShinyPalette_Arceus4_[];
extern const u32 gMonShinyPalette_Arceus5_[];
extern const u32 gMonShinyPalette_Arceus6_[];
extern const u32 gMonShinyPalette_Arceus7_[];
extern const u32 gMonShinyPalette_Arceus8_[];
extern const u32 gMonShinyPalette_Arceus9_[];
extern const u32 gMonShinyPalette_Arceus10_[];
extern const u32 gMonShinyPalette_Arceus11_[];
extern const u32 gMonShinyPalette_Arceus12_[];
extern const u32 gMonShinyPalette_Arceus13_[];
extern const u32 gMonShinyPalette_Arceus14_[];
extern const u32 gMonShinyPalette_Arceus15_[];
extern const u32 gMonShinyPalette_Arceus16_[];
extern const u32 gMonShinyPalette_Arceus17_[];
extern const u32 gMonShinyPalette_Arceus18_[];
extern const u32 gMonShinyPalette_Basculin2_[];
extern const u32 gMonShinyPalette_Basculin3_[];
extern const u32 gMonShinyPalette_Darmanitan3_[];
extern const u32 gMonShinyPalette_Darmanitan4_[];
extern const u32 gMonShinyPalette_Deerling2_[];
extern const u32 gMonShinyPalette_Deerling3_[];
extern const u32 gMonShinyPalette_Deerling4_[];
extern const u32 gMonShinyPalette_Sawsbuck2_[];
extern const u32 gMonShinyPalette_Sawsbuck3_[];
extern const u32 gMonShinyPalette_Sawsbuck4_[];
extern const u32 gMonShinyPalette_Tornadus2_[];
extern const u32 gMonShinyPalette_Thundurus2_[];
extern const u32 gMonShinyPalette_Landorus2_[];
extern const u32 gMonShinyPalette_Enamorus2_[];
extern const u32 gMonShinyPalette_Kyurem2_[];
extern const u32 gMonShinyPalette_Kyurem3_[];
extern const u32 gMonShinyPalette_Keldeo2_[];
extern const u32 gMonShinyPalette_Meloetta2_[];
extern const u32 gMonShinyPalette_Genesect2_[];
extern const u32 gMonShinyPalette_Genesect3_[];
extern const u32 gMonShinyPalette_Genesect4_[];
extern const u32 gMonShinyPalette_Genesect5_[];
extern const u32 gMonShinyPalette_Greninja2_[];
extern const u32 gMonShinyPalette_Greninja3_[];
extern const u32 gMonShinyPalette_Vivillon2_[];
extern const u32 gMonShinyPalette_Vivillon3_[];
extern const u32 gMonShinyPalette_Vivillon4_[];
extern const u32 gMonShinyPalette_Vivillon5_[];
extern const u32 gMonShinyPalette_Vivillon6_[];
extern const u32 gMonShinyPalette_Vivillon7_[];
extern const u32 gMonShinyPalette_Vivillon8_[];
extern const u32 gMonShinyPalette_Vivillon9_[];
extern const u32 gMonShinyPalette_Vivillon10_[];
extern const u32 gMonShinyPalette_Vivillon11_[];
extern const u32 gMonShinyPalette_Vivillon12_[];
extern const u32 gMonShinyPalette_Vivillon13_[];
extern const u32 gMonShinyPalette_Vivillon14_[];
extern const u32 gMonShinyPalette_Vivillon15_[];
extern const u32 gMonShinyPalette_Vivillon16_[];
extern const u32 gMonShinyPalette_Vivillon17_[];
extern const u32 gMonShinyPalette_Vivillon18_[];
extern const u32 gMonShinyPalette_Vivillon19_[];
extern const u32 gMonShinyPalette_Vivillon20_[];
extern const u32 gMonShinyPalette_Flabebe2_[];
extern const u32 gMonShinyPalette_Flabebe3_[];
extern const u32 gMonShinyPalette_Flabebe4_[];
extern const u32 gMonShinyPalette_Flabebe5_[];
extern const u32 gMonShinyPalette_Floette2_[];
extern const u32 gMonShinyPalette_Floette3_[];
extern const u32 gMonShinyPalette_Floette4_[];
extern const u32 gMonShinyPalette_Floette5_[];
extern const u32 gMonShinyPalette_Floette6_[];
extern const u32 gMonShinyPalette_Florges2_[];
extern const u32 gMonShinyPalette_Florges3_[];
extern const u32 gMonShinyPalette_Florges4_[];
extern const u32 gMonShinyPalette_Florges5_[];
extern const u32 gMonShinyPalette_Furfrou2_[];
extern const u32 gMonShinyPalette_Furfrou3_[];
extern const u32 gMonShinyPalette_Furfrou4_[];
extern const u32 gMonShinyPalette_Furfrou5_[];
extern const u32 gMonShinyPalette_Furfrou6_[];
extern const u32 gMonShinyPalette_Furfrou7_[];
extern const u32 gMonShinyPalette_Furfrou8_[];
extern const u32 gMonShinyPalette_Furfrou9_[];
extern const u32 gMonShinyPalette_Furfrou10_[];
extern const u32 gMonShinyPalette_Meowstic2_[];
extern const u32 gMonShinyPalette_Aegislash2_[];
extern const u32 gMonShinyPalette_Pumpkaboo2_[];
extern const u32 gMonShinyPalette_Pumpkaboo3_[];
extern const u32 gMonShinyPalette_Pumpkaboo4_[];
extern const u32 gMonShinyPalette_Gourgeist2_[];
extern const u32 gMonShinyPalette_Gourgeist3_[];
extern const u32 gMonShinyPalette_Gourgeist4_[];
extern const u32 gMonShinyPalette_Xerneas2_[];
extern const u32 gMonShinyPalette_Zygarde2_[];
extern const u32 gMonShinyPalette_Zygarde3_[];
extern const u32 gMonShinyPalette_Zygarde4_[];
extern const u32 gMonShinyPalette_Zygarde5_[];
extern const u32 gMonShinyPalette_Hoopa2_[];
extern const u32 gMonShinyPalette_Oricorio2_[];
extern const u32 gMonShinyPalette_Oricorio3_[];
extern const u32 gMonShinyPalette_Oricorio4_[];
extern const u32 gMonShinyPalette_Rockruff2_[];
extern const u32 gMonShinyPalette_Lycanroc2_[];
extern const u32 gMonShinyPalette_Lycanroc3_[];
extern const u32 gMonShinyPalette_Wishiwashi2_[];
extern const u32 gMonShinyPalette_Silvally2_[];
extern const u32 gMonShinyPalette_Silvally3_[];
extern const u32 gMonShinyPalette_Silvally4_[];
extern const u32 gMonShinyPalette_Silvally5_[];
extern const u32 gMonShinyPalette_Silvally6_[];
extern const u32 gMonShinyPalette_Silvally7_[];
extern const u32 gMonShinyPalette_Silvally8_[];
extern const u32 gMonShinyPalette_Silvally9_[];
extern const u32 gMonShinyPalette_Silvally10_[];
extern const u32 gMonShinyPalette_Silvally11_[];
extern const u32 gMonShinyPalette_Silvally12_[];
extern const u32 gMonShinyPalette_Silvally13_[];
extern const u32 gMonShinyPalette_Silvally14_[];
extern const u32 gMonShinyPalette_Silvally15_[];
extern const u32 gMonShinyPalette_Silvally16_[];
extern const u32 gMonShinyPalette_Silvally17_[];
extern const u32 gMonShinyPalette_Silvally18_[];
extern const u32 gMonShinyPalette_Minior2_[];
extern const u32 gMonShinyPalette_Minior3_[];
extern const u32 gMonShinyPalette_Minior4_[];
extern const u32 gMonShinyPalette_Minior5_[];
extern const u32 gMonShinyPalette_Minior6_[];
extern const u32 gMonShinyPalette_Minior7_[];
extern const u32 gMonShinyPalette_Minior8_[];
extern const u32 gMonShinyPalette_Minior9_[];
extern const u32 gMonShinyPalette_Minior10_[];
extern const u32 gMonShinyPalette_Minior11_[];
extern const u32 gMonShinyPalette_Minior12_[];
extern const u32 gMonShinyPalette_Minior13_[];
extern const u32 gMonShinyPalette_Minior14_[];
extern const u32 gMonShinyPalette_Mimikyu2_[];
extern const u32 gMonShinyPalette_Necrozma2_[];
extern const u32 gMonShinyPalette_Necrozma3_[];
extern const u32 gMonShinyPalette_Necrozma4_[];
extern const u32 gMonShinyPalette_Magearna2_[];
extern const u32 gMonShinyPalette_Cramorant2_[];
extern const u32 gMonShinyPalette_Cramorant3_[];
extern const u32 gMonShinyPalette_Toxtricity2_[];
extern const u32 gMonShinyPalette_Sinistea2_[];
extern const u32 gMonShinyPalette_Polteageis2_[];
extern const u32 gMonShinyPalette_Alcremie2_[];
extern const u32 gMonShinyPalette_Alcremie3_[];
extern const u32 gMonShinyPalette_Alcremie4_[];
extern const u32 gMonShinyPalette_Alcremie5_[];
extern const u32 gMonShinyPalette_Alcremie6_[];
extern const u32 gMonShinyPalette_Alcremie7_[];
extern const u32 gMonShinyPalette_Alcremie8_[];
extern const u32 gMonShinyPalette_Alcremie9_[];
extern const u32 gMonShinyPalette_Eiscue2_[];
extern const u32 gMonShinyPalette_Indeedee2_[];
extern const u32 gMonShinyPalette_Morpeko2_[];
extern const u32 gMonShinyPalette_Zacian2_[];
extern const u32 gMonShinyPalette_Zamazenta2_[];
extern const u32 gMonShinyPalette_Eternatus2_[];
extern const u32 gMonShinyPalette_Urshifu2_[];
extern const u32 gMonShinyPalette_Zarude2_[];
extern const u32 gMonShinyPalette_Calyrex2_[];
extern const u32 gMonShinyPalette_Calyrex3_[];
extern const u32 gMonShinyPalette_Bsculegion2_[];
extern const u32 gMonShinyPalette_Alcremie10_[];
extern const u32 gMonShinyPalette_Alcremie11_[];
extern const u32 gMonShinyPalette_Alcremie12_[];
extern const u32 gMonShinyPalette_Alcremie13_[];
extern const u32 gMonShinyPalette_Alcremie14_[];
extern const u32 gMonShinyPalette_Alcremie15_[];
extern const u32 gMonShinyPalette_Alcremie16_[];
extern const u32 gMonShinyPalette_Alcremie17_[];
extern const u32 gMonShinyPalette_Alcremie18_[];
extern const u32 gMonShinyPalette_Alcremie19_[];
extern const u32 gMonShinyPalette_Alcremie20_[];
extern const u32 gMonShinyPalette_Alcremie21_[];
extern const u32 gMonShinyPalette_Alcremie22_[];
extern const u32 gMonShinyPalette_Alcremie23_[];
extern const u32 gMonShinyPalette_Alcremie24_[];
extern const u32 gMonShinyPalette_Alcremie25_[];
extern const u32 gMonShinyPalette_Alcremie26_[];
extern const u32 gMonShinyPalette_Alcremie27_[];
extern const u32 gMonShinyPalette_Alcremie28_[];
extern const u32 gMonShinyPalette_Alcremie29_[];
extern const u32 gMonShinyPalette_Alcremie30_[];
extern const u32 gMonShinyPalette_Alcremie31_[];
extern const u32 gMonShinyPalette_Alcremie32_[];
extern const u32 gMonShinyPalette_Alcremie33_[];
extern const u32 gMonShinyPalette_Alcremie34_[];
extern const u32 gMonShinyPalette_Alcremie35_[];
extern const u32 gMonShinyPalette_Alcremie36_[];
extern const u32 gMonShinyPalette_Alcremie37_[];
extern const u32 gMonShinyPalette_Alcremie38_[];
extern const u32 gMonShinyPalette_Alcremie39_[];
extern const u32 gMonShinyPalette_Alcremie40_[];
extern const u32 gMonShinyPalette_Alcremie41_[];
extern const u32 gMonShinyPalette_Alcremie42_[];
extern const u32 gMonShinyPalette_Alcremie43_[];
extern const u32 gMonShinyPalette_Alcremie44_[];
extern const u32 gMonShinyPalette_Alcremie45_[];
extern const u32 gMonShinyPalette_Alcremie46_[];
extern const u32 gMonShinyPalette_Alcremie47_[];
extern const u32 gMonShinyPalette_Alcremie48_[];
extern const u32 gMonShinyPalette_Alcremie49_[];
extern const u32 gMonShinyPalette_Alcremie50_[];
extern const u32 gMonShinyPalette_Alcremie51_[];
extern const u32 gMonShinyPalette_Alcremie52_[];
extern const u32 gMonShinyPalette_Alcremie53_[];
extern const u32 gMonShinyPalette_Alcremie54_[];
extern const u32 gMonShinyPalette_Alcremie55_[];
extern const u32 gMonShinyPalette_Alcremie56_[];
extern const u32 gMonShinyPalette_Alcremie57_[];
extern const u32 gMonShinyPalette_Alcremie58_[];
extern const u32 gMonShinyPalette_Alcremie59_[];
extern const u32 gMonShinyPalette_Alcremie60_[];
extern const u32 gMonShinyPalette_Alcremie61_[];
extern const u32 gMonShinyPalette_Alcremie62_[];
extern const u32 gMonShinyPalette_Alcremie63_[];
extern const u32 gMonShinyPalette_Sprigatito_[];
extern const u32 gMonShinyPalette_Floragato_[];
extern const u32 gMonShinyPalette_Meowscarad_[];
extern const u32 gMonShinyPalette_Fuecoco_[];
extern const u32 gMonShinyPalette_Crocalor_[];
extern const u32 gMonShinyPalette_Skeledirge_[];
extern const u32 gMonShinyPalette_Quaxly_[];
extern const u32 gMonShinyPalette_Quaxwell_[];
extern const u32 gMonShinyPalette_Quaquaval_[];
extern const u32 gMonShinyPalette_Lechonk_[];
extern const u32 gMonShinyPalette_Oinkologne_[];
extern const u32 gMonShinyPalette_Oinkologne2_[];
extern const u32 gMonShinyPalette_Tarountula_[];
extern const u32 gMonShinyPalette_Spidops_[];
extern const u32 gMonShinyPalette_Nymble_[];
extern const u32 gMonShinyPalette_Lokix_[];
extern const u32 gMonShinyPalette_Pawmi_[];
extern const u32 gMonShinyPalette_Pawmo_[];
extern const u32 gMonShinyPalette_Pawmot_[];
extern const u32 gMonShinyPalette_Tandemaus_[];
extern const u32 gMonShinyPalette_Maushold_[];
extern const u32 gMonShinyPalette_Maushold2_[];
extern const u32 gMonShinyPalette_Fidough_[];
extern const u32 gMonShinyPalette_Dachsbun_[];
extern const u32 gMonShinyPalette_Smoliv_[];
extern const u32 gMonShinyPalette_Dolliv_[];
extern const u32 gMonShinyPalette_Arboliva_[];
extern const u32 gMonShinyPalette_Sqawkabily_[];
extern const u32 gMonShinyPalette_Sqawkabily2_[];
extern const u32 gMonShinyPalette_Sqawkabily3_[];
extern const u32 gMonShinyPalette_Sqawkabily4_[];
extern const u32 gMonShinyPalette_Nacli_[];
extern const u32 gMonShinyPalette_Naclstack_[];
extern const u32 gMonShinyPalette_Garganacl_[];
extern const u32 gMonShinyPalette_Charcadet_[];
extern const u32 gMonShinyPalette_Armarouge_[];
extern const u32 gMonShinyPalette_Ceruledge_[];
extern const u32 gMonShinyPalette_Tadbulb_[];
extern const u32 gMonShinyPalette_Bellibolt_[];
extern const u32 gMonShinyPalette_Wattrel_[];
extern const u32 gMonShinyPalette_Kilowatrel_[];
extern const u32 gMonShinyPalette_Maschiff_[];
extern const u32 gMonShinyPalette_Mabosstiff_[];
extern const u32 gMonShinyPalette_Shroodle_[];
extern const u32 gMonShinyPalette_Grafaiai_[];
extern const u32 gMonShinyPalette_Bramblin_[];
extern const u32 gMonShinyPalette_Brmblghast_[];
extern const u32 gMonShinyPalette_Toedscool_[];
extern const u32 gMonShinyPalette_Toedscruel_[];
extern const u32 gMonShinyPalette_Klawf_[];
extern const u32 gMonShinyPalette_Capsakid_[];
extern const u32 gMonShinyPalette_Scovillain_[];
extern const u32 gMonShinyPalette_Rellor_[];
extern const u32 gMonShinyPalette_Rabsca_[];
extern const u32 gMonShinyPalette_Flittle_[];
extern const u32 gMonShinyPalette_Espathra_[];
extern const u32 gMonShinyPalette_Tinkatink_[];
extern const u32 gMonShinyPalette_Tinkatuff_[];
extern const u32 gMonShinyPalette_Tinkaton_[];
extern const u32 gMonShinyPalette_Wiglett_[];
extern const u32 gMonShinyPalette_Wugtrio_[];
extern const u32 gMonShinyPalette_Bombirdier_[];
extern const u32 gMonShinyPalette_Finizen_[];
extern const u32 gMonShinyPalette_Palafin_[];
extern const u32 gMonShinyPalette_Palafin2_[];
extern const u32 gMonShinyPalette_Varoom_[];
extern const u32 gMonShinyPalette_Revavroom_[];
extern const u32 gMonShinyPalette_Cyclizar_[];
extern const u32 gMonShinyPalette_Orthworm_[];
extern const u32 gMonShinyPalette_Glimmet_[];
extern const u32 gMonShinyPalette_Glimmora_[];
extern const u32 gMonShinyPalette_Greavard_[];
extern const u32 gMonShinyPalette_Houndstone_[];
extern const u32 gMonShinyPalette_Flamigo_[];
extern const u32 gMonShinyPalette_Cetoddle_[];
extern const u32 gMonShinyPalette_Cetitan_[];
extern const u32 gMonShinyPalette_Veluza_[];
extern const u32 gMonShinyPalette_Dondozo_[];
extern const u32 gMonShinyPalette_Tatsugiri_[];
extern const u32 gMonShinyPalette_Tatsugiri2_[];
extern const u32 gMonShinyPalette_Tatsugiri3_[];
extern const u32 gMonShinyPalette_Annihilape_[];
extern const u32 gMonShinyPalette_Clodsire_[];
extern const u32 gMonShinyPalette_Farigiraf_[];
extern const u32 gMonShinyPalette_Dudunsprce_[];
extern const u32 gMonShinyPalette_Dudunsprce2_[];
extern const u32 gMonShinyPalette_Kingambit_[];
extern const u32 gMonShinyPalette_GreatTusk_[];
extern const u32 gMonShinyPalette_ScreamTail_[];
extern const u32 gMonShinyPalette_BruteBonet_[];
extern const u32 gMonShinyPalette_FluttrMane_[];
extern const u32 gMonShinyPalette_SlithrWing_[];
extern const u32 gMonShinyPalette_SndyShocks_[];
extern const u32 gMonShinyPalette_IronTreads_[];
extern const u32 gMonShinyPalette_IronBundle_[];
extern const u32 gMonShinyPalette_IronHands_[];
extern const u32 gMonShinyPalette_IronJuguls_[];
extern const u32 gMonShinyPalette_IronMoth_[];
extern const u32 gMonShinyPalette_IronThorns_[];
extern const u32 gMonShinyPalette_Frigibax_[];
extern const u32 gMonShinyPalette_Arctibax_[];
extern const u32 gMonShinyPalette_Baxcalibur_[];
extern const u32 gMonShinyPalette_Gimmighoul_[];
extern const u32 gMonShinyPalette_Gimmighoul2_[];
extern const u32 gMonShinyPalette_Gholdengo_[];
extern const u32 gMonShinyPalette_WoChien_[];
extern const u32 gMonShinyPalette_ChienPao_[];
extern const u32 gMonShinyPalette_TingLu_[];
extern const u32 gMonShinyPalette_ChiYu_[];
extern const u32 gMonShinyPalette_RoarngMoon_[];
extern const u32 gMonShinyPalette_IronVliant_[];
extern const u32 gMonShinyPalette_Koraidon_[];
extern const u32 gMonShinyPalette_Miraidon_[];
extern const u32 gMonShinyPalette_Tauros2_[];
extern const u32 gMonShinyPalette_Tauros3_[];
extern const u32 gMonShinyPalette_Tauros4_[];
extern const u32 gMonShinyPalette_Wooper2_[];
extern const u32 gMonShinyPalette_WalkngWake_[];
extern const u32 gMonShinyPalette_IronLeaves_[];
extern const u32 gMonShinyPalette_Dipplin_[];
extern const u32 gMonShinyPalette_Ptchageist_[];
extern const u32 gMonShinyPalette_Ptchageist2_[];
extern const u32 gMonShinyPalette_Sinistcha_[];
extern const u32 gMonShinyPalette_Sinistcha2_[];
extern const u32 gMonShinyPalette_Okidogi_[];
extern const u32 gMonShinyPalette_Munkidori_[];
extern const u32 gMonShinyPalette_Fezndipiti_[];
extern const u32 gMonShinyPalette_Ogerpon_[];
extern const u32 gMonShinyPalette_Ogerpon2_[];
extern const u32 gMonShinyPalette_Ogerpon3_[];
extern const u32 gMonShinyPalette_Ogerpon4_[];
extern const u32 gMonShinyPalette_Ogerpon5_[];
extern const u32 gMonShinyPalette_Ogerpon6_[];
extern const u32 gMonShinyPalette_Ogerpon7_[];
extern const u32 gMonShinyPalette_Ogerpon8_[];
extern const u32 gMonShinyPalette_Ursaluna2_[];
extern const u32 gMonShinyPalette_Archaludon_[];
extern const u32 gMonShinyPalette_Hydrapple_[];
extern const u32 gMonShinyPalette_GouginFire_[];
extern const u32 gMonShinyPalette_RagingBolt_[];
extern const u32 gMonShinyPalette_IronBouldr_[];
extern const u32 gMonShinyPalette_IronCrown_[];
extern const u32 gMonShinyPalette_Terapagos_[];
extern const u32 gMonShinyPalette_Terapagos2_[];
extern const u32 gMonShinyPalette_Terapagos3_[];
extern const u32 gMonShinyPalette_Pecharunt_[];
extern const u32 gMonShinyPalette_Mothim2_[];
extern const u32 gMonShinyPalette_Mothim3_[];
extern const u32 gMonShinyPalette_Scatterbug2_[];
extern const u32 gMonShinyPalette_Scatterbug3_[];
extern const u32 gMonShinyPalette_Scatterbug4_[];
extern const u32 gMonShinyPalette_Scatterbug5_[];
extern const u32 gMonShinyPalette_Scatterbug6_[];
extern const u32 gMonShinyPalette_Scatterbug7_[];
extern const u32 gMonShinyPalette_Scatterbug8_[];
extern const u32 gMonShinyPalette_Scatterbug9_[];
extern const u32 gMonShinyPalette_Scatterbug10_[];
extern const u32 gMonShinyPalette_Scatterbug11_[];
extern const u32 gMonShinyPalette_Scatterbug12_[];
extern const u32 gMonShinyPalette_Scatterbug13_[];
extern const u32 gMonShinyPalette_Scatterbug14_[];
extern const u32 gMonShinyPalette_Scatterbug15_[];
extern const u32 gMonShinyPalette_Scatterbug16_[];
extern const u32 gMonShinyPalette_Scatterbug17_[];
extern const u32 gMonShinyPalette_Scatterbug18_[];
extern const u32 gMonShinyPalette_Scatterbug19_[];
extern const u32 gMonShinyPalette_Scatterbug20_[];
extern const u32 gMonShinyPalette_Spewpa2_[];
extern const u32 gMonShinyPalette_Spewpa3_[];
extern const u32 gMonShinyPalette_Spewpa4_[];
extern const u32 gMonShinyPalette_Spewpa5_[];
extern const u32 gMonShinyPalette_Spewpa6_[];
extern const u32 gMonShinyPalette_Spewpa7_[];
extern const u32 gMonShinyPalette_Spewpa8_[];
extern const u32 gMonShinyPalette_Spewpa9_[];
extern const u32 gMonShinyPalette_Spewpa10_[];
extern const u32 gMonShinyPalette_Spewpa11_[];
extern const u32 gMonShinyPalette_Spewpa12_[];
extern const u32 gMonShinyPalette_Spewpa13_[];
extern const u32 gMonShinyPalette_Spewpa14_[];
extern const u32 gMonShinyPalette_Spewpa15_[];
extern const u32 gMonShinyPalette_Spewpa16_[];
extern const u32 gMonShinyPalette_Spewpa17_[];
extern const u32 gMonShinyPalette_Spewpa18_[];
extern const u32 gMonShinyPalette_Spewpa19_[];
extern const u32 gMonShinyPalette_Spewpa20_[];
extern const u32 gMonShinyPalette_Raticate3_[];
extern const u32 gMonShinyPalette_Gumshoos2_[];
extern const u32 gMonShinyPalette_Vikavolt2_[];
extern const u32 gMonShinyPalette_Lurantis2_[];
extern const u32 gMonShinyPalette_Salazzle2_[];
extern const u32 gMonShinyPalette_Mimikyu3_[];
extern const u32 gMonShinyPalette_Kommoo2_[];
extern const u32 gMonShinyPalette_Marowak3_[];
extern const u32 gMonShinyPalette_Ribombee2_[];
extern const u32 gMonShinyPalette_Araquanid2_[];
extern const u32 gMonShinyPalette_Togedemaru2_[];
extern const u32 gMonShinyPalette_Pikachu16_[];
extern const u32 gMonShinyPalette_Eevee2_[];
extern const u32 gMonShinyPalette_Venusaur3_[];
extern const u32 gMonShinyPalette_Blastoise3_[];
extern const u32 gMonShinyPalette_Charizard4_[];
extern const u32 gMonShinyPalette_Butterfree2_[];
extern const u32 gMonShinyPalette_Pikachu17_[];
extern const u32 gMonShinyPalette_Meowth4_[];
extern const u32 gMonShinyPalette_Machamp2_[];
extern const u32 gMonShinyPalette_Gengar3_[];
extern const u32 gMonShinyPalette_Kingler2_[];
extern const u32 gMonShinyPalette_Lapras2_[];
extern const u32 gMonShinyPalette_Eevee3_[];
extern const u32 gMonShinyPalette_Snorlax2_[];
extern const u32 gMonShinyPalette_Garbodor2_[];
extern const u32 gMonShinyPalette_Melmetal2_[];
extern const u32 gMonShinyPalette_Rillaboom2_[];
extern const u32 gMonShinyPalette_Cinderace2_[];
extern const u32 gMonShinyPalette_Inteleon2_[];
extern const u32 gMonShinyPalette_Corviknigh2_[];
extern const u32 gMonShinyPalette_Orbeetle2_[];
extern const u32 gMonShinyPalette_Drednaw2_[];
extern const u32 gMonShinyPalette_Coalossal2_[];
extern const u32 gMonShinyPalette_Flapple2_[];
extern const u32 gMonShinyPalette_Appletun2_[];
extern const u32 gMonShinyPalette_Sandaconda2_[];
extern const u32 gMonShinyPalette_Toxtricity3_[];
extern const u32 gMonShinyPalette_Toxtricity4_[];
extern const u32 gMonShinyPalette_Centiskorc2_[];
extern const u32 gMonShinyPalette_Hatterene2_[];
extern const u32 gMonShinyPalette_Grimmsnarl2_[];
extern const u32 gMonShinyPalette_Alcremie64_[];
extern const u32 gMonShinyPalette_Copperajah2_[];
extern const u32 gMonShinyPalette_Duraludon2_[];
extern const u32 gMonShinyPalette_Urshifu3_[];
extern const u32 gMonShinyPalette_Urshifu4_[];
extern const u32 gMonShinyPalette_Mimikyu4_[];

const struct CompressedSpritePalette gMonShinyPaletteTable_[] =
{
	SPECIES_SHINY_PAL(NONE, gMonShinyPalette_CircledQuestionMark),
	SPECIES_SHINY_PAL(BULBASAUR, gMonShinyPalette_Bulbasaur_),
	SPECIES_SHINY_PAL(IVYSAUR, gMonShinyPalette_Ivysaur_),
	SPECIES_SHINY_PAL(VENUSAUR, gMonShinyPalette_Venusaur_),
	SPECIES_SHINY_PAL(CHARMANDER, gMonShinyPalette_Charmander_),
	SPECIES_SHINY_PAL(CHARMELEON, gMonShinyPalette_Charmeleon_),
	SPECIES_SHINY_PAL(CHARIZARD, gMonShinyPalette_Charizard_),
	SPECIES_SHINY_PAL(SQUIRTLE, gMonShinyPalette_Squirtle_),
	SPECIES_SHINY_PAL(WARTORTLE, gMonShinyPalette_Wartortle_),
	SPECIES_SHINY_PAL(BLASTOISE, gMonShinyPalette_Blastoise_),
	SPECIES_SHINY_PAL(CATERPIE, gMonShinyPalette_Caterpie_),
	SPECIES_SHINY_PAL(METAPOD, gMonShinyPalette_Metapod_),
	SPECIES_SHINY_PAL(BUTTERFREE, gMonShinyPalette_Butterfree_),
	SPECIES_SHINY_PAL(WEEDLE, gMonShinyPalette_Weedle_),
	SPECIES_SHINY_PAL(KAKUNA, gMonShinyPalette_Kakuna_),
	SPECIES_SHINY_PAL(BEEDRILL, gMonShinyPalette_Beedrill_),
	SPECIES_SHINY_PAL(PIDGEY, gMonShinyPalette_Pidgey_),
	SPECIES_SHINY_PAL(PIDGEOTTO, gMonShinyPalette_Pidgeotto_),
	SPECIES_SHINY_PAL(PIDGEOT, gMonShinyPalette_Pidgeot_),
	SPECIES_SHINY_PAL(RATTATA, gMonShinyPalette_Rattata_),
	SPECIES_SHINY_PAL(RATICATE, gMonShinyPalette_Raticate_),
	SPECIES_SHINY_PAL(SPEAROW, gMonShinyPalette_Spearow_),
	SPECIES_SHINY_PAL(FEAROW, gMonShinyPalette_Fearow_),
	SPECIES_SHINY_PAL(EKANS, gMonShinyPalette_Ekans_),
	SPECIES_SHINY_PAL(ARBOK, gMonShinyPalette_Arbok_),
	SPECIES_SHINY_PAL(PIKACHU, gMonShinyPalette_Pikachu_),
	SPECIES_SHINY_PAL(RAICHU, gMonShinyPalette_Raichu_),
	SPECIES_SHINY_PAL(SANDSHREW, gMonShinyPalette_Sandshrew_),
	SPECIES_SHINY_PAL(SANDSLASH, gMonShinyPalette_Sandslash_),
	SPECIES_SHINY_PAL(NIDORANSF, gMonShinyPalette_Nidoransf_),
	SPECIES_SHINY_PAL(NIDORINA, gMonShinyPalette_Nidorina_),
	SPECIES_SHINY_PAL(NIDOQUEEN, gMonShinyPalette_Nidoqueen_),
	SPECIES_SHINY_PAL(NIDORANSM, gMonShinyPalette_Nidoransm_),
	SPECIES_SHINY_PAL(NIDORINO, gMonShinyPalette_Nidorino_),
	SPECIES_SHINY_PAL(NIDOKING, gMonShinyPalette_Nidoking_),
	SPECIES_SHINY_PAL(CLEFAIRY, gMonShinyPalette_Clefairy_),
	SPECIES_SHINY_PAL(CLEFABLE, gMonShinyPalette_Clefable_),
	SPECIES_SHINY_PAL(VULPIX, gMonShinyPalette_Vulpix_),
	SPECIES_SHINY_PAL(NINETALES, gMonShinyPalette_Ninetales_),
	SPECIES_SHINY_PAL(JIGGLYPUFF, gMonShinyPalette_Jigglypuff_),
	SPECIES_SHINY_PAL(WIGGLYTUFF, gMonShinyPalette_Wigglytuff_),
	SPECIES_SHINY_PAL(ZUBAT, gMonShinyPalette_Zubat_),
	SPECIES_SHINY_PAL(GOLBAT, gMonShinyPalette_Golbat_),
	SPECIES_SHINY_PAL(ODDISH, gMonShinyPalette_Oddish_),
	SPECIES_SHINY_PAL(GLOOM, gMonShinyPalette_Gloom_),
	SPECIES_SHINY_PAL(VILEPLUME, gMonShinyPalette_Vileplume_),
	SPECIES_SHINY_PAL(PARAS, gMonShinyPalette_Paras_),
	SPECIES_SHINY_PAL(PARASECT, gMonShinyPalette_Parasect_),
	SPECIES_SHINY_PAL(VENONAT, gMonShinyPalette_Venonat_),
	SPECIES_SHINY_PAL(VENOMOTH, gMonShinyPalette_Venomoth_),
	SPECIES_SHINY_PAL(DIGLETT, gMonShinyPalette_Diglett_),
	SPECIES_SHINY_PAL(DUGTRIO, gMonShinyPalette_Dugtrio_),
	SPECIES_SHINY_PAL(MEOWTH, gMonShinyPalette_Meowth_),
	SPECIES_SHINY_PAL(PERSIAN, gMonShinyPalette_Persian_),
	SPECIES_SHINY_PAL(PSYDUCK, gMonShinyPalette_Psyduck_),
	SPECIES_SHINY_PAL(GOLDUCK, gMonShinyPalette_Golduck_),
	SPECIES_SHINY_PAL(MANKEY, gMonShinyPalette_Mankey_),
	SPECIES_SHINY_PAL(PRIMEAPE, gMonShinyPalette_Primeape_),
	SPECIES_SHINY_PAL(GROWLITHE, gMonShinyPalette_Growlithe_),
	SPECIES_SHINY_PAL(ARCANINE, gMonShinyPalette_Arcanine_),
	SPECIES_SHINY_PAL(POLIWAG, gMonShinyPalette_Poliwag_),
	SPECIES_SHINY_PAL(POLIWHIRL, gMonShinyPalette_Poliwhirl_),
	SPECIES_SHINY_PAL(POLIWRATH, gMonShinyPalette_Poliwrath_),
	SPECIES_SHINY_PAL(ABRA, gMonShinyPalette_Abra_),
	SPECIES_SHINY_PAL(KADABRA, gMonShinyPalette_Kadabra_),
	SPECIES_SHINY_PAL(ALAKAZAM, gMonShinyPalette_Alakazam_),
	SPECIES_SHINY_PAL(MACHOP, gMonShinyPalette_Machop_),
	SPECIES_SHINY_PAL(MACHOKE, gMonShinyPalette_Machoke_),
	SPECIES_SHINY_PAL(MACHAMP, gMonShinyPalette_Machamp_),
	SPECIES_SHINY_PAL(BELLSPROUT, gMonShinyPalette_Bellsprout_),
	SPECIES_SHINY_PAL(WEEPINBELL, gMonShinyPalette_Weepinbell_),
	SPECIES_SHINY_PAL(VICTREEBEL, gMonShinyPalette_Victreebel_),
	SPECIES_SHINY_PAL(TENTACOOL, gMonShinyPalette_Tentacool_),
	SPECIES_SHINY_PAL(TENTACRUEL, gMonShinyPalette_Tentacruel_),
	SPECIES_SHINY_PAL(GEODUDE, gMonShinyPalette_Geodude_),
	SPECIES_SHINY_PAL(GRAVELER, gMonShinyPalette_Graveler_),
	SPECIES_SHINY_PAL(GOLEM, gMonShinyPalette_Golem_),
	SPECIES_SHINY_PAL(PONYTA, gMonShinyPalette_Ponyta_),
	SPECIES_SHINY_PAL(RAPIDASH, gMonShinyPalette_Rapidash_),
	SPECIES_SHINY_PAL(SLOWPOKE, gMonShinyPalette_Slowpoke_),
	SPECIES_SHINY_PAL(SLOWBRO, gMonShinyPalette_Slowbro_),
	SPECIES_SHINY_PAL(MAGNEMITE, gMonShinyPalette_Magnemite_),
	SPECIES_SHINY_PAL(MAGNETON, gMonShinyPalette_Magneton_),
	SPECIES_SHINY_PAL(FARFETCHD, gMonShinyPalette_Farfetchd_),
	SPECIES_SHINY_PAL(DODUO, gMonShinyPalette_Doduo_),
	SPECIES_SHINY_PAL(DODRIO, gMonShinyPalette_Dodrio_),
	SPECIES_SHINY_PAL(SEEL, gMonShinyPalette_Seel_),
	SPECIES_SHINY_PAL(DEWGONG, gMonShinyPalette_Dewgong_),
	SPECIES_SHINY_PAL(GRIMER, gMonShinyPalette_Grimer_),
	SPECIES_SHINY_PAL(MUK, gMonShinyPalette_Muk_),
	SPECIES_SHINY_PAL(SHELLDER, gMonShinyPalette_Shellder_),
	SPECIES_SHINY_PAL(CLOYSTER, gMonShinyPalette_Cloyster_),
	SPECIES_SHINY_PAL(GASTLY, gMonShinyPalette_Gastly_),
	SPECIES_SHINY_PAL(HAUNTER, gMonShinyPalette_Haunter_),
	SPECIES_SHINY_PAL(GENGAR, gMonShinyPalette_Gengar_),
	SPECIES_SHINY_PAL(ONIX, gMonShinyPalette_Onix_),
	SPECIES_SHINY_PAL(DROWZEE, gMonShinyPalette_Drowzee_),
	SPECIES_SHINY_PAL(HYPNO, gMonShinyPalette_Hypno_),
	SPECIES_SHINY_PAL(KRABBY, gMonShinyPalette_Krabby_),
	SPECIES_SHINY_PAL(KINGLER, gMonShinyPalette_Kingler_),
	SPECIES_SHINY_PAL(VOLTORB, gMonShinyPalette_Voltorb_),
	SPECIES_SHINY_PAL(ELECTRODE, gMonShinyPalette_Electrode_),
	SPECIES_SHINY_PAL(EXEGGCUTE, gMonShinyPalette_Exeggcute_),
	SPECIES_SHINY_PAL(EXEGGUTOR, gMonShinyPalette_Exeggutor_),
	SPECIES_SHINY_PAL(CUBONE, gMonShinyPalette_Cubone_),
	SPECIES_SHINY_PAL(MAROWAK, gMonShinyPalette_Marowak_),
	SPECIES_SHINY_PAL(HITMONLEE, gMonShinyPalette_Hitmonlee_),
	SPECIES_SHINY_PAL(HITMONCHAN, gMonShinyPalette_Hitmonchan_),
	SPECIES_SHINY_PAL(LICKITUNG, gMonShinyPalette_Lickitung_),
	SPECIES_SHINY_PAL(KOFFING, gMonShinyPalette_Koffing_),
	SPECIES_SHINY_PAL(WEEZING, gMonShinyPalette_Weezing_),
	SPECIES_SHINY_PAL(RHYHORN, gMonShinyPalette_Rhyhorn_),
	SPECIES_SHINY_PAL(RHYDON, gMonShinyPalette_Rhydon_),
	SPECIES_SHINY_PAL(CHANSEY, gMonShinyPalette_Chansey_),
	SPECIES_SHINY_PAL(TANGELA, gMonShinyPalette_Tangela_),
	SPECIES_SHINY_PAL(KANGASKHAN, gMonShinyPalette_Kangaskhan_),
	SPECIES_SHINY_PAL(HORSEA, gMonShinyPalette_Horsea_),
	SPECIES_SHINY_PAL(SEADRA, gMonShinyPalette_Seadra_),
	SPECIES_SHINY_PAL(GOLDEEN, gMonShinyPalette_Goldeen_),
	SPECIES_SHINY_PAL(SEAKING, gMonShinyPalette_Seaking_),
	SPECIES_SHINY_PAL(STARYU, gMonShinyPalette_Staryu_),
	SPECIES_SHINY_PAL(STARMIE, gMonShinyPalette_Starmie_),
	SPECIES_SHINY_PAL(MRMIME, gMonShinyPalette_MrMime_),
	SPECIES_SHINY_PAL(SCYTHER, gMonShinyPalette_Scyther_),
	SPECIES_SHINY_PAL(JYNX, gMonShinyPalette_Jynx_),
	SPECIES_SHINY_PAL(ELECTABUZZ, gMonShinyPalette_Electabuzz_),
	SPECIES_SHINY_PAL(MAGMAR, gMonShinyPalette_Magmar_),
	SPECIES_SHINY_PAL(PINSIR, gMonShinyPalette_Pinsir_),
	SPECIES_SHINY_PAL(TAUROS, gMonShinyPalette_Tauros_),
	SPECIES_SHINY_PAL(MAGIKARP, gMonShinyPalette_Magikarp_),
	SPECIES_SHINY_PAL(GYARADOS, gMonShinyPalette_Gyarados_),
	SPECIES_SHINY_PAL(LAPRAS, gMonShinyPalette_Lapras_),
	SPECIES_SHINY_PAL(DITTO, gMonShinyPalette_Ditto_),
	SPECIES_SHINY_PAL(EEVEE, gMonShinyPalette_Eevee_),
	SPECIES_SHINY_PAL(VAPOREON, gMonShinyPalette_Vaporeon_),
	SPECIES_SHINY_PAL(JOLTEON, gMonShinyPalette_Jolteon_),
	SPECIES_SHINY_PAL(FLAREON, gMonShinyPalette_Flareon_),
	SPECIES_SHINY_PAL(PORYGON, gMonShinyPalette_Porygon_),
	SPECIES_SHINY_PAL(OMANYTE, gMonShinyPalette_Omanyte_),
	SPECIES_SHINY_PAL(OMASTAR, gMonShinyPalette_Omastar_),
	SPECIES_SHINY_PAL(KABUTO, gMonShinyPalette_Kabuto_),
	SPECIES_SHINY_PAL(KABUTOPS, gMonShinyPalette_Kabutops_),
	SPECIES_SHINY_PAL(AERODACTYL, gMonShinyPalette_Aerodactyl_),
	SPECIES_SHINY_PAL(SNORLAX, gMonShinyPalette_Snorlax_),
	SPECIES_SHINY_PAL(ARTICUNO, gMonShinyPalette_Articuno_),
	SPECIES_SHINY_PAL(ZAPDOS, gMonShinyPalette_Zapdos_),
	SPECIES_SHINY_PAL(MOLTRES, gMonShinyPalette_Moltres_),
	SPECIES_SHINY_PAL(DRATINI, gMonShinyPalette_Dratini_),
	SPECIES_SHINY_PAL(DRAGONAIR, gMonShinyPalette_Dragonair_),
	SPECIES_SHINY_PAL(DRAGONITE, gMonShinyPalette_Dragonite_),
	SPECIES_SHINY_PAL(MEWTWO, gMonShinyPalette_Mewtwo_),
	SPECIES_SHINY_PAL(MEW, gMonShinyPalette_Mew_),
	SPECIES_SHINY_PAL(CHIKORITA, gMonShinyPalette_Chikorita_),
	SPECIES_SHINY_PAL(BAYLEEF, gMonShinyPalette_Bayleef_),
	SPECIES_SHINY_PAL(MEGANIUM, gMonShinyPalette_Meganium_),
	SPECIES_SHINY_PAL(CYNDAQUIL, gMonShinyPalette_Cyndaquil_),
	SPECIES_SHINY_PAL(QUILAVA, gMonShinyPalette_Quilava_),
	SPECIES_SHINY_PAL(TYPHLOSION, gMonShinyPalette_Typhlosion_),
	SPECIES_SHINY_PAL(TOTODILE, gMonShinyPalette_Totodile_),
	SPECIES_SHINY_PAL(CROCONAW, gMonShinyPalette_Croconaw_),
	SPECIES_SHINY_PAL(FERALIGATR, gMonShinyPalette_Feraligatr_),
	SPECIES_SHINY_PAL(SENTRET, gMonShinyPalette_Sentret_),
	SPECIES_SHINY_PAL(FURRET, gMonShinyPalette_Furret_),
	SPECIES_SHINY_PAL(HOOTHOOT, gMonShinyPalette_Hoothoot_),
	SPECIES_SHINY_PAL(NOCTOWL, gMonShinyPalette_Noctowl_),
	SPECIES_SHINY_PAL(LEDYBA, gMonShinyPalette_Ledyba_),
	SPECIES_SHINY_PAL(LEDIAN, gMonShinyPalette_Ledian_),
	SPECIES_SHINY_PAL(SPINARAK, gMonShinyPalette_Spinarak_),
	SPECIES_SHINY_PAL(ARIADOS, gMonShinyPalette_Ariados_),
	SPECIES_SHINY_PAL(CROBAT, gMonShinyPalette_Crobat_),
	SPECIES_SHINY_PAL(CHINCHOU, gMonShinyPalette_Chinchou_),
	SPECIES_SHINY_PAL(LANTURN, gMonShinyPalette_Lanturn_),
	SPECIES_SHINY_PAL(PICHU, gMonShinyPalette_Pichu_),
	SPECIES_SHINY_PAL(CLEFFA, gMonShinyPalette_Cleffa_),
	SPECIES_SHINY_PAL(IGGLYBUFF, gMonShinyPalette_Igglybuff_),
	SPECIES_SHINY_PAL(TOGEPI, gMonShinyPalette_Togepi_),
	SPECIES_SHINY_PAL(TOGETIC, gMonShinyPalette_Togetic_),
	SPECIES_SHINY_PAL(NATU, gMonShinyPalette_Natu_),
	SPECIES_SHINY_PAL(XATU, gMonShinyPalette_Xatu_),
	SPECIES_SHINY_PAL(MAREEP, gMonShinyPalette_Mareep_),
	SPECIES_SHINY_PAL(FLAAFFY, gMonShinyPalette_Flaaffy_),
	SPECIES_SHINY_PAL(AMPHAROS, gMonShinyPalette_Ampharos_),
	SPECIES_SHINY_PAL(BELLOSSOM, gMonShinyPalette_Bellossom_),
	SPECIES_SHINY_PAL(MARILL, gMonShinyPalette_Marill_),
	SPECIES_SHINY_PAL(AZUMARILL, gMonShinyPalette_Azumarill_),
	SPECIES_SHINY_PAL(SUDOWOODO, gMonShinyPalette_Sudowoodo_),
	SPECIES_SHINY_PAL(POLITOED, gMonShinyPalette_Politoed_),
	SPECIES_SHINY_PAL(HOPPIP, gMonShinyPalette_Hoppip_),
	SPECIES_SHINY_PAL(SKIPLOOM, gMonShinyPalette_Skiploom_),
	SPECIES_SHINY_PAL(JUMPLUFF, gMonShinyPalette_Jumpluff_),
	SPECIES_SHINY_PAL(AIPOM, gMonShinyPalette_Aipom_),
	SPECIES_SHINY_PAL(SUNKERN, gMonShinyPalette_Sunkern_),
	SPECIES_SHINY_PAL(SUNFLORA, gMonShinyPalette_Sunflora_),
	SPECIES_SHINY_PAL(YANMA, gMonShinyPalette_Yanma_),
	SPECIES_SHINY_PAL(WOOPER, gMonShinyPalette_Wooper_),
	SPECIES_SHINY_PAL(QUAGSIRE, gMonShinyPalette_Quagsire_),
	SPECIES_SHINY_PAL(ESPEON, gMonShinyPalette_Espeon_),
	SPECIES_SHINY_PAL(UMBREON, gMonShinyPalette_Umbreon_),
	SPECIES_SHINY_PAL(MURKROW, gMonShinyPalette_Murkrow_),
	SPECIES_SHINY_PAL(SLOWKING, gMonShinyPalette_Slowking_),
	SPECIES_SHINY_PAL(MISDREAVUS, gMonShinyPalette_Misdreavus_),
	SPECIES_SHINY_PAL(UNOWN, gMonShinyPalette_Unown_),
	SPECIES_SHINY_PAL(WOBBUFFET, gMonShinyPalette_Wobbuffet_),
	SPECIES_SHINY_PAL(GIRAFARIG, gMonShinyPalette_Girafarig_),
	SPECIES_SHINY_PAL(PINECO, gMonShinyPalette_Pineco_),
	SPECIES_SHINY_PAL(FORRETRESS, gMonShinyPalette_Forretress_),
	SPECIES_SHINY_PAL(DUNSPARCE, gMonShinyPalette_Dunsparce_),
	SPECIES_SHINY_PAL(GLIGAR, gMonShinyPalette_Gligar_),
	SPECIES_SHINY_PAL(STEELIX, gMonShinyPalette_Steelix_),
	SPECIES_SHINY_PAL(SNUBBULL, gMonShinyPalette_Snubbull_),
	SPECIES_SHINY_PAL(GRANBULL, gMonShinyPalette_Granbull_),
	SPECIES_SHINY_PAL(QWILFISH, gMonShinyPalette_Qwilfish_),
	SPECIES_SHINY_PAL(SCIZOR, gMonShinyPalette_Scizor_),
	SPECIES_SHINY_PAL(SHUCKLE, gMonShinyPalette_Shuckle_),
	SPECIES_SHINY_PAL(HERACROSS, gMonShinyPalette_Heracross_),
	SPECIES_SHINY_PAL(SNEASEL, gMonShinyPalette_Sneasel_),
	SPECIES_SHINY_PAL(TEDDIURSA, gMonShinyPalette_Teddiursa_),
	SPECIES_SHINY_PAL(URSARING, gMonShinyPalette_Ursaring_),
	SPECIES_SHINY_PAL(SLUGMA, gMonShinyPalette_Slugma_),
	SPECIES_SHINY_PAL(MAGCARGO, gMonShinyPalette_Magcargo_),
	SPECIES_SHINY_PAL(SWINUB, gMonShinyPalette_Swinub_),
	SPECIES_SHINY_PAL(PILOSWINE, gMonShinyPalette_Piloswine_),
	SPECIES_SHINY_PAL(CORSOLA, gMonShinyPalette_Corsola_),
	SPECIES_SHINY_PAL(REMORAID, gMonShinyPalette_Remoraid_),
	SPECIES_SHINY_PAL(OCTILLERY, gMonShinyPalette_Octillery_),
	SPECIES_SHINY_PAL(DELIBIRD, gMonShinyPalette_Delibird_),
	SPECIES_SHINY_PAL(MANTINE, gMonShinyPalette_Mantine_),
	SPECIES_SHINY_PAL(SKARMORY, gMonShinyPalette_Skarmory_),
	SPECIES_SHINY_PAL(HOUNDOUR, gMonShinyPalette_Houndour_),
	SPECIES_SHINY_PAL(HOUNDOOM, gMonShinyPalette_Houndoom_),
	SPECIES_SHINY_PAL(KINGDRA, gMonShinyPalette_Kingdra_),
	SPECIES_SHINY_PAL(PHANPY, gMonShinyPalette_Phanpy_),
	SPECIES_SHINY_PAL(DONPHAN, gMonShinyPalette_Donphan_),
	SPECIES_SHINY_PAL(PORYGON2, gMonShinyPalette_Porygon2_),
	SPECIES_SHINY_PAL(STANTLER, gMonShinyPalette_Stantler_),
	SPECIES_SHINY_PAL(SMEARGLE, gMonShinyPalette_Smeargle_),
	SPECIES_SHINY_PAL(TYROGUE, gMonShinyPalette_Tyrogue_),
	SPECIES_SHINY_PAL(HITMONTOP, gMonShinyPalette_Hitmontop_),
	SPECIES_SHINY_PAL(SMOOCHUM, gMonShinyPalette_Smoochum_),
	SPECIES_SHINY_PAL(ELEKID, gMonShinyPalette_Elekid_),
	SPECIES_SHINY_PAL(MAGBY, gMonShinyPalette_Magby_),
	SPECIES_SHINY_PAL(MILTANK, gMonShinyPalette_Miltank_),
	SPECIES_SHINY_PAL(BLISSEY, gMonShinyPalette_Blissey_),
	SPECIES_SHINY_PAL(RAIKOU, gMonShinyPalette_Raikou_),
	SPECIES_SHINY_PAL(ENTEI, gMonShinyPalette_Entei_),
	SPECIES_SHINY_PAL(SUICUNE, gMonShinyPalette_Suicune_),
	SPECIES_SHINY_PAL(LARVITAR, gMonShinyPalette_Larvitar_),
	SPECIES_SHINY_PAL(PUPITAR, gMonShinyPalette_Pupitar_),
	SPECIES_SHINY_PAL(TYRANITAR, gMonShinyPalette_Tyranitar_),
	SPECIES_SHINY_PAL(LUGIA, gMonShinyPalette_Lugia_),
	SPECIES_SHINY_PAL(HOOH, gMonShinyPalette_HoOh_),
	SPECIES_SHINY_PAL(CELEBI, gMonShinyPalette_Celebi_),
	SPECIES_SHINY_PAL(TREECKO, gMonShinyPalette_Treecko_),
	SPECIES_SHINY_PAL(GROVYLE, gMonShinyPalette_Grovyle_),
	SPECIES_SHINY_PAL(SCEPTILE, gMonShinyPalette_Sceptile_),
	SPECIES_SHINY_PAL(TORCHIC, gMonShinyPalette_Torchic_),
	SPECIES_SHINY_PAL(COMBUSKEN, gMonShinyPalette_Combusken_),
	SPECIES_SHINY_PAL(BLAZIKEN, gMonShinyPalette_Blaziken_),
	SPECIES_SHINY_PAL(MUDKIP, gMonShinyPalette_Mudkip_),
	SPECIES_SHINY_PAL(MARSHTOMP, gMonShinyPalette_Marshtomp_),
	SPECIES_SHINY_PAL(SWAMPERT, gMonShinyPalette_Swampert_),
	SPECIES_SHINY_PAL(POOCHYENA, gMonShinyPalette_Poochyena_),
	SPECIES_SHINY_PAL(MIGHTYENA, gMonShinyPalette_Mightyena_),
	SPECIES_SHINY_PAL(ZIGZAGOON, gMonShinyPalette_Zigzagoon_),
	SPECIES_SHINY_PAL(LINOONE, gMonShinyPalette_Linoone_),
	SPECIES_SHINY_PAL(WURMPLE, gMonShinyPalette_Wurmple_),
	SPECIES_SHINY_PAL(SILCOON, gMonShinyPalette_Silcoon_),
	SPECIES_SHINY_PAL(BEAUTIFLY, gMonShinyPalette_Beautifly_),
	SPECIES_SHINY_PAL(CASCOON, gMonShinyPalette_Cascoon_),
	SPECIES_SHINY_PAL(DUSTOX, gMonShinyPalette_Dustox_),
	SPECIES_SHINY_PAL(LOTAD, gMonShinyPalette_Lotad_),
	SPECIES_SHINY_PAL(LOMBRE, gMonShinyPalette_Lombre_),
	SPECIES_SHINY_PAL(LUDICOLO, gMonShinyPalette_Ludicolo_),
	SPECIES_SHINY_PAL(SEEDOT, gMonShinyPalette_Seedot_),
	SPECIES_SHINY_PAL(NUZLEAF, gMonShinyPalette_Nuzleaf_),
	SPECIES_SHINY_PAL(SHIFTRY, gMonShinyPalette_Shiftry_),
	SPECIES_SHINY_PAL(TAILLOW, gMonShinyPalette_Taillow_),
	SPECIES_SHINY_PAL(SWELLOW, gMonShinyPalette_Swellow_),
	SPECIES_SHINY_PAL(WINGULL, gMonShinyPalette_Wingull_),
	SPECIES_SHINY_PAL(PELIPPER, gMonShinyPalette_Pelipper_),
	SPECIES_SHINY_PAL(RALTS, gMonShinyPalette_Ralts_),
	SPECIES_SHINY_PAL(KIRLIA, gMonShinyPalette_Kirlia_),
	SPECIES_SHINY_PAL(GARDEVOIR, gMonShinyPalette_Gardevoir_),
	SPECIES_SHINY_PAL(SURSKIT, gMonShinyPalette_Surskit_),
	SPECIES_SHINY_PAL(MASQUERAIN, gMonShinyPalette_Masquerain_),
	SPECIES_SHINY_PAL(SHROOMISH, gMonShinyPalette_Shroomish_),
	SPECIES_SHINY_PAL(BRELOOM, gMonShinyPalette_Breloom_),
	SPECIES_SHINY_PAL(SLAKOTH, gMonShinyPalette_Slakoth_),
	SPECIES_SHINY_PAL(VIGOROTH, gMonShinyPalette_Vigoroth_),
	SPECIES_SHINY_PAL(SLAKING, gMonShinyPalette_Slaking_),
	SPECIES_SHINY_PAL(NINCADA, gMonShinyPalette_Nincada_),
	SPECIES_SHINY_PAL(NINJASK, gMonShinyPalette_Ninjask_),
	SPECIES_SHINY_PAL(SHEDINJA, gMonShinyPalette_Shedinja_),
	SPECIES_SHINY_PAL(WHISMUR, gMonShinyPalette_Whismur_),
	SPECIES_SHINY_PAL(LOUDRED, gMonShinyPalette_Loudred_),
	SPECIES_SHINY_PAL(EXPLOUD, gMonShinyPalette_Exploud_),
	SPECIES_SHINY_PAL(MAKUHITA, gMonShinyPalette_Makuhita_),
	SPECIES_SHINY_PAL(HARIYAMA, gMonShinyPalette_Hariyama_),
	SPECIES_SHINY_PAL(AZURILL, gMonShinyPalette_Azurill_),
	SPECIES_SHINY_PAL(NOSEPASS, gMonShinyPalette_Nosepass_),
	SPECIES_SHINY_PAL(SKITTY, gMonShinyPalette_Skitty_),
	SPECIES_SHINY_PAL(DELCATTY, gMonShinyPalette_Delcatty_),
	SPECIES_SHINY_PAL(SABLEYE, gMonShinyPalette_Sableye_),
	SPECIES_SHINY_PAL(MAWILE, gMonShinyPalette_Mawile_),
	SPECIES_SHINY_PAL(ARON, gMonShinyPalette_Aron_),
	SPECIES_SHINY_PAL(LAIRON, gMonShinyPalette_Lairon_),
	SPECIES_SHINY_PAL(AGGRON, gMonShinyPalette_Aggron_),
	SPECIES_SHINY_PAL(MEDITITE, gMonShinyPalette_Meditite_),
	SPECIES_SHINY_PAL(MEDICHAM, gMonShinyPalette_Medicham_),
	SPECIES_SHINY_PAL(ELECTRIKE, gMonShinyPalette_Electrike_),
	SPECIES_SHINY_PAL(MANECTRIC, gMonShinyPalette_Manectric_),
	SPECIES_SHINY_PAL(PLUSLE, gMonShinyPalette_Plusle_),
	SPECIES_SHINY_PAL(MINUN, gMonShinyPalette_Minun_),
	SPECIES_SHINY_PAL(VOLBEAT, gMonShinyPalette_Volbeat_),
	SPECIES_SHINY_PAL(ILLUMISE, gMonShinyPalette_Illumise_),
	SPECIES_SHINY_PAL(ROSELIA, gMonShinyPalette_Roselia_),
	SPECIES_SHINY_PAL(GULPIN, gMonShinyPalette_Gulpin_),
	SPECIES_SHINY_PAL(SWALOT, gMonShinyPalette_Swalot_),
	SPECIES_SHINY_PAL(CARVANHA, gMonShinyPalette_Carvanha_),
	SPECIES_SHINY_PAL(SHARPEDO, gMonShinyPalette_Sharpedo_),
	SPECIES_SHINY_PAL(WAILMER, gMonShinyPalette_Wailmer_),
	SPECIES_SHINY_PAL(WAILORD, gMonShinyPalette_Wailord_),
	SPECIES_SHINY_PAL(NUMEL, gMonShinyPalette_Numel_),
	SPECIES_SHINY_PAL(CAMERUPT, gMonShinyPalette_Camerupt_),
	SPECIES_SHINY_PAL(TORKOAL, gMonShinyPalette_Torkoal_),
	SPECIES_SHINY_PAL(SPOINK, gMonShinyPalette_Spoink_),
	SPECIES_SHINY_PAL(GRUMPIG, gMonShinyPalette_Grumpig_),
	SPECIES_SHINY_PAL(SPINDA, gMonShinyPalette_Spinda_),
	SPECIES_SHINY_PAL(TRAPINCH, gMonShinyPalette_Trapinch_),
	SPECIES_SHINY_PAL(VIBRAVA, gMonShinyPalette_Vibrava_),
	SPECIES_SHINY_PAL(FLYGON, gMonShinyPalette_Flygon_),
	SPECIES_SHINY_PAL(CACNEA, gMonShinyPalette_Cacnea_),
	SPECIES_SHINY_PAL(CACTURNE, gMonShinyPalette_Cacturne_),
	SPECIES_SHINY_PAL(SWABLU, gMonShinyPalette_Swablu_),
	SPECIES_SHINY_PAL(ALTARIA, gMonShinyPalette_Altaria_),
	SPECIES_SHINY_PAL(ZANGOOSE, gMonShinyPalette_Zangoose_),
	SPECIES_SHINY_PAL(SEVIPER, gMonShinyPalette_Seviper_),
	SPECIES_SHINY_PAL(LUNATONE, gMonShinyPalette_Lunatone_),
	SPECIES_SHINY_PAL(SOLROCK, gMonShinyPalette_Solrock_),
	SPECIES_SHINY_PAL(BARBOACH, gMonShinyPalette_Barboach_),
	SPECIES_SHINY_PAL(WHISCASH, gMonShinyPalette_Whiscash_),
	SPECIES_SHINY_PAL(CORPHISH, gMonShinyPalette_Corphish_),
	SPECIES_SHINY_PAL(CRAWDAUNT, gMonShinyPalette_Crawdaunt_),
	SPECIES_SHINY_PAL(BALTOY, gMonShinyPalette_Baltoy_),
	SPECIES_SHINY_PAL(CLAYDOL, gMonShinyPalette_Claydol_),
	SPECIES_SHINY_PAL(LILEEP, gMonShinyPalette_Lileep_),
	SPECIES_SHINY_PAL(CRADILY, gMonShinyPalette_Cradily_),
	SPECIES_SHINY_PAL(ANORITH, gMonShinyPalette_Anorith_),
	SPECIES_SHINY_PAL(ARMALDO, gMonShinyPalette_Armaldo_),
	SPECIES_SHINY_PAL(FEEBAS, gMonShinyPalette_Feebas_),
	SPECIES_SHINY_PAL(MILOTIC, gMonShinyPalette_Milotic_),
	SPECIES_SHINY_PAL(CASTFORM, gMonShinyPalette_Castform_),
	SPECIES_SHINY_PAL(KECLEON, gMonShinyPalette_Kecleon_),
	SPECIES_SHINY_PAL(SHUPPET, gMonShinyPalette_Shuppet_),
	SPECIES_SHINY_PAL(BANETTE, gMonShinyPalette_Banette_),
	SPECIES_SHINY_PAL(DUSKULL, gMonShinyPalette_Duskull_),
	SPECIES_SHINY_PAL(DUSCLOPS, gMonShinyPalette_Dusclops_),
	SPECIES_SHINY_PAL(TROPIUS, gMonShinyPalette_Tropius_),
	SPECIES_SHINY_PAL(CHIMECHO, gMonShinyPalette_Chimecho_),
	SPECIES_SHINY_PAL(ABSOL, gMonShinyPalette_Absol_),
	SPECIES_SHINY_PAL(WYNAUT, gMonShinyPalette_Wynaut_),
	SPECIES_SHINY_PAL(SNORUNT, gMonShinyPalette_Snorunt_),
	SPECIES_SHINY_PAL(GLALIE, gMonShinyPalette_Glalie_),
	SPECIES_SHINY_PAL(SPHEAL, gMonShinyPalette_Spheal_),
	SPECIES_SHINY_PAL(SEALEO, gMonShinyPalette_Sealeo_),
	SPECIES_SHINY_PAL(WALREIN, gMonShinyPalette_Walrein_),
	SPECIES_SHINY_PAL(CLAMPERL, gMonShinyPalette_Clamperl_),
	SPECIES_SHINY_PAL(HUNTAIL, gMonShinyPalette_Huntail_),
	SPECIES_SHINY_PAL(GOREBYSS, gMonShinyPalette_Gorebyss_),
	SPECIES_SHINY_PAL(RELICANTH, gMonShinyPalette_Relicanth_),
	SPECIES_SHINY_PAL(LUVDISC, gMonShinyPalette_Luvdisc_),
	SPECIES_SHINY_PAL(BAGON, gMonShinyPalette_Bagon_),
	SPECIES_SHINY_PAL(SHELGON, gMonShinyPalette_Shelgon_),
	SPECIES_SHINY_PAL(SALAMENCE, gMonShinyPalette_Salamence_),
	SPECIES_SHINY_PAL(BELDUM, gMonShinyPalette_Beldum_),
	SPECIES_SHINY_PAL(METANG, gMonShinyPalette_Metang_),
	SPECIES_SHINY_PAL(METAGROSS, gMonShinyPalette_Metagross_),
	SPECIES_SHINY_PAL(REGIROCK, gMonShinyPalette_Regirock_),
	SPECIES_SHINY_PAL(REGICE, gMonShinyPalette_Regice_),
	SPECIES_SHINY_PAL(REGISTEEL, gMonShinyPalette_Registeel_),
	SPECIES_SHINY_PAL(LATIAS, gMonShinyPalette_Latias_),
	SPECIES_SHINY_PAL(LATIOS, gMonShinyPalette_Latios_),
	SPECIES_SHINY_PAL(KYOGRE, gMonShinyPalette_Kyogre_),
	SPECIES_SHINY_PAL(GROUDON, gMonShinyPalette_Groudon_),
	SPECIES_SHINY_PAL(RAYQUAZA, gMonShinyPalette_Rayquaza_),
	SPECIES_SHINY_PAL(JIRACHI, gMonShinyPalette_Jirachi_),
	SPECIES_SHINY_PAL(DEOXYS, gMonShinyPalette_Deoxys_),
	SPECIES_SHINY_PAL(TURTWIG, gMonShinyPalette_Turtwig_),
	SPECIES_SHINY_PAL(GROTLE, gMonShinyPalette_Grotle_),
	SPECIES_SHINY_PAL(TORTERRA, gMonShinyPalette_Torterra_),
	SPECIES_SHINY_PAL(CHIMCHAR, gMonShinyPalette_Chimchar_),
	SPECIES_SHINY_PAL(MONFERNO, gMonShinyPalette_Monferno_),
	SPECIES_SHINY_PAL(INFERNAPE, gMonShinyPalette_Infernape_),
	SPECIES_SHINY_PAL(PIPLUP, gMonShinyPalette_Piplup_),
	SPECIES_SHINY_PAL(PRINPLUP, gMonShinyPalette_Prinplup_),
	SPECIES_SHINY_PAL(EMPOLEON, gMonShinyPalette_Empoleon_),
	SPECIES_SHINY_PAL(STARLY, gMonShinyPalette_Starly_),
	SPECIES_SHINY_PAL(STARAVIA, gMonShinyPalette_Staravia_),
	SPECIES_SHINY_PAL(STARAPTOR, gMonShinyPalette_Staraptor_),
	SPECIES_SHINY_PAL(BIDOOF, gMonShinyPalette_Bidoof_),
	SPECIES_SHINY_PAL(BIBAREL, gMonShinyPalette_Bibarel_),
	SPECIES_SHINY_PAL(KRICKETOT, gMonShinyPalette_Kricketot_),
	SPECIES_SHINY_PAL(KRICKETUNE, gMonShinyPalette_Kricketune_),
	SPECIES_SHINY_PAL(SHINX, gMonShinyPalette_Shinx_),
	SPECIES_SHINY_PAL(LUXIO, gMonShinyPalette_Luxio_),
	SPECIES_SHINY_PAL(LUXRAY, gMonShinyPalette_Luxray_),
	SPECIES_SHINY_PAL(BUDEW, gMonShinyPalette_Budew_),
	SPECIES_SHINY_PAL(ROSERADE, gMonShinyPalette_Roserade_),
	SPECIES_SHINY_PAL(CRANIDOS, gMonShinyPalette_Cranidos_),
	SPECIES_SHINY_PAL(RAMPARDOS, gMonShinyPalette_Rampardos_),
	SPECIES_SHINY_PAL(SHIELDON, gMonShinyPalette_Shieldon_),
	SPECIES_SHINY_PAL(BASTIODON, gMonShinyPalette_Bastiodon_),
	SPECIES_SHINY_PAL(BURMY, gMonShinyPalette_Burmy_),
	SPECIES_SHINY_PAL(WORMADAM, gMonShinyPalette_Wormadam_),
	SPECIES_SHINY_PAL(MOTHIM, gMonShinyPalette_Mothim_),
	SPECIES_SHINY_PAL(COMBEE, gMonShinyPalette_Combee_),
	SPECIES_SHINY_PAL(VESPIQUEN, gMonShinyPalette_Vespiquen_),
	SPECIES_SHINY_PAL(PACHIRISU, gMonShinyPalette_Pachirisu_),
	SPECIES_SHINY_PAL(BUIZEL, gMonShinyPalette_Buizel_),
	SPECIES_SHINY_PAL(FLOATZEL, gMonShinyPalette_Floatzel_),
	SPECIES_SHINY_PAL(CHERUBI, gMonShinyPalette_Cherubi_),
	SPECIES_SHINY_PAL(CHERRIM, gMonShinyPalette_Cherrim_),
	SPECIES_SHINY_PAL(SHELLOS, gMonShinyPalette_Shellos_),
	SPECIES_SHINY_PAL(GASTRODON, gMonShinyPalette_Gastrodon_),
	SPECIES_SHINY_PAL(AMBIPOM, gMonShinyPalette_Ambipom_),
	SPECIES_SHINY_PAL(DRIFLOON, gMonShinyPalette_Drifloon_),
	SPECIES_SHINY_PAL(DRIFBLIM, gMonShinyPalette_Drifblim_),
	SPECIES_SHINY_PAL(BUNEARY, gMonShinyPalette_Buneary_),
	SPECIES_SHINY_PAL(LOPUNNY, gMonShinyPalette_Lopunny_),
	SPECIES_SHINY_PAL(MISMAGIUS, gMonShinyPalette_Mismagius_),
	SPECIES_SHINY_PAL(HONCHKROW, gMonShinyPalette_Honchkrow_),
	SPECIES_SHINY_PAL(GLAMEOW, gMonShinyPalette_Glameow_),
	SPECIES_SHINY_PAL(PURUGLY, gMonShinyPalette_Purugly_),
	SPECIES_SHINY_PAL(CHINGLING, gMonShinyPalette_Chingling_),
	SPECIES_SHINY_PAL(STUNKY, gMonShinyPalette_Stunky_),
	SPECIES_SHINY_PAL(SKUNTANK, gMonShinyPalette_Skuntank_),
	SPECIES_SHINY_PAL(BRONZOR, gMonShinyPalette_Bronzor_),
	SPECIES_SHINY_PAL(BRONZONG, gMonShinyPalette_Bronzong_),
	SPECIES_SHINY_PAL(BONSLY, gMonShinyPalette_Bonsly_),
	SPECIES_SHINY_PAL(MIMEJR, gMonShinyPalette_MimeJr_),
	SPECIES_SHINY_PAL(HAPPINY, gMonShinyPalette_Happiny_),
	SPECIES_SHINY_PAL(CHATOT, gMonShinyPalette_Chatot_),
	SPECIES_SHINY_PAL(SPIRITOMB, gMonShinyPalette_Spiritomb_),
	SPECIES_SHINY_PAL(GIBLE, gMonShinyPalette_Gible_),
	SPECIES_SHINY_PAL(GABITE, gMonShinyPalette_Gabite_),
	SPECIES_SHINY_PAL(GARCHOMP, gMonShinyPalette_Garchomp_),
	SPECIES_SHINY_PAL(MUNCHLAX, gMonShinyPalette_Munchlax_),
	SPECIES_SHINY_PAL(RIOLU, gMonShinyPalette_Riolu_),
	SPECIES_SHINY_PAL(LUCARIO, gMonShinyPalette_Lucario_),
	SPECIES_SHINY_PAL(HIPPOPOTAS, gMonShinyPalette_Hippopotas_),
	SPECIES_SHINY_PAL(HIPPOWDON, gMonShinyPalette_Hippowdon_),
	SPECIES_SHINY_PAL(SKORUPI, gMonShinyPalette_Skorupi_),
	SPECIES_SHINY_PAL(DRAPION, gMonShinyPalette_Drapion_),
	SPECIES_SHINY_PAL(CROAGUNK, gMonShinyPalette_Croagunk_),
	SPECIES_SHINY_PAL(TOXICROAK, gMonShinyPalette_Toxicroak_),
	SPECIES_SHINY_PAL(CARNIVINE, gMonShinyPalette_Carnivine_),
	SPECIES_SHINY_PAL(FINNEON, gMonShinyPalette_Finneon_),
	SPECIES_SHINY_PAL(LUMINEON, gMonShinyPalette_Lumineon_),
	SPECIES_SHINY_PAL(MANTYKE, gMonShinyPalette_Mantyke_),
	SPECIES_SHINY_PAL(SNOVER, gMonShinyPalette_Snover_),
	SPECIES_SHINY_PAL(ABOMASNOW, gMonShinyPalette_Abomasnow_),
	SPECIES_SHINY_PAL(WEAVILE, gMonShinyPalette_Weavile_),
	SPECIES_SHINY_PAL(MAGNEZONE, gMonShinyPalette_Magnezone_),
	SPECIES_SHINY_PAL(LICKILICKY, gMonShinyPalette_Lickilicky_),
	SPECIES_SHINY_PAL(RHYPERIOR, gMonShinyPalette_Rhyperior_),
	SPECIES_SHINY_PAL(TANGROWTH, gMonShinyPalette_Tangrowth_),
	SPECIES_SHINY_PAL(ELECTIVIRE, gMonShinyPalette_Electivire_),
	SPECIES_SHINY_PAL(MAGMORTAR, gMonShinyPalette_Magmortar_),
	SPECIES_SHINY_PAL(TOGEKISS, gMonShinyPalette_Togekiss_),
	SPECIES_SHINY_PAL(YANMEGA, gMonShinyPalette_Yanmega_),
	SPECIES_SHINY_PAL(LEAFEON, gMonShinyPalette_Leafeon_),
	SPECIES_SHINY_PAL(GLACEON, gMonShinyPalette_Glaceon_),
	SPECIES_SHINY_PAL(GLISCOR, gMonShinyPalette_Gliscor_),
	SPECIES_SHINY_PAL(MAMOSWINE, gMonShinyPalette_Mamoswine_),
	SPECIES_SHINY_PAL(PORYGONZ, gMonShinyPalette_PorygonZ_),
	SPECIES_SHINY_PAL(GALLADE, gMonShinyPalette_Gallade_),
	SPECIES_SHINY_PAL(PROBOPASS, gMonShinyPalette_Probopass_),
	SPECIES_SHINY_PAL(DUSKNOIR, gMonShinyPalette_Dusknoir_),
	SPECIES_SHINY_PAL(FROSLASS, gMonShinyPalette_Froslass_),
	SPECIES_SHINY_PAL(ROTOM, gMonShinyPalette_Rotom_),
	SPECIES_SHINY_PAL(UXIE, gMonShinyPalette_Uxie_),
	SPECIES_SHINY_PAL(MESPRIT, gMonShinyPalette_Mesprit_),
	SPECIES_SHINY_PAL(AZELF, gMonShinyPalette_Azelf_),
	SPECIES_SHINY_PAL(DIALGA, gMonShinyPalette_Dialga_),
	SPECIES_SHINY_PAL(PALKIA, gMonShinyPalette_Palkia_),
	SPECIES_SHINY_PAL(HEATRAN, gMonShinyPalette_Heatran_),
	SPECIES_SHINY_PAL(REGIGIGAS, gMonShinyPalette_Regigigas_),
	SPECIES_SHINY_PAL(GIRATINA, gMonShinyPalette_Giratina_),
	SPECIES_SHINY_PAL(CRESSELIA, gMonShinyPalette_Cresselia_),
	SPECIES_SHINY_PAL(PHIONE, gMonShinyPalette_Phione_),
	SPECIES_SHINY_PAL(MANAPHY, gMonShinyPalette_Manaphy_),
	SPECIES_SHINY_PAL(DARKRAI, gMonShinyPalette_Darkrai_),
	SPECIES_SHINY_PAL(SHAYMIN, gMonShinyPalette_Shaymin_),
	SPECIES_SHINY_PAL(ARCEUS, gMonShinyPalette_Arceus_),
	SPECIES_SHINY_PAL(VICTINI, gMonShinyPalette_Victini_),
	SPECIES_SHINY_PAL(SNIVY, gMonShinyPalette_Snivy_),
	SPECIES_SHINY_PAL(SERVINE, gMonShinyPalette_Servine_),
	SPECIES_SHINY_PAL(SERPERIOR, gMonShinyPalette_Serperior_),
	SPECIES_SHINY_PAL(TEPIG, gMonShinyPalette_Tepig_),
	SPECIES_SHINY_PAL(PIGNITE, gMonShinyPalette_Pignite_),
	SPECIES_SHINY_PAL(EMBOAR, gMonShinyPalette_Emboar_),
	SPECIES_SHINY_PAL(OSHAWOTT, gMonShinyPalette_Oshawott_),
	SPECIES_SHINY_PAL(DEWOTT, gMonShinyPalette_Dewott_),
	SPECIES_SHINY_PAL(SAMUROTT, gMonShinyPalette_Samurott_),
	SPECIES_SHINY_PAL(PATRAT, gMonShinyPalette_Patrat_),
	SPECIES_SHINY_PAL(WATCHOG, gMonShinyPalette_Watchog_),
	SPECIES_SHINY_PAL(LILLIPUP, gMonShinyPalette_Lillipup_),
	SPECIES_SHINY_PAL(HERDIER, gMonShinyPalette_Herdier_),
	SPECIES_SHINY_PAL(STOUTLAND, gMonShinyPalette_Stoutland_),
	SPECIES_SHINY_PAL(PURRLOIN, gMonShinyPalette_Purrloin_),
	SPECIES_SHINY_PAL(LIEPARD, gMonShinyPalette_Liepard_),
	SPECIES_SHINY_PAL(PANSAGE, gMonShinyPalette_Pansage_),
	SPECIES_SHINY_PAL(SIMISAGE, gMonShinyPalette_Simisage_),
	SPECIES_SHINY_PAL(PANSEAR, gMonShinyPalette_Pansear_),
	SPECIES_SHINY_PAL(SIMISEAR, gMonShinyPalette_Simisear_),
	SPECIES_SHINY_PAL(PANPOUR, gMonShinyPalette_Panpour_),
	SPECIES_SHINY_PAL(SIMIPOUR, gMonShinyPalette_Simipour_),
	SPECIES_SHINY_PAL(MUNNA, gMonShinyPalette_Munna_),
	SPECIES_SHINY_PAL(MUSHARNA, gMonShinyPalette_Musharna_),
	SPECIES_SHINY_PAL(PIDOVE, gMonShinyPalette_Pidove_),
	SPECIES_SHINY_PAL(TRANQUILL, gMonShinyPalette_Tranquill_),
	SPECIES_SHINY_PAL(UNFEZANT, gMonShinyPalette_Unfezant_),
	SPECIES_SHINY_PAL(BLITZLE, gMonShinyPalette_Blitzle_),
	SPECIES_SHINY_PAL(ZEBSTRIKA, gMonShinyPalette_Zebstrika_),
	SPECIES_SHINY_PAL(ROGGENROLA, gMonShinyPalette_Roggenrola_),
	SPECIES_SHINY_PAL(BOLDORE, gMonShinyPalette_Boldore_),
	SPECIES_SHINY_PAL(GIGALITH, gMonShinyPalette_Gigalith_),
	SPECIES_SHINY_PAL(WOOBAT, gMonShinyPalette_Woobat_),
	SPECIES_SHINY_PAL(SWOOBAT, gMonShinyPalette_Swoobat_),
	SPECIES_SHINY_PAL(DRILBUR, gMonShinyPalette_Drilbur_),
	SPECIES_SHINY_PAL(EXCADRILL, gMonShinyPalette_Excadrill_),
	SPECIES_SHINY_PAL(AUDINO, gMonShinyPalette_Audino_),
	SPECIES_SHINY_PAL(TIMBURR, gMonShinyPalette_Timburr_),
	SPECIES_SHINY_PAL(GURDURR, gMonShinyPalette_Gurdurr_),
	SPECIES_SHINY_PAL(CONKELDURR, gMonShinyPalette_Conkeldurr_),
	SPECIES_SHINY_PAL(TYMPOLE, gMonShinyPalette_Tympole_),
	SPECIES_SHINY_PAL(PALPITOAD, gMonShinyPalette_Palpitoad_),
	SPECIES_SHINY_PAL(SEISMITOAD, gMonShinyPalette_Seismitoad_),
	SPECIES_SHINY_PAL(THROH, gMonShinyPalette_Throh_),
	SPECIES_SHINY_PAL(SAWK, gMonShinyPalette_Sawk_),
	SPECIES_SHINY_PAL(SEWADDLE, gMonShinyPalette_Sewaddle_),
	SPECIES_SHINY_PAL(SWADLOON, gMonShinyPalette_Swadloon_),
	SPECIES_SHINY_PAL(LEAVANNY, gMonShinyPalette_Leavanny_),
	SPECIES_SHINY_PAL(VENIPEDE, gMonShinyPalette_Venipede_),
	SPECIES_SHINY_PAL(WHIRLIPEDE, gMonShinyPalette_Whirlipede_),
	SPECIES_SHINY_PAL(SCOLIPEDE, gMonShinyPalette_Scolipede_),
	SPECIES_SHINY_PAL(COTTONEE, gMonShinyPalette_Cottonee_),
	SPECIES_SHINY_PAL(WHIMSICOTT, gMonShinyPalette_Whimsicott_),
	SPECIES_SHINY_PAL(PETILIL, gMonShinyPalette_Petilil_),
	SPECIES_SHINY_PAL(LILLIGANT, gMonShinyPalette_Lilligant_),
	SPECIES_SHINY_PAL(BASCULIN, gMonShinyPalette_Basculin_),
	SPECIES_SHINY_PAL(SANDILE, gMonShinyPalette_Sandile_),
	SPECIES_SHINY_PAL(KROKOROK, gMonShinyPalette_Krokorok_),
	SPECIES_SHINY_PAL(KROOKODILE, gMonShinyPalette_Krookodile_),
	SPECIES_SHINY_PAL(DARUMAKA, gMonShinyPalette_Darumaka_),
	SPECIES_SHINY_PAL(DARMANITAN, gMonShinyPalette_Darmanitan_),
	SPECIES_SHINY_PAL(MARACTUS, gMonShinyPalette_Maractus_),
	SPECIES_SHINY_PAL(DWEBBLE, gMonShinyPalette_Dwebble_),
	SPECIES_SHINY_PAL(CRUSTLE, gMonShinyPalette_Crustle_),
	SPECIES_SHINY_PAL(SCRAGGY, gMonShinyPalette_Scraggy_),
	SPECIES_SHINY_PAL(SCRAFTY, gMonShinyPalette_Scrafty_),
	SPECIES_SHINY_PAL(SIGILYPH, gMonShinyPalette_Sigilyph_),
	SPECIES_SHINY_PAL(YAMASK, gMonShinyPalette_Yamask_),
	SPECIES_SHINY_PAL(COFAGRIGUS, gMonShinyPalette_Cofagrigus_),
	SPECIES_SHINY_PAL(TIRTOUGA, gMonShinyPalette_Tirtouga_),
	SPECIES_SHINY_PAL(CARRACOSTA, gMonShinyPalette_Carracosta_),
	SPECIES_SHINY_PAL(ARCHEN, gMonShinyPalette_Archen_),
	SPECIES_SHINY_PAL(ARCHEOPS, gMonShinyPalette_Archeops_),
	SPECIES_SHINY_PAL(TRUBBISH, gMonShinyPalette_Trubbish_),
	SPECIES_SHINY_PAL(GARBODOR, gMonShinyPalette_Garbodor_),
	SPECIES_SHINY_PAL(ZORUA, gMonShinyPalette_Zorua_),
	SPECIES_SHINY_PAL(ZOROARK, gMonShinyPalette_Zoroark_),
	SPECIES_SHINY_PAL(MINCCINO, gMonShinyPalette_Minccino_),
	SPECIES_SHINY_PAL(CINCCINO, gMonShinyPalette_Cinccino_),
	SPECIES_SHINY_PAL(GOTHITA, gMonShinyPalette_Gothita_),
	SPECIES_SHINY_PAL(GOTHORITA, gMonShinyPalette_Gothorita_),
	SPECIES_SHINY_PAL(GOTHITELLE, gMonShinyPalette_Gothitelle_),
	SPECIES_SHINY_PAL(SOLOSIS, gMonShinyPalette_Solosis_),
	SPECIES_SHINY_PAL(DUOSION, gMonShinyPalette_Duosion_),
	SPECIES_SHINY_PAL(REUNICLUS, gMonShinyPalette_Reuniclus_),
	SPECIES_SHINY_PAL(DUCKLETT, gMonShinyPalette_Ducklett_),
	SPECIES_SHINY_PAL(SWANNA, gMonShinyPalette_Swanna_),
	SPECIES_SHINY_PAL(VANILLITE, gMonShinyPalette_Vanillite_),
	SPECIES_SHINY_PAL(VANILLISH, gMonShinyPalette_Vanillish_),
	SPECIES_SHINY_PAL(VANILLUXE, gMonShinyPalette_Vanilluxe_),
	SPECIES_SHINY_PAL(DEERLING, gMonShinyPalette_Deerling_),
	SPECIES_SHINY_PAL(SAWSBUCK, gMonShinyPalette_Sawsbuck_),
	SPECIES_SHINY_PAL(EMOLGA, gMonShinyPalette_Emolga_),
	SPECIES_SHINY_PAL(KARRABLAST, gMonShinyPalette_Karrablast_),
	SPECIES_SHINY_PAL(ESCAVALIER, gMonShinyPalette_Escavalier_),
	SPECIES_SHINY_PAL(FOONGUS, gMonShinyPalette_Foongus_),
	SPECIES_SHINY_PAL(AMOONGUSS, gMonShinyPalette_Amoonguss_),
	SPECIES_SHINY_PAL(FRILLISH, gMonShinyPalette_Frillish_),
	SPECIES_SHINY_PAL(JELLICENT, gMonShinyPalette_Jellicent_),
	SPECIES_SHINY_PAL(ALOMOMOLA, gMonShinyPalette_Alomomola_),
	SPECIES_SHINY_PAL(JOLTIK, gMonShinyPalette_Joltik_),
	SPECIES_SHINY_PAL(GALVANTULA, gMonShinyPalette_Galvantula_),
	SPECIES_SHINY_PAL(FERROSEED, gMonShinyPalette_Ferroseed_),
	SPECIES_SHINY_PAL(FERROTHORN, gMonShinyPalette_Ferrothorn_),
	SPECIES_SHINY_PAL(KLINK, gMonShinyPalette_Klink_),
	SPECIES_SHINY_PAL(KLANG, gMonShinyPalette_Klang_),
	SPECIES_SHINY_PAL(KLINKLANG, gMonShinyPalette_Klinklang_),
	SPECIES_SHINY_PAL(TYNAMO, gMonShinyPalette_Tynamo_),
	SPECIES_SHINY_PAL(EELEKTRIK, gMonShinyPalette_Eelektrik_),
	SPECIES_SHINY_PAL(EELEKTROSS, gMonShinyPalette_Eelektross_),
	SPECIES_SHINY_PAL(ELGYEM, gMonShinyPalette_Elgyem_),
	SPECIES_SHINY_PAL(BEHEEYEM, gMonShinyPalette_Beheeyem_),
	SPECIES_SHINY_PAL(LITWICK, gMonShinyPalette_Litwick_),
	SPECIES_SHINY_PAL(LAMPENT, gMonShinyPalette_Lampent_),
	SPECIES_SHINY_PAL(CHANDELURE, gMonShinyPalette_Chandelure_),
	SPECIES_SHINY_PAL(AXEW, gMonShinyPalette_Axew_),
	SPECIES_SHINY_PAL(FRAXURE, gMonShinyPalette_Fraxure_),
	SPECIES_SHINY_PAL(HAXORUS, gMonShinyPalette_Haxorus_),
	SPECIES_SHINY_PAL(CUBCHOO, gMonShinyPalette_Cubchoo_),
	SPECIES_SHINY_PAL(BEARTIC, gMonShinyPalette_Beartic_),
	SPECIES_SHINY_PAL(CRYOGONAL, gMonShinyPalette_Cryogonal_),
	SPECIES_SHINY_PAL(SHELMET, gMonShinyPalette_Shelmet_),
	SPECIES_SHINY_PAL(ACCELGOR, gMonShinyPalette_Accelgor_),
	SPECIES_SHINY_PAL(STUNFISK, gMonShinyPalette_Stunfisk_),
	SPECIES_SHINY_PAL(MIENFOO, gMonShinyPalette_Mienfoo_),
	SPECIES_SHINY_PAL(MIENSHAO, gMonShinyPalette_Mienshao_),
	SPECIES_SHINY_PAL(DRUDDIGON, gMonShinyPalette_Druddigon_),
	SPECIES_SHINY_PAL(GOLETT, gMonShinyPalette_Golett_),
	SPECIES_SHINY_PAL(GOLURK, gMonShinyPalette_Golurk_),
	SPECIES_SHINY_PAL(PAWNIARD, gMonShinyPalette_Pawniard_),
	SPECIES_SHINY_PAL(BISHARP, gMonShinyPalette_Bisharp_),
	SPECIES_SHINY_PAL(BOUFFALANT, gMonShinyPalette_Bouffalant_),
	SPECIES_SHINY_PAL(RUFFLET, gMonShinyPalette_Rufflet_),
	SPECIES_SHINY_PAL(BRAVIARY, gMonShinyPalette_Braviary_),
	SPECIES_SHINY_PAL(VULLABY, gMonShinyPalette_Vullaby_),
	SPECIES_SHINY_PAL(MANDIBUZZ, gMonShinyPalette_Mandibuzz_),
	SPECIES_SHINY_PAL(HEATMOR, gMonShinyPalette_Heatmor_),
	SPECIES_SHINY_PAL(DURANT, gMonShinyPalette_Durant_),
	SPECIES_SHINY_PAL(DEINO, gMonShinyPalette_Deino_),
	SPECIES_SHINY_PAL(ZWEILOUS, gMonShinyPalette_Zweilous_),
	SPECIES_SHINY_PAL(HYDREIGON, gMonShinyPalette_Hydreigon_),
	SPECIES_SHINY_PAL(LARVESTA, gMonShinyPalette_Larvesta_),
	SPECIES_SHINY_PAL(VOLCARONA, gMonShinyPalette_Volcarona_),
	SPECIES_SHINY_PAL(COBALION, gMonShinyPalette_Cobalion_),
	SPECIES_SHINY_PAL(TERRAKION, gMonShinyPalette_Terrakion_),
	SPECIES_SHINY_PAL(VIRIZION, gMonShinyPalette_Virizion_),
	SPECIES_SHINY_PAL(TORNADUS, gMonShinyPalette_Tornadus_),
	SPECIES_SHINY_PAL(THUNDURUS, gMonShinyPalette_Thundurus_),
	SPECIES_SHINY_PAL(RESHIRAM, gMonShinyPalette_Reshiram_),
	SPECIES_SHINY_PAL(ZEKROM, gMonShinyPalette_Zekrom_),
	SPECIES_SHINY_PAL(LANDORUS, gMonShinyPalette_Landorus_),
	SPECIES_SHINY_PAL(KYUREM, gMonShinyPalette_Kyurem_),
	SPECIES_SHINY_PAL(KELDEO, gMonShinyPalette_Keldeo_),
	SPECIES_SHINY_PAL(MELOETTA, gMonShinyPalette_Meloetta_),
	SPECIES_SHINY_PAL(GENESECT, gMonShinyPalette_Genesect_),
	SPECIES_SHINY_PAL(CHESPIN, gMonShinyPalette_Chespin_),
	SPECIES_SHINY_PAL(QUILLADIN, gMonShinyPalette_Quilladin_),
	SPECIES_SHINY_PAL(CHESNAUGHT, gMonShinyPalette_Chesnaught_),
	SPECIES_SHINY_PAL(FENNEKIN, gMonShinyPalette_Fennekin_),
	SPECIES_SHINY_PAL(BRAIXEN, gMonShinyPalette_Braixen_),
	SPECIES_SHINY_PAL(DELPHOX, gMonShinyPalette_Delphox_),
	SPECIES_SHINY_PAL(FROAKIE, gMonShinyPalette_Froakie_),
	SPECIES_SHINY_PAL(FROGADIER, gMonShinyPalette_Frogadier_),
	SPECIES_SHINY_PAL(GRENINJA, gMonShinyPalette_Greninja_),
	SPECIES_SHINY_PAL(BUNNELBY, gMonShinyPalette_Bunnelby_),
	SPECIES_SHINY_PAL(DIGGERSBY, gMonShinyPalette_Diggersby_),
	SPECIES_SHINY_PAL(FLETCHLING, gMonShinyPalette_Fletchling_),
	SPECIES_SHINY_PAL(FLECHINDER, gMonShinyPalette_Flechinder_),
	SPECIES_SHINY_PAL(TALONFLAME, gMonShinyPalette_Talonflame_),
	SPECIES_SHINY_PAL(SCATTERBUG, gMonShinyPalette_Scatterbug_),
	SPECIES_SHINY_PAL(SPEWPA, gMonShinyPalette_Spewpa_),
	SPECIES_SHINY_PAL(VIVILLON, gMonShinyPalette_Vivillon_),
	SPECIES_SHINY_PAL(LITLEO, gMonShinyPalette_Litleo_),
	SPECIES_SHINY_PAL(PYROAR, gMonShinyPalette_Pyroar_),
	SPECIES_SHINY_PAL(FLABEBE, gMonShinyPalette_Flabebe_),
	SPECIES_SHINY_PAL(FLOETTE, gMonShinyPalette_Floette_),
	SPECIES_SHINY_PAL(FLORGES, gMonShinyPalette_Florges_),
	SPECIES_SHINY_PAL(SKIDDO, gMonShinyPalette_Skiddo_),
	SPECIES_SHINY_PAL(GOGOAT, gMonShinyPalette_Gogoat_),
	SPECIES_SHINY_PAL(PANCHAM, gMonShinyPalette_Pancham_),
	SPECIES_SHINY_PAL(PANGORO, gMonShinyPalette_Pangoro_),
	SPECIES_SHINY_PAL(FURFROU, gMonShinyPalette_Furfrou_),
	SPECIES_SHINY_PAL(ESPURR, gMonShinyPalette_Espurr_),
	SPECIES_SHINY_PAL(MEOWSTIC, gMonShinyPalette_Meowstic_),
	SPECIES_SHINY_PAL(HONEDGE, gMonShinyPalette_Honedge_),
	SPECIES_SHINY_PAL(DOUBLADE, gMonShinyPalette_Doublade_),
	SPECIES_SHINY_PAL(AEGISLASH, gMonShinyPalette_Aegislash_),
	SPECIES_SHINY_PAL(SPRITZEE, gMonShinyPalette_Spritzee_),
	SPECIES_SHINY_PAL(AROMATISSE, gMonShinyPalette_Aromatisse_),
	SPECIES_SHINY_PAL(SWIRLIX, gMonShinyPalette_Swirlix_),
	SPECIES_SHINY_PAL(SLURPUFF, gMonShinyPalette_Slurpuff_),
	SPECIES_SHINY_PAL(INKAY, gMonShinyPalette_Inkay_),
	SPECIES_SHINY_PAL(MALAMAR, gMonShinyPalette_Malamar_),
	SPECIES_SHINY_PAL(BINACLE, gMonShinyPalette_Binacle_),
	SPECIES_SHINY_PAL(BARBARACLE, gMonShinyPalette_Barbaracle_),
	SPECIES_SHINY_PAL(SKRELP, gMonShinyPalette_Skrelp_),
	SPECIES_SHINY_PAL(DRAGALGE, gMonShinyPalette_Dragalge_),
	SPECIES_SHINY_PAL(CLAUNCHER, gMonShinyPalette_Clauncher_),
	SPECIES_SHINY_PAL(CLAWITZER, gMonShinyPalette_Clawitzer_),
	SPECIES_SHINY_PAL(HELIOPTILE, gMonShinyPalette_Helioptile_),
	SPECIES_SHINY_PAL(HELIOLISK, gMonShinyPalette_Heliolisk_),
	SPECIES_SHINY_PAL(TYRUNT, gMonShinyPalette_Tyrunt_),
	SPECIES_SHINY_PAL(TYRANTRUM, gMonShinyPalette_Tyrantrum_),
	SPECIES_SHINY_PAL(AMAURA, gMonShinyPalette_Amaura_),
	SPECIES_SHINY_PAL(AURORUS, gMonShinyPalette_Aurorus_),
	SPECIES_SHINY_PAL(SYLVEON, gMonShinyPalette_Sylveon_),
	SPECIES_SHINY_PAL(HAWLUCHA, gMonShinyPalette_Hawlucha_),
	SPECIES_SHINY_PAL(DEDENNE, gMonShinyPalette_Dedenne_),
	SPECIES_SHINY_PAL(CARBINK, gMonShinyPalette_Carbink_),
	SPECIES_SHINY_PAL(GOOMY, gMonShinyPalette_Goomy_),
	SPECIES_SHINY_PAL(SLIGGOO, gMonShinyPalette_Sliggoo_),
	SPECIES_SHINY_PAL(GOODRA, gMonShinyPalette_Goodra_),
	SPECIES_SHINY_PAL(KLEFKI, gMonShinyPalette_Klefki_),
	SPECIES_SHINY_PAL(PHANTUMP, gMonShinyPalette_Phantump_),
	SPECIES_SHINY_PAL(TREVENANT, gMonShinyPalette_Trevenant_),
	SPECIES_SHINY_PAL(PUMPKABOO, gMonShinyPalette_Pumpkaboo_),
	SPECIES_SHINY_PAL(GOURGEIST, gMonShinyPalette_Gourgeist_),
	SPECIES_SHINY_PAL(BERGMITE, gMonShinyPalette_Bergmite_),
	SPECIES_SHINY_PAL(AVALUGG, gMonShinyPalette_Avalugg_),
	SPECIES_SHINY_PAL(NOIBAT, gMonShinyPalette_Noibat_),
	SPECIES_SHINY_PAL(NOIVERN, gMonShinyPalette_Noivern_),
	SPECIES_SHINY_PAL(XERNEAS, gMonShinyPalette_Xerneas_),
	SPECIES_SHINY_PAL(YVELTAL, gMonShinyPalette_Yveltal_),
	SPECIES_SHINY_PAL(ZYGARDE, gMonShinyPalette_Zygarde_),
	SPECIES_SHINY_PAL(DIANCIE, gMonShinyPalette_Diancie_),
	SPECIES_SHINY_PAL(HOOPA, gMonShinyPalette_Hoopa_),
	SPECIES_SHINY_PAL(VOLCANION, gMonShinyPalette_Volcanion_),
	SPECIES_SHINY_PAL(ROWLET, gMonShinyPalette_Rowlet_),
	SPECIES_SHINY_PAL(DARTRIX, gMonShinyPalette_Dartrix_),
	SPECIES_SHINY_PAL(DECIDUEYE, gMonShinyPalette_Decidueye_),
	SPECIES_SHINY_PAL(LITTEN, gMonShinyPalette_Litten_),
	SPECIES_SHINY_PAL(TORRACAT, gMonShinyPalette_Torracat_),
	SPECIES_SHINY_PAL(INCINEROAR, gMonShinyPalette_Incineroar_),
	SPECIES_SHINY_PAL(POPPLIO, gMonShinyPalette_Popplio_),
	SPECIES_SHINY_PAL(BRIONNE, gMonShinyPalette_Brionne_),
	SPECIES_SHINY_PAL(PRIMARINA, gMonShinyPalette_Primarina_),
	SPECIES_SHINY_PAL(PIKIPEK, gMonShinyPalette_Pikipek_),
	SPECIES_SHINY_PAL(TRUMBEAK, gMonShinyPalette_Trumbeak_),
	SPECIES_SHINY_PAL(TOUCANNON, gMonShinyPalette_Toucannon_),
	SPECIES_SHINY_PAL(YUNGOOS, gMonShinyPalette_Yungoos_),
	SPECIES_SHINY_PAL(GUMSHOOS, gMonShinyPalette_Gumshoos_),
	SPECIES_SHINY_PAL(GRUBBIN, gMonShinyPalette_Grubbin_),
	SPECIES_SHINY_PAL(CHARJABUG, gMonShinyPalette_Charjabug_),
	SPECIES_SHINY_PAL(VIKAVOLT, gMonShinyPalette_Vikavolt_),
	SPECIES_SHINY_PAL(CRABRAWLER, gMonShinyPalette_Crabrawler_),
	SPECIES_SHINY_PAL(CRABMINABL, gMonShinyPalette_Crabminabl_),
	SPECIES_SHINY_PAL(ORICORIO, gMonShinyPalette_Oricorio_),
	SPECIES_SHINY_PAL(CUTIEFLY, gMonShinyPalette_Cutiefly_),
	SPECIES_SHINY_PAL(RIBOMBEE, gMonShinyPalette_Ribombee_),
	SPECIES_SHINY_PAL(ROCKRUFF, gMonShinyPalette_Rockruff_),
	SPECIES_SHINY_PAL(LYCANROC, gMonShinyPalette_Lycanroc_),
	SPECIES_SHINY_PAL(WISHIWASHI, gMonShinyPalette_Wishiwashi_),
	SPECIES_SHINY_PAL(MAREANIE, gMonShinyPalette_Mareanie_),
	SPECIES_SHINY_PAL(TOXAPEX, gMonShinyPalette_Toxapex_),
	SPECIES_SHINY_PAL(MUDBRAY, gMonShinyPalette_Mudbray_),
	SPECIES_SHINY_PAL(MUDSDALE, gMonShinyPalette_Mudsdale_),
	SPECIES_SHINY_PAL(DEWPIDER, gMonShinyPalette_Dewpider_),
	SPECIES_SHINY_PAL(ARAQUANID, gMonShinyPalette_Araquanid_),
	SPECIES_SHINY_PAL(FOMANTIS, gMonShinyPalette_Fomantis_),
	SPECIES_SHINY_PAL(LURANTIS, gMonShinyPalette_Lurantis_),
	SPECIES_SHINY_PAL(MORELULL, gMonShinyPalette_Morelull_),
	SPECIES_SHINY_PAL(SHIINOTIC, gMonShinyPalette_Shiinotic_),
	SPECIES_SHINY_PAL(SALANDIT, gMonShinyPalette_Salandit_),
	SPECIES_SHINY_PAL(SALAZZLE, gMonShinyPalette_Salazzle_),
	SPECIES_SHINY_PAL(STUFFUL, gMonShinyPalette_Stufful_),
	SPECIES_SHINY_PAL(BEWEAR, gMonShinyPalette_Bewear_),
	SPECIES_SHINY_PAL(BOUNSWEET, gMonShinyPalette_Bounsweet_),
	SPECIES_SHINY_PAL(STEENEE, gMonShinyPalette_Steenee_),
	SPECIES_SHINY_PAL(TSAREENA, gMonShinyPalette_Tsareena_),
	SPECIES_SHINY_PAL(COMFEY, gMonShinyPalette_Comfey_),
	SPECIES_SHINY_PAL(ORANGURU, gMonShinyPalette_Oranguru_),
	SPECIES_SHINY_PAL(PASSIMIAN, gMonShinyPalette_Passimian_),
	SPECIES_SHINY_PAL(WIMPOD, gMonShinyPalette_Wimpod_),
	SPECIES_SHINY_PAL(GOLISOPOD, gMonShinyPalette_Golisopod_),
	SPECIES_SHINY_PAL(SANDYGAST, gMonShinyPalette_Sandygast_),
	SPECIES_SHINY_PAL(PALOSSAND, gMonShinyPalette_Palossand_),
	SPECIES_SHINY_PAL(PYUKUMUKU, gMonShinyPalette_Pyukumuku_),
	SPECIES_SHINY_PAL(TYPENULL, gMonShinyPalette_TypeNull_),
	SPECIES_SHINY_PAL(SILVALLY, gMonShinyPalette_Silvally_),
	SPECIES_SHINY_PAL(MINIOR, gMonShinyPalette_Minior_),
	SPECIES_SHINY_PAL(KOMALA, gMonShinyPalette_Komala_),
	SPECIES_SHINY_PAL(TURTONATOR, gMonShinyPalette_Turtonator_),
	SPECIES_SHINY_PAL(TOGEDEMARU, gMonShinyPalette_Togedemaru_),
	SPECIES_SHINY_PAL(MIMIKYU, gMonShinyPalette_Mimikyu_),
	SPECIES_SHINY_PAL(BRUXISH, gMonShinyPalette_Bruxish_),
	SPECIES_SHINY_PAL(DRAMPA, gMonShinyPalette_Drampa_),
	SPECIES_SHINY_PAL(DHELMISE, gMonShinyPalette_Dhelmise_),
	SPECIES_SHINY_PAL(JANGMOO, gMonShinyPalette_Jangmoo_),
	SPECIES_SHINY_PAL(HAKAMOO, gMonShinyPalette_Hakamoo_),
	SPECIES_SHINY_PAL(KOMMOO, gMonShinyPalette_Kommoo_),
	SPECIES_SHINY_PAL(TAPUKOKO, gMonShinyPalette_TapuKoko_),
	SPECIES_SHINY_PAL(TAPULELE, gMonShinyPalette_TapuLele_),
	SPECIES_SHINY_PAL(TAPUBULU, gMonShinyPalette_TapuBulu_),
	SPECIES_SHINY_PAL(TAPUFINI, gMonShinyPalette_TapuFini_),
	SPECIES_SHINY_PAL(COSMOG, gMonShinyPalette_Cosmog_),
	SPECIES_SHINY_PAL(COSMOEM, gMonShinyPalette_Cosmoem_),
	SPECIES_SHINY_PAL(SOLGALEO, gMonShinyPalette_Solgaleo_),
	SPECIES_SHINY_PAL(LUNALA, gMonShinyPalette_Lunala_),
	SPECIES_SHINY_PAL(NIHILEGO, gMonShinyPalette_Nihilego_),
	SPECIES_SHINY_PAL(BUZZWOLE, gMonShinyPalette_Buzzwole_),
	SPECIES_SHINY_PAL(PHEROMOSA, gMonShinyPalette_Pheromosa_),
	SPECIES_SHINY_PAL(XURKITREE, gMonShinyPalette_Xurkitree_),
	SPECIES_SHINY_PAL(CELESTEELA, gMonShinyPalette_Celesteela_),
	SPECIES_SHINY_PAL(KARTANA, gMonShinyPalette_Kartana_),
	SPECIES_SHINY_PAL(GUZZLORD, gMonShinyPalette_Guzzlord_),
	SPECIES_SHINY_PAL(NECROZMA, gMonShinyPalette_Necrozma_),
	SPECIES_SHINY_PAL(MAGEARNA, gMonShinyPalette_Magearna_),
	SPECIES_SHINY_PAL(MARSHADOW, gMonShinyPalette_Marshadow_),
	SPECIES_SHINY_PAL(POIPOLE, gMonShinyPalette_Poipole_),
	SPECIES_SHINY_PAL(NAGANADEL, gMonShinyPalette_Naganadel_),
	SPECIES_SHINY_PAL(STAKATAKA, gMonShinyPalette_Stakataka_),
	SPECIES_SHINY_PAL(BLACEPHALN, gMonShinyPalette_Blacephaln_),
	SPECIES_SHINY_PAL(ZERAORA, gMonShinyPalette_Zeraora_),
	SPECIES_SHINY_PAL(MELTAN, gMonShinyPalette_Meltan_),
	SPECIES_SHINY_PAL(MELMETAL, gMonShinyPalette_Melmetal_),
	SPECIES_SHINY_PAL(GROOKEY, gMonShinyPalette_Grookey_),
	SPECIES_SHINY_PAL(THWACKEY, gMonShinyPalette_Thwackey_),
	SPECIES_SHINY_PAL(RILLABOOM, gMonShinyPalette_Rillaboom_),
	SPECIES_SHINY_PAL(SCORBUNNY, gMonShinyPalette_Scorbunny_),
	SPECIES_SHINY_PAL(RABOOT, gMonShinyPalette_Raboot_),
	SPECIES_SHINY_PAL(CINDERACE, gMonShinyPalette_Cinderace_),
	SPECIES_SHINY_PAL(SOBBLE, gMonShinyPalette_Sobble_),
	SPECIES_SHINY_PAL(DRIZZILE, gMonShinyPalette_Drizzile_),
	SPECIES_SHINY_PAL(INTELEON, gMonShinyPalette_Inteleon_),
	SPECIES_SHINY_PAL(SKWOVET, gMonShinyPalette_Skwovet_),
	SPECIES_SHINY_PAL(GREEDENT, gMonShinyPalette_Greedent_),
	SPECIES_SHINY_PAL(ROOKIDEE, gMonShinyPalette_Rookidee_),
	SPECIES_SHINY_PAL(CORVISQUIR, gMonShinyPalette_Corvisquir_),
	SPECIES_SHINY_PAL(CORVIKNIGH, gMonShinyPalette_Corviknigh_),
	SPECIES_SHINY_PAL(BLIPBUG, gMonShinyPalette_Blipbug_),
	SPECIES_SHINY_PAL(DOTTLER, gMonShinyPalette_Dottler_),
	SPECIES_SHINY_PAL(ORBEETLE, gMonShinyPalette_Orbeetle_),
	SPECIES_SHINY_PAL(NICKIT, gMonShinyPalette_Nickit_),
	SPECIES_SHINY_PAL(THIEVUL, gMonShinyPalette_Thievul_),
	SPECIES_SHINY_PAL(GOSSIFLEUR, gMonShinyPalette_Gossifleur_),
	SPECIES_SHINY_PAL(ELDEGOSS, gMonShinyPalette_Eldegoss_),
	SPECIES_SHINY_PAL(WOOLOO, gMonShinyPalette_Wooloo_),
	SPECIES_SHINY_PAL(DUBWOOL, gMonShinyPalette_Dubwool_),
	SPECIES_SHINY_PAL(CHEWTLE, gMonShinyPalette_Chewtle_),
	SPECIES_SHINY_PAL(DREDNAW, gMonShinyPalette_Drednaw_),
	SPECIES_SHINY_PAL(YAMPER, gMonShinyPalette_Yamper_),
	SPECIES_SHINY_PAL(BOLTUND, gMonShinyPalette_Boltund_),
	SPECIES_SHINY_PAL(ROLYCOLY, gMonShinyPalette_Rolycoly_),
	SPECIES_SHINY_PAL(CARKOL, gMonShinyPalette_Carkol_),
	SPECIES_SHINY_PAL(COALOSSAL, gMonShinyPalette_Coalossal_),
	SPECIES_SHINY_PAL(APPLIN, gMonShinyPalette_Applin_),
	SPECIES_SHINY_PAL(FLAPPLE, gMonShinyPalette_Flapple_),
	SPECIES_SHINY_PAL(APPLETUN, gMonShinyPalette_Appletun_),
	SPECIES_SHINY_PAL(SILICOBRA, gMonShinyPalette_Silicobra_),
	SPECIES_SHINY_PAL(SANDACONDA, gMonShinyPalette_Sandaconda_),
	SPECIES_SHINY_PAL(CRAMORANT, gMonShinyPalette_Cramorant_),
	SPECIES_SHINY_PAL(ARROKUDA, gMonShinyPalette_Arrokuda_),
	SPECIES_SHINY_PAL(BARRASKEWD, gMonShinyPalette_Barraskewd_),
	SPECIES_SHINY_PAL(TOXEL, gMonShinyPalette_Toxel_),
	SPECIES_SHINY_PAL(TOXTRICITY, gMonShinyPalette_Toxtricity_),
	SPECIES_SHINY_PAL(SIZZLIPEDE, gMonShinyPalette_Sizzlipede_),
	SPECIES_SHINY_PAL(CENTISKORC, gMonShinyPalette_Centiskorc_),
	SPECIES_SHINY_PAL(CLOBBOPUS, gMonShinyPalette_Clobbopus_),
	SPECIES_SHINY_PAL(GRAPPLOCT, gMonShinyPalette_Grapploct_),
	SPECIES_SHINY_PAL(SINISTEA, gMonShinyPalette_Sinistea_),
	SPECIES_SHINY_PAL(POLTEAGEIS, gMonShinyPalette_Polteageis_),
	SPECIES_SHINY_PAL(HATENNA, gMonShinyPalette_Hatenna_),
	SPECIES_SHINY_PAL(HATTREM, gMonShinyPalette_Hattrem_),
	SPECIES_SHINY_PAL(HATTERENE, gMonShinyPalette_Hatterene_),
	SPECIES_SHINY_PAL(IMPIDIMP, gMonShinyPalette_Impidimp_),
	SPECIES_SHINY_PAL(MORGREM, gMonShinyPalette_Morgrem_),
	SPECIES_SHINY_PAL(GRIMMSNARL, gMonShinyPalette_Grimmsnarl_),
	SPECIES_SHINY_PAL(OBSTAGOON, gMonShinyPalette_Obstagoon_),
	SPECIES_SHINY_PAL(PERRSERKER, gMonShinyPalette_Perrserker_),
	SPECIES_SHINY_PAL(CURSOLA, gMonShinyPalette_Cursola_),
	SPECIES_SHINY_PAL(SIRFETCHD, gMonShinyPalette_Sirfetchd_),
	SPECIES_SHINY_PAL(MRRIME, gMonShinyPalette_MrRime_),
	SPECIES_SHINY_PAL(RUNERIGUS, gMonShinyPalette_Runerigus_),
	SPECIES_SHINY_PAL(MILCERY, gMonShinyPalette_Milcery_),
	SPECIES_SHINY_PAL(ALCREMIE, gMonShinyPalette_Alcremie_),
	SPECIES_SHINY_PAL(FALINKS, gMonShinyPalette_Falinks_),
	SPECIES_SHINY_PAL(PINCURCHIN, gMonShinyPalette_Pincurchin_),
	SPECIES_SHINY_PAL(SNOM, gMonShinyPalette_Snom_),
	SPECIES_SHINY_PAL(FROSMOTH, gMonShinyPalette_Frosmoth_),
	SPECIES_SHINY_PAL(STONJOURNE, gMonShinyPalette_Stonjourne_),
	SPECIES_SHINY_PAL(EISCUE, gMonShinyPalette_Eiscue_),
	SPECIES_SHINY_PAL(INDEEDEE, gMonShinyPalette_Indeedee_),
	SPECIES_SHINY_PAL(MORPEKO, gMonShinyPalette_Morpeko_),
	SPECIES_SHINY_PAL(CUFANT, gMonShinyPalette_Cufant_),
	SPECIES_SHINY_PAL(COPPERAJAH, gMonShinyPalette_Copperajah_),
	SPECIES_SHINY_PAL(DRACOZOLT, gMonShinyPalette_Dracozolt_),
	SPECIES_SHINY_PAL(ARCTOZOLT, gMonShinyPalette_Arctozolt_),
	SPECIES_SHINY_PAL(DRACOVISH, gMonShinyPalette_Dracovish_),
	SPECIES_SHINY_PAL(ARCTOVISH, gMonShinyPalette_Arctovish_),
	SPECIES_SHINY_PAL(DURALUDON, gMonShinyPalette_Duraludon_),
	SPECIES_SHINY_PAL(DREEPY, gMonShinyPalette_Dreepy_),
	SPECIES_SHINY_PAL(DRAKLOAK, gMonShinyPalette_Drakloak_),
	SPECIES_SHINY_PAL(DRAGAPULT, gMonShinyPalette_Dragapult_),
	SPECIES_SHINY_PAL(ZACIAN, gMonShinyPalette_Zacian_),
	SPECIES_SHINY_PAL(ZAMAZENTA, gMonShinyPalette_Zamazenta_),
	SPECIES_SHINY_PAL(ETERNATUS, gMonShinyPalette_Eternatus_),
	SPECIES_SHINY_PAL(KUBFU, gMonShinyPalette_Kubfu_),
	SPECIES_SHINY_PAL(URSHIFU, gMonShinyPalette_Urshifu_),
	SPECIES_SHINY_PAL(ZARUDE, gMonShinyPalette_Zarude_),
	SPECIES_SHINY_PAL(REGIELEKI, gMonShinyPalette_Regieleki_),
	SPECIES_SHINY_PAL(REGIDRAGO, gMonShinyPalette_Regidrago_),
	SPECIES_SHINY_PAL(GLASTRIER, gMonShinyPalette_Glastrier_),
	SPECIES_SHINY_PAL(SPECTRIER, gMonShinyPalette_Spectrier_),
	SPECIES_SHINY_PAL(CALYREX, gMonShinyPalette_Calyrex_),
	SPECIES_SHINY_PAL(WYRDEER, gMonShinyPalette_Wyrdeer_),
	SPECIES_SHINY_PAL(KLEAVOR, gMonShinyPalette_Kleavor_),
	SPECIES_SHINY_PAL(URSALUNA, gMonShinyPalette_Ursaluna_),
	SPECIES_SHINY_PAL(BSCULEGION, gMonShinyPalette_Bsculegion_),
	SPECIES_SHINY_PAL(SNEASLER, gMonShinyPalette_Sneasler_),
	SPECIES_SHINY_PAL(OVERQWIL, gMonShinyPalette_Overqwil_),
	SPECIES_SHINY_PAL(ENAMORUS, gMonShinyPalette_Enamorus_),
	SPECIES_SHINY_PAL(VENUSAUR_2, gMonShinyPalette_Venusaur2_),
	SPECIES_SHINY_PAL(CHARIZARD_2, gMonShinyPalette_Charizard2_),
	SPECIES_SHINY_PAL(CHARIZARD_3, gMonShinyPalette_Charizard3_),
	SPECIES_SHINY_PAL(BLASTOISE_2, gMonShinyPalette_Blastoise2_),
	SPECIES_SHINY_PAL(BEEDRILL_2, gMonShinyPalette_Beedrill2_),
	SPECIES_SHINY_PAL(PIDGEOT_2, gMonShinyPalette_Pidgeot2_),
	SPECIES_SHINY_PAL(ALAKAZAM_2, gMonShinyPalette_Alakazam2_),
	SPECIES_SHINY_PAL(SLOWBRO_2, gMonShinyPalette_Slowbro2_),
	SPECIES_SHINY_PAL(GENGAR_2, gMonShinyPalette_Gengar2_),
	SPECIES_SHINY_PAL(KANGASKHAN_2, gMonShinyPalette_Kangaskhan2_),
	SPECIES_SHINY_PAL(PINSIR_2, gMonShinyPalette_Pinsir2_),
	SPECIES_SHINY_PAL(GYARADOS_2, gMonShinyPalette_Gyarados2_),
	SPECIES_SHINY_PAL(AERODACTYL_2, gMonShinyPalette_Aerodactyl2_),
	SPECIES_SHINY_PAL(MEWTWO_2, gMonShinyPalette_Mewtwo2_),
	SPECIES_SHINY_PAL(MEWTWO_3, gMonShinyPalette_Mewtwo3_),
	SPECIES_SHINY_PAL(AMPHAROS_2, gMonShinyPalette_Ampharos2_),
	SPECIES_SHINY_PAL(STEELIX_2, gMonShinyPalette_Steelix2_),
	SPECIES_SHINY_PAL(SCIZOR_2, gMonShinyPalette_Scizor2_),
	SPECIES_SHINY_PAL(HERACROSS_2, gMonShinyPalette_Heracross2_),
	SPECIES_SHINY_PAL(HOUNDOOM_2, gMonShinyPalette_Houndoom2_),
	SPECIES_SHINY_PAL(TYRANITAR_2, gMonShinyPalette_Tyranitar2_),
	SPECIES_SHINY_PAL(SCEPTILE_2, gMonShinyPalette_Sceptile2_),
	SPECIES_SHINY_PAL(BLAZIKEN_2, gMonShinyPalette_Blaziken2_),
	SPECIES_SHINY_PAL(SWAMPERT_2, gMonShinyPalette_Swampert2_),
	SPECIES_SHINY_PAL(GARDEVOIR_2, gMonShinyPalette_Gardevoir2_),
	SPECIES_SHINY_PAL(SABLEYE_2, gMonShinyPalette_Sableye2_),
	SPECIES_SHINY_PAL(MAWILE_2, gMonShinyPalette_Mawile2_),
	SPECIES_SHINY_PAL(AGGRON_2, gMonShinyPalette_Aggron2_),
	SPECIES_SHINY_PAL(MEDICHAM_2, gMonShinyPalette_Medicham2_),
	SPECIES_SHINY_PAL(MANECTRIC_2, gMonShinyPalette_Manectric2_),
	SPECIES_SHINY_PAL(SHARPEDO_2, gMonShinyPalette_Sharpedo2_),
	SPECIES_SHINY_PAL(CAMERUPT_2, gMonShinyPalette_Camerupt2_),
	SPECIES_SHINY_PAL(ALTARIA_2, gMonShinyPalette_Altaria2_),
	SPECIES_SHINY_PAL(BANETTE_2, gMonShinyPalette_Banette2_),
	SPECIES_SHINY_PAL(ABSOL_2, gMonShinyPalette_Absol2_),
	SPECIES_SHINY_PAL(GLALIE_2, gMonShinyPalette_Glalie2_),
	SPECIES_SHINY_PAL(SALAMENCE_2, gMonShinyPalette_Salamence2_),
	SPECIES_SHINY_PAL(METAGROSS_2, gMonShinyPalette_Metagross2_),
	SPECIES_SHINY_PAL(LATIAS_2, gMonShinyPalette_Latias2_),
	SPECIES_SHINY_PAL(LATIOS_2, gMonShinyPalette_Latios2_),
	SPECIES_SHINY_PAL(LOPUNNY_2, gMonShinyPalette_Lopunny2_),
	SPECIES_SHINY_PAL(GARCHOMP_2, gMonShinyPalette_Garchomp2_),
	SPECIES_SHINY_PAL(LUCARIO_2, gMonShinyPalette_Lucario2_),
	SPECIES_SHINY_PAL(ABOMASNOW_2, gMonShinyPalette_Abomasnow2_),
	SPECIES_SHINY_PAL(GALLADE_2, gMonShinyPalette_Gallade2_),
	SPECIES_SHINY_PAL(AUDINO_2, gMonShinyPalette_Audino2_),
	SPECIES_SHINY_PAL(DIANCIE_2, gMonShinyPalette_Diancie2_),
	SPECIES_SHINY_PAL(RAYQUAZA_2, gMonShinyPalette_Rayquaza2_),
	SPECIES_SHINY_PAL(KYOGRE_2, gMonShinyPalette_Kyogre2_),
	SPECIES_SHINY_PAL(GROUDON_2, gMonShinyPalette_Groudon2_),
	SPECIES_SHINY_PAL(RATTATA_2, gMonShinyPalette_Rattata2_),
	SPECIES_SHINY_PAL(RATICATE_2, gMonShinyPalette_Raticate2_),
	SPECIES_SHINY_PAL(RAICHU_2, gMonShinyPalette_Raichu2_),
	SPECIES_SHINY_PAL(SANDSHREW_2, gMonShinyPalette_Sandshrew2_),
	SPECIES_SHINY_PAL(SANDSLASH_2, gMonShinyPalette_Sandslash2_),
	SPECIES_SHINY_PAL(VULPIX_2, gMonShinyPalette_Vulpix2_),
	SPECIES_SHINY_PAL(NINETALES_2, gMonShinyPalette_Ninetales2_),
	SPECIES_SHINY_PAL(DIGLETT_2, gMonShinyPalette_Diglett2_),
	SPECIES_SHINY_PAL(DUGTRIO_2, gMonShinyPalette_Dugtrio2_),
	SPECIES_SHINY_PAL(MEOWTH_2, gMonShinyPalette_Meowth2_),
	SPECIES_SHINY_PAL(PERSIAN_2, gMonShinyPalette_Persian2_),
	SPECIES_SHINY_PAL(GEODUDE_2, gMonShinyPalette_Geodude2_),
	SPECIES_SHINY_PAL(GRAVELER_2, gMonShinyPalette_Graveler2_),
	SPECIES_SHINY_PAL(GOLEM_2, gMonShinyPalette_Golem2_),
	SPECIES_SHINY_PAL(GRIMER_2, gMonShinyPalette_Grimer2_),
	SPECIES_SHINY_PAL(MUK_2, gMonShinyPalette_Muk2_),
	SPECIES_SHINY_PAL(EXEGGUTOR_2, gMonShinyPalette_Exeggutor2_),
	SPECIES_SHINY_PAL(MAROWAK_2, gMonShinyPalette_Marowak2_),
	SPECIES_SHINY_PAL(MEOWTH_3, gMonShinyPalette_Meowth3_),
	SPECIES_SHINY_PAL(PONYTA_2, gMonShinyPalette_Ponyta2_),
	SPECIES_SHINY_PAL(RAPIDASH_2, gMonShinyPalette_Rapidash2_),
	SPECIES_SHINY_PAL(SLOWPOKE_2, gMonShinyPalette_Slowpoke2_),
	SPECIES_SHINY_PAL(SLOWBRO_3, gMonShinyPalette_Slowbro3_),
	SPECIES_SHINY_PAL(FARFETCHD_2, gMonShinyPalette_Farfetchd2_),
	SPECIES_SHINY_PAL(WEEZING_2, gMonShinyPalette_Weezing2_),
	SPECIES_SHINY_PAL(MRMIME_2, gMonShinyPalette_MrMime2_),
	SPECIES_SHINY_PAL(ARTICUNO_2, gMonShinyPalette_Articuno2_),
	SPECIES_SHINY_PAL(ZAPDOS_2, gMonShinyPalette_Zapdos2_),
	SPECIES_SHINY_PAL(MOLTRES_2, gMonShinyPalette_Moltres2_),
	SPECIES_SHINY_PAL(SLOWKING_2, gMonShinyPalette_Slowking2_),
	SPECIES_SHINY_PAL(CORSOLA_2, gMonShinyPalette_Corsola2_),
	SPECIES_SHINY_PAL(ZIGZAGOON_2, gMonShinyPalette_Zigzagoon2_),
	SPECIES_SHINY_PAL(LINOONE_2, gMonShinyPalette_Linoone2_),
	SPECIES_SHINY_PAL(DARUMAKA_2, gMonShinyPalette_Darumaka2_),
	SPECIES_SHINY_PAL(DARMANITAN_2, gMonShinyPalette_Darmanitan2_),
	SPECIES_SHINY_PAL(YAMASK_2, gMonShinyPalette_Yamask2_),
	SPECIES_SHINY_PAL(STUNFISK_2, gMonShinyPalette_Stunfisk2_),
	SPECIES_SHINY_PAL(GROWLITHE_2, gMonShinyPalette_Growlithe2_),
	SPECIES_SHINY_PAL(ARCANINE_2, gMonShinyPalette_Arcanine2_),
	SPECIES_SHINY_PAL(VOLTORB_2, gMonShinyPalette_Voltorb2_),
	SPECIES_SHINY_PAL(ELECTRODE_2, gMonShinyPalette_Electrode2_),
	SPECIES_SHINY_PAL(TYPHLOSION_2, gMonShinyPalette_Typhlosion2_),
	SPECIES_SHINY_PAL(QWILFISH_2, gMonShinyPalette_Qwilfish2_),
	SPECIES_SHINY_PAL(SNEASEL_2, gMonShinyPalette_Sneasel2_),
	SPECIES_SHINY_PAL(SAMUROTT_2, gMonShinyPalette_Samurott2_),
	SPECIES_SHINY_PAL(LILLIGANT_2, gMonShinyPalette_Lilligant2_),
	SPECIES_SHINY_PAL(ZORUA_2, gMonShinyPalette_Zorua2_),
	SPECIES_SHINY_PAL(ZOROARK_2, gMonShinyPalette_Zoroark2_),
	SPECIES_SHINY_PAL(BRAVIARY_2, gMonShinyPalette_Braviary2_),
	SPECIES_SHINY_PAL(SLIGGOO_2, gMonShinyPalette_Sliggoo2_),
	SPECIES_SHINY_PAL(GOODRA_2, gMonShinyPalette_Goodra2_),
	SPECIES_SHINY_PAL(AVALUGG_2, gMonShinyPalette_Avalugg2_),
	SPECIES_SHINY_PAL(DECIDUEYE_2, gMonShinyPalette_Decidueye2_),
	SPECIES_SHINY_PAL(PIKACHU_2, gMonShinyPalette_Pikachu2_),
	SPECIES_SHINY_PAL(PIKACHU_3, gMonShinyPalette_Pikachu3_),
	SPECIES_SHINY_PAL(PIKACHU_4, gMonShinyPalette_Pikachu4_),
	SPECIES_SHINY_PAL(PIKACHU_5, gMonShinyPalette_Pikachu5_),
	SPECIES_SHINY_PAL(PIKACHU_6, gMonShinyPalette_Pikachu6_),
	SPECIES_SHINY_PAL(PIKACHU_7, gMonShinyPalette_Pikachu7_),
	SPECIES_SHINY_PAL(PIKACHU_8, gMonShinyPalette_Pikachu8_),
	SPECIES_SHINY_PAL(PIKACHU_9, gMonShinyPalette_Pikachu9_),
	SPECIES_SHINY_PAL(PIKACHU_10, gMonShinyPalette_Pikachu10_),
	SPECIES_SHINY_PAL(PIKACHU_11, gMonShinyPalette_Pikachu11_),
	SPECIES_SHINY_PAL(PIKACHU_12, gMonShinyPalette_Pikachu12_),
	SPECIES_SHINY_PAL(PIKACHU_13, gMonShinyPalette_Pikachu13_),
	SPECIES_SHINY_PAL(PIKACHU_14, gMonShinyPalette_Pikachu14_),
	SPECIES_SHINY_PAL(PIKACHU_15, gMonShinyPalette_Pikachu15_),
	SPECIES_SHINY_PAL(UNOWN_B, gMonShinyPalette_UnownB_),
    SPECIES_SHINY_PAL(UNOWN_C, gMonShinyPalette_UnownC_),
    SPECIES_SHINY_PAL(UNOWN_D, gMonShinyPalette_UnownD_),
    SPECIES_SHINY_PAL(UNOWN_E, gMonShinyPalette_UnownE_),
    SPECIES_SHINY_PAL(UNOWN_F, gMonShinyPalette_UnownF_),
    SPECIES_SHINY_PAL(UNOWN_G, gMonShinyPalette_UnownG_),
    SPECIES_SHINY_PAL(UNOWN_H, gMonShinyPalette_UnownH_),
    SPECIES_SHINY_PAL(UNOWN_I, gMonShinyPalette_UnownI_),
    SPECIES_SHINY_PAL(UNOWN_J, gMonShinyPalette_UnownJ_),
    SPECIES_SHINY_PAL(UNOWN_K, gMonShinyPalette_UnownK_),
    SPECIES_SHINY_PAL(UNOWN_L, gMonShinyPalette_UnownL_),
    SPECIES_SHINY_PAL(UNOWN_M, gMonShinyPalette_UnownM_),
    SPECIES_SHINY_PAL(UNOWN_N, gMonShinyPalette_UnownN_),
    SPECIES_SHINY_PAL(UNOWN_O, gMonShinyPalette_UnownO_),
    SPECIES_SHINY_PAL(UNOWN_P, gMonShinyPalette_UnownP_),
    SPECIES_SHINY_PAL(UNOWN_Q, gMonShinyPalette_UnownQ_),
    SPECIES_SHINY_PAL(UNOWN_R, gMonShinyPalette_UnownR_),
    SPECIES_SHINY_PAL(UNOWN_S, gMonShinyPalette_UnownS_),
    SPECIES_SHINY_PAL(UNOWN_T, gMonShinyPalette_UnownT_),
    SPECIES_SHINY_PAL(UNOWN_U, gMonShinyPalette_UnownU_),
    SPECIES_SHINY_PAL(UNOWN_V, gMonShinyPalette_UnownV_),
    SPECIES_SHINY_PAL(UNOWN_W, gMonShinyPalette_UnownW_),
    SPECIES_SHINY_PAL(UNOWN_X, gMonShinyPalette_UnownX_),
    SPECIES_SHINY_PAL(UNOWN_Y, gMonShinyPalette_UnownY_),
    SPECIES_SHINY_PAL(UNOWN_Z, gMonShinyPalette_UnownZ_),
	SPECIES_SHINY_PAL(CASTFORM_2, gMonShinyPalette_Castform2_),
	SPECIES_SHINY_PAL(CASTFORM_3, gMonShinyPalette_Castform3_),
	SPECIES_SHINY_PAL(CASTFORM_4, gMonShinyPalette_Castform4_),
	SPECIES_SHINY_PAL(DEOXYS_2, gMonShinyPalette_Deoxys2_),
	SPECIES_SHINY_PAL(DEOXYS_3, gMonShinyPalette_Deoxys3_),
	SPECIES_SHINY_PAL(DEOXYS_4, gMonShinyPalette_Deoxys4_),
	SPECIES_SHINY_PAL(BURMY_2, gMonShinyPalette_Burmy2_),
	SPECIES_SHINY_PAL(BURMY_3, gMonShinyPalette_Burmy3_),
	SPECIES_SHINY_PAL(WORMADAM_2, gMonShinyPalette_Wormadam2_),
	SPECIES_SHINY_PAL(WORMADAM_3, gMonShinyPalette_Wormadam3_),
	SPECIES_SHINY_PAL(CHERRIM_2, gMonShinyPalette_Cherrim2_),
	SPECIES_SHINY_PAL(SHELLOS_2, gMonShinyPalette_Shellos2_),
	SPECIES_SHINY_PAL(GASTRODON_2, gMonShinyPalette_Gastrodon2_),
	SPECIES_SHINY_PAL(ROTOM_2, gMonShinyPalette_Rotom2_),
	SPECIES_SHINY_PAL(ROTOM_3, gMonShinyPalette_Rotom3_),
	SPECIES_SHINY_PAL(ROTOM_4, gMonShinyPalette_Rotom4_),
	SPECIES_SHINY_PAL(ROTOM_5, gMonShinyPalette_Rotom5_),
	SPECIES_SHINY_PAL(ROTOM_6, gMonShinyPalette_Rotom6_),
	SPECIES_SHINY_PAL(DIALGA_2, gMonShinyPalette_Dialga2_),
	SPECIES_SHINY_PAL(PALKIA_2, gMonShinyPalette_Palkia2_),
	SPECIES_SHINY_PAL(GIRATINA_2, gMonShinyPalette_Giratina2_),
	SPECIES_SHINY_PAL(SHAYMIN_2, gMonShinyPalette_Shaymin2_),
	SPECIES_SHINY_PAL(ARCEUS_2, gMonShinyPalette_Arceus2_),
	SPECIES_SHINY_PAL(ARCEUS_3, gMonShinyPalette_Arceus3_),
	SPECIES_SHINY_PAL(ARCEUS_4, gMonShinyPalette_Arceus4_),
	SPECIES_SHINY_PAL(ARCEUS_5, gMonShinyPalette_Arceus5_),
	SPECIES_SHINY_PAL(ARCEUS_6, gMonShinyPalette_Arceus6_),
	SPECIES_SHINY_PAL(ARCEUS_7, gMonShinyPalette_Arceus7_),
	SPECIES_SHINY_PAL(ARCEUS_8, gMonShinyPalette_Arceus8_),
	SPECIES_SHINY_PAL(ARCEUS_9, gMonShinyPalette_Arceus9_),
	SPECIES_SHINY_PAL(ARCEUS_10, gMonShinyPalette_Arceus10_),
	SPECIES_SHINY_PAL(ARCEUS_11, gMonShinyPalette_Arceus11_),
	SPECIES_SHINY_PAL(ARCEUS_12, gMonShinyPalette_Arceus12_),
	SPECIES_SHINY_PAL(ARCEUS_13, gMonShinyPalette_Arceus13_),
	SPECIES_SHINY_PAL(ARCEUS_14, gMonShinyPalette_Arceus14_),
	SPECIES_SHINY_PAL(ARCEUS_15, gMonShinyPalette_Arceus15_),
	SPECIES_SHINY_PAL(ARCEUS_16, gMonShinyPalette_Arceus16_),
	SPECIES_SHINY_PAL(ARCEUS_17, gMonShinyPalette_Arceus17_),
	SPECIES_SHINY_PAL(ARCEUS_18, gMonShinyPalette_Arceus18_),
	SPECIES_SHINY_PAL(BASCULIN_2, gMonShinyPalette_Basculin2_),
	SPECIES_SHINY_PAL(BASCULIN_3, gMonShinyPalette_Basculin3_),
	SPECIES_SHINY_PAL(DARMANITAN_3, gMonShinyPalette_Darmanitan3_),
	SPECIES_SHINY_PAL(DARMANITAN_4, gMonShinyPalette_Darmanitan4_),
	SPECIES_SHINY_PAL(DEERLING_2, gMonShinyPalette_Deerling2_),
	SPECIES_SHINY_PAL(DEERLING_3, gMonShinyPalette_Deerling3_),
	SPECIES_SHINY_PAL(DEERLING_4, gMonShinyPalette_Deerling4_),
	SPECIES_SHINY_PAL(SAWSBUCK_2, gMonShinyPalette_Sawsbuck2_),
	SPECIES_SHINY_PAL(SAWSBUCK_3, gMonShinyPalette_Sawsbuck3_),
	SPECIES_SHINY_PAL(SAWSBUCK_4, gMonShinyPalette_Sawsbuck4_),
	SPECIES_SHINY_PAL(TORNADUS_2, gMonShinyPalette_Tornadus2_),
	SPECIES_SHINY_PAL(THUNDURUS_2, gMonShinyPalette_Thundurus2_),
	SPECIES_SHINY_PAL(LANDORUS_2, gMonShinyPalette_Landorus2_),
	SPECIES_SHINY_PAL(ENAMORUS_2, gMonShinyPalette_Enamorus2_),
	SPECIES_SHINY_PAL(KYUREM_2, gMonShinyPalette_Kyurem2_),
	SPECIES_SHINY_PAL(KYUREM_3, gMonShinyPalette_Kyurem3_),
	SPECIES_SHINY_PAL(KELDEO_2, gMonShinyPalette_Keldeo2_),
	SPECIES_SHINY_PAL(MELOETTA_2, gMonShinyPalette_Meloetta2_),
	SPECIES_SHINY_PAL(GENESECT_2, gMonShinyPalette_Genesect2_),
	SPECIES_SHINY_PAL(GENESECT_3, gMonShinyPalette_Genesect3_),
	SPECIES_SHINY_PAL(GENESECT_4, gMonShinyPalette_Genesect4_),
	SPECIES_SHINY_PAL(GENESECT_5, gMonShinyPalette_Genesect5_),
	SPECIES_SHINY_PAL(GRENINJA_2, gMonShinyPalette_Greninja2_),
	SPECIES_SHINY_PAL(GRENINJA_3, gMonShinyPalette_Greninja3_),
	SPECIES_SHINY_PAL(VIVILLON_2, gMonShinyPalette_Vivillon2_),
	SPECIES_SHINY_PAL(VIVILLON_3, gMonShinyPalette_Vivillon3_),
	SPECIES_SHINY_PAL(VIVILLON_4, gMonShinyPalette_Vivillon4_),
	SPECIES_SHINY_PAL(VIVILLON_5, gMonShinyPalette_Vivillon5_),
	SPECIES_SHINY_PAL(VIVILLON_6, gMonShinyPalette_Vivillon6_),
	SPECIES_SHINY_PAL(VIVILLON_7, gMonShinyPalette_Vivillon7_),
	SPECIES_SHINY_PAL(VIVILLON_8, gMonShinyPalette_Vivillon8_),
	SPECIES_SHINY_PAL(VIVILLON_9, gMonShinyPalette_Vivillon9_),
	SPECIES_SHINY_PAL(VIVILLON_10, gMonShinyPalette_Vivillon10_),
	SPECIES_SHINY_PAL(VIVILLON_11, gMonShinyPalette_Vivillon11_),
	SPECIES_SHINY_PAL(VIVILLON_12, gMonShinyPalette_Vivillon12_),
	SPECIES_SHINY_PAL(VIVILLON_13, gMonShinyPalette_Vivillon13_),
	SPECIES_SHINY_PAL(VIVILLON_14, gMonShinyPalette_Vivillon14_),
	SPECIES_SHINY_PAL(VIVILLON_15, gMonShinyPalette_Vivillon15_),
	SPECIES_SHINY_PAL(VIVILLON_16, gMonShinyPalette_Vivillon16_),
	SPECIES_SHINY_PAL(VIVILLON_17, gMonShinyPalette_Vivillon17_),
	SPECIES_SHINY_PAL(VIVILLON_18, gMonShinyPalette_Vivillon18_),
	SPECIES_SHINY_PAL(VIVILLON_19, gMonShinyPalette_Vivillon19_),
	SPECIES_SHINY_PAL(VIVILLON_20, gMonShinyPalette_Vivillon20_),
	SPECIES_SHINY_PAL(FLABEBE_2, gMonShinyPalette_Flabebe2_),
	SPECIES_SHINY_PAL(FLABEBE_3, gMonShinyPalette_Flabebe3_),
	SPECIES_SHINY_PAL(FLABEBE_4, gMonShinyPalette_Flabebe4_),
	SPECIES_SHINY_PAL(FLABEBE_5, gMonShinyPalette_Flabebe5_),
	SPECIES_SHINY_PAL(FLOETTE_2, gMonShinyPalette_Floette2_),
	SPECIES_SHINY_PAL(FLOETTE_3, gMonShinyPalette_Floette3_),
	SPECIES_SHINY_PAL(FLOETTE_4, gMonShinyPalette_Floette4_),
	SPECIES_SHINY_PAL(FLOETTE_5, gMonShinyPalette_Floette5_),
	SPECIES_SHINY_PAL(FLOETTE_6, gMonShinyPalette_Floette6_),
	SPECIES_SHINY_PAL(FLORGES_2, gMonShinyPalette_Florges2_),
	SPECIES_SHINY_PAL(FLORGES_3, gMonShinyPalette_Florges3_),
	SPECIES_SHINY_PAL(FLORGES_4, gMonShinyPalette_Florges4_),
	SPECIES_SHINY_PAL(FLORGES_5, gMonShinyPalette_Florges5_),
	SPECIES_SHINY_PAL(FURFROU_2, gMonShinyPalette_Furfrou2_),
	SPECIES_SHINY_PAL(FURFROU_3, gMonShinyPalette_Furfrou3_),
	SPECIES_SHINY_PAL(FURFROU_4, gMonShinyPalette_Furfrou4_),
	SPECIES_SHINY_PAL(FURFROU_5, gMonShinyPalette_Furfrou5_),
	SPECIES_SHINY_PAL(FURFROU_6, gMonShinyPalette_Furfrou6_),
	SPECIES_SHINY_PAL(FURFROU_7, gMonShinyPalette_Furfrou7_),
	SPECIES_SHINY_PAL(FURFROU_8, gMonShinyPalette_Furfrou8_),
	SPECIES_SHINY_PAL(FURFROU_9, gMonShinyPalette_Furfrou9_),
	SPECIES_SHINY_PAL(FURFROU_10, gMonShinyPalette_Furfrou10_),
	SPECIES_SHINY_PAL(MEOWSTIC_2, gMonShinyPalette_Meowstic2_),
	SPECIES_SHINY_PAL(AEGISLASH_2, gMonShinyPalette_Aegislash2_),
	SPECIES_SHINY_PAL(PUMPKABOO_2, gMonShinyPalette_Pumpkaboo2_),
	SPECIES_SHINY_PAL(PUMPKABOO_3, gMonShinyPalette_Pumpkaboo3_),
	SPECIES_SHINY_PAL(PUMPKABOO_4, gMonShinyPalette_Pumpkaboo4_),
	SPECIES_SHINY_PAL(GOURGEIST_2, gMonShinyPalette_Gourgeist2_),
	SPECIES_SHINY_PAL(GOURGEIST_3, gMonShinyPalette_Gourgeist3_),
	SPECIES_SHINY_PAL(GOURGEIST_4, gMonShinyPalette_Gourgeist4_),
	SPECIES_SHINY_PAL(XERNEAS_2, gMonShinyPalette_Xerneas2_),
	SPECIES_SHINY_PAL(ZYGARDE_2, gMonShinyPalette_Zygarde2_),
	SPECIES_SHINY_PAL(ZYGARDE_3, gMonShinyPalette_Zygarde3_),
	SPECIES_SHINY_PAL(ZYGARDE_4, gMonShinyPalette_Zygarde4_),
	SPECIES_SHINY_PAL(ZYGARDE_5, gMonShinyPalette_Zygarde5_),
	SPECIES_SHINY_PAL(HOOPA_2, gMonShinyPalette_Hoopa2_),
	SPECIES_SHINY_PAL(ORICORIO_2, gMonShinyPalette_Oricorio2_),
	SPECIES_SHINY_PAL(ORICORIO_3, gMonShinyPalette_Oricorio3_),
	SPECIES_SHINY_PAL(ORICORIO_4, gMonShinyPalette_Oricorio4_),
	SPECIES_SHINY_PAL(ROCKRUFF_2, gMonShinyPalette_Rockruff2_),
	SPECIES_SHINY_PAL(LYCANROC_2, gMonShinyPalette_Lycanroc2_),
	SPECIES_SHINY_PAL(LYCANROC_3, gMonShinyPalette_Lycanroc3_),
	SPECIES_SHINY_PAL(WISHIWASHI_2, gMonShinyPalette_Wishiwashi2_),
	SPECIES_SHINY_PAL(SILVALLY_2, gMonShinyPalette_Silvally2_),
	SPECIES_SHINY_PAL(SILVALLY_3, gMonShinyPalette_Silvally3_),
	SPECIES_SHINY_PAL(SILVALLY_4, gMonShinyPalette_Silvally4_),
	SPECIES_SHINY_PAL(SILVALLY_5, gMonShinyPalette_Silvally5_),
	SPECIES_SHINY_PAL(SILVALLY_6, gMonShinyPalette_Silvally6_),
	SPECIES_SHINY_PAL(SILVALLY_7, gMonShinyPalette_Silvally7_),
	SPECIES_SHINY_PAL(SILVALLY_8, gMonShinyPalette_Silvally8_),
	SPECIES_SHINY_PAL(SILVALLY_9, gMonShinyPalette_Silvally9_),
	SPECIES_SHINY_PAL(SILVALLY_10, gMonShinyPalette_Silvally10_),
	SPECIES_SHINY_PAL(SILVALLY_11, gMonShinyPalette_Silvally11_),
	SPECIES_SHINY_PAL(SILVALLY_12, gMonShinyPalette_Silvally12_),
	SPECIES_SHINY_PAL(SILVALLY_13, gMonShinyPalette_Silvally13_),
	SPECIES_SHINY_PAL(SILVALLY_14, gMonShinyPalette_Silvally14_),
	SPECIES_SHINY_PAL(SILVALLY_15, gMonShinyPalette_Silvally15_),
	SPECIES_SHINY_PAL(SILVALLY_16, gMonShinyPalette_Silvally16_),
	SPECIES_SHINY_PAL(SILVALLY_17, gMonShinyPalette_Silvally17_),
	SPECIES_SHINY_PAL(SILVALLY_18, gMonShinyPalette_Silvally18_),
	SPECIES_SHINY_PAL(MINIOR_2, gMonShinyPalette_Minior2_),
	SPECIES_SHINY_PAL(MINIOR_3, gMonShinyPalette_Minior3_),
	SPECIES_SHINY_PAL(MINIOR_4, gMonShinyPalette_Minior4_),
	SPECIES_SHINY_PAL(MINIOR_5, gMonShinyPalette_Minior5_),
	SPECIES_SHINY_PAL(MINIOR_6, gMonShinyPalette_Minior6_),
	SPECIES_SHINY_PAL(MINIOR_7, gMonShinyPalette_Minior7_),
	SPECIES_SHINY_PAL(MINIOR_8, gMonShinyPalette_Minior8_),
	SPECIES_SHINY_PAL(MINIOR_9, gMonShinyPalette_Minior9_),
	SPECIES_SHINY_PAL(MINIOR_10, gMonShinyPalette_Minior10_),
	SPECIES_SHINY_PAL(MINIOR_11, gMonShinyPalette_Minior11_),
	SPECIES_SHINY_PAL(MINIOR_12, gMonShinyPalette_Minior12_),
	SPECIES_SHINY_PAL(MINIOR_13, gMonShinyPalette_Minior13_),
	SPECIES_SHINY_PAL(MINIOR_14, gMonShinyPalette_Minior14_),
	SPECIES_SHINY_PAL(MIMIKYU_2, gMonShinyPalette_Mimikyu2_),
	SPECIES_SHINY_PAL(NECROZMA_2, gMonShinyPalette_Necrozma2_),
	SPECIES_SHINY_PAL(NECROZMA_3, gMonShinyPalette_Necrozma3_),
	SPECIES_SHINY_PAL(NECROZMA_4, gMonShinyPalette_Necrozma4_),
	SPECIES_SHINY_PAL(MAGEARNA_2, gMonShinyPalette_Magearna2_),
	SPECIES_SHINY_PAL(CRAMORANT_2, gMonShinyPalette_Cramorant2_),
	SPECIES_SHINY_PAL(CRAMORANT_3, gMonShinyPalette_Cramorant3_),
	SPECIES_SHINY_PAL(TOXTRICITY_2, gMonShinyPalette_Toxtricity2_),
	SPECIES_SHINY_PAL(SINISTEA_2, gMonShinyPalette_Sinistea2_),
	SPECIES_SHINY_PAL(POLTEAGEIS_2, gMonShinyPalette_Polteageis2_),
	SPECIES_SHINY_PAL(ALCREMIE_2, gMonShinyPalette_Alcremie2_),
	SPECIES_SHINY_PAL(ALCREMIE_3, gMonShinyPalette_Alcremie3_),
	SPECIES_SHINY_PAL(ALCREMIE_4, gMonShinyPalette_Alcremie4_),
	SPECIES_SHINY_PAL(ALCREMIE_5, gMonShinyPalette_Alcremie5_),
	SPECIES_SHINY_PAL(ALCREMIE_6, gMonShinyPalette_Alcremie6_),
	SPECIES_SHINY_PAL(ALCREMIE_7, gMonShinyPalette_Alcremie7_),
	SPECIES_SHINY_PAL(ALCREMIE_8, gMonShinyPalette_Alcremie8_),
	SPECIES_SHINY_PAL(ALCREMIE_9, gMonShinyPalette_Alcremie9_),
	SPECIES_SHINY_PAL(EISCUE_2, gMonShinyPalette_Eiscue2_),
	SPECIES_SHINY_PAL(INDEEDEE_2, gMonShinyPalette_Indeedee2_),
	SPECIES_SHINY_PAL(MORPEKO_2, gMonShinyPalette_Morpeko2_),
	SPECIES_SHINY_PAL(ZACIAN_2, gMonShinyPalette_Zacian2_),
	SPECIES_SHINY_PAL(ZAMAZENTA_2, gMonShinyPalette_Zamazenta2_),
	SPECIES_SHINY_PAL(ETERNATUS_2, gMonShinyPalette_Eternatus2_),
	SPECIES_SHINY_PAL(URSHIFU_2, gMonShinyPalette_Urshifu2_),
	SPECIES_SHINY_PAL(ZARUDE_2, gMonShinyPalette_Zarude2_),
	SPECIES_SHINY_PAL(CALYREX_2, gMonShinyPalette_Calyrex2_),
	SPECIES_SHINY_PAL(CALYREX_3, gMonShinyPalette_Calyrex3_),
	SPECIES_SHINY_PAL(BSCULEGION_2, gMonShinyPalette_Bsculegion2_),
	SPECIES_SHINY_PAL(ALCREMIE_10, gMonShinyPalette_Alcremie10_),
	SPECIES_SHINY_PAL(ALCREMIE_11, gMonShinyPalette_Alcremie11_),
	SPECIES_SHINY_PAL(ALCREMIE_12, gMonShinyPalette_Alcremie12_),
	SPECIES_SHINY_PAL(ALCREMIE_13, gMonShinyPalette_Alcremie13_),
	SPECIES_SHINY_PAL(ALCREMIE_14, gMonShinyPalette_Alcremie14_),
	SPECIES_SHINY_PAL(ALCREMIE_15, gMonShinyPalette_Alcremie15_),
	SPECIES_SHINY_PAL(ALCREMIE_16, gMonShinyPalette_Alcremie16_),
	SPECIES_SHINY_PAL(ALCREMIE_17, gMonShinyPalette_Alcremie17_),
	SPECIES_SHINY_PAL(ALCREMIE_18, gMonShinyPalette_Alcremie18_),
	SPECIES_SHINY_PAL(ALCREMIE_19, gMonShinyPalette_Alcremie19_),
	SPECIES_SHINY_PAL(ALCREMIE_20, gMonShinyPalette_Alcremie20_),
	SPECIES_SHINY_PAL(ALCREMIE_21, gMonShinyPalette_Alcremie21_),
	SPECIES_SHINY_PAL(ALCREMIE_22, gMonShinyPalette_Alcremie22_),
	SPECIES_SHINY_PAL(ALCREMIE_23, gMonShinyPalette_Alcremie23_),
	SPECIES_SHINY_PAL(ALCREMIE_24, gMonShinyPalette_Alcremie24_),
	SPECIES_SHINY_PAL(ALCREMIE_25, gMonShinyPalette_Alcremie25_),
	SPECIES_SHINY_PAL(ALCREMIE_26, gMonShinyPalette_Alcremie26_),
	SPECIES_SHINY_PAL(ALCREMIE_27, gMonShinyPalette_Alcremie27_),
	SPECIES_SHINY_PAL(ALCREMIE_28, gMonShinyPalette_Alcremie28_),
	SPECIES_SHINY_PAL(ALCREMIE_29, gMonShinyPalette_Alcremie29_),
	SPECIES_SHINY_PAL(ALCREMIE_30, gMonShinyPalette_Alcremie30_),
	SPECIES_SHINY_PAL(ALCREMIE_31, gMonShinyPalette_Alcremie31_),
	SPECIES_SHINY_PAL(ALCREMIE_32, gMonShinyPalette_Alcremie32_),
	SPECIES_SHINY_PAL(ALCREMIE_33, gMonShinyPalette_Alcremie33_),
	SPECIES_SHINY_PAL(ALCREMIE_34, gMonShinyPalette_Alcremie34_),
	SPECIES_SHINY_PAL(ALCREMIE_35, gMonShinyPalette_Alcremie35_),
	SPECIES_SHINY_PAL(ALCREMIE_36, gMonShinyPalette_Alcremie36_),
	SPECIES_SHINY_PAL(ALCREMIE_37, gMonShinyPalette_Alcremie37_),
	SPECIES_SHINY_PAL(ALCREMIE_38, gMonShinyPalette_Alcremie38_),
	SPECIES_SHINY_PAL(ALCREMIE_39, gMonShinyPalette_Alcremie39_),
	SPECIES_SHINY_PAL(ALCREMIE_40, gMonShinyPalette_Alcremie40_),
	SPECIES_SHINY_PAL(ALCREMIE_41, gMonShinyPalette_Alcremie41_),
	SPECIES_SHINY_PAL(ALCREMIE_42, gMonShinyPalette_Alcremie42_),
	SPECIES_SHINY_PAL(ALCREMIE_43, gMonShinyPalette_Alcremie43_),
	SPECIES_SHINY_PAL(ALCREMIE_44, gMonShinyPalette_Alcremie44_),
	SPECIES_SHINY_PAL(ALCREMIE_45, gMonShinyPalette_Alcremie45_),
	SPECIES_SHINY_PAL(ALCREMIE_46, gMonShinyPalette_Alcremie46_),
	SPECIES_SHINY_PAL(ALCREMIE_47, gMonShinyPalette_Alcremie47_),
	SPECIES_SHINY_PAL(ALCREMIE_48, gMonShinyPalette_Alcremie48_),
	SPECIES_SHINY_PAL(ALCREMIE_49, gMonShinyPalette_Alcremie49_),
	SPECIES_SHINY_PAL(ALCREMIE_50, gMonShinyPalette_Alcremie50_),
	SPECIES_SHINY_PAL(ALCREMIE_51, gMonShinyPalette_Alcremie51_),
	SPECIES_SHINY_PAL(ALCREMIE_52, gMonShinyPalette_Alcremie52_),
	SPECIES_SHINY_PAL(ALCREMIE_53, gMonShinyPalette_Alcremie53_),
	SPECIES_SHINY_PAL(ALCREMIE_54, gMonShinyPalette_Alcremie54_),
	SPECIES_SHINY_PAL(ALCREMIE_55, gMonShinyPalette_Alcremie55_),
	SPECIES_SHINY_PAL(ALCREMIE_56, gMonShinyPalette_Alcremie56_),
	SPECIES_SHINY_PAL(ALCREMIE_57, gMonShinyPalette_Alcremie57_),
	SPECIES_SHINY_PAL(ALCREMIE_58, gMonShinyPalette_Alcremie58_),
	SPECIES_SHINY_PAL(ALCREMIE_59, gMonShinyPalette_Alcremie59_),
	SPECIES_SHINY_PAL(ALCREMIE_60, gMonShinyPalette_Alcremie60_),
	SPECIES_SHINY_PAL(ALCREMIE_61, gMonShinyPalette_Alcremie61_),
	SPECIES_SHINY_PAL(ALCREMIE_62, gMonShinyPalette_Alcremie62_),
	SPECIES_SHINY_PAL(ALCREMIE_63, gMonShinyPalette_Alcremie63_),
	SPECIES_SHINY_PAL(SPRIGATITO, gMonShinyPalette_Sprigatito_),
	SPECIES_SHINY_PAL(FLORAGATO, gMonShinyPalette_Floragato_),
	SPECIES_SHINY_PAL(MEOWSCARAD, gMonShinyPalette_Meowscarad_),
	SPECIES_SHINY_PAL(FUECOCO, gMonShinyPalette_Fuecoco_),
	SPECIES_SHINY_PAL(CROCALOR, gMonShinyPalette_Crocalor_),
	SPECIES_SHINY_PAL(SKELEDIRGE, gMonShinyPalette_Skeledirge_),
	SPECIES_SHINY_PAL(QUAXLY, gMonShinyPalette_Quaxly_),
	SPECIES_SHINY_PAL(QUAXWELL, gMonShinyPalette_Quaxwell_),
	SPECIES_SHINY_PAL(QUAQUAVAL, gMonShinyPalette_Quaquaval_),
	SPECIES_SHINY_PAL(LECHONK, gMonShinyPalette_Lechonk_),
	SPECIES_SHINY_PAL(OINKOLOGNE, gMonShinyPalette_Oinkologne_),
	SPECIES_SHINY_PAL(OINKOLOGNE_2, gMonShinyPalette_Oinkologne2_),
	SPECIES_SHINY_PAL(TAROUNTULA, gMonShinyPalette_Tarountula_),
	SPECIES_SHINY_PAL(SPIDOPS, gMonShinyPalette_Spidops_),
	SPECIES_SHINY_PAL(NYMBLE, gMonShinyPalette_Nymble_),
	SPECIES_SHINY_PAL(LOKIX, gMonShinyPalette_Lokix_),
	SPECIES_SHINY_PAL(PAWMI, gMonShinyPalette_Pawmi_),
	SPECIES_SHINY_PAL(PAWMO, gMonShinyPalette_Pawmo_),
	SPECIES_SHINY_PAL(PAWMOT, gMonShinyPalette_Pawmot_),
	SPECIES_SHINY_PAL(TANDEMAUS, gMonShinyPalette_Tandemaus_),
	SPECIES_SHINY_PAL(MAUSHOLD, gMonShinyPalette_Maushold_),
	SPECIES_SHINY_PAL(MAUSHOLD_2, gMonShinyPalette_Maushold2_),
	SPECIES_SHINY_PAL(FIDOUGH, gMonShinyPalette_Fidough_),
	SPECIES_SHINY_PAL(DACHSBUN, gMonShinyPalette_Dachsbun_),
	SPECIES_SHINY_PAL(SMOLIV, gMonShinyPalette_Smoliv_),
	SPECIES_SHINY_PAL(DOLLIV, gMonShinyPalette_Dolliv_),
	SPECIES_SHINY_PAL(ARBOLIVA, gMonShinyPalette_Arboliva_),
	SPECIES_SHINY_PAL(SQAWKABILY, gMonShinyPalette_Sqawkabily_),
	SPECIES_SHINY_PAL(SQAWKABILY_2, gMonShinyPalette_Sqawkabily2_),
	SPECIES_SHINY_PAL(SQAWKABILY_3, gMonShinyPalette_Sqawkabily3_),
	SPECIES_SHINY_PAL(SQAWKABILY_4, gMonShinyPalette_Sqawkabily4_),
	SPECIES_SHINY_PAL(NACLI, gMonShinyPalette_Nacli_),
	SPECIES_SHINY_PAL(NACLSTACK, gMonShinyPalette_Naclstack_),
	SPECIES_SHINY_PAL(GARGANACL, gMonShinyPalette_Garganacl_),
	SPECIES_SHINY_PAL(CHARCADET, gMonShinyPalette_Charcadet_),
	SPECIES_SHINY_PAL(ARMAROUGE, gMonShinyPalette_Armarouge_),
	SPECIES_SHINY_PAL(CERULEDGE, gMonShinyPalette_Ceruledge_),
	SPECIES_SHINY_PAL(TADBULB, gMonShinyPalette_Tadbulb_),
	SPECIES_SHINY_PAL(BELLIBOLT, gMonShinyPalette_Bellibolt_),
	SPECIES_SHINY_PAL(WATTREL, gMonShinyPalette_Wattrel_),
	SPECIES_SHINY_PAL(KILOWATREL, gMonShinyPalette_Kilowatrel_),
	SPECIES_SHINY_PAL(MASCHIFF, gMonShinyPalette_Maschiff_),
	SPECIES_SHINY_PAL(MABOSSTIFF, gMonShinyPalette_Mabosstiff_),
	SPECIES_SHINY_PAL(SHROODLE, gMonShinyPalette_Shroodle_),
	SPECIES_SHINY_PAL(GRAFAIAI, gMonShinyPalette_Grafaiai_),
	SPECIES_SHINY_PAL(BRAMBLIN, gMonShinyPalette_Bramblin_),
	SPECIES_SHINY_PAL(BRMBLGHAST, gMonShinyPalette_Brmblghast_),
	SPECIES_SHINY_PAL(TOEDSCOOL, gMonShinyPalette_Toedscool_),
	SPECIES_SHINY_PAL(TOEDSCRUEL, gMonShinyPalette_Toedscruel_),
	SPECIES_SHINY_PAL(KLAWF, gMonShinyPalette_Klawf_),
	SPECIES_SHINY_PAL(CAPSAKID, gMonShinyPalette_Capsakid_),
	SPECIES_SHINY_PAL(SCOVILLAIN, gMonShinyPalette_Scovillain_),
	SPECIES_SHINY_PAL(RELLOR, gMonShinyPalette_Rellor_),
	SPECIES_SHINY_PAL(RABSCA, gMonShinyPalette_Rabsca_),
	SPECIES_SHINY_PAL(FLITTLE, gMonShinyPalette_Flittle_),
	SPECIES_SHINY_PAL(ESPATHRA, gMonShinyPalette_Espathra_),
	SPECIES_SHINY_PAL(TINKATINK, gMonShinyPalette_Tinkatink_),
	SPECIES_SHINY_PAL(TINKATUFF, gMonShinyPalette_Tinkatuff_),
	SPECIES_SHINY_PAL(TINKATON, gMonShinyPalette_Tinkaton_),
	SPECIES_SHINY_PAL(WIGLETT, gMonShinyPalette_Wiglett_),
	SPECIES_SHINY_PAL(WUGTRIO, gMonShinyPalette_Wugtrio_),
	SPECIES_SHINY_PAL(BOMBIRDIER, gMonShinyPalette_Bombirdier_),
	SPECIES_SHINY_PAL(FINIZEN, gMonShinyPalette_Finizen_),
	SPECIES_SHINY_PAL(PALAFIN, gMonShinyPalette_Palafin_),
	SPECIES_SHINY_PAL(PALAFIN_2, gMonShinyPalette_Palafin2_),
	SPECIES_SHINY_PAL(VAROOM, gMonShinyPalette_Varoom_),
	SPECIES_SHINY_PAL(REVAVROOM, gMonShinyPalette_Revavroom_),
	SPECIES_SHINY_PAL(CYCLIZAR, gMonShinyPalette_Cyclizar_),
	SPECIES_SHINY_PAL(ORTHWORM, gMonShinyPalette_Orthworm_),
	SPECIES_SHINY_PAL(GLIMMET, gMonShinyPalette_Glimmet_),
	SPECIES_SHINY_PAL(GLIMMORA, gMonShinyPalette_Glimmora_),
	SPECIES_SHINY_PAL(GREAVARD, gMonShinyPalette_Greavard_),
	SPECIES_SHINY_PAL(HOUNDSTONE, gMonShinyPalette_Houndstone_),
	SPECIES_SHINY_PAL(FLAMIGO, gMonShinyPalette_Flamigo_),
	SPECIES_SHINY_PAL(CETODDLE, gMonShinyPalette_Cetoddle_),
	SPECIES_SHINY_PAL(CETITAN, gMonShinyPalette_Cetitan_),
	SPECIES_SHINY_PAL(VELUZA, gMonShinyPalette_Veluza_),
	SPECIES_SHINY_PAL(DONDOZO, gMonShinyPalette_Dondozo_),
	SPECIES_SHINY_PAL(TATSUGIRI, gMonShinyPalette_Tatsugiri_),
	SPECIES_SHINY_PAL(TATSUGIRI_2, gMonShinyPalette_Tatsugiri2_),
	SPECIES_SHINY_PAL(TATSUGIRI_3, gMonShinyPalette_Tatsugiri3_),
	SPECIES_SHINY_PAL(ANNIHILAPE, gMonShinyPalette_Annihilape_),
	SPECIES_SHINY_PAL(CLODSIRE, gMonShinyPalette_Clodsire_),
	SPECIES_SHINY_PAL(FARIGIRAF, gMonShinyPalette_Farigiraf_),
	SPECIES_SHINY_PAL(DUDUNSPRCE, gMonShinyPalette_Dudunsprce_),
	SPECIES_SHINY_PAL(DUDUNSPRCE_2, gMonShinyPalette_Dudunsprce2_),
	SPECIES_SHINY_PAL(KINGAMBIT, gMonShinyPalette_Kingambit_),
	SPECIES_SHINY_PAL(GREATTUSK, gMonShinyPalette_GreatTusk_),
	SPECIES_SHINY_PAL(SCREAMTAIL, gMonShinyPalette_ScreamTail_),
	SPECIES_SHINY_PAL(BRUTEBONET, gMonShinyPalette_BruteBonet_),
	SPECIES_SHINY_PAL(FLUTTRMANE, gMonShinyPalette_FluttrMane_),
	SPECIES_SHINY_PAL(SLITHRWING, gMonShinyPalette_SlithrWing_),
	SPECIES_SHINY_PAL(SNDYSHOCKS, gMonShinyPalette_SndyShocks_),
	SPECIES_SHINY_PAL(IRONTREADS, gMonShinyPalette_IronTreads_),
	SPECIES_SHINY_PAL(IRONBUNDLE, gMonShinyPalette_IronBundle_),
	SPECIES_SHINY_PAL(IRONHANDS, gMonShinyPalette_IronHands_),
	SPECIES_SHINY_PAL(IRONJUGULS, gMonShinyPalette_IronJuguls_),
	SPECIES_SHINY_PAL(IRONMOTH, gMonShinyPalette_IronMoth_),
	SPECIES_SHINY_PAL(IRONTHORNS, gMonShinyPalette_IronThorns_),
	SPECIES_SHINY_PAL(FRIGIBAX, gMonShinyPalette_Frigibax_),
	SPECIES_SHINY_PAL(ARCTIBAX, gMonShinyPalette_Arctibax_),
	SPECIES_SHINY_PAL(BAXCALIBUR, gMonShinyPalette_Baxcalibur_),
	SPECIES_SHINY_PAL(GIMMIGHOUL, gMonShinyPalette_Gimmighoul_),
	SPECIES_SHINY_PAL(GIMMIGHOUL_2, gMonShinyPalette_Gimmighoul2_),
	SPECIES_SHINY_PAL(GHOLDENGO, gMonShinyPalette_Gholdengo_),
	SPECIES_SHINY_PAL(WOCHIEN, gMonShinyPalette_WoChien_),
	SPECIES_SHINY_PAL(CHIENPAO, gMonShinyPalette_ChienPao_),
	SPECIES_SHINY_PAL(TINGLU, gMonShinyPalette_TingLu_),
	SPECIES_SHINY_PAL(CHIYU, gMonShinyPalette_ChiYu_),
	SPECIES_SHINY_PAL(ROARNGMOON, gMonShinyPalette_RoarngMoon_),
	SPECIES_SHINY_PAL(IRONVLIANT, gMonShinyPalette_IronVliant_),
	SPECIES_SHINY_PAL(KORAIDON, gMonShinyPalette_Koraidon_),
	SPECIES_SHINY_PAL(MIRAIDON, gMonShinyPalette_Miraidon_),
	SPECIES_SHINY_PAL(TAUROS_2, gMonShinyPalette_Tauros2_),
	SPECIES_SHINY_PAL(TAUROS_3, gMonShinyPalette_Tauros3_),
	SPECIES_SHINY_PAL(TAUROS_4, gMonShinyPalette_Tauros4_),
	SPECIES_SHINY_PAL(WOOPER_2, gMonShinyPalette_Wooper2_),
	SPECIES_SHINY_PAL(WALKNGWAKE, gMonShinyPalette_WalkngWake_),
	SPECIES_SHINY_PAL(IRONLEAVES, gMonShinyPalette_IronLeaves_),
	SPECIES_SHINY_PAL(DIPPLIN, gMonShinyPalette_Dipplin_),
	SPECIES_SHINY_PAL(PTCHAGEIST, gMonShinyPalette_Ptchageist_),
	SPECIES_SHINY_PAL(PTCHAGEIST_2, gMonShinyPalette_Ptchageist2_),
	SPECIES_SHINY_PAL(SINISTCHA, gMonShinyPalette_Sinistcha_),
	SPECIES_SHINY_PAL(SINISTCHA_2, gMonShinyPalette_Sinistcha2_),
	SPECIES_SHINY_PAL(OKIDOGI, gMonShinyPalette_Okidogi_),
	SPECIES_SHINY_PAL(MUNKIDORI, gMonShinyPalette_Munkidori_),
	SPECIES_SHINY_PAL(FEZNDIPITI, gMonShinyPalette_Fezndipiti_),
	SPECIES_SHINY_PAL(OGERPON, gMonShinyPalette_Ogerpon_),
	SPECIES_SHINY_PAL(OGERPON_2, gMonShinyPalette_Ogerpon2_),
	SPECIES_SHINY_PAL(OGERPON_3, gMonShinyPalette_Ogerpon3_),
	SPECIES_SHINY_PAL(OGERPON_4, gMonShinyPalette_Ogerpon4_),
	SPECIES_SHINY_PAL(OGERPON_5, gMonShinyPalette_Ogerpon5_),
	SPECIES_SHINY_PAL(OGERPON_6, gMonShinyPalette_Ogerpon6_),
	SPECIES_SHINY_PAL(OGERPON_7, gMonShinyPalette_Ogerpon7_),
	SPECIES_SHINY_PAL(OGERPON_8, gMonShinyPalette_Ogerpon8_),
	SPECIES_SHINY_PAL(URSALUNA_2, gMonShinyPalette_Ursaluna2_),
	SPECIES_SHINY_PAL(ARCHALUDON, gMonShinyPalette_Archaludon_),
	SPECIES_SHINY_PAL(HYDRAPPLE, gMonShinyPalette_Hydrapple_),
	SPECIES_SHINY_PAL(GOUGINFIRE, gMonShinyPalette_GouginFire_),
	SPECIES_SHINY_PAL(RAGINGBOLT, gMonShinyPalette_RagingBolt_),
	SPECIES_SHINY_PAL(IRONBOULDR, gMonShinyPalette_IronBouldr_),
	SPECIES_SHINY_PAL(IRONCROWN, gMonShinyPalette_IronCrown_),
	SPECIES_SHINY_PAL(TERAPAGOS, gMonShinyPalette_Terapagos_),
	SPECIES_SHINY_PAL(TERAPAGOS_2, gMonShinyPalette_Terapagos2_),
	SPECIES_SHINY_PAL(TERAPAGOS_3, gMonShinyPalette_Terapagos3_),
	SPECIES_SHINY_PAL(PECHARUNT, gMonShinyPalette_Pecharunt_),
	SPECIES_SHINY_PAL(MOTHIM_2, gMonShinyPalette_Mothim2_),
	SPECIES_SHINY_PAL(MOTHIM_3, gMonShinyPalette_Mothim3_),
	SPECIES_SHINY_PAL(SCATTERBUG_2, gMonShinyPalette_Scatterbug2_),
	SPECIES_SHINY_PAL(SCATTERBUG_3, gMonShinyPalette_Scatterbug3_),
	SPECIES_SHINY_PAL(SCATTERBUG_4, gMonShinyPalette_Scatterbug4_),
	SPECIES_SHINY_PAL(SCATTERBUG_5, gMonShinyPalette_Scatterbug5_),
	SPECIES_SHINY_PAL(SCATTERBUG_6, gMonShinyPalette_Scatterbug6_),
	SPECIES_SHINY_PAL(SCATTERBUG_7, gMonShinyPalette_Scatterbug7_),
	SPECIES_SHINY_PAL(SCATTERBUG_8, gMonShinyPalette_Scatterbug8_),
	SPECIES_SHINY_PAL(SCATTERBUG_9, gMonShinyPalette_Scatterbug9_),
	SPECIES_SHINY_PAL(SCATTERBUG_10, gMonShinyPalette_Scatterbug10_),
	SPECIES_SHINY_PAL(SCATTERBUG_11, gMonShinyPalette_Scatterbug11_),
	SPECIES_SHINY_PAL(SCATTERBUG_12, gMonShinyPalette_Scatterbug12_),
	SPECIES_SHINY_PAL(SCATTERBUG_13, gMonShinyPalette_Scatterbug13_),
	SPECIES_SHINY_PAL(SCATTERBUG_14, gMonShinyPalette_Scatterbug14_),
	SPECIES_SHINY_PAL(SCATTERBUG_15, gMonShinyPalette_Scatterbug15_),
	SPECIES_SHINY_PAL(SCATTERBUG_16, gMonShinyPalette_Scatterbug16_),
	SPECIES_SHINY_PAL(SCATTERBUG_17, gMonShinyPalette_Scatterbug17_),
	SPECIES_SHINY_PAL(SCATTERBUG_18, gMonShinyPalette_Scatterbug18_),
	SPECIES_SHINY_PAL(SCATTERBUG_19, gMonShinyPalette_Scatterbug19_),
	SPECIES_SHINY_PAL(SCATTERBUG_20, gMonShinyPalette_Scatterbug20_),
	SPECIES_SHINY_PAL(SPEWPA_2, gMonShinyPalette_Spewpa2_),
	SPECIES_SHINY_PAL(SPEWPA_3, gMonShinyPalette_Spewpa3_),
	SPECIES_SHINY_PAL(SPEWPA_4, gMonShinyPalette_Spewpa4_),
	SPECIES_SHINY_PAL(SPEWPA_5, gMonShinyPalette_Spewpa5_),
	SPECIES_SHINY_PAL(SPEWPA_6, gMonShinyPalette_Spewpa6_),
	SPECIES_SHINY_PAL(SPEWPA_7, gMonShinyPalette_Spewpa7_),
	SPECIES_SHINY_PAL(SPEWPA_8, gMonShinyPalette_Spewpa8_),
	SPECIES_SHINY_PAL(SPEWPA_9, gMonShinyPalette_Spewpa9_),
	SPECIES_SHINY_PAL(SPEWPA_10, gMonShinyPalette_Spewpa10_),
	SPECIES_SHINY_PAL(SPEWPA_11, gMonShinyPalette_Spewpa11_),
	SPECIES_SHINY_PAL(SPEWPA_12, gMonShinyPalette_Spewpa12_),
	SPECIES_SHINY_PAL(SPEWPA_13, gMonShinyPalette_Spewpa13_),
	SPECIES_SHINY_PAL(SPEWPA_14, gMonShinyPalette_Spewpa14_),
	SPECIES_SHINY_PAL(SPEWPA_15, gMonShinyPalette_Spewpa15_),
	SPECIES_SHINY_PAL(SPEWPA_16, gMonShinyPalette_Spewpa16_),
	SPECIES_SHINY_PAL(SPEWPA_17, gMonShinyPalette_Spewpa17_),
	SPECIES_SHINY_PAL(SPEWPA_18, gMonShinyPalette_Spewpa18_),
	SPECIES_SHINY_PAL(SPEWPA_19, gMonShinyPalette_Spewpa19_),
	SPECIES_SHINY_PAL(SPEWPA_20, gMonShinyPalette_Spewpa20_),
	SPECIES_SHINY_PAL(RATICATE_3, gMonShinyPalette_Raticate3_),
	SPECIES_SHINY_PAL(GUMSHOOS_2, gMonShinyPalette_Gumshoos2_),
	SPECIES_SHINY_PAL(VIKAVOLT_2, gMonShinyPalette_Vikavolt2_),
	SPECIES_SHINY_PAL(LURANTIS_2, gMonShinyPalette_Lurantis2_),
	SPECIES_SHINY_PAL(SALAZZLE_2, gMonShinyPalette_Salazzle2_),
	SPECIES_SHINY_PAL(MIMIKYU_3, gMonShinyPalette_Mimikyu3_),
	SPECIES_SHINY_PAL(KOMMOO_2, gMonShinyPalette_Kommoo2_),
	SPECIES_SHINY_PAL(MAROWAK_3, gMonShinyPalette_Marowak3_),
	SPECIES_SHINY_PAL(RIBOMBEE_2, gMonShinyPalette_Ribombee2_),
	SPECIES_SHINY_PAL(ARAQUANID_2, gMonShinyPalette_Araquanid2_),
	SPECIES_SHINY_PAL(TOGEDEMARU_2, gMonShinyPalette_Togedemaru2_),
	SPECIES_SHINY_PAL(PIKACHU_16, gMonShinyPalette_Pikachu16_),
	SPECIES_SHINY_PAL(EEVEE_2, gMonShinyPalette_Eevee2_),
	SPECIES_SHINY_PAL(VENUSAUR_3, gMonShinyPalette_Venusaur3_),
	SPECIES_SHINY_PAL(BLASTOISE_3, gMonShinyPalette_Blastoise3_),
	SPECIES_SHINY_PAL(CHARIZARD_4, gMonShinyPalette_Charizard4_),
	SPECIES_SHINY_PAL(BUTTERFREE_2, gMonShinyPalette_Butterfree2_),
	SPECIES_SHINY_PAL(PIKACHU_17, gMonShinyPalette_Pikachu17_),
	SPECIES_SHINY_PAL(MEOWTH_4, gMonShinyPalette_Meowth4_),
	SPECIES_SHINY_PAL(MACHAMP_2, gMonShinyPalette_Machamp2_),
	SPECIES_SHINY_PAL(GENGAR_3, gMonShinyPalette_Gengar3_),
	SPECIES_SHINY_PAL(KINGLER_2, gMonShinyPalette_Kingler2_),
	SPECIES_SHINY_PAL(LAPRAS_2, gMonShinyPalette_Lapras2_),
	SPECIES_SHINY_PAL(EEVEE_3, gMonShinyPalette_Eevee3_),
	SPECIES_SHINY_PAL(SNORLAX_2, gMonShinyPalette_Snorlax2_),
	SPECIES_SHINY_PAL(GARBODOR_2, gMonShinyPalette_Garbodor2_),
	SPECIES_SHINY_PAL(MELMETAL_2, gMonShinyPalette_Melmetal2_),
	SPECIES_SHINY_PAL(RILLABOOM_2, gMonShinyPalette_Rillaboom2_),
	SPECIES_SHINY_PAL(CINDERACE_2, gMonShinyPalette_Cinderace2_),
	SPECIES_SHINY_PAL(INTELEON_2, gMonShinyPalette_Inteleon2_),
	SPECIES_SHINY_PAL(CORVIKNIGH_2, gMonShinyPalette_Corviknigh2_),
	SPECIES_SHINY_PAL(ORBEETLE_2, gMonShinyPalette_Orbeetle2_),
	SPECIES_SHINY_PAL(DREDNAW_2, gMonShinyPalette_Drednaw2_),
	SPECIES_SHINY_PAL(COALOSSAL_2, gMonShinyPalette_Coalossal2_),
	SPECIES_SHINY_PAL(FLAPPLE_2, gMonShinyPalette_Flapple2_),
	SPECIES_SHINY_PAL(APPLETUN_2, gMonShinyPalette_Appletun2_),
	SPECIES_SHINY_PAL(SANDACONDA_2, gMonShinyPalette_Sandaconda2_),
	SPECIES_SHINY_PAL(TOXTRICITY_3, gMonShinyPalette_Toxtricity3_),
	SPECIES_SHINY_PAL(TOXTRICITY_4, gMonShinyPalette_Toxtricity4_),
	SPECIES_SHINY_PAL(CENTISKORC_2, gMonShinyPalette_Centiskorc2_),
	SPECIES_SHINY_PAL(HATTERENE_2, gMonShinyPalette_Hatterene2_),
	SPECIES_SHINY_PAL(GRIMMSNARL_2, gMonShinyPalette_Grimmsnarl2_),
	SPECIES_SHINY_PAL(ALCREMIE_64, gMonShinyPalette_Alcremie64_),
	SPECIES_SHINY_PAL(COPPERAJAH_2, gMonShinyPalette_Copperajah2_),
	SPECIES_SHINY_PAL(DURALUDON_2, gMonShinyPalette_Duraludon2_),
	SPECIES_SHINY_PAL(URSHIFU_3, gMonShinyPalette_Urshifu3_),
	SPECIES_SHINY_PAL(URSHIFU_4, gMonShinyPalette_Urshifu4_),
	SPECIES_SHINY_PAL(MIMIKYU_4, gMonShinyPalette_Mimikyu4_),
};