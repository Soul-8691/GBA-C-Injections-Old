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

extern const u8 gMonIcon_Bulbasaur_[];
extern const u8 gMonIcon_Ivysaur_[];
extern const u8 gMonIcon_Venusaur_[];
extern const u8 gMonIcon_Charmander_[];
extern const u8 gMonIcon_Charmeleon_[];
extern const u8 gMonIcon_Charizard_[];
extern const u8 gMonIcon_Squirtle_[];
extern const u8 gMonIcon_Wartortle_[];
extern const u8 gMonIcon_Blastoise_[];
extern const u8 gMonIcon_Caterpie_[];
extern const u8 gMonIcon_Metapod_[];
extern const u8 gMonIcon_Butterfree_[];
extern const u8 gMonIcon_Weedle_[];
extern const u8 gMonIcon_Kakuna_[];
extern const u8 gMonIcon_Beedrill_[];
extern const u8 gMonIcon_Pidgey_[];
extern const u8 gMonIcon_Pidgeotto_[];
extern const u8 gMonIcon_Pidgeot_[];
extern const u8 gMonIcon_Rattata_[];
extern const u8 gMonIcon_Raticate_[];
extern const u8 gMonIcon_Spearow_[];
extern const u8 gMonIcon_Fearow_[];
extern const u8 gMonIcon_Ekans_[];
extern const u8 gMonIcon_Arbok_[];
extern const u8 gMonIcon_Pikachu_[];
extern const u8 gMonIcon_Raichu_[];
extern const u8 gMonIcon_Sandshrew_[];
extern const u8 gMonIcon_Sandslash_[];
extern const u8 gMonIcon_Nidoransf_[];
extern const u8 gMonIcon_Nidorina_[];
extern const u8 gMonIcon_Nidoqueen_[];
extern const u8 gMonIcon_Nidoransm_[];
extern const u8 gMonIcon_Nidorino_[];
extern const u8 gMonIcon_Nidoking_[];
extern const u8 gMonIcon_Clefairy_[];
extern const u8 gMonIcon_Clefable_[];
extern const u8 gMonIcon_Vulpix_[];
extern const u8 gMonIcon_Ninetales_[];
extern const u8 gMonIcon_Jigglypuff_[];
extern const u8 gMonIcon_Wigglytuff_[];
extern const u8 gMonIcon_Zubat_[];
extern const u8 gMonIcon_Golbat_[];
extern const u8 gMonIcon_Oddish_[];
extern const u8 gMonIcon_Gloom_[];
extern const u8 gMonIcon_Vileplume_[];
extern const u8 gMonIcon_Paras_[];
extern const u8 gMonIcon_Parasect_[];
extern const u8 gMonIcon_Venonat_[];
extern const u8 gMonIcon_Venomoth_[];
extern const u8 gMonIcon_Diglett_[];
extern const u8 gMonIcon_Dugtrio_[];
extern const u8 gMonIcon_Meowth_[];
extern const u8 gMonIcon_Persian_[];
extern const u8 gMonIcon_Psyduck_[];
extern const u8 gMonIcon_Golduck_[];
extern const u8 gMonIcon_Mankey_[];
extern const u8 gMonIcon_Primeape_[];
extern const u8 gMonIcon_Growlithe_[];
extern const u8 gMonIcon_Arcanine_[];
extern const u8 gMonIcon_Poliwag_[];
extern const u8 gMonIcon_Poliwhirl_[];
extern const u8 gMonIcon_Poliwrath_[];
extern const u8 gMonIcon_Abra_[];
extern const u8 gMonIcon_Kadabra_[];
extern const u8 gMonIcon_Alakazam_[];
extern const u8 gMonIcon_Machop_[];
extern const u8 gMonIcon_Machoke_[];
extern const u8 gMonIcon_Machamp_[];
extern const u8 gMonIcon_Bellsprout_[];
extern const u8 gMonIcon_Weepinbell_[];
extern const u8 gMonIcon_Victreebel_[];
extern const u8 gMonIcon_Tentacool_[];
extern const u8 gMonIcon_Tentacruel_[];
extern const u8 gMonIcon_Geodude_[];
extern const u8 gMonIcon_Graveler_[];
extern const u8 gMonIcon_Golem_[];
extern const u8 gMonIcon_Ponyta_[];
extern const u8 gMonIcon_Rapidash_[];
extern const u8 gMonIcon_Slowpoke_[];
extern const u8 gMonIcon_Slowbro_[];
extern const u8 gMonIcon_Magnemite_[];
extern const u8 gMonIcon_Magneton_[];
extern const u8 gMonIcon_Farfetchd_[];
extern const u8 gMonIcon_Doduo_[];
extern const u8 gMonIcon_Dodrio_[];
extern const u8 gMonIcon_Seel_[];
extern const u8 gMonIcon_Dewgong_[];
extern const u8 gMonIcon_Grimer_[];
extern const u8 gMonIcon_Muk_[];
extern const u8 gMonIcon_Shellder_[];
extern const u8 gMonIcon_Cloyster_[];
extern const u8 gMonIcon_Gastly_[];
extern const u8 gMonIcon_Haunter_[];
extern const u8 gMonIcon_Gengar_[];
extern const u8 gMonIcon_Onix_[];
extern const u8 gMonIcon_Drowzee_[];
extern const u8 gMonIcon_Hypno_[];
extern const u8 gMonIcon_Krabby_[];
extern const u8 gMonIcon_Kingler_[];
extern const u8 gMonIcon_Voltorb_[];
extern const u8 gMonIcon_Electrode_[];
extern const u8 gMonIcon_Exeggcute_[];
extern const u8 gMonIcon_Exeggutor_[];
extern const u8 gMonIcon_Cubone_[];
extern const u8 gMonIcon_Marowak_[];
extern const u8 gMonIcon_Hitmonlee_[];
extern const u8 gMonIcon_Hitmonchan_[];
extern const u8 gMonIcon_Lickitung_[];
extern const u8 gMonIcon_Koffing_[];
extern const u8 gMonIcon_Weezing_[];
extern const u8 gMonIcon_Rhyhorn_[];
extern const u8 gMonIcon_Rhydon_[];
extern const u8 gMonIcon_Chansey_[];
extern const u8 gMonIcon_Tangela_[];
extern const u8 gMonIcon_Kangaskhan_[];
extern const u8 gMonIcon_Horsea_[];
extern const u8 gMonIcon_Seadra_[];
extern const u8 gMonIcon_Goldeen_[];
extern const u8 gMonIcon_Seaking_[];
extern const u8 gMonIcon_Staryu_[];
extern const u8 gMonIcon_Starmie_[];
extern const u8 gMonIcon_MrMime_[];
extern const u8 gMonIcon_Scyther_[];
extern const u8 gMonIcon_Jynx_[];
extern const u8 gMonIcon_Electabuzz_[];
extern const u8 gMonIcon_Magmar_[];
extern const u8 gMonIcon_Pinsir_[];
extern const u8 gMonIcon_Tauros_[];
extern const u8 gMonIcon_Magikarp_[];
extern const u8 gMonIcon_Gyarados_[];
extern const u8 gMonIcon_Lapras_[];
extern const u8 gMonIcon_Ditto_[];
extern const u8 gMonIcon_Eevee_[];
extern const u8 gMonIcon_Vaporeon_[];
extern const u8 gMonIcon_Jolteon_[];
extern const u8 gMonIcon_Flareon_[];
extern const u8 gMonIcon_Porygon_[];
extern const u8 gMonIcon_Omanyte_[];
extern const u8 gMonIcon_Omastar_[];
extern const u8 gMonIcon_Kabuto_[];
extern const u8 gMonIcon_Kabutops_[];
extern const u8 gMonIcon_Aerodactyl_[];
extern const u8 gMonIcon_Snorlax_[];
extern const u8 gMonIcon_Articuno_[];
extern const u8 gMonIcon_Zapdos_[];
extern const u8 gMonIcon_Moltres_[];
extern const u8 gMonIcon_Dratini_[];
extern const u8 gMonIcon_Dragonair_[];
extern const u8 gMonIcon_Dragonite_[];
extern const u8 gMonIcon_Mewtwo_[];
extern const u8 gMonIcon_Mew_[];
extern const u8 gMonIcon_Chikorita_[];
extern const u8 gMonIcon_Bayleef_[];
extern const u8 gMonIcon_Meganium_[];
extern const u8 gMonIcon_Cyndaquil_[];
extern const u8 gMonIcon_Quilava_[];
extern const u8 gMonIcon_Typhlosion_[];
extern const u8 gMonIcon_Totodile_[];
extern const u8 gMonIcon_Croconaw_[];
extern const u8 gMonIcon_Feraligatr_[];
extern const u8 gMonIcon_Sentret_[];
extern const u8 gMonIcon_Furret_[];
extern const u8 gMonIcon_Hoothoot_[];
extern const u8 gMonIcon_Noctowl_[];
extern const u8 gMonIcon_Ledyba_[];
extern const u8 gMonIcon_Ledian_[];
extern const u8 gMonIcon_Spinarak_[];
extern const u8 gMonIcon_Ariados_[];
extern const u8 gMonIcon_Crobat_[];
extern const u8 gMonIcon_Chinchou_[];
extern const u8 gMonIcon_Lanturn_[];
extern const u8 gMonIcon_Pichu_[];
extern const u8 gMonIcon_Cleffa_[];
extern const u8 gMonIcon_Igglybuff_[];
extern const u8 gMonIcon_Togepi_[];
extern const u8 gMonIcon_Togetic_[];
extern const u8 gMonIcon_Natu_[];
extern const u8 gMonIcon_Xatu_[];
extern const u8 gMonIcon_Mareep_[];
extern const u8 gMonIcon_Flaaffy_[];
extern const u8 gMonIcon_Ampharos_[];
extern const u8 gMonIcon_Bellossom_[];
extern const u8 gMonIcon_Marill_[];
extern const u8 gMonIcon_Azumarill_[];
extern const u8 gMonIcon_Sudowoodo_[];
extern const u8 gMonIcon_Politoed_[];
extern const u8 gMonIcon_Hoppip_[];
extern const u8 gMonIcon_Skiploom_[];
extern const u8 gMonIcon_Jumpluff_[];
extern const u8 gMonIcon_Aipom_[];
extern const u8 gMonIcon_Sunkern_[];
extern const u8 gMonIcon_Sunflora_[];
extern const u8 gMonIcon_Yanma_[];
extern const u8 gMonIcon_Wooper_[];
extern const u8 gMonIcon_Quagsire_[];
extern const u8 gMonIcon_Espeon_[];
extern const u8 gMonIcon_Umbreon_[];
extern const u8 gMonIcon_Murkrow_[];
extern const u8 gMonIcon_Slowking_[];
extern const u8 gMonIcon_Misdreavus_[];
extern const u8 gMonIcon_Unown_[];
extern const u8 gMonIcon_Wobbuffet_[];
extern const u8 gMonIcon_Girafarig_[];
extern const u8 gMonIcon_Pineco_[];
extern const u8 gMonIcon_Forretress_[];
extern const u8 gMonIcon_Dunsparce_[];
extern const u8 gMonIcon_Gligar_[];
extern const u8 gMonIcon_Steelix_[];
extern const u8 gMonIcon_Snubbull_[];
extern const u8 gMonIcon_Granbull_[];
extern const u8 gMonIcon_Qwilfish_[];
extern const u8 gMonIcon_Scizor_[];
extern const u8 gMonIcon_Shuckle_[];
extern const u8 gMonIcon_Heracross_[];
extern const u8 gMonIcon_Sneasel_[];
extern const u8 gMonIcon_Teddiursa_[];
extern const u8 gMonIcon_Ursaring_[];
extern const u8 gMonIcon_Slugma_[];
extern const u8 gMonIcon_Magcargo_[];
extern const u8 gMonIcon_Swinub_[];
extern const u8 gMonIcon_Piloswine_[];
extern const u8 gMonIcon_Corsola_[];
extern const u8 gMonIcon_Remoraid_[];
extern const u8 gMonIcon_Octillery_[];
extern const u8 gMonIcon_Delibird_[];
extern const u8 gMonIcon_Mantine_[];
extern const u8 gMonIcon_Skarmory_[];
extern const u8 gMonIcon_Houndour_[];
extern const u8 gMonIcon_Houndoom_[];
extern const u8 gMonIcon_Kingdra_[];
extern const u8 gMonIcon_Phanpy_[];
extern const u8 gMonIcon_Donphan_[];
extern const u8 gMonIcon_Porygon2_[];
extern const u8 gMonIcon_Stantler_[];
extern const u8 gMonIcon_Smeargle_[];
extern const u8 gMonIcon_Tyrogue_[];
extern const u8 gMonIcon_Hitmontop_[];
extern const u8 gMonIcon_Smoochum_[];
extern const u8 gMonIcon_Elekid_[];
extern const u8 gMonIcon_Magby_[];
extern const u8 gMonIcon_Miltank_[];
extern const u8 gMonIcon_Blissey_[];
extern const u8 gMonIcon_Raikou_[];
extern const u8 gMonIcon_Entei_[];
extern const u8 gMonIcon_Suicune_[];
extern const u8 gMonIcon_Larvitar_[];
extern const u8 gMonIcon_Pupitar_[];
extern const u8 gMonIcon_Tyranitar_[];
extern const u8 gMonIcon_Lugia_[];
extern const u8 gMonIcon_HoOh_[];
extern const u8 gMonIcon_Celebi_[];
extern const u8 gMonIcon_Treecko_[];
extern const u8 gMonIcon_Grovyle_[];
extern const u8 gMonIcon_Sceptile_[];
extern const u8 gMonIcon_Torchic_[];
extern const u8 gMonIcon_Combusken_[];
extern const u8 gMonIcon_Blaziken_[];
extern const u8 gMonIcon_Mudkip_[];
extern const u8 gMonIcon_Marshtomp_[];
extern const u8 gMonIcon_Swampert_[];
extern const u8 gMonIcon_Poochyena_[];
extern const u8 gMonIcon_Mightyena_[];
extern const u8 gMonIcon_Zigzagoon_[];
extern const u8 gMonIcon_Linoone_[];
extern const u8 gMonIcon_Wurmple_[];
extern const u8 gMonIcon_Silcoon_[];
extern const u8 gMonIcon_Beautifly_[];
extern const u8 gMonIcon_Cascoon_[];
extern const u8 gMonIcon_Dustox_[];
extern const u8 gMonIcon_Lotad_[];
extern const u8 gMonIcon_Lombre_[];
extern const u8 gMonIcon_Ludicolo_[];
extern const u8 gMonIcon_Seedot_[];
extern const u8 gMonIcon_Nuzleaf_[];
extern const u8 gMonIcon_Shiftry_[];
extern const u8 gMonIcon_Taillow_[];
extern const u8 gMonIcon_Swellow_[];
extern const u8 gMonIcon_Wingull_[];
extern const u8 gMonIcon_Pelipper_[];
extern const u8 gMonIcon_Ralts_[];
extern const u8 gMonIcon_Kirlia_[];
extern const u8 gMonIcon_Gardevoir_[];
extern const u8 gMonIcon_Surskit_[];
extern const u8 gMonIcon_Masquerain_[];
extern const u8 gMonIcon_Shroomish_[];
extern const u8 gMonIcon_Breloom_[];
extern const u8 gMonIcon_Slakoth_[];
extern const u8 gMonIcon_Vigoroth_[];
extern const u8 gMonIcon_Slaking_[];
extern const u8 gMonIcon_Nincada_[];
extern const u8 gMonIcon_Ninjask_[];
extern const u8 gMonIcon_Shedinja_[];
extern const u8 gMonIcon_Whismur_[];
extern const u8 gMonIcon_Loudred_[];
extern const u8 gMonIcon_Exploud_[];
extern const u8 gMonIcon_Makuhita_[];
extern const u8 gMonIcon_Hariyama_[];
extern const u8 gMonIcon_Azurill_[];
extern const u8 gMonIcon_Nosepass_[];
extern const u8 gMonIcon_Skitty_[];
extern const u8 gMonIcon_Delcatty_[];
extern const u8 gMonIcon_Sableye_[];
extern const u8 gMonIcon_Mawile_[];
extern const u8 gMonIcon_Aron_[];
extern const u8 gMonIcon_Lairon_[];
extern const u8 gMonIcon_Aggron_[];
extern const u8 gMonIcon_Meditite_[];
extern const u8 gMonIcon_Medicham_[];
extern const u8 gMonIcon_Electrike_[];
extern const u8 gMonIcon_Manectric_[];
extern const u8 gMonIcon_Plusle_[];
extern const u8 gMonIcon_Minun_[];
extern const u8 gMonIcon_Volbeat_[];
extern const u8 gMonIcon_Illumise_[];
extern const u8 gMonIcon_Roselia_[];
extern const u8 gMonIcon_Gulpin_[];
extern const u8 gMonIcon_Swalot_[];
extern const u8 gMonIcon_Carvanha_[];
extern const u8 gMonIcon_Sharpedo_[];
extern const u8 gMonIcon_Wailmer_[];
extern const u8 gMonIcon_Wailord_[];
extern const u8 gMonIcon_Numel_[];
extern const u8 gMonIcon_Camerupt_[];
extern const u8 gMonIcon_Torkoal_[];
extern const u8 gMonIcon_Spoink_[];
extern const u8 gMonIcon_Grumpig_[];
extern const u8 gMonIcon_Spinda_[];
extern const u8 gMonIcon_Trapinch_[];
extern const u8 gMonIcon_Vibrava_[];
extern const u8 gMonIcon_Flygon_[];
extern const u8 gMonIcon_Cacnea_[];
extern const u8 gMonIcon_Cacturne_[];
extern const u8 gMonIcon_Swablu_[];
extern const u8 gMonIcon_Altaria_[];
extern const u8 gMonIcon_Zangoose_[];
extern const u8 gMonIcon_Seviper_[];
extern const u8 gMonIcon_Lunatone_[];
extern const u8 gMonIcon_Solrock_[];
extern const u8 gMonIcon_Barboach_[];
extern const u8 gMonIcon_Whiscash_[];
extern const u8 gMonIcon_Corphish_[];
extern const u8 gMonIcon_Crawdaunt_[];
extern const u8 gMonIcon_Baltoy_[];
extern const u8 gMonIcon_Claydol_[];
extern const u8 gMonIcon_Lileep_[];
extern const u8 gMonIcon_Cradily_[];
extern const u8 gMonIcon_Anorith_[];
extern const u8 gMonIcon_Armaldo_[];
extern const u8 gMonIcon_Feebas_[];
extern const u8 gMonIcon_Milotic_[];
extern const u8 gMonIcon_Castform_[];
extern const u8 gMonIcon_Kecleon_[];
extern const u8 gMonIcon_Shuppet_[];
extern const u8 gMonIcon_Banette_[];
extern const u8 gMonIcon_Duskull_[];
extern const u8 gMonIcon_Dusclops_[];
extern const u8 gMonIcon_Tropius_[];
extern const u8 gMonIcon_Chimecho_[];
extern const u8 gMonIcon_Absol_[];
extern const u8 gMonIcon_Wynaut_[];
extern const u8 gMonIcon_Snorunt_[];
extern const u8 gMonIcon_Glalie_[];
extern const u8 gMonIcon_Spheal_[];
extern const u8 gMonIcon_Sealeo_[];
extern const u8 gMonIcon_Walrein_[];
extern const u8 gMonIcon_Clamperl_[];
extern const u8 gMonIcon_Huntail_[];
extern const u8 gMonIcon_Gorebyss_[];
extern const u8 gMonIcon_Relicanth_[];
extern const u8 gMonIcon_Luvdisc_[];
extern const u8 gMonIcon_Bagon_[];
extern const u8 gMonIcon_Shelgon_[];
extern const u8 gMonIcon_Salamence_[];
extern const u8 gMonIcon_Beldum_[];
extern const u8 gMonIcon_Metang_[];
extern const u8 gMonIcon_Metagross_[];
extern const u8 gMonIcon_Regirock_[];
extern const u8 gMonIcon_Regice_[];
extern const u8 gMonIcon_Registeel_[];
extern const u8 gMonIcon_Latias_[];
extern const u8 gMonIcon_Latios_[];
extern const u8 gMonIcon_Kyogre_[];
extern const u8 gMonIcon_Groudon_[];
extern const u8 gMonIcon_Rayquaza_[];
extern const u8 gMonIcon_Jirachi_[];
extern const u8 gMonIcon_Deoxys_[];
extern const u8 gMonIcon_Turtwig_[];
extern const u8 gMonIcon_Grotle_[];
extern const u8 gMonIcon_Torterra_[];
extern const u8 gMonIcon_Chimchar_[];
extern const u8 gMonIcon_Monferno_[];
extern const u8 gMonIcon_Infernape_[];
extern const u8 gMonIcon_Piplup_[];
extern const u8 gMonIcon_Prinplup_[];
extern const u8 gMonIcon_Empoleon_[];
extern const u8 gMonIcon_Starly_[];
extern const u8 gMonIcon_Staravia_[];
extern const u8 gMonIcon_Staraptor_[];
extern const u8 gMonIcon_Bidoof_[];
extern const u8 gMonIcon_Bibarel_[];
extern const u8 gMonIcon_Kricketot_[];
extern const u8 gMonIcon_Kricketune_[];
extern const u8 gMonIcon_Shinx_[];
extern const u8 gMonIcon_Luxio_[];
extern const u8 gMonIcon_Luxray_[];
extern const u8 gMonIcon_Budew_[];
extern const u8 gMonIcon_Roserade_[];
extern const u8 gMonIcon_Cranidos_[];
extern const u8 gMonIcon_Rampardos_[];
extern const u8 gMonIcon_Shieldon_[];
extern const u8 gMonIcon_Bastiodon_[];
extern const u8 gMonIcon_Burmy_[];
extern const u8 gMonIcon_Wormadam_[];
extern const u8 gMonIcon_Mothim_[];
extern const u8 gMonIcon_Combee_[];
extern const u8 gMonIcon_Vespiquen_[];
extern const u8 gMonIcon_Pachirisu_[];
extern const u8 gMonIcon_Buizel_[];
extern const u8 gMonIcon_Floatzel_[];
extern const u8 gMonIcon_Cherubi_[];
extern const u8 gMonIcon_Cherrim_[];
extern const u8 gMonIcon_Shellos_[];
extern const u8 gMonIcon_Gastrodon_[];
extern const u8 gMonIcon_Ambipom_[];
extern const u8 gMonIcon_Drifloon_[];
extern const u8 gMonIcon_Drifblim_[];
extern const u8 gMonIcon_Buneary_[];
extern const u8 gMonIcon_Lopunny_[];
extern const u8 gMonIcon_Mismagius_[];
extern const u8 gMonIcon_Honchkrow_[];
extern const u8 gMonIcon_Glameow_[];
extern const u8 gMonIcon_Purugly_[];
extern const u8 gMonIcon_Chingling_[];
extern const u8 gMonIcon_Stunky_[];
extern const u8 gMonIcon_Skuntank_[];
extern const u8 gMonIcon_Bronzor_[];
extern const u8 gMonIcon_Bronzong_[];
extern const u8 gMonIcon_Bonsly_[];
extern const u8 gMonIcon_MimeJr_[];
extern const u8 gMonIcon_Happiny_[];
extern const u8 gMonIcon_Chatot_[];
extern const u8 gMonIcon_Spiritomb_[];
extern const u8 gMonIcon_Gible_[];
extern const u8 gMonIcon_Gabite_[];
extern const u8 gMonIcon_Garchomp_[];
extern const u8 gMonIcon_Munchlax_[];
extern const u8 gMonIcon_Riolu_[];
extern const u8 gMonIcon_Lucario_[];
extern const u8 gMonIcon_Hippopotas_[];
extern const u8 gMonIcon_Hippowdon_[];
extern const u8 gMonIcon_Skorupi_[];
extern const u8 gMonIcon_Drapion_[];
extern const u8 gMonIcon_Croagunk_[];
extern const u8 gMonIcon_Toxicroak_[];
extern const u8 gMonIcon_Carnivine_[];
extern const u8 gMonIcon_Finneon_[];
extern const u8 gMonIcon_Lumineon_[];
extern const u8 gMonIcon_Mantyke_[];
extern const u8 gMonIcon_Snover_[];
extern const u8 gMonIcon_Abomasnow_[];
extern const u8 gMonIcon_Weavile_[];
extern const u8 gMonIcon_Magnezone_[];
extern const u8 gMonIcon_Lickilicky_[];
extern const u8 gMonIcon_Rhyperior_[];
extern const u8 gMonIcon_Tangrowth_[];
extern const u8 gMonIcon_Electivire_[];
extern const u8 gMonIcon_Magmortar_[];
extern const u8 gMonIcon_Togekiss_[];
extern const u8 gMonIcon_Yanmega_[];
extern const u8 gMonIcon_Leafeon_[];
extern const u8 gMonIcon_Glaceon_[];
extern const u8 gMonIcon_Gliscor_[];
extern const u8 gMonIcon_Mamoswine_[];
extern const u8 gMonIcon_PorygonZ_[];
extern const u8 gMonIcon_Gallade_[];
extern const u8 gMonIcon_Probopass_[];
extern const u8 gMonIcon_Dusknoir_[];
extern const u8 gMonIcon_Froslass_[];
extern const u8 gMonIcon_Rotom_[];
extern const u8 gMonIcon_Uxie_[];
extern const u8 gMonIcon_Mesprit_[];
extern const u8 gMonIcon_Azelf_[];
extern const u8 gMonIcon_Dialga_[];
extern const u8 gMonIcon_Palkia_[];
extern const u8 gMonIcon_Heatran_[];
extern const u8 gMonIcon_Regigigas_[];
extern const u8 gMonIcon_Giratina_[];
extern const u8 gMonIcon_Cresselia_[];
extern const u8 gMonIcon_Phione_[];
extern const u8 gMonIcon_Manaphy_[];
extern const u8 gMonIcon_Darkrai_[];
extern const u8 gMonIcon_Shaymin_[];
extern const u8 gMonIcon_Arceus_[];
extern const u8 gMonIcon_Victini_[];
extern const u8 gMonIcon_Snivy_[];
extern const u8 gMonIcon_Servine_[];
extern const u8 gMonIcon_Serperior_[];
extern const u8 gMonIcon_Tepig_[];
extern const u8 gMonIcon_Pignite_[];
extern const u8 gMonIcon_Emboar_[];
extern const u8 gMonIcon_Oshawott_[];
extern const u8 gMonIcon_Dewott_[];
extern const u8 gMonIcon_Samurott_[];
extern const u8 gMonIcon_Patrat_[];
extern const u8 gMonIcon_Watchog_[];
extern const u8 gMonIcon_Lillipup_[];
extern const u8 gMonIcon_Herdier_[];
extern const u8 gMonIcon_Stoutland_[];
extern const u8 gMonIcon_Purrloin_[];
extern const u8 gMonIcon_Liepard_[];
extern const u8 gMonIcon_Pansage_[];
extern const u8 gMonIcon_Simisage_[];
extern const u8 gMonIcon_Pansear_[];
extern const u8 gMonIcon_Simisear_[];
extern const u8 gMonIcon_Panpour_[];
extern const u8 gMonIcon_Simipour_[];
extern const u8 gMonIcon_Munna_[];
extern const u8 gMonIcon_Musharna_[];
extern const u8 gMonIcon_Pidove_[];
extern const u8 gMonIcon_Tranquill_[];
extern const u8 gMonIcon_Unfezant_[];
extern const u8 gMonIcon_Blitzle_[];
extern const u8 gMonIcon_Zebstrika_[];
extern const u8 gMonIcon_Roggenrola_[];
extern const u8 gMonIcon_Boldore_[];
extern const u8 gMonIcon_Gigalith_[];
extern const u8 gMonIcon_Woobat_[];
extern const u8 gMonIcon_Swoobat_[];
extern const u8 gMonIcon_Drilbur_[];
extern const u8 gMonIcon_Excadrill_[];
extern const u8 gMonIcon_Audino_[];
extern const u8 gMonIcon_Timburr_[];
extern const u8 gMonIcon_Gurdurr_[];
extern const u8 gMonIcon_Conkeldurr_[];
extern const u8 gMonIcon_Tympole_[];
extern const u8 gMonIcon_Palpitoad_[];
extern const u8 gMonIcon_Seismitoad_[];
extern const u8 gMonIcon_Throh_[];
extern const u8 gMonIcon_Sawk_[];
extern const u8 gMonIcon_Sewaddle_[];
extern const u8 gMonIcon_Swadloon_[];
extern const u8 gMonIcon_Leavanny_[];
extern const u8 gMonIcon_Venipede_[];
extern const u8 gMonIcon_Whirlipede_[];
extern const u8 gMonIcon_Scolipede_[];
extern const u8 gMonIcon_Cottonee_[];
extern const u8 gMonIcon_Whimsicott_[];
extern const u8 gMonIcon_Petilil_[];
extern const u8 gMonIcon_Lilligant_[];
extern const u8 gMonIcon_Basculin_[];
extern const u8 gMonIcon_Sandile_[];
extern const u8 gMonIcon_Krokorok_[];
extern const u8 gMonIcon_Krookodile_[];
extern const u8 gMonIcon_Darumaka_[];
extern const u8 gMonIcon_Darmanitan_[];
extern const u8 gMonIcon_Maractus_[];
extern const u8 gMonIcon_Dwebble_[];
extern const u8 gMonIcon_Crustle_[];
extern const u8 gMonIcon_Scraggy_[];
extern const u8 gMonIcon_Scrafty_[];
extern const u8 gMonIcon_Sigilyph_[];
extern const u8 gMonIcon_Yamask_[];
extern const u8 gMonIcon_Cofagrigus_[];
extern const u8 gMonIcon_Tirtouga_[];
extern const u8 gMonIcon_Carracosta_[];
extern const u8 gMonIcon_Archen_[];
extern const u8 gMonIcon_Archeops_[];
extern const u8 gMonIcon_Trubbish_[];
extern const u8 gMonIcon_Garbodor_[];
extern const u8 gMonIcon_Zorua_[];
extern const u8 gMonIcon_Zoroark_[];
extern const u8 gMonIcon_Minccino_[];
extern const u8 gMonIcon_Cinccino_[];
extern const u8 gMonIcon_Gothita_[];
extern const u8 gMonIcon_Gothorita_[];
extern const u8 gMonIcon_Gothitelle_[];
extern const u8 gMonIcon_Solosis_[];
extern const u8 gMonIcon_Duosion_[];
extern const u8 gMonIcon_Reuniclus_[];
extern const u8 gMonIcon_Ducklett_[];
extern const u8 gMonIcon_Swanna_[];
extern const u8 gMonIcon_Vanillite_[];
extern const u8 gMonIcon_Vanillish_[];
extern const u8 gMonIcon_Vanilluxe_[];
extern const u8 gMonIcon_Deerling_[];
extern const u8 gMonIcon_Sawsbuck_[];
extern const u8 gMonIcon_Emolga_[];
extern const u8 gMonIcon_Karrablast_[];
extern const u8 gMonIcon_Escavalier_[];
extern const u8 gMonIcon_Foongus_[];
extern const u8 gMonIcon_Amoonguss_[];
extern const u8 gMonIcon_Frillish_[];
extern const u8 gMonIcon_Jellicent_[];
extern const u8 gMonIcon_Alomomola_[];
extern const u8 gMonIcon_Joltik_[];
extern const u8 gMonIcon_Galvantula_[];
extern const u8 gMonIcon_Ferroseed_[];
extern const u8 gMonIcon_Ferrothorn_[];
extern const u8 gMonIcon_Klink_[];
extern const u8 gMonIcon_Klang_[];
extern const u8 gMonIcon_Klinklang_[];
extern const u8 gMonIcon_Tynamo_[];
extern const u8 gMonIcon_Eelektrik_[];
extern const u8 gMonIcon_Eelektross_[];
extern const u8 gMonIcon_Elgyem_[];
extern const u8 gMonIcon_Beheeyem_[];
extern const u8 gMonIcon_Litwick_[];
extern const u8 gMonIcon_Lampent_[];
extern const u8 gMonIcon_Chandelure_[];
extern const u8 gMonIcon_Axew_[];
extern const u8 gMonIcon_Fraxure_[];
extern const u8 gMonIcon_Haxorus_[];
extern const u8 gMonIcon_Cubchoo_[];
extern const u8 gMonIcon_Beartic_[];
extern const u8 gMonIcon_Cryogonal_[];
extern const u8 gMonIcon_Shelmet_[];
extern const u8 gMonIcon_Accelgor_[];
extern const u8 gMonIcon_Stunfisk_[];
extern const u8 gMonIcon_Mienfoo_[];
extern const u8 gMonIcon_Mienshao_[];
extern const u8 gMonIcon_Druddigon_[];
extern const u8 gMonIcon_Golett_[];
extern const u8 gMonIcon_Golurk_[];
extern const u8 gMonIcon_Pawniard_[];
extern const u8 gMonIcon_Bisharp_[];
extern const u8 gMonIcon_Bouffalant_[];
extern const u8 gMonIcon_Rufflet_[];
extern const u8 gMonIcon_Braviary_[];
extern const u8 gMonIcon_Vullaby_[];
extern const u8 gMonIcon_Mandibuzz_[];
extern const u8 gMonIcon_Heatmor_[];
extern const u8 gMonIcon_Durant_[];
extern const u8 gMonIcon_Deino_[];
extern const u8 gMonIcon_Zweilous_[];
extern const u8 gMonIcon_Hydreigon_[];
extern const u8 gMonIcon_Larvesta_[];
extern const u8 gMonIcon_Volcarona_[];
extern const u8 gMonIcon_Cobalion_[];
extern const u8 gMonIcon_Terrakion_[];
extern const u8 gMonIcon_Virizion_[];
extern const u8 gMonIcon_Tornadus_[];
extern const u8 gMonIcon_Thundurus_[];
extern const u8 gMonIcon_Reshiram_[];
extern const u8 gMonIcon_Zekrom_[];
extern const u8 gMonIcon_Landorus_[];
extern const u8 gMonIcon_Kyurem_[];
extern const u8 gMonIcon_Keldeo_[];
extern const u8 gMonIcon_Meloetta_[];
extern const u8 gMonIcon_Genesect_[];
extern const u8 gMonIcon_Chespin_[];
extern const u8 gMonIcon_Quilladin_[];
extern const u8 gMonIcon_Chesnaught_[];
extern const u8 gMonIcon_Fennekin_[];
extern const u8 gMonIcon_Braixen_[];
extern const u8 gMonIcon_Delphox_[];
extern const u8 gMonIcon_Froakie_[];
extern const u8 gMonIcon_Frogadier_[];
extern const u8 gMonIcon_Greninja_[];
extern const u8 gMonIcon_Bunnelby_[];
extern const u8 gMonIcon_Diggersby_[];
extern const u8 gMonIcon_Fletchling_[];
extern const u8 gMonIcon_Flechinder_[];
extern const u8 gMonIcon_Talonflame_[];
extern const u8 gMonIcon_Scatterbug_[];
extern const u8 gMonIcon_Spewpa_[];
extern const u8 gMonIcon_Vivillon_[];
extern const u8 gMonIcon_Litleo_[];
extern const u8 gMonIcon_Pyroar_[];
extern const u8 gMonIcon_Flabebe_[];
extern const u8 gMonIcon_Floette_[];
extern const u8 gMonIcon_Florges_[];
extern const u8 gMonIcon_Skiddo_[];
extern const u8 gMonIcon_Gogoat_[];
extern const u8 gMonIcon_Pancham_[];
extern const u8 gMonIcon_Pangoro_[];
extern const u8 gMonIcon_Furfrou_[];
extern const u8 gMonIcon_Espurr_[];
extern const u8 gMonIcon_Meowstic_[];
extern const u8 gMonIcon_Honedge_[];
extern const u8 gMonIcon_Doublade_[];
extern const u8 gMonIcon_Aegislash_[];
extern const u8 gMonIcon_Spritzee_[];
extern const u8 gMonIcon_Aromatisse_[];
extern const u8 gMonIcon_Swirlix_[];
extern const u8 gMonIcon_Slurpuff_[];
extern const u8 gMonIcon_Inkay_[];
extern const u8 gMonIcon_Malamar_[];
extern const u8 gMonIcon_Binacle_[];
extern const u8 gMonIcon_Barbaracle_[];
extern const u8 gMonIcon_Skrelp_[];
extern const u8 gMonIcon_Dragalge_[];
extern const u8 gMonIcon_Clauncher_[];
extern const u8 gMonIcon_Clawitzer_[];
extern const u8 gMonIcon_Helioptile_[];
extern const u8 gMonIcon_Heliolisk_[];
extern const u8 gMonIcon_Tyrunt_[];
extern const u8 gMonIcon_Tyrantrum_[];
extern const u8 gMonIcon_Amaura_[];
extern const u8 gMonIcon_Aurorus_[];
extern const u8 gMonIcon_Sylveon_[];
extern const u8 gMonIcon_Hawlucha_[];
extern const u8 gMonIcon_Dedenne_[];
extern const u8 gMonIcon_Carbink_[];
extern const u8 gMonIcon_Goomy_[];
extern const u8 gMonIcon_Sliggoo_[];
extern const u8 gMonIcon_Goodra_[];
extern const u8 gMonIcon_Klefki_[];
extern const u8 gMonIcon_Phantump_[];
extern const u8 gMonIcon_Trevenant_[];
extern const u8 gMonIcon_Pumpkaboo_[];
extern const u8 gMonIcon_Gourgeist_[];
extern const u8 gMonIcon_Bergmite_[];
extern const u8 gMonIcon_Avalugg_[];
extern const u8 gMonIcon_Noibat_[];
extern const u8 gMonIcon_Noivern_[];
extern const u8 gMonIcon_Xerneas_[];
extern const u8 gMonIcon_Yveltal_[];
extern const u8 gMonIcon_Zygarde_[];
extern const u8 gMonIcon_Diancie_[];
extern const u8 gMonIcon_Hoopa_[];
extern const u8 gMonIcon_Volcanion_[];
extern const u8 gMonIcon_Rowlet_[];
extern const u8 gMonIcon_Dartrix_[];
extern const u8 gMonIcon_Decidueye_[];
extern const u8 gMonIcon_Litten_[];
extern const u8 gMonIcon_Torracat_[];
extern const u8 gMonIcon_Incineroar_[];
extern const u8 gMonIcon_Popplio_[];
extern const u8 gMonIcon_Brionne_[];
extern const u8 gMonIcon_Primarina_[];
extern const u8 gMonIcon_Pikipek_[];
extern const u8 gMonIcon_Trumbeak_[];
extern const u8 gMonIcon_Toucannon_[];
extern const u8 gMonIcon_Yungoos_[];
extern const u8 gMonIcon_Gumshoos_[];
extern const u8 gMonIcon_Grubbin_[];
extern const u8 gMonIcon_Charjabug_[];
extern const u8 gMonIcon_Vikavolt_[];
extern const u8 gMonIcon_Crabrawler_[];
extern const u8 gMonIcon_Crabminabl_[];
extern const u8 gMonIcon_Oricorio_[];
extern const u8 gMonIcon_Cutiefly_[];
extern const u8 gMonIcon_Ribombee_[];
extern const u8 gMonIcon_Rockruff_[];
extern const u8 gMonIcon_Lycanroc_[];
extern const u8 gMonIcon_Wishiwashi_[];
extern const u8 gMonIcon_Mareanie_[];
extern const u8 gMonIcon_Toxapex_[];
extern const u8 gMonIcon_Mudbray_[];
extern const u8 gMonIcon_Mudsdale_[];
extern const u8 gMonIcon_Dewpider_[];
extern const u8 gMonIcon_Araquanid_[];
extern const u8 gMonIcon_Fomantis_[];
extern const u8 gMonIcon_Lurantis_[];
extern const u8 gMonIcon_Morelull_[];
extern const u8 gMonIcon_Shiinotic_[];
extern const u8 gMonIcon_Salandit_[];
extern const u8 gMonIcon_Salazzle_[];
extern const u8 gMonIcon_Stufful_[];
extern const u8 gMonIcon_Bewear_[];
extern const u8 gMonIcon_Bounsweet_[];
extern const u8 gMonIcon_Steenee_[];
extern const u8 gMonIcon_Tsareena_[];
extern const u8 gMonIcon_Comfey_[];
extern const u8 gMonIcon_Oranguru_[];
extern const u8 gMonIcon_Passimian_[];
extern const u8 gMonIcon_Wimpod_[];
extern const u8 gMonIcon_Golisopod_[];
extern const u8 gMonIcon_Sandygast_[];
extern const u8 gMonIcon_Palossand_[];
extern const u8 gMonIcon_Pyukumuku_[];
extern const u8 gMonIcon_TypeNull_[];
extern const u8 gMonIcon_Silvally_[];
extern const u8 gMonIcon_Minior_[];
extern const u8 gMonIcon_Komala_[];
extern const u8 gMonIcon_Turtonator_[];
extern const u8 gMonIcon_Togedemaru_[];
extern const u8 gMonIcon_Mimikyu_[];
extern const u8 gMonIcon_Bruxish_[];
extern const u8 gMonIcon_Drampa_[];
extern const u8 gMonIcon_Dhelmise_[];
extern const u8 gMonIcon_Jangmoo_[];
extern const u8 gMonIcon_Hakamoo_[];
extern const u8 gMonIcon_Kommoo_[];
extern const u8 gMonIcon_TapuKoko_[];
extern const u8 gMonIcon_TapuLele_[];
extern const u8 gMonIcon_TapuBulu_[];
extern const u8 gMonIcon_TapuFini_[];
extern const u8 gMonIcon_Cosmog_[];
extern const u8 gMonIcon_Cosmoem_[];
extern const u8 gMonIcon_Solgaleo_[];
extern const u8 gMonIcon_Lunala_[];
extern const u8 gMonIcon_Nihilego_[];
extern const u8 gMonIcon_Buzzwole_[];
extern const u8 gMonIcon_Pheromosa_[];
extern const u8 gMonIcon_Xurkitree_[];
extern const u8 gMonIcon_Celesteela_[];
extern const u8 gMonIcon_Kartana_[];
extern const u8 gMonIcon_Guzzlord_[];
extern const u8 gMonIcon_Necrozma_[];
extern const u8 gMonIcon_Magearna_[];
extern const u8 gMonIcon_Marshadow_[];
extern const u8 gMonIcon_Poipole_[];
extern const u8 gMonIcon_Naganadel_[];
extern const u8 gMonIcon_Stakataka_[];
extern const u8 gMonIcon_Blacephaln_[];
extern const u8 gMonIcon_Zeraora_[];
extern const u8 gMonIcon_Meltan_[];
extern const u8 gMonIcon_Melmetal_[];
extern const u8 gMonIcon_Grookey_[];
extern const u8 gMonIcon_Thwackey_[];
extern const u8 gMonIcon_Rillaboom_[];
extern const u8 gMonIcon_Scorbunny_[];
extern const u8 gMonIcon_Raboot_[];
extern const u8 gMonIcon_Cinderace_[];
extern const u8 gMonIcon_Sobble_[];
extern const u8 gMonIcon_Drizzile_[];
extern const u8 gMonIcon_Inteleon_[];
extern const u8 gMonIcon_Skwovet_[];
extern const u8 gMonIcon_Greedent_[];
extern const u8 gMonIcon_Rookidee_[];
extern const u8 gMonIcon_Corvisquir_[];
extern const u8 gMonIcon_Corviknigh_[];
extern const u8 gMonIcon_Blipbug_[];
extern const u8 gMonIcon_Dottler_[];
extern const u8 gMonIcon_Orbeetle_[];
extern const u8 gMonIcon_Nickit_[];
extern const u8 gMonIcon_Thievul_[];
extern const u8 gMonIcon_Gossifleur_[];
extern const u8 gMonIcon_Eldegoss_[];
extern const u8 gMonIcon_Wooloo_[];
extern const u8 gMonIcon_Dubwool_[];
extern const u8 gMonIcon_Chewtle_[];
extern const u8 gMonIcon_Drednaw_[];
extern const u8 gMonIcon_Yamper_[];
extern const u8 gMonIcon_Boltund_[];
extern const u8 gMonIcon_Rolycoly_[];
extern const u8 gMonIcon_Carkol_[];
extern const u8 gMonIcon_Coalossal_[];
extern const u8 gMonIcon_Applin_[];
extern const u8 gMonIcon_Flapple_[];
extern const u8 gMonIcon_Appletun_[];
extern const u8 gMonIcon_Silicobra_[];
extern const u8 gMonIcon_Sandaconda_[];
extern const u8 gMonIcon_Cramorant_[];
extern const u8 gMonIcon_Arrokuda_[];
extern const u8 gMonIcon_Barraskewd_[];
extern const u8 gMonIcon_Toxel_[];
extern const u8 gMonIcon_Toxtricity_[];
extern const u8 gMonIcon_Sizzlipede_[];
extern const u8 gMonIcon_Centiskorc_[];
extern const u8 gMonIcon_Clobbopus_[];
extern const u8 gMonIcon_Grapploct_[];
extern const u8 gMonIcon_Sinistea_[];
extern const u8 gMonIcon_Polteageis_[];
extern const u8 gMonIcon_Hatenna_[];
extern const u8 gMonIcon_Hattrem_[];
extern const u8 gMonIcon_Hatterene_[];
extern const u8 gMonIcon_Impidimp_[];
extern const u8 gMonIcon_Morgrem_[];
extern const u8 gMonIcon_Grimmsnarl_[];
extern const u8 gMonIcon_Obstagoon_[];
extern const u8 gMonIcon_Perrserker_[];
extern const u8 gMonIcon_Cursola_[];
extern const u8 gMonIcon_Sirfetchd_[];
extern const u8 gMonIcon_MrRime_[];
extern const u8 gMonIcon_Runerigus_[];
extern const u8 gMonIcon_Milcery_[];
extern const u8 gMonIcon_Alcremie_[];
extern const u8 gMonIcon_Falinks_[];
extern const u8 gMonIcon_Pincurchin_[];
extern const u8 gMonIcon_Snom_[];
extern const u8 gMonIcon_Frosmoth_[];
extern const u8 gMonIcon_Stonjourne_[];
extern const u8 gMonIcon_Eiscue_[];
extern const u8 gMonIcon_Indeedee_[];
extern const u8 gMonIcon_Morpeko_[];
extern const u8 gMonIcon_Cufant_[];
extern const u8 gMonIcon_Copperajah_[];
extern const u8 gMonIcon_Dracozolt_[];
extern const u8 gMonIcon_Arctozolt_[];
extern const u8 gMonIcon_Dracovish_[];
extern const u8 gMonIcon_Arctovish_[];
extern const u8 gMonIcon_Duraludon_[];
extern const u8 gMonIcon_Dreepy_[];
extern const u8 gMonIcon_Drakloak_[];
extern const u8 gMonIcon_Dragapult_[];
extern const u8 gMonIcon_Zacian_[];
extern const u8 gMonIcon_Zamazenta_[];
extern const u8 gMonIcon_Eternatus_[];
extern const u8 gMonIcon_Kubfu_[];
extern const u8 gMonIcon_Urshifu_[];
extern const u8 gMonIcon_Zarude_[];
extern const u8 gMonIcon_Regieleki_[];
extern const u8 gMonIcon_Regidrago_[];
extern const u8 gMonIcon_Glastrier_[];
extern const u8 gMonIcon_Spectrier_[];
extern const u8 gMonIcon_Calyrex_[];
extern const u8 gMonIcon_Wyrdeer_[];
extern const u8 gMonIcon_Kleavor_[];
extern const u8 gMonIcon_Ursaluna_[];
extern const u8 gMonIcon_Bsculegion_[];
extern const u8 gMonIcon_Sneasler_[];
extern const u8 gMonIcon_Overqwil_[];
extern const u8 gMonIcon_Enamorus_[];
extern const u8 gMonIcon_Venusaur2_[];
extern const u8 gMonIcon_Charizard2_[];
extern const u8 gMonIcon_Charizard3_[];
extern const u8 gMonIcon_Blastoise2_[];
extern const u8 gMonIcon_Beedrill2_[];
extern const u8 gMonIcon_Pidgeot2_[];
extern const u8 gMonIcon_Alakazam2_[];
extern const u8 gMonIcon_Slowbro2_[];
extern const u8 gMonIcon_Gengar2_[];
extern const u8 gMonIcon_Kangaskhan2_[];
extern const u8 gMonIcon_Pinsir2_[];
extern const u8 gMonIcon_Gyarados2_[];
extern const u8 gMonIcon_Aerodactyl2_[];
extern const u8 gMonIcon_Mewtwo2_[];
extern const u8 gMonIcon_Mewtwo3_[];
extern const u8 gMonIcon_Ampharos2_[];
extern const u8 gMonIcon_Steelix2_[];
extern const u8 gMonIcon_Scizor2_[];
extern const u8 gMonIcon_Heracross2_[];
extern const u8 gMonIcon_Houndoom2_[];
extern const u8 gMonIcon_Tyranitar2_[];
extern const u8 gMonIcon_Sceptile2_[];
extern const u8 gMonIcon_Blaziken2_[];
extern const u8 gMonIcon_Swampert2_[];
extern const u8 gMonIcon_Gardevoir2_[];
extern const u8 gMonIcon_Sableye2_[];
extern const u8 gMonIcon_Mawile2_[];
extern const u8 gMonIcon_Aggron2_[];
extern const u8 gMonIcon_Medicham2_[];
extern const u8 gMonIcon_Manectric2_[];
extern const u8 gMonIcon_Sharpedo2_[];
extern const u8 gMonIcon_Camerupt2_[];
extern const u8 gMonIcon_Altaria2_[];
extern const u8 gMonIcon_Banette2_[];
extern const u8 gMonIcon_Absol2_[];
extern const u8 gMonIcon_Glalie2_[];
extern const u8 gMonIcon_Salamence2_[];
extern const u8 gMonIcon_Metagross2_[];
extern const u8 gMonIcon_Latias2_[];
extern const u8 gMonIcon_Latios2_[];
extern const u8 gMonIcon_Lopunny2_[];
extern const u8 gMonIcon_Garchomp2_[];
extern const u8 gMonIcon_Lucario2_[];
extern const u8 gMonIcon_Abomasnow2_[];
extern const u8 gMonIcon_Gallade2_[];
extern const u8 gMonIcon_Audino2_[];
extern const u8 gMonIcon_Diancie2_[];
extern const u8 gMonIcon_Rayquaza2_[];
extern const u8 gMonIcon_Kyogre2_[];
extern const u8 gMonIcon_Groudon2_[];
extern const u8 gMonIcon_Rattata2_[];
extern const u8 gMonIcon_Raticate2_[];
extern const u8 gMonIcon_Raichu2_[];
extern const u8 gMonIcon_Sandshrew2_[];
extern const u8 gMonIcon_Sandslash2_[];
extern const u8 gMonIcon_Vulpix2_[];
extern const u8 gMonIcon_Ninetales2_[];
extern const u8 gMonIcon_Diglett2_[];
extern const u8 gMonIcon_Dugtrio2_[];
extern const u8 gMonIcon_Meowth2_[];
extern const u8 gMonIcon_Persian2_[];
extern const u8 gMonIcon_Geodude2_[];
extern const u8 gMonIcon_Graveler2_[];
extern const u8 gMonIcon_Golem2_[];
extern const u8 gMonIcon_Grimer2_[];
extern const u8 gMonIcon_Muk2_[];
extern const u8 gMonIcon_Exeggutor2_[];
extern const u8 gMonIcon_Marowak2_[];
extern const u8 gMonIcon_Meowth3_[];
extern const u8 gMonIcon_Ponyta2_[];
extern const u8 gMonIcon_Rapidash2_[];
extern const u8 gMonIcon_Slowpoke2_[];
extern const u8 gMonIcon_Slowbro3_[];
extern const u8 gMonIcon_Farfetchd2_[];
extern const u8 gMonIcon_Weezing2_[];
extern const u8 gMonIcon_MrMime2_[];
extern const u8 gMonIcon_Articuno2_[];
extern const u8 gMonIcon_Zapdos2_[];
extern const u8 gMonIcon_Moltres2_[];
extern const u8 gMonIcon_Slowking2_[];
extern const u8 gMonIcon_Corsola2_[];
extern const u8 gMonIcon_Zigzagoon2_[];
extern const u8 gMonIcon_Linoone2_[];
extern const u8 gMonIcon_Darumaka2_[];
extern const u8 gMonIcon_Darmanitan2_[];
extern const u8 gMonIcon_Yamask2_[];
extern const u8 gMonIcon_Stunfisk2_[];
extern const u8 gMonIcon_Growlithe2_[];
extern const u8 gMonIcon_Arcanine2_[];
extern const u8 gMonIcon_Voltorb2_[];
extern const u8 gMonIcon_Electrode2_[];
extern const u8 gMonIcon_Typhlosion2_[];
extern const u8 gMonIcon_Qwilfish2_[];
extern const u8 gMonIcon_Sneasel2_[];
extern const u8 gMonIcon_Samurott2_[];
extern const u8 gMonIcon_Lilligant2_[];
extern const u8 gMonIcon_Zorua2_[];
extern const u8 gMonIcon_Zoroark2_[];
extern const u8 gMonIcon_Braviary2_[];
extern const u8 gMonIcon_Sliggoo2_[];
extern const u8 gMonIcon_Goodra2_[];
extern const u8 gMonIcon_Avalugg2_[];
extern const u8 gMonIcon_Decidueye2_[];
extern const u8 gMonIcon_Pikachu2_[];
extern const u8 gMonIcon_Pikachu3_[];
extern const u8 gMonIcon_Pikachu4_[];
extern const u8 gMonIcon_Pikachu5_[];
extern const u8 gMonIcon_Pikachu6_[];
extern const u8 gMonIcon_Pikachu7_[];
extern const u8 gMonIcon_Pikachu8_[];
extern const u8 gMonIcon_Pikachu9_[];
extern const u8 gMonIcon_Pikachu10_[];
extern const u8 gMonIcon_Pikachu11_[];
extern const u8 gMonIcon_Pikachu12_[];
extern const u8 gMonIcon_Pikachu13_[];
extern const u8 gMonIcon_Pikachu14_[];
extern const u8 gMonIcon_Pikachu15_[];
extern const u8 gMonIcon_Pichu2_[];
extern const u8 gMonIcon_Castform2_[];
extern const u8 gMonIcon_Castform3_[];
extern const u8 gMonIcon_Castform4_[];
extern const u8 gMonIcon_Deoxys2_[];
extern const u8 gMonIcon_Deoxys3_[];
extern const u8 gMonIcon_Deoxys4_[];
extern const u8 gMonIcon_Burmy2_[];
extern const u8 gMonIcon_Burmy3_[];
extern const u8 gMonIcon_Wormadam2_[];
extern const u8 gMonIcon_Wormadam3_[];
extern const u8 gMonIcon_Cherrim2_[];
extern const u8 gMonIcon_Shellos2_[];
extern const u8 gMonIcon_Gastrodon2_[];
extern const u8 gMonIcon_Rotom2_[];
extern const u8 gMonIcon_Rotom3_[];
extern const u8 gMonIcon_Rotom4_[];
extern const u8 gMonIcon_Rotom5_[];
extern const u8 gMonIcon_Rotom6_[];
extern const u8 gMonIcon_Dialga2_[];
extern const u8 gMonIcon_Palkia2_[];
extern const u8 gMonIcon_Giratina2_[];
extern const u8 gMonIcon_Shaymin2_[];
extern const u8 gMonIcon_Arceus2_[];
extern const u8 gMonIcon_Arceus3_[];
extern const u8 gMonIcon_Arceus4_[];
extern const u8 gMonIcon_Arceus5_[];
extern const u8 gMonIcon_Arceus6_[];
extern const u8 gMonIcon_Arceus7_[];
extern const u8 gMonIcon_Arceus8_[];
extern const u8 gMonIcon_Arceus9_[];
extern const u8 gMonIcon_Arceus10_[];
extern const u8 gMonIcon_Arceus11_[];
extern const u8 gMonIcon_Arceus12_[];
extern const u8 gMonIcon_Arceus13_[];
extern const u8 gMonIcon_Arceus14_[];
extern const u8 gMonIcon_Arceus15_[];
extern const u8 gMonIcon_Arceus16_[];
extern const u8 gMonIcon_Arceus17_[];
extern const u8 gMonIcon_Arceus18_[];
extern const u8 gMonIcon_Basculin2_[];
extern const u8 gMonIcon_Basculin3_[];
extern const u8 gMonIcon_Darmanitan3_[];
extern const u8 gMonIcon_Darmanitan4_[];
extern const u8 gMonIcon_Deerling2_[];
extern const u8 gMonIcon_Deerling3_[];
extern const u8 gMonIcon_Deerling4_[];
extern const u8 gMonIcon_Sawsbuck2_[];
extern const u8 gMonIcon_Sawsbuck3_[];
extern const u8 gMonIcon_Sawsbuck4_[];
extern const u8 gMonIcon_Tornadus2_[];
extern const u8 gMonIcon_Thundurus2_[];
extern const u8 gMonIcon_Landorus2_[];
extern const u8 gMonIcon_Enamorus2_[];
extern const u8 gMonIcon_Kyurem2_[];
extern const u8 gMonIcon_Kyurem3_[];
extern const u8 gMonIcon_Keldeo2_[];
extern const u8 gMonIcon_Meloetta2_[];
extern const u8 gMonIcon_Genesect2_[];
extern const u8 gMonIcon_Genesect3_[];
extern const u8 gMonIcon_Genesect4_[];
extern const u8 gMonIcon_Genesect5_[];
extern const u8 gMonIcon_Greninja2_[];
extern const u8 gMonIcon_Greninja3_[];
extern const u8 gMonIcon_Vivillon2_[];
extern const u8 gMonIcon_Vivillon3_[];
extern const u8 gMonIcon_Vivillon4_[];
extern const u8 gMonIcon_Vivillon5_[];
extern const u8 gMonIcon_Vivillon6_[];
extern const u8 gMonIcon_Vivillon7_[];
extern const u8 gMonIcon_Vivillon8_[];
extern const u8 gMonIcon_Vivillon9_[];
extern const u8 gMonIcon_Vivillon10_[];
extern const u8 gMonIcon_Vivillon11_[];
extern const u8 gMonIcon_Vivillon12_[];
extern const u8 gMonIcon_Vivillon13_[];
extern const u8 gMonIcon_Vivillon14_[];
extern const u8 gMonIcon_Vivillon15_[];
extern const u8 gMonIcon_Vivillon16_[];
extern const u8 gMonIcon_Vivillon17_[];
extern const u8 gMonIcon_Vivillon18_[];
extern const u8 gMonIcon_Vivillon19_[];
extern const u8 gMonIcon_Vivillon20_[];
extern const u8 gMonIcon_Flabebe2_[];
extern const u8 gMonIcon_Flabebe3_[];
extern const u8 gMonIcon_Flabebe4_[];
extern const u8 gMonIcon_Flabebe5_[];
extern const u8 gMonIcon_Floette2_[];
extern const u8 gMonIcon_Floette3_[];
extern const u8 gMonIcon_Floette4_[];
extern const u8 gMonIcon_Floette5_[];
extern const u8 gMonIcon_Floette6_[];
extern const u8 gMonIcon_Florges2_[];
extern const u8 gMonIcon_Florges3_[];
extern const u8 gMonIcon_Florges4_[];
extern const u8 gMonIcon_Florges5_[];
extern const u8 gMonIcon_Furfrou2_[];
extern const u8 gMonIcon_Furfrou3_[];
extern const u8 gMonIcon_Furfrou4_[];
extern const u8 gMonIcon_Furfrou5_[];
extern const u8 gMonIcon_Furfrou6_[];
extern const u8 gMonIcon_Furfrou7_[];
extern const u8 gMonIcon_Furfrou8_[];
extern const u8 gMonIcon_Furfrou9_[];
extern const u8 gMonIcon_Furfrou10_[];
extern const u8 gMonIcon_Meowstic2_[];
extern const u8 gMonIcon_Aegislash2_[];
extern const u8 gMonIcon_Pumpkaboo2_[];
extern const u8 gMonIcon_Pumpkaboo3_[];
extern const u8 gMonIcon_Pumpkaboo4_[];
extern const u8 gMonIcon_Gourgeist2_[];
extern const u8 gMonIcon_Gourgeist3_[];
extern const u8 gMonIcon_Gourgeist4_[];
extern const u8 gMonIcon_Xerneas2_[];
extern const u8 gMonIcon_Zygarde2_[];
extern const u8 gMonIcon_Zygarde3_[];
extern const u8 gMonIcon_Zygarde4_[];
extern const u8 gMonIcon_Zygarde5_[];
extern const u8 gMonIcon_Hoopa2_[];
extern const u8 gMonIcon_Oricorio2_[];
extern const u8 gMonIcon_Oricorio3_[];
extern const u8 gMonIcon_Oricorio4_[];
extern const u8 gMonIcon_Rockruff2_[];
extern const u8 gMonIcon_Lycanroc2_[];
extern const u8 gMonIcon_Lycanroc3_[];
extern const u8 gMonIcon_Wishiwashi2_[];
extern const u8 gMonIcon_Silvally2_[];
extern const u8 gMonIcon_Silvally3_[];
extern const u8 gMonIcon_Silvally4_[];
extern const u8 gMonIcon_Silvally5_[];
extern const u8 gMonIcon_Silvally6_[];
extern const u8 gMonIcon_Silvally7_[];
extern const u8 gMonIcon_Silvally8_[];
extern const u8 gMonIcon_Silvally9_[];
extern const u8 gMonIcon_Silvally10_[];
extern const u8 gMonIcon_Silvally11_[];
extern const u8 gMonIcon_Silvally12_[];
extern const u8 gMonIcon_Silvally13_[];
extern const u8 gMonIcon_Silvally14_[];
extern const u8 gMonIcon_Silvally15_[];
extern const u8 gMonIcon_Silvally16_[];
extern const u8 gMonIcon_Silvally17_[];
extern const u8 gMonIcon_Silvally18_[];
extern const u8 gMonIcon_Minior2_[];
extern const u8 gMonIcon_Minior3_[];
extern const u8 gMonIcon_Minior4_[];
extern const u8 gMonIcon_Minior5_[];
extern const u8 gMonIcon_Minior6_[];
extern const u8 gMonIcon_Minior7_[];
extern const u8 gMonIcon_Minior8_[];
extern const u8 gMonIcon_Minior9_[];
extern const u8 gMonIcon_Minior10_[];
extern const u8 gMonIcon_Minior11_[];
extern const u8 gMonIcon_Minior12_[];
extern const u8 gMonIcon_Minior13_[];
extern const u8 gMonIcon_Minior14_[];
extern const u8 gMonIcon_Mimikyu2_[];
extern const u8 gMonIcon_Necrozma2_[];
extern const u8 gMonIcon_Necrozma3_[];
extern const u8 gMonIcon_Necrozma4_[];
extern const u8 gMonIcon_Magearna2_[];
extern const u8 gMonIcon_Cramorant2_[];
extern const u8 gMonIcon_Cramorant3_[];
extern const u8 gMonIcon_Toxtricity2_[];
extern const u8 gMonIcon_Sinistea2_[];
extern const u8 gMonIcon_Polteageis2_[];
extern const u8 gMonIcon_Alcremie2_[];
extern const u8 gMonIcon_Alcremie3_[];
extern const u8 gMonIcon_Alcremie4_[];
extern const u8 gMonIcon_Alcremie5_[];
extern const u8 gMonIcon_Alcremie6_[];
extern const u8 gMonIcon_Alcremie7_[];
extern const u8 gMonIcon_Alcremie8_[];
extern const u8 gMonIcon_Alcremie9_[];
extern const u8 gMonIcon_Eiscue2_[];
extern const u8 gMonIcon_Indeedee2_[];
extern const u8 gMonIcon_Morpeko2_[];
extern const u8 gMonIcon_Zacian2_[];
extern const u8 gMonIcon_Zamazenta2_[];
extern const u8 gMonIcon_Eternatus2_[];
extern const u8 gMonIcon_Urshifu2_[];
extern const u8 gMonIcon_Zarude2_[];
extern const u8 gMonIcon_Calyrex2_[];
extern const u8 gMonIcon_Calyrex3_[];
extern const u8 gMonIcon_Bsculegion2_[];
extern const u8 gMonIcon_Alcremie10_[];
extern const u8 gMonIcon_Alcremie11_[];
extern const u8 gMonIcon_Alcremie12_[];
extern const u8 gMonIcon_Alcremie13_[];
extern const u8 gMonIcon_Alcremie14_[];
extern const u8 gMonIcon_Alcremie15_[];
extern const u8 gMonIcon_Alcremie16_[];
extern const u8 gMonIcon_Alcremie17_[];
extern const u8 gMonIcon_Alcremie18_[];
extern const u8 gMonIcon_Alcremie19_[];
extern const u8 gMonIcon_Alcremie20_[];
extern const u8 gMonIcon_Alcremie21_[];
extern const u8 gMonIcon_Alcremie22_[];
extern const u8 gMonIcon_Alcremie23_[];
extern const u8 gMonIcon_Alcremie24_[];
extern const u8 gMonIcon_Alcremie25_[];
extern const u8 gMonIcon_Alcremie26_[];
extern const u8 gMonIcon_Alcremie27_[];
extern const u8 gMonIcon_Alcremie28_[];
extern const u8 gMonIcon_Alcremie29_[];
extern const u8 gMonIcon_Alcremie30_[];
extern const u8 gMonIcon_Alcremie31_[];
extern const u8 gMonIcon_Alcremie32_[];
extern const u8 gMonIcon_Alcremie33_[];
extern const u8 gMonIcon_Alcremie34_[];
extern const u8 gMonIcon_Alcremie35_[];
extern const u8 gMonIcon_Alcremie36_[];
extern const u8 gMonIcon_Alcremie37_[];
extern const u8 gMonIcon_Alcremie38_[];
extern const u8 gMonIcon_Alcremie39_[];
extern const u8 gMonIcon_Alcremie40_[];
extern const u8 gMonIcon_Alcremie41_[];
extern const u8 gMonIcon_Alcremie42_[];
extern const u8 gMonIcon_Alcremie43_[];
extern const u8 gMonIcon_Alcremie44_[];
extern const u8 gMonIcon_Alcremie45_[];
extern const u8 gMonIcon_Alcremie46_[];
extern const u8 gMonIcon_Alcremie47_[];
extern const u8 gMonIcon_Alcremie48_[];
extern const u8 gMonIcon_Alcremie49_[];
extern const u8 gMonIcon_Alcremie50_[];
extern const u8 gMonIcon_Alcremie51_[];
extern const u8 gMonIcon_Alcremie52_[];
extern const u8 gMonIcon_Alcremie53_[];
extern const u8 gMonIcon_Alcremie54_[];
extern const u8 gMonIcon_Alcremie55_[];
extern const u8 gMonIcon_Alcremie56_[];
extern const u8 gMonIcon_Alcremie57_[];
extern const u8 gMonIcon_Alcremie58_[];
extern const u8 gMonIcon_Alcremie59_[];
extern const u8 gMonIcon_Alcremie60_[];
extern const u8 gMonIcon_Alcremie61_[];
extern const u8 gMonIcon_Alcremie62_[];
extern const u8 gMonIcon_Alcremie63_[];
extern const u8 gMonIcon_Sprigatito_[];
extern const u8 gMonIcon_Floragato_[];
extern const u8 gMonIcon_Meowscarad_[];
extern const u8 gMonIcon_Fuecoco_[];
extern const u8 gMonIcon_Crocalor_[];
extern const u8 gMonIcon_Skeledirge_[];
extern const u8 gMonIcon_Quaxly_[];
extern const u8 gMonIcon_Quaxwell_[];
extern const u8 gMonIcon_Quaquaval_[];
extern const u8 gMonIcon_Lechonk_[];
extern const u8 gMonIcon_Oinkologne_[];
extern const u8 gMonIcon_Oinkologne2_[];
extern const u8 gMonIcon_Tarountula_[];
extern const u8 gMonIcon_Spidops_[];
extern const u8 gMonIcon_Nymble_[];
extern const u8 gMonIcon_Lokix_[];
extern const u8 gMonIcon_Pawmi_[];
extern const u8 gMonIcon_Pawmo_[];
extern const u8 gMonIcon_Pawmot_[];
extern const u8 gMonIcon_Tandemaus_[];
extern const u8 gMonIcon_Maushold_[];
extern const u8 gMonIcon_Maushold2_[];
extern const u8 gMonIcon_Fidough_[];
extern const u8 gMonIcon_Dachsbun_[];
extern const u8 gMonIcon_Smoliv_[];
extern const u8 gMonIcon_Dolliv_[];
extern const u8 gMonIcon_Arboliva_[];
extern const u8 gMonIcon_Sqawkabily_[];
extern const u8 gMonIcon_Sqawkabily2_[];
extern const u8 gMonIcon_Sqawkabily3_[];
extern const u8 gMonIcon_Sqawkabily4_[];
extern const u8 gMonIcon_Nacli_[];
extern const u8 gMonIcon_Naclstack_[];
extern const u8 gMonIcon_Garganacl_[];
extern const u8 gMonIcon_Charcadet_[];
extern const u8 gMonIcon_Armarouge_[];
extern const u8 gMonIcon_Ceruledge_[];
extern const u8 gMonIcon_Tadbulb_[];
extern const u8 gMonIcon_Bellibolt_[];
extern const u8 gMonIcon_Wattrel_[];
extern const u8 gMonIcon_Kilowatrel_[];
extern const u8 gMonIcon_Maschiff_[];
extern const u8 gMonIcon_Mabosstiff_[];
extern const u8 gMonIcon_Shroodle_[];
extern const u8 gMonIcon_Grafaiai_[];
extern const u8 gMonIcon_Bramblin_[];
extern const u8 gMonIcon_Brmblghast_[];
extern const u8 gMonIcon_Toedscool_[];
extern const u8 gMonIcon_Toedscruel_[];
extern const u8 gMonIcon_Klawf_[];
extern const u8 gMonIcon_Capsakid_[];
extern const u8 gMonIcon_Scovillain_[];
extern const u8 gMonIcon_Rellor_[];
extern const u8 gMonIcon_Rabsca_[];
extern const u8 gMonIcon_Flittle_[];
extern const u8 gMonIcon_Espathra_[];
extern const u8 gMonIcon_Tinkatink_[];
extern const u8 gMonIcon_Tinkatuff_[];
extern const u8 gMonIcon_Tinkaton_[];
extern const u8 gMonIcon_Wiglett_[];
extern const u8 gMonIcon_Wugtrio_[];
extern const u8 gMonIcon_Bombirdier_[];
extern const u8 gMonIcon_Finizen_[];
extern const u8 gMonIcon_Palafin_[];
extern const u8 gMonIcon_Palafin2_[];
extern const u8 gMonIcon_Varoom_[];
extern const u8 gMonIcon_Revavroom_[];
extern const u8 gMonIcon_Cyclizar_[];
extern const u8 gMonIcon_Orthworm_[];
extern const u8 gMonIcon_Glimmet_[];
extern const u8 gMonIcon_Glimmora_[];
extern const u8 gMonIcon_Greavard_[];
extern const u8 gMonIcon_Houndstone_[];
extern const u8 gMonIcon_Flamigo_[];
extern const u8 gMonIcon_Cetoddle_[];
extern const u8 gMonIcon_Cetitan_[];
extern const u8 gMonIcon_Veluza_[];
extern const u8 gMonIcon_Dondozo_[];
extern const u8 gMonIcon_Tatsugiri_[];
extern const u8 gMonIcon_Tatsugiri2_[];
extern const u8 gMonIcon_Tatsugiri3_[];
extern const u8 gMonIcon_Annihilape_[];
extern const u8 gMonIcon_Clodsire_[];
extern const u8 gMonIcon_Farigiraf_[];
extern const u8 gMonIcon_Dudunsprce_[];
extern const u8 gMonIcon_Dudunsprce2_[];
extern const u8 gMonIcon_Kingambit_[];
extern const u8 gMonIcon_GreatTusk_[];
extern const u8 gMonIcon_ScreamTail_[];
extern const u8 gMonIcon_BruteBonet_[];
extern const u8 gMonIcon_FluttrMane_[];
extern const u8 gMonIcon_SlithrWing_[];
extern const u8 gMonIcon_SndyShocks_[];
extern const u8 gMonIcon_IronTreads_[];
extern const u8 gMonIcon_IronBundle_[];
extern const u8 gMonIcon_IronHands_[];
extern const u8 gMonIcon_IronJuguls_[];
extern const u8 gMonIcon_IronMoth_[];
extern const u8 gMonIcon_IronThorns_[];
extern const u8 gMonIcon_Frigibax_[];
extern const u8 gMonIcon_Arctibax_[];
extern const u8 gMonIcon_Baxcalibur_[];
extern const u8 gMonIcon_Gimmighoul_[];
extern const u8 gMonIcon_Gimmighoul2_[];
extern const u8 gMonIcon_Gholdengo_[];
extern const u8 gMonIcon_WoChien_[];
extern const u8 gMonIcon_ChienPao_[];
extern const u8 gMonIcon_TingLu_[];
extern const u8 gMonIcon_ChiYu_[];
extern const u8 gMonIcon_RoarngMoon_[];
extern const u8 gMonIcon_IronVliant_[];
extern const u8 gMonIcon_Koraidon_[];
extern const u8 gMonIcon_Miraidon_[];
extern const u8 gMonIcon_Tauros2_[];
extern const u8 gMonIcon_Tauros3_[];
extern const u8 gMonIcon_Tauros4_[];
extern const u8 gMonIcon_Wooper2_[];
extern const u8 gMonIcon_WalkngWake_[];
extern const u8 gMonIcon_IronLeaves_[];
extern const u8 gMonIcon_Dipplin_[];
extern const u8 gMonIcon_Ptchageist_[];
extern const u8 gMonIcon_Ptchageist2_[];
extern const u8 gMonIcon_Sinistcha_[];
extern const u8 gMonIcon_Sinistcha2_[];
extern const u8 gMonIcon_Okidogi_[];
extern const u8 gMonIcon_Munkidori_[];
extern const u8 gMonIcon_Fezndipiti_[];
extern const u8 gMonIcon_Ogerpon_[];
extern const u8 gMonIcon_Ogerpon2_[];
extern const u8 gMonIcon_Ogerpon3_[];
extern const u8 gMonIcon_Ogerpon4_[];
extern const u8 gMonIcon_Ogerpon5_[];
extern const u8 gMonIcon_Ogerpon6_[];
extern const u8 gMonIcon_Ogerpon7_[];
extern const u8 gMonIcon_Ogerpon8_[];
extern const u8 gMonIcon_Ursaluna2_[];
extern const u8 gMonIcon_Archaludon_[];
extern const u8 gMonIcon_Hydrapple_[];
extern const u8 gMonIcon_GouginFire_[];
extern const u8 gMonIcon_RagingBolt_[];
extern const u8 gMonIcon_IronBouldr_[];
extern const u8 gMonIcon_IronCrown_[];
extern const u8 gMonIcon_Terapagos_[];
extern const u8 gMonIcon_Terapagos2_[];
extern const u8 gMonIcon_Terapagos3_[];
extern const u8 gMonIcon_Pecharunt_[];
extern const u8 gMonIcon_Mothim2_[];
extern const u8 gMonIcon_Mothim3_[];
extern const u8 gMonIcon_Scatterbug2_[];
extern const u8 gMonIcon_Scatterbug3_[];
extern const u8 gMonIcon_Scatterbug4_[];
extern const u8 gMonIcon_Scatterbug5_[];
extern const u8 gMonIcon_Scatterbug6_[];
extern const u8 gMonIcon_Scatterbug7_[];
extern const u8 gMonIcon_Scatterbug8_[];
extern const u8 gMonIcon_Scatterbug9_[];
extern const u8 gMonIcon_Scatterbug10_[];
extern const u8 gMonIcon_Scatterbug11_[];
extern const u8 gMonIcon_Scatterbug12_[];
extern const u8 gMonIcon_Scatterbug13_[];
extern const u8 gMonIcon_Scatterbug14_[];
extern const u8 gMonIcon_Scatterbug15_[];
extern const u8 gMonIcon_Scatterbug16_[];
extern const u8 gMonIcon_Scatterbug17_[];
extern const u8 gMonIcon_Scatterbug18_[];
extern const u8 gMonIcon_Scatterbug19_[];
extern const u8 gMonIcon_Scatterbug20_[];
extern const u8 gMonIcon_Spewpa2_[];
extern const u8 gMonIcon_Spewpa3_[];
extern const u8 gMonIcon_Spewpa4_[];
extern const u8 gMonIcon_Spewpa5_[];
extern const u8 gMonIcon_Spewpa6_[];
extern const u8 gMonIcon_Spewpa7_[];
extern const u8 gMonIcon_Spewpa8_[];
extern const u8 gMonIcon_Spewpa9_[];
extern const u8 gMonIcon_Spewpa10_[];
extern const u8 gMonIcon_Spewpa11_[];
extern const u8 gMonIcon_Spewpa12_[];
extern const u8 gMonIcon_Spewpa13_[];
extern const u8 gMonIcon_Spewpa14_[];
extern const u8 gMonIcon_Spewpa15_[];
extern const u8 gMonIcon_Spewpa16_[];
extern const u8 gMonIcon_Spewpa17_[];
extern const u8 gMonIcon_Spewpa18_[];
extern const u8 gMonIcon_Spewpa19_[];
extern const u8 gMonIcon_Spewpa20_[];
extern const u8 gMonIcon_Raticate3_[];
extern const u8 gMonIcon_Gumshoos2_[];
extern const u8 gMonIcon_Vikavolt2_[];
extern const u8 gMonIcon_Lurantis2_[];
extern const u8 gMonIcon_Salazzle2_[];
extern const u8 gMonIcon_Mimikyu3_[];
extern const u8 gMonIcon_Kommoo2_[];
extern const u8 gMonIcon_Marowak3_[];
extern const u8 gMonIcon_Ribombee2_[];
extern const u8 gMonIcon_Araquanid2_[];
extern const u8 gMonIcon_Togedemaru2_[];
extern const u8 gMonIcon_Pikachu16_[];
extern const u8 gMonIcon_Eevee2_[];
extern const u8 gMonIcon_Venusaur3_[];
extern const u8 gMonIcon_Blastoise3_[];
extern const u8 gMonIcon_Charizard4_[];
extern const u8 gMonIcon_Butterfree2_[];
extern const u8 gMonIcon_Pikachu17_[];
extern const u8 gMonIcon_Meowth4_[];
extern const u8 gMonIcon_Machamp2_[];
extern const u8 gMonIcon_Gengar3_[];
extern const u8 gMonIcon_Kingler2_[];
extern const u8 gMonIcon_Lapras2_[];
extern const u8 gMonIcon_Eevee3_[];
extern const u8 gMonIcon_Snorlax2_[];
extern const u8 gMonIcon_Garbodor2_[];
extern const u8 gMonIcon_Melmetal2_[];
extern const u8 gMonIcon_Rillaboom2_[];
extern const u8 gMonIcon_Cinderace2_[];
extern const u8 gMonIcon_Inteleon2_[];
extern const u8 gMonIcon_Corviknigh2_[];
extern const u8 gMonIcon_Orbeetle2_[];
extern const u8 gMonIcon_Drednaw2_[];
extern const u8 gMonIcon_Coalossal2_[];
extern const u8 gMonIcon_Flapple2_[];
extern const u8 gMonIcon_Appletun2_[];
extern const u8 gMonIcon_Sandaconda2_[];
extern const u8 gMonIcon_Toxtricity3_[];
extern const u8 gMonIcon_Toxtricity4_[];
extern const u8 gMonIcon_Centiskorc2_[];
extern const u8 gMonIcon_Hatterene2_[];
extern const u8 gMonIcon_Grimmsnarl2_[];
extern const u8 gMonIcon_Alcremie64_[];
extern const u8 gMonIcon_Copperajah2_[];
extern const u8 gMonIcon_Duraludon2_[];
extern const u8 gMonIcon_Urshifu3_[];
extern const u8 gMonIcon_Urshifu4_[];
extern const u8 gMonIcon_Mimikyu4_[];

const u8 *const gMonIconTable_[] =
{
	[SPECIES_NONE] = gMonIcon_QuestionMark,
	[SPECIES_BULBASAUR] = gMonIcon_Bulbasaur_,
	[SPECIES_IVYSAUR] = gMonIcon_Ivysaur_,
	[SPECIES_VENUSAUR] = gMonIcon_Venusaur_,
	[SPECIES_CHARMANDER] = gMonIcon_Charmander_,
	[SPECIES_CHARMELEON] = gMonIcon_Charmeleon_,
	[SPECIES_CHARIZARD] = gMonIcon_Charizard_,
	[SPECIES_SQUIRTLE] = gMonIcon_Squirtle_,
	[SPECIES_WARTORTLE] = gMonIcon_Wartortle_,
	[SPECIES_BLASTOISE] = gMonIcon_Blastoise_,
	[SPECIES_CATERPIE] = gMonIcon_Caterpie_,
	[SPECIES_METAPOD] = gMonIcon_Metapod_,
	[SPECIES_BUTTERFREE] = gMonIcon_Butterfree_,
	[SPECIES_WEEDLE] = gMonIcon_Weedle_,
	[SPECIES_KAKUNA] = gMonIcon_Kakuna_,
	[SPECIES_BEEDRILL] = gMonIcon_Beedrill_,
	[SPECIES_PIDGEY] = gMonIcon_Pidgey_,
	[SPECIES_PIDGEOTTO] = gMonIcon_Pidgeotto_,
	[SPECIES_PIDGEOT] = gMonIcon_Pidgeot_,
	[SPECIES_RATTATA] = gMonIcon_Rattata_,
	[SPECIES_RATICATE] = gMonIcon_Raticate_,
	[SPECIES_SPEAROW] = gMonIcon_Spearow_,
	[SPECIES_FEAROW] = gMonIcon_Fearow_,
	[SPECIES_EKANS] = gMonIcon_Ekans_,
	[SPECIES_ARBOK] = gMonIcon_Arbok_,
	[SPECIES_PIKACHU] = gMonIcon_Pikachu_,
	[SPECIES_RAICHU] = gMonIcon_Raichu_,
	[SPECIES_SANDSHREW] = gMonIcon_Sandshrew_,
	[SPECIES_SANDSLASH] = gMonIcon_Sandslash_,
	[SPECIES_NIDORANSF] = gMonIcon_Nidoransf_,
	[SPECIES_NIDORINA] = gMonIcon_Nidorina_,
	[SPECIES_NIDOQUEEN] = gMonIcon_Nidoqueen_,
	[SPECIES_NIDORANSM] = gMonIcon_Nidoransm_,
	[SPECIES_NIDORINO] = gMonIcon_Nidorino_,
	[SPECIES_NIDOKING] = gMonIcon_Nidoking_,
	[SPECIES_CLEFAIRY] = gMonIcon_Clefairy_,
	[SPECIES_CLEFABLE] = gMonIcon_Clefable_,
	[SPECIES_VULPIX] = gMonIcon_Vulpix_,
	[SPECIES_NINETALES] = gMonIcon_Ninetales_,
	[SPECIES_JIGGLYPUFF] = gMonIcon_Jigglypuff_,
	[SPECIES_WIGGLYTUFF] = gMonIcon_Wigglytuff_,
	[SPECIES_ZUBAT] = gMonIcon_Zubat_,
	[SPECIES_GOLBAT] = gMonIcon_Golbat_,
	[SPECIES_ODDISH] = gMonIcon_Oddish_,
	[SPECIES_GLOOM] = gMonIcon_Gloom_,
	[SPECIES_VILEPLUME] = gMonIcon_Vileplume_,
	[SPECIES_PARAS] = gMonIcon_Paras_,
	[SPECIES_PARASECT] = gMonIcon_Parasect_,
	[SPECIES_VENONAT] = gMonIcon_Venonat_,
	[SPECIES_VENOMOTH] = gMonIcon_Venomoth_,
	[SPECIES_DIGLETT] = gMonIcon_Diglett_,
	[SPECIES_DUGTRIO] = gMonIcon_Dugtrio_,
	[SPECIES_MEOWTH] = gMonIcon_Meowth_,
	[SPECIES_PERSIAN] = gMonIcon_Persian_,
	[SPECIES_PSYDUCK] = gMonIcon_Psyduck_,
	[SPECIES_GOLDUCK] = gMonIcon_Golduck_,
	[SPECIES_MANKEY] = gMonIcon_Mankey_,
	[SPECIES_PRIMEAPE] = gMonIcon_Primeape_,
	[SPECIES_GROWLITHE] = gMonIcon_Growlithe_,
	[SPECIES_ARCANINE] = gMonIcon_Arcanine_,
	[SPECIES_POLIWAG] = gMonIcon_Poliwag_,
	[SPECIES_POLIWHIRL] = gMonIcon_Poliwhirl_,
	[SPECIES_POLIWRATH] = gMonIcon_Poliwrath_,
	[SPECIES_ABRA] = gMonIcon_Abra_,
	[SPECIES_KADABRA] = gMonIcon_Kadabra_,
	[SPECIES_ALAKAZAM] = gMonIcon_Alakazam_,
	[SPECIES_MACHOP] = gMonIcon_Machop_,
	[SPECIES_MACHOKE] = gMonIcon_Machoke_,
	[SPECIES_MACHAMP] = gMonIcon_Machamp_,
	[SPECIES_BELLSPROUT] = gMonIcon_Bellsprout_,
	[SPECIES_WEEPINBELL] = gMonIcon_Weepinbell_,
	[SPECIES_VICTREEBEL] = gMonIcon_Victreebel_,
	[SPECIES_TENTACOOL] = gMonIcon_Tentacool_,
	[SPECIES_TENTACRUEL] = gMonIcon_Tentacruel_,
	[SPECIES_GEODUDE] = gMonIcon_Geodude_,
	[SPECIES_GRAVELER] = gMonIcon_Graveler_,
	[SPECIES_GOLEM] = gMonIcon_Golem_,
	[SPECIES_PONYTA] = gMonIcon_Ponyta_,
	[SPECIES_RAPIDASH] = gMonIcon_Rapidash_,
	[SPECIES_SLOWPOKE] = gMonIcon_Slowpoke_,
	[SPECIES_SLOWBRO] = gMonIcon_Slowbro_,
	[SPECIES_MAGNEMITE] = gMonIcon_Magnemite_,
	[SPECIES_MAGNETON] = gMonIcon_Magneton_,
	[SPECIES_FARFETCHD] = gMonIcon_Farfetchd_,
	[SPECIES_DODUO] = gMonIcon_Doduo_,
	[SPECIES_DODRIO] = gMonIcon_Dodrio_,
	[SPECIES_SEEL] = gMonIcon_Seel_,
	[SPECIES_DEWGONG] = gMonIcon_Dewgong_,
	[SPECIES_GRIMER] = gMonIcon_Grimer_,
	[SPECIES_MUK] = gMonIcon_Muk_,
	[SPECIES_SHELLDER] = gMonIcon_Shellder_,
	[SPECIES_CLOYSTER] = gMonIcon_Cloyster_,
	[SPECIES_GASTLY] = gMonIcon_Gastly_,
	[SPECIES_HAUNTER] = gMonIcon_Haunter_,
	[SPECIES_GENGAR] = gMonIcon_Gengar_,
	[SPECIES_ONIX] = gMonIcon_Onix_,
	[SPECIES_DROWZEE] = gMonIcon_Drowzee_,
	[SPECIES_HYPNO] = gMonIcon_Hypno_,
	[SPECIES_KRABBY] = gMonIcon_Krabby_,
	[SPECIES_KINGLER] = gMonIcon_Kingler_,
	[SPECIES_VOLTORB] = gMonIcon_Voltorb_,
	[SPECIES_ELECTRODE] = gMonIcon_Electrode_,
	[SPECIES_EXEGGCUTE] = gMonIcon_Exeggcute_,
	[SPECIES_EXEGGUTOR] = gMonIcon_Exeggutor_,
	[SPECIES_CUBONE] = gMonIcon_Cubone_,
	[SPECIES_MAROWAK] = gMonIcon_Marowak_,
	[SPECIES_HITMONLEE] = gMonIcon_Hitmonlee_,
	[SPECIES_HITMONCHAN] = gMonIcon_Hitmonchan_,
	[SPECIES_LICKITUNG] = gMonIcon_Lickitung_,
	[SPECIES_KOFFING] = gMonIcon_Koffing_,
	[SPECIES_WEEZING] = gMonIcon_Weezing_,
	[SPECIES_RHYHORN] = gMonIcon_Rhyhorn_,
	[SPECIES_RHYDON] = gMonIcon_Rhydon_,
	[SPECIES_CHANSEY] = gMonIcon_Chansey_,
	[SPECIES_TANGELA] = gMonIcon_Tangela_,
	[SPECIES_KANGASKHAN] = gMonIcon_Kangaskhan_,
	[SPECIES_HORSEA] = gMonIcon_Horsea_,
	[SPECIES_SEADRA] = gMonIcon_Seadra_,
	[SPECIES_GOLDEEN] = gMonIcon_Goldeen_,
	[SPECIES_SEAKING] = gMonIcon_Seaking_,
	[SPECIES_STARYU] = gMonIcon_Staryu_,
	[SPECIES_STARMIE] = gMonIcon_Starmie_,
	[SPECIES_MRMIME] = gMonIcon_MrMime_,
	[SPECIES_SCYTHER] = gMonIcon_Scyther_,
	[SPECIES_JYNX] = gMonIcon_Jynx_,
	[SPECIES_ELECTABUZZ] = gMonIcon_Electabuzz_,
	[SPECIES_MAGMAR] = gMonIcon_Magmar_,
	[SPECIES_PINSIR] = gMonIcon_Pinsir_,
	[SPECIES_TAUROS] = gMonIcon_Tauros_,
	[SPECIES_MAGIKARP] = gMonIcon_Magikarp_,
	[SPECIES_GYARADOS] = gMonIcon_Gyarados_,
	[SPECIES_LAPRAS] = gMonIcon_Lapras_,
	[SPECIES_DITTO] = gMonIcon_Ditto_,
	[SPECIES_EEVEE] = gMonIcon_Eevee_,
	[SPECIES_VAPOREON] = gMonIcon_Vaporeon_,
	[SPECIES_JOLTEON] = gMonIcon_Jolteon_,
	[SPECIES_FLAREON] = gMonIcon_Flareon_,
	[SPECIES_PORYGON] = gMonIcon_Porygon_,
	[SPECIES_OMANYTE] = gMonIcon_Omanyte_,
	[SPECIES_OMASTAR] = gMonIcon_Omastar_,
	[SPECIES_KABUTO] = gMonIcon_Kabuto_,
	[SPECIES_KABUTOPS] = gMonIcon_Kabutops_,
	[SPECIES_AERODACTYL] = gMonIcon_Aerodactyl_,
	[SPECIES_SNORLAX] = gMonIcon_Snorlax_,
	[SPECIES_ARTICUNO] = gMonIcon_Articuno_,
	[SPECIES_ZAPDOS] = gMonIcon_Zapdos_,
	[SPECIES_MOLTRES] = gMonIcon_Moltres_,
	[SPECIES_DRATINI] = gMonIcon_Dratini_,
	[SPECIES_DRAGONAIR] = gMonIcon_Dragonair_,
	[SPECIES_DRAGONITE] = gMonIcon_Dragonite_,
	[SPECIES_MEWTWO] = gMonIcon_Mewtwo_,
	[SPECIES_MEW] = gMonIcon_Mew_,
	[SPECIES_CHIKORITA] = gMonIcon_Chikorita_,
	[SPECIES_BAYLEEF] = gMonIcon_Bayleef_,
	[SPECIES_MEGANIUM] = gMonIcon_Meganium_,
	[SPECIES_CYNDAQUIL] = gMonIcon_Cyndaquil_,
	[SPECIES_QUILAVA] = gMonIcon_Quilava_,
	[SPECIES_TYPHLOSION] = gMonIcon_Typhlosion_,
	[SPECIES_TOTODILE] = gMonIcon_Totodile_,
	[SPECIES_CROCONAW] = gMonIcon_Croconaw_,
	[SPECIES_FERALIGATR] = gMonIcon_Feraligatr_,
	[SPECIES_SENTRET] = gMonIcon_Sentret_,
	[SPECIES_FURRET] = gMonIcon_Furret_,
	[SPECIES_HOOTHOOT] = gMonIcon_Hoothoot_,
	[SPECIES_NOCTOWL] = gMonIcon_Noctowl_,
	[SPECIES_LEDYBA] = gMonIcon_Ledyba_,
	[SPECIES_LEDIAN] = gMonIcon_Ledian_,
	[SPECIES_SPINARAK] = gMonIcon_Spinarak_,
	[SPECIES_ARIADOS] = gMonIcon_Ariados_,
	[SPECIES_CROBAT] = gMonIcon_Crobat_,
	[SPECIES_CHINCHOU] = gMonIcon_Chinchou_,
	[SPECIES_LANTURN] = gMonIcon_Lanturn_,
	[SPECIES_PICHU] = gMonIcon_Pichu_,
	[SPECIES_CLEFFA] = gMonIcon_Cleffa_,
	[SPECIES_IGGLYBUFF] = gMonIcon_Igglybuff_,
	[SPECIES_TOGEPI] = gMonIcon_Togepi_,
	[SPECIES_TOGETIC] = gMonIcon_Togetic_,
	[SPECIES_NATU] = gMonIcon_Natu_,
	[SPECIES_XATU] = gMonIcon_Xatu_,
	[SPECIES_MAREEP] = gMonIcon_Mareep_,
	[SPECIES_FLAAFFY] = gMonIcon_Flaaffy_,
	[SPECIES_AMPHAROS] = gMonIcon_Ampharos_,
	[SPECIES_BELLOSSOM] = gMonIcon_Bellossom_,
	[SPECIES_MARILL] = gMonIcon_Marill_,
	[SPECIES_AZUMARILL] = gMonIcon_Azumarill_,
	[SPECIES_SUDOWOODO] = gMonIcon_Sudowoodo_,
	[SPECIES_POLITOED] = gMonIcon_Politoed_,
	[SPECIES_HOPPIP] = gMonIcon_Hoppip_,
	[SPECIES_SKIPLOOM] = gMonIcon_Skiploom_,
	[SPECIES_JUMPLUFF] = gMonIcon_Jumpluff_,
	[SPECIES_AIPOM] = gMonIcon_Aipom_,
	[SPECIES_SUNKERN] = gMonIcon_Sunkern_,
	[SPECIES_SUNFLORA] = gMonIcon_Sunflora_,
	[SPECIES_YANMA] = gMonIcon_Yanma_,
	[SPECIES_WOOPER] = gMonIcon_Wooper_,
	[SPECIES_QUAGSIRE] = gMonIcon_Quagsire_,
	[SPECIES_ESPEON] = gMonIcon_Espeon_,
	[SPECIES_UMBREON] = gMonIcon_Umbreon_,
	[SPECIES_MURKROW] = gMonIcon_Murkrow_,
	[SPECIES_SLOWKING] = gMonIcon_Slowking_,
	[SPECIES_MISDREAVUS] = gMonIcon_Misdreavus_,
	[SPECIES_UNOWN] = gMonIcon_Unown_,
	[SPECIES_WOBBUFFET] = gMonIcon_Wobbuffet_,
	[SPECIES_GIRAFARIG] = gMonIcon_Girafarig_,
	[SPECIES_PINECO] = gMonIcon_Pineco_,
	[SPECIES_FORRETRESS] = gMonIcon_Forretress_,
	[SPECIES_DUNSPARCE] = gMonIcon_Dunsparce_,
	[SPECIES_GLIGAR] = gMonIcon_Gligar_,
	[SPECIES_STEELIX] = gMonIcon_Steelix_,
	[SPECIES_SNUBBULL] = gMonIcon_Snubbull_,
	[SPECIES_GRANBULL] = gMonIcon_Granbull_,
	[SPECIES_QWILFISH] = gMonIcon_Qwilfish_,
	[SPECIES_SCIZOR] = gMonIcon_Scizor_,
	[SPECIES_SHUCKLE] = gMonIcon_Shuckle_,
	[SPECIES_HERACROSS] = gMonIcon_Heracross_,
	[SPECIES_SNEASEL] = gMonIcon_Sneasel_,
	[SPECIES_TEDDIURSA] = gMonIcon_Teddiursa_,
	[SPECIES_URSARING] = gMonIcon_Ursaring_,
	[SPECIES_SLUGMA] = gMonIcon_Slugma_,
	[SPECIES_MAGCARGO] = gMonIcon_Magcargo_,
	[SPECIES_SWINUB] = gMonIcon_Swinub_,
	[SPECIES_PILOSWINE] = gMonIcon_Piloswine_,
	[SPECIES_CORSOLA] = gMonIcon_Corsola_,
	[SPECIES_REMORAID] = gMonIcon_Remoraid_,
	[SPECIES_OCTILLERY] = gMonIcon_Octillery_,
	[SPECIES_DELIBIRD] = gMonIcon_Delibird_,
	[SPECIES_MANTINE] = gMonIcon_Mantine_,
	[SPECIES_SKARMORY] = gMonIcon_Skarmory_,
	[SPECIES_HOUNDOUR] = gMonIcon_Houndour_,
	[SPECIES_HOUNDOOM] = gMonIcon_Houndoom_,
	[SPECIES_KINGDRA] = gMonIcon_Kingdra_,
	[SPECIES_PHANPY] = gMonIcon_Phanpy_,
	[SPECIES_DONPHAN] = gMonIcon_Donphan_,
	[SPECIES_PORYGON2] = gMonIcon_Porygon2_,
	[SPECIES_STANTLER] = gMonIcon_Stantler_,
	[SPECIES_SMEARGLE] = gMonIcon_Smeargle_,
	[SPECIES_TYROGUE] = gMonIcon_Tyrogue_,
	[SPECIES_HITMONTOP] = gMonIcon_Hitmontop_,
	[SPECIES_SMOOCHUM] = gMonIcon_Smoochum_,
	[SPECIES_ELEKID] = gMonIcon_Elekid_,
	[SPECIES_MAGBY] = gMonIcon_Magby_,
	[SPECIES_MILTANK] = gMonIcon_Miltank_,
	[SPECIES_BLISSEY] = gMonIcon_Blissey_,
	[SPECIES_RAIKOU] = gMonIcon_Raikou_,
	[SPECIES_ENTEI] = gMonIcon_Entei_,
	[SPECIES_SUICUNE] = gMonIcon_Suicune_,
	[SPECIES_LARVITAR] = gMonIcon_Larvitar_,
	[SPECIES_PUPITAR] = gMonIcon_Pupitar_,
	[SPECIES_TYRANITAR] = gMonIcon_Tyranitar_,
	[SPECIES_LUGIA] = gMonIcon_Lugia_,
	[SPECIES_HOOH] = gMonIcon_HoOh_,
	[SPECIES_CELEBI] = gMonIcon_Celebi_,
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
	[SPECIES_TREECKO] = gMonIcon_Treecko_,
	[SPECIES_GROVYLE] = gMonIcon_Grovyle_,
	[SPECIES_SCEPTILE] = gMonIcon_Sceptile_,
	[SPECIES_TORCHIC] = gMonIcon_Torchic_,
	[SPECIES_COMBUSKEN] = gMonIcon_Combusken_,
	[SPECIES_BLAZIKEN] = gMonIcon_Blaziken_,
	[SPECIES_MUDKIP] = gMonIcon_Mudkip_,
	[SPECIES_MARSHTOMP] = gMonIcon_Marshtomp_,
	[SPECIES_SWAMPERT] = gMonIcon_Swampert_,
	[SPECIES_POOCHYENA] = gMonIcon_Poochyena_,
	[SPECIES_MIGHTYENA] = gMonIcon_Mightyena_,
	[SPECIES_ZIGZAGOON] = gMonIcon_Zigzagoon_,
	[SPECIES_LINOONE] = gMonIcon_Linoone_,
	[SPECIES_WURMPLE] = gMonIcon_Wurmple_,
	[SPECIES_SILCOON] = gMonIcon_Silcoon_,
	[SPECIES_BEAUTIFLY] = gMonIcon_Beautifly_,
	[SPECIES_CASCOON] = gMonIcon_Cascoon_,
	[SPECIES_DUSTOX] = gMonIcon_Dustox_,
	[SPECIES_LOTAD] = gMonIcon_Lotad_,
	[SPECIES_LOMBRE] = gMonIcon_Lombre_,
	[SPECIES_LUDICOLO] = gMonIcon_Ludicolo_,
	[SPECIES_SEEDOT] = gMonIcon_Seedot_,
	[SPECIES_NUZLEAF] = gMonIcon_Nuzleaf_,
	[SPECIES_SHIFTRY] = gMonIcon_Shiftry_,
	[SPECIES_TAILLOW] = gMonIcon_Taillow_,
	[SPECIES_SWELLOW] = gMonIcon_Swellow_,
	[SPECIES_WINGULL] = gMonIcon_Wingull_,
	[SPECIES_PELIPPER] = gMonIcon_Pelipper_,
	[SPECIES_RALTS] = gMonIcon_Ralts_,
	[SPECIES_KIRLIA] = gMonIcon_Kirlia_,
	[SPECIES_GARDEVOIR] = gMonIcon_Gardevoir_,
	[SPECIES_SURSKIT] = gMonIcon_Surskit_,
	[SPECIES_MASQUERAIN] = gMonIcon_Masquerain_,
	[SPECIES_SHROOMISH] = gMonIcon_Shroomish_,
	[SPECIES_BRELOOM] = gMonIcon_Breloom_,
	[SPECIES_SLAKOTH] = gMonIcon_Slakoth_,
	[SPECIES_VIGOROTH] = gMonIcon_Vigoroth_,
	[SPECIES_SLAKING] = gMonIcon_Slaking_,
	[SPECIES_NINCADA] = gMonIcon_Nincada_,
	[SPECIES_NINJASK] = gMonIcon_Ninjask_,
	[SPECIES_SHEDINJA] = gMonIcon_Shedinja_,
	[SPECIES_WHISMUR] = gMonIcon_Whismur_,
	[SPECIES_LOUDRED] = gMonIcon_Loudred_,
	[SPECIES_EXPLOUD] = gMonIcon_Exploud_,
	[SPECIES_MAKUHITA] = gMonIcon_Makuhita_,
	[SPECIES_HARIYAMA] = gMonIcon_Hariyama_,
	[SPECIES_AZURILL] = gMonIcon_Azurill_,
	[SPECIES_NOSEPASS] = gMonIcon_Nosepass_,
	[SPECIES_SKITTY] = gMonIcon_Skitty_,
	[SPECIES_DELCATTY] = gMonIcon_Delcatty_,
	[SPECIES_SABLEYE] = gMonIcon_Sableye_,
	[SPECIES_MAWILE] = gMonIcon_Mawile_,
	[SPECIES_ARON] = gMonIcon_Aron_,
	[SPECIES_LAIRON] = gMonIcon_Lairon_,
	[SPECIES_AGGRON] = gMonIcon_Aggron_,
	[SPECIES_MEDITITE] = gMonIcon_Meditite_,
	[SPECIES_MEDICHAM] = gMonIcon_Medicham_,
	[SPECIES_ELECTRIKE] = gMonIcon_Electrike_,
	[SPECIES_MANECTRIC] = gMonIcon_Manectric_,
	[SPECIES_PLUSLE] = gMonIcon_Plusle_,
	[SPECIES_MINUN] = gMonIcon_Minun_,
	[SPECIES_VOLBEAT] = gMonIcon_Volbeat_,
	[SPECIES_ILLUMISE] = gMonIcon_Illumise_,
	[SPECIES_ROSELIA] = gMonIcon_Roselia_,
	[SPECIES_GULPIN] = gMonIcon_Gulpin_,
	[SPECIES_SWALOT] = gMonIcon_Swalot_,
	[SPECIES_CARVANHA] = gMonIcon_Carvanha_,
	[SPECIES_SHARPEDO] = gMonIcon_Sharpedo_,
	[SPECIES_WAILMER] = gMonIcon_Wailmer_,
	[SPECIES_WAILORD] = gMonIcon_Wailord_,
	[SPECIES_NUMEL] = gMonIcon_Numel_,
	[SPECIES_CAMERUPT] = gMonIcon_Camerupt_,
	[SPECIES_TORKOAL] = gMonIcon_Torkoal_,
	[SPECIES_SPOINK] = gMonIcon_Spoink_,
	[SPECIES_GRUMPIG] = gMonIcon_Grumpig_,
	[SPECIES_SPINDA] = gMonIcon_Spinda_,
	[SPECIES_TRAPINCH] = gMonIcon_Trapinch_,
	[SPECIES_VIBRAVA] = gMonIcon_Vibrava_,
	[SPECIES_FLYGON] = gMonIcon_Flygon_,
	[SPECIES_CACNEA] = gMonIcon_Cacnea_,
	[SPECIES_CACTURNE] = gMonIcon_Cacturne_,
	[SPECIES_SWABLU] = gMonIcon_Swablu_,
	[SPECIES_ALTARIA] = gMonIcon_Altaria_,
	[SPECIES_ZANGOOSE] = gMonIcon_Zangoose_,
	[SPECIES_SEVIPER] = gMonIcon_Seviper_,
	[SPECIES_LUNATONE] = gMonIcon_Lunatone_,
	[SPECIES_SOLROCK] = gMonIcon_Solrock_,
	[SPECIES_BARBOACH] = gMonIcon_Barboach_,
	[SPECIES_WHISCASH] = gMonIcon_Whiscash_,
	[SPECIES_CORPHISH] = gMonIcon_Corphish_,
	[SPECIES_CRAWDAUNT] = gMonIcon_Crawdaunt_,
	[SPECIES_BALTOY] = gMonIcon_Baltoy_,
	[SPECIES_CLAYDOL] = gMonIcon_Claydol_,
	[SPECIES_LILEEP] = gMonIcon_Lileep_,
	[SPECIES_CRADILY] = gMonIcon_Cradily_,
	[SPECIES_ANORITH] = gMonIcon_Anorith_,
	[SPECIES_ARMALDO] = gMonIcon_Armaldo_,
	[SPECIES_FEEBAS] = gMonIcon_Feebas_,
	[SPECIES_MILOTIC] = gMonIcon_Milotic_,
	[SPECIES_CASTFORM] = gMonIcon_Castform_,
	[SPECIES_KECLEON] = gMonIcon_Kecleon_,
	[SPECIES_SHUPPET] = gMonIcon_Shuppet_,
	[SPECIES_BANETTE] = gMonIcon_Banette_,
	[SPECIES_DUSKULL] = gMonIcon_Duskull_,
	[SPECIES_DUSCLOPS] = gMonIcon_Dusclops_,
	[SPECIES_TROPIUS] = gMonIcon_Tropius_,
	[SPECIES_CHIMECHO] = gMonIcon_Chimecho_,
	[SPECIES_ABSOL] = gMonIcon_Absol_,
	[SPECIES_WYNAUT] = gMonIcon_Wynaut_,
	[SPECIES_SNORUNT] = gMonIcon_Snorunt_,
	[SPECIES_GLALIE] = gMonIcon_Glalie_,
	[SPECIES_SPHEAL] = gMonIcon_Spheal_,
	[SPECIES_SEALEO] = gMonIcon_Sealeo_,
	[SPECIES_WALREIN] = gMonIcon_Walrein_,
	[SPECIES_CLAMPERL] = gMonIcon_Clamperl_,
	[SPECIES_HUNTAIL] = gMonIcon_Huntail_,
	[SPECIES_GOREBYSS] = gMonIcon_Gorebyss_,
	[SPECIES_RELICANTH] = gMonIcon_Relicanth_,
	[SPECIES_LUVDISC] = gMonIcon_Luvdisc_,
	[SPECIES_BAGON] = gMonIcon_Bagon_,
	[SPECIES_SHELGON] = gMonIcon_Shelgon_,
	[SPECIES_SALAMENCE] = gMonIcon_Salamence_,
	[SPECIES_BELDUM] = gMonIcon_Beldum_,
	[SPECIES_METANG] = gMonIcon_Metang_,
	[SPECIES_METAGROSS] = gMonIcon_Metagross_,
	[SPECIES_REGIROCK] = gMonIcon_Regirock_,
	[SPECIES_REGICE] = gMonIcon_Regice_,
	[SPECIES_REGISTEEL] = gMonIcon_Registeel_,
	[SPECIES_LATIAS] = gMonIcon_Latias_,
	[SPECIES_LATIOS] = gMonIcon_Latios_,
	[SPECIES_KYOGRE] = gMonIcon_Kyogre_,
	[SPECIES_GROUDON] = gMonIcon_Groudon_,
	[SPECIES_RAYQUAZA] = gMonIcon_Rayquaza_,
	[SPECIES_JIRACHI] = gMonIcon_Jirachi_,
	[SPECIES_DEOXYS] = gMonIcon_Deoxys_,
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
	[SPECIES_TURTWIG] = gMonIcon_Turtwig_,
	[SPECIES_GROTLE] = gMonIcon_Grotle_,
	[SPECIES_TORTERRA] = gMonIcon_Torterra_,
	[SPECIES_CHIMCHAR] = gMonIcon_Chimchar_,
	[SPECIES_MONFERNO] = gMonIcon_Monferno_,
	[SPECIES_INFERNAPE] = gMonIcon_Infernape_,
	[SPECIES_PIPLUP] = gMonIcon_Piplup_,
	[SPECIES_PRINPLUP] = gMonIcon_Prinplup_,
	[SPECIES_EMPOLEON] = gMonIcon_Empoleon_,
	[SPECIES_STARLY] = gMonIcon_Starly_,
	[SPECIES_STARAVIA] = gMonIcon_Staravia_,
	[SPECIES_STARAPTOR] = gMonIcon_Staraptor_,
	[SPECIES_BIDOOF] = gMonIcon_Bidoof_,
	[SPECIES_BIBAREL] = gMonIcon_Bibarel_,
	[SPECIES_KRICKETOT] = gMonIcon_Kricketot_,
	[SPECIES_KRICKETUNE] = gMonIcon_Kricketune_,
	[SPECIES_SHINX] = gMonIcon_Shinx_,
	[SPECIES_LUXIO] = gMonIcon_Luxio_,
	[SPECIES_LUXRAY] = gMonIcon_Luxray_,
	[SPECIES_BUDEW] = gMonIcon_Budew_,
	[SPECIES_ROSERADE] = gMonIcon_Roserade_,
	[SPECIES_CRANIDOS] = gMonIcon_Cranidos_,
	[SPECIES_RAMPARDOS] = gMonIcon_Rampardos_,
	[SPECIES_SHIELDON] = gMonIcon_Shieldon_,
	[SPECIES_BASTIODON] = gMonIcon_Bastiodon_,
	[SPECIES_BURMY] = gMonIcon_Burmy_,
	[SPECIES_WORMADAM] = gMonIcon_Wormadam_,
	[SPECIES_MOTHIM] = gMonIcon_Mothim_,
	[SPECIES_COMBEE] = gMonIcon_Combee_,
	[SPECIES_VESPIQUEN] = gMonIcon_Vespiquen_,
	[SPECIES_PACHIRISU] = gMonIcon_Pachirisu_,
	[SPECIES_BUIZEL] = gMonIcon_Buizel_,
	[SPECIES_FLOATZEL] = gMonIcon_Floatzel_,
	[SPECIES_CHERUBI] = gMonIcon_Cherubi_,
	[SPECIES_CHERRIM] = gMonIcon_Cherrim_,
	[SPECIES_SHELLOS] = gMonIcon_Shellos_,
	[SPECIES_GASTRODON] = gMonIcon_Gastrodon_,
	[SPECIES_AMBIPOM] = gMonIcon_Ambipom_,
	[SPECIES_DRIFLOON] = gMonIcon_Drifloon_,
	[SPECIES_DRIFBLIM] = gMonIcon_Drifblim_,
	[SPECIES_BUNEARY] = gMonIcon_Buneary_,
	[SPECIES_LOPUNNY] = gMonIcon_Lopunny_,
	[SPECIES_MISMAGIUS] = gMonIcon_Mismagius_,
	[SPECIES_HONCHKROW] = gMonIcon_Honchkrow_,
	[SPECIES_GLAMEOW] = gMonIcon_Glameow_,
	[SPECIES_PURUGLY] = gMonIcon_Purugly_,
	[SPECIES_CHINGLING] = gMonIcon_Chingling_,
	[SPECIES_STUNKY] = gMonIcon_Stunky_,
	[SPECIES_SKUNTANK] = gMonIcon_Skuntank_,
	[SPECIES_BRONZOR] = gMonIcon_Bronzor_,
	[SPECIES_BRONZONG] = gMonIcon_Bronzong_,
	[SPECIES_BONSLY] = gMonIcon_Bonsly_,
	[SPECIES_MIMEJR] = gMonIcon_MimeJr_,
	[SPECIES_HAPPINY] = gMonIcon_Happiny_,
	[SPECIES_CHATOT] = gMonIcon_Chatot_,
	[SPECIES_SPIRITOMB] = gMonIcon_Spiritomb_,
	[SPECIES_GIBLE] = gMonIcon_Gible_,
	[SPECIES_GABITE] = gMonIcon_Gabite_,
	[SPECIES_GARCHOMP] = gMonIcon_Garchomp_,
	[SPECIES_MUNCHLAX] = gMonIcon_Munchlax_,
	[SPECIES_RIOLU] = gMonIcon_Riolu_,
	[SPECIES_LUCARIO] = gMonIcon_Lucario_,
	[SPECIES_HIPPOPOTAS] = gMonIcon_Hippopotas_,
	[SPECIES_HIPPOWDON] = gMonIcon_Hippowdon_,
	[SPECIES_SKORUPI] = gMonIcon_Skorupi_,
	[SPECIES_DRAPION] = gMonIcon_Drapion_,
	[SPECIES_CROAGUNK] = gMonIcon_Croagunk_,
	[SPECIES_TOXICROAK] = gMonIcon_Toxicroak_,
	[SPECIES_CARNIVINE] = gMonIcon_Carnivine_,
	[SPECIES_FINNEON] = gMonIcon_Finneon_,
	[SPECIES_LUMINEON] = gMonIcon_Lumineon_,
	[SPECIES_MANTYKE] = gMonIcon_Mantyke_,
	[SPECIES_SNOVER] = gMonIcon_Snover_,
	[SPECIES_ABOMASNOW] = gMonIcon_Abomasnow_,
	[SPECIES_WEAVILE] = gMonIcon_Weavile_,
	[SPECIES_MAGNEZONE] = gMonIcon_Magnezone_,
	[SPECIES_LICKILICKY] = gMonIcon_Lickilicky_,
	[SPECIES_RHYPERIOR] = gMonIcon_Rhyperior_,
	[SPECIES_TANGROWTH] = gMonIcon_Tangrowth_,
	[SPECIES_ELECTIVIRE] = gMonIcon_Electivire_,
	[SPECIES_MAGMORTAR] = gMonIcon_Magmortar_,
	[SPECIES_TOGEKISS] = gMonIcon_Togekiss_,
	[SPECIES_YANMEGA] = gMonIcon_Yanmega_,
	[SPECIES_LEAFEON] = gMonIcon_Leafeon_,
	[SPECIES_GLACEON] = gMonIcon_Glaceon_,
	[SPECIES_GLISCOR] = gMonIcon_Gliscor_,
	[SPECIES_MAMOSWINE] = gMonIcon_Mamoswine_,
	[SPECIES_PORYGONZ] = gMonIcon_PorygonZ_,
	[SPECIES_GALLADE] = gMonIcon_Gallade_,
	[SPECIES_PROBOPASS] = gMonIcon_Probopass_,
	[SPECIES_DUSKNOIR] = gMonIcon_Dusknoir_,
	[SPECIES_FROSLASS] = gMonIcon_Froslass_,
	[SPECIES_ROTOM] = gMonIcon_Rotom_,
	[SPECIES_UXIE] = gMonIcon_Uxie_,
	[SPECIES_MESPRIT] = gMonIcon_Mesprit_,
	[SPECIES_AZELF] = gMonIcon_Azelf_,
	[SPECIES_DIALGA] = gMonIcon_Dialga_,
	[SPECIES_PALKIA] = gMonIcon_Palkia_,
	[SPECIES_HEATRAN] = gMonIcon_Heatran_,
	[SPECIES_REGIGIGAS] = gMonIcon_Regigigas_,
	[SPECIES_GIRATINA] = gMonIcon_Giratina_,
	[SPECIES_CRESSELIA] = gMonIcon_Cresselia_,
	[SPECIES_PHIONE] = gMonIcon_Phione_,
	[SPECIES_MANAPHY] = gMonIcon_Manaphy_,
	[SPECIES_DARKRAI] = gMonIcon_Darkrai_,
	[SPECIES_SHAYMIN] = gMonIcon_Shaymin_,
	[SPECIES_ARCEUS] = gMonIcon_Arceus_,
	[SPECIES_VICTINI] = gMonIcon_Victini_,
	[SPECIES_SNIVY] = gMonIcon_Snivy_,
	[SPECIES_SERVINE] = gMonIcon_Servine_,
	[SPECIES_SERPERIOR] = gMonIcon_Serperior_,
	[SPECIES_TEPIG] = gMonIcon_Tepig_,
	[SPECIES_PIGNITE] = gMonIcon_Pignite_,
	[SPECIES_EMBOAR] = gMonIcon_Emboar_,
	[SPECIES_OSHAWOTT] = gMonIcon_Oshawott_,
	[SPECIES_DEWOTT] = gMonIcon_Dewott_,
	[SPECIES_SAMUROTT] = gMonIcon_Samurott_,
	[SPECIES_PATRAT] = gMonIcon_Patrat_,
	[SPECIES_WATCHOG] = gMonIcon_Watchog_,
	[SPECIES_LILLIPUP] = gMonIcon_Lillipup_,
	[SPECIES_HERDIER] = gMonIcon_Herdier_,
	[SPECIES_STOUTLAND] = gMonIcon_Stoutland_,
	[SPECIES_PURRLOIN] = gMonIcon_Purrloin_,
	[SPECIES_LIEPARD] = gMonIcon_Liepard_,
	[SPECIES_PANSAGE] = gMonIcon_Pansage_,
	[SPECIES_SIMISAGE] = gMonIcon_Simisage_,
	[SPECIES_PANSEAR] = gMonIcon_Pansear_,
	[SPECIES_SIMISEAR] = gMonIcon_Simisear_,
	[SPECIES_PANPOUR] = gMonIcon_Panpour_,
	[SPECIES_SIMIPOUR] = gMonIcon_Simipour_,
	[SPECIES_MUNNA] = gMonIcon_Munna_,
	[SPECIES_MUSHARNA] = gMonIcon_Musharna_,
	[SPECIES_PIDOVE] = gMonIcon_Pidove_,
	[SPECIES_TRANQUILL] = gMonIcon_Tranquill_,
	[SPECIES_UNFEZANT] = gMonIcon_Unfezant_,
	[SPECIES_BLITZLE] = gMonIcon_Blitzle_,
	[SPECIES_ZEBSTRIKA] = gMonIcon_Zebstrika_,
	[SPECIES_ROGGENROLA] = gMonIcon_Roggenrola_,
	[SPECIES_BOLDORE] = gMonIcon_Boldore_,
	[SPECIES_GIGALITH] = gMonIcon_Gigalith_,
	[SPECIES_WOOBAT] = gMonIcon_Woobat_,
	[SPECIES_SWOOBAT] = gMonIcon_Swoobat_,
	[SPECIES_DRILBUR] = gMonIcon_Drilbur_,
	[SPECIES_EXCADRILL] = gMonIcon_Excadrill_,
	[SPECIES_AUDINO] = gMonIcon_Audino_,
	[SPECIES_TIMBURR] = gMonIcon_Timburr_,
	[SPECIES_GURDURR] = gMonIcon_Gurdurr_,
	[SPECIES_CONKELDURR] = gMonIcon_Conkeldurr_,
	[SPECIES_TYMPOLE] = gMonIcon_Tympole_,
	[SPECIES_PALPITOAD] = gMonIcon_Palpitoad_,
	[SPECIES_SEISMITOAD] = gMonIcon_Seismitoad_,
	[SPECIES_THROH] = gMonIcon_Throh_,
	[SPECIES_SAWK] = gMonIcon_Sawk_,
	[SPECIES_SEWADDLE] = gMonIcon_Sewaddle_,
	[SPECIES_SWADLOON] = gMonIcon_Swadloon_,
	[SPECIES_LEAVANNY] = gMonIcon_Leavanny_,
	[SPECIES_VENIPEDE] = gMonIcon_Venipede_,
	[SPECIES_WHIRLIPEDE] = gMonIcon_Whirlipede_,
	[SPECIES_SCOLIPEDE] = gMonIcon_Scolipede_,
	[SPECIES_COTTONEE] = gMonIcon_Cottonee_,
	[SPECIES_WHIMSICOTT] = gMonIcon_Whimsicott_,
	[SPECIES_PETILIL] = gMonIcon_Petilil_,
	[SPECIES_LILLIGANT] = gMonIcon_Lilligant_,
	[SPECIES_BASCULIN] = gMonIcon_Basculin_,
	[SPECIES_SANDILE] = gMonIcon_Sandile_,
	[SPECIES_KROKOROK] = gMonIcon_Krokorok_,
	[SPECIES_KROOKODILE] = gMonIcon_Krookodile_,
	[SPECIES_DARUMAKA] = gMonIcon_Darumaka_,
	[SPECIES_DARMANITAN] = gMonIcon_Darmanitan_,
	[SPECIES_MARACTUS] = gMonIcon_Maractus_,
	[SPECIES_DWEBBLE] = gMonIcon_Dwebble_,
	[SPECIES_CRUSTLE] = gMonIcon_Crustle_,
	[SPECIES_SCRAGGY] = gMonIcon_Scraggy_,
	[SPECIES_SCRAFTY] = gMonIcon_Scrafty_,
	[SPECIES_SIGILYPH] = gMonIcon_Sigilyph_,
	[SPECIES_YAMASK] = gMonIcon_Yamask_,
	[SPECIES_COFAGRIGUS] = gMonIcon_Cofagrigus_,
	[SPECIES_TIRTOUGA] = gMonIcon_Tirtouga_,
	[SPECIES_CARRACOSTA] = gMonIcon_Carracosta_,
	[SPECIES_ARCHEN] = gMonIcon_Archen_,
	[SPECIES_ARCHEOPS] = gMonIcon_Archeops_,
	[SPECIES_TRUBBISH] = gMonIcon_Trubbish_,
	[SPECIES_GARBODOR] = gMonIcon_Garbodor_,
	[SPECIES_ZORUA] = gMonIcon_Zorua_,
	[SPECIES_ZOROARK] = gMonIcon_Zoroark_,
	[SPECIES_MINCCINO] = gMonIcon_Minccino_,
	[SPECIES_CINCCINO] = gMonIcon_Cinccino_,
	[SPECIES_GOTHITA] = gMonIcon_Gothita_,
	[SPECIES_GOTHORITA] = gMonIcon_Gothorita_,
	[SPECIES_GOTHITELLE] = gMonIcon_Gothitelle_,
	[SPECIES_SOLOSIS] = gMonIcon_Solosis_,
	[SPECIES_DUOSION] = gMonIcon_Duosion_,
	[SPECIES_REUNICLUS] = gMonIcon_Reuniclus_,
	[SPECIES_DUCKLETT] = gMonIcon_Ducklett_,
	[SPECIES_SWANNA] = gMonIcon_Swanna_,
	[SPECIES_VANILLITE] = gMonIcon_Vanillite_,
	[SPECIES_VANILLISH] = gMonIcon_Vanillish_,
	[SPECIES_VANILLUXE] = gMonIcon_Vanilluxe_,
	[SPECIES_DEERLING] = gMonIcon_Deerling_,
	[SPECIES_SAWSBUCK] = gMonIcon_Sawsbuck_,
	[SPECIES_EMOLGA] = gMonIcon_Emolga_,
	[SPECIES_KARRABLAST] = gMonIcon_Karrablast_,
	[SPECIES_ESCAVALIER] = gMonIcon_Escavalier_,
	[SPECIES_FOONGUS] = gMonIcon_Foongus_,
	[SPECIES_AMOONGUSS] = gMonIcon_Amoonguss_,
	[SPECIES_FRILLISH] = gMonIcon_Frillish_,
	[SPECIES_JELLICENT] = gMonIcon_Jellicent_,
	[SPECIES_ALOMOMOLA] = gMonIcon_Alomomola_,
	[SPECIES_JOLTIK] = gMonIcon_Joltik_,
	[SPECIES_GALVANTULA] = gMonIcon_Galvantula_,
	[SPECIES_FERROSEED] = gMonIcon_Ferroseed_,
	[SPECIES_FERROTHORN] = gMonIcon_Ferrothorn_,
	[SPECIES_KLINK] = gMonIcon_Klink_,
	[SPECIES_KLANG] = gMonIcon_Klang_,
	[SPECIES_KLINKLANG] = gMonIcon_Klinklang_,
	[SPECIES_TYNAMO] = gMonIcon_Tynamo_,
	[SPECIES_EELEKTRIK] = gMonIcon_Eelektrik_,
	[SPECIES_EELEKTROSS] = gMonIcon_Eelektross_,
	[SPECIES_ELGYEM] = gMonIcon_Elgyem_,
	[SPECIES_BEHEEYEM] = gMonIcon_Beheeyem_,
	[SPECIES_LITWICK] = gMonIcon_Litwick_,
	[SPECIES_LAMPENT] = gMonIcon_Lampent_,
	[SPECIES_CHANDELURE] = gMonIcon_Chandelure_,
	[SPECIES_AXEW] = gMonIcon_Axew_,
	[SPECIES_FRAXURE] = gMonIcon_Fraxure_,
	[SPECIES_HAXORUS] = gMonIcon_Haxorus_,
	[SPECIES_CUBCHOO] = gMonIcon_Cubchoo_,
	[SPECIES_BEARTIC] = gMonIcon_Beartic_,
	[SPECIES_CRYOGONAL] = gMonIcon_Cryogonal_,
	[SPECIES_SHELMET] = gMonIcon_Shelmet_,
	[SPECIES_ACCELGOR] = gMonIcon_Accelgor_,
	[SPECIES_STUNFISK] = gMonIcon_Stunfisk_,
	[SPECIES_MIENFOO] = gMonIcon_Mienfoo_,
	[SPECIES_MIENSHAO] = gMonIcon_Mienshao_,
	[SPECIES_DRUDDIGON] = gMonIcon_Druddigon_,
	[SPECIES_GOLETT] = gMonIcon_Golett_,
	[SPECIES_GOLURK] = gMonIcon_Golurk_,
	[SPECIES_PAWNIARD] = gMonIcon_Pawniard_,
	[SPECIES_BISHARP] = gMonIcon_Bisharp_,
	[SPECIES_BOUFFALANT] = gMonIcon_Bouffalant_,
	[SPECIES_RUFFLET] = gMonIcon_Rufflet_,
	[SPECIES_BRAVIARY] = gMonIcon_Braviary_,
	[SPECIES_VULLABY] = gMonIcon_Vullaby_,
	[SPECIES_MANDIBUZZ] = gMonIcon_Mandibuzz_,
	[SPECIES_HEATMOR] = gMonIcon_Heatmor_,
	[SPECIES_DURANT] = gMonIcon_Durant_,
	[SPECIES_DEINO] = gMonIcon_Deino_,
	[SPECIES_ZWEILOUS] = gMonIcon_Zweilous_,
	[SPECIES_HYDREIGON] = gMonIcon_Hydreigon_,
	[SPECIES_LARVESTA] = gMonIcon_Larvesta_,
	[SPECIES_VOLCARONA] = gMonIcon_Volcarona_,
	[SPECIES_COBALION] = gMonIcon_Cobalion_,
	[SPECIES_TERRAKION] = gMonIcon_Terrakion_,
	[SPECIES_VIRIZION] = gMonIcon_Virizion_,
	[SPECIES_TORNADUS] = gMonIcon_Tornadus_,
	[SPECIES_THUNDURUS] = gMonIcon_Thundurus_,
	[SPECIES_RESHIRAM] = gMonIcon_Reshiram_,
	[SPECIES_ZEKROM] = gMonIcon_Zekrom_,
	[SPECIES_LANDORUS] = gMonIcon_Landorus_,
	[SPECIES_KYUREM] = gMonIcon_Kyurem_,
	[SPECIES_KELDEO] = gMonIcon_Keldeo_,
	[SPECIES_MELOETTA] = gMonIcon_Meloetta_,
	[SPECIES_GENESECT] = gMonIcon_Genesect_,
	[SPECIES_CHESPIN] = gMonIcon_Chespin_,
	[SPECIES_QUILLADIN] = gMonIcon_Quilladin_,
	[SPECIES_CHESNAUGHT] = gMonIcon_Chesnaught_,
	[SPECIES_FENNEKIN] = gMonIcon_Fennekin_,
	[SPECIES_BRAIXEN] = gMonIcon_Braixen_,
	[SPECIES_DELPHOX] = gMonIcon_Delphox_,
	[SPECIES_FROAKIE] = gMonIcon_Froakie_,
	[SPECIES_FROGADIER] = gMonIcon_Frogadier_,
	[SPECIES_GRENINJA] = gMonIcon_Greninja_,
	[SPECIES_BUNNELBY] = gMonIcon_Bunnelby_,
	[SPECIES_DIGGERSBY] = gMonIcon_Diggersby_,
	[SPECIES_FLETCHLING] = gMonIcon_Fletchling_,
	[SPECIES_FLECHINDER] = gMonIcon_Flechinder_,
	[SPECIES_TALONFLAME] = gMonIcon_Talonflame_,
	[SPECIES_SCATTERBUG] = gMonIcon_Scatterbug_,
	[SPECIES_SPEWPA] = gMonIcon_Spewpa_,
	[SPECIES_VIVILLON] = gMonIcon_Vivillon_,
	[SPECIES_LITLEO] = gMonIcon_Litleo_,
	[SPECIES_PYROAR] = gMonIcon_Pyroar_,
	[SPECIES_FLABEBE] = gMonIcon_Flabebe_,
	[SPECIES_FLOETTE] = gMonIcon_Floette_,
	[SPECIES_FLORGES] = gMonIcon_Florges_,
	[SPECIES_SKIDDO] = gMonIcon_Skiddo_,
	[SPECIES_GOGOAT] = gMonIcon_Gogoat_,
	[SPECIES_PANCHAM] = gMonIcon_Pancham_,
	[SPECIES_PANGORO] = gMonIcon_Pangoro_,
	[SPECIES_FURFROU] = gMonIcon_Furfrou_,
	[SPECIES_ESPURR] = gMonIcon_Espurr_,
	[SPECIES_MEOWSTIC] = gMonIcon_Meowstic_,
	[SPECIES_HONEDGE] = gMonIcon_Honedge_,
	[SPECIES_DOUBLADE] = gMonIcon_Doublade_,
	[SPECIES_AEGISLASH] = gMonIcon_Aegislash_,
	[SPECIES_SPRITZEE] = gMonIcon_Spritzee_,
	[SPECIES_AROMATISSE] = gMonIcon_Aromatisse_,
	[SPECIES_SWIRLIX] = gMonIcon_Swirlix_,
	[SPECIES_SLURPUFF] = gMonIcon_Slurpuff_,
	[SPECIES_INKAY] = gMonIcon_Inkay_,
	[SPECIES_MALAMAR] = gMonIcon_Malamar_,
	[SPECIES_BINACLE] = gMonIcon_Binacle_,
	[SPECIES_BARBARACLE] = gMonIcon_Barbaracle_,
	[SPECIES_SKRELP] = gMonIcon_Skrelp_,
	[SPECIES_DRAGALGE] = gMonIcon_Dragalge_,
	[SPECIES_CLAUNCHER] = gMonIcon_Clauncher_,
	[SPECIES_CLAWITZER] = gMonIcon_Clawitzer_,
	[SPECIES_HELIOPTILE] = gMonIcon_Helioptile_,
	[SPECIES_HELIOLISK] = gMonIcon_Heliolisk_,
	[SPECIES_TYRUNT] = gMonIcon_Tyrunt_,
	[SPECIES_TYRANTRUM] = gMonIcon_Tyrantrum_,
	[SPECIES_AMAURA] = gMonIcon_Amaura_,
	[SPECIES_AURORUS] = gMonIcon_Aurorus_,
	[SPECIES_SYLVEON] = gMonIcon_Sylveon_,
	[SPECIES_HAWLUCHA] = gMonIcon_Hawlucha_,
	[SPECIES_DEDENNE] = gMonIcon_Dedenne_,
	[SPECIES_CARBINK] = gMonIcon_Carbink_,
	[SPECIES_GOOMY] = gMonIcon_Goomy_,
	[SPECIES_SLIGGOO] = gMonIcon_Sliggoo_,
	[SPECIES_GOODRA] = gMonIcon_Goodra_,
	[SPECIES_KLEFKI] = gMonIcon_Klefki_,
	[SPECIES_PHANTUMP] = gMonIcon_Phantump_,
	[SPECIES_TREVENANT] = gMonIcon_Trevenant_,
	[SPECIES_PUMPKABOO] = gMonIcon_Pumpkaboo_,
	[SPECIES_GOURGEIST] = gMonIcon_Gourgeist_,
	[SPECIES_BERGMITE] = gMonIcon_Bergmite_,
	[SPECIES_AVALUGG] = gMonIcon_Avalugg_,
	[SPECIES_NOIBAT] = gMonIcon_Noibat_,
	[SPECIES_NOIVERN] = gMonIcon_Noivern_,
	[SPECIES_XERNEAS] = gMonIcon_Xerneas_,
	[SPECIES_YVELTAL] = gMonIcon_Yveltal_,
	[SPECIES_ZYGARDE] = gMonIcon_Zygarde_,
	[SPECIES_DIANCIE] = gMonIcon_Diancie_,
	[SPECIES_HOOPA] = gMonIcon_Hoopa_,
	[SPECIES_VOLCANION] = gMonIcon_Volcanion_,
	[SPECIES_ROWLET] = gMonIcon_Rowlet_,
	[SPECIES_DARTRIX] = gMonIcon_Dartrix_,
	[SPECIES_DECIDUEYE] = gMonIcon_Decidueye_,
	[SPECIES_LITTEN] = gMonIcon_Litten_,
	[SPECIES_TORRACAT] = gMonIcon_Torracat_,
	[SPECIES_INCINEROAR] = gMonIcon_Incineroar_,
	[SPECIES_POPPLIO] = gMonIcon_Popplio_,
	[SPECIES_BRIONNE] = gMonIcon_Brionne_,
	[SPECIES_PRIMARINA] = gMonIcon_Primarina_,
	[SPECIES_PIKIPEK] = gMonIcon_Pikipek_,
	[SPECIES_TRUMBEAK] = gMonIcon_Trumbeak_,
	[SPECIES_TOUCANNON] = gMonIcon_Toucannon_,
	[SPECIES_YUNGOOS] = gMonIcon_Yungoos_,
	[SPECIES_GUMSHOOS] = gMonIcon_Gumshoos_,
	[SPECIES_GRUBBIN] = gMonIcon_Grubbin_,
	[SPECIES_CHARJABUG] = gMonIcon_Charjabug_,
	[SPECIES_VIKAVOLT] = gMonIcon_Vikavolt_,
	[SPECIES_CRABRAWLER] = gMonIcon_Crabrawler_,
	[SPECIES_CRABMINABL] = gMonIcon_Crabminabl_,
	[SPECIES_ORICORIO] = gMonIcon_Oricorio_,
	[SPECIES_CUTIEFLY] = gMonIcon_Cutiefly_,
	[SPECIES_RIBOMBEE] = gMonIcon_Ribombee_,
	[SPECIES_ROCKRUFF] = gMonIcon_Rockruff_,
	[SPECIES_LYCANROC] = gMonIcon_Lycanroc_,
	[SPECIES_WISHIWASHI] = gMonIcon_Wishiwashi_,
	[SPECIES_MAREANIE] = gMonIcon_Mareanie_,
	[SPECIES_TOXAPEX] = gMonIcon_Toxapex_,
	[SPECIES_MUDBRAY] = gMonIcon_Mudbray_,
	[SPECIES_MUDSDALE] = gMonIcon_Mudsdale_,
	[SPECIES_DEWPIDER] = gMonIcon_Dewpider_,
	[SPECIES_ARAQUANID] = gMonIcon_Araquanid_,
	[SPECIES_FOMANTIS] = gMonIcon_Fomantis_,
	[SPECIES_LURANTIS] = gMonIcon_Lurantis_,
	[SPECIES_MORELULL] = gMonIcon_Morelull_,
	[SPECIES_SHIINOTIC] = gMonIcon_Shiinotic_,
	[SPECIES_SALANDIT] = gMonIcon_Salandit_,
	[SPECIES_SALAZZLE] = gMonIcon_Salazzle_,
	[SPECIES_STUFFUL] = gMonIcon_Stufful_,
	[SPECIES_BEWEAR] = gMonIcon_Bewear_,
	[SPECIES_BOUNSWEET] = gMonIcon_Bounsweet_,
	[SPECIES_STEENEE] = gMonIcon_Steenee_,
	[SPECIES_TSAREENA] = gMonIcon_Tsareena_,
	[SPECIES_COMFEY] = gMonIcon_Comfey_,
	[SPECIES_ORANGURU] = gMonIcon_Oranguru_,
	[SPECIES_PASSIMIAN] = gMonIcon_Passimian_,
	[SPECIES_WIMPOD] = gMonIcon_Wimpod_,
	[SPECIES_GOLISOPOD] = gMonIcon_Golisopod_,
	[SPECIES_SANDYGAST] = gMonIcon_Sandygast_,
	[SPECIES_PALOSSAND] = gMonIcon_Palossand_,
	[SPECIES_PYUKUMUKU] = gMonIcon_Pyukumuku_,
	[SPECIES_TYPENULL] = gMonIcon_TypeNull_,
	[SPECIES_SILVALLY] = gMonIcon_Silvally_,
	[SPECIES_MINIOR] = gMonIcon_Minior_,
	[SPECIES_KOMALA] = gMonIcon_Komala_,
	[SPECIES_TURTONATOR] = gMonIcon_Turtonator_,
	[SPECIES_TOGEDEMARU] = gMonIcon_Togedemaru_,
	[SPECIES_MIMIKYU] = gMonIcon_Mimikyu_,
	[SPECIES_BRUXISH] = gMonIcon_Bruxish_,
	[SPECIES_DRAMPA] = gMonIcon_Drampa_,
	[SPECIES_DHELMISE] = gMonIcon_Dhelmise_,
	[SPECIES_JANGMOO] = gMonIcon_Jangmoo_,
	[SPECIES_HAKAMOO] = gMonIcon_Hakamoo_,
	[SPECIES_KOMMOO] = gMonIcon_Kommoo_,
	[SPECIES_TAPUKOKO] = gMonIcon_TapuKoko_,
	[SPECIES_TAPULELE] = gMonIcon_TapuLele_,
	[SPECIES_TAPUBULU] = gMonIcon_TapuBulu_,
	[SPECIES_TAPUFINI] = gMonIcon_TapuFini_,
	[SPECIES_COSMOG] = gMonIcon_Cosmog_,
	[SPECIES_COSMOEM] = gMonIcon_Cosmoem_,
	[SPECIES_SOLGALEO] = gMonIcon_Solgaleo_,
	[SPECIES_LUNALA] = gMonIcon_Lunala_,
	[SPECIES_NIHILEGO] = gMonIcon_Nihilego_,
	[SPECIES_BUZZWOLE] = gMonIcon_Buzzwole_,
	[SPECIES_PHEROMOSA] = gMonIcon_Pheromosa_,
	[SPECIES_XURKITREE] = gMonIcon_Xurkitree_,
	[SPECIES_CELESTEELA] = gMonIcon_Celesteela_,
	[SPECIES_KARTANA] = gMonIcon_Kartana_,
	[SPECIES_GUZZLORD] = gMonIcon_Guzzlord_,
	[SPECIES_NECROZMA] = gMonIcon_Necrozma_,
	[SPECIES_MAGEARNA] = gMonIcon_Magearna_,
	[SPECIES_MARSHADOW] = gMonIcon_Marshadow_,
	[SPECIES_POIPOLE] = gMonIcon_Poipole_,
	[SPECIES_NAGANADEL] = gMonIcon_Naganadel_,
	[SPECIES_STAKATAKA] = gMonIcon_Stakataka_,
	[SPECIES_BLACEPHALN] = gMonIcon_Blacephaln_,
	[SPECIES_ZERAORA] = gMonIcon_Zeraora_,
	[SPECIES_MELTAN] = gMonIcon_Meltan_,
	[SPECIES_MELMETAL] = gMonIcon_Melmetal_,
	[SPECIES_GROOKEY] = gMonIcon_Grookey_,
	[SPECIES_THWACKEY] = gMonIcon_Thwackey_,
	[SPECIES_RILLABOOM] = gMonIcon_Rillaboom_,
	[SPECIES_SCORBUNNY] = gMonIcon_Scorbunny_,
	[SPECIES_RABOOT] = gMonIcon_Raboot_,
	[SPECIES_CINDERACE] = gMonIcon_Cinderace_,
	[SPECIES_SOBBLE] = gMonIcon_Sobble_,
	[SPECIES_DRIZZILE] = gMonIcon_Drizzile_,
	[SPECIES_INTELEON] = gMonIcon_Inteleon_,
	[SPECIES_SKWOVET] = gMonIcon_Skwovet_,
	[SPECIES_GREEDENT] = gMonIcon_Greedent_,
	[SPECIES_ROOKIDEE] = gMonIcon_Rookidee_,
	[SPECIES_CORVISQUIR] = gMonIcon_Corvisquir_,
	[SPECIES_CORVIKNIGH] = gMonIcon_Corviknigh_,
	[SPECIES_BLIPBUG] = gMonIcon_Blipbug_,
	[SPECIES_DOTTLER] = gMonIcon_Dottler_,
	[SPECIES_ORBEETLE] = gMonIcon_Orbeetle_,
	[SPECIES_NICKIT] = gMonIcon_Nickit_,
	[SPECIES_THIEVUL] = gMonIcon_Thievul_,
	[SPECIES_GOSSIFLEUR] = gMonIcon_Gossifleur_,
	[SPECIES_ELDEGOSS] = gMonIcon_Eldegoss_,
	[SPECIES_WOOLOO] = gMonIcon_Wooloo_,
	[SPECIES_DUBWOOL] = gMonIcon_Dubwool_,
	[SPECIES_CHEWTLE] = gMonIcon_Chewtle_,
	[SPECIES_DREDNAW] = gMonIcon_Drednaw_,
	[SPECIES_YAMPER] = gMonIcon_Yamper_,
	[SPECIES_BOLTUND] = gMonIcon_Boltund_,
	[SPECIES_ROLYCOLY] = gMonIcon_Rolycoly_,
	[SPECIES_CARKOL] = gMonIcon_Carkol_,
	[SPECIES_COALOSSAL] = gMonIcon_Coalossal_,
	[SPECIES_APPLIN] = gMonIcon_Applin_,
	[SPECIES_FLAPPLE] = gMonIcon_Flapple_,
	[SPECIES_APPLETUN] = gMonIcon_Appletun_,
	[SPECIES_SILICOBRA] = gMonIcon_Silicobra_,
	[SPECIES_SANDACONDA] = gMonIcon_Sandaconda_,
	[SPECIES_CRAMORANT] = gMonIcon_Cramorant_,
	[SPECIES_ARROKUDA] = gMonIcon_Arrokuda_,
	[SPECIES_BARRASKEWD] = gMonIcon_Barraskewd_,
	[SPECIES_TOXEL] = gMonIcon_Toxel_,
	[SPECIES_TOXTRICITY] = gMonIcon_Toxtricity_,
	[SPECIES_SIZZLIPEDE] = gMonIcon_Sizzlipede_,
	[SPECIES_CENTISKORC] = gMonIcon_Centiskorc_,
	[SPECIES_CLOBBOPUS] = gMonIcon_Clobbopus_,
	[SPECIES_GRAPPLOCT] = gMonIcon_Grapploct_,
	[SPECIES_SINISTEA] = gMonIcon_Sinistea_,
	[SPECIES_POLTEAGEIS] = gMonIcon_Polteageis_,
	[SPECIES_HATENNA] = gMonIcon_Hatenna_,
	[SPECIES_HATTREM] = gMonIcon_Hattrem_,
	[SPECIES_HATTERENE] = gMonIcon_Hatterene_,
	[SPECIES_IMPIDIMP] = gMonIcon_Impidimp_,
	[SPECIES_MORGREM] = gMonIcon_Morgrem_,
	[SPECIES_GRIMMSNARL] = gMonIcon_Grimmsnarl_,
	[SPECIES_OBSTAGOON] = gMonIcon_Obstagoon_,
	[SPECIES_PERRSERKER] = gMonIcon_Perrserker_,
	[SPECIES_CURSOLA] = gMonIcon_Cursola_,
	[SPECIES_SIRFETCHD] = gMonIcon_Sirfetchd_,
	[SPECIES_MRRIME] = gMonIcon_MrRime_,
	[SPECIES_RUNERIGUS] = gMonIcon_Runerigus_,
	[SPECIES_MILCERY] = gMonIcon_Milcery_,
	[SPECIES_ALCREMIE] = gMonIcon_Alcremie_,
	[SPECIES_FALINKS] = gMonIcon_Falinks_,
	[SPECIES_PINCURCHIN] = gMonIcon_Pincurchin_,
	[SPECIES_SNOM] = gMonIcon_Snom_,
	[SPECIES_FROSMOTH] = gMonIcon_Frosmoth_,
	[SPECIES_STONJOURNE] = gMonIcon_Stonjourne_,
	[SPECIES_EISCUE] = gMonIcon_Eiscue_,
	[SPECIES_INDEEDEE] = gMonIcon_Indeedee_,
	[SPECIES_MORPEKO] = gMonIcon_Morpeko_,
	[SPECIES_CUFANT] = gMonIcon_Cufant_,
	[SPECIES_COPPERAJAH] = gMonIcon_Copperajah_,
	[SPECIES_DRACOZOLT] = gMonIcon_Dracozolt_,
	[SPECIES_ARCTOZOLT] = gMonIcon_Arctozolt_,
	[SPECIES_DRACOVISH] = gMonIcon_Dracovish_,
	[SPECIES_ARCTOVISH] = gMonIcon_Arctovish_,
	[SPECIES_DURALUDON] = gMonIcon_Duraludon_,
	[SPECIES_DREEPY] = gMonIcon_Dreepy_,
	[SPECIES_DRAKLOAK] = gMonIcon_Drakloak_,
	[SPECIES_DRAGAPULT] = gMonIcon_Dragapult_,
	[SPECIES_ZACIAN] = gMonIcon_Zacian_,
	[SPECIES_ZAMAZENTA] = gMonIcon_Zamazenta_,
	[SPECIES_ETERNATUS] = gMonIcon_Eternatus_,
	[SPECIES_KUBFU] = gMonIcon_Kubfu_,
	[SPECIES_URSHIFU] = gMonIcon_Urshifu_,
	[SPECIES_ZARUDE] = gMonIcon_Zarude_,
	[SPECIES_REGIELEKI] = gMonIcon_Regieleki_,
	[SPECIES_REGIDRAGO] = gMonIcon_Regidrago_,
	[SPECIES_GLASTRIER] = gMonIcon_Glastrier_,
	[SPECIES_SPECTRIER] = gMonIcon_Spectrier_,
	[SPECIES_CALYREX] = gMonIcon_Calyrex_,
	[SPECIES_WYRDEER] = gMonIcon_Wyrdeer_,
	[SPECIES_KLEAVOR] = gMonIcon_Kleavor_,
	[SPECIES_URSALUNA] = gMonIcon_Ursaluna_,
	[SPECIES_BSCULEGION] = gMonIcon_Bsculegion_,
	[SPECIES_SNEASLER] = gMonIcon_Sneasler_,
	[SPECIES_OVERQWIL] = gMonIcon_Overqwil_,
	[SPECIES_ENAMORUS] = gMonIcon_Enamorus_,
	[SPECIES_VENUSAUR_2] = gMonIcon_Venusaur2_,
	[SPECIES_CHARIZARD_2] = gMonIcon_Charizard2_,
	[SPECIES_CHARIZARD_3] = gMonIcon_Charizard3_,
	[SPECIES_BLASTOISE_2] = gMonIcon_Blastoise2_,
	[SPECIES_BEEDRILL_2] = gMonIcon_Beedrill2_,
	[SPECIES_PIDGEOT_2] = gMonIcon_Pidgeot2_,
	[SPECIES_ALAKAZAM_2] = gMonIcon_Alakazam2_,
	[SPECIES_SLOWBRO_2] = gMonIcon_Slowbro2_,
	[SPECIES_GENGAR_2] = gMonIcon_Gengar2_,
	[SPECIES_KANGASKHAN_2] = gMonIcon_Kangaskhan2_,
	[SPECIES_PINSIR_2] = gMonIcon_Pinsir2_,
	[SPECIES_GYARADOS_2] = gMonIcon_Gyarados2_,
	[SPECIES_AERODACTYL_2] = gMonIcon_Aerodactyl2_,
	[SPECIES_MEWTWO_2] = gMonIcon_Mewtwo2_,
	[SPECIES_MEWTWO_3] = gMonIcon_Mewtwo3_,
	[SPECIES_AMPHAROS_2] = gMonIcon_Ampharos2_,
	[SPECIES_STEELIX_2] = gMonIcon_Steelix2_,
	[SPECIES_SCIZOR_2] = gMonIcon_Scizor2_,
	[SPECIES_HERACROSS_2] = gMonIcon_Heracross2_,
	[SPECIES_HOUNDOOM_2] = gMonIcon_Houndoom2_,
	[SPECIES_TYRANITAR_2] = gMonIcon_Tyranitar2_,
	[SPECIES_SCEPTILE_2] = gMonIcon_Sceptile2_,
	[SPECIES_BLAZIKEN_2] = gMonIcon_Blaziken2_,
	[SPECIES_SWAMPERT_2] = gMonIcon_Swampert2_,
	[SPECIES_GARDEVOIR_2] = gMonIcon_Gardevoir2_,
	[SPECIES_SABLEYE_2] = gMonIcon_Sableye2_,
	[SPECIES_MAWILE_2] = gMonIcon_Mawile2_,
	[SPECIES_AGGRON_2] = gMonIcon_Aggron2_,
	[SPECIES_MEDICHAM_2] = gMonIcon_Medicham2_,
	[SPECIES_MANECTRIC_2] = gMonIcon_Manectric2_,
	[SPECIES_SHARPEDO_2] = gMonIcon_Sharpedo2_,
	[SPECIES_CAMERUPT_2] = gMonIcon_Camerupt2_,
	[SPECIES_ALTARIA_2] = gMonIcon_Altaria2_,
	[SPECIES_BANETTE_2] = gMonIcon_Banette2_,
	[SPECIES_ABSOL_2] = gMonIcon_Absol2_,
	[SPECIES_GLALIE_2] = gMonIcon_Glalie2_,
	[SPECIES_SALAMENCE_2] = gMonIcon_Salamence2_,
	[SPECIES_METAGROSS_2] = gMonIcon_Metagross2_,
	[SPECIES_LATIAS_2] = gMonIcon_Latias2_,
	[SPECIES_LATIOS_2] = gMonIcon_Latios2_,
	[SPECIES_LOPUNNY_2] = gMonIcon_Lopunny2_,
	[SPECIES_GARCHOMP_2] = gMonIcon_Garchomp2_,
	[SPECIES_LUCARIO_2] = gMonIcon_Lucario2_,
	[SPECIES_ABOMASNOW_2] = gMonIcon_Abomasnow2_,
	[SPECIES_GALLADE_2] = gMonIcon_Gallade2_,
	[SPECIES_AUDINO_2] = gMonIcon_Audino2_,
	[SPECIES_DIANCIE_2] = gMonIcon_Diancie2_,
	[SPECIES_RAYQUAZA_2] = gMonIcon_Rayquaza2_,
	[SPECIES_KYOGRE_2] = gMonIcon_Kyogre2_,
	[SPECIES_GROUDON_2] = gMonIcon_Groudon2_,
	[SPECIES_RATTATA_2] = gMonIcon_Rattata2_,
	[SPECIES_RATICATE_2] = gMonIcon_Raticate2_,
	[SPECIES_RAICHU_2] = gMonIcon_Raichu2_,
	[SPECIES_SANDSHREW_2] = gMonIcon_Sandshrew2_,
	[SPECIES_SANDSLASH_2] = gMonIcon_Sandslash2_,
	[SPECIES_VULPIX_2] = gMonIcon_Vulpix2_,
	[SPECIES_NINETALES_2] = gMonIcon_Ninetales2_,
	[SPECIES_DIGLETT_2] = gMonIcon_Diglett2_,
	[SPECIES_DUGTRIO_2] = gMonIcon_Dugtrio2_,
	[SPECIES_MEOWTH_2] = gMonIcon_Meowth2_,
	[SPECIES_PERSIAN_2] = gMonIcon_Persian2_,
	[SPECIES_GEODUDE_2] = gMonIcon_Geodude2_,
	[SPECIES_GRAVELER_2] = gMonIcon_Graveler2_,
	[SPECIES_GOLEM_2] = gMonIcon_Golem2_,
	[SPECIES_GRIMER_2] = gMonIcon_Grimer2_,
	[SPECIES_MUK_2] = gMonIcon_Muk2_,
	[SPECIES_EXEGGUTOR_2] = gMonIcon_Exeggutor2_,
	[SPECIES_MAROWAK_2] = gMonIcon_Marowak2_,
	[SPECIES_MEOWTH_3] = gMonIcon_Meowth3_,
	[SPECIES_PONYTA_2] = gMonIcon_Ponyta2_,
	[SPECIES_RAPIDASH_2] = gMonIcon_Rapidash2_,
	[SPECIES_SLOWPOKE_2] = gMonIcon_Slowpoke2_,
	[SPECIES_SLOWBRO_3] = gMonIcon_Slowbro3_,
	[SPECIES_FARFETCHD_2] = gMonIcon_Farfetchd2_,
	[SPECIES_WEEZING_2] = gMonIcon_Weezing2_,
	[SPECIES_MRMIME_2] = gMonIcon_MrMime2_,
	[SPECIES_ARTICUNO_2] = gMonIcon_Articuno2_,
	[SPECIES_ZAPDOS_2] = gMonIcon_Zapdos2_,
	[SPECIES_MOLTRES_2] = gMonIcon_Moltres2_,
	[SPECIES_SLOWKING_2] = gMonIcon_Slowking2_,
	[SPECIES_CORSOLA_2] = gMonIcon_Corsola2_,
	[SPECIES_ZIGZAGOON_2] = gMonIcon_Zigzagoon2_,
	[SPECIES_LINOONE_2] = gMonIcon_Linoone2_,
	[SPECIES_DARUMAKA_2] = gMonIcon_Darumaka2_,
	[SPECIES_DARMANITAN_2] = gMonIcon_Darmanitan2_,
	[SPECIES_YAMASK_2] = gMonIcon_Yamask2_,
	[SPECIES_STUNFISK_2] = gMonIcon_Stunfisk2_,
	[SPECIES_GROWLITHE_2] = gMonIcon_Growlithe2_,
	[SPECIES_ARCANINE_2] = gMonIcon_Arcanine2_,
	[SPECIES_VOLTORB_2] = gMonIcon_Voltorb2_,
	[SPECIES_ELECTRODE_2] = gMonIcon_Electrode2_,
	[SPECIES_TYPHLOSION_2] = gMonIcon_Typhlosion2_,
	[SPECIES_QWILFISH_2] = gMonIcon_Qwilfish2_,
	[SPECIES_SNEASEL_2] = gMonIcon_Sneasel2_,
	[SPECIES_SAMUROTT_2] = gMonIcon_Samurott2_,
	[SPECIES_LILLIGANT_2] = gMonIcon_Lilligant2_,
	[SPECIES_ZORUA_2] = gMonIcon_Zorua2_,
	[SPECIES_ZOROARK_2] = gMonIcon_Zoroark2_,
	[SPECIES_BRAVIARY_2] = gMonIcon_Braviary2_,
	[SPECIES_SLIGGOO_2] = gMonIcon_Sliggoo2_,
	[SPECIES_GOODRA_2] = gMonIcon_Goodra2_,
	[SPECIES_AVALUGG_2] = gMonIcon_Avalugg2_,
	[SPECIES_DECIDUEYE_2] = gMonIcon_Decidueye2_,
	[SPECIES_PIKACHU_2] = gMonIcon_Pikachu2_,
	[SPECIES_PIKACHU_3] = gMonIcon_Pikachu3_,
	[SPECIES_PIKACHU_4] = gMonIcon_Pikachu4_,
	[SPECIES_PIKACHU_5] = gMonIcon_Pikachu5_,
	[SPECIES_PIKACHU_6] = gMonIcon_Pikachu6_,
	[SPECIES_PIKACHU_7] = gMonIcon_Pikachu7_,
	[SPECIES_PIKACHU_8] = gMonIcon_Pikachu8_,
	[SPECIES_PIKACHU_9] = gMonIcon_Pikachu9_,
	[SPECIES_PIKACHU_10] = gMonIcon_Pikachu10_,
	[SPECIES_PIKACHU_11] = gMonIcon_Pikachu11_,
	[SPECIES_PIKACHU_12] = gMonIcon_Pikachu12_,
	[SPECIES_PIKACHU_13] = gMonIcon_Pikachu13_,
	[SPECIES_PIKACHU_14] = gMonIcon_Pikachu14_,
	[SPECIES_PIKACHU_15] = gMonIcon_Pikachu15_,
	[SPECIES_PICHU_2] = gMonIcon_Pichu2_,
	[SPECIES_CASTFORM_2] = gMonIcon_Castform2_,
	[SPECIES_CASTFORM_3] = gMonIcon_Castform3_,
	[SPECIES_CASTFORM_4] = gMonIcon_Castform4_,
	[SPECIES_DEOXYS_2] = gMonIcon_Deoxys2_,
	[SPECIES_DEOXYS_3] = gMonIcon_Deoxys3_,
	[SPECIES_DEOXYS_4] = gMonIcon_Deoxys4_,
	[SPECIES_BURMY_2] = gMonIcon_Burmy2_,
	[SPECIES_BURMY_3] = gMonIcon_Burmy3_,
	[SPECIES_WORMADAM_2] = gMonIcon_Wormadam2_,
	[SPECIES_WORMADAM_3] = gMonIcon_Wormadam3_,
	[SPECIES_CHERRIM_2] = gMonIcon_Cherrim2_,
	[SPECIES_SHELLOS_2] = gMonIcon_Shellos2_,
	[SPECIES_GASTRODON_2] = gMonIcon_Gastrodon2_,
	[SPECIES_ROTOM_2] = gMonIcon_Rotom2_,
	[SPECIES_ROTOM_3] = gMonIcon_Rotom3_,
	[SPECIES_ROTOM_4] = gMonIcon_Rotom4_,
	[SPECIES_ROTOM_5] = gMonIcon_Rotom5_,
	[SPECIES_ROTOM_6] = gMonIcon_Rotom6_,
	[SPECIES_DIALGA_2] = gMonIcon_Dialga2_,
	[SPECIES_PALKIA_2] = gMonIcon_Palkia2_,
	[SPECIES_GIRATINA_2] = gMonIcon_Giratina2_,
	[SPECIES_SHAYMIN_2] = gMonIcon_Shaymin2_,
	[SPECIES_ARCEUS_2] = gMonIcon_Arceus2_,
	[SPECIES_ARCEUS_3] = gMonIcon_Arceus3_,
	[SPECIES_ARCEUS_4] = gMonIcon_Arceus4_,
	[SPECIES_ARCEUS_5] = gMonIcon_Arceus5_,
	[SPECIES_ARCEUS_6] = gMonIcon_Arceus6_,
	[SPECIES_ARCEUS_7] = gMonIcon_Arceus7_,
	[SPECIES_ARCEUS_8] = gMonIcon_Arceus8_,
	[SPECIES_ARCEUS_9] = gMonIcon_Arceus9_,
	[SPECIES_ARCEUS_10] = gMonIcon_Arceus10_,
	[SPECIES_ARCEUS_11] = gMonIcon_Arceus11_,
	[SPECIES_ARCEUS_12] = gMonIcon_Arceus12_,
	[SPECIES_ARCEUS_13] = gMonIcon_Arceus13_,
	[SPECIES_ARCEUS_14] = gMonIcon_Arceus14_,
	[SPECIES_ARCEUS_15] = gMonIcon_Arceus15_,
	[SPECIES_ARCEUS_16] = gMonIcon_Arceus16_,
	[SPECIES_ARCEUS_17] = gMonIcon_Arceus17_,
	[SPECIES_ARCEUS_18] = gMonIcon_Arceus18_,
	[SPECIES_BASCULIN_2] = gMonIcon_Basculin2_,
	[SPECIES_BASCULIN_3] = gMonIcon_Basculin3_,
	[SPECIES_DARMANITAN_3] = gMonIcon_Darmanitan3_,
	[SPECIES_DARMANITAN_4] = gMonIcon_Darmanitan4_,
	[SPECIES_DEERLING_2] = gMonIcon_Deerling2_,
	[SPECIES_DEERLING_3] = gMonIcon_Deerling3_,
	[SPECIES_DEERLING_4] = gMonIcon_Deerling4_,
	[SPECIES_SAWSBUCK_2] = gMonIcon_Sawsbuck2_,
	[SPECIES_SAWSBUCK_3] = gMonIcon_Sawsbuck3_,
	[SPECIES_SAWSBUCK_4] = gMonIcon_Sawsbuck4_,
	[SPECIES_TORNADUS_2] = gMonIcon_Tornadus2_,
	[SPECIES_THUNDURUS_2] = gMonIcon_Thundurus2_,
	[SPECIES_LANDORUS_2] = gMonIcon_Landorus2_,
	[SPECIES_ENAMORUS_2] = gMonIcon_Enamorus2_,
	[SPECIES_KYUREM_2] = gMonIcon_Kyurem2_,
	[SPECIES_KYUREM_3] = gMonIcon_Kyurem3_,
	[SPECIES_KELDEO_2] = gMonIcon_Keldeo2_,
	[SPECIES_MELOETTA_2] = gMonIcon_Meloetta2_,
	[SPECIES_GENESECT_2] = gMonIcon_Genesect2_,
	[SPECIES_GENESECT_3] = gMonIcon_Genesect3_,
	[SPECIES_GENESECT_4] = gMonIcon_Genesect4_,
	[SPECIES_GENESECT_5] = gMonIcon_Genesect5_,
	[SPECIES_GRENINJA_2] = gMonIcon_Greninja2_,
	[SPECIES_GRENINJA_3] = gMonIcon_Greninja3_,
	[SPECIES_VIVILLON_2] = gMonIcon_Vivillon2_,
	[SPECIES_VIVILLON_3] = gMonIcon_Vivillon3_,
	[SPECIES_VIVILLON_4] = gMonIcon_Vivillon4_,
	[SPECIES_VIVILLON_5] = gMonIcon_Vivillon5_,
	[SPECIES_VIVILLON_6] = gMonIcon_Vivillon6_,
	[SPECIES_VIVILLON_7] = gMonIcon_Vivillon7_,
	[SPECIES_VIVILLON_8] = gMonIcon_Vivillon8_,
	[SPECIES_VIVILLON_9] = gMonIcon_Vivillon9_,
	[SPECIES_VIVILLON_10] = gMonIcon_Vivillon10_,
	[SPECIES_VIVILLON_11] = gMonIcon_Vivillon11_,
	[SPECIES_VIVILLON_12] = gMonIcon_Vivillon12_,
	[SPECIES_VIVILLON_13] = gMonIcon_Vivillon13_,
	[SPECIES_VIVILLON_14] = gMonIcon_Vivillon14_,
	[SPECIES_VIVILLON_15] = gMonIcon_Vivillon15_,
	[SPECIES_VIVILLON_16] = gMonIcon_Vivillon16_,
	[SPECIES_VIVILLON_17] = gMonIcon_Vivillon17_,
	[SPECIES_VIVILLON_18] = gMonIcon_Vivillon18_,
	[SPECIES_VIVILLON_19] = gMonIcon_Vivillon19_,
	[SPECIES_VIVILLON_20] = gMonIcon_Vivillon20_,
	[SPECIES_FLABEBE_2] = gMonIcon_Flabebe2_,
	[SPECIES_FLABEBE_3] = gMonIcon_Flabebe3_,
	[SPECIES_FLABEBE_4] = gMonIcon_Flabebe4_,
	[SPECIES_FLABEBE_5] = gMonIcon_Flabebe5_,
	[SPECIES_FLOETTE_2] = gMonIcon_Floette2_,
	[SPECIES_FLOETTE_3] = gMonIcon_Floette3_,
	[SPECIES_FLOETTE_4] = gMonIcon_Floette4_,
	[SPECIES_FLOETTE_5] = gMonIcon_Floette5_,
	[SPECIES_FLOETTE_6] = gMonIcon_Floette6_,
	[SPECIES_FLORGES_2] = gMonIcon_Florges2_,
	[SPECIES_FLORGES_3] = gMonIcon_Florges3_,
	[SPECIES_FLORGES_4] = gMonIcon_Florges4_,
	[SPECIES_FLORGES_5] = gMonIcon_Florges5_,
	[SPECIES_FURFROU_2] = gMonIcon_Furfrou2_,
	[SPECIES_FURFROU_3] = gMonIcon_Furfrou3_,
	[SPECIES_FURFROU_4] = gMonIcon_Furfrou4_,
	[SPECIES_FURFROU_5] = gMonIcon_Furfrou5_,
	[SPECIES_FURFROU_6] = gMonIcon_Furfrou6_,
	[SPECIES_FURFROU_7] = gMonIcon_Furfrou7_,
	[SPECIES_FURFROU_8] = gMonIcon_Furfrou8_,
	[SPECIES_FURFROU_9] = gMonIcon_Furfrou9_,
	[SPECIES_FURFROU_10] = gMonIcon_Furfrou10_,
	[SPECIES_MEOWSTIC_2] = gMonIcon_Meowstic2_,
	[SPECIES_AEGISLASH_2] = gMonIcon_Aegislash2_,
	[SPECIES_PUMPKABOO_2] = gMonIcon_Pumpkaboo2_,
	[SPECIES_PUMPKABOO_3] = gMonIcon_Pumpkaboo3_,
	[SPECIES_PUMPKABOO_4] = gMonIcon_Pumpkaboo4_,
	[SPECIES_GOURGEIST_2] = gMonIcon_Gourgeist2_,
	[SPECIES_GOURGEIST_3] = gMonIcon_Gourgeist3_,
	[SPECIES_GOURGEIST_4] = gMonIcon_Gourgeist4_,
	[SPECIES_XERNEAS_2] = gMonIcon_Xerneas2_,
	[SPECIES_ZYGARDE_2] = gMonIcon_Zygarde2_,
	[SPECIES_ZYGARDE_3] = gMonIcon_Zygarde3_,
	[SPECIES_ZYGARDE_4] = gMonIcon_Zygarde4_,
	[SPECIES_ZYGARDE_5] = gMonIcon_Zygarde5_,
	[SPECIES_HOOPA_2] = gMonIcon_Hoopa2_,
	[SPECIES_ORICORIO_2] = gMonIcon_Oricorio2_,
	[SPECIES_ORICORIO_3] = gMonIcon_Oricorio3_,
	[SPECIES_ORICORIO_4] = gMonIcon_Oricorio4_,
	[SPECIES_ROCKRUFF_2] = gMonIcon_Rockruff2_,
	[SPECIES_LYCANROC_2] = gMonIcon_Lycanroc2_,
	[SPECIES_LYCANROC_3] = gMonIcon_Lycanroc3_,
	[SPECIES_WISHIWASHI_2] = gMonIcon_Wishiwashi2_,
	[SPECIES_SILVALLY_2] = gMonIcon_Silvally2_,
	[SPECIES_SILVALLY_3] = gMonIcon_Silvally3_,
	[SPECIES_SILVALLY_4] = gMonIcon_Silvally4_,
	[SPECIES_SILVALLY_5] = gMonIcon_Silvally5_,
	[SPECIES_SILVALLY_6] = gMonIcon_Silvally6_,
	[SPECIES_SILVALLY_7] = gMonIcon_Silvally7_,
	[SPECIES_SILVALLY_8] = gMonIcon_Silvally8_,
	[SPECIES_SILVALLY_9] = gMonIcon_Silvally9_,
	[SPECIES_SILVALLY_10] = gMonIcon_Silvally10_,
	[SPECIES_SILVALLY_11] = gMonIcon_Silvally11_,
	[SPECIES_SILVALLY_12] = gMonIcon_Silvally12_,
	[SPECIES_SILVALLY_13] = gMonIcon_Silvally13_,
	[SPECIES_SILVALLY_14] = gMonIcon_Silvally14_,
	[SPECIES_SILVALLY_15] = gMonIcon_Silvally15_,
	[SPECIES_SILVALLY_16] = gMonIcon_Silvally16_,
	[SPECIES_SILVALLY_17] = gMonIcon_Silvally17_,
	[SPECIES_SILVALLY_18] = gMonIcon_Silvally18_,
	[SPECIES_MINIOR_2] = gMonIcon_Minior2_,
	[SPECIES_MINIOR_3] = gMonIcon_Minior3_,
	[SPECIES_MINIOR_4] = gMonIcon_Minior4_,
	[SPECIES_MINIOR_5] = gMonIcon_Minior5_,
	[SPECIES_MINIOR_6] = gMonIcon_Minior6_,
	[SPECIES_MINIOR_7] = gMonIcon_Minior7_,
	[SPECIES_MINIOR_8] = gMonIcon_Minior8_,
	[SPECIES_MINIOR_9] = gMonIcon_Minior9_,
	[SPECIES_MINIOR_10] = gMonIcon_Minior10_,
	[SPECIES_MINIOR_11] = gMonIcon_Minior11_,
	[SPECIES_MINIOR_12] = gMonIcon_Minior12_,
	[SPECIES_MINIOR_13] = gMonIcon_Minior13_,
	[SPECIES_MINIOR_14] = gMonIcon_Minior14_,
	[SPECIES_MIMIKYU_2] = gMonIcon_Mimikyu2_,
	[SPECIES_NECROZMA_2] = gMonIcon_Necrozma2_,
	[SPECIES_NECROZMA_3] = gMonIcon_Necrozma3_,
	[SPECIES_NECROZMA_4] = gMonIcon_Necrozma4_,
	[SPECIES_MAGEARNA_2] = gMonIcon_Magearna2_,
	[SPECIES_CRAMORANT_2] = gMonIcon_Cramorant2_,
	[SPECIES_CRAMORANT_3] = gMonIcon_Cramorant3_,
	[SPECIES_TOXTRICITY_2] = gMonIcon_Toxtricity2_,
	[SPECIES_SINISTEA_2] = gMonIcon_Sinistea2_,
	[SPECIES_POLTEAGEIS_2] = gMonIcon_Polteageis2_,
	[SPECIES_ALCREMIE_2] = gMonIcon_Alcremie2_,
	[SPECIES_ALCREMIE_3] = gMonIcon_Alcremie3_,
	[SPECIES_ALCREMIE_4] = gMonIcon_Alcremie4_,
	[SPECIES_ALCREMIE_5] = gMonIcon_Alcremie5_,
	[SPECIES_ALCREMIE_6] = gMonIcon_Alcremie6_,
	[SPECIES_ALCREMIE_7] = gMonIcon_Alcremie7_,
	[SPECIES_ALCREMIE_8] = gMonIcon_Alcremie8_,
	[SPECIES_ALCREMIE_9] = gMonIcon_Alcremie9_,
	[SPECIES_EISCUE_2] = gMonIcon_Eiscue2_,
	[SPECIES_INDEEDEE_2] = gMonIcon_Indeedee2_,
	[SPECIES_MORPEKO_2] = gMonIcon_Morpeko2_,
	[SPECIES_ZACIAN_2] = gMonIcon_Zacian2_,
	[SPECIES_ZAMAZENTA_2] = gMonIcon_Zamazenta2_,
	[SPECIES_ETERNATUS_2] = gMonIcon_Eternatus2_,
	[SPECIES_URSHIFU_2] = gMonIcon_Urshifu2_,
	[SPECIES_ZARUDE_2] = gMonIcon_Zarude2_,
	[SPECIES_CALYREX_2] = gMonIcon_Calyrex2_,
	[SPECIES_CALYREX_3] = gMonIcon_Calyrex3_,
	[SPECIES_BSCULEGION_2] = gMonIcon_Bsculegion2_,
	[SPECIES_ALCREMIE_10] = gMonIcon_Alcremie10_,
	[SPECIES_ALCREMIE_11] = gMonIcon_Alcremie11_,
	[SPECIES_ALCREMIE_12] = gMonIcon_Alcremie12_,
	[SPECIES_ALCREMIE_13] = gMonIcon_Alcremie13_,
	[SPECIES_ALCREMIE_14] = gMonIcon_Alcremie14_,
	[SPECIES_ALCREMIE_15] = gMonIcon_Alcremie15_,
	[SPECIES_ALCREMIE_16] = gMonIcon_Alcremie16_,
	[SPECIES_ALCREMIE_17] = gMonIcon_Alcremie17_,
	[SPECIES_ALCREMIE_18] = gMonIcon_Alcremie18_,
	[SPECIES_ALCREMIE_19] = gMonIcon_Alcremie19_,
	[SPECIES_ALCREMIE_20] = gMonIcon_Alcremie20_,
	[SPECIES_ALCREMIE_21] = gMonIcon_Alcremie21_,
	[SPECIES_ALCREMIE_22] = gMonIcon_Alcremie22_,
	[SPECIES_ALCREMIE_23] = gMonIcon_Alcremie23_,
	[SPECIES_ALCREMIE_24] = gMonIcon_Alcremie24_,
	[SPECIES_ALCREMIE_25] = gMonIcon_Alcremie25_,
	[SPECIES_ALCREMIE_26] = gMonIcon_Alcremie26_,
	[SPECIES_ALCREMIE_27] = gMonIcon_Alcremie27_,
	[SPECIES_ALCREMIE_28] = gMonIcon_Alcremie28_,
	[SPECIES_ALCREMIE_29] = gMonIcon_Alcremie29_,
	[SPECIES_ALCREMIE_30] = gMonIcon_Alcremie30_,
	[SPECIES_ALCREMIE_31] = gMonIcon_Alcremie31_,
	[SPECIES_ALCREMIE_32] = gMonIcon_Alcremie32_,
	[SPECIES_ALCREMIE_33] = gMonIcon_Alcremie33_,
	[SPECIES_ALCREMIE_34] = gMonIcon_Alcremie34_,
	[SPECIES_ALCREMIE_35] = gMonIcon_Alcremie35_,
	[SPECIES_ALCREMIE_36] = gMonIcon_Alcremie36_,
	[SPECIES_ALCREMIE_37] = gMonIcon_Alcremie37_,
	[SPECIES_ALCREMIE_38] = gMonIcon_Alcremie38_,
	[SPECIES_ALCREMIE_39] = gMonIcon_Alcremie39_,
	[SPECIES_ALCREMIE_40] = gMonIcon_Alcremie40_,
	[SPECIES_ALCREMIE_41] = gMonIcon_Alcremie41_,
	[SPECIES_ALCREMIE_42] = gMonIcon_Alcremie42_,
	[SPECIES_ALCREMIE_43] = gMonIcon_Alcremie43_,
	[SPECIES_ALCREMIE_44] = gMonIcon_Alcremie44_,
	[SPECIES_ALCREMIE_45] = gMonIcon_Alcremie45_,
	[SPECIES_ALCREMIE_46] = gMonIcon_Alcremie46_,
	[SPECIES_ALCREMIE_47] = gMonIcon_Alcremie47_,
	[SPECIES_ALCREMIE_48] = gMonIcon_Alcremie48_,
	[SPECIES_ALCREMIE_49] = gMonIcon_Alcremie49_,
	[SPECIES_ALCREMIE_50] = gMonIcon_Alcremie50_,
	[SPECIES_ALCREMIE_51] = gMonIcon_Alcremie51_,
	[SPECIES_ALCREMIE_52] = gMonIcon_Alcremie52_,
	[SPECIES_ALCREMIE_53] = gMonIcon_Alcremie53_,
	[SPECIES_ALCREMIE_54] = gMonIcon_Alcremie54_,
	[SPECIES_ALCREMIE_55] = gMonIcon_Alcremie55_,
	[SPECIES_ALCREMIE_56] = gMonIcon_Alcremie56_,
	[SPECIES_ALCREMIE_57] = gMonIcon_Alcremie57_,
	[SPECIES_ALCREMIE_58] = gMonIcon_Alcremie58_,
	[SPECIES_ALCREMIE_59] = gMonIcon_Alcremie59_,
	[SPECIES_ALCREMIE_60] = gMonIcon_Alcremie60_,
	[SPECIES_ALCREMIE_61] = gMonIcon_Alcremie61_,
	[SPECIES_ALCREMIE_62] = gMonIcon_Alcremie62_,
	[SPECIES_ALCREMIE_63] = gMonIcon_Alcremie63_,
	[SPECIES_SPRIGATITO] = gMonIcon_Sprigatito_,
	[SPECIES_FLORAGATO] = gMonIcon_Floragato_,
	[SPECIES_MEOWSCARAD] = gMonIcon_Meowscarad_,
	[SPECIES_FUECOCO] = gMonIcon_Fuecoco_,
	[SPECIES_CROCALOR] = gMonIcon_Crocalor_,
	[SPECIES_SKELEDIRGE] = gMonIcon_Skeledirge_,
	[SPECIES_QUAXLY] = gMonIcon_Quaxly_,
	[SPECIES_QUAXWELL] = gMonIcon_Quaxwell_,
	[SPECIES_QUAQUAVAL] = gMonIcon_Quaquaval_,
	[SPECIES_LECHONK] = gMonIcon_Lechonk_,
	[SPECIES_OINKOLOGNE] = gMonIcon_Oinkologne_,
	[SPECIES_OINKOLOGNE_2] = gMonIcon_Oinkologne2_,
	[SPECIES_TAROUNTULA] = gMonIcon_Tarountula_,
	[SPECIES_SPIDOPS] = gMonIcon_Spidops_,
	[SPECIES_NYMBLE] = gMonIcon_Nymble_,
	[SPECIES_LOKIX] = gMonIcon_Lokix_,
	[SPECIES_PAWMI] = gMonIcon_Pawmi_,
	[SPECIES_PAWMO] = gMonIcon_Pawmo_,
	[SPECIES_PAWMOT] = gMonIcon_Pawmot_,
	[SPECIES_TANDEMAUS] = gMonIcon_Tandemaus_,
	[SPECIES_MAUSHOLD] = gMonIcon_Maushold_,
	[SPECIES_MAUSHOLD_2] = gMonIcon_Maushold2_,
	[SPECIES_FIDOUGH] = gMonIcon_Fidough_,
	[SPECIES_DACHSBUN] = gMonIcon_Dachsbun_,
	[SPECIES_SMOLIV] = gMonIcon_Smoliv_,
	[SPECIES_DOLLIV] = gMonIcon_Dolliv_,
	[SPECIES_ARBOLIVA] = gMonIcon_Arboliva_,
	[SPECIES_SQAWKABILY] = gMonIcon_Sqawkabily_,
	[SPECIES_SQAWKABILY_2] = gMonIcon_Sqawkabily2_,
	[SPECIES_SQAWKABILY_3] = gMonIcon_Sqawkabily3_,
	[SPECIES_SQAWKABILY_4] = gMonIcon_Sqawkabily4_,
	[SPECIES_NACLI] = gMonIcon_Nacli_,
	[SPECIES_NACLSTACK] = gMonIcon_Naclstack_,
	[SPECIES_GARGANACL] = gMonIcon_Garganacl_,
	[SPECIES_CHARCADET] = gMonIcon_Charcadet_,
	[SPECIES_ARMAROUGE] = gMonIcon_Armarouge_,
	[SPECIES_CERULEDGE] = gMonIcon_Ceruledge_,
	[SPECIES_TADBULB] = gMonIcon_Tadbulb_,
	[SPECIES_BELLIBOLT] = gMonIcon_Bellibolt_,
	[SPECIES_WATTREL] = gMonIcon_Wattrel_,
	[SPECIES_KILOWATREL] = gMonIcon_Kilowatrel_,
	[SPECIES_MASCHIFF] = gMonIcon_Maschiff_,
	[SPECIES_MABOSSTIFF] = gMonIcon_Mabosstiff_,
	[SPECIES_SHROODLE] = gMonIcon_Shroodle_,
	[SPECIES_GRAFAIAI] = gMonIcon_Grafaiai_,
	[SPECIES_BRAMBLIN] = gMonIcon_Bramblin_,
	[SPECIES_BRMBLGHAST] = gMonIcon_Brmblghast_,
	[SPECIES_TOEDSCOOL] = gMonIcon_Toedscool_,
	[SPECIES_TOEDSCRUEL] = gMonIcon_Toedscruel_,
	[SPECIES_KLAWF] = gMonIcon_Klawf_,
	[SPECIES_CAPSAKID] = gMonIcon_Capsakid_,
	[SPECIES_SCOVILLAIN] = gMonIcon_Scovillain_,
	[SPECIES_RELLOR] = gMonIcon_Rellor_,
	[SPECIES_RABSCA] = gMonIcon_Rabsca_,
	[SPECIES_FLITTLE] = gMonIcon_Flittle_,
	[SPECIES_ESPATHRA] = gMonIcon_Espathra_,
	[SPECIES_TINKATINK] = gMonIcon_Tinkatink_,
	[SPECIES_TINKATUFF] = gMonIcon_Tinkatuff_,
	[SPECIES_TINKATON] = gMonIcon_Tinkaton_,
	[SPECIES_WIGLETT] = gMonIcon_Wiglett_,
	[SPECIES_WUGTRIO] = gMonIcon_Wugtrio_,
	[SPECIES_BOMBIRDIER] = gMonIcon_Bombirdier_,
	[SPECIES_FINIZEN] = gMonIcon_Finizen_,
	[SPECIES_PALAFIN] = gMonIcon_Palafin_,
	[SPECIES_PALAFIN_2] = gMonIcon_Palafin2_,
	[SPECIES_VAROOM] = gMonIcon_Varoom_,
	[SPECIES_REVAVROOM] = gMonIcon_Revavroom_,
	[SPECIES_CYCLIZAR] = gMonIcon_Cyclizar_,
	[SPECIES_ORTHWORM] = gMonIcon_Orthworm_,
	[SPECIES_GLIMMET] = gMonIcon_Glimmet_,
	[SPECIES_GLIMMORA] = gMonIcon_Glimmora_,
	[SPECIES_GREAVARD] = gMonIcon_Greavard_,
	[SPECIES_HOUNDSTONE] = gMonIcon_Houndstone_,
	[SPECIES_FLAMIGO] = gMonIcon_Flamigo_,
	[SPECIES_CETODDLE] = gMonIcon_Cetoddle_,
	[SPECIES_CETITAN] = gMonIcon_Cetitan_,
	[SPECIES_VELUZA] = gMonIcon_Veluza_,
	[SPECIES_DONDOZO] = gMonIcon_Dondozo_,
	[SPECIES_TATSUGIRI] = gMonIcon_Tatsugiri_,
	[SPECIES_TATSUGIRI_2] = gMonIcon_Tatsugiri2_,
	[SPECIES_TATSUGIRI_3] = gMonIcon_Tatsugiri3_,
	[SPECIES_ANNIHILAPE] = gMonIcon_Annihilape_,
	[SPECIES_CLODSIRE] = gMonIcon_Clodsire_,
	[SPECIES_FARIGIRAF] = gMonIcon_Farigiraf_,
	[SPECIES_DUDUNSPRCE] = gMonIcon_Dudunsprce_,
	[SPECIES_DUDUNSPRCE_2] = gMonIcon_Dudunsprce2_,
	[SPECIES_KINGAMBIT] = gMonIcon_Kingambit_,
	[SPECIES_GREATTUSK] = gMonIcon_GreatTusk_,
	[SPECIES_SCREAMTAIL] = gMonIcon_ScreamTail_,
	[SPECIES_BRUTEBONET] = gMonIcon_BruteBonet_,
	[SPECIES_FLUTTRMANE] = gMonIcon_FluttrMane_,
	[SPECIES_SLITHRWING] = gMonIcon_SlithrWing_,
	[SPECIES_SNDYSHOCKS] = gMonIcon_SndyShocks_,
	[SPECIES_IRONTREADS] = gMonIcon_IronTreads_,
	[SPECIES_IRONBUNDLE] = gMonIcon_IronBundle_,
	[SPECIES_IRONHANDS] = gMonIcon_IronHands_,
	[SPECIES_IRONJUGULS] = gMonIcon_IronJuguls_,
	[SPECIES_IRONMOTH] = gMonIcon_IronMoth_,
	[SPECIES_IRONTHORNS] = gMonIcon_IronThorns_,
	[SPECIES_FRIGIBAX] = gMonIcon_Frigibax_,
	[SPECIES_ARCTIBAX] = gMonIcon_Arctibax_,
	[SPECIES_BAXCALIBUR] = gMonIcon_Baxcalibur_,
	[SPECIES_GIMMIGHOUL] = gMonIcon_Gimmighoul_,
	[SPECIES_GIMMIGHOUL_2] = gMonIcon_Gimmighoul2_,
	[SPECIES_GHOLDENGO] = gMonIcon_Gholdengo_,
	[SPECIES_WOCHIEN] = gMonIcon_WoChien_,
	[SPECIES_CHIENPAO] = gMonIcon_ChienPao_,
	[SPECIES_TINGLU] = gMonIcon_TingLu_,
	[SPECIES_CHIYU] = gMonIcon_ChiYu_,
	[SPECIES_ROARNGMOON] = gMonIcon_RoarngMoon_,
	[SPECIES_IRONVLIANT] = gMonIcon_IronVliant_,
	[SPECIES_KORAIDON] = gMonIcon_Koraidon_,
	[SPECIES_MIRAIDON] = gMonIcon_Miraidon_,
	[SPECIES_TAUROS_2] = gMonIcon_Tauros2_,
	[SPECIES_TAUROS_3] = gMonIcon_Tauros3_,
	[SPECIES_TAUROS_4] = gMonIcon_Tauros4_,
	[SPECIES_WOOPER_2] = gMonIcon_Wooper2_,
	[SPECIES_WALKNGWAKE] = gMonIcon_WalkngWake_,
	[SPECIES_IRONLEAVES] = gMonIcon_IronLeaves_,
	[SPECIES_DIPPLIN] = gMonIcon_Dipplin_,
	[SPECIES_PTCHAGEIST] = gMonIcon_Ptchageist_,
	[SPECIES_PTCHAGEIST_2] = gMonIcon_Ptchageist2_,
	[SPECIES_SINISTCHA] = gMonIcon_Sinistcha_,
	[SPECIES_SINISTCHA_2] = gMonIcon_Sinistcha2_,
	[SPECIES_OKIDOGI] = gMonIcon_Okidogi_,
	[SPECIES_MUNKIDORI] = gMonIcon_Munkidori_,
	[SPECIES_FEZNDIPITI] = gMonIcon_Fezndipiti_,
	[SPECIES_OGERPON] = gMonIcon_Ogerpon_,
	[SPECIES_OGERPON_2] = gMonIcon_Ogerpon2_,
	[SPECIES_OGERPON_3] = gMonIcon_Ogerpon3_,
	[SPECIES_OGERPON_4] = gMonIcon_Ogerpon4_,
	[SPECIES_OGERPON_5] = gMonIcon_Ogerpon5_,
	[SPECIES_OGERPON_6] = gMonIcon_Ogerpon6_,
	[SPECIES_OGERPON_7] = gMonIcon_Ogerpon7_,
	[SPECIES_OGERPON_8] = gMonIcon_Ogerpon8_,
	[SPECIES_URSALUNA_2] = gMonIcon_Ursaluna2_,
	[SPECIES_ARCHALUDON] = gMonIcon_Archaludon_,
	[SPECIES_HYDRAPPLE] = gMonIcon_Hydrapple_,
	[SPECIES_GOUGINFIRE] = gMonIcon_GouginFire_,
	[SPECIES_RAGINGBOLT] = gMonIcon_RagingBolt_,
	[SPECIES_IRONBOULDR] = gMonIcon_IronBouldr_,
	[SPECIES_IRONCROWN] = gMonIcon_IronCrown_,
	[SPECIES_TERAPAGOS] = gMonIcon_Terapagos_,
	[SPECIES_TERAPAGOS_2] = gMonIcon_Terapagos2_,
	[SPECIES_TERAPAGOS_3] = gMonIcon_Terapagos3_,
	[SPECIES_PECHARUNT] = gMonIcon_Pecharunt_,
	[SPECIES_MOTHIM_2] = gMonIcon_Mothim2_,
	[SPECIES_MOTHIM_3] = gMonIcon_Mothim3_,
	[SPECIES_SCATTERBUG_2] = gMonIcon_Scatterbug2_,
	[SPECIES_SCATTERBUG_3] = gMonIcon_Scatterbug3_,
	[SPECIES_SCATTERBUG_4] = gMonIcon_Scatterbug4_,
	[SPECIES_SCATTERBUG_5] = gMonIcon_Scatterbug5_,
	[SPECIES_SCATTERBUG_6] = gMonIcon_Scatterbug6_,
	[SPECIES_SCATTERBUG_7] = gMonIcon_Scatterbug7_,
	[SPECIES_SCATTERBUG_8] = gMonIcon_Scatterbug8_,
	[SPECIES_SCATTERBUG_9] = gMonIcon_Scatterbug9_,
	[SPECIES_SCATTERBUG_10] = gMonIcon_Scatterbug10_,
	[SPECIES_SCATTERBUG_11] = gMonIcon_Scatterbug11_,
	[SPECIES_SCATTERBUG_12] = gMonIcon_Scatterbug12_,
	[SPECIES_SCATTERBUG_13] = gMonIcon_Scatterbug13_,
	[SPECIES_SCATTERBUG_14] = gMonIcon_Scatterbug14_,
	[SPECIES_SCATTERBUG_15] = gMonIcon_Scatterbug15_,
	[SPECIES_SCATTERBUG_16] = gMonIcon_Scatterbug16_,
	[SPECIES_SCATTERBUG_17] = gMonIcon_Scatterbug17_,
	[SPECIES_SCATTERBUG_18] = gMonIcon_Scatterbug18_,
	[SPECIES_SCATTERBUG_19] = gMonIcon_Scatterbug19_,
	[SPECIES_SCATTERBUG_20] = gMonIcon_Scatterbug20_,
	[SPECIES_SPEWPA_2] = gMonIcon_Spewpa2_,
	[SPECIES_SPEWPA_3] = gMonIcon_Spewpa3_,
	[SPECIES_SPEWPA_4] = gMonIcon_Spewpa4_,
	[SPECIES_SPEWPA_5] = gMonIcon_Spewpa5_,
	[SPECIES_SPEWPA_6] = gMonIcon_Spewpa6_,
	[SPECIES_SPEWPA_7] = gMonIcon_Spewpa7_,
	[SPECIES_SPEWPA_8] = gMonIcon_Spewpa8_,
	[SPECIES_SPEWPA_9] = gMonIcon_Spewpa9_,
	[SPECIES_SPEWPA_10] = gMonIcon_Spewpa10_,
	[SPECIES_SPEWPA_11] = gMonIcon_Spewpa11_,
	[SPECIES_SPEWPA_12] = gMonIcon_Spewpa12_,
	[SPECIES_SPEWPA_13] = gMonIcon_Spewpa13_,
	[SPECIES_SPEWPA_14] = gMonIcon_Spewpa14_,
	[SPECIES_SPEWPA_15] = gMonIcon_Spewpa15_,
	[SPECIES_SPEWPA_16] = gMonIcon_Spewpa16_,
	[SPECIES_SPEWPA_17] = gMonIcon_Spewpa17_,
	[SPECIES_SPEWPA_18] = gMonIcon_Spewpa18_,
	[SPECIES_SPEWPA_19] = gMonIcon_Spewpa19_,
	[SPECIES_SPEWPA_20] = gMonIcon_Spewpa20_,
	[SPECIES_RATICATE_3] = gMonIcon_Raticate3_,
	[SPECIES_GUMSHOOS_2] = gMonIcon_Gumshoos2_,
	[SPECIES_VIKAVOLT_2] = gMonIcon_Vikavolt2_,
	[SPECIES_LURANTIS_2] = gMonIcon_Lurantis2_,
	[SPECIES_SALAZZLE_2] = gMonIcon_Salazzle2_,
	[SPECIES_MIMIKYU_3] = gMonIcon_Mimikyu3_,
	[SPECIES_KOMMOO_2] = gMonIcon_Kommoo2_,
	[SPECIES_MAROWAK_3] = gMonIcon_Marowak3_,
	[SPECIES_RIBOMBEE_2] = gMonIcon_Ribombee2_,
	[SPECIES_ARAQUANID_2] = gMonIcon_Araquanid2_,
	[SPECIES_TOGEDEMARU_2] = gMonIcon_Togedemaru2_,
	[SPECIES_PIKACHU_16] = gMonIcon_Pikachu16_,
	[SPECIES_EEVEE_2] = gMonIcon_Eevee2_,
	[SPECIES_VENUSAUR_3] = gMonIcon_Venusaur3_,
	[SPECIES_BLASTOISE_3] = gMonIcon_Blastoise3_,
	[SPECIES_CHARIZARD_4] = gMonIcon_Charizard4_,
	[SPECIES_BUTTERFREE_2] = gMonIcon_Butterfree2_,
	[SPECIES_PIKACHU_17] = gMonIcon_Pikachu17_,
	[SPECIES_MEOWTH_4] = gMonIcon_Meowth4_,
	[SPECIES_MACHAMP_2] = gMonIcon_Machamp2_,
	[SPECIES_GENGAR_3] = gMonIcon_Gengar3_,
	[SPECIES_KINGLER_2] = gMonIcon_Kingler2_,
	[SPECIES_LAPRAS_2] = gMonIcon_Lapras2_,
	[SPECIES_EEVEE_3] = gMonIcon_Eevee3_,
	[SPECIES_SNORLAX_2] = gMonIcon_Snorlax2_,
	[SPECIES_GARBODOR_2] = gMonIcon_Garbodor2_,
	[SPECIES_MELMETAL_2] = gMonIcon_Melmetal2_,
	[SPECIES_RILLABOOM_2] = gMonIcon_Rillaboom2_,
	[SPECIES_CINDERACE_2] = gMonIcon_Cinderace2_,
	[SPECIES_INTELEON_2] = gMonIcon_Inteleon2_,
	[SPECIES_CORVIKNIGH_2] = gMonIcon_Corviknigh2_,
	[SPECIES_ORBEETLE_2] = gMonIcon_Orbeetle2_,
	[SPECIES_DREDNAW_2] = gMonIcon_Drednaw2_,
	[SPECIES_COALOSSAL_2] = gMonIcon_Coalossal2_,
	[SPECIES_FLAPPLE_2] = gMonIcon_Flapple2_,
	[SPECIES_APPLETUN_2] = gMonIcon_Appletun2_,
	[SPECIES_SANDACONDA_2] = gMonIcon_Sandaconda2_,
	[SPECIES_TOXTRICITY_3] = gMonIcon_Toxtricity3_,
	[SPECIES_TOXTRICITY_4] = gMonIcon_Toxtricity4_,
	[SPECIES_CENTISKORC_2] = gMonIcon_Centiskorc2_,
	[SPECIES_HATTERENE_2] = gMonIcon_Hatterene2_,
	[SPECIES_GRIMMSNARL_2] = gMonIcon_Grimmsnarl2_,
	[SPECIES_ALCREMIE_64] = gMonIcon_Alcremie64_,
	[SPECIES_COPPERAJAH_2] = gMonIcon_Copperajah2_,
	[SPECIES_DURALUDON_2] = gMonIcon_Duraludon2_,
	[SPECIES_URSHIFU_3] = gMonIcon_Urshifu3_,
	[SPECIES_URSHIFU_4] = gMonIcon_Urshifu4_,
	[SPECIES_MIMIKYU_4] = gMonIcon_Mimikyu4_,
};

const u8 gMonIconPaletteIndices_[] =
{
    [SPECIES_NONE]        = 0,
    [SPECIES_BULBASAUR]   = 1,
    [SPECIES_IVYSAUR]     = 1,
    [SPECIES_VENUSAUR]    = 1,
    [SPECIES_CHARMANDER]  = 0,
    [SPECIES_CHARMELEON]  = 0,
    [SPECIES_CHARIZARD]   = 0,
    [SPECIES_SQUIRTLE]    = 0,
    [SPECIES_WARTORTLE]   = 2,
    [SPECIES_BLASTOISE]   = 2,
    [SPECIES_CATERPIE]    = 1,
    [SPECIES_METAPOD]     = 1,
    [SPECIES_BUTTERFREE]  = 0,
    [SPECIES_WEEDLE]      = 1,
    [SPECIES_KAKUNA]      = 2,
    [SPECIES_BEEDRILL]    = 2,
    [SPECIES_PIDGEY]      = 0,
    [SPECIES_PIDGEOTTO]   = 0,
    [SPECIES_PIDGEOT]     = 0,
    [SPECIES_RATTATA]     = 2,
    [SPECIES_RATICATE]    = 1,
    [SPECIES_SPEAROW]     = 0,
    [SPECIES_FEAROW]      = 0,
    [SPECIES_EKANS]       = 2,
    [SPECIES_ARBOK]       = 2,
    [SPECIES_PIKACHU]     = 2,
    [SPECIES_RAICHU]      = 0,
    [SPECIES_SANDSHREW]   = 2,
    [SPECIES_SANDSLASH]   = 2,
    [SPECIES_NIDORANSF]   = 2,
    [SPECIES_NIDORINA]    = 2,
    [SPECIES_NIDOQUEEN]   = 2,
    [SPECIES_NIDORANSM]   = 2,
    [SPECIES_NIDORINO]    = 2,
    [SPECIES_NIDOKING]    = 2,
    [SPECIES_CLEFAIRY]    = 0,
    [SPECIES_CLEFABLE]    = 0,
    [SPECIES_VULPIX]      = 2,
    [SPECIES_NINETALES]   = 1,
    [SPECIES_JIGGLYPUFF]  = 0,
    [SPECIES_WIGGLYTUFF]  = 0,
    [SPECIES_ZUBAT]       = 2,
    [SPECIES_GOLBAT]      = 2,
    [SPECIES_ODDISH]      = 1,
    [SPECIES_GLOOM]       = 0,
    [SPECIES_VILEPLUME]   = 0,
    [SPECIES_PARAS]       = 0,
    [SPECIES_PARASECT]    = 0,
    [SPECIES_VENONAT]     = 0,
    [SPECIES_VENOMOTH]    = 2,
    [SPECIES_DIGLETT]     = 2,
    [SPECIES_DUGTRIO]     = 2,
    [SPECIES_MEOWTH]      = 1,
    [SPECIES_PERSIAN]     = 1,
    [SPECIES_PSYDUCK]     = 1,
    [SPECIES_GOLDUCK]     = 2,
    [SPECIES_MANKEY]      = 1,
    [SPECIES_PRIMEAPE]    = 2,
    [SPECIES_GROWLITHE]   = 0,
    [SPECIES_ARCANINE]    = 0,
    [SPECIES_POLIWAG]     = 0,
    [SPECIES_POLIWHIRL]   = 0,
    [SPECIES_POLIWRATH]   = 0,
    [SPECIES_ABRA]        = 2,
    [SPECIES_KADABRA]     = 2,
    [SPECIES_ALAKAZAM]    = 2,
    [SPECIES_MACHOP]      = 0,
    [SPECIES_MACHOKE]     = 2,
    [SPECIES_MACHAMP]     = 0,
    [SPECIES_BELLSPROUT]  = 1,
    [SPECIES_WEEPINBELL]  = 1,
    [SPECIES_VICTREEBEL]  = 1,
    [SPECIES_TENTACOOL]   = 2,
    [SPECIES_TENTACRUEL]  = 2,
    [SPECIES_GEODUDE]     = 1,
    [SPECIES_GRAVELER]    = 1,
    [SPECIES_GOLEM]       = 1,
    [SPECIES_PONYTA]      = 0,
    [SPECIES_RAPIDASH]    = 0,
    [SPECIES_SLOWPOKE]    = 0,
    [SPECIES_SLOWBRO]     = 0,
    [SPECIES_MAGNEMITE]   = 0,
    [SPECIES_MAGNETON]    = 0,
    [SPECIES_FARFETCHD]   = 1,
    [SPECIES_DODUO]       = 2,
    [SPECIES_DODRIO]      = 2,
    [SPECIES_SEEL]        = 2,
    [SPECIES_DEWGONG]     = 2,
    [SPECIES_GRIMER]      = 2,
    [SPECIES_MUK]         = 2,
    [SPECIES_SHELLDER]    = 2,
    [SPECIES_CLOYSTER]    = 2,
    [SPECIES_GASTLY]      = 2,
    [SPECIES_HAUNTER]     = 2,
    [SPECIES_GENGAR]      = 2,
    [SPECIES_ONIX]        = 2,
    [SPECIES_DROWZEE]     = 2,
    [SPECIES_HYPNO]       = 1,
    [SPECIES_KRABBY]      = 2,
    [SPECIES_KINGLER]     = 2,
    [SPECIES_VOLTORB]     = 0,
    [SPECIES_ELECTRODE]   = 0,
    [SPECIES_EXEGGCUTE]   = 0,
    [SPECIES_EXEGGUTOR]   = 1,
    [SPECIES_CUBONE]      = 1,
    [SPECIES_MAROWAK]     = 1,
    [SPECIES_HITMONLEE]   = 2,
    [SPECIES_HITMONCHAN]  = 2,
    [SPECIES_LICKITUNG]   = 1,
    [SPECIES_KOFFING]     = 2,
    [SPECIES_WEEZING]     = 2,
    [SPECIES_RHYHORN]     = 1,
    [SPECIES_RHYDON]      = 1,
    [SPECIES_CHANSEY]     = 0,
    [SPECIES_TANGELA]     = 0,
    [SPECIES_KANGASKHAN]  = 1,
    [SPECIES_HORSEA]      = 0,
    [SPECIES_SEADRA]      = 0,
    [SPECIES_GOLDEEN]     = 0,
    [SPECIES_SEAKING]     = 0,
    [SPECIES_STARYU]      = 2,
    [SPECIES_STARMIE]     = 2,
    [SPECIES_MRMIME]      = 0,
    [SPECIES_SCYTHER]     = 1,
    [SPECIES_JYNX]        = 2,
    [SPECIES_ELECTABUZZ]  = 1,
    [SPECIES_MAGMAR]      = 0,
    [SPECIES_PINSIR]      = 2,
    [SPECIES_TAUROS]      = 2,
    [SPECIES_MAGIKARP]    = 0,
    [SPECIES_GYARADOS]    = 0,
    [SPECIES_LAPRAS]      = 2,
    [SPECIES_DITTO]       = 2,
    [SPECIES_EEVEE]       = 2,
    [SPECIES_VAPOREON]    = 0,
    [SPECIES_JOLTEON]     = 0,
    [SPECIES_FLAREON]     = 0,
    [SPECIES_PORYGON]     = 0,
    [SPECIES_OMANYTE]     = 0,
    [SPECIES_OMASTAR]     = 0,
    [SPECIES_KABUTO]      = 2,
    [SPECIES_KABUTOPS]    = 2,
    [SPECIES_AERODACTYL]  = 0,
    [SPECIES_SNORLAX]     = 1,
    [SPECIES_ARTICUNO]    = 0,
    [SPECIES_ZAPDOS]      = 0,
    [SPECIES_MOLTRES]     = 0,
    [SPECIES_DRATINI]     = 0,
    [SPECIES_DRAGONAIR]   = 0,
    [SPECIES_DRAGONITE]   = 2,
    [SPECIES_MEWTWO]      = 2,
    [SPECIES_MEW]         = 0,
    [SPECIES_CHIKORITA]   = 1,
    [SPECIES_BAYLEEF]     = 1,
    [SPECIES_MEGANIUM]    = 1,
    [SPECIES_CYNDAQUIL]   = 1,
    [SPECIES_QUILAVA]     = 1,
    [SPECIES_TYPHLOSION]  = 1,
    [SPECIES_TOTODILE]    = 2,
    [SPECIES_CROCONAW]    = 2,
    [SPECIES_FERALIGATR]  = 2,
    [SPECIES_SENTRET]     = 2,
    [SPECIES_FURRET]      = 2,
    [SPECIES_HOOTHOOT]    = 2,
    [SPECIES_NOCTOWL]     = 2,
    [SPECIES_LEDYBA]      = 0,
    [SPECIES_LEDIAN]      = 0,
    [SPECIES_SPINARAK]    = 1,
    [SPECIES_ARIADOS]     = 0,
    [SPECIES_CROBAT]      = 2,
    [SPECIES_CHINCHOU]    = 2,
    [SPECIES_LANTURN]     = 0,
    [SPECIES_PICHU]       = 0,
    [SPECIES_CLEFFA]      = 0,
    [SPECIES_IGGLYBUFF]   = 1,
    [SPECIES_TOGEPI]      = 2,
    [SPECIES_TOGETIC]     = 2,
    [SPECIES_NATU]        = 0,
    [SPECIES_XATU]        = 0,
    [SPECIES_MAREEP]      = 2,
    [SPECIES_FLAAFFY]     = 0,
    [SPECIES_AMPHAROS]    = 0,
    [SPECIES_BELLOSSOM]   = 1,
    [SPECIES_MARILL]      = 2,
    [SPECIES_AZUMARILL]   = 2,
    [SPECIES_SUDOWOODO]   = 1,
    [SPECIES_POLITOED]    = 1,
    [SPECIES_HOPPIP]      = 1,
    [SPECIES_SKIPLOOM]    = 1,
    [SPECIES_JUMPLUFF]    = 2,
    [SPECIES_AIPOM]       = 2,
    [SPECIES_SUNKERN]     = 1,
    [SPECIES_SUNFLORA]    = 1,
    [SPECIES_YANMA]       = 1,
    [SPECIES_WOOPER]      = 0,
    [SPECIES_QUAGSIRE]    = 0,
    [SPECIES_ESPEON]      = 2,
    [SPECIES_UMBREON]     = 2,
    [SPECIES_MURKROW]     = 2,
    [SPECIES_SLOWKING]    = 0,
    [SPECIES_MISDREAVUS]  = 0,
    [SPECIES_UNOWN]       = 0,
    [SPECIES_WOBBUFFET]   = 0,
    [SPECIES_GIRAFARIG]   = 1,
    [SPECIES_PINECO]      = 0,
    [SPECIES_FORRETRESS]  = 2,
    [SPECIES_DUNSPARCE]   = 2,
    [SPECIES_GLIGAR]      = 2,
    [SPECIES_STEELIX]     = 0,
    [SPECIES_SNUBBULL]    = 0,
    [SPECIES_GRANBULL]    = 2,
    [SPECIES_QWILFISH]    = 0,
    [SPECIES_SCIZOR]      = 0,
    [SPECIES_SHUCKLE]     = 1,
    [SPECIES_HERACROSS]   = 2,
    [SPECIES_SNEASEL]     = 0,
    [SPECIES_TEDDIURSA]   = 0,
    [SPECIES_URSARING]    = 2,
    [SPECIES_SLUGMA]      = 0,
    [SPECIES_MAGCARGO]    = 0,
    [SPECIES_SWINUB]      = 2,
    [SPECIES_PILOSWINE]   = 2,
    [SPECIES_CORSOLA]     = 0,
    [SPECIES_REMORAID]    = 0,
    [SPECIES_OCTILLERY]   = 0,
    [SPECIES_DELIBIRD]    = 0,
    [SPECIES_MANTINE]     = 2,
    [SPECIES_SKARMORY]    = 0,
    [SPECIES_HOUNDOUR]    = 0,
    [SPECIES_HOUNDOOM]    = 0,
    [SPECIES_KINGDRA]     = 0,
    [SPECIES_PHANPY]      = 0,
    [SPECIES_DONPHAN]     = 0,
    [SPECIES_PORYGON2]    = 0,
    [SPECIES_STANTLER]    = 2,
    [SPECIES_SMEARGLE]    = 1,
    [SPECIES_TYROGUE]     = 2,
    [SPECIES_HITMONTOP]   = 2,
    [SPECIES_SMOOCHUM]    = 1,
    [SPECIES_ELEKID]      = 1,
    [SPECIES_MAGBY]       = 1,
    [SPECIES_MILTANK]     = 1,
    [SPECIES_BLISSEY]     = 1,
    [SPECIES_RAIKOU]      = 0,
    [SPECIES_ENTEI]       = 2,
    [SPECIES_SUICUNE]     = 0,
    [SPECIES_LARVITAR]    = 1,
    [SPECIES_PUPITAR]     = 0,
    [SPECIES_TYRANITAR]   = 1,
    [SPECIES_LUGIA]       = 0,
    [SPECIES_HOOH]        = 1,
    [SPECIES_CELEBI]      = 1,
    [SPECIES_OLD_UNOWN_B] = 0,
    [SPECIES_OLD_UNOWN_C] = 0,
    [SPECIES_OLD_UNOWN_D] = 0,
    [SPECIES_OLD_UNOWN_E] = 0,
    [SPECIES_OLD_UNOWN_F] = 0,
    [SPECIES_OLD_UNOWN_G] = 0,
    [SPECIES_OLD_UNOWN_H] = 0,
    [SPECIES_OLD_UNOWN_I] = 0,
    [SPECIES_OLD_UNOWN_J] = 0,
    [SPECIES_OLD_UNOWN_K] = 0,
    [SPECIES_OLD_UNOWN_L] = 0,
    [SPECIES_OLD_UNOWN_M] = 0,
    [SPECIES_OLD_UNOWN_N] = 0,
    [SPECIES_OLD_UNOWN_O] = 0,
    [SPECIES_OLD_UNOWN_P] = 0,
    [SPECIES_OLD_UNOWN_Q] = 0,
    [SPECIES_OLD_UNOWN_R] = 0,
    [SPECIES_OLD_UNOWN_S] = 0,
    [SPECIES_OLD_UNOWN_T] = 0,
    [SPECIES_OLD_UNOWN_U] = 0,
    [SPECIES_OLD_UNOWN_V] = 0,
    [SPECIES_OLD_UNOWN_W] = 0,
    [SPECIES_OLD_UNOWN_X] = 0,
    [SPECIES_OLD_UNOWN_Y] = 0,
    [SPECIES_OLD_UNOWN_Z] = 0,
    [SPECIES_TREECKO]     = 1,
    [SPECIES_GROVYLE]     = 0,
    [SPECIES_SCEPTILE]    = 1,
    [SPECIES_TORCHIC]     = 0,
    [SPECIES_COMBUSKEN]   = 0,
    [SPECIES_BLAZIKEN]    = 0,
    [SPECIES_MUDKIP]      = 0,
    [SPECIES_MARSHTOMP]   = 0,
    [SPECIES_SWAMPERT]    = 0,
    [SPECIES_POOCHYENA]   = 2,
    [SPECIES_MIGHTYENA]   = 2,
    [SPECIES_ZIGZAGOON]   = 2,
    [SPECIES_LINOONE]     = 2,
    [SPECIES_WURMPLE]     = 0,
    [SPECIES_SILCOON]     = 2,
    [SPECIES_BEAUTIFLY]   = 0,
    [SPECIES_CASCOON]     = 2,
    [SPECIES_DUSTOX]      = 1,
    [SPECIES_LOTAD]       = 1,
    [SPECIES_LOMBRE]      = 1,
    [SPECIES_LUDICOLO]    = 1,
    [SPECIES_SEEDOT]      = 1,
    [SPECIES_NUZLEAF]     = 1,
    [SPECIES_SHIFTRY]     = 0,
    [SPECIES_NINCADA]     = 1,
    [SPECIES_NINJASK]     = 1,
    [SPECIES_SHEDINJA]    = 1,
    [SPECIES_TAILLOW]     = 2,
    [SPECIES_SWELLOW]     = 2,
    [SPECIES_SHROOMISH]   = 1,
    [SPECIES_BRELOOM]     = 1,
    [SPECIES_SPINDA]      = 1,
    [SPECIES_WINGULL]     = 0,
    [SPECIES_PELIPPER]    = 0,
    [SPECIES_SURSKIT]     = 2,
    [SPECIES_MASQUERAIN]  = 0,
    [SPECIES_WAILMER]     = 2,
    [SPECIES_WAILORD]     = 0,
    [SPECIES_SKITTY]      = 0,
    [SPECIES_DELCATTY]    = 2,
    [SPECIES_KECLEON]     = 1,
    [SPECIES_BALTOY]      = 1,
    [SPECIES_CLAYDOL]     = 0,
    [SPECIES_NOSEPASS]    = 0,
    [SPECIES_TORKOAL]     = 1,
    [SPECIES_SABLEYE]     = 2,
    [SPECIES_BARBOACH]    = 0,
    [SPECIES_WHISCASH]    = 0,
    [SPECIES_LUVDISC]     = 0,
    [SPECIES_CORPHISH]    = 0,
    [SPECIES_CRAWDAUNT]   = 0,
    [SPECIES_FEEBAS]      = 2,
    [SPECIES_MILOTIC]     = 0,
    [SPECIES_CARVANHA]    = 0,
    [SPECIES_SHARPEDO]    = 0,
    [SPECIES_TRAPINCH]    = 1,
    [SPECIES_VIBRAVA]     = 1,
    [SPECIES_FLYGON]      = 1,
    [SPECIES_MAKUHITA]    = 2,
    [SPECIES_HARIYAMA]    = 1,
    [SPECIES_ELECTRIKE]   = 1,
    [SPECIES_MANECTRIC]   = 0,
    [SPECIES_NUMEL]       = 1,
    [SPECIES_CAMERUPT]    = 0,
    [SPECIES_SPHEAL]      = 2,
    [SPECIES_SEALEO]      = 2,
    [SPECIES_WALREIN]     = 0,
    [SPECIES_CACNEA]      = 1,
    [SPECIES_CACTURNE]    = 1,
    [SPECIES_SNORUNT]     = 2,
    [SPECIES_GLALIE]      = 0,
    [SPECIES_LUNATONE]    = 1,
    [SPECIES_SOLROCK]     = 0,
    [SPECIES_AZURILL]     = 2,
    [SPECIES_SPOINK]      = 0,
    [SPECIES_GRUMPIG]     = 2,
    [SPECIES_PLUSLE]      = 0,
    [SPECIES_MINUN]       = 0,
    [SPECIES_MAWILE]      = 2,
    [SPECIES_MEDITITE]    = 0,
    [SPECIES_MEDICHAM]    = 0,
    [SPECIES_SWABLU]      = 0,
    [SPECIES_ALTARIA]     = 0,
    [SPECIES_WYNAUT]      = 0,
    [SPECIES_DUSKULL]     = 0,
    [SPECIES_DUSCLOPS]    = 0,
    [SPECIES_ROSELIA]     = 0,
    [SPECIES_SLAKOTH]     = 2,
    [SPECIES_VIGOROTH]    = 2,
    [SPECIES_SLAKING]     = 1,
    [SPECIES_GULPIN]      = 1,
    [SPECIES_SWALOT]      = 2,
    [SPECIES_TROPIUS]     = 1,
    [SPECIES_WHISMUR]     = 0,
    [SPECIES_LOUDRED]     = 2,
    [SPECIES_EXPLOUD]     = 2,
    [SPECIES_CLAMPERL]    = 0,
    [SPECIES_HUNTAIL]     = 0,
    [SPECIES_GOREBYSS]    = 0,
    [SPECIES_ABSOL]       = 0,
    [SPECIES_SHUPPET]     = 0,
    [SPECIES_BANETTE]     = 0,
    [SPECIES_SEVIPER]     = 2,
    [SPECIES_ZANGOOSE]    = 0,
    [SPECIES_RELICANTH]   = 1,
    [SPECIES_ARON]        = 2,
    [SPECIES_LAIRON]      = 2,
    [SPECIES_AGGRON]      = 2,
    [SPECIES_CASTFORM]    = 0,
    [SPECIES_VOLBEAT]     = 0,
    [SPECIES_ILLUMISE]    = 2,
    [SPECIES_LILEEP]      = 2,
    [SPECIES_CRADILY]     = 0,
    [SPECIES_ANORITH]     = 0,
    [SPECIES_ARMALDO]     = 0,
    [SPECIES_RALTS]       = 1,
    [SPECIES_KIRLIA]      = 1,
    [SPECIES_GARDEVOIR]   = 1,
    [SPECIES_BAGON]       = 2,
    [SPECIES_SHELGON]     = 2,
    [SPECIES_SALAMENCE]   = 0,
    [SPECIES_BELDUM]      = 0,
    [SPECIES_METANG]      = 0,
    [SPECIES_METAGROSS]   = 0,
    [SPECIES_REGIROCK]    = 2,
    [SPECIES_REGICE]      = 2,
    [SPECIES_REGISTEEL]   = 2,
    [SPECIES_KYOGRE]      = 2,
    [SPECIES_GROUDON]     = 0,
    [SPECIES_RAYQUAZA]    = 1,
    [SPECIES_LATIAS]      = 0,
    [SPECIES_LATIOS]      = 2,
    [SPECIES_JIRACHI]     = 0,
    [SPECIES_DEOXYS]      = 0,
    [SPECIES_CHIMECHO]    = 0,
    [SPECIES_EGG]         = 1,
    [SPECIES_UNOWN_B]     = 0,
    [SPECIES_UNOWN_C]     = 0,
    [SPECIES_UNOWN_D]     = 0,
    [SPECIES_UNOWN_E]     = 0,
    [SPECIES_UNOWN_F]     = 0,
    [SPECIES_UNOWN_G]     = 0,
    [SPECIES_UNOWN_H]     = 0,
    [SPECIES_UNOWN_I]     = 0,
    [SPECIES_UNOWN_J]     = 0,
    [SPECIES_UNOWN_K]     = 0,
    [SPECIES_UNOWN_L]     = 0,
    [SPECIES_UNOWN_M]     = 0,
    [SPECIES_UNOWN_N]     = 0,
    [SPECIES_UNOWN_O]     = 0,
    [SPECIES_UNOWN_P]     = 0,
    [SPECIES_UNOWN_Q]     = 0,
    [SPECIES_UNOWN_R]     = 0,
    [SPECIES_UNOWN_S]     = 0,
    [SPECIES_UNOWN_T]     = 0,
    [SPECIES_UNOWN_U]     = 0,
    [SPECIES_UNOWN_V]     = 0,
    [SPECIES_UNOWN_W]     = 0,
    [SPECIES_UNOWN_X]     = 0,
    [SPECIES_UNOWN_Y]     = 0,
    [SPECIES_UNOWN_Z]     = 0,
    [SPECIES_UNOWN_EMARK] = 0,
    [SPECIES_UNOWN_QMARK] = 0,
	[SPECIES_TURTWIG] = 1,
	[SPECIES_GROTLE] = 1,
	[SPECIES_TORTERRA] = 1,
	[SPECIES_CHIMCHAR] = 1,
	[SPECIES_MONFERNO] = 0,
	[SPECIES_INFERNAPE] = 0,
	[SPECIES_PIPLUP] = 0,
	[SPECIES_PRINPLUP] = 0,
	[SPECIES_EMPOLEON] = 0,
	[SPECIES_STARLY] = 0,
	[SPECIES_STARAVIA] = 0,
	[SPECIES_STARAPTOR] = 0,
	[SPECIES_BIDOOF] = 2,
	[SPECIES_BIBAREL] = 2,
	[SPECIES_KRICKETOT] = 2,
	[SPECIES_KRICKETUNE] = 2,
	[SPECIES_SHINX] = 0,
	[SPECIES_LUXIO] = 0,
	[SPECIES_LUXRAY] = 0,
	[SPECIES_BUDEW] = 1,
	[SPECIES_ROSERADE] = 0,
	[SPECIES_CRANIDOS] = 0,
	[SPECIES_RAMPARDOS] = 0,
	[SPECIES_SHIELDON] = 1,
	[SPECIES_BASTIODON] = 1,
	[SPECIES_BURMY] = 1,
	[SPECIES_WORMADAM] = 1,
	[SPECIES_MOTHIM] = 0,
	[SPECIES_COMBEE] = 0,
	[SPECIES_VESPIQUEN] = 0,
	[SPECIES_PACHIRISU] = 0,
	[SPECIES_BUIZEL] = 0,
	[SPECIES_FLOATZEL] = 0,
	[SPECIES_CHERUBI] = 1,
	[SPECIES_CHERRIM] = 0,
	[SPECIES_SHELLOS] = 0,
	[SPECIES_GASTRODON] = 0,
	[SPECIES_AMBIPOM] = 2,
	[SPECIES_DRIFLOON] = 2,
	[SPECIES_DRIFBLIM] = 2,
	[SPECIES_BUNEARY] = 2,
	[SPECIES_LOPUNNY] = 2,
	[SPECIES_MISMAGIUS] = 2,
	[SPECIES_HONCHKROW] = 2,
	[SPECIES_GLAMEOW] = 0,
	[SPECIES_PURUGLY] = 0,
	[SPECIES_CHINGLING] = 1,
	[SPECIES_STUNKY] = 2,
	[SPECIES_SKUNTANK] = 2,
	[SPECIES_BRONZOR] = 0,
	[SPECIES_BRONZONG] = 0,
	[SPECIES_BONSLY] = 1,
	[SPECIES_MIMEJR] = 0,
	[SPECIES_HAPPINY] = 0,
	[SPECIES_CHATOT] = 0,
	[SPECIES_SPIRITOMB] = 5,
	[SPECIES_GIBLE] = 0,
	[SPECIES_GABITE] = 0,
	[SPECIES_GARCHOMP] = 0,
	[SPECIES_MUNCHLAX] = 3,
	[SPECIES_RIOLU] = 2,
	[SPECIES_LUCARIO] = 2,
	[SPECIES_HIPPOPOTAS] = 1,
	[SPECIES_HIPPOWDON] = 1,
	[SPECIES_SKORUPI] = 0,
	[SPECIES_DRAPION] = 2,
	[SPECIES_CROAGUNK] = 0,
	[SPECIES_TOXICROAK] = 0,
	[SPECIES_CARNIVINE] = 1,
	[SPECIES_FINNEON] = 0,
	[SPECIES_LUMINEON] = 0,
	[SPECIES_MANTYKE] = 0,
	[SPECIES_SNOVER] = 1,
	[SPECIES_ABOMASNOW] = 1,
	[SPECIES_WEAVILE] = 0,
	[SPECIES_MAGNEZONE] = 0,
	[SPECIES_LICKILICKY] = 1,
	[SPECIES_RHYPERIOR] = 0,
	[SPECIES_TANGROWTH] = 0,
	[SPECIES_ELECTIVIRE] = 1,
	[SPECIES_MAGMORTAR] = 0,
	[SPECIES_TOGEKISS] = 2,
	[SPECIES_YANMEGA] = 1,
	[SPECIES_LEAFEON] = 1,
	[SPECIES_GLACEON] = 0,
	[SPECIES_GLISCOR] = 2,
	[SPECIES_MAMOSWINE] = 2,
	[SPECIES_PORYGONZ] = 0,
	[SPECIES_GALLADE] = 1,
	[SPECIES_PROBOPASS] = 0,
	[SPECIES_DUSKNOIR] = 2,
	[SPECIES_FROSLASS] = 0,
	[SPECIES_ROTOM] = 0,
	[SPECIES_UXIE] = 0,
	[SPECIES_MESPRIT] = 0,
	[SPECIES_AZELF] = 0,
	[SPECIES_DIALGA] = 2,
	[SPECIES_PALKIA] = 2,
	[SPECIES_HEATRAN] = 0,
	[SPECIES_REGIGIGAS] = 0,
	[SPECIES_GIRATINA] = 0,
	[SPECIES_CRESSELIA] = 0,
	[SPECIES_PHIONE] = 0,
	[SPECIES_MANAPHY] = 0,
	[SPECIES_DARKRAI] = 0,
	[SPECIES_SHAYMIN] = 1,
	[SPECIES_ARCEUS] = 1,
	[SPECIES_VICTINI] = 0,
	[SPECIES_SNIVY] = 1,
	[SPECIES_SERVINE] = 1,
	[SPECIES_SERPERIOR] = 1,
	[SPECIES_TEPIG] = 0,
	[SPECIES_PIGNITE] = 0,
	[SPECIES_EMBOAR] = 0,
	[SPECIES_OSHAWOTT] = 0,
	[SPECIES_DEWOTT] = 0,
	[SPECIES_SAMUROTT] = 2,
	[SPECIES_PATRAT] = 2,
	[SPECIES_WATCHOG] = 2,
	[SPECIES_LILLIPUP] = 2,
	[SPECIES_HERDIER] = 2,
	[SPECIES_STOUTLAND] = 2,
	[SPECIES_PURRLOIN] = 0,
	[SPECIES_LIEPARD] = 0,
	[SPECIES_PANSAGE] = 1,
	[SPECIES_SIMISAGE] = 1,
	[SPECIES_PANSEAR] = 2,
	[SPECIES_SIMISEAR] = 2,
	[SPECIES_PANPOUR] = 2,
	[SPECIES_SIMIPOUR] = 2,
	[SPECIES_MUNNA] = 0,
	[SPECIES_MUSHARNA] = 0,
	[SPECIES_PIDOVE] = 0,
	[SPECIES_TRANQUILL] = 0,
	[SPECIES_UNFEZANT] = 1,
	[SPECIES_BLITZLE] = 2,
	[SPECIES_ZEBSTRIKA] = 2,
	[SPECIES_ROGGENROLA] = 2,
	[SPECIES_BOLDORE] = 0,
	[SPECIES_GIGALITH] = 0,
	[SPECIES_WOOBAT] = 0,
	[SPECIES_SWOOBAT] = 0,
	[SPECIES_DRILBUR] = 0,
	[SPECIES_EXCADRILL] = 0,
	[SPECIES_AUDINO] = 1,
	[SPECIES_TIMBURR] = 1,
	[SPECIES_GURDURR] = 1,
	[SPECIES_CONKELDURR] = 1,
	[SPECIES_TYMPOLE] = 2,
	[SPECIES_PALPITOAD] = 2,
	[SPECIES_SEISMITOAD] = 0,
	[SPECIES_THROH] = 0,
	[SPECIES_SAWK] = 0,
	[SPECIES_SEWADDLE] = 1,
	[SPECIES_SWADLOON] = 1,
	[SPECIES_LEAVANNY] = 1,
	[SPECIES_VENIPEDE] = 1,
	[SPECIES_WHIRLIPEDE] = 2,
	[SPECIES_SCOLIPEDE] = 2,
	[SPECIES_COTTONEE] = 1,
	[SPECIES_WHIMSICOTT] = 1,
	[SPECIES_PETILIL] = 1,
	[SPECIES_LILLIGANT] = 1,
	[SPECIES_BASCULIN] = 1,
	[SPECIES_SANDILE] = 1,
	[SPECIES_KROKOROK] = 1,
	[SPECIES_KROOKODILE] = 0,
	[SPECIES_DARUMAKA] = 0,
	[SPECIES_DARMANITAN] = 0,
	[SPECIES_MARACTUS] = 1,
	[SPECIES_DWEBBLE] = 0,
	[SPECIES_CRUSTLE] = 2,
	[SPECIES_SCRAGGY] = 2,
	[SPECIES_SCRAFTY] = 0,
	[SPECIES_SIGILYPH] = 0,
	[SPECIES_YAMASK] = 0,
	[SPECIES_COFAGRIGUS] = 0,
	[SPECIES_TIRTOUGA] = 2,
	[SPECIES_CARRACOSTA] = 2,
	[SPECIES_ARCHEN] = 0,
	[SPECIES_ARCHEOPS] = 0,
	[SPECIES_TRUBBISH] = 1,
	[SPECIES_GARBODOR] = 1,
	[SPECIES_ZORUA] = 0,
	[SPECIES_ZOROARK] = 0,
	[SPECIES_MINCCINO] = 0,
	[SPECIES_CINCCINO] = 0,
	[SPECIES_GOTHITA] = 2,
	[SPECIES_GOTHORITA] = 2,
	[SPECIES_GOTHITELLE] = 2,
	[SPECIES_SOLOSIS] = 1,
	[SPECIES_DUOSION] = 1,
	[SPECIES_REUNICLUS] = 1,
	[SPECIES_DUCKLETT] = 0,
	[SPECIES_SWANNA] = 2,
	[SPECIES_VANILLITE] = 0,
	[SPECIES_VANILLISH] = 2,
	[SPECIES_VANILLUXE] = 2,
	[SPECIES_DEERLING] = 1,
	[SPECIES_SAWSBUCK] = 1,
	[SPECIES_EMOLGA] = 2,
	[SPECIES_KARRABLAST] = 0,
	[SPECIES_ESCAVALIER] = 0,
	[SPECIES_FOONGUS] = 0,
	[SPECIES_AMOONGUSS] = 1,
	[SPECIES_FRILLISH] = 0,
	[SPECIES_JELLICENT] = 0,
	[SPECIES_ALOMOMOLA] = 0,
	[SPECIES_JOLTIK] = 0,
	[SPECIES_GALVANTULA] = 2,
	[SPECIES_FERROSEED] = 1,
	[SPECIES_FERROTHORN] = 1,
	[SPECIES_KLINK] = 0,
	[SPECIES_KLANG] = 0,
	[SPECIES_KLINKLANG] = 0,
	[SPECIES_TYNAMO] = 0,
	[SPECIES_EELEKTRIK] = 0,
	[SPECIES_EELEKTROSS] = 0,
	[SPECIES_ELGYEM] = 0,
	[SPECIES_BEHEEYEM] = 2,
	[SPECIES_LITWICK] = 2,
	[SPECIES_LAMPENT] = 2,
	[SPECIES_CHANDELURE] = 2,
	[SPECIES_AXEW] = 1,
	[SPECIES_FRAXURE] = 1,
	[SPECIES_HAXORUS] = 2,
	[SPECIES_CUBCHOO] = 0,
	[SPECIES_BEARTIC] = 0,
	[SPECIES_CRYOGONAL] = 0,
	[SPECIES_SHELMET] = 1,
	[SPECIES_ACCELGOR] = 1,
	[SPECIES_STUNFISK] = 2,
	[SPECIES_MIENFOO] = 1,
	[SPECIES_MIENSHAO] = 2,
	[SPECIES_DRUDDIGON] = 0,
	[SPECIES_GOLETT] = 0,
	[SPECIES_GOLURK] = 0,
	[SPECIES_PAWNIARD] = 0,
	[SPECIES_BISHARP] = 0,
	[SPECIES_BOUFFALANT] = 2,
	[SPECIES_RUFFLET] = 2,
	[SPECIES_BRAVIARY] = 0,
	[SPECIES_VULLABY] = 0,
	[SPECIES_MANDIBUZZ] = 1,
	[SPECIES_HEATMOR] = 2,
	[SPECIES_DURANT] = 0,
	[SPECIES_DEINO] = 2,
	[SPECIES_ZWEILOUS] = 2,
	[SPECIES_HYDREIGON] = 2,
	[SPECIES_LARVESTA] = 0,
	[SPECIES_VOLCARONA] = 0,
	[SPECIES_COBALION] = 0,
	[SPECIES_TERRAKION] = 2,
	[SPECIES_VIRIZION] = 1,
	[SPECIES_TORNADUS] = 1,
	[SPECIES_THUNDURUS] = 0,
	[SPECIES_RESHIRAM] = 0,
	[SPECIES_ZEKROM] = 2,
	[SPECIES_LANDORUS] = 0,
	[SPECIES_KYUREM] = 0,
	[SPECIES_KELDEO] = 0,
	[SPECIES_MELOETTA] = 4,
	[SPECIES_GENESECT] = 2,
	[SPECIES_CHESPIN] = 1,
	[SPECIES_QUILLADIN] = 1,
	[SPECIES_CHESNAUGHT] = 1,
	[SPECIES_FENNEKIN] = 0,
	[SPECIES_BRAIXEN] = 0,
	[SPECIES_DELPHOX] = 0,
	[SPECIES_FROAKIE] = 0,
	[SPECIES_FROGADIER] = 0,
	[SPECIES_GRENINJA] = 0,
	[SPECIES_BUNNELBY] = 2,
	[SPECIES_DIGGERSBY] = 2,
	[SPECIES_FLETCHLING] = 2,
	[SPECIES_FLECHINDER] = 2,
	[SPECIES_TALONFLAME] = 2,
	[SPECIES_SCATTERBUG] = 1,
	[SPECIES_SPEWPA] = 1,
	[SPECIES_VIVILLON] = 0,
	[SPECIES_LITLEO] = 2,
	[SPECIES_PYROAR] = 2,
	[SPECIES_FLABEBE] = 1,
	[SPECIES_FLOETTE] = 1,
	[SPECIES_FLORGES] = 0,
	[SPECIES_SKIDDO] = 1,
	[SPECIES_GOGOAT] = 1,
	[SPECIES_PANCHAM] = 1,
	[SPECIES_PANGORO] = 1,
	[SPECIES_FURFROU] = 0,
	[SPECIES_ESPURR] = 2,
	[SPECIES_MEOWSTIC] = 0,
	[SPECIES_HONEDGE] = 2,
	[SPECIES_DOUBLADE] = 2,
	[SPECIES_AEGISLASH] = 2,
	[SPECIES_SPRITZEE] = 0,
	[SPECIES_AROMATISSE] = 0,
	[SPECIES_SWIRLIX] = 1,
	[SPECIES_SLURPUFF] = 1,
	[SPECIES_INKAY] = 0,
	[SPECIES_MALAMAR] = 2,
	[SPECIES_BINACLE] = 2,
	[SPECIES_BARBARACLE] = 2,
	[SPECIES_SKRELP] = 2,
	[SPECIES_DRAGALGE] = 5,
	[SPECIES_CLAUNCHER] = 0,
	[SPECIES_CLAWITZER] = 0,
	[SPECIES_HELIOPTILE] = 2,
	[SPECIES_HELIOLISK] = 2,
	[SPECIES_TYRUNT] = 2,
	[SPECIES_TYRANTRUM] = 0,
	[SPECIES_AMAURA] = 0,
	[SPECIES_AURORUS] = 0,
	[SPECIES_SYLVEON] = 0,
	[SPECIES_HAWLUCHA] = 0,
	[SPECIES_DEDENNE] = 0,
	[SPECIES_CARBINK] = 2,
	[SPECIES_GOOMY] = 5,
	[SPECIES_SLIGGOO] = 5,
	[SPECIES_GOODRA] = 5,
	[SPECIES_KLEFKI] = 0,
	[SPECIES_PHANTUMP] = 1,
	[SPECIES_TREVENANT] = 1,
	[SPECIES_PUMPKABOO] = 2,
	[SPECIES_GOURGEIST] = 2,
	[SPECIES_BERGMITE] = 0,
	[SPECIES_AVALUGG] = 0,
	[SPECIES_NOIBAT] = 2,
	[SPECIES_NOIVERN] = 2,
	[SPECIES_XERNEAS] = 0,
	[SPECIES_YVELTAL] = 0,
	[SPECIES_ZYGARDE] = 1,
	[SPECIES_DIANCIE] = 1,
	[SPECIES_HOOPA] = 0,
	[SPECIES_VOLCANION] = 0,
	[SPECIES_ROWLET] = 0,
	[SPECIES_DARTRIX] = 1,
	[SPECIES_DECIDUEYE] = 1,
	[SPECIES_LITTEN] = 0,
	[SPECIES_TORRACAT] = 0,
	[SPECIES_INCINEROAR] = 0,
	[SPECIES_POPPLIO] = 0,
	[SPECIES_BRIONNE] = 0,
	[SPECIES_PRIMARINA] = 0,
	[SPECIES_PIKIPEK] = 2,
	[SPECIES_TRUMBEAK] = 0,
	[SPECIES_TOUCANNON] = 0,
	[SPECIES_YUNGOOS] = 2,
	[SPECIES_GUMSHOOS] = 2,
	[SPECIES_GRUBBIN] = 0,
	[SPECIES_CHARJABUG] = 1,
	[SPECIES_VIKAVOLT] = 0,
	[SPECIES_CRABRAWLER] = 2,
	[SPECIES_CRABMINABL] = 2,
	[SPECIES_ORICORIO] = 0,
	[SPECIES_CUTIEFLY] = 2,
	[SPECIES_RIBOMBEE] = 2,
	[SPECIES_ROCKRUFF] = 2,
	[SPECIES_LYCANROC] = 2,
	[SPECIES_WISHIWASHI] = 2,
	[SPECIES_MAREANIE] = 2,
	[SPECIES_TOXAPEX] = 0,
	[SPECIES_MUDBRAY] = 2,
	[SPECIES_MUDSDALE] = 0,
	[SPECIES_DEWPIDER] = 0,
	[SPECIES_ARAQUANID] = 2,
	[SPECIES_FOMANTIS] = 1,
	[SPECIES_LURANTIS] = 1,
	[SPECIES_MORELULL] = 0,
	[SPECIES_SHIINOTIC] = 1,
	[SPECIES_SALANDIT] = 2,
	[SPECIES_SALAZZLE] = 0,
	[SPECIES_STUFFUL] = 0,
	[SPECIES_BEWEAR] = 0,
	[SPECIES_BOUNSWEET] = 1,
	[SPECIES_STEENEE] = 1,
	[SPECIES_TSAREENA] = 1,
	[SPECIES_COMFEY] = 1,
	[SPECIES_ORANGURU] = 0,
	[SPECIES_PASSIMIAN] = 1,
	[SPECIES_WIMPOD] = 2,
	[SPECIES_GOLISOPOD] = 2,
	[SPECIES_SANDYGAST] = 1,
	[SPECIES_PALOSSAND] = 2,
	[SPECIES_PYUKUMUKU] = 0,
	[SPECIES_TYPENULL] = 0,
	[SPECIES_SILVALLY] = 0,
	[SPECIES_MINIOR] = 0,
	[SPECIES_KOMALA] = 2,
	[SPECIES_TURTONATOR] = 0,
	[SPECIES_TOGEDEMARU] = 2,
	[SPECIES_MIMIKYU] = 1,
	[SPECIES_BRUXISH] = 0,
	[SPECIES_DRAMPA] = 0,
	[SPECIES_DHELMISE] = 1,
	[SPECIES_JANGMOO] = 2,
	[SPECIES_HAKAMOO] = 2,
	[SPECIES_KOMMOO] = 2,
	[SPECIES_TAPUKOKO] = 0,
	[SPECIES_TAPULELE] = 0,
	[SPECIES_TAPUBULU] = 2,
	[SPECIES_TAPUFINI] = 0,
	[SPECIES_COSMOG] = 2,
	[SPECIES_COSMOEM] = 0,
	[SPECIES_SOLGALEO] = 0,
	[SPECIES_LUNALA] = 2,
	[SPECIES_NIHILEGO] = 0,
	[SPECIES_BUZZWOLE] = 0,
	[SPECIES_PHEROMOSA] = 2,
	[SPECIES_XURKITREE] = 0,
	[SPECIES_CELESTEELA] = 0,
	[SPECIES_KARTANA] = 0,
	[SPECIES_GUZZLORD] = 0,
	[SPECIES_NECROZMA] = 0,
	[SPECIES_MAGEARNA] = 0,
	[SPECIES_MARSHADOW] = 0,
	[SPECIES_POIPOLE] = 0,
	[SPECIES_NAGANADEL] = 0,
	[SPECIES_STAKATAKA] = 0,
	[SPECIES_BLACEPHALN] = 0,
	[SPECIES_ZERAORA] = 0,
	[SPECIES_MELTAN] = 2,
	[SPECIES_MELMETAL] = 2,
	[SPECIES_GROOKEY] = 1,
	[SPECIES_THWACKEY] = 1,
	[SPECIES_RILLABOOM] = 1,
	[SPECIES_SCORBUNNY] = 0,
	[SPECIES_RABOOT] = 0,
	[SPECIES_CINDERACE] = 0,
	[SPECIES_SOBBLE] = 2,
	[SPECIES_DRIZZILE] = 2,
	[SPECIES_INTELEON] = 0,
	[SPECIES_SKWOVET] = 2,
	[SPECIES_GREEDENT] = 0,
	[SPECIES_ROOKIDEE] = 0,
	[SPECIES_CORVISQUIR] = 0,
	[SPECIES_CORVIKNIGH] = 0,
	[SPECIES_BLIPBUG] = 0,
	[SPECIES_DOTTLER] = 2,
	[SPECIES_ORBEETLE] = 0,
	[SPECIES_NICKIT] = 2,
	[SPECIES_THIEVUL] = 2,
	[SPECIES_GOSSIFLEUR] = 1,
	[SPECIES_ELDEGOSS] = 1,
	[SPECIES_WOOLOO] = 0,
	[SPECIES_DUBWOOL] = 2,
	[SPECIES_CHEWTLE] = 0,
	[SPECIES_DREDNAW] = 0,
	[SPECIES_YAMPER] = 1,
	[SPECIES_BOLTUND] = 1,
	[SPECIES_ROLYCOLY] = 0,
	[SPECIES_CARKOL] = 0,
	[SPECIES_COALOSSAL] = 0,
	[SPECIES_APPLIN] = 1,
	[SPECIES_FLAPPLE] = 1,
	[SPECIES_APPLETUN] = 1,
	[SPECIES_SILICOBRA] = 1,
	[SPECIES_SANDACONDA] = 1,
	[SPECIES_CRAMORANT] = 0,
	[SPECIES_ARROKUDA] = 2,
	[SPECIES_BARRASKEWD] = 2,
	[SPECIES_TOXEL] = 2,
	[SPECIES_TOXTRICITY] = 2,
	[SPECIES_SIZZLIPEDE] = 0,
	[SPECIES_CENTISKORC] = 0,
	[SPECIES_CLOBBOPUS] = 0,
	[SPECIES_GRAPPLOCT] = 2,
	[SPECIES_SINISTEA] = 2,
	[SPECIES_POLTEAGEIS] = 2,
	[SPECIES_HATENNA] = 0,
	[SPECIES_HATTREM] = 0,
	[SPECIES_HATTERENE] = 0,
	[SPECIES_IMPIDIMP] = 0,
	[SPECIES_MORGREM] = 0,
	[SPECIES_GRIMMSNARL] = 0,
	[SPECIES_OBSTAGOON] = 0,
	[SPECIES_PERRSERKER] = 2,
	[SPECIES_CURSOLA] = 0,
	[SPECIES_SIRFETCHD] = 1,
	[SPECIES_MRRIME] = 0,
	[SPECIES_RUNERIGUS] = 2,
	[SPECIES_MILCERY] = 1,
	[SPECIES_ALCREMIE] = 1,
	[SPECIES_FALINKS] = 0,
	[SPECIES_PINCURCHIN] = 2,
	[SPECIES_SNOM] = 0,
	[SPECIES_FROSMOTH] = 0,
	[SPECIES_STONJOURNE] = 2,
	[SPECIES_EISCUE] = 0,
	[SPECIES_INDEEDEE] = 2,
	[SPECIES_MORPEKO] = 2,
	[SPECIES_CUFANT] = 0,
	[SPECIES_COPPERAJAH] = 0,
	[SPECIES_DRACOZOLT] = 1,
	[SPECIES_ARCTOZOLT] = 0,
	[SPECIES_DRACOVISH] = 0,
	[SPECIES_ARCTOVISH] = 0,
	[SPECIES_DURALUDON] = 0,
	[SPECIES_DREEPY] = 0,
	[SPECIES_DRAKLOAK] = 0,
	[SPECIES_DRAGAPULT] = 0,
	[SPECIES_ZACIAN] = 2,
	[SPECIES_ZAMAZENTA] = 2,
	[SPECIES_ETERNATUS] = 0,
	[SPECIES_KUBFU] = 1,
	[SPECIES_URSHIFU] = 2,
	[SPECIES_ZARUDE] = 1,
	[SPECIES_REGIELEKI] = 0,
	[SPECIES_REGIDRAGO] = 0,
	[SPECIES_GLASTRIER] = 0,
	[SPECIES_SPECTRIER] = 0,
	[SPECIES_CALYREX] = 0,
	[SPECIES_WYRDEER] = 2,
	[SPECIES_KLEAVOR] = 2,
	[SPECIES_URSALUNA] = 2,
	[SPECIES_BSCULEGION] = 1,
	[SPECIES_SNEASLER] = 2,
	[SPECIES_OVERQWIL] = 2,
	[SPECIES_ENAMORUS] = 1,
	[SPECIES_VENUSAUR_2] = 4,
	[SPECIES_CHARIZARD_2] = 0,
	[SPECIES_CHARIZARD_3] = 0,
	[SPECIES_BLASTOISE_2] = 2,
	[SPECIES_BEEDRILL_2] = 2,
	[SPECIES_PIDGEOT_2] = 0,
	[SPECIES_ALAKAZAM_2] = 2,
	[SPECIES_SLOWBRO_2] = 0,
	[SPECIES_GENGAR_2] = 2,
	[SPECIES_KANGASKHAN_2] = 2,
	[SPECIES_PINSIR_2] = 2,
	[SPECIES_GYARADOS_2] = 0,
	[SPECIES_AERODACTYL_2] = 2,
	[SPECIES_MEWTWO_2] = 2,
	[SPECIES_MEWTWO_3] = 2,
	[SPECIES_AMPHAROS_2] = 0,
	[SPECIES_STEELIX_2] = 0,
	[SPECIES_SCIZOR_2] = 0,
	[SPECIES_HERACROSS_2] = 0,
	[SPECIES_HOUNDOOM_2] = 0,
	[SPECIES_TYRANITAR_2] = 1,
	[SPECIES_SCEPTILE_2] = 1,
	[SPECIES_BLAZIKEN_2] = 0,
	[SPECIES_SWAMPERT_2] = 0,
	[SPECIES_GARDEVOIR_2] = 1,
	[SPECIES_SABLEYE_2] = 2,
	[SPECIES_MAWILE_2] = 0,
	[SPECIES_AGGRON_2] = 2,
	[SPECIES_MEDICHAM_2] = 0,
	[SPECIES_MANECTRIC_2] = 0,
	[SPECIES_SHARPEDO_2] = 0,
	[SPECIES_CAMERUPT_2] = 0,
	[SPECIES_ALTARIA_2] = 0,
	[SPECIES_BANETTE_2] = 0,
	[SPECIES_ABSOL_2] = 0,
	[SPECIES_GLALIE_2] = 0,
	[SPECIES_SALAMENCE_2] = 0,
	[SPECIES_METAGROSS_2] = 0,
	[SPECIES_LATIAS_2] = 2,
	[SPECIES_LATIOS_2] = 2,
	[SPECIES_LOPUNNY_2] = 2,
	[SPECIES_GARCHOMP_2] = 0,
	[SPECIES_LUCARIO_2] = 2,
	[SPECIES_ABOMASNOW_2] = 1,
	[SPECIES_GALLADE_2] = 1,
	[SPECIES_AUDINO_2] = 1,
	[SPECIES_DIANCIE_2] = 0,
	[SPECIES_RAYQUAZA_2] = 1,
	[SPECIES_KYOGRE_2] = 0,
	[SPECIES_GROUDON_2] = 0,
	[SPECIES_RATTATA_2] = 2,
	[SPECIES_RATICATE_2] = 2,
	[SPECIES_RAICHU_2] = 2,
	[SPECIES_SANDSHREW_2] = 0,
	[SPECIES_SANDSLASH_2] = 0,
	[SPECIES_VULPIX_2] = 2,
	[SPECIES_NINETALES_2] = 2,
	[SPECIES_DIGLETT_2] = 2,
	[SPECIES_DUGTRIO_2] = 2,
	[SPECIES_MEOWTH_2] = 2,
	[SPECIES_PERSIAN_2] = 2,
	[SPECIES_GEODUDE_2] = 2,
	[SPECIES_GRAVELER_2] = 2,
	[SPECIES_GOLEM_2] = 2,
	[SPECIES_GRIMER_2] = 1,
	[SPECIES_MUK_2] = 0,
	[SPECIES_EXEGGUTOR_2] = 1,
	[SPECIES_MAROWAK_2] = 1,
	[SPECIES_MEOWTH_3] = 0,
	[SPECIES_PONYTA_2] = 2,
	[SPECIES_RAPIDASH_2] = 2,
	[SPECIES_SLOWPOKE_2] = 0,
	[SPECIES_SLOWBRO_3] = 0,
	[SPECIES_FARFETCHD_2] = 1,
	[SPECIES_WEEZING_2] = 1,
	[SPECIES_MRMIME_2] = 0,
	[SPECIES_ARTICUNO_2] = 2,
	[SPECIES_ZAPDOS_2] = 0,
	[SPECIES_MOLTRES_2] = 0,
	[SPECIES_SLOWKING_2] = 0,
	[SPECIES_CORSOLA_2] = 0,
	[SPECIES_ZIGZAGOON_2] = 0,
	[SPECIES_LINOONE_2] = 0,
	[SPECIES_DARUMAKA_2] = 0,
	[SPECIES_DARMANITAN_2] = 0,
	[SPECIES_YAMASK_2] = 2,
	[SPECIES_STUNFISK_2] = 1,
	[SPECIES_GROWLITHE_2] = 0,
	[SPECIES_ARCANINE_2] = 0,
	[SPECIES_VOLTORB_2] = 0,
	[SPECIES_ELECTRODE_2] = 1,
	[SPECIES_TYPHLOSION_2] = 1,
	[SPECIES_QWILFISH_2] = 1,
	[SPECIES_SNEASEL_2] = 0,
	[SPECIES_SAMUROTT_2] = 0,
	[SPECIES_LILLIGANT_2] = 1,
	[SPECIES_ZORUA_2] = 0,
	[SPECIES_ZOROARK_2] = 0,
	[SPECIES_BRAVIARY_2] = 2,
	[SPECIES_SLIGGOO_2] = 2,
	[SPECIES_GOODRA_2] = 2,
	[SPECIES_AVALUGG_2] = 5,
	[SPECIES_DECIDUEYE_2] = 0,
	[SPECIES_PIKACHU_2] = 2,
	[SPECIES_PIKACHU_3] = 1,
	[SPECIES_PIKACHU_4] = 0,
	[SPECIES_PIKACHU_5] = 0,
	[SPECIES_PIKACHU_6] = 1,
	[SPECIES_PIKACHU_7] = 0,
	[SPECIES_PIKACHU_8] = 0,
	[SPECIES_PIKACHU_9] = 0,
	[SPECIES_PIKACHU_10] = 0,
	[SPECIES_PIKACHU_11] = 0,
	[SPECIES_PIKACHU_12] = 0,
	[SPECIES_PIKACHU_13] = 0,
	[SPECIES_PIKACHU_14] = 0,
	[SPECIES_PIKACHU_15] = 0,
	[SPECIES_PICHU_2] = 1,
	[SPECIES_UNOWN_2] = 0,
	[SPECIES_UNOWN_3] = 0,
	[SPECIES_UNOWN_4] = 0,
	[SPECIES_UNOWN_5] = 0,
	[SPECIES_UNOWN_6] = 0,
	[SPECIES_UNOWN_7] = 0,
	[SPECIES_UNOWN_8] = 0,
	[SPECIES_UNOWN_9] = 0,
	[SPECIES_UNOWN_10] = 0,
	[SPECIES_UNOWN_11] = 0,
	[SPECIES_UNOWN_12] = 0,
	[SPECIES_UNOWN_13] = 0,
	[SPECIES_UNOWN_14] = 0,
	[SPECIES_UNOWN_15] = 0,
	[SPECIES_UNOWN_16] = 0,
	[SPECIES_UNOWN_17] = 0,
	[SPECIES_UNOWN_18] = 0,
	[SPECIES_UNOWN_19] = 0,
	[SPECIES_UNOWN_20] = 0,
	[SPECIES_UNOWN_21] = 0,
	[SPECIES_UNOWN_22] = 0,
	[SPECIES_UNOWN_23] = 0,
	[SPECIES_UNOWN_24] = 0,
	[SPECIES_UNOWN_25] = 0,
	[SPECIES_UNOWN_26] = 0,
	[SPECIES_UNOWN_27] = 0,
	[SPECIES_UNOWN_28] = 0,
	[SPECIES_CASTFORM_2] = 0,
	[SPECIES_CASTFORM_3] = 0,
	[SPECIES_CASTFORM_4] = 0,
	[SPECIES_DEOXYS_2] = 0,
	[SPECIES_DEOXYS_3] = 0,
	[SPECIES_DEOXYS_4] = 0,
	[SPECIES_BURMY_2] = 1,
	[SPECIES_BURMY_3] = 0,
	[SPECIES_WORMADAM_2] = 1,
	[SPECIES_WORMADAM_3] = 0,
	[SPECIES_CHERRIM_2] = 1,
	[SPECIES_SHELLOS_2] = 0,
	[SPECIES_GASTRODON_2] = 0,
	[SPECIES_ROTOM_2] = 0,
	[SPECIES_ROTOM_3] = 0,
	[SPECIES_ROTOM_4] = 5,
	[SPECIES_ROTOM_5] = 0,
	[SPECIES_ROTOM_6] = 0,
	[SPECIES_DIALGA_2] = 0,
	[SPECIES_PALKIA_2] = 2,
	[SPECIES_GIRATINA_2] = 0,
	[SPECIES_SHAYMIN_2] = 1,
	[SPECIES_ARCEUS_2] = 1,
	[SPECIES_ARCEUS_3] = 1,
	[SPECIES_ARCEUS_4] = 1,
	[SPECIES_ARCEUS_5] = 1,
	[SPECIES_ARCEUS_6] = 1,
	[SPECIES_ARCEUS_7] = 1,
	[SPECIES_ARCEUS_8] = 1,
	[SPECIES_ARCEUS_9] = 1,
	[SPECIES_ARCEUS_10] = 1,
	[SPECIES_ARCEUS_11] = 1,
	[SPECIES_ARCEUS_12] = 1,
	[SPECIES_ARCEUS_13] = 1,
	[SPECIES_ARCEUS_14] = 1,
	[SPECIES_ARCEUS_15] = 1,
	[SPECIES_ARCEUS_16] = 1,
	[SPECIES_ARCEUS_17] = 1,
	[SPECIES_ARCEUS_18] = 1,
	[SPECIES_BASCULIN_2] = 0,
	[SPECIES_BASCULIN_3] = 0,
	[SPECIES_DARMANITAN_3] = 0,
	[SPECIES_DARMANITAN_4] = 0,
	[SPECIES_DEERLING_2] = 1,
	[SPECIES_DEERLING_3] = 0,
	[SPECIES_DEERLING_4] = 2,
	[SPECIES_SAWSBUCK_2] = 1,
	[SPECIES_SAWSBUCK_3] = 1,
	[SPECIES_SAWSBUCK_4] = 1,
	[SPECIES_TORNADUS_2] = 1,
	[SPECIES_THUNDURUS_2] = 0,
	[SPECIES_LANDORUS_2] = 0,
	[SPECIES_ENAMORUS_2] = 1,
	[SPECIES_KYUREM_2] = 0,
	[SPECIES_KYUREM_3] = 0,
	[SPECIES_KELDEO_2] = 0,
	[SPECIES_MELOETTA_2] = 0,
	[SPECIES_GENESECT_2] = 2,
	[SPECIES_GENESECT_3] = 2,
	[SPECIES_GENESECT_4] = 2,
	[SPECIES_GENESECT_5] = 2,
	[SPECIES_GRENINJA_2] = 0,
	[SPECIES_GRENINJA_3] = 0,
	[SPECIES_VIVILLON_2] = 0,
	[SPECIES_VIVILLON_3] = 0,
	[SPECIES_VIVILLON_4] = 2,
	[SPECIES_VIVILLON_5] = 1,
	[SPECIES_VIVILLON_6] = 0,
	[SPECIES_VIVILLON_7] = 0,
	[SPECIES_VIVILLON_8] = 2,
	[SPECIES_VIVILLON_9] = 0,
	[SPECIES_VIVILLON_10] = 0,
	[SPECIES_VIVILLON_11] = 0,
	[SPECIES_VIVILLON_12] = 1,
	[SPECIES_VIVILLON_13] = 2,
	[SPECIES_VIVILLON_14] = 0,
	[SPECIES_VIVILLON_15] = 0,
	[SPECIES_VIVILLON_16] = 0,
	[SPECIES_VIVILLON_17] = 0,
	[SPECIES_VIVILLON_18] = 0,
	[SPECIES_VIVILLON_19] = 1,
	[SPECIES_VIVILLON_20] = 2,
	[SPECIES_FLABEBE_2] = 1,
	[SPECIES_FLABEBE_3] = 0,
	[SPECIES_FLABEBE_4] = 0,
	[SPECIES_FLABEBE_5] = 1,
	[SPECIES_FLOETTE_2] = 1,
	[SPECIES_FLOETTE_3] = 0,
	[SPECIES_FLOETTE_4] = 0,
	[SPECIES_FLOETTE_5] = 1,
	[SPECIES_FLOETTE_6] = 0,
	[SPECIES_FLORGES_2] = 1,
	[SPECIES_FLORGES_3] = 0,
	[SPECIES_FLORGES_4] = 0,
	[SPECIES_FLORGES_5] = 0,
	[SPECIES_FURFROU_2] = 0,
	[SPECIES_FURFROU_3] = 0,
	[SPECIES_FURFROU_4] = 0,
	[SPECIES_FURFROU_5] = 2,
	[SPECIES_FURFROU_6] = 2,
	[SPECIES_FURFROU_7] = 1,
	[SPECIES_FURFROU_8] = 0,
	[SPECIES_FURFROU_9] = 0,
	[SPECIES_FURFROU_10] = 0,
	[SPECIES_MEOWSTIC_2] = 0,
	[SPECIES_AEGISLASH_2] = 2,
	[SPECIES_PUMPKABOO_2] = 2,
	[SPECIES_PUMPKABOO_3] = 2,
	[SPECIES_PUMPKABOO_4] = 2,
	[SPECIES_GOURGEIST_2] = 2,
	[SPECIES_GOURGEIST_3] = 2,
	[SPECIES_GOURGEIST_4] = 2,
	[SPECIES_XERNEAS_2] = 0,
	[SPECIES_ZYGARDE_2] = 1,
	[SPECIES_ZYGARDE_3] = 1,
	[SPECIES_ZYGARDE_4] = 1,
	[SPECIES_ZYGARDE_5] = 1,
	[SPECIES_HOOPA_2] = 0,
	[SPECIES_ORICORIO_2] = 1,
	[SPECIES_ORICORIO_3] = 1,
	[SPECIES_ORICORIO_4] = 0,
	[SPECIES_ROCKRUFF_2] = 2,
	[SPECIES_LYCANROC_2] = 0,
	[SPECIES_LYCANROC_3] = 0,
	[SPECIES_WISHIWASHI_2] = 0,
	[SPECIES_SILVALLY_2] = 0,
	[SPECIES_SILVALLY_3] = 0,
	[SPECIES_SILVALLY_4] = 0,
	[SPECIES_SILVALLY_5] = 0,
	[SPECIES_SILVALLY_6] = 0,
	[SPECIES_SILVALLY_7] = 0,
	[SPECIES_SILVALLY_8] = 0,
	[SPECIES_SILVALLY_9] = 0,
	[SPECIES_SILVALLY_10] = 0,
	[SPECIES_SILVALLY_11] = 0,
	[SPECIES_SILVALLY_12] = 0,
	[SPECIES_SILVALLY_13] = 0,
	[SPECIES_SILVALLY_14] = 0,
	[SPECIES_SILVALLY_15] = 0,
	[SPECIES_SILVALLY_16] = 0,
	[SPECIES_SILVALLY_17] = 0,
	[SPECIES_SILVALLY_18] = 0,
	[SPECIES_MINIOR_2] = 0,
	[SPECIES_MINIOR_3] = 0,
	[SPECIES_MINIOR_4] = 0,
	[SPECIES_MINIOR_5] = 0,
	[SPECIES_MINIOR_6] = 0,
	[SPECIES_MINIOR_7] = 0,
	[SPECIES_MINIOR_8] = 0,
	[SPECIES_MINIOR_9] = 0,
	[SPECIES_MINIOR_10] = 0,
	[SPECIES_MINIOR_11] = 1,
	[SPECIES_MINIOR_12] = 0,
	[SPECIES_MINIOR_13] = 0,
	[SPECIES_MINIOR_14] = 2,
	[SPECIES_MIMIKYU_2] = 1,
	[SPECIES_NECROZMA_2] = 0,
	[SPECIES_NECROZMA_3] = 0,
	[SPECIES_NECROZMA_4] = 2,
	[SPECIES_MAGEARNA_2] = 0,
	[SPECIES_CRAMORANT_2] = 0,
	[SPECIES_CRAMORANT_3] = 0,
	[SPECIES_TOXTRICITY_2] = 2,
	[SPECIES_SINISTEA_2] = 2,
	[SPECIES_POLTEAGEIS_2] = 2,
	[SPECIES_ALCREMIE_2] = 1,
	[SPECIES_ALCREMIE_3] = 1,
	[SPECIES_ALCREMIE_4] = 1,
	[SPECIES_ALCREMIE_5] = 1,
	[SPECIES_ALCREMIE_6] = 1,
	[SPECIES_ALCREMIE_7] = 1,
	[SPECIES_ALCREMIE_8] = 1,
	[SPECIES_ALCREMIE_9] = 1,
	[SPECIES_EISCUE_2] = 0,
	[SPECIES_INDEEDEE_2] = 2,
	[SPECIES_MORPEKO_2] = 2,
	[SPECIES_ZACIAN_2] = 2,
	[SPECIES_ZAMAZENTA_2] = 2,
	[SPECIES_ETERNATUS_2] = 0,
	[SPECIES_URSHIFU_2] = 2,
	[SPECIES_ZARUDE_2] = 1,
	[SPECIES_CALYREX_2] = 0,
	[SPECIES_CALYREX_3] = 0,
	[SPECIES_BSCULEGION_2] = 0,
	[SPECIES_ALCREMIE_10] = 1,
	[SPECIES_ALCREMIE_11] = 1,
	[SPECIES_ALCREMIE_12] = 1,
	[SPECIES_ALCREMIE_13] = 1,
	[SPECIES_ALCREMIE_14] = 1,
	[SPECIES_ALCREMIE_15] = 1,
	[SPECIES_ALCREMIE_16] = 1,
	[SPECIES_ALCREMIE_17] = 1,
	[SPECIES_ALCREMIE_18] = 1,
	[SPECIES_ALCREMIE_19] = 1,
	[SPECIES_ALCREMIE_20] = 1,
	[SPECIES_ALCREMIE_21] = 1,
	[SPECIES_ALCREMIE_22] = 1,
	[SPECIES_ALCREMIE_23] = 1,
	[SPECIES_ALCREMIE_24] = 1,
	[SPECIES_ALCREMIE_25] = 1,
	[SPECIES_ALCREMIE_26] = 1,
	[SPECIES_ALCREMIE_27] = 1,
	[SPECIES_ALCREMIE_28] = 1,
	[SPECIES_ALCREMIE_29] = 1,
	[SPECIES_ALCREMIE_30] = 1,
	[SPECIES_ALCREMIE_31] = 1,
	[SPECIES_ALCREMIE_32] = 1,
	[SPECIES_ALCREMIE_33] = 1,
	[SPECIES_ALCREMIE_34] = 1,
	[SPECIES_ALCREMIE_35] = 1,
	[SPECIES_ALCREMIE_36] = 1,
	[SPECIES_ALCREMIE_37] = 1,
	[SPECIES_ALCREMIE_38] = 1,
	[SPECIES_ALCREMIE_39] = 1,
	[SPECIES_ALCREMIE_40] = 1,
	[SPECIES_ALCREMIE_41] = 1,
	[SPECIES_ALCREMIE_42] = 1,
	[SPECIES_ALCREMIE_43] = 1,
	[SPECIES_ALCREMIE_44] = 1,
	[SPECIES_ALCREMIE_45] = 1,
	[SPECIES_ALCREMIE_46] = 1,
	[SPECIES_ALCREMIE_47] = 1,
	[SPECIES_ALCREMIE_48] = 1,
	[SPECIES_ALCREMIE_49] = 1,
	[SPECIES_ALCREMIE_50] = 1,
	[SPECIES_ALCREMIE_51] = 1,
	[SPECIES_ALCREMIE_52] = 1,
	[SPECIES_ALCREMIE_53] = 1,
	[SPECIES_ALCREMIE_54] = 1,
	[SPECIES_ALCREMIE_55] = 1,
	[SPECIES_ALCREMIE_56] = 1,
	[SPECIES_ALCREMIE_57] = 1,
	[SPECIES_ALCREMIE_58] = 1,
	[SPECIES_ALCREMIE_59] = 1,
	[SPECIES_ALCREMIE_60] = 1,
	[SPECIES_ALCREMIE_61] = 1,
	[SPECIES_ALCREMIE_62] = 1,
	[SPECIES_ALCREMIE_63] = 1,
	[SPECIES_SPRIGATITO] = 1,
	[SPECIES_FLORAGATO] = 1,
	[SPECIES_MEOWSCARAD] = 1,
	[SPECIES_FUECOCO] = 2,
	[SPECIES_CROCALOR] = 0,
	[SPECIES_SKELEDIRGE] = 0,
	[SPECIES_QUAXLY] = 0,
	[SPECIES_QUAXWELL] = 0,
	[SPECIES_QUAQUAVAL] = 0,
	[SPECIES_LECHONK] = 1,
	[SPECIES_OINKOLOGNE] = 1,
	[SPECIES_OINKOLOGNE_2] = 0,
	[SPECIES_TAROUNTULA] = 1,
	[SPECIES_SPIDOPS] = 1,
	[SPECIES_NYMBLE] = 0,
	[SPECIES_LOKIX] = 0,
	[SPECIES_PAWMI] = 0,
	[SPECIES_PAWMO] = 0,
	[SPECIES_PAWMOT] = 0,
	[SPECIES_TANDEMAUS] = 1,
	[SPECIES_MAUSHOLD] = 1,
	[SPECIES_MAUSHOLD_2] = 1,
	[SPECIES_FIDOUGH] = 1,
	[SPECIES_DACHSBUN] = 0,
	[SPECIES_SMOLIV] = 1,
	[SPECIES_DOLLIV] = 1,
	[SPECIES_ARBOLIVA] = 1,
	[SPECIES_SQAWKABILY] = 1,
	[SPECIES_SQAWKABILY_2] = 0,
	[SPECIES_SQAWKABILY_3] = 1,
	[SPECIES_SQAWKABILY_4] = 0,
	[SPECIES_NACLI] = 2,
	[SPECIES_NACLSTACK] = 2,
	[SPECIES_GARGANACL] = 2,
	[SPECIES_CHARCADET] = 0,
	[SPECIES_ARMAROUGE] = 0,
	[SPECIES_CERULEDGE] = 2,
	[SPECIES_TADBULB] = 0,
	[SPECIES_BELLIBOLT] = 0,
	[SPECIES_WATTREL] = 0,
	[SPECIES_KILOWATREL] = 0,
	[SPECIES_MASCHIFF] = 0,
	[SPECIES_MABOSSTIFF] = 0,
	[SPECIES_SHROODLE] = 0,
	[SPECIES_GRAFAIAI] = 0,
	[SPECIES_BRAMBLIN] = 1,
	[SPECIES_BRMBLGHAST] = 2,
	[SPECIES_TOEDSCOOL] = 0,
	[SPECIES_TOEDSCRUEL] = 0,
	[SPECIES_KLAWF] = 0,
	[SPECIES_CAPSAKID] = 1,
	[SPECIES_SCOVILLAIN] = 1,
	[SPECIES_RELLOR] = 0,
	[SPECIES_RABSCA] = 0,
	[SPECIES_FLITTLE] = 1,
	[SPECIES_ESPATHRA] = 0,
	[SPECIES_TINKATINK] = 1,
	[SPECIES_TINKATUFF] = 1,
	[SPECIES_TINKATON] = 1,
	[SPECIES_WIGLETT] = 0,
	[SPECIES_WUGTRIO] = 0,
	[SPECIES_BOMBIRDIER] = 0,
	[SPECIES_FINIZEN] = 0,
	[SPECIES_PALAFIN] = 0,
	[SPECIES_PALAFIN_2] = 0,
	[SPECIES_VAROOM] = 2,
	[SPECIES_REVAVROOM] = 0,
	[SPECIES_CYCLIZAR] = 1,
	[SPECIES_ORTHWORM] = 0,
	[SPECIES_GLIMMET] = 0,
	[SPECIES_GLIMMORA] = 0,
	[SPECIES_GREAVARD] = 0,
	[SPECIES_HOUNDSTONE] = 2,
	[SPECIES_FLAMIGO] = 1,
	[SPECIES_CETODDLE] = 0,
	[SPECIES_CETITAN] = 0,
	[SPECIES_VELUZA] = 1,
	[SPECIES_DONDOZO] = 0,
	[SPECIES_TATSUGIRI] = 0,
	[SPECIES_TATSUGIRI_2] = 0,
	[SPECIES_TATSUGIRI_3] = 0,
	[SPECIES_ANNIHILAPE] = 0,
	[SPECIES_CLODSIRE] = 0,
	[SPECIES_FARIGIRAF] = 0,
	[SPECIES_DUDUNSPRCE] = 0,
	[SPECIES_DUDUNSPRCE_2] = 0,
	[SPECIES_KINGAMBIT] = 0,
	[SPECIES_GREATTUSK] = 0,
	[SPECIES_SCREAMTAIL] = 0,
	[SPECIES_BRUTEBONET] = 1,
	[SPECIES_FLUTTRMANE] = 2,
	[SPECIES_SLITHRWING] = 1,
	[SPECIES_SNDYSHOCKS] = 0,
	[SPECIES_IRONTREADS] = 1,
	[SPECIES_IRONBUNDLE] = 0,
	[SPECIES_IRONHANDS] = 0,
	[SPECIES_IRONJUGULS] = 0,
	[SPECIES_IRONMOTH] = 3,
	[SPECIES_IRONTHORNS] = 1,
	[SPECIES_FRIGIBAX] = 0,
	[SPECIES_ARCTIBAX] = 0,
	[SPECIES_BAXCALIBUR] = 0,
	[SPECIES_GIMMIGHOUL] = 0,
	[SPECIES_GIMMIGHOUL_2] = 0,
	[SPECIES_GHOLDENGO] = 0,
	[SPECIES_WOCHIEN] = 1,
	[SPECIES_CHIENPAO] = 0,
	[SPECIES_TINGLU] = 0,
	[SPECIES_CHIYU] = 0,
	[SPECIES_ROARNGMOON] = 0,
	[SPECIES_IRONVLIANT] = 1,
	[SPECIES_KORAIDON] = 0,
	[SPECIES_MIRAIDON] = 2,
	[SPECIES_TAUROS_2] = 0,
	[SPECIES_TAUROS_3] = 0,
	[SPECIES_TAUROS_4] = 0,
	[SPECIES_WOOPER_2] = 2,
	[SPECIES_WALKNGWAKE] = 2,
	[SPECIES_IRONLEAVES] = 1,
	[SPECIES_DIPPLIN] = 1,
	[SPECIES_PTCHAGEIST] = 1,
	[SPECIES_PTCHAGEIST_2] = 1,
	[SPECIES_SINISTCHA] = 1,
	[SPECIES_SINISTCHA_2] = 1,
	[SPECIES_OKIDOGI] = 1,
	[SPECIES_MUNKIDORI] = 0,
	[SPECIES_FEZNDIPITI] = 0,
	[SPECIES_OGERPON] = 1,
	[SPECIES_OGERPON_2] = 0,
	[SPECIES_OGERPON_3] = 0,
	[SPECIES_OGERPON_4] = 0,
	[SPECIES_OGERPON_5] = 1,
	[SPECIES_OGERPON_6] = 0,
	[SPECIES_OGERPON_7] = 0,
	[SPECIES_OGERPON_8] = 0,
	[SPECIES_URSALUNA_2] = 2,
	[SPECIES_ARCHALUDON] = 0,
	[SPECIES_HYDRAPPLE] = 5,
	[SPECIES_GOUGINFIRE] = 5,
	[SPECIES_RAGINGBOLT] = 2,
	[SPECIES_IRONBOULDR] = 5,
	[SPECIES_IRONCROWN] = 3,
	[SPECIES_TERAPAGOS] = 0,
	[SPECIES_TERAPAGOS_2] = 0,
	[SPECIES_TERAPAGOS_3] = 0,
	[SPECIES_PECHARUNT] = 0,
	[SPECIES_MOTHIM_2] = 0,
	[SPECIES_MOTHIM_3] = 0,
	[SPECIES_SCATTERBUG_2] = 1,
	[SPECIES_SCATTERBUG_3] = 1,
	[SPECIES_SCATTERBUG_4] = 1,
	[SPECIES_SCATTERBUG_5] = 1,
	[SPECIES_SCATTERBUG_6] = 1,
	[SPECIES_SCATTERBUG_7] = 1,
	[SPECIES_SCATTERBUG_8] = 1,
	[SPECIES_SCATTERBUG_9] = 1,
	[SPECIES_SCATTERBUG_10] = 1,
	[SPECIES_SCATTERBUG_11] = 1,
	[SPECIES_SCATTERBUG_12] = 1,
	[SPECIES_SCATTERBUG_13] = 1,
	[SPECIES_SCATTERBUG_14] = 1,
	[SPECIES_SCATTERBUG_15] = 1,
	[SPECIES_SCATTERBUG_16] = 1,
	[SPECIES_SCATTERBUG_17] = 1,
	[SPECIES_SCATTERBUG_18] = 1,
	[SPECIES_SCATTERBUG_19] = 1,
	[SPECIES_SCATTERBUG_20] = 1,
	[SPECIES_SPEWPA_2] = 1,
	[SPECIES_SPEWPA_3] = 1,
	[SPECIES_SPEWPA_4] = 1,
	[SPECIES_SPEWPA_5] = 1,
	[SPECIES_SPEWPA_6] = 1,
	[SPECIES_SPEWPA_7] = 1,
	[SPECIES_SPEWPA_8] = 1,
	[SPECIES_SPEWPA_9] = 1,
	[SPECIES_SPEWPA_10] = 1,
	[SPECIES_SPEWPA_11] = 1,
	[SPECIES_SPEWPA_12] = 1,
	[SPECIES_SPEWPA_13] = 1,
	[SPECIES_SPEWPA_14] = 1,
	[SPECIES_SPEWPA_15] = 1,
	[SPECIES_SPEWPA_16] = 1,
	[SPECIES_SPEWPA_17] = 1,
	[SPECIES_SPEWPA_18] = 1,
	[SPECIES_SPEWPA_19] = 1,
	[SPECIES_SPEWPA_20] = 1,
	[SPECIES_RATICATE_3] = 2,
	[SPECIES_GUMSHOOS_2] = 2,
	[SPECIES_VIKAVOLT_2] = 0,
	[SPECIES_LURANTIS_2] = 1,
	[SPECIES_SALAZZLE_2] = 0,
	[SPECIES_MIMIKYU_3] = 1,
	[SPECIES_KOMMOO_2] = 2,
	[SPECIES_MAROWAK_3] = 1,
	[SPECIES_RIBOMBEE_2] = 2,
	[SPECIES_ARAQUANID_2] = 2,
	[SPECIES_TOGEDEMARU_2] = 2,
	[SPECIES_PIKACHU_16] = 2,
	[SPECIES_EEVEE_2] = 2,
	[SPECIES_VENUSAUR_3] = 0,
	[SPECIES_BLASTOISE_3] = 0,
	[SPECIES_CHARIZARD_4] = 0,
	[SPECIES_BUTTERFREE_2] = 0,
	[SPECIES_PIKACHU_17] = 2,
	[SPECIES_MEOWTH_4] = 1,
	[SPECIES_MACHAMP_2] = 0,
	[SPECIES_GENGAR_3] = 2,
	[SPECIES_KINGLER_2] = 0,
	[SPECIES_LAPRAS_2] = 2,
	[SPECIES_EEVEE_3] = 2,
	[SPECIES_SNORLAX_2] = 3,
	[SPECIES_GARBODOR_2] = 0,
	[SPECIES_MELMETAL_2] = 0,
	[SPECIES_RILLABOOM_2] = 1,
	[SPECIES_CINDERACE_2] = 0,
	[SPECIES_INTELEON_2] = 0,
	[SPECIES_CORVIKNIGH_2] = 0,
	[SPECIES_ORBEETLE_2] = 0,
	[SPECIES_DREDNAW_2] = 0,
	[SPECIES_COALOSSAL_2] = 0,
	[SPECIES_FLAPPLE_2] = 1,
	[SPECIES_APPLETUN_2] = 1,
	[SPECIES_SANDACONDA_2] = 1,
	[SPECIES_TOXTRICITY_3] = 0,
	[SPECIES_TOXTRICITY_4] = 0,
	[SPECIES_CENTISKORC_2] = 0,
	[SPECIES_HATTERENE_2] = 0,
	[SPECIES_GRIMMSNARL_2] = 0,
	[SPECIES_ALCREMIE_64] = 1,
	[SPECIES_COPPERAJAH_2] = 0,
	[SPECIES_DURALUDON_2] = 0,
	[SPECIES_URSHIFU_3] = 0,
	[SPECIES_URSHIFU_4] = 0,
	[SPECIES_MIMIKYU_4] = 1,
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
            .paletteTag = POKE_ICON_BASE_PAL_TAG + gMonIconPaletteIndices_[species],
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
    palIndex = gMonIconPaletteIndices_[species];
    if (IndexOfSpritePaletteTag(gMonIconPaletteTable[palIndex].tag) == 0xFF)
        LoadSpritePalette(&gMonIconPaletteTable[palIndex]);
}

void SafeFreeMonIconPalette_(u16 species)
{
    u8 palIndex;
    if (species > NUM_SPECIES)
        species = SPECIES_NONE;
    palIndex = gMonIconPaletteIndices_[species];
    FreeSpritePaletteByTag(gMonIconPaletteTable[palIndex].tag);
}

const u16 *GetValidMonIconPalettePtr_(u16 species)
{
    if (species > NUM_SPECIES)
        species = SPECIES_NONE;
    return gMonIconPaletteTable[gMonIconPaletteIndices_[species]].data;
}

u8 GetValidMonIconPalIndex_(u16 species)
{
    if (species > NUM_SPECIES)
        species = SPECIES_NONE;
    return gMonIconPaletteIndices_[species];
}