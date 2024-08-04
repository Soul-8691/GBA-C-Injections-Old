#include "../../../include/global.h"
#include "../../../include/gflib.h"
#include "../../../include/mail_data.h"
#include "../../../include/pokemon_icon.h"
#include "../../../include/graphics.h"
#include "../../../include/constants/species.h"
#include "../../../include/gba/types.h"

#define SPECIES_PAL(species, pal) [SPECIES_##species] = {pal, SPECIES_##species}

extern const u32 gMonPalette_CircledQuestionMark[];
extern const u32 gMonPalette_Bulbasaur_[];
extern const u32 gMonPalette_Ivysaur_[];
extern const u32 gMonPalette_Venusaur_[];
extern const u32 gMonPalette_Charmander_[];
extern const u32 gMonPalette_Charmeleon_[];
extern const u32 gMonPalette_Charizard_[];
extern const u32 gMonPalette_Squirtle_[];
extern const u32 gMonPalette_Wartortle_[];
extern const u32 gMonPalette_Blastoise_[];
extern const u32 gMonPalette_Caterpie_[];
extern const u32 gMonPalette_Metapod_[];
extern const u32 gMonPalette_Butterfree_[];
extern const u32 gMonPalette_Weedle_[];
extern const u32 gMonPalette_Kakuna_[];
extern const u32 gMonPalette_Beedrill_[];
extern const u32 gMonPalette_Pidgey_[];
extern const u32 gMonPalette_Pidgeotto_[];
extern const u32 gMonPalette_Pidgeot_[];
extern const u32 gMonPalette_Rattata_[];
extern const u32 gMonPalette_Raticate_[];
extern const u32 gMonPalette_Spearow_[];
extern const u32 gMonPalette_Fearow_[];
extern const u32 gMonPalette_Ekans_[];
extern const u32 gMonPalette_Arbok_[];
extern const u32 gMonPalette_Pikachu_[];
extern const u32 gMonPalette_Raichu_[];
extern const u32 gMonPalette_Sandshrew_[];
extern const u32 gMonPalette_Sandslash_[];
extern const u32 gMonPalette_Nidoransf_[];
extern const u32 gMonPalette_Nidorina_[];
extern const u32 gMonPalette_Nidoqueen_[];
extern const u32 gMonPalette_Nidoransm_[];
extern const u32 gMonPalette_Nidorino_[];
extern const u32 gMonPalette_Nidoking_[];
extern const u32 gMonPalette_Clefairy_[];
extern const u32 gMonPalette_Clefable_[];
extern const u32 gMonPalette_Vulpix_[];
extern const u32 gMonPalette_Ninetales_[];
extern const u32 gMonPalette_Jigglypuff_[];
extern const u32 gMonPalette_Wigglytuff_[];
extern const u32 gMonPalette_Zubat_[];
extern const u32 gMonPalette_Golbat_[];
extern const u32 gMonPalette_Oddish_[];
extern const u32 gMonPalette_Gloom_[];
extern const u32 gMonPalette_Vileplume_[];
extern const u32 gMonPalette_Paras_[];
extern const u32 gMonPalette_Parasect_[];
extern const u32 gMonPalette_Venonat_[];
extern const u32 gMonPalette_Venomoth_[];
extern const u32 gMonPalette_Diglett_[];
extern const u32 gMonPalette_Dugtrio_[];
extern const u32 gMonPalette_Meowth_[];
extern const u32 gMonPalette_Persian_[];
extern const u32 gMonPalette_Psyduck_[];
extern const u32 gMonPalette_Golduck_[];
extern const u32 gMonPalette_Mankey_[];
extern const u32 gMonPalette_Primeape_[];
extern const u32 gMonPalette_Growlithe_[];
extern const u32 gMonPalette_Arcanine_[];
extern const u32 gMonPalette_Poliwag_[];
extern const u32 gMonPalette_Poliwhirl_[];
extern const u32 gMonPalette_Poliwrath_[];
extern const u32 gMonPalette_Abra_[];
extern const u32 gMonPalette_Kadabra_[];
extern const u32 gMonPalette_Alakazam_[];
extern const u32 gMonPalette_Machop_[];
extern const u32 gMonPalette_Machoke_[];
extern const u32 gMonPalette_Machamp_[];
extern const u32 gMonPalette_Bellsprout_[];
extern const u32 gMonPalette_Weepinbell_[];
extern const u32 gMonPalette_Victreebel_[];
extern const u32 gMonPalette_Tentacool_[];
extern const u32 gMonPalette_Tentacruel_[];
extern const u32 gMonPalette_Geodude_[];
extern const u32 gMonPalette_Graveler_[];
extern const u32 gMonPalette_Golem_[];
extern const u32 gMonPalette_Ponyta_[];
extern const u32 gMonPalette_Rapidash_[];
extern const u32 gMonPalette_Slowpoke_[];
extern const u32 gMonPalette_Slowbro_[];
extern const u32 gMonPalette_Magnemite_[];
extern const u32 gMonPalette_Magneton_[];
extern const u32 gMonPalette_Farfetchd_[];
extern const u32 gMonPalette_Doduo_[];
extern const u32 gMonPalette_Dodrio_[];
extern const u32 gMonPalette_Seel_[];
extern const u32 gMonPalette_Dewgong_[];
extern const u32 gMonPalette_Grimer_[];
extern const u32 gMonPalette_Muk_[];
extern const u32 gMonPalette_Shellder_[];
extern const u32 gMonPalette_Cloyster_[];
extern const u32 gMonPalette_Gastly_[];
extern const u32 gMonPalette_Haunter_[];
extern const u32 gMonPalette_Gengar_[];
extern const u32 gMonPalette_Onix_[];
extern const u32 gMonPalette_Drowzee_[];
extern const u32 gMonPalette_Hypno_[];
extern const u32 gMonPalette_Krabby_[];
extern const u32 gMonPalette_Kingler_[];
extern const u32 gMonPalette_Voltorb_[];
extern const u32 gMonPalette_Electrode_[];
extern const u32 gMonPalette_Exeggcute_[];
extern const u32 gMonPalette_Exeggutor_[];
extern const u32 gMonPalette_Cubone_[];
extern const u32 gMonPalette_Marowak_[];
extern const u32 gMonPalette_Hitmonlee_[];
extern const u32 gMonPalette_Hitmonchan_[];
extern const u32 gMonPalette_Lickitung_[];
extern const u32 gMonPalette_Koffing_[];
extern const u32 gMonPalette_Weezing_[];
extern const u32 gMonPalette_Rhyhorn_[];
extern const u32 gMonPalette_Rhydon_[];
extern const u32 gMonPalette_Chansey_[];
extern const u32 gMonPalette_Tangela_[];
extern const u32 gMonPalette_Kangaskhan_[];
extern const u32 gMonPalette_Horsea_[];
extern const u32 gMonPalette_Seadra_[];
extern const u32 gMonPalette_Goldeen_[];
extern const u32 gMonPalette_Seaking_[];
extern const u32 gMonPalette_Staryu_[];
extern const u32 gMonPalette_Starmie_[];
extern const u32 gMonPalette_MrMime_[];
extern const u32 gMonPalette_Scyther_[];
extern const u32 gMonPalette_Jynx_[];
extern const u32 gMonPalette_Electabuzz_[];
extern const u32 gMonPalette_Magmar_[];
extern const u32 gMonPalette_Pinsir_[];
extern const u32 gMonPalette_Tauros_[];
extern const u32 gMonPalette_Magikarp_[];
extern const u32 gMonPalette_Gyarados_[];
extern const u32 gMonPalette_Lapras_[];
extern const u32 gMonPalette_Ditto_[];
extern const u32 gMonPalette_Eevee_[];
extern const u32 gMonPalette_Vaporeon_[];
extern const u32 gMonPalette_Jolteon_[];
extern const u32 gMonPalette_Flareon_[];
extern const u32 gMonPalette_Porygon_[];
extern const u32 gMonPalette_Omanyte_[];
extern const u32 gMonPalette_Omastar_[];
extern const u32 gMonPalette_Kabuto_[];
extern const u32 gMonPalette_Kabutops_[];
extern const u32 gMonPalette_Aerodactyl_[];
extern const u32 gMonPalette_Snorlax_[];
extern const u32 gMonPalette_Articuno_[];
extern const u32 gMonPalette_Zapdos_[];
extern const u32 gMonPalette_Moltres_[];
extern const u32 gMonPalette_Dratini_[];
extern const u32 gMonPalette_Dragonair_[];
extern const u32 gMonPalette_Dragonite_[];
extern const u32 gMonPalette_Mewtwo_[];
extern const u32 gMonPalette_Mew_[];
extern const u32 gMonPalette_Chikorita_[];
extern const u32 gMonPalette_Bayleef_[];
extern const u32 gMonPalette_Meganium_[];
extern const u32 gMonPalette_Cyndaquil_[];
extern const u32 gMonPalette_Quilava_[];
extern const u32 gMonPalette_Typhlosion_[];
extern const u32 gMonPalette_Totodile_[];
extern const u32 gMonPalette_Croconaw_[];
extern const u32 gMonPalette_Feraligatr_[];
extern const u32 gMonPalette_Sentret_[];
extern const u32 gMonPalette_Furret_[];
extern const u32 gMonPalette_Hoothoot_[];
extern const u32 gMonPalette_Noctowl_[];
extern const u32 gMonPalette_Ledyba_[];
extern const u32 gMonPalette_Ledian_[];
extern const u32 gMonPalette_Spinarak_[];
extern const u32 gMonPalette_Ariados_[];
extern const u32 gMonPalette_Crobat_[];
extern const u32 gMonPalette_Chinchou_[];
extern const u32 gMonPalette_Lanturn_[];
extern const u32 gMonPalette_Pichu_[];
extern const u32 gMonPalette_Cleffa_[];
extern const u32 gMonPalette_Igglybuff_[];
extern const u32 gMonPalette_Togepi_[];
extern const u32 gMonPalette_Togetic_[];
extern const u32 gMonPalette_Natu_[];
extern const u32 gMonPalette_Xatu_[];
extern const u32 gMonPalette_Mareep_[];
extern const u32 gMonPalette_Flaaffy_[];
extern const u32 gMonPalette_Ampharos_[];
extern const u32 gMonPalette_Bellossom_[];
extern const u32 gMonPalette_Marill_[];
extern const u32 gMonPalette_Azumarill_[];
extern const u32 gMonPalette_Sudowoodo_[];
extern const u32 gMonPalette_Politoed_[];
extern const u32 gMonPalette_Hoppip_[];
extern const u32 gMonPalette_Skiploom_[];
extern const u32 gMonPalette_Jumpluff_[];
extern const u32 gMonPalette_Aipom_[];
extern const u32 gMonPalette_Sunkern_[];
extern const u32 gMonPalette_Sunflora_[];
extern const u32 gMonPalette_Yanma_[];
extern const u32 gMonPalette_Wooper_[];
extern const u32 gMonPalette_Quagsire_[];
extern const u32 gMonPalette_Espeon_[];
extern const u32 gMonPalette_Umbreon_[];
extern const u32 gMonPalette_Murkrow_[];
extern const u32 gMonPalette_Slowking_[];
extern const u32 gMonPalette_Misdreavus_[];
extern const u32 gMonPalette_Unown_[];
extern const u32 gMonPalette_Wobbuffet_[];
extern const u32 gMonPalette_Girafarig_[];
extern const u32 gMonPalette_Pineco_[];
extern const u32 gMonPalette_Forretress_[];
extern const u32 gMonPalette_Dunsparce_[];
extern const u32 gMonPalette_Gligar_[];
extern const u32 gMonPalette_Steelix_[];
extern const u32 gMonPalette_Snubbull_[];
extern const u32 gMonPalette_Granbull_[];
extern const u32 gMonPalette_Qwilfish_[];
extern const u32 gMonPalette_Scizor_[];
extern const u32 gMonPalette_Shuckle_[];
extern const u32 gMonPalette_Heracross_[];
extern const u32 gMonPalette_Sneasel_[];
extern const u32 gMonPalette_Teddiursa_[];
extern const u32 gMonPalette_Ursaring_[];
extern const u32 gMonPalette_Slugma_[];
extern const u32 gMonPalette_Magcargo_[];
extern const u32 gMonPalette_Swinub_[];
extern const u32 gMonPalette_Piloswine_[];
extern const u32 gMonPalette_Corsola_[];
extern const u32 gMonPalette_Remoraid_[];
extern const u32 gMonPalette_Octillery_[];
extern const u32 gMonPalette_Delibird_[];
extern const u32 gMonPalette_Mantine_[];
extern const u32 gMonPalette_Skarmory_[];
extern const u32 gMonPalette_Houndour_[];
extern const u32 gMonPalette_Houndoom_[];
extern const u32 gMonPalette_Kingdra_[];
extern const u32 gMonPalette_Phanpy_[];
extern const u32 gMonPalette_Donphan_[];
extern const u32 gMonPalette_Porygon2_[];
extern const u32 gMonPalette_Stantler_[];
extern const u32 gMonPalette_Smeargle_[];
extern const u32 gMonPalette_Tyrogue_[];
extern const u32 gMonPalette_Hitmontop_[];
extern const u32 gMonPalette_Smoochum_[];
extern const u32 gMonPalette_Elekid_[];
extern const u32 gMonPalette_Magby_[];
extern const u32 gMonPalette_Miltank_[];
extern const u32 gMonPalette_Blissey_[];
extern const u32 gMonPalette_Raikou_[];
extern const u32 gMonPalette_Entei_[];
extern const u32 gMonPalette_Suicune_[];
extern const u32 gMonPalette_Larvitar_[];
extern const u32 gMonPalette_Pupitar_[];
extern const u32 gMonPalette_Tyranitar_[];
extern const u32 gMonPalette_Lugia_[];
extern const u32 gMonPalette_HoOh_[];
extern const u32 gMonPalette_Celebi_[];
extern const u32 gMonPalette_Treecko_[];
extern const u32 gMonPalette_Grovyle_[];
extern const u32 gMonPalette_Sceptile_[];
extern const u32 gMonPalette_Torchic_[];
extern const u32 gMonPalette_Combusken_[];
extern const u32 gMonPalette_Blaziken_[];
extern const u32 gMonPalette_Mudkip_[];
extern const u32 gMonPalette_Marshtomp_[];
extern const u32 gMonPalette_Swampert_[];
extern const u32 gMonPalette_Poochyena_[];
extern const u32 gMonPalette_Mightyena_[];
extern const u32 gMonPalette_Zigzagoon_[];
extern const u32 gMonPalette_Linoone_[];
extern const u32 gMonPalette_Wurmple_[];
extern const u32 gMonPalette_Silcoon_[];
extern const u32 gMonPalette_Beautifly_[];
extern const u32 gMonPalette_Cascoon_[];
extern const u32 gMonPalette_Dustox_[];
extern const u32 gMonPalette_Lotad_[];
extern const u32 gMonPalette_Lombre_[];
extern const u32 gMonPalette_Ludicolo_[];
extern const u32 gMonPalette_Seedot_[];
extern const u32 gMonPalette_Nuzleaf_[];
extern const u32 gMonPalette_Shiftry_[];
extern const u32 gMonPalette_Taillow_[];
extern const u32 gMonPalette_Swellow_[];
extern const u32 gMonPalette_Wingull_[];
extern const u32 gMonPalette_Pelipper_[];
extern const u32 gMonPalette_Ralts_[];
extern const u32 gMonPalette_Kirlia_[];
extern const u32 gMonPalette_Gardevoir_[];
extern const u32 gMonPalette_Surskit_[];
extern const u32 gMonPalette_Masquerain_[];
extern const u32 gMonPalette_Shroomish_[];
extern const u32 gMonPalette_Breloom_[];
extern const u32 gMonPalette_Slakoth_[];
extern const u32 gMonPalette_Vigoroth_[];
extern const u32 gMonPalette_Slaking_[];
extern const u32 gMonPalette_Nincada_[];
extern const u32 gMonPalette_Ninjask_[];
extern const u32 gMonPalette_Shedinja_[];
extern const u32 gMonPalette_Whismur_[];
extern const u32 gMonPalette_Loudred_[];
extern const u32 gMonPalette_Exploud_[];
extern const u32 gMonPalette_Makuhita_[];
extern const u32 gMonPalette_Hariyama_[];
extern const u32 gMonPalette_Azurill_[];
extern const u32 gMonPalette_Nosepass_[];
extern const u32 gMonPalette_Skitty_[];
extern const u32 gMonPalette_Delcatty_[];
extern const u32 gMonPalette_Sableye_[];
extern const u32 gMonPalette_Mawile_[];
extern const u32 gMonPalette_Aron_[];
extern const u32 gMonPalette_Lairon_[];
extern const u32 gMonPalette_Aggron_[];
extern const u32 gMonPalette_Meditite_[];
extern const u32 gMonPalette_Medicham_[];
extern const u32 gMonPalette_Electrike_[];
extern const u32 gMonPalette_Manectric_[];
extern const u32 gMonPalette_Plusle_[];
extern const u32 gMonPalette_Minun_[];
extern const u32 gMonPalette_Volbeat_[];
extern const u32 gMonPalette_Illumise_[];
extern const u32 gMonPalette_Roselia_[];
extern const u32 gMonPalette_Gulpin_[];
extern const u32 gMonPalette_Swalot_[];
extern const u32 gMonPalette_Carvanha_[];
extern const u32 gMonPalette_Sharpedo_[];
extern const u32 gMonPalette_Wailmer_[];
extern const u32 gMonPalette_Wailord_[];
extern const u32 gMonPalette_Numel_[];
extern const u32 gMonPalette_Camerupt_[];
extern const u32 gMonPalette_Torkoal_[];
extern const u32 gMonPalette_Spoink_[];
extern const u32 gMonPalette_Grumpig_[];
extern const u32 gMonPalette_Spinda_[];
extern const u32 gMonPalette_Trapinch_[];
extern const u32 gMonPalette_Vibrava_[];
extern const u32 gMonPalette_Flygon_[];
extern const u32 gMonPalette_Cacnea_[];
extern const u32 gMonPalette_Cacturne_[];
extern const u32 gMonPalette_Swablu_[];
extern const u32 gMonPalette_Altaria_[];
extern const u32 gMonPalette_Zangoose_[];
extern const u32 gMonPalette_Seviper_[];
extern const u32 gMonPalette_Lunatone_[];
extern const u32 gMonPalette_Solrock_[];
extern const u32 gMonPalette_Barboach_[];
extern const u32 gMonPalette_Whiscash_[];
extern const u32 gMonPalette_Corphish_[];
extern const u32 gMonPalette_Crawdaunt_[];
extern const u32 gMonPalette_Baltoy_[];
extern const u32 gMonPalette_Claydol_[];
extern const u32 gMonPalette_Lileep_[];
extern const u32 gMonPalette_Cradily_[];
extern const u32 gMonPalette_Anorith_[];
extern const u32 gMonPalette_Armaldo_[];
extern const u32 gMonPalette_Feebas_[];
extern const u32 gMonPalette_Milotic_[];
extern const u32 gMonPalette_Castform_[];
extern const u32 gMonPalette_Kecleon_[];
extern const u32 gMonPalette_Shuppet_[];
extern const u32 gMonPalette_Banette_[];
extern const u32 gMonPalette_Duskull_[];
extern const u32 gMonPalette_Dusclops_[];
extern const u32 gMonPalette_Tropius_[];
extern const u32 gMonPalette_Chimecho_[];
extern const u32 gMonPalette_Absol_[];
extern const u32 gMonPalette_Wynaut_[];
extern const u32 gMonPalette_Snorunt_[];
extern const u32 gMonPalette_Glalie_[];
extern const u32 gMonPalette_Spheal_[];
extern const u32 gMonPalette_Sealeo_[];
extern const u32 gMonPalette_Walrein_[];
extern const u32 gMonPalette_Clamperl_[];
extern const u32 gMonPalette_Huntail_[];
extern const u32 gMonPalette_Gorebyss_[];
extern const u32 gMonPalette_Relicanth_[];
extern const u32 gMonPalette_Luvdisc_[];
extern const u32 gMonPalette_Bagon_[];
extern const u32 gMonPalette_Shelgon_[];
extern const u32 gMonPalette_Salamence_[];
extern const u32 gMonPalette_Beldum_[];
extern const u32 gMonPalette_Metang_[];
extern const u32 gMonPalette_Metagross_[];
extern const u32 gMonPalette_Regirock_[];
extern const u32 gMonPalette_Regice_[];
extern const u32 gMonPalette_Registeel_[];
extern const u32 gMonPalette_Latias_[];
extern const u32 gMonPalette_Latios_[];
extern const u32 gMonPalette_Kyogre_[];
extern const u32 gMonPalette_Groudon_[];
extern const u32 gMonPalette_Rayquaza_[];
extern const u32 gMonPalette_Jirachi_[];
extern const u32 gMonPalette_Deoxys_[];
extern const u32 gMonPalette_Turtwig_[];
extern const u32 gMonPalette_Grotle_[];
extern const u32 gMonPalette_Torterra_[];
extern const u32 gMonPalette_Chimchar_[];
extern const u32 gMonPalette_Monferno_[];
extern const u32 gMonPalette_Infernape_[];
extern const u32 gMonPalette_Piplup_[];
extern const u32 gMonPalette_Prinplup_[];
extern const u32 gMonPalette_Empoleon_[];
extern const u32 gMonPalette_Starly_[];
extern const u32 gMonPalette_Staravia_[];
extern const u32 gMonPalette_Staraptor_[];
extern const u32 gMonPalette_Bidoof_[];
extern const u32 gMonPalette_Bibarel_[];
extern const u32 gMonPalette_Kricketot_[];
extern const u32 gMonPalette_Kricketune_[];
extern const u32 gMonPalette_Shinx_[];
extern const u32 gMonPalette_Luxio_[];
extern const u32 gMonPalette_Luxray_[];
extern const u32 gMonPalette_Budew_[];
extern const u32 gMonPalette_Roserade_[];
extern const u32 gMonPalette_Cranidos_[];
extern const u32 gMonPalette_Rampardos_[];
extern const u32 gMonPalette_Shieldon_[];
extern const u32 gMonPalette_Bastiodon_[];
extern const u32 gMonPalette_Burmy_[];
extern const u32 gMonPalette_Wormadam_[];
extern const u32 gMonPalette_Mothim_[];
extern const u32 gMonPalette_Combee_[];
extern const u32 gMonPalette_Vespiquen_[];
extern const u32 gMonPalette_Pachirisu_[];
extern const u32 gMonPalette_Buizel_[];
extern const u32 gMonPalette_Floatzel_[];
extern const u32 gMonPalette_Cherubi_[];
extern const u32 gMonPalette_Cherrim_[];
extern const u32 gMonPalette_Shellos_[];
extern const u32 gMonPalette_Gastrodon_[];
extern const u32 gMonPalette_Ambipom_[];
extern const u32 gMonPalette_Drifloon_[];
extern const u32 gMonPalette_Drifblim_[];
extern const u32 gMonPalette_Buneary_[];
extern const u32 gMonPalette_Lopunny_[];
extern const u32 gMonPalette_Mismagius_[];
extern const u32 gMonPalette_Honchkrow_[];
extern const u32 gMonPalette_Glameow_[];
extern const u32 gMonPalette_Purugly_[];
extern const u32 gMonPalette_Chingling_[];
extern const u32 gMonPalette_Stunky_[];
extern const u32 gMonPalette_Skuntank_[];
extern const u32 gMonPalette_Bronzor_[];
extern const u32 gMonPalette_Bronzong_[];
extern const u32 gMonPalette_Bonsly_[];
extern const u32 gMonPalette_MimeJr_[];
extern const u32 gMonPalette_Happiny_[];
extern const u32 gMonPalette_Chatot_[];
extern const u32 gMonPalette_Spiritomb_[];
extern const u32 gMonPalette_Gible_[];
extern const u32 gMonPalette_Gabite_[];
extern const u32 gMonPalette_Garchomp_[];
extern const u32 gMonPalette_Munchlax_[];
extern const u32 gMonPalette_Riolu_[];
extern const u32 gMonPalette_Lucario_[];
extern const u32 gMonPalette_Hippopotas_[];
extern const u32 gMonPalette_Hippowdon_[];
extern const u32 gMonPalette_Skorupi_[];
extern const u32 gMonPalette_Drapion_[];
extern const u32 gMonPalette_Croagunk_[];
extern const u32 gMonPalette_Toxicroak_[];
extern const u32 gMonPalette_Carnivine_[];
extern const u32 gMonPalette_Finneon_[];
extern const u32 gMonPalette_Lumineon_[];
extern const u32 gMonPalette_Mantyke_[];
extern const u32 gMonPalette_Snover_[];
extern const u32 gMonPalette_Abomasnow_[];
extern const u32 gMonPalette_Weavile_[];
extern const u32 gMonPalette_Magnezone_[];
extern const u32 gMonPalette_Lickilicky_[];
extern const u32 gMonPalette_Rhyperior_[];
extern const u32 gMonPalette_Tangrowth_[];
extern const u32 gMonPalette_Electivire_[];
extern const u32 gMonPalette_Magmortar_[];
extern const u32 gMonPalette_Togekiss_[];
extern const u32 gMonPalette_Yanmega_[];
extern const u32 gMonPalette_Leafeon_[];
extern const u32 gMonPalette_Glaceon_[];
extern const u32 gMonPalette_Gliscor_[];
extern const u32 gMonPalette_Mamoswine_[];
extern const u32 gMonPalette_PorygonZ_[];
extern const u32 gMonPalette_Gallade_[];
extern const u32 gMonPalette_Probopass_[];
extern const u32 gMonPalette_Dusknoir_[];
extern const u32 gMonPalette_Froslass_[];
extern const u32 gMonPalette_Rotom_[];
extern const u32 gMonPalette_Uxie_[];
extern const u32 gMonPalette_Mesprit_[];
extern const u32 gMonPalette_Azelf_[];
extern const u32 gMonPalette_Dialga_[];
extern const u32 gMonPalette_Palkia_[];
extern const u32 gMonPalette_Heatran_[];
extern const u32 gMonPalette_Regigigas_[];
extern const u32 gMonPalette_Giratina_[];
extern const u32 gMonPalette_Cresselia_[];
extern const u32 gMonPalette_Phione_[];
extern const u32 gMonPalette_Manaphy_[];
extern const u32 gMonPalette_Darkrai_[];
extern const u32 gMonPalette_Shaymin_[];
extern const u32 gMonPalette_Arceus_[];
extern const u32 gMonPalette_Victini_[];
extern const u32 gMonPalette_Snivy_[];
extern const u32 gMonPalette_Servine_[];
extern const u32 gMonPalette_Serperior_[];
extern const u32 gMonPalette_Tepig_[];
extern const u32 gMonPalette_Pignite_[];
extern const u32 gMonPalette_Emboar_[];
extern const u32 gMonPalette_Oshawott_[];
extern const u32 gMonPalette_Dewott_[];
extern const u32 gMonPalette_Samurott_[];
extern const u32 gMonPalette_Patrat_[];
extern const u32 gMonPalette_Watchog_[];
extern const u32 gMonPalette_Lillipup_[];
extern const u32 gMonPalette_Herdier_[];
extern const u32 gMonPalette_Stoutland_[];
extern const u32 gMonPalette_Purrloin_[];
extern const u32 gMonPalette_Liepard_[];
extern const u32 gMonPalette_Pansage_[];
extern const u32 gMonPalette_Simisage_[];
extern const u32 gMonPalette_Pansear_[];
extern const u32 gMonPalette_Simisear_[];
extern const u32 gMonPalette_Panpour_[];
extern const u32 gMonPalette_Simipour_[];
extern const u32 gMonPalette_Munna_[];
extern const u32 gMonPalette_Musharna_[];
extern const u32 gMonPalette_Pidove_[];
extern const u32 gMonPalette_Tranquill_[];
extern const u32 gMonPalette_Unfezant_[];
extern const u32 gMonPalette_Blitzle_[];
extern const u32 gMonPalette_Zebstrika_[];
extern const u32 gMonPalette_Roggenrola_[];
extern const u32 gMonPalette_Boldore_[];
extern const u32 gMonPalette_Gigalith_[];
extern const u32 gMonPalette_Woobat_[];
extern const u32 gMonPalette_Swoobat_[];
extern const u32 gMonPalette_Drilbur_[];
extern const u32 gMonPalette_Excadrill_[];
extern const u32 gMonPalette_Audino_[];
extern const u32 gMonPalette_Timburr_[];
extern const u32 gMonPalette_Gurdurr_[];
extern const u32 gMonPalette_Conkeldurr_[];
extern const u32 gMonPalette_Tympole_[];
extern const u32 gMonPalette_Palpitoad_[];
extern const u32 gMonPalette_Seismitoad_[];
extern const u32 gMonPalette_Throh_[];
extern const u32 gMonPalette_Sawk_[];
extern const u32 gMonPalette_Sewaddle_[];
extern const u32 gMonPalette_Swadloon_[];
extern const u32 gMonPalette_Leavanny_[];
extern const u32 gMonPalette_Venipede_[];
extern const u32 gMonPalette_Whirlipede_[];
extern const u32 gMonPalette_Scolipede_[];
extern const u32 gMonPalette_Cottonee_[];
extern const u32 gMonPalette_Whimsicott_[];
extern const u32 gMonPalette_Petilil_[];
extern const u32 gMonPalette_Lilligant_[];
extern const u32 gMonPalette_Basculin_[];
extern const u32 gMonPalette_Sandile_[];
extern const u32 gMonPalette_Krokorok_[];
extern const u32 gMonPalette_Krookodile_[];
extern const u32 gMonPalette_Darumaka_[];
extern const u32 gMonPalette_Darmanitan_[];
extern const u32 gMonPalette_Maractus_[];
extern const u32 gMonPalette_Dwebble_[];
extern const u32 gMonPalette_Crustle_[];
extern const u32 gMonPalette_Scraggy_[];
extern const u32 gMonPalette_Scrafty_[];
extern const u32 gMonPalette_Sigilyph_[];
extern const u32 gMonPalette_Yamask_[];
extern const u32 gMonPalette_Cofagrigus_[];
extern const u32 gMonPalette_Tirtouga_[];
extern const u32 gMonPalette_Carracosta_[];
extern const u32 gMonPalette_Archen_[];
extern const u32 gMonPalette_Archeops_[];
extern const u32 gMonPalette_Trubbish_[];
extern const u32 gMonPalette_Garbodor_[];
extern const u32 gMonPalette_Zorua_[];
extern const u32 gMonPalette_Zoroark_[];
extern const u32 gMonPalette_Minccino_[];
extern const u32 gMonPalette_Cinccino_[];
extern const u32 gMonPalette_Gothita_[];
extern const u32 gMonPalette_Gothorita_[];
extern const u32 gMonPalette_Gothitelle_[];
extern const u32 gMonPalette_Solosis_[];
extern const u32 gMonPalette_Duosion_[];
extern const u32 gMonPalette_Reuniclus_[];
extern const u32 gMonPalette_Ducklett_[];
extern const u32 gMonPalette_Swanna_[];
extern const u32 gMonPalette_Vanillite_[];
extern const u32 gMonPalette_Vanillish_[];
extern const u32 gMonPalette_Vanilluxe_[];
extern const u32 gMonPalette_Deerling_[];
extern const u32 gMonPalette_Sawsbuck_[];
extern const u32 gMonPalette_Emolga_[];
extern const u32 gMonPalette_Karrablast_[];
extern const u32 gMonPalette_Escavalier_[];
extern const u32 gMonPalette_Foongus_[];
extern const u32 gMonPalette_Amoonguss_[];
extern const u32 gMonPalette_Frillish_[];
extern const u32 gMonPalette_Jellicent_[];
extern const u32 gMonPalette_Alomomola_[];
extern const u32 gMonPalette_Joltik_[];
extern const u32 gMonPalette_Galvantula_[];
extern const u32 gMonPalette_Ferroseed_[];
extern const u32 gMonPalette_Ferrothorn_[];
extern const u32 gMonPalette_Klink_[];
extern const u32 gMonPalette_Klang_[];
extern const u32 gMonPalette_Klinklang_[];
extern const u32 gMonPalette_Tynamo_[];
extern const u32 gMonPalette_Eelektrik_[];
extern const u32 gMonPalette_Eelektross_[];
extern const u32 gMonPalette_Elgyem_[];
extern const u32 gMonPalette_Beheeyem_[];
extern const u32 gMonPalette_Litwick_[];
extern const u32 gMonPalette_Lampent_[];
extern const u32 gMonPalette_Chandelure_[];
extern const u32 gMonPalette_Axew_[];
extern const u32 gMonPalette_Fraxure_[];
extern const u32 gMonPalette_Haxorus_[];
extern const u32 gMonPalette_Cubchoo_[];
extern const u32 gMonPalette_Beartic_[];
extern const u32 gMonPalette_Cryogonal_[];
extern const u32 gMonPalette_Shelmet_[];
extern const u32 gMonPalette_Accelgor_[];
extern const u32 gMonPalette_Stunfisk_[];
extern const u32 gMonPalette_Mienfoo_[];
extern const u32 gMonPalette_Mienshao_[];
extern const u32 gMonPalette_Druddigon_[];
extern const u32 gMonPalette_Golett_[];
extern const u32 gMonPalette_Golurk_[];
extern const u32 gMonPalette_Pawniard_[];
extern const u32 gMonPalette_Bisharp_[];
extern const u32 gMonPalette_Bouffalant_[];
extern const u32 gMonPalette_Rufflet_[];
extern const u32 gMonPalette_Braviary_[];
extern const u32 gMonPalette_Vullaby_[];
extern const u32 gMonPalette_Mandibuzz_[];
extern const u32 gMonPalette_Heatmor_[];
extern const u32 gMonPalette_Durant_[];
extern const u32 gMonPalette_Deino_[];
extern const u32 gMonPalette_Zweilous_[];
extern const u32 gMonPalette_Hydreigon_[];
extern const u32 gMonPalette_Larvesta_[];
extern const u32 gMonPalette_Volcarona_[];
extern const u32 gMonPalette_Cobalion_[];
extern const u32 gMonPalette_Terrakion_[];
extern const u32 gMonPalette_Virizion_[];
extern const u32 gMonPalette_Tornadus_[];
extern const u32 gMonPalette_Thundurus_[];
extern const u32 gMonPalette_Reshiram_[];
extern const u32 gMonPalette_Zekrom_[];
extern const u32 gMonPalette_Landorus_[];
extern const u32 gMonPalette_Kyurem_[];
extern const u32 gMonPalette_Keldeo_[];
extern const u32 gMonPalette_Meloetta_[];
extern const u32 gMonPalette_Genesect_[];
extern const u32 gMonPalette_Chespin_[];
extern const u32 gMonPalette_Quilladin_[];
extern const u32 gMonPalette_Chesnaught_[];
extern const u32 gMonPalette_Fennekin_[];
extern const u32 gMonPalette_Braixen_[];
extern const u32 gMonPalette_Delphox_[];
extern const u32 gMonPalette_Froakie_[];
extern const u32 gMonPalette_Frogadier_[];
extern const u32 gMonPalette_Greninja_[];
extern const u32 gMonPalette_Bunnelby_[];
extern const u32 gMonPalette_Diggersby_[];
extern const u32 gMonPalette_Fletchling_[];
extern const u32 gMonPalette_Flechinder_[];
extern const u32 gMonPalette_Talonflame_[];
extern const u32 gMonPalette_Scatterbug_[];
extern const u32 gMonPalette_Spewpa_[];
extern const u32 gMonPalette_Vivillon_[];
extern const u32 gMonPalette_Litleo_[];
extern const u32 gMonPalette_Pyroar_[];
extern const u32 gMonPalette_Flabebe_[];
extern const u32 gMonPalette_Floette_[];
extern const u32 gMonPalette_Florges_[];
extern const u32 gMonPalette_Skiddo_[];
extern const u32 gMonPalette_Gogoat_[];
extern const u32 gMonPalette_Pancham_[];
extern const u32 gMonPalette_Pangoro_[];
extern const u32 gMonPalette_Furfrou_[];
extern const u32 gMonPalette_Espurr_[];
extern const u32 gMonPalette_Meowstic_[];
extern const u32 gMonPalette_Honedge_[];
extern const u32 gMonPalette_Doublade_[];
extern const u32 gMonPalette_Aegislash_[];
extern const u32 gMonPalette_Spritzee_[];
extern const u32 gMonPalette_Aromatisse_[];
extern const u32 gMonPalette_Swirlix_[];
extern const u32 gMonPalette_Slurpuff_[];
extern const u32 gMonPalette_Inkay_[];
extern const u32 gMonPalette_Malamar_[];
extern const u32 gMonPalette_Binacle_[];
extern const u32 gMonPalette_Barbaracle_[];
extern const u32 gMonPalette_Skrelp_[];
extern const u32 gMonPalette_Dragalge_[];
extern const u32 gMonPalette_Clauncher_[];
extern const u32 gMonPalette_Clawitzer_[];
extern const u32 gMonPalette_Helioptile_[];
extern const u32 gMonPalette_Heliolisk_[];
extern const u32 gMonPalette_Tyrunt_[];
extern const u32 gMonPalette_Tyrantrum_[];
extern const u32 gMonPalette_Amaura_[];
extern const u32 gMonPalette_Aurorus_[];
extern const u32 gMonPalette_Sylveon_[];
extern const u32 gMonPalette_Hawlucha_[];
extern const u32 gMonPalette_Dedenne_[];
extern const u32 gMonPalette_Carbink_[];
extern const u32 gMonPalette_Goomy_[];
extern const u32 gMonPalette_Sliggoo_[];
extern const u32 gMonPalette_Goodra_[];
extern const u32 gMonPalette_Klefki_[];
extern const u32 gMonPalette_Phantump_[];
extern const u32 gMonPalette_Trevenant_[];
extern const u32 gMonPalette_Pumpkaboo_[];
extern const u32 gMonPalette_Gourgeist_[];
extern const u32 gMonPalette_Bergmite_[];
extern const u32 gMonPalette_Avalugg_[];
extern const u32 gMonPalette_Noibat_[];
extern const u32 gMonPalette_Noivern_[];
extern const u32 gMonPalette_Xerneas_[];
extern const u32 gMonPalette_Yveltal_[];
extern const u32 gMonPalette_Zygarde_[];
extern const u32 gMonPalette_Diancie_[];
extern const u32 gMonPalette_Hoopa_[];
extern const u32 gMonPalette_Volcanion_[];
extern const u32 gMonPalette_Rowlet_[];
extern const u32 gMonPalette_Dartrix_[];
extern const u32 gMonPalette_Decidueye_[];
extern const u32 gMonPalette_Litten_[];
extern const u32 gMonPalette_Torracat_[];
extern const u32 gMonPalette_Incineroar_[];
extern const u32 gMonPalette_Popplio_[];
extern const u32 gMonPalette_Brionne_[];
extern const u32 gMonPalette_Primarina_[];
extern const u32 gMonPalette_Pikipek_[];
extern const u32 gMonPalette_Trumbeak_[];
extern const u32 gMonPalette_Toucannon_[];
extern const u32 gMonPalette_Yungoos_[];
extern const u32 gMonPalette_Gumshoos_[];
extern const u32 gMonPalette_Grubbin_[];
extern const u32 gMonPalette_Charjabug_[];
extern const u32 gMonPalette_Vikavolt_[];
extern const u32 gMonPalette_Crabrawler_[];
extern const u32 gMonPalette_Crabminabl_[];
extern const u32 gMonPalette_Oricorio_[];
extern const u32 gMonPalette_Cutiefly_[];
extern const u32 gMonPalette_Ribombee_[];
extern const u32 gMonPalette_Rockruff_[];
extern const u32 gMonPalette_Lycanroc_[];
extern const u32 gMonPalette_Wishiwashi_[];
extern const u32 gMonPalette_Mareanie_[];
extern const u32 gMonPalette_Toxapex_[];
extern const u32 gMonPalette_Mudbray_[];
extern const u32 gMonPalette_Mudsdale_[];
extern const u32 gMonPalette_Dewpider_[];
extern const u32 gMonPalette_Araquanid_[];
extern const u32 gMonPalette_Fomantis_[];
extern const u32 gMonPalette_Lurantis_[];
extern const u32 gMonPalette_Morelull_[];
extern const u32 gMonPalette_Shiinotic_[];
extern const u32 gMonPalette_Salandit_[];
extern const u32 gMonPalette_Salazzle_[];
extern const u32 gMonPalette_Stufful_[];
extern const u32 gMonPalette_Bewear_[];
extern const u32 gMonPalette_Bounsweet_[];
extern const u32 gMonPalette_Steenee_[];
extern const u32 gMonPalette_Tsareena_[];
extern const u32 gMonPalette_Comfey_[];
extern const u32 gMonPalette_Oranguru_[];
extern const u32 gMonPalette_Passimian_[];
extern const u32 gMonPalette_Wimpod_[];
extern const u32 gMonPalette_Golisopod_[];
extern const u32 gMonPalette_Sandygast_[];
extern const u32 gMonPalette_Palossand_[];
extern const u32 gMonPalette_Pyukumuku_[];
extern const u32 gMonPalette_TypeNull_[];
extern const u32 gMonPalette_Silvally_[];
extern const u32 gMonPalette_Minior_[];
extern const u32 gMonPalette_Komala_[];
extern const u32 gMonPalette_Turtonator_[];
extern const u32 gMonPalette_Togedemaru_[];
extern const u32 gMonPalette_Mimikyu_[];
extern const u32 gMonPalette_Bruxish_[];
extern const u32 gMonPalette_Drampa_[];
extern const u32 gMonPalette_Dhelmise_[];
extern const u32 gMonPalette_Jangmoo_[];
extern const u32 gMonPalette_Hakamoo_[];
extern const u32 gMonPalette_Kommoo_[];
extern const u32 gMonPalette_TapuKoko_[];
extern const u32 gMonPalette_TapuLele_[];
extern const u32 gMonPalette_TapuBulu_[];
extern const u32 gMonPalette_TapuFini_[];
extern const u32 gMonPalette_Cosmog_[];
extern const u32 gMonPalette_Cosmoem_[];
extern const u32 gMonPalette_Solgaleo_[];
extern const u32 gMonPalette_Lunala_[];
extern const u32 gMonPalette_Nihilego_[];
extern const u32 gMonPalette_Buzzwole_[];
extern const u32 gMonPalette_Pheromosa_[];
extern const u32 gMonPalette_Xurkitree_[];
extern const u32 gMonPalette_Celesteela_[];
extern const u32 gMonPalette_Kartana_[];
extern const u32 gMonPalette_Guzzlord_[];
extern const u32 gMonPalette_Necrozma_[];
extern const u32 gMonPalette_Magearna_[];
extern const u32 gMonPalette_Marshadow_[];
extern const u32 gMonPalette_Poipole_[];
extern const u32 gMonPalette_Naganadel_[];
extern const u32 gMonPalette_Stakataka_[];
extern const u32 gMonPalette_Blacephaln_[];
extern const u32 gMonPalette_Zeraora_[];
extern const u32 gMonPalette_Meltan_[];
extern const u32 gMonPalette_Melmetal_[];
extern const u32 gMonPalette_Grookey_[];
extern const u32 gMonPalette_Thwackey_[];
extern const u32 gMonPalette_Rillaboom_[];
extern const u32 gMonPalette_Scorbunny_[];
extern const u32 gMonPalette_Raboot_[];
extern const u32 gMonPalette_Cinderace_[];
extern const u32 gMonPalette_Sobble_[];
extern const u32 gMonPalette_Drizzile_[];
extern const u32 gMonPalette_Inteleon_[];
extern const u32 gMonPalette_Skwovet_[];
extern const u32 gMonPalette_Greedent_[];
extern const u32 gMonPalette_Rookidee_[];
extern const u32 gMonPalette_Corvisquir_[];
extern const u32 gMonPalette_Corviknigh_[];
extern const u32 gMonPalette_Blipbug_[];
extern const u32 gMonPalette_Dottler_[];
extern const u32 gMonPalette_Orbeetle_[];
extern const u32 gMonPalette_Nickit_[];
extern const u32 gMonPalette_Thievul_[];
extern const u32 gMonPalette_Gossifleur_[];
extern const u32 gMonPalette_Eldegoss_[];
extern const u32 gMonPalette_Wooloo_[];
extern const u32 gMonPalette_Dubwool_[];
extern const u32 gMonPalette_Chewtle_[];
extern const u32 gMonPalette_Drednaw_[];
extern const u32 gMonPalette_Yamper_[];
extern const u32 gMonPalette_Boltund_[];
extern const u32 gMonPalette_Rolycoly_[];
extern const u32 gMonPalette_Carkol_[];
extern const u32 gMonPalette_Coalossal_[];
extern const u32 gMonPalette_Applin_[];
extern const u32 gMonPalette_Flapple_[];
extern const u32 gMonPalette_Appletun_[];
extern const u32 gMonPalette_Silicobra_[];
extern const u32 gMonPalette_Sandaconda_[];
extern const u32 gMonPalette_Cramorant_[];
extern const u32 gMonPalette_Arrokuda_[];
extern const u32 gMonPalette_Barraskewd_[];
extern const u32 gMonPalette_Toxel_[];
extern const u32 gMonPalette_Toxtricity_[];
extern const u32 gMonPalette_Sizzlipede_[];
extern const u32 gMonPalette_Centiskorc_[];
extern const u32 gMonPalette_Clobbopus_[];
extern const u32 gMonPalette_Grapploct_[];
extern const u32 gMonPalette_Sinistea_[];
extern const u32 gMonPalette_Polteageis_[];
extern const u32 gMonPalette_Hatenna_[];
extern const u32 gMonPalette_Hattrem_[];
extern const u32 gMonPalette_Hatterene_[];
extern const u32 gMonPalette_Impidimp_[];
extern const u32 gMonPalette_Morgrem_[];
extern const u32 gMonPalette_Grimmsnarl_[];
extern const u32 gMonPalette_Obstagoon_[];
extern const u32 gMonPalette_Perrserker_[];
extern const u32 gMonPalette_Cursola_[];
extern const u32 gMonPalette_Sirfetchd_[];
extern const u32 gMonPalette_MrRime_[];
extern const u32 gMonPalette_Runerigus_[];
extern const u32 gMonPalette_Milcery_[];
extern const u32 gMonPalette_Alcremie_[];
extern const u32 gMonPalette_Falinks_[];
extern const u32 gMonPalette_Pincurchin_[];
extern const u32 gMonPalette_Snom_[];
extern const u32 gMonPalette_Frosmoth_[];
extern const u32 gMonPalette_Stonjourne_[];
extern const u32 gMonPalette_Eiscue_[];
extern const u32 gMonPalette_Indeedee_[];
extern const u32 gMonPalette_Morpeko_[];
extern const u32 gMonPalette_Cufant_[];
extern const u32 gMonPalette_Copperajah_[];
extern const u32 gMonPalette_Dracozolt_[];
extern const u32 gMonPalette_Arctozolt_[];
extern const u32 gMonPalette_Dracovish_[];
extern const u32 gMonPalette_Arctovish_[];
extern const u32 gMonPalette_Duraludon_[];
extern const u32 gMonPalette_Dreepy_[];
extern const u32 gMonPalette_Drakloak_[];
extern const u32 gMonPalette_Dragapult_[];
extern const u32 gMonPalette_Zacian_[];
extern const u32 gMonPalette_Zamazenta_[];
extern const u32 gMonPalette_Eternatus_[];
extern const u32 gMonPalette_Kubfu_[];
extern const u32 gMonPalette_Urshifu_[];
extern const u32 gMonPalette_Zarude_[];
extern const u32 gMonPalette_Regieleki_[];
extern const u32 gMonPalette_Regidrago_[];
extern const u32 gMonPalette_Glastrier_[];
extern const u32 gMonPalette_Spectrier_[];
extern const u32 gMonPalette_Calyrex_[];
extern const u32 gMonPalette_Wyrdeer_[];
extern const u32 gMonPalette_Kleavor_[];
extern const u32 gMonPalette_Ursaluna_[];
extern const u32 gMonPalette_Bsculegion_[];
extern const u32 gMonPalette_Sneasler_[];
extern const u32 gMonPalette_Overqwil_[];
extern const u32 gMonPalette_Enamorus_[];
extern const u32 gMonPalette_Venusaur2_[];
extern const u32 gMonPalette_Charizard2_[];
extern const u32 gMonPalette_Charizard3_[];
extern const u32 gMonPalette_Blastoise2_[];
extern const u32 gMonPalette_Beedrill2_[];
extern const u32 gMonPalette_Pidgeot2_[];
extern const u32 gMonPalette_Alakazam2_[];
extern const u32 gMonPalette_Slowbro2_[];
extern const u32 gMonPalette_Gengar2_[];
extern const u32 gMonPalette_Kangaskhan2_[];
extern const u32 gMonPalette_Pinsir2_[];
extern const u32 gMonPalette_Gyarados2_[];
extern const u32 gMonPalette_Aerodactyl2_[];
extern const u32 gMonPalette_Mewtwo2_[];
extern const u32 gMonPalette_Mewtwo3_[];
extern const u32 gMonPalette_Ampharos2_[];
extern const u32 gMonPalette_Steelix2_[];
extern const u32 gMonPalette_Scizor2_[];
extern const u32 gMonPalette_Heracross2_[];
extern const u32 gMonPalette_Houndoom2_[];
extern const u32 gMonPalette_Tyranitar2_[];
extern const u32 gMonPalette_Sceptile2_[];
extern const u32 gMonPalette_Blaziken2_[];
extern const u32 gMonPalette_Swampert2_[];
extern const u32 gMonPalette_Gardevoir2_[];
extern const u32 gMonPalette_Sableye2_[];
extern const u32 gMonPalette_Mawile2_[];
extern const u32 gMonPalette_Aggron2_[];
extern const u32 gMonPalette_Medicham2_[];
extern const u32 gMonPalette_Manectric2_[];
extern const u32 gMonPalette_Sharpedo2_[];
extern const u32 gMonPalette_Camerupt2_[];
extern const u32 gMonPalette_Altaria2_[];
extern const u32 gMonPalette_Banette2_[];
extern const u32 gMonPalette_Absol2_[];
extern const u32 gMonPalette_Glalie2_[];
extern const u32 gMonPalette_Salamence2_[];
extern const u32 gMonPalette_Metagross2_[];
extern const u32 gMonPalette_Latias2_[];
extern const u32 gMonPalette_Latios2_[];
extern const u32 gMonPalette_Lopunny2_[];
extern const u32 gMonPalette_Garchomp2_[];
extern const u32 gMonPalette_Lucario2_[];
extern const u32 gMonPalette_Abomasnow2_[];
extern const u32 gMonPalette_Gallade2_[];
extern const u32 gMonPalette_Audino2_[];
extern const u32 gMonPalette_Diancie2_[];
extern const u32 gMonPalette_Rayquaza2_[];
extern const u32 gMonPalette_Kyogre2_[];
extern const u32 gMonPalette_Groudon2_[];
extern const u32 gMonPalette_Rattata2_[];
extern const u32 gMonPalette_Raticate2_[];
extern const u32 gMonPalette_Raichu2_[];
extern const u32 gMonPalette_Sandshrew2_[];
extern const u32 gMonPalette_Sandslash2_[];
extern const u32 gMonPalette_Vulpix2_[];
extern const u32 gMonPalette_Ninetales2_[];
extern const u32 gMonPalette_Diglett2_[];
extern const u32 gMonPalette_Dugtrio2_[];
extern const u32 gMonPalette_Meowth2_[];
extern const u32 gMonPalette_Persian2_[];
extern const u32 gMonPalette_Geodude2_[];
extern const u32 gMonPalette_Graveler2_[];
extern const u32 gMonPalette_Golem2_[];
extern const u32 gMonPalette_Grimer2_[];
extern const u32 gMonPalette_Muk2_[];
extern const u32 gMonPalette_Exeggutor2_[];
extern const u32 gMonPalette_Marowak2_[];
extern const u32 gMonPalette_Meowth3_[];
extern const u32 gMonPalette_Ponyta2_[];
extern const u32 gMonPalette_Rapidash2_[];
extern const u32 gMonPalette_Slowpoke2_[];
extern const u32 gMonPalette_Slowbro3_[];
extern const u32 gMonPalette_Farfetchd2_[];
extern const u32 gMonPalette_Weezing2_[];
extern const u32 gMonPalette_MrMime2_[];
extern const u32 gMonPalette_Articuno2_[];
extern const u32 gMonPalette_Zapdos2_[];
extern const u32 gMonPalette_Moltres2_[];
extern const u32 gMonPalette_Slowking2_[];
extern const u32 gMonPalette_Corsola2_[];
extern const u32 gMonPalette_Zigzagoon2_[];
extern const u32 gMonPalette_Linoone2_[];
extern const u32 gMonPalette_Darumaka2_[];
extern const u32 gMonPalette_Darmanitan2_[];
extern const u32 gMonPalette_Yamask2_[];
extern const u32 gMonPalette_Stunfisk2_[];
extern const u32 gMonPalette_Growlithe2_[];
extern const u32 gMonPalette_Arcanine2_[];
extern const u32 gMonPalette_Voltorb2_[];
extern const u32 gMonPalette_Electrode2_[];
extern const u32 gMonPalette_Typhlosion2_[];
extern const u32 gMonPalette_Qwilfish2_[];
extern const u32 gMonPalette_Sneasel2_[];
extern const u32 gMonPalette_Samurott2_[];
extern const u32 gMonPalette_Lilligant2_[];
extern const u32 gMonPalette_Zorua2_[];
extern const u32 gMonPalette_Zoroark2_[];
extern const u32 gMonPalette_Braviary2_[];
extern const u32 gMonPalette_Sliggoo2_[];
extern const u32 gMonPalette_Goodra2_[];
extern const u32 gMonPalette_Avalugg2_[];
extern const u32 gMonPalette_Decidueye2_[];
extern const u32 gMonPalette_Pikachu2_[];
extern const u32 gMonPalette_Pikachu3_[];
extern const u32 gMonPalette_Pikachu4_[];
extern const u32 gMonPalette_Pikachu5_[];
extern const u32 gMonPalette_Pikachu6_[];
extern const u32 gMonPalette_Pikachu7_[];
extern const u32 gMonPalette_Pikachu8_[];
extern const u32 gMonPalette_Pikachu9_[];
extern const u32 gMonPalette_Pikachu10_[];
extern const u32 gMonPalette_Pikachu11_[];
extern const u32 gMonPalette_Pikachu12_[];
extern const u32 gMonPalette_Pikachu13_[];
extern const u32 gMonPalette_Pikachu14_[];
extern const u32 gMonPalette_Pikachu15_[];
extern const u32 gMonPalette_Pichu2_[];
extern const u32 gMonPalette_UnownB_[];
extern const u32 gMonPalette_UnownC_[];
extern const u32 gMonPalette_UnownD_[];
extern const u32 gMonPalette_UnownE_[];
extern const u32 gMonPalette_UnownF_[];
extern const u32 gMonPalette_UnownG_[];
extern const u32 gMonPalette_UnownH_[];
extern const u32 gMonPalette_UnownI_[];
extern const u32 gMonPalette_UnownJ_[];
extern const u32 gMonPalette_UnownK_[];
extern const u32 gMonPalette_UnownL_[];
extern const u32 gMonPalette_UnownM_[];
extern const u32 gMonPalette_UnownN_[];
extern const u32 gMonPalette_UnownO_[];
extern const u32 gMonPalette_UnownP_[];
extern const u32 gMonPalette_UnownQ_[];
extern const u32 gMonPalette_UnownR_[];
extern const u32 gMonPalette_UnownS_[];
extern const u32 gMonPalette_UnownT_[];
extern const u32 gMonPalette_UnownU_[];
extern const u32 gMonPalette_UnownV_[];
extern const u32 gMonPalette_UnownW_[];
extern const u32 gMonPalette_UnownX_[];
extern const u32 gMonPalette_UnownY_[];
extern const u32 gMonPalette_UnownZ_[];
extern const u32 gMonPalette_UnownEMark_[];
extern const u32 gMonPalette_UnownQMark_[];
extern const u32 gMonPalette_Castform2_[];
extern const u32 gMonPalette_Castform3_[];
extern const u32 gMonPalette_Castform4_[];
extern const u32 gMonPalette_Deoxys2_[];
extern const u32 gMonPalette_Deoxys3_[];
extern const u32 gMonPalette_Deoxys4_[];
extern const u32 gMonPalette_Burmy2_[];
extern const u32 gMonPalette_Burmy3_[];
extern const u32 gMonPalette_Wormadam2_[];
extern const u32 gMonPalette_Wormadam3_[];
extern const u32 gMonPalette_Cherrim2_[];
extern const u32 gMonPalette_Shellos2_[];
extern const u32 gMonPalette_Gastrodon2_[];
extern const u32 gMonPalette_Rotom2_[];
extern const u32 gMonPalette_Rotom3_[];
extern const u32 gMonPalette_Rotom4_[];
extern const u32 gMonPalette_Rotom5_[];
extern const u32 gMonPalette_Rotom6_[];
extern const u32 gMonPalette_Dialga2_[];
extern const u32 gMonPalette_Palkia2_[];
extern const u32 gMonPalette_Giratina2_[];
extern const u32 gMonPalette_Shaymin2_[];
extern const u32 gMonPalette_Arceus2_[];
extern const u32 gMonPalette_Arceus3_[];
extern const u32 gMonPalette_Arceus4_[];
extern const u32 gMonPalette_Arceus5_[];
extern const u32 gMonPalette_Arceus6_[];
extern const u32 gMonPalette_Arceus7_[];
extern const u32 gMonPalette_Arceus8_[];
extern const u32 gMonPalette_Arceus9_[];
extern const u32 gMonPalette_Arceus10_[];
extern const u32 gMonPalette_Arceus11_[];
extern const u32 gMonPalette_Arceus12_[];
extern const u32 gMonPalette_Arceus13_[];
extern const u32 gMonPalette_Arceus14_[];
extern const u32 gMonPalette_Arceus15_[];
extern const u32 gMonPalette_Arceus16_[];
extern const u32 gMonPalette_Arceus17_[];
extern const u32 gMonPalette_Arceus18_[];
extern const u32 gMonPalette_Basculin2_[];
extern const u32 gMonPalette_Basculin3_[];
extern const u32 gMonPalette_Darmanitan3_[];
extern const u32 gMonPalette_Darmanitan4_[];
extern const u32 gMonPalette_Deerling2_[];
extern const u32 gMonPalette_Deerling3_[];
extern const u32 gMonPalette_Deerling4_[];
extern const u32 gMonPalette_Sawsbuck2_[];
extern const u32 gMonPalette_Sawsbuck3_[];
extern const u32 gMonPalette_Sawsbuck4_[];
extern const u32 gMonPalette_Tornadus2_[];
extern const u32 gMonPalette_Thundurus2_[];
extern const u32 gMonPalette_Landorus2_[];
extern const u32 gMonPalette_Enamorus2_[];
extern const u32 gMonPalette_Kyurem2_[];
extern const u32 gMonPalette_Kyurem3_[];
extern const u32 gMonPalette_Keldeo2_[];
extern const u32 gMonPalette_Meloetta2_[];
extern const u32 gMonPalette_Genesect2_[];
extern const u32 gMonPalette_Genesect3_[];
extern const u32 gMonPalette_Genesect4_[];
extern const u32 gMonPalette_Genesect5_[];
extern const u32 gMonPalette_Greninja2_[];
extern const u32 gMonPalette_Greninja3_[];
extern const u32 gMonPalette_Vivillon2_[];
extern const u32 gMonPalette_Vivillon3_[];
extern const u32 gMonPalette_Vivillon4_[];
extern const u32 gMonPalette_Vivillon5_[];
extern const u32 gMonPalette_Vivillon6_[];
extern const u32 gMonPalette_Vivillon7_[];
extern const u32 gMonPalette_Vivillon8_[];
extern const u32 gMonPalette_Vivillon9_[];
extern const u32 gMonPalette_Vivillon10_[];
extern const u32 gMonPalette_Vivillon11_[];
extern const u32 gMonPalette_Vivillon12_[];
extern const u32 gMonPalette_Vivillon13_[];
extern const u32 gMonPalette_Vivillon14_[];
extern const u32 gMonPalette_Vivillon15_[];
extern const u32 gMonPalette_Vivillon16_[];
extern const u32 gMonPalette_Vivillon17_[];
extern const u32 gMonPalette_Vivillon18_[];
extern const u32 gMonPalette_Vivillon19_[];
extern const u32 gMonPalette_Vivillon20_[];
extern const u32 gMonPalette_Flabebe2_[];
extern const u32 gMonPalette_Flabebe3_[];
extern const u32 gMonPalette_Flabebe4_[];
extern const u32 gMonPalette_Flabebe5_[];
extern const u32 gMonPalette_Floette2_[];
extern const u32 gMonPalette_Floette3_[];
extern const u32 gMonPalette_Floette4_[];
extern const u32 gMonPalette_Floette5_[];
extern const u32 gMonPalette_Floette6_[];
extern const u32 gMonPalette_Florges2_[];
extern const u32 gMonPalette_Florges3_[];
extern const u32 gMonPalette_Florges4_[];
extern const u32 gMonPalette_Florges5_[];
extern const u32 gMonPalette_Furfrou2_[];
extern const u32 gMonPalette_Furfrou3_[];
extern const u32 gMonPalette_Furfrou4_[];
extern const u32 gMonPalette_Furfrou5_[];
extern const u32 gMonPalette_Furfrou6_[];
extern const u32 gMonPalette_Furfrou7_[];
extern const u32 gMonPalette_Furfrou8_[];
extern const u32 gMonPalette_Furfrou9_[];
extern const u32 gMonPalette_Furfrou10_[];
extern const u32 gMonPalette_Meowstic2_[];
extern const u32 gMonPalette_Aegislash2_[];
extern const u32 gMonPalette_Pumpkaboo2_[];
extern const u32 gMonPalette_Pumpkaboo3_[];
extern const u32 gMonPalette_Pumpkaboo4_[];
extern const u32 gMonPalette_Gourgeist2_[];
extern const u32 gMonPalette_Gourgeist3_[];
extern const u32 gMonPalette_Gourgeist4_[];
extern const u32 gMonPalette_Xerneas2_[];
extern const u32 gMonPalette_Zygarde2_[];
extern const u32 gMonPalette_Zygarde3_[];
extern const u32 gMonPalette_Zygarde4_[];
extern const u32 gMonPalette_Zygarde5_[];
extern const u32 gMonPalette_Hoopa2_[];
extern const u32 gMonPalette_Oricorio2_[];
extern const u32 gMonPalette_Oricorio3_[];
extern const u32 gMonPalette_Oricorio4_[];
extern const u32 gMonPalette_Rockruff2_[];
extern const u32 gMonPalette_Lycanroc2_[];
extern const u32 gMonPalette_Lycanroc3_[];
extern const u32 gMonPalette_Wishiwashi2_[];
extern const u32 gMonPalette_Silvally2_[];
extern const u32 gMonPalette_Silvally3_[];
extern const u32 gMonPalette_Silvally4_[];
extern const u32 gMonPalette_Silvally5_[];
extern const u32 gMonPalette_Silvally6_[];
extern const u32 gMonPalette_Silvally7_[];
extern const u32 gMonPalette_Silvally8_[];
extern const u32 gMonPalette_Silvally9_[];
extern const u32 gMonPalette_Silvally10_[];
extern const u32 gMonPalette_Silvally11_[];
extern const u32 gMonPalette_Silvally12_[];
extern const u32 gMonPalette_Silvally13_[];
extern const u32 gMonPalette_Silvally14_[];
extern const u32 gMonPalette_Silvally15_[];
extern const u32 gMonPalette_Silvally16_[];
extern const u32 gMonPalette_Silvally17_[];
extern const u32 gMonPalette_Silvally18_[];
extern const u32 gMonPalette_Minior2_[];
extern const u32 gMonPalette_Minior3_[];
extern const u32 gMonPalette_Minior4_[];
extern const u32 gMonPalette_Minior5_[];
extern const u32 gMonPalette_Minior6_[];
extern const u32 gMonPalette_Minior7_[];
extern const u32 gMonPalette_Minior8_[];
extern const u32 gMonPalette_Minior9_[];
extern const u32 gMonPalette_Minior10_[];
extern const u32 gMonPalette_Minior11_[];
extern const u32 gMonPalette_Minior12_[];
extern const u32 gMonPalette_Minior13_[];
extern const u32 gMonPalette_Minior14_[];
extern const u32 gMonPalette_Mimikyu2_[];
extern const u32 gMonPalette_Necrozma2_[];
extern const u32 gMonPalette_Necrozma3_[];
extern const u32 gMonPalette_Necrozma4_[];
extern const u32 gMonPalette_Magearna2_[];
extern const u32 gMonPalette_Cramorant2_[];
extern const u32 gMonPalette_Cramorant3_[];
extern const u32 gMonPalette_Toxtricity2_[];
extern const u32 gMonPalette_Sinistea2_[];
extern const u32 gMonPalette_Polteageis2_[];
extern const u32 gMonPalette_Alcremie2_[];
extern const u32 gMonPalette_Alcremie3_[];
extern const u32 gMonPalette_Alcremie4_[];
extern const u32 gMonPalette_Alcremie5_[];
extern const u32 gMonPalette_Alcremie6_[];
extern const u32 gMonPalette_Alcremie7_[];
extern const u32 gMonPalette_Alcremie8_[];
extern const u32 gMonPalette_Alcremie9_[];
extern const u32 gMonPalette_Eiscue2_[];
extern const u32 gMonPalette_Indeedee2_[];
extern const u32 gMonPalette_Morpeko2_[];
extern const u32 gMonPalette_Zacian2_[];
extern const u32 gMonPalette_Zamazenta2_[];
extern const u32 gMonPalette_Eternatus2_[];
extern const u32 gMonPalette_Urshifu2_[];
extern const u32 gMonPalette_Zarude2_[];
extern const u32 gMonPalette_Calyrex2_[];
extern const u32 gMonPalette_Calyrex3_[];
extern const u32 gMonPalette_Bsculegion2_[];
extern const u32 gMonPalette_Alcremie10_[];
extern const u32 gMonPalette_Alcremie11_[];
extern const u32 gMonPalette_Alcremie12_[];
extern const u32 gMonPalette_Alcremie13_[];
extern const u32 gMonPalette_Alcremie14_[];
extern const u32 gMonPalette_Alcremie15_[];
extern const u32 gMonPalette_Alcremie16_[];
extern const u32 gMonPalette_Alcremie17_[];
extern const u32 gMonPalette_Alcremie18_[];
extern const u32 gMonPalette_Alcremie19_[];
extern const u32 gMonPalette_Alcremie20_[];
extern const u32 gMonPalette_Alcremie21_[];
extern const u32 gMonPalette_Alcremie22_[];
extern const u32 gMonPalette_Alcremie23_[];
extern const u32 gMonPalette_Alcremie24_[];
extern const u32 gMonPalette_Alcremie25_[];
extern const u32 gMonPalette_Alcremie26_[];
extern const u32 gMonPalette_Alcremie27_[];
extern const u32 gMonPalette_Alcremie28_[];
extern const u32 gMonPalette_Alcremie29_[];
extern const u32 gMonPalette_Alcremie30_[];
extern const u32 gMonPalette_Alcremie31_[];
extern const u32 gMonPalette_Alcremie32_[];
extern const u32 gMonPalette_Alcremie33_[];
extern const u32 gMonPalette_Alcremie34_[];
extern const u32 gMonPalette_Alcremie35_[];
extern const u32 gMonPalette_Alcremie36_[];
extern const u32 gMonPalette_Alcremie37_[];
extern const u32 gMonPalette_Alcremie38_[];
extern const u32 gMonPalette_Alcremie39_[];
extern const u32 gMonPalette_Alcremie40_[];
extern const u32 gMonPalette_Alcremie41_[];
extern const u32 gMonPalette_Alcremie42_[];
extern const u32 gMonPalette_Alcremie43_[];
extern const u32 gMonPalette_Alcremie44_[];
extern const u32 gMonPalette_Alcremie45_[];
extern const u32 gMonPalette_Alcremie46_[];
extern const u32 gMonPalette_Alcremie47_[];
extern const u32 gMonPalette_Alcremie48_[];
extern const u32 gMonPalette_Alcremie49_[];
extern const u32 gMonPalette_Alcremie50_[];
extern const u32 gMonPalette_Alcremie51_[];
extern const u32 gMonPalette_Alcremie52_[];
extern const u32 gMonPalette_Alcremie53_[];
extern const u32 gMonPalette_Alcremie54_[];
extern const u32 gMonPalette_Alcremie55_[];
extern const u32 gMonPalette_Alcremie56_[];
extern const u32 gMonPalette_Alcremie57_[];
extern const u32 gMonPalette_Alcremie58_[];
extern const u32 gMonPalette_Alcremie59_[];
extern const u32 gMonPalette_Alcremie60_[];
extern const u32 gMonPalette_Alcremie61_[];
extern const u32 gMonPalette_Alcremie62_[];
extern const u32 gMonPalette_Alcremie63_[];
extern const u32 gMonPalette_Sprigatito_[];
extern const u32 gMonPalette_Floragato_[];
extern const u32 gMonPalette_Meowscarad_[];
extern const u32 gMonPalette_Fuecoco_[];
extern const u32 gMonPalette_Crocalor_[];
extern const u32 gMonPalette_Skeledirge_[];
extern const u32 gMonPalette_Quaxly_[];
extern const u32 gMonPalette_Quaxwell_[];
extern const u32 gMonPalette_Quaquaval_[];
extern const u32 gMonPalette_Lechonk_[];
extern const u32 gMonPalette_Oinkologne_[];
extern const u32 gMonPalette_Oinkologne2_[];
extern const u32 gMonPalette_Tarountula_[];
extern const u32 gMonPalette_Spidops_[];
extern const u32 gMonPalette_Nymble_[];
extern const u32 gMonPalette_Lokix_[];
extern const u32 gMonPalette_Pawmi_[];
extern const u32 gMonPalette_Pawmo_[];
extern const u32 gMonPalette_Pawmot_[];
extern const u32 gMonPalette_Tandemaus_[];
extern const u32 gMonPalette_Maushold_[];
extern const u32 gMonPalette_Maushold2_[];
extern const u32 gMonPalette_Fidough_[];
extern const u32 gMonPalette_Dachsbun_[];
extern const u32 gMonPalette_Smoliv_[];
extern const u32 gMonPalette_Dolliv_[];
extern const u32 gMonPalette_Arboliva_[];
extern const u32 gMonPalette_Sqawkabily_[];
extern const u32 gMonPalette_Sqawkabily2_[];
extern const u32 gMonPalette_Sqawkabily3_[];
extern const u32 gMonPalette_Sqawkabily4_[];
extern const u32 gMonPalette_Nacli_[];
extern const u32 gMonPalette_Naclstack_[];
extern const u32 gMonPalette_Garganacl_[];
extern const u32 gMonPalette_Charcadet_[];
extern const u32 gMonPalette_Armarouge_[];
extern const u32 gMonPalette_Ceruledge_[];
extern const u32 gMonPalette_Tadbulb_[];
extern const u32 gMonPalette_Bellibolt_[];
extern const u32 gMonPalette_Wattrel_[];
extern const u32 gMonPalette_Kilowatrel_[];
extern const u32 gMonPalette_Maschiff_[];
extern const u32 gMonPalette_Mabosstiff_[];
extern const u32 gMonPalette_Shroodle_[];
extern const u32 gMonPalette_Grafaiai_[];
extern const u32 gMonPalette_Bramblin_[];
extern const u32 gMonPalette_Brmblghast_[];
extern const u32 gMonPalette_Toedscool_[];
extern const u32 gMonPalette_Toedscruel_[];
extern const u32 gMonPalette_Klawf_[];
extern const u32 gMonPalette_Capsakid_[];
extern const u32 gMonPalette_Scovillain_[];
extern const u32 gMonPalette_Rellor_[];
extern const u32 gMonPalette_Rabsca_[];
extern const u32 gMonPalette_Flittle_[];
extern const u32 gMonPalette_Espathra_[];
extern const u32 gMonPalette_Tinkatink_[];
extern const u32 gMonPalette_Tinkatuff_[];
extern const u32 gMonPalette_Tinkaton_[];
extern const u32 gMonPalette_Wiglett_[];
extern const u32 gMonPalette_Wugtrio_[];
extern const u32 gMonPalette_Bombirdier_[];
extern const u32 gMonPalette_Finizen_[];
extern const u32 gMonPalette_Palafin_[];
extern const u32 gMonPalette_Palafin2_[];
extern const u32 gMonPalette_Varoom_[];
extern const u32 gMonPalette_Revavroom_[];
extern const u32 gMonPalette_Cyclizar_[];
extern const u32 gMonPalette_Orthworm_[];
extern const u32 gMonPalette_Glimmet_[];
extern const u32 gMonPalette_Glimmora_[];
extern const u32 gMonPalette_Greavard_[];
extern const u32 gMonPalette_Houndstone_[];
extern const u32 gMonPalette_Flamigo_[];
extern const u32 gMonPalette_Cetoddle_[];
extern const u32 gMonPalette_Cetitan_[];
extern const u32 gMonPalette_Veluza_[];
extern const u32 gMonPalette_Dondozo_[];
extern const u32 gMonPalette_Tatsugiri_[];
extern const u32 gMonPalette_Tatsugiri2_[];
extern const u32 gMonPalette_Tatsugiri3_[];
extern const u32 gMonPalette_Annihilape_[];
extern const u32 gMonPalette_Clodsire_[];
extern const u32 gMonPalette_Farigiraf_[];
extern const u32 gMonPalette_Dudunsprce_[];
extern const u32 gMonPalette_Dudunsprce2_[];
extern const u32 gMonPalette_Kingambit_[];
extern const u32 gMonPalette_GreatTusk_[];
extern const u32 gMonPalette_ScreamTail_[];
extern const u32 gMonPalette_BruteBonet_[];
extern const u32 gMonPalette_FluttrMane_[];
extern const u32 gMonPalette_SlithrWing_[];
extern const u32 gMonPalette_SndyShocks_[];
extern const u32 gMonPalette_IronTreads_[];
extern const u32 gMonPalette_IronBundle_[];
extern const u32 gMonPalette_IronHands_[];
extern const u32 gMonPalette_IronJuguls_[];
extern const u32 gMonPalette_IronMoth_[];
extern const u32 gMonPalette_IronThorns_[];
extern const u32 gMonPalette_Frigibax_[];
extern const u32 gMonPalette_Arctibax_[];
extern const u32 gMonPalette_Baxcalibur_[];
extern const u32 gMonPalette_Gimmighoul_[];
extern const u32 gMonPalette_Gimmighoul2_[];
extern const u32 gMonPalette_Gholdengo_[];
extern const u32 gMonPalette_WoChien_[];
extern const u32 gMonPalette_ChienPao_[];
extern const u32 gMonPalette_TingLu_[];
extern const u32 gMonPalette_ChiYu_[];
extern const u32 gMonPalette_RoarngMoon_[];
extern const u32 gMonPalette_IronVliant_[];
extern const u32 gMonPalette_Koraidon_[];
extern const u32 gMonPalette_Miraidon_[];
extern const u32 gMonPalette_Tauros2_[];
extern const u32 gMonPalette_Tauros3_[];
extern const u32 gMonPalette_Tauros4_[];
extern const u32 gMonPalette_Wooper2_[];
extern const u32 gMonPalette_WalkngWake_[];
extern const u32 gMonPalette_IronLeaves_[];
extern const u32 gMonPalette_Dipplin_[];
extern const u32 gMonPalette_Ptchageist_[];
extern const u32 gMonPalette_Ptchageist2_[];
extern const u32 gMonPalette_Sinistcha_[];
extern const u32 gMonPalette_Sinistcha2_[];
extern const u32 gMonPalette_Okidogi_[];
extern const u32 gMonPalette_Munkidori_[];
extern const u32 gMonPalette_Fezndipiti_[];
extern const u32 gMonPalette_Ogerpon_[];
extern const u32 gMonPalette_Ogerpon2_[];
extern const u32 gMonPalette_Ogerpon3_[];
extern const u32 gMonPalette_Ogerpon4_[];
extern const u32 gMonPalette_Ogerpon5_[];
extern const u32 gMonPalette_Ogerpon6_[];
extern const u32 gMonPalette_Ogerpon7_[];
extern const u32 gMonPalette_Ogerpon8_[];
extern const u32 gMonPalette_Ursaluna2_[];
extern const u32 gMonPalette_Archaludon_[];
extern const u32 gMonPalette_Hydrapple_[];
extern const u32 gMonPalette_GouginFire_[];
extern const u32 gMonPalette_RagingBolt_[];
extern const u32 gMonPalette_IronBouldr_[];
extern const u32 gMonPalette_IronCrown_[];
extern const u32 gMonPalette_Terapagos_[];
extern const u32 gMonPalette_Terapagos2_[];
extern const u32 gMonPalette_Terapagos3_[];
extern const u32 gMonPalette_Pecharunt_[];
extern const u32 gMonPalette_Mothim2_[];
extern const u32 gMonPalette_Mothim3_[];
extern const u32 gMonPalette_Scatterbug2_[];
extern const u32 gMonPalette_Scatterbug3_[];
extern const u32 gMonPalette_Scatterbug4_[];
extern const u32 gMonPalette_Scatterbug5_[];
extern const u32 gMonPalette_Scatterbug6_[];
extern const u32 gMonPalette_Scatterbug7_[];
extern const u32 gMonPalette_Scatterbug8_[];
extern const u32 gMonPalette_Scatterbug9_[];
extern const u32 gMonPalette_Scatterbug10_[];
extern const u32 gMonPalette_Scatterbug11_[];
extern const u32 gMonPalette_Scatterbug12_[];
extern const u32 gMonPalette_Scatterbug13_[];
extern const u32 gMonPalette_Scatterbug14_[];
extern const u32 gMonPalette_Scatterbug15_[];
extern const u32 gMonPalette_Scatterbug16_[];
extern const u32 gMonPalette_Scatterbug17_[];
extern const u32 gMonPalette_Scatterbug18_[];
extern const u32 gMonPalette_Scatterbug19_[];
extern const u32 gMonPalette_Scatterbug20_[];
extern const u32 gMonPalette_Spewpa2_[];
extern const u32 gMonPalette_Spewpa3_[];
extern const u32 gMonPalette_Spewpa4_[];
extern const u32 gMonPalette_Spewpa5_[];
extern const u32 gMonPalette_Spewpa6_[];
extern const u32 gMonPalette_Spewpa7_[];
extern const u32 gMonPalette_Spewpa8_[];
extern const u32 gMonPalette_Spewpa9_[];
extern const u32 gMonPalette_Spewpa10_[];
extern const u32 gMonPalette_Spewpa11_[];
extern const u32 gMonPalette_Spewpa12_[];
extern const u32 gMonPalette_Spewpa13_[];
extern const u32 gMonPalette_Spewpa14_[];
extern const u32 gMonPalette_Spewpa15_[];
extern const u32 gMonPalette_Spewpa16_[];
extern const u32 gMonPalette_Spewpa17_[];
extern const u32 gMonPalette_Spewpa18_[];
extern const u32 gMonPalette_Spewpa19_[];
extern const u32 gMonPalette_Spewpa20_[];
extern const u32 gMonPalette_Raticate3_[];
extern const u32 gMonPalette_Gumshoos2_[];
extern const u32 gMonPalette_Vikavolt2_[];
extern const u32 gMonPalette_Lurantis2_[];
extern const u32 gMonPalette_Salazzle2_[];
extern const u32 gMonPalette_Mimikyu3_[];
extern const u32 gMonPalette_Kommoo2_[];
extern const u32 gMonPalette_Marowak3_[];
extern const u32 gMonPalette_Ribombee2_[];
extern const u32 gMonPalette_Araquanid2_[];
extern const u32 gMonPalette_Togedemaru2_[];
extern const u32 gMonPalette_Pikachu16_[];
extern const u32 gMonPalette_Eevee2_[];
extern const u32 gMonPalette_Venusaur3_[];
extern const u32 gMonPalette_Blastoise3_[];
extern const u32 gMonPalette_Charizard4_[];
extern const u32 gMonPalette_Butterfree2_[];
extern const u32 gMonPalette_Pikachu17_[];
extern const u32 gMonPalette_Meowth4_[];
extern const u32 gMonPalette_Machamp2_[];
extern const u32 gMonPalette_Gengar3_[];
extern const u32 gMonPalette_Kingler2_[];
extern const u32 gMonPalette_Lapras2_[];
extern const u32 gMonPalette_Eevee3_[];
extern const u32 gMonPalette_Snorlax2_[];
extern const u32 gMonPalette_Garbodor2_[];
extern const u32 gMonPalette_Melmetal2_[];
extern const u32 gMonPalette_Rillaboom2_[];
extern const u32 gMonPalette_Cinderace2_[];
extern const u32 gMonPalette_Inteleon2_[];
extern const u32 gMonPalette_Corviknigh2_[];
extern const u32 gMonPalette_Orbeetle2_[];
extern const u32 gMonPalette_Drednaw2_[];
extern const u32 gMonPalette_Coalossal2_[];
extern const u32 gMonPalette_Flapple2_[];
extern const u32 gMonPalette_Appletun2_[];
extern const u32 gMonPalette_Sandaconda2_[];
extern const u32 gMonPalette_Toxtricity3_[];
extern const u32 gMonPalette_Toxtricity4_[];
extern const u32 gMonPalette_Centiskorc2_[];
extern const u32 gMonPalette_Hatterene2_[];
extern const u32 gMonPalette_Grimmsnarl2_[];
extern const u32 gMonPalette_Alcremie64_[];
extern const u32 gMonPalette_Copperajah2_[];
extern const u32 gMonPalette_Duraludon2_[];
extern const u32 gMonPalette_Urshifu3_[];
extern const u32 gMonPalette_Urshifu4_[];
extern const u32 gMonPalette_Mimikyu4_[];

const struct CompressedSpritePalette gMonPaletteTable_[] =
{
	SPECIES_PAL(NONE, gMonPalette_CircledQuestionMark),
	SPECIES_PAL(BULBASAUR, gMonPalette_Bulbasaur_),
	SPECIES_PAL(IVYSAUR, gMonPalette_Ivysaur_),
	SPECIES_PAL(VENUSAUR, gMonPalette_Venusaur_),
	SPECIES_PAL(CHARMANDER, gMonPalette_Charmander_),
	SPECIES_PAL(CHARMELEON, gMonPalette_Charmeleon_),
	SPECIES_PAL(CHARIZARD, gMonPalette_Charizard_),
	SPECIES_PAL(SQUIRTLE, gMonPalette_Squirtle_),
	SPECIES_PAL(WARTORTLE, gMonPalette_Wartortle_),
	SPECIES_PAL(BLASTOISE, gMonPalette_Blastoise_),
	SPECIES_PAL(CATERPIE, gMonPalette_Caterpie_),
	SPECIES_PAL(METAPOD, gMonPalette_Metapod_),
	SPECIES_PAL(BUTTERFREE, gMonPalette_Butterfree_),
	SPECIES_PAL(WEEDLE, gMonPalette_Weedle_),
	SPECIES_PAL(KAKUNA, gMonPalette_Kakuna_),
	SPECIES_PAL(BEEDRILL, gMonPalette_Beedrill_),
	SPECIES_PAL(PIDGEY, gMonPalette_Pidgey_),
	SPECIES_PAL(PIDGEOTTO, gMonPalette_Pidgeotto_),
	SPECIES_PAL(PIDGEOT, gMonPalette_Pidgeot_),
	SPECIES_PAL(RATTATA, gMonPalette_Rattata_),
	SPECIES_PAL(RATICATE, gMonPalette_Raticate_),
	SPECIES_PAL(SPEAROW, gMonPalette_Spearow_),
	SPECIES_PAL(FEAROW, gMonPalette_Fearow_),
	SPECIES_PAL(EKANS, gMonPalette_Ekans_),
	SPECIES_PAL(ARBOK, gMonPalette_Arbok_),
	SPECIES_PAL(PIKACHU, gMonPalette_Pikachu_),
	SPECIES_PAL(RAICHU, gMonPalette_Raichu_),
	SPECIES_PAL(SANDSHREW, gMonPalette_Sandshrew_),
	SPECIES_PAL(SANDSLASH, gMonPalette_Sandslash_),
	SPECIES_PAL(NIDORANSF, gMonPalette_Nidoransf_),
	SPECIES_PAL(NIDORINA, gMonPalette_Nidorina_),
	SPECIES_PAL(NIDOQUEEN, gMonPalette_Nidoqueen_),
	SPECIES_PAL(NIDORANSM, gMonPalette_Nidoransm_),
	SPECIES_PAL(NIDORINO, gMonPalette_Nidorino_),
	SPECIES_PAL(NIDOKING, gMonPalette_Nidoking_),
	SPECIES_PAL(CLEFAIRY, gMonPalette_Clefairy_),
	SPECIES_PAL(CLEFABLE, gMonPalette_Clefable_),
	SPECIES_PAL(VULPIX, gMonPalette_Vulpix_),
	SPECIES_PAL(NINETALES, gMonPalette_Ninetales_),
	SPECIES_PAL(JIGGLYPUFF, gMonPalette_Jigglypuff_),
	SPECIES_PAL(WIGGLYTUFF, gMonPalette_Wigglytuff_),
	SPECIES_PAL(ZUBAT, gMonPalette_Zubat_),
	SPECIES_PAL(GOLBAT, gMonPalette_Golbat_),
	SPECIES_PAL(ODDISH, gMonPalette_Oddish_),
	SPECIES_PAL(GLOOM, gMonPalette_Gloom_),
	SPECIES_PAL(VILEPLUME, gMonPalette_Vileplume_),
	SPECIES_PAL(PARAS, gMonPalette_Paras_),
	SPECIES_PAL(PARASECT, gMonPalette_Parasect_),
	SPECIES_PAL(VENONAT, gMonPalette_Venonat_),
	SPECIES_PAL(VENOMOTH, gMonPalette_Venomoth_),
	SPECIES_PAL(DIGLETT, gMonPalette_Diglett_),
	SPECIES_PAL(DUGTRIO, gMonPalette_Dugtrio_),
	SPECIES_PAL(MEOWTH, gMonPalette_Meowth_),
	SPECIES_PAL(PERSIAN, gMonPalette_Persian_),
	SPECIES_PAL(PSYDUCK, gMonPalette_Psyduck_),
	SPECIES_PAL(GOLDUCK, gMonPalette_Golduck_),
	SPECIES_PAL(MANKEY, gMonPalette_Mankey_),
	SPECIES_PAL(PRIMEAPE, gMonPalette_Primeape_),
	SPECIES_PAL(GROWLITHE, gMonPalette_Growlithe_),
	SPECIES_PAL(ARCANINE, gMonPalette_Arcanine_),
	SPECIES_PAL(POLIWAG, gMonPalette_Poliwag_),
	SPECIES_PAL(POLIWHIRL, gMonPalette_Poliwhirl_),
	SPECIES_PAL(POLIWRATH, gMonPalette_Poliwrath_),
	SPECIES_PAL(ABRA, gMonPalette_Abra_),
	SPECIES_PAL(KADABRA, gMonPalette_Kadabra_),
	SPECIES_PAL(ALAKAZAM, gMonPalette_Alakazam_),
	SPECIES_PAL(MACHOP, gMonPalette_Machop_),
	SPECIES_PAL(MACHOKE, gMonPalette_Machoke_),
	SPECIES_PAL(MACHAMP, gMonPalette_Machamp_),
	SPECIES_PAL(BELLSPROUT, gMonPalette_Bellsprout_),
	SPECIES_PAL(WEEPINBELL, gMonPalette_Weepinbell_),
	SPECIES_PAL(VICTREEBEL, gMonPalette_Victreebel_),
	SPECIES_PAL(TENTACOOL, gMonPalette_Tentacool_),
	SPECIES_PAL(TENTACRUEL, gMonPalette_Tentacruel_),
	SPECIES_PAL(GEODUDE, gMonPalette_Geodude_),
	SPECIES_PAL(GRAVELER, gMonPalette_Graveler_),
	SPECIES_PAL(GOLEM, gMonPalette_Golem_),
	SPECIES_PAL(PONYTA, gMonPalette_Ponyta_),
	SPECIES_PAL(RAPIDASH, gMonPalette_Rapidash_),
	SPECIES_PAL(SLOWPOKE, gMonPalette_Slowpoke_),
	SPECIES_PAL(SLOWBRO, gMonPalette_Slowbro_),
	SPECIES_PAL(MAGNEMITE, gMonPalette_Magnemite_),
	SPECIES_PAL(MAGNETON, gMonPalette_Magneton_),
	SPECIES_PAL(FARFETCHD, gMonPalette_Farfetchd_),
	SPECIES_PAL(DODUO, gMonPalette_Doduo_),
	SPECIES_PAL(DODRIO, gMonPalette_Dodrio_),
	SPECIES_PAL(SEEL, gMonPalette_Seel_),
	SPECIES_PAL(DEWGONG, gMonPalette_Dewgong_),
	SPECIES_PAL(GRIMER, gMonPalette_Grimer_),
	SPECIES_PAL(MUK, gMonPalette_Muk_),
	SPECIES_PAL(SHELLDER, gMonPalette_Shellder_),
	SPECIES_PAL(CLOYSTER, gMonPalette_Cloyster_),
	SPECIES_PAL(GASTLY, gMonPalette_Gastly_),
	SPECIES_PAL(HAUNTER, gMonPalette_Haunter_),
	SPECIES_PAL(GENGAR, gMonPalette_Gengar_),
	SPECIES_PAL(ONIX, gMonPalette_Onix_),
	SPECIES_PAL(DROWZEE, gMonPalette_Drowzee_),
	SPECIES_PAL(HYPNO, gMonPalette_Hypno_),
	SPECIES_PAL(KRABBY, gMonPalette_Krabby_),
	SPECIES_PAL(KINGLER, gMonPalette_Kingler_),
	SPECIES_PAL(VOLTORB, gMonPalette_Voltorb_),
	SPECIES_PAL(ELECTRODE, gMonPalette_Electrode_),
	SPECIES_PAL(EXEGGCUTE, gMonPalette_Exeggcute_),
	SPECIES_PAL(EXEGGUTOR, gMonPalette_Exeggutor_),
	SPECIES_PAL(CUBONE, gMonPalette_Cubone_),
	SPECIES_PAL(MAROWAK, gMonPalette_Marowak_),
	SPECIES_PAL(HITMONLEE, gMonPalette_Hitmonlee_),
	SPECIES_PAL(HITMONCHAN, gMonPalette_Hitmonchan_),
	SPECIES_PAL(LICKITUNG, gMonPalette_Lickitung_),
	SPECIES_PAL(KOFFING, gMonPalette_Koffing_),
	SPECIES_PAL(WEEZING, gMonPalette_Weezing_),
	SPECIES_PAL(RHYHORN, gMonPalette_Rhyhorn_),
	SPECIES_PAL(RHYDON, gMonPalette_Rhydon_),
	SPECIES_PAL(CHANSEY, gMonPalette_Chansey_),
	SPECIES_PAL(TANGELA, gMonPalette_Tangela_),
	SPECIES_PAL(KANGASKHAN, gMonPalette_Kangaskhan_),
	SPECIES_PAL(HORSEA, gMonPalette_Horsea_),
	SPECIES_PAL(SEADRA, gMonPalette_Seadra_),
	SPECIES_PAL(GOLDEEN, gMonPalette_Goldeen_),
	SPECIES_PAL(SEAKING, gMonPalette_Seaking_),
	SPECIES_PAL(STARYU, gMonPalette_Staryu_),
	SPECIES_PAL(STARMIE, gMonPalette_Starmie_),
	SPECIES_PAL(MRMIME, gMonPalette_MrMime_),
	SPECIES_PAL(SCYTHER, gMonPalette_Scyther_),
	SPECIES_PAL(JYNX, gMonPalette_Jynx_),
	SPECIES_PAL(ELECTABUZZ, gMonPalette_Electabuzz_),
	SPECIES_PAL(MAGMAR, gMonPalette_Magmar_),
	SPECIES_PAL(PINSIR, gMonPalette_Pinsir_),
	SPECIES_PAL(TAUROS, gMonPalette_Tauros_),
	SPECIES_PAL(MAGIKARP, gMonPalette_Magikarp_),
	SPECIES_PAL(GYARADOS, gMonPalette_Gyarados_),
	SPECIES_PAL(LAPRAS, gMonPalette_Lapras_),
	SPECIES_PAL(DITTO, gMonPalette_Ditto_),
	SPECIES_PAL(EEVEE, gMonPalette_Eevee_),
	SPECIES_PAL(VAPOREON, gMonPalette_Vaporeon_),
	SPECIES_PAL(JOLTEON, gMonPalette_Jolteon_),
	SPECIES_PAL(FLAREON, gMonPalette_Flareon_),
	SPECIES_PAL(PORYGON, gMonPalette_Porygon_),
	SPECIES_PAL(OMANYTE, gMonPalette_Omanyte_),
	SPECIES_PAL(OMASTAR, gMonPalette_Omastar_),
	SPECIES_PAL(KABUTO, gMonPalette_Kabuto_),
	SPECIES_PAL(KABUTOPS, gMonPalette_Kabutops_),
	SPECIES_PAL(AERODACTYL, gMonPalette_Aerodactyl_),
	SPECIES_PAL(SNORLAX, gMonPalette_Snorlax_),
	SPECIES_PAL(ARTICUNO, gMonPalette_Articuno_),
	SPECIES_PAL(ZAPDOS, gMonPalette_Zapdos_),
	SPECIES_PAL(MOLTRES, gMonPalette_Moltres_),
	SPECIES_PAL(DRATINI, gMonPalette_Dratini_),
	SPECIES_PAL(DRAGONAIR, gMonPalette_Dragonair_),
	SPECIES_PAL(DRAGONITE, gMonPalette_Dragonite_),
	SPECIES_PAL(MEWTWO, gMonPalette_Mewtwo_),
	SPECIES_PAL(MEW, gMonPalette_Mew_),
	SPECIES_PAL(CHIKORITA, gMonPalette_Chikorita_),
	SPECIES_PAL(BAYLEEF, gMonPalette_Bayleef_),
	SPECIES_PAL(MEGANIUM, gMonPalette_Meganium_),
	SPECIES_PAL(CYNDAQUIL, gMonPalette_Cyndaquil_),
	SPECIES_PAL(QUILAVA, gMonPalette_Quilava_),
	SPECIES_PAL(TYPHLOSION, gMonPalette_Typhlosion_),
	SPECIES_PAL(TOTODILE, gMonPalette_Totodile_),
	SPECIES_PAL(CROCONAW, gMonPalette_Croconaw_),
	SPECIES_PAL(FERALIGATR, gMonPalette_Feraligatr_),
	SPECIES_PAL(SENTRET, gMonPalette_Sentret_),
	SPECIES_PAL(FURRET, gMonPalette_Furret_),
	SPECIES_PAL(HOOTHOOT, gMonPalette_Hoothoot_),
	SPECIES_PAL(NOCTOWL, gMonPalette_Noctowl_),
	SPECIES_PAL(LEDYBA, gMonPalette_Ledyba_),
	SPECIES_PAL(LEDIAN, gMonPalette_Ledian_),
	SPECIES_PAL(SPINARAK, gMonPalette_Spinarak_),
	SPECIES_PAL(ARIADOS, gMonPalette_Ariados_),
	SPECIES_PAL(CROBAT, gMonPalette_Crobat_),
	SPECIES_PAL(CHINCHOU, gMonPalette_Chinchou_),
	SPECIES_PAL(LANTURN, gMonPalette_Lanturn_),
	SPECIES_PAL(PICHU, gMonPalette_Pichu_),
	SPECIES_PAL(CLEFFA, gMonPalette_Cleffa_),
	SPECIES_PAL(IGGLYBUFF, gMonPalette_Igglybuff_),
	SPECIES_PAL(TOGEPI, gMonPalette_Togepi_),
	SPECIES_PAL(TOGETIC, gMonPalette_Togetic_),
	SPECIES_PAL(NATU, gMonPalette_Natu_),
	SPECIES_PAL(XATU, gMonPalette_Xatu_),
	SPECIES_PAL(MAREEP, gMonPalette_Mareep_),
	SPECIES_PAL(FLAAFFY, gMonPalette_Flaaffy_),
	SPECIES_PAL(AMPHAROS, gMonPalette_Ampharos_),
	SPECIES_PAL(BELLOSSOM, gMonPalette_Bellossom_),
	SPECIES_PAL(MARILL, gMonPalette_Marill_),
	SPECIES_PAL(AZUMARILL, gMonPalette_Azumarill_),
	SPECIES_PAL(SUDOWOODO, gMonPalette_Sudowoodo_),
	SPECIES_PAL(POLITOED, gMonPalette_Politoed_),
	SPECIES_PAL(HOPPIP, gMonPalette_Hoppip_),
	SPECIES_PAL(SKIPLOOM, gMonPalette_Skiploom_),
	SPECIES_PAL(JUMPLUFF, gMonPalette_Jumpluff_),
	SPECIES_PAL(AIPOM, gMonPalette_Aipom_),
	SPECIES_PAL(SUNKERN, gMonPalette_Sunkern_),
	SPECIES_PAL(SUNFLORA, gMonPalette_Sunflora_),
	SPECIES_PAL(YANMA, gMonPalette_Yanma_),
	SPECIES_PAL(WOOPER, gMonPalette_Wooper_),
	SPECIES_PAL(QUAGSIRE, gMonPalette_Quagsire_),
	SPECIES_PAL(ESPEON, gMonPalette_Espeon_),
	SPECIES_PAL(UMBREON, gMonPalette_Umbreon_),
	SPECIES_PAL(MURKROW, gMonPalette_Murkrow_),
	SPECIES_PAL(SLOWKING, gMonPalette_Slowking_),
	SPECIES_PAL(MISDREAVUS, gMonPalette_Misdreavus_),
	SPECIES_PAL(UNOWN, gMonPalette_Unown_),
	SPECIES_PAL(WOBBUFFET, gMonPalette_Wobbuffet_),
	SPECIES_PAL(GIRAFARIG, gMonPalette_Girafarig_),
	SPECIES_PAL(PINECO, gMonPalette_Pineco_),
	SPECIES_PAL(FORRETRESS, gMonPalette_Forretress_),
	SPECIES_PAL(DUNSPARCE, gMonPalette_Dunsparce_),
	SPECIES_PAL(GLIGAR, gMonPalette_Gligar_),
	SPECIES_PAL(STEELIX, gMonPalette_Steelix_),
	SPECIES_PAL(SNUBBULL, gMonPalette_Snubbull_),
	SPECIES_PAL(GRANBULL, gMonPalette_Granbull_),
	SPECIES_PAL(QWILFISH, gMonPalette_Qwilfish_),
	SPECIES_PAL(SCIZOR, gMonPalette_Scizor_),
	SPECIES_PAL(SHUCKLE, gMonPalette_Shuckle_),
	SPECIES_PAL(HERACROSS, gMonPalette_Heracross_),
	SPECIES_PAL(SNEASEL, gMonPalette_Sneasel_),
	SPECIES_PAL(TEDDIURSA, gMonPalette_Teddiursa_),
	SPECIES_PAL(URSARING, gMonPalette_Ursaring_),
	SPECIES_PAL(SLUGMA, gMonPalette_Slugma_),
	SPECIES_PAL(MAGCARGO, gMonPalette_Magcargo_),
	SPECIES_PAL(SWINUB, gMonPalette_Swinub_),
	SPECIES_PAL(PILOSWINE, gMonPalette_Piloswine_),
	SPECIES_PAL(CORSOLA, gMonPalette_Corsola_),
	SPECIES_PAL(REMORAID, gMonPalette_Remoraid_),
	SPECIES_PAL(OCTILLERY, gMonPalette_Octillery_),
	SPECIES_PAL(DELIBIRD, gMonPalette_Delibird_),
	SPECIES_PAL(MANTINE, gMonPalette_Mantine_),
	SPECIES_PAL(SKARMORY, gMonPalette_Skarmory_),
	SPECIES_PAL(HOUNDOUR, gMonPalette_Houndour_),
	SPECIES_PAL(HOUNDOOM, gMonPalette_Houndoom_),
	SPECIES_PAL(KINGDRA, gMonPalette_Kingdra_),
	SPECIES_PAL(PHANPY, gMonPalette_Phanpy_),
	SPECIES_PAL(DONPHAN, gMonPalette_Donphan_),
	SPECIES_PAL(PORYGON2, gMonPalette_Porygon2_),
	SPECIES_PAL(STANTLER, gMonPalette_Stantler_),
	SPECIES_PAL(SMEARGLE, gMonPalette_Smeargle_),
	SPECIES_PAL(TYROGUE, gMonPalette_Tyrogue_),
	SPECIES_PAL(HITMONTOP, gMonPalette_Hitmontop_),
	SPECIES_PAL(SMOOCHUM, gMonPalette_Smoochum_),
	SPECIES_PAL(ELEKID, gMonPalette_Elekid_),
	SPECIES_PAL(MAGBY, gMonPalette_Magby_),
	SPECIES_PAL(MILTANK, gMonPalette_Miltank_),
	SPECIES_PAL(BLISSEY, gMonPalette_Blissey_),
	SPECIES_PAL(RAIKOU, gMonPalette_Raikou_),
	SPECIES_PAL(ENTEI, gMonPalette_Entei_),
	SPECIES_PAL(SUICUNE, gMonPalette_Suicune_),
	SPECIES_PAL(LARVITAR, gMonPalette_Larvitar_),
	SPECIES_PAL(PUPITAR, gMonPalette_Pupitar_),
	SPECIES_PAL(TYRANITAR, gMonPalette_Tyranitar_),
	SPECIES_PAL(LUGIA, gMonPalette_Lugia_),
	SPECIES_PAL(HOOH, gMonPalette_HoOh_),
	SPECIES_PAL(CELEBI, gMonPalette_Celebi_),
	SPECIES_PAL(TREECKO, gMonPalette_Treecko_),
	SPECIES_PAL(GROVYLE, gMonPalette_Grovyle_),
	SPECIES_PAL(SCEPTILE, gMonPalette_Sceptile_),
	SPECIES_PAL(TORCHIC, gMonPalette_Torchic_),
	SPECIES_PAL(COMBUSKEN, gMonPalette_Combusken_),
	SPECIES_PAL(BLAZIKEN, gMonPalette_Blaziken_),
	SPECIES_PAL(MUDKIP, gMonPalette_Mudkip_),
	SPECIES_PAL(MARSHTOMP, gMonPalette_Marshtomp_),
	SPECIES_PAL(SWAMPERT, gMonPalette_Swampert_),
	SPECIES_PAL(POOCHYENA, gMonPalette_Poochyena_),
	SPECIES_PAL(MIGHTYENA, gMonPalette_Mightyena_),
	SPECIES_PAL(ZIGZAGOON, gMonPalette_Zigzagoon_),
	SPECIES_PAL(LINOONE, gMonPalette_Linoone_),
	SPECIES_PAL(WURMPLE, gMonPalette_Wurmple_),
	SPECIES_PAL(SILCOON, gMonPalette_Silcoon_),
	SPECIES_PAL(BEAUTIFLY, gMonPalette_Beautifly_),
	SPECIES_PAL(CASCOON, gMonPalette_Cascoon_),
	SPECIES_PAL(DUSTOX, gMonPalette_Dustox_),
	SPECIES_PAL(LOTAD, gMonPalette_Lotad_),
	SPECIES_PAL(LOMBRE, gMonPalette_Lombre_),
	SPECIES_PAL(LUDICOLO, gMonPalette_Ludicolo_),
	SPECIES_PAL(SEEDOT, gMonPalette_Seedot_),
	SPECIES_PAL(NUZLEAF, gMonPalette_Nuzleaf_),
	SPECIES_PAL(SHIFTRY, gMonPalette_Shiftry_),
	SPECIES_PAL(TAILLOW, gMonPalette_Taillow_),
	SPECIES_PAL(SWELLOW, gMonPalette_Swellow_),
	SPECIES_PAL(WINGULL, gMonPalette_Wingull_),
	SPECIES_PAL(PELIPPER, gMonPalette_Pelipper_),
	SPECIES_PAL(RALTS, gMonPalette_Ralts_),
	SPECIES_PAL(KIRLIA, gMonPalette_Kirlia_),
	SPECIES_PAL(GARDEVOIR, gMonPalette_Gardevoir_),
	SPECIES_PAL(SURSKIT, gMonPalette_Surskit_),
	SPECIES_PAL(MASQUERAIN, gMonPalette_Masquerain_),
	SPECIES_PAL(SHROOMISH, gMonPalette_Shroomish_),
	SPECIES_PAL(BRELOOM, gMonPalette_Breloom_),
	SPECIES_PAL(SLAKOTH, gMonPalette_Slakoth_),
	SPECIES_PAL(VIGOROTH, gMonPalette_Vigoroth_),
	SPECIES_PAL(SLAKING, gMonPalette_Slaking_),
	SPECIES_PAL(NINCADA, gMonPalette_Nincada_),
	SPECIES_PAL(NINJASK, gMonPalette_Ninjask_),
	SPECIES_PAL(SHEDINJA, gMonPalette_Shedinja_),
	SPECIES_PAL(WHISMUR, gMonPalette_Whismur_),
	SPECIES_PAL(LOUDRED, gMonPalette_Loudred_),
	SPECIES_PAL(EXPLOUD, gMonPalette_Exploud_),
	SPECIES_PAL(MAKUHITA, gMonPalette_Makuhita_),
	SPECIES_PAL(HARIYAMA, gMonPalette_Hariyama_),
	SPECIES_PAL(AZURILL, gMonPalette_Azurill_),
	SPECIES_PAL(NOSEPASS, gMonPalette_Nosepass_),
	SPECIES_PAL(SKITTY, gMonPalette_Skitty_),
	SPECIES_PAL(DELCATTY, gMonPalette_Delcatty_),
	SPECIES_PAL(SABLEYE, gMonPalette_Sableye_),
	SPECIES_PAL(MAWILE, gMonPalette_Mawile_),
	SPECIES_PAL(ARON, gMonPalette_Aron_),
	SPECIES_PAL(LAIRON, gMonPalette_Lairon_),
	SPECIES_PAL(AGGRON, gMonPalette_Aggron_),
	SPECIES_PAL(MEDITITE, gMonPalette_Meditite_),
	SPECIES_PAL(MEDICHAM, gMonPalette_Medicham_),
	SPECIES_PAL(ELECTRIKE, gMonPalette_Electrike_),
	SPECIES_PAL(MANECTRIC, gMonPalette_Manectric_),
	SPECIES_PAL(PLUSLE, gMonPalette_Plusle_),
	SPECIES_PAL(MINUN, gMonPalette_Minun_),
	SPECIES_PAL(VOLBEAT, gMonPalette_Volbeat_),
	SPECIES_PAL(ILLUMISE, gMonPalette_Illumise_),
	SPECIES_PAL(ROSELIA, gMonPalette_Roselia_),
	SPECIES_PAL(GULPIN, gMonPalette_Gulpin_),
	SPECIES_PAL(SWALOT, gMonPalette_Swalot_),
	SPECIES_PAL(CARVANHA, gMonPalette_Carvanha_),
	SPECIES_PAL(SHARPEDO, gMonPalette_Sharpedo_),
	SPECIES_PAL(WAILMER, gMonPalette_Wailmer_),
	SPECIES_PAL(WAILORD, gMonPalette_Wailord_),
	SPECIES_PAL(NUMEL, gMonPalette_Numel_),
	SPECIES_PAL(CAMERUPT, gMonPalette_Camerupt_),
	SPECIES_PAL(TORKOAL, gMonPalette_Torkoal_),
	SPECIES_PAL(SPOINK, gMonPalette_Spoink_),
	SPECIES_PAL(GRUMPIG, gMonPalette_Grumpig_),
	SPECIES_PAL(SPINDA, gMonPalette_Spinda_),
	SPECIES_PAL(TRAPINCH, gMonPalette_Trapinch_),
	SPECIES_PAL(VIBRAVA, gMonPalette_Vibrava_),
	SPECIES_PAL(FLYGON, gMonPalette_Flygon_),
	SPECIES_PAL(CACNEA, gMonPalette_Cacnea_),
	SPECIES_PAL(CACTURNE, gMonPalette_Cacturne_),
	SPECIES_PAL(SWABLU, gMonPalette_Swablu_),
	SPECIES_PAL(ALTARIA, gMonPalette_Altaria_),
	SPECIES_PAL(ZANGOOSE, gMonPalette_Zangoose_),
	SPECIES_PAL(SEVIPER, gMonPalette_Seviper_),
	SPECIES_PAL(LUNATONE, gMonPalette_Lunatone_),
	SPECIES_PAL(SOLROCK, gMonPalette_Solrock_),
	SPECIES_PAL(BARBOACH, gMonPalette_Barboach_),
	SPECIES_PAL(WHISCASH, gMonPalette_Whiscash_),
	SPECIES_PAL(CORPHISH, gMonPalette_Corphish_),
	SPECIES_PAL(CRAWDAUNT, gMonPalette_Crawdaunt_),
	SPECIES_PAL(BALTOY, gMonPalette_Baltoy_),
	SPECIES_PAL(CLAYDOL, gMonPalette_Claydol_),
	SPECIES_PAL(LILEEP, gMonPalette_Lileep_),
	SPECIES_PAL(CRADILY, gMonPalette_Cradily_),
	SPECIES_PAL(ANORITH, gMonPalette_Anorith_),
	SPECIES_PAL(ARMALDO, gMonPalette_Armaldo_),
	SPECIES_PAL(FEEBAS, gMonPalette_Feebas_),
	SPECIES_PAL(MILOTIC, gMonPalette_Milotic_),
	SPECIES_PAL(CASTFORM, gMonPalette_Castform_),
	SPECIES_PAL(KECLEON, gMonPalette_Kecleon_),
	SPECIES_PAL(SHUPPET, gMonPalette_Shuppet_),
	SPECIES_PAL(BANETTE, gMonPalette_Banette_),
	SPECIES_PAL(DUSKULL, gMonPalette_Duskull_),
	SPECIES_PAL(DUSCLOPS, gMonPalette_Dusclops_),
	SPECIES_PAL(TROPIUS, gMonPalette_Tropius_),
	SPECIES_PAL(CHIMECHO, gMonPalette_Chimecho_),
	SPECIES_PAL(ABSOL, gMonPalette_Absol_),
	SPECIES_PAL(WYNAUT, gMonPalette_Wynaut_),
	SPECIES_PAL(SNORUNT, gMonPalette_Snorunt_),
	SPECIES_PAL(GLALIE, gMonPalette_Glalie_),
	SPECIES_PAL(SPHEAL, gMonPalette_Spheal_),
	SPECIES_PAL(SEALEO, gMonPalette_Sealeo_),
	SPECIES_PAL(WALREIN, gMonPalette_Walrein_),
	SPECIES_PAL(CLAMPERL, gMonPalette_Clamperl_),
	SPECIES_PAL(HUNTAIL, gMonPalette_Huntail_),
	SPECIES_PAL(GOREBYSS, gMonPalette_Gorebyss_),
	SPECIES_PAL(RELICANTH, gMonPalette_Relicanth_),
	SPECIES_PAL(LUVDISC, gMonPalette_Luvdisc_),
	SPECIES_PAL(BAGON, gMonPalette_Bagon_),
	SPECIES_PAL(SHELGON, gMonPalette_Shelgon_),
	SPECIES_PAL(SALAMENCE, gMonPalette_Salamence_),
	SPECIES_PAL(BELDUM, gMonPalette_Beldum_),
	SPECIES_PAL(METANG, gMonPalette_Metang_),
	SPECIES_PAL(METAGROSS, gMonPalette_Metagross_),
	SPECIES_PAL(REGIROCK, gMonPalette_Regirock_),
	SPECIES_PAL(REGICE, gMonPalette_Regice_),
	SPECIES_PAL(REGISTEEL, gMonPalette_Registeel_),
	SPECIES_PAL(LATIAS, gMonPalette_Latias_),
	SPECIES_PAL(LATIOS, gMonPalette_Latios_),
	SPECIES_PAL(KYOGRE, gMonPalette_Kyogre_),
	SPECIES_PAL(GROUDON, gMonPalette_Groudon_),
	SPECIES_PAL(RAYQUAZA, gMonPalette_Rayquaza_),
	SPECIES_PAL(JIRACHI, gMonPalette_Jirachi_),
	SPECIES_PAL(DEOXYS, gMonPalette_Deoxys_),
	SPECIES_PAL(TURTWIG, gMonPalette_Turtwig_),
	SPECIES_PAL(GROTLE, gMonPalette_Grotle_),
	SPECIES_PAL(TORTERRA, gMonPalette_Torterra_),
	SPECIES_PAL(CHIMCHAR, gMonPalette_Chimchar_),
	SPECIES_PAL(MONFERNO, gMonPalette_Monferno_),
	SPECIES_PAL(INFERNAPE, gMonPalette_Infernape_),
	SPECIES_PAL(PIPLUP, gMonPalette_Piplup_),
	SPECIES_PAL(PRINPLUP, gMonPalette_Prinplup_),
	SPECIES_PAL(EMPOLEON, gMonPalette_Empoleon_),
	SPECIES_PAL(STARLY, gMonPalette_Starly_),
	SPECIES_PAL(STARAVIA, gMonPalette_Staravia_),
	SPECIES_PAL(STARAPTOR, gMonPalette_Staraptor_),
	SPECIES_PAL(BIDOOF, gMonPalette_Bidoof_),
	SPECIES_PAL(BIBAREL, gMonPalette_Bibarel_),
	SPECIES_PAL(KRICKETOT, gMonPalette_Kricketot_),
	SPECIES_PAL(KRICKETUNE, gMonPalette_Kricketune_),
	SPECIES_PAL(SHINX, gMonPalette_Shinx_),
	SPECIES_PAL(LUXIO, gMonPalette_Luxio_),
	SPECIES_PAL(LUXRAY, gMonPalette_Luxray_),
	SPECIES_PAL(BUDEW, gMonPalette_Budew_),
	SPECIES_PAL(ROSERADE, gMonPalette_Roserade_),
	SPECIES_PAL(CRANIDOS, gMonPalette_Cranidos_),
	SPECIES_PAL(RAMPARDOS, gMonPalette_Rampardos_),
	SPECIES_PAL(SHIELDON, gMonPalette_Shieldon_),
	SPECIES_PAL(BASTIODON, gMonPalette_Bastiodon_),
	SPECIES_PAL(BURMY, gMonPalette_Burmy_),
	SPECIES_PAL(WORMADAM, gMonPalette_Wormadam_),
	SPECIES_PAL(MOTHIM, gMonPalette_Mothim_),
	SPECIES_PAL(COMBEE, gMonPalette_Combee_),
	SPECIES_PAL(VESPIQUEN, gMonPalette_Vespiquen_),
	SPECIES_PAL(PACHIRISU, gMonPalette_Pachirisu_),
	SPECIES_PAL(BUIZEL, gMonPalette_Buizel_),
	SPECIES_PAL(FLOATZEL, gMonPalette_Floatzel_),
	SPECIES_PAL(CHERUBI, gMonPalette_Cherubi_),
	SPECIES_PAL(CHERRIM, gMonPalette_Cherrim_),
	SPECIES_PAL(SHELLOS, gMonPalette_Shellos_),
	SPECIES_PAL(GASTRODON, gMonPalette_Gastrodon_),
	SPECIES_PAL(AMBIPOM, gMonPalette_Ambipom_),
	SPECIES_PAL(DRIFLOON, gMonPalette_Drifloon_),
	SPECIES_PAL(DRIFBLIM, gMonPalette_Drifblim_),
	SPECIES_PAL(BUNEARY, gMonPalette_Buneary_),
	SPECIES_PAL(LOPUNNY, gMonPalette_Lopunny_),
	SPECIES_PAL(MISMAGIUS, gMonPalette_Mismagius_),
	SPECIES_PAL(HONCHKROW, gMonPalette_Honchkrow_),
	SPECIES_PAL(GLAMEOW, gMonPalette_Glameow_),
	SPECIES_PAL(PURUGLY, gMonPalette_Purugly_),
	SPECIES_PAL(CHINGLING, gMonPalette_Chingling_),
	SPECIES_PAL(STUNKY, gMonPalette_Stunky_),
	SPECIES_PAL(SKUNTANK, gMonPalette_Skuntank_),
	SPECIES_PAL(BRONZOR, gMonPalette_Bronzor_),
	SPECIES_PAL(BRONZONG, gMonPalette_Bronzong_),
	SPECIES_PAL(BONSLY, gMonPalette_Bonsly_),
	SPECIES_PAL(MIMEJR, gMonPalette_MimeJr_),
	SPECIES_PAL(HAPPINY, gMonPalette_Happiny_),
	SPECIES_PAL(CHATOT, gMonPalette_Chatot_),
	SPECIES_PAL(SPIRITOMB, gMonPalette_Spiritomb_),
	SPECIES_PAL(GIBLE, gMonPalette_Gible_),
	SPECIES_PAL(GABITE, gMonPalette_Gabite_),
	SPECIES_PAL(GARCHOMP, gMonPalette_Garchomp_),
	SPECIES_PAL(MUNCHLAX, gMonPalette_Munchlax_),
	SPECIES_PAL(RIOLU, gMonPalette_Riolu_),
	SPECIES_PAL(LUCARIO, gMonPalette_Lucario_),
	SPECIES_PAL(HIPPOPOTAS, gMonPalette_Hippopotas_),
	SPECIES_PAL(HIPPOWDON, gMonPalette_Hippowdon_),
	SPECIES_PAL(SKORUPI, gMonPalette_Skorupi_),
	SPECIES_PAL(DRAPION, gMonPalette_Drapion_),
	SPECIES_PAL(CROAGUNK, gMonPalette_Croagunk_),
	SPECIES_PAL(TOXICROAK, gMonPalette_Toxicroak_),
	SPECIES_PAL(CARNIVINE, gMonPalette_Carnivine_),
	SPECIES_PAL(FINNEON, gMonPalette_Finneon_),
	SPECIES_PAL(LUMINEON, gMonPalette_Lumineon_),
	SPECIES_PAL(MANTYKE, gMonPalette_Mantyke_),
	SPECIES_PAL(SNOVER, gMonPalette_Snover_),
	SPECIES_PAL(ABOMASNOW, gMonPalette_Abomasnow_),
	SPECIES_PAL(WEAVILE, gMonPalette_Weavile_),
	SPECIES_PAL(MAGNEZONE, gMonPalette_Magnezone_),
	SPECIES_PAL(LICKILICKY, gMonPalette_Lickilicky_),
	SPECIES_PAL(RHYPERIOR, gMonPalette_Rhyperior_),
	SPECIES_PAL(TANGROWTH, gMonPalette_Tangrowth_),
	SPECIES_PAL(ELECTIVIRE, gMonPalette_Electivire_),
	SPECIES_PAL(MAGMORTAR, gMonPalette_Magmortar_),
	SPECIES_PAL(TOGEKISS, gMonPalette_Togekiss_),
	SPECIES_PAL(YANMEGA, gMonPalette_Yanmega_),
	SPECIES_PAL(LEAFEON, gMonPalette_Leafeon_),
	SPECIES_PAL(GLACEON, gMonPalette_Glaceon_),
	SPECIES_PAL(GLISCOR, gMonPalette_Gliscor_),
	SPECIES_PAL(MAMOSWINE, gMonPalette_Mamoswine_),
	SPECIES_PAL(PORYGONZ, gMonPalette_PorygonZ_),
	SPECIES_PAL(GALLADE, gMonPalette_Gallade_),
	SPECIES_PAL(PROBOPASS, gMonPalette_Probopass_),
	SPECIES_PAL(DUSKNOIR, gMonPalette_Dusknoir_),
	SPECIES_PAL(FROSLASS, gMonPalette_Froslass_),
	SPECIES_PAL(ROTOM, gMonPalette_Rotom_),
	SPECIES_PAL(UXIE, gMonPalette_Uxie_),
	SPECIES_PAL(MESPRIT, gMonPalette_Mesprit_),
	SPECIES_PAL(AZELF, gMonPalette_Azelf_),
	SPECIES_PAL(DIALGA, gMonPalette_Dialga_),
	SPECIES_PAL(PALKIA, gMonPalette_Palkia_),
	SPECIES_PAL(HEATRAN, gMonPalette_Heatran_),
	SPECIES_PAL(REGIGIGAS, gMonPalette_Regigigas_),
	SPECIES_PAL(GIRATINA, gMonPalette_Giratina_),
	SPECIES_PAL(CRESSELIA, gMonPalette_Cresselia_),
	SPECIES_PAL(PHIONE, gMonPalette_Phione_),
	SPECIES_PAL(MANAPHY, gMonPalette_Manaphy_),
	SPECIES_PAL(DARKRAI, gMonPalette_Darkrai_),
	SPECIES_PAL(SHAYMIN, gMonPalette_Shaymin_),
	SPECIES_PAL(ARCEUS, gMonPalette_Arceus_),
	SPECIES_PAL(VICTINI, gMonPalette_Victini_),
	SPECIES_PAL(SNIVY, gMonPalette_Snivy_),
	SPECIES_PAL(SERVINE, gMonPalette_Servine_),
	SPECIES_PAL(SERPERIOR, gMonPalette_Serperior_),
	SPECIES_PAL(TEPIG, gMonPalette_Tepig_),
	SPECIES_PAL(PIGNITE, gMonPalette_Pignite_),
	SPECIES_PAL(EMBOAR, gMonPalette_Emboar_),
	SPECIES_PAL(OSHAWOTT, gMonPalette_Oshawott_),
	SPECIES_PAL(DEWOTT, gMonPalette_Dewott_),
	SPECIES_PAL(SAMUROTT, gMonPalette_Samurott_),
	SPECIES_PAL(PATRAT, gMonPalette_Patrat_),
	SPECIES_PAL(WATCHOG, gMonPalette_Watchog_),
	SPECIES_PAL(LILLIPUP, gMonPalette_Lillipup_),
	SPECIES_PAL(HERDIER, gMonPalette_Herdier_),
	SPECIES_PAL(STOUTLAND, gMonPalette_Stoutland_),
	SPECIES_PAL(PURRLOIN, gMonPalette_Purrloin_),
	SPECIES_PAL(LIEPARD, gMonPalette_Liepard_),
	SPECIES_PAL(PANSAGE, gMonPalette_Pansage_),
	SPECIES_PAL(SIMISAGE, gMonPalette_Simisage_),
	SPECIES_PAL(PANSEAR, gMonPalette_Pansear_),
	SPECIES_PAL(SIMISEAR, gMonPalette_Simisear_),
	SPECIES_PAL(PANPOUR, gMonPalette_Panpour_),
	SPECIES_PAL(SIMIPOUR, gMonPalette_Simipour_),
	SPECIES_PAL(MUNNA, gMonPalette_Munna_),
	SPECIES_PAL(MUSHARNA, gMonPalette_Musharna_),
	SPECIES_PAL(PIDOVE, gMonPalette_Pidove_),
	SPECIES_PAL(TRANQUILL, gMonPalette_Tranquill_),
	SPECIES_PAL(UNFEZANT, gMonPalette_Unfezant_),
	SPECIES_PAL(BLITZLE, gMonPalette_Blitzle_),
	SPECIES_PAL(ZEBSTRIKA, gMonPalette_Zebstrika_),
	SPECIES_PAL(ROGGENROLA, gMonPalette_Roggenrola_),
	SPECIES_PAL(BOLDORE, gMonPalette_Boldore_),
	SPECIES_PAL(GIGALITH, gMonPalette_Gigalith_),
	SPECIES_PAL(WOOBAT, gMonPalette_Woobat_),
	SPECIES_PAL(SWOOBAT, gMonPalette_Swoobat_),
	SPECIES_PAL(DRILBUR, gMonPalette_Drilbur_),
	SPECIES_PAL(EXCADRILL, gMonPalette_Excadrill_),
	SPECIES_PAL(AUDINO, gMonPalette_Audino_),
	SPECIES_PAL(TIMBURR, gMonPalette_Timburr_),
	SPECIES_PAL(GURDURR, gMonPalette_Gurdurr_),
	SPECIES_PAL(CONKELDURR, gMonPalette_Conkeldurr_),
	SPECIES_PAL(TYMPOLE, gMonPalette_Tympole_),
	SPECIES_PAL(PALPITOAD, gMonPalette_Palpitoad_),
	SPECIES_PAL(SEISMITOAD, gMonPalette_Seismitoad_),
	SPECIES_PAL(THROH, gMonPalette_Throh_),
	SPECIES_PAL(SAWK, gMonPalette_Sawk_),
	SPECIES_PAL(SEWADDLE, gMonPalette_Sewaddle_),
	SPECIES_PAL(SWADLOON, gMonPalette_Swadloon_),
	SPECIES_PAL(LEAVANNY, gMonPalette_Leavanny_),
	SPECIES_PAL(VENIPEDE, gMonPalette_Venipede_),
	SPECIES_PAL(WHIRLIPEDE, gMonPalette_Whirlipede_),
	SPECIES_PAL(SCOLIPEDE, gMonPalette_Scolipede_),
	SPECIES_PAL(COTTONEE, gMonPalette_Cottonee_),
	SPECIES_PAL(WHIMSICOTT, gMonPalette_Whimsicott_),
	SPECIES_PAL(PETILIL, gMonPalette_Petilil_),
	SPECIES_PAL(LILLIGANT, gMonPalette_Lilligant_),
	SPECIES_PAL(BASCULIN, gMonPalette_Basculin_),
	SPECIES_PAL(SANDILE, gMonPalette_Sandile_),
	SPECIES_PAL(KROKOROK, gMonPalette_Krokorok_),
	SPECIES_PAL(KROOKODILE, gMonPalette_Krookodile_),
	SPECIES_PAL(DARUMAKA, gMonPalette_Darumaka_),
	SPECIES_PAL(DARMANITAN, gMonPalette_Darmanitan_),
	SPECIES_PAL(MARACTUS, gMonPalette_Maractus_),
	SPECIES_PAL(DWEBBLE, gMonPalette_Dwebble_),
	SPECIES_PAL(CRUSTLE, gMonPalette_Crustle_),
	SPECIES_PAL(SCRAGGY, gMonPalette_Scraggy_),
	SPECIES_PAL(SCRAFTY, gMonPalette_Scrafty_),
	SPECIES_PAL(SIGILYPH, gMonPalette_Sigilyph_),
	SPECIES_PAL(YAMASK, gMonPalette_Yamask_),
	SPECIES_PAL(COFAGRIGUS, gMonPalette_Cofagrigus_),
	SPECIES_PAL(TIRTOUGA, gMonPalette_Tirtouga_),
	SPECIES_PAL(CARRACOSTA, gMonPalette_Carracosta_),
	SPECIES_PAL(ARCHEN, gMonPalette_Archen_),
	SPECIES_PAL(ARCHEOPS, gMonPalette_Archeops_),
	SPECIES_PAL(TRUBBISH, gMonPalette_Trubbish_),
	SPECIES_PAL(GARBODOR, gMonPalette_Garbodor_),
	SPECIES_PAL(ZORUA, gMonPalette_Zorua_),
	SPECIES_PAL(ZOROARK, gMonPalette_Zoroark_),
	SPECIES_PAL(MINCCINO, gMonPalette_Minccino_),
	SPECIES_PAL(CINCCINO, gMonPalette_Cinccino_),
	SPECIES_PAL(GOTHITA, gMonPalette_Gothita_),
	SPECIES_PAL(GOTHORITA, gMonPalette_Gothorita_),
	SPECIES_PAL(GOTHITELLE, gMonPalette_Gothitelle_),
	SPECIES_PAL(SOLOSIS, gMonPalette_Solosis_),
	SPECIES_PAL(DUOSION, gMonPalette_Duosion_),
	SPECIES_PAL(REUNICLUS, gMonPalette_Reuniclus_),
	SPECIES_PAL(DUCKLETT, gMonPalette_Ducklett_),
	SPECIES_PAL(SWANNA, gMonPalette_Swanna_),
	SPECIES_PAL(VANILLITE, gMonPalette_Vanillite_),
	SPECIES_PAL(VANILLISH, gMonPalette_Vanillish_),
	SPECIES_PAL(VANILLUXE, gMonPalette_Vanilluxe_),
	SPECIES_PAL(DEERLING, gMonPalette_Deerling_),
	SPECIES_PAL(SAWSBUCK, gMonPalette_Sawsbuck_),
	SPECIES_PAL(EMOLGA, gMonPalette_Emolga_),
	SPECIES_PAL(KARRABLAST, gMonPalette_Karrablast_),
	SPECIES_PAL(ESCAVALIER, gMonPalette_Escavalier_),
	SPECIES_PAL(FOONGUS, gMonPalette_Foongus_),
	SPECIES_PAL(AMOONGUSS, gMonPalette_Amoonguss_),
	SPECIES_PAL(FRILLISH, gMonPalette_Frillish_),
	SPECIES_PAL(JELLICENT, gMonPalette_Jellicent_),
	SPECIES_PAL(ALOMOMOLA, gMonPalette_Alomomola_),
	SPECIES_PAL(JOLTIK, gMonPalette_Joltik_),
	SPECIES_PAL(GALVANTULA, gMonPalette_Galvantula_),
	SPECIES_PAL(FERROSEED, gMonPalette_Ferroseed_),
	SPECIES_PAL(FERROTHORN, gMonPalette_Ferrothorn_),
	SPECIES_PAL(KLINK, gMonPalette_Klink_),
	SPECIES_PAL(KLANG, gMonPalette_Klang_),
	SPECIES_PAL(KLINKLANG, gMonPalette_Klinklang_),
	SPECIES_PAL(TYNAMO, gMonPalette_Tynamo_),
	SPECIES_PAL(EELEKTRIK, gMonPalette_Eelektrik_),
	SPECIES_PAL(EELEKTROSS, gMonPalette_Eelektross_),
	SPECIES_PAL(ELGYEM, gMonPalette_Elgyem_),
	SPECIES_PAL(BEHEEYEM, gMonPalette_Beheeyem_),
	SPECIES_PAL(LITWICK, gMonPalette_Litwick_),
	SPECIES_PAL(LAMPENT, gMonPalette_Lampent_),
	SPECIES_PAL(CHANDELURE, gMonPalette_Chandelure_),
	SPECIES_PAL(AXEW, gMonPalette_Axew_),
	SPECIES_PAL(FRAXURE, gMonPalette_Fraxure_),
	SPECIES_PAL(HAXORUS, gMonPalette_Haxorus_),
	SPECIES_PAL(CUBCHOO, gMonPalette_Cubchoo_),
	SPECIES_PAL(BEARTIC, gMonPalette_Beartic_),
	SPECIES_PAL(CRYOGONAL, gMonPalette_Cryogonal_),
	SPECIES_PAL(SHELMET, gMonPalette_Shelmet_),
	SPECIES_PAL(ACCELGOR, gMonPalette_Accelgor_),
	SPECIES_PAL(STUNFISK, gMonPalette_Stunfisk_),
	SPECIES_PAL(MIENFOO, gMonPalette_Mienfoo_),
	SPECIES_PAL(MIENSHAO, gMonPalette_Mienshao_),
	SPECIES_PAL(DRUDDIGON, gMonPalette_Druddigon_),
	SPECIES_PAL(GOLETT, gMonPalette_Golett_),
	SPECIES_PAL(GOLURK, gMonPalette_Golurk_),
	SPECIES_PAL(PAWNIARD, gMonPalette_Pawniard_),
	SPECIES_PAL(BISHARP, gMonPalette_Bisharp_),
	SPECIES_PAL(BOUFFALANT, gMonPalette_Bouffalant_),
	SPECIES_PAL(RUFFLET, gMonPalette_Rufflet_),
	SPECIES_PAL(BRAVIARY, gMonPalette_Braviary_),
	SPECIES_PAL(VULLABY, gMonPalette_Vullaby_),
	SPECIES_PAL(MANDIBUZZ, gMonPalette_Mandibuzz_),
	SPECIES_PAL(HEATMOR, gMonPalette_Heatmor_),
	SPECIES_PAL(DURANT, gMonPalette_Durant_),
	SPECIES_PAL(DEINO, gMonPalette_Deino_),
	SPECIES_PAL(ZWEILOUS, gMonPalette_Zweilous_),
	SPECIES_PAL(HYDREIGON, gMonPalette_Hydreigon_),
	SPECIES_PAL(LARVESTA, gMonPalette_Larvesta_),
	SPECIES_PAL(VOLCARONA, gMonPalette_Volcarona_),
	SPECIES_PAL(COBALION, gMonPalette_Cobalion_),
	SPECIES_PAL(TERRAKION, gMonPalette_Terrakion_),
	SPECIES_PAL(VIRIZION, gMonPalette_Virizion_),
	SPECIES_PAL(TORNADUS, gMonPalette_Tornadus_),
	SPECIES_PAL(THUNDURUS, gMonPalette_Thundurus_),
	SPECIES_PAL(RESHIRAM, gMonPalette_Reshiram_),
	SPECIES_PAL(ZEKROM, gMonPalette_Zekrom_),
	SPECIES_PAL(LANDORUS, gMonPalette_Landorus_),
	SPECIES_PAL(KYUREM, gMonPalette_Kyurem_),
	SPECIES_PAL(KELDEO, gMonPalette_Keldeo_),
	SPECIES_PAL(MELOETTA, gMonPalette_Meloetta_),
	SPECIES_PAL(GENESECT, gMonPalette_Genesect_),
	SPECIES_PAL(CHESPIN, gMonPalette_Chespin_),
	SPECIES_PAL(QUILLADIN, gMonPalette_Quilladin_),
	SPECIES_PAL(CHESNAUGHT, gMonPalette_Chesnaught_),
	SPECIES_PAL(FENNEKIN, gMonPalette_Fennekin_),
	SPECIES_PAL(BRAIXEN, gMonPalette_Braixen_),
	SPECIES_PAL(DELPHOX, gMonPalette_Delphox_),
	SPECIES_PAL(FROAKIE, gMonPalette_Froakie_),
	SPECIES_PAL(FROGADIER, gMonPalette_Frogadier_),
	SPECIES_PAL(GRENINJA, gMonPalette_Greninja_),
	SPECIES_PAL(BUNNELBY, gMonPalette_Bunnelby_),
	SPECIES_PAL(DIGGERSBY, gMonPalette_Diggersby_),
	SPECIES_PAL(FLETCHLING, gMonPalette_Fletchling_),
	SPECIES_PAL(FLECHINDER, gMonPalette_Flechinder_),
	SPECIES_PAL(TALONFLAME, gMonPalette_Talonflame_),
	SPECIES_PAL(SCATTERBUG, gMonPalette_Scatterbug_),
	SPECIES_PAL(SPEWPA, gMonPalette_Spewpa_),
	SPECIES_PAL(VIVILLON, gMonPalette_Vivillon_),
	SPECIES_PAL(LITLEO, gMonPalette_Litleo_),
	SPECIES_PAL(PYROAR, gMonPalette_Pyroar_),
	SPECIES_PAL(FLABEBE, gMonPalette_Flabebe_),
	SPECIES_PAL(FLOETTE, gMonPalette_Floette_),
	SPECIES_PAL(FLORGES, gMonPalette_Florges_),
	SPECIES_PAL(SKIDDO, gMonPalette_Skiddo_),
	SPECIES_PAL(GOGOAT, gMonPalette_Gogoat_),
	SPECIES_PAL(PANCHAM, gMonPalette_Pancham_),
	SPECIES_PAL(PANGORO, gMonPalette_Pangoro_),
	SPECIES_PAL(FURFROU, gMonPalette_Furfrou_),
	SPECIES_PAL(ESPURR, gMonPalette_Espurr_),
	SPECIES_PAL(MEOWSTIC, gMonPalette_Meowstic_),
	SPECIES_PAL(HONEDGE, gMonPalette_Honedge_),
	SPECIES_PAL(DOUBLADE, gMonPalette_Doublade_),
	SPECIES_PAL(AEGISLASH, gMonPalette_Aegislash_),
	SPECIES_PAL(SPRITZEE, gMonPalette_Spritzee_),
	SPECIES_PAL(AROMATISSE, gMonPalette_Aromatisse_),
	SPECIES_PAL(SWIRLIX, gMonPalette_Swirlix_),
	SPECIES_PAL(SLURPUFF, gMonPalette_Slurpuff_),
	SPECIES_PAL(INKAY, gMonPalette_Inkay_),
	SPECIES_PAL(MALAMAR, gMonPalette_Malamar_),
	SPECIES_PAL(BINACLE, gMonPalette_Binacle_),
	SPECIES_PAL(BARBARACLE, gMonPalette_Barbaracle_),
	SPECIES_PAL(SKRELP, gMonPalette_Skrelp_),
	SPECIES_PAL(DRAGALGE, gMonPalette_Dragalge_),
	SPECIES_PAL(CLAUNCHER, gMonPalette_Clauncher_),
	SPECIES_PAL(CLAWITZER, gMonPalette_Clawitzer_),
	SPECIES_PAL(HELIOPTILE, gMonPalette_Helioptile_),
	SPECIES_PAL(HELIOLISK, gMonPalette_Heliolisk_),
	SPECIES_PAL(TYRUNT, gMonPalette_Tyrunt_),
	SPECIES_PAL(TYRANTRUM, gMonPalette_Tyrantrum_),
	SPECIES_PAL(AMAURA, gMonPalette_Amaura_),
	SPECIES_PAL(AURORUS, gMonPalette_Aurorus_),
	SPECIES_PAL(SYLVEON, gMonPalette_Sylveon_),
	SPECIES_PAL(HAWLUCHA, gMonPalette_Hawlucha_),
	SPECIES_PAL(DEDENNE, gMonPalette_Dedenne_),
	SPECIES_PAL(CARBINK, gMonPalette_Carbink_),
	SPECIES_PAL(GOOMY, gMonPalette_Goomy_),
	SPECIES_PAL(SLIGGOO, gMonPalette_Sliggoo_),
	SPECIES_PAL(GOODRA, gMonPalette_Goodra_),
	SPECIES_PAL(KLEFKI, gMonPalette_Klefki_),
	SPECIES_PAL(PHANTUMP, gMonPalette_Phantump_),
	SPECIES_PAL(TREVENANT, gMonPalette_Trevenant_),
	SPECIES_PAL(PUMPKABOO, gMonPalette_Pumpkaboo_),
	SPECIES_PAL(GOURGEIST, gMonPalette_Gourgeist_),
	SPECIES_PAL(BERGMITE, gMonPalette_Bergmite_),
	SPECIES_PAL(AVALUGG, gMonPalette_Avalugg_),
	SPECIES_PAL(NOIBAT, gMonPalette_Noibat_),
	SPECIES_PAL(NOIVERN, gMonPalette_Noivern_),
	SPECIES_PAL(XERNEAS, gMonPalette_Xerneas_),
	SPECIES_PAL(YVELTAL, gMonPalette_Yveltal_),
	SPECIES_PAL(ZYGARDE, gMonPalette_Zygarde_),
	SPECIES_PAL(DIANCIE, gMonPalette_Diancie_),
	SPECIES_PAL(HOOPA, gMonPalette_Hoopa_),
	SPECIES_PAL(VOLCANION, gMonPalette_Volcanion_),
	SPECIES_PAL(ROWLET, gMonPalette_Rowlet_),
	SPECIES_PAL(DARTRIX, gMonPalette_Dartrix_),
	SPECIES_PAL(DECIDUEYE, gMonPalette_Decidueye_),
	SPECIES_PAL(LITTEN, gMonPalette_Litten_),
	SPECIES_PAL(TORRACAT, gMonPalette_Torracat_),
	SPECIES_PAL(INCINEROAR, gMonPalette_Incineroar_),
	SPECIES_PAL(POPPLIO, gMonPalette_Popplio_),
	SPECIES_PAL(BRIONNE, gMonPalette_Brionne_),
	SPECIES_PAL(PRIMARINA, gMonPalette_Primarina_),
	SPECIES_PAL(PIKIPEK, gMonPalette_Pikipek_),
	SPECIES_PAL(TRUMBEAK, gMonPalette_Trumbeak_),
	SPECIES_PAL(TOUCANNON, gMonPalette_Toucannon_),
	SPECIES_PAL(YUNGOOS, gMonPalette_Yungoos_),
	SPECIES_PAL(GUMSHOOS, gMonPalette_Gumshoos_),
	SPECIES_PAL(GRUBBIN, gMonPalette_Grubbin_),
	SPECIES_PAL(CHARJABUG, gMonPalette_Charjabug_),
	SPECIES_PAL(VIKAVOLT, gMonPalette_Vikavolt_),
	SPECIES_PAL(CRABRAWLER, gMonPalette_Crabrawler_),
	SPECIES_PAL(CRABMINABL, gMonPalette_Crabminabl_),
	SPECIES_PAL(ORICORIO, gMonPalette_Oricorio_),
	SPECIES_PAL(CUTIEFLY, gMonPalette_Cutiefly_),
	SPECIES_PAL(RIBOMBEE, gMonPalette_Ribombee_),
	SPECIES_PAL(ROCKRUFF, gMonPalette_Rockruff_),
	SPECIES_PAL(LYCANROC, gMonPalette_Lycanroc_),
	SPECIES_PAL(WISHIWASHI, gMonPalette_Wishiwashi_),
	SPECIES_PAL(MAREANIE, gMonPalette_Mareanie_),
	SPECIES_PAL(TOXAPEX, gMonPalette_Toxapex_),
	SPECIES_PAL(MUDBRAY, gMonPalette_Mudbray_),
	SPECIES_PAL(MUDSDALE, gMonPalette_Mudsdale_),
	SPECIES_PAL(DEWPIDER, gMonPalette_Dewpider_),
	SPECIES_PAL(ARAQUANID, gMonPalette_Araquanid_),
	SPECIES_PAL(FOMANTIS, gMonPalette_Fomantis_),
	SPECIES_PAL(LURANTIS, gMonPalette_Lurantis_),
	SPECIES_PAL(MORELULL, gMonPalette_Morelull_),
	SPECIES_PAL(SHIINOTIC, gMonPalette_Shiinotic_),
	SPECIES_PAL(SALANDIT, gMonPalette_Salandit_),
	SPECIES_PAL(SALAZZLE, gMonPalette_Salazzle_),
	SPECIES_PAL(STUFFUL, gMonPalette_Stufful_),
	SPECIES_PAL(BEWEAR, gMonPalette_Bewear_),
	SPECIES_PAL(BOUNSWEET, gMonPalette_Bounsweet_),
	SPECIES_PAL(STEENEE, gMonPalette_Steenee_),
	SPECIES_PAL(TSAREENA, gMonPalette_Tsareena_),
	SPECIES_PAL(COMFEY, gMonPalette_Comfey_),
	SPECIES_PAL(ORANGURU, gMonPalette_Oranguru_),
	SPECIES_PAL(PASSIMIAN, gMonPalette_Passimian_),
	SPECIES_PAL(WIMPOD, gMonPalette_Wimpod_),
	SPECIES_PAL(GOLISOPOD, gMonPalette_Golisopod_),
	SPECIES_PAL(SANDYGAST, gMonPalette_Sandygast_),
	SPECIES_PAL(PALOSSAND, gMonPalette_Palossand_),
	SPECIES_PAL(PYUKUMUKU, gMonPalette_Pyukumuku_),
	SPECIES_PAL(TYPENULL, gMonPalette_TypeNull_),
	SPECIES_PAL(SILVALLY, gMonPalette_Silvally_),
	SPECIES_PAL(MINIOR, gMonPalette_Minior_),
	SPECIES_PAL(KOMALA, gMonPalette_Komala_),
	SPECIES_PAL(TURTONATOR, gMonPalette_Turtonator_),
	SPECIES_PAL(TOGEDEMARU, gMonPalette_Togedemaru_),
	SPECIES_PAL(MIMIKYU, gMonPalette_Mimikyu_),
	SPECIES_PAL(BRUXISH, gMonPalette_Bruxish_),
	SPECIES_PAL(DRAMPA, gMonPalette_Drampa_),
	SPECIES_PAL(DHELMISE, gMonPalette_Dhelmise_),
	SPECIES_PAL(JANGMOO, gMonPalette_Jangmoo_),
	SPECIES_PAL(HAKAMOO, gMonPalette_Hakamoo_),
	SPECIES_PAL(KOMMOO, gMonPalette_Kommoo_),
	SPECIES_PAL(TAPUKOKO, gMonPalette_TapuKoko_),
	SPECIES_PAL(TAPULELE, gMonPalette_TapuLele_),
	SPECIES_PAL(TAPUBULU, gMonPalette_TapuBulu_),
	SPECIES_PAL(TAPUFINI, gMonPalette_TapuFini_),
	SPECIES_PAL(COSMOG, gMonPalette_Cosmog_),
	SPECIES_PAL(COSMOEM, gMonPalette_Cosmoem_),
	SPECIES_PAL(SOLGALEO, gMonPalette_Solgaleo_),
	SPECIES_PAL(LUNALA, gMonPalette_Lunala_),
	SPECIES_PAL(NIHILEGO, gMonPalette_Nihilego_),
	SPECIES_PAL(BUZZWOLE, gMonPalette_Buzzwole_),
	SPECIES_PAL(PHEROMOSA, gMonPalette_Pheromosa_),
	SPECIES_PAL(XURKITREE, gMonPalette_Xurkitree_),
	SPECIES_PAL(CELESTEELA, gMonPalette_Celesteela_),
	SPECIES_PAL(KARTANA, gMonPalette_Kartana_),
	SPECIES_PAL(GUZZLORD, gMonPalette_Guzzlord_),
	SPECIES_PAL(NECROZMA, gMonPalette_Necrozma_),
	SPECIES_PAL(MAGEARNA, gMonPalette_Magearna_),
	SPECIES_PAL(MARSHADOW, gMonPalette_Marshadow_),
	SPECIES_PAL(POIPOLE, gMonPalette_Poipole_),
	SPECIES_PAL(NAGANADEL, gMonPalette_Naganadel_),
	SPECIES_PAL(STAKATAKA, gMonPalette_Stakataka_),
	SPECIES_PAL(BLACEPHALN, gMonPalette_Blacephaln_),
	SPECIES_PAL(ZERAORA, gMonPalette_Zeraora_),
	SPECIES_PAL(MELTAN, gMonPalette_Meltan_),
	SPECIES_PAL(MELMETAL, gMonPalette_Melmetal_),
	SPECIES_PAL(GROOKEY, gMonPalette_Grookey_),
	SPECIES_PAL(THWACKEY, gMonPalette_Thwackey_),
	SPECIES_PAL(RILLABOOM, gMonPalette_Rillaboom_),
	SPECIES_PAL(SCORBUNNY, gMonPalette_Scorbunny_),
	SPECIES_PAL(RABOOT, gMonPalette_Raboot_),
	SPECIES_PAL(CINDERACE, gMonPalette_Cinderace_),
	SPECIES_PAL(SOBBLE, gMonPalette_Sobble_),
	SPECIES_PAL(DRIZZILE, gMonPalette_Drizzile_),
	SPECIES_PAL(INTELEON, gMonPalette_Inteleon_),
	SPECIES_PAL(SKWOVET, gMonPalette_Skwovet_),
	SPECIES_PAL(GREEDENT, gMonPalette_Greedent_),
	SPECIES_PAL(ROOKIDEE, gMonPalette_Rookidee_),
	SPECIES_PAL(CORVISQUIR, gMonPalette_Corvisquir_),
	SPECIES_PAL(CORVIKNIGH, gMonPalette_Corviknigh_),
	SPECIES_PAL(BLIPBUG, gMonPalette_Blipbug_),
	SPECIES_PAL(DOTTLER, gMonPalette_Dottler_),
	SPECIES_PAL(ORBEETLE, gMonPalette_Orbeetle_),
	SPECIES_PAL(NICKIT, gMonPalette_Nickit_),
	SPECIES_PAL(THIEVUL, gMonPalette_Thievul_),
	SPECIES_PAL(GOSSIFLEUR, gMonPalette_Gossifleur_),
	SPECIES_PAL(ELDEGOSS, gMonPalette_Eldegoss_),
	SPECIES_PAL(WOOLOO, gMonPalette_Wooloo_),
	SPECIES_PAL(DUBWOOL, gMonPalette_Dubwool_),
	SPECIES_PAL(CHEWTLE, gMonPalette_Chewtle_),
	SPECIES_PAL(DREDNAW, gMonPalette_Drednaw_),
	SPECIES_PAL(YAMPER, gMonPalette_Yamper_),
	SPECIES_PAL(BOLTUND, gMonPalette_Boltund_),
	SPECIES_PAL(ROLYCOLY, gMonPalette_Rolycoly_),
	SPECIES_PAL(CARKOL, gMonPalette_Carkol_),
	SPECIES_PAL(COALOSSAL, gMonPalette_Coalossal_),
	SPECIES_PAL(APPLIN, gMonPalette_Applin_),
	SPECIES_PAL(FLAPPLE, gMonPalette_Flapple_),
	SPECIES_PAL(APPLETUN, gMonPalette_Appletun_),
	SPECIES_PAL(SILICOBRA, gMonPalette_Silicobra_),
	SPECIES_PAL(SANDACONDA, gMonPalette_Sandaconda_),
	SPECIES_PAL(CRAMORANT, gMonPalette_Cramorant_),
	SPECIES_PAL(ARROKUDA, gMonPalette_Arrokuda_),
	SPECIES_PAL(BARRASKEWD, gMonPalette_Barraskewd_),
	SPECIES_PAL(TOXEL, gMonPalette_Toxel_),
	SPECIES_PAL(TOXTRICITY, gMonPalette_Toxtricity_),
	SPECIES_PAL(SIZZLIPEDE, gMonPalette_Sizzlipede_),
	SPECIES_PAL(CENTISKORC, gMonPalette_Centiskorc_),
	SPECIES_PAL(CLOBBOPUS, gMonPalette_Clobbopus_),
	SPECIES_PAL(GRAPPLOCT, gMonPalette_Grapploct_),
	SPECIES_PAL(SINISTEA, gMonPalette_Sinistea_),
	SPECIES_PAL(POLTEAGEIS, gMonPalette_Polteageis_),
	SPECIES_PAL(HATENNA, gMonPalette_Hatenna_),
	SPECIES_PAL(HATTREM, gMonPalette_Hattrem_),
	SPECIES_PAL(HATTERENE, gMonPalette_Hatterene_),
	SPECIES_PAL(IMPIDIMP, gMonPalette_Impidimp_),
	SPECIES_PAL(MORGREM, gMonPalette_Morgrem_),
	SPECIES_PAL(GRIMMSNARL, gMonPalette_Grimmsnarl_),
	SPECIES_PAL(OBSTAGOON, gMonPalette_Obstagoon_),
	SPECIES_PAL(PERRSERKER, gMonPalette_Perrserker_),
	SPECIES_PAL(CURSOLA, gMonPalette_Cursola_),
	SPECIES_PAL(SIRFETCHD, gMonPalette_Sirfetchd_),
	SPECIES_PAL(MRRIME, gMonPalette_MrRime_),
	SPECIES_PAL(RUNERIGUS, gMonPalette_Runerigus_),
	SPECIES_PAL(MILCERY, gMonPalette_Milcery_),
	SPECIES_PAL(ALCREMIE, gMonPalette_Alcremie_),
	SPECIES_PAL(FALINKS, gMonPalette_Falinks_),
	SPECIES_PAL(PINCURCHIN, gMonPalette_Pincurchin_),
	SPECIES_PAL(SNOM, gMonPalette_Snom_),
	SPECIES_PAL(FROSMOTH, gMonPalette_Frosmoth_),
	SPECIES_PAL(STONJOURNE, gMonPalette_Stonjourne_),
	SPECIES_PAL(EISCUE, gMonPalette_Eiscue_),
	SPECIES_PAL(INDEEDEE, gMonPalette_Indeedee_),
	SPECIES_PAL(MORPEKO, gMonPalette_Morpeko_),
	SPECIES_PAL(CUFANT, gMonPalette_Cufant_),
	SPECIES_PAL(COPPERAJAH, gMonPalette_Copperajah_),
	SPECIES_PAL(DRACOZOLT, gMonPalette_Dracozolt_),
	SPECIES_PAL(ARCTOZOLT, gMonPalette_Arctozolt_),
	SPECIES_PAL(DRACOVISH, gMonPalette_Dracovish_),
	SPECIES_PAL(ARCTOVISH, gMonPalette_Arctovish_),
	SPECIES_PAL(DURALUDON, gMonPalette_Duraludon_),
	SPECIES_PAL(DREEPY, gMonPalette_Dreepy_),
	SPECIES_PAL(DRAKLOAK, gMonPalette_Drakloak_),
	SPECIES_PAL(DRAGAPULT, gMonPalette_Dragapult_),
	SPECIES_PAL(ZACIAN, gMonPalette_Zacian_),
	SPECIES_PAL(ZAMAZENTA, gMonPalette_Zamazenta_),
	SPECIES_PAL(ETERNATUS, gMonPalette_Eternatus_),
	SPECIES_PAL(KUBFU, gMonPalette_Kubfu_),
	SPECIES_PAL(URSHIFU, gMonPalette_Urshifu_),
	SPECIES_PAL(ZARUDE, gMonPalette_Zarude_),
	SPECIES_PAL(REGIELEKI, gMonPalette_Regieleki_),
	SPECIES_PAL(REGIDRAGO, gMonPalette_Regidrago_),
	SPECIES_PAL(GLASTRIER, gMonPalette_Glastrier_),
	SPECIES_PAL(SPECTRIER, gMonPalette_Spectrier_),
	SPECIES_PAL(CALYREX, gMonPalette_Calyrex_),
	SPECIES_PAL(WYRDEER, gMonPalette_Wyrdeer_),
	SPECIES_PAL(KLEAVOR, gMonPalette_Kleavor_),
	SPECIES_PAL(URSALUNA, gMonPalette_Ursaluna_),
	SPECIES_PAL(BSCULEGION, gMonPalette_Bsculegion_),
	SPECIES_PAL(SNEASLER, gMonPalette_Sneasler_),
	SPECIES_PAL(OVERQWIL, gMonPalette_Overqwil_),
	SPECIES_PAL(ENAMORUS, gMonPalette_Enamorus_),
	SPECIES_PAL(VENUSAUR_2, gMonPalette_Venusaur2_),
	SPECIES_PAL(CHARIZARD_2, gMonPalette_Charizard2_),
	SPECIES_PAL(CHARIZARD_3, gMonPalette_Charizard3_),
	SPECIES_PAL(BLASTOISE_2, gMonPalette_Blastoise2_),
	SPECIES_PAL(BEEDRILL_2, gMonPalette_Beedrill2_),
	SPECIES_PAL(PIDGEOT_2, gMonPalette_Pidgeot2_),
	SPECIES_PAL(ALAKAZAM_2, gMonPalette_Alakazam2_),
	SPECIES_PAL(SLOWBRO_2, gMonPalette_Slowbro2_),
	SPECIES_PAL(GENGAR_2, gMonPalette_Gengar2_),
	SPECIES_PAL(KANGASKHAN_2, gMonPalette_Kangaskhan2_),
	SPECIES_PAL(PINSIR_2, gMonPalette_Pinsir2_),
	SPECIES_PAL(GYARADOS_2, gMonPalette_Gyarados2_),
	SPECIES_PAL(AERODACTYL_2, gMonPalette_Aerodactyl2_),
	SPECIES_PAL(MEWTWO_2, gMonPalette_Mewtwo2_),
	SPECIES_PAL(MEWTWO_3, gMonPalette_Mewtwo3_),
	SPECIES_PAL(AMPHAROS_2, gMonPalette_Ampharos2_),
	SPECIES_PAL(STEELIX_2, gMonPalette_Steelix2_),
	SPECIES_PAL(SCIZOR_2, gMonPalette_Scizor2_),
	SPECIES_PAL(HERACROSS_2, gMonPalette_Heracross2_),
	SPECIES_PAL(HOUNDOOM_2, gMonPalette_Houndoom2_),
	SPECIES_PAL(TYRANITAR_2, gMonPalette_Tyranitar2_),
	SPECIES_PAL(SCEPTILE_2, gMonPalette_Sceptile2_),
	SPECIES_PAL(BLAZIKEN_2, gMonPalette_Blaziken2_),
	SPECIES_PAL(SWAMPERT_2, gMonPalette_Swampert2_),
	SPECIES_PAL(GARDEVOIR_2, gMonPalette_Gardevoir2_),
	SPECIES_PAL(SABLEYE_2, gMonPalette_Sableye2_),
	SPECIES_PAL(MAWILE_2, gMonPalette_Mawile2_),
	SPECIES_PAL(AGGRON_2, gMonPalette_Aggron2_),
	SPECIES_PAL(MEDICHAM_2, gMonPalette_Medicham2_),
	SPECIES_PAL(MANECTRIC_2, gMonPalette_Manectric2_),
	SPECIES_PAL(SHARPEDO_2, gMonPalette_Sharpedo2_),
	SPECIES_PAL(CAMERUPT_2, gMonPalette_Camerupt2_),
	SPECIES_PAL(ALTARIA_2, gMonPalette_Altaria2_),
	SPECIES_PAL(BANETTE_2, gMonPalette_Banette2_),
	SPECIES_PAL(ABSOL_2, gMonPalette_Absol2_),
	SPECIES_PAL(GLALIE_2, gMonPalette_Glalie2_),
	SPECIES_PAL(SALAMENCE_2, gMonPalette_Salamence2_),
	SPECIES_PAL(METAGROSS_2, gMonPalette_Metagross2_),
	SPECIES_PAL(LATIAS_2, gMonPalette_Latias2_),
	SPECIES_PAL(LATIOS_2, gMonPalette_Latios2_),
	SPECIES_PAL(LOPUNNY_2, gMonPalette_Lopunny2_),
	SPECIES_PAL(GARCHOMP_2, gMonPalette_Garchomp2_),
	SPECIES_PAL(LUCARIO_2, gMonPalette_Lucario2_),
	SPECIES_PAL(ABOMASNOW_2, gMonPalette_Abomasnow2_),
	SPECIES_PAL(GALLADE_2, gMonPalette_Gallade2_),
	SPECIES_PAL(AUDINO_2, gMonPalette_Audino2_),
	SPECIES_PAL(DIANCIE_2, gMonPalette_Diancie2_),
	SPECIES_PAL(RAYQUAZA_2, gMonPalette_Rayquaza2_),
	SPECIES_PAL(KYOGRE_2, gMonPalette_Kyogre2_),
	SPECIES_PAL(GROUDON_2, gMonPalette_Groudon2_),
	SPECIES_PAL(RATTATA_2, gMonPalette_Rattata2_),
	SPECIES_PAL(RATICATE_2, gMonPalette_Raticate2_),
	SPECIES_PAL(RAICHU_2, gMonPalette_Raichu2_),
	SPECIES_PAL(SANDSHREW_2, gMonPalette_Sandshrew2_),
	SPECIES_PAL(SANDSLASH_2, gMonPalette_Sandslash2_),
	SPECIES_PAL(VULPIX_2, gMonPalette_Vulpix2_),
	SPECIES_PAL(NINETALES_2, gMonPalette_Ninetales2_),
	SPECIES_PAL(DIGLETT_2, gMonPalette_Diglett2_),
	SPECIES_PAL(DUGTRIO_2, gMonPalette_Dugtrio2_),
	SPECIES_PAL(MEOWTH_2, gMonPalette_Meowth2_),
	SPECIES_PAL(PERSIAN_2, gMonPalette_Persian2_),
	SPECIES_PAL(GEODUDE_2, gMonPalette_Geodude2_),
	SPECIES_PAL(GRAVELER_2, gMonPalette_Graveler2_),
	SPECIES_PAL(GOLEM_2, gMonPalette_Golem2_),
	SPECIES_PAL(GRIMER_2, gMonPalette_Grimer2_),
	SPECIES_PAL(MUK_2, gMonPalette_Muk2_),
	SPECIES_PAL(EXEGGUTOR_2, gMonPalette_Exeggutor2_),
	SPECIES_PAL(MAROWAK_2, gMonPalette_Marowak2_),
	SPECIES_PAL(MEOWTH_3, gMonPalette_Meowth3_),
	SPECIES_PAL(PONYTA_2, gMonPalette_Ponyta2_),
	SPECIES_PAL(RAPIDASH_2, gMonPalette_Rapidash2_),
	SPECIES_PAL(SLOWPOKE_2, gMonPalette_Slowpoke2_),
	SPECIES_PAL(SLOWBRO_3, gMonPalette_Slowbro3_),
	SPECIES_PAL(FARFETCHD_2, gMonPalette_Farfetchd2_),
	SPECIES_PAL(WEEZING_2, gMonPalette_Weezing2_),
	SPECIES_PAL(MRMIME_2, gMonPalette_MrMime2_),
	SPECIES_PAL(ARTICUNO_2, gMonPalette_Articuno2_),
	SPECIES_PAL(ZAPDOS_2, gMonPalette_Zapdos2_),
	SPECIES_PAL(MOLTRES_2, gMonPalette_Moltres2_),
	SPECIES_PAL(SLOWKING_2, gMonPalette_Slowking2_),
	SPECIES_PAL(CORSOLA_2, gMonPalette_Corsola2_),
	SPECIES_PAL(ZIGZAGOON_2, gMonPalette_Zigzagoon2_),
	SPECIES_PAL(LINOONE_2, gMonPalette_Linoone2_),
	SPECIES_PAL(DARUMAKA_2, gMonPalette_Darumaka2_),
	SPECIES_PAL(DARMANITAN_2, gMonPalette_Darmanitan2_),
	SPECIES_PAL(YAMASK_2, gMonPalette_Yamask2_),
	SPECIES_PAL(STUNFISK_2, gMonPalette_Stunfisk2_),
	SPECIES_PAL(GROWLITHE_2, gMonPalette_Growlithe2_),
	SPECIES_PAL(ARCANINE_2, gMonPalette_Arcanine2_),
	SPECIES_PAL(VOLTORB_2, gMonPalette_Voltorb2_),
	SPECIES_PAL(ELECTRODE_2, gMonPalette_Electrode2_),
	SPECIES_PAL(TYPHLOSION_2, gMonPalette_Typhlosion2_),
	SPECIES_PAL(QWILFISH_2, gMonPalette_Qwilfish2_),
	SPECIES_PAL(SNEASEL_2, gMonPalette_Sneasel2_),
	SPECIES_PAL(SAMUROTT_2, gMonPalette_Samurott2_),
	SPECIES_PAL(LILLIGANT_2, gMonPalette_Lilligant2_),
	SPECIES_PAL(ZORUA_2, gMonPalette_Zorua2_),
	SPECIES_PAL(ZOROARK_2, gMonPalette_Zoroark2_),
	SPECIES_PAL(BRAVIARY_2, gMonPalette_Braviary2_),
	SPECIES_PAL(SLIGGOO_2, gMonPalette_Sliggoo2_),
	SPECIES_PAL(GOODRA_2, gMonPalette_Goodra2_),
	SPECIES_PAL(AVALUGG_2, gMonPalette_Avalugg2_),
	SPECIES_PAL(DECIDUEYE_2, gMonPalette_Decidueye2_),
	SPECIES_PAL(PIKACHU_2, gMonPalette_Pikachu2_),
	SPECIES_PAL(PIKACHU_3, gMonPalette_Pikachu3_),
	SPECIES_PAL(PIKACHU_4, gMonPalette_Pikachu4_),
	SPECIES_PAL(PIKACHU_5, gMonPalette_Pikachu5_),
	SPECIES_PAL(PIKACHU_6, gMonPalette_Pikachu6_),
	SPECIES_PAL(PIKACHU_7, gMonPalette_Pikachu7_),
	SPECIES_PAL(PIKACHU_8, gMonPalette_Pikachu8_),
	SPECIES_PAL(PIKACHU_9, gMonPalette_Pikachu9_),
	SPECIES_PAL(PIKACHU_10, gMonPalette_Pikachu10_),
	SPECIES_PAL(PIKACHU_11, gMonPalette_Pikachu11_),
	SPECIES_PAL(PIKACHU_12, gMonPalette_Pikachu12_),
	SPECIES_PAL(PIKACHU_13, gMonPalette_Pikachu13_),
	SPECIES_PAL(PIKACHU_14, gMonPalette_Pikachu14_),
	SPECIES_PAL(PIKACHU_15, gMonPalette_Pikachu15_),
	SPECIES_PAL(UNOWN_B, gMonPalette_UnownB_),
    SPECIES_PAL(UNOWN_C, gMonPalette_UnownC_),
    SPECIES_PAL(UNOWN_D, gMonPalette_UnownD_),
    SPECIES_PAL(UNOWN_E, gMonPalette_UnownE_),
    SPECIES_PAL(UNOWN_F, gMonPalette_UnownF_),
    SPECIES_PAL(UNOWN_G, gMonPalette_UnownG_),
    SPECIES_PAL(UNOWN_H, gMonPalette_UnownH_),
    SPECIES_PAL(UNOWN_I, gMonPalette_UnownI_),
    SPECIES_PAL(UNOWN_J, gMonPalette_UnownJ_),
    SPECIES_PAL(UNOWN_K, gMonPalette_UnownK_),
    SPECIES_PAL(UNOWN_L, gMonPalette_UnownL_),
    SPECIES_PAL(UNOWN_M, gMonPalette_UnownM_),
    SPECIES_PAL(UNOWN_N, gMonPalette_UnownN_),
    SPECIES_PAL(UNOWN_O, gMonPalette_UnownO_),
    SPECIES_PAL(UNOWN_P, gMonPalette_UnownP_),
    SPECIES_PAL(UNOWN_Q, gMonPalette_UnownQ_),
    SPECIES_PAL(UNOWN_R, gMonPalette_UnownR_),
    SPECIES_PAL(UNOWN_S, gMonPalette_UnownS_),
    SPECIES_PAL(UNOWN_T, gMonPalette_UnownT_),
    SPECIES_PAL(UNOWN_U, gMonPalette_UnownU_),
    SPECIES_PAL(UNOWN_V, gMonPalette_UnownV_),
    SPECIES_PAL(UNOWN_W, gMonPalette_UnownW_),
    SPECIES_PAL(UNOWN_X, gMonPalette_UnownX_),
    SPECIES_PAL(UNOWN_Y, gMonPalette_UnownY_),
    SPECIES_PAL(UNOWN_Z, gMonPalette_UnownZ_),
	SPECIES_PAL(CASTFORM_2, gMonPalette_Castform2_),
	SPECIES_PAL(CASTFORM_3, gMonPalette_Castform3_),
	SPECIES_PAL(CASTFORM_4, gMonPalette_Castform4_),
	SPECIES_PAL(DEOXYS_2, gMonPalette_Deoxys2_),
	SPECIES_PAL(DEOXYS_3, gMonPalette_Deoxys3_),
	SPECIES_PAL(DEOXYS_4, gMonPalette_Deoxys4_),
	SPECIES_PAL(BURMY_2, gMonPalette_Burmy2_),
	SPECIES_PAL(BURMY_3, gMonPalette_Burmy3_),
	SPECIES_PAL(WORMADAM_2, gMonPalette_Wormadam2_),
	SPECIES_PAL(WORMADAM_3, gMonPalette_Wormadam3_),
	SPECIES_PAL(CHERRIM_2, gMonPalette_Cherrim2_),
	SPECIES_PAL(SHELLOS_2, gMonPalette_Shellos2_),
	SPECIES_PAL(GASTRODON_2, gMonPalette_Gastrodon2_),
	SPECIES_PAL(ROTOM_2, gMonPalette_Rotom2_),
	SPECIES_PAL(ROTOM_3, gMonPalette_Rotom3_),
	SPECIES_PAL(ROTOM_4, gMonPalette_Rotom4_),
	SPECIES_PAL(ROTOM_5, gMonPalette_Rotom5_),
	SPECIES_PAL(ROTOM_6, gMonPalette_Rotom6_),
	SPECIES_PAL(DIALGA_2, gMonPalette_Dialga2_),
	SPECIES_PAL(PALKIA_2, gMonPalette_Palkia2_),
	SPECIES_PAL(GIRATINA_2, gMonPalette_Giratina2_),
	SPECIES_PAL(SHAYMIN_2, gMonPalette_Shaymin2_),
	SPECIES_PAL(ARCEUS_2, gMonPalette_Arceus2_),
	SPECIES_PAL(ARCEUS_3, gMonPalette_Arceus3_),
	SPECIES_PAL(ARCEUS_4, gMonPalette_Arceus4_),
	SPECIES_PAL(ARCEUS_5, gMonPalette_Arceus5_),
	SPECIES_PAL(ARCEUS_6, gMonPalette_Arceus6_),
	SPECIES_PAL(ARCEUS_7, gMonPalette_Arceus7_),
	SPECIES_PAL(ARCEUS_8, gMonPalette_Arceus8_),
	SPECIES_PAL(ARCEUS_9, gMonPalette_Arceus9_),
	SPECIES_PAL(ARCEUS_10, gMonPalette_Arceus10_),
	SPECIES_PAL(ARCEUS_11, gMonPalette_Arceus11_),
	SPECIES_PAL(ARCEUS_12, gMonPalette_Arceus12_),
	SPECIES_PAL(ARCEUS_13, gMonPalette_Arceus13_),
	SPECIES_PAL(ARCEUS_14, gMonPalette_Arceus14_),
	SPECIES_PAL(ARCEUS_15, gMonPalette_Arceus15_),
	SPECIES_PAL(ARCEUS_16, gMonPalette_Arceus16_),
	SPECIES_PAL(ARCEUS_17, gMonPalette_Arceus17_),
	SPECIES_PAL(ARCEUS_18, gMonPalette_Arceus18_),
	SPECIES_PAL(BASCULIN_2, gMonPalette_Basculin2_),
	SPECIES_PAL(BASCULIN_3, gMonPalette_Basculin3_),
	SPECIES_PAL(DARMANITAN_3, gMonPalette_Darmanitan3_),
	SPECIES_PAL(DARMANITAN_4, gMonPalette_Darmanitan4_),
	SPECIES_PAL(DEERLING_2, gMonPalette_Deerling2_),
	SPECIES_PAL(DEERLING_3, gMonPalette_Deerling3_),
	SPECIES_PAL(DEERLING_4, gMonPalette_Deerling4_),
	SPECIES_PAL(SAWSBUCK_2, gMonPalette_Sawsbuck2_),
	SPECIES_PAL(SAWSBUCK_3, gMonPalette_Sawsbuck3_),
	SPECIES_PAL(SAWSBUCK_4, gMonPalette_Sawsbuck4_),
	SPECIES_PAL(TORNADUS_2, gMonPalette_Tornadus2_),
	SPECIES_PAL(THUNDURUS_2, gMonPalette_Thundurus2_),
	SPECIES_PAL(LANDORUS_2, gMonPalette_Landorus2_),
	SPECIES_PAL(ENAMORUS_2, gMonPalette_Enamorus2_),
	SPECIES_PAL(KYUREM_2, gMonPalette_Kyurem2_),
	SPECIES_PAL(KYUREM_3, gMonPalette_Kyurem3_),
	SPECIES_PAL(KELDEO_2, gMonPalette_Keldeo2_),
	SPECIES_PAL(MELOETTA_2, gMonPalette_Meloetta2_),
	SPECIES_PAL(GENESECT_2, gMonPalette_Genesect2_),
	SPECIES_PAL(GENESECT_3, gMonPalette_Genesect3_),
	SPECIES_PAL(GENESECT_4, gMonPalette_Genesect4_),
	SPECIES_PAL(GENESECT_5, gMonPalette_Genesect5_),
	SPECIES_PAL(GRENINJA_2, gMonPalette_Greninja2_),
	SPECIES_PAL(GRENINJA_3, gMonPalette_Greninja3_),
	SPECIES_PAL(VIVILLON_2, gMonPalette_Vivillon2_),
	SPECIES_PAL(VIVILLON_3, gMonPalette_Vivillon3_),
	SPECIES_PAL(VIVILLON_4, gMonPalette_Vivillon4_),
	SPECIES_PAL(VIVILLON_5, gMonPalette_Vivillon5_),
	SPECIES_PAL(VIVILLON_6, gMonPalette_Vivillon6_),
	SPECIES_PAL(VIVILLON_7, gMonPalette_Vivillon7_),
	SPECIES_PAL(VIVILLON_8, gMonPalette_Vivillon8_),
	SPECIES_PAL(VIVILLON_9, gMonPalette_Vivillon9_),
	SPECIES_PAL(VIVILLON_10, gMonPalette_Vivillon10_),
	SPECIES_PAL(VIVILLON_11, gMonPalette_Vivillon11_),
	SPECIES_PAL(VIVILLON_12, gMonPalette_Vivillon12_),
	SPECIES_PAL(VIVILLON_13, gMonPalette_Vivillon13_),
	SPECIES_PAL(VIVILLON_14, gMonPalette_Vivillon14_),
	SPECIES_PAL(VIVILLON_15, gMonPalette_Vivillon15_),
	SPECIES_PAL(VIVILLON_16, gMonPalette_Vivillon16_),
	SPECIES_PAL(VIVILLON_17, gMonPalette_Vivillon17_),
	SPECIES_PAL(VIVILLON_18, gMonPalette_Vivillon18_),
	SPECIES_PAL(VIVILLON_19, gMonPalette_Vivillon19_),
	SPECIES_PAL(VIVILLON_20, gMonPalette_Vivillon20_),
	SPECIES_PAL(FLABEBE_2, gMonPalette_Flabebe2_),
	SPECIES_PAL(FLABEBE_3, gMonPalette_Flabebe3_),
	SPECIES_PAL(FLABEBE_4, gMonPalette_Flabebe4_),
	SPECIES_PAL(FLABEBE_5, gMonPalette_Flabebe5_),
	SPECIES_PAL(FLOETTE_2, gMonPalette_Floette2_),
	SPECIES_PAL(FLOETTE_3, gMonPalette_Floette3_),
	SPECIES_PAL(FLOETTE_4, gMonPalette_Floette4_),
	SPECIES_PAL(FLOETTE_5, gMonPalette_Floette5_),
	SPECIES_PAL(FLOETTE_6, gMonPalette_Floette6_),
	SPECIES_PAL(FLORGES_2, gMonPalette_Florges2_),
	SPECIES_PAL(FLORGES_3, gMonPalette_Florges3_),
	SPECIES_PAL(FLORGES_4, gMonPalette_Florges4_),
	SPECIES_PAL(FLORGES_5, gMonPalette_Florges5_),
	SPECIES_PAL(FURFROU_2, gMonPalette_Furfrou2_),
	SPECIES_PAL(FURFROU_3, gMonPalette_Furfrou3_),
	SPECIES_PAL(FURFROU_4, gMonPalette_Furfrou4_),
	SPECIES_PAL(FURFROU_5, gMonPalette_Furfrou5_),
	SPECIES_PAL(FURFROU_6, gMonPalette_Furfrou6_),
	SPECIES_PAL(FURFROU_7, gMonPalette_Furfrou7_),
	SPECIES_PAL(FURFROU_8, gMonPalette_Furfrou8_),
	SPECIES_PAL(FURFROU_9, gMonPalette_Furfrou9_),
	SPECIES_PAL(FURFROU_10, gMonPalette_Furfrou10_),
	SPECIES_PAL(MEOWSTIC_2, gMonPalette_Meowstic2_),
	SPECIES_PAL(AEGISLASH_2, gMonPalette_Aegislash2_),
	SPECIES_PAL(PUMPKABOO_2, gMonPalette_Pumpkaboo2_),
	SPECIES_PAL(PUMPKABOO_3, gMonPalette_Pumpkaboo3_),
	SPECIES_PAL(PUMPKABOO_4, gMonPalette_Pumpkaboo4_),
	SPECIES_PAL(GOURGEIST_2, gMonPalette_Gourgeist2_),
	SPECIES_PAL(GOURGEIST_3, gMonPalette_Gourgeist3_),
	SPECIES_PAL(GOURGEIST_4, gMonPalette_Gourgeist4_),
	SPECIES_PAL(XERNEAS_2, gMonPalette_Xerneas2_),
	SPECIES_PAL(ZYGARDE_2, gMonPalette_Zygarde2_),
	SPECIES_PAL(ZYGARDE_3, gMonPalette_Zygarde3_),
	SPECIES_PAL(ZYGARDE_4, gMonPalette_Zygarde4_),
	SPECIES_PAL(ZYGARDE_5, gMonPalette_Zygarde5_),
	SPECIES_PAL(HOOPA_2, gMonPalette_Hoopa2_),
	SPECIES_PAL(ORICORIO_2, gMonPalette_Oricorio2_),
	SPECIES_PAL(ORICORIO_3, gMonPalette_Oricorio3_),
	SPECIES_PAL(ORICORIO_4, gMonPalette_Oricorio4_),
	SPECIES_PAL(ROCKRUFF_2, gMonPalette_Rockruff2_),
	SPECIES_PAL(LYCANROC_2, gMonPalette_Lycanroc2_),
	SPECIES_PAL(LYCANROC_3, gMonPalette_Lycanroc3_),
	SPECIES_PAL(WISHIWASHI_2, gMonPalette_Wishiwashi2_),
	SPECIES_PAL(SILVALLY_2, gMonPalette_Silvally2_),
	SPECIES_PAL(SILVALLY_3, gMonPalette_Silvally3_),
	SPECIES_PAL(SILVALLY_4, gMonPalette_Silvally4_),
	SPECIES_PAL(SILVALLY_5, gMonPalette_Silvally5_),
	SPECIES_PAL(SILVALLY_6, gMonPalette_Silvally6_),
	SPECIES_PAL(SILVALLY_7, gMonPalette_Silvally7_),
	SPECIES_PAL(SILVALLY_8, gMonPalette_Silvally8_),
	SPECIES_PAL(SILVALLY_9, gMonPalette_Silvally9_),
	SPECIES_PAL(SILVALLY_10, gMonPalette_Silvally10_),
	SPECIES_PAL(SILVALLY_11, gMonPalette_Silvally11_),
	SPECIES_PAL(SILVALLY_12, gMonPalette_Silvally12_),
	SPECIES_PAL(SILVALLY_13, gMonPalette_Silvally13_),
	SPECIES_PAL(SILVALLY_14, gMonPalette_Silvally14_),
	SPECIES_PAL(SILVALLY_15, gMonPalette_Silvally15_),
	SPECIES_PAL(SILVALLY_16, gMonPalette_Silvally16_),
	SPECIES_PAL(SILVALLY_17, gMonPalette_Silvally17_),
	SPECIES_PAL(SILVALLY_18, gMonPalette_Silvally18_),
	SPECIES_PAL(MINIOR_2, gMonPalette_Minior2_),
	SPECIES_PAL(MINIOR_3, gMonPalette_Minior3_),
	SPECIES_PAL(MINIOR_4, gMonPalette_Minior4_),
	SPECIES_PAL(MINIOR_5, gMonPalette_Minior5_),
	SPECIES_PAL(MINIOR_6, gMonPalette_Minior6_),
	SPECIES_PAL(MINIOR_7, gMonPalette_Minior7_),
	SPECIES_PAL(MINIOR_8, gMonPalette_Minior8_),
	SPECIES_PAL(MINIOR_9, gMonPalette_Minior9_),
	SPECIES_PAL(MINIOR_10, gMonPalette_Minior10_),
	SPECIES_PAL(MINIOR_11, gMonPalette_Minior11_),
	SPECIES_PAL(MINIOR_12, gMonPalette_Minior12_),
	SPECIES_PAL(MINIOR_13, gMonPalette_Minior13_),
	SPECIES_PAL(MINIOR_14, gMonPalette_Minior14_),
	SPECIES_PAL(MIMIKYU_2, gMonPalette_Mimikyu2_),
	SPECIES_PAL(NECROZMA_2, gMonPalette_Necrozma2_),
	SPECIES_PAL(NECROZMA_3, gMonPalette_Necrozma3_),
	SPECIES_PAL(NECROZMA_4, gMonPalette_Necrozma4_),
	SPECIES_PAL(MAGEARNA_2, gMonPalette_Magearna2_),
	SPECIES_PAL(CRAMORANT_2, gMonPalette_Cramorant2_),
	SPECIES_PAL(CRAMORANT_3, gMonPalette_Cramorant3_),
	SPECIES_PAL(TOXTRICITY_2, gMonPalette_Toxtricity2_),
	SPECIES_PAL(SINISTEA_2, gMonPalette_Sinistea2_),
	SPECIES_PAL(POLTEAGEIS_2, gMonPalette_Polteageis2_),
	SPECIES_PAL(ALCREMIE_2, gMonPalette_Alcremie2_),
	SPECIES_PAL(ALCREMIE_3, gMonPalette_Alcremie3_),
	SPECIES_PAL(ALCREMIE_4, gMonPalette_Alcremie4_),
	SPECIES_PAL(ALCREMIE_5, gMonPalette_Alcremie5_),
	SPECIES_PAL(ALCREMIE_6, gMonPalette_Alcremie6_),
	SPECIES_PAL(ALCREMIE_7, gMonPalette_Alcremie7_),
	SPECIES_PAL(ALCREMIE_8, gMonPalette_Alcremie8_),
	SPECIES_PAL(ALCREMIE_9, gMonPalette_Alcremie9_),
	SPECIES_PAL(EISCUE_2, gMonPalette_Eiscue2_),
	SPECIES_PAL(INDEEDEE_2, gMonPalette_Indeedee2_),
	SPECIES_PAL(MORPEKO_2, gMonPalette_Morpeko2_),
	SPECIES_PAL(ZACIAN_2, gMonPalette_Zacian2_),
	SPECIES_PAL(ZAMAZENTA_2, gMonPalette_Zamazenta2_),
	SPECIES_PAL(ETERNATUS_2, gMonPalette_Eternatus2_),
	SPECIES_PAL(URSHIFU_2, gMonPalette_Urshifu2_),
	SPECIES_PAL(ZARUDE_2, gMonPalette_Zarude2_),
	SPECIES_PAL(CALYREX_2, gMonPalette_Calyrex2_),
	SPECIES_PAL(CALYREX_3, gMonPalette_Calyrex3_),
	SPECIES_PAL(BSCULEGION_2, gMonPalette_Bsculegion2_),
	SPECIES_PAL(ALCREMIE_10, gMonPalette_Alcremie10_),
	SPECIES_PAL(ALCREMIE_11, gMonPalette_Alcremie11_),
	SPECIES_PAL(ALCREMIE_12, gMonPalette_Alcremie12_),
	SPECIES_PAL(ALCREMIE_13, gMonPalette_Alcremie13_),
	SPECIES_PAL(ALCREMIE_14, gMonPalette_Alcremie14_),
	SPECIES_PAL(ALCREMIE_15, gMonPalette_Alcremie15_),
	SPECIES_PAL(ALCREMIE_16, gMonPalette_Alcremie16_),
	SPECIES_PAL(ALCREMIE_17, gMonPalette_Alcremie17_),
	SPECIES_PAL(ALCREMIE_18, gMonPalette_Alcremie18_),
	SPECIES_PAL(ALCREMIE_19, gMonPalette_Alcremie19_),
	SPECIES_PAL(ALCREMIE_20, gMonPalette_Alcremie20_),
	SPECIES_PAL(ALCREMIE_21, gMonPalette_Alcremie21_),
	SPECIES_PAL(ALCREMIE_22, gMonPalette_Alcremie22_),
	SPECIES_PAL(ALCREMIE_23, gMonPalette_Alcremie23_),
	SPECIES_PAL(ALCREMIE_24, gMonPalette_Alcremie24_),
	SPECIES_PAL(ALCREMIE_25, gMonPalette_Alcremie25_),
	SPECIES_PAL(ALCREMIE_26, gMonPalette_Alcremie26_),
	SPECIES_PAL(ALCREMIE_27, gMonPalette_Alcremie27_),
	SPECIES_PAL(ALCREMIE_28, gMonPalette_Alcremie28_),
	SPECIES_PAL(ALCREMIE_29, gMonPalette_Alcremie29_),
	SPECIES_PAL(ALCREMIE_30, gMonPalette_Alcremie30_),
	SPECIES_PAL(ALCREMIE_31, gMonPalette_Alcremie31_),
	SPECIES_PAL(ALCREMIE_32, gMonPalette_Alcremie32_),
	SPECIES_PAL(ALCREMIE_33, gMonPalette_Alcremie33_),
	SPECIES_PAL(ALCREMIE_34, gMonPalette_Alcremie34_),
	SPECIES_PAL(ALCREMIE_35, gMonPalette_Alcremie35_),
	SPECIES_PAL(ALCREMIE_36, gMonPalette_Alcremie36_),
	SPECIES_PAL(ALCREMIE_37, gMonPalette_Alcremie37_),
	SPECIES_PAL(ALCREMIE_38, gMonPalette_Alcremie38_),
	SPECIES_PAL(ALCREMIE_39, gMonPalette_Alcremie39_),
	SPECIES_PAL(ALCREMIE_40, gMonPalette_Alcremie40_),
	SPECIES_PAL(ALCREMIE_41, gMonPalette_Alcremie41_),
	SPECIES_PAL(ALCREMIE_42, gMonPalette_Alcremie42_),
	SPECIES_PAL(ALCREMIE_43, gMonPalette_Alcremie43_),
	SPECIES_PAL(ALCREMIE_44, gMonPalette_Alcremie44_),
	SPECIES_PAL(ALCREMIE_45, gMonPalette_Alcremie45_),
	SPECIES_PAL(ALCREMIE_46, gMonPalette_Alcremie46_),
	SPECIES_PAL(ALCREMIE_47, gMonPalette_Alcremie47_),
	SPECIES_PAL(ALCREMIE_48, gMonPalette_Alcremie48_),
	SPECIES_PAL(ALCREMIE_49, gMonPalette_Alcremie49_),
	SPECIES_PAL(ALCREMIE_50, gMonPalette_Alcremie50_),
	SPECIES_PAL(ALCREMIE_51, gMonPalette_Alcremie51_),
	SPECIES_PAL(ALCREMIE_52, gMonPalette_Alcremie52_),
	SPECIES_PAL(ALCREMIE_53, gMonPalette_Alcremie53_),
	SPECIES_PAL(ALCREMIE_54, gMonPalette_Alcremie54_),
	SPECIES_PAL(ALCREMIE_55, gMonPalette_Alcremie55_),
	SPECIES_PAL(ALCREMIE_56, gMonPalette_Alcremie56_),
	SPECIES_PAL(ALCREMIE_57, gMonPalette_Alcremie57_),
	SPECIES_PAL(ALCREMIE_58, gMonPalette_Alcremie58_),
	SPECIES_PAL(ALCREMIE_59, gMonPalette_Alcremie59_),
	SPECIES_PAL(ALCREMIE_60, gMonPalette_Alcremie60_),
	SPECIES_PAL(ALCREMIE_61, gMonPalette_Alcremie61_),
	SPECIES_PAL(ALCREMIE_62, gMonPalette_Alcremie62_),
	SPECIES_PAL(ALCREMIE_63, gMonPalette_Alcremie63_),
	SPECIES_PAL(SPRIGATITO, gMonPalette_Sprigatito_),
	SPECIES_PAL(FLORAGATO, gMonPalette_Floragato_),
	SPECIES_PAL(MEOWSCARAD, gMonPalette_Meowscarad_),
	SPECIES_PAL(FUECOCO, gMonPalette_Fuecoco_),
	SPECIES_PAL(CROCALOR, gMonPalette_Crocalor_),
	SPECIES_PAL(SKELEDIRGE, gMonPalette_Skeledirge_),
	SPECIES_PAL(QUAXLY, gMonPalette_Quaxly_),
	SPECIES_PAL(QUAXWELL, gMonPalette_Quaxwell_),
	SPECIES_PAL(QUAQUAVAL, gMonPalette_Quaquaval_),
	SPECIES_PAL(LECHONK, gMonPalette_Lechonk_),
	SPECIES_PAL(OINKOLOGNE, gMonPalette_Oinkologne_),
	SPECIES_PAL(OINKOLOGNE_2, gMonPalette_Oinkologne2_),
	SPECIES_PAL(TAROUNTULA, gMonPalette_Tarountula_),
	SPECIES_PAL(SPIDOPS, gMonPalette_Spidops_),
	SPECIES_PAL(NYMBLE, gMonPalette_Nymble_),
	SPECIES_PAL(LOKIX, gMonPalette_Lokix_),
	SPECIES_PAL(PAWMI, gMonPalette_Pawmi_),
	SPECIES_PAL(PAWMO, gMonPalette_Pawmo_),
	SPECIES_PAL(PAWMOT, gMonPalette_Pawmot_),
	SPECIES_PAL(TANDEMAUS, gMonPalette_Tandemaus_),
	SPECIES_PAL(MAUSHOLD, gMonPalette_Maushold_),
	SPECIES_PAL(MAUSHOLD_2, gMonPalette_Maushold2_),
	SPECIES_PAL(FIDOUGH, gMonPalette_Fidough_),
	SPECIES_PAL(DACHSBUN, gMonPalette_Dachsbun_),
	SPECIES_PAL(SMOLIV, gMonPalette_Smoliv_),
	SPECIES_PAL(DOLLIV, gMonPalette_Dolliv_),
	SPECIES_PAL(ARBOLIVA, gMonPalette_Arboliva_),
	SPECIES_PAL(SQAWKABILY, gMonPalette_Sqawkabily_),
	SPECIES_PAL(SQAWKABILY_2, gMonPalette_Sqawkabily2_),
	SPECIES_PAL(SQAWKABILY_3, gMonPalette_Sqawkabily3_),
	SPECIES_PAL(SQAWKABILY_4, gMonPalette_Sqawkabily4_),
	SPECIES_PAL(NACLI, gMonPalette_Nacli_),
	SPECIES_PAL(NACLSTACK, gMonPalette_Naclstack_),
	SPECIES_PAL(GARGANACL, gMonPalette_Garganacl_),
	SPECIES_PAL(CHARCADET, gMonPalette_Charcadet_),
	SPECIES_PAL(ARMAROUGE, gMonPalette_Armarouge_),
	SPECIES_PAL(CERULEDGE, gMonPalette_Ceruledge_),
	SPECIES_PAL(TADBULB, gMonPalette_Tadbulb_),
	SPECIES_PAL(BELLIBOLT, gMonPalette_Bellibolt_),
	SPECIES_PAL(WATTREL, gMonPalette_Wattrel_),
	SPECIES_PAL(KILOWATREL, gMonPalette_Kilowatrel_),
	SPECIES_PAL(MASCHIFF, gMonPalette_Maschiff_),
	SPECIES_PAL(MABOSSTIFF, gMonPalette_Mabosstiff_),
	SPECIES_PAL(SHROODLE, gMonPalette_Shroodle_),
	SPECIES_PAL(GRAFAIAI, gMonPalette_Grafaiai_),
	SPECIES_PAL(BRAMBLIN, gMonPalette_Bramblin_),
	SPECIES_PAL(BRMBLGHAST, gMonPalette_Brmblghast_),
	SPECIES_PAL(TOEDSCOOL, gMonPalette_Toedscool_),
	SPECIES_PAL(TOEDSCRUEL, gMonPalette_Toedscruel_),
	SPECIES_PAL(KLAWF, gMonPalette_Klawf_),
	SPECIES_PAL(CAPSAKID, gMonPalette_Capsakid_),
	SPECIES_PAL(SCOVILLAIN, gMonPalette_Scovillain_),
	SPECIES_PAL(RELLOR, gMonPalette_Rellor_),
	SPECIES_PAL(RABSCA, gMonPalette_Rabsca_),
	SPECIES_PAL(FLITTLE, gMonPalette_Flittle_),
	SPECIES_PAL(ESPATHRA, gMonPalette_Espathra_),
	SPECIES_PAL(TINKATINK, gMonPalette_Tinkatink_),
	SPECIES_PAL(TINKATUFF, gMonPalette_Tinkatuff_),
	SPECIES_PAL(TINKATON, gMonPalette_Tinkaton_),
	SPECIES_PAL(WIGLETT, gMonPalette_Wiglett_),
	SPECIES_PAL(WUGTRIO, gMonPalette_Wugtrio_),
	SPECIES_PAL(BOMBIRDIER, gMonPalette_Bombirdier_),
	SPECIES_PAL(FINIZEN, gMonPalette_Finizen_),
	SPECIES_PAL(PALAFIN, gMonPalette_Palafin_),
	SPECIES_PAL(PALAFIN_2, gMonPalette_Palafin2_),
	SPECIES_PAL(VAROOM, gMonPalette_Varoom_),
	SPECIES_PAL(REVAVROOM, gMonPalette_Revavroom_),
	SPECIES_PAL(CYCLIZAR, gMonPalette_Cyclizar_),
	SPECIES_PAL(ORTHWORM, gMonPalette_Orthworm_),
	SPECIES_PAL(GLIMMET, gMonPalette_Glimmet_),
	SPECIES_PAL(GLIMMORA, gMonPalette_Glimmora_),
	SPECIES_PAL(GREAVARD, gMonPalette_Greavard_),
	SPECIES_PAL(HOUNDSTONE, gMonPalette_Houndstone_),
	SPECIES_PAL(FLAMIGO, gMonPalette_Flamigo_),
	SPECIES_PAL(CETODDLE, gMonPalette_Cetoddle_),
	SPECIES_PAL(CETITAN, gMonPalette_Cetitan_),
	SPECIES_PAL(VELUZA, gMonPalette_Veluza_),
	SPECIES_PAL(DONDOZO, gMonPalette_Dondozo_),
	SPECIES_PAL(TATSUGIRI, gMonPalette_Tatsugiri_),
	SPECIES_PAL(TATSUGIRI_2, gMonPalette_Tatsugiri2_),
	SPECIES_PAL(TATSUGIRI_3, gMonPalette_Tatsugiri3_),
	SPECIES_PAL(ANNIHILAPE, gMonPalette_Annihilape_),
	SPECIES_PAL(CLODSIRE, gMonPalette_Clodsire_),
	SPECIES_PAL(FARIGIRAF, gMonPalette_Farigiraf_),
	SPECIES_PAL(DUDUNSPRCE, gMonPalette_Dudunsprce_),
	SPECIES_PAL(DUDUNSPRCE_2, gMonPalette_Dudunsprce2_),
	SPECIES_PAL(KINGAMBIT, gMonPalette_Kingambit_),
	SPECIES_PAL(GREATTUSK, gMonPalette_GreatTusk_),
	SPECIES_PAL(SCREAMTAIL, gMonPalette_ScreamTail_),
	SPECIES_PAL(BRUTEBONET, gMonPalette_BruteBonet_),
	SPECIES_PAL(FLUTTRMANE, gMonPalette_FluttrMane_),
	SPECIES_PAL(SLITHRWING, gMonPalette_SlithrWing_),
	SPECIES_PAL(SNDYSHOCKS, gMonPalette_SndyShocks_),
	SPECIES_PAL(IRONTREADS, gMonPalette_IronTreads_),
	SPECIES_PAL(IRONBUNDLE, gMonPalette_IronBundle_),
	SPECIES_PAL(IRONHANDS, gMonPalette_IronHands_),
	SPECIES_PAL(IRONJUGULS, gMonPalette_IronJuguls_),
	SPECIES_PAL(IRONMOTH, gMonPalette_IronMoth_),
	SPECIES_PAL(IRONTHORNS, gMonPalette_IronThorns_),
	SPECIES_PAL(FRIGIBAX, gMonPalette_Frigibax_),
	SPECIES_PAL(ARCTIBAX, gMonPalette_Arctibax_),
	SPECIES_PAL(BAXCALIBUR, gMonPalette_Baxcalibur_),
	SPECIES_PAL(GIMMIGHOUL, gMonPalette_Gimmighoul_),
	SPECIES_PAL(GIMMIGHOUL_2, gMonPalette_Gimmighoul2_),
	SPECIES_PAL(GHOLDENGO, gMonPalette_Gholdengo_),
	SPECIES_PAL(WOCHIEN, gMonPalette_WoChien_),
	SPECIES_PAL(CHIENPAO, gMonPalette_ChienPao_),
	SPECIES_PAL(TINGLU, gMonPalette_TingLu_),
	SPECIES_PAL(CHIYU, gMonPalette_ChiYu_),
	SPECIES_PAL(ROARNGMOON, gMonPalette_RoarngMoon_),
	SPECIES_PAL(IRONVLIANT, gMonPalette_IronVliant_),
	SPECIES_PAL(KORAIDON, gMonPalette_Koraidon_),
	SPECIES_PAL(MIRAIDON, gMonPalette_Miraidon_),
	SPECIES_PAL(TAUROS_2, gMonPalette_Tauros2_),
	SPECIES_PAL(TAUROS_3, gMonPalette_Tauros3_),
	SPECIES_PAL(TAUROS_4, gMonPalette_Tauros4_),
	SPECIES_PAL(WOOPER_2, gMonPalette_Wooper2_),
	SPECIES_PAL(WALKNGWAKE, gMonPalette_WalkngWake_),
	SPECIES_PAL(IRONLEAVES, gMonPalette_IronLeaves_),
	SPECIES_PAL(DIPPLIN, gMonPalette_Dipplin_),
	SPECIES_PAL(PTCHAGEIST, gMonPalette_Ptchageist_),
	SPECIES_PAL(PTCHAGEIST_2, gMonPalette_Ptchageist2_),
	SPECIES_PAL(SINISTCHA, gMonPalette_Sinistcha_),
	SPECIES_PAL(SINISTCHA_2, gMonPalette_Sinistcha2_),
	SPECIES_PAL(OKIDOGI, gMonPalette_Okidogi_),
	SPECIES_PAL(MUNKIDORI, gMonPalette_Munkidori_),
	SPECIES_PAL(FEZNDIPITI, gMonPalette_Fezndipiti_),
	SPECIES_PAL(OGERPON, gMonPalette_Ogerpon_),
	SPECIES_PAL(OGERPON_2, gMonPalette_Ogerpon2_),
	SPECIES_PAL(OGERPON_3, gMonPalette_Ogerpon3_),
	SPECIES_PAL(OGERPON_4, gMonPalette_Ogerpon4_),
	SPECIES_PAL(OGERPON_5, gMonPalette_Ogerpon5_),
	SPECIES_PAL(OGERPON_6, gMonPalette_Ogerpon6_),
	SPECIES_PAL(OGERPON_7, gMonPalette_Ogerpon7_),
	SPECIES_PAL(OGERPON_8, gMonPalette_Ogerpon8_),
	SPECIES_PAL(URSALUNA_2, gMonPalette_Ursaluna2_),
	SPECIES_PAL(ARCHALUDON, gMonPalette_Archaludon_),
	SPECIES_PAL(HYDRAPPLE, gMonPalette_Hydrapple_),
	SPECIES_PAL(GOUGINFIRE, gMonPalette_GouginFire_),
	SPECIES_PAL(RAGINGBOLT, gMonPalette_RagingBolt_),
	SPECIES_PAL(IRONBOULDR, gMonPalette_IronBouldr_),
	SPECIES_PAL(IRONCROWN, gMonPalette_IronCrown_),
	SPECIES_PAL(TERAPAGOS, gMonPalette_Terapagos_),
	SPECIES_PAL(TERAPAGOS_2, gMonPalette_Terapagos2_),
	SPECIES_PAL(TERAPAGOS_3, gMonPalette_Terapagos3_),
	SPECIES_PAL(PECHARUNT, gMonPalette_Pecharunt_),
	SPECIES_PAL(MOTHIM_2, gMonPalette_Mothim2_),
	SPECIES_PAL(MOTHIM_3, gMonPalette_Mothim3_),
	SPECIES_PAL(SCATTERBUG_2, gMonPalette_Scatterbug2_),
	SPECIES_PAL(SCATTERBUG_3, gMonPalette_Scatterbug3_),
	SPECIES_PAL(SCATTERBUG_4, gMonPalette_Scatterbug4_),
	SPECIES_PAL(SCATTERBUG_5, gMonPalette_Scatterbug5_),
	SPECIES_PAL(SCATTERBUG_6, gMonPalette_Scatterbug6_),
	SPECIES_PAL(SCATTERBUG_7, gMonPalette_Scatterbug7_),
	SPECIES_PAL(SCATTERBUG_8, gMonPalette_Scatterbug8_),
	SPECIES_PAL(SCATTERBUG_9, gMonPalette_Scatterbug9_),
	SPECIES_PAL(SCATTERBUG_10, gMonPalette_Scatterbug10_),
	SPECIES_PAL(SCATTERBUG_11, gMonPalette_Scatterbug11_),
	SPECIES_PAL(SCATTERBUG_12, gMonPalette_Scatterbug12_),
	SPECIES_PAL(SCATTERBUG_13, gMonPalette_Scatterbug13_),
	SPECIES_PAL(SCATTERBUG_14, gMonPalette_Scatterbug14_),
	SPECIES_PAL(SCATTERBUG_15, gMonPalette_Scatterbug15_),
	SPECIES_PAL(SCATTERBUG_16, gMonPalette_Scatterbug16_),
	SPECIES_PAL(SCATTERBUG_17, gMonPalette_Scatterbug17_),
	SPECIES_PAL(SCATTERBUG_18, gMonPalette_Scatterbug18_),
	SPECIES_PAL(SCATTERBUG_19, gMonPalette_Scatterbug19_),
	SPECIES_PAL(SCATTERBUG_20, gMonPalette_Scatterbug20_),
	SPECIES_PAL(SPEWPA_2, gMonPalette_Spewpa2_),
	SPECIES_PAL(SPEWPA_3, gMonPalette_Spewpa3_),
	SPECIES_PAL(SPEWPA_4, gMonPalette_Spewpa4_),
	SPECIES_PAL(SPEWPA_5, gMonPalette_Spewpa5_),
	SPECIES_PAL(SPEWPA_6, gMonPalette_Spewpa6_),
	SPECIES_PAL(SPEWPA_7, gMonPalette_Spewpa7_),
	SPECIES_PAL(SPEWPA_8, gMonPalette_Spewpa8_),
	SPECIES_PAL(SPEWPA_9, gMonPalette_Spewpa9_),
	SPECIES_PAL(SPEWPA_10, gMonPalette_Spewpa10_),
	SPECIES_PAL(SPEWPA_11, gMonPalette_Spewpa11_),
	SPECIES_PAL(SPEWPA_12, gMonPalette_Spewpa12_),
	SPECIES_PAL(SPEWPA_13, gMonPalette_Spewpa13_),
	SPECIES_PAL(SPEWPA_14, gMonPalette_Spewpa14_),
	SPECIES_PAL(SPEWPA_15, gMonPalette_Spewpa15_),
	SPECIES_PAL(SPEWPA_16, gMonPalette_Spewpa16_),
	SPECIES_PAL(SPEWPA_17, gMonPalette_Spewpa17_),
	SPECIES_PAL(SPEWPA_18, gMonPalette_Spewpa18_),
	SPECIES_PAL(SPEWPA_19, gMonPalette_Spewpa19_),
	SPECIES_PAL(SPEWPA_20, gMonPalette_Spewpa20_),
	SPECIES_PAL(RATICATE_3, gMonPalette_Raticate3_),
	SPECIES_PAL(GUMSHOOS_2, gMonPalette_Gumshoos2_),
	SPECIES_PAL(VIKAVOLT_2, gMonPalette_Vikavolt2_),
	SPECIES_PAL(LURANTIS_2, gMonPalette_Lurantis2_),
	SPECIES_PAL(SALAZZLE_2, gMonPalette_Salazzle2_),
	SPECIES_PAL(MIMIKYU_3, gMonPalette_Mimikyu3_),
	SPECIES_PAL(KOMMOO_2, gMonPalette_Kommoo2_),
	SPECIES_PAL(MAROWAK_3, gMonPalette_Marowak3_),
	SPECIES_PAL(RIBOMBEE_2, gMonPalette_Ribombee2_),
	SPECIES_PAL(ARAQUANID_2, gMonPalette_Araquanid2_),
	SPECIES_PAL(TOGEDEMARU_2, gMonPalette_Togedemaru2_),
	SPECIES_PAL(PIKACHU_16, gMonPalette_Pikachu16_),
	SPECIES_PAL(EEVEE_2, gMonPalette_Eevee2_),
	SPECIES_PAL(VENUSAUR_3, gMonPalette_Venusaur3_),
	SPECIES_PAL(BLASTOISE_3, gMonPalette_Blastoise3_),
	SPECIES_PAL(CHARIZARD_4, gMonPalette_Charizard4_),
	SPECIES_PAL(BUTTERFREE_2, gMonPalette_Butterfree2_),
	SPECIES_PAL(PIKACHU_17, gMonPalette_Pikachu17_),
	SPECIES_PAL(MEOWTH_4, gMonPalette_Meowth4_),
	SPECIES_PAL(MACHAMP_2, gMonPalette_Machamp2_),
	SPECIES_PAL(GENGAR_3, gMonPalette_Gengar3_),
	SPECIES_PAL(KINGLER_2, gMonPalette_Kingler2_),
	SPECIES_PAL(LAPRAS_2, gMonPalette_Lapras2_),
	SPECIES_PAL(EEVEE_3, gMonPalette_Eevee3_),
	SPECIES_PAL(SNORLAX_2, gMonPalette_Snorlax2_),
	SPECIES_PAL(GARBODOR_2, gMonPalette_Garbodor2_),
	SPECIES_PAL(MELMETAL_2, gMonPalette_Melmetal2_),
	SPECIES_PAL(RILLABOOM_2, gMonPalette_Rillaboom2_),
	SPECIES_PAL(CINDERACE_2, gMonPalette_Cinderace2_),
	SPECIES_PAL(INTELEON_2, gMonPalette_Inteleon2_),
	SPECIES_PAL(CORVIKNIGH_2, gMonPalette_Corviknigh2_),
	SPECIES_PAL(ORBEETLE_2, gMonPalette_Orbeetle2_),
	SPECIES_PAL(DREDNAW_2, gMonPalette_Drednaw2_),
	SPECIES_PAL(COALOSSAL_2, gMonPalette_Coalossal2_),
	SPECIES_PAL(FLAPPLE_2, gMonPalette_Flapple2_),
	SPECIES_PAL(APPLETUN_2, gMonPalette_Appletun2_),
	SPECIES_PAL(SANDACONDA_2, gMonPalette_Sandaconda2_),
	SPECIES_PAL(TOXTRICITY_3, gMonPalette_Toxtricity3_),
	SPECIES_PAL(TOXTRICITY_4, gMonPalette_Toxtricity4_),
	SPECIES_PAL(CENTISKORC_2, gMonPalette_Centiskorc2_),
	SPECIES_PAL(HATTERENE_2, gMonPalette_Hatterene2_),
	SPECIES_PAL(GRIMMSNARL_2, gMonPalette_Grimmsnarl2_),
	SPECIES_PAL(ALCREMIE_64, gMonPalette_Alcremie64_),
	SPECIES_PAL(COPPERAJAH_2, gMonPalette_Copperajah2_),
	SPECIES_PAL(DURALUDON_2, gMonPalette_Duraludon2_),
	SPECIES_PAL(URSHIFU_3, gMonPalette_Urshifu3_),
	SPECIES_PAL(URSHIFU_4, gMonPalette_Urshifu4_),
	SPECIES_PAL(MIMIKYU_4, gMonPalette_Mimikyu4_),
};