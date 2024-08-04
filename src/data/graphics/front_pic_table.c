#include "../../../include/global.h"
#include "../../../include/gflib.h"
#include "../../../include/mail_data.h"
#include "../../../include/pokemon_icon.h"
#include "../../../include/graphics.h"
#include "../../../include/constants/species.h"
#include "../../../include/gba/types.h"

#define SPECIES_SPRITE(species, sprite) [SPECIES_##species] = {sprite, 0x800, SPECIES_##species}

extern const u32 gMonFrontPic_CircledQuestionMark[];
extern const u32 gMonFrontPic_Bulbasaur_[];
extern const u32 gMonFrontPic_Ivysaur_[];
extern const u32 gMonFrontPic_Venusaur_[];
extern const u32 gMonFrontPic_Charmander_[];
extern const u32 gMonFrontPic_Charmeleon_[];
extern const u32 gMonFrontPic_Charizard_[];
extern const u32 gMonFrontPic_Squirtle_[];
extern const u32 gMonFrontPic_Wartortle_[];
extern const u32 gMonFrontPic_Blastoise_[];
extern const u32 gMonFrontPic_Caterpie_[];
extern const u32 gMonFrontPic_Metapod_[];
extern const u32 gMonFrontPic_Butterfree_[];
extern const u32 gMonFrontPic_Weedle_[];
extern const u32 gMonFrontPic_Kakuna_[];
extern const u32 gMonFrontPic_Beedrill_[];
extern const u32 gMonFrontPic_Pidgey_[];
extern const u32 gMonFrontPic_Pidgeotto_[];
extern const u32 gMonFrontPic_Pidgeot_[];
extern const u32 gMonFrontPic_Rattata_[];
extern const u32 gMonFrontPic_Raticate_[];
extern const u32 gMonFrontPic_Spearow_[];
extern const u32 gMonFrontPic_Fearow_[];
extern const u32 gMonFrontPic_Ekans_[];
extern const u32 gMonFrontPic_Arbok_[];
extern const u32 gMonFrontPic_Pikachu_[];
extern const u32 gMonFrontPic_Raichu_[];
extern const u32 gMonFrontPic_Sandshrew_[];
extern const u32 gMonFrontPic_Sandslash_[];
extern const u32 gMonFrontPic_Nidoransf_[];
extern const u32 gMonFrontPic_Nidorina_[];
extern const u32 gMonFrontPic_Nidoqueen_[];
extern const u32 gMonFrontPic_Nidoransm_[];
extern const u32 gMonFrontPic_Nidorino_[];
extern const u32 gMonFrontPic_Nidoking_[];
extern const u32 gMonFrontPic_Clefairy_[];
extern const u32 gMonFrontPic_Clefable_[];
extern const u32 gMonFrontPic_Vulpix_[];
extern const u32 gMonFrontPic_Ninetales_[];
extern const u32 gMonFrontPic_Jigglypuff_[];
extern const u32 gMonFrontPic_Wigglytuff_[];
extern const u32 gMonFrontPic_Zubat_[];
extern const u32 gMonFrontPic_Golbat_[];
extern const u32 gMonFrontPic_Oddish_[];
extern const u32 gMonFrontPic_Gloom_[];
extern const u32 gMonFrontPic_Vileplume_[];
extern const u32 gMonFrontPic_Paras_[];
extern const u32 gMonFrontPic_Parasect_[];
extern const u32 gMonFrontPic_Venonat_[];
extern const u32 gMonFrontPic_Venomoth_[];
extern const u32 gMonFrontPic_Diglett_[];
extern const u32 gMonFrontPic_Dugtrio_[];
extern const u32 gMonFrontPic_Meowth_[];
extern const u32 gMonFrontPic_Persian_[];
extern const u32 gMonFrontPic_Psyduck_[];
extern const u32 gMonFrontPic_Golduck_[];
extern const u32 gMonFrontPic_Mankey_[];
extern const u32 gMonFrontPic_Primeape_[];
extern const u32 gMonFrontPic_Growlithe_[];
extern const u32 gMonFrontPic_Arcanine_[];
extern const u32 gMonFrontPic_Poliwag_[];
extern const u32 gMonFrontPic_Poliwhirl_[];
extern const u32 gMonFrontPic_Poliwrath_[];
extern const u32 gMonFrontPic_Abra_[];
extern const u32 gMonFrontPic_Kadabra_[];
extern const u32 gMonFrontPic_Alakazam_[];
extern const u32 gMonFrontPic_Machop_[];
extern const u32 gMonFrontPic_Machoke_[];
extern const u32 gMonFrontPic_Machamp_[];
extern const u32 gMonFrontPic_Bellsprout_[];
extern const u32 gMonFrontPic_Weepinbell_[];
extern const u32 gMonFrontPic_Victreebel_[];
extern const u32 gMonFrontPic_Tentacool_[];
extern const u32 gMonFrontPic_Tentacruel_[];
extern const u32 gMonFrontPic_Geodude_[];
extern const u32 gMonFrontPic_Graveler_[];
extern const u32 gMonFrontPic_Golem_[];
extern const u32 gMonFrontPic_Ponyta_[];
extern const u32 gMonFrontPic_Rapidash_[];
extern const u32 gMonFrontPic_Slowpoke_[];
extern const u32 gMonFrontPic_Slowbro_[];
extern const u32 gMonFrontPic_Magnemite_[];
extern const u32 gMonFrontPic_Magneton_[];
extern const u32 gMonFrontPic_Farfetchd_[];
extern const u32 gMonFrontPic_Doduo_[];
extern const u32 gMonFrontPic_Dodrio_[];
extern const u32 gMonFrontPic_Seel_[];
extern const u32 gMonFrontPic_Dewgong_[];
extern const u32 gMonFrontPic_Grimer_[];
extern const u32 gMonFrontPic_Muk_[];
extern const u32 gMonFrontPic_Shellder_[];
extern const u32 gMonFrontPic_Cloyster_[];
extern const u32 gMonFrontPic_Gastly_[];
extern const u32 gMonFrontPic_Haunter_[];
extern const u32 gMonFrontPic_Gengar_[];
extern const u32 gMonFrontPic_Onix_[];
extern const u32 gMonFrontPic_Drowzee_[];
extern const u32 gMonFrontPic_Hypno_[];
extern const u32 gMonFrontPic_Krabby_[];
extern const u32 gMonFrontPic_Kingler_[];
extern const u32 gMonFrontPic_Voltorb_[];
extern const u32 gMonFrontPic_Electrode_[];
extern const u32 gMonFrontPic_Exeggcute_[];
extern const u32 gMonFrontPic_Exeggutor_[];
extern const u32 gMonFrontPic_Cubone_[];
extern const u32 gMonFrontPic_Marowak_[];
extern const u32 gMonFrontPic_Hitmonlee_[];
extern const u32 gMonFrontPic_Hitmonchan_[];
extern const u32 gMonFrontPic_Lickitung_[];
extern const u32 gMonFrontPic_Koffing_[];
extern const u32 gMonFrontPic_Weezing_[];
extern const u32 gMonFrontPic_Rhyhorn_[];
extern const u32 gMonFrontPic_Rhydon_[];
extern const u32 gMonFrontPic_Chansey_[];
extern const u32 gMonFrontPic_Tangela_[];
extern const u32 gMonFrontPic_Kangaskhan_[];
extern const u32 gMonFrontPic_Horsea_[];
extern const u32 gMonFrontPic_Seadra_[];
extern const u32 gMonFrontPic_Goldeen_[];
extern const u32 gMonFrontPic_Seaking_[];
extern const u32 gMonFrontPic_Staryu_[];
extern const u32 gMonFrontPic_Starmie_[];
extern const u32 gMonFrontPic_MrMime_[];
extern const u32 gMonFrontPic_Scyther_[];
extern const u32 gMonFrontPic_Jynx_[];
extern const u32 gMonFrontPic_Electabuzz_[];
extern const u32 gMonFrontPic_Magmar_[];
extern const u32 gMonFrontPic_Pinsir_[];
extern const u32 gMonFrontPic_Tauros_[];
extern const u32 gMonFrontPic_Magikarp_[];
extern const u32 gMonFrontPic_Gyarados_[];
extern const u32 gMonFrontPic_Lapras_[];
extern const u32 gMonFrontPic_Ditto_[];
extern const u32 gMonFrontPic_Eevee_[];
extern const u32 gMonFrontPic_Vaporeon_[];
extern const u32 gMonFrontPic_Jolteon_[];
extern const u32 gMonFrontPic_Flareon_[];
extern const u32 gMonFrontPic_Porygon_[];
extern const u32 gMonFrontPic_Omanyte_[];
extern const u32 gMonFrontPic_Omastar_[];
extern const u32 gMonFrontPic_Kabuto_[];
extern const u32 gMonFrontPic_Kabutops_[];
extern const u32 gMonFrontPic_Aerodactyl_[];
extern const u32 gMonFrontPic_Snorlax_[];
extern const u32 gMonFrontPic_Articuno_[];
extern const u32 gMonFrontPic_Zapdos_[];
extern const u32 gMonFrontPic_Moltres_[];
extern const u32 gMonFrontPic_Dratini_[];
extern const u32 gMonFrontPic_Dragonair_[];
extern const u32 gMonFrontPic_Dragonite_[];
extern const u32 gMonFrontPic_Mewtwo_[];
extern const u32 gMonFrontPic_Mew_[];
extern const u32 gMonFrontPic_Chikorita_[];
extern const u32 gMonFrontPic_Bayleef_[];
extern const u32 gMonFrontPic_Meganium_[];
extern const u32 gMonFrontPic_Cyndaquil_[];
extern const u32 gMonFrontPic_Quilava_[];
extern const u32 gMonFrontPic_Typhlosion_[];
extern const u32 gMonFrontPic_Totodile_[];
extern const u32 gMonFrontPic_Croconaw_[];
extern const u32 gMonFrontPic_Feraligatr_[];
extern const u32 gMonFrontPic_Sentret_[];
extern const u32 gMonFrontPic_Furret_[];
extern const u32 gMonFrontPic_Hoothoot_[];
extern const u32 gMonFrontPic_Noctowl_[];
extern const u32 gMonFrontPic_Ledyba_[];
extern const u32 gMonFrontPic_Ledian_[];
extern const u32 gMonFrontPic_Spinarak_[];
extern const u32 gMonFrontPic_Ariados_[];
extern const u32 gMonFrontPic_Crobat_[];
extern const u32 gMonFrontPic_Chinchou_[];
extern const u32 gMonFrontPic_Lanturn_[];
extern const u32 gMonFrontPic_Pichu_[];
extern const u32 gMonFrontPic_Cleffa_[];
extern const u32 gMonFrontPic_Igglybuff_[];
extern const u32 gMonFrontPic_Togepi_[];
extern const u32 gMonFrontPic_Togetic_[];
extern const u32 gMonFrontPic_Natu_[];
extern const u32 gMonFrontPic_Xatu_[];
extern const u32 gMonFrontPic_Mareep_[];
extern const u32 gMonFrontPic_Flaaffy_[];
extern const u32 gMonFrontPic_Ampharos_[];
extern const u32 gMonFrontPic_Bellossom_[];
extern const u32 gMonFrontPic_Marill_[];
extern const u32 gMonFrontPic_Azumarill_[];
extern const u32 gMonFrontPic_Sudowoodo_[];
extern const u32 gMonFrontPic_Politoed_[];
extern const u32 gMonFrontPic_Hoppip_[];
extern const u32 gMonFrontPic_Skiploom_[];
extern const u32 gMonFrontPic_Jumpluff_[];
extern const u32 gMonFrontPic_Aipom_[];
extern const u32 gMonFrontPic_Sunkern_[];
extern const u32 gMonFrontPic_Sunflora_[];
extern const u32 gMonFrontPic_Yanma_[];
extern const u32 gMonFrontPic_Wooper_[];
extern const u32 gMonFrontPic_Quagsire_[];
extern const u32 gMonFrontPic_Espeon_[];
extern const u32 gMonFrontPic_Umbreon_[];
extern const u32 gMonFrontPic_Murkrow_[];
extern const u32 gMonFrontPic_Slowking_[];
extern const u32 gMonFrontPic_Misdreavus_[];
extern const u32 gMonFrontPic_Unown_[];
extern const u32 gMonFrontPic_Wobbuffet_[];
extern const u32 gMonFrontPic_Girafarig_[];
extern const u32 gMonFrontPic_Pineco_[];
extern const u32 gMonFrontPic_Forretress_[];
extern const u32 gMonFrontPic_Dunsparce_[];
extern const u32 gMonFrontPic_Gligar_[];
extern const u32 gMonFrontPic_Steelix_[];
extern const u32 gMonFrontPic_Snubbull_[];
extern const u32 gMonFrontPic_Granbull_[];
extern const u32 gMonFrontPic_Qwilfish_[];
extern const u32 gMonFrontPic_Scizor_[];
extern const u32 gMonFrontPic_Shuckle_[];
extern const u32 gMonFrontPic_Heracross_[];
extern const u32 gMonFrontPic_Sneasel_[];
extern const u32 gMonFrontPic_Teddiursa_[];
extern const u32 gMonFrontPic_Ursaring_[];
extern const u32 gMonFrontPic_Slugma_[];
extern const u32 gMonFrontPic_Magcargo_[];
extern const u32 gMonFrontPic_Swinub_[];
extern const u32 gMonFrontPic_Piloswine_[];
extern const u32 gMonFrontPic_Corsola_[];
extern const u32 gMonFrontPic_Remoraid_[];
extern const u32 gMonFrontPic_Octillery_[];
extern const u32 gMonFrontPic_Delibird_[];
extern const u32 gMonFrontPic_Mantine_[];
extern const u32 gMonFrontPic_Skarmory_[];
extern const u32 gMonFrontPic_Houndour_[];
extern const u32 gMonFrontPic_Houndoom_[];
extern const u32 gMonFrontPic_Kingdra_[];
extern const u32 gMonFrontPic_Phanpy_[];
extern const u32 gMonFrontPic_Donphan_[];
extern const u32 gMonFrontPic_Porygon2_[];
extern const u32 gMonFrontPic_Stantler_[];
extern const u32 gMonFrontPic_Smeargle_[];
extern const u32 gMonFrontPic_Tyrogue_[];
extern const u32 gMonFrontPic_Hitmontop_[];
extern const u32 gMonFrontPic_Smoochum_[];
extern const u32 gMonFrontPic_Elekid_[];
extern const u32 gMonFrontPic_Magby_[];
extern const u32 gMonFrontPic_Miltank_[];
extern const u32 gMonFrontPic_Blissey_[];
extern const u32 gMonFrontPic_Raikou_[];
extern const u32 gMonFrontPic_Entei_[];
extern const u32 gMonFrontPic_Suicune_[];
extern const u32 gMonFrontPic_Larvitar_[];
extern const u32 gMonFrontPic_Pupitar_[];
extern const u32 gMonFrontPic_Tyranitar_[];
extern const u32 gMonFrontPic_Lugia_[];
extern const u32 gMonFrontPic_HoOh_[];
extern const u32 gMonFrontPic_Celebi_[];
extern const u32 gMonFrontPic_Treecko_[];
extern const u32 gMonFrontPic_Grovyle_[];
extern const u32 gMonFrontPic_Sceptile_[];
extern const u32 gMonFrontPic_Torchic_[];
extern const u32 gMonFrontPic_Combusken_[];
extern const u32 gMonFrontPic_Blaziken_[];
extern const u32 gMonFrontPic_Mudkip_[];
extern const u32 gMonFrontPic_Marshtomp_[];
extern const u32 gMonFrontPic_Swampert_[];
extern const u32 gMonFrontPic_Poochyena_[];
extern const u32 gMonFrontPic_Mightyena_[];
extern const u32 gMonFrontPic_Zigzagoon_[];
extern const u32 gMonFrontPic_Linoone_[];
extern const u32 gMonFrontPic_Wurmple_[];
extern const u32 gMonFrontPic_Silcoon_[];
extern const u32 gMonFrontPic_Beautifly_[];
extern const u32 gMonFrontPic_Cascoon_[];
extern const u32 gMonFrontPic_Dustox_[];
extern const u32 gMonFrontPic_Lotad_[];
extern const u32 gMonFrontPic_Lombre_[];
extern const u32 gMonFrontPic_Ludicolo_[];
extern const u32 gMonFrontPic_Seedot_[];
extern const u32 gMonFrontPic_Nuzleaf_[];
extern const u32 gMonFrontPic_Shiftry_[];
extern const u32 gMonFrontPic_Taillow_[];
extern const u32 gMonFrontPic_Swellow_[];
extern const u32 gMonFrontPic_Wingull_[];
extern const u32 gMonFrontPic_Pelipper_[];
extern const u32 gMonFrontPic_Ralts_[];
extern const u32 gMonFrontPic_Kirlia_[];
extern const u32 gMonFrontPic_Gardevoir_[];
extern const u32 gMonFrontPic_Surskit_[];
extern const u32 gMonFrontPic_Masquerain_[];
extern const u32 gMonFrontPic_Shroomish_[];
extern const u32 gMonFrontPic_Breloom_[];
extern const u32 gMonFrontPic_Slakoth_[];
extern const u32 gMonFrontPic_Vigoroth_[];
extern const u32 gMonFrontPic_Slaking_[];
extern const u32 gMonFrontPic_Nincada_[];
extern const u32 gMonFrontPic_Ninjask_[];
extern const u32 gMonFrontPic_Shedinja_[];
extern const u32 gMonFrontPic_Whismur_[];
extern const u32 gMonFrontPic_Loudred_[];
extern const u32 gMonFrontPic_Exploud_[];
extern const u32 gMonFrontPic_Makuhita_[];
extern const u32 gMonFrontPic_Hariyama_[];
extern const u32 gMonFrontPic_Azurill_[];
extern const u32 gMonFrontPic_Nosepass_[];
extern const u32 gMonFrontPic_Skitty_[];
extern const u32 gMonFrontPic_Delcatty_[];
extern const u32 gMonFrontPic_Sableye_[];
extern const u32 gMonFrontPic_Mawile_[];
extern const u32 gMonFrontPic_Aron_[];
extern const u32 gMonFrontPic_Lairon_[];
extern const u32 gMonFrontPic_Aggron_[];
extern const u32 gMonFrontPic_Meditite_[];
extern const u32 gMonFrontPic_Medicham_[];
extern const u32 gMonFrontPic_Electrike_[];
extern const u32 gMonFrontPic_Manectric_[];
extern const u32 gMonFrontPic_Plusle_[];
extern const u32 gMonFrontPic_Minun_[];
extern const u32 gMonFrontPic_Volbeat_[];
extern const u32 gMonFrontPic_Illumise_[];
extern const u32 gMonFrontPic_Roselia_[];
extern const u32 gMonFrontPic_Gulpin_[];
extern const u32 gMonFrontPic_Swalot_[];
extern const u32 gMonFrontPic_Carvanha_[];
extern const u32 gMonFrontPic_Sharpedo_[];
extern const u32 gMonFrontPic_Wailmer_[];
extern const u32 gMonFrontPic_Wailord_[];
extern const u32 gMonFrontPic_Numel_[];
extern const u32 gMonFrontPic_Camerupt_[];
extern const u32 gMonFrontPic_Torkoal_[];
extern const u32 gMonFrontPic_Spoink_[];
extern const u32 gMonFrontPic_Grumpig_[];
extern const u32 gMonFrontPic_Spinda_[];
extern const u32 gMonFrontPic_Trapinch_[];
extern const u32 gMonFrontPic_Vibrava_[];
extern const u32 gMonFrontPic_Flygon_[];
extern const u32 gMonFrontPic_Cacnea_[];
extern const u32 gMonFrontPic_Cacturne_[];
extern const u32 gMonFrontPic_Swablu_[];
extern const u32 gMonFrontPic_Altaria_[];
extern const u32 gMonFrontPic_Zangoose_[];
extern const u32 gMonFrontPic_Seviper_[];
extern const u32 gMonFrontPic_Lunatone_[];
extern const u32 gMonFrontPic_Solrock_[];
extern const u32 gMonFrontPic_Barboach_[];
extern const u32 gMonFrontPic_Whiscash_[];
extern const u32 gMonFrontPic_Corphish_[];
extern const u32 gMonFrontPic_Crawdaunt_[];
extern const u32 gMonFrontPic_Baltoy_[];
extern const u32 gMonFrontPic_Claydol_[];
extern const u32 gMonFrontPic_Lileep_[];
extern const u32 gMonFrontPic_Cradily_[];
extern const u32 gMonFrontPic_Anorith_[];
extern const u32 gMonFrontPic_Armaldo_[];
extern const u32 gMonFrontPic_Feebas_[];
extern const u32 gMonFrontPic_Milotic_[];
extern const u32 gMonFrontPic_Castform_[];
extern const u32 gMonFrontPic_Kecleon_[];
extern const u32 gMonFrontPic_Shuppet_[];
extern const u32 gMonFrontPic_Banette_[];
extern const u32 gMonFrontPic_Duskull_[];
extern const u32 gMonFrontPic_Dusclops_[];
extern const u32 gMonFrontPic_Tropius_[];
extern const u32 gMonFrontPic_Chimecho_[];
extern const u32 gMonFrontPic_Absol_[];
extern const u32 gMonFrontPic_Wynaut_[];
extern const u32 gMonFrontPic_Snorunt_[];
extern const u32 gMonFrontPic_Glalie_[];
extern const u32 gMonFrontPic_Spheal_[];
extern const u32 gMonFrontPic_Sealeo_[];
extern const u32 gMonFrontPic_Walrein_[];
extern const u32 gMonFrontPic_Clamperl_[];
extern const u32 gMonFrontPic_Huntail_[];
extern const u32 gMonFrontPic_Gorebyss_[];
extern const u32 gMonFrontPic_Relicanth_[];
extern const u32 gMonFrontPic_Luvdisc_[];
extern const u32 gMonFrontPic_Bagon_[];
extern const u32 gMonFrontPic_Shelgon_[];
extern const u32 gMonFrontPic_Salamence_[];
extern const u32 gMonFrontPic_Beldum_[];
extern const u32 gMonFrontPic_Metang_[];
extern const u32 gMonFrontPic_Metagross_[];
extern const u32 gMonFrontPic_Regirock_[];
extern const u32 gMonFrontPic_Regice_[];
extern const u32 gMonFrontPic_Registeel_[];
extern const u32 gMonFrontPic_Latias_[];
extern const u32 gMonFrontPic_Latios_[];
extern const u32 gMonFrontPic_Kyogre_[];
extern const u32 gMonFrontPic_Groudon_[];
extern const u32 gMonFrontPic_Rayquaza_[];
extern const u32 gMonFrontPic_Jirachi_[];
extern const u32 gMonFrontPic_Deoxys_[];
extern const u32 gMonFrontPic_Turtwig_[];
extern const u32 gMonFrontPic_Grotle_[];
extern const u32 gMonFrontPic_Torterra_[];
extern const u32 gMonFrontPic_Chimchar_[];
extern const u32 gMonFrontPic_Monferno_[];
extern const u32 gMonFrontPic_Infernape_[];
extern const u32 gMonFrontPic_Piplup_[];
extern const u32 gMonFrontPic_Prinplup_[];
extern const u32 gMonFrontPic_Empoleon_[];
extern const u32 gMonFrontPic_Starly_[];
extern const u32 gMonFrontPic_Staravia_[];
extern const u32 gMonFrontPic_Staraptor_[];
extern const u32 gMonFrontPic_Bidoof_[];
extern const u32 gMonFrontPic_Bibarel_[];
extern const u32 gMonFrontPic_Kricketot_[];
extern const u32 gMonFrontPic_Kricketune_[];
extern const u32 gMonFrontPic_Shinx_[];
extern const u32 gMonFrontPic_Luxio_[];
extern const u32 gMonFrontPic_Luxray_[];
extern const u32 gMonFrontPic_Budew_[];
extern const u32 gMonFrontPic_Roserade_[];
extern const u32 gMonFrontPic_Cranidos_[];
extern const u32 gMonFrontPic_Rampardos_[];
extern const u32 gMonFrontPic_Shieldon_[];
extern const u32 gMonFrontPic_Bastiodon_[];
extern const u32 gMonFrontPic_Burmy_[];
extern const u32 gMonFrontPic_Wormadam_[];
extern const u32 gMonFrontPic_Mothim_[];
extern const u32 gMonFrontPic_Combee_[];
extern const u32 gMonFrontPic_Vespiquen_[];
extern const u32 gMonFrontPic_Pachirisu_[];
extern const u32 gMonFrontPic_Buizel_[];
extern const u32 gMonFrontPic_Floatzel_[];
extern const u32 gMonFrontPic_Cherubi_[];
extern const u32 gMonFrontPic_Cherrim_[];
extern const u32 gMonFrontPic_Shellos_[];
extern const u32 gMonFrontPic_Gastrodon_[];
extern const u32 gMonFrontPic_Ambipom_[];
extern const u32 gMonFrontPic_Drifloon_[];
extern const u32 gMonFrontPic_Drifblim_[];
extern const u32 gMonFrontPic_Buneary_[];
extern const u32 gMonFrontPic_Lopunny_[];
extern const u32 gMonFrontPic_Mismagius_[];
extern const u32 gMonFrontPic_Honchkrow_[];
extern const u32 gMonFrontPic_Glameow_[];
extern const u32 gMonFrontPic_Purugly_[];
extern const u32 gMonFrontPic_Chingling_[];
extern const u32 gMonFrontPic_Stunky_[];
extern const u32 gMonFrontPic_Skuntank_[];
extern const u32 gMonFrontPic_Bronzor_[];
extern const u32 gMonFrontPic_Bronzong_[];
extern const u32 gMonFrontPic_Bonsly_[];
extern const u32 gMonFrontPic_MimeJr_[];
extern const u32 gMonFrontPic_Happiny_[];
extern const u32 gMonFrontPic_Chatot_[];
extern const u32 gMonFrontPic_Spiritomb_[];
extern const u32 gMonFrontPic_Gible_[];
extern const u32 gMonFrontPic_Gabite_[];
extern const u32 gMonFrontPic_Garchomp_[];
extern const u32 gMonFrontPic_Munchlax_[];
extern const u32 gMonFrontPic_Riolu_[];
extern const u32 gMonFrontPic_Lucario_[];
extern const u32 gMonFrontPic_Hippopotas_[];
extern const u32 gMonFrontPic_Hippowdon_[];
extern const u32 gMonFrontPic_Skorupi_[];
extern const u32 gMonFrontPic_Drapion_[];
extern const u32 gMonFrontPic_Croagunk_[];
extern const u32 gMonFrontPic_Toxicroak_[];
extern const u32 gMonFrontPic_Carnivine_[];
extern const u32 gMonFrontPic_Finneon_[];
extern const u32 gMonFrontPic_Lumineon_[];
extern const u32 gMonFrontPic_Mantyke_[];
extern const u32 gMonFrontPic_Snover_[];
extern const u32 gMonFrontPic_Abomasnow_[];
extern const u32 gMonFrontPic_Weavile_[];
extern const u32 gMonFrontPic_Magnezone_[];
extern const u32 gMonFrontPic_Lickilicky_[];
extern const u32 gMonFrontPic_Rhyperior_[];
extern const u32 gMonFrontPic_Tangrowth_[];
extern const u32 gMonFrontPic_Electivire_[];
extern const u32 gMonFrontPic_Magmortar_[];
extern const u32 gMonFrontPic_Togekiss_[];
extern const u32 gMonFrontPic_Yanmega_[];
extern const u32 gMonFrontPic_Leafeon_[];
extern const u32 gMonFrontPic_Glaceon_[];
extern const u32 gMonFrontPic_Gliscor_[];
extern const u32 gMonFrontPic_Mamoswine_[];
extern const u32 gMonFrontPic_PorygonZ_[];
extern const u32 gMonFrontPic_Gallade_[];
extern const u32 gMonFrontPic_Probopass_[];
extern const u32 gMonFrontPic_Dusknoir_[];
extern const u32 gMonFrontPic_Froslass_[];
extern const u32 gMonFrontPic_Rotom_[];
extern const u32 gMonFrontPic_Uxie_[];
extern const u32 gMonFrontPic_Mesprit_[];
extern const u32 gMonFrontPic_Azelf_[];
extern const u32 gMonFrontPic_Dialga_[];
extern const u32 gMonFrontPic_Palkia_[];
extern const u32 gMonFrontPic_Heatran_[];
extern const u32 gMonFrontPic_Regigigas_[];
extern const u32 gMonFrontPic_Giratina_[];
extern const u32 gMonFrontPic_Cresselia_[];
extern const u32 gMonFrontPic_Phione_[];
extern const u32 gMonFrontPic_Manaphy_[];
extern const u32 gMonFrontPic_Darkrai_[];
extern const u32 gMonFrontPic_Shaymin_[];
extern const u32 gMonFrontPic_Arceus_[];
extern const u32 gMonFrontPic_Victini_[];
extern const u32 gMonFrontPic_Snivy_[];
extern const u32 gMonFrontPic_Servine_[];
extern const u32 gMonFrontPic_Serperior_[];
extern const u32 gMonFrontPic_Tepig_[];
extern const u32 gMonFrontPic_Pignite_[];
extern const u32 gMonFrontPic_Emboar_[];
extern const u32 gMonFrontPic_Oshawott_[];
extern const u32 gMonFrontPic_Dewott_[];
extern const u32 gMonFrontPic_Samurott_[];
extern const u32 gMonFrontPic_Patrat_[];
extern const u32 gMonFrontPic_Watchog_[];
extern const u32 gMonFrontPic_Lillipup_[];
extern const u32 gMonFrontPic_Herdier_[];
extern const u32 gMonFrontPic_Stoutland_[];
extern const u32 gMonFrontPic_Purrloin_[];
extern const u32 gMonFrontPic_Liepard_[];
extern const u32 gMonFrontPic_Pansage_[];
extern const u32 gMonFrontPic_Simisage_[];
extern const u32 gMonFrontPic_Pansear_[];
extern const u32 gMonFrontPic_Simisear_[];
extern const u32 gMonFrontPic_Panpour_[];
extern const u32 gMonFrontPic_Simipour_[];
extern const u32 gMonFrontPic_Munna_[];
extern const u32 gMonFrontPic_Musharna_[];
extern const u32 gMonFrontPic_Pidove_[];
extern const u32 gMonFrontPic_Tranquill_[];
extern const u32 gMonFrontPic_Unfezant_[];
extern const u32 gMonFrontPic_Blitzle_[];
extern const u32 gMonFrontPic_Zebstrika_[];
extern const u32 gMonFrontPic_Roggenrola_[];
extern const u32 gMonFrontPic_Boldore_[];
extern const u32 gMonFrontPic_Gigalith_[];
extern const u32 gMonFrontPic_Woobat_[];
extern const u32 gMonFrontPic_Swoobat_[];
extern const u32 gMonFrontPic_Drilbur_[];
extern const u32 gMonFrontPic_Excadrill_[];
extern const u32 gMonFrontPic_Audino_[];
extern const u32 gMonFrontPic_Timburr_[];
extern const u32 gMonFrontPic_Gurdurr_[];
extern const u32 gMonFrontPic_Conkeldurr_[];
extern const u32 gMonFrontPic_Tympole_[];
extern const u32 gMonFrontPic_Palpitoad_[];
extern const u32 gMonFrontPic_Seismitoad_[];
extern const u32 gMonFrontPic_Throh_[];
extern const u32 gMonFrontPic_Sawk_[];
extern const u32 gMonFrontPic_Sewaddle_[];
extern const u32 gMonFrontPic_Swadloon_[];
extern const u32 gMonFrontPic_Leavanny_[];
extern const u32 gMonFrontPic_Venipede_[];
extern const u32 gMonFrontPic_Whirlipede_[];
extern const u32 gMonFrontPic_Scolipede_[];
extern const u32 gMonFrontPic_Cottonee_[];
extern const u32 gMonFrontPic_Whimsicott_[];
extern const u32 gMonFrontPic_Petilil_[];
extern const u32 gMonFrontPic_Lilligant_[];
extern const u32 gMonFrontPic_Basculin_[];
extern const u32 gMonFrontPic_Sandile_[];
extern const u32 gMonFrontPic_Krokorok_[];
extern const u32 gMonFrontPic_Krookodile_[];
extern const u32 gMonFrontPic_Darumaka_[];
extern const u32 gMonFrontPic_Darmanitan_[];
extern const u32 gMonFrontPic_Maractus_[];
extern const u32 gMonFrontPic_Dwebble_[];
extern const u32 gMonFrontPic_Crustle_[];
extern const u32 gMonFrontPic_Scraggy_[];
extern const u32 gMonFrontPic_Scrafty_[];
extern const u32 gMonFrontPic_Sigilyph_[];
extern const u32 gMonFrontPic_Yamask_[];
extern const u32 gMonFrontPic_Cofagrigus_[];
extern const u32 gMonFrontPic_Tirtouga_[];
extern const u32 gMonFrontPic_Carracosta_[];
extern const u32 gMonFrontPic_Archen_[];
extern const u32 gMonFrontPic_Archeops_[];
extern const u32 gMonFrontPic_Trubbish_[];
extern const u32 gMonFrontPic_Garbodor_[];
extern const u32 gMonFrontPic_Zorua_[];
extern const u32 gMonFrontPic_Zoroark_[];
extern const u32 gMonFrontPic_Minccino_[];
extern const u32 gMonFrontPic_Cinccino_[];
extern const u32 gMonFrontPic_Gothita_[];
extern const u32 gMonFrontPic_Gothorita_[];
extern const u32 gMonFrontPic_Gothitelle_[];
extern const u32 gMonFrontPic_Solosis_[];
extern const u32 gMonFrontPic_Duosion_[];
extern const u32 gMonFrontPic_Reuniclus_[];
extern const u32 gMonFrontPic_Ducklett_[];
extern const u32 gMonFrontPic_Swanna_[];
extern const u32 gMonFrontPic_Vanillite_[];
extern const u32 gMonFrontPic_Vanillish_[];
extern const u32 gMonFrontPic_Vanilluxe_[];
extern const u32 gMonFrontPic_Deerling_[];
extern const u32 gMonFrontPic_Sawsbuck_[];
extern const u32 gMonFrontPic_Emolga_[];
extern const u32 gMonFrontPic_Karrablast_[];
extern const u32 gMonFrontPic_Escavalier_[];
extern const u32 gMonFrontPic_Foongus_[];
extern const u32 gMonFrontPic_Amoonguss_[];
extern const u32 gMonFrontPic_Frillish_[];
extern const u32 gMonFrontPic_Jellicent_[];
extern const u32 gMonFrontPic_Alomomola_[];
extern const u32 gMonFrontPic_Joltik_[];
extern const u32 gMonFrontPic_Galvantula_[];
extern const u32 gMonFrontPic_Ferroseed_[];
extern const u32 gMonFrontPic_Ferrothorn_[];
extern const u32 gMonFrontPic_Klink_[];
extern const u32 gMonFrontPic_Klang_[];
extern const u32 gMonFrontPic_Klinklang_[];
extern const u32 gMonFrontPic_Tynamo_[];
extern const u32 gMonFrontPic_Eelektrik_[];
extern const u32 gMonFrontPic_Eelektross_[];
extern const u32 gMonFrontPic_Elgyem_[];
extern const u32 gMonFrontPic_Beheeyem_[];
extern const u32 gMonFrontPic_Litwick_[];
extern const u32 gMonFrontPic_Lampent_[];
extern const u32 gMonFrontPic_Chandelure_[];
extern const u32 gMonFrontPic_Axew_[];
extern const u32 gMonFrontPic_Fraxure_[];
extern const u32 gMonFrontPic_Haxorus_[];
extern const u32 gMonFrontPic_Cubchoo_[];
extern const u32 gMonFrontPic_Beartic_[];
extern const u32 gMonFrontPic_Cryogonal_[];
extern const u32 gMonFrontPic_Shelmet_[];
extern const u32 gMonFrontPic_Accelgor_[];
extern const u32 gMonFrontPic_Stunfisk_[];
extern const u32 gMonFrontPic_Mienfoo_[];
extern const u32 gMonFrontPic_Mienshao_[];
extern const u32 gMonFrontPic_Druddigon_[];
extern const u32 gMonFrontPic_Golett_[];
extern const u32 gMonFrontPic_Golurk_[];
extern const u32 gMonFrontPic_Pawniard_[];
extern const u32 gMonFrontPic_Bisharp_[];
extern const u32 gMonFrontPic_Bouffalant_[];
extern const u32 gMonFrontPic_Rufflet_[];
extern const u32 gMonFrontPic_Braviary_[];
extern const u32 gMonFrontPic_Vullaby_[];
extern const u32 gMonFrontPic_Mandibuzz_[];
extern const u32 gMonFrontPic_Heatmor_[];
extern const u32 gMonFrontPic_Durant_[];
extern const u32 gMonFrontPic_Deino_[];
extern const u32 gMonFrontPic_Zweilous_[];
extern const u32 gMonFrontPic_Hydreigon_[];
extern const u32 gMonFrontPic_Larvesta_[];
extern const u32 gMonFrontPic_Volcarona_[];
extern const u32 gMonFrontPic_Cobalion_[];
extern const u32 gMonFrontPic_Terrakion_[];
extern const u32 gMonFrontPic_Virizion_[];
extern const u32 gMonFrontPic_Tornadus_[];
extern const u32 gMonFrontPic_Thundurus_[];
extern const u32 gMonFrontPic_Reshiram_[];
extern const u32 gMonFrontPic_Zekrom_[];
extern const u32 gMonFrontPic_Landorus_[];
extern const u32 gMonFrontPic_Kyurem_[];
extern const u32 gMonFrontPic_Keldeo_[];
extern const u32 gMonFrontPic_Meloetta_[];
extern const u32 gMonFrontPic_Genesect_[];
extern const u32 gMonFrontPic_Chespin_[];
extern const u32 gMonFrontPic_Quilladin_[];
extern const u32 gMonFrontPic_Chesnaught_[];
extern const u32 gMonFrontPic_Fennekin_[];
extern const u32 gMonFrontPic_Braixen_[];
extern const u32 gMonFrontPic_Delphox_[];
extern const u32 gMonFrontPic_Froakie_[];
extern const u32 gMonFrontPic_Frogadier_[];
extern const u32 gMonFrontPic_Greninja_[];
extern const u32 gMonFrontPic_Bunnelby_[];
extern const u32 gMonFrontPic_Diggersby_[];
extern const u32 gMonFrontPic_Fletchling_[];
extern const u32 gMonFrontPic_Flechinder_[];
extern const u32 gMonFrontPic_Talonflame_[];
extern const u32 gMonFrontPic_Scatterbug_[];
extern const u32 gMonFrontPic_Spewpa_[];
extern const u32 gMonFrontPic_Vivillon_[];
extern const u32 gMonFrontPic_Litleo_[];
extern const u32 gMonFrontPic_Pyroar_[];
extern const u32 gMonFrontPic_Flabebe_[];
extern const u32 gMonFrontPic_Floette_[];
extern const u32 gMonFrontPic_Florges_[];
extern const u32 gMonFrontPic_Skiddo_[];
extern const u32 gMonFrontPic_Gogoat_[];
extern const u32 gMonFrontPic_Pancham_[];
extern const u32 gMonFrontPic_Pangoro_[];
extern const u32 gMonFrontPic_Furfrou_[];
extern const u32 gMonFrontPic_Espurr_[];
extern const u32 gMonFrontPic_Meowstic_[];
extern const u32 gMonFrontPic_Honedge_[];
extern const u32 gMonFrontPic_Doublade_[];
extern const u32 gMonFrontPic_Aegislash_[];
extern const u32 gMonFrontPic_Spritzee_[];
extern const u32 gMonFrontPic_Aromatisse_[];
extern const u32 gMonFrontPic_Swirlix_[];
extern const u32 gMonFrontPic_Slurpuff_[];
extern const u32 gMonFrontPic_Inkay_[];
extern const u32 gMonFrontPic_Malamar_[];
extern const u32 gMonFrontPic_Binacle_[];
extern const u32 gMonFrontPic_Barbaracle_[];
extern const u32 gMonFrontPic_Skrelp_[];
extern const u32 gMonFrontPic_Dragalge_[];
extern const u32 gMonFrontPic_Clauncher_[];
extern const u32 gMonFrontPic_Clawitzer_[];
extern const u32 gMonFrontPic_Helioptile_[];
extern const u32 gMonFrontPic_Heliolisk_[];
extern const u32 gMonFrontPic_Tyrunt_[];
extern const u32 gMonFrontPic_Tyrantrum_[];
extern const u32 gMonFrontPic_Amaura_[];
extern const u32 gMonFrontPic_Aurorus_[];
extern const u32 gMonFrontPic_Sylveon_[];
extern const u32 gMonFrontPic_Hawlucha_[];
extern const u32 gMonFrontPic_Dedenne_[];
extern const u32 gMonFrontPic_Carbink_[];
extern const u32 gMonFrontPic_Goomy_[];
extern const u32 gMonFrontPic_Sliggoo_[];
extern const u32 gMonFrontPic_Goodra_[];
extern const u32 gMonFrontPic_Klefki_[];
extern const u32 gMonFrontPic_Phantump_[];
extern const u32 gMonFrontPic_Trevenant_[];
extern const u32 gMonFrontPic_Pumpkaboo_[];
extern const u32 gMonFrontPic_Gourgeist_[];
extern const u32 gMonFrontPic_Bergmite_[];
extern const u32 gMonFrontPic_Avalugg_[];
extern const u32 gMonFrontPic_Noibat_[];
extern const u32 gMonFrontPic_Noivern_[];
extern const u32 gMonFrontPic_Xerneas_[];
extern const u32 gMonFrontPic_Yveltal_[];
extern const u32 gMonFrontPic_Zygarde_[];
extern const u32 gMonFrontPic_Diancie_[];
extern const u32 gMonFrontPic_Hoopa_[];
extern const u32 gMonFrontPic_Volcanion_[];
extern const u32 gMonFrontPic_Rowlet_[];
extern const u32 gMonFrontPic_Dartrix_[];
extern const u32 gMonFrontPic_Decidueye_[];
extern const u32 gMonFrontPic_Litten_[];
extern const u32 gMonFrontPic_Torracat_[];
extern const u32 gMonFrontPic_Incineroar_[];
extern const u32 gMonFrontPic_Popplio_[];
extern const u32 gMonFrontPic_Brionne_[];
extern const u32 gMonFrontPic_Primarina_[];
extern const u32 gMonFrontPic_Pikipek_[];
extern const u32 gMonFrontPic_Trumbeak_[];
extern const u32 gMonFrontPic_Toucannon_[];
extern const u32 gMonFrontPic_Yungoos_[];
extern const u32 gMonFrontPic_Gumshoos_[];
extern const u32 gMonFrontPic_Grubbin_[];
extern const u32 gMonFrontPic_Charjabug_[];
extern const u32 gMonFrontPic_Vikavolt_[];
extern const u32 gMonFrontPic_Crabrawler_[];
extern const u32 gMonFrontPic_Crabminabl_[];
extern const u32 gMonFrontPic_Oricorio_[];
extern const u32 gMonFrontPic_Cutiefly_[];
extern const u32 gMonFrontPic_Ribombee_[];
extern const u32 gMonFrontPic_Rockruff_[];
extern const u32 gMonFrontPic_Lycanroc_[];
extern const u32 gMonFrontPic_Wishiwashi_[];
extern const u32 gMonFrontPic_Mareanie_[];
extern const u32 gMonFrontPic_Toxapex_[];
extern const u32 gMonFrontPic_Mudbray_[];
extern const u32 gMonFrontPic_Mudsdale_[];
extern const u32 gMonFrontPic_Dewpider_[];
extern const u32 gMonFrontPic_Araquanid_[];
extern const u32 gMonFrontPic_Fomantis_[];
extern const u32 gMonFrontPic_Lurantis_[];
extern const u32 gMonFrontPic_Morelull_[];
extern const u32 gMonFrontPic_Shiinotic_[];
extern const u32 gMonFrontPic_Salandit_[];
extern const u32 gMonFrontPic_Salazzle_[];
extern const u32 gMonFrontPic_Stufful_[];
extern const u32 gMonFrontPic_Bewear_[];
extern const u32 gMonFrontPic_Bounsweet_[];
extern const u32 gMonFrontPic_Steenee_[];
extern const u32 gMonFrontPic_Tsareena_[];
extern const u32 gMonFrontPic_Comfey_[];
extern const u32 gMonFrontPic_Oranguru_[];
extern const u32 gMonFrontPic_Passimian_[];
extern const u32 gMonFrontPic_Wimpod_[];
extern const u32 gMonFrontPic_Golisopod_[];
extern const u32 gMonFrontPic_Sandygast_[];
extern const u32 gMonFrontPic_Palossand_[];
extern const u32 gMonFrontPic_Pyukumuku_[];
extern const u32 gMonFrontPic_TypeNull_[];
extern const u32 gMonFrontPic_Silvally_[];
extern const u32 gMonFrontPic_Minior_[];
extern const u32 gMonFrontPic_Komala_[];
extern const u32 gMonFrontPic_Turtonator_[];
extern const u32 gMonFrontPic_Togedemaru_[];
extern const u32 gMonFrontPic_Mimikyu_[];
extern const u32 gMonFrontPic_Bruxish_[];
extern const u32 gMonFrontPic_Drampa_[];
extern const u32 gMonFrontPic_Dhelmise_[];
extern const u32 gMonFrontPic_Jangmoo_[];
extern const u32 gMonFrontPic_Hakamoo_[];
extern const u32 gMonFrontPic_Kommoo_[];
extern const u32 gMonFrontPic_TapuKoko_[];
extern const u32 gMonFrontPic_TapuLele_[];
extern const u32 gMonFrontPic_TapuBulu_[];
extern const u32 gMonFrontPic_TapuFini_[];
extern const u32 gMonFrontPic_Cosmog_[];
extern const u32 gMonFrontPic_Cosmoem_[];
extern const u32 gMonFrontPic_Solgaleo_[];
extern const u32 gMonFrontPic_Lunala_[];
extern const u32 gMonFrontPic_Nihilego_[];
extern const u32 gMonFrontPic_Buzzwole_[];
extern const u32 gMonFrontPic_Pheromosa_[];
extern const u32 gMonFrontPic_Xurkitree_[];
extern const u32 gMonFrontPic_Celesteela_[];
extern const u32 gMonFrontPic_Kartana_[];
extern const u32 gMonFrontPic_Guzzlord_[];
extern const u32 gMonFrontPic_Necrozma_[];
extern const u32 gMonFrontPic_Magearna_[];
extern const u32 gMonFrontPic_Marshadow_[];
extern const u32 gMonFrontPic_Poipole_[];
extern const u32 gMonFrontPic_Naganadel_[];
extern const u32 gMonFrontPic_Stakataka_[];
extern const u32 gMonFrontPic_Blacephaln_[];
extern const u32 gMonFrontPic_Zeraora_[];
extern const u32 gMonFrontPic_Meltan_[];
extern const u32 gMonFrontPic_Melmetal_[];
extern const u32 gMonFrontPic_Grookey_[];
extern const u32 gMonFrontPic_Thwackey_[];
extern const u32 gMonFrontPic_Rillaboom_[];
extern const u32 gMonFrontPic_Scorbunny_[];
extern const u32 gMonFrontPic_Raboot_[];
extern const u32 gMonFrontPic_Cinderace_[];
extern const u32 gMonFrontPic_Sobble_[];
extern const u32 gMonFrontPic_Drizzile_[];
extern const u32 gMonFrontPic_Inteleon_[];
extern const u32 gMonFrontPic_Skwovet_[];
extern const u32 gMonFrontPic_Greedent_[];
extern const u32 gMonFrontPic_Rookidee_[];
extern const u32 gMonFrontPic_Corvisquir_[];
extern const u32 gMonFrontPic_Corviknigh_[];
extern const u32 gMonFrontPic_Blipbug_[];
extern const u32 gMonFrontPic_Dottler_[];
extern const u32 gMonFrontPic_Orbeetle_[];
extern const u32 gMonFrontPic_Nickit_[];
extern const u32 gMonFrontPic_Thievul_[];
extern const u32 gMonFrontPic_Gossifleur_[];
extern const u32 gMonFrontPic_Eldegoss_[];
extern const u32 gMonFrontPic_Wooloo_[];
extern const u32 gMonFrontPic_Dubwool_[];
extern const u32 gMonFrontPic_Chewtle_[];
extern const u32 gMonFrontPic_Drednaw_[];
extern const u32 gMonFrontPic_Yamper_[];
extern const u32 gMonFrontPic_Boltund_[];
extern const u32 gMonFrontPic_Rolycoly_[];
extern const u32 gMonFrontPic_Carkol_[];
extern const u32 gMonFrontPic_Coalossal_[];
extern const u32 gMonFrontPic_Applin_[];
extern const u32 gMonFrontPic_Flapple_[];
extern const u32 gMonFrontPic_Appletun_[];
extern const u32 gMonFrontPic_Silicobra_[];
extern const u32 gMonFrontPic_Sandaconda_[];
extern const u32 gMonFrontPic_Cramorant_[];
extern const u32 gMonFrontPic_Arrokuda_[];
extern const u32 gMonFrontPic_Barraskewd_[];
extern const u32 gMonFrontPic_Toxel_[];
extern const u32 gMonFrontPic_Toxtricity_[];
extern const u32 gMonFrontPic_Sizzlipede_[];
extern const u32 gMonFrontPic_Centiskorc_[];
extern const u32 gMonFrontPic_Clobbopus_[];
extern const u32 gMonFrontPic_Grapploct_[];
extern const u32 gMonFrontPic_Sinistea_[];
extern const u32 gMonFrontPic_Polteageis_[];
extern const u32 gMonFrontPic_Hatenna_[];
extern const u32 gMonFrontPic_Hattrem_[];
extern const u32 gMonFrontPic_Hatterene_[];
extern const u32 gMonFrontPic_Impidimp_[];
extern const u32 gMonFrontPic_Morgrem_[];
extern const u32 gMonFrontPic_Grimmsnarl_[];
extern const u32 gMonFrontPic_Obstagoon_[];
extern const u32 gMonFrontPic_Perrserker_[];
extern const u32 gMonFrontPic_Cursola_[];
extern const u32 gMonFrontPic_Sirfetchd_[];
extern const u32 gMonFrontPic_MrRime_[];
extern const u32 gMonFrontPic_Runerigus_[];
extern const u32 gMonFrontPic_Milcery_[];
extern const u32 gMonFrontPic_Alcremie_[];
extern const u32 gMonFrontPic_Falinks_[];
extern const u32 gMonFrontPic_Pincurchin_[];
extern const u32 gMonFrontPic_Snom_[];
extern const u32 gMonFrontPic_Frosmoth_[];
extern const u32 gMonFrontPic_Stonjourne_[];
extern const u32 gMonFrontPic_Eiscue_[];
extern const u32 gMonFrontPic_Indeedee_[];
extern const u32 gMonFrontPic_Morpeko_[];
extern const u32 gMonFrontPic_Cufant_[];
extern const u32 gMonFrontPic_Copperajah_[];
extern const u32 gMonFrontPic_Dracozolt_[];
extern const u32 gMonFrontPic_Arctozolt_[];
extern const u32 gMonFrontPic_Dracovish_[];
extern const u32 gMonFrontPic_Arctovish_[];
extern const u32 gMonFrontPic_Duraludon_[];
extern const u32 gMonFrontPic_Dreepy_[];
extern const u32 gMonFrontPic_Drakloak_[];
extern const u32 gMonFrontPic_Dragapult_[];
extern const u32 gMonFrontPic_Zacian_[];
extern const u32 gMonFrontPic_Zamazenta_[];
extern const u32 gMonFrontPic_Eternatus_[];
extern const u32 gMonFrontPic_Kubfu_[];
extern const u32 gMonFrontPic_Urshifu_[];
extern const u32 gMonFrontPic_Zarude_[];
extern const u32 gMonFrontPic_Regieleki_[];
extern const u32 gMonFrontPic_Regidrago_[];
extern const u32 gMonFrontPic_Glastrier_[];
extern const u32 gMonFrontPic_Spectrier_[];
extern const u32 gMonFrontPic_Calyrex_[];
extern const u32 gMonFrontPic_Wyrdeer_[];
extern const u32 gMonFrontPic_Kleavor_[];
extern const u32 gMonFrontPic_Ursaluna_[];
extern const u32 gMonFrontPic_Bsculegion_[];
extern const u32 gMonFrontPic_Sneasler_[];
extern const u32 gMonFrontPic_Overqwil_[];
extern const u32 gMonFrontPic_Enamorus_[];
extern const u32 gMonFrontPic_Venusaur2_[];
extern const u32 gMonFrontPic_Charizard2_[];
extern const u32 gMonFrontPic_Charizard3_[];
extern const u32 gMonFrontPic_Blastoise2_[];
extern const u32 gMonFrontPic_Beedrill2_[];
extern const u32 gMonFrontPic_Pidgeot2_[];
extern const u32 gMonFrontPic_Alakazam2_[];
extern const u32 gMonFrontPic_Slowbro2_[];
extern const u32 gMonFrontPic_Gengar2_[];
extern const u32 gMonFrontPic_Kangaskhan2_[];
extern const u32 gMonFrontPic_Pinsir2_[];
extern const u32 gMonFrontPic_Gyarados2_[];
extern const u32 gMonFrontPic_Aerodactyl2_[];
extern const u32 gMonFrontPic_Mewtwo2_[];
extern const u32 gMonFrontPic_Mewtwo3_[];
extern const u32 gMonFrontPic_Ampharos2_[];
extern const u32 gMonFrontPic_Steelix2_[];
extern const u32 gMonFrontPic_Scizor2_[];
extern const u32 gMonFrontPic_Heracross2_[];
extern const u32 gMonFrontPic_Houndoom2_[];
extern const u32 gMonFrontPic_Tyranitar2_[];
extern const u32 gMonFrontPic_Sceptile2_[];
extern const u32 gMonFrontPic_Blaziken2_[];
extern const u32 gMonFrontPic_Swampert2_[];
extern const u32 gMonFrontPic_Gardevoir2_[];
extern const u32 gMonFrontPic_Sableye2_[];
extern const u32 gMonFrontPic_Mawile2_[];
extern const u32 gMonFrontPic_Aggron2_[];
extern const u32 gMonFrontPic_Medicham2_[];
extern const u32 gMonFrontPic_Manectric2_[];
extern const u32 gMonFrontPic_Sharpedo2_[];
extern const u32 gMonFrontPic_Camerupt2_[];
extern const u32 gMonFrontPic_Altaria2_[];
extern const u32 gMonFrontPic_Banette2_[];
extern const u32 gMonFrontPic_Absol2_[];
extern const u32 gMonFrontPic_Glalie2_[];
extern const u32 gMonFrontPic_Salamence2_[];
extern const u32 gMonFrontPic_Metagross2_[];
extern const u32 gMonFrontPic_Latias2_[];
extern const u32 gMonFrontPic_Latios2_[];
extern const u32 gMonFrontPic_Lopunny2_[];
extern const u32 gMonFrontPic_Garchomp2_[];
extern const u32 gMonFrontPic_Lucario2_[];
extern const u32 gMonFrontPic_Abomasnow2_[];
extern const u32 gMonFrontPic_Gallade2_[];
extern const u32 gMonFrontPic_Audino2_[];
extern const u32 gMonFrontPic_Diancie2_[];
extern const u32 gMonFrontPic_Rayquaza2_[];
extern const u32 gMonFrontPic_Kyogre2_[];
extern const u32 gMonFrontPic_Groudon2_[];
extern const u32 gMonFrontPic_Rattata2_[];
extern const u32 gMonFrontPic_Raticate2_[];
extern const u32 gMonFrontPic_Raichu2_[];
extern const u32 gMonFrontPic_Sandshrew2_[];
extern const u32 gMonFrontPic_Sandslash2_[];
extern const u32 gMonFrontPic_Vulpix2_[];
extern const u32 gMonFrontPic_Ninetales2_[];
extern const u32 gMonFrontPic_Diglett2_[];
extern const u32 gMonFrontPic_Dugtrio2_[];
extern const u32 gMonFrontPic_Meowth2_[];
extern const u32 gMonFrontPic_Persian2_[];
extern const u32 gMonFrontPic_Geodude2_[];
extern const u32 gMonFrontPic_Graveler2_[];
extern const u32 gMonFrontPic_Golem2_[];
extern const u32 gMonFrontPic_Grimer2_[];
extern const u32 gMonFrontPic_Muk2_[];
extern const u32 gMonFrontPic_Exeggutor2_[];
extern const u32 gMonFrontPic_Marowak2_[];
extern const u32 gMonFrontPic_Meowth3_[];
extern const u32 gMonFrontPic_Ponyta2_[];
extern const u32 gMonFrontPic_Rapidash2_[];
extern const u32 gMonFrontPic_Slowpoke2_[];
extern const u32 gMonFrontPic_Slowbro3_[];
extern const u32 gMonFrontPic_Farfetchd2_[];
extern const u32 gMonFrontPic_Weezing2_[];
extern const u32 gMonFrontPic_MrMime2_[];
extern const u32 gMonFrontPic_Articuno2_[];
extern const u32 gMonFrontPic_Zapdos2_[];
extern const u32 gMonFrontPic_Moltres2_[];
extern const u32 gMonFrontPic_Slowking2_[];
extern const u32 gMonFrontPic_Corsola2_[];
extern const u32 gMonFrontPic_Zigzagoon2_[];
extern const u32 gMonFrontPic_Linoone2_[];
extern const u32 gMonFrontPic_Darumaka2_[];
extern const u32 gMonFrontPic_Darmanitan2_[];
extern const u32 gMonFrontPic_Yamask2_[];
extern const u32 gMonFrontPic_Stunfisk2_[];
extern const u32 gMonFrontPic_Growlithe2_[];
extern const u32 gMonFrontPic_Arcanine2_[];
extern const u32 gMonFrontPic_Voltorb2_[];
extern const u32 gMonFrontPic_Electrode2_[];
extern const u32 gMonFrontPic_Typhlosion2_[];
extern const u32 gMonFrontPic_Qwilfish2_[];
extern const u32 gMonFrontPic_Sneasel2_[];
extern const u32 gMonFrontPic_Samurott2_[];
extern const u32 gMonFrontPic_Lilligant2_[];
extern const u32 gMonFrontPic_Zorua2_[];
extern const u32 gMonFrontPic_Zoroark2_[];
extern const u32 gMonFrontPic_Braviary2_[];
extern const u32 gMonFrontPic_Sliggoo2_[];
extern const u32 gMonFrontPic_Goodra2_[];
extern const u32 gMonFrontPic_Avalugg2_[];
extern const u32 gMonFrontPic_Decidueye2_[];
extern const u32 gMonFrontPic_Pikachu2_[];
extern const u32 gMonFrontPic_Pikachu3_[];
extern const u32 gMonFrontPic_Pikachu4_[];
extern const u32 gMonFrontPic_Pikachu5_[];
extern const u32 gMonFrontPic_Pikachu6_[];
extern const u32 gMonFrontPic_Pikachu7_[];
extern const u32 gMonFrontPic_Pikachu8_[];
extern const u32 gMonFrontPic_Pikachu9_[];
extern const u32 gMonFrontPic_Pikachu10_[];
extern const u32 gMonFrontPic_Pikachu11_[];
extern const u32 gMonFrontPic_Pikachu12_[];
extern const u32 gMonFrontPic_Pikachu13_[];
extern const u32 gMonFrontPic_Pikachu14_[];
extern const u32 gMonFrontPic_Pikachu15_[];
extern const u32 gMonFrontPic_Pichu2_[];
extern const u32 gMonFrontPic_Castform2_[];
extern const u32 gMonFrontPic_Castform3_[];
extern const u32 gMonFrontPic_Castform4_[];
extern const u32 gMonFrontPic_Deoxys2_[];
extern const u32 gMonFrontPic_Deoxys3_[];
extern const u32 gMonFrontPic_Deoxys4_[];
extern const u32 gMonFrontPic_Burmy2_[];
extern const u32 gMonFrontPic_Burmy3_[];
extern const u32 gMonFrontPic_Wormadam2_[];
extern const u32 gMonFrontPic_Wormadam3_[];
extern const u32 gMonFrontPic_Cherrim2_[];
extern const u32 gMonFrontPic_Shellos2_[];
extern const u32 gMonFrontPic_Gastrodon2_[];
extern const u32 gMonFrontPic_Rotom2_[];
extern const u32 gMonFrontPic_Rotom3_[];
extern const u32 gMonFrontPic_Rotom4_[];
extern const u32 gMonFrontPic_Rotom5_[];
extern const u32 gMonFrontPic_Rotom6_[];
extern const u32 gMonFrontPic_Dialga2_[];
extern const u32 gMonFrontPic_Palkia2_[];
extern const u32 gMonFrontPic_Giratina2_[];
extern const u32 gMonFrontPic_Shaymin2_[];
extern const u32 gMonFrontPic_Arceus2_[];
extern const u32 gMonFrontPic_Arceus3_[];
extern const u32 gMonFrontPic_Arceus4_[];
extern const u32 gMonFrontPic_Arceus5_[];
extern const u32 gMonFrontPic_Arceus6_[];
extern const u32 gMonFrontPic_Arceus7_[];
extern const u32 gMonFrontPic_Arceus8_[];
extern const u32 gMonFrontPic_Arceus9_[];
extern const u32 gMonFrontPic_Arceus10_[];
extern const u32 gMonFrontPic_Arceus11_[];
extern const u32 gMonFrontPic_Arceus12_[];
extern const u32 gMonFrontPic_Arceus13_[];
extern const u32 gMonFrontPic_Arceus14_[];
extern const u32 gMonFrontPic_Arceus15_[];
extern const u32 gMonFrontPic_Arceus16_[];
extern const u32 gMonFrontPic_Arceus17_[];
extern const u32 gMonFrontPic_Arceus18_[];
extern const u32 gMonFrontPic_Basculin2_[];
extern const u32 gMonFrontPic_Basculin3_[];
extern const u32 gMonFrontPic_Darmanitan3_[];
extern const u32 gMonFrontPic_Darmanitan4_[];
extern const u32 gMonFrontPic_Deerling2_[];
extern const u32 gMonFrontPic_Deerling3_[];
extern const u32 gMonFrontPic_Deerling4_[];
extern const u32 gMonFrontPic_Sawsbuck2_[];
extern const u32 gMonFrontPic_Sawsbuck3_[];
extern const u32 gMonFrontPic_Sawsbuck4_[];
extern const u32 gMonFrontPic_Tornadus2_[];
extern const u32 gMonFrontPic_Thundurus2_[];
extern const u32 gMonFrontPic_Landorus2_[];
extern const u32 gMonFrontPic_Enamorus2_[];
extern const u32 gMonFrontPic_Kyurem2_[];
extern const u32 gMonFrontPic_Kyurem3_[];
extern const u32 gMonFrontPic_Keldeo2_[];
extern const u32 gMonFrontPic_Meloetta2_[];
extern const u32 gMonFrontPic_Genesect2_[];
extern const u32 gMonFrontPic_Genesect3_[];
extern const u32 gMonFrontPic_Genesect4_[];
extern const u32 gMonFrontPic_Genesect5_[];
extern const u32 gMonFrontPic_Greninja2_[];
extern const u32 gMonFrontPic_Greninja3_[];
extern const u32 gMonFrontPic_Vivillon2_[];
extern const u32 gMonFrontPic_Vivillon3_[];
extern const u32 gMonFrontPic_Vivillon4_[];
extern const u32 gMonFrontPic_Vivillon5_[];
extern const u32 gMonFrontPic_Vivillon6_[];
extern const u32 gMonFrontPic_Vivillon7_[];
extern const u32 gMonFrontPic_Vivillon8_[];
extern const u32 gMonFrontPic_Vivillon9_[];
extern const u32 gMonFrontPic_Vivillon10_[];
extern const u32 gMonFrontPic_Vivillon11_[];
extern const u32 gMonFrontPic_Vivillon12_[];
extern const u32 gMonFrontPic_Vivillon13_[];
extern const u32 gMonFrontPic_Vivillon14_[];
extern const u32 gMonFrontPic_Vivillon15_[];
extern const u32 gMonFrontPic_Vivillon16_[];
extern const u32 gMonFrontPic_Vivillon17_[];
extern const u32 gMonFrontPic_Vivillon18_[];
extern const u32 gMonFrontPic_Vivillon19_[];
extern const u32 gMonFrontPic_Vivillon20_[];
extern const u32 gMonFrontPic_Flabebe2_[];
extern const u32 gMonFrontPic_Flabebe3_[];
extern const u32 gMonFrontPic_Flabebe4_[];
extern const u32 gMonFrontPic_Flabebe5_[];
extern const u32 gMonFrontPic_Floette2_[];
extern const u32 gMonFrontPic_Floette3_[];
extern const u32 gMonFrontPic_Floette4_[];
extern const u32 gMonFrontPic_Floette5_[];
extern const u32 gMonFrontPic_Floette6_[];
extern const u32 gMonFrontPic_Florges2_[];
extern const u32 gMonFrontPic_Florges3_[];
extern const u32 gMonFrontPic_Florges4_[];
extern const u32 gMonFrontPic_Florges5_[];
extern const u32 gMonFrontPic_Furfrou2_[];
extern const u32 gMonFrontPic_Furfrou3_[];
extern const u32 gMonFrontPic_Furfrou4_[];
extern const u32 gMonFrontPic_Furfrou5_[];
extern const u32 gMonFrontPic_Furfrou6_[];
extern const u32 gMonFrontPic_Furfrou7_[];
extern const u32 gMonFrontPic_Furfrou8_[];
extern const u32 gMonFrontPic_Furfrou9_[];
extern const u32 gMonFrontPic_Furfrou10_[];
extern const u32 gMonFrontPic_Meowstic2_[];
extern const u32 gMonFrontPic_Aegislash2_[];
extern const u32 gMonFrontPic_Pumpkaboo2_[];
extern const u32 gMonFrontPic_Pumpkaboo3_[];
extern const u32 gMonFrontPic_Pumpkaboo4_[];
extern const u32 gMonFrontPic_Gourgeist2_[];
extern const u32 gMonFrontPic_Gourgeist3_[];
extern const u32 gMonFrontPic_Gourgeist4_[];
extern const u32 gMonFrontPic_Xerneas2_[];
extern const u32 gMonFrontPic_Zygarde2_[];
extern const u32 gMonFrontPic_Zygarde3_[];
extern const u32 gMonFrontPic_Zygarde4_[];
extern const u32 gMonFrontPic_Zygarde5_[];
extern const u32 gMonFrontPic_Hoopa2_[];
extern const u32 gMonFrontPic_Oricorio2_[];
extern const u32 gMonFrontPic_Oricorio3_[];
extern const u32 gMonFrontPic_Oricorio4_[];
extern const u32 gMonFrontPic_Rockruff2_[];
extern const u32 gMonFrontPic_Lycanroc2_[];
extern const u32 gMonFrontPic_Lycanroc3_[];
extern const u32 gMonFrontPic_Wishiwashi2_[];
extern const u32 gMonFrontPic_Silvally2_[];
extern const u32 gMonFrontPic_Silvally3_[];
extern const u32 gMonFrontPic_Silvally4_[];
extern const u32 gMonFrontPic_Silvally5_[];
extern const u32 gMonFrontPic_Silvally6_[];
extern const u32 gMonFrontPic_Silvally7_[];
extern const u32 gMonFrontPic_Silvally8_[];
extern const u32 gMonFrontPic_Silvally9_[];
extern const u32 gMonFrontPic_Silvally10_[];
extern const u32 gMonFrontPic_Silvally11_[];
extern const u32 gMonFrontPic_Silvally12_[];
extern const u32 gMonFrontPic_Silvally13_[];
extern const u32 gMonFrontPic_Silvally14_[];
extern const u32 gMonFrontPic_Silvally15_[];
extern const u32 gMonFrontPic_Silvally16_[];
extern const u32 gMonFrontPic_Silvally17_[];
extern const u32 gMonFrontPic_Silvally18_[];
extern const u32 gMonFrontPic_Minior2_[];
extern const u32 gMonFrontPic_Minior3_[];
extern const u32 gMonFrontPic_Minior4_[];
extern const u32 gMonFrontPic_Minior5_[];
extern const u32 gMonFrontPic_Minior6_[];
extern const u32 gMonFrontPic_Minior7_[];
extern const u32 gMonFrontPic_Minior8_[];
extern const u32 gMonFrontPic_Minior9_[];
extern const u32 gMonFrontPic_Minior10_[];
extern const u32 gMonFrontPic_Minior11_[];
extern const u32 gMonFrontPic_Minior12_[];
extern const u32 gMonFrontPic_Minior13_[];
extern const u32 gMonFrontPic_Minior14_[];
extern const u32 gMonFrontPic_Mimikyu2_[];
extern const u32 gMonFrontPic_Necrozma2_[];
extern const u32 gMonFrontPic_Necrozma3_[];
extern const u32 gMonFrontPic_Necrozma4_[];
extern const u32 gMonFrontPic_Magearna2_[];
extern const u32 gMonFrontPic_Cramorant2_[];
extern const u32 gMonFrontPic_Cramorant3_[];
extern const u32 gMonFrontPic_Toxtricity2_[];
extern const u32 gMonFrontPic_Sinistea2_[];
extern const u32 gMonFrontPic_Polteageis2_[];
extern const u32 gMonFrontPic_Alcremie2_[];
extern const u32 gMonFrontPic_Alcremie3_[];
extern const u32 gMonFrontPic_Alcremie4_[];
extern const u32 gMonFrontPic_Alcremie5_[];
extern const u32 gMonFrontPic_Alcremie6_[];
extern const u32 gMonFrontPic_Alcremie7_[];
extern const u32 gMonFrontPic_Alcremie8_[];
extern const u32 gMonFrontPic_Alcremie9_[];
extern const u32 gMonFrontPic_Eiscue2_[];
extern const u32 gMonFrontPic_Indeedee2_[];
extern const u32 gMonFrontPic_Morpeko2_[];
extern const u32 gMonFrontPic_Zacian2_[];
extern const u32 gMonFrontPic_Zamazenta2_[];
extern const u32 gMonFrontPic_Eternatus2_[];
extern const u32 gMonFrontPic_Urshifu2_[];
extern const u32 gMonFrontPic_Zarude2_[];
extern const u32 gMonFrontPic_Calyrex2_[];
extern const u32 gMonFrontPic_Calyrex3_[];
extern const u32 gMonFrontPic_Bsculegion2_[];
extern const u32 gMonFrontPic_Alcremie10_[];
extern const u32 gMonFrontPic_Alcremie11_[];
extern const u32 gMonFrontPic_Alcremie12_[];
extern const u32 gMonFrontPic_Alcremie13_[];
extern const u32 gMonFrontPic_Alcremie14_[];
extern const u32 gMonFrontPic_Alcremie15_[];
extern const u32 gMonFrontPic_Alcremie16_[];
extern const u32 gMonFrontPic_Alcremie17_[];
extern const u32 gMonFrontPic_Alcremie18_[];
extern const u32 gMonFrontPic_Alcremie19_[];
extern const u32 gMonFrontPic_Alcremie20_[];
extern const u32 gMonFrontPic_Alcremie21_[];
extern const u32 gMonFrontPic_Alcremie22_[];
extern const u32 gMonFrontPic_Alcremie23_[];
extern const u32 gMonFrontPic_Alcremie24_[];
extern const u32 gMonFrontPic_Alcremie25_[];
extern const u32 gMonFrontPic_Alcremie26_[];
extern const u32 gMonFrontPic_Alcremie27_[];
extern const u32 gMonFrontPic_Alcremie28_[];
extern const u32 gMonFrontPic_Alcremie29_[];
extern const u32 gMonFrontPic_Alcremie30_[];
extern const u32 gMonFrontPic_Alcremie31_[];
extern const u32 gMonFrontPic_Alcremie32_[];
extern const u32 gMonFrontPic_Alcremie33_[];
extern const u32 gMonFrontPic_Alcremie34_[];
extern const u32 gMonFrontPic_Alcremie35_[];
extern const u32 gMonFrontPic_Alcremie36_[];
extern const u32 gMonFrontPic_Alcremie37_[];
extern const u32 gMonFrontPic_Alcremie38_[];
extern const u32 gMonFrontPic_Alcremie39_[];
extern const u32 gMonFrontPic_Alcremie40_[];
extern const u32 gMonFrontPic_Alcremie41_[];
extern const u32 gMonFrontPic_Alcremie42_[];
extern const u32 gMonFrontPic_Alcremie43_[];
extern const u32 gMonFrontPic_Alcremie44_[];
extern const u32 gMonFrontPic_Alcremie45_[];
extern const u32 gMonFrontPic_Alcremie46_[];
extern const u32 gMonFrontPic_Alcremie47_[];
extern const u32 gMonFrontPic_Alcremie48_[];
extern const u32 gMonFrontPic_Alcremie49_[];
extern const u32 gMonFrontPic_Alcremie50_[];
extern const u32 gMonFrontPic_Alcremie51_[];
extern const u32 gMonFrontPic_Alcremie52_[];
extern const u32 gMonFrontPic_Alcremie53_[];
extern const u32 gMonFrontPic_Alcremie54_[];
extern const u32 gMonFrontPic_Alcremie55_[];
extern const u32 gMonFrontPic_Alcremie56_[];
extern const u32 gMonFrontPic_Alcremie57_[];
extern const u32 gMonFrontPic_Alcremie58_[];
extern const u32 gMonFrontPic_Alcremie59_[];
extern const u32 gMonFrontPic_Alcremie60_[];
extern const u32 gMonFrontPic_Alcremie61_[];
extern const u32 gMonFrontPic_Alcremie62_[];
extern const u32 gMonFrontPic_Alcremie63_[];
extern const u32 gMonFrontPic_Sprigatito_[];
extern const u32 gMonFrontPic_Floragato_[];
extern const u32 gMonFrontPic_Meowscarad_[];
extern const u32 gMonFrontPic_Fuecoco_[];
extern const u32 gMonFrontPic_Crocalor_[];
extern const u32 gMonFrontPic_Skeledirge_[];
extern const u32 gMonFrontPic_Quaxly_[];
extern const u32 gMonFrontPic_Quaxwell_[];
extern const u32 gMonFrontPic_Quaquaval_[];
extern const u32 gMonFrontPic_Lechonk_[];
extern const u32 gMonFrontPic_Oinkologne_[];
extern const u32 gMonFrontPic_Oinkologne2_[];
extern const u32 gMonFrontPic_Tarountula_[];
extern const u32 gMonFrontPic_Spidops_[];
extern const u32 gMonFrontPic_Nymble_[];
extern const u32 gMonFrontPic_Lokix_[];
extern const u32 gMonFrontPic_Pawmi_[];
extern const u32 gMonFrontPic_Pawmo_[];
extern const u32 gMonFrontPic_Pawmot_[];
extern const u32 gMonFrontPic_Tandemaus_[];
extern const u32 gMonFrontPic_Maushold_[];
extern const u32 gMonFrontPic_Maushold2_[];
extern const u32 gMonFrontPic_Fidough_[];
extern const u32 gMonFrontPic_Dachsbun_[];
extern const u32 gMonFrontPic_Smoliv_[];
extern const u32 gMonFrontPic_Dolliv_[];
extern const u32 gMonFrontPic_Arboliva_[];
extern const u32 gMonFrontPic_Sqawkabily_[];
extern const u32 gMonFrontPic_Sqawkabily2_[];
extern const u32 gMonFrontPic_Sqawkabily3_[];
extern const u32 gMonFrontPic_Sqawkabily4_[];
extern const u32 gMonFrontPic_Nacli_[];
extern const u32 gMonFrontPic_Naclstack_[];
extern const u32 gMonFrontPic_Garganacl_[];
extern const u32 gMonFrontPic_Charcadet_[];
extern const u32 gMonFrontPic_Armarouge_[];
extern const u32 gMonFrontPic_Ceruledge_[];
extern const u32 gMonFrontPic_Tadbulb_[];
extern const u32 gMonFrontPic_Bellibolt_[];
extern const u32 gMonFrontPic_Wattrel_[];
extern const u32 gMonFrontPic_Kilowatrel_[];
extern const u32 gMonFrontPic_Maschiff_[];
extern const u32 gMonFrontPic_Mabosstiff_[];
extern const u32 gMonFrontPic_Shroodle_[];
extern const u32 gMonFrontPic_Grafaiai_[];
extern const u32 gMonFrontPic_Bramblin_[];
extern const u32 gMonFrontPic_Brmblghast_[];
extern const u32 gMonFrontPic_Toedscool_[];
extern const u32 gMonFrontPic_Toedscruel_[];
extern const u32 gMonFrontPic_Klawf_[];
extern const u32 gMonFrontPic_Capsakid_[];
extern const u32 gMonFrontPic_Scovillain_[];
extern const u32 gMonFrontPic_Rellor_[];
extern const u32 gMonFrontPic_Rabsca_[];
extern const u32 gMonFrontPic_Flittle_[];
extern const u32 gMonFrontPic_Espathra_[];
extern const u32 gMonFrontPic_Tinkatink_[];
extern const u32 gMonFrontPic_Tinkatuff_[];
extern const u32 gMonFrontPic_Tinkaton_[];
extern const u32 gMonFrontPic_Wiglett_[];
extern const u32 gMonFrontPic_Wugtrio_[];
extern const u32 gMonFrontPic_Bombirdier_[];
extern const u32 gMonFrontPic_Finizen_[];
extern const u32 gMonFrontPic_Palafin_[];
extern const u32 gMonFrontPic_Palafin2_[];
extern const u32 gMonFrontPic_Varoom_[];
extern const u32 gMonFrontPic_Revavroom_[];
extern const u32 gMonFrontPic_Cyclizar_[];
extern const u32 gMonFrontPic_Orthworm_[];
extern const u32 gMonFrontPic_Glimmet_[];
extern const u32 gMonFrontPic_Glimmora_[];
extern const u32 gMonFrontPic_Greavard_[];
extern const u32 gMonFrontPic_Houndstone_[];
extern const u32 gMonFrontPic_Flamigo_[];
extern const u32 gMonFrontPic_Cetoddle_[];
extern const u32 gMonFrontPic_Cetitan_[];
extern const u32 gMonFrontPic_Veluza_[];
extern const u32 gMonFrontPic_Dondozo_[];
extern const u32 gMonFrontPic_Tatsugiri_[];
extern const u32 gMonFrontPic_Tatsugiri2_[];
extern const u32 gMonFrontPic_Tatsugiri3_[];
extern const u32 gMonFrontPic_Annihilape_[];
extern const u32 gMonFrontPic_Clodsire_[];
extern const u32 gMonFrontPic_Farigiraf_[];
extern const u32 gMonFrontPic_Dudunsprce_[];
extern const u32 gMonFrontPic_Dudunsprce2_[];
extern const u32 gMonFrontPic_Kingambit_[];
extern const u32 gMonFrontPic_GreatTusk_[];
extern const u32 gMonFrontPic_ScreamTail_[];
extern const u32 gMonFrontPic_BruteBonet_[];
extern const u32 gMonFrontPic_FluttrMane_[];
extern const u32 gMonFrontPic_SlithrWing_[];
extern const u32 gMonFrontPic_SndyShocks_[];
extern const u32 gMonFrontPic_IronTreads_[];
extern const u32 gMonFrontPic_IronBundle_[];
extern const u32 gMonFrontPic_IronHands_[];
extern const u32 gMonFrontPic_IronJuguls_[];
extern const u32 gMonFrontPic_IronMoth_[];
extern const u32 gMonFrontPic_IronThorns_[];
extern const u32 gMonFrontPic_Frigibax_[];
extern const u32 gMonFrontPic_Arctibax_[];
extern const u32 gMonFrontPic_Baxcalibur_[];
extern const u32 gMonFrontPic_Gimmighoul_[];
extern const u32 gMonFrontPic_Gimmighoul2_[];
extern const u32 gMonFrontPic_Gholdengo_[];
extern const u32 gMonFrontPic_WoChien_[];
extern const u32 gMonFrontPic_ChienPao_[];
extern const u32 gMonFrontPic_TingLu_[];
extern const u32 gMonFrontPic_ChiYu_[];
extern const u32 gMonFrontPic_RoarngMoon_[];
extern const u32 gMonFrontPic_IronVliant_[];
extern const u32 gMonFrontPic_Koraidon_[];
extern const u32 gMonFrontPic_Miraidon_[];
extern const u32 gMonFrontPic_Tauros2_[];
extern const u32 gMonFrontPic_Tauros3_[];
extern const u32 gMonFrontPic_Tauros4_[];
extern const u32 gMonFrontPic_Wooper2_[];
extern const u32 gMonFrontPic_WalkngWake_[];
extern const u32 gMonFrontPic_IronLeaves_[];
extern const u32 gMonFrontPic_Dipplin_[];
extern const u32 gMonFrontPic_Ptchageist_[];
extern const u32 gMonFrontPic_Ptchageist2_[];
extern const u32 gMonFrontPic_Sinistcha_[];
extern const u32 gMonFrontPic_Sinistcha2_[];
extern const u32 gMonFrontPic_Okidogi_[];
extern const u32 gMonFrontPic_Munkidori_[];
extern const u32 gMonFrontPic_Fezndipiti_[];
extern const u32 gMonFrontPic_Ogerpon_[];
extern const u32 gMonFrontPic_Ogerpon2_[];
extern const u32 gMonFrontPic_Ogerpon3_[];
extern const u32 gMonFrontPic_Ogerpon4_[];
extern const u32 gMonFrontPic_Ogerpon5_[];
extern const u32 gMonFrontPic_Ogerpon6_[];
extern const u32 gMonFrontPic_Ogerpon7_[];
extern const u32 gMonFrontPic_Ogerpon8_[];
extern const u32 gMonFrontPic_Ursaluna2_[];
extern const u32 gMonFrontPic_Archaludon_[];
extern const u32 gMonFrontPic_Hydrapple_[];
extern const u32 gMonFrontPic_GouginFire_[];
extern const u32 gMonFrontPic_RagingBolt_[];
extern const u32 gMonFrontPic_IronBouldr_[];
extern const u32 gMonFrontPic_IronCrown_[];
extern const u32 gMonFrontPic_Terapagos_[];
extern const u32 gMonFrontPic_Terapagos2_[];
extern const u32 gMonFrontPic_Terapagos3_[];
extern const u32 gMonFrontPic_Pecharunt_[];
extern const u32 gMonFrontPic_Mothim2_[];
extern const u32 gMonFrontPic_Mothim3_[];
extern const u32 gMonFrontPic_Scatterbug2_[];
extern const u32 gMonFrontPic_Scatterbug3_[];
extern const u32 gMonFrontPic_Scatterbug4_[];
extern const u32 gMonFrontPic_Scatterbug5_[];
extern const u32 gMonFrontPic_Scatterbug6_[];
extern const u32 gMonFrontPic_Scatterbug7_[];
extern const u32 gMonFrontPic_Scatterbug8_[];
extern const u32 gMonFrontPic_Scatterbug9_[];
extern const u32 gMonFrontPic_Scatterbug10_[];
extern const u32 gMonFrontPic_Scatterbug11_[];
extern const u32 gMonFrontPic_Scatterbug12_[];
extern const u32 gMonFrontPic_Scatterbug13_[];
extern const u32 gMonFrontPic_Scatterbug14_[];
extern const u32 gMonFrontPic_Scatterbug15_[];
extern const u32 gMonFrontPic_Scatterbug16_[];
extern const u32 gMonFrontPic_Scatterbug17_[];
extern const u32 gMonFrontPic_Scatterbug18_[];
extern const u32 gMonFrontPic_Scatterbug19_[];
extern const u32 gMonFrontPic_Scatterbug20_[];
extern const u32 gMonFrontPic_Spewpa2_[];
extern const u32 gMonFrontPic_Spewpa3_[];
extern const u32 gMonFrontPic_Spewpa4_[];
extern const u32 gMonFrontPic_Spewpa5_[];
extern const u32 gMonFrontPic_Spewpa6_[];
extern const u32 gMonFrontPic_Spewpa7_[];
extern const u32 gMonFrontPic_Spewpa8_[];
extern const u32 gMonFrontPic_Spewpa9_[];
extern const u32 gMonFrontPic_Spewpa10_[];
extern const u32 gMonFrontPic_Spewpa11_[];
extern const u32 gMonFrontPic_Spewpa12_[];
extern const u32 gMonFrontPic_Spewpa13_[];
extern const u32 gMonFrontPic_Spewpa14_[];
extern const u32 gMonFrontPic_Spewpa15_[];
extern const u32 gMonFrontPic_Spewpa16_[];
extern const u32 gMonFrontPic_Spewpa17_[];
extern const u32 gMonFrontPic_Spewpa18_[];
extern const u32 gMonFrontPic_Spewpa19_[];
extern const u32 gMonFrontPic_Spewpa20_[];
extern const u32 gMonFrontPic_Raticate3_[];
extern const u32 gMonFrontPic_Gumshoos2_[];
extern const u32 gMonFrontPic_Vikavolt2_[];
extern const u32 gMonFrontPic_Lurantis2_[];
extern const u32 gMonFrontPic_Salazzle2_[];
extern const u32 gMonFrontPic_Mimikyu3_[];
extern const u32 gMonFrontPic_Kommoo2_[];
extern const u32 gMonFrontPic_Marowak3_[];
extern const u32 gMonFrontPic_Ribombee2_[];
extern const u32 gMonFrontPic_Araquanid2_[];
extern const u32 gMonFrontPic_Togedemaru2_[];
extern const u32 gMonFrontPic_Pikachu16_[];
extern const u32 gMonFrontPic_Eevee2_[];
extern const u32 gMonFrontPic_Venusaur3_[];
extern const u32 gMonFrontPic_Blastoise3_[];
extern const u32 gMonFrontPic_Charizard4_[];
extern const u32 gMonFrontPic_Butterfree2_[];
extern const u32 gMonFrontPic_Pikachu17_[];
extern const u32 gMonFrontPic_Meowth4_[];
extern const u32 gMonFrontPic_Machamp2_[];
extern const u32 gMonFrontPic_Gengar3_[];
extern const u32 gMonFrontPic_Kingler2_[];
extern const u32 gMonFrontPic_Lapras2_[];
extern const u32 gMonFrontPic_Eevee3_[];
extern const u32 gMonFrontPic_Snorlax2_[];
extern const u32 gMonFrontPic_Garbodor2_[];
extern const u32 gMonFrontPic_Melmetal2_[];
extern const u32 gMonFrontPic_Rillaboom2_[];
extern const u32 gMonFrontPic_Cinderace2_[];
extern const u32 gMonFrontPic_Inteleon2_[];
extern const u32 gMonFrontPic_Corviknigh2_[];
extern const u32 gMonFrontPic_Orbeetle2_[];
extern const u32 gMonFrontPic_Drednaw2_[];
extern const u32 gMonFrontPic_Coalossal2_[];
extern const u32 gMonFrontPic_Flapple2_[];
extern const u32 gMonFrontPic_Appletun2_[];
extern const u32 gMonFrontPic_Sandaconda2_[];
extern const u32 gMonFrontPic_Toxtricity3_[];
extern const u32 gMonFrontPic_Toxtricity4_[];
extern const u32 gMonFrontPic_Centiskorc2_[];
extern const u32 gMonFrontPic_Hatterene2_[];
extern const u32 gMonFrontPic_Grimmsnarl2_[];
extern const u32 gMonFrontPic_Alcremie64_[];
extern const u32 gMonFrontPic_Copperajah2_[];
extern const u32 gMonFrontPic_Duraludon2_[];
extern const u32 gMonFrontPic_Urshifu3_[];
extern const u32 gMonFrontPic_Urshifu4_[];
extern const u32 gMonFrontPic_Mimikyu4_[];

const struct CompressedSpriteSheet gMonFrontPicTable_[] =
{
	SPECIES_SPRITE(NONE, gMonFrontPic_CircledQuestionMark),
	SPECIES_SPRITE(BULBASAUR, gMonFrontPic_Bulbasaur_),
	SPECIES_SPRITE(IVYSAUR, gMonFrontPic_Ivysaur_),
	SPECIES_SPRITE(VENUSAUR, gMonFrontPic_Venusaur_),
	SPECIES_SPRITE(CHARMANDER, gMonFrontPic_Charmander_),
	SPECIES_SPRITE(CHARMELEON, gMonFrontPic_Charmeleon_),
	SPECIES_SPRITE(CHARIZARD, gMonFrontPic_Charizard_),
	SPECIES_SPRITE(SQUIRTLE, gMonFrontPic_Squirtle_),
	SPECIES_SPRITE(WARTORTLE, gMonFrontPic_Wartortle_),
	SPECIES_SPRITE(BLASTOISE, gMonFrontPic_Blastoise_),
	SPECIES_SPRITE(CATERPIE, gMonFrontPic_Caterpie_),
	SPECIES_SPRITE(METAPOD, gMonFrontPic_Metapod_),
	SPECIES_SPRITE(BUTTERFREE, gMonFrontPic_Butterfree_),
	SPECIES_SPRITE(WEEDLE, gMonFrontPic_Weedle_),
	SPECIES_SPRITE(KAKUNA, gMonFrontPic_Kakuna_),
	SPECIES_SPRITE(BEEDRILL, gMonFrontPic_Beedrill_),
	SPECIES_SPRITE(PIDGEY, gMonFrontPic_Pidgey_),
	SPECIES_SPRITE(PIDGEOTTO, gMonFrontPic_Pidgeotto_),
	SPECIES_SPRITE(PIDGEOT, gMonFrontPic_Pidgeot_),
	SPECIES_SPRITE(RATTATA, gMonFrontPic_Rattata_),
	SPECIES_SPRITE(RATICATE, gMonFrontPic_Raticate_),
	SPECIES_SPRITE(SPEAROW, gMonFrontPic_Spearow_),
	SPECIES_SPRITE(FEAROW, gMonFrontPic_Fearow_),
	SPECIES_SPRITE(EKANS, gMonFrontPic_Ekans_),
	SPECIES_SPRITE(ARBOK, gMonFrontPic_Arbok_),
	SPECIES_SPRITE(PIKACHU, gMonFrontPic_Pikachu_),
	SPECIES_SPRITE(RAICHU, gMonFrontPic_Raichu_),
	SPECIES_SPRITE(SANDSHREW, gMonFrontPic_Sandshrew_),
	SPECIES_SPRITE(SANDSLASH, gMonFrontPic_Sandslash_),
	SPECIES_SPRITE(NIDORANSF, gMonFrontPic_Nidoransf_),
	SPECIES_SPRITE(NIDORINA, gMonFrontPic_Nidorina_),
	SPECIES_SPRITE(NIDOQUEEN, gMonFrontPic_Nidoqueen_),
	SPECIES_SPRITE(NIDORANSM, gMonFrontPic_Nidoransm_),
	SPECIES_SPRITE(NIDORINO, gMonFrontPic_Nidorino_),
	SPECIES_SPRITE(NIDOKING, gMonFrontPic_Nidoking_),
	SPECIES_SPRITE(CLEFAIRY, gMonFrontPic_Clefairy_),
	SPECIES_SPRITE(CLEFABLE, gMonFrontPic_Clefable_),
	SPECIES_SPRITE(VULPIX, gMonFrontPic_Vulpix_),
	SPECIES_SPRITE(NINETALES, gMonFrontPic_Ninetales_),
	SPECIES_SPRITE(JIGGLYPUFF, gMonFrontPic_Jigglypuff_),
	SPECIES_SPRITE(WIGGLYTUFF, gMonFrontPic_Wigglytuff_),
	SPECIES_SPRITE(ZUBAT, gMonFrontPic_Zubat_),
	SPECIES_SPRITE(GOLBAT, gMonFrontPic_Golbat_),
	SPECIES_SPRITE(ODDISH, gMonFrontPic_Oddish_),
	SPECIES_SPRITE(GLOOM, gMonFrontPic_Gloom_),
	SPECIES_SPRITE(VILEPLUME, gMonFrontPic_Vileplume_),
	SPECIES_SPRITE(PARAS, gMonFrontPic_Paras_),
	SPECIES_SPRITE(PARASECT, gMonFrontPic_Parasect_),
	SPECIES_SPRITE(VENONAT, gMonFrontPic_Venonat_),
	SPECIES_SPRITE(VENOMOTH, gMonFrontPic_Venomoth_),
	SPECIES_SPRITE(DIGLETT, gMonFrontPic_Diglett_),
	SPECIES_SPRITE(DUGTRIO, gMonFrontPic_Dugtrio_),
	SPECIES_SPRITE(MEOWTH, gMonFrontPic_Meowth_),
	SPECIES_SPRITE(PERSIAN, gMonFrontPic_Persian_),
	SPECIES_SPRITE(PSYDUCK, gMonFrontPic_Psyduck_),
	SPECIES_SPRITE(GOLDUCK, gMonFrontPic_Golduck_),
	SPECIES_SPRITE(MANKEY, gMonFrontPic_Mankey_),
	SPECIES_SPRITE(PRIMEAPE, gMonFrontPic_Primeape_),
	SPECIES_SPRITE(GROWLITHE, gMonFrontPic_Growlithe_),
	SPECIES_SPRITE(ARCANINE, gMonFrontPic_Arcanine_),
	SPECIES_SPRITE(POLIWAG, gMonFrontPic_Poliwag_),
	SPECIES_SPRITE(POLIWHIRL, gMonFrontPic_Poliwhirl_),
	SPECIES_SPRITE(POLIWRATH, gMonFrontPic_Poliwrath_),
	SPECIES_SPRITE(ABRA, gMonFrontPic_Abra_),
	SPECIES_SPRITE(KADABRA, gMonFrontPic_Kadabra_),
	SPECIES_SPRITE(ALAKAZAM, gMonFrontPic_Alakazam_),
	SPECIES_SPRITE(MACHOP, gMonFrontPic_Machop_),
	SPECIES_SPRITE(MACHOKE, gMonFrontPic_Machoke_),
	SPECIES_SPRITE(MACHAMP, gMonFrontPic_Machamp_),
	SPECIES_SPRITE(BELLSPROUT, gMonFrontPic_Bellsprout_),
	SPECIES_SPRITE(WEEPINBELL, gMonFrontPic_Weepinbell_),
	SPECIES_SPRITE(VICTREEBEL, gMonFrontPic_Victreebel_),
	SPECIES_SPRITE(TENTACOOL, gMonFrontPic_Tentacool_),
	SPECIES_SPRITE(TENTACRUEL, gMonFrontPic_Tentacruel_),
	SPECIES_SPRITE(GEODUDE, gMonFrontPic_Geodude_),
	SPECIES_SPRITE(GRAVELER, gMonFrontPic_Graveler_),
	SPECIES_SPRITE(GOLEM, gMonFrontPic_Golem_),
	SPECIES_SPRITE(PONYTA, gMonFrontPic_Ponyta_),
	SPECIES_SPRITE(RAPIDASH, gMonFrontPic_Rapidash_),
	SPECIES_SPRITE(SLOWPOKE, gMonFrontPic_Slowpoke_),
	SPECIES_SPRITE(SLOWBRO, gMonFrontPic_Slowbro_),
	SPECIES_SPRITE(MAGNEMITE, gMonFrontPic_Magnemite_),
	SPECIES_SPRITE(MAGNETON, gMonFrontPic_Magneton_),
	SPECIES_SPRITE(FARFETCHD, gMonFrontPic_Farfetchd_),
	SPECIES_SPRITE(DODUO, gMonFrontPic_Doduo_),
	SPECIES_SPRITE(DODRIO, gMonFrontPic_Dodrio_),
	SPECIES_SPRITE(SEEL, gMonFrontPic_Seel_),
	SPECIES_SPRITE(DEWGONG, gMonFrontPic_Dewgong_),
	SPECIES_SPRITE(GRIMER, gMonFrontPic_Grimer_),
	SPECIES_SPRITE(MUK, gMonFrontPic_Muk_),
	SPECIES_SPRITE(SHELLDER, gMonFrontPic_Shellder_),
	SPECIES_SPRITE(CLOYSTER, gMonFrontPic_Cloyster_),
	SPECIES_SPRITE(GASTLY, gMonFrontPic_Gastly_),
	SPECIES_SPRITE(HAUNTER, gMonFrontPic_Haunter_),
	SPECIES_SPRITE(GENGAR, gMonFrontPic_Gengar_),
	SPECIES_SPRITE(ONIX, gMonFrontPic_Onix_),
	SPECIES_SPRITE(DROWZEE, gMonFrontPic_Drowzee_),
	SPECIES_SPRITE(HYPNO, gMonFrontPic_Hypno_),
	SPECIES_SPRITE(KRABBY, gMonFrontPic_Krabby_),
	SPECIES_SPRITE(KINGLER, gMonFrontPic_Kingler_),
	SPECIES_SPRITE(VOLTORB, gMonFrontPic_Voltorb_),
	SPECIES_SPRITE(ELECTRODE, gMonFrontPic_Electrode_),
	SPECIES_SPRITE(EXEGGCUTE, gMonFrontPic_Exeggcute_),
	SPECIES_SPRITE(EXEGGUTOR, gMonFrontPic_Exeggutor_),
	SPECIES_SPRITE(CUBONE, gMonFrontPic_Cubone_),
	SPECIES_SPRITE(MAROWAK, gMonFrontPic_Marowak_),
	SPECIES_SPRITE(HITMONLEE, gMonFrontPic_Hitmonlee_),
	SPECIES_SPRITE(HITMONCHAN, gMonFrontPic_Hitmonchan_),
	SPECIES_SPRITE(LICKITUNG, gMonFrontPic_Lickitung_),
	SPECIES_SPRITE(KOFFING, gMonFrontPic_Koffing_),
	SPECIES_SPRITE(WEEZING, gMonFrontPic_Weezing_),
	SPECIES_SPRITE(RHYHORN, gMonFrontPic_Rhyhorn_),
	SPECIES_SPRITE(RHYDON, gMonFrontPic_Rhydon_),
	SPECIES_SPRITE(CHANSEY, gMonFrontPic_Chansey_),
	SPECIES_SPRITE(TANGELA, gMonFrontPic_Tangela_),
	SPECIES_SPRITE(KANGASKHAN, gMonFrontPic_Kangaskhan_),
	SPECIES_SPRITE(HORSEA, gMonFrontPic_Horsea_),
	SPECIES_SPRITE(SEADRA, gMonFrontPic_Seadra_),
	SPECIES_SPRITE(GOLDEEN, gMonFrontPic_Goldeen_),
	SPECIES_SPRITE(SEAKING, gMonFrontPic_Seaking_),
	SPECIES_SPRITE(STARYU, gMonFrontPic_Staryu_),
	SPECIES_SPRITE(STARMIE, gMonFrontPic_Starmie_),
	SPECIES_SPRITE(MRMIME, gMonFrontPic_MrMime_),
	SPECIES_SPRITE(SCYTHER, gMonFrontPic_Scyther_),
	SPECIES_SPRITE(JYNX, gMonFrontPic_Jynx_),
	SPECIES_SPRITE(ELECTABUZZ, gMonFrontPic_Electabuzz_),
	SPECIES_SPRITE(MAGMAR, gMonFrontPic_Magmar_),
	SPECIES_SPRITE(PINSIR, gMonFrontPic_Pinsir_),
	SPECIES_SPRITE(TAUROS, gMonFrontPic_Tauros_),
	SPECIES_SPRITE(MAGIKARP, gMonFrontPic_Magikarp_),
	SPECIES_SPRITE(GYARADOS, gMonFrontPic_Gyarados_),
	SPECIES_SPRITE(LAPRAS, gMonFrontPic_Lapras_),
	SPECIES_SPRITE(DITTO, gMonFrontPic_Ditto_),
	SPECIES_SPRITE(EEVEE, gMonFrontPic_Eevee_),
	SPECIES_SPRITE(VAPOREON, gMonFrontPic_Vaporeon_),
	SPECIES_SPRITE(JOLTEON, gMonFrontPic_Jolteon_),
	SPECIES_SPRITE(FLAREON, gMonFrontPic_Flareon_),
	SPECIES_SPRITE(PORYGON, gMonFrontPic_Porygon_),
	SPECIES_SPRITE(OMANYTE, gMonFrontPic_Omanyte_),
	SPECIES_SPRITE(OMASTAR, gMonFrontPic_Omastar_),
	SPECIES_SPRITE(KABUTO, gMonFrontPic_Kabuto_),
	SPECIES_SPRITE(KABUTOPS, gMonFrontPic_Kabutops_),
	SPECIES_SPRITE(AERODACTYL, gMonFrontPic_Aerodactyl_),
	SPECIES_SPRITE(SNORLAX, gMonFrontPic_Snorlax_),
	SPECIES_SPRITE(ARTICUNO, gMonFrontPic_Articuno_),
	SPECIES_SPRITE(ZAPDOS, gMonFrontPic_Zapdos_),
	SPECIES_SPRITE(MOLTRES, gMonFrontPic_Moltres_),
	SPECIES_SPRITE(DRATINI, gMonFrontPic_Dratini_),
	SPECIES_SPRITE(DRAGONAIR, gMonFrontPic_Dragonair_),
	SPECIES_SPRITE(DRAGONITE, gMonFrontPic_Dragonite_),
	SPECIES_SPRITE(MEWTWO, gMonFrontPic_Mewtwo_),
	SPECIES_SPRITE(MEW, gMonFrontPic_Mew_),
	SPECIES_SPRITE(CHIKORITA, gMonFrontPic_Chikorita_),
	SPECIES_SPRITE(BAYLEEF, gMonFrontPic_Bayleef_),
	SPECIES_SPRITE(MEGANIUM, gMonFrontPic_Meganium_),
	SPECIES_SPRITE(CYNDAQUIL, gMonFrontPic_Cyndaquil_),
	SPECIES_SPRITE(QUILAVA, gMonFrontPic_Quilava_),
	SPECIES_SPRITE(TYPHLOSION, gMonFrontPic_Typhlosion_),
	SPECIES_SPRITE(TOTODILE, gMonFrontPic_Totodile_),
	SPECIES_SPRITE(CROCONAW, gMonFrontPic_Croconaw_),
	SPECIES_SPRITE(FERALIGATR, gMonFrontPic_Feraligatr_),
	SPECIES_SPRITE(SENTRET, gMonFrontPic_Sentret_),
	SPECIES_SPRITE(FURRET, gMonFrontPic_Furret_),
	SPECIES_SPRITE(HOOTHOOT, gMonFrontPic_Hoothoot_),
	SPECIES_SPRITE(NOCTOWL, gMonFrontPic_Noctowl_),
	SPECIES_SPRITE(LEDYBA, gMonFrontPic_Ledyba_),
	SPECIES_SPRITE(LEDIAN, gMonFrontPic_Ledian_),
	SPECIES_SPRITE(SPINARAK, gMonFrontPic_Spinarak_),
	SPECIES_SPRITE(ARIADOS, gMonFrontPic_Ariados_),
	SPECIES_SPRITE(CROBAT, gMonFrontPic_Crobat_),
	SPECIES_SPRITE(CHINCHOU, gMonFrontPic_Chinchou_),
	SPECIES_SPRITE(LANTURN, gMonFrontPic_Lanturn_),
	SPECIES_SPRITE(PICHU, gMonFrontPic_Pichu_),
	SPECIES_SPRITE(CLEFFA, gMonFrontPic_Cleffa_),
	SPECIES_SPRITE(IGGLYBUFF, gMonFrontPic_Igglybuff_),
	SPECIES_SPRITE(TOGEPI, gMonFrontPic_Togepi_),
	SPECIES_SPRITE(TOGETIC, gMonFrontPic_Togetic_),
	SPECIES_SPRITE(NATU, gMonFrontPic_Natu_),
	SPECIES_SPRITE(XATU, gMonFrontPic_Xatu_),
	SPECIES_SPRITE(MAREEP, gMonFrontPic_Mareep_),
	SPECIES_SPRITE(FLAAFFY, gMonFrontPic_Flaaffy_),
	SPECIES_SPRITE(AMPHAROS, gMonFrontPic_Ampharos_),
	SPECIES_SPRITE(BELLOSSOM, gMonFrontPic_Bellossom_),
	SPECIES_SPRITE(MARILL, gMonFrontPic_Marill_),
	SPECIES_SPRITE(AZUMARILL, gMonFrontPic_Azumarill_),
	SPECIES_SPRITE(SUDOWOODO, gMonFrontPic_Sudowoodo_),
	SPECIES_SPRITE(POLITOED, gMonFrontPic_Politoed_),
	SPECIES_SPRITE(HOPPIP, gMonFrontPic_Hoppip_),
	SPECIES_SPRITE(SKIPLOOM, gMonFrontPic_Skiploom_),
	SPECIES_SPRITE(JUMPLUFF, gMonFrontPic_Jumpluff_),
	SPECIES_SPRITE(AIPOM, gMonFrontPic_Aipom_),
	SPECIES_SPRITE(SUNKERN, gMonFrontPic_Sunkern_),
	SPECIES_SPRITE(SUNFLORA, gMonFrontPic_Sunflora_),
	SPECIES_SPRITE(YANMA, gMonFrontPic_Yanma_),
	SPECIES_SPRITE(WOOPER, gMonFrontPic_Wooper_),
	SPECIES_SPRITE(QUAGSIRE, gMonFrontPic_Quagsire_),
	SPECIES_SPRITE(ESPEON, gMonFrontPic_Espeon_),
	SPECIES_SPRITE(UMBREON, gMonFrontPic_Umbreon_),
	SPECIES_SPRITE(MURKROW, gMonFrontPic_Murkrow_),
	SPECIES_SPRITE(SLOWKING, gMonFrontPic_Slowking_),
	SPECIES_SPRITE(MISDREAVUS, gMonFrontPic_Misdreavus_),
	SPECIES_SPRITE(UNOWN, gMonFrontPic_Unown_),
	SPECIES_SPRITE(WOBBUFFET, gMonFrontPic_Wobbuffet_),
	SPECIES_SPRITE(GIRAFARIG, gMonFrontPic_Girafarig_),
	SPECIES_SPRITE(PINECO, gMonFrontPic_Pineco_),
	SPECIES_SPRITE(FORRETRESS, gMonFrontPic_Forretress_),
	SPECIES_SPRITE(DUNSPARCE, gMonFrontPic_Dunsparce_),
	SPECIES_SPRITE(GLIGAR, gMonFrontPic_Gligar_),
	SPECIES_SPRITE(STEELIX, gMonFrontPic_Steelix_),
	SPECIES_SPRITE(SNUBBULL, gMonFrontPic_Snubbull_),
	SPECIES_SPRITE(GRANBULL, gMonFrontPic_Granbull_),
	SPECIES_SPRITE(QWILFISH, gMonFrontPic_Qwilfish_),
	SPECIES_SPRITE(SCIZOR, gMonFrontPic_Scizor_),
	SPECIES_SPRITE(SHUCKLE, gMonFrontPic_Shuckle_),
	SPECIES_SPRITE(HERACROSS, gMonFrontPic_Heracross_),
	SPECIES_SPRITE(SNEASEL, gMonFrontPic_Sneasel_),
	SPECIES_SPRITE(TEDDIURSA, gMonFrontPic_Teddiursa_),
	SPECIES_SPRITE(URSARING, gMonFrontPic_Ursaring_),
	SPECIES_SPRITE(SLUGMA, gMonFrontPic_Slugma_),
	SPECIES_SPRITE(MAGCARGO, gMonFrontPic_Magcargo_),
	SPECIES_SPRITE(SWINUB, gMonFrontPic_Swinub_),
	SPECIES_SPRITE(PILOSWINE, gMonFrontPic_Piloswine_),
	SPECIES_SPRITE(CORSOLA, gMonFrontPic_Corsola_),
	SPECIES_SPRITE(REMORAID, gMonFrontPic_Remoraid_),
	SPECIES_SPRITE(OCTILLERY, gMonFrontPic_Octillery_),
	SPECIES_SPRITE(DELIBIRD, gMonFrontPic_Delibird_),
	SPECIES_SPRITE(MANTINE, gMonFrontPic_Mantine_),
	SPECIES_SPRITE(SKARMORY, gMonFrontPic_Skarmory_),
	SPECIES_SPRITE(HOUNDOUR, gMonFrontPic_Houndour_),
	SPECIES_SPRITE(HOUNDOOM, gMonFrontPic_Houndoom_),
	SPECIES_SPRITE(KINGDRA, gMonFrontPic_Kingdra_),
	SPECIES_SPRITE(PHANPY, gMonFrontPic_Phanpy_),
	SPECIES_SPRITE(DONPHAN, gMonFrontPic_Donphan_),
	SPECIES_SPRITE(PORYGON2, gMonFrontPic_Porygon2_),
	SPECIES_SPRITE(STANTLER, gMonFrontPic_Stantler_),
	SPECIES_SPRITE(SMEARGLE, gMonFrontPic_Smeargle_),
	SPECIES_SPRITE(TYROGUE, gMonFrontPic_Tyrogue_),
	SPECIES_SPRITE(HITMONTOP, gMonFrontPic_Hitmontop_),
	SPECIES_SPRITE(SMOOCHUM, gMonFrontPic_Smoochum_),
	SPECIES_SPRITE(ELEKID, gMonFrontPic_Elekid_),
	SPECIES_SPRITE(MAGBY, gMonFrontPic_Magby_),
	SPECIES_SPRITE(MILTANK, gMonFrontPic_Miltank_),
	SPECIES_SPRITE(BLISSEY, gMonFrontPic_Blissey_),
	SPECIES_SPRITE(RAIKOU, gMonFrontPic_Raikou_),
	SPECIES_SPRITE(ENTEI, gMonFrontPic_Entei_),
	SPECIES_SPRITE(SUICUNE, gMonFrontPic_Suicune_),
	SPECIES_SPRITE(LARVITAR, gMonFrontPic_Larvitar_),
	SPECIES_SPRITE(PUPITAR, gMonFrontPic_Pupitar_),
	SPECIES_SPRITE(TYRANITAR, gMonFrontPic_Tyranitar_),
	SPECIES_SPRITE(LUGIA, gMonFrontPic_Lugia_),
	SPECIES_SPRITE(HOOH, gMonFrontPic_HoOh_),
	SPECIES_SPRITE(CELEBI, gMonFrontPic_Celebi_),
	SPECIES_SPRITE(TREECKO, gMonFrontPic_Treecko_),
	SPECIES_SPRITE(GROVYLE, gMonFrontPic_Grovyle_),
	SPECIES_SPRITE(SCEPTILE, gMonFrontPic_Sceptile_),
	SPECIES_SPRITE(TORCHIC, gMonFrontPic_Torchic_),
	SPECIES_SPRITE(COMBUSKEN, gMonFrontPic_Combusken_),
	SPECIES_SPRITE(BLAZIKEN, gMonFrontPic_Blaziken_),
	SPECIES_SPRITE(MUDKIP, gMonFrontPic_Mudkip_),
	SPECIES_SPRITE(MARSHTOMP, gMonFrontPic_Marshtomp_),
	SPECIES_SPRITE(SWAMPERT, gMonFrontPic_Swampert_),
	SPECIES_SPRITE(POOCHYENA, gMonFrontPic_Poochyena_),
	SPECIES_SPRITE(MIGHTYENA, gMonFrontPic_Mightyena_),
	SPECIES_SPRITE(ZIGZAGOON, gMonFrontPic_Zigzagoon_),
	SPECIES_SPRITE(LINOONE, gMonFrontPic_Linoone_),
	SPECIES_SPRITE(WURMPLE, gMonFrontPic_Wurmple_),
	SPECIES_SPRITE(SILCOON, gMonFrontPic_Silcoon_),
	SPECIES_SPRITE(BEAUTIFLY, gMonFrontPic_Beautifly_),
	SPECIES_SPRITE(CASCOON, gMonFrontPic_Cascoon_),
	SPECIES_SPRITE(DUSTOX, gMonFrontPic_Dustox_),
	SPECIES_SPRITE(LOTAD, gMonFrontPic_Lotad_),
	SPECIES_SPRITE(LOMBRE, gMonFrontPic_Lombre_),
	SPECIES_SPRITE(LUDICOLO, gMonFrontPic_Ludicolo_),
	SPECIES_SPRITE(SEEDOT, gMonFrontPic_Seedot_),
	SPECIES_SPRITE(NUZLEAF, gMonFrontPic_Nuzleaf_),
	SPECIES_SPRITE(SHIFTRY, gMonFrontPic_Shiftry_),
	SPECIES_SPRITE(TAILLOW, gMonFrontPic_Taillow_),
	SPECIES_SPRITE(SWELLOW, gMonFrontPic_Swellow_),
	SPECIES_SPRITE(WINGULL, gMonFrontPic_Wingull_),
	SPECIES_SPRITE(PELIPPER, gMonFrontPic_Pelipper_),
	SPECIES_SPRITE(RALTS, gMonFrontPic_Ralts_),
	SPECIES_SPRITE(KIRLIA, gMonFrontPic_Kirlia_),
	SPECIES_SPRITE(GARDEVOIR, gMonFrontPic_Gardevoir_),
	SPECIES_SPRITE(SURSKIT, gMonFrontPic_Surskit_),
	SPECIES_SPRITE(MASQUERAIN, gMonFrontPic_Masquerain_),
	SPECIES_SPRITE(SHROOMISH, gMonFrontPic_Shroomish_),
	SPECIES_SPRITE(BRELOOM, gMonFrontPic_Breloom_),
	SPECIES_SPRITE(SLAKOTH, gMonFrontPic_Slakoth_),
	SPECIES_SPRITE(VIGOROTH, gMonFrontPic_Vigoroth_),
	SPECIES_SPRITE(SLAKING, gMonFrontPic_Slaking_),
	SPECIES_SPRITE(NINCADA, gMonFrontPic_Nincada_),
	SPECIES_SPRITE(NINJASK, gMonFrontPic_Ninjask_),
	SPECIES_SPRITE(SHEDINJA, gMonFrontPic_Shedinja_),
	SPECIES_SPRITE(WHISMUR, gMonFrontPic_Whismur_),
	SPECIES_SPRITE(LOUDRED, gMonFrontPic_Loudred_),
	SPECIES_SPRITE(EXPLOUD, gMonFrontPic_Exploud_),
	SPECIES_SPRITE(MAKUHITA, gMonFrontPic_Makuhita_),
	SPECIES_SPRITE(HARIYAMA, gMonFrontPic_Hariyama_),
	SPECIES_SPRITE(AZURILL, gMonFrontPic_Azurill_),
	SPECIES_SPRITE(NOSEPASS, gMonFrontPic_Nosepass_),
	SPECIES_SPRITE(SKITTY, gMonFrontPic_Skitty_),
	SPECIES_SPRITE(DELCATTY, gMonFrontPic_Delcatty_),
	SPECIES_SPRITE(SABLEYE, gMonFrontPic_Sableye_),
	SPECIES_SPRITE(MAWILE, gMonFrontPic_Mawile_),
	SPECIES_SPRITE(ARON, gMonFrontPic_Aron_),
	SPECIES_SPRITE(LAIRON, gMonFrontPic_Lairon_),
	SPECIES_SPRITE(AGGRON, gMonFrontPic_Aggron_),
	SPECIES_SPRITE(MEDITITE, gMonFrontPic_Meditite_),
	SPECIES_SPRITE(MEDICHAM, gMonFrontPic_Medicham_),
	SPECIES_SPRITE(ELECTRIKE, gMonFrontPic_Electrike_),
	SPECIES_SPRITE(MANECTRIC, gMonFrontPic_Manectric_),
	SPECIES_SPRITE(PLUSLE, gMonFrontPic_Plusle_),
	SPECIES_SPRITE(MINUN, gMonFrontPic_Minun_),
	SPECIES_SPRITE(VOLBEAT, gMonFrontPic_Volbeat_),
	SPECIES_SPRITE(ILLUMISE, gMonFrontPic_Illumise_),
	SPECIES_SPRITE(ROSELIA, gMonFrontPic_Roselia_),
	SPECIES_SPRITE(GULPIN, gMonFrontPic_Gulpin_),
	SPECIES_SPRITE(SWALOT, gMonFrontPic_Swalot_),
	SPECIES_SPRITE(CARVANHA, gMonFrontPic_Carvanha_),
	SPECIES_SPRITE(SHARPEDO, gMonFrontPic_Sharpedo_),
	SPECIES_SPRITE(WAILMER, gMonFrontPic_Wailmer_),
	SPECIES_SPRITE(WAILORD, gMonFrontPic_Wailord_),
	SPECIES_SPRITE(NUMEL, gMonFrontPic_Numel_),
	SPECIES_SPRITE(CAMERUPT, gMonFrontPic_Camerupt_),
	SPECIES_SPRITE(TORKOAL, gMonFrontPic_Torkoal_),
	SPECIES_SPRITE(SPOINK, gMonFrontPic_Spoink_),
	SPECIES_SPRITE(GRUMPIG, gMonFrontPic_Grumpig_),
	SPECIES_SPRITE(SPINDA, gMonFrontPic_Spinda_),
	SPECIES_SPRITE(TRAPINCH, gMonFrontPic_Trapinch_),
	SPECIES_SPRITE(VIBRAVA, gMonFrontPic_Vibrava_),
	SPECIES_SPRITE(FLYGON, gMonFrontPic_Flygon_),
	SPECIES_SPRITE(CACNEA, gMonFrontPic_Cacnea_),
	SPECIES_SPRITE(CACTURNE, gMonFrontPic_Cacturne_),
	SPECIES_SPRITE(SWABLU, gMonFrontPic_Swablu_),
	SPECIES_SPRITE(ALTARIA, gMonFrontPic_Altaria_),
	SPECIES_SPRITE(ZANGOOSE, gMonFrontPic_Zangoose_),
	SPECIES_SPRITE(SEVIPER, gMonFrontPic_Seviper_),
	SPECIES_SPRITE(LUNATONE, gMonFrontPic_Lunatone_),
	SPECIES_SPRITE(SOLROCK, gMonFrontPic_Solrock_),
	SPECIES_SPRITE(BARBOACH, gMonFrontPic_Barboach_),
	SPECIES_SPRITE(WHISCASH, gMonFrontPic_Whiscash_),
	SPECIES_SPRITE(CORPHISH, gMonFrontPic_Corphish_),
	SPECIES_SPRITE(CRAWDAUNT, gMonFrontPic_Crawdaunt_),
	SPECIES_SPRITE(BALTOY, gMonFrontPic_Baltoy_),
	SPECIES_SPRITE(CLAYDOL, gMonFrontPic_Claydol_),
	SPECIES_SPRITE(LILEEP, gMonFrontPic_Lileep_),
	SPECIES_SPRITE(CRADILY, gMonFrontPic_Cradily_),
	SPECIES_SPRITE(ANORITH, gMonFrontPic_Anorith_),
	SPECIES_SPRITE(ARMALDO, gMonFrontPic_Armaldo_),
	SPECIES_SPRITE(FEEBAS, gMonFrontPic_Feebas_),
	SPECIES_SPRITE(MILOTIC, gMonFrontPic_Milotic_),
	SPECIES_SPRITE(CASTFORM, gMonFrontPic_Castform_),
	SPECIES_SPRITE(KECLEON, gMonFrontPic_Kecleon_),
	SPECIES_SPRITE(SHUPPET, gMonFrontPic_Shuppet_),
	SPECIES_SPRITE(BANETTE, gMonFrontPic_Banette_),
	SPECIES_SPRITE(DUSKULL, gMonFrontPic_Duskull_),
	SPECIES_SPRITE(DUSCLOPS, gMonFrontPic_Dusclops_),
	SPECIES_SPRITE(TROPIUS, gMonFrontPic_Tropius_),
	SPECIES_SPRITE(CHIMECHO, gMonFrontPic_Chimecho_),
	SPECIES_SPRITE(ABSOL, gMonFrontPic_Absol_),
	SPECIES_SPRITE(WYNAUT, gMonFrontPic_Wynaut_),
	SPECIES_SPRITE(SNORUNT, gMonFrontPic_Snorunt_),
	SPECIES_SPRITE(GLALIE, gMonFrontPic_Glalie_),
	SPECIES_SPRITE(SPHEAL, gMonFrontPic_Spheal_),
	SPECIES_SPRITE(SEALEO, gMonFrontPic_Sealeo_),
	SPECIES_SPRITE(WALREIN, gMonFrontPic_Walrein_),
	SPECIES_SPRITE(CLAMPERL, gMonFrontPic_Clamperl_),
	SPECIES_SPRITE(HUNTAIL, gMonFrontPic_Huntail_),
	SPECIES_SPRITE(GOREBYSS, gMonFrontPic_Gorebyss_),
	SPECIES_SPRITE(RELICANTH, gMonFrontPic_Relicanth_),
	SPECIES_SPRITE(LUVDISC, gMonFrontPic_Luvdisc_),
	SPECIES_SPRITE(BAGON, gMonFrontPic_Bagon_),
	SPECIES_SPRITE(SHELGON, gMonFrontPic_Shelgon_),
	SPECIES_SPRITE(SALAMENCE, gMonFrontPic_Salamence_),
	SPECIES_SPRITE(BELDUM, gMonFrontPic_Beldum_),
	SPECIES_SPRITE(METANG, gMonFrontPic_Metang_),
	SPECIES_SPRITE(METAGROSS, gMonFrontPic_Metagross_),
	SPECIES_SPRITE(REGIROCK, gMonFrontPic_Regirock_),
	SPECIES_SPRITE(REGICE, gMonFrontPic_Regice_),
	SPECIES_SPRITE(REGISTEEL, gMonFrontPic_Registeel_),
	SPECIES_SPRITE(LATIAS, gMonFrontPic_Latias_),
	SPECIES_SPRITE(LATIOS, gMonFrontPic_Latios_),
	SPECIES_SPRITE(KYOGRE, gMonFrontPic_Kyogre_),
	SPECIES_SPRITE(GROUDON, gMonFrontPic_Groudon_),
	SPECIES_SPRITE(RAYQUAZA, gMonFrontPic_Rayquaza_),
	SPECIES_SPRITE(JIRACHI, gMonFrontPic_Jirachi_),
	SPECIES_SPRITE(DEOXYS, gMonFrontPic_Deoxys_),
	SPECIES_SPRITE(TURTWIG, gMonFrontPic_Turtwig_),
	SPECIES_SPRITE(GROTLE, gMonFrontPic_Grotle_),
	SPECIES_SPRITE(TORTERRA, gMonFrontPic_Torterra_),
	SPECIES_SPRITE(CHIMCHAR, gMonFrontPic_Chimchar_),
	SPECIES_SPRITE(MONFERNO, gMonFrontPic_Monferno_),
	SPECIES_SPRITE(INFERNAPE, gMonFrontPic_Infernape_),
	SPECIES_SPRITE(PIPLUP, gMonFrontPic_Piplup_),
	SPECIES_SPRITE(PRINPLUP, gMonFrontPic_Prinplup_),
	SPECIES_SPRITE(EMPOLEON, gMonFrontPic_Empoleon_),
	SPECIES_SPRITE(STARLY, gMonFrontPic_Starly_),
	SPECIES_SPRITE(STARAVIA, gMonFrontPic_Staravia_),
	SPECIES_SPRITE(STARAPTOR, gMonFrontPic_Staraptor_),
	SPECIES_SPRITE(BIDOOF, gMonFrontPic_Bidoof_),
	SPECIES_SPRITE(BIBAREL, gMonFrontPic_Bibarel_),
	SPECIES_SPRITE(KRICKETOT, gMonFrontPic_Kricketot_),
	SPECIES_SPRITE(KRICKETUNE, gMonFrontPic_Kricketune_),
	SPECIES_SPRITE(SHINX, gMonFrontPic_Shinx_),
	SPECIES_SPRITE(LUXIO, gMonFrontPic_Luxio_),
	SPECIES_SPRITE(LUXRAY, gMonFrontPic_Luxray_),
	SPECIES_SPRITE(BUDEW, gMonFrontPic_Budew_),
	SPECIES_SPRITE(ROSERADE, gMonFrontPic_Roserade_),
	SPECIES_SPRITE(CRANIDOS, gMonFrontPic_Cranidos_),
	SPECIES_SPRITE(RAMPARDOS, gMonFrontPic_Rampardos_),
	SPECIES_SPRITE(SHIELDON, gMonFrontPic_Shieldon_),
	SPECIES_SPRITE(BASTIODON, gMonFrontPic_Bastiodon_),
	SPECIES_SPRITE(BURMY, gMonFrontPic_Burmy_),
	SPECIES_SPRITE(WORMADAM, gMonFrontPic_Wormadam_),
	SPECIES_SPRITE(MOTHIM, gMonFrontPic_Mothim_),
	SPECIES_SPRITE(COMBEE, gMonFrontPic_Combee_),
	SPECIES_SPRITE(VESPIQUEN, gMonFrontPic_Vespiquen_),
	SPECIES_SPRITE(PACHIRISU, gMonFrontPic_Pachirisu_),
	SPECIES_SPRITE(BUIZEL, gMonFrontPic_Buizel_),
	SPECIES_SPRITE(FLOATZEL, gMonFrontPic_Floatzel_),
	SPECIES_SPRITE(CHERUBI, gMonFrontPic_Cherubi_),
	SPECIES_SPRITE(CHERRIM, gMonFrontPic_Cherrim_),
	SPECIES_SPRITE(SHELLOS, gMonFrontPic_Shellos_),
	SPECIES_SPRITE(GASTRODON, gMonFrontPic_Gastrodon_),
	SPECIES_SPRITE(AMBIPOM, gMonFrontPic_Ambipom_),
	SPECIES_SPRITE(DRIFLOON, gMonFrontPic_Drifloon_),
	SPECIES_SPRITE(DRIFBLIM, gMonFrontPic_Drifblim_),
	SPECIES_SPRITE(BUNEARY, gMonFrontPic_Buneary_),
	SPECIES_SPRITE(LOPUNNY, gMonFrontPic_Lopunny_),
	SPECIES_SPRITE(MISMAGIUS, gMonFrontPic_Mismagius_),
	SPECIES_SPRITE(HONCHKROW, gMonFrontPic_Honchkrow_),
	SPECIES_SPRITE(GLAMEOW, gMonFrontPic_Glameow_),
	SPECIES_SPRITE(PURUGLY, gMonFrontPic_Purugly_),
	SPECIES_SPRITE(CHINGLING, gMonFrontPic_Chingling_),
	SPECIES_SPRITE(STUNKY, gMonFrontPic_Stunky_),
	SPECIES_SPRITE(SKUNTANK, gMonFrontPic_Skuntank_),
	SPECIES_SPRITE(BRONZOR, gMonFrontPic_Bronzor_),
	SPECIES_SPRITE(BRONZONG, gMonFrontPic_Bronzong_),
	SPECIES_SPRITE(BONSLY, gMonFrontPic_Bonsly_),
	SPECIES_SPRITE(MIMEJR, gMonFrontPic_MimeJr_),
	SPECIES_SPRITE(HAPPINY, gMonFrontPic_Happiny_),
	SPECIES_SPRITE(CHATOT, gMonFrontPic_Chatot_),
	SPECIES_SPRITE(SPIRITOMB, gMonFrontPic_Spiritomb_),
	SPECIES_SPRITE(GIBLE, gMonFrontPic_Gible_),
	SPECIES_SPRITE(GABITE, gMonFrontPic_Gabite_),
	SPECIES_SPRITE(GARCHOMP, gMonFrontPic_Garchomp_),
	SPECIES_SPRITE(MUNCHLAX, gMonFrontPic_Munchlax_),
	SPECIES_SPRITE(RIOLU, gMonFrontPic_Riolu_),
	SPECIES_SPRITE(LUCARIO, gMonFrontPic_Lucario_),
	SPECIES_SPRITE(HIPPOPOTAS, gMonFrontPic_Hippopotas_),
	SPECIES_SPRITE(HIPPOWDON, gMonFrontPic_Hippowdon_),
	SPECIES_SPRITE(SKORUPI, gMonFrontPic_Skorupi_),
	SPECIES_SPRITE(DRAPION, gMonFrontPic_Drapion_),
	SPECIES_SPRITE(CROAGUNK, gMonFrontPic_Croagunk_),
	SPECIES_SPRITE(TOXICROAK, gMonFrontPic_Toxicroak_),
	SPECIES_SPRITE(CARNIVINE, gMonFrontPic_Carnivine_),
	SPECIES_SPRITE(FINNEON, gMonFrontPic_Finneon_),
	SPECIES_SPRITE(LUMINEON, gMonFrontPic_Lumineon_),
	SPECIES_SPRITE(MANTYKE, gMonFrontPic_Mantyke_),
	SPECIES_SPRITE(SNOVER, gMonFrontPic_Snover_),
	SPECIES_SPRITE(ABOMASNOW, gMonFrontPic_Abomasnow_),
	SPECIES_SPRITE(WEAVILE, gMonFrontPic_Weavile_),
	SPECIES_SPRITE(MAGNEZONE, gMonFrontPic_Magnezone_),
	SPECIES_SPRITE(LICKILICKY, gMonFrontPic_Lickilicky_),
	SPECIES_SPRITE(RHYPERIOR, gMonFrontPic_Rhyperior_),
	SPECIES_SPRITE(TANGROWTH, gMonFrontPic_Tangrowth_),
	SPECIES_SPRITE(ELECTIVIRE, gMonFrontPic_Electivire_),
	SPECIES_SPRITE(MAGMORTAR, gMonFrontPic_Magmortar_),
	SPECIES_SPRITE(TOGEKISS, gMonFrontPic_Togekiss_),
	SPECIES_SPRITE(YANMEGA, gMonFrontPic_Yanmega_),
	SPECIES_SPRITE(LEAFEON, gMonFrontPic_Leafeon_),
	SPECIES_SPRITE(GLACEON, gMonFrontPic_Glaceon_),
	SPECIES_SPRITE(GLISCOR, gMonFrontPic_Gliscor_),
	SPECIES_SPRITE(MAMOSWINE, gMonFrontPic_Mamoswine_),
	SPECIES_SPRITE(PORYGONZ, gMonFrontPic_PorygonZ_),
	SPECIES_SPRITE(GALLADE, gMonFrontPic_Gallade_),
	SPECIES_SPRITE(PROBOPASS, gMonFrontPic_Probopass_),
	SPECIES_SPRITE(DUSKNOIR, gMonFrontPic_Dusknoir_),
	SPECIES_SPRITE(FROSLASS, gMonFrontPic_Froslass_),
	SPECIES_SPRITE(ROTOM, gMonFrontPic_Rotom_),
	SPECIES_SPRITE(UXIE, gMonFrontPic_Uxie_),
	SPECIES_SPRITE(MESPRIT, gMonFrontPic_Mesprit_),
	SPECIES_SPRITE(AZELF, gMonFrontPic_Azelf_),
	SPECIES_SPRITE(DIALGA, gMonFrontPic_Dialga_),
	SPECIES_SPRITE(PALKIA, gMonFrontPic_Palkia_),
	SPECIES_SPRITE(HEATRAN, gMonFrontPic_Heatran_),
	SPECIES_SPRITE(REGIGIGAS, gMonFrontPic_Regigigas_),
	SPECIES_SPRITE(GIRATINA, gMonFrontPic_Giratina_),
	SPECIES_SPRITE(CRESSELIA, gMonFrontPic_Cresselia_),
	SPECIES_SPRITE(PHIONE, gMonFrontPic_Phione_),
	SPECIES_SPRITE(MANAPHY, gMonFrontPic_Manaphy_),
	SPECIES_SPRITE(DARKRAI, gMonFrontPic_Darkrai_),
	SPECIES_SPRITE(SHAYMIN, gMonFrontPic_Shaymin_),
	SPECIES_SPRITE(ARCEUS, gMonFrontPic_Arceus_),
	SPECIES_SPRITE(VICTINI, gMonFrontPic_Victini_),
	SPECIES_SPRITE(SNIVY, gMonFrontPic_Snivy_),
	SPECIES_SPRITE(SERVINE, gMonFrontPic_Servine_),
	SPECIES_SPRITE(SERPERIOR, gMonFrontPic_Serperior_),
	SPECIES_SPRITE(TEPIG, gMonFrontPic_Tepig_),
	SPECIES_SPRITE(PIGNITE, gMonFrontPic_Pignite_),
	SPECIES_SPRITE(EMBOAR, gMonFrontPic_Emboar_),
	SPECIES_SPRITE(OSHAWOTT, gMonFrontPic_Oshawott_),
	SPECIES_SPRITE(DEWOTT, gMonFrontPic_Dewott_),
	SPECIES_SPRITE(SAMUROTT, gMonFrontPic_Samurott_),
	SPECIES_SPRITE(PATRAT, gMonFrontPic_Patrat_),
	SPECIES_SPRITE(WATCHOG, gMonFrontPic_Watchog_),
	SPECIES_SPRITE(LILLIPUP, gMonFrontPic_Lillipup_),
	SPECIES_SPRITE(HERDIER, gMonFrontPic_Herdier_),
	SPECIES_SPRITE(STOUTLAND, gMonFrontPic_Stoutland_),
	SPECIES_SPRITE(PURRLOIN, gMonFrontPic_Purrloin_),
	SPECIES_SPRITE(LIEPARD, gMonFrontPic_Liepard_),
	SPECIES_SPRITE(PANSAGE, gMonFrontPic_Pansage_),
	SPECIES_SPRITE(SIMISAGE, gMonFrontPic_Simisage_),
	SPECIES_SPRITE(PANSEAR, gMonFrontPic_Pansear_),
	SPECIES_SPRITE(SIMISEAR, gMonFrontPic_Simisear_),
	SPECIES_SPRITE(PANPOUR, gMonFrontPic_Panpour_),
	SPECIES_SPRITE(SIMIPOUR, gMonFrontPic_Simipour_),
	SPECIES_SPRITE(MUNNA, gMonFrontPic_Munna_),
	SPECIES_SPRITE(MUSHARNA, gMonFrontPic_Musharna_),
	SPECIES_SPRITE(PIDOVE, gMonFrontPic_Pidove_),
	SPECIES_SPRITE(TRANQUILL, gMonFrontPic_Tranquill_),
	SPECIES_SPRITE(UNFEZANT, gMonFrontPic_Unfezant_),
	SPECIES_SPRITE(BLITZLE, gMonFrontPic_Blitzle_),
	SPECIES_SPRITE(ZEBSTRIKA, gMonFrontPic_Zebstrika_),
	SPECIES_SPRITE(ROGGENROLA, gMonFrontPic_Roggenrola_),
	SPECIES_SPRITE(BOLDORE, gMonFrontPic_Boldore_),
	SPECIES_SPRITE(GIGALITH, gMonFrontPic_Gigalith_),
	SPECIES_SPRITE(WOOBAT, gMonFrontPic_Woobat_),
	SPECIES_SPRITE(SWOOBAT, gMonFrontPic_Swoobat_),
	SPECIES_SPRITE(DRILBUR, gMonFrontPic_Drilbur_),
	SPECIES_SPRITE(EXCADRILL, gMonFrontPic_Excadrill_),
	SPECIES_SPRITE(AUDINO, gMonFrontPic_Audino_),
	SPECIES_SPRITE(TIMBURR, gMonFrontPic_Timburr_),
	SPECIES_SPRITE(GURDURR, gMonFrontPic_Gurdurr_),
	SPECIES_SPRITE(CONKELDURR, gMonFrontPic_Conkeldurr_),
	SPECIES_SPRITE(TYMPOLE, gMonFrontPic_Tympole_),
	SPECIES_SPRITE(PALPITOAD, gMonFrontPic_Palpitoad_),
	SPECIES_SPRITE(SEISMITOAD, gMonFrontPic_Seismitoad_),
	SPECIES_SPRITE(THROH, gMonFrontPic_Throh_),
	SPECIES_SPRITE(SAWK, gMonFrontPic_Sawk_),
	SPECIES_SPRITE(SEWADDLE, gMonFrontPic_Sewaddle_),
	SPECIES_SPRITE(SWADLOON, gMonFrontPic_Swadloon_),
	SPECIES_SPRITE(LEAVANNY, gMonFrontPic_Leavanny_),
	SPECIES_SPRITE(VENIPEDE, gMonFrontPic_Venipede_),
	SPECIES_SPRITE(WHIRLIPEDE, gMonFrontPic_Whirlipede_),
	SPECIES_SPRITE(SCOLIPEDE, gMonFrontPic_Scolipede_),
	SPECIES_SPRITE(COTTONEE, gMonFrontPic_Cottonee_),
	SPECIES_SPRITE(WHIMSICOTT, gMonFrontPic_Whimsicott_),
	SPECIES_SPRITE(PETILIL, gMonFrontPic_Petilil_),
	SPECIES_SPRITE(LILLIGANT, gMonFrontPic_Lilligant_),
	SPECIES_SPRITE(BASCULIN, gMonFrontPic_Basculin_),
	SPECIES_SPRITE(SANDILE, gMonFrontPic_Sandile_),
	SPECIES_SPRITE(KROKOROK, gMonFrontPic_Krokorok_),
	SPECIES_SPRITE(KROOKODILE, gMonFrontPic_Krookodile_),
	SPECIES_SPRITE(DARUMAKA, gMonFrontPic_Darumaka_),
	SPECIES_SPRITE(DARMANITAN, gMonFrontPic_Darmanitan_),
	SPECIES_SPRITE(MARACTUS, gMonFrontPic_Maractus_),
	SPECIES_SPRITE(DWEBBLE, gMonFrontPic_Dwebble_),
	SPECIES_SPRITE(CRUSTLE, gMonFrontPic_Crustle_),
	SPECIES_SPRITE(SCRAGGY, gMonFrontPic_Scraggy_),
	SPECIES_SPRITE(SCRAFTY, gMonFrontPic_Scrafty_),
	SPECIES_SPRITE(SIGILYPH, gMonFrontPic_Sigilyph_),
	SPECIES_SPRITE(YAMASK, gMonFrontPic_Yamask_),
	SPECIES_SPRITE(COFAGRIGUS, gMonFrontPic_Cofagrigus_),
	SPECIES_SPRITE(TIRTOUGA, gMonFrontPic_Tirtouga_),
	SPECIES_SPRITE(CARRACOSTA, gMonFrontPic_Carracosta_),
	SPECIES_SPRITE(ARCHEN, gMonFrontPic_Archen_),
	SPECIES_SPRITE(ARCHEOPS, gMonFrontPic_Archeops_),
	SPECIES_SPRITE(TRUBBISH, gMonFrontPic_Trubbish_),
	SPECIES_SPRITE(GARBODOR, gMonFrontPic_Garbodor_),
	SPECIES_SPRITE(ZORUA, gMonFrontPic_Zorua_),
	SPECIES_SPRITE(ZOROARK, gMonFrontPic_Zoroark_),
	SPECIES_SPRITE(MINCCINO, gMonFrontPic_Minccino_),
	SPECIES_SPRITE(CINCCINO, gMonFrontPic_Cinccino_),
	SPECIES_SPRITE(GOTHITA, gMonFrontPic_Gothita_),
	SPECIES_SPRITE(GOTHORITA, gMonFrontPic_Gothorita_),
	SPECIES_SPRITE(GOTHITELLE, gMonFrontPic_Gothitelle_),
	SPECIES_SPRITE(SOLOSIS, gMonFrontPic_Solosis_),
	SPECIES_SPRITE(DUOSION, gMonFrontPic_Duosion_),
	SPECIES_SPRITE(REUNICLUS, gMonFrontPic_Reuniclus_),
	SPECIES_SPRITE(DUCKLETT, gMonFrontPic_Ducklett_),
	SPECIES_SPRITE(SWANNA, gMonFrontPic_Swanna_),
	SPECIES_SPRITE(VANILLITE, gMonFrontPic_Vanillite_),
	SPECIES_SPRITE(VANILLISH, gMonFrontPic_Vanillish_),
	SPECIES_SPRITE(VANILLUXE, gMonFrontPic_Vanilluxe_),
	SPECIES_SPRITE(DEERLING, gMonFrontPic_Deerling_),
	SPECIES_SPRITE(SAWSBUCK, gMonFrontPic_Sawsbuck_),
	SPECIES_SPRITE(EMOLGA, gMonFrontPic_Emolga_),
	SPECIES_SPRITE(KARRABLAST, gMonFrontPic_Karrablast_),
	SPECIES_SPRITE(ESCAVALIER, gMonFrontPic_Escavalier_),
	SPECIES_SPRITE(FOONGUS, gMonFrontPic_Foongus_),
	SPECIES_SPRITE(AMOONGUSS, gMonFrontPic_Amoonguss_),
	SPECIES_SPRITE(FRILLISH, gMonFrontPic_Frillish_),
	SPECIES_SPRITE(JELLICENT, gMonFrontPic_Jellicent_),
	SPECIES_SPRITE(ALOMOMOLA, gMonFrontPic_Alomomola_),
	SPECIES_SPRITE(JOLTIK, gMonFrontPic_Joltik_),
	SPECIES_SPRITE(GALVANTULA, gMonFrontPic_Galvantula_),
	SPECIES_SPRITE(FERROSEED, gMonFrontPic_Ferroseed_),
	SPECIES_SPRITE(FERROTHORN, gMonFrontPic_Ferrothorn_),
	SPECIES_SPRITE(KLINK, gMonFrontPic_Klink_),
	SPECIES_SPRITE(KLANG, gMonFrontPic_Klang_),
	SPECIES_SPRITE(KLINKLANG, gMonFrontPic_Klinklang_),
	SPECIES_SPRITE(TYNAMO, gMonFrontPic_Tynamo_),
	SPECIES_SPRITE(EELEKTRIK, gMonFrontPic_Eelektrik_),
	SPECIES_SPRITE(EELEKTROSS, gMonFrontPic_Eelektross_),
	SPECIES_SPRITE(ELGYEM, gMonFrontPic_Elgyem_),
	SPECIES_SPRITE(BEHEEYEM, gMonFrontPic_Beheeyem_),
	SPECIES_SPRITE(LITWICK, gMonFrontPic_Litwick_),
	SPECIES_SPRITE(LAMPENT, gMonFrontPic_Lampent_),
	SPECIES_SPRITE(CHANDELURE, gMonFrontPic_Chandelure_),
	SPECIES_SPRITE(AXEW, gMonFrontPic_Axew_),
	SPECIES_SPRITE(FRAXURE, gMonFrontPic_Fraxure_),
	SPECIES_SPRITE(HAXORUS, gMonFrontPic_Haxorus_),
	SPECIES_SPRITE(CUBCHOO, gMonFrontPic_Cubchoo_),
	SPECIES_SPRITE(BEARTIC, gMonFrontPic_Beartic_),
	SPECIES_SPRITE(CRYOGONAL, gMonFrontPic_Cryogonal_),
	SPECIES_SPRITE(SHELMET, gMonFrontPic_Shelmet_),
	SPECIES_SPRITE(ACCELGOR, gMonFrontPic_Accelgor_),
	SPECIES_SPRITE(STUNFISK, gMonFrontPic_Stunfisk_),
	SPECIES_SPRITE(MIENFOO, gMonFrontPic_Mienfoo_),
	SPECIES_SPRITE(MIENSHAO, gMonFrontPic_Mienshao_),
	SPECIES_SPRITE(DRUDDIGON, gMonFrontPic_Druddigon_),
	SPECIES_SPRITE(GOLETT, gMonFrontPic_Golett_),
	SPECIES_SPRITE(GOLURK, gMonFrontPic_Golurk_),
	SPECIES_SPRITE(PAWNIARD, gMonFrontPic_Pawniard_),
	SPECIES_SPRITE(BISHARP, gMonFrontPic_Bisharp_),
	SPECIES_SPRITE(BOUFFALANT, gMonFrontPic_Bouffalant_),
	SPECIES_SPRITE(RUFFLET, gMonFrontPic_Rufflet_),
	SPECIES_SPRITE(BRAVIARY, gMonFrontPic_Braviary_),
	SPECIES_SPRITE(VULLABY, gMonFrontPic_Vullaby_),
	SPECIES_SPRITE(MANDIBUZZ, gMonFrontPic_Mandibuzz_),
	SPECIES_SPRITE(HEATMOR, gMonFrontPic_Heatmor_),
	SPECIES_SPRITE(DURANT, gMonFrontPic_Durant_),
	SPECIES_SPRITE(DEINO, gMonFrontPic_Deino_),
	SPECIES_SPRITE(ZWEILOUS, gMonFrontPic_Zweilous_),
	SPECIES_SPRITE(HYDREIGON, gMonFrontPic_Hydreigon_),
	SPECIES_SPRITE(LARVESTA, gMonFrontPic_Larvesta_),
	SPECIES_SPRITE(VOLCARONA, gMonFrontPic_Volcarona_),
	SPECIES_SPRITE(COBALION, gMonFrontPic_Cobalion_),
	SPECIES_SPRITE(TERRAKION, gMonFrontPic_Terrakion_),
	SPECIES_SPRITE(VIRIZION, gMonFrontPic_Virizion_),
	SPECIES_SPRITE(TORNADUS, gMonFrontPic_Tornadus_),
	SPECIES_SPRITE(THUNDURUS, gMonFrontPic_Thundurus_),
	SPECIES_SPRITE(RESHIRAM, gMonFrontPic_Reshiram_),
	SPECIES_SPRITE(ZEKROM, gMonFrontPic_Zekrom_),
	SPECIES_SPRITE(LANDORUS, gMonFrontPic_Landorus_),
	SPECIES_SPRITE(KYUREM, gMonFrontPic_Kyurem_),
	SPECIES_SPRITE(KELDEO, gMonFrontPic_Keldeo_),
	SPECIES_SPRITE(MELOETTA, gMonFrontPic_Meloetta_),
	SPECIES_SPRITE(GENESECT, gMonFrontPic_Genesect_),
	SPECIES_SPRITE(CHESPIN, gMonFrontPic_Chespin_),
	SPECIES_SPRITE(QUILLADIN, gMonFrontPic_Quilladin_),
	SPECIES_SPRITE(CHESNAUGHT, gMonFrontPic_Chesnaught_),
	SPECIES_SPRITE(FENNEKIN, gMonFrontPic_Fennekin_),
	SPECIES_SPRITE(BRAIXEN, gMonFrontPic_Braixen_),
	SPECIES_SPRITE(DELPHOX, gMonFrontPic_Delphox_),
	SPECIES_SPRITE(FROAKIE, gMonFrontPic_Froakie_),
	SPECIES_SPRITE(FROGADIER, gMonFrontPic_Frogadier_),
	SPECIES_SPRITE(GRENINJA, gMonFrontPic_Greninja_),
	SPECIES_SPRITE(BUNNELBY, gMonFrontPic_Bunnelby_),
	SPECIES_SPRITE(DIGGERSBY, gMonFrontPic_Diggersby_),
	SPECIES_SPRITE(FLETCHLING, gMonFrontPic_Fletchling_),
	SPECIES_SPRITE(FLECHINDER, gMonFrontPic_Flechinder_),
	SPECIES_SPRITE(TALONFLAME, gMonFrontPic_Talonflame_),
	SPECIES_SPRITE(SCATTERBUG, gMonFrontPic_Scatterbug_),
	SPECIES_SPRITE(SPEWPA, gMonFrontPic_Spewpa_),
	SPECIES_SPRITE(VIVILLON, gMonFrontPic_Vivillon_),
	SPECIES_SPRITE(LITLEO, gMonFrontPic_Litleo_),
	SPECIES_SPRITE(PYROAR, gMonFrontPic_Pyroar_),
	SPECIES_SPRITE(FLABEBE, gMonFrontPic_Flabebe_),
	SPECIES_SPRITE(FLOETTE, gMonFrontPic_Floette_),
	SPECIES_SPRITE(FLORGES, gMonFrontPic_Florges_),
	SPECIES_SPRITE(SKIDDO, gMonFrontPic_Skiddo_),
	SPECIES_SPRITE(GOGOAT, gMonFrontPic_Gogoat_),
	SPECIES_SPRITE(PANCHAM, gMonFrontPic_Pancham_),
	SPECIES_SPRITE(PANGORO, gMonFrontPic_Pangoro_),
	SPECIES_SPRITE(FURFROU, gMonFrontPic_Furfrou_),
	SPECIES_SPRITE(ESPURR, gMonFrontPic_Espurr_),
	SPECIES_SPRITE(MEOWSTIC, gMonFrontPic_Meowstic_),
	SPECIES_SPRITE(HONEDGE, gMonFrontPic_Honedge_),
	SPECIES_SPRITE(DOUBLADE, gMonFrontPic_Doublade_),
	SPECIES_SPRITE(AEGISLASH, gMonFrontPic_Aegislash_),
	SPECIES_SPRITE(SPRITZEE, gMonFrontPic_Spritzee_),
	SPECIES_SPRITE(AROMATISSE, gMonFrontPic_Aromatisse_),
	SPECIES_SPRITE(SWIRLIX, gMonFrontPic_Swirlix_),
	SPECIES_SPRITE(SLURPUFF, gMonFrontPic_Slurpuff_),
	SPECIES_SPRITE(INKAY, gMonFrontPic_Inkay_),
	SPECIES_SPRITE(MALAMAR, gMonFrontPic_Malamar_),
	SPECIES_SPRITE(BINACLE, gMonFrontPic_Binacle_),
	SPECIES_SPRITE(BARBARACLE, gMonFrontPic_Barbaracle_),
	SPECIES_SPRITE(SKRELP, gMonFrontPic_Skrelp_),
	SPECIES_SPRITE(DRAGALGE, gMonFrontPic_Dragalge_),
	SPECIES_SPRITE(CLAUNCHER, gMonFrontPic_Clauncher_),
	SPECIES_SPRITE(CLAWITZER, gMonFrontPic_Clawitzer_),
	SPECIES_SPRITE(HELIOPTILE, gMonFrontPic_Helioptile_),
	SPECIES_SPRITE(HELIOLISK, gMonFrontPic_Heliolisk_),
	SPECIES_SPRITE(TYRUNT, gMonFrontPic_Tyrunt_),
	SPECIES_SPRITE(TYRANTRUM, gMonFrontPic_Tyrantrum_),
	SPECIES_SPRITE(AMAURA, gMonFrontPic_Amaura_),
	SPECIES_SPRITE(AURORUS, gMonFrontPic_Aurorus_),
	SPECIES_SPRITE(SYLVEON, gMonFrontPic_Sylveon_),
	SPECIES_SPRITE(HAWLUCHA, gMonFrontPic_Hawlucha_),
	SPECIES_SPRITE(DEDENNE, gMonFrontPic_Dedenne_),
	SPECIES_SPRITE(CARBINK, gMonFrontPic_Carbink_),
	SPECIES_SPRITE(GOOMY, gMonFrontPic_Goomy_),
	SPECIES_SPRITE(SLIGGOO, gMonFrontPic_Sliggoo_),
	SPECIES_SPRITE(GOODRA, gMonFrontPic_Goodra_),
	SPECIES_SPRITE(KLEFKI, gMonFrontPic_Klefki_),
	SPECIES_SPRITE(PHANTUMP, gMonFrontPic_Phantump_),
	SPECIES_SPRITE(TREVENANT, gMonFrontPic_Trevenant_),
	SPECIES_SPRITE(PUMPKABOO, gMonFrontPic_Pumpkaboo_),
	SPECIES_SPRITE(GOURGEIST, gMonFrontPic_Gourgeist_),
	SPECIES_SPRITE(BERGMITE, gMonFrontPic_Bergmite_),
	SPECIES_SPRITE(AVALUGG, gMonFrontPic_Avalugg_),
	SPECIES_SPRITE(NOIBAT, gMonFrontPic_Noibat_),
	SPECIES_SPRITE(NOIVERN, gMonFrontPic_Noivern_),
	SPECIES_SPRITE(XERNEAS, gMonFrontPic_Xerneas_),
	SPECIES_SPRITE(YVELTAL, gMonFrontPic_Yveltal_),
	SPECIES_SPRITE(ZYGARDE, gMonFrontPic_Zygarde_),
	SPECIES_SPRITE(DIANCIE, gMonFrontPic_Diancie_),
	SPECIES_SPRITE(HOOPA, gMonFrontPic_Hoopa_),
	SPECIES_SPRITE(VOLCANION, gMonFrontPic_Volcanion_),
	SPECIES_SPRITE(ROWLET, gMonFrontPic_Rowlet_),
	SPECIES_SPRITE(DARTRIX, gMonFrontPic_Dartrix_),
	SPECIES_SPRITE(DECIDUEYE, gMonFrontPic_Decidueye_),
	SPECIES_SPRITE(LITTEN, gMonFrontPic_Litten_),
	SPECIES_SPRITE(TORRACAT, gMonFrontPic_Torracat_),
	SPECIES_SPRITE(INCINEROAR, gMonFrontPic_Incineroar_),
	SPECIES_SPRITE(POPPLIO, gMonFrontPic_Popplio_),
	SPECIES_SPRITE(BRIONNE, gMonFrontPic_Brionne_),
	SPECIES_SPRITE(PRIMARINA, gMonFrontPic_Primarina_),
	SPECIES_SPRITE(PIKIPEK, gMonFrontPic_Pikipek_),
	SPECIES_SPRITE(TRUMBEAK, gMonFrontPic_Trumbeak_),
	SPECIES_SPRITE(TOUCANNON, gMonFrontPic_Toucannon_),
	SPECIES_SPRITE(YUNGOOS, gMonFrontPic_Yungoos_),
	SPECIES_SPRITE(GUMSHOOS, gMonFrontPic_Gumshoos_),
	SPECIES_SPRITE(GRUBBIN, gMonFrontPic_Grubbin_),
	SPECIES_SPRITE(CHARJABUG, gMonFrontPic_Charjabug_),
	SPECIES_SPRITE(VIKAVOLT, gMonFrontPic_Vikavolt_),
	SPECIES_SPRITE(CRABRAWLER, gMonFrontPic_Crabrawler_),
	SPECIES_SPRITE(CRABMINABL, gMonFrontPic_Crabminabl_),
	SPECIES_SPRITE(ORICORIO, gMonFrontPic_Oricorio_),
	SPECIES_SPRITE(CUTIEFLY, gMonFrontPic_Cutiefly_),
	SPECIES_SPRITE(RIBOMBEE, gMonFrontPic_Ribombee_),
	SPECIES_SPRITE(ROCKRUFF, gMonFrontPic_Rockruff_),
	SPECIES_SPRITE(LYCANROC, gMonFrontPic_Lycanroc_),
	SPECIES_SPRITE(WISHIWASHI, gMonFrontPic_Wishiwashi_),
	SPECIES_SPRITE(MAREANIE, gMonFrontPic_Mareanie_),
	SPECIES_SPRITE(TOXAPEX, gMonFrontPic_Toxapex_),
	SPECIES_SPRITE(MUDBRAY, gMonFrontPic_Mudbray_),
	SPECIES_SPRITE(MUDSDALE, gMonFrontPic_Mudsdale_),
	SPECIES_SPRITE(DEWPIDER, gMonFrontPic_Dewpider_),
	SPECIES_SPRITE(ARAQUANID, gMonFrontPic_Araquanid_),
	SPECIES_SPRITE(FOMANTIS, gMonFrontPic_Fomantis_),
	SPECIES_SPRITE(LURANTIS, gMonFrontPic_Lurantis_),
	SPECIES_SPRITE(MORELULL, gMonFrontPic_Morelull_),
	SPECIES_SPRITE(SHIINOTIC, gMonFrontPic_Shiinotic_),
	SPECIES_SPRITE(SALANDIT, gMonFrontPic_Salandit_),
	SPECIES_SPRITE(SALAZZLE, gMonFrontPic_Salazzle_),
	SPECIES_SPRITE(STUFFUL, gMonFrontPic_Stufful_),
	SPECIES_SPRITE(BEWEAR, gMonFrontPic_Bewear_),
	SPECIES_SPRITE(BOUNSWEET, gMonFrontPic_Bounsweet_),
	SPECIES_SPRITE(STEENEE, gMonFrontPic_Steenee_),
	SPECIES_SPRITE(TSAREENA, gMonFrontPic_Tsareena_),
	SPECIES_SPRITE(COMFEY, gMonFrontPic_Comfey_),
	SPECIES_SPRITE(ORANGURU, gMonFrontPic_Oranguru_),
	SPECIES_SPRITE(PASSIMIAN, gMonFrontPic_Passimian_),
	SPECIES_SPRITE(WIMPOD, gMonFrontPic_Wimpod_),
	SPECIES_SPRITE(GOLISOPOD, gMonFrontPic_Golisopod_),
	SPECIES_SPRITE(SANDYGAST, gMonFrontPic_Sandygast_),
	SPECIES_SPRITE(PALOSSAND, gMonFrontPic_Palossand_),
	SPECIES_SPRITE(PYUKUMUKU, gMonFrontPic_Pyukumuku_),
	SPECIES_SPRITE(TYPENULL, gMonFrontPic_TypeNull_),
	SPECIES_SPRITE(SILVALLY, gMonFrontPic_Silvally_),
	SPECIES_SPRITE(MINIOR, gMonFrontPic_Minior_),
	SPECIES_SPRITE(KOMALA, gMonFrontPic_Komala_),
	SPECIES_SPRITE(TURTONATOR, gMonFrontPic_Turtonator_),
	SPECIES_SPRITE(TOGEDEMARU, gMonFrontPic_Togedemaru_),
	SPECIES_SPRITE(MIMIKYU, gMonFrontPic_Mimikyu_),
	SPECIES_SPRITE(BRUXISH, gMonFrontPic_Bruxish_),
	SPECIES_SPRITE(DRAMPA, gMonFrontPic_Drampa_),
	SPECIES_SPRITE(DHELMISE, gMonFrontPic_Dhelmise_),
	SPECIES_SPRITE(JANGMOO, gMonFrontPic_Jangmoo_),
	SPECIES_SPRITE(HAKAMOO, gMonFrontPic_Hakamoo_),
	SPECIES_SPRITE(KOMMOO, gMonFrontPic_Kommoo_),
	SPECIES_SPRITE(TAPUKOKO, gMonFrontPic_TapuKoko_),
	SPECIES_SPRITE(TAPULELE, gMonFrontPic_TapuLele_),
	SPECIES_SPRITE(TAPUBULU, gMonFrontPic_TapuBulu_),
	SPECIES_SPRITE(TAPUFINI, gMonFrontPic_TapuFini_),
	SPECIES_SPRITE(COSMOG, gMonFrontPic_Cosmog_),
	SPECIES_SPRITE(COSMOEM, gMonFrontPic_Cosmoem_),
	SPECIES_SPRITE(SOLGALEO, gMonFrontPic_Solgaleo_),
	SPECIES_SPRITE(LUNALA, gMonFrontPic_Lunala_),
	SPECIES_SPRITE(NIHILEGO, gMonFrontPic_Nihilego_),
	SPECIES_SPRITE(BUZZWOLE, gMonFrontPic_Buzzwole_),
	SPECIES_SPRITE(PHEROMOSA, gMonFrontPic_Pheromosa_),
	SPECIES_SPRITE(XURKITREE, gMonFrontPic_Xurkitree_),
	SPECIES_SPRITE(CELESTEELA, gMonFrontPic_Celesteela_),
	SPECIES_SPRITE(KARTANA, gMonFrontPic_Kartana_),
	SPECIES_SPRITE(GUZZLORD, gMonFrontPic_Guzzlord_),
	SPECIES_SPRITE(NECROZMA, gMonFrontPic_Necrozma_),
	SPECIES_SPRITE(MAGEARNA, gMonFrontPic_Magearna_),
	SPECIES_SPRITE(MARSHADOW, gMonFrontPic_Marshadow_),
	SPECIES_SPRITE(POIPOLE, gMonFrontPic_Poipole_),
	SPECIES_SPRITE(NAGANADEL, gMonFrontPic_Naganadel_),
	SPECIES_SPRITE(STAKATAKA, gMonFrontPic_Stakataka_),
	SPECIES_SPRITE(BLACEPHALN, gMonFrontPic_Blacephaln_),
	SPECIES_SPRITE(ZERAORA, gMonFrontPic_Zeraora_),
	SPECIES_SPRITE(MELTAN, gMonFrontPic_Meltan_),
	SPECIES_SPRITE(MELMETAL, gMonFrontPic_Melmetal_),
	SPECIES_SPRITE(GROOKEY, gMonFrontPic_Grookey_),
	SPECIES_SPRITE(THWACKEY, gMonFrontPic_Thwackey_),
	SPECIES_SPRITE(RILLABOOM, gMonFrontPic_Rillaboom_),
	SPECIES_SPRITE(SCORBUNNY, gMonFrontPic_Scorbunny_),
	SPECIES_SPRITE(RABOOT, gMonFrontPic_Raboot_),
	SPECIES_SPRITE(CINDERACE, gMonFrontPic_Cinderace_),
	SPECIES_SPRITE(SOBBLE, gMonFrontPic_Sobble_),
	SPECIES_SPRITE(DRIZZILE, gMonFrontPic_Drizzile_),
	SPECIES_SPRITE(INTELEON, gMonFrontPic_Inteleon_),
	SPECIES_SPRITE(SKWOVET, gMonFrontPic_Skwovet_),
	SPECIES_SPRITE(GREEDENT, gMonFrontPic_Greedent_),
	SPECIES_SPRITE(ROOKIDEE, gMonFrontPic_Rookidee_),
	SPECIES_SPRITE(CORVISQUIR, gMonFrontPic_Corvisquir_),
	SPECIES_SPRITE(CORVIKNIGH, gMonFrontPic_Corviknigh_),
	SPECIES_SPRITE(BLIPBUG, gMonFrontPic_Blipbug_),
	SPECIES_SPRITE(DOTTLER, gMonFrontPic_Dottler_),
	SPECIES_SPRITE(ORBEETLE, gMonFrontPic_Orbeetle_),
	SPECIES_SPRITE(NICKIT, gMonFrontPic_Nickit_),
	SPECIES_SPRITE(THIEVUL, gMonFrontPic_Thievul_),
	SPECIES_SPRITE(GOSSIFLEUR, gMonFrontPic_Gossifleur_),
	SPECIES_SPRITE(ELDEGOSS, gMonFrontPic_Eldegoss_),
	SPECIES_SPRITE(WOOLOO, gMonFrontPic_Wooloo_),
	SPECIES_SPRITE(DUBWOOL, gMonFrontPic_Dubwool_),
	SPECIES_SPRITE(CHEWTLE, gMonFrontPic_Chewtle_),
	SPECIES_SPRITE(DREDNAW, gMonFrontPic_Drednaw_),
	SPECIES_SPRITE(YAMPER, gMonFrontPic_Yamper_),
	SPECIES_SPRITE(BOLTUND, gMonFrontPic_Boltund_),
	SPECIES_SPRITE(ROLYCOLY, gMonFrontPic_Rolycoly_),
	SPECIES_SPRITE(CARKOL, gMonFrontPic_Carkol_),
	SPECIES_SPRITE(COALOSSAL, gMonFrontPic_Coalossal_),
	SPECIES_SPRITE(APPLIN, gMonFrontPic_Applin_),
	SPECIES_SPRITE(FLAPPLE, gMonFrontPic_Flapple_),
	SPECIES_SPRITE(APPLETUN, gMonFrontPic_Appletun_),
	SPECIES_SPRITE(SILICOBRA, gMonFrontPic_Silicobra_),
	SPECIES_SPRITE(SANDACONDA, gMonFrontPic_Sandaconda_),
	SPECIES_SPRITE(CRAMORANT, gMonFrontPic_Cramorant_),
	SPECIES_SPRITE(ARROKUDA, gMonFrontPic_Arrokuda_),
	SPECIES_SPRITE(BARRASKEWD, gMonFrontPic_Barraskewd_),
	SPECIES_SPRITE(TOXEL, gMonFrontPic_Toxel_),
	SPECIES_SPRITE(TOXTRICITY, gMonFrontPic_Toxtricity_),
	SPECIES_SPRITE(SIZZLIPEDE, gMonFrontPic_Sizzlipede_),
	SPECIES_SPRITE(CENTISKORC, gMonFrontPic_Centiskorc_),
	SPECIES_SPRITE(CLOBBOPUS, gMonFrontPic_Clobbopus_),
	SPECIES_SPRITE(GRAPPLOCT, gMonFrontPic_Grapploct_),
	SPECIES_SPRITE(SINISTEA, gMonFrontPic_Sinistea_),
	SPECIES_SPRITE(POLTEAGEIS, gMonFrontPic_Polteageis_),
	SPECIES_SPRITE(HATENNA, gMonFrontPic_Hatenna_),
	SPECIES_SPRITE(HATTREM, gMonFrontPic_Hattrem_),
	SPECIES_SPRITE(HATTERENE, gMonFrontPic_Hatterene_),
	SPECIES_SPRITE(IMPIDIMP, gMonFrontPic_Impidimp_),
	SPECIES_SPRITE(MORGREM, gMonFrontPic_Morgrem_),
	SPECIES_SPRITE(GRIMMSNARL, gMonFrontPic_Grimmsnarl_),
	SPECIES_SPRITE(OBSTAGOON, gMonFrontPic_Obstagoon_),
	SPECIES_SPRITE(PERRSERKER, gMonFrontPic_Perrserker_),
	SPECIES_SPRITE(CURSOLA, gMonFrontPic_Cursola_),
	SPECIES_SPRITE(SIRFETCHD, gMonFrontPic_Sirfetchd_),
	SPECIES_SPRITE(MRRIME, gMonFrontPic_MrRime_),
	SPECIES_SPRITE(RUNERIGUS, gMonFrontPic_Runerigus_),
	SPECIES_SPRITE(MILCERY, gMonFrontPic_Milcery_),
	SPECIES_SPRITE(ALCREMIE, gMonFrontPic_Alcremie_),
	SPECIES_SPRITE(FALINKS, gMonFrontPic_Falinks_),
	SPECIES_SPRITE(PINCURCHIN, gMonFrontPic_Pincurchin_),
	SPECIES_SPRITE(SNOM, gMonFrontPic_Snom_),
	SPECIES_SPRITE(FROSMOTH, gMonFrontPic_Frosmoth_),
	SPECIES_SPRITE(STONJOURNE, gMonFrontPic_Stonjourne_),
	SPECIES_SPRITE(EISCUE, gMonFrontPic_Eiscue_),
	SPECIES_SPRITE(INDEEDEE, gMonFrontPic_Indeedee_),
	SPECIES_SPRITE(MORPEKO, gMonFrontPic_Morpeko_),
	SPECIES_SPRITE(CUFANT, gMonFrontPic_Cufant_),
	SPECIES_SPRITE(COPPERAJAH, gMonFrontPic_Copperajah_),
	SPECIES_SPRITE(DRACOZOLT, gMonFrontPic_Dracozolt_),
	SPECIES_SPRITE(ARCTOZOLT, gMonFrontPic_Arctozolt_),
	SPECIES_SPRITE(DRACOVISH, gMonFrontPic_Dracovish_),
	SPECIES_SPRITE(ARCTOVISH, gMonFrontPic_Arctovish_),
	SPECIES_SPRITE(DURALUDON, gMonFrontPic_Duraludon_),
	SPECIES_SPRITE(DREEPY, gMonFrontPic_Dreepy_),
	SPECIES_SPRITE(DRAKLOAK, gMonFrontPic_Drakloak_),
	SPECIES_SPRITE(DRAGAPULT, gMonFrontPic_Dragapult_),
	SPECIES_SPRITE(ZACIAN, gMonFrontPic_Zacian_),
	SPECIES_SPRITE(ZAMAZENTA, gMonFrontPic_Zamazenta_),
	SPECIES_SPRITE(ETERNATUS, gMonFrontPic_Eternatus_),
	SPECIES_SPRITE(KUBFU, gMonFrontPic_Kubfu_),
	SPECIES_SPRITE(URSHIFU, gMonFrontPic_Urshifu_),
	SPECIES_SPRITE(ZARUDE, gMonFrontPic_Zarude_),
	SPECIES_SPRITE(REGIELEKI, gMonFrontPic_Regieleki_),
	SPECIES_SPRITE(REGIDRAGO, gMonFrontPic_Regidrago_),
	SPECIES_SPRITE(GLASTRIER, gMonFrontPic_Glastrier_),
	SPECIES_SPRITE(SPECTRIER, gMonFrontPic_Spectrier_),
	SPECIES_SPRITE(CALYREX, gMonFrontPic_Calyrex_),
	SPECIES_SPRITE(WYRDEER, gMonFrontPic_Wyrdeer_),
	SPECIES_SPRITE(KLEAVOR, gMonFrontPic_Kleavor_),
	SPECIES_SPRITE(URSALUNA, gMonFrontPic_Ursaluna_),
	SPECIES_SPRITE(BSCULEGION, gMonFrontPic_Bsculegion_),
	SPECIES_SPRITE(SNEASLER, gMonFrontPic_Sneasler_),
	SPECIES_SPRITE(OVERQWIL, gMonFrontPic_Overqwil_),
	SPECIES_SPRITE(ENAMORUS, gMonFrontPic_Enamorus_),
	SPECIES_SPRITE(VENUSAUR_2, gMonFrontPic_Venusaur2_),
	SPECIES_SPRITE(CHARIZARD_2, gMonFrontPic_Charizard2_),
	SPECIES_SPRITE(CHARIZARD_3, gMonFrontPic_Charizard3_),
	SPECIES_SPRITE(BLASTOISE_2, gMonFrontPic_Blastoise2_),
	SPECIES_SPRITE(BEEDRILL_2, gMonFrontPic_Beedrill2_),
	SPECIES_SPRITE(PIDGEOT_2, gMonFrontPic_Pidgeot2_),
	SPECIES_SPRITE(ALAKAZAM_2, gMonFrontPic_Alakazam2_),
	SPECIES_SPRITE(SLOWBRO_2, gMonFrontPic_Slowbro2_),
	SPECIES_SPRITE(GENGAR_2, gMonFrontPic_Gengar2_),
	SPECIES_SPRITE(KANGASKHAN_2, gMonFrontPic_Kangaskhan2_),
	SPECIES_SPRITE(PINSIR_2, gMonFrontPic_Pinsir2_),
	SPECIES_SPRITE(GYARADOS_2, gMonFrontPic_Gyarados2_),
	SPECIES_SPRITE(AERODACTYL_2, gMonFrontPic_Aerodactyl2_),
	SPECIES_SPRITE(MEWTWO_2, gMonFrontPic_Mewtwo2_),
	SPECIES_SPRITE(MEWTWO_3, gMonFrontPic_Mewtwo3_),
	SPECIES_SPRITE(AMPHAROS_2, gMonFrontPic_Ampharos2_),
	SPECIES_SPRITE(STEELIX_2, gMonFrontPic_Steelix2_),
	SPECIES_SPRITE(SCIZOR_2, gMonFrontPic_Scizor2_),
	SPECIES_SPRITE(HERACROSS_2, gMonFrontPic_Heracross2_),
	SPECIES_SPRITE(HOUNDOOM_2, gMonFrontPic_Houndoom2_),
	SPECIES_SPRITE(TYRANITAR_2, gMonFrontPic_Tyranitar2_),
	SPECIES_SPRITE(SCEPTILE_2, gMonFrontPic_Sceptile2_),
	SPECIES_SPRITE(BLAZIKEN_2, gMonFrontPic_Blaziken2_),
	SPECIES_SPRITE(SWAMPERT_2, gMonFrontPic_Swampert2_),
	SPECIES_SPRITE(GARDEVOIR_2, gMonFrontPic_Gardevoir2_),
	SPECIES_SPRITE(SABLEYE_2, gMonFrontPic_Sableye2_),
	SPECIES_SPRITE(MAWILE_2, gMonFrontPic_Mawile2_),
	SPECIES_SPRITE(AGGRON_2, gMonFrontPic_Aggron2_),
	SPECIES_SPRITE(MEDICHAM_2, gMonFrontPic_Medicham2_),
	SPECIES_SPRITE(MANECTRIC_2, gMonFrontPic_Manectric2_),
	SPECIES_SPRITE(SHARPEDO_2, gMonFrontPic_Sharpedo2_),
	SPECIES_SPRITE(CAMERUPT_2, gMonFrontPic_Camerupt2_),
	SPECIES_SPRITE(ALTARIA_2, gMonFrontPic_Altaria2_),
	SPECIES_SPRITE(BANETTE_2, gMonFrontPic_Banette2_),
	SPECIES_SPRITE(ABSOL_2, gMonFrontPic_Absol2_),
	SPECIES_SPRITE(GLALIE_2, gMonFrontPic_Glalie2_),
	SPECIES_SPRITE(SALAMENCE_2, gMonFrontPic_Salamence2_),
	SPECIES_SPRITE(METAGROSS_2, gMonFrontPic_Metagross2_),
	SPECIES_SPRITE(LATIAS_2, gMonFrontPic_Latias2_),
	SPECIES_SPRITE(LATIOS_2, gMonFrontPic_Latios2_),
	SPECIES_SPRITE(LOPUNNY_2, gMonFrontPic_Lopunny2_),
	SPECIES_SPRITE(GARCHOMP_2, gMonFrontPic_Garchomp2_),
	SPECIES_SPRITE(LUCARIO_2, gMonFrontPic_Lucario2_),
	SPECIES_SPRITE(ABOMASNOW_2, gMonFrontPic_Abomasnow2_),
	SPECIES_SPRITE(GALLADE_2, gMonFrontPic_Gallade2_),
	SPECIES_SPRITE(AUDINO_2, gMonFrontPic_Audino2_),
	SPECIES_SPRITE(DIANCIE_2, gMonFrontPic_Diancie2_),
	SPECIES_SPRITE(RAYQUAZA_2, gMonFrontPic_Rayquaza2_),
	SPECIES_SPRITE(KYOGRE_2, gMonFrontPic_Kyogre2_),
	SPECIES_SPRITE(GROUDON_2, gMonFrontPic_Groudon2_),
	SPECIES_SPRITE(RATTATA_2, gMonFrontPic_Rattata2_),
	SPECIES_SPRITE(RATICATE_2, gMonFrontPic_Raticate2_),
	SPECIES_SPRITE(RAICHU_2, gMonFrontPic_Raichu2_),
	SPECIES_SPRITE(SANDSHREW_2, gMonFrontPic_Sandshrew2_),
	SPECIES_SPRITE(SANDSLASH_2, gMonFrontPic_Sandslash2_),
	SPECIES_SPRITE(VULPIX_2, gMonFrontPic_Vulpix2_),
	SPECIES_SPRITE(NINETALES_2, gMonFrontPic_Ninetales2_),
	SPECIES_SPRITE(DIGLETT_2, gMonFrontPic_Diglett2_),
	SPECIES_SPRITE(DUGTRIO_2, gMonFrontPic_Dugtrio2_),
	SPECIES_SPRITE(MEOWTH_2, gMonFrontPic_Meowth2_),
	SPECIES_SPRITE(PERSIAN_2, gMonFrontPic_Persian2_),
	SPECIES_SPRITE(GEODUDE_2, gMonFrontPic_Geodude2_),
	SPECIES_SPRITE(GRAVELER_2, gMonFrontPic_Graveler2_),
	SPECIES_SPRITE(GOLEM_2, gMonFrontPic_Golem2_),
	SPECIES_SPRITE(GRIMER_2, gMonFrontPic_Grimer2_),
	SPECIES_SPRITE(MUK_2, gMonFrontPic_Muk2_),
	SPECIES_SPRITE(EXEGGUTOR_2, gMonFrontPic_Exeggutor2_),
	SPECIES_SPRITE(MAROWAK_2, gMonFrontPic_Marowak2_),
	SPECIES_SPRITE(MEOWTH_3, gMonFrontPic_Meowth3_),
	SPECIES_SPRITE(PONYTA_2, gMonFrontPic_Ponyta2_),
	SPECIES_SPRITE(RAPIDASH_2, gMonFrontPic_Rapidash2_),
	SPECIES_SPRITE(SLOWPOKE_2, gMonFrontPic_Slowpoke2_),
	SPECIES_SPRITE(SLOWBRO_3, gMonFrontPic_Slowbro3_),
	SPECIES_SPRITE(FARFETCHD_2, gMonFrontPic_Farfetchd2_),
	SPECIES_SPRITE(WEEZING_2, gMonFrontPic_Weezing2_),
	SPECIES_SPRITE(MRMIME_2, gMonFrontPic_MrMime2_),
	SPECIES_SPRITE(ARTICUNO_2, gMonFrontPic_Articuno2_),
	SPECIES_SPRITE(ZAPDOS_2, gMonFrontPic_Zapdos2_),
	SPECIES_SPRITE(MOLTRES_2, gMonFrontPic_Moltres2_),
	SPECIES_SPRITE(SLOWKING_2, gMonFrontPic_Slowking2_),
	SPECIES_SPRITE(CORSOLA_2, gMonFrontPic_Corsola2_),
	SPECIES_SPRITE(ZIGZAGOON_2, gMonFrontPic_Zigzagoon2_),
	SPECIES_SPRITE(LINOONE_2, gMonFrontPic_Linoone2_),
	SPECIES_SPRITE(DARUMAKA_2, gMonFrontPic_Darumaka2_),
	SPECIES_SPRITE(DARMANITAN_2, gMonFrontPic_Darmanitan2_),
	SPECIES_SPRITE(YAMASK_2, gMonFrontPic_Yamask2_),
	SPECIES_SPRITE(STUNFISK_2, gMonFrontPic_Stunfisk2_),
	SPECIES_SPRITE(GROWLITHE_2, gMonFrontPic_Growlithe2_),
	SPECIES_SPRITE(ARCANINE_2, gMonFrontPic_Arcanine2_),
	SPECIES_SPRITE(VOLTORB_2, gMonFrontPic_Voltorb2_),
	SPECIES_SPRITE(ELECTRODE_2, gMonFrontPic_Electrode2_),
	SPECIES_SPRITE(TYPHLOSION_2, gMonFrontPic_Typhlosion2_),
	SPECIES_SPRITE(QWILFISH_2, gMonFrontPic_Qwilfish2_),
	SPECIES_SPRITE(SNEASEL_2, gMonFrontPic_Sneasel2_),
	SPECIES_SPRITE(SAMUROTT_2, gMonFrontPic_Samurott2_),
	SPECIES_SPRITE(LILLIGANT_2, gMonFrontPic_Lilligant2_),
	SPECIES_SPRITE(ZORUA_2, gMonFrontPic_Zorua2_),
	SPECIES_SPRITE(ZOROARK_2, gMonFrontPic_Zoroark2_),
	SPECIES_SPRITE(BRAVIARY_2, gMonFrontPic_Braviary2_),
	SPECIES_SPRITE(SLIGGOO_2, gMonFrontPic_Sliggoo2_),
	SPECIES_SPRITE(GOODRA_2, gMonFrontPic_Goodra2_),
	SPECIES_SPRITE(AVALUGG_2, gMonFrontPic_Avalugg2_),
	SPECIES_SPRITE(DECIDUEYE_2, gMonFrontPic_Decidueye2_),
	SPECIES_SPRITE(PIKACHU_2, gMonFrontPic_Pikachu2_),
	SPECIES_SPRITE(PIKACHU_3, gMonFrontPic_Pikachu3_),
	SPECIES_SPRITE(PIKACHU_4, gMonFrontPic_Pikachu4_),
	SPECIES_SPRITE(PIKACHU_5, gMonFrontPic_Pikachu5_),
	SPECIES_SPRITE(PIKACHU_6, gMonFrontPic_Pikachu6_),
	SPECIES_SPRITE(PIKACHU_7, gMonFrontPic_Pikachu7_),
	SPECIES_SPRITE(PIKACHU_8, gMonFrontPic_Pikachu8_),
	SPECIES_SPRITE(PIKACHU_9, gMonFrontPic_Pikachu9_),
	SPECIES_SPRITE(PIKACHU_10, gMonFrontPic_Pikachu10_),
	SPECIES_SPRITE(PIKACHU_11, gMonFrontPic_Pikachu11_),
	SPECIES_SPRITE(PIKACHU_12, gMonFrontPic_Pikachu12_),
	SPECIES_SPRITE(PIKACHU_13, gMonFrontPic_Pikachu13_),
	SPECIES_SPRITE(PIKACHU_14, gMonFrontPic_Pikachu14_),
	SPECIES_SPRITE(PIKACHU_15, gMonFrontPic_Pikachu15_),
	SPECIES_SPRITE(PICHU_2, gMonFrontPic_Pichu2_),
	SPECIES_SPRITE(CASTFORM_2, gMonFrontPic_Castform2_),
	SPECIES_SPRITE(CASTFORM_3, gMonFrontPic_Castform3_),
	SPECIES_SPRITE(CASTFORM_4, gMonFrontPic_Castform4_),
	SPECIES_SPRITE(DEOXYS_2, gMonFrontPic_Deoxys2_),
	SPECIES_SPRITE(DEOXYS_3, gMonFrontPic_Deoxys3_),
	SPECIES_SPRITE(DEOXYS_4, gMonFrontPic_Deoxys4_),
	SPECIES_SPRITE(BURMY_2, gMonFrontPic_Burmy2_),
	SPECIES_SPRITE(BURMY_3, gMonFrontPic_Burmy3_),
	SPECIES_SPRITE(WORMADAM_2, gMonFrontPic_Wormadam2_),
	SPECIES_SPRITE(WORMADAM_3, gMonFrontPic_Wormadam3_),
	SPECIES_SPRITE(CHERRIM_2, gMonFrontPic_Cherrim2_),
	SPECIES_SPRITE(SHELLOS_2, gMonFrontPic_Shellos2_),
	SPECIES_SPRITE(GASTRODON_2, gMonFrontPic_Gastrodon2_),
	SPECIES_SPRITE(ROTOM_2, gMonFrontPic_Rotom2_),
	SPECIES_SPRITE(ROTOM_3, gMonFrontPic_Rotom3_),
	SPECIES_SPRITE(ROTOM_4, gMonFrontPic_Rotom4_),
	SPECIES_SPRITE(ROTOM_5, gMonFrontPic_Rotom5_),
	SPECIES_SPRITE(ROTOM_6, gMonFrontPic_Rotom6_),
	SPECIES_SPRITE(DIALGA_2, gMonFrontPic_Dialga2_),
	SPECIES_SPRITE(PALKIA_2, gMonFrontPic_Palkia2_),
	SPECIES_SPRITE(GIRATINA_2, gMonFrontPic_Giratina2_),
	SPECIES_SPRITE(SHAYMIN_2, gMonFrontPic_Shaymin2_),
	SPECIES_SPRITE(ARCEUS_2, gMonFrontPic_Arceus2_),
	SPECIES_SPRITE(ARCEUS_3, gMonFrontPic_Arceus3_),
	SPECIES_SPRITE(ARCEUS_4, gMonFrontPic_Arceus4_),
	SPECIES_SPRITE(ARCEUS_5, gMonFrontPic_Arceus5_),
	SPECIES_SPRITE(ARCEUS_6, gMonFrontPic_Arceus6_),
	SPECIES_SPRITE(ARCEUS_7, gMonFrontPic_Arceus7_),
	SPECIES_SPRITE(ARCEUS_8, gMonFrontPic_Arceus8_),
	SPECIES_SPRITE(ARCEUS_9, gMonFrontPic_Arceus9_),
	SPECIES_SPRITE(ARCEUS_10, gMonFrontPic_Arceus10_),
	SPECIES_SPRITE(ARCEUS_11, gMonFrontPic_Arceus11_),
	SPECIES_SPRITE(ARCEUS_12, gMonFrontPic_Arceus12_),
	SPECIES_SPRITE(ARCEUS_13, gMonFrontPic_Arceus13_),
	SPECIES_SPRITE(ARCEUS_14, gMonFrontPic_Arceus14_),
	SPECIES_SPRITE(ARCEUS_15, gMonFrontPic_Arceus15_),
	SPECIES_SPRITE(ARCEUS_16, gMonFrontPic_Arceus16_),
	SPECIES_SPRITE(ARCEUS_17, gMonFrontPic_Arceus17_),
	SPECIES_SPRITE(ARCEUS_18, gMonFrontPic_Arceus18_),
	SPECIES_SPRITE(BASCULIN_2, gMonFrontPic_Basculin2_),
	SPECIES_SPRITE(BASCULIN_3, gMonFrontPic_Basculin3_),
	SPECIES_SPRITE(DARMANITAN_3, gMonFrontPic_Darmanitan3_),
	SPECIES_SPRITE(DARMANITAN_4, gMonFrontPic_Darmanitan4_),
	SPECIES_SPRITE(DEERLING_2, gMonFrontPic_Deerling2_),
	SPECIES_SPRITE(DEERLING_3, gMonFrontPic_Deerling3_),
	SPECIES_SPRITE(DEERLING_4, gMonFrontPic_Deerling4_),
	SPECIES_SPRITE(SAWSBUCK_2, gMonFrontPic_Sawsbuck2_),
	SPECIES_SPRITE(SAWSBUCK_3, gMonFrontPic_Sawsbuck3_),
	SPECIES_SPRITE(SAWSBUCK_4, gMonFrontPic_Sawsbuck4_),
	SPECIES_SPRITE(TORNADUS_2, gMonFrontPic_Tornadus2_),
	SPECIES_SPRITE(THUNDURUS_2, gMonFrontPic_Thundurus2_),
	SPECIES_SPRITE(LANDORUS_2, gMonFrontPic_Landorus2_),
	SPECIES_SPRITE(ENAMORUS_2, gMonFrontPic_Enamorus2_),
	SPECIES_SPRITE(KYUREM_2, gMonFrontPic_Kyurem2_),
	SPECIES_SPRITE(KYUREM_3, gMonFrontPic_Kyurem3_),
	SPECIES_SPRITE(KELDEO_2, gMonFrontPic_Keldeo2_),
	SPECIES_SPRITE(MELOETTA_2, gMonFrontPic_Meloetta2_),
	SPECIES_SPRITE(GENESECT_2, gMonFrontPic_Genesect2_),
	SPECIES_SPRITE(GENESECT_3, gMonFrontPic_Genesect3_),
	SPECIES_SPRITE(GENESECT_4, gMonFrontPic_Genesect4_),
	SPECIES_SPRITE(GENESECT_5, gMonFrontPic_Genesect5_),
	SPECIES_SPRITE(GRENINJA_2, gMonFrontPic_Greninja2_),
	SPECIES_SPRITE(GRENINJA_3, gMonFrontPic_Greninja3_),
	SPECIES_SPRITE(VIVILLON_2, gMonFrontPic_Vivillon2_),
	SPECIES_SPRITE(VIVILLON_3, gMonFrontPic_Vivillon3_),
	SPECIES_SPRITE(VIVILLON_4, gMonFrontPic_Vivillon4_),
	SPECIES_SPRITE(VIVILLON_5, gMonFrontPic_Vivillon5_),
	SPECIES_SPRITE(VIVILLON_6, gMonFrontPic_Vivillon6_),
	SPECIES_SPRITE(VIVILLON_7, gMonFrontPic_Vivillon7_),
	SPECIES_SPRITE(VIVILLON_8, gMonFrontPic_Vivillon8_),
	SPECIES_SPRITE(VIVILLON_9, gMonFrontPic_Vivillon9_),
	SPECIES_SPRITE(VIVILLON_10, gMonFrontPic_Vivillon10_),
	SPECIES_SPRITE(VIVILLON_11, gMonFrontPic_Vivillon11_),
	SPECIES_SPRITE(VIVILLON_12, gMonFrontPic_Vivillon12_),
	SPECIES_SPRITE(VIVILLON_13, gMonFrontPic_Vivillon13_),
	SPECIES_SPRITE(VIVILLON_14, gMonFrontPic_Vivillon14_),
	SPECIES_SPRITE(VIVILLON_15, gMonFrontPic_Vivillon15_),
	SPECIES_SPRITE(VIVILLON_16, gMonFrontPic_Vivillon16_),
	SPECIES_SPRITE(VIVILLON_17, gMonFrontPic_Vivillon17_),
	SPECIES_SPRITE(VIVILLON_18, gMonFrontPic_Vivillon18_),
	SPECIES_SPRITE(VIVILLON_19, gMonFrontPic_Vivillon19_),
	SPECIES_SPRITE(VIVILLON_20, gMonFrontPic_Vivillon20_),
	SPECIES_SPRITE(FLABEBE_2, gMonFrontPic_Flabebe2_),
	SPECIES_SPRITE(FLABEBE_3, gMonFrontPic_Flabebe3_),
	SPECIES_SPRITE(FLABEBE_4, gMonFrontPic_Flabebe4_),
	SPECIES_SPRITE(FLABEBE_5, gMonFrontPic_Flabebe5_),
	SPECIES_SPRITE(FLOETTE_2, gMonFrontPic_Floette2_),
	SPECIES_SPRITE(FLOETTE_3, gMonFrontPic_Floette3_),
	SPECIES_SPRITE(FLOETTE_4, gMonFrontPic_Floette4_),
	SPECIES_SPRITE(FLOETTE_5, gMonFrontPic_Floette5_),
	SPECIES_SPRITE(FLOETTE_6, gMonFrontPic_Floette6_),
	SPECIES_SPRITE(FLORGES_2, gMonFrontPic_Florges2_),
	SPECIES_SPRITE(FLORGES_3, gMonFrontPic_Florges3_),
	SPECIES_SPRITE(FLORGES_4, gMonFrontPic_Florges4_),
	SPECIES_SPRITE(FLORGES_5, gMonFrontPic_Florges5_),
	SPECIES_SPRITE(FURFROU_2, gMonFrontPic_Furfrou2_),
	SPECIES_SPRITE(FURFROU_3, gMonFrontPic_Furfrou3_),
	SPECIES_SPRITE(FURFROU_4, gMonFrontPic_Furfrou4_),
	SPECIES_SPRITE(FURFROU_5, gMonFrontPic_Furfrou5_),
	SPECIES_SPRITE(FURFROU_6, gMonFrontPic_Furfrou6_),
	SPECIES_SPRITE(FURFROU_7, gMonFrontPic_Furfrou7_),
	SPECIES_SPRITE(FURFROU_8, gMonFrontPic_Furfrou8_),
	SPECIES_SPRITE(FURFROU_9, gMonFrontPic_Furfrou9_),
	SPECIES_SPRITE(FURFROU_10, gMonFrontPic_Furfrou10_),
	SPECIES_SPRITE(MEOWSTIC_2, gMonFrontPic_Meowstic2_),
	SPECIES_SPRITE(AEGISLASH_2, gMonFrontPic_Aegislash2_),
	SPECIES_SPRITE(PUMPKABOO_2, gMonFrontPic_Pumpkaboo2_),
	SPECIES_SPRITE(PUMPKABOO_3, gMonFrontPic_Pumpkaboo3_),
	SPECIES_SPRITE(PUMPKABOO_4, gMonFrontPic_Pumpkaboo4_),
	SPECIES_SPRITE(GOURGEIST_2, gMonFrontPic_Gourgeist2_),
	SPECIES_SPRITE(GOURGEIST_3, gMonFrontPic_Gourgeist3_),
	SPECIES_SPRITE(GOURGEIST_4, gMonFrontPic_Gourgeist4_),
	SPECIES_SPRITE(XERNEAS_2, gMonFrontPic_Xerneas2_),
	SPECIES_SPRITE(ZYGARDE_2, gMonFrontPic_Zygarde2_),
	SPECIES_SPRITE(ZYGARDE_3, gMonFrontPic_Zygarde3_),
	SPECIES_SPRITE(ZYGARDE_4, gMonFrontPic_Zygarde4_),
	SPECIES_SPRITE(ZYGARDE_5, gMonFrontPic_Zygarde5_),
	SPECIES_SPRITE(HOOPA_2, gMonFrontPic_Hoopa2_),
	SPECIES_SPRITE(ORICORIO_2, gMonFrontPic_Oricorio2_),
	SPECIES_SPRITE(ORICORIO_3, gMonFrontPic_Oricorio3_),
	SPECIES_SPRITE(ORICORIO_4, gMonFrontPic_Oricorio4_),
	SPECIES_SPRITE(ROCKRUFF_2, gMonFrontPic_Rockruff2_),
	SPECIES_SPRITE(LYCANROC_2, gMonFrontPic_Lycanroc2_),
	SPECIES_SPRITE(LYCANROC_3, gMonFrontPic_Lycanroc3_),
	SPECIES_SPRITE(WISHIWASHI_2, gMonFrontPic_Wishiwashi2_),
	SPECIES_SPRITE(SILVALLY_2, gMonFrontPic_Silvally2_),
	SPECIES_SPRITE(SILVALLY_3, gMonFrontPic_Silvally3_),
	SPECIES_SPRITE(SILVALLY_4, gMonFrontPic_Silvally4_),
	SPECIES_SPRITE(SILVALLY_5, gMonFrontPic_Silvally5_),
	SPECIES_SPRITE(SILVALLY_6, gMonFrontPic_Silvally6_),
	SPECIES_SPRITE(SILVALLY_7, gMonFrontPic_Silvally7_),
	SPECIES_SPRITE(SILVALLY_8, gMonFrontPic_Silvally8_),
	SPECIES_SPRITE(SILVALLY_9, gMonFrontPic_Silvally9_),
	SPECIES_SPRITE(SILVALLY_10, gMonFrontPic_Silvally10_),
	SPECIES_SPRITE(SILVALLY_11, gMonFrontPic_Silvally11_),
	SPECIES_SPRITE(SILVALLY_12, gMonFrontPic_Silvally12_),
	SPECIES_SPRITE(SILVALLY_13, gMonFrontPic_Silvally13_),
	SPECIES_SPRITE(SILVALLY_14, gMonFrontPic_Silvally14_),
	SPECIES_SPRITE(SILVALLY_15, gMonFrontPic_Silvally15_),
	SPECIES_SPRITE(SILVALLY_16, gMonFrontPic_Silvally16_),
	SPECIES_SPRITE(SILVALLY_17, gMonFrontPic_Silvally17_),
	SPECIES_SPRITE(SILVALLY_18, gMonFrontPic_Silvally18_),
	SPECIES_SPRITE(MINIOR_2, gMonFrontPic_Minior2_),
	SPECIES_SPRITE(MINIOR_3, gMonFrontPic_Minior3_),
	SPECIES_SPRITE(MINIOR_4, gMonFrontPic_Minior4_),
	SPECIES_SPRITE(MINIOR_5, gMonFrontPic_Minior5_),
	SPECIES_SPRITE(MINIOR_6, gMonFrontPic_Minior6_),
	SPECIES_SPRITE(MINIOR_7, gMonFrontPic_Minior7_),
	SPECIES_SPRITE(MINIOR_8, gMonFrontPic_Minior8_),
	SPECIES_SPRITE(MINIOR_9, gMonFrontPic_Minior9_),
	SPECIES_SPRITE(MINIOR_10, gMonFrontPic_Minior10_),
	SPECIES_SPRITE(MINIOR_11, gMonFrontPic_Minior11_),
	SPECIES_SPRITE(MINIOR_12, gMonFrontPic_Minior12_),
	SPECIES_SPRITE(MINIOR_13, gMonFrontPic_Minior13_),
	SPECIES_SPRITE(MINIOR_14, gMonFrontPic_Minior14_),
	SPECIES_SPRITE(MIMIKYU_2, gMonFrontPic_Mimikyu2_),
	SPECIES_SPRITE(NECROZMA_2, gMonFrontPic_Necrozma2_),
	SPECIES_SPRITE(NECROZMA_3, gMonFrontPic_Necrozma3_),
	SPECIES_SPRITE(NECROZMA_4, gMonFrontPic_Necrozma4_),
	SPECIES_SPRITE(MAGEARNA_2, gMonFrontPic_Magearna2_),
	SPECIES_SPRITE(CRAMORANT_2, gMonFrontPic_Cramorant2_),
	SPECIES_SPRITE(CRAMORANT_3, gMonFrontPic_Cramorant3_),
	SPECIES_SPRITE(TOXTRICITY_2, gMonFrontPic_Toxtricity2_),
	SPECIES_SPRITE(SINISTEA_2, gMonFrontPic_Sinistea2_),
	SPECIES_SPRITE(POLTEAGEIS_2, gMonFrontPic_Polteageis2_),
	SPECIES_SPRITE(ALCREMIE_2, gMonFrontPic_Alcremie2_),
	SPECIES_SPRITE(ALCREMIE_3, gMonFrontPic_Alcremie3_),
	SPECIES_SPRITE(ALCREMIE_4, gMonFrontPic_Alcremie4_),
	SPECIES_SPRITE(ALCREMIE_5, gMonFrontPic_Alcremie5_),
	SPECIES_SPRITE(ALCREMIE_6, gMonFrontPic_Alcremie6_),
	SPECIES_SPRITE(ALCREMIE_7, gMonFrontPic_Alcremie7_),
	SPECIES_SPRITE(ALCREMIE_8, gMonFrontPic_Alcremie8_),
	SPECIES_SPRITE(ALCREMIE_9, gMonFrontPic_Alcremie9_),
	SPECIES_SPRITE(EISCUE_2, gMonFrontPic_Eiscue2_),
	SPECIES_SPRITE(INDEEDEE_2, gMonFrontPic_Indeedee2_),
	SPECIES_SPRITE(MORPEKO_2, gMonFrontPic_Morpeko2_),
	SPECIES_SPRITE(ZACIAN_2, gMonFrontPic_Zacian2_),
	SPECIES_SPRITE(ZAMAZENTA_2, gMonFrontPic_Zamazenta2_),
	SPECIES_SPRITE(ETERNATUS_2, gMonFrontPic_Eternatus2_),
	SPECIES_SPRITE(URSHIFU_2, gMonFrontPic_Urshifu2_),
	SPECIES_SPRITE(ZARUDE_2, gMonFrontPic_Zarude2_),
	SPECIES_SPRITE(CALYREX_2, gMonFrontPic_Calyrex2_),
	SPECIES_SPRITE(CALYREX_3, gMonFrontPic_Calyrex3_),
	SPECIES_SPRITE(BSCULEGION_2, gMonFrontPic_Bsculegion2_),
	SPECIES_SPRITE(ALCREMIE_10, gMonFrontPic_Alcremie10_),
	SPECIES_SPRITE(ALCREMIE_11, gMonFrontPic_Alcremie11_),
	SPECIES_SPRITE(ALCREMIE_12, gMonFrontPic_Alcremie12_),
	SPECIES_SPRITE(ALCREMIE_13, gMonFrontPic_Alcremie13_),
	SPECIES_SPRITE(ALCREMIE_14, gMonFrontPic_Alcremie14_),
	SPECIES_SPRITE(ALCREMIE_15, gMonFrontPic_Alcremie15_),
	SPECIES_SPRITE(ALCREMIE_16, gMonFrontPic_Alcremie16_),
	SPECIES_SPRITE(ALCREMIE_17, gMonFrontPic_Alcremie17_),
	SPECIES_SPRITE(ALCREMIE_18, gMonFrontPic_Alcremie18_),
	SPECIES_SPRITE(ALCREMIE_19, gMonFrontPic_Alcremie19_),
	SPECIES_SPRITE(ALCREMIE_20, gMonFrontPic_Alcremie20_),
	SPECIES_SPRITE(ALCREMIE_21, gMonFrontPic_Alcremie21_),
	SPECIES_SPRITE(ALCREMIE_22, gMonFrontPic_Alcremie22_),
	SPECIES_SPRITE(ALCREMIE_23, gMonFrontPic_Alcremie23_),
	SPECIES_SPRITE(ALCREMIE_24, gMonFrontPic_Alcremie24_),
	SPECIES_SPRITE(ALCREMIE_25, gMonFrontPic_Alcremie25_),
	SPECIES_SPRITE(ALCREMIE_26, gMonFrontPic_Alcremie26_),
	SPECIES_SPRITE(ALCREMIE_27, gMonFrontPic_Alcremie27_),
	SPECIES_SPRITE(ALCREMIE_28, gMonFrontPic_Alcremie28_),
	SPECIES_SPRITE(ALCREMIE_29, gMonFrontPic_Alcremie29_),
	SPECIES_SPRITE(ALCREMIE_30, gMonFrontPic_Alcremie30_),
	SPECIES_SPRITE(ALCREMIE_31, gMonFrontPic_Alcremie31_),
	SPECIES_SPRITE(ALCREMIE_32, gMonFrontPic_Alcremie32_),
	SPECIES_SPRITE(ALCREMIE_33, gMonFrontPic_Alcremie33_),
	SPECIES_SPRITE(ALCREMIE_34, gMonFrontPic_Alcremie34_),
	SPECIES_SPRITE(ALCREMIE_35, gMonFrontPic_Alcremie35_),
	SPECIES_SPRITE(ALCREMIE_36, gMonFrontPic_Alcremie36_),
	SPECIES_SPRITE(ALCREMIE_37, gMonFrontPic_Alcremie37_),
	SPECIES_SPRITE(ALCREMIE_38, gMonFrontPic_Alcremie38_),
	SPECIES_SPRITE(ALCREMIE_39, gMonFrontPic_Alcremie39_),
	SPECIES_SPRITE(ALCREMIE_40, gMonFrontPic_Alcremie40_),
	SPECIES_SPRITE(ALCREMIE_41, gMonFrontPic_Alcremie41_),
	SPECIES_SPRITE(ALCREMIE_42, gMonFrontPic_Alcremie42_),
	SPECIES_SPRITE(ALCREMIE_43, gMonFrontPic_Alcremie43_),
	SPECIES_SPRITE(ALCREMIE_44, gMonFrontPic_Alcremie44_),
	SPECIES_SPRITE(ALCREMIE_45, gMonFrontPic_Alcremie45_),
	SPECIES_SPRITE(ALCREMIE_46, gMonFrontPic_Alcremie46_),
	SPECIES_SPRITE(ALCREMIE_47, gMonFrontPic_Alcremie47_),
	SPECIES_SPRITE(ALCREMIE_48, gMonFrontPic_Alcremie48_),
	SPECIES_SPRITE(ALCREMIE_49, gMonFrontPic_Alcremie49_),
	SPECIES_SPRITE(ALCREMIE_50, gMonFrontPic_Alcremie50_),
	SPECIES_SPRITE(ALCREMIE_51, gMonFrontPic_Alcremie51_),
	SPECIES_SPRITE(ALCREMIE_52, gMonFrontPic_Alcremie52_),
	SPECIES_SPRITE(ALCREMIE_53, gMonFrontPic_Alcremie53_),
	SPECIES_SPRITE(ALCREMIE_54, gMonFrontPic_Alcremie54_),
	SPECIES_SPRITE(ALCREMIE_55, gMonFrontPic_Alcremie55_),
	SPECIES_SPRITE(ALCREMIE_56, gMonFrontPic_Alcremie56_),
	SPECIES_SPRITE(ALCREMIE_57, gMonFrontPic_Alcremie57_),
	SPECIES_SPRITE(ALCREMIE_58, gMonFrontPic_Alcremie58_),
	SPECIES_SPRITE(ALCREMIE_59, gMonFrontPic_Alcremie59_),
	SPECIES_SPRITE(ALCREMIE_60, gMonFrontPic_Alcremie60_),
	SPECIES_SPRITE(ALCREMIE_61, gMonFrontPic_Alcremie61_),
	SPECIES_SPRITE(ALCREMIE_62, gMonFrontPic_Alcremie62_),
	SPECIES_SPRITE(ALCREMIE_63, gMonFrontPic_Alcremie63_),
	SPECIES_SPRITE(SPRIGATITO, gMonFrontPic_Sprigatito_),
	SPECIES_SPRITE(FLORAGATO, gMonFrontPic_Floragato_),
	SPECIES_SPRITE(MEOWSCARAD, gMonFrontPic_Meowscarad_),
	SPECIES_SPRITE(FUECOCO, gMonFrontPic_Fuecoco_),
	SPECIES_SPRITE(CROCALOR, gMonFrontPic_Crocalor_),
	SPECIES_SPRITE(SKELEDIRGE, gMonFrontPic_Skeledirge_),
	SPECIES_SPRITE(QUAXLY, gMonFrontPic_Quaxly_),
	SPECIES_SPRITE(QUAXWELL, gMonFrontPic_Quaxwell_),
	SPECIES_SPRITE(QUAQUAVAL, gMonFrontPic_Quaquaval_),
	SPECIES_SPRITE(LECHONK, gMonFrontPic_Lechonk_),
	SPECIES_SPRITE(OINKOLOGNE, gMonFrontPic_Oinkologne_),
	SPECIES_SPRITE(OINKOLOGNE_2, gMonFrontPic_Oinkologne2_),
	SPECIES_SPRITE(TAROUNTULA, gMonFrontPic_Tarountula_),
	SPECIES_SPRITE(SPIDOPS, gMonFrontPic_Spidops_),
	SPECIES_SPRITE(NYMBLE, gMonFrontPic_Nymble_),
	SPECIES_SPRITE(LOKIX, gMonFrontPic_Lokix_),
	SPECIES_SPRITE(PAWMI, gMonFrontPic_Pawmi_),
	SPECIES_SPRITE(PAWMO, gMonFrontPic_Pawmo_),
	SPECIES_SPRITE(PAWMOT, gMonFrontPic_Pawmot_),
	SPECIES_SPRITE(TANDEMAUS, gMonFrontPic_Tandemaus_),
	SPECIES_SPRITE(MAUSHOLD, gMonFrontPic_Maushold_),
	SPECIES_SPRITE(MAUSHOLD_2, gMonFrontPic_Maushold2_),
	SPECIES_SPRITE(FIDOUGH, gMonFrontPic_Fidough_),
	SPECIES_SPRITE(DACHSBUN, gMonFrontPic_Dachsbun_),
	SPECIES_SPRITE(SMOLIV, gMonFrontPic_Smoliv_),
	SPECIES_SPRITE(DOLLIV, gMonFrontPic_Dolliv_),
	SPECIES_SPRITE(ARBOLIVA, gMonFrontPic_Arboliva_),
	SPECIES_SPRITE(SQAWKABILY, gMonFrontPic_Sqawkabily_),
	SPECIES_SPRITE(SQAWKABILY_2, gMonFrontPic_Sqawkabily2_),
	SPECIES_SPRITE(SQAWKABILY_3, gMonFrontPic_Sqawkabily3_),
	SPECIES_SPRITE(SQAWKABILY_4, gMonFrontPic_Sqawkabily4_),
	SPECIES_SPRITE(NACLI, gMonFrontPic_Nacli_),
	SPECIES_SPRITE(NACLSTACK, gMonFrontPic_Naclstack_),
	SPECIES_SPRITE(GARGANACL, gMonFrontPic_Garganacl_),
	SPECIES_SPRITE(CHARCADET, gMonFrontPic_Charcadet_),
	SPECIES_SPRITE(ARMAROUGE, gMonFrontPic_Armarouge_),
	SPECIES_SPRITE(CERULEDGE, gMonFrontPic_Ceruledge_),
	SPECIES_SPRITE(TADBULB, gMonFrontPic_Tadbulb_),
	SPECIES_SPRITE(BELLIBOLT, gMonFrontPic_Bellibolt_),
	SPECIES_SPRITE(WATTREL, gMonFrontPic_Wattrel_),
	SPECIES_SPRITE(KILOWATREL, gMonFrontPic_Kilowatrel_),
	SPECIES_SPRITE(MASCHIFF, gMonFrontPic_Maschiff_),
	SPECIES_SPRITE(MABOSSTIFF, gMonFrontPic_Mabosstiff_),
	SPECIES_SPRITE(SHROODLE, gMonFrontPic_Shroodle_),
	SPECIES_SPRITE(GRAFAIAI, gMonFrontPic_Grafaiai_),
	SPECIES_SPRITE(BRAMBLIN, gMonFrontPic_Bramblin_),
	SPECIES_SPRITE(BRMBLGHAST, gMonFrontPic_Brmblghast_),
	SPECIES_SPRITE(TOEDSCOOL, gMonFrontPic_Toedscool_),
	SPECIES_SPRITE(TOEDSCRUEL, gMonFrontPic_Toedscruel_),
	SPECIES_SPRITE(KLAWF, gMonFrontPic_Klawf_),
	SPECIES_SPRITE(CAPSAKID, gMonFrontPic_Capsakid_),
	SPECIES_SPRITE(SCOVILLAIN, gMonFrontPic_Scovillain_),
	SPECIES_SPRITE(RELLOR, gMonFrontPic_Rellor_),
	SPECIES_SPRITE(RABSCA, gMonFrontPic_Rabsca_),
	SPECIES_SPRITE(FLITTLE, gMonFrontPic_Flittle_),
	SPECIES_SPRITE(ESPATHRA, gMonFrontPic_Espathra_),
	SPECIES_SPRITE(TINKATINK, gMonFrontPic_Tinkatink_),
	SPECIES_SPRITE(TINKATUFF, gMonFrontPic_Tinkatuff_),
	SPECIES_SPRITE(TINKATON, gMonFrontPic_Tinkaton_),
	SPECIES_SPRITE(WIGLETT, gMonFrontPic_Wiglett_),
	SPECIES_SPRITE(WUGTRIO, gMonFrontPic_Wugtrio_),
	SPECIES_SPRITE(BOMBIRDIER, gMonFrontPic_Bombirdier_),
	SPECIES_SPRITE(FINIZEN, gMonFrontPic_Finizen_),
	SPECIES_SPRITE(PALAFIN, gMonFrontPic_Palafin_),
	SPECIES_SPRITE(PALAFIN_2, gMonFrontPic_Palafin2_),
	SPECIES_SPRITE(VAROOM, gMonFrontPic_Varoom_),
	SPECIES_SPRITE(REVAVROOM, gMonFrontPic_Revavroom_),
	SPECIES_SPRITE(CYCLIZAR, gMonFrontPic_Cyclizar_),
	SPECIES_SPRITE(ORTHWORM, gMonFrontPic_Orthworm_),
	SPECIES_SPRITE(GLIMMET, gMonFrontPic_Glimmet_),
	SPECIES_SPRITE(GLIMMORA, gMonFrontPic_Glimmora_),
	SPECIES_SPRITE(GREAVARD, gMonFrontPic_Greavard_),
	SPECIES_SPRITE(HOUNDSTONE, gMonFrontPic_Houndstone_),
	SPECIES_SPRITE(FLAMIGO, gMonFrontPic_Flamigo_),
	SPECIES_SPRITE(CETODDLE, gMonFrontPic_Cetoddle_),
	SPECIES_SPRITE(CETITAN, gMonFrontPic_Cetitan_),
	SPECIES_SPRITE(VELUZA, gMonFrontPic_Veluza_),
	SPECIES_SPRITE(DONDOZO, gMonFrontPic_Dondozo_),
	SPECIES_SPRITE(TATSUGIRI, gMonFrontPic_Tatsugiri_),
	SPECIES_SPRITE(TATSUGIRI_2, gMonFrontPic_Tatsugiri2_),
	SPECIES_SPRITE(TATSUGIRI_3, gMonFrontPic_Tatsugiri3_),
	SPECIES_SPRITE(ANNIHILAPE, gMonFrontPic_Annihilape_),
	SPECIES_SPRITE(CLODSIRE, gMonFrontPic_Clodsire_),
	SPECIES_SPRITE(FARIGIRAF, gMonFrontPic_Farigiraf_),
	SPECIES_SPRITE(DUDUNSPRCE, gMonFrontPic_Dudunsprce_),
	SPECIES_SPRITE(DUDUNSPRCE_2, gMonFrontPic_Dudunsprce2_),
	SPECIES_SPRITE(KINGAMBIT, gMonFrontPic_Kingambit_),
	SPECIES_SPRITE(GREATTUSK, gMonFrontPic_GreatTusk_),
	SPECIES_SPRITE(SCREAMTAIL, gMonFrontPic_ScreamTail_),
	SPECIES_SPRITE(BRUTEBONET, gMonFrontPic_BruteBonet_),
	SPECIES_SPRITE(FLUTTRMANE, gMonFrontPic_FluttrMane_),
	SPECIES_SPRITE(SLITHRWING, gMonFrontPic_SlithrWing_),
	SPECIES_SPRITE(SNDYSHOCKS, gMonFrontPic_SndyShocks_),
	SPECIES_SPRITE(IRONTREADS, gMonFrontPic_IronTreads_),
	SPECIES_SPRITE(IRONBUNDLE, gMonFrontPic_IronBundle_),
	SPECIES_SPRITE(IRONHANDS, gMonFrontPic_IronHands_),
	SPECIES_SPRITE(IRONJUGULS, gMonFrontPic_IronJuguls_),
	SPECIES_SPRITE(IRONMOTH, gMonFrontPic_IronMoth_),
	SPECIES_SPRITE(IRONTHORNS, gMonFrontPic_IronThorns_),
	SPECIES_SPRITE(FRIGIBAX, gMonFrontPic_Frigibax_),
	SPECIES_SPRITE(ARCTIBAX, gMonFrontPic_Arctibax_),
	SPECIES_SPRITE(BAXCALIBUR, gMonFrontPic_Baxcalibur_),
	SPECIES_SPRITE(GIMMIGHOUL, gMonFrontPic_Gimmighoul_),
	SPECIES_SPRITE(GIMMIGHOUL_2, gMonFrontPic_Gimmighoul2_),
	SPECIES_SPRITE(GHOLDENGO, gMonFrontPic_Gholdengo_),
	SPECIES_SPRITE(WOCHIEN, gMonFrontPic_WoChien_),
	SPECIES_SPRITE(CHIENPAO, gMonFrontPic_ChienPao_),
	SPECIES_SPRITE(TINGLU, gMonFrontPic_TingLu_),
	SPECIES_SPRITE(CHIYU, gMonFrontPic_ChiYu_),
	SPECIES_SPRITE(ROARNGMOON, gMonFrontPic_RoarngMoon_),
	SPECIES_SPRITE(IRONVLIANT, gMonFrontPic_IronVliant_),
	SPECIES_SPRITE(KORAIDON, gMonFrontPic_Koraidon_),
	SPECIES_SPRITE(MIRAIDON, gMonFrontPic_Miraidon_),
	SPECIES_SPRITE(TAUROS_2, gMonFrontPic_Tauros2_),
	SPECIES_SPRITE(TAUROS_3, gMonFrontPic_Tauros3_),
	SPECIES_SPRITE(TAUROS_4, gMonFrontPic_Tauros4_),
	SPECIES_SPRITE(WOOPER_2, gMonFrontPic_Wooper2_),
	SPECIES_SPRITE(WALKNGWAKE, gMonFrontPic_WalkngWake_),
	SPECIES_SPRITE(IRONLEAVES, gMonFrontPic_IronLeaves_),
	SPECIES_SPRITE(DIPPLIN, gMonFrontPic_Dipplin_),
	SPECIES_SPRITE(PTCHAGEIST, gMonFrontPic_Ptchageist_),
	SPECIES_SPRITE(PTCHAGEIST_2, gMonFrontPic_Ptchageist2_),
	SPECIES_SPRITE(SINISTCHA, gMonFrontPic_Sinistcha_),
	SPECIES_SPRITE(SINISTCHA_2, gMonFrontPic_Sinistcha2_),
	SPECIES_SPRITE(OKIDOGI, gMonFrontPic_Okidogi_),
	SPECIES_SPRITE(MUNKIDORI, gMonFrontPic_Munkidori_),
	SPECIES_SPRITE(FEZNDIPITI, gMonFrontPic_Fezndipiti_),
	SPECIES_SPRITE(OGERPON, gMonFrontPic_Ogerpon_),
	SPECIES_SPRITE(OGERPON_2, gMonFrontPic_Ogerpon2_),
	SPECIES_SPRITE(OGERPON_3, gMonFrontPic_Ogerpon3_),
	SPECIES_SPRITE(OGERPON_4, gMonFrontPic_Ogerpon4_),
	SPECIES_SPRITE(OGERPON_5, gMonFrontPic_Ogerpon5_),
	SPECIES_SPRITE(OGERPON_6, gMonFrontPic_Ogerpon6_),
	SPECIES_SPRITE(OGERPON_7, gMonFrontPic_Ogerpon7_),
	SPECIES_SPRITE(OGERPON_8, gMonFrontPic_Ogerpon8_),
	SPECIES_SPRITE(URSALUNA_2, gMonFrontPic_Ursaluna2_),
	SPECIES_SPRITE(ARCHALUDON, gMonFrontPic_Archaludon_),
	SPECIES_SPRITE(HYDRAPPLE, gMonFrontPic_Hydrapple_),
	SPECIES_SPRITE(GOUGINFIRE, gMonFrontPic_GouginFire_),
	SPECIES_SPRITE(RAGINGBOLT, gMonFrontPic_RagingBolt_),
	SPECIES_SPRITE(IRONBOULDR, gMonFrontPic_IronBouldr_),
	SPECIES_SPRITE(IRONCROWN, gMonFrontPic_IronCrown_),
	SPECIES_SPRITE(TERAPAGOS, gMonFrontPic_Terapagos_),
	SPECIES_SPRITE(TERAPAGOS_2, gMonFrontPic_Terapagos2_),
	SPECIES_SPRITE(TERAPAGOS_3, gMonFrontPic_Terapagos3_),
	SPECIES_SPRITE(PECHARUNT, gMonFrontPic_Pecharunt_),
	SPECIES_SPRITE(MOTHIM_2, gMonFrontPic_Mothim2_),
	SPECIES_SPRITE(MOTHIM_3, gMonFrontPic_Mothim3_),
	SPECIES_SPRITE(SCATTERBUG_2, gMonFrontPic_Scatterbug2_),
	SPECIES_SPRITE(SCATTERBUG_3, gMonFrontPic_Scatterbug3_),
	SPECIES_SPRITE(SCATTERBUG_4, gMonFrontPic_Scatterbug4_),
	SPECIES_SPRITE(SCATTERBUG_5, gMonFrontPic_Scatterbug5_),
	SPECIES_SPRITE(SCATTERBUG_6, gMonFrontPic_Scatterbug6_),
	SPECIES_SPRITE(SCATTERBUG_7, gMonFrontPic_Scatterbug7_),
	SPECIES_SPRITE(SCATTERBUG_8, gMonFrontPic_Scatterbug8_),
	SPECIES_SPRITE(SCATTERBUG_9, gMonFrontPic_Scatterbug9_),
	SPECIES_SPRITE(SCATTERBUG_10, gMonFrontPic_Scatterbug10_),
	SPECIES_SPRITE(SCATTERBUG_11, gMonFrontPic_Scatterbug11_),
	SPECIES_SPRITE(SCATTERBUG_12, gMonFrontPic_Scatterbug12_),
	SPECIES_SPRITE(SCATTERBUG_13, gMonFrontPic_Scatterbug13_),
	SPECIES_SPRITE(SCATTERBUG_14, gMonFrontPic_Scatterbug14_),
	SPECIES_SPRITE(SCATTERBUG_15, gMonFrontPic_Scatterbug15_),
	SPECIES_SPRITE(SCATTERBUG_16, gMonFrontPic_Scatterbug16_),
	SPECIES_SPRITE(SCATTERBUG_17, gMonFrontPic_Scatterbug17_),
	SPECIES_SPRITE(SCATTERBUG_18, gMonFrontPic_Scatterbug18_),
	SPECIES_SPRITE(SCATTERBUG_19, gMonFrontPic_Scatterbug19_),
	SPECIES_SPRITE(SCATTERBUG_20, gMonFrontPic_Scatterbug20_),
	SPECIES_SPRITE(SPEWPA_2, gMonFrontPic_Spewpa2_),
	SPECIES_SPRITE(SPEWPA_3, gMonFrontPic_Spewpa3_),
	SPECIES_SPRITE(SPEWPA_4, gMonFrontPic_Spewpa4_),
	SPECIES_SPRITE(SPEWPA_5, gMonFrontPic_Spewpa5_),
	SPECIES_SPRITE(SPEWPA_6, gMonFrontPic_Spewpa6_),
	SPECIES_SPRITE(SPEWPA_7, gMonFrontPic_Spewpa7_),
	SPECIES_SPRITE(SPEWPA_8, gMonFrontPic_Spewpa8_),
	SPECIES_SPRITE(SPEWPA_9, gMonFrontPic_Spewpa9_),
	SPECIES_SPRITE(SPEWPA_10, gMonFrontPic_Spewpa10_),
	SPECIES_SPRITE(SPEWPA_11, gMonFrontPic_Spewpa11_),
	SPECIES_SPRITE(SPEWPA_12, gMonFrontPic_Spewpa12_),
	SPECIES_SPRITE(SPEWPA_13, gMonFrontPic_Spewpa13_),
	SPECIES_SPRITE(SPEWPA_14, gMonFrontPic_Spewpa14_),
	SPECIES_SPRITE(SPEWPA_15, gMonFrontPic_Spewpa15_),
	SPECIES_SPRITE(SPEWPA_16, gMonFrontPic_Spewpa16_),
	SPECIES_SPRITE(SPEWPA_17, gMonFrontPic_Spewpa17_),
	SPECIES_SPRITE(SPEWPA_18, gMonFrontPic_Spewpa18_),
	SPECIES_SPRITE(SPEWPA_19, gMonFrontPic_Spewpa19_),
	SPECIES_SPRITE(SPEWPA_20, gMonFrontPic_Spewpa20_),
	SPECIES_SPRITE(RATICATE_3, gMonFrontPic_Raticate3_),
	SPECIES_SPRITE(GUMSHOOS_2, gMonFrontPic_Gumshoos2_),
	SPECIES_SPRITE(VIKAVOLT_2, gMonFrontPic_Vikavolt2_),
	SPECIES_SPRITE(LURANTIS_2, gMonFrontPic_Lurantis2_),
	SPECIES_SPRITE(SALAZZLE_2, gMonFrontPic_Salazzle2_),
	SPECIES_SPRITE(MIMIKYU_3, gMonFrontPic_Mimikyu3_),
	SPECIES_SPRITE(KOMMOO_2, gMonFrontPic_Kommoo2_),
	SPECIES_SPRITE(MAROWAK_3, gMonFrontPic_Marowak3_),
	SPECIES_SPRITE(RIBOMBEE_2, gMonFrontPic_Ribombee2_),
	SPECIES_SPRITE(ARAQUANID_2, gMonFrontPic_Araquanid2_),
	SPECIES_SPRITE(TOGEDEMARU_2, gMonFrontPic_Togedemaru2_),
	SPECIES_SPRITE(PIKACHU_16, gMonFrontPic_Pikachu16_),
	SPECIES_SPRITE(EEVEE_2, gMonFrontPic_Eevee2_),
	SPECIES_SPRITE(VENUSAUR_3, gMonFrontPic_Venusaur3_),
	SPECIES_SPRITE(BLASTOISE_3, gMonFrontPic_Blastoise3_),
	SPECIES_SPRITE(CHARIZARD_4, gMonFrontPic_Charizard4_),
	SPECIES_SPRITE(BUTTERFREE_2, gMonFrontPic_Butterfree2_),
	SPECIES_SPRITE(PIKACHU_17, gMonFrontPic_Pikachu17_),
	SPECIES_SPRITE(MEOWTH_4, gMonFrontPic_Meowth4_),
	SPECIES_SPRITE(MACHAMP_2, gMonFrontPic_Machamp2_),
	SPECIES_SPRITE(GENGAR_3, gMonFrontPic_Gengar3_),
	SPECIES_SPRITE(KINGLER_2, gMonFrontPic_Kingler2_),
	SPECIES_SPRITE(LAPRAS_2, gMonFrontPic_Lapras2_),
	SPECIES_SPRITE(EEVEE_3, gMonFrontPic_Eevee3_),
	SPECIES_SPRITE(SNORLAX_2, gMonFrontPic_Snorlax2_),
	SPECIES_SPRITE(GARBODOR_2, gMonFrontPic_Garbodor2_),
	SPECIES_SPRITE(MELMETAL_2, gMonFrontPic_Melmetal2_),
	SPECIES_SPRITE(RILLABOOM_2, gMonFrontPic_Rillaboom2_),
	SPECIES_SPRITE(CINDERACE_2, gMonFrontPic_Cinderace2_),
	SPECIES_SPRITE(INTELEON_2, gMonFrontPic_Inteleon2_),
	SPECIES_SPRITE(CORVIKNIGH_2, gMonFrontPic_Corviknigh2_),
	SPECIES_SPRITE(ORBEETLE_2, gMonFrontPic_Orbeetle2_),
	SPECIES_SPRITE(DREDNAW_2, gMonFrontPic_Drednaw2_),
	SPECIES_SPRITE(COALOSSAL_2, gMonFrontPic_Coalossal2_),
	SPECIES_SPRITE(FLAPPLE_2, gMonFrontPic_Flapple2_),
	SPECIES_SPRITE(APPLETUN_2, gMonFrontPic_Appletun2_),
	SPECIES_SPRITE(SANDACONDA_2, gMonFrontPic_Sandaconda2_),
	SPECIES_SPRITE(TOXTRICITY_3, gMonFrontPic_Toxtricity3_),
	SPECIES_SPRITE(TOXTRICITY_4, gMonFrontPic_Toxtricity4_),
	SPECIES_SPRITE(CENTISKORC_2, gMonFrontPic_Centiskorc2_),
	SPECIES_SPRITE(HATTERENE_2, gMonFrontPic_Hatterene2_),
	SPECIES_SPRITE(GRIMMSNARL_2, gMonFrontPic_Grimmsnarl2_),
	SPECIES_SPRITE(ALCREMIE_64, gMonFrontPic_Alcremie64_),
	SPECIES_SPRITE(COPPERAJAH_2, gMonFrontPic_Copperajah2_),
	SPECIES_SPRITE(DURALUDON_2, gMonFrontPic_Duraludon2_),
	SPECIES_SPRITE(URSHIFU_3, gMonFrontPic_Urshifu3_),
	SPECIES_SPRITE(URSHIFU_4, gMonFrontPic_Urshifu4_),
	SPECIES_SPRITE(MIMIKYU_4, gMonFrontPic_Mimikyu4_),
};