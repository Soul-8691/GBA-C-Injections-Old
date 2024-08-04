#include "../../../include/global.h"
#include "../../../include/gflib.h"
#include "../../../include/mail_data.h"
#include "../../../include/pokemon_icon.h"
#include "../../../include/graphics.h"
#include "../../../include/constants/species.h"
#include "../../../include/gba/types.h"

#define SPECIES_SPRITE(species, sprite) [SPECIES_##species] = {sprite, 0x800, SPECIES_##species}

extern const u32 gMonBackPic_CircledQuestionMark[];
extern const u32 gMonBackPic_Bulbasaur_[];
extern const u32 gMonBackPic_Ivysaur_[];
extern const u32 gMonBackPic_Venusaur_[];
extern const u32 gMonBackPic_Charmander_[];
extern const u32 gMonBackPic_Charmeleon_[];
extern const u32 gMonBackPic_Charizard_[];
extern const u32 gMonBackPic_Squirtle_[];
extern const u32 gMonBackPic_Wartortle_[];
extern const u32 gMonBackPic_Blastoise_[];
extern const u32 gMonBackPic_Caterpie_[];
extern const u32 gMonBackPic_Metapod_[];
extern const u32 gMonBackPic_Butterfree_[];
extern const u32 gMonBackPic_Weedle_[];
extern const u32 gMonBackPic_Kakuna_[];
extern const u32 gMonBackPic_Beedrill_[];
extern const u32 gMonBackPic_Pidgey_[];
extern const u32 gMonBackPic_Pidgeotto_[];
extern const u32 gMonBackPic_Pidgeot_[];
extern const u32 gMonBackPic_Rattata_[];
extern const u32 gMonBackPic_Raticate_[];
extern const u32 gMonBackPic_Spearow_[];
extern const u32 gMonBackPic_Fearow_[];
extern const u32 gMonBackPic_Ekans_[];
extern const u32 gMonBackPic_Arbok_[];
extern const u32 gMonBackPic_Pikachu_[];
extern const u32 gMonBackPic_Raichu_[];
extern const u32 gMonBackPic_Sandshrew_[];
extern const u32 gMonBackPic_Sandslash_[];
extern const u32 gMonBackPic_Nidoransf_[];
extern const u32 gMonBackPic_Nidorina_[];
extern const u32 gMonBackPic_Nidoqueen_[];
extern const u32 gMonBackPic_Nidoransm_[];
extern const u32 gMonBackPic_Nidorino_[];
extern const u32 gMonBackPic_Nidoking_[];
extern const u32 gMonBackPic_Clefairy_[];
extern const u32 gMonBackPic_Clefable_[];
extern const u32 gMonBackPic_Vulpix_[];
extern const u32 gMonBackPic_Ninetales_[];
extern const u32 gMonBackPic_Jigglypuff_[];
extern const u32 gMonBackPic_Wigglytuff_[];
extern const u32 gMonBackPic_Zubat_[];
extern const u32 gMonBackPic_Golbat_[];
extern const u32 gMonBackPic_Oddish_[];
extern const u32 gMonBackPic_Gloom_[];
extern const u32 gMonBackPic_Vileplume_[];
extern const u32 gMonBackPic_Paras_[];
extern const u32 gMonBackPic_Parasect_[];
extern const u32 gMonBackPic_Venonat_[];
extern const u32 gMonBackPic_Venomoth_[];
extern const u32 gMonBackPic_Diglett_[];
extern const u32 gMonBackPic_Dugtrio_[];
extern const u32 gMonBackPic_Meowth_[];
extern const u32 gMonBackPic_Persian_[];
extern const u32 gMonBackPic_Psyduck_[];
extern const u32 gMonBackPic_Golduck_[];
extern const u32 gMonBackPic_Mankey_[];
extern const u32 gMonBackPic_Primeape_[];
extern const u32 gMonBackPic_Growlithe_[];
extern const u32 gMonBackPic_Arcanine_[];
extern const u32 gMonBackPic_Poliwag_[];
extern const u32 gMonBackPic_Poliwhirl_[];
extern const u32 gMonBackPic_Poliwrath_[];
extern const u32 gMonBackPic_Abra_[];
extern const u32 gMonBackPic_Kadabra_[];
extern const u32 gMonBackPic_Alakazam_[];
extern const u32 gMonBackPic_Machop_[];
extern const u32 gMonBackPic_Machoke_[];
extern const u32 gMonBackPic_Machamp_[];
extern const u32 gMonBackPic_Bellsprout_[];
extern const u32 gMonBackPic_Weepinbell_[];
extern const u32 gMonBackPic_Victreebel_[];
extern const u32 gMonBackPic_Tentacool_[];
extern const u32 gMonBackPic_Tentacruel_[];
extern const u32 gMonBackPic_Geodude_[];
extern const u32 gMonBackPic_Graveler_[];
extern const u32 gMonBackPic_Golem_[];
extern const u32 gMonBackPic_Ponyta_[];
extern const u32 gMonBackPic_Rapidash_[];
extern const u32 gMonBackPic_Slowpoke_[];
extern const u32 gMonBackPic_Slowbro_[];
extern const u32 gMonBackPic_Magnemite_[];
extern const u32 gMonBackPic_Magneton_[];
extern const u32 gMonBackPic_Farfetchd_[];
extern const u32 gMonBackPic_Doduo_[];
extern const u32 gMonBackPic_Dodrio_[];
extern const u32 gMonBackPic_Seel_[];
extern const u32 gMonBackPic_Dewgong_[];
extern const u32 gMonBackPic_Grimer_[];
extern const u32 gMonBackPic_Muk_[];
extern const u32 gMonBackPic_Shellder_[];
extern const u32 gMonBackPic_Cloyster_[];
extern const u32 gMonBackPic_Gastly_[];
extern const u32 gMonBackPic_Haunter_[];
extern const u32 gMonBackPic_Gengar_[];
extern const u32 gMonBackPic_Onix_[];
extern const u32 gMonBackPic_Drowzee_[];
extern const u32 gMonBackPic_Hypno_[];
extern const u32 gMonBackPic_Krabby_[];
extern const u32 gMonBackPic_Kingler_[];
extern const u32 gMonBackPic_Voltorb_[];
extern const u32 gMonBackPic_Electrode_[];
extern const u32 gMonBackPic_Exeggcute_[];
extern const u32 gMonBackPic_Exeggutor_[];
extern const u32 gMonBackPic_Cubone_[];
extern const u32 gMonBackPic_Marowak_[];
extern const u32 gMonBackPic_Hitmonlee_[];
extern const u32 gMonBackPic_Hitmonchan_[];
extern const u32 gMonBackPic_Lickitung_[];
extern const u32 gMonBackPic_Koffing_[];
extern const u32 gMonBackPic_Weezing_[];
extern const u32 gMonBackPic_Rhyhorn_[];
extern const u32 gMonBackPic_Rhydon_[];
extern const u32 gMonBackPic_Chansey_[];
extern const u32 gMonBackPic_Tangela_[];
extern const u32 gMonBackPic_Kangaskhan_[];
extern const u32 gMonBackPic_Horsea_[];
extern const u32 gMonBackPic_Seadra_[];
extern const u32 gMonBackPic_Goldeen_[];
extern const u32 gMonBackPic_Seaking_[];
extern const u32 gMonBackPic_Staryu_[];
extern const u32 gMonBackPic_Starmie_[];
extern const u32 gMonBackPic_MrMime_[];
extern const u32 gMonBackPic_Scyther_[];
extern const u32 gMonBackPic_Jynx_[];
extern const u32 gMonBackPic_Electabuzz_[];
extern const u32 gMonBackPic_Magmar_[];
extern const u32 gMonBackPic_Pinsir_[];
extern const u32 gMonBackPic_Tauros_[];
extern const u32 gMonBackPic_Magikarp_[];
extern const u32 gMonBackPic_Gyarados_[];
extern const u32 gMonBackPic_Lapras_[];
extern const u32 gMonBackPic_Ditto_[];
extern const u32 gMonBackPic_Eevee_[];
extern const u32 gMonBackPic_Vaporeon_[];
extern const u32 gMonBackPic_Jolteon_[];
extern const u32 gMonBackPic_Flareon_[];
extern const u32 gMonBackPic_Porygon_[];
extern const u32 gMonBackPic_Omanyte_[];
extern const u32 gMonBackPic_Omastar_[];
extern const u32 gMonBackPic_Kabuto_[];
extern const u32 gMonBackPic_Kabutops_[];
extern const u32 gMonBackPic_Aerodactyl_[];
extern const u32 gMonBackPic_Snorlax_[];
extern const u32 gMonBackPic_Articuno_[];
extern const u32 gMonBackPic_Zapdos_[];
extern const u32 gMonBackPic_Moltres_[];
extern const u32 gMonBackPic_Dratini_[];
extern const u32 gMonBackPic_Dragonair_[];
extern const u32 gMonBackPic_Dragonite_[];
extern const u32 gMonBackPic_Mewtwo_[];
extern const u32 gMonBackPic_Mew_[];
extern const u32 gMonBackPic_Chikorita_[];
extern const u32 gMonBackPic_Bayleef_[];
extern const u32 gMonBackPic_Meganium_[];
extern const u32 gMonBackPic_Cyndaquil_[];
extern const u32 gMonBackPic_Quilava_[];
extern const u32 gMonBackPic_Typhlosion_[];
extern const u32 gMonBackPic_Totodile_[];
extern const u32 gMonBackPic_Croconaw_[];
extern const u32 gMonBackPic_Feraligatr_[];
extern const u32 gMonBackPic_Sentret_[];
extern const u32 gMonBackPic_Furret_[];
extern const u32 gMonBackPic_Hoothoot_[];
extern const u32 gMonBackPic_Noctowl_[];
extern const u32 gMonBackPic_Ledyba_[];
extern const u32 gMonBackPic_Ledian_[];
extern const u32 gMonBackPic_Spinarak_[];
extern const u32 gMonBackPic_Ariados_[];
extern const u32 gMonBackPic_Crobat_[];
extern const u32 gMonBackPic_Chinchou_[];
extern const u32 gMonBackPic_Lanturn_[];
extern const u32 gMonBackPic_Pichu_[];
extern const u32 gMonBackPic_Cleffa_[];
extern const u32 gMonBackPic_Igglybuff_[];
extern const u32 gMonBackPic_Togepi_[];
extern const u32 gMonBackPic_Togetic_[];
extern const u32 gMonBackPic_Natu_[];
extern const u32 gMonBackPic_Xatu_[];
extern const u32 gMonBackPic_Mareep_[];
extern const u32 gMonBackPic_Flaaffy_[];
extern const u32 gMonBackPic_Ampharos_[];
extern const u32 gMonBackPic_Bellossom_[];
extern const u32 gMonBackPic_Marill_[];
extern const u32 gMonBackPic_Azumarill_[];
extern const u32 gMonBackPic_Sudowoodo_[];
extern const u32 gMonBackPic_Politoed_[];
extern const u32 gMonBackPic_Hoppip_[];
extern const u32 gMonBackPic_Skiploom_[];
extern const u32 gMonBackPic_Jumpluff_[];
extern const u32 gMonBackPic_Aipom_[];
extern const u32 gMonBackPic_Sunkern_[];
extern const u32 gMonBackPic_Sunflora_[];
extern const u32 gMonBackPic_Yanma_[];
extern const u32 gMonBackPic_Wooper_[];
extern const u32 gMonBackPic_Quagsire_[];
extern const u32 gMonBackPic_Espeon_[];
extern const u32 gMonBackPic_Umbreon_[];
extern const u32 gMonBackPic_Murkrow_[];
extern const u32 gMonBackPic_Slowking_[];
extern const u32 gMonBackPic_Misdreavus_[];
extern const u32 gMonBackPic_Unown_[];
extern const u32 gMonBackPic_Wobbuffet_[];
extern const u32 gMonBackPic_Girafarig_[];
extern const u32 gMonBackPic_Pineco_[];
extern const u32 gMonBackPic_Forretress_[];
extern const u32 gMonBackPic_Dunsparce_[];
extern const u32 gMonBackPic_Gligar_[];
extern const u32 gMonBackPic_Steelix_[];
extern const u32 gMonBackPic_Snubbull_[];
extern const u32 gMonBackPic_Granbull_[];
extern const u32 gMonBackPic_Qwilfish_[];
extern const u32 gMonBackPic_Scizor_[];
extern const u32 gMonBackPic_Shuckle_[];
extern const u32 gMonBackPic_Heracross_[];
extern const u32 gMonBackPic_Sneasel_[];
extern const u32 gMonBackPic_Teddiursa_[];
extern const u32 gMonBackPic_Ursaring_[];
extern const u32 gMonBackPic_Slugma_[];
extern const u32 gMonBackPic_Magcargo_[];
extern const u32 gMonBackPic_Swinub_[];
extern const u32 gMonBackPic_Piloswine_[];
extern const u32 gMonBackPic_Corsola_[];
extern const u32 gMonBackPic_Remoraid_[];
extern const u32 gMonBackPic_Octillery_[];
extern const u32 gMonBackPic_Delibird_[];
extern const u32 gMonBackPic_Mantine_[];
extern const u32 gMonBackPic_Skarmory_[];
extern const u32 gMonBackPic_Houndour_[];
extern const u32 gMonBackPic_Houndoom_[];
extern const u32 gMonBackPic_Kingdra_[];
extern const u32 gMonBackPic_Phanpy_[];
extern const u32 gMonBackPic_Donphan_[];
extern const u32 gMonBackPic_Porygon2_[];
extern const u32 gMonBackPic_Stantler_[];
extern const u32 gMonBackPic_Smeargle_[];
extern const u32 gMonBackPic_Tyrogue_[];
extern const u32 gMonBackPic_Hitmontop_[];
extern const u32 gMonBackPic_Smoochum_[];
extern const u32 gMonBackPic_Elekid_[];
extern const u32 gMonBackPic_Magby_[];
extern const u32 gMonBackPic_Miltank_[];
extern const u32 gMonBackPic_Blissey_[];
extern const u32 gMonBackPic_Raikou_[];
extern const u32 gMonBackPic_Entei_[];
extern const u32 gMonBackPic_Suicune_[];
extern const u32 gMonBackPic_Larvitar_[];
extern const u32 gMonBackPic_Pupitar_[];
extern const u32 gMonBackPic_Tyranitar_[];
extern const u32 gMonBackPic_Lugia_[];
extern const u32 gMonBackPic_HoOh_[];
extern const u32 gMonBackPic_Celebi_[];
extern const u32 gMonBackPic_Treecko_[];
extern const u32 gMonBackPic_Grovyle_[];
extern const u32 gMonBackPic_Sceptile_[];
extern const u32 gMonBackPic_Torchic_[];
extern const u32 gMonBackPic_Combusken_[];
extern const u32 gMonBackPic_Blaziken_[];
extern const u32 gMonBackPic_Mudkip_[];
extern const u32 gMonBackPic_Marshtomp_[];
extern const u32 gMonBackPic_Swampert_[];
extern const u32 gMonBackPic_Poochyena_[];
extern const u32 gMonBackPic_Mightyena_[];
extern const u32 gMonBackPic_Zigzagoon_[];
extern const u32 gMonBackPic_Linoone_[];
extern const u32 gMonBackPic_Wurmple_[];
extern const u32 gMonBackPic_Silcoon_[];
extern const u32 gMonBackPic_Beautifly_[];
extern const u32 gMonBackPic_Cascoon_[];
extern const u32 gMonBackPic_Dustox_[];
extern const u32 gMonBackPic_Lotad_[];
extern const u32 gMonBackPic_Lombre_[];
extern const u32 gMonBackPic_Ludicolo_[];
extern const u32 gMonBackPic_Seedot_[];
extern const u32 gMonBackPic_Nuzleaf_[];
extern const u32 gMonBackPic_Shiftry_[];
extern const u32 gMonBackPic_Taillow_[];
extern const u32 gMonBackPic_Swellow_[];
extern const u32 gMonBackPic_Wingull_[];
extern const u32 gMonBackPic_Pelipper_[];
extern const u32 gMonBackPic_Ralts_[];
extern const u32 gMonBackPic_Kirlia_[];
extern const u32 gMonBackPic_Gardevoir_[];
extern const u32 gMonBackPic_Surskit_[];
extern const u32 gMonBackPic_Masquerain_[];
extern const u32 gMonBackPic_Shroomish_[];
extern const u32 gMonBackPic_Breloom_[];
extern const u32 gMonBackPic_Slakoth_[];
extern const u32 gMonBackPic_Vigoroth_[];
extern const u32 gMonBackPic_Slaking_[];
extern const u32 gMonBackPic_Nincada_[];
extern const u32 gMonBackPic_Ninjask_[];
extern const u32 gMonBackPic_Shedinja_[];
extern const u32 gMonBackPic_Whismur_[];
extern const u32 gMonBackPic_Loudred_[];
extern const u32 gMonBackPic_Exploud_[];
extern const u32 gMonBackPic_Makuhita_[];
extern const u32 gMonBackPic_Hariyama_[];
extern const u32 gMonBackPic_Azurill_[];
extern const u32 gMonBackPic_Nosepass_[];
extern const u32 gMonBackPic_Skitty_[];
extern const u32 gMonBackPic_Delcatty_[];
extern const u32 gMonBackPic_Sableye_[];
extern const u32 gMonBackPic_Mawile_[];
extern const u32 gMonBackPic_Aron_[];
extern const u32 gMonBackPic_Lairon_[];
extern const u32 gMonBackPic_Aggron_[];
extern const u32 gMonBackPic_Meditite_[];
extern const u32 gMonBackPic_Medicham_[];
extern const u32 gMonBackPic_Electrike_[];
extern const u32 gMonBackPic_Manectric_[];
extern const u32 gMonBackPic_Plusle_[];
extern const u32 gMonBackPic_Minun_[];
extern const u32 gMonBackPic_Volbeat_[];
extern const u32 gMonBackPic_Illumise_[];
extern const u32 gMonBackPic_Roselia_[];
extern const u32 gMonBackPic_Gulpin_[];
extern const u32 gMonBackPic_Swalot_[];
extern const u32 gMonBackPic_Carvanha_[];
extern const u32 gMonBackPic_Sharpedo_[];
extern const u32 gMonBackPic_Wailmer_[];
extern const u32 gMonBackPic_Wailord_[];
extern const u32 gMonBackPic_Numel_[];
extern const u32 gMonBackPic_Camerupt_[];
extern const u32 gMonBackPic_Torkoal_[];
extern const u32 gMonBackPic_Spoink_[];
extern const u32 gMonBackPic_Grumpig_[];
extern const u32 gMonBackPic_Spinda_[];
extern const u32 gMonBackPic_Trapinch_[];
extern const u32 gMonBackPic_Vibrava_[];
extern const u32 gMonBackPic_Flygon_[];
extern const u32 gMonBackPic_Cacnea_[];
extern const u32 gMonBackPic_Cacturne_[];
extern const u32 gMonBackPic_Swablu_[];
extern const u32 gMonBackPic_Altaria_[];
extern const u32 gMonBackPic_Zangoose_[];
extern const u32 gMonBackPic_Seviper_[];
extern const u32 gMonBackPic_Lunatone_[];
extern const u32 gMonBackPic_Solrock_[];
extern const u32 gMonBackPic_Barboach_[];
extern const u32 gMonBackPic_Whiscash_[];
extern const u32 gMonBackPic_Corphish_[];
extern const u32 gMonBackPic_Crawdaunt_[];
extern const u32 gMonBackPic_Baltoy_[];
extern const u32 gMonBackPic_Claydol_[];
extern const u32 gMonBackPic_Lileep_[];
extern const u32 gMonBackPic_Cradily_[];
extern const u32 gMonBackPic_Anorith_[];
extern const u32 gMonBackPic_Armaldo_[];
extern const u32 gMonBackPic_Feebas_[];
extern const u32 gMonBackPic_Milotic_[];
extern const u32 gMonBackPic_Castform_[];
extern const u32 gMonBackPic_Kecleon_[];
extern const u32 gMonBackPic_Shuppet_[];
extern const u32 gMonBackPic_Banette_[];
extern const u32 gMonBackPic_Duskull_[];
extern const u32 gMonBackPic_Dusclops_[];
extern const u32 gMonBackPic_Tropius_[];
extern const u32 gMonBackPic_Chimecho_[];
extern const u32 gMonBackPic_Absol_[];
extern const u32 gMonBackPic_Wynaut_[];
extern const u32 gMonBackPic_Snorunt_[];
extern const u32 gMonBackPic_Glalie_[];
extern const u32 gMonBackPic_Spheal_[];
extern const u32 gMonBackPic_Sealeo_[];
extern const u32 gMonBackPic_Walrein_[];
extern const u32 gMonBackPic_Clamperl_[];
extern const u32 gMonBackPic_Huntail_[];
extern const u32 gMonBackPic_Gorebyss_[];
extern const u32 gMonBackPic_Relicanth_[];
extern const u32 gMonBackPic_Luvdisc_[];
extern const u32 gMonBackPic_Bagon_[];
extern const u32 gMonBackPic_Shelgon_[];
extern const u32 gMonBackPic_Salamence_[];
extern const u32 gMonBackPic_Beldum_[];
extern const u32 gMonBackPic_Metang_[];
extern const u32 gMonBackPic_Metagross_[];
extern const u32 gMonBackPic_Regirock_[];
extern const u32 gMonBackPic_Regice_[];
extern const u32 gMonBackPic_Registeel_[];
extern const u32 gMonBackPic_Latias_[];
extern const u32 gMonBackPic_Latios_[];
extern const u32 gMonBackPic_Kyogre_[];
extern const u32 gMonBackPic_Groudon_[];
extern const u32 gMonBackPic_Rayquaza_[];
extern const u32 gMonBackPic_Jirachi_[];
extern const u32 gMonBackPic_Deoxys_[];
extern const u32 gMonBackPic_Turtwig_[];
extern const u32 gMonBackPic_Grotle_[];
extern const u32 gMonBackPic_Torterra_[];
extern const u32 gMonBackPic_Chimchar_[];
extern const u32 gMonBackPic_Monferno_[];
extern const u32 gMonBackPic_Infernape_[];
extern const u32 gMonBackPic_Piplup_[];
extern const u32 gMonBackPic_Prinplup_[];
extern const u32 gMonBackPic_Empoleon_[];
extern const u32 gMonBackPic_Starly_[];
extern const u32 gMonBackPic_Staravia_[];
extern const u32 gMonBackPic_Staraptor_[];
extern const u32 gMonBackPic_Bidoof_[];
extern const u32 gMonBackPic_Bibarel_[];
extern const u32 gMonBackPic_Kricketot_[];
extern const u32 gMonBackPic_Kricketune_[];
extern const u32 gMonBackPic_Shinx_[];
extern const u32 gMonBackPic_Luxio_[];
extern const u32 gMonBackPic_Luxray_[];
extern const u32 gMonBackPic_Budew_[];
extern const u32 gMonBackPic_Roserade_[];
extern const u32 gMonBackPic_Cranidos_[];
extern const u32 gMonBackPic_Rampardos_[];
extern const u32 gMonBackPic_Shieldon_[];
extern const u32 gMonBackPic_Bastiodon_[];
extern const u32 gMonBackPic_Burmy_[];
extern const u32 gMonBackPic_Wormadam_[];
extern const u32 gMonBackPic_Mothim_[];
extern const u32 gMonBackPic_Combee_[];
extern const u32 gMonBackPic_Vespiquen_[];
extern const u32 gMonBackPic_Pachirisu_[];
extern const u32 gMonBackPic_Buizel_[];
extern const u32 gMonBackPic_Floatzel_[];
extern const u32 gMonBackPic_Cherubi_[];
extern const u32 gMonBackPic_Cherrim_[];
extern const u32 gMonBackPic_Shellos_[];
extern const u32 gMonBackPic_Gastrodon_[];
extern const u32 gMonBackPic_Ambipom_[];
extern const u32 gMonBackPic_Drifloon_[];
extern const u32 gMonBackPic_Drifblim_[];
extern const u32 gMonBackPic_Buneary_[];
extern const u32 gMonBackPic_Lopunny_[];
extern const u32 gMonBackPic_Mismagius_[];
extern const u32 gMonBackPic_Honchkrow_[];
extern const u32 gMonBackPic_Glameow_[];
extern const u32 gMonBackPic_Purugly_[];
extern const u32 gMonBackPic_Chingling_[];
extern const u32 gMonBackPic_Stunky_[];
extern const u32 gMonBackPic_Skuntank_[];
extern const u32 gMonBackPic_Bronzor_[];
extern const u32 gMonBackPic_Bronzong_[];
extern const u32 gMonBackPic_Bonsly_[];
extern const u32 gMonBackPic_MimeJr_[];
extern const u32 gMonBackPic_Happiny_[];
extern const u32 gMonBackPic_Chatot_[];
extern const u32 gMonBackPic_Spiritomb_[];
extern const u32 gMonBackPic_Gible_[];
extern const u32 gMonBackPic_Gabite_[];
extern const u32 gMonBackPic_Garchomp_[];
extern const u32 gMonBackPic_Munchlax_[];
extern const u32 gMonBackPic_Riolu_[];
extern const u32 gMonBackPic_Lucario_[];
extern const u32 gMonBackPic_Hippopotas_[];
extern const u32 gMonBackPic_Hippowdon_[];
extern const u32 gMonBackPic_Skorupi_[];
extern const u32 gMonBackPic_Drapion_[];
extern const u32 gMonBackPic_Croagunk_[];
extern const u32 gMonBackPic_Toxicroak_[];
extern const u32 gMonBackPic_Carnivine_[];
extern const u32 gMonBackPic_Finneon_[];
extern const u32 gMonBackPic_Lumineon_[];
extern const u32 gMonBackPic_Mantyke_[];
extern const u32 gMonBackPic_Snover_[];
extern const u32 gMonBackPic_Abomasnow_[];
extern const u32 gMonBackPic_Weavile_[];
extern const u32 gMonBackPic_Magnezone_[];
extern const u32 gMonBackPic_Lickilicky_[];
extern const u32 gMonBackPic_Rhyperior_[];
extern const u32 gMonBackPic_Tangrowth_[];
extern const u32 gMonBackPic_Electivire_[];
extern const u32 gMonBackPic_Magmortar_[];
extern const u32 gMonBackPic_Togekiss_[];
extern const u32 gMonBackPic_Yanmega_[];
extern const u32 gMonBackPic_Leafeon_[];
extern const u32 gMonBackPic_Glaceon_[];
extern const u32 gMonBackPic_Gliscor_[];
extern const u32 gMonBackPic_Mamoswine_[];
extern const u32 gMonBackPic_PorygonZ_[];
extern const u32 gMonBackPic_Gallade_[];
extern const u32 gMonBackPic_Probopass_[];
extern const u32 gMonBackPic_Dusknoir_[];
extern const u32 gMonBackPic_Froslass_[];
extern const u32 gMonBackPic_Rotom_[];
extern const u32 gMonBackPic_Uxie_[];
extern const u32 gMonBackPic_Mesprit_[];
extern const u32 gMonBackPic_Azelf_[];
extern const u32 gMonBackPic_Dialga_[];
extern const u32 gMonBackPic_Palkia_[];
extern const u32 gMonBackPic_Heatran_[];
extern const u32 gMonBackPic_Regigigas_[];
extern const u32 gMonBackPic_Giratina_[];
extern const u32 gMonBackPic_Cresselia_[];
extern const u32 gMonBackPic_Phione_[];
extern const u32 gMonBackPic_Manaphy_[];
extern const u32 gMonBackPic_Darkrai_[];
extern const u32 gMonBackPic_Shaymin_[];
extern const u32 gMonBackPic_Arceus_[];
extern const u32 gMonBackPic_Victini_[];
extern const u32 gMonBackPic_Snivy_[];
extern const u32 gMonBackPic_Servine_[];
extern const u32 gMonBackPic_Serperior_[];
extern const u32 gMonBackPic_Tepig_[];
extern const u32 gMonBackPic_Pignite_[];
extern const u32 gMonBackPic_Emboar_[];
extern const u32 gMonBackPic_Oshawott_[];
extern const u32 gMonBackPic_Dewott_[];
extern const u32 gMonBackPic_Samurott_[];
extern const u32 gMonBackPic_Patrat_[];
extern const u32 gMonBackPic_Watchog_[];
extern const u32 gMonBackPic_Lillipup_[];
extern const u32 gMonBackPic_Herdier_[];
extern const u32 gMonBackPic_Stoutland_[];
extern const u32 gMonBackPic_Purrloin_[];
extern const u32 gMonBackPic_Liepard_[];
extern const u32 gMonBackPic_Pansage_[];
extern const u32 gMonBackPic_Simisage_[];
extern const u32 gMonBackPic_Pansear_[];
extern const u32 gMonBackPic_Simisear_[];
extern const u32 gMonBackPic_Panpour_[];
extern const u32 gMonBackPic_Simipour_[];
extern const u32 gMonBackPic_Munna_[];
extern const u32 gMonBackPic_Musharna_[];
extern const u32 gMonBackPic_Pidove_[];
extern const u32 gMonBackPic_Tranquill_[];
extern const u32 gMonBackPic_Unfezant_[];
extern const u32 gMonBackPic_Blitzle_[];
extern const u32 gMonBackPic_Zebstrika_[];
extern const u32 gMonBackPic_Roggenrola_[];
extern const u32 gMonBackPic_Boldore_[];
extern const u32 gMonBackPic_Gigalith_[];
extern const u32 gMonBackPic_Woobat_[];
extern const u32 gMonBackPic_Swoobat_[];
extern const u32 gMonBackPic_Drilbur_[];
extern const u32 gMonBackPic_Excadrill_[];
extern const u32 gMonBackPic_Audino_[];
extern const u32 gMonBackPic_Timburr_[];
extern const u32 gMonBackPic_Gurdurr_[];
extern const u32 gMonBackPic_Conkeldurr_[];
extern const u32 gMonBackPic_Tympole_[];
extern const u32 gMonBackPic_Palpitoad_[];
extern const u32 gMonBackPic_Seismitoad_[];
extern const u32 gMonBackPic_Throh_[];
extern const u32 gMonBackPic_Sawk_[];
extern const u32 gMonBackPic_Sewaddle_[];
extern const u32 gMonBackPic_Swadloon_[];
extern const u32 gMonBackPic_Leavanny_[];
extern const u32 gMonBackPic_Venipede_[];
extern const u32 gMonBackPic_Whirlipede_[];
extern const u32 gMonBackPic_Scolipede_[];
extern const u32 gMonBackPic_Cottonee_[];
extern const u32 gMonBackPic_Whimsicott_[];
extern const u32 gMonBackPic_Petilil_[];
extern const u32 gMonBackPic_Lilligant_[];
extern const u32 gMonBackPic_Basculin_[];
extern const u32 gMonBackPic_Sandile_[];
extern const u32 gMonBackPic_Krokorok_[];
extern const u32 gMonBackPic_Krookodile_[];
extern const u32 gMonBackPic_Darumaka_[];
extern const u32 gMonBackPic_Darmanitan_[];
extern const u32 gMonBackPic_Maractus_[];
extern const u32 gMonBackPic_Dwebble_[];
extern const u32 gMonBackPic_Crustle_[];
extern const u32 gMonBackPic_Scraggy_[];
extern const u32 gMonBackPic_Scrafty_[];
extern const u32 gMonBackPic_Sigilyph_[];
extern const u32 gMonBackPic_Yamask_[];
extern const u32 gMonBackPic_Cofagrigus_[];
extern const u32 gMonBackPic_Tirtouga_[];
extern const u32 gMonBackPic_Carracosta_[];
extern const u32 gMonBackPic_Archen_[];
extern const u32 gMonBackPic_Archeops_[];
extern const u32 gMonBackPic_Trubbish_[];
extern const u32 gMonBackPic_Garbodor_[];
extern const u32 gMonBackPic_Zorua_[];
extern const u32 gMonBackPic_Zoroark_[];
extern const u32 gMonBackPic_Minccino_[];
extern const u32 gMonBackPic_Cinccino_[];
extern const u32 gMonBackPic_Gothita_[];
extern const u32 gMonBackPic_Gothorita_[];
extern const u32 gMonBackPic_Gothitelle_[];
extern const u32 gMonBackPic_Solosis_[];
extern const u32 gMonBackPic_Duosion_[];
extern const u32 gMonBackPic_Reuniclus_[];
extern const u32 gMonBackPic_Ducklett_[];
extern const u32 gMonBackPic_Swanna_[];
extern const u32 gMonBackPic_Vanillite_[];
extern const u32 gMonBackPic_Vanillish_[];
extern const u32 gMonBackPic_Vanilluxe_[];
extern const u32 gMonBackPic_Deerling_[];
extern const u32 gMonBackPic_Sawsbuck_[];
extern const u32 gMonBackPic_Emolga_[];
extern const u32 gMonBackPic_Karrablast_[];
extern const u32 gMonBackPic_Escavalier_[];
extern const u32 gMonBackPic_Foongus_[];
extern const u32 gMonBackPic_Amoonguss_[];
extern const u32 gMonBackPic_Frillish_[];
extern const u32 gMonBackPic_Jellicent_[];
extern const u32 gMonBackPic_Alomomola_[];
extern const u32 gMonBackPic_Joltik_[];
extern const u32 gMonBackPic_Galvantula_[];
extern const u32 gMonBackPic_Ferroseed_[];
extern const u32 gMonBackPic_Ferrothorn_[];
extern const u32 gMonBackPic_Klink_[];
extern const u32 gMonBackPic_Klang_[];
extern const u32 gMonBackPic_Klinklang_[];
extern const u32 gMonBackPic_Tynamo_[];
extern const u32 gMonBackPic_Eelektrik_[];
extern const u32 gMonBackPic_Eelektross_[];
extern const u32 gMonBackPic_Elgyem_[];
extern const u32 gMonBackPic_Beheeyem_[];
extern const u32 gMonBackPic_Litwick_[];
extern const u32 gMonBackPic_Lampent_[];
extern const u32 gMonBackPic_Chandelure_[];
extern const u32 gMonBackPic_Axew_[];
extern const u32 gMonBackPic_Fraxure_[];
extern const u32 gMonBackPic_Haxorus_[];
extern const u32 gMonBackPic_Cubchoo_[];
extern const u32 gMonBackPic_Beartic_[];
extern const u32 gMonBackPic_Cryogonal_[];
extern const u32 gMonBackPic_Shelmet_[];
extern const u32 gMonBackPic_Accelgor_[];
extern const u32 gMonBackPic_Stunfisk_[];
extern const u32 gMonBackPic_Mienfoo_[];
extern const u32 gMonBackPic_Mienshao_[];
extern const u32 gMonBackPic_Druddigon_[];
extern const u32 gMonBackPic_Golett_[];
extern const u32 gMonBackPic_Golurk_[];
extern const u32 gMonBackPic_Pawniard_[];
extern const u32 gMonBackPic_Bisharp_[];
extern const u32 gMonBackPic_Bouffalant_[];
extern const u32 gMonBackPic_Rufflet_[];
extern const u32 gMonBackPic_Braviary_[];
extern const u32 gMonBackPic_Vullaby_[];
extern const u32 gMonBackPic_Mandibuzz_[];
extern const u32 gMonBackPic_Heatmor_[];
extern const u32 gMonBackPic_Durant_[];
extern const u32 gMonBackPic_Deino_[];
extern const u32 gMonBackPic_Zweilous_[];
extern const u32 gMonBackPic_Hydreigon_[];
extern const u32 gMonBackPic_Larvesta_[];
extern const u32 gMonBackPic_Volcarona_[];
extern const u32 gMonBackPic_Cobalion_[];
extern const u32 gMonBackPic_Terrakion_[];
extern const u32 gMonBackPic_Virizion_[];
extern const u32 gMonBackPic_Tornadus_[];
extern const u32 gMonBackPic_Thundurus_[];
extern const u32 gMonBackPic_Reshiram_[];
extern const u32 gMonBackPic_Zekrom_[];
extern const u32 gMonBackPic_Landorus_[];
extern const u32 gMonBackPic_Kyurem_[];
extern const u32 gMonBackPic_Keldeo_[];
extern const u32 gMonBackPic_Meloetta_[];
extern const u32 gMonBackPic_Genesect_[];
extern const u32 gMonBackPic_Chespin_[];
extern const u32 gMonBackPic_Quilladin_[];
extern const u32 gMonBackPic_Chesnaught_[];
extern const u32 gMonBackPic_Fennekin_[];
extern const u32 gMonBackPic_Braixen_[];
extern const u32 gMonBackPic_Delphox_[];
extern const u32 gMonBackPic_Froakie_[];
extern const u32 gMonBackPic_Frogadier_[];
extern const u32 gMonBackPic_Greninja_[];
extern const u32 gMonBackPic_Bunnelby_[];
extern const u32 gMonBackPic_Diggersby_[];
extern const u32 gMonBackPic_Fletchling_[];
extern const u32 gMonBackPic_Flechinder_[];
extern const u32 gMonBackPic_Talonflame_[];
extern const u32 gMonBackPic_Scatterbug_[];
extern const u32 gMonBackPic_Spewpa_[];
extern const u32 gMonBackPic_Vivillon_[];
extern const u32 gMonBackPic_Litleo_[];
extern const u32 gMonBackPic_Pyroar_[];
extern const u32 gMonBackPic_Flabebe_[];
extern const u32 gMonBackPic_Floette_[];
extern const u32 gMonBackPic_Florges_[];
extern const u32 gMonBackPic_Skiddo_[];
extern const u32 gMonBackPic_Gogoat_[];
extern const u32 gMonBackPic_Pancham_[];
extern const u32 gMonBackPic_Pangoro_[];
extern const u32 gMonBackPic_Furfrou_[];
extern const u32 gMonBackPic_Espurr_[];
extern const u32 gMonBackPic_Meowstic_[];
extern const u32 gMonBackPic_Honedge_[];
extern const u32 gMonBackPic_Doublade_[];
extern const u32 gMonBackPic_Aegislash_[];
extern const u32 gMonBackPic_Spritzee_[];
extern const u32 gMonBackPic_Aromatisse_[];
extern const u32 gMonBackPic_Swirlix_[];
extern const u32 gMonBackPic_Slurpuff_[];
extern const u32 gMonBackPic_Inkay_[];
extern const u32 gMonBackPic_Malamar_[];
extern const u32 gMonBackPic_Binacle_[];
extern const u32 gMonBackPic_Barbaracle_[];
extern const u32 gMonBackPic_Skrelp_[];
extern const u32 gMonBackPic_Dragalge_[];
extern const u32 gMonBackPic_Clauncher_[];
extern const u32 gMonBackPic_Clawitzer_[];
extern const u32 gMonBackPic_Helioptile_[];
extern const u32 gMonBackPic_Heliolisk_[];
extern const u32 gMonBackPic_Tyrunt_[];
extern const u32 gMonBackPic_Tyrantrum_[];
extern const u32 gMonBackPic_Amaura_[];
extern const u32 gMonBackPic_Aurorus_[];
extern const u32 gMonBackPic_Sylveon_[];
extern const u32 gMonBackPic_Hawlucha_[];
extern const u32 gMonBackPic_Dedenne_[];
extern const u32 gMonBackPic_Carbink_[];
extern const u32 gMonBackPic_Goomy_[];
extern const u32 gMonBackPic_Sliggoo_[];
extern const u32 gMonBackPic_Goodra_[];
extern const u32 gMonBackPic_Klefki_[];
extern const u32 gMonBackPic_Phantump_[];
extern const u32 gMonBackPic_Trevenant_[];
extern const u32 gMonBackPic_Pumpkaboo_[];
extern const u32 gMonBackPic_Gourgeist_[];
extern const u32 gMonBackPic_Bergmite_[];
extern const u32 gMonBackPic_Avalugg_[];
extern const u32 gMonBackPic_Noibat_[];
extern const u32 gMonBackPic_Noivern_[];
extern const u32 gMonBackPic_Xerneas_[];
extern const u32 gMonBackPic_Yveltal_[];
extern const u32 gMonBackPic_Zygarde_[];
extern const u32 gMonBackPic_Diancie_[];
extern const u32 gMonBackPic_Hoopa_[];
extern const u32 gMonBackPic_Volcanion_[];
extern const u32 gMonBackPic_Rowlet_[];
extern const u32 gMonBackPic_Dartrix_[];
extern const u32 gMonBackPic_Decidueye_[];
extern const u32 gMonBackPic_Litten_[];
extern const u32 gMonBackPic_Torracat_[];
extern const u32 gMonBackPic_Incineroar_[];
extern const u32 gMonBackPic_Popplio_[];
extern const u32 gMonBackPic_Brionne_[];
extern const u32 gMonBackPic_Primarina_[];
extern const u32 gMonBackPic_Pikipek_[];
extern const u32 gMonBackPic_Trumbeak_[];
extern const u32 gMonBackPic_Toucannon_[];
extern const u32 gMonBackPic_Yungoos_[];
extern const u32 gMonBackPic_Gumshoos_[];
extern const u32 gMonBackPic_Grubbin_[];
extern const u32 gMonBackPic_Charjabug_[];
extern const u32 gMonBackPic_Vikavolt_[];
extern const u32 gMonBackPic_Crabrawler_[];
extern const u32 gMonBackPic_Crabminabl_[];
extern const u32 gMonBackPic_Oricorio_[];
extern const u32 gMonBackPic_Cutiefly_[];
extern const u32 gMonBackPic_Ribombee_[];
extern const u32 gMonBackPic_Rockruff_[];
extern const u32 gMonBackPic_Lycanroc_[];
extern const u32 gMonBackPic_Wishiwashi_[];
extern const u32 gMonBackPic_Mareanie_[];
extern const u32 gMonBackPic_Toxapex_[];
extern const u32 gMonBackPic_Mudbray_[];
extern const u32 gMonBackPic_Mudsdale_[];
extern const u32 gMonBackPic_Dewpider_[];
extern const u32 gMonBackPic_Araquanid_[];
extern const u32 gMonBackPic_Fomantis_[];
extern const u32 gMonBackPic_Lurantis_[];
extern const u32 gMonBackPic_Morelull_[];
extern const u32 gMonBackPic_Shiinotic_[];
extern const u32 gMonBackPic_Salandit_[];
extern const u32 gMonBackPic_Salazzle_[];
extern const u32 gMonBackPic_Stufful_[];
extern const u32 gMonBackPic_Bewear_[];
extern const u32 gMonBackPic_Bounsweet_[];
extern const u32 gMonBackPic_Steenee_[];
extern const u32 gMonBackPic_Tsareena_[];
extern const u32 gMonBackPic_Comfey_[];
extern const u32 gMonBackPic_Oranguru_[];
extern const u32 gMonBackPic_Passimian_[];
extern const u32 gMonBackPic_Wimpod_[];
extern const u32 gMonBackPic_Golisopod_[];
extern const u32 gMonBackPic_Sandygast_[];
extern const u32 gMonBackPic_Palossand_[];
extern const u32 gMonBackPic_Pyukumuku_[];
extern const u32 gMonBackPic_TypeNull_[];
extern const u32 gMonBackPic_Silvally_[];
extern const u32 gMonBackPic_Minior_[];
extern const u32 gMonBackPic_Komala_[];
extern const u32 gMonBackPic_Turtonator_[];
extern const u32 gMonBackPic_Togedemaru_[];
extern const u32 gMonBackPic_Mimikyu_[];
extern const u32 gMonBackPic_Bruxish_[];
extern const u32 gMonBackPic_Drampa_[];
extern const u32 gMonBackPic_Dhelmise_[];
extern const u32 gMonBackPic_Jangmoo_[];
extern const u32 gMonBackPic_Hakamoo_[];
extern const u32 gMonBackPic_Kommoo_[];
extern const u32 gMonBackPic_TapuKoko_[];
extern const u32 gMonBackPic_TapuLele_[];
extern const u32 gMonBackPic_TapuBulu_[];
extern const u32 gMonBackPic_TapuFini_[];
extern const u32 gMonBackPic_Cosmog_[];
extern const u32 gMonBackPic_Cosmoem_[];
extern const u32 gMonBackPic_Solgaleo_[];
extern const u32 gMonBackPic_Lunala_[];
extern const u32 gMonBackPic_Nihilego_[];
extern const u32 gMonBackPic_Buzzwole_[];
extern const u32 gMonBackPic_Pheromosa_[];
extern const u32 gMonBackPic_Xurkitree_[];
extern const u32 gMonBackPic_Celesteela_[];
extern const u32 gMonBackPic_Kartana_[];
extern const u32 gMonBackPic_Guzzlord_[];
extern const u32 gMonBackPic_Necrozma_[];
extern const u32 gMonBackPic_Magearna_[];
extern const u32 gMonBackPic_Marshadow_[];
extern const u32 gMonBackPic_Poipole_[];
extern const u32 gMonBackPic_Naganadel_[];
extern const u32 gMonBackPic_Stakataka_[];
extern const u32 gMonBackPic_Blacephaln_[];
extern const u32 gMonBackPic_Zeraora_[];
extern const u32 gMonBackPic_Meltan_[];
extern const u32 gMonBackPic_Melmetal_[];
extern const u32 gMonBackPic_Grookey_[];
extern const u32 gMonBackPic_Thwackey_[];
extern const u32 gMonBackPic_Rillaboom_[];
extern const u32 gMonBackPic_Scorbunny_[];
extern const u32 gMonBackPic_Raboot_[];
extern const u32 gMonBackPic_Cinderace_[];
extern const u32 gMonBackPic_Sobble_[];
extern const u32 gMonBackPic_Drizzile_[];
extern const u32 gMonBackPic_Inteleon_[];
extern const u32 gMonBackPic_Skwovet_[];
extern const u32 gMonBackPic_Greedent_[];
extern const u32 gMonBackPic_Rookidee_[];
extern const u32 gMonBackPic_Corvisquir_[];
extern const u32 gMonBackPic_Corviknigh_[];
extern const u32 gMonBackPic_Blipbug_[];
extern const u32 gMonBackPic_Dottler_[];
extern const u32 gMonBackPic_Orbeetle_[];
extern const u32 gMonBackPic_Nickit_[];
extern const u32 gMonBackPic_Thievul_[];
extern const u32 gMonBackPic_Gossifleur_[];
extern const u32 gMonBackPic_Eldegoss_[];
extern const u32 gMonBackPic_Wooloo_[];
extern const u32 gMonBackPic_Dubwool_[];
extern const u32 gMonBackPic_Chewtle_[];
extern const u32 gMonBackPic_Drednaw_[];
extern const u32 gMonBackPic_Yamper_[];
extern const u32 gMonBackPic_Boltund_[];
extern const u32 gMonBackPic_Rolycoly_[];
extern const u32 gMonBackPic_Carkol_[];
extern const u32 gMonBackPic_Coalossal_[];
extern const u32 gMonBackPic_Applin_[];
extern const u32 gMonBackPic_Flapple_[];
extern const u32 gMonBackPic_Appletun_[];
extern const u32 gMonBackPic_Silicobra_[];
extern const u32 gMonBackPic_Sandaconda_[];
extern const u32 gMonBackPic_Cramorant_[];
extern const u32 gMonBackPic_Arrokuda_[];
extern const u32 gMonBackPic_Barraskewd_[];
extern const u32 gMonBackPic_Toxel_[];
extern const u32 gMonBackPic_Toxtricity_[];
extern const u32 gMonBackPic_Sizzlipede_[];
extern const u32 gMonBackPic_Centiskorc_[];
extern const u32 gMonBackPic_Clobbopus_[];
extern const u32 gMonBackPic_Grapploct_[];
extern const u32 gMonBackPic_Sinistea_[];
extern const u32 gMonBackPic_Polteageis_[];
extern const u32 gMonBackPic_Hatenna_[];
extern const u32 gMonBackPic_Hattrem_[];
extern const u32 gMonBackPic_Hatterene_[];
extern const u32 gMonBackPic_Impidimp_[];
extern const u32 gMonBackPic_Morgrem_[];
extern const u32 gMonBackPic_Grimmsnarl_[];
extern const u32 gMonBackPic_Obstagoon_[];
extern const u32 gMonBackPic_Perrserker_[];
extern const u32 gMonBackPic_Cursola_[];
extern const u32 gMonBackPic_Sirfetchd_[];
extern const u32 gMonBackPic_MrRime_[];
extern const u32 gMonBackPic_Runerigus_[];
extern const u32 gMonBackPic_Milcery_[];
extern const u32 gMonBackPic_Alcremie_[];
extern const u32 gMonBackPic_Falinks_[];
extern const u32 gMonBackPic_Pincurchin_[];
extern const u32 gMonBackPic_Snom_[];
extern const u32 gMonBackPic_Frosmoth_[];
extern const u32 gMonBackPic_Stonjourne_[];
extern const u32 gMonBackPic_Eiscue_[];
extern const u32 gMonBackPic_Indeedee_[];
extern const u32 gMonBackPic_Morpeko_[];
extern const u32 gMonBackPic_Cufant_[];
extern const u32 gMonBackPic_Copperajah_[];
extern const u32 gMonBackPic_Dracozolt_[];
extern const u32 gMonBackPic_Arctozolt_[];
extern const u32 gMonBackPic_Dracovish_[];
extern const u32 gMonBackPic_Arctovish_[];
extern const u32 gMonBackPic_Duraludon_[];
extern const u32 gMonBackPic_Dreepy_[];
extern const u32 gMonBackPic_Drakloak_[];
extern const u32 gMonBackPic_Dragapult_[];
extern const u32 gMonBackPic_Zacian_[];
extern const u32 gMonBackPic_Zamazenta_[];
extern const u32 gMonBackPic_Eternatus_[];
extern const u32 gMonBackPic_Kubfu_[];
extern const u32 gMonBackPic_Urshifu_[];
extern const u32 gMonBackPic_Zarude_[];
extern const u32 gMonBackPic_Regieleki_[];
extern const u32 gMonBackPic_Regidrago_[];
extern const u32 gMonBackPic_Glastrier_[];
extern const u32 gMonBackPic_Spectrier_[];
extern const u32 gMonBackPic_Calyrex_[];
extern const u32 gMonBackPic_Wyrdeer_[];
extern const u32 gMonBackPic_Kleavor_[];
extern const u32 gMonBackPic_Ursaluna_[];
extern const u32 gMonBackPic_Bsculegion_[];
extern const u32 gMonBackPic_Sneasler_[];
extern const u32 gMonBackPic_Overqwil_[];
extern const u32 gMonBackPic_Enamorus_[];
extern const u32 gMonBackPic_Venusaur2_[];
extern const u32 gMonBackPic_Charizard2_[];
extern const u32 gMonBackPic_Charizard3_[];
extern const u32 gMonBackPic_Blastoise2_[];
extern const u32 gMonBackPic_Beedrill2_[];
extern const u32 gMonBackPic_Pidgeot2_[];
extern const u32 gMonBackPic_Alakazam2_[];
extern const u32 gMonBackPic_Slowbro2_[];
extern const u32 gMonBackPic_Gengar2_[];
extern const u32 gMonBackPic_Kangaskhan2_[];
extern const u32 gMonBackPic_Pinsir2_[];
extern const u32 gMonBackPic_Gyarados2_[];
extern const u32 gMonBackPic_Aerodactyl2_[];
extern const u32 gMonBackPic_Mewtwo2_[];
extern const u32 gMonBackPic_Mewtwo3_[];
extern const u32 gMonBackPic_Ampharos2_[];
extern const u32 gMonBackPic_Steelix2_[];
extern const u32 gMonBackPic_Scizor2_[];
extern const u32 gMonBackPic_Heracross2_[];
extern const u32 gMonBackPic_Houndoom2_[];
extern const u32 gMonBackPic_Tyranitar2_[];
extern const u32 gMonBackPic_Sceptile2_[];
extern const u32 gMonBackPic_Blaziken2_[];
extern const u32 gMonBackPic_Swampert2_[];
extern const u32 gMonBackPic_Gardevoir2_[];
extern const u32 gMonBackPic_Sableye2_[];
extern const u32 gMonBackPic_Mawile2_[];
extern const u32 gMonBackPic_Aggron2_[];
extern const u32 gMonBackPic_Medicham2_[];
extern const u32 gMonBackPic_Manectric2_[];
extern const u32 gMonBackPic_Sharpedo2_[];
extern const u32 gMonBackPic_Camerupt2_[];
extern const u32 gMonBackPic_Altaria2_[];
extern const u32 gMonBackPic_Banette2_[];
extern const u32 gMonBackPic_Absol2_[];
extern const u32 gMonBackPic_Glalie2_[];
extern const u32 gMonBackPic_Salamence2_[];
extern const u32 gMonBackPic_Metagross2_[];
extern const u32 gMonBackPic_Latias2_[];
extern const u32 gMonBackPic_Latios2_[];
extern const u32 gMonBackPic_Lopunny2_[];
extern const u32 gMonBackPic_Garchomp2_[];
extern const u32 gMonBackPic_Lucario2_[];
extern const u32 gMonBackPic_Abomasnow2_[];
extern const u32 gMonBackPic_Gallade2_[];
extern const u32 gMonBackPic_Audino2_[];
extern const u32 gMonBackPic_Diancie2_[];
extern const u32 gMonBackPic_Rayquaza2_[];
extern const u32 gMonBackPic_Kyogre2_[];
extern const u32 gMonBackPic_Groudon2_[];
extern const u32 gMonBackPic_Rattata2_[];
extern const u32 gMonBackPic_Raticate2_[];
extern const u32 gMonBackPic_Raichu2_[];
extern const u32 gMonBackPic_Sandshrew2_[];
extern const u32 gMonBackPic_Sandslash2_[];
extern const u32 gMonBackPic_Vulpix2_[];
extern const u32 gMonBackPic_Ninetales2_[];
extern const u32 gMonBackPic_Diglett2_[];
extern const u32 gMonBackPic_Dugtrio2_[];
extern const u32 gMonBackPic_Meowth2_[];
extern const u32 gMonBackPic_Persian2_[];
extern const u32 gMonBackPic_Geodude2_[];
extern const u32 gMonBackPic_Graveler2_[];
extern const u32 gMonBackPic_Golem2_[];
extern const u32 gMonBackPic_Grimer2_[];
extern const u32 gMonBackPic_Muk2_[];
extern const u32 gMonBackPic_Exeggutor2_[];
extern const u32 gMonBackPic_Marowak2_[];
extern const u32 gMonBackPic_Meowth3_[];
extern const u32 gMonBackPic_Ponyta2_[];
extern const u32 gMonBackPic_Rapidash2_[];
extern const u32 gMonBackPic_Slowpoke2_[];
extern const u32 gMonBackPic_Slowbro3_[];
extern const u32 gMonBackPic_Farfetchd2_[];
extern const u32 gMonBackPic_Weezing2_[];
extern const u32 gMonBackPic_MrMime2_[];
extern const u32 gMonBackPic_Articuno2_[];
extern const u32 gMonBackPic_Zapdos2_[];
extern const u32 gMonBackPic_Moltres2_[];
extern const u32 gMonBackPic_Slowking2_[];
extern const u32 gMonBackPic_Corsola2_[];
extern const u32 gMonBackPic_Zigzagoon2_[];
extern const u32 gMonBackPic_Linoone2_[];
extern const u32 gMonBackPic_Darumaka2_[];
extern const u32 gMonBackPic_Darmanitan2_[];
extern const u32 gMonBackPic_Yamask2_[];
extern const u32 gMonBackPic_Stunfisk2_[];
extern const u32 gMonBackPic_Growlithe2_[];
extern const u32 gMonBackPic_Arcanine2_[];
extern const u32 gMonBackPic_Voltorb2_[];
extern const u32 gMonBackPic_Electrode2_[];
extern const u32 gMonBackPic_Typhlosion2_[];
extern const u32 gMonBackPic_Qwilfish2_[];
extern const u32 gMonBackPic_Sneasel2_[];
extern const u32 gMonBackPic_Samurott2_[];
extern const u32 gMonBackPic_Lilligant2_[];
extern const u32 gMonBackPic_Zorua2_[];
extern const u32 gMonBackPic_Zoroark2_[];
extern const u32 gMonBackPic_Braviary2_[];
extern const u32 gMonBackPic_Sliggoo2_[];
extern const u32 gMonBackPic_Goodra2_[];
extern const u32 gMonBackPic_Avalugg2_[];
extern const u32 gMonBackPic_Decidueye2_[];
extern const u32 gMonBackPic_Pikachu2_[];
extern const u32 gMonBackPic_Pikachu3_[];
extern const u32 gMonBackPic_Pikachu4_[];
extern const u32 gMonBackPic_Pikachu5_[];
extern const u32 gMonBackPic_Pikachu6_[];
extern const u32 gMonBackPic_Pikachu7_[];
extern const u32 gMonBackPic_Pikachu8_[];
extern const u32 gMonBackPic_Pikachu9_[];
extern const u32 gMonBackPic_Pikachu10_[];
extern const u32 gMonBackPic_Pikachu11_[];
extern const u32 gMonBackPic_Pikachu12_[];
extern const u32 gMonBackPic_Pikachu13_[];
extern const u32 gMonBackPic_Pikachu14_[];
extern const u32 gMonBackPic_Pikachu15_[];
extern const u32 gMonBackPic_Pichu2_[];
extern const u32 gMonBackPic_Castform2_[];
extern const u32 gMonBackPic_Castform3_[];
extern const u32 gMonBackPic_Castform4_[];
extern const u32 gMonBackPic_Deoxys2_[];
extern const u32 gMonBackPic_Deoxys3_[];
extern const u32 gMonBackPic_Deoxys4_[];
extern const u32 gMonBackPic_Burmy2_[];
extern const u32 gMonBackPic_Burmy3_[];
extern const u32 gMonBackPic_Wormadam2_[];
extern const u32 gMonBackPic_Wormadam3_[];
extern const u32 gMonBackPic_Cherrim2_[];
extern const u32 gMonBackPic_Shellos2_[];
extern const u32 gMonBackPic_Gastrodon2_[];
extern const u32 gMonBackPic_Rotom2_[];
extern const u32 gMonBackPic_Rotom3_[];
extern const u32 gMonBackPic_Rotom4_[];
extern const u32 gMonBackPic_Rotom5_[];
extern const u32 gMonBackPic_Rotom6_[];
extern const u32 gMonBackPic_Dialga2_[];
extern const u32 gMonBackPic_Palkia2_[];
extern const u32 gMonBackPic_Giratina2_[];
extern const u32 gMonBackPic_Shaymin2_[];
extern const u32 gMonBackPic_Arceus2_[];
extern const u32 gMonBackPic_Arceus3_[];
extern const u32 gMonBackPic_Arceus4_[];
extern const u32 gMonBackPic_Arceus5_[];
extern const u32 gMonBackPic_Arceus6_[];
extern const u32 gMonBackPic_Arceus7_[];
extern const u32 gMonBackPic_Arceus8_[];
extern const u32 gMonBackPic_Arceus9_[];
extern const u32 gMonBackPic_Arceus10_[];
extern const u32 gMonBackPic_Arceus11_[];
extern const u32 gMonBackPic_Arceus12_[];
extern const u32 gMonBackPic_Arceus13_[];
extern const u32 gMonBackPic_Arceus14_[];
extern const u32 gMonBackPic_Arceus15_[];
extern const u32 gMonBackPic_Arceus16_[];
extern const u32 gMonBackPic_Arceus17_[];
extern const u32 gMonBackPic_Arceus18_[];
extern const u32 gMonBackPic_Basculin2_[];
extern const u32 gMonBackPic_Basculin3_[];
extern const u32 gMonBackPic_Darmanitan3_[];
extern const u32 gMonBackPic_Darmanitan4_[];
extern const u32 gMonBackPic_Deerling2_[];
extern const u32 gMonBackPic_Deerling3_[];
extern const u32 gMonBackPic_Deerling4_[];
extern const u32 gMonBackPic_Sawsbuck2_[];
extern const u32 gMonBackPic_Sawsbuck3_[];
extern const u32 gMonBackPic_Sawsbuck4_[];
extern const u32 gMonBackPic_Tornadus2_[];
extern const u32 gMonBackPic_Thundurus2_[];
extern const u32 gMonBackPic_Landorus2_[];
extern const u32 gMonBackPic_Enamorus2_[];
extern const u32 gMonBackPic_Kyurem2_[];
extern const u32 gMonBackPic_Kyurem3_[];
extern const u32 gMonBackPic_Keldeo2_[];
extern const u32 gMonBackPic_Meloetta2_[];
extern const u32 gMonBackPic_Genesect2_[];
extern const u32 gMonBackPic_Genesect3_[];
extern const u32 gMonBackPic_Genesect4_[];
extern const u32 gMonBackPic_Genesect5_[];
extern const u32 gMonBackPic_Greninja2_[];
extern const u32 gMonBackPic_Greninja3_[];
extern const u32 gMonBackPic_Vivillon2_[];
extern const u32 gMonBackPic_Vivillon3_[];
extern const u32 gMonBackPic_Vivillon4_[];
extern const u32 gMonBackPic_Vivillon5_[];
extern const u32 gMonBackPic_Vivillon6_[];
extern const u32 gMonBackPic_Vivillon7_[];
extern const u32 gMonBackPic_Vivillon8_[];
extern const u32 gMonBackPic_Vivillon9_[];
extern const u32 gMonBackPic_Vivillon10_[];
extern const u32 gMonBackPic_Vivillon11_[];
extern const u32 gMonBackPic_Vivillon12_[];
extern const u32 gMonBackPic_Vivillon13_[];
extern const u32 gMonBackPic_Vivillon14_[];
extern const u32 gMonBackPic_Vivillon15_[];
extern const u32 gMonBackPic_Vivillon16_[];
extern const u32 gMonBackPic_Vivillon17_[];
extern const u32 gMonBackPic_Vivillon18_[];
extern const u32 gMonBackPic_Vivillon19_[];
extern const u32 gMonBackPic_Vivillon20_[];
extern const u32 gMonBackPic_Flabebe2_[];
extern const u32 gMonBackPic_Flabebe3_[];
extern const u32 gMonBackPic_Flabebe4_[];
extern const u32 gMonBackPic_Flabebe5_[];
extern const u32 gMonBackPic_Floette2_[];
extern const u32 gMonBackPic_Floette3_[];
extern const u32 gMonBackPic_Floette4_[];
extern const u32 gMonBackPic_Floette5_[];
extern const u32 gMonBackPic_Floette6_[];
extern const u32 gMonBackPic_Florges2_[];
extern const u32 gMonBackPic_Florges3_[];
extern const u32 gMonBackPic_Florges4_[];
extern const u32 gMonBackPic_Florges5_[];
extern const u32 gMonBackPic_Furfrou2_[];
extern const u32 gMonBackPic_Furfrou3_[];
extern const u32 gMonBackPic_Furfrou4_[];
extern const u32 gMonBackPic_Furfrou5_[];
extern const u32 gMonBackPic_Furfrou6_[];
extern const u32 gMonBackPic_Furfrou7_[];
extern const u32 gMonBackPic_Furfrou8_[];
extern const u32 gMonBackPic_Furfrou9_[];
extern const u32 gMonBackPic_Furfrou10_[];
extern const u32 gMonBackPic_Meowstic2_[];
extern const u32 gMonBackPic_Aegislash2_[];
extern const u32 gMonBackPic_Pumpkaboo2_[];
extern const u32 gMonBackPic_Pumpkaboo3_[];
extern const u32 gMonBackPic_Pumpkaboo4_[];
extern const u32 gMonBackPic_Gourgeist2_[];
extern const u32 gMonBackPic_Gourgeist3_[];
extern const u32 gMonBackPic_Gourgeist4_[];
extern const u32 gMonBackPic_Xerneas2_[];
extern const u32 gMonBackPic_Zygarde2_[];
extern const u32 gMonBackPic_Zygarde3_[];
extern const u32 gMonBackPic_Zygarde4_[];
extern const u32 gMonBackPic_Zygarde5_[];
extern const u32 gMonBackPic_Hoopa2_[];
extern const u32 gMonBackPic_Oricorio2_[];
extern const u32 gMonBackPic_Oricorio3_[];
extern const u32 gMonBackPic_Oricorio4_[];
extern const u32 gMonBackPic_Rockruff2_[];
extern const u32 gMonBackPic_Lycanroc2_[];
extern const u32 gMonBackPic_Lycanroc3_[];
extern const u32 gMonBackPic_Wishiwashi2_[];
extern const u32 gMonBackPic_Silvally2_[];
extern const u32 gMonBackPic_Silvally3_[];
extern const u32 gMonBackPic_Silvally4_[];
extern const u32 gMonBackPic_Silvally5_[];
extern const u32 gMonBackPic_Silvally6_[];
extern const u32 gMonBackPic_Silvally7_[];
extern const u32 gMonBackPic_Silvally8_[];
extern const u32 gMonBackPic_Silvally9_[];
extern const u32 gMonBackPic_Silvally10_[];
extern const u32 gMonBackPic_Silvally11_[];
extern const u32 gMonBackPic_Silvally12_[];
extern const u32 gMonBackPic_Silvally13_[];
extern const u32 gMonBackPic_Silvally14_[];
extern const u32 gMonBackPic_Silvally15_[];
extern const u32 gMonBackPic_Silvally16_[];
extern const u32 gMonBackPic_Silvally17_[];
extern const u32 gMonBackPic_Silvally18_[];
extern const u32 gMonBackPic_Minior2_[];
extern const u32 gMonBackPic_Minior3_[];
extern const u32 gMonBackPic_Minior4_[];
extern const u32 gMonBackPic_Minior5_[];
extern const u32 gMonBackPic_Minior6_[];
extern const u32 gMonBackPic_Minior7_[];
extern const u32 gMonBackPic_Minior8_[];
extern const u32 gMonBackPic_Minior9_[];
extern const u32 gMonBackPic_Minior10_[];
extern const u32 gMonBackPic_Minior11_[];
extern const u32 gMonBackPic_Minior12_[];
extern const u32 gMonBackPic_Minior13_[];
extern const u32 gMonBackPic_Minior14_[];
extern const u32 gMonBackPic_Mimikyu2_[];
extern const u32 gMonBackPic_Necrozma2_[];
extern const u32 gMonBackPic_Necrozma3_[];
extern const u32 gMonBackPic_Necrozma4_[];
extern const u32 gMonBackPic_Magearna2_[];
extern const u32 gMonBackPic_Cramorant2_[];
extern const u32 gMonBackPic_Cramorant3_[];
extern const u32 gMonBackPic_Toxtricity2_[];
extern const u32 gMonBackPic_Sinistea2_[];
extern const u32 gMonBackPic_Polteageis2_[];
extern const u32 gMonBackPic_Alcremie2_[];
extern const u32 gMonBackPic_Alcremie3_[];
extern const u32 gMonBackPic_Alcremie4_[];
extern const u32 gMonBackPic_Alcremie5_[];
extern const u32 gMonBackPic_Alcremie6_[];
extern const u32 gMonBackPic_Alcremie7_[];
extern const u32 gMonBackPic_Alcremie8_[];
extern const u32 gMonBackPic_Alcremie9_[];
extern const u32 gMonBackPic_Eiscue2_[];
extern const u32 gMonBackPic_Indeedee2_[];
extern const u32 gMonBackPic_Morpeko2_[];
extern const u32 gMonBackPic_Zacian2_[];
extern const u32 gMonBackPic_Zamazenta2_[];
extern const u32 gMonBackPic_Eternatus2_[];
extern const u32 gMonBackPic_Urshifu2_[];
extern const u32 gMonBackPic_Zarude2_[];
extern const u32 gMonBackPic_Calyrex2_[];
extern const u32 gMonBackPic_Calyrex3_[];
extern const u32 gMonBackPic_Bsculegion2_[];
extern const u32 gMonBackPic_Alcremie10_[];
extern const u32 gMonBackPic_Alcremie11_[];
extern const u32 gMonBackPic_Alcremie12_[];
extern const u32 gMonBackPic_Alcremie13_[];
extern const u32 gMonBackPic_Alcremie14_[];
extern const u32 gMonBackPic_Alcremie15_[];
extern const u32 gMonBackPic_Alcremie16_[];
extern const u32 gMonBackPic_Alcremie17_[];
extern const u32 gMonBackPic_Alcremie18_[];
extern const u32 gMonBackPic_Alcremie19_[];
extern const u32 gMonBackPic_Alcremie20_[];
extern const u32 gMonBackPic_Alcremie21_[];
extern const u32 gMonBackPic_Alcremie22_[];
extern const u32 gMonBackPic_Alcremie23_[];
extern const u32 gMonBackPic_Alcremie24_[];
extern const u32 gMonBackPic_Alcremie25_[];
extern const u32 gMonBackPic_Alcremie26_[];
extern const u32 gMonBackPic_Alcremie27_[];
extern const u32 gMonBackPic_Alcremie28_[];
extern const u32 gMonBackPic_Alcremie29_[];
extern const u32 gMonBackPic_Alcremie30_[];
extern const u32 gMonBackPic_Alcremie31_[];
extern const u32 gMonBackPic_Alcremie32_[];
extern const u32 gMonBackPic_Alcremie33_[];
extern const u32 gMonBackPic_Alcremie34_[];
extern const u32 gMonBackPic_Alcremie35_[];
extern const u32 gMonBackPic_Alcremie36_[];
extern const u32 gMonBackPic_Alcremie37_[];
extern const u32 gMonBackPic_Alcremie38_[];
extern const u32 gMonBackPic_Alcremie39_[];
extern const u32 gMonBackPic_Alcremie40_[];
extern const u32 gMonBackPic_Alcremie41_[];
extern const u32 gMonBackPic_Alcremie42_[];
extern const u32 gMonBackPic_Alcremie43_[];
extern const u32 gMonBackPic_Alcremie44_[];
extern const u32 gMonBackPic_Alcremie45_[];
extern const u32 gMonBackPic_Alcremie46_[];
extern const u32 gMonBackPic_Alcremie47_[];
extern const u32 gMonBackPic_Alcremie48_[];
extern const u32 gMonBackPic_Alcremie49_[];
extern const u32 gMonBackPic_Alcremie50_[];
extern const u32 gMonBackPic_Alcremie51_[];
extern const u32 gMonBackPic_Alcremie52_[];
extern const u32 gMonBackPic_Alcremie53_[];
extern const u32 gMonBackPic_Alcremie54_[];
extern const u32 gMonBackPic_Alcremie55_[];
extern const u32 gMonBackPic_Alcremie56_[];
extern const u32 gMonBackPic_Alcremie57_[];
extern const u32 gMonBackPic_Alcremie58_[];
extern const u32 gMonBackPic_Alcremie59_[];
extern const u32 gMonBackPic_Alcremie60_[];
extern const u32 gMonBackPic_Alcremie61_[];
extern const u32 gMonBackPic_Alcremie62_[];
extern const u32 gMonBackPic_Alcremie63_[];
extern const u32 gMonBackPic_Sprigatito_[];
extern const u32 gMonBackPic_Floragato_[];
extern const u32 gMonBackPic_Meowscarad_[];
extern const u32 gMonBackPic_Fuecoco_[];
extern const u32 gMonBackPic_Crocalor_[];
extern const u32 gMonBackPic_Skeledirge_[];
extern const u32 gMonBackPic_Quaxly_[];
extern const u32 gMonBackPic_Quaxwell_[];
extern const u32 gMonBackPic_Quaquaval_[];
extern const u32 gMonBackPic_Lechonk_[];
extern const u32 gMonBackPic_Oinkologne_[];
extern const u32 gMonBackPic_Oinkologne2_[];
extern const u32 gMonBackPic_Tarountula_[];
extern const u32 gMonBackPic_Spidops_[];
extern const u32 gMonBackPic_Nymble_[];
extern const u32 gMonBackPic_Lokix_[];
extern const u32 gMonBackPic_Pawmi_[];
extern const u32 gMonBackPic_Pawmo_[];
extern const u32 gMonBackPic_Pawmot_[];
extern const u32 gMonBackPic_Tandemaus_[];
extern const u32 gMonBackPic_Maushold_[];
extern const u32 gMonBackPic_Maushold2_[];
extern const u32 gMonBackPic_Fidough_[];
extern const u32 gMonBackPic_Dachsbun_[];
extern const u32 gMonBackPic_Smoliv_[];
extern const u32 gMonBackPic_Dolliv_[];
extern const u32 gMonBackPic_Arboliva_[];
extern const u32 gMonBackPic_Sqawkabily_[];
extern const u32 gMonBackPic_Sqawkabily2_[];
extern const u32 gMonBackPic_Sqawkabily3_[];
extern const u32 gMonBackPic_Sqawkabily4_[];
extern const u32 gMonBackPic_Nacli_[];
extern const u32 gMonBackPic_Naclstack_[];
extern const u32 gMonBackPic_Garganacl_[];
extern const u32 gMonBackPic_Charcadet_[];
extern const u32 gMonBackPic_Armarouge_[];
extern const u32 gMonBackPic_Ceruledge_[];
extern const u32 gMonBackPic_Tadbulb_[];
extern const u32 gMonBackPic_Bellibolt_[];
extern const u32 gMonBackPic_Wattrel_[];
extern const u32 gMonBackPic_Kilowatrel_[];
extern const u32 gMonBackPic_Maschiff_[];
extern const u32 gMonBackPic_Mabosstiff_[];
extern const u32 gMonBackPic_Shroodle_[];
extern const u32 gMonBackPic_Grafaiai_[];
extern const u32 gMonBackPic_Bramblin_[];
extern const u32 gMonBackPic_Brmblghast_[];
extern const u32 gMonBackPic_Toedscool_[];
extern const u32 gMonBackPic_Toedscruel_[];
extern const u32 gMonBackPic_Klawf_[];
extern const u32 gMonBackPic_Capsakid_[];
extern const u32 gMonBackPic_Scovillain_[];
extern const u32 gMonBackPic_Rellor_[];
extern const u32 gMonBackPic_Rabsca_[];
extern const u32 gMonBackPic_Flittle_[];
extern const u32 gMonBackPic_Espathra_[];
extern const u32 gMonBackPic_Tinkatink_[];
extern const u32 gMonBackPic_Tinkatuff_[];
extern const u32 gMonBackPic_Tinkaton_[];
extern const u32 gMonBackPic_Wiglett_[];
extern const u32 gMonBackPic_Wugtrio_[];
extern const u32 gMonBackPic_Bombirdier_[];
extern const u32 gMonBackPic_Finizen_[];
extern const u32 gMonBackPic_Palafin_[];
extern const u32 gMonBackPic_Palafin2_[];
extern const u32 gMonBackPic_Varoom_[];
extern const u32 gMonBackPic_Revavroom_[];
extern const u32 gMonBackPic_Cyclizar_[];
extern const u32 gMonBackPic_Orthworm_[];
extern const u32 gMonBackPic_Glimmet_[];
extern const u32 gMonBackPic_Glimmora_[];
extern const u32 gMonBackPic_Greavard_[];
extern const u32 gMonBackPic_Houndstone_[];
extern const u32 gMonBackPic_Flamigo_[];
extern const u32 gMonBackPic_Cetoddle_[];
extern const u32 gMonBackPic_Cetitan_[];
extern const u32 gMonBackPic_Veluza_[];
extern const u32 gMonBackPic_Dondozo_[];
extern const u32 gMonBackPic_Tatsugiri_[];
extern const u32 gMonBackPic_Tatsugiri2_[];
extern const u32 gMonBackPic_Tatsugiri3_[];
extern const u32 gMonBackPic_Annihilape_[];
extern const u32 gMonBackPic_Clodsire_[];
extern const u32 gMonBackPic_Farigiraf_[];
extern const u32 gMonBackPic_Dudunsprce_[];
extern const u32 gMonBackPic_Dudunsprce2_[];
extern const u32 gMonBackPic_Kingambit_[];
extern const u32 gMonBackPic_GreatTusk_[];
extern const u32 gMonBackPic_ScreamTail_[];
extern const u32 gMonBackPic_BruteBonet_[];
extern const u32 gMonBackPic_FluttrMane_[];
extern const u32 gMonBackPic_SlithrWing_[];
extern const u32 gMonBackPic_SndyShocks_[];
extern const u32 gMonBackPic_IronTreads_[];
extern const u32 gMonBackPic_IronBundle_[];
extern const u32 gMonBackPic_IronHands_[];
extern const u32 gMonBackPic_IronJuguls_[];
extern const u32 gMonBackPic_IronMoth_[];
extern const u32 gMonBackPic_IronThorns_[];
extern const u32 gMonBackPic_Frigibax_[];
extern const u32 gMonBackPic_Arctibax_[];
extern const u32 gMonBackPic_Baxcalibur_[];
extern const u32 gMonBackPic_Gimmighoul_[];
extern const u32 gMonBackPic_Gimmighoul2_[];
extern const u32 gMonBackPic_Gholdengo_[];
extern const u32 gMonBackPic_WoChien_[];
extern const u32 gMonBackPic_ChienPao_[];
extern const u32 gMonBackPic_TingLu_[];
extern const u32 gMonBackPic_ChiYu_[];
extern const u32 gMonBackPic_RoarngMoon_[];
extern const u32 gMonBackPic_IronVliant_[];
extern const u32 gMonBackPic_Koraidon_[];
extern const u32 gMonBackPic_Miraidon_[];
extern const u32 gMonBackPic_Tauros2_[];
extern const u32 gMonBackPic_Tauros3_[];
extern const u32 gMonBackPic_Tauros4_[];
extern const u32 gMonBackPic_Wooper2_[];
extern const u32 gMonBackPic_WalkngWake_[];
extern const u32 gMonBackPic_IronLeaves_[];
extern const u32 gMonBackPic_Dipplin_[];
extern const u32 gMonBackPic_Ptchageist_[];
extern const u32 gMonBackPic_Ptchageist2_[];
extern const u32 gMonBackPic_Sinistcha_[];
extern const u32 gMonBackPic_Sinistcha2_[];
extern const u32 gMonBackPic_Okidogi_[];
extern const u32 gMonBackPic_Munkidori_[];
extern const u32 gMonBackPic_Fezndipiti_[];
extern const u32 gMonBackPic_Ogerpon_[];
extern const u32 gMonBackPic_Ogerpon2_[];
extern const u32 gMonBackPic_Ogerpon3_[];
extern const u32 gMonBackPic_Ogerpon4_[];
extern const u32 gMonBackPic_Ogerpon5_[];
extern const u32 gMonBackPic_Ogerpon6_[];
extern const u32 gMonBackPic_Ogerpon7_[];
extern const u32 gMonBackPic_Ogerpon8_[];
extern const u32 gMonBackPic_Ursaluna2_[];
extern const u32 gMonBackPic_Archaludon_[];
extern const u32 gMonBackPic_Hydrapple_[];
extern const u32 gMonBackPic_GouginFire_[];
extern const u32 gMonBackPic_RagingBolt_[];
extern const u32 gMonBackPic_IronBouldr_[];
extern const u32 gMonBackPic_IronCrown_[];
extern const u32 gMonBackPic_Terapagos_[];
extern const u32 gMonBackPic_Terapagos2_[];
extern const u32 gMonBackPic_Terapagos3_[];
extern const u32 gMonBackPic_Pecharunt_[];
extern const u32 gMonBackPic_Mothim2_[];
extern const u32 gMonBackPic_Mothim3_[];
extern const u32 gMonBackPic_Scatterbug2_[];
extern const u32 gMonBackPic_Scatterbug3_[];
extern const u32 gMonBackPic_Scatterbug4_[];
extern const u32 gMonBackPic_Scatterbug5_[];
extern const u32 gMonBackPic_Scatterbug6_[];
extern const u32 gMonBackPic_Scatterbug7_[];
extern const u32 gMonBackPic_Scatterbug8_[];
extern const u32 gMonBackPic_Scatterbug9_[];
extern const u32 gMonBackPic_Scatterbug10_[];
extern const u32 gMonBackPic_Scatterbug11_[];
extern const u32 gMonBackPic_Scatterbug12_[];
extern const u32 gMonBackPic_Scatterbug13_[];
extern const u32 gMonBackPic_Scatterbug14_[];
extern const u32 gMonBackPic_Scatterbug15_[];
extern const u32 gMonBackPic_Scatterbug16_[];
extern const u32 gMonBackPic_Scatterbug17_[];
extern const u32 gMonBackPic_Scatterbug18_[];
extern const u32 gMonBackPic_Scatterbug19_[];
extern const u32 gMonBackPic_Scatterbug20_[];
extern const u32 gMonBackPic_Spewpa2_[];
extern const u32 gMonBackPic_Spewpa3_[];
extern const u32 gMonBackPic_Spewpa4_[];
extern const u32 gMonBackPic_Spewpa5_[];
extern const u32 gMonBackPic_Spewpa6_[];
extern const u32 gMonBackPic_Spewpa7_[];
extern const u32 gMonBackPic_Spewpa8_[];
extern const u32 gMonBackPic_Spewpa9_[];
extern const u32 gMonBackPic_Spewpa10_[];
extern const u32 gMonBackPic_Spewpa11_[];
extern const u32 gMonBackPic_Spewpa12_[];
extern const u32 gMonBackPic_Spewpa13_[];
extern const u32 gMonBackPic_Spewpa14_[];
extern const u32 gMonBackPic_Spewpa15_[];
extern const u32 gMonBackPic_Spewpa16_[];
extern const u32 gMonBackPic_Spewpa17_[];
extern const u32 gMonBackPic_Spewpa18_[];
extern const u32 gMonBackPic_Spewpa19_[];
extern const u32 gMonBackPic_Spewpa20_[];
extern const u32 gMonBackPic_Raticate3_[];
extern const u32 gMonBackPic_Gumshoos2_[];
extern const u32 gMonBackPic_Vikavolt2_[];
extern const u32 gMonBackPic_Lurantis2_[];
extern const u32 gMonBackPic_Salazzle2_[];
extern const u32 gMonBackPic_Mimikyu3_[];
extern const u32 gMonBackPic_Kommoo2_[];
extern const u32 gMonBackPic_Marowak3_[];
extern const u32 gMonBackPic_Ribombee2_[];
extern const u32 gMonBackPic_Araquanid2_[];
extern const u32 gMonBackPic_Togedemaru2_[];
extern const u32 gMonBackPic_Pikachu16_[];
extern const u32 gMonBackPic_Eevee2_[];
extern const u32 gMonBackPic_Venusaur3_[];
extern const u32 gMonBackPic_Blastoise3_[];
extern const u32 gMonBackPic_Charizard4_[];
extern const u32 gMonBackPic_Butterfree2_[];
extern const u32 gMonBackPic_Pikachu17_[];
extern const u32 gMonBackPic_Meowth4_[];
extern const u32 gMonBackPic_Machamp2_[];
extern const u32 gMonBackPic_Gengar3_[];
extern const u32 gMonBackPic_Kingler2_[];
extern const u32 gMonBackPic_Lapras2_[];
extern const u32 gMonBackPic_Eevee3_[];
extern const u32 gMonBackPic_Snorlax2_[];
extern const u32 gMonBackPic_Garbodor2_[];
extern const u32 gMonBackPic_Melmetal2_[];
extern const u32 gMonBackPic_Rillaboom2_[];
extern const u32 gMonBackPic_Cinderace2_[];
extern const u32 gMonBackPic_Inteleon2_[];
extern const u32 gMonBackPic_Corviknigh2_[];
extern const u32 gMonBackPic_Orbeetle2_[];
extern const u32 gMonBackPic_Drednaw2_[];
extern const u32 gMonBackPic_Coalossal2_[];
extern const u32 gMonBackPic_Flapple2_[];
extern const u32 gMonBackPic_Appletun2_[];
extern const u32 gMonBackPic_Sandaconda2_[];
extern const u32 gMonBackPic_Toxtricity3_[];
extern const u32 gMonBackPic_Toxtricity4_[];
extern const u32 gMonBackPic_Centiskorc2_[];
extern const u32 gMonBackPic_Hatterene2_[];
extern const u32 gMonBackPic_Grimmsnarl2_[];
extern const u32 gMonBackPic_Alcremie64_[];
extern const u32 gMonBackPic_Copperajah2_[];
extern const u32 gMonBackPic_Duraludon2_[];
extern const u32 gMonBackPic_Urshifu3_[];
extern const u32 gMonBackPic_Urshifu4_[];
extern const u32 gMonBackPic_Mimikyu4_[];

const struct CompressedSpriteSheet gMonBackPicTable_[] =
{
	SPECIES_SPRITE(NONE, gMonBackPic_CircledQuestionMark),
	SPECIES_SPRITE(BULBASAUR, gMonBackPic_Bulbasaur_),
	SPECIES_SPRITE(IVYSAUR, gMonBackPic_Ivysaur_),
	SPECIES_SPRITE(VENUSAUR, gMonBackPic_Venusaur_),
	SPECIES_SPRITE(CHARMANDER, gMonBackPic_Charmander_),
	SPECIES_SPRITE(CHARMELEON, gMonBackPic_Charmeleon_),
	SPECIES_SPRITE(CHARIZARD, gMonBackPic_Charizard_),
	SPECIES_SPRITE(SQUIRTLE, gMonBackPic_Squirtle_),
	SPECIES_SPRITE(WARTORTLE, gMonBackPic_Wartortle_),
	SPECIES_SPRITE(BLASTOISE, gMonBackPic_Blastoise_),
	SPECIES_SPRITE(CATERPIE, gMonBackPic_Caterpie_),
	SPECIES_SPRITE(METAPOD, gMonBackPic_Metapod_),
	SPECIES_SPRITE(BUTTERFREE, gMonBackPic_Butterfree_),
	SPECIES_SPRITE(WEEDLE, gMonBackPic_Weedle_),
	SPECIES_SPRITE(KAKUNA, gMonBackPic_Kakuna_),
	SPECIES_SPRITE(BEEDRILL, gMonBackPic_Beedrill_),
	SPECIES_SPRITE(PIDGEY, gMonBackPic_Pidgey_),
	SPECIES_SPRITE(PIDGEOTTO, gMonBackPic_Pidgeotto_),
	SPECIES_SPRITE(PIDGEOT, gMonBackPic_Pidgeot_),
	SPECIES_SPRITE(RATTATA, gMonBackPic_Rattata_),
	SPECIES_SPRITE(RATICATE, gMonBackPic_Raticate_),
	SPECIES_SPRITE(SPEAROW, gMonBackPic_Spearow_),
	SPECIES_SPRITE(FEAROW, gMonBackPic_Fearow_),
	SPECIES_SPRITE(EKANS, gMonBackPic_Ekans_),
	SPECIES_SPRITE(ARBOK, gMonBackPic_Arbok_),
	SPECIES_SPRITE(PIKACHU, gMonBackPic_Pikachu_),
	SPECIES_SPRITE(RAICHU, gMonBackPic_Raichu_),
	SPECIES_SPRITE(SANDSHREW, gMonBackPic_Sandshrew_),
	SPECIES_SPRITE(SANDSLASH, gMonBackPic_Sandslash_),
	SPECIES_SPRITE(NIDORANSF, gMonBackPic_Nidoransf_),
	SPECIES_SPRITE(NIDORINA, gMonBackPic_Nidorina_),
	SPECIES_SPRITE(NIDOQUEEN, gMonBackPic_Nidoqueen_),
	SPECIES_SPRITE(NIDORANSM, gMonBackPic_Nidoransm_),
	SPECIES_SPRITE(NIDORINO, gMonBackPic_Nidorino_),
	SPECIES_SPRITE(NIDOKING, gMonBackPic_Nidoking_),
	SPECIES_SPRITE(CLEFAIRY, gMonBackPic_Clefairy_),
	SPECIES_SPRITE(CLEFABLE, gMonBackPic_Clefable_),
	SPECIES_SPRITE(VULPIX, gMonBackPic_Vulpix_),
	SPECIES_SPRITE(NINETALES, gMonBackPic_Ninetales_),
	SPECIES_SPRITE(JIGGLYPUFF, gMonBackPic_Jigglypuff_),
	SPECIES_SPRITE(WIGGLYTUFF, gMonBackPic_Wigglytuff_),
	SPECIES_SPRITE(ZUBAT, gMonBackPic_Zubat_),
	SPECIES_SPRITE(GOLBAT, gMonBackPic_Golbat_),
	SPECIES_SPRITE(ODDISH, gMonBackPic_Oddish_),
	SPECIES_SPRITE(GLOOM, gMonBackPic_Gloom_),
	SPECIES_SPRITE(VILEPLUME, gMonBackPic_Vileplume_),
	SPECIES_SPRITE(PARAS, gMonBackPic_Paras_),
	SPECIES_SPRITE(PARASECT, gMonBackPic_Parasect_),
	SPECIES_SPRITE(VENONAT, gMonBackPic_Venonat_),
	SPECIES_SPRITE(VENOMOTH, gMonBackPic_Venomoth_),
	SPECIES_SPRITE(DIGLETT, gMonBackPic_Diglett_),
	SPECIES_SPRITE(DUGTRIO, gMonBackPic_Dugtrio_),
	SPECIES_SPRITE(MEOWTH, gMonBackPic_Meowth_),
	SPECIES_SPRITE(PERSIAN, gMonBackPic_Persian_),
	SPECIES_SPRITE(PSYDUCK, gMonBackPic_Psyduck_),
	SPECIES_SPRITE(GOLDUCK, gMonBackPic_Golduck_),
	SPECIES_SPRITE(MANKEY, gMonBackPic_Mankey_),
	SPECIES_SPRITE(PRIMEAPE, gMonBackPic_Primeape_),
	SPECIES_SPRITE(GROWLITHE, gMonBackPic_Growlithe_),
	SPECIES_SPRITE(ARCANINE, gMonBackPic_Arcanine_),
	SPECIES_SPRITE(POLIWAG, gMonBackPic_Poliwag_),
	SPECIES_SPRITE(POLIWHIRL, gMonBackPic_Poliwhirl_),
	SPECIES_SPRITE(POLIWRATH, gMonBackPic_Poliwrath_),
	SPECIES_SPRITE(ABRA, gMonBackPic_Abra_),
	SPECIES_SPRITE(KADABRA, gMonBackPic_Kadabra_),
	SPECIES_SPRITE(ALAKAZAM, gMonBackPic_Alakazam_),
	SPECIES_SPRITE(MACHOP, gMonBackPic_Machop_),
	SPECIES_SPRITE(MACHOKE, gMonBackPic_Machoke_),
	SPECIES_SPRITE(MACHAMP, gMonBackPic_Machamp_),
	SPECIES_SPRITE(BELLSPROUT, gMonBackPic_Bellsprout_),
	SPECIES_SPRITE(WEEPINBELL, gMonBackPic_Weepinbell_),
	SPECIES_SPRITE(VICTREEBEL, gMonBackPic_Victreebel_),
	SPECIES_SPRITE(TENTACOOL, gMonBackPic_Tentacool_),
	SPECIES_SPRITE(TENTACRUEL, gMonBackPic_Tentacruel_),
	SPECIES_SPRITE(GEODUDE, gMonBackPic_Geodude_),
	SPECIES_SPRITE(GRAVELER, gMonBackPic_Graveler_),
	SPECIES_SPRITE(GOLEM, gMonBackPic_Golem_),
	SPECIES_SPRITE(PONYTA, gMonBackPic_Ponyta_),
	SPECIES_SPRITE(RAPIDASH, gMonBackPic_Rapidash_),
	SPECIES_SPRITE(SLOWPOKE, gMonBackPic_Slowpoke_),
	SPECIES_SPRITE(SLOWBRO, gMonBackPic_Slowbro_),
	SPECIES_SPRITE(MAGNEMITE, gMonBackPic_Magnemite_),
	SPECIES_SPRITE(MAGNETON, gMonBackPic_Magneton_),
	SPECIES_SPRITE(FARFETCHD, gMonBackPic_Farfetchd_),
	SPECIES_SPRITE(DODUO, gMonBackPic_Doduo_),
	SPECIES_SPRITE(DODRIO, gMonBackPic_Dodrio_),
	SPECIES_SPRITE(SEEL, gMonBackPic_Seel_),
	SPECIES_SPRITE(DEWGONG, gMonBackPic_Dewgong_),
	SPECIES_SPRITE(GRIMER, gMonBackPic_Grimer_),
	SPECIES_SPRITE(MUK, gMonBackPic_Muk_),
	SPECIES_SPRITE(SHELLDER, gMonBackPic_Shellder_),
	SPECIES_SPRITE(CLOYSTER, gMonBackPic_Cloyster_),
	SPECIES_SPRITE(GASTLY, gMonBackPic_Gastly_),
	SPECIES_SPRITE(HAUNTER, gMonBackPic_Haunter_),
	SPECIES_SPRITE(GENGAR, gMonBackPic_Gengar_),
	SPECIES_SPRITE(ONIX, gMonBackPic_Onix_),
	SPECIES_SPRITE(DROWZEE, gMonBackPic_Drowzee_),
	SPECIES_SPRITE(HYPNO, gMonBackPic_Hypno_),
	SPECIES_SPRITE(KRABBY, gMonBackPic_Krabby_),
	SPECIES_SPRITE(KINGLER, gMonBackPic_Kingler_),
	SPECIES_SPRITE(VOLTORB, gMonBackPic_Voltorb_),
	SPECIES_SPRITE(ELECTRODE, gMonBackPic_Electrode_),
	SPECIES_SPRITE(EXEGGCUTE, gMonBackPic_Exeggcute_),
	SPECIES_SPRITE(EXEGGUTOR, gMonBackPic_Exeggutor_),
	SPECIES_SPRITE(CUBONE, gMonBackPic_Cubone_),
	SPECIES_SPRITE(MAROWAK, gMonBackPic_Marowak_),
	SPECIES_SPRITE(HITMONLEE, gMonBackPic_Hitmonlee_),
	SPECIES_SPRITE(HITMONCHAN, gMonBackPic_Hitmonchan_),
	SPECIES_SPRITE(LICKITUNG, gMonBackPic_Lickitung_),
	SPECIES_SPRITE(KOFFING, gMonBackPic_Koffing_),
	SPECIES_SPRITE(WEEZING, gMonBackPic_Weezing_),
	SPECIES_SPRITE(RHYHORN, gMonBackPic_Rhyhorn_),
	SPECIES_SPRITE(RHYDON, gMonBackPic_Rhydon_),
	SPECIES_SPRITE(CHANSEY, gMonBackPic_Chansey_),
	SPECIES_SPRITE(TANGELA, gMonBackPic_Tangela_),
	SPECIES_SPRITE(KANGASKHAN, gMonBackPic_Kangaskhan_),
	SPECIES_SPRITE(HORSEA, gMonBackPic_Horsea_),
	SPECIES_SPRITE(SEADRA, gMonBackPic_Seadra_),
	SPECIES_SPRITE(GOLDEEN, gMonBackPic_Goldeen_),
	SPECIES_SPRITE(SEAKING, gMonBackPic_Seaking_),
	SPECIES_SPRITE(STARYU, gMonBackPic_Staryu_),
	SPECIES_SPRITE(STARMIE, gMonBackPic_Starmie_),
	SPECIES_SPRITE(MRMIME, gMonBackPic_MrMime_),
	SPECIES_SPRITE(SCYTHER, gMonBackPic_Scyther_),
	SPECIES_SPRITE(JYNX, gMonBackPic_Jynx_),
	SPECIES_SPRITE(ELECTABUZZ, gMonBackPic_Electabuzz_),
	SPECIES_SPRITE(MAGMAR, gMonBackPic_Magmar_),
	SPECIES_SPRITE(PINSIR, gMonBackPic_Pinsir_),
	SPECIES_SPRITE(TAUROS, gMonBackPic_Tauros_),
	SPECIES_SPRITE(MAGIKARP, gMonBackPic_Magikarp_),
	SPECIES_SPRITE(GYARADOS, gMonBackPic_Gyarados_),
	SPECIES_SPRITE(LAPRAS, gMonBackPic_Lapras_),
	SPECIES_SPRITE(DITTO, gMonBackPic_Ditto_),
	SPECIES_SPRITE(EEVEE, gMonBackPic_Eevee_),
	SPECIES_SPRITE(VAPOREON, gMonBackPic_Vaporeon_),
	SPECIES_SPRITE(JOLTEON, gMonBackPic_Jolteon_),
	SPECIES_SPRITE(FLAREON, gMonBackPic_Flareon_),
	SPECIES_SPRITE(PORYGON, gMonBackPic_Porygon_),
	SPECIES_SPRITE(OMANYTE, gMonBackPic_Omanyte_),
	SPECIES_SPRITE(OMASTAR, gMonBackPic_Omastar_),
	SPECIES_SPRITE(KABUTO, gMonBackPic_Kabuto_),
	SPECIES_SPRITE(KABUTOPS, gMonBackPic_Kabutops_),
	SPECIES_SPRITE(AERODACTYL, gMonBackPic_Aerodactyl_),
	SPECIES_SPRITE(SNORLAX, gMonBackPic_Snorlax_),
	SPECIES_SPRITE(ARTICUNO, gMonBackPic_Articuno_),
	SPECIES_SPRITE(ZAPDOS, gMonBackPic_Zapdos_),
	SPECIES_SPRITE(MOLTRES, gMonBackPic_Moltres_),
	SPECIES_SPRITE(DRATINI, gMonBackPic_Dratini_),
	SPECIES_SPRITE(DRAGONAIR, gMonBackPic_Dragonair_),
	SPECIES_SPRITE(DRAGONITE, gMonBackPic_Dragonite_),
	SPECIES_SPRITE(MEWTWO, gMonBackPic_Mewtwo_),
	SPECIES_SPRITE(MEW, gMonBackPic_Mew_),
	SPECIES_SPRITE(CHIKORITA, gMonBackPic_Chikorita_),
	SPECIES_SPRITE(BAYLEEF, gMonBackPic_Bayleef_),
	SPECIES_SPRITE(MEGANIUM, gMonBackPic_Meganium_),
	SPECIES_SPRITE(CYNDAQUIL, gMonBackPic_Cyndaquil_),
	SPECIES_SPRITE(QUILAVA, gMonBackPic_Quilava_),
	SPECIES_SPRITE(TYPHLOSION, gMonBackPic_Typhlosion_),
	SPECIES_SPRITE(TOTODILE, gMonBackPic_Totodile_),
	SPECIES_SPRITE(CROCONAW, gMonBackPic_Croconaw_),
	SPECIES_SPRITE(FERALIGATR, gMonBackPic_Feraligatr_),
	SPECIES_SPRITE(SENTRET, gMonBackPic_Sentret_),
	SPECIES_SPRITE(FURRET, gMonBackPic_Furret_),
	SPECIES_SPRITE(HOOTHOOT, gMonBackPic_Hoothoot_),
	SPECIES_SPRITE(NOCTOWL, gMonBackPic_Noctowl_),
	SPECIES_SPRITE(LEDYBA, gMonBackPic_Ledyba_),
	SPECIES_SPRITE(LEDIAN, gMonBackPic_Ledian_),
	SPECIES_SPRITE(SPINARAK, gMonBackPic_Spinarak_),
	SPECIES_SPRITE(ARIADOS, gMonBackPic_Ariados_),
	SPECIES_SPRITE(CROBAT, gMonBackPic_Crobat_),
	SPECIES_SPRITE(CHINCHOU, gMonBackPic_Chinchou_),
	SPECIES_SPRITE(LANTURN, gMonBackPic_Lanturn_),
	SPECIES_SPRITE(PICHU, gMonBackPic_Pichu_),
	SPECIES_SPRITE(CLEFFA, gMonBackPic_Cleffa_),
	SPECIES_SPRITE(IGGLYBUFF, gMonBackPic_Igglybuff_),
	SPECIES_SPRITE(TOGEPI, gMonBackPic_Togepi_),
	SPECIES_SPRITE(TOGETIC, gMonBackPic_Togetic_),
	SPECIES_SPRITE(NATU, gMonBackPic_Natu_),
	SPECIES_SPRITE(XATU, gMonBackPic_Xatu_),
	SPECIES_SPRITE(MAREEP, gMonBackPic_Mareep_),
	SPECIES_SPRITE(FLAAFFY, gMonBackPic_Flaaffy_),
	SPECIES_SPRITE(AMPHAROS, gMonBackPic_Ampharos_),
	SPECIES_SPRITE(BELLOSSOM, gMonBackPic_Bellossom_),
	SPECIES_SPRITE(MARILL, gMonBackPic_Marill_),
	SPECIES_SPRITE(AZUMARILL, gMonBackPic_Azumarill_),
	SPECIES_SPRITE(SUDOWOODO, gMonBackPic_Sudowoodo_),
	SPECIES_SPRITE(POLITOED, gMonBackPic_Politoed_),
	SPECIES_SPRITE(HOPPIP, gMonBackPic_Hoppip_),
	SPECIES_SPRITE(SKIPLOOM, gMonBackPic_Skiploom_),
	SPECIES_SPRITE(JUMPLUFF, gMonBackPic_Jumpluff_),
	SPECIES_SPRITE(AIPOM, gMonBackPic_Aipom_),
	SPECIES_SPRITE(SUNKERN, gMonBackPic_Sunkern_),
	SPECIES_SPRITE(SUNFLORA, gMonBackPic_Sunflora_),
	SPECIES_SPRITE(YANMA, gMonBackPic_Yanma_),
	SPECIES_SPRITE(WOOPER, gMonBackPic_Wooper_),
	SPECIES_SPRITE(QUAGSIRE, gMonBackPic_Quagsire_),
	SPECIES_SPRITE(ESPEON, gMonBackPic_Espeon_),
	SPECIES_SPRITE(UMBREON, gMonBackPic_Umbreon_),
	SPECIES_SPRITE(MURKROW, gMonBackPic_Murkrow_),
	SPECIES_SPRITE(SLOWKING, gMonBackPic_Slowking_),
	SPECIES_SPRITE(MISDREAVUS, gMonBackPic_Misdreavus_),
	SPECIES_SPRITE(UNOWN, gMonBackPic_Unown_),
	SPECIES_SPRITE(WOBBUFFET, gMonBackPic_Wobbuffet_),
	SPECIES_SPRITE(GIRAFARIG, gMonBackPic_Girafarig_),
	SPECIES_SPRITE(PINECO, gMonBackPic_Pineco_),
	SPECIES_SPRITE(FORRETRESS, gMonBackPic_Forretress_),
	SPECIES_SPRITE(DUNSPARCE, gMonBackPic_Dunsparce_),
	SPECIES_SPRITE(GLIGAR, gMonBackPic_Gligar_),
	SPECIES_SPRITE(STEELIX, gMonBackPic_Steelix_),
	SPECIES_SPRITE(SNUBBULL, gMonBackPic_Snubbull_),
	SPECIES_SPRITE(GRANBULL, gMonBackPic_Granbull_),
	SPECIES_SPRITE(QWILFISH, gMonBackPic_Qwilfish_),
	SPECIES_SPRITE(SCIZOR, gMonBackPic_Scizor_),
	SPECIES_SPRITE(SHUCKLE, gMonBackPic_Shuckle_),
	SPECIES_SPRITE(HERACROSS, gMonBackPic_Heracross_),
	SPECIES_SPRITE(SNEASEL, gMonBackPic_Sneasel_),
	SPECIES_SPRITE(TEDDIURSA, gMonBackPic_Teddiursa_),
	SPECIES_SPRITE(URSARING, gMonBackPic_Ursaring_),
	SPECIES_SPRITE(SLUGMA, gMonBackPic_Slugma_),
	SPECIES_SPRITE(MAGCARGO, gMonBackPic_Magcargo_),
	SPECIES_SPRITE(SWINUB, gMonBackPic_Swinub_),
	SPECIES_SPRITE(PILOSWINE, gMonBackPic_Piloswine_),
	SPECIES_SPRITE(CORSOLA, gMonBackPic_Corsola_),
	SPECIES_SPRITE(REMORAID, gMonBackPic_Remoraid_),
	SPECIES_SPRITE(OCTILLERY, gMonBackPic_Octillery_),
	SPECIES_SPRITE(DELIBIRD, gMonBackPic_Delibird_),
	SPECIES_SPRITE(MANTINE, gMonBackPic_Mantine_),
	SPECIES_SPRITE(SKARMORY, gMonBackPic_Skarmory_),
	SPECIES_SPRITE(HOUNDOUR, gMonBackPic_Houndour_),
	SPECIES_SPRITE(HOUNDOOM, gMonBackPic_Houndoom_),
	SPECIES_SPRITE(KINGDRA, gMonBackPic_Kingdra_),
	SPECIES_SPRITE(PHANPY, gMonBackPic_Phanpy_),
	SPECIES_SPRITE(DONPHAN, gMonBackPic_Donphan_),
	SPECIES_SPRITE(PORYGON2, gMonBackPic_Porygon2_),
	SPECIES_SPRITE(STANTLER, gMonBackPic_Stantler_),
	SPECIES_SPRITE(SMEARGLE, gMonBackPic_Smeargle_),
	SPECIES_SPRITE(TYROGUE, gMonBackPic_Tyrogue_),
	SPECIES_SPRITE(HITMONTOP, gMonBackPic_Hitmontop_),
	SPECIES_SPRITE(SMOOCHUM, gMonBackPic_Smoochum_),
	SPECIES_SPRITE(ELEKID, gMonBackPic_Elekid_),
	SPECIES_SPRITE(MAGBY, gMonBackPic_Magby_),
	SPECIES_SPRITE(MILTANK, gMonBackPic_Miltank_),
	SPECIES_SPRITE(BLISSEY, gMonBackPic_Blissey_),
	SPECIES_SPRITE(RAIKOU, gMonBackPic_Raikou_),
	SPECIES_SPRITE(ENTEI, gMonBackPic_Entei_),
	SPECIES_SPRITE(SUICUNE, gMonBackPic_Suicune_),
	SPECIES_SPRITE(LARVITAR, gMonBackPic_Larvitar_),
	SPECIES_SPRITE(PUPITAR, gMonBackPic_Pupitar_),
	SPECIES_SPRITE(TYRANITAR, gMonBackPic_Tyranitar_),
	SPECIES_SPRITE(LUGIA, gMonBackPic_Lugia_),
	SPECIES_SPRITE(HOOH, gMonBackPic_HoOh_),
	SPECIES_SPRITE(CELEBI, gMonBackPic_Celebi_),
	SPECIES_SPRITE(TREECKO, gMonBackPic_Treecko_),
	SPECIES_SPRITE(GROVYLE, gMonBackPic_Grovyle_),
	SPECIES_SPRITE(SCEPTILE, gMonBackPic_Sceptile_),
	SPECIES_SPRITE(TORCHIC, gMonBackPic_Torchic_),
	SPECIES_SPRITE(COMBUSKEN, gMonBackPic_Combusken_),
	SPECIES_SPRITE(BLAZIKEN, gMonBackPic_Blaziken_),
	SPECIES_SPRITE(MUDKIP, gMonBackPic_Mudkip_),
	SPECIES_SPRITE(MARSHTOMP, gMonBackPic_Marshtomp_),
	SPECIES_SPRITE(SWAMPERT, gMonBackPic_Swampert_),
	SPECIES_SPRITE(POOCHYENA, gMonBackPic_Poochyena_),
	SPECIES_SPRITE(MIGHTYENA, gMonBackPic_Mightyena_),
	SPECIES_SPRITE(ZIGZAGOON, gMonBackPic_Zigzagoon_),
	SPECIES_SPRITE(LINOONE, gMonBackPic_Linoone_),
	SPECIES_SPRITE(WURMPLE, gMonBackPic_Wurmple_),
	SPECIES_SPRITE(SILCOON, gMonBackPic_Silcoon_),
	SPECIES_SPRITE(BEAUTIFLY, gMonBackPic_Beautifly_),
	SPECIES_SPRITE(CASCOON, gMonBackPic_Cascoon_),
	SPECIES_SPRITE(DUSTOX, gMonBackPic_Dustox_),
	SPECIES_SPRITE(LOTAD, gMonBackPic_Lotad_),
	SPECIES_SPRITE(LOMBRE, gMonBackPic_Lombre_),
	SPECIES_SPRITE(LUDICOLO, gMonBackPic_Ludicolo_),
	SPECIES_SPRITE(SEEDOT, gMonBackPic_Seedot_),
	SPECIES_SPRITE(NUZLEAF, gMonBackPic_Nuzleaf_),
	SPECIES_SPRITE(SHIFTRY, gMonBackPic_Shiftry_),
	SPECIES_SPRITE(TAILLOW, gMonBackPic_Taillow_),
	SPECIES_SPRITE(SWELLOW, gMonBackPic_Swellow_),
	SPECIES_SPRITE(WINGULL, gMonBackPic_Wingull_),
	SPECIES_SPRITE(PELIPPER, gMonBackPic_Pelipper_),
	SPECIES_SPRITE(RALTS, gMonBackPic_Ralts_),
	SPECIES_SPRITE(KIRLIA, gMonBackPic_Kirlia_),
	SPECIES_SPRITE(GARDEVOIR, gMonBackPic_Gardevoir_),
	SPECIES_SPRITE(SURSKIT, gMonBackPic_Surskit_),
	SPECIES_SPRITE(MASQUERAIN, gMonBackPic_Masquerain_),
	SPECIES_SPRITE(SHROOMISH, gMonBackPic_Shroomish_),
	SPECIES_SPRITE(BRELOOM, gMonBackPic_Breloom_),
	SPECIES_SPRITE(SLAKOTH, gMonBackPic_Slakoth_),
	SPECIES_SPRITE(VIGOROTH, gMonBackPic_Vigoroth_),
	SPECIES_SPRITE(SLAKING, gMonBackPic_Slaking_),
	SPECIES_SPRITE(NINCADA, gMonBackPic_Nincada_),
	SPECIES_SPRITE(NINJASK, gMonBackPic_Ninjask_),
	SPECIES_SPRITE(SHEDINJA, gMonBackPic_Shedinja_),
	SPECIES_SPRITE(WHISMUR, gMonBackPic_Whismur_),
	SPECIES_SPRITE(LOUDRED, gMonBackPic_Loudred_),
	SPECIES_SPRITE(EXPLOUD, gMonBackPic_Exploud_),
	SPECIES_SPRITE(MAKUHITA, gMonBackPic_Makuhita_),
	SPECIES_SPRITE(HARIYAMA, gMonBackPic_Hariyama_),
	SPECIES_SPRITE(AZURILL, gMonBackPic_Azurill_),
	SPECIES_SPRITE(NOSEPASS, gMonBackPic_Nosepass_),
	SPECIES_SPRITE(SKITTY, gMonBackPic_Skitty_),
	SPECIES_SPRITE(DELCATTY, gMonBackPic_Delcatty_),
	SPECIES_SPRITE(SABLEYE, gMonBackPic_Sableye_),
	SPECIES_SPRITE(MAWILE, gMonBackPic_Mawile_),
	SPECIES_SPRITE(ARON, gMonBackPic_Aron_),
	SPECIES_SPRITE(LAIRON, gMonBackPic_Lairon_),
	SPECIES_SPRITE(AGGRON, gMonBackPic_Aggron_),
	SPECIES_SPRITE(MEDITITE, gMonBackPic_Meditite_),
	SPECIES_SPRITE(MEDICHAM, gMonBackPic_Medicham_),
	SPECIES_SPRITE(ELECTRIKE, gMonBackPic_Electrike_),
	SPECIES_SPRITE(MANECTRIC, gMonBackPic_Manectric_),
	SPECIES_SPRITE(PLUSLE, gMonBackPic_Plusle_),
	SPECIES_SPRITE(MINUN, gMonBackPic_Minun_),
	SPECIES_SPRITE(VOLBEAT, gMonBackPic_Volbeat_),
	SPECIES_SPRITE(ILLUMISE, gMonBackPic_Illumise_),
	SPECIES_SPRITE(ROSELIA, gMonBackPic_Roselia_),
	SPECIES_SPRITE(GULPIN, gMonBackPic_Gulpin_),
	SPECIES_SPRITE(SWALOT, gMonBackPic_Swalot_),
	SPECIES_SPRITE(CARVANHA, gMonBackPic_Carvanha_),
	SPECIES_SPRITE(SHARPEDO, gMonBackPic_Sharpedo_),
	SPECIES_SPRITE(WAILMER, gMonBackPic_Wailmer_),
	SPECIES_SPRITE(WAILORD, gMonBackPic_Wailord_),
	SPECIES_SPRITE(NUMEL, gMonBackPic_Numel_),
	SPECIES_SPRITE(CAMERUPT, gMonBackPic_Camerupt_),
	SPECIES_SPRITE(TORKOAL, gMonBackPic_Torkoal_),
	SPECIES_SPRITE(SPOINK, gMonBackPic_Spoink_),
	SPECIES_SPRITE(GRUMPIG, gMonBackPic_Grumpig_),
	SPECIES_SPRITE(SPINDA, gMonBackPic_Spinda_),
	SPECIES_SPRITE(TRAPINCH, gMonBackPic_Trapinch_),
	SPECIES_SPRITE(VIBRAVA, gMonBackPic_Vibrava_),
	SPECIES_SPRITE(FLYGON, gMonBackPic_Flygon_),
	SPECIES_SPRITE(CACNEA, gMonBackPic_Cacnea_),
	SPECIES_SPRITE(CACTURNE, gMonBackPic_Cacturne_),
	SPECIES_SPRITE(SWABLU, gMonBackPic_Swablu_),
	SPECIES_SPRITE(ALTARIA, gMonBackPic_Altaria_),
	SPECIES_SPRITE(ZANGOOSE, gMonBackPic_Zangoose_),
	SPECIES_SPRITE(SEVIPER, gMonBackPic_Seviper_),
	SPECIES_SPRITE(LUNATONE, gMonBackPic_Lunatone_),
	SPECIES_SPRITE(SOLROCK, gMonBackPic_Solrock_),
	SPECIES_SPRITE(BARBOACH, gMonBackPic_Barboach_),
	SPECIES_SPRITE(WHISCASH, gMonBackPic_Whiscash_),
	SPECIES_SPRITE(CORPHISH, gMonBackPic_Corphish_),
	SPECIES_SPRITE(CRAWDAUNT, gMonBackPic_Crawdaunt_),
	SPECIES_SPRITE(BALTOY, gMonBackPic_Baltoy_),
	SPECIES_SPRITE(CLAYDOL, gMonBackPic_Claydol_),
	SPECIES_SPRITE(LILEEP, gMonBackPic_Lileep_),
	SPECIES_SPRITE(CRADILY, gMonBackPic_Cradily_),
	SPECIES_SPRITE(ANORITH, gMonBackPic_Anorith_),
	SPECIES_SPRITE(ARMALDO, gMonBackPic_Armaldo_),
	SPECIES_SPRITE(FEEBAS, gMonBackPic_Feebas_),
	SPECIES_SPRITE(MILOTIC, gMonBackPic_Milotic_),
	SPECIES_SPRITE(CASTFORM, gMonBackPic_Castform_),
	SPECIES_SPRITE(KECLEON, gMonBackPic_Kecleon_),
	SPECIES_SPRITE(SHUPPET, gMonBackPic_Shuppet_),
	SPECIES_SPRITE(BANETTE, gMonBackPic_Banette_),
	SPECIES_SPRITE(DUSKULL, gMonBackPic_Duskull_),
	SPECIES_SPRITE(DUSCLOPS, gMonBackPic_Dusclops_),
	SPECIES_SPRITE(TROPIUS, gMonBackPic_Tropius_),
	SPECIES_SPRITE(CHIMECHO, gMonBackPic_Chimecho_),
	SPECIES_SPRITE(ABSOL, gMonBackPic_Absol_),
	SPECIES_SPRITE(WYNAUT, gMonBackPic_Wynaut_),
	SPECIES_SPRITE(SNORUNT, gMonBackPic_Snorunt_),
	SPECIES_SPRITE(GLALIE, gMonBackPic_Glalie_),
	SPECIES_SPRITE(SPHEAL, gMonBackPic_Spheal_),
	SPECIES_SPRITE(SEALEO, gMonBackPic_Sealeo_),
	SPECIES_SPRITE(WALREIN, gMonBackPic_Walrein_),
	SPECIES_SPRITE(CLAMPERL, gMonBackPic_Clamperl_),
	SPECIES_SPRITE(HUNTAIL, gMonBackPic_Huntail_),
	SPECIES_SPRITE(GOREBYSS, gMonBackPic_Gorebyss_),
	SPECIES_SPRITE(RELICANTH, gMonBackPic_Relicanth_),
	SPECIES_SPRITE(LUVDISC, gMonBackPic_Luvdisc_),
	SPECIES_SPRITE(BAGON, gMonBackPic_Bagon_),
	SPECIES_SPRITE(SHELGON, gMonBackPic_Shelgon_),
	SPECIES_SPRITE(SALAMENCE, gMonBackPic_Salamence_),
	SPECIES_SPRITE(BELDUM, gMonBackPic_Beldum_),
	SPECIES_SPRITE(METANG, gMonBackPic_Metang_),
	SPECIES_SPRITE(METAGROSS, gMonBackPic_Metagross_),
	SPECIES_SPRITE(REGIROCK, gMonBackPic_Regirock_),
	SPECIES_SPRITE(REGICE, gMonBackPic_Regice_),
	SPECIES_SPRITE(REGISTEEL, gMonBackPic_Registeel_),
	SPECIES_SPRITE(LATIAS, gMonBackPic_Latias_),
	SPECIES_SPRITE(LATIOS, gMonBackPic_Latios_),
	SPECIES_SPRITE(KYOGRE, gMonBackPic_Kyogre_),
	SPECIES_SPRITE(GROUDON, gMonBackPic_Groudon_),
	SPECIES_SPRITE(RAYQUAZA, gMonBackPic_Rayquaza_),
	SPECIES_SPRITE(JIRACHI, gMonBackPic_Jirachi_),
	SPECIES_SPRITE(DEOXYS, gMonBackPic_Deoxys_),
	SPECIES_SPRITE(TURTWIG, gMonBackPic_Turtwig_),
	SPECIES_SPRITE(GROTLE, gMonBackPic_Grotle_),
	SPECIES_SPRITE(TORTERRA, gMonBackPic_Torterra_),
	SPECIES_SPRITE(CHIMCHAR, gMonBackPic_Chimchar_),
	SPECIES_SPRITE(MONFERNO, gMonBackPic_Monferno_),
	SPECIES_SPRITE(INFERNAPE, gMonBackPic_Infernape_),
	SPECIES_SPRITE(PIPLUP, gMonBackPic_Piplup_),
	SPECIES_SPRITE(PRINPLUP, gMonBackPic_Prinplup_),
	SPECIES_SPRITE(EMPOLEON, gMonBackPic_Empoleon_),
	SPECIES_SPRITE(STARLY, gMonBackPic_Starly_),
	SPECIES_SPRITE(STARAVIA, gMonBackPic_Staravia_),
	SPECIES_SPRITE(STARAPTOR, gMonBackPic_Staraptor_),
	SPECIES_SPRITE(BIDOOF, gMonBackPic_Bidoof_),
	SPECIES_SPRITE(BIBAREL, gMonBackPic_Bibarel_),
	SPECIES_SPRITE(KRICKETOT, gMonBackPic_Kricketot_),
	SPECIES_SPRITE(KRICKETUNE, gMonBackPic_Kricketune_),
	SPECIES_SPRITE(SHINX, gMonBackPic_Shinx_),
	SPECIES_SPRITE(LUXIO, gMonBackPic_Luxio_),
	SPECIES_SPRITE(LUXRAY, gMonBackPic_Luxray_),
	SPECIES_SPRITE(BUDEW, gMonBackPic_Budew_),
	SPECIES_SPRITE(ROSERADE, gMonBackPic_Roserade_),
	SPECIES_SPRITE(CRANIDOS, gMonBackPic_Cranidos_),
	SPECIES_SPRITE(RAMPARDOS, gMonBackPic_Rampardos_),
	SPECIES_SPRITE(SHIELDON, gMonBackPic_Shieldon_),
	SPECIES_SPRITE(BASTIODON, gMonBackPic_Bastiodon_),
	SPECIES_SPRITE(BURMY, gMonBackPic_Burmy_),
	SPECIES_SPRITE(WORMADAM, gMonBackPic_Wormadam_),
	SPECIES_SPRITE(MOTHIM, gMonBackPic_Mothim_),
	SPECIES_SPRITE(COMBEE, gMonBackPic_Combee_),
	SPECIES_SPRITE(VESPIQUEN, gMonBackPic_Vespiquen_),
	SPECIES_SPRITE(PACHIRISU, gMonBackPic_Pachirisu_),
	SPECIES_SPRITE(BUIZEL, gMonBackPic_Buizel_),
	SPECIES_SPRITE(FLOATZEL, gMonBackPic_Floatzel_),
	SPECIES_SPRITE(CHERUBI, gMonBackPic_Cherubi_),
	SPECIES_SPRITE(CHERRIM, gMonBackPic_Cherrim_),
	SPECIES_SPRITE(SHELLOS, gMonBackPic_Shellos_),
	SPECIES_SPRITE(GASTRODON, gMonBackPic_Gastrodon_),
	SPECIES_SPRITE(AMBIPOM, gMonBackPic_Ambipom_),
	SPECIES_SPRITE(DRIFLOON, gMonBackPic_Drifloon_),
	SPECIES_SPRITE(DRIFBLIM, gMonBackPic_Drifblim_),
	SPECIES_SPRITE(BUNEARY, gMonBackPic_Buneary_),
	SPECIES_SPRITE(LOPUNNY, gMonBackPic_Lopunny_),
	SPECIES_SPRITE(MISMAGIUS, gMonBackPic_Mismagius_),
	SPECIES_SPRITE(HONCHKROW, gMonBackPic_Honchkrow_),
	SPECIES_SPRITE(GLAMEOW, gMonBackPic_Glameow_),
	SPECIES_SPRITE(PURUGLY, gMonBackPic_Purugly_),
	SPECIES_SPRITE(CHINGLING, gMonBackPic_Chingling_),
	SPECIES_SPRITE(STUNKY, gMonBackPic_Stunky_),
	SPECIES_SPRITE(SKUNTANK, gMonBackPic_Skuntank_),
	SPECIES_SPRITE(BRONZOR, gMonBackPic_Bronzor_),
	SPECIES_SPRITE(BRONZONG, gMonBackPic_Bronzong_),
	SPECIES_SPRITE(BONSLY, gMonBackPic_Bonsly_),
	SPECIES_SPRITE(MIMEJR, gMonBackPic_MimeJr_),
	SPECIES_SPRITE(HAPPINY, gMonBackPic_Happiny_),
	SPECIES_SPRITE(CHATOT, gMonBackPic_Chatot_),
	SPECIES_SPRITE(SPIRITOMB, gMonBackPic_Spiritomb_),
	SPECIES_SPRITE(GIBLE, gMonBackPic_Gible_),
	SPECIES_SPRITE(GABITE, gMonBackPic_Gabite_),
	SPECIES_SPRITE(GARCHOMP, gMonBackPic_Garchomp_),
	SPECIES_SPRITE(MUNCHLAX, gMonBackPic_Munchlax_),
	SPECIES_SPRITE(RIOLU, gMonBackPic_Riolu_),
	SPECIES_SPRITE(LUCARIO, gMonBackPic_Lucario_),
	SPECIES_SPRITE(HIPPOPOTAS, gMonBackPic_Hippopotas_),
	SPECIES_SPRITE(HIPPOWDON, gMonBackPic_Hippowdon_),
	SPECIES_SPRITE(SKORUPI, gMonBackPic_Skorupi_),
	SPECIES_SPRITE(DRAPION, gMonBackPic_Drapion_),
	SPECIES_SPRITE(CROAGUNK, gMonBackPic_Croagunk_),
	SPECIES_SPRITE(TOXICROAK, gMonBackPic_Toxicroak_),
	SPECIES_SPRITE(CARNIVINE, gMonBackPic_Carnivine_),
	SPECIES_SPRITE(FINNEON, gMonBackPic_Finneon_),
	SPECIES_SPRITE(LUMINEON, gMonBackPic_Lumineon_),
	SPECIES_SPRITE(MANTYKE, gMonBackPic_Mantyke_),
	SPECIES_SPRITE(SNOVER, gMonBackPic_Snover_),
	SPECIES_SPRITE(ABOMASNOW, gMonBackPic_Abomasnow_),
	SPECIES_SPRITE(WEAVILE, gMonBackPic_Weavile_),
	SPECIES_SPRITE(MAGNEZONE, gMonBackPic_Magnezone_),
	SPECIES_SPRITE(LICKILICKY, gMonBackPic_Lickilicky_),
	SPECIES_SPRITE(RHYPERIOR, gMonBackPic_Rhyperior_),
	SPECIES_SPRITE(TANGROWTH, gMonBackPic_Tangrowth_),
	SPECIES_SPRITE(ELECTIVIRE, gMonBackPic_Electivire_),
	SPECIES_SPRITE(MAGMORTAR, gMonBackPic_Magmortar_),
	SPECIES_SPRITE(TOGEKISS, gMonBackPic_Togekiss_),
	SPECIES_SPRITE(YANMEGA, gMonBackPic_Yanmega_),
	SPECIES_SPRITE(LEAFEON, gMonBackPic_Leafeon_),
	SPECIES_SPRITE(GLACEON, gMonBackPic_Glaceon_),
	SPECIES_SPRITE(GLISCOR, gMonBackPic_Gliscor_),
	SPECIES_SPRITE(MAMOSWINE, gMonBackPic_Mamoswine_),
	SPECIES_SPRITE(PORYGONZ, gMonBackPic_PorygonZ_),
	SPECIES_SPRITE(GALLADE, gMonBackPic_Gallade_),
	SPECIES_SPRITE(PROBOPASS, gMonBackPic_Probopass_),
	SPECIES_SPRITE(DUSKNOIR, gMonBackPic_Dusknoir_),
	SPECIES_SPRITE(FROSLASS, gMonBackPic_Froslass_),
	SPECIES_SPRITE(ROTOM, gMonBackPic_Rotom_),
	SPECIES_SPRITE(UXIE, gMonBackPic_Uxie_),
	SPECIES_SPRITE(MESPRIT, gMonBackPic_Mesprit_),
	SPECIES_SPRITE(AZELF, gMonBackPic_Azelf_),
	SPECIES_SPRITE(DIALGA, gMonBackPic_Dialga_),
	SPECIES_SPRITE(PALKIA, gMonBackPic_Palkia_),
	SPECIES_SPRITE(HEATRAN, gMonBackPic_Heatran_),
	SPECIES_SPRITE(REGIGIGAS, gMonBackPic_Regigigas_),
	SPECIES_SPRITE(GIRATINA, gMonBackPic_Giratina_),
	SPECIES_SPRITE(CRESSELIA, gMonBackPic_Cresselia_),
	SPECIES_SPRITE(PHIONE, gMonBackPic_Phione_),
	SPECIES_SPRITE(MANAPHY, gMonBackPic_Manaphy_),
	SPECIES_SPRITE(DARKRAI, gMonBackPic_Darkrai_),
	SPECIES_SPRITE(SHAYMIN, gMonBackPic_Shaymin_),
	SPECIES_SPRITE(ARCEUS, gMonBackPic_Arceus_),
	SPECIES_SPRITE(VICTINI, gMonBackPic_Victini_),
	SPECIES_SPRITE(SNIVY, gMonBackPic_Snivy_),
	SPECIES_SPRITE(SERVINE, gMonBackPic_Servine_),
	SPECIES_SPRITE(SERPERIOR, gMonBackPic_Serperior_),
	SPECIES_SPRITE(TEPIG, gMonBackPic_Tepig_),
	SPECIES_SPRITE(PIGNITE, gMonBackPic_Pignite_),
	SPECIES_SPRITE(EMBOAR, gMonBackPic_Emboar_),
	SPECIES_SPRITE(OSHAWOTT, gMonBackPic_Oshawott_),
	SPECIES_SPRITE(DEWOTT, gMonBackPic_Dewott_),
	SPECIES_SPRITE(SAMUROTT, gMonBackPic_Samurott_),
	SPECIES_SPRITE(PATRAT, gMonBackPic_Patrat_),
	SPECIES_SPRITE(WATCHOG, gMonBackPic_Watchog_),
	SPECIES_SPRITE(LILLIPUP, gMonBackPic_Lillipup_),
	SPECIES_SPRITE(HERDIER, gMonBackPic_Herdier_),
	SPECIES_SPRITE(STOUTLAND, gMonBackPic_Stoutland_),
	SPECIES_SPRITE(PURRLOIN, gMonBackPic_Purrloin_),
	SPECIES_SPRITE(LIEPARD, gMonBackPic_Liepard_),
	SPECIES_SPRITE(PANSAGE, gMonBackPic_Pansage_),
	SPECIES_SPRITE(SIMISAGE, gMonBackPic_Simisage_),
	SPECIES_SPRITE(PANSEAR, gMonBackPic_Pansear_),
	SPECIES_SPRITE(SIMISEAR, gMonBackPic_Simisear_),
	SPECIES_SPRITE(PANPOUR, gMonBackPic_Panpour_),
	SPECIES_SPRITE(SIMIPOUR, gMonBackPic_Simipour_),
	SPECIES_SPRITE(MUNNA, gMonBackPic_Munna_),
	SPECIES_SPRITE(MUSHARNA, gMonBackPic_Musharna_),
	SPECIES_SPRITE(PIDOVE, gMonBackPic_Pidove_),
	SPECIES_SPRITE(TRANQUILL, gMonBackPic_Tranquill_),
	SPECIES_SPRITE(UNFEZANT, gMonBackPic_Unfezant_),
	SPECIES_SPRITE(BLITZLE, gMonBackPic_Blitzle_),
	SPECIES_SPRITE(ZEBSTRIKA, gMonBackPic_Zebstrika_),
	SPECIES_SPRITE(ROGGENROLA, gMonBackPic_Roggenrola_),
	SPECIES_SPRITE(BOLDORE, gMonBackPic_Boldore_),
	SPECIES_SPRITE(GIGALITH, gMonBackPic_Gigalith_),
	SPECIES_SPRITE(WOOBAT, gMonBackPic_Woobat_),
	SPECIES_SPRITE(SWOOBAT, gMonBackPic_Swoobat_),
	SPECIES_SPRITE(DRILBUR, gMonBackPic_Drilbur_),
	SPECIES_SPRITE(EXCADRILL, gMonBackPic_Excadrill_),
	SPECIES_SPRITE(AUDINO, gMonBackPic_Audino_),
	SPECIES_SPRITE(TIMBURR, gMonBackPic_Timburr_),
	SPECIES_SPRITE(GURDURR, gMonBackPic_Gurdurr_),
	SPECIES_SPRITE(CONKELDURR, gMonBackPic_Conkeldurr_),
	SPECIES_SPRITE(TYMPOLE, gMonBackPic_Tympole_),
	SPECIES_SPRITE(PALPITOAD, gMonBackPic_Palpitoad_),
	SPECIES_SPRITE(SEISMITOAD, gMonBackPic_Seismitoad_),
	SPECIES_SPRITE(THROH, gMonBackPic_Throh_),
	SPECIES_SPRITE(SAWK, gMonBackPic_Sawk_),
	SPECIES_SPRITE(SEWADDLE, gMonBackPic_Sewaddle_),
	SPECIES_SPRITE(SWADLOON, gMonBackPic_Swadloon_),
	SPECIES_SPRITE(LEAVANNY, gMonBackPic_Leavanny_),
	SPECIES_SPRITE(VENIPEDE, gMonBackPic_Venipede_),
	SPECIES_SPRITE(WHIRLIPEDE, gMonBackPic_Whirlipede_),
	SPECIES_SPRITE(SCOLIPEDE, gMonBackPic_Scolipede_),
	SPECIES_SPRITE(COTTONEE, gMonBackPic_Cottonee_),
	SPECIES_SPRITE(WHIMSICOTT, gMonBackPic_Whimsicott_),
	SPECIES_SPRITE(PETILIL, gMonBackPic_Petilil_),
	SPECIES_SPRITE(LILLIGANT, gMonBackPic_Lilligant_),
	SPECIES_SPRITE(BASCULIN, gMonBackPic_Basculin_),
	SPECIES_SPRITE(SANDILE, gMonBackPic_Sandile_),
	SPECIES_SPRITE(KROKOROK, gMonBackPic_Krokorok_),
	SPECIES_SPRITE(KROOKODILE, gMonBackPic_Krookodile_),
	SPECIES_SPRITE(DARUMAKA, gMonBackPic_Darumaka_),
	SPECIES_SPRITE(DARMANITAN, gMonBackPic_Darmanitan_),
	SPECIES_SPRITE(MARACTUS, gMonBackPic_Maractus_),
	SPECIES_SPRITE(DWEBBLE, gMonBackPic_Dwebble_),
	SPECIES_SPRITE(CRUSTLE, gMonBackPic_Crustle_),
	SPECIES_SPRITE(SCRAGGY, gMonBackPic_Scraggy_),
	SPECIES_SPRITE(SCRAFTY, gMonBackPic_Scrafty_),
	SPECIES_SPRITE(SIGILYPH, gMonBackPic_Sigilyph_),
	SPECIES_SPRITE(YAMASK, gMonBackPic_Yamask_),
	SPECIES_SPRITE(COFAGRIGUS, gMonBackPic_Cofagrigus_),
	SPECIES_SPRITE(TIRTOUGA, gMonBackPic_Tirtouga_),
	SPECIES_SPRITE(CARRACOSTA, gMonBackPic_Carracosta_),
	SPECIES_SPRITE(ARCHEN, gMonBackPic_Archen_),
	SPECIES_SPRITE(ARCHEOPS, gMonBackPic_Archeops_),
	SPECIES_SPRITE(TRUBBISH, gMonBackPic_Trubbish_),
	SPECIES_SPRITE(GARBODOR, gMonBackPic_Garbodor_),
	SPECIES_SPRITE(ZORUA, gMonBackPic_Zorua_),
	SPECIES_SPRITE(ZOROARK, gMonBackPic_Zoroark_),
	SPECIES_SPRITE(MINCCINO, gMonBackPic_Minccino_),
	SPECIES_SPRITE(CINCCINO, gMonBackPic_Cinccino_),
	SPECIES_SPRITE(GOTHITA, gMonBackPic_Gothita_),
	SPECIES_SPRITE(GOTHORITA, gMonBackPic_Gothorita_),
	SPECIES_SPRITE(GOTHITELLE, gMonBackPic_Gothitelle_),
	SPECIES_SPRITE(SOLOSIS, gMonBackPic_Solosis_),
	SPECIES_SPRITE(DUOSION, gMonBackPic_Duosion_),
	SPECIES_SPRITE(REUNICLUS, gMonBackPic_Reuniclus_),
	SPECIES_SPRITE(DUCKLETT, gMonBackPic_Ducklett_),
	SPECIES_SPRITE(SWANNA, gMonBackPic_Swanna_),
	SPECIES_SPRITE(VANILLITE, gMonBackPic_Vanillite_),
	SPECIES_SPRITE(VANILLISH, gMonBackPic_Vanillish_),
	SPECIES_SPRITE(VANILLUXE, gMonBackPic_Vanilluxe_),
	SPECIES_SPRITE(DEERLING, gMonBackPic_Deerling_),
	SPECIES_SPRITE(SAWSBUCK, gMonBackPic_Sawsbuck_),
	SPECIES_SPRITE(EMOLGA, gMonBackPic_Emolga_),
	SPECIES_SPRITE(KARRABLAST, gMonBackPic_Karrablast_),
	SPECIES_SPRITE(ESCAVALIER, gMonBackPic_Escavalier_),
	SPECIES_SPRITE(FOONGUS, gMonBackPic_Foongus_),
	SPECIES_SPRITE(AMOONGUSS, gMonBackPic_Amoonguss_),
	SPECIES_SPRITE(FRILLISH, gMonBackPic_Frillish_),
	SPECIES_SPRITE(JELLICENT, gMonBackPic_Jellicent_),
	SPECIES_SPRITE(ALOMOMOLA, gMonBackPic_Alomomola_),
	SPECIES_SPRITE(JOLTIK, gMonBackPic_Joltik_),
	SPECIES_SPRITE(GALVANTULA, gMonBackPic_Galvantula_),
	SPECIES_SPRITE(FERROSEED, gMonBackPic_Ferroseed_),
	SPECIES_SPRITE(FERROTHORN, gMonBackPic_Ferrothorn_),
	SPECIES_SPRITE(KLINK, gMonBackPic_Klink_),
	SPECIES_SPRITE(KLANG, gMonBackPic_Klang_),
	SPECIES_SPRITE(KLINKLANG, gMonBackPic_Klinklang_),
	SPECIES_SPRITE(TYNAMO, gMonBackPic_Tynamo_),
	SPECIES_SPRITE(EELEKTRIK, gMonBackPic_Eelektrik_),
	SPECIES_SPRITE(EELEKTROSS, gMonBackPic_Eelektross_),
	SPECIES_SPRITE(ELGYEM, gMonBackPic_Elgyem_),
	SPECIES_SPRITE(BEHEEYEM, gMonBackPic_Beheeyem_),
	SPECIES_SPRITE(LITWICK, gMonBackPic_Litwick_),
	SPECIES_SPRITE(LAMPENT, gMonBackPic_Lampent_),
	SPECIES_SPRITE(CHANDELURE, gMonBackPic_Chandelure_),
	SPECIES_SPRITE(AXEW, gMonBackPic_Axew_),
	SPECIES_SPRITE(FRAXURE, gMonBackPic_Fraxure_),
	SPECIES_SPRITE(HAXORUS, gMonBackPic_Haxorus_),
	SPECIES_SPRITE(CUBCHOO, gMonBackPic_Cubchoo_),
	SPECIES_SPRITE(BEARTIC, gMonBackPic_Beartic_),
	SPECIES_SPRITE(CRYOGONAL, gMonBackPic_Cryogonal_),
	SPECIES_SPRITE(SHELMET, gMonBackPic_Shelmet_),
	SPECIES_SPRITE(ACCELGOR, gMonBackPic_Accelgor_),
	SPECIES_SPRITE(STUNFISK, gMonBackPic_Stunfisk_),
	SPECIES_SPRITE(MIENFOO, gMonBackPic_Mienfoo_),
	SPECIES_SPRITE(MIENSHAO, gMonBackPic_Mienshao_),
	SPECIES_SPRITE(DRUDDIGON, gMonBackPic_Druddigon_),
	SPECIES_SPRITE(GOLETT, gMonBackPic_Golett_),
	SPECIES_SPRITE(GOLURK, gMonBackPic_Golurk_),
	SPECIES_SPRITE(PAWNIARD, gMonBackPic_Pawniard_),
	SPECIES_SPRITE(BISHARP, gMonBackPic_Bisharp_),
	SPECIES_SPRITE(BOUFFALANT, gMonBackPic_Bouffalant_),
	SPECIES_SPRITE(RUFFLET, gMonBackPic_Rufflet_),
	SPECIES_SPRITE(BRAVIARY, gMonBackPic_Braviary_),
	SPECIES_SPRITE(VULLABY, gMonBackPic_Vullaby_),
	SPECIES_SPRITE(MANDIBUZZ, gMonBackPic_Mandibuzz_),
	SPECIES_SPRITE(HEATMOR, gMonBackPic_Heatmor_),
	SPECIES_SPRITE(DURANT, gMonBackPic_Durant_),
	SPECIES_SPRITE(DEINO, gMonBackPic_Deino_),
	SPECIES_SPRITE(ZWEILOUS, gMonBackPic_Zweilous_),
	SPECIES_SPRITE(HYDREIGON, gMonBackPic_Hydreigon_),
	SPECIES_SPRITE(LARVESTA, gMonBackPic_Larvesta_),
	SPECIES_SPRITE(VOLCARONA, gMonBackPic_Volcarona_),
	SPECIES_SPRITE(COBALION, gMonBackPic_Cobalion_),
	SPECIES_SPRITE(TERRAKION, gMonBackPic_Terrakion_),
	SPECIES_SPRITE(VIRIZION, gMonBackPic_Virizion_),
	SPECIES_SPRITE(TORNADUS, gMonBackPic_Tornadus_),
	SPECIES_SPRITE(THUNDURUS, gMonBackPic_Thundurus_),
	SPECIES_SPRITE(RESHIRAM, gMonBackPic_Reshiram_),
	SPECIES_SPRITE(ZEKROM, gMonBackPic_Zekrom_),
	SPECIES_SPRITE(LANDORUS, gMonBackPic_Landorus_),
	SPECIES_SPRITE(KYUREM, gMonBackPic_Kyurem_),
	SPECIES_SPRITE(KELDEO, gMonBackPic_Keldeo_),
	SPECIES_SPRITE(MELOETTA, gMonBackPic_Meloetta_),
	SPECIES_SPRITE(GENESECT, gMonBackPic_Genesect_),
	SPECIES_SPRITE(CHESPIN, gMonBackPic_Chespin_),
	SPECIES_SPRITE(QUILLADIN, gMonBackPic_Quilladin_),
	SPECIES_SPRITE(CHESNAUGHT, gMonBackPic_Chesnaught_),
	SPECIES_SPRITE(FENNEKIN, gMonBackPic_Fennekin_),
	SPECIES_SPRITE(BRAIXEN, gMonBackPic_Braixen_),
	SPECIES_SPRITE(DELPHOX, gMonBackPic_Delphox_),
	SPECIES_SPRITE(FROAKIE, gMonBackPic_Froakie_),
	SPECIES_SPRITE(FROGADIER, gMonBackPic_Frogadier_),
	SPECIES_SPRITE(GRENINJA, gMonBackPic_Greninja_),
	SPECIES_SPRITE(BUNNELBY, gMonBackPic_Bunnelby_),
	SPECIES_SPRITE(DIGGERSBY, gMonBackPic_Diggersby_),
	SPECIES_SPRITE(FLETCHLING, gMonBackPic_Fletchling_),
	SPECIES_SPRITE(FLECHINDER, gMonBackPic_Flechinder_),
	SPECIES_SPRITE(TALONFLAME, gMonBackPic_Talonflame_),
	SPECIES_SPRITE(SCATTERBUG, gMonBackPic_Scatterbug_),
	SPECIES_SPRITE(SPEWPA, gMonBackPic_Spewpa_),
	SPECIES_SPRITE(VIVILLON, gMonBackPic_Vivillon_),
	SPECIES_SPRITE(LITLEO, gMonBackPic_Litleo_),
	SPECIES_SPRITE(PYROAR, gMonBackPic_Pyroar_),
	SPECIES_SPRITE(FLABEBE, gMonBackPic_Flabebe_),
	SPECIES_SPRITE(FLOETTE, gMonBackPic_Floette_),
	SPECIES_SPRITE(FLORGES, gMonBackPic_Florges_),
	SPECIES_SPRITE(SKIDDO, gMonBackPic_Skiddo_),
	SPECIES_SPRITE(GOGOAT, gMonBackPic_Gogoat_),
	SPECIES_SPRITE(PANCHAM, gMonBackPic_Pancham_),
	SPECIES_SPRITE(PANGORO, gMonBackPic_Pangoro_),
	SPECIES_SPRITE(FURFROU, gMonBackPic_Furfrou_),
	SPECIES_SPRITE(ESPURR, gMonBackPic_Espurr_),
	SPECIES_SPRITE(MEOWSTIC, gMonBackPic_Meowstic_),
	SPECIES_SPRITE(HONEDGE, gMonBackPic_Honedge_),
	SPECIES_SPRITE(DOUBLADE, gMonBackPic_Doublade_),
	SPECIES_SPRITE(AEGISLASH, gMonBackPic_Aegislash_),
	SPECIES_SPRITE(SPRITZEE, gMonBackPic_Spritzee_),
	SPECIES_SPRITE(AROMATISSE, gMonBackPic_Aromatisse_),
	SPECIES_SPRITE(SWIRLIX, gMonBackPic_Swirlix_),
	SPECIES_SPRITE(SLURPUFF, gMonBackPic_Slurpuff_),
	SPECIES_SPRITE(INKAY, gMonBackPic_Inkay_),
	SPECIES_SPRITE(MALAMAR, gMonBackPic_Malamar_),
	SPECIES_SPRITE(BINACLE, gMonBackPic_Binacle_),
	SPECIES_SPRITE(BARBARACLE, gMonBackPic_Barbaracle_),
	SPECIES_SPRITE(SKRELP, gMonBackPic_Skrelp_),
	SPECIES_SPRITE(DRAGALGE, gMonBackPic_Dragalge_),
	SPECIES_SPRITE(CLAUNCHER, gMonBackPic_Clauncher_),
	SPECIES_SPRITE(CLAWITZER, gMonBackPic_Clawitzer_),
	SPECIES_SPRITE(HELIOPTILE, gMonBackPic_Helioptile_),
	SPECIES_SPRITE(HELIOLISK, gMonBackPic_Heliolisk_),
	SPECIES_SPRITE(TYRUNT, gMonBackPic_Tyrunt_),
	SPECIES_SPRITE(TYRANTRUM, gMonBackPic_Tyrantrum_),
	SPECIES_SPRITE(AMAURA, gMonBackPic_Amaura_),
	SPECIES_SPRITE(AURORUS, gMonBackPic_Aurorus_),
	SPECIES_SPRITE(SYLVEON, gMonBackPic_Sylveon_),
	SPECIES_SPRITE(HAWLUCHA, gMonBackPic_Hawlucha_),
	SPECIES_SPRITE(DEDENNE, gMonBackPic_Dedenne_),
	SPECIES_SPRITE(CARBINK, gMonBackPic_Carbink_),
	SPECIES_SPRITE(GOOMY, gMonBackPic_Goomy_),
	SPECIES_SPRITE(SLIGGOO, gMonBackPic_Sliggoo_),
	SPECIES_SPRITE(GOODRA, gMonBackPic_Goodra_),
	SPECIES_SPRITE(KLEFKI, gMonBackPic_Klefki_),
	SPECIES_SPRITE(PHANTUMP, gMonBackPic_Phantump_),
	SPECIES_SPRITE(TREVENANT, gMonBackPic_Trevenant_),
	SPECIES_SPRITE(PUMPKABOO, gMonBackPic_Pumpkaboo_),
	SPECIES_SPRITE(GOURGEIST, gMonBackPic_Gourgeist_),
	SPECIES_SPRITE(BERGMITE, gMonBackPic_Bergmite_),
	SPECIES_SPRITE(AVALUGG, gMonBackPic_Avalugg_),
	SPECIES_SPRITE(NOIBAT, gMonBackPic_Noibat_),
	SPECIES_SPRITE(NOIVERN, gMonBackPic_Noivern_),
	SPECIES_SPRITE(XERNEAS, gMonBackPic_Xerneas_),
	SPECIES_SPRITE(YVELTAL, gMonBackPic_Yveltal_),
	SPECIES_SPRITE(ZYGARDE, gMonBackPic_Zygarde_),
	SPECIES_SPRITE(DIANCIE, gMonBackPic_Diancie_),
	SPECIES_SPRITE(HOOPA, gMonBackPic_Hoopa_),
	SPECIES_SPRITE(VOLCANION, gMonBackPic_Volcanion_),
	SPECIES_SPRITE(ROWLET, gMonBackPic_Rowlet_),
	SPECIES_SPRITE(DARTRIX, gMonBackPic_Dartrix_),
	SPECIES_SPRITE(DECIDUEYE, gMonBackPic_Decidueye_),
	SPECIES_SPRITE(LITTEN, gMonBackPic_Litten_),
	SPECIES_SPRITE(TORRACAT, gMonBackPic_Torracat_),
	SPECIES_SPRITE(INCINEROAR, gMonBackPic_Incineroar_),
	SPECIES_SPRITE(POPPLIO, gMonBackPic_Popplio_),
	SPECIES_SPRITE(BRIONNE, gMonBackPic_Brionne_),
	SPECIES_SPRITE(PRIMARINA, gMonBackPic_Primarina_),
	SPECIES_SPRITE(PIKIPEK, gMonBackPic_Pikipek_),
	SPECIES_SPRITE(TRUMBEAK, gMonBackPic_Trumbeak_),
	SPECIES_SPRITE(TOUCANNON, gMonBackPic_Toucannon_),
	SPECIES_SPRITE(YUNGOOS, gMonBackPic_Yungoos_),
	SPECIES_SPRITE(GUMSHOOS, gMonBackPic_Gumshoos_),
	SPECIES_SPRITE(GRUBBIN, gMonBackPic_Grubbin_),
	SPECIES_SPRITE(CHARJABUG, gMonBackPic_Charjabug_),
	SPECIES_SPRITE(VIKAVOLT, gMonBackPic_Vikavolt_),
	SPECIES_SPRITE(CRABRAWLER, gMonBackPic_Crabrawler_),
	SPECIES_SPRITE(CRABMINABL, gMonBackPic_Crabminabl_),
	SPECIES_SPRITE(ORICORIO, gMonBackPic_Oricorio_),
	SPECIES_SPRITE(CUTIEFLY, gMonBackPic_Cutiefly_),
	SPECIES_SPRITE(RIBOMBEE, gMonBackPic_Ribombee_),
	SPECIES_SPRITE(ROCKRUFF, gMonBackPic_Rockruff_),
	SPECIES_SPRITE(LYCANROC, gMonBackPic_Lycanroc_),
	SPECIES_SPRITE(WISHIWASHI, gMonBackPic_Wishiwashi_),
	SPECIES_SPRITE(MAREANIE, gMonBackPic_Mareanie_),
	SPECIES_SPRITE(TOXAPEX, gMonBackPic_Toxapex_),
	SPECIES_SPRITE(MUDBRAY, gMonBackPic_Mudbray_),
	SPECIES_SPRITE(MUDSDALE, gMonBackPic_Mudsdale_),
	SPECIES_SPRITE(DEWPIDER, gMonBackPic_Dewpider_),
	SPECIES_SPRITE(ARAQUANID, gMonBackPic_Araquanid_),
	SPECIES_SPRITE(FOMANTIS, gMonBackPic_Fomantis_),
	SPECIES_SPRITE(LURANTIS, gMonBackPic_Lurantis_),
	SPECIES_SPRITE(MORELULL, gMonBackPic_Morelull_),
	SPECIES_SPRITE(SHIINOTIC, gMonBackPic_Shiinotic_),
	SPECIES_SPRITE(SALANDIT, gMonBackPic_Salandit_),
	SPECIES_SPRITE(SALAZZLE, gMonBackPic_Salazzle_),
	SPECIES_SPRITE(STUFFUL, gMonBackPic_Stufful_),
	SPECIES_SPRITE(BEWEAR, gMonBackPic_Bewear_),
	SPECIES_SPRITE(BOUNSWEET, gMonBackPic_Bounsweet_),
	SPECIES_SPRITE(STEENEE, gMonBackPic_Steenee_),
	SPECIES_SPRITE(TSAREENA, gMonBackPic_Tsareena_),
	SPECIES_SPRITE(COMFEY, gMonBackPic_Comfey_),
	SPECIES_SPRITE(ORANGURU, gMonBackPic_Oranguru_),
	SPECIES_SPRITE(PASSIMIAN, gMonBackPic_Passimian_),
	SPECIES_SPRITE(WIMPOD, gMonBackPic_Wimpod_),
	SPECIES_SPRITE(GOLISOPOD, gMonBackPic_Golisopod_),
	SPECIES_SPRITE(SANDYGAST, gMonBackPic_Sandygast_),
	SPECIES_SPRITE(PALOSSAND, gMonBackPic_Palossand_),
	SPECIES_SPRITE(PYUKUMUKU, gMonBackPic_Pyukumuku_),
	SPECIES_SPRITE(TYPENULL, gMonBackPic_TypeNull_),
	SPECIES_SPRITE(SILVALLY, gMonBackPic_Silvally_),
	SPECIES_SPRITE(MINIOR, gMonBackPic_Minior_),
	SPECIES_SPRITE(KOMALA, gMonBackPic_Komala_),
	SPECIES_SPRITE(TURTONATOR, gMonBackPic_Turtonator_),
	SPECIES_SPRITE(TOGEDEMARU, gMonBackPic_Togedemaru_),
	SPECIES_SPRITE(MIMIKYU, gMonBackPic_Mimikyu_),
	SPECIES_SPRITE(BRUXISH, gMonBackPic_Bruxish_),
	SPECIES_SPRITE(DRAMPA, gMonBackPic_Drampa_),
	SPECIES_SPRITE(DHELMISE, gMonBackPic_Dhelmise_),
	SPECIES_SPRITE(JANGMOO, gMonBackPic_Jangmoo_),
	SPECIES_SPRITE(HAKAMOO, gMonBackPic_Hakamoo_),
	SPECIES_SPRITE(KOMMOO, gMonBackPic_Kommoo_),
	SPECIES_SPRITE(TAPUKOKO, gMonBackPic_TapuKoko_),
	SPECIES_SPRITE(TAPULELE, gMonBackPic_TapuLele_),
	SPECIES_SPRITE(TAPUBULU, gMonBackPic_TapuBulu_),
	SPECIES_SPRITE(TAPUFINI, gMonBackPic_TapuFini_),
	SPECIES_SPRITE(COSMOG, gMonBackPic_Cosmog_),
	SPECIES_SPRITE(COSMOEM, gMonBackPic_Cosmoem_),
	SPECIES_SPRITE(SOLGALEO, gMonBackPic_Solgaleo_),
	SPECIES_SPRITE(LUNALA, gMonBackPic_Lunala_),
	SPECIES_SPRITE(NIHILEGO, gMonBackPic_Nihilego_),
	SPECIES_SPRITE(BUZZWOLE, gMonBackPic_Buzzwole_),
	SPECIES_SPRITE(PHEROMOSA, gMonBackPic_Pheromosa_),
	SPECIES_SPRITE(XURKITREE, gMonBackPic_Xurkitree_),
	SPECIES_SPRITE(CELESTEELA, gMonBackPic_Celesteela_),
	SPECIES_SPRITE(KARTANA, gMonBackPic_Kartana_),
	SPECIES_SPRITE(GUZZLORD, gMonBackPic_Guzzlord_),
	SPECIES_SPRITE(NECROZMA, gMonBackPic_Necrozma_),
	SPECIES_SPRITE(MAGEARNA, gMonBackPic_Magearna_),
	SPECIES_SPRITE(MARSHADOW, gMonBackPic_Marshadow_),
	SPECIES_SPRITE(POIPOLE, gMonBackPic_Poipole_),
	SPECIES_SPRITE(NAGANADEL, gMonBackPic_Naganadel_),
	SPECIES_SPRITE(STAKATAKA, gMonBackPic_Stakataka_),
	SPECIES_SPRITE(BLACEPHALN, gMonBackPic_Blacephaln_),
	SPECIES_SPRITE(ZERAORA, gMonBackPic_Zeraora_),
	SPECIES_SPRITE(MELTAN, gMonBackPic_Meltan_),
	SPECIES_SPRITE(MELMETAL, gMonBackPic_Melmetal_),
	SPECIES_SPRITE(GROOKEY, gMonBackPic_Grookey_),
	SPECIES_SPRITE(THWACKEY, gMonBackPic_Thwackey_),
	SPECIES_SPRITE(RILLABOOM, gMonBackPic_Rillaboom_),
	SPECIES_SPRITE(SCORBUNNY, gMonBackPic_Scorbunny_),
	SPECIES_SPRITE(RABOOT, gMonBackPic_Raboot_),
	SPECIES_SPRITE(CINDERACE, gMonBackPic_Cinderace_),
	SPECIES_SPRITE(SOBBLE, gMonBackPic_Sobble_),
	SPECIES_SPRITE(DRIZZILE, gMonBackPic_Drizzile_),
	SPECIES_SPRITE(INTELEON, gMonBackPic_Inteleon_),
	SPECIES_SPRITE(SKWOVET, gMonBackPic_Skwovet_),
	SPECIES_SPRITE(GREEDENT, gMonBackPic_Greedent_),
	SPECIES_SPRITE(ROOKIDEE, gMonBackPic_Rookidee_),
	SPECIES_SPRITE(CORVISQUIR, gMonBackPic_Corvisquir_),
	SPECIES_SPRITE(CORVIKNIGH, gMonBackPic_Corviknigh_),
	SPECIES_SPRITE(BLIPBUG, gMonBackPic_Blipbug_),
	SPECIES_SPRITE(DOTTLER, gMonBackPic_Dottler_),
	SPECIES_SPRITE(ORBEETLE, gMonBackPic_Orbeetle_),
	SPECIES_SPRITE(NICKIT, gMonBackPic_Nickit_),
	SPECIES_SPRITE(THIEVUL, gMonBackPic_Thievul_),
	SPECIES_SPRITE(GOSSIFLEUR, gMonBackPic_Gossifleur_),
	SPECIES_SPRITE(ELDEGOSS, gMonBackPic_Eldegoss_),
	SPECIES_SPRITE(WOOLOO, gMonBackPic_Wooloo_),
	SPECIES_SPRITE(DUBWOOL, gMonBackPic_Dubwool_),
	SPECIES_SPRITE(CHEWTLE, gMonBackPic_Chewtle_),
	SPECIES_SPRITE(DREDNAW, gMonBackPic_Drednaw_),
	SPECIES_SPRITE(YAMPER, gMonBackPic_Yamper_),
	SPECIES_SPRITE(BOLTUND, gMonBackPic_Boltund_),
	SPECIES_SPRITE(ROLYCOLY, gMonBackPic_Rolycoly_),
	SPECIES_SPRITE(CARKOL, gMonBackPic_Carkol_),
	SPECIES_SPRITE(COALOSSAL, gMonBackPic_Coalossal_),
	SPECIES_SPRITE(APPLIN, gMonBackPic_Applin_),
	SPECIES_SPRITE(FLAPPLE, gMonBackPic_Flapple_),
	SPECIES_SPRITE(APPLETUN, gMonBackPic_Appletun_),
	SPECIES_SPRITE(SILICOBRA, gMonBackPic_Silicobra_),
	SPECIES_SPRITE(SANDACONDA, gMonBackPic_Sandaconda_),
	SPECIES_SPRITE(CRAMORANT, gMonBackPic_Cramorant_),
	SPECIES_SPRITE(ARROKUDA, gMonBackPic_Arrokuda_),
	SPECIES_SPRITE(BARRASKEWD, gMonBackPic_Barraskewd_),
	SPECIES_SPRITE(TOXEL, gMonBackPic_Toxel_),
	SPECIES_SPRITE(TOXTRICITY, gMonBackPic_Toxtricity_),
	SPECIES_SPRITE(SIZZLIPEDE, gMonBackPic_Sizzlipede_),
	SPECIES_SPRITE(CENTISKORC, gMonBackPic_Centiskorc_),
	SPECIES_SPRITE(CLOBBOPUS, gMonBackPic_Clobbopus_),
	SPECIES_SPRITE(GRAPPLOCT, gMonBackPic_Grapploct_),
	SPECIES_SPRITE(SINISTEA, gMonBackPic_Sinistea_),
	SPECIES_SPRITE(POLTEAGEIS, gMonBackPic_Polteageis_),
	SPECIES_SPRITE(HATENNA, gMonBackPic_Hatenna_),
	SPECIES_SPRITE(HATTREM, gMonBackPic_Hattrem_),
	SPECIES_SPRITE(HATTERENE, gMonBackPic_Hatterene_),
	SPECIES_SPRITE(IMPIDIMP, gMonBackPic_Impidimp_),
	SPECIES_SPRITE(MORGREM, gMonBackPic_Morgrem_),
	SPECIES_SPRITE(GRIMMSNARL, gMonBackPic_Grimmsnarl_),
	SPECIES_SPRITE(OBSTAGOON, gMonBackPic_Obstagoon_),
	SPECIES_SPRITE(PERRSERKER, gMonBackPic_Perrserker_),
	SPECIES_SPRITE(CURSOLA, gMonBackPic_Cursola_),
	SPECIES_SPRITE(SIRFETCHD, gMonBackPic_Sirfetchd_),
	SPECIES_SPRITE(MRRIME, gMonBackPic_MrRime_),
	SPECIES_SPRITE(RUNERIGUS, gMonBackPic_Runerigus_),
	SPECIES_SPRITE(MILCERY, gMonBackPic_Milcery_),
	SPECIES_SPRITE(ALCREMIE, gMonBackPic_Alcremie_),
	SPECIES_SPRITE(FALINKS, gMonBackPic_Falinks_),
	SPECIES_SPRITE(PINCURCHIN, gMonBackPic_Pincurchin_),
	SPECIES_SPRITE(SNOM, gMonBackPic_Snom_),
	SPECIES_SPRITE(FROSMOTH, gMonBackPic_Frosmoth_),
	SPECIES_SPRITE(STONJOURNE, gMonBackPic_Stonjourne_),
	SPECIES_SPRITE(EISCUE, gMonBackPic_Eiscue_),
	SPECIES_SPRITE(INDEEDEE, gMonBackPic_Indeedee_),
	SPECIES_SPRITE(MORPEKO, gMonBackPic_Morpeko_),
	SPECIES_SPRITE(CUFANT, gMonBackPic_Cufant_),
	SPECIES_SPRITE(COPPERAJAH, gMonBackPic_Copperajah_),
	SPECIES_SPRITE(DRACOZOLT, gMonBackPic_Dracozolt_),
	SPECIES_SPRITE(ARCTOZOLT, gMonBackPic_Arctozolt_),
	SPECIES_SPRITE(DRACOVISH, gMonBackPic_Dracovish_),
	SPECIES_SPRITE(ARCTOVISH, gMonBackPic_Arctovish_),
	SPECIES_SPRITE(DURALUDON, gMonBackPic_Duraludon_),
	SPECIES_SPRITE(DREEPY, gMonBackPic_Dreepy_),
	SPECIES_SPRITE(DRAKLOAK, gMonBackPic_Drakloak_),
	SPECIES_SPRITE(DRAGAPULT, gMonBackPic_Dragapult_),
	SPECIES_SPRITE(ZACIAN, gMonBackPic_Zacian_),
	SPECIES_SPRITE(ZAMAZENTA, gMonBackPic_Zamazenta_),
	SPECIES_SPRITE(ETERNATUS, gMonBackPic_Eternatus_),
	SPECIES_SPRITE(KUBFU, gMonBackPic_Kubfu_),
	SPECIES_SPRITE(URSHIFU, gMonBackPic_Urshifu_),
	SPECIES_SPRITE(ZARUDE, gMonBackPic_Zarude_),
	SPECIES_SPRITE(REGIELEKI, gMonBackPic_Regieleki_),
	SPECIES_SPRITE(REGIDRAGO, gMonBackPic_Regidrago_),
	SPECIES_SPRITE(GLASTRIER, gMonBackPic_Glastrier_),
	SPECIES_SPRITE(SPECTRIER, gMonBackPic_Spectrier_),
	SPECIES_SPRITE(CALYREX, gMonBackPic_Calyrex_),
	SPECIES_SPRITE(WYRDEER, gMonBackPic_Wyrdeer_),
	SPECIES_SPRITE(KLEAVOR, gMonBackPic_Kleavor_),
	SPECIES_SPRITE(URSALUNA, gMonBackPic_Ursaluna_),
	SPECIES_SPRITE(BSCULEGION, gMonBackPic_Bsculegion_),
	SPECIES_SPRITE(SNEASLER, gMonBackPic_Sneasler_),
	SPECIES_SPRITE(OVERQWIL, gMonBackPic_Overqwil_),
	SPECIES_SPRITE(ENAMORUS, gMonBackPic_Enamorus_),
	SPECIES_SPRITE(VENUSAUR_2, gMonBackPic_Venusaur2_),
	SPECIES_SPRITE(CHARIZARD_2, gMonBackPic_Charizard2_),
	SPECIES_SPRITE(CHARIZARD_3, gMonBackPic_Charizard3_),
	SPECIES_SPRITE(BLASTOISE_2, gMonBackPic_Blastoise2_),
	SPECIES_SPRITE(BEEDRILL_2, gMonBackPic_Beedrill2_),
	SPECIES_SPRITE(PIDGEOT_2, gMonBackPic_Pidgeot2_),
	SPECIES_SPRITE(ALAKAZAM_2, gMonBackPic_Alakazam2_),
	SPECIES_SPRITE(SLOWBRO_2, gMonBackPic_Slowbro2_),
	SPECIES_SPRITE(GENGAR_2, gMonBackPic_Gengar2_),
	SPECIES_SPRITE(KANGASKHAN_2, gMonBackPic_Kangaskhan2_),
	SPECIES_SPRITE(PINSIR_2, gMonBackPic_Pinsir2_),
	SPECIES_SPRITE(GYARADOS_2, gMonBackPic_Gyarados2_),
	SPECIES_SPRITE(AERODACTYL_2, gMonBackPic_Aerodactyl2_),
	SPECIES_SPRITE(MEWTWO_2, gMonBackPic_Mewtwo2_),
	SPECIES_SPRITE(MEWTWO_3, gMonBackPic_Mewtwo3_),
	SPECIES_SPRITE(AMPHAROS_2, gMonBackPic_Ampharos2_),
	SPECIES_SPRITE(STEELIX_2, gMonBackPic_Steelix2_),
	SPECIES_SPRITE(SCIZOR_2, gMonBackPic_Scizor2_),
	SPECIES_SPRITE(HERACROSS_2, gMonBackPic_Heracross2_),
	SPECIES_SPRITE(HOUNDOOM_2, gMonBackPic_Houndoom2_),
	SPECIES_SPRITE(TYRANITAR_2, gMonBackPic_Tyranitar2_),
	SPECIES_SPRITE(SCEPTILE_2, gMonBackPic_Sceptile2_),
	SPECIES_SPRITE(BLAZIKEN_2, gMonBackPic_Blaziken2_),
	SPECIES_SPRITE(SWAMPERT_2, gMonBackPic_Swampert2_),
	SPECIES_SPRITE(GARDEVOIR_2, gMonBackPic_Gardevoir2_),
	SPECIES_SPRITE(SABLEYE_2, gMonBackPic_Sableye2_),
	SPECIES_SPRITE(MAWILE_2, gMonBackPic_Mawile2_),
	SPECIES_SPRITE(AGGRON_2, gMonBackPic_Aggron2_),
	SPECIES_SPRITE(MEDICHAM_2, gMonBackPic_Medicham2_),
	SPECIES_SPRITE(MANECTRIC_2, gMonBackPic_Manectric2_),
	SPECIES_SPRITE(SHARPEDO_2, gMonBackPic_Sharpedo2_),
	SPECIES_SPRITE(CAMERUPT_2, gMonBackPic_Camerupt2_),
	SPECIES_SPRITE(ALTARIA_2, gMonBackPic_Altaria2_),
	SPECIES_SPRITE(BANETTE_2, gMonBackPic_Banette2_),
	SPECIES_SPRITE(ABSOL_2, gMonBackPic_Absol2_),
	SPECIES_SPRITE(GLALIE_2, gMonBackPic_Glalie2_),
	SPECIES_SPRITE(SALAMENCE_2, gMonBackPic_Salamence2_),
	SPECIES_SPRITE(METAGROSS_2, gMonBackPic_Metagross2_),
	SPECIES_SPRITE(LATIAS_2, gMonBackPic_Latias2_),
	SPECIES_SPRITE(LATIOS_2, gMonBackPic_Latios2_),
	SPECIES_SPRITE(LOPUNNY_2, gMonBackPic_Lopunny2_),
	SPECIES_SPRITE(GARCHOMP_2, gMonBackPic_Garchomp2_),
	SPECIES_SPRITE(LUCARIO_2, gMonBackPic_Lucario2_),
	SPECIES_SPRITE(ABOMASNOW_2, gMonBackPic_Abomasnow2_),
	SPECIES_SPRITE(GALLADE_2, gMonBackPic_Gallade2_),
	SPECIES_SPRITE(AUDINO_2, gMonBackPic_Audino2_),
	SPECIES_SPRITE(DIANCIE_2, gMonBackPic_Diancie2_),
	SPECIES_SPRITE(RAYQUAZA_2, gMonBackPic_Rayquaza2_),
	SPECIES_SPRITE(KYOGRE_2, gMonBackPic_Kyogre2_),
	SPECIES_SPRITE(GROUDON_2, gMonBackPic_Groudon2_),
	SPECIES_SPRITE(RATTATA_2, gMonBackPic_Rattata2_),
	SPECIES_SPRITE(RATICATE_2, gMonBackPic_Raticate2_),
	SPECIES_SPRITE(RAICHU_2, gMonBackPic_Raichu2_),
	SPECIES_SPRITE(SANDSHREW_2, gMonBackPic_Sandshrew2_),
	SPECIES_SPRITE(SANDSLASH_2, gMonBackPic_Sandslash2_),
	SPECIES_SPRITE(VULPIX_2, gMonBackPic_Vulpix2_),
	SPECIES_SPRITE(NINETALES_2, gMonBackPic_Ninetales2_),
	SPECIES_SPRITE(DIGLETT_2, gMonBackPic_Diglett2_),
	SPECIES_SPRITE(DUGTRIO_2, gMonBackPic_Dugtrio2_),
	SPECIES_SPRITE(MEOWTH_2, gMonBackPic_Meowth2_),
	SPECIES_SPRITE(PERSIAN_2, gMonBackPic_Persian2_),
	SPECIES_SPRITE(GEODUDE_2, gMonBackPic_Geodude2_),
	SPECIES_SPRITE(GRAVELER_2, gMonBackPic_Graveler2_),
	SPECIES_SPRITE(GOLEM_2, gMonBackPic_Golem2_),
	SPECIES_SPRITE(GRIMER_2, gMonBackPic_Grimer2_),
	SPECIES_SPRITE(MUK_2, gMonBackPic_Muk2_),
	SPECIES_SPRITE(EXEGGUTOR_2, gMonBackPic_Exeggutor2_),
	SPECIES_SPRITE(MAROWAK_2, gMonBackPic_Marowak2_),
	SPECIES_SPRITE(MEOWTH_3, gMonBackPic_Meowth3_),
	SPECIES_SPRITE(PONYTA_2, gMonBackPic_Ponyta2_),
	SPECIES_SPRITE(RAPIDASH_2, gMonBackPic_Rapidash2_),
	SPECIES_SPRITE(SLOWPOKE_2, gMonBackPic_Slowpoke2_),
	SPECIES_SPRITE(SLOWBRO_3, gMonBackPic_Slowbro3_),
	SPECIES_SPRITE(FARFETCHD_2, gMonBackPic_Farfetchd2_),
	SPECIES_SPRITE(WEEZING_2, gMonBackPic_Weezing2_),
	SPECIES_SPRITE(MRMIME_2, gMonBackPic_MrMime2_),
	SPECIES_SPRITE(ARTICUNO_2, gMonBackPic_Articuno2_),
	SPECIES_SPRITE(ZAPDOS_2, gMonBackPic_Zapdos2_),
	SPECIES_SPRITE(MOLTRES_2, gMonBackPic_Moltres2_),
	SPECIES_SPRITE(SLOWKING_2, gMonBackPic_Slowking2_),
	SPECIES_SPRITE(CORSOLA_2, gMonBackPic_Corsola2_),
	SPECIES_SPRITE(ZIGZAGOON_2, gMonBackPic_Zigzagoon2_),
	SPECIES_SPRITE(LINOONE_2, gMonBackPic_Linoone2_),
	SPECIES_SPRITE(DARUMAKA_2, gMonBackPic_Darumaka2_),
	SPECIES_SPRITE(DARMANITAN_2, gMonBackPic_Darmanitan2_),
	SPECIES_SPRITE(YAMASK_2, gMonBackPic_Yamask2_),
	SPECIES_SPRITE(STUNFISK_2, gMonBackPic_Stunfisk2_),
	SPECIES_SPRITE(GROWLITHE_2, gMonBackPic_Growlithe2_),
	SPECIES_SPRITE(ARCANINE_2, gMonBackPic_Arcanine2_),
	SPECIES_SPRITE(VOLTORB_2, gMonBackPic_Voltorb2_),
	SPECIES_SPRITE(ELECTRODE_2, gMonBackPic_Electrode2_),
	SPECIES_SPRITE(TYPHLOSION_2, gMonBackPic_Typhlosion2_),
	SPECIES_SPRITE(QWILFISH_2, gMonBackPic_Qwilfish2_),
	SPECIES_SPRITE(SNEASEL_2, gMonBackPic_Sneasel2_),
	SPECIES_SPRITE(SAMUROTT_2, gMonBackPic_Samurott2_),
	SPECIES_SPRITE(LILLIGANT_2, gMonBackPic_Lilligant2_),
	SPECIES_SPRITE(ZORUA_2, gMonBackPic_Zorua2_),
	SPECIES_SPRITE(ZOROARK_2, gMonBackPic_Zoroark2_),
	SPECIES_SPRITE(BRAVIARY_2, gMonBackPic_Braviary2_),
	SPECIES_SPRITE(SLIGGOO_2, gMonBackPic_Sliggoo2_),
	SPECIES_SPRITE(GOODRA_2, gMonBackPic_Goodra2_),
	SPECIES_SPRITE(AVALUGG_2, gMonBackPic_Avalugg2_),
	SPECIES_SPRITE(DECIDUEYE_2, gMonBackPic_Decidueye2_),
	SPECIES_SPRITE(PIKACHU_2, gMonBackPic_Pikachu2_),
	SPECIES_SPRITE(PIKACHU_3, gMonBackPic_Pikachu3_),
	SPECIES_SPRITE(PIKACHU_4, gMonBackPic_Pikachu4_),
	SPECIES_SPRITE(PIKACHU_5, gMonBackPic_Pikachu5_),
	SPECIES_SPRITE(PIKACHU_6, gMonBackPic_Pikachu6_),
	SPECIES_SPRITE(PIKACHU_7, gMonBackPic_Pikachu7_),
	SPECIES_SPRITE(PIKACHU_8, gMonBackPic_Pikachu8_),
	SPECIES_SPRITE(PIKACHU_9, gMonBackPic_Pikachu9_),
	SPECIES_SPRITE(PIKACHU_10, gMonBackPic_Pikachu10_),
	SPECIES_SPRITE(PIKACHU_11, gMonBackPic_Pikachu11_),
	SPECIES_SPRITE(PIKACHU_12, gMonBackPic_Pikachu12_),
	SPECIES_SPRITE(PIKACHU_13, gMonBackPic_Pikachu13_),
	SPECIES_SPRITE(PIKACHU_14, gMonBackPic_Pikachu14_),
	SPECIES_SPRITE(PIKACHU_15, gMonBackPic_Pikachu15_),
	SPECIES_SPRITE(PICHU_2, gMonBackPic_Pichu2_),
	SPECIES_SPRITE(CASTFORM_2, gMonBackPic_Castform2_),
	SPECIES_SPRITE(CASTFORM_3, gMonBackPic_Castform3_),
	SPECIES_SPRITE(CASTFORM_4, gMonBackPic_Castform4_),
	SPECIES_SPRITE(DEOXYS_2, gMonBackPic_Deoxys2_),
	SPECIES_SPRITE(DEOXYS_3, gMonBackPic_Deoxys3_),
	SPECIES_SPRITE(DEOXYS_4, gMonBackPic_Deoxys4_),
	SPECIES_SPRITE(BURMY_2, gMonBackPic_Burmy2_),
	SPECIES_SPRITE(BURMY_3, gMonBackPic_Burmy3_),
	SPECIES_SPRITE(WORMADAM_2, gMonBackPic_Wormadam2_),
	SPECIES_SPRITE(WORMADAM_3, gMonBackPic_Wormadam3_),
	SPECIES_SPRITE(CHERRIM_2, gMonBackPic_Cherrim2_),
	SPECIES_SPRITE(SHELLOS_2, gMonBackPic_Shellos2_),
	SPECIES_SPRITE(GASTRODON_2, gMonBackPic_Gastrodon2_),
	SPECIES_SPRITE(ROTOM_2, gMonBackPic_Rotom2_),
	SPECIES_SPRITE(ROTOM_3, gMonBackPic_Rotom3_),
	SPECIES_SPRITE(ROTOM_4, gMonBackPic_Rotom4_),
	SPECIES_SPRITE(ROTOM_5, gMonBackPic_Rotom5_),
	SPECIES_SPRITE(ROTOM_6, gMonBackPic_Rotom6_),
	SPECIES_SPRITE(DIALGA_2, gMonBackPic_Dialga2_),
	SPECIES_SPRITE(PALKIA_2, gMonBackPic_Palkia2_),
	SPECIES_SPRITE(GIRATINA_2, gMonBackPic_Giratina2_),
	SPECIES_SPRITE(SHAYMIN_2, gMonBackPic_Shaymin2_),
	SPECIES_SPRITE(ARCEUS_2, gMonBackPic_Arceus2_),
	SPECIES_SPRITE(ARCEUS_3, gMonBackPic_Arceus3_),
	SPECIES_SPRITE(ARCEUS_4, gMonBackPic_Arceus4_),
	SPECIES_SPRITE(ARCEUS_5, gMonBackPic_Arceus5_),
	SPECIES_SPRITE(ARCEUS_6, gMonBackPic_Arceus6_),
	SPECIES_SPRITE(ARCEUS_7, gMonBackPic_Arceus7_),
	SPECIES_SPRITE(ARCEUS_8, gMonBackPic_Arceus8_),
	SPECIES_SPRITE(ARCEUS_9, gMonBackPic_Arceus9_),
	SPECIES_SPRITE(ARCEUS_10, gMonBackPic_Arceus10_),
	SPECIES_SPRITE(ARCEUS_11, gMonBackPic_Arceus11_),
	SPECIES_SPRITE(ARCEUS_12, gMonBackPic_Arceus12_),
	SPECIES_SPRITE(ARCEUS_13, gMonBackPic_Arceus13_),
	SPECIES_SPRITE(ARCEUS_14, gMonBackPic_Arceus14_),
	SPECIES_SPRITE(ARCEUS_15, gMonBackPic_Arceus15_),
	SPECIES_SPRITE(ARCEUS_16, gMonBackPic_Arceus16_),
	SPECIES_SPRITE(ARCEUS_17, gMonBackPic_Arceus17_),
	SPECIES_SPRITE(ARCEUS_18, gMonBackPic_Arceus18_),
	SPECIES_SPRITE(BASCULIN_2, gMonBackPic_Basculin2_),
	SPECIES_SPRITE(BASCULIN_3, gMonBackPic_Basculin3_),
	SPECIES_SPRITE(DARMANITAN_3, gMonBackPic_Darmanitan3_),
	SPECIES_SPRITE(DARMANITAN_4, gMonBackPic_Darmanitan4_),
	SPECIES_SPRITE(DEERLING_2, gMonBackPic_Deerling2_),
	SPECIES_SPRITE(DEERLING_3, gMonBackPic_Deerling3_),
	SPECIES_SPRITE(DEERLING_4, gMonBackPic_Deerling4_),
	SPECIES_SPRITE(SAWSBUCK_2, gMonBackPic_Sawsbuck2_),
	SPECIES_SPRITE(SAWSBUCK_3, gMonBackPic_Sawsbuck3_),
	SPECIES_SPRITE(SAWSBUCK_4, gMonBackPic_Sawsbuck4_),
	SPECIES_SPRITE(TORNADUS_2, gMonBackPic_Tornadus2_),
	SPECIES_SPRITE(THUNDURUS_2, gMonBackPic_Thundurus2_),
	SPECIES_SPRITE(LANDORUS_2, gMonBackPic_Landorus2_),
	SPECIES_SPRITE(ENAMORUS_2, gMonBackPic_Enamorus2_),
	SPECIES_SPRITE(KYUREM_2, gMonBackPic_Kyurem2_),
	SPECIES_SPRITE(KYUREM_3, gMonBackPic_Kyurem3_),
	SPECIES_SPRITE(KELDEO_2, gMonBackPic_Keldeo2_),
	SPECIES_SPRITE(MELOETTA_2, gMonBackPic_Meloetta2_),
	SPECIES_SPRITE(GENESECT_2, gMonBackPic_Genesect2_),
	SPECIES_SPRITE(GENESECT_3, gMonBackPic_Genesect3_),
	SPECIES_SPRITE(GENESECT_4, gMonBackPic_Genesect4_),
	SPECIES_SPRITE(GENESECT_5, gMonBackPic_Genesect5_),
	SPECIES_SPRITE(GRENINJA_2, gMonBackPic_Greninja2_),
	SPECIES_SPRITE(GRENINJA_3, gMonBackPic_Greninja3_),
	SPECIES_SPRITE(VIVILLON_2, gMonBackPic_Vivillon2_),
	SPECIES_SPRITE(VIVILLON_3, gMonBackPic_Vivillon3_),
	SPECIES_SPRITE(VIVILLON_4, gMonBackPic_Vivillon4_),
	SPECIES_SPRITE(VIVILLON_5, gMonBackPic_Vivillon5_),
	SPECIES_SPRITE(VIVILLON_6, gMonBackPic_Vivillon6_),
	SPECIES_SPRITE(VIVILLON_7, gMonBackPic_Vivillon7_),
	SPECIES_SPRITE(VIVILLON_8, gMonBackPic_Vivillon8_),
	SPECIES_SPRITE(VIVILLON_9, gMonBackPic_Vivillon9_),
	SPECIES_SPRITE(VIVILLON_10, gMonBackPic_Vivillon10_),
	SPECIES_SPRITE(VIVILLON_11, gMonBackPic_Vivillon11_),
	SPECIES_SPRITE(VIVILLON_12, gMonBackPic_Vivillon12_),
	SPECIES_SPRITE(VIVILLON_13, gMonBackPic_Vivillon13_),
	SPECIES_SPRITE(VIVILLON_14, gMonBackPic_Vivillon14_),
	SPECIES_SPRITE(VIVILLON_15, gMonBackPic_Vivillon15_),
	SPECIES_SPRITE(VIVILLON_16, gMonBackPic_Vivillon16_),
	SPECIES_SPRITE(VIVILLON_17, gMonBackPic_Vivillon17_),
	SPECIES_SPRITE(VIVILLON_18, gMonBackPic_Vivillon18_),
	SPECIES_SPRITE(VIVILLON_19, gMonBackPic_Vivillon19_),
	SPECIES_SPRITE(VIVILLON_20, gMonBackPic_Vivillon20_),
	SPECIES_SPRITE(FLABEBE_2, gMonBackPic_Flabebe2_),
	SPECIES_SPRITE(FLABEBE_3, gMonBackPic_Flabebe3_),
	SPECIES_SPRITE(FLABEBE_4, gMonBackPic_Flabebe4_),
	SPECIES_SPRITE(FLABEBE_5, gMonBackPic_Flabebe5_),
	SPECIES_SPRITE(FLOETTE_2, gMonBackPic_Floette2_),
	SPECIES_SPRITE(FLOETTE_3, gMonBackPic_Floette3_),
	SPECIES_SPRITE(FLOETTE_4, gMonBackPic_Floette4_),
	SPECIES_SPRITE(FLOETTE_5, gMonBackPic_Floette5_),
	SPECIES_SPRITE(FLOETTE_6, gMonBackPic_Floette6_),
	SPECIES_SPRITE(FLORGES_2, gMonBackPic_Florges2_),
	SPECIES_SPRITE(FLORGES_3, gMonBackPic_Florges3_),
	SPECIES_SPRITE(FLORGES_4, gMonBackPic_Florges4_),
	SPECIES_SPRITE(FLORGES_5, gMonBackPic_Florges5_),
	SPECIES_SPRITE(FURFROU_2, gMonBackPic_Furfrou2_),
	SPECIES_SPRITE(FURFROU_3, gMonBackPic_Furfrou3_),
	SPECIES_SPRITE(FURFROU_4, gMonBackPic_Furfrou4_),
	SPECIES_SPRITE(FURFROU_5, gMonBackPic_Furfrou5_),
	SPECIES_SPRITE(FURFROU_6, gMonBackPic_Furfrou6_),
	SPECIES_SPRITE(FURFROU_7, gMonBackPic_Furfrou7_),
	SPECIES_SPRITE(FURFROU_8, gMonBackPic_Furfrou8_),
	SPECIES_SPRITE(FURFROU_9, gMonBackPic_Furfrou9_),
	SPECIES_SPRITE(FURFROU_10, gMonBackPic_Furfrou10_),
	SPECIES_SPRITE(MEOWSTIC_2, gMonBackPic_Meowstic2_),
	SPECIES_SPRITE(AEGISLASH_2, gMonBackPic_Aegislash2_),
	SPECIES_SPRITE(PUMPKABOO_2, gMonBackPic_Pumpkaboo2_),
	SPECIES_SPRITE(PUMPKABOO_3, gMonBackPic_Pumpkaboo3_),
	SPECIES_SPRITE(PUMPKABOO_4, gMonBackPic_Pumpkaboo4_),
	SPECIES_SPRITE(GOURGEIST_2, gMonBackPic_Gourgeist2_),
	SPECIES_SPRITE(GOURGEIST_3, gMonBackPic_Gourgeist3_),
	SPECIES_SPRITE(GOURGEIST_4, gMonBackPic_Gourgeist4_),
	SPECIES_SPRITE(XERNEAS_2, gMonBackPic_Xerneas2_),
	SPECIES_SPRITE(ZYGARDE_2, gMonBackPic_Zygarde2_),
	SPECIES_SPRITE(ZYGARDE_3, gMonBackPic_Zygarde3_),
	SPECIES_SPRITE(ZYGARDE_4, gMonBackPic_Zygarde4_),
	SPECIES_SPRITE(ZYGARDE_5, gMonBackPic_Zygarde5_),
	SPECIES_SPRITE(HOOPA_2, gMonBackPic_Hoopa2_),
	SPECIES_SPRITE(ORICORIO_2, gMonBackPic_Oricorio2_),
	SPECIES_SPRITE(ORICORIO_3, gMonBackPic_Oricorio3_),
	SPECIES_SPRITE(ORICORIO_4, gMonBackPic_Oricorio4_),
	SPECIES_SPRITE(ROCKRUFF_2, gMonBackPic_Rockruff2_),
	SPECIES_SPRITE(LYCANROC_2, gMonBackPic_Lycanroc2_),
	SPECIES_SPRITE(LYCANROC_3, gMonBackPic_Lycanroc3_),
	SPECIES_SPRITE(WISHIWASHI_2, gMonBackPic_Wishiwashi2_),
	SPECIES_SPRITE(SILVALLY_2, gMonBackPic_Silvally2_),
	SPECIES_SPRITE(SILVALLY_3, gMonBackPic_Silvally3_),
	SPECIES_SPRITE(SILVALLY_4, gMonBackPic_Silvally4_),
	SPECIES_SPRITE(SILVALLY_5, gMonBackPic_Silvally5_),
	SPECIES_SPRITE(SILVALLY_6, gMonBackPic_Silvally6_),
	SPECIES_SPRITE(SILVALLY_7, gMonBackPic_Silvally7_),
	SPECIES_SPRITE(SILVALLY_8, gMonBackPic_Silvally8_),
	SPECIES_SPRITE(SILVALLY_9, gMonBackPic_Silvally9_),
	SPECIES_SPRITE(SILVALLY_10, gMonBackPic_Silvally10_),
	SPECIES_SPRITE(SILVALLY_11, gMonBackPic_Silvally11_),
	SPECIES_SPRITE(SILVALLY_12, gMonBackPic_Silvally12_),
	SPECIES_SPRITE(SILVALLY_13, gMonBackPic_Silvally13_),
	SPECIES_SPRITE(SILVALLY_14, gMonBackPic_Silvally14_),
	SPECIES_SPRITE(SILVALLY_15, gMonBackPic_Silvally15_),
	SPECIES_SPRITE(SILVALLY_16, gMonBackPic_Silvally16_),
	SPECIES_SPRITE(SILVALLY_17, gMonBackPic_Silvally17_),
	SPECIES_SPRITE(SILVALLY_18, gMonBackPic_Silvally18_),
	SPECIES_SPRITE(MINIOR_2, gMonBackPic_Minior2_),
	SPECIES_SPRITE(MINIOR_3, gMonBackPic_Minior3_),
	SPECIES_SPRITE(MINIOR_4, gMonBackPic_Minior4_),
	SPECIES_SPRITE(MINIOR_5, gMonBackPic_Minior5_),
	SPECIES_SPRITE(MINIOR_6, gMonBackPic_Minior6_),
	SPECIES_SPRITE(MINIOR_7, gMonBackPic_Minior7_),
	SPECIES_SPRITE(MINIOR_8, gMonBackPic_Minior8_),
	SPECIES_SPRITE(MINIOR_9, gMonBackPic_Minior9_),
	SPECIES_SPRITE(MINIOR_10, gMonBackPic_Minior10_),
	SPECIES_SPRITE(MINIOR_11, gMonBackPic_Minior11_),
	SPECIES_SPRITE(MINIOR_12, gMonBackPic_Minior12_),
	SPECIES_SPRITE(MINIOR_13, gMonBackPic_Minior13_),
	SPECIES_SPRITE(MINIOR_14, gMonBackPic_Minior14_),
	SPECIES_SPRITE(MIMIKYU_2, gMonBackPic_Mimikyu2_),
	SPECIES_SPRITE(NECROZMA_2, gMonBackPic_Necrozma2_),
	SPECIES_SPRITE(NECROZMA_3, gMonBackPic_Necrozma3_),
	SPECIES_SPRITE(NECROZMA_4, gMonBackPic_Necrozma4_),
	SPECIES_SPRITE(MAGEARNA_2, gMonBackPic_Magearna2_),
	SPECIES_SPRITE(CRAMORANT_2, gMonBackPic_Cramorant2_),
	SPECIES_SPRITE(CRAMORANT_3, gMonBackPic_Cramorant3_),
	SPECIES_SPRITE(TOXTRICITY_2, gMonBackPic_Toxtricity2_),
	SPECIES_SPRITE(SINISTEA_2, gMonBackPic_Sinistea2_),
	SPECIES_SPRITE(POLTEAGEIS_2, gMonBackPic_Polteageis2_),
	SPECIES_SPRITE(ALCREMIE_2, gMonBackPic_Alcremie2_),
	SPECIES_SPRITE(ALCREMIE_3, gMonBackPic_Alcremie3_),
	SPECIES_SPRITE(ALCREMIE_4, gMonBackPic_Alcremie4_),
	SPECIES_SPRITE(ALCREMIE_5, gMonBackPic_Alcremie5_),
	SPECIES_SPRITE(ALCREMIE_6, gMonBackPic_Alcremie6_),
	SPECIES_SPRITE(ALCREMIE_7, gMonBackPic_Alcremie7_),
	SPECIES_SPRITE(ALCREMIE_8, gMonBackPic_Alcremie8_),
	SPECIES_SPRITE(ALCREMIE_9, gMonBackPic_Alcremie9_),
	SPECIES_SPRITE(EISCUE_2, gMonBackPic_Eiscue2_),
	SPECIES_SPRITE(INDEEDEE_2, gMonBackPic_Indeedee2_),
	SPECIES_SPRITE(MORPEKO_2, gMonBackPic_Morpeko2_),
	SPECIES_SPRITE(ZACIAN_2, gMonBackPic_Zacian2_),
	SPECIES_SPRITE(ZAMAZENTA_2, gMonBackPic_Zamazenta2_),
	SPECIES_SPRITE(ETERNATUS_2, gMonBackPic_Eternatus2_),
	SPECIES_SPRITE(URSHIFU_2, gMonBackPic_Urshifu2_),
	SPECIES_SPRITE(ZARUDE_2, gMonBackPic_Zarude2_),
	SPECIES_SPRITE(CALYREX_2, gMonBackPic_Calyrex2_),
	SPECIES_SPRITE(CALYREX_3, gMonBackPic_Calyrex3_),
	SPECIES_SPRITE(BSCULEGION_2, gMonBackPic_Bsculegion2_),
	SPECIES_SPRITE(ALCREMIE_10, gMonBackPic_Alcremie10_),
	SPECIES_SPRITE(ALCREMIE_11, gMonBackPic_Alcremie11_),
	SPECIES_SPRITE(ALCREMIE_12, gMonBackPic_Alcremie12_),
	SPECIES_SPRITE(ALCREMIE_13, gMonBackPic_Alcremie13_),
	SPECIES_SPRITE(ALCREMIE_14, gMonBackPic_Alcremie14_),
	SPECIES_SPRITE(ALCREMIE_15, gMonBackPic_Alcremie15_),
	SPECIES_SPRITE(ALCREMIE_16, gMonBackPic_Alcremie16_),
	SPECIES_SPRITE(ALCREMIE_17, gMonBackPic_Alcremie17_),
	SPECIES_SPRITE(ALCREMIE_18, gMonBackPic_Alcremie18_),
	SPECIES_SPRITE(ALCREMIE_19, gMonBackPic_Alcremie19_),
	SPECIES_SPRITE(ALCREMIE_20, gMonBackPic_Alcremie20_),
	SPECIES_SPRITE(ALCREMIE_21, gMonBackPic_Alcremie21_),
	SPECIES_SPRITE(ALCREMIE_22, gMonBackPic_Alcremie22_),
	SPECIES_SPRITE(ALCREMIE_23, gMonBackPic_Alcremie23_),
	SPECIES_SPRITE(ALCREMIE_24, gMonBackPic_Alcremie24_),
	SPECIES_SPRITE(ALCREMIE_25, gMonBackPic_Alcremie25_),
	SPECIES_SPRITE(ALCREMIE_26, gMonBackPic_Alcremie26_),
	SPECIES_SPRITE(ALCREMIE_27, gMonBackPic_Alcremie27_),
	SPECIES_SPRITE(ALCREMIE_28, gMonBackPic_Alcremie28_),
	SPECIES_SPRITE(ALCREMIE_29, gMonBackPic_Alcremie29_),
	SPECIES_SPRITE(ALCREMIE_30, gMonBackPic_Alcremie30_),
	SPECIES_SPRITE(ALCREMIE_31, gMonBackPic_Alcremie31_),
	SPECIES_SPRITE(ALCREMIE_32, gMonBackPic_Alcremie32_),
	SPECIES_SPRITE(ALCREMIE_33, gMonBackPic_Alcremie33_),
	SPECIES_SPRITE(ALCREMIE_34, gMonBackPic_Alcremie34_),
	SPECIES_SPRITE(ALCREMIE_35, gMonBackPic_Alcremie35_),
	SPECIES_SPRITE(ALCREMIE_36, gMonBackPic_Alcremie36_),
	SPECIES_SPRITE(ALCREMIE_37, gMonBackPic_Alcremie37_),
	SPECIES_SPRITE(ALCREMIE_38, gMonBackPic_Alcremie38_),
	SPECIES_SPRITE(ALCREMIE_39, gMonBackPic_Alcremie39_),
	SPECIES_SPRITE(ALCREMIE_40, gMonBackPic_Alcremie40_),
	SPECIES_SPRITE(ALCREMIE_41, gMonBackPic_Alcremie41_),
	SPECIES_SPRITE(ALCREMIE_42, gMonBackPic_Alcremie42_),
	SPECIES_SPRITE(ALCREMIE_43, gMonBackPic_Alcremie43_),
	SPECIES_SPRITE(ALCREMIE_44, gMonBackPic_Alcremie44_),
	SPECIES_SPRITE(ALCREMIE_45, gMonBackPic_Alcremie45_),
	SPECIES_SPRITE(ALCREMIE_46, gMonBackPic_Alcremie46_),
	SPECIES_SPRITE(ALCREMIE_47, gMonBackPic_Alcremie47_),
	SPECIES_SPRITE(ALCREMIE_48, gMonBackPic_Alcremie48_),
	SPECIES_SPRITE(ALCREMIE_49, gMonBackPic_Alcremie49_),
	SPECIES_SPRITE(ALCREMIE_50, gMonBackPic_Alcremie50_),
	SPECIES_SPRITE(ALCREMIE_51, gMonBackPic_Alcremie51_),
	SPECIES_SPRITE(ALCREMIE_52, gMonBackPic_Alcremie52_),
	SPECIES_SPRITE(ALCREMIE_53, gMonBackPic_Alcremie53_),
	SPECIES_SPRITE(ALCREMIE_54, gMonBackPic_Alcremie54_),
	SPECIES_SPRITE(ALCREMIE_55, gMonBackPic_Alcremie55_),
	SPECIES_SPRITE(ALCREMIE_56, gMonBackPic_Alcremie56_),
	SPECIES_SPRITE(ALCREMIE_57, gMonBackPic_Alcremie57_),
	SPECIES_SPRITE(ALCREMIE_58, gMonBackPic_Alcremie58_),
	SPECIES_SPRITE(ALCREMIE_59, gMonBackPic_Alcremie59_),
	SPECIES_SPRITE(ALCREMIE_60, gMonBackPic_Alcremie60_),
	SPECIES_SPRITE(ALCREMIE_61, gMonBackPic_Alcremie61_),
	SPECIES_SPRITE(ALCREMIE_62, gMonBackPic_Alcremie62_),
	SPECIES_SPRITE(ALCREMIE_63, gMonBackPic_Alcremie63_),
	SPECIES_SPRITE(SPRIGATITO, gMonBackPic_Sprigatito_),
	SPECIES_SPRITE(FLORAGATO, gMonBackPic_Floragato_),
	SPECIES_SPRITE(MEOWSCARAD, gMonBackPic_Meowscarad_),
	SPECIES_SPRITE(FUECOCO, gMonBackPic_Fuecoco_),
	SPECIES_SPRITE(CROCALOR, gMonBackPic_Crocalor_),
	SPECIES_SPRITE(SKELEDIRGE, gMonBackPic_Skeledirge_),
	SPECIES_SPRITE(QUAXLY, gMonBackPic_Quaxly_),
	SPECIES_SPRITE(QUAXWELL, gMonBackPic_Quaxwell_),
	SPECIES_SPRITE(QUAQUAVAL, gMonBackPic_Quaquaval_),
	SPECIES_SPRITE(LECHONK, gMonBackPic_Lechonk_),
	SPECIES_SPRITE(OINKOLOGNE, gMonBackPic_Oinkologne_),
	SPECIES_SPRITE(OINKOLOGNE_2, gMonBackPic_Oinkologne2_),
	SPECIES_SPRITE(TAROUNTULA, gMonBackPic_Tarountula_),
	SPECIES_SPRITE(SPIDOPS, gMonBackPic_Spidops_),
	SPECIES_SPRITE(NYMBLE, gMonBackPic_Nymble_),
	SPECIES_SPRITE(LOKIX, gMonBackPic_Lokix_),
	SPECIES_SPRITE(PAWMI, gMonBackPic_Pawmi_),
	SPECIES_SPRITE(PAWMO, gMonBackPic_Pawmo_),
	SPECIES_SPRITE(PAWMOT, gMonBackPic_Pawmot_),
	SPECIES_SPRITE(TANDEMAUS, gMonBackPic_Tandemaus_),
	SPECIES_SPRITE(MAUSHOLD, gMonBackPic_Maushold_),
	SPECIES_SPRITE(MAUSHOLD_2, gMonBackPic_Maushold2_),
	SPECIES_SPRITE(FIDOUGH, gMonBackPic_Fidough_),
	SPECIES_SPRITE(DACHSBUN, gMonBackPic_Dachsbun_),
	SPECIES_SPRITE(SMOLIV, gMonBackPic_Smoliv_),
	SPECIES_SPRITE(DOLLIV, gMonBackPic_Dolliv_),
	SPECIES_SPRITE(ARBOLIVA, gMonBackPic_Arboliva_),
	SPECIES_SPRITE(SQAWKABILY, gMonBackPic_Sqawkabily_),
	SPECIES_SPRITE(SQAWKABILY_2, gMonBackPic_Sqawkabily2_),
	SPECIES_SPRITE(SQAWKABILY_3, gMonBackPic_Sqawkabily3_),
	SPECIES_SPRITE(SQAWKABILY_4, gMonBackPic_Sqawkabily4_),
	SPECIES_SPRITE(NACLI, gMonBackPic_Nacli_),
	SPECIES_SPRITE(NACLSTACK, gMonBackPic_Naclstack_),
	SPECIES_SPRITE(GARGANACL, gMonBackPic_Garganacl_),
	SPECIES_SPRITE(CHARCADET, gMonBackPic_Charcadet_),
	SPECIES_SPRITE(ARMAROUGE, gMonBackPic_Armarouge_),
	SPECIES_SPRITE(CERULEDGE, gMonBackPic_Ceruledge_),
	SPECIES_SPRITE(TADBULB, gMonBackPic_Tadbulb_),
	SPECIES_SPRITE(BELLIBOLT, gMonBackPic_Bellibolt_),
	SPECIES_SPRITE(WATTREL, gMonBackPic_Wattrel_),
	SPECIES_SPRITE(KILOWATREL, gMonBackPic_Kilowatrel_),
	SPECIES_SPRITE(MASCHIFF, gMonBackPic_Maschiff_),
	SPECIES_SPRITE(MABOSSTIFF, gMonBackPic_Mabosstiff_),
	SPECIES_SPRITE(SHROODLE, gMonBackPic_Shroodle_),
	SPECIES_SPRITE(GRAFAIAI, gMonBackPic_Grafaiai_),
	SPECIES_SPRITE(BRAMBLIN, gMonBackPic_Bramblin_),
	SPECIES_SPRITE(BRMBLGHAST, gMonBackPic_Brmblghast_),
	SPECIES_SPRITE(TOEDSCOOL, gMonBackPic_Toedscool_),
	SPECIES_SPRITE(TOEDSCRUEL, gMonBackPic_Toedscruel_),
	SPECIES_SPRITE(KLAWF, gMonBackPic_Klawf_),
	SPECIES_SPRITE(CAPSAKID, gMonBackPic_Capsakid_),
	SPECIES_SPRITE(SCOVILLAIN, gMonBackPic_Scovillain_),
	SPECIES_SPRITE(RELLOR, gMonBackPic_Rellor_),
	SPECIES_SPRITE(RABSCA, gMonBackPic_Rabsca_),
	SPECIES_SPRITE(FLITTLE, gMonBackPic_Flittle_),
	SPECIES_SPRITE(ESPATHRA, gMonBackPic_Espathra_),
	SPECIES_SPRITE(TINKATINK, gMonBackPic_Tinkatink_),
	SPECIES_SPRITE(TINKATUFF, gMonBackPic_Tinkatuff_),
	SPECIES_SPRITE(TINKATON, gMonBackPic_Tinkaton_),
	SPECIES_SPRITE(WIGLETT, gMonBackPic_Wiglett_),
	SPECIES_SPRITE(WUGTRIO, gMonBackPic_Wugtrio_),
	SPECIES_SPRITE(BOMBIRDIER, gMonBackPic_Bombirdier_),
	SPECIES_SPRITE(FINIZEN, gMonBackPic_Finizen_),
	SPECIES_SPRITE(PALAFIN, gMonBackPic_Palafin_),
	SPECIES_SPRITE(PALAFIN_2, gMonBackPic_Palafin2_),
	SPECIES_SPRITE(VAROOM, gMonBackPic_Varoom_),
	SPECIES_SPRITE(REVAVROOM, gMonBackPic_Revavroom_),
	SPECIES_SPRITE(CYCLIZAR, gMonBackPic_Cyclizar_),
	SPECIES_SPRITE(ORTHWORM, gMonBackPic_Orthworm_),
	SPECIES_SPRITE(GLIMMET, gMonBackPic_Glimmet_),
	SPECIES_SPRITE(GLIMMORA, gMonBackPic_Glimmora_),
	SPECIES_SPRITE(GREAVARD, gMonBackPic_Greavard_),
	SPECIES_SPRITE(HOUNDSTONE, gMonBackPic_Houndstone_),
	SPECIES_SPRITE(FLAMIGO, gMonBackPic_Flamigo_),
	SPECIES_SPRITE(CETODDLE, gMonBackPic_Cetoddle_),
	SPECIES_SPRITE(CETITAN, gMonBackPic_Cetitan_),
	SPECIES_SPRITE(VELUZA, gMonBackPic_Veluza_),
	SPECIES_SPRITE(DONDOZO, gMonBackPic_Dondozo_),
	SPECIES_SPRITE(TATSUGIRI, gMonBackPic_Tatsugiri_),
	SPECIES_SPRITE(TATSUGIRI_2, gMonBackPic_Tatsugiri2_),
	SPECIES_SPRITE(TATSUGIRI_3, gMonBackPic_Tatsugiri3_),
	SPECIES_SPRITE(ANNIHILAPE, gMonBackPic_Annihilape_),
	SPECIES_SPRITE(CLODSIRE, gMonBackPic_Clodsire_),
	SPECIES_SPRITE(FARIGIRAF, gMonBackPic_Farigiraf_),
	SPECIES_SPRITE(DUDUNSPRCE, gMonBackPic_Dudunsprce_),
	SPECIES_SPRITE(DUDUNSPRCE_2, gMonBackPic_Dudunsprce2_),
	SPECIES_SPRITE(KINGAMBIT, gMonBackPic_Kingambit_),
	SPECIES_SPRITE(GREATTUSK, gMonBackPic_GreatTusk_),
	SPECIES_SPRITE(SCREAMTAIL, gMonBackPic_ScreamTail_),
	SPECIES_SPRITE(BRUTEBONET, gMonBackPic_BruteBonet_),
	SPECIES_SPRITE(FLUTTRMANE, gMonBackPic_FluttrMane_),
	SPECIES_SPRITE(SLITHRWING, gMonBackPic_SlithrWing_),
	SPECIES_SPRITE(SNDYSHOCKS, gMonBackPic_SndyShocks_),
	SPECIES_SPRITE(IRONTREADS, gMonBackPic_IronTreads_),
	SPECIES_SPRITE(IRONBUNDLE, gMonBackPic_IronBundle_),
	SPECIES_SPRITE(IRONHANDS, gMonBackPic_IronHands_),
	SPECIES_SPRITE(IRONJUGULS, gMonBackPic_IronJuguls_),
	SPECIES_SPRITE(IRONMOTH, gMonBackPic_IronMoth_),
	SPECIES_SPRITE(IRONTHORNS, gMonBackPic_IronThorns_),
	SPECIES_SPRITE(FRIGIBAX, gMonBackPic_Frigibax_),
	SPECIES_SPRITE(ARCTIBAX, gMonBackPic_Arctibax_),
	SPECIES_SPRITE(BAXCALIBUR, gMonBackPic_Baxcalibur_),
	SPECIES_SPRITE(GIMMIGHOUL, gMonBackPic_Gimmighoul_),
	SPECIES_SPRITE(GIMMIGHOUL_2, gMonBackPic_Gimmighoul2_),
	SPECIES_SPRITE(GHOLDENGO, gMonBackPic_Gholdengo_),
	SPECIES_SPRITE(WOCHIEN, gMonBackPic_WoChien_),
	SPECIES_SPRITE(CHIENPAO, gMonBackPic_ChienPao_),
	SPECIES_SPRITE(TINGLU, gMonBackPic_TingLu_),
	SPECIES_SPRITE(CHIYU, gMonBackPic_ChiYu_),
	SPECIES_SPRITE(ROARNGMOON, gMonBackPic_RoarngMoon_),
	SPECIES_SPRITE(IRONVLIANT, gMonBackPic_IronVliant_),
	SPECIES_SPRITE(KORAIDON, gMonBackPic_Koraidon_),
	SPECIES_SPRITE(MIRAIDON, gMonBackPic_Miraidon_),
	SPECIES_SPRITE(TAUROS_2, gMonBackPic_Tauros2_),
	SPECIES_SPRITE(TAUROS_3, gMonBackPic_Tauros3_),
	SPECIES_SPRITE(TAUROS_4, gMonBackPic_Tauros4_),
	SPECIES_SPRITE(WOOPER_2, gMonBackPic_Wooper2_),
	SPECIES_SPRITE(WALKNGWAKE, gMonBackPic_WalkngWake_),
	SPECIES_SPRITE(IRONLEAVES, gMonBackPic_IronLeaves_),
	SPECIES_SPRITE(DIPPLIN, gMonBackPic_Dipplin_),
	SPECIES_SPRITE(PTCHAGEIST, gMonBackPic_Ptchageist_),
	SPECIES_SPRITE(PTCHAGEIST_2, gMonBackPic_Ptchageist2_),
	SPECIES_SPRITE(SINISTCHA, gMonBackPic_Sinistcha_),
	SPECIES_SPRITE(SINISTCHA_2, gMonBackPic_Sinistcha2_),
	SPECIES_SPRITE(OKIDOGI, gMonBackPic_Okidogi_),
	SPECIES_SPRITE(MUNKIDORI, gMonBackPic_Munkidori_),
	SPECIES_SPRITE(FEZNDIPITI, gMonBackPic_Fezndipiti_),
	SPECIES_SPRITE(OGERPON, gMonBackPic_Ogerpon_),
	SPECIES_SPRITE(OGERPON_2, gMonBackPic_Ogerpon2_),
	SPECIES_SPRITE(OGERPON_3, gMonBackPic_Ogerpon3_),
	SPECIES_SPRITE(OGERPON_4, gMonBackPic_Ogerpon4_),
	SPECIES_SPRITE(OGERPON_5, gMonBackPic_Ogerpon5_),
	SPECIES_SPRITE(OGERPON_6, gMonBackPic_Ogerpon6_),
	SPECIES_SPRITE(OGERPON_7, gMonBackPic_Ogerpon7_),
	SPECIES_SPRITE(OGERPON_8, gMonBackPic_Ogerpon8_),
	SPECIES_SPRITE(URSALUNA_2, gMonBackPic_Ursaluna2_),
	SPECIES_SPRITE(ARCHALUDON, gMonBackPic_Archaludon_),
	SPECIES_SPRITE(HYDRAPPLE, gMonBackPic_Hydrapple_),
	SPECIES_SPRITE(GOUGINFIRE, gMonBackPic_GouginFire_),
	SPECIES_SPRITE(RAGINGBOLT, gMonBackPic_RagingBolt_),
	SPECIES_SPRITE(IRONBOULDR, gMonBackPic_IronBouldr_),
	SPECIES_SPRITE(IRONCROWN, gMonBackPic_IronCrown_),
	SPECIES_SPRITE(TERAPAGOS, gMonBackPic_Terapagos_),
	SPECIES_SPRITE(TERAPAGOS_2, gMonBackPic_Terapagos2_),
	SPECIES_SPRITE(TERAPAGOS_3, gMonBackPic_Terapagos3_),
	SPECIES_SPRITE(PECHARUNT, gMonBackPic_Pecharunt_),
	SPECIES_SPRITE(MOTHIM_2, gMonBackPic_Mothim2_),
	SPECIES_SPRITE(MOTHIM_3, gMonBackPic_Mothim3_),
	SPECIES_SPRITE(SCATTERBUG_2, gMonBackPic_Scatterbug2_),
	SPECIES_SPRITE(SCATTERBUG_3, gMonBackPic_Scatterbug3_),
	SPECIES_SPRITE(SCATTERBUG_4, gMonBackPic_Scatterbug4_),
	SPECIES_SPRITE(SCATTERBUG_5, gMonBackPic_Scatterbug5_),
	SPECIES_SPRITE(SCATTERBUG_6, gMonBackPic_Scatterbug6_),
	SPECIES_SPRITE(SCATTERBUG_7, gMonBackPic_Scatterbug7_),
	SPECIES_SPRITE(SCATTERBUG_8, gMonBackPic_Scatterbug8_),
	SPECIES_SPRITE(SCATTERBUG_9, gMonBackPic_Scatterbug9_),
	SPECIES_SPRITE(SCATTERBUG_10, gMonBackPic_Scatterbug10_),
	SPECIES_SPRITE(SCATTERBUG_11, gMonBackPic_Scatterbug11_),
	SPECIES_SPRITE(SCATTERBUG_12, gMonBackPic_Scatterbug12_),
	SPECIES_SPRITE(SCATTERBUG_13, gMonBackPic_Scatterbug13_),
	SPECIES_SPRITE(SCATTERBUG_14, gMonBackPic_Scatterbug14_),
	SPECIES_SPRITE(SCATTERBUG_15, gMonBackPic_Scatterbug15_),
	SPECIES_SPRITE(SCATTERBUG_16, gMonBackPic_Scatterbug16_),
	SPECIES_SPRITE(SCATTERBUG_17, gMonBackPic_Scatterbug17_),
	SPECIES_SPRITE(SCATTERBUG_18, gMonBackPic_Scatterbug18_),
	SPECIES_SPRITE(SCATTERBUG_19, gMonBackPic_Scatterbug19_),
	SPECIES_SPRITE(SCATTERBUG_20, gMonBackPic_Scatterbug20_),
	SPECIES_SPRITE(SPEWPA_2, gMonBackPic_Spewpa2_),
	SPECIES_SPRITE(SPEWPA_3, gMonBackPic_Spewpa3_),
	SPECIES_SPRITE(SPEWPA_4, gMonBackPic_Spewpa4_),
	SPECIES_SPRITE(SPEWPA_5, gMonBackPic_Spewpa5_),
	SPECIES_SPRITE(SPEWPA_6, gMonBackPic_Spewpa6_),
	SPECIES_SPRITE(SPEWPA_7, gMonBackPic_Spewpa7_),
	SPECIES_SPRITE(SPEWPA_8, gMonBackPic_Spewpa8_),
	SPECIES_SPRITE(SPEWPA_9, gMonBackPic_Spewpa9_),
	SPECIES_SPRITE(SPEWPA_10, gMonBackPic_Spewpa10_),
	SPECIES_SPRITE(SPEWPA_11, gMonBackPic_Spewpa11_),
	SPECIES_SPRITE(SPEWPA_12, gMonBackPic_Spewpa12_),
	SPECIES_SPRITE(SPEWPA_13, gMonBackPic_Spewpa13_),
	SPECIES_SPRITE(SPEWPA_14, gMonBackPic_Spewpa14_),
	SPECIES_SPRITE(SPEWPA_15, gMonBackPic_Spewpa15_),
	SPECIES_SPRITE(SPEWPA_16, gMonBackPic_Spewpa16_),
	SPECIES_SPRITE(SPEWPA_17, gMonBackPic_Spewpa17_),
	SPECIES_SPRITE(SPEWPA_18, gMonBackPic_Spewpa18_),
	SPECIES_SPRITE(SPEWPA_19, gMonBackPic_Spewpa19_),
	SPECIES_SPRITE(SPEWPA_20, gMonBackPic_Spewpa20_),
	SPECIES_SPRITE(RATICATE_3, gMonBackPic_Raticate3_),
	SPECIES_SPRITE(GUMSHOOS_2, gMonBackPic_Gumshoos2_),
	SPECIES_SPRITE(VIKAVOLT_2, gMonBackPic_Vikavolt2_),
	SPECIES_SPRITE(LURANTIS_2, gMonBackPic_Lurantis2_),
	SPECIES_SPRITE(SALAZZLE_2, gMonBackPic_Salazzle2_),
	SPECIES_SPRITE(MIMIKYU_3, gMonBackPic_Mimikyu3_),
	SPECIES_SPRITE(KOMMOO_2, gMonBackPic_Kommoo2_),
	SPECIES_SPRITE(MAROWAK_3, gMonBackPic_Marowak3_),
	SPECIES_SPRITE(RIBOMBEE_2, gMonBackPic_Ribombee2_),
	SPECIES_SPRITE(ARAQUANID_2, gMonBackPic_Araquanid2_),
	SPECIES_SPRITE(TOGEDEMARU_2, gMonBackPic_Togedemaru2_),
	SPECIES_SPRITE(PIKACHU_16, gMonBackPic_Pikachu16_),
	SPECIES_SPRITE(EEVEE_2, gMonBackPic_Eevee2_),
	SPECIES_SPRITE(VENUSAUR_3, gMonBackPic_Venusaur3_),
	SPECIES_SPRITE(BLASTOISE_3, gMonBackPic_Blastoise3_),
	SPECIES_SPRITE(CHARIZARD_4, gMonBackPic_Charizard4_),
	SPECIES_SPRITE(BUTTERFREE_2, gMonBackPic_Butterfree2_),
	SPECIES_SPRITE(PIKACHU_17, gMonBackPic_Pikachu17_),
	SPECIES_SPRITE(MEOWTH_4, gMonBackPic_Meowth4_),
	SPECIES_SPRITE(MACHAMP_2, gMonBackPic_Machamp2_),
	SPECIES_SPRITE(GENGAR_3, gMonBackPic_Gengar3_),
	SPECIES_SPRITE(KINGLER_2, gMonBackPic_Kingler2_),
	SPECIES_SPRITE(LAPRAS_2, gMonBackPic_Lapras2_),
	SPECIES_SPRITE(EEVEE_3, gMonBackPic_Eevee3_),
	SPECIES_SPRITE(SNORLAX_2, gMonBackPic_Snorlax2_),
	SPECIES_SPRITE(GARBODOR_2, gMonBackPic_Garbodor2_),
	SPECIES_SPRITE(MELMETAL_2, gMonBackPic_Melmetal2_),
	SPECIES_SPRITE(RILLABOOM_2, gMonBackPic_Rillaboom2_),
	SPECIES_SPRITE(CINDERACE_2, gMonBackPic_Cinderace2_),
	SPECIES_SPRITE(INTELEON_2, gMonBackPic_Inteleon2_),
	SPECIES_SPRITE(CORVIKNIGH_2, gMonBackPic_Corviknigh2_),
	SPECIES_SPRITE(ORBEETLE_2, gMonBackPic_Orbeetle2_),
	SPECIES_SPRITE(DREDNAW_2, gMonBackPic_Drednaw2_),
	SPECIES_SPRITE(COALOSSAL_2, gMonBackPic_Coalossal2_),
	SPECIES_SPRITE(FLAPPLE_2, gMonBackPic_Flapple2_),
	SPECIES_SPRITE(APPLETUN_2, gMonBackPic_Appletun2_),
	SPECIES_SPRITE(SANDACONDA_2, gMonBackPic_Sandaconda2_),
	SPECIES_SPRITE(TOXTRICITY_3, gMonBackPic_Toxtricity3_),
	SPECIES_SPRITE(TOXTRICITY_4, gMonBackPic_Toxtricity4_),
	SPECIES_SPRITE(CENTISKORC_2, gMonBackPic_Centiskorc2_),
	SPECIES_SPRITE(HATTERENE_2, gMonBackPic_Hatterene2_),
	SPECIES_SPRITE(GRIMMSNARL_2, gMonBackPic_Grimmsnarl2_),
	SPECIES_SPRITE(ALCREMIE_64, gMonBackPic_Alcremie64_),
	SPECIES_SPRITE(COPPERAJAH_2, gMonBackPic_Copperajah2_),
	SPECIES_SPRITE(DURALUDON_2, gMonBackPic_Duraludon2_),
	SPECIES_SPRITE(URSHIFU_3, gMonBackPic_Urshifu3_),
	SPECIES_SPRITE(URSHIFU_4, gMonBackPic_Urshifu4_),
	SPECIES_SPRITE(MIMIKYU_4, gMonBackPic_Mimikyu4_),
};