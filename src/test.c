#include "../include/gba/types.h"
#include "../include/card.h"

const u8 gCardGraphics[] = INCBIN_U8(
	"graphics/Resize/gCardGraphicsNone.6bpp",
	"graphics/Resize/gCardGraphics7ColoredFish.6bpp",
	"graphics/Resize/gCardGraphics7Completed.6bpp",
	"graphics/Resize/gCardGraphicsAcidCrawler.6bpp",
	"graphics/Resize/gCardGraphicsAcidTrapHole.6bpp",
	"graphics/Resize/gCardGraphicsAirEater.6bpp",
	"graphics/Resize/gCardGraphicsAirMarmotofNefariousness.6bpp",
	"graphics/Resize/gCardGraphicsAkakieisu.6bpp",
	"graphics/Resize/gCardGraphicsAkihiron.6bpp",
	"graphics/Resize/gCardGraphicsAlligatorsSword.6bpp",
	"graphics/Resize/gCardGraphicsAlligatorsSwordDragon.6bpp",
	"graphics/Resize/gCardGraphicsAlphaTheMagnetWarrior.6bpp",
	"graphics/Resize/gCardGraphicsAmazonoftheSeas.6bpp",
	"graphics/Resize/gCardGraphicsAmeba.6bpp",
	"graphics/Resize/gCardGraphicsAmphibiousBugroth.6bpp",
	"graphics/Resize/gCardGraphicsAncientBrain.6bpp",
	"graphics/Resize/gCardGraphicsAncientElf.6bpp",
	"graphics/Resize/gCardGraphicsAncientJar.6bpp",
	"graphics/Resize/gCardGraphicsAncientLizardWarrior.6bpp",
	"graphics/Resize/gCardGraphicsAncientOneoftheDeepForest.6bpp",
	"graphics/Resize/gCardGraphicsAncientTelescope.6bpp",
	"graphics/Resize/gCardGraphicsAncientTool.6bpp",
	"graphics/Resize/gCardGraphicsAnsatsu.6bpp",
	"graphics/Resize/gCardGraphicsAnthrosaurus.6bpp",
	"graphics/Resize/gCardGraphicsAntiRaigeki.6bpp",
	"graphics/Resize/gCardGraphicsAntiMagicFragrance.6bpp",
	"graphics/Resize/gCardGraphicsAppropriate.6bpp",
	"graphics/Resize/gCardGraphicsAquaChorus.6bpp",
	"graphics/Resize/gCardGraphicsAquaDragon.6bpp",
	"graphics/Resize/gCardGraphicsAquaMadoor.6bpp",
	"graphics/Resize/gCardGraphicsArlownay.6bpp",
	"graphics/Resize/gCardGraphicsArmaKnight.6bpp",
	"graphics/Resize/gCardGraphicsArmaill.6bpp",
	"graphics/Resize/gCardGraphicsArmedNinja.6bpp",
	"graphics/Resize/gCardGraphicsArmoredGlass.6bpp",
	"graphics/Resize/gCardGraphicsArmoredLizard.6bpp",
	"graphics/Resize/gCardGraphicsArmoredRat.6bpp",
	"graphics/Resize/gCardGraphicsArmoredStarfish.6bpp",
	"graphics/Resize/gCardGraphicsArmoredZombie.6bpp",
	"graphics/Resize/gCardGraphicsAxeofDespair.6bpp",
	"graphics/Resize/gCardGraphicsAxeRaider.6bpp",
	"graphics/Resize/gCardGraphicsBDragonJungleKing.6bpp",
	"graphics/Resize/gCardGraphicsBSkullDragon.6bpp",
	"graphics/Resize/gCardGraphicsBabyDragon.6bpp",
	"graphics/Resize/gCardGraphicsBackupSoldier.6bpp",
	"graphics/Resize/gCardGraphicsBanisheroftheLight.6bpp",
	"graphics/Resize/gCardGraphicsBarox.6bpp",
	"graphics/Resize/gCardGraphicsBarrelDragon.6bpp",
	"graphics/Resize/gCardGraphicsBarrelLily.6bpp",
	"graphics/Resize/gCardGraphicsBarrelRock.6bpp",
	"graphics/Resize/gCardGraphicsBasicInsect.6bpp",
	"graphics/Resize/gCardGraphicsBattleOx.6bpp",
	"graphics/Resize/gCardGraphicsBattleSteer.6bpp",
	"graphics/Resize/gCardGraphicsBattleWarrior.6bpp",
	"graphics/Resize/gCardGraphicsBeanSoldier.6bpp",
	"graphics/Resize/gCardGraphicsBeastFangs.6bpp",
	"graphics/Resize/gCardGraphicsBeastkingoftheSwamps.6bpp",
	"graphics/Resize/gCardGraphicsBeastlyMirrorRitual.6bpp",
	"graphics/Resize/gCardGraphicsBeautifulHeadhuntress.6bpp",
	"graphics/Resize/gCardGraphicsBeaverWarrior.6bpp",
	"graphics/Resize/gCardGraphicsBehegon.6bpp",
	"graphics/Resize/gCardGraphicsBellofDestruction.6bpp",
	"graphics/Resize/gCardGraphicsBetaTheMagnetWarrior.6bpp",
	"graphics/Resize/gCardGraphicsBickuribox.6bpp",
	"graphics/Resize/gCardGraphicsBigEye.6bpp",
	"graphics/Resize/gCardGraphicsBigInsect.6bpp",
	"graphics/Resize/gCardGraphicsBigShieldGardna.6bpp",
	"graphics/Resize/gCardGraphicsBindingChain.6bpp",
	"graphics/Resize/gCardGraphicsBioPlant.6bpp",
	"graphics/Resize/gCardGraphicsBlackIllusionRitual.6bpp",
	"graphics/Resize/gCardGraphicsBlackLusterRitual.6bpp",
	"graphics/Resize/gCardGraphicsBlackLusterSoldier.6bpp",
	"graphics/Resize/gCardGraphicsBlackPendant.6bpp",
	"graphics/Resize/gCardGraphicsBlacklandFireDragon.6bpp",
	"graphics/Resize/gCardGraphicsBladefly.6bpp",
	"graphics/Resize/gCardGraphicsBlastJuggler.6bpp",
	"graphics/Resize/gCardGraphicsBlastSphere.6bpp",
	"graphics/Resize/gCardGraphicsBlockAttack.6bpp",
	"graphics/Resize/gCardGraphicsBlueMedicine.6bpp",
	"graphics/Resize/gCardGraphicsBlueEyedSilverZombie.6bpp",
	"graphics/Resize/gCardGraphicsBlueEyesToonDragon.6bpp",
	"graphics/Resize/gCardGraphicsBlueEyesUltimateDragon.6bpp",
	"graphics/Resize/gCardGraphicsBlueEyesWhiteDragon.6bpp",
	"graphics/Resize/gCardGraphicsBlueEyesWhiteDragon2.6bpp",
	"graphics/Resize/gCardGraphicsBlueWingedCrown.6bpp",
	"graphics/Resize/gCardGraphicsBoarSoldier.6bpp",
	"graphics/Resize/gCardGraphicsBoltEscargot.6bpp",
	"graphics/Resize/gCardGraphicsBookofSecretArts.6bpp",
	"graphics/Resize/gCardGraphicsBottomDweller.6bpp",
	"graphics/Resize/gCardGraphicsBracchioraidus.6bpp",
	"graphics/Resize/gCardGraphicsBreathofLight.6bpp",
	"graphics/Resize/gCardGraphicsBrightCastle.6bpp",
	"graphics/Resize/gCardGraphicsBurglar.6bpp",
	"graphics/Resize/gCardGraphicsBurningSpear.6bpp",
	"graphics/Resize/gCardGraphicsBusterBlader.6bpp",
	"graphics/Resize/gCardGraphicsCalloftheDark.6bpp",
	"graphics/Resize/gCardGraphicsCalloftheGrave.6bpp",
	"graphics/Resize/gCardGraphicsCallOfTheHaunted.6bpp",
	"graphics/Resize/gCardGraphicsCandleofFate.6bpp",
	"graphics/Resize/gCardGraphicsCannonSoldier.6bpp",
	"graphics/Resize/gCardGraphicsCastleofDarkIllusions.6bpp",
	"graphics/Resize/gCardGraphicsCastleWalls.6bpp",
	"graphics/Resize/gCardGraphicsCatapultTurtle.6bpp",
	"graphics/Resize/gCardGraphicsCeasefire.6bpp",
	"graphics/Resize/gCardGraphicsCelticGuardian.6bpp",
	"graphics/Resize/gCardGraphicsCelticGuardian2.6bpp",
	"graphics/Resize/gCardGraphicsCeremonialBell.6bpp",
	"graphics/Resize/gCardGraphicsChainDestruction.6bpp",
	"graphics/Resize/gCardGraphicsChainEnergy.6bpp",
	"graphics/Resize/gCardGraphicsChakra.6bpp",
	"graphics/Resize/gCardGraphicsChangeofHeart.6bpp",
	"graphics/Resize/gCardGraphicsCharubintheFireKnight.6bpp",
	"graphics/Resize/gCardGraphicsChorusofSanctuary.6bpp",
	"graphics/Resize/gCardGraphicsClawReacher.6bpp",
	"graphics/Resize/gCardGraphicsClownZombie.6bpp",
	"graphics/Resize/gCardGraphicsCockroachKnight.6bpp",
	"graphics/Resize/gCardGraphicsCocoonofEvolution.6bpp",
	"graphics/Resize/gCardGraphicsCommencementDance.6bpp",
	"graphics/Resize/gCardGraphicsConfiscation.6bpp",
	"graphics/Resize/gCardGraphicsCosmoQueen.6bpp",
	"graphics/Resize/gCardGraphicsCrabTurtle.6bpp",
	"graphics/Resize/gCardGraphicsCrassClown.6bpp",
	"graphics/Resize/gCardGraphicsCrawlingDragon.6bpp",
	"graphics/Resize/gCardGraphicsCrawlingDragon2.6bpp",
	"graphics/Resize/gCardGraphicsCrazyFish.6bpp",
	"graphics/Resize/gCardGraphicsCrimsonSunbird.6bpp",
	"graphics/Resize/gCardGraphicsCrowGoblin.6bpp",
	"graphics/Resize/gCardGraphicsCrushCard.6bpp",
	"graphics/Resize/gCardGraphicsCurseofDragon.6bpp",
	"graphics/Resize/gCardGraphicsCurseofFiend.6bpp",
	"graphics/Resize/gCardGraphicsCurtainoftheDarkOnes.6bpp",
	"graphics/Resize/gCardGraphicsCyberCommander.6bpp",
	"graphics/Resize/gCardGraphicsCyberFalcon.6bpp",
	"graphics/Resize/gCardGraphicsCyberJar.6bpp",
	"graphics/Resize/gCardGraphicsCyberSaurus.6bpp",
	"graphics/Resize/gCardGraphicsCyberShield.6bpp",
	"graphics/Resize/gCardGraphicsCyberSoldier.6bpp",
	"graphics/Resize/gCardGraphicsCyberStein.6bpp",
	"graphics/Resize/gCardGraphicsCyberTechAlligator.6bpp",
	"graphics/Resize/gCardGraphicsDHuman.6bpp",
	"graphics/Resize/gCardGraphicsDancingElf.6bpp",
	"graphics/Resize/gCardGraphicsDarkArtist.6bpp",
	"graphics/Resize/gCardGraphicsDarkAssailant.6bpp",
	"graphics/Resize/gCardGraphicsDarkChimera.6bpp",
	"graphics/Resize/gCardGraphicsDarkElf.6bpp",
	"graphics/Resize/gCardGraphicsDarkEnergy.6bpp",
	"graphics/Resize/gCardGraphicsDarkGray.6bpp",
	"graphics/Resize/gCardGraphicsDarkHole.6bpp",
	"graphics/Resize/gCardGraphicsDarkKingoftheAbyss.6bpp",
	"graphics/Resize/gCardGraphicsDarkMagicRitual.6bpp",
	"graphics/Resize/gCardGraphicsDarkMagician.6bpp",
	"graphics/Resize/gCardGraphicsDarkMagician2.6bpp",
	"graphics/Resize/gCardGraphicsDarkMagicianGirl.6bpp",
	"graphics/Resize/gCardGraphicsDarkRabbit.6bpp",
	"graphics/Resize/gCardGraphicsDarkSage.6bpp",
	"graphics/Resize/gCardGraphicsDarkShade.6bpp",
	"graphics/Resize/gCardGraphicsDarkWitch.6bpp",
	"graphics/Resize/gCardGraphicsDarkZebra.6bpp",
	"graphics/Resize/gCardGraphicsDarkEyesIllusionist.6bpp",
	"graphics/Resize/gCardGraphicsDarkfireDragon.6bpp",
	"graphics/Resize/gCardGraphicsDarkfireSoldier1.6bpp",
	"graphics/Resize/gCardGraphicsDarkfireSoldier2.6bpp",
	"graphics/Resize/gCardGraphicsDarknessApproaches.6bpp",
	"graphics/Resize/gCardGraphicsDarkPiercingLight.6bpp",
	"graphics/Resize/gCardGraphicsDarkworldThorns.6bpp",
	"graphics/Resize/gCardGraphicsDeepseaShark.6bpp",
	"graphics/Resize/gCardGraphicsDelinquentDuo.6bpp",
	"graphics/Resize/gCardGraphicsDeSpell.6bpp",
	"graphics/Resize/gCardGraphicsDestroyerGolem.6bpp",
	"graphics/Resize/gCardGraphicsDianKetotheCureMaster.6bpp",
	"graphics/Resize/gCardGraphicsDiceArmadillo.6bpp",
	"graphics/Resize/gCardGraphicsDimensionalWarrior.6bpp",
	"graphics/Resize/gCardGraphicsDiskMagician.6bpp",
	"graphics/Resize/gCardGraphicsDissolverock.6bpp",
	"graphics/Resize/gCardGraphicsDNASurgery.6bpp",
	"graphics/Resize/gCardGraphicsDokuroizotheGrimReaper.6bpp",
	"graphics/Resize/gCardGraphicsDokurorider.6bpp",
	"graphics/Resize/gCardGraphicsDomaTheAngelofSilence.6bpp",
	"graphics/Resize/gCardGraphicsDoron.6bpp",
	"graphics/Resize/gCardGraphicsDorover.6bpp",
	"graphics/Resize/gCardGraphicsDragonCaptureJar.6bpp",
	"graphics/Resize/gCardGraphicsDragonPiper.6bpp",
	"graphics/Resize/gCardGraphicsDragonSeeker.6bpp",
	"graphics/Resize/gCardGraphicsDragonTreasure.6bpp",
	"graphics/Resize/gCardGraphicsDragonZombie.6bpp",
	"graphics/Resize/gCardGraphicsDragonesstheWickedKnight.6bpp",
	"graphics/Resize/gCardGraphicsDreamClown.6bpp",
	"graphics/Resize/gCardGraphicsDrivingSnow.6bpp",
	"graphics/Resize/gCardGraphicsDroolingLizard.6bpp",
	"graphics/Resize/gCardGraphicsDryad.6bpp",
	"graphics/Resize/gCardGraphicsDunamesDarkWitch.6bpp",
	"graphics/Resize/gCardGraphicsDungeonWorm.6bpp",
	"graphics/Resize/gCardGraphicsDustTornado.6bpp",
	"graphics/Resize/gCardGraphicsEarthshaker.6bpp",
	"graphics/Resize/gCardGraphicsEatgaboon.6bpp",
	"graphics/Resize/gCardGraphicsEldeen.6bpp",
	"graphics/Resize/gCardGraphicsElectricLizard.6bpp",
	"graphics/Resize/gCardGraphicsElectricSnake.6bpp",
	"graphics/Resize/gCardGraphicsElectroWhip.6bpp",
	"graphics/Resize/gCardGraphicsElegantEgotist.6bpp",
	"graphics/Resize/gCardGraphicsElfsLight.6bpp",
	"graphics/Resize/gCardGraphicsEmpressJudge.6bpp",
	"graphics/Resize/gCardGraphicsEnchantedJavelin.6bpp",
	"graphics/Resize/gCardGraphicsEnchantingMermaid.6bpp",
	"graphics/Resize/gCardGraphicsEradicatingAerosol.6bpp",
	"graphics/Resize/gCardGraphicsEternalDraught.6bpp",
	"graphics/Resize/gCardGraphicsEternalRest.6bpp",
	"graphics/Resize/gCardGraphicsExchange.6bpp",
	"graphics/Resize/gCardGraphicsExileoftheWicked.6bpp",
	"graphics/Resize/gCardGraphicsExodiatheForbiddenOne.6bpp",
	"graphics/Resize/gCardGraphicsEyearmor.6bpp",
	"graphics/Resize/gCardGraphicsFairyDragon.6bpp",
	"graphics/Resize/gCardGraphicsFairysHandMirror.6bpp",
	"graphics/Resize/gCardGraphicsFairywitch.6bpp",
	"graphics/Resize/gCardGraphicsFaithBird.6bpp",
	"graphics/Resize/gCardGraphicsFakeTrap.6bpp",
	"graphics/Resize/gCardGraphicsFeralImp.6bpp",
	"graphics/Resize/gCardGraphicsFiendKraken.6bpp",
	"graphics/Resize/gCardGraphicsFiendReflection1.6bpp",
	"graphics/Resize/gCardGraphicsFiendReflection2.6bpp",
	"graphics/Resize/gCardGraphicsFiendSword.6bpp",
	"graphics/Resize/gCardGraphicsFiendsHand.6bpp",
	"graphics/Resize/gCardGraphicsFiendsMirror.6bpp",
	"graphics/Resize/gCardGraphicsFinalDestiny.6bpp",
	"graphics/Resize/gCardGraphicsFinalFlame.6bpp",
	"graphics/Resize/gCardGraphicsFireKraken.6bpp",
	"graphics/Resize/gCardGraphicsFireReaper.6bpp",
	"graphics/Resize/gCardGraphicsFiregrass.6bpp",
	"graphics/Resize/gCardGraphicsFirewingPegasus.6bpp",
	"graphics/Resize/gCardGraphicsFireyarou.6bpp",
	"graphics/Resize/gCardGraphicsFissure.6bpp",
	"graphics/Resize/gCardGraphicsFlameCerebrus.6bpp",
	"graphics/Resize/gCardGraphicsFlameChampion.6bpp",
	"graphics/Resize/gCardGraphicsFlameGhost.6bpp",
	"graphics/Resize/gCardGraphicsFlameManipulator.6bpp",
	"graphics/Resize/gCardGraphicsFlameSwordsman.6bpp",
	"graphics/Resize/gCardGraphicsFlameSwordsman2.6bpp",
	"graphics/Resize/gCardGraphicsFlameViper.6bpp",
	"graphics/Resize/gCardGraphicsFlashAssailant.6bpp",
	"graphics/Resize/gCardGraphicsFlowerWolf.6bpp",
	"graphics/Resize/gCardGraphicsFlyingKamakiri1.6bpp",
	"graphics/Resize/gCardGraphicsFlyingKamakiri2.6bpp",
	"graphics/Resize/gCardGraphicsFollowWind.6bpp",
	"graphics/Resize/gCardGraphicsForcedRequisition.6bpp",
	"graphics/Resize/gCardGraphicsForest.6bpp",
	"graphics/Resize/gCardGraphicsFortressWhale.6bpp",
	"graphics/Resize/gCardGraphicsFortressWhalesOath.6bpp",
	"graphics/Resize/gCardGraphicsFrenziedPanda.6bpp",
	"graphics/Resize/gCardGraphicsFusionSage.6bpp",
	"graphics/Resize/gCardGraphicsFusionist.6bpp",
	"graphics/Resize/gCardGraphicsGaiaPower.6bpp",
	"graphics/Resize/gCardGraphicsGaiatheDragonChampion.6bpp",
	"graphics/Resize/gCardGraphicsGaiaTheFierceKnight.6bpp",
	"graphics/Resize/gCardGraphicsGaiaTheFierceKnight2.6bpp",
	"graphics/Resize/gCardGraphicsGaleDogra.6bpp",
	"graphics/Resize/gCardGraphicsGammaTheMagnetWarrior.6bpp",
	"graphics/Resize/gCardGraphicsGanigumo.6bpp",
	"graphics/Resize/gCardGraphicsGarmaSword.6bpp",
	"graphics/Resize/gCardGraphicsGarmaSwordOath.6bpp",
	"graphics/Resize/gCardGraphicsGarneciaElefantis.6bpp",
	"graphics/Resize/gCardGraphicsGaroozis.6bpp",
	"graphics/Resize/gCardGraphicsGarvas.6bpp",
	"graphics/Resize/gCardGraphicsGateGuardian.6bpp",
	"graphics/Resize/gCardGraphicsGatekeeper.6bpp",
	"graphics/Resize/gCardGraphicsGazelletheKingofMythicalBeasts.6bpp",
	"graphics/Resize/gCardGraphicsGeminiElf.6bpp",
	"graphics/Resize/gCardGraphicsGenin.6bpp",
	"graphics/Resize/gCardGraphicsGermInfection.6bpp",
	"graphics/Resize/gCardGraphicsGhoulwithanAppetite.6bpp",
	"graphics/Resize/gCardGraphicsGiantFlea.6bpp",
	"graphics/Resize/gCardGraphicsGiantGerm.6bpp",
	"graphics/Resize/gCardGraphicsGiantMechSoldier.6bpp",
	"graphics/Resize/gCardGraphicsGiantRat.6bpp",
	"graphics/Resize/gCardGraphicsGiantRedSeasnake.6bpp",
	"graphics/Resize/gCardGraphicsGiantScorpionoftheTundra.6bpp",
	"graphics/Resize/gCardGraphicsGiantSoldierofStone.6bpp",
	"graphics/Resize/gCardGraphicsGiantTrunade.6bpp",
	"graphics/Resize/gCardGraphicsGiantTurtleWhoFeedsonFlames.6bpp",
	"graphics/Resize/gCardGraphicsGiftofTheMysticalElf.6bpp",
	"graphics/Resize/gCardGraphicsGiganto.6bpp",
	"graphics/Resize/gCardGraphicsGigatechWolf.6bpp",
	"graphics/Resize/gCardGraphicsGiltiatheDKnight.6bpp",
	"graphics/Resize/gCardGraphicsGoblinFan.6bpp",
	"graphics/Resize/gCardGraphicsGoblinsSecretRemedy.6bpp",
	"graphics/Resize/gCardGraphicsGoddessofWhim.6bpp",
	"graphics/Resize/gCardGraphicsGoddesswiththeThirdEye.6bpp",
	"graphics/Resize/gCardGraphicsGokibore.6bpp",
	"graphics/Resize/gCardGraphicsGracefulCharity.6bpp",
	"graphics/Resize/gCardGraphicsGracefulDice.6bpp",
	"graphics/Resize/gCardGraphicsGrappler.6bpp",
	"graphics/Resize/gCardGraphicsGravediggerGhoul.6bpp",
	"graphics/Resize/gCardGraphicsGravekeepersServant.6bpp",
	"graphics/Resize/gCardGraphicsGraverobber.6bpp",
	"graphics/Resize/gCardGraphicsGraveyardandtheHandofInvitation.6bpp",
	"graphics/Resize/gCardGraphicsGreatBill.6bpp",
	"graphics/Resize/gCardGraphicsGreatMammothofGoldfine.6bpp",
	"graphics/Resize/gCardGraphicsGreatMoth.6bpp",
	"graphics/Resize/gCardGraphicsGreatWhite.6bpp",
	"graphics/Resize/gCardGraphicsGreenPhantomKing.6bpp",
	"graphics/Resize/gCardGraphicsGreenkappa.6bpp",
	"graphics/Resize/gCardGraphicsGriffore.6bpp",
	"graphics/Resize/gCardGraphicsGriggle.6bpp",
	"graphics/Resize/gCardGraphicsGroundAttackerBugroth.6bpp",
	"graphics/Resize/gCardGraphicsGruesomeGoo.6bpp",
	"graphics/Resize/gCardGraphicsGryphonWing.6bpp",
	"graphics/Resize/gCardGraphicsGuardianoftheLabyrinth.6bpp",
	"graphics/Resize/gCardGraphicsGuardianoftheSea.6bpp",
	"graphics/Resize/gCardGraphicsGuardianoftheThroneRoom.6bpp",
	"graphics/Resize/gCardGraphicsGust.6bpp",
	"graphics/Resize/gCardGraphicsGustFan.6bpp",
	"graphics/Resize/gCardGraphicsGyakutennoMegami.6bpp",
	"graphics/Resize/gCardGraphicsHamburgerRecipe.6bpp",
	"graphics/Resize/gCardGraphicsHaneHane.6bpp",
	"graphics/Resize/gCardGraphicsHaniwa.6bpp",
	"graphics/Resize/gCardGraphicsHappyLover.6bpp",
	"graphics/Resize/gCardGraphicsHardArmor.6bpp",
	"graphics/Resize/gCardGraphicsHarpieLady.6bpp",
	"graphics/Resize/gCardGraphicsHarpieLadySisters.6bpp",
	"graphics/Resize/gCardGraphicsHarpiesBrother.6bpp",
	"graphics/Resize/gCardGraphicsHarpiesFeatherDuster.6bpp",
	"graphics/Resize/gCardGraphicsHarpiesPetDragon.6bpp",
	"graphics/Resize/gCardGraphicsHeavyStorm.6bpp",
	"graphics/Resize/gCardGraphicsHerculesBeetle.6bpp",
	"graphics/Resize/gCardGraphicsHerooftheEast.6bpp",
	"graphics/Resize/gCardGraphicsHibikime.6bpp",
	"graphics/Resize/gCardGraphicsHighTideGyojin.6bpp",
	"graphics/Resize/gCardGraphicsHinotama.6bpp",
	"graphics/Resize/gCardGraphicsHinotamaSoul.6bpp",
	"graphics/Resize/gCardGraphicsHirosShadowScout.6bpp",
	"graphics/Resize/gCardGraphicsHitodenchak.6bpp",
	"graphics/Resize/gCardGraphicsHitotsuMeGiant.6bpp",
	"graphics/Resize/gCardGraphicsHolograh.6bpp",
	"graphics/Resize/gCardGraphicsHornImp.6bpp",
	"graphics/Resize/gCardGraphicsHornofHeaven.6bpp",
	"graphics/Resize/gCardGraphicsHornofLight.6bpp",
	"graphics/Resize/gCardGraphicsHornoftheUnicorn.6bpp",
	"graphics/Resize/gCardGraphicsHoshiningen.6bpp",
	"graphics/Resize/gCardGraphicsHourglassofCourage.6bpp",
	"graphics/Resize/gCardGraphicsHourglassofLife.6bpp",
	"graphics/Resize/gCardGraphicsHouseofAdhesiveTape.6bpp",
	"graphics/Resize/gCardGraphicsHungryBurger.6bpp",
	"graphics/Resize/gCardGraphicsHunterSpider.6bpp",
	"graphics/Resize/gCardGraphicsHyo.6bpp",
	"graphics/Resize/gCardGraphicsHyosube.6bpp",
	"graphics/Resize/gCardGraphicsHyozanryu.6bpp",
	"graphics/Resize/gCardGraphicsIceWater.6bpp",
	"graphics/Resize/gCardGraphicsIllWitch.6bpp",
	"graphics/Resize/gCardGraphicsIllusionistFacelessMage.6bpp",
	"graphics/Resize/gCardGraphicsImperialOrder.6bpp",
	"graphics/Resize/gCardGraphicsInsectArmorwithLaserCannon.6bpp",
	"graphics/Resize/gCardGraphicsInsectQueen.6bpp",
	"graphics/Resize/gCardGraphicsInsectSoldiersoftheSky.6bpp",
	"graphics/Resize/gCardGraphicsInspection.6bpp",
	"graphics/Resize/gCardGraphicsInvaderfromAnotherDimension.6bpp",
	"graphics/Resize/gCardGraphicsInvaderoftheThrone.6bpp",
	"graphics/Resize/gCardGraphicsInvigoration.6bpp",
	"graphics/Resize/gCardGraphicsJavelinBeetle.6bpp",
	"graphics/Resize/gCardGraphicsJavelinBeetlePact.6bpp",
	"graphics/Resize/gCardGraphicsJellyfish.6bpp",
	"graphics/Resize/gCardGraphicsJigenBakudan.6bpp",
	"graphics/Resize/gCardGraphicsJinzo.6bpp",
	"graphics/Resize/gCardGraphicsJinzo7.6bpp",
	"graphics/Resize/gCardGraphicsJiraiGumo.6bpp",
	"graphics/Resize/gCardGraphicsJudgeMan.6bpp",
	"graphics/Resize/gCardGraphicsJustDesserts.6bpp",
	"graphics/Resize/gCardGraphicsKagemushaoftheBlueFlame.6bpp",
	"graphics/Resize/gCardGraphicsKageningen.6bpp",
	"graphics/Resize/gCardGraphicsKairyuShin.6bpp",
	"graphics/Resize/gCardGraphicsKaiserDragon.6bpp",
	"graphics/Resize/gCardGraphicsKamakiriman.6bpp",
	"graphics/Resize/gCardGraphicsKaminariAttack.6bpp",
	"graphics/Resize/gCardGraphicsKaminarikozou.6bpp",
	"graphics/Resize/gCardGraphicsKamionwizard.6bpp",
	"graphics/Resize/gCardGraphicsKanantheSwordmistress.6bpp",
	"graphics/Resize/gCardGraphicsKanikabuto.6bpp",
	"graphics/Resize/gCardGraphicsKarateMan.6bpp",
	"graphics/Resize/gCardGraphicsKarbonalaWarrior.6bpp",
	"graphics/Resize/gCardGraphicsKattapillar.6bpp",
	"graphics/Resize/gCardGraphicsKazejin.6bpp",
	"graphics/Resize/gCardGraphicsKeyMace2.6bpp",
	"graphics/Resize/gCardGraphicsKillerNeedle.6bpp",
	"graphics/Resize/gCardGraphicsKingFog.6bpp",
	"graphics/Resize/gCardGraphicsKingofYamimakai.6bpp",
	"graphics/Resize/gCardGraphicsKiseitai.6bpp",
	"graphics/Resize/gCardGraphicsKojikocy.6bpp",
	"graphics/Resize/gCardGraphicsKotodama.6bpp",
	"graphics/Resize/gCardGraphicsKoumoriDragon.6bpp",
	"graphics/Resize/gCardGraphicsKrokodilus.6bpp",
	"graphics/Resize/gCardGraphicsKumootoko.6bpp",
	"graphics/Resize/gCardGraphicsKunaiwithChain.6bpp",
	"graphics/Resize/gCardGraphicsKurama.6bpp",
	"graphics/Resize/gCardGraphicsKuriboh.6bpp",
	"graphics/Resize/gCardGraphicsKuwagataa.6bpp",
	"graphics/Resize/gCardGraphicsKwagarHercules.6bpp",
	"graphics/Resize/gCardGraphicsLaJinntheMysticalGenieoftheLamp.6bpp",
	"graphics/Resize/gCardGraphicsLabyrinthTank.6bpp",
	"graphics/Resize/gCardGraphicsLabyrinthWall.6bpp",
	"graphics/Resize/gCardGraphicsLadyofFaith.6bpp",
	"graphics/Resize/gCardGraphicsLaLaLioon.6bpp",
	"graphics/Resize/gCardGraphicsLarvaeMoth.6bpp",
	"graphics/Resize/gCardGraphicsLarvas.6bpp",
	"graphics/Resize/gCardGraphicsLaserCannonArmor.6bpp",
	"graphics/Resize/gCardGraphicsLastDayofWitch.6bpp",
	"graphics/Resize/gCardGraphicsLastWill.6bpp",
	"graphics/Resize/gCardGraphicsLaughingFlower.6bpp",
	"graphics/Resize/gCardGraphicsLauncherSpider.6bpp",
	"graphics/Resize/gCardGraphicsLauncherSpider2.6bpp",
	"graphics/Resize/gCardGraphicsLavaBattleguard.6bpp",
	"graphics/Resize/gCardGraphicsLeftArmoftheForbiddenOne.6bpp",
	"graphics/Resize/gCardGraphicsLeftLegoftheForbiddenOne.6bpp",
	"graphics/Resize/gCardGraphicsLegendarySword.6bpp",
	"graphics/Resize/gCardGraphicsLeghul.6bpp",
	"graphics/Resize/gCardGraphicsLeogun.6bpp",
	"graphics/Resize/gCardGraphicsLesserDragon.6bpp",
	"graphics/Resize/gCardGraphicsLightofIntervention.6bpp",
	"graphics/Resize/gCardGraphicsLightforceSword.6bpp",
	"graphics/Resize/gCardGraphicsLiquidBeast.6bpp",
	"graphics/Resize/gCardGraphicsLittleChimera.6bpp",
	"graphics/Resize/gCardGraphicsLittleD.6bpp",
	"graphics/Resize/gCardGraphicsLordofD.6bpp",
	"graphics/Resize/gCardGraphicsLordoftheLamp.6bpp",
	"graphics/Resize/gCardGraphicsLordofZemia.6bpp",
	"graphics/Resize/gCardGraphicsLuminousSpark.6bpp",
	"graphics/Resize/gCardGraphicsLunarQueenElzaim.6bpp",
	"graphics/Resize/gCardGraphicsMabarrel.6bpp",
	"graphics/Resize/gCardGraphicsMachineConversionFactory.6bpp",
	"graphics/Resize/gCardGraphicsMachineKing.6bpp",
	"graphics/Resize/gCardGraphicsMagicJammer.6bpp",
	"graphics/Resize/gCardGraphicsMagicThorn.6bpp",
	"graphics/Resize/gCardGraphicsMagicalGhost.6bpp",
	"graphics/Resize/gCardGraphicsMagicalHats.6bpp",
	"graphics/Resize/gCardGraphicsMagicalLabyrinth.6bpp",
	"graphics/Resize/gCardGraphicsMagicArmShield.6bpp",
	"graphics/Resize/gCardGraphicsMagicianofBlackChaos.6bpp",
	"graphics/Resize/gCardGraphicsMagicianofFaith.6bpp",
	"graphics/Resize/gCardGraphicsMahaVailo.6bpp",
	"graphics/Resize/gCardGraphicsMaidenoftheMoonlight.6bpp",
	"graphics/Resize/gCardGraphicsMajorRiot.6bpp",
	"graphics/Resize/gCardGraphicsMalevolentNuzzler.6bpp",
	"graphics/Resize/gCardGraphicsMammothGraveyard.6bpp",
	"graphics/Resize/gCardGraphicsManEater.6bpp",
	"graphics/Resize/gCardGraphicsManEaterBug.6bpp",
	"graphics/Resize/gCardGraphicsManeatingBlackShark.6bpp",
	"graphics/Resize/gCardGraphicsManEatingPlant.6bpp",
	"graphics/Resize/gCardGraphicsManEatingTreasureChest.6bpp",
	"graphics/Resize/gCardGraphicsMangaRyuRan.6bpp",
	"graphics/Resize/gCardGraphicsMarineBeast.6bpp",
	"graphics/Resize/gCardGraphicsMasakitheLegendarySwordsman.6bpp",
	"graphics/Resize/gCardGraphicsMaskofDarkness.6bpp",
	"graphics/Resize/gCardGraphicsMaskedSorcerer.6bpp",
	"graphics/Resize/gCardGraphicsMasterExpert.6bpp",
	"graphics/Resize/gCardGraphicsMavelus.6bpp",
	"graphics/Resize/gCardGraphicsMechanicalSnail.6bpp",
	"graphics/Resize/gCardGraphicsMechanicalSpider.6bpp",
	"graphics/Resize/gCardGraphicsMechanicalchaser.6bpp",
	"graphics/Resize/gCardGraphicsMedaBat.6bpp",
	"graphics/Resize/gCardGraphicsMegaThunderball.6bpp",
	"graphics/Resize/gCardGraphicsMegamorph.6bpp",
	"graphics/Resize/gCardGraphicsMegazowler.6bpp",
	"graphics/Resize/gCardGraphicsMeotoko.6bpp",
	"graphics/Resize/gCardGraphicsMesmericControl.6bpp",
	"graphics/Resize/gCardGraphicsMessengerofPeace.6bpp",
	"graphics/Resize/gCardGraphicsMetalDetector.6bpp",
	"graphics/Resize/gCardGraphicsMetalDragon.6bpp",
	"graphics/Resize/gCardGraphicsMetalFish.6bpp",
	"graphics/Resize/gCardGraphicsMetalGuardian.6bpp",
	"graphics/Resize/gCardGraphicsMetalmorph.6bpp",
	"graphics/Resize/gCardGraphicsMetalzoa.6bpp",
	"graphics/Resize/gCardGraphicsMeteorBDragon.6bpp",
	"graphics/Resize/gCardGraphicsMeteorDragon.6bpp",
	"graphics/Resize/gCardGraphicsMikazukinoyaiba.6bpp",
	"graphics/Resize/gCardGraphicsMillenniumGolem.6bpp",
	"graphics/Resize/gCardGraphicsMillenniumShield.6bpp",
	"graphics/Resize/gCardGraphicsMilusRadiant.6bpp",
	"graphics/Resize/gCardGraphicsMinar.6bpp",
	"graphics/Resize/gCardGraphicsMinomushiWarrior.6bpp",
	"graphics/Resize/gCardGraphicsMirrorForce.6bpp",
	"graphics/Resize/gCardGraphicsMirrorWall.6bpp",
	"graphics/Resize/gCardGraphicsMisairuzame.6bpp",
	"graphics/Resize/gCardGraphicsMoltenDestruction.6bpp",
	"graphics/Resize/gCardGraphicsMonsterEgg.6bpp",
	"graphics/Resize/gCardGraphicsMonsterEye.6bpp",
	"graphics/Resize/gCardGraphicsMonsterReborn.6bpp",
	"graphics/Resize/gCardGraphicsMonsterTamer.6bpp",
	"graphics/Resize/gCardGraphicsMonstrousBird.6bpp",
	"graphics/Resize/gCardGraphicsMoonEnvoy.6bpp",
	"graphics/Resize/gCardGraphicsMooyanCurry.6bpp",
	"graphics/Resize/gCardGraphicsMorinphen.6bpp",
	"graphics/Resize/gCardGraphicsMorphingJar.6bpp",
	"graphics/Resize/gCardGraphicsMorphingJar2.6bpp",
	"graphics/Resize/gCardGraphicsMotherGrizzly.6bpp",
	"graphics/Resize/gCardGraphicsMountain.6bpp",
	"graphics/Resize/gCardGraphicsMountainWarrior.6bpp",
	"graphics/Resize/gCardGraphicsMrVolcano.6bpp",
	"graphics/Resize/gCardGraphicsMukaMuka.6bpp",
	"graphics/Resize/gCardGraphicsMushroomMan.6bpp",
	"graphics/Resize/gCardGraphicsMushroomMan2.6bpp",
	"graphics/Resize/gCardGraphicsMusicianKing.6bpp",
	"graphics/Resize/gCardGraphicsMWarrior1.6bpp",
	"graphics/Resize/gCardGraphicsMWarrior2.6bpp",
	"graphics/Resize/gCardGraphicsMysteriousPuppeteer.6bpp",
	"graphics/Resize/gCardGraphicsMysticHorseman.6bpp",
	"graphics/Resize/gCardGraphicsMysticLamp.6bpp",
	"graphics/Resize/gCardGraphicsMysticPlasmaZone.6bpp",
	"graphics/Resize/gCardGraphicsMysticProbe.6bpp",
	"graphics/Resize/gCardGraphicsMysticTomato.6bpp",
	"graphics/Resize/gCardGraphicsMysticalCaptureChain.6bpp",
	"graphics/Resize/gCardGraphicsMysticalElf.6bpp",
	"graphics/Resize/gCardGraphicsMysticalMoon.6bpp",
	"graphics/Resize/gCardGraphicsMysticalSand.6bpp",
	"graphics/Resize/gCardGraphicsMysticalSheep1.6bpp",
	"graphics/Resize/gCardGraphicsMysticalSheep2.6bpp",
	"graphics/Resize/gCardGraphicsMysticalSpaceTyphoon.6bpp",
	"graphics/Resize/gCardGraphicsNeedleBall.6bpp",
	"graphics/Resize/gCardGraphicsNeedleWorm.6bpp",
	"graphics/Resize/gCardGraphicsNegateAttack.6bpp",
	"graphics/Resize/gCardGraphicsNekogal1.6bpp",
	"graphics/Resize/gCardGraphicsNekogal2.6bpp",
	"graphics/Resize/gCardGraphicsNemuriko.6bpp",
	"graphics/Resize/gCardGraphicsNeotheMagicSwordsman.6bpp",
	"graphics/Resize/gCardGraphicsNimbleMomonga.6bpp",
	"graphics/Resize/gCardGraphicsNiwatori.6bpp",
	"graphics/Resize/gCardGraphicsNoblemanofCrossout.6bpp",
	"graphics/Resize/gCardGraphicsNoblemanofExtermination.6bpp",
	"graphics/Resize/gCardGraphicsNovoxsPrayer.6bpp",
	"graphics/Resize/gCardGraphicsNuminousHealer.6bpp",
	"graphics/Resize/gCardGraphicsOctoberser.6bpp",
	"graphics/Resize/gCardGraphicsOcubeam.6bpp",
	"graphics/Resize/gCardGraphicsOgreoftheBlackShadow.6bpp",
	"graphics/Resize/gCardGraphicsOneEyedShieldDragon.6bpp",
	"graphics/Resize/gCardGraphicsOoguchi.6bpp",
	"graphics/Resize/gCardGraphicsOokazi.6bpp",
	"graphics/Resize/gCardGraphicsOriontheBattleKing.6bpp",
	"graphics/Resize/gCardGraphicsOscilloHero.6bpp",
	"graphics/Resize/gCardGraphicsOscilloHero2.6bpp",
	"graphics/Resize/gCardGraphicsPainfulChoice.6bpp",
	"graphics/Resize/gCardGraphicsPaleBeast.6bpp",
	"graphics/Resize/gCardGraphicsPantherWarrior.6bpp",
	"graphics/Resize/gCardGraphicsParalyzingPotion.6bpp",
	"graphics/Resize/gCardGraphicsParasiteParacide.6bpp",
	"graphics/Resize/gCardGraphicsParrotDragon.6bpp",
	"graphics/Resize/gCardGraphicsPatrolRobo.6bpp",
	"graphics/Resize/gCardGraphicsPeacock.6bpp",
	"graphics/Resize/gCardGraphicsPendulumMachine.6bpp",
	"graphics/Resize/gCardGraphicsPendulumMachine2.6bpp",
	"graphics/Resize/gCardGraphicsPenguinKnight.6bpp",
	"graphics/Resize/gCardGraphicsPenguinSoldier.6bpp",
	"graphics/Resize/gCardGraphicsPerfectlyUltimateGreatMoth.6bpp",
	"graphics/Resize/gCardGraphicsPerformanceofSword.6bpp",
	"graphics/Resize/gCardGraphicsPetitAngel.6bpp",
	"graphics/Resize/gCardGraphicsPetitDragon.6bpp",
	"graphics/Resize/gCardGraphicsPetitMoth.6bpp",
	"graphics/Resize/gCardGraphicsPolymerization.6bpp",
	"graphics/Resize/gCardGraphicsPolymerization2.6bpp",
	"graphics/Resize/gCardGraphicsPotofGreed.6bpp",
	"graphics/Resize/gCardGraphicsPowerofKaishin.6bpp",
	"graphics/Resize/gCardGraphicsPragtical.6bpp",
	"graphics/Resize/gCardGraphicsPrematureBurial.6bpp",
	"graphics/Resize/gCardGraphicsPreventRat.6bpp",
	"graphics/Resize/gCardGraphicsPrincessofTsurugi.6bpp",
	"graphics/Resize/gCardGraphicsPrisman.6bpp",
	"graphics/Resize/gCardGraphicsProhibition.6bpp",
	"graphics/Resize/gCardGraphicsProtectoroftheThrone.6bpp",
	"graphics/Resize/gCardGraphicsPsychicKappa.6bpp",
	"graphics/Resize/gCardGraphicsPumpkingtheKingofGhosts.6bpp",
	"graphics/Resize/gCardGraphicsPunishedEagle.6bpp",
	"graphics/Resize/gCardGraphicsQueenBird.6bpp",
	"graphics/Resize/gCardGraphicsQueenofAutumnLeaves.6bpp",
	"graphics/Resize/gCardGraphicsQueensDouble.6bpp",
	"graphics/Resize/gCardGraphicsRabidHorseman.6bpp",
	"graphics/Resize/gCardGraphicsRaigeki.6bpp",
	"graphics/Resize/gCardGraphicsRaimei.6bpp",
	"graphics/Resize/gCardGraphicsRainbowFlower.6bpp",
	"graphics/Resize/gCardGraphicsRaiseBodyHeat.6bpp",
	"graphics/Resize/gCardGraphicsRareFish.6bpp",
	"graphics/Resize/gCardGraphicsRayTemperature.6bpp",
	"graphics/Resize/gCardGraphicsReaperoftheCards.6bpp",
	"graphics/Resize/gCardGraphicsRedArcheryGirl.6bpp",
	"graphics/Resize/gCardGraphicsRedMedicine.6bpp",
	"graphics/Resize/gCardGraphicsRedEyesBDragon.6bpp",
	"graphics/Resize/gCardGraphicsRedEyesBlackMetalDragon.6bpp",
	"graphics/Resize/gCardGraphicsReinforcements.6bpp",
	"graphics/Resize/gCardGraphicsRelinquished.6bpp",
	"graphics/Resize/gCardGraphicsRemoveTrap.6bpp",
	"graphics/Resize/gCardGraphicsRespectPlay.6bpp",
	"graphics/Resize/gCardGraphicsRestructerRevolution.6bpp",
	"graphics/Resize/gCardGraphicsResurrectionofChakra.6bpp",
	"graphics/Resize/gCardGraphicsReverseTrap.6bpp",
	"graphics/Resize/gCardGraphicsRevivalofDokurorider.6bpp",
	"graphics/Resize/gCardGraphicsRhaimundosoftheRedSword.6bpp",
	"graphics/Resize/gCardGraphicsRightArmoftheForbiddenOne.6bpp",
	"graphics/Resize/gCardGraphicsRightLegoftheForbiddenOne.6bpp",
	"graphics/Resize/gCardGraphicsRingofMagnetism.6bpp",
	"graphics/Resize/gCardGraphicsRiryoku.6bpp",
	"graphics/Resize/gCardGraphicsRisingAirCurrent.6bpp",
	"graphics/Resize/gCardGraphicsRoaringOceanSnake.6bpp",
	"graphics/Resize/gCardGraphicsRobbinGoblin.6bpp",
	"graphics/Resize/gCardGraphicsRockOgreGrotto1.6bpp",
	"graphics/Resize/gCardGraphicsRogueDoll.6bpp",
	"graphics/Resize/gCardGraphicsRootWater.6bpp",
	"graphics/Resize/gCardGraphicsRoseSpectreofDunn.6bpp",
	"graphics/Resize/gCardGraphicsRoyalDecree.6bpp",
	"graphics/Resize/gCardGraphicsRoyalGuard.6bpp",
	"graphics/Resize/gCardGraphicsRudeKaiser.6bpp",
	"graphics/Resize/gCardGraphicsRushRecklessly.6bpp",
	"graphics/Resize/gCardGraphicsRyuKishin.6bpp",
	"graphics/Resize/gCardGraphicsRyuKishinPowered.6bpp",
	"graphics/Resize/gCardGraphicsRyuRan.6bpp",
	"graphics/Resize/gCardGraphicsSaberSlasher.6bpp",
	"graphics/Resize/gCardGraphicsSaggitheDarkClown.6bpp",
	"graphics/Resize/gCardGraphicsSalamandra.6bpp",
	"graphics/Resize/gCardGraphicsSandStone.6bpp",
	"graphics/Resize/gCardGraphicsSangaoftheThunder.6bpp",
	"graphics/Resize/gCardGraphicsSangan.6bpp",
	"graphics/Resize/gCardGraphicsSeaKamen.6bpp",
	"graphics/Resize/gCardGraphicsSeaKingDragon.6bpp",
	"graphics/Resize/gCardGraphicsSealoftheAncients.6bpp",
	"graphics/Resize/gCardGraphicsSebeksBlessing.6bpp",
	"graphics/Resize/gCardGraphicsSectarianofSecrets.6bpp",
	"graphics/Resize/gCardGraphicsSeiyaryu.6bpp",
	"graphics/Resize/gCardGraphicsSengenjin.6bpp",
	"graphics/Resize/gCardGraphicsSenjuoftheThousandHands.6bpp",
	"graphics/Resize/gCardGraphicsSerpentNightDragon.6bpp",
	"graphics/Resize/gCardGraphicsSevenToolsoftheBandit.6bpp",
	"graphics/Resize/gCardGraphicsShadowGhoul.6bpp",
	"graphics/Resize/gCardGraphicsShadowSpecter.6bpp",
	"graphics/Resize/gCardGraphicsSharethePain.6bpp",
	"graphics/Resize/gCardGraphicsShieldSword.6bpp",
	"graphics/Resize/gCardGraphicsShiningFairy.6bpp",
	"graphics/Resize/gCardGraphicsShovelCrusher.6bpp",
	"graphics/Resize/gCardGraphicsSilverBowandArrow.6bpp",
	"graphics/Resize/gCardGraphicsSilverFang.6bpp",
	"graphics/Resize/gCardGraphicsSinisterSerpent.6bpp",
	"graphics/Resize/gCardGraphicsSkelengel.6bpp",
	"graphics/Resize/gCardGraphicsSkelgon.6bpp",
	"graphics/Resize/gCardGraphicsSkullDice.6bpp",
	"graphics/Resize/gCardGraphicsSkullGuardian.6bpp",
	"graphics/Resize/gCardGraphicsSkullKnight.6bpp",
	"graphics/Resize/gCardGraphicsSkullRedBird.6bpp",
	"graphics/Resize/gCardGraphicsSkullServant.6bpp",
	"graphics/Resize/gCardGraphicsSkullStalker.6bpp",
	"graphics/Resize/gCardGraphicsSkullbird.6bpp",
	"graphics/Resize/gCardGraphicsSleepingLion.6bpp",
	"graphics/Resize/gCardGraphicsSlotMachine.6bpp",
	"graphics/Resize/gCardGraphicsSnakeFang.6bpp",
	"graphics/Resize/gCardGraphicsSnakeyashi.6bpp",
	"graphics/Resize/gCardGraphicsSnatchSteal.6bpp",
	"graphics/Resize/gCardGraphicsSogen.6bpp",
	"graphics/Resize/gCardGraphicsSolemnJudgment.6bpp",
	"graphics/Resize/gCardGraphicsSolitude.6bpp",
	"graphics/Resize/gCardGraphicsSolomonsLawbook.6bpp",
	"graphics/Resize/gCardGraphicsSonicBird.6bpp",
	"graphics/Resize/gCardGraphicsSonicMaid.6bpp",
	"graphics/Resize/gCardGraphicsSoulHunter.6bpp",
	"graphics/Resize/gCardGraphicsSoulofthePure.6bpp",
	"graphics/Resize/gCardGraphicsSoulRelease.6bpp",
	"graphics/Resize/gCardGraphicsSparks.6bpp",
	"graphics/Resize/gCardGraphicsSpearCretin.6bpp",
	"graphics/Resize/gCardGraphicsSpellbindingCircle.6bpp",
	"graphics/Resize/gCardGraphicsSpikeSeadra.6bpp",
	"graphics/Resize/gCardGraphicsSpiritoftheBooks.6bpp",
	"graphics/Resize/gCardGraphicsSpiritoftheHarp.6bpp",
	"graphics/Resize/gCardGraphicsStainStorm.6bpp",
	"graphics/Resize/gCardGraphicsStarBoy.6bpp",
	"graphics/Resize/gCardGraphicsSteelOgreGrotto1.6bpp",
	"graphics/Resize/gCardGraphicsSteelOgreGrotto2.6bpp",
	"graphics/Resize/gCardGraphicsSteelScorpion.6bpp",
	"graphics/Resize/gCardGraphicsSteelShell.6bpp",
	"graphics/Resize/gCardGraphicsStimPack.6bpp",
	"graphics/Resize/gCardGraphicsStoneArmadiller.6bpp",
	"graphics/Resize/gCardGraphicsStoneOgreGrotto.6bpp",
	"graphics/Resize/gCardGraphicsStopDefense.6bpp",
	"graphics/Resize/gCardGraphicsStuffedAnimal.6bpp",
	"graphics/Resize/gCardGraphicsSuccubusKnight.6bpp",
	"graphics/Resize/gCardGraphicsSuijin.6bpp",
	"graphics/Resize/gCardGraphicsSummonedSkull.6bpp",
	"graphics/Resize/gCardGraphicsSuperWarLion.6bpp",
	"graphics/Resize/gCardGraphicsSupporterintheShadows.6bpp",
	"graphics/Resize/gCardGraphicsSwampBattleguard.6bpp",
	"graphics/Resize/gCardGraphicsSwordArmofDragon.6bpp",
	"graphics/Resize/gCardGraphicsSwordofDarkDestruction.6bpp",
	"graphics/Resize/gCardGraphicsSwordofDeepSeated.6bpp",
	"graphics/Resize/gCardGraphicsSwordofDragonsSoul.6bpp",
	"graphics/Resize/gCardGraphicsSwordsofRevealingLight.6bpp",
	"graphics/Resize/gCardGraphicsSwordsmanfromaForeignLand.6bpp",
	"graphics/Resize/gCardGraphicsSwordstalker.6bpp",
	"graphics/Resize/gCardGraphicsTailoroftheFickle.6bpp",
	"graphics/Resize/gCardGraphicsTaintedWisdom.6bpp",
	"graphics/Resize/gCardGraphicsTakriminos.6bpp",
	"graphics/Resize/gCardGraphicsTakuhee.6bpp",
	"graphics/Resize/gCardGraphicsTaotheChanter.6bpp",
	"graphics/Resize/gCardGraphicsTempleofSkulls.6bpp",
	"graphics/Resize/gCardGraphicsTenderness.6bpp",
	"graphics/Resize/gCardGraphicsTerratheTerrible.6bpp",
	"graphics/Resize/gCardGraphicsThe13thGrave.6bpp",
	"graphics/Resize/gCardGraphicsTheBewitchingPhantomThief.6bpp",
	"graphics/Resize/gCardGraphicsTheBistroButcher.6bpp",
	"graphics/Resize/gCardGraphicsTheCheerfulCoffin.6bpp",
	"graphics/Resize/gCardGraphicsTheDrdek.6bpp",
	"graphics/Resize/gCardGraphicsTheEyeofTruth.6bpp",
	"graphics/Resize/gCardGraphicsTheFluteofSummoningDragon.6bpp",
	"graphics/Resize/gCardGraphicsTheForcefulSentry.6bpp",
	"graphics/Resize/gCardGraphicsTheFuriousSeaKing.6bpp",
	"graphics/Resize/gCardGraphicsTheImmortalofThunder.6bpp",
	"graphics/Resize/gCardGraphicsTheInexperiencedSpy.6bpp",
	"graphics/Resize/gCardGraphicsTheLittleSwordsmanofAile.6bpp",
	"graphics/Resize/gCardGraphicsTheRegulationofTribe.6bpp",
	"graphics/Resize/gCardGraphicsTheReliableGuardian.6bpp",
	"graphics/Resize/gCardGraphicsTheShallowGrave.6bpp",
	"graphics/Resize/gCardGraphicsTheSnakeHair.6bpp",
	"graphics/Resize/gCardGraphicsTheSternMystic.6bpp",
	"graphics/Resize/gCardGraphicsTheThingThatHidesintheMud.6bpp",
	"graphics/Resize/gCardGraphicsTheUnhappyMaiden.6bpp",
	"graphics/Resize/gCardGraphicsTheWanderingDoomed.6bpp",
	"graphics/Resize/gCardGraphicsTheWickedWormBeast.6bpp",
	"graphics/Resize/gCardGraphicsThousandDragon.6bpp",
	"graphics/Resize/gCardGraphicsThousandDragon2.6bpp",
	"graphics/Resize/gCardGraphicsThreeHeadedGeedo.6bpp",
	"graphics/Resize/gCardGraphicsThreeLeggedZombies.6bpp",
	"graphics/Resize/gCardGraphicsThunderDragon.6bpp",
	"graphics/Resize/gCardGraphicsTigerAxe.6bpp",
	"graphics/Resize/gCardGraphicsTigerAxe2.6bpp",
	"graphics/Resize/gCardGraphicsTimeMachine.6bpp",
	"graphics/Resize/gCardGraphicsTimeSeal.6bpp",
	"graphics/Resize/gCardGraphicsTimeWizard.6bpp",
	"graphics/Resize/gCardGraphicsToadMaster.6bpp",
	"graphics/Resize/gCardGraphicsTogex.6bpp",
	"graphics/Resize/gCardGraphicsToll.6bpp",
	"graphics/Resize/gCardGraphicsTomozaurus.6bpp",
	"graphics/Resize/gCardGraphicsTongyo.6bpp",
	"graphics/Resize/gCardGraphicsToonAlligator.6bpp",
	"graphics/Resize/gCardGraphicsToonMermaid.6bpp",
	"graphics/Resize/gCardGraphicsToonSummonedSkull.6bpp",
	"graphics/Resize/gCardGraphicsToonWorld.6bpp",
	"graphics/Resize/gCardGraphicsTorike.6bpp",
	"graphics/Resize/gCardGraphicsTotalDefenseShogun.6bpp",
	"graphics/Resize/gCardGraphicsTrakadon.6bpp",
	"graphics/Resize/gCardGraphicsTrapHole.6bpp",
	"graphics/Resize/gCardGraphicsTrapMaster.6bpp",
	"graphics/Resize/gCardGraphicsTremendousFire.6bpp",
	"graphics/Resize/gCardGraphicsTrent.6bpp",
	"graphics/Resize/gCardGraphicsTrialofNightmare.6bpp",
	"graphics/Resize/gCardGraphicsTributetoTheDoomed.6bpp",
	"graphics/Resize/gCardGraphicsTriHornedDragon.6bpp",
	"graphics/Resize/gCardGraphicsTripwireBeast.6bpp",
	"graphics/Resize/gCardGraphicsTurtleOath.6bpp",
	"graphics/Resize/gCardGraphicsTurtleTiger.6bpp",
	"graphics/Resize/gCardGraphicsTwinLongRods2.6bpp",
	"graphics/Resize/gCardGraphicsTwinHeadedFireDragon.6bpp",
	"graphics/Resize/gCardGraphicsTwinHeadedThunderDragon.6bpp",
	"graphics/Resize/gCardGraphicsTwoHeadedKingRex.6bpp",
	"graphics/Resize/gCardGraphicsTwoMouthDarkruler.6bpp",
	"graphics/Resize/gCardGraphicsTwoProngedAttack.6bpp",
	"graphics/Resize/gCardGraphicsTyhone.6bpp",
	"graphics/Resize/gCardGraphicsTyhone2.6bpp",
	"graphics/Resize/gCardGraphicsUFOTurtle.6bpp",
	"graphics/Resize/gCardGraphicsUltimateOffering.6bpp",
	"graphics/Resize/gCardGraphicsUmi.6bpp",
	"graphics/Resize/gCardGraphicsUmiiruka.6bpp",
	"graphics/Resize/gCardGraphicsUnknownWarriorofFiend.6bpp",
	"graphics/Resize/gCardGraphicsUpstartGoblin.6bpp",
	"graphics/Resize/gCardGraphicsUraby.6bpp",
	"graphics/Resize/gCardGraphicsUshiOni.6bpp",
	"graphics/Resize/gCardGraphicsValkyriontheMagnaWarrior.6bpp",
	"graphics/Resize/gCardGraphicsVermillionSparrow.6bpp",
	"graphics/Resize/gCardGraphicsVersagotheDestroyer.6bpp",
	"graphics/Resize/gCardGraphicsVileGerms.6bpp",
	"graphics/Resize/gCardGraphicsViolentRain.6bpp",
	"graphics/Resize/gCardGraphicsVioletCrystal.6bpp",
	"graphics/Resize/gCardGraphicsVishwarRandi.6bpp",
	"graphics/Resize/gCardGraphicsVorseRaider.6bpp",
	"graphics/Resize/gCardGraphicsWaboku.6bpp",
	"graphics/Resize/gCardGraphicsWallofIllusion.6bpp",
	"graphics/Resize/gCardGraphicsWallShadow.6bpp",
	"graphics/Resize/gCardGraphicsWarLionRitual.6bpp",
	"graphics/Resize/gCardGraphicsWarriorElimination.6bpp",
	"graphics/Resize/gCardGraphicsWarriorofTradition.6bpp",
	"graphics/Resize/gCardGraphicsWasteland.6bpp",
	"graphics/Resize/gCardGraphicsWaterElement.6bpp",
	"graphics/Resize/gCardGraphicsWaterGirl.6bpp",
	"graphics/Resize/gCardGraphicsWaterMagician.6bpp",
	"graphics/Resize/gCardGraphicsWaterOmotics.6bpp",
	"graphics/Resize/gCardGraphicsWaterdragonFairy.6bpp",
	"graphics/Resize/gCardGraphicsWeatherControl.6bpp",
	"graphics/Resize/gCardGraphicsWeatherReport.6bpp",
	"graphics/Resize/gCardGraphicsWhiptailCrow.6bpp",
	"graphics/Resize/gCardGraphicsWhiteHole.6bpp",
	"graphics/Resize/gCardGraphicsWhiteMagicalHat.6bpp",
	"graphics/Resize/gCardGraphicsWickedMirror.6bpp",
	"graphics/Resize/gCardGraphicsWidespreadRuin.6bpp",
	"graphics/Resize/gCardGraphicsWindstormofEtaqua.6bpp",
	"graphics/Resize/gCardGraphicsWingEggElf.6bpp",
	"graphics/Resize/gCardGraphicsWingedCleaver.6bpp",
	"graphics/Resize/gCardGraphicsWingedDragonGuardianoftheFortress1.6bpp",
	"graphics/Resize/gCardGraphicsWingsofWickedFlame.6bpp",
	"graphics/Resize/gCardGraphicsWitchoftheBlackForest.6bpp",
	"graphics/Resize/gCardGraphicsWitchsApprentice.6bpp",
	"graphics/Resize/gCardGraphicsWittyPhantom.6bpp",
	"graphics/Resize/gCardGraphicsWodantheResidentoftheForest.6bpp",
	"graphics/Resize/gCardGraphicsWoodRemains.6bpp",
	"graphics/Resize/gCardGraphicsWorldSuppression.6bpp",
	"graphics/Resize/gCardGraphicsWowWarrior.6bpp",
	"graphics/Resize/gCardGraphicsWretchedGhostoftheAttic.6bpp",
	"graphics/Resize/gCardGraphicsYadoKaru.6bpp",
	"graphics/Resize/gCardGraphicsYaibaRobo.6bpp",
	"graphics/Resize/gCardGraphicsYamatanoDragonScroll.6bpp",
	"graphics/Resize/gCardGraphicsYami.6bpp",
	"graphics/Resize/gCardGraphicsYaranzo.6bpp",
	"graphics/Resize/gCardGraphicsZanki.6bpp",
	"graphics/Resize/gCardGraphicsZeraRitual.6bpp",
	"graphics/Resize/gCardGraphicsZeraTheMant.6bpp",
	"graphics/Resize/gCardGraphicsZoa.6bpp",
	"graphics/Resize/gCardGraphicsZombieWarrior.6bpp",
	"graphics/Resize/gCardGraphicsZoneEater.6bpp",
	"graphics/Resize/gCardGraphicsTheMonarchy.6bpp",
	"graphics/Resize/gCardGraphicsSetSailfortheKingdom.6bpp",
	"graphics/Resize/gCardGraphicsGloryoftheKingsHand.6bpp",
	"graphics/Resize/gCardGraphicsObelisktheTormentor.6bpp",
	"graphics/Resize/gCardGraphicsSlifertheSkyDragon.6bpp",
	"graphics/Resize/gCardGraphicsTheWingedDragonofRa.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.6bpp"
);

const u8 gCardPalettes[] = INCBIN_U8(
	"graphics/Resize/gCardGraphicsNone.gbapal",
	"graphics/Resize/gCardGraphics7ColoredFish.gbapal",
	"graphics/Resize/gCardGraphics7Completed.gbapal",
	"graphics/Resize/gCardGraphicsAcidCrawler.gbapal",
	"graphics/Resize/gCardGraphicsAcidTrapHole.gbapal",
	"graphics/Resize/gCardGraphicsAirEater.gbapal",
	"graphics/Resize/gCardGraphicsAirMarmotofNefariousness.gbapal",
	"graphics/Resize/gCardGraphicsAkakieisu.gbapal",
	"graphics/Resize/gCardGraphicsAkihiron.gbapal",
	"graphics/Resize/gCardGraphicsAlligatorsSword.gbapal",
	"graphics/Resize/gCardGraphicsAlligatorsSwordDragon.gbapal",
	"graphics/Resize/gCardGraphicsAlphaTheMagnetWarrior.gbapal",
	"graphics/Resize/gCardGraphicsAmazonoftheSeas.gbapal",
	"graphics/Resize/gCardGraphicsAmeba.gbapal",
	"graphics/Resize/gCardGraphicsAmphibiousBugroth.gbapal",
	"graphics/Resize/gCardGraphicsAncientBrain.gbapal",
	"graphics/Resize/gCardGraphicsAncientElf.gbapal",
	"graphics/Resize/gCardGraphicsAncientJar.gbapal",
	"graphics/Resize/gCardGraphicsAncientLizardWarrior.gbapal",
	"graphics/Resize/gCardGraphicsAncientOneoftheDeepForest.gbapal",
	"graphics/Resize/gCardGraphicsAncientTelescope.gbapal",
	"graphics/Resize/gCardGraphicsAncientTool.gbapal",
	"graphics/Resize/gCardGraphicsAnsatsu.gbapal",
	"graphics/Resize/gCardGraphicsAnthrosaurus.gbapal",
	"graphics/Resize/gCardGraphicsAntiRaigeki.gbapal",
	"graphics/Resize/gCardGraphicsAntiMagicFragrance.gbapal",
	"graphics/Resize/gCardGraphicsAppropriate.gbapal",
	"graphics/Resize/gCardGraphicsAquaChorus.gbapal",
	"graphics/Resize/gCardGraphicsAquaDragon.gbapal",
	"graphics/Resize/gCardGraphicsAquaMadoor.gbapal",
	"graphics/Resize/gCardGraphicsArlownay.gbapal",
	"graphics/Resize/gCardGraphicsArmaKnight.gbapal",
	"graphics/Resize/gCardGraphicsArmaill.gbapal",
	"graphics/Resize/gCardGraphicsArmedNinja.gbapal",
	"graphics/Resize/gCardGraphicsArmoredGlass.gbapal",
	"graphics/Resize/gCardGraphicsArmoredLizard.gbapal",
	"graphics/Resize/gCardGraphicsArmoredRat.gbapal",
	"graphics/Resize/gCardGraphicsArmoredStarfish.gbapal",
	"graphics/Resize/gCardGraphicsArmoredZombie.gbapal",
	"graphics/Resize/gCardGraphicsAxeofDespair.gbapal",
	"graphics/Resize/gCardGraphicsAxeRaider.gbapal",
	"graphics/Resize/gCardGraphicsBDragonJungleKing.gbapal",
	"graphics/Resize/gCardGraphicsBSkullDragon.gbapal",
	"graphics/Resize/gCardGraphicsBabyDragon.gbapal",
	"graphics/Resize/gCardGraphicsBackupSoldier.gbapal",
	"graphics/Resize/gCardGraphicsBanisheroftheLight.gbapal",
	"graphics/Resize/gCardGraphicsBarox.gbapal",
	"graphics/Resize/gCardGraphicsBarrelDragon.gbapal",
	"graphics/Resize/gCardGraphicsBarrelLily.gbapal",
	"graphics/Resize/gCardGraphicsBarrelRock.gbapal",
	"graphics/Resize/gCardGraphicsBasicInsect.gbapal",
	"graphics/Resize/gCardGraphicsBattleOx.gbapal",
	"graphics/Resize/gCardGraphicsBattleSteer.gbapal",
	"graphics/Resize/gCardGraphicsBattleWarrior.gbapal",
	"graphics/Resize/gCardGraphicsBeanSoldier.gbapal",
	"graphics/Resize/gCardGraphicsBeastFangs.gbapal",
	"graphics/Resize/gCardGraphicsBeastkingoftheSwamps.gbapal",
	"graphics/Resize/gCardGraphicsBeastlyMirrorRitual.gbapal",
	"graphics/Resize/gCardGraphicsBeautifulHeadhuntress.gbapal",
	"graphics/Resize/gCardGraphicsBeaverWarrior.gbapal",
	"graphics/Resize/gCardGraphicsBehegon.gbapal",
	"graphics/Resize/gCardGraphicsBellofDestruction.gbapal",
	"graphics/Resize/gCardGraphicsBetaTheMagnetWarrior.gbapal",
	"graphics/Resize/gCardGraphicsBickuribox.gbapal",
	"graphics/Resize/gCardGraphicsBigEye.gbapal",
	"graphics/Resize/gCardGraphicsBigInsect.gbapal",
	"graphics/Resize/gCardGraphicsBigShieldGardna.gbapal",
	"graphics/Resize/gCardGraphicsBindingChain.gbapal",
	"graphics/Resize/gCardGraphicsBioPlant.gbapal",
	"graphics/Resize/gCardGraphicsBlackIllusionRitual.gbapal",
	"graphics/Resize/gCardGraphicsBlackLusterRitual.gbapal",
	"graphics/Resize/gCardGraphicsBlackLusterSoldier.gbapal",
	"graphics/Resize/gCardGraphicsBlackPendant.gbapal",
	"graphics/Resize/gCardGraphicsBlacklandFireDragon.gbapal",
	"graphics/Resize/gCardGraphicsBladefly.gbapal",
	"graphics/Resize/gCardGraphicsBlastJuggler.gbapal",
	"graphics/Resize/gCardGraphicsBlastSphere.gbapal",
	"graphics/Resize/gCardGraphicsBlockAttack.gbapal",
	"graphics/Resize/gCardGraphicsBlueMedicine.gbapal",
	"graphics/Resize/gCardGraphicsBlueEyedSilverZombie.gbapal",
	"graphics/Resize/gCardGraphicsBlueEyesToonDragon.gbapal",
	"graphics/Resize/gCardGraphicsBlueEyesUltimateDragon.gbapal",
	"graphics/Resize/gCardGraphicsBlueEyesWhiteDragon.gbapal",
	"graphics/Resize/gCardGraphicsBlueEyesWhiteDragon2.gbapal",
	"graphics/Resize/gCardGraphicsBlueWingedCrown.gbapal",
	"graphics/Resize/gCardGraphicsBoarSoldier.gbapal",
	"graphics/Resize/gCardGraphicsBoltEscargot.gbapal",
	"graphics/Resize/gCardGraphicsBookofSecretArts.gbapal",
	"graphics/Resize/gCardGraphicsBottomDweller.gbapal",
	"graphics/Resize/gCardGraphicsBracchioraidus.gbapal",
	"graphics/Resize/gCardGraphicsBreathofLight.gbapal",
	"graphics/Resize/gCardGraphicsBrightCastle.gbapal",
	"graphics/Resize/gCardGraphicsBurglar.gbapal",
	"graphics/Resize/gCardGraphicsBurningSpear.gbapal",
	"graphics/Resize/gCardGraphicsBusterBlader.gbapal",
	"graphics/Resize/gCardGraphicsCalloftheDark.gbapal",
	"graphics/Resize/gCardGraphicsCalloftheGrave.gbapal",
	"graphics/Resize/gCardGraphicsCallOfTheHaunted.gbapal",
	"graphics/Resize/gCardGraphicsCandleofFate.gbapal",
	"graphics/Resize/gCardGraphicsCannonSoldier.gbapal",
	"graphics/Resize/gCardGraphicsCastleofDarkIllusions.gbapal",
	"graphics/Resize/gCardGraphicsCastleWalls.gbapal",
	"graphics/Resize/gCardGraphicsCatapultTurtle.gbapal",
	"graphics/Resize/gCardGraphicsCeasefire.gbapal",
	"graphics/Resize/gCardGraphicsCelticGuardian.gbapal",
	"graphics/Resize/gCardGraphicsCelticGuardian2.gbapal",
	"graphics/Resize/gCardGraphicsCeremonialBell.gbapal",
	"graphics/Resize/gCardGraphicsChainDestruction.gbapal",
	"graphics/Resize/gCardGraphicsChainEnergy.gbapal",
	"graphics/Resize/gCardGraphicsChakra.gbapal",
	"graphics/Resize/gCardGraphicsChangeofHeart.gbapal",
	"graphics/Resize/gCardGraphicsCharubintheFireKnight.gbapal",
	"graphics/Resize/gCardGraphicsChorusofSanctuary.gbapal",
	"graphics/Resize/gCardGraphicsClawReacher.gbapal",
	"graphics/Resize/gCardGraphicsClownZombie.gbapal",
	"graphics/Resize/gCardGraphicsCockroachKnight.gbapal",
	"graphics/Resize/gCardGraphicsCocoonofEvolution.gbapal",
	"graphics/Resize/gCardGraphicsCommencementDance.gbapal",
	"graphics/Resize/gCardGraphicsConfiscation.gbapal",
	"graphics/Resize/gCardGraphicsCosmoQueen.gbapal",
	"graphics/Resize/gCardGraphicsCrabTurtle.gbapal",
	"graphics/Resize/gCardGraphicsCrassClown.gbapal",
	"graphics/Resize/gCardGraphicsCrawlingDragon.gbapal",
	"graphics/Resize/gCardGraphicsCrawlingDragon2.gbapal",
	"graphics/Resize/gCardGraphicsCrazyFish.gbapal",
	"graphics/Resize/gCardGraphicsCrimsonSunbird.gbapal",
	"graphics/Resize/gCardGraphicsCrowGoblin.gbapal",
	"graphics/Resize/gCardGraphicsCrushCard.gbapal",
	"graphics/Resize/gCardGraphicsCurseofDragon.gbapal",
	"graphics/Resize/gCardGraphicsCurseofFiend.gbapal",
	"graphics/Resize/gCardGraphicsCurtainoftheDarkOnes.gbapal",
	"graphics/Resize/gCardGraphicsCyberCommander.gbapal",
	"graphics/Resize/gCardGraphicsCyberFalcon.gbapal",
	"graphics/Resize/gCardGraphicsCyberJar.gbapal",
	"graphics/Resize/gCardGraphicsCyberSaurus.gbapal",
	"graphics/Resize/gCardGraphicsCyberShield.gbapal",
	"graphics/Resize/gCardGraphicsCyberSoldier.gbapal",
	"graphics/Resize/gCardGraphicsCyberStein.gbapal",
	"graphics/Resize/gCardGraphicsCyberTechAlligator.gbapal",
	"graphics/Resize/gCardGraphicsDHuman.gbapal",
	"graphics/Resize/gCardGraphicsDancingElf.gbapal",
	"graphics/Resize/gCardGraphicsDarkArtist.gbapal",
	"graphics/Resize/gCardGraphicsDarkAssailant.gbapal",
	"graphics/Resize/gCardGraphicsDarkChimera.gbapal",
	"graphics/Resize/gCardGraphicsDarkElf.gbapal",
	"graphics/Resize/gCardGraphicsDarkEnergy.gbapal",
	"graphics/Resize/gCardGraphicsDarkGray.gbapal",
	"graphics/Resize/gCardGraphicsDarkHole.gbapal",
	"graphics/Resize/gCardGraphicsDarkKingoftheAbyss.gbapal",
	"graphics/Resize/gCardGraphicsDarkMagicRitual.gbapal",
	"graphics/Resize/gCardGraphicsDarkMagician.gbapal",
	"graphics/Resize/gCardGraphicsDarkMagician2.gbapal",
	"graphics/Resize/gCardGraphicsDarkMagicianGirl.gbapal",
	"graphics/Resize/gCardGraphicsDarkRabbit.gbapal",
	"graphics/Resize/gCardGraphicsDarkSage.gbapal",
	"graphics/Resize/gCardGraphicsDarkShade.gbapal",
	"graphics/Resize/gCardGraphicsDarkWitch.gbapal",
	"graphics/Resize/gCardGraphicsDarkZebra.gbapal",
	"graphics/Resize/gCardGraphicsDarkEyesIllusionist.gbapal",
	"graphics/Resize/gCardGraphicsDarkfireDragon.gbapal",
	"graphics/Resize/gCardGraphicsDarkfireSoldier1.gbapal",
	"graphics/Resize/gCardGraphicsDarkfireSoldier2.gbapal",
	"graphics/Resize/gCardGraphicsDarknessApproaches.gbapal",
	"graphics/Resize/gCardGraphicsDarkPiercingLight.gbapal",
	"graphics/Resize/gCardGraphicsDarkworldThorns.gbapal",
	"graphics/Resize/gCardGraphicsDeepseaShark.gbapal",
	"graphics/Resize/gCardGraphicsDelinquentDuo.gbapal",
	"graphics/Resize/gCardGraphicsDeSpell.gbapal",
	"graphics/Resize/gCardGraphicsDestroyerGolem.gbapal",
	"graphics/Resize/gCardGraphicsDianKetotheCureMaster.gbapal",
	"graphics/Resize/gCardGraphicsDiceArmadillo.gbapal",
	"graphics/Resize/gCardGraphicsDimensionalWarrior.gbapal",
	"graphics/Resize/gCardGraphicsDiskMagician.gbapal",
	"graphics/Resize/gCardGraphicsDissolverock.gbapal",
	"graphics/Resize/gCardGraphicsDNASurgery.gbapal",
	"graphics/Resize/gCardGraphicsDokuroizotheGrimReaper.gbapal",
	"graphics/Resize/gCardGraphicsDokurorider.gbapal",
	"graphics/Resize/gCardGraphicsDomaTheAngelofSilence.gbapal",
	"graphics/Resize/gCardGraphicsDoron.gbapal",
	"graphics/Resize/gCardGraphicsDorover.gbapal",
	"graphics/Resize/gCardGraphicsDragonCaptureJar.gbapal",
	"graphics/Resize/gCardGraphicsDragonPiper.gbapal",
	"graphics/Resize/gCardGraphicsDragonSeeker.gbapal",
	"graphics/Resize/gCardGraphicsDragonTreasure.gbapal",
	"graphics/Resize/gCardGraphicsDragonZombie.gbapal",
	"graphics/Resize/gCardGraphicsDragonesstheWickedKnight.gbapal",
	"graphics/Resize/gCardGraphicsDreamClown.gbapal",
	"graphics/Resize/gCardGraphicsDrivingSnow.gbapal",
	"graphics/Resize/gCardGraphicsDroolingLizard.gbapal",
	"graphics/Resize/gCardGraphicsDryad.gbapal",
	"graphics/Resize/gCardGraphicsDunamesDarkWitch.gbapal",
	"graphics/Resize/gCardGraphicsDungeonWorm.gbapal",
	"graphics/Resize/gCardGraphicsDustTornado.gbapal",
	"graphics/Resize/gCardGraphicsEarthshaker.gbapal",
	"graphics/Resize/gCardGraphicsEatgaboon.gbapal",
	"graphics/Resize/gCardGraphicsEldeen.gbapal",
	"graphics/Resize/gCardGraphicsElectricLizard.gbapal",
	"graphics/Resize/gCardGraphicsElectricSnake.gbapal",
	"graphics/Resize/gCardGraphicsElectroWhip.gbapal",
	"graphics/Resize/gCardGraphicsElegantEgotist.gbapal",
	"graphics/Resize/gCardGraphicsElfsLight.gbapal",
	"graphics/Resize/gCardGraphicsEmpressJudge.gbapal",
	"graphics/Resize/gCardGraphicsEnchantedJavelin.gbapal",
	"graphics/Resize/gCardGraphicsEnchantingMermaid.gbapal",
	"graphics/Resize/gCardGraphicsEradicatingAerosol.gbapal",
	"graphics/Resize/gCardGraphicsEternalDraught.gbapal",
	"graphics/Resize/gCardGraphicsEternalRest.gbapal",
	"graphics/Resize/gCardGraphicsExchange.gbapal",
	"graphics/Resize/gCardGraphicsExileoftheWicked.gbapal",
	"graphics/Resize/gCardGraphicsExodiatheForbiddenOne.gbapal",
	"graphics/Resize/gCardGraphicsEyearmor.gbapal",
	"graphics/Resize/gCardGraphicsFairyDragon.gbapal",
	"graphics/Resize/gCardGraphicsFairysHandMirror.gbapal",
	"graphics/Resize/gCardGraphicsFairywitch.gbapal",
	"graphics/Resize/gCardGraphicsFaithBird.gbapal",
	"graphics/Resize/gCardGraphicsFakeTrap.gbapal",
	"graphics/Resize/gCardGraphicsFeralImp.gbapal",
	"graphics/Resize/gCardGraphicsFiendKraken.gbapal",
	"graphics/Resize/gCardGraphicsFiendReflection1.gbapal",
	"graphics/Resize/gCardGraphicsFiendReflection2.gbapal",
	"graphics/Resize/gCardGraphicsFiendSword.gbapal",
	"graphics/Resize/gCardGraphicsFiendsHand.gbapal",
	"graphics/Resize/gCardGraphicsFiendsMirror.gbapal",
	"graphics/Resize/gCardGraphicsFinalDestiny.gbapal",
	"graphics/Resize/gCardGraphicsFinalFlame.gbapal",
	"graphics/Resize/gCardGraphicsFireKraken.gbapal",
	"graphics/Resize/gCardGraphicsFireReaper.gbapal",
	"graphics/Resize/gCardGraphicsFiregrass.gbapal",
	"graphics/Resize/gCardGraphicsFirewingPegasus.gbapal",
	"graphics/Resize/gCardGraphicsFireyarou.gbapal",
	"graphics/Resize/gCardGraphicsFissure.gbapal",
	"graphics/Resize/gCardGraphicsFlameCerebrus.gbapal",
	"graphics/Resize/gCardGraphicsFlameChampion.gbapal",
	"graphics/Resize/gCardGraphicsFlameGhost.gbapal",
	"graphics/Resize/gCardGraphicsFlameManipulator.gbapal",
	"graphics/Resize/gCardGraphicsFlameSwordsman.gbapal",
	"graphics/Resize/gCardGraphicsFlameSwordsman2.gbapal",
	"graphics/Resize/gCardGraphicsFlameViper.gbapal",
	"graphics/Resize/gCardGraphicsFlashAssailant.gbapal",
	"graphics/Resize/gCardGraphicsFlowerWolf.gbapal",
	"graphics/Resize/gCardGraphicsFlyingKamakiri1.gbapal",
	"graphics/Resize/gCardGraphicsFlyingKamakiri2.gbapal",
	"graphics/Resize/gCardGraphicsFollowWind.gbapal",
	"graphics/Resize/gCardGraphicsForcedRequisition.gbapal",
	"graphics/Resize/gCardGraphicsForest.gbapal",
	"graphics/Resize/gCardGraphicsFortressWhale.gbapal",
	"graphics/Resize/gCardGraphicsFortressWhalesOath.gbapal",
	"graphics/Resize/gCardGraphicsFrenziedPanda.gbapal",
	"graphics/Resize/gCardGraphicsFusionSage.gbapal",
	"graphics/Resize/gCardGraphicsFusionist.gbapal",
	"graphics/Resize/gCardGraphicsGaiaPower.gbapal",
	"graphics/Resize/gCardGraphicsGaiatheDragonChampion.gbapal",
	"graphics/Resize/gCardGraphicsGaiaTheFierceKnight.gbapal",
	"graphics/Resize/gCardGraphicsGaiaTheFierceKnight2.gbapal",
	"graphics/Resize/gCardGraphicsGaleDogra.gbapal",
	"graphics/Resize/gCardGraphicsGammaTheMagnetWarrior.gbapal",
	"graphics/Resize/gCardGraphicsGanigumo.gbapal",
	"graphics/Resize/gCardGraphicsGarmaSword.gbapal",
	"graphics/Resize/gCardGraphicsGarmaSwordOath.gbapal",
	"graphics/Resize/gCardGraphicsGarneciaElefantis.gbapal",
	"graphics/Resize/gCardGraphicsGaroozis.gbapal",
	"graphics/Resize/gCardGraphicsGarvas.gbapal",
	"graphics/Resize/gCardGraphicsGateGuardian.gbapal",
	"graphics/Resize/gCardGraphicsGatekeeper.gbapal",
	"graphics/Resize/gCardGraphicsGazelletheKingofMythicalBeasts.gbapal",
	"graphics/Resize/gCardGraphicsGeminiElf.gbapal",
	"graphics/Resize/gCardGraphicsGenin.gbapal",
	"graphics/Resize/gCardGraphicsGermInfection.gbapal",
	"graphics/Resize/gCardGraphicsGhoulwithanAppetite.gbapal",
	"graphics/Resize/gCardGraphicsGiantFlea.gbapal",
	"graphics/Resize/gCardGraphicsGiantGerm.gbapal",
	"graphics/Resize/gCardGraphicsGiantMechSoldier.gbapal",
	"graphics/Resize/gCardGraphicsGiantRat.gbapal",
	"graphics/Resize/gCardGraphicsGiantRedSeasnake.gbapal",
	"graphics/Resize/gCardGraphicsGiantScorpionoftheTundra.gbapal",
	"graphics/Resize/gCardGraphicsGiantSoldierofStone.gbapal",
	"graphics/Resize/gCardGraphicsGiantTrunade.gbapal",
	"graphics/Resize/gCardGraphicsGiantTurtleWhoFeedsonFlames.gbapal",
	"graphics/Resize/gCardGraphicsGiftofTheMysticalElf.gbapal",
	"graphics/Resize/gCardGraphicsGiganto.gbapal",
	"graphics/Resize/gCardGraphicsGigatechWolf.gbapal",
	"graphics/Resize/gCardGraphicsGiltiatheDKnight.gbapal",
	"graphics/Resize/gCardGraphicsGoblinFan.gbapal",
	"graphics/Resize/gCardGraphicsGoblinsSecretRemedy.gbapal",
	"graphics/Resize/gCardGraphicsGoddessofWhim.gbapal",
	"graphics/Resize/gCardGraphicsGoddesswiththeThirdEye.gbapal",
	"graphics/Resize/gCardGraphicsGokibore.gbapal",
	"graphics/Resize/gCardGraphicsGracefulCharity.gbapal",
	"graphics/Resize/gCardGraphicsGracefulDice.gbapal",
	"graphics/Resize/gCardGraphicsGrappler.gbapal",
	"graphics/Resize/gCardGraphicsGravediggerGhoul.gbapal",
	"graphics/Resize/gCardGraphicsGravekeepersServant.gbapal",
	"graphics/Resize/gCardGraphicsGraverobber.gbapal",
	"graphics/Resize/gCardGraphicsGraveyardandtheHandofInvitation.gbapal",
	"graphics/Resize/gCardGraphicsGreatBill.gbapal",
	"graphics/Resize/gCardGraphicsGreatMammothofGoldfine.gbapal",
	"graphics/Resize/gCardGraphicsGreatMoth.gbapal",
	"graphics/Resize/gCardGraphicsGreatWhite.gbapal",
	"graphics/Resize/gCardGraphicsGreenPhantomKing.gbapal",
	"graphics/Resize/gCardGraphicsGreenkappa.gbapal",
	"graphics/Resize/gCardGraphicsGriffore.gbapal",
	"graphics/Resize/gCardGraphicsGriggle.gbapal",
	"graphics/Resize/gCardGraphicsGroundAttackerBugroth.gbapal",
	"graphics/Resize/gCardGraphicsGruesomeGoo.gbapal",
	"graphics/Resize/gCardGraphicsGryphonWing.gbapal",
	"graphics/Resize/gCardGraphicsGuardianoftheLabyrinth.gbapal",
	"graphics/Resize/gCardGraphicsGuardianoftheSea.gbapal",
	"graphics/Resize/gCardGraphicsGuardianoftheThroneRoom.gbapal",
	"graphics/Resize/gCardGraphicsGust.gbapal",
	"graphics/Resize/gCardGraphicsGustFan.gbapal",
	"graphics/Resize/gCardGraphicsGyakutennoMegami.gbapal",
	"graphics/Resize/gCardGraphicsHamburgerRecipe.gbapal",
	"graphics/Resize/gCardGraphicsHaneHane.gbapal",
	"graphics/Resize/gCardGraphicsHaniwa.gbapal",
	"graphics/Resize/gCardGraphicsHappyLover.gbapal",
	"graphics/Resize/gCardGraphicsHardArmor.gbapal",
	"graphics/Resize/gCardGraphicsHarpieLady.gbapal",
	"graphics/Resize/gCardGraphicsHarpieLadySisters.gbapal",
	"graphics/Resize/gCardGraphicsHarpiesBrother.gbapal",
	"graphics/Resize/gCardGraphicsHarpiesFeatherDuster.gbapal",
	"graphics/Resize/gCardGraphicsHarpiesPetDragon.gbapal",
	"graphics/Resize/gCardGraphicsHeavyStorm.gbapal",
	"graphics/Resize/gCardGraphicsHerculesBeetle.gbapal",
	"graphics/Resize/gCardGraphicsHerooftheEast.gbapal",
	"graphics/Resize/gCardGraphicsHibikime.gbapal",
	"graphics/Resize/gCardGraphicsHighTideGyojin.gbapal",
	"graphics/Resize/gCardGraphicsHinotama.gbapal",
	"graphics/Resize/gCardGraphicsHinotamaSoul.gbapal",
	"graphics/Resize/gCardGraphicsHirosShadowScout.gbapal",
	"graphics/Resize/gCardGraphicsHitodenchak.gbapal",
	"graphics/Resize/gCardGraphicsHitotsuMeGiant.gbapal",
	"graphics/Resize/gCardGraphicsHolograh.gbapal",
	"graphics/Resize/gCardGraphicsHornImp.gbapal",
	"graphics/Resize/gCardGraphicsHornofHeaven.gbapal",
	"graphics/Resize/gCardGraphicsHornofLight.gbapal",
	"graphics/Resize/gCardGraphicsHornoftheUnicorn.gbapal",
	"graphics/Resize/gCardGraphicsHoshiningen.gbapal",
	"graphics/Resize/gCardGraphicsHourglassofCourage.gbapal",
	"graphics/Resize/gCardGraphicsHourglassofLife.gbapal",
	"graphics/Resize/gCardGraphicsHouseofAdhesiveTape.gbapal",
	"graphics/Resize/gCardGraphicsHungryBurger.gbapal",
	"graphics/Resize/gCardGraphicsHunterSpider.gbapal",
	"graphics/Resize/gCardGraphicsHyo.gbapal",
	"graphics/Resize/gCardGraphicsHyosube.gbapal",
	"graphics/Resize/gCardGraphicsHyozanryu.gbapal",
	"graphics/Resize/gCardGraphicsIceWater.gbapal",
	"graphics/Resize/gCardGraphicsIllWitch.gbapal",
	"graphics/Resize/gCardGraphicsIllusionistFacelessMage.gbapal",
	"graphics/Resize/gCardGraphicsImperialOrder.gbapal",
	"graphics/Resize/gCardGraphicsInsectArmorwithLaserCannon.gbapal",
	"graphics/Resize/gCardGraphicsInsectQueen.gbapal",
	"graphics/Resize/gCardGraphicsInsectSoldiersoftheSky.gbapal",
	"graphics/Resize/gCardGraphicsInspection.gbapal",
	"graphics/Resize/gCardGraphicsInvaderfromAnotherDimension.gbapal",
	"graphics/Resize/gCardGraphicsInvaderoftheThrone.gbapal",
	"graphics/Resize/gCardGraphicsInvigoration.gbapal",
	"graphics/Resize/gCardGraphicsJavelinBeetle.gbapal",
	"graphics/Resize/gCardGraphicsJavelinBeetlePact.gbapal",
	"graphics/Resize/gCardGraphicsJellyfish.gbapal",
	"graphics/Resize/gCardGraphicsJigenBakudan.gbapal",
	"graphics/Resize/gCardGraphicsJinzo.gbapal",
	"graphics/Resize/gCardGraphicsJinzo7.gbapal",
	"graphics/Resize/gCardGraphicsJiraiGumo.gbapal",
	"graphics/Resize/gCardGraphicsJudgeMan.gbapal",
	"graphics/Resize/gCardGraphicsJustDesserts.gbapal",
	"graphics/Resize/gCardGraphicsKagemushaoftheBlueFlame.gbapal",
	"graphics/Resize/gCardGraphicsKageningen.gbapal",
	"graphics/Resize/gCardGraphicsKairyuShin.gbapal",
	"graphics/Resize/gCardGraphicsKaiserDragon.gbapal",
	"graphics/Resize/gCardGraphicsKamakiriman.gbapal",
	"graphics/Resize/gCardGraphicsKaminariAttack.gbapal",
	"graphics/Resize/gCardGraphicsKaminarikozou.gbapal",
	"graphics/Resize/gCardGraphicsKamionwizard.gbapal",
	"graphics/Resize/gCardGraphicsKanantheSwordmistress.gbapal",
	"graphics/Resize/gCardGraphicsKanikabuto.gbapal",
	"graphics/Resize/gCardGraphicsKarateMan.gbapal",
	"graphics/Resize/gCardGraphicsKarbonalaWarrior.gbapal",
	"graphics/Resize/gCardGraphicsKattapillar.gbapal",
	"graphics/Resize/gCardGraphicsKazejin.gbapal",
	"graphics/Resize/gCardGraphicsKeyMace2.gbapal",
	"graphics/Resize/gCardGraphicsKillerNeedle.gbapal",
	"graphics/Resize/gCardGraphicsKingFog.gbapal",
	"graphics/Resize/gCardGraphicsKingofYamimakai.gbapal",
	"graphics/Resize/gCardGraphicsKiseitai.gbapal",
	"graphics/Resize/gCardGraphicsKojikocy.gbapal",
	"graphics/Resize/gCardGraphicsKotodama.gbapal",
	"graphics/Resize/gCardGraphicsKoumoriDragon.gbapal",
	"graphics/Resize/gCardGraphicsKrokodilus.gbapal",
	"graphics/Resize/gCardGraphicsKumootoko.gbapal",
	"graphics/Resize/gCardGraphicsKunaiwithChain.gbapal",
	"graphics/Resize/gCardGraphicsKurama.gbapal",
	"graphics/Resize/gCardGraphicsKuriboh.gbapal",
	"graphics/Resize/gCardGraphicsKuwagataa.gbapal",
	"graphics/Resize/gCardGraphicsKwagarHercules.gbapal",
	"graphics/Resize/gCardGraphicsLaJinntheMysticalGenieoftheLamp.gbapal",
	"graphics/Resize/gCardGraphicsLabyrinthTank.gbapal",
	"graphics/Resize/gCardGraphicsLabyrinthWall.gbapal",
	"graphics/Resize/gCardGraphicsLadyofFaith.gbapal",
	"graphics/Resize/gCardGraphicsLaLaLioon.gbapal",
	"graphics/Resize/gCardGraphicsLarvaeMoth.gbapal",
	"graphics/Resize/gCardGraphicsLarvas.gbapal",
	"graphics/Resize/gCardGraphicsLaserCannonArmor.gbapal",
	"graphics/Resize/gCardGraphicsLastDayofWitch.gbapal",
	"graphics/Resize/gCardGraphicsLastWill.gbapal",
	"graphics/Resize/gCardGraphicsLaughingFlower.gbapal",
	"graphics/Resize/gCardGraphicsLauncherSpider.gbapal",
	"graphics/Resize/gCardGraphicsLauncherSpider2.gbapal",
	"graphics/Resize/gCardGraphicsLavaBattleguard.gbapal",
	"graphics/Resize/gCardGraphicsLeftArmoftheForbiddenOne.gbapal",
	"graphics/Resize/gCardGraphicsLeftLegoftheForbiddenOne.gbapal",
	"graphics/Resize/gCardGraphicsLegendarySword.gbapal",
	"graphics/Resize/gCardGraphicsLeghul.gbapal",
	"graphics/Resize/gCardGraphicsLeogun.gbapal",
	"graphics/Resize/gCardGraphicsLesserDragon.gbapal",
	"graphics/Resize/gCardGraphicsLightofIntervention.gbapal",
	"graphics/Resize/gCardGraphicsLightforceSword.gbapal",
	"graphics/Resize/gCardGraphicsLiquidBeast.gbapal",
	"graphics/Resize/gCardGraphicsLittleChimera.gbapal",
	"graphics/Resize/gCardGraphicsLittleD.gbapal",
	"graphics/Resize/gCardGraphicsLordofD.gbapal",
	"graphics/Resize/gCardGraphicsLordoftheLamp.gbapal",
	"graphics/Resize/gCardGraphicsLordofZemia.gbapal",
	"graphics/Resize/gCardGraphicsLuminousSpark.gbapal",
	"graphics/Resize/gCardGraphicsLunarQueenElzaim.gbapal",
	"graphics/Resize/gCardGraphicsMabarrel.gbapal",
	"graphics/Resize/gCardGraphicsMachineConversionFactory.gbapal",
	"graphics/Resize/gCardGraphicsMachineKing.gbapal",
	"graphics/Resize/gCardGraphicsMagicJammer.gbapal",
	"graphics/Resize/gCardGraphicsMagicThorn.gbapal",
	"graphics/Resize/gCardGraphicsMagicalGhost.gbapal",
	"graphics/Resize/gCardGraphicsMagicalHats.gbapal",
	"graphics/Resize/gCardGraphicsMagicalLabyrinth.gbapal",
	"graphics/Resize/gCardGraphicsMagicArmShield.gbapal",
	"graphics/Resize/gCardGraphicsMagicianofBlackChaos.gbapal",
	"graphics/Resize/gCardGraphicsMagicianofFaith.gbapal",
	"graphics/Resize/gCardGraphicsMahaVailo.gbapal",
	"graphics/Resize/gCardGraphicsMaidenoftheMoonlight.gbapal",
	"graphics/Resize/gCardGraphicsMajorRiot.gbapal",
	"graphics/Resize/gCardGraphicsMalevolentNuzzler.gbapal",
	"graphics/Resize/gCardGraphicsMammothGraveyard.gbapal",
	"graphics/Resize/gCardGraphicsManEater.gbapal",
	"graphics/Resize/gCardGraphicsManEaterBug.gbapal",
	"graphics/Resize/gCardGraphicsManeatingBlackShark.gbapal",
	"graphics/Resize/gCardGraphicsManEatingPlant.gbapal",
	"graphics/Resize/gCardGraphicsManEatingTreasureChest.gbapal",
	"graphics/Resize/gCardGraphicsMangaRyuRan.gbapal",
	"graphics/Resize/gCardGraphicsMarineBeast.gbapal",
	"graphics/Resize/gCardGraphicsMasakitheLegendarySwordsman.gbapal",
	"graphics/Resize/gCardGraphicsMaskofDarkness.gbapal",
	"graphics/Resize/gCardGraphicsMaskedSorcerer.gbapal",
	"graphics/Resize/gCardGraphicsMasterExpert.gbapal",
	"graphics/Resize/gCardGraphicsMavelus.gbapal",
	"graphics/Resize/gCardGraphicsMechanicalSnail.gbapal",
	"graphics/Resize/gCardGraphicsMechanicalSpider.gbapal",
	"graphics/Resize/gCardGraphicsMechanicalchaser.gbapal",
	"graphics/Resize/gCardGraphicsMedaBat.gbapal",
	"graphics/Resize/gCardGraphicsMegaThunderball.gbapal",
	"graphics/Resize/gCardGraphicsMegamorph.gbapal",
	"graphics/Resize/gCardGraphicsMegazowler.gbapal",
	"graphics/Resize/gCardGraphicsMeotoko.gbapal",
	"graphics/Resize/gCardGraphicsMesmericControl.gbapal",
	"graphics/Resize/gCardGraphicsMessengerofPeace.gbapal",
	"graphics/Resize/gCardGraphicsMetalDetector.gbapal",
	"graphics/Resize/gCardGraphicsMetalDragon.gbapal",
	"graphics/Resize/gCardGraphicsMetalFish.gbapal",
	"graphics/Resize/gCardGraphicsMetalGuardian.gbapal",
	"graphics/Resize/gCardGraphicsMetalmorph.gbapal",
	"graphics/Resize/gCardGraphicsMetalzoa.gbapal",
	"graphics/Resize/gCardGraphicsMeteorBDragon.gbapal",
	"graphics/Resize/gCardGraphicsMeteorDragon.gbapal",
	"graphics/Resize/gCardGraphicsMikazukinoyaiba.gbapal",
	"graphics/Resize/gCardGraphicsMillenniumGolem.gbapal",
	"graphics/Resize/gCardGraphicsMillenniumShield.gbapal",
	"graphics/Resize/gCardGraphicsMilusRadiant.gbapal",
	"graphics/Resize/gCardGraphicsMinar.gbapal",
	"graphics/Resize/gCardGraphicsMinomushiWarrior.gbapal",
	"graphics/Resize/gCardGraphicsMirrorForce.gbapal",
	"graphics/Resize/gCardGraphicsMirrorWall.gbapal",
	"graphics/Resize/gCardGraphicsMisairuzame.gbapal",
	"graphics/Resize/gCardGraphicsMoltenDestruction.gbapal",
	"graphics/Resize/gCardGraphicsMonsterEgg.gbapal",
	"graphics/Resize/gCardGraphicsMonsterEye.gbapal",
	"graphics/Resize/gCardGraphicsMonsterReborn.gbapal",
	"graphics/Resize/gCardGraphicsMonsterTamer.gbapal",
	"graphics/Resize/gCardGraphicsMonstrousBird.gbapal",
	"graphics/Resize/gCardGraphicsMoonEnvoy.gbapal",
	"graphics/Resize/gCardGraphicsMooyanCurry.gbapal",
	"graphics/Resize/gCardGraphicsMorinphen.gbapal",
	"graphics/Resize/gCardGraphicsMorphingJar.gbapal",
	"graphics/Resize/gCardGraphicsMorphingJar2.gbapal",
	"graphics/Resize/gCardGraphicsMotherGrizzly.gbapal",
	"graphics/Resize/gCardGraphicsMountain.gbapal",
	"graphics/Resize/gCardGraphicsMountainWarrior.gbapal",
	"graphics/Resize/gCardGraphicsMrVolcano.gbapal",
	"graphics/Resize/gCardGraphicsMukaMuka.gbapal",
	"graphics/Resize/gCardGraphicsMushroomMan.gbapal",
	"graphics/Resize/gCardGraphicsMushroomMan2.gbapal",
	"graphics/Resize/gCardGraphicsMusicianKing.gbapal",
	"graphics/Resize/gCardGraphicsMWarrior1.gbapal",
	"graphics/Resize/gCardGraphicsMWarrior2.gbapal",
	"graphics/Resize/gCardGraphicsMysteriousPuppeteer.gbapal",
	"graphics/Resize/gCardGraphicsMysticHorseman.gbapal",
	"graphics/Resize/gCardGraphicsMysticLamp.gbapal",
	"graphics/Resize/gCardGraphicsMysticPlasmaZone.gbapal",
	"graphics/Resize/gCardGraphicsMysticProbe.gbapal",
	"graphics/Resize/gCardGraphicsMysticTomato.gbapal",
	"graphics/Resize/gCardGraphicsMysticalCaptureChain.gbapal",
	"graphics/Resize/gCardGraphicsMysticalElf.gbapal",
	"graphics/Resize/gCardGraphicsMysticalMoon.gbapal",
	"graphics/Resize/gCardGraphicsMysticalSand.gbapal",
	"graphics/Resize/gCardGraphicsMysticalSheep1.gbapal",
	"graphics/Resize/gCardGraphicsMysticalSheep2.gbapal",
	"graphics/Resize/gCardGraphicsMysticalSpaceTyphoon.gbapal",
	"graphics/Resize/gCardGraphicsNeedleBall.gbapal",
	"graphics/Resize/gCardGraphicsNeedleWorm.gbapal",
	"graphics/Resize/gCardGraphicsNegateAttack.gbapal",
	"graphics/Resize/gCardGraphicsNekogal1.gbapal",
	"graphics/Resize/gCardGraphicsNekogal2.gbapal",
	"graphics/Resize/gCardGraphicsNemuriko.gbapal",
	"graphics/Resize/gCardGraphicsNeotheMagicSwordsman.gbapal",
	"graphics/Resize/gCardGraphicsNimbleMomonga.gbapal",
	"graphics/Resize/gCardGraphicsNiwatori.gbapal",
	"graphics/Resize/gCardGraphicsNoblemanofCrossout.gbapal",
	"graphics/Resize/gCardGraphicsNoblemanofExtermination.gbapal",
	"graphics/Resize/gCardGraphicsNovoxsPrayer.gbapal",
	"graphics/Resize/gCardGraphicsNuminousHealer.gbapal",
	"graphics/Resize/gCardGraphicsOctoberser.gbapal",
	"graphics/Resize/gCardGraphicsOcubeam.gbapal",
	"graphics/Resize/gCardGraphicsOgreoftheBlackShadow.gbapal",
	"graphics/Resize/gCardGraphicsOneEyedShieldDragon.gbapal",
	"graphics/Resize/gCardGraphicsOoguchi.gbapal",
	"graphics/Resize/gCardGraphicsOokazi.gbapal",
	"graphics/Resize/gCardGraphicsOriontheBattleKing.gbapal",
	"graphics/Resize/gCardGraphicsOscilloHero.gbapal",
	"graphics/Resize/gCardGraphicsOscilloHero2.gbapal",
	"graphics/Resize/gCardGraphicsPainfulChoice.gbapal",
	"graphics/Resize/gCardGraphicsPaleBeast.gbapal",
	"graphics/Resize/gCardGraphicsPantherWarrior.gbapal",
	"graphics/Resize/gCardGraphicsParalyzingPotion.gbapal",
	"graphics/Resize/gCardGraphicsParasiteParacide.gbapal",
	"graphics/Resize/gCardGraphicsParrotDragon.gbapal",
	"graphics/Resize/gCardGraphicsPatrolRobo.gbapal",
	"graphics/Resize/gCardGraphicsPeacock.gbapal",
	"graphics/Resize/gCardGraphicsPendulumMachine.gbapal",
	"graphics/Resize/gCardGraphicsPendulumMachine2.gbapal",
	"graphics/Resize/gCardGraphicsPenguinKnight.gbapal",
	"graphics/Resize/gCardGraphicsPenguinSoldier.gbapal",
	"graphics/Resize/gCardGraphicsPerfectlyUltimateGreatMoth.gbapal",
	"graphics/Resize/gCardGraphicsPerformanceofSword.gbapal",
	"graphics/Resize/gCardGraphicsPetitAngel.gbapal",
	"graphics/Resize/gCardGraphicsPetitDragon.gbapal",
	"graphics/Resize/gCardGraphicsPetitMoth.gbapal",
	"graphics/Resize/gCardGraphicsPolymerization.gbapal",
	"graphics/Resize/gCardGraphicsPolymerization2.gbapal",
	"graphics/Resize/gCardGraphicsPotofGreed.gbapal",
	"graphics/Resize/gCardGraphicsPowerofKaishin.gbapal",
	"graphics/Resize/gCardGraphicsPragtical.gbapal",
	"graphics/Resize/gCardGraphicsPrematureBurial.gbapal",
	"graphics/Resize/gCardGraphicsPreventRat.gbapal",
	"graphics/Resize/gCardGraphicsPrincessofTsurugi.gbapal",
	"graphics/Resize/gCardGraphicsPrisman.gbapal",
	"graphics/Resize/gCardGraphicsProhibition.gbapal",
	"graphics/Resize/gCardGraphicsProtectoroftheThrone.gbapal",
	"graphics/Resize/gCardGraphicsPsychicKappa.gbapal",
	"graphics/Resize/gCardGraphicsPumpkingtheKingofGhosts.gbapal",
	"graphics/Resize/gCardGraphicsPunishedEagle.gbapal",
	"graphics/Resize/gCardGraphicsQueenBird.gbapal",
	"graphics/Resize/gCardGraphicsQueenofAutumnLeaves.gbapal",
	"graphics/Resize/gCardGraphicsQueensDouble.gbapal",
	"graphics/Resize/gCardGraphicsRabidHorseman.gbapal",
	"graphics/Resize/gCardGraphicsRaigeki.gbapal",
	"graphics/Resize/gCardGraphicsRaimei.gbapal",
	"graphics/Resize/gCardGraphicsRainbowFlower.gbapal",
	"graphics/Resize/gCardGraphicsRaiseBodyHeat.gbapal",
	"graphics/Resize/gCardGraphicsRareFish.gbapal",
	"graphics/Resize/gCardGraphicsRayTemperature.gbapal",
	"graphics/Resize/gCardGraphicsReaperoftheCards.gbapal",
	"graphics/Resize/gCardGraphicsRedArcheryGirl.gbapal",
	"graphics/Resize/gCardGraphicsRedMedicine.gbapal",
	"graphics/Resize/gCardGraphicsRedEyesBDragon.gbapal",
	"graphics/Resize/gCardGraphicsRedEyesBlackMetalDragon.gbapal",
	"graphics/Resize/gCardGraphicsReinforcements.gbapal",
	"graphics/Resize/gCardGraphicsRelinquished.gbapal",
	"graphics/Resize/gCardGraphicsRemoveTrap.gbapal",
	"graphics/Resize/gCardGraphicsRespectPlay.gbapal",
	"graphics/Resize/gCardGraphicsRestructerRevolution.gbapal",
	"graphics/Resize/gCardGraphicsResurrectionofChakra.gbapal",
	"graphics/Resize/gCardGraphicsReverseTrap.gbapal",
	"graphics/Resize/gCardGraphicsRevivalofDokurorider.gbapal",
	"graphics/Resize/gCardGraphicsRhaimundosoftheRedSword.gbapal",
	"graphics/Resize/gCardGraphicsRightArmoftheForbiddenOne.gbapal",
	"graphics/Resize/gCardGraphicsRightLegoftheForbiddenOne.gbapal",
	"graphics/Resize/gCardGraphicsRingofMagnetism.gbapal",
	"graphics/Resize/gCardGraphicsRiryoku.gbapal",
	"graphics/Resize/gCardGraphicsRisingAirCurrent.gbapal",
	"graphics/Resize/gCardGraphicsRoaringOceanSnake.gbapal",
	"graphics/Resize/gCardGraphicsRobbinGoblin.gbapal",
	"graphics/Resize/gCardGraphicsRockOgreGrotto1.gbapal",
	"graphics/Resize/gCardGraphicsRogueDoll.gbapal",
	"graphics/Resize/gCardGraphicsRootWater.gbapal",
	"graphics/Resize/gCardGraphicsRoseSpectreofDunn.gbapal",
	"graphics/Resize/gCardGraphicsRoyalDecree.gbapal",
	"graphics/Resize/gCardGraphicsRoyalGuard.gbapal",
	"graphics/Resize/gCardGraphicsRudeKaiser.gbapal",
	"graphics/Resize/gCardGraphicsRushRecklessly.gbapal",
	"graphics/Resize/gCardGraphicsRyuKishin.gbapal",
	"graphics/Resize/gCardGraphicsRyuKishinPowered.gbapal",
	"graphics/Resize/gCardGraphicsRyuRan.gbapal",
	"graphics/Resize/gCardGraphicsSaberSlasher.gbapal",
	"graphics/Resize/gCardGraphicsSaggitheDarkClown.gbapal",
	"graphics/Resize/gCardGraphicsSalamandra.gbapal",
	"graphics/Resize/gCardGraphicsSandStone.gbapal",
	"graphics/Resize/gCardGraphicsSangaoftheThunder.gbapal",
	"graphics/Resize/gCardGraphicsSangan.gbapal",
	"graphics/Resize/gCardGraphicsSeaKamen.gbapal",
	"graphics/Resize/gCardGraphicsSeaKingDragon.gbapal",
	"graphics/Resize/gCardGraphicsSealoftheAncients.gbapal",
	"graphics/Resize/gCardGraphicsSebeksBlessing.gbapal",
	"graphics/Resize/gCardGraphicsSectarianofSecrets.gbapal",
	"graphics/Resize/gCardGraphicsSeiyaryu.gbapal",
	"graphics/Resize/gCardGraphicsSengenjin.gbapal",
	"graphics/Resize/gCardGraphicsSenjuoftheThousandHands.gbapal",
	"graphics/Resize/gCardGraphicsSerpentNightDragon.gbapal",
	"graphics/Resize/gCardGraphicsSevenToolsoftheBandit.gbapal",
	"graphics/Resize/gCardGraphicsShadowGhoul.gbapal",
	"graphics/Resize/gCardGraphicsShadowSpecter.gbapal",
	"graphics/Resize/gCardGraphicsSharethePain.gbapal",
	"graphics/Resize/gCardGraphicsShieldSword.gbapal",
	"graphics/Resize/gCardGraphicsShiningFairy.gbapal",
	"graphics/Resize/gCardGraphicsShovelCrusher.gbapal",
	"graphics/Resize/gCardGraphicsSilverBowandArrow.gbapal",
	"graphics/Resize/gCardGraphicsSilverFang.gbapal",
	"graphics/Resize/gCardGraphicsSinisterSerpent.gbapal",
	"graphics/Resize/gCardGraphicsSkelengel.gbapal",
	"graphics/Resize/gCardGraphicsSkelgon.gbapal",
	"graphics/Resize/gCardGraphicsSkullDice.gbapal",
	"graphics/Resize/gCardGraphicsSkullGuardian.gbapal",
	"graphics/Resize/gCardGraphicsSkullKnight.gbapal",
	"graphics/Resize/gCardGraphicsSkullRedBird.gbapal",
	"graphics/Resize/gCardGraphicsSkullServant.gbapal",
	"graphics/Resize/gCardGraphicsSkullStalker.gbapal",
	"graphics/Resize/gCardGraphicsSkullbird.gbapal",
	"graphics/Resize/gCardGraphicsSleepingLion.gbapal",
	"graphics/Resize/gCardGraphicsSlotMachine.gbapal",
	"graphics/Resize/gCardGraphicsSnakeFang.gbapal",
	"graphics/Resize/gCardGraphicsSnakeyashi.gbapal",
	"graphics/Resize/gCardGraphicsSnatchSteal.gbapal",
	"graphics/Resize/gCardGraphicsSogen.gbapal",
	"graphics/Resize/gCardGraphicsSolemnJudgment.gbapal",
	"graphics/Resize/gCardGraphicsSolitude.gbapal",
	"graphics/Resize/gCardGraphicsSolomonsLawbook.gbapal",
	"graphics/Resize/gCardGraphicsSonicBird.gbapal",
	"graphics/Resize/gCardGraphicsSonicMaid.gbapal",
	"graphics/Resize/gCardGraphicsSoulHunter.gbapal",
	"graphics/Resize/gCardGraphicsSoulofthePure.gbapal",
	"graphics/Resize/gCardGraphicsSoulRelease.gbapal",
	"graphics/Resize/gCardGraphicsSparks.gbapal",
	"graphics/Resize/gCardGraphicsSpearCretin.gbapal",
	"graphics/Resize/gCardGraphicsSpellbindingCircle.gbapal",
	"graphics/Resize/gCardGraphicsSpikeSeadra.gbapal",
	"graphics/Resize/gCardGraphicsSpiritoftheBooks.gbapal",
	"graphics/Resize/gCardGraphicsSpiritoftheHarp.gbapal",
	"graphics/Resize/gCardGraphicsStainStorm.gbapal",
	"graphics/Resize/gCardGraphicsStarBoy.gbapal",
	"graphics/Resize/gCardGraphicsSteelOgreGrotto1.gbapal",
	"graphics/Resize/gCardGraphicsSteelOgreGrotto2.gbapal",
	"graphics/Resize/gCardGraphicsSteelScorpion.gbapal",
	"graphics/Resize/gCardGraphicsSteelShell.gbapal",
	"graphics/Resize/gCardGraphicsStimPack.gbapal",
	"graphics/Resize/gCardGraphicsStoneArmadiller.gbapal",
	"graphics/Resize/gCardGraphicsStoneOgreGrotto.gbapal",
	"graphics/Resize/gCardGraphicsStopDefense.gbapal",
	"graphics/Resize/gCardGraphicsStuffedAnimal.gbapal",
	"graphics/Resize/gCardGraphicsSuccubusKnight.gbapal",
	"graphics/Resize/gCardGraphicsSuijin.gbapal",
	"graphics/Resize/gCardGraphicsSummonedSkull.gbapal",
	"graphics/Resize/gCardGraphicsSuperWarLion.gbapal",
	"graphics/Resize/gCardGraphicsSupporterintheShadows.gbapal",
	"graphics/Resize/gCardGraphicsSwampBattleguard.gbapal",
	"graphics/Resize/gCardGraphicsSwordArmofDragon.gbapal",
	"graphics/Resize/gCardGraphicsSwordofDarkDestruction.gbapal",
	"graphics/Resize/gCardGraphicsSwordofDeepSeated.gbapal",
	"graphics/Resize/gCardGraphicsSwordofDragonsSoul.gbapal",
	"graphics/Resize/gCardGraphicsSwordsofRevealingLight.gbapal",
	"graphics/Resize/gCardGraphicsSwordsmanfromaForeignLand.gbapal",
	"graphics/Resize/gCardGraphicsSwordstalker.gbapal",
	"graphics/Resize/gCardGraphicsTailoroftheFickle.gbapal",
	"graphics/Resize/gCardGraphicsTaintedWisdom.gbapal",
	"graphics/Resize/gCardGraphicsTakriminos.gbapal",
	"graphics/Resize/gCardGraphicsTakuhee.gbapal",
	"graphics/Resize/gCardGraphicsTaotheChanter.gbapal",
	"graphics/Resize/gCardGraphicsTempleofSkulls.gbapal",
	"graphics/Resize/gCardGraphicsTenderness.gbapal",
	"graphics/Resize/gCardGraphicsTerratheTerrible.gbapal",
	"graphics/Resize/gCardGraphicsThe13thGrave.gbapal",
	"graphics/Resize/gCardGraphicsTheBewitchingPhantomThief.gbapal",
	"graphics/Resize/gCardGraphicsTheBistroButcher.gbapal",
	"graphics/Resize/gCardGraphicsTheCheerfulCoffin.gbapal",
	"graphics/Resize/gCardGraphicsTheDrdek.gbapal",
	"graphics/Resize/gCardGraphicsTheEyeofTruth.gbapal",
	"graphics/Resize/gCardGraphicsTheFluteofSummoningDragon.gbapal",
	"graphics/Resize/gCardGraphicsTheForcefulSentry.gbapal",
	"graphics/Resize/gCardGraphicsTheFuriousSeaKing.gbapal",
	"graphics/Resize/gCardGraphicsTheImmortalofThunder.gbapal",
	"graphics/Resize/gCardGraphicsTheInexperiencedSpy.gbapal",
	"graphics/Resize/gCardGraphicsTheLittleSwordsmanofAile.gbapal",
	"graphics/Resize/gCardGraphicsTheRegulationofTribe.gbapal",
	"graphics/Resize/gCardGraphicsTheReliableGuardian.gbapal",
	"graphics/Resize/gCardGraphicsTheShallowGrave.gbapal",
	"graphics/Resize/gCardGraphicsTheSnakeHair.gbapal",
	"graphics/Resize/gCardGraphicsTheSternMystic.gbapal",
	"graphics/Resize/gCardGraphicsTheThingThatHidesintheMud.gbapal",
	"graphics/Resize/gCardGraphicsTheUnhappyMaiden.gbapal",
	"graphics/Resize/gCardGraphicsTheWanderingDoomed.gbapal",
	"graphics/Resize/gCardGraphicsTheWickedWormBeast.gbapal",
	"graphics/Resize/gCardGraphicsThousandDragon.gbapal",
	"graphics/Resize/gCardGraphicsThousandDragon2.gbapal",
	"graphics/Resize/gCardGraphicsThreeHeadedGeedo.gbapal",
	"graphics/Resize/gCardGraphicsThreeLeggedZombies.gbapal",
	"graphics/Resize/gCardGraphicsThunderDragon.gbapal",
	"graphics/Resize/gCardGraphicsTigerAxe.gbapal",
	"graphics/Resize/gCardGraphicsTigerAxe2.gbapal",
	"graphics/Resize/gCardGraphicsTimeMachine.gbapal",
	"graphics/Resize/gCardGraphicsTimeSeal.gbapal",
	"graphics/Resize/gCardGraphicsTimeWizard.gbapal",
	"graphics/Resize/gCardGraphicsToadMaster.gbapal",
	"graphics/Resize/gCardGraphicsTogex.gbapal",
	"graphics/Resize/gCardGraphicsToll.gbapal",
	"graphics/Resize/gCardGraphicsTomozaurus.gbapal",
	"graphics/Resize/gCardGraphicsTongyo.gbapal",
	"graphics/Resize/gCardGraphicsToonAlligator.gbapal",
	"graphics/Resize/gCardGraphicsToonMermaid.gbapal",
	"graphics/Resize/gCardGraphicsToonSummonedSkull.gbapal",
	"graphics/Resize/gCardGraphicsToonWorld.gbapal",
	"graphics/Resize/gCardGraphicsTorike.gbapal",
	"graphics/Resize/gCardGraphicsTotalDefenseShogun.gbapal",
	"graphics/Resize/gCardGraphicsTrakadon.gbapal",
	"graphics/Resize/gCardGraphicsTrapHole.gbapal",
	"graphics/Resize/gCardGraphicsTrapMaster.gbapal",
	"graphics/Resize/gCardGraphicsTremendousFire.gbapal",
	"graphics/Resize/gCardGraphicsTrent.gbapal",
	"graphics/Resize/gCardGraphicsTrialofNightmare.gbapal",
	"graphics/Resize/gCardGraphicsTributetoTheDoomed.gbapal",
	"graphics/Resize/gCardGraphicsTriHornedDragon.gbapal",
	"graphics/Resize/gCardGraphicsTripwireBeast.gbapal",
	"graphics/Resize/gCardGraphicsTurtleOath.gbapal",
	"graphics/Resize/gCardGraphicsTurtleTiger.gbapal",
	"graphics/Resize/gCardGraphicsTwinLongRods2.gbapal",
	"graphics/Resize/gCardGraphicsTwinHeadedFireDragon.gbapal",
	"graphics/Resize/gCardGraphicsTwinHeadedThunderDragon.gbapal",
	"graphics/Resize/gCardGraphicsTwoHeadedKingRex.gbapal",
	"graphics/Resize/gCardGraphicsTwoMouthDarkruler.gbapal",
	"graphics/Resize/gCardGraphicsTwoProngedAttack.gbapal",
	"graphics/Resize/gCardGraphicsTyhone.gbapal",
	"graphics/Resize/gCardGraphicsTyhone2.gbapal",
	"graphics/Resize/gCardGraphicsUFOTurtle.gbapal",
	"graphics/Resize/gCardGraphicsUltimateOffering.gbapal",
	"graphics/Resize/gCardGraphicsUmi.gbapal",
	"graphics/Resize/gCardGraphicsUmiiruka.gbapal",
	"graphics/Resize/gCardGraphicsUnknownWarriorofFiend.gbapal",
	"graphics/Resize/gCardGraphicsUpstartGoblin.gbapal",
	"graphics/Resize/gCardGraphicsUraby.gbapal",
	"graphics/Resize/gCardGraphicsUshiOni.gbapal",
	"graphics/Resize/gCardGraphicsValkyriontheMagnaWarrior.gbapal",
	"graphics/Resize/gCardGraphicsVermillionSparrow.gbapal",
	"graphics/Resize/gCardGraphicsVersagotheDestroyer.gbapal",
	"graphics/Resize/gCardGraphicsVileGerms.gbapal",
	"graphics/Resize/gCardGraphicsViolentRain.gbapal",
	"graphics/Resize/gCardGraphicsVioletCrystal.gbapal",
	"graphics/Resize/gCardGraphicsVishwarRandi.gbapal",
	"graphics/Resize/gCardGraphicsVorseRaider.gbapal",
	"graphics/Resize/gCardGraphicsWaboku.gbapal",
	"graphics/Resize/gCardGraphicsWallofIllusion.gbapal",
	"graphics/Resize/gCardGraphicsWallShadow.gbapal",
	"graphics/Resize/gCardGraphicsWarLionRitual.gbapal",
	"graphics/Resize/gCardGraphicsWarriorElimination.gbapal",
	"graphics/Resize/gCardGraphicsWarriorofTradition.gbapal",
	"graphics/Resize/gCardGraphicsWasteland.gbapal",
	"graphics/Resize/gCardGraphicsWaterElement.gbapal",
	"graphics/Resize/gCardGraphicsWaterGirl.gbapal",
	"graphics/Resize/gCardGraphicsWaterMagician.gbapal",
	"graphics/Resize/gCardGraphicsWaterOmotics.gbapal",
	"graphics/Resize/gCardGraphicsWaterdragonFairy.gbapal",
	"graphics/Resize/gCardGraphicsWeatherControl.gbapal",
	"graphics/Resize/gCardGraphicsWeatherReport.gbapal",
	"graphics/Resize/gCardGraphicsWhiptailCrow.gbapal",
	"graphics/Resize/gCardGraphicsWhiteHole.gbapal",
	"graphics/Resize/gCardGraphicsWhiteMagicalHat.gbapal",
	"graphics/Resize/gCardGraphicsWickedMirror.gbapal",
	"graphics/Resize/gCardGraphicsWidespreadRuin.gbapal",
	"graphics/Resize/gCardGraphicsWindstormofEtaqua.gbapal",
	"graphics/Resize/gCardGraphicsWingEggElf.gbapal",
	"graphics/Resize/gCardGraphicsWingedCleaver.gbapal",
	"graphics/Resize/gCardGraphicsWingedDragonGuardianoftheFortress1.gbapal",
	"graphics/Resize/gCardGraphicsWingsofWickedFlame.gbapal",
	"graphics/Resize/gCardGraphicsWitchoftheBlackForest.gbapal",
	"graphics/Resize/gCardGraphicsWitchsApprentice.gbapal",
	"graphics/Resize/gCardGraphicsWittyPhantom.gbapal",
	"graphics/Resize/gCardGraphicsWodantheResidentoftheForest.gbapal",
	"graphics/Resize/gCardGraphicsWoodRemains.gbapal",
	"graphics/Resize/gCardGraphicsWorldSuppression.gbapal",
	"graphics/Resize/gCardGraphicsWowWarrior.gbapal",
	"graphics/Resize/gCardGraphicsWretchedGhostoftheAttic.gbapal",
	"graphics/Resize/gCardGraphicsYadoKaru.gbapal",
	"graphics/Resize/gCardGraphicsYaibaRobo.gbapal",
	"graphics/Resize/gCardGraphicsYamatanoDragonScroll.gbapal",
	"graphics/Resize/gCardGraphicsYami.gbapal",
	"graphics/Resize/gCardGraphicsYaranzo.gbapal",
	"graphics/Resize/gCardGraphicsZanki.gbapal",
	"graphics/Resize/gCardGraphicsZeraRitual.gbapal",
	"graphics/Resize/gCardGraphicsZeraTheMant.gbapal",
	"graphics/Resize/gCardGraphicsZoa.gbapal",
	"graphics/Resize/gCardGraphicsZombieWarrior.gbapal",
	"graphics/Resize/gCardGraphicsZoneEater.gbapal",
	"graphics/Resize/gCardGraphicsTheMonarchy.gbapal",
	"graphics/Resize/gCardGraphicsSetSailfortheKingdom.gbapal",
	"graphics/Resize/gCardGraphicsGloryoftheKingsHand.gbapal",
	"graphics/Resize/gCardGraphicsObelisktheTormentor.gbapal",
	"graphics/Resize/gCardGraphicsSlifertheSkyDragon.gbapal",
	"graphics/Resize/gCardGraphicsTheWingedDragonofRa.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal",
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal"
);

const struct CardStats gCardStats[] =
{
	[CARD_NUMBER_NONE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_7_COLORED_FISH]
	{
		.defense = 80,
		.attack = 180,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FISH,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_7_COMPLETED]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_ACID_CRAWLER]
	{
		.defense = 70,
		.attack = 90,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_INSECT,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_ACID_TRAP_HOLE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_AIR_EATER]
	{
		.defense = 160,
		.attack = 210,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 6,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_AIR_MARMOT_OF_NEFARIOUSNESS]
	{
		.defense = 60,
		.attack = 40,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_AKAKIEISU]
	{
		.defense = 80,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_AKIHIRON]
	{
		.defense = 140,
		.attack = 170,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 5,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_ALLIGATOR_S_SWORD]
	{
		.defense = 120,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_ALLIGATOR_S_SWORD_DRAGON]
	{
		.defense = 150,
		.attack = 170,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_DRAGON,
		.level = 5,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_ALPHA_THE_MAGNET_WARRIOR]
	{
		.defense = 170,
		.attack = 140,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ROCK,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_AMAZON_OF_THE_SEAS]
	{
		.defense = 140,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FISH,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_AMEBA]
	{
		.defense = 35,
		.attack = 30,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_AQUA,
		.level = 1,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_AMPHIBIOUS_BUGROTH]
	{
		.defense = 130,
		.attack = 185,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_AQUA,
		.level = 5,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_ANCIENT_BRAIN]
	{
		.defense = 70,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_ANCIENT_ELF]
	{
		.defense = 120,
		.attack = 145,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 4,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_ANCIENT_JAR]
	{
		.defense = 20,
		.attack = 40,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ROCK,
		.level = 1,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_ANCIENT_LIZARD_WARRIOR]
	{
		.defense = 110,
		.attack = 140,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_REPTILE,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_ANCIENT_ONE_OF_THE_DEEP_FOREST]
	{
		.defense = 190,
		.attack = 180,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 6,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_ANCIENT_TELESCOPE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_ANCIENT_TOOL]
	{
		.defense = 140,
		.attack = 170,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 5,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_ANSATSU]
	{
		.defense = 120,
		.attack = 170,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_ANTHROSAURUS]
	{
		.defense = 85,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DINOSAUR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_ANTI_RAIGEKI]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_ANTI_MAGIC_FRAGRANCE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_APPROPRIATE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_AQUA_CHORUS]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_AQUA_DRAGON]
	{
		.defense = 190,
		.attack = 225,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_SEA_SERPENT,
		.level = 6,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_AQUA_MADOOR]
	{
		.defense = 200,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_ARLOWNAY]
	{
		.defense = 100,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PLANT,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_ARMA_KNIGHT]
	{
		.defense = 120,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_ARMAILL]
	{
		.defense = 130,
		.attack = 70,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_ARMED_NINJA]
	{
		.defense = 30,
		.attack = 30,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 1,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_ARMORED_GLASS]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_ARMORED_LIZARD]
	{
		.defense = 120,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_REPTILE,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_ARMORED_RAT]
	{
		.defense = 110,
		.attack = 95,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_ARMORED_STARFISH]
	{
		.defense = 140,
		.attack = 85,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_ARMORED_ZOMBIE]
	{
		.defense = 0,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_AXE_OF_DESPAIR]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_AXE_RAIDER]
	{
		.defense = 115,
		.attack = 170,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_B_DRAGON_JUNGLE_KING]
	{
		.defense = 180,
		.attack = 210,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 6,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_B_SKULL_DRAGON]
	{
		.defense = 250,
		.attack = 320,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_DRAGON,
		.level = 9,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_BABY_DRAGON]
	{
		.defense = 70,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 3,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_BACKUP_SOLDIER]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_BANISHER_OF_THE_LIGHT]
	{
		.defense = 200,
		.attack = 10,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FAIRY,
		.level = 3,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_BAROX]
	{
		.defense = 153,
		.attack = 138,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_FIEND,
		.level = 5,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_BARREL_DRAGON]
	{
		.defense = 220,
		.attack = 260,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MACHINE,
		.level = 7,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_BARREL_LILY]
	{
		.defense = 60,
		.attack = 110,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PLANT,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_BARREL_ROCK]
	{
		.defense = 130,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ROCK,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_BASIC_INSECT]
	{
		.defense = 70,
		.attack = 50,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_INSECT,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_BATTLE_OX]
	{
		.defense = 100,
		.attack = 170,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_BATTLE_STEER]
	{
		.defense = 130,
		.attack = 180,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST_WARRIOR,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_BATTLE_WARRIOR]
	{
		.defense = 100,
		.attack = 70,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_BEAN_SOLDIER]
	{
		.defense = 130,
		.attack = 140,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PLANT,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_BEAST_FANGS]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_BEASTKING_OF_THE_SWAMPS]
	{
		.defense = 110,
		.attack = 100,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_BEASTLY_MIRROR_RITUAL]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_BEAUTIFUL_HEADHUNTRESS]
	{
		.defense = 80,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_BEAVER_WARRIOR]
	{
		.defense = 150,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_BEHEGON]
	{
		.defense = 100,
		.attack = 135,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_BELL_OF_DESTRUCTION]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_BETA_THE_MAGNET_WARRIOR]
	{
		.defense = 160,
		.attack = 170,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ROCK,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_BICKURIBOX]
	{
		.defense = 200,
		.attack = 230,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_FIEND,
		.level = 7,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_BIG_EYE]
	{
		.defense = 100,
		.attack = 120,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_BIG_INSECT]
	{
		.defense = 150,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_INSECT,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_BIG_SHIELD_GARDNA]
	{
		.defense = 260,
		.attack = 10,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_BINDING_CHAIN]
	{
		.defense = 110,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FAIRY,
		.level = 3,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_BIO_PLANT]
	{
		.defense = 130,
		.attack = 60,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_BLACK_ILLUSION_RITUAL]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_BLACK_LUSTER_RITUAL]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_BLACK_LUSTER_SOLDIER]
	{
		.defense = 250,
		.attack = 300,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_WARRIOR,
		.level = 8,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_BLACK_PENDANT]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_BLACKLAND_FIRE_DRAGON]
	{
		.defense = 80,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_BLADEFLY]
	{
		.defense = 70,
		.attack = 60,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_INSECT,
		.level = 2,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_BLAST_JUGGLER]
	{
		.defense = 90,
		.attack = 80,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MACHINE,
		.level = 3,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_BLAST_SPHERE]
	{
		.defense = 140,
		.attack = 140,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MACHINE,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_BLOCK_ATTACK]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_BLUE_MEDICINE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_BLUE_EYED_SILVER_ZOMBIE]
	{
		.defense = 70,
		.attack = 90,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_BLUE_EYES_TOON_DRAGON]
	{
		.defense = 250,
		.attack = 300,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_DRAGON,
		.level = 8,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_BLUE_EYES_ULTIMATE_DRAGON]
	{
		.defense = 380,
		.attack = 450,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_DRAGON,
		.level = 12,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_BLUE_EYES_WHITE_DRAGON]
	{
		.defense = 250,
		.attack = 300,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 8,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_BLUE_EYES_WHITE_DRAGON_2]
	{
		.defense = 250,
		.attack = 300,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 8,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_BLUE_WINGED_CROWN]
	{
		.defense = 120,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WINGED_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_BOAR_SOLDIER]
	{
		.defense = 50,
		.attack = 200,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_BEAST_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_BOLT_ESCARGOT]
	{
		.defense = 150,
		.attack = 140,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_THUNDER,
		.level = 5,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_BOOK_OF_SECRET_ARTS]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_BOTTOM_DWELLER]
	{
		.defense = 170,
		.attack = 165,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FISH,
		.level = 5,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_BRACCHIO_RAIDUS]
	{
		.defense = 200,
		.attack = 220,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_DINOSAUR,
		.level = 6,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_BREATH_OF_LIGHT]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_BRIGHT_CASTLE]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_BURGLAR]
	{
		.defense = 80,
		.attack = 85,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_BURNING_SPEAR]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_BUSTER_BLADER]
	{
		.defense = 230,
		.attack = 260,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 7,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_CALL_OF_THE_DARK]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_CALL_OF_THE_GRAVE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_CALL_OF_THE_HAUNTED]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_CANDLE_OF_FATE]
	{
		.defense = 60,
		.attack = 60,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_CANNON_SOLDIER]
	{
		.defense = 130,
		.attack = 140,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MACHINE,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_CASTLE_OF_DARK_ILLUSIONS]
	{
		.defense = 193,
		.attack = 92,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_CASTLE_WALLS]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_CATAPULT_TURTLE]
	{
		.defense = 200,
		.attack = 100,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_AQUA,
		.level = 5,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_CEASEFIRE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_CELTIC_GUARDIAN]
	{
		.defense = 120,
		.attack = 140,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_CELTIC_GUARDIAN_2]
	{
		.defense = 120,
		.attack = 140,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_CEREMONIAL_BELL]
	{
		.defense = 185,
		.attack = 0,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_SPELLCASTER,
		.level = 3,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_CHAIN_DESTRUCTION]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_CHAIN_ENERGY]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_CHAKRA]
	{
		.defense = 200,
		.attack = 245,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_FIEND,
		.level = 7,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_CHANGE_OF_HEART]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_CHARUBIN_THE_FIRE_KNIGHT]
	{
		.defense = 80,
		.attack = 110,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_PYRO,
		.level = 3,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_CHORUS_OF_SANCTUARY]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_CLAW_REACHER]
	{
		.defense = 80,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_CLOWN_ZOMBIE]
	{
		.defense = 0,
		.attack = 135,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_COCKROACH_KNIGHT]
	{
		.defense = 90,
		.attack = 80,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_INSECT,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_COCOON_OF_EVOLUTION]
	{
		.defense = 200,
		.attack = 0,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_INSECT,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_COMMENCEMENT_DANCE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_CONFISCATION]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_COSMO_QUEEN]
	{
		.defense = 245,
		.attack = 290,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 8,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_CRAB_TURTLE]
	{
		.defense = 250,
		.attack = 255,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_AQUA,
		.level = 8,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_CRASS_CLOWN]
	{
		.defense = 140,
		.attack = 135,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_CRAWLING_DRAGON]
	{
		.defense = 140,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_CRAWLING_DRAGON_2]
	{
		.defense = 120,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DINOSAUR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_CRAZY_FISH]
	{
		.defense = 120,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FISH,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_CRIMSON_SUNBIRD]
	{
		.defense = 180,
		.attack = 230,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_WINGED_BEAST,
		.level = 6,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_CROW_GOBLIN]
	{
		.defense = 160,
		.attack = 185,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WINGED_BEAST,
		.level = 5,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_CRUSH_CARD]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_CURSE_OF_DRAGON]
	{
		.defense = 150,
		.attack = 200,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 5,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_CURSE_OF_FIEND]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_CURTAIN_OF_THE_DARK_ONES]
	{
		.defense = 50,
		.attack = 60,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_CYBER_COMMANDER]
	{
		.defense = 70,
		.attack = 75,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_CYBER_FALCON]
	{
		.defense = 120,
		.attack = 140,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 4,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_CYBER_JAR]
	{
		.defense = 90,
		.attack = 90,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_ROCK,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_CYBER_SAURUS]
	{
		.defense = 140,
		.attack = 180,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_MACHINE,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_CYBER_SHIELD]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_CYBER_SOLDIER]
	{
		.defense = 170,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 5,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_CYBER_STEIN]
	{
		.defense = 50,
		.attack = 70,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MACHINE,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_CYBER_TECH_ALLIGATOR]
	{
		.defense = 160,
		.attack = 250,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 5,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_D_HUMAN]
	{
		.defense = 110,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_DANCING_ELF]
	{
		.defense = 20,
		.attack = 30,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FAIRY,
		.level = 1,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_DARK_ARTIST]
	{
		.defense = 140,
		.attack = 60,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_DARK_ASSAILANT]
	{
		.defense = 120,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_DARK_CHIMERA]
	{
		.defense = 146,
		.attack = 161,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 5,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_DARK_ELF]
	{
		.defense = 80,
		.attack = 200,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_SPELLCASTER,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_DARK_ENERGY]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_DARK_GRAY]
	{
		.defense = 90,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_DARK_HOLE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_DARK_KING_OF_THE_ABYSS]
	{
		.defense = 80,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_DARK_MAGIC_RITUAL]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_DARK_MAGICIAN]
	{
		.defense = 210,
		.attack = 250,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 7,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_DARK_MAGICIAN_2]
	{
		.defense = 210,
		.attack = 250,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 7,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_DARK_MAGICIAN_GIRL]
	{
		.defense = 170,
		.attack = 200,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_SPELLCASTER,
		.level = 6,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_DARK_RABBIT]
	{
		.defense = 150,
		.attack = 110,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_DARK_SAGE]
	{
		.defense = 320,
		.attack = 280,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_SPELLCASTER,
		.level = 9,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_DARK_SHADE]
	{
		.defense = 100,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 3,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_DARK_WITCH]
	{
		.defense = 170,
		.attack = 180,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FAIRY,
		.level = 5,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_DARK_ZEBRA]
	{
		.defense = 40,
		.attack = 180,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_DARK_EYES_ILLUSIONIST]
	{
		.defense = 140,
		.attack = 0,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_SPELLCASTER,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_DARKFIRE_DRAGON]
	{
		.defense = 125,
		.attack = 150,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_DRAGON,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_DARKFIRE_SOLDIER_1]
	{
		.defense = 115,
		.attack = 170,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PYRO,
		.level = 4,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_DARKFIRE_SOLDIER_2]
	{
		.defense = 110,
		.attack = 170,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PYRO,
		.level = 4,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_DARKNESS_APPROACHES]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_DARK_PIERCING_LIGHT]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_DARKWORLD_THORNS]
	{
		.defense = 90,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PLANT,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_DEEPSEA_SHARK]
	{
		.defense = 160,
		.attack = 190,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_FISH,
		.level = 5,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_DELINQUENT_DUO]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_DE_SPELL]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_DESTROYER_GOLEM]
	{
		.defense = 100,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ROCK,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_DIAN_KETO_THE_CURE_MASTER]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_DICE_ARMADILLO]
	{
		.defense = 180,
		.attack = 165,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_DIMENSIONAL_WARRIOR]
	{
		.defense = 100,
		.attack = 120,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_DISK_MAGICIAN]
	{
		.defense = 100,
		.attack = 135,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_DISSOLVEROCK]
	{
		.defense = 100,
		.attack = 90,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ROCK,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_DNA_SURGERY]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_DOKUROIZO_THE_GRIM_REAPER]
	{
		.defense = 120,
		.attack = 90,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_DOKURORIDER]
	{
		.defense = 185,
		.attack = 190,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_ZOMBIE,
		.level = 6,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_DOMA_THE_ANGEL_OF_SILENCE]
	{
		.defense = 140,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FAIRY,
		.level = 5,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_DORON]
	{
		.defense = 50,
		.attack = 90,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_DOROVER]
	{
		.defense = 80,
		.attack = 90,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 3,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_DRAGON_CAPTURE_JAR]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_DRAGON_PIPER]
	{
		.defense = 180,
		.attack = 20,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_PYRO,
		.level = 3,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_DRAGON_SEEKER]
	{
		.defense = 210,
		.attack = 200,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 6,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_DRAGON_TREASURE]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_DRAGON_ZOMBIE]
	{
		.defense = 0,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_DRAGONESS_THE_WICKED_KNIGHT]
	{
		.defense = 90,
		.attack = 120,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_DREAM_CLOWN]
	{
		.defense = 90,
		.attack = 120,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_DRIVING_SNOW]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_DROOLING_LIZARD]
	{
		.defense = 80,
		.attack = 90,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_REPTILE,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_DRYAD]
	{
		.defense = 140,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_DUNAMES_DARK_WITCH]
	{
		.defense = 105,
		.attack = 180,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FAIRY,
		.level = 4,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_DUNGEON_WORM]
	{
		.defense = 150,
		.attack = 180,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_INSECT,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_DUST_TORNADO]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_EARTHSHAKER]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_EATGABOON]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_ELDEEN]
	{
		.defense = 100,
		.attack = 95,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 3,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_ELECTRIC_LIZARD]
	{
		.defense = 80,
		.attack = 85,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_THUNDER,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_ELECTRIC_SNAKE]
	{
		.defense = 90,
		.attack = 80,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_THUNDER,
		.level = 3,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_ELECTRO_WHIP]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_ELEGANT_EGOTIST]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_ELF_S_LIGHT]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_EMPRESS_JUDGE]
	{
		.defense = 170,
		.attack = 210,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_WARRIOR,
		.level = 6,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_ENCHANTED_JAVELIN]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_ENCHANTING_MERMAID]
	{
		.defense = 90,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FISH,
		.level = 3,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_ERADICATING_AEROSOL]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_ETERNAL_DRAUGHT]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_ETERNAL_REST]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_EXCHANGE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_EXILE_OF_THE_WICKED]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_EXODIA_THE_FORBIDDEN_ONE]
	{
		.defense = 100,
		.attack = 100,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_SPELLCASTER,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_EYEARMOR]
	{
		.defense = 50,
		.attack = 60,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_FAIRY_DRAGON]
	{
		.defense = 120,
		.attack = 110,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 4,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_FAIRY_S_HAND_MIRROR]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_FAIRYWITCH]
	{
		.defense = 100,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_FAITH_BIRD]
	{
		.defense = 110,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WINGED_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_FAKE_TRAP]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_FERAL_IMP]
	{
		.defense = 140,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_FIEND_KRAKEN]
	{
		.defense = 140,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_FIEND_REFLECTION_1]
	{
		.defense = 140,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WINGED_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_FIEND_REFLECTION_2]
	{
		.defense = 140,
		.attack = 110,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WINGED_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_FIEND_SWORD]
	{
		.defense = 80,
		.attack = 140,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_FIEND_S_HAND]
	{
		.defense = 60,
		.attack = 60,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_FIEND_S_MIRROR]
	{
		.defense = 180,
		.attack = 210,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_FIEND,
		.level = 6,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_FINAL_DESTINY]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_FINAL_FLAME]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_FIRE_KRAKEN]
	{
		.defense = 150,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_FIRE_REAPER]
	{
		.defense = 50,
		.attack = 70,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_FIREGRASS]
	{
		.defense = 60,
		.attack = 70,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PLANT,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_FIREWING_PEGASUS]
	{
		.defense = 180,
		.attack = 225,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 6,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_FIREYAROU]
	{
		.defense = 100,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PYRO,
		.level = 4,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_FISSURE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_FLAME_CEREBRUS]
	{
		.defense = 180,
		.attack = 210,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PYRO,
		.level = 6,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_FLAME_CHAMPION]
	{
		.defense = 130,
		.attack = 190,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PYRO,
		.level = 5,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_FLAME_GHOST]
	{
		.defense = 80,
		.attack = 100,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_ZOMBIE,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_FLAME_MANIPULATOR]
	{
		.defense = 100,
		.attack = 90,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 3,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_FLAME_SWORDSMAN]
	{
		.defense = 160,
		.attack = 180,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_WARRIOR,
		.level = 5,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_FLAME_SWORDSMAN_2]
	{
		.defense = 160,
		.attack = 180,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_WARRIOR,
		.level = 5,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_FLAME_VIPER]
	{
		.defense = 45,
		.attack = 40,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PYRO,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_FLASH_ASSAILANT]
	{
		.defense = 200,
		.attack = 200,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_FLOWER_WOLF]
	{
		.defense = 140,
		.attack = 180,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_BEAST,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_FLYING_KAMAKIRI_1]
	{
		.defense = 90,
		.attack = 140,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_INSECT,
		.level = 4,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_FLYING_KAMAKIRI_2]
	{
		.defense = 80,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_INSECT,
		.level = 4,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_FOLLOW_WIND]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_FORCED_REQUISITION]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_FOREST]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_FORTRESS_WHALE]
	{
		.defense = 215,
		.attack = 235,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_FISH,
		.level = 7,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_FORTRESS_WHALE_S_OATH]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_FRENZIED_PANDA]
	{
		.defense = 100,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_FUSION_SAGE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_FUSIONIST]
	{
		.defense = 70,
		.attack = 90,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_BEAST,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GAIA_POWER]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_GAIA_THE_DRAGON_CHAMPION]
	{
		.defense = 210,
		.attack = 260,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_DRAGON,
		.level = 7,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_GAIA_THE_FIERCE_KNIGHT]
	{
		.defense = 210,
		.attack = 230,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 7,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GAIA_THE_FIERCE_KNIGHT_2]
	{
		.defense = 210,
		.attack = 230,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 7,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GALE_DOGRA]
	{
		.defense = 60,
		.attack = 65,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_INSECT,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GAMMA_THE_MAGNET_WARRIOR]
	{
		.defense = 180,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ROCK,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GANIGUMO]
	{
		.defense = 80,
		.attack = 60,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_INSECT,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GARMA_SWORD]
	{
		.defense = 215,
		.attack = 255,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_WARRIOR,
		.level = 7,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_GARMA_SWORD_OATH]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_GARNECIA_ELEFANTIS]
	{
		.defense = 200,
		.attack = 240,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST_WARRIOR,
		.level = 7,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GAROOZIS]
	{
		.defense = 150,
		.attack = 180,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST_WARRIOR,
		.level = 5,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_GARVAS]
	{
		.defense = 170,
		.attack = 200,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 6,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GATE_GUARDIAN]
	{
		.defense = 340,
		.attack = 375,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 11,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_GATEKEEPER]
	{
		.defense = 180,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 5,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_GAZELLE_THE_KING_OF_MYTHICAL_BEASTS]
	{
		.defense = 120,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GEMINI_ELF]
	{
		.defense = 90,
		.attack = 190,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GENIN]
	{
		.defense = 90,
		.attack = 60,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 3,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_GERM_INFECTION]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_GHOUL_WITH_AN_APPETITE]
	{
		.defense = 120,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_GIANT_FLEA]
	{
		.defense = 120,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_INSECT,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GIANT_GERM]
	{
		.defense = 10,
		.attack = 100,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_GIANT_MECH_SOLDIER]
	{
		.defense = 190,
		.attack = 175,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 6,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GIANT_RAT]
	{
		.defense = 145,
		.attack = 140,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GIANT_RED_SEASNAKE]
	{
		.defense = 80,
		.attack = 180,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_GIANT_SCORPION_OF_THE_TUNDRA]
	{
		.defense = 100,
		.attack = 110,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_INSECT,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GIANT_SOLDIER_OF_STONE]
	{
		.defense = 200,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ROCK,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GIANT_TRUNADE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_GIANT_TURTLE_WHO_FEEDS_ON_FLAMES]
	{
		.defense = 180,
		.attack = 140,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 5,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_GIFT_OF_THE_MYSTICAL_ELF]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_GIGANTO]
	{
		.defense = 180,
		.attack = 170,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 5,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_GIGA_TECH_WOLF]
	{
		.defense = 140,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 4,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_GILTIA_THE_D_KNIGHT]
	{
		.defense = 150,
		.attack = 185,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_WARRIOR,
		.level = 5,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_GOBLIN_FAN]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_GOBLIN_S_SECRET_REMEDY]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_GODDESS_OF_WHIM]
	{
		.defense = 70,
		.attack = 95,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FAIRY,
		.level = 3,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_GODDESS_WITH_THE_THIRD_EYE]
	{
		.defense = 100,
		.attack = 120,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FAIRY,
		.level = 4,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_GOKIBORE]
	{
		.defense = 140,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_INSECT,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GRACEFUL_CHARITY]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_GRACEFUL_DICE]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_GRAPPLER]
	{
		.defense = 120,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_REPTILE,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_GRAVEDIGGER_GHOUL]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_GRAVEKEEPER_S_SERVANT]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_GRAVEROBBER]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_GRAVEYARD_AND_THE_HAND_OF_INVITATION]
	{
		.defense = 90,
		.attack = 70,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_GREAT_BILL]
	{
		.defense = 130,
		.attack = 125,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GREAT_MAMMOTH_OF_GOLDFINE]
	{
		.defense = 180,
		.attack = 220,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_ZOMBIE,
		.level = 6,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_GREAT_MOTH]
	{
		.defense = 250,
		.attack = 260,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_INSECT,
		.level = 8,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GREAT_WHITE]
	{
		.defense = 80,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FISH,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_GREEN_PHANTOM_KING]
	{
		.defense = 160,
		.attack = 50,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PLANT,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GREENKAPPA]
	{
		.defense = 90,
		.attack = 65,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_GRIFFORE]
	{
		.defense = 150,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GRIGGLE]
	{
		.defense = 30,
		.attack = 35,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_PLANT,
		.level = 1,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GROUND_ATTACKER_BUGROTH]
	{
		.defense = 100,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GRUESOME_GOO]
	{
		.defense = 70,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 3,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_GRYPHON_WING]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_GUARDIAN_OF_THE_LABYRINTH]
	{
		.defense = 120,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_GUARDIAN_OF_THE_SEA]
	{
		.defense = 100,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_GUARDIAN_OF_THE_THRONE_ROOM]
	{
		.defense = 160,
		.attack = 165,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 4,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_GUST]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_GUST_FAN]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_GYAKUTENNO_MEGAMI]
	{
		.defense = 200,
		.attack = 180,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FAIRY,
		.level = 6,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_HAMBURGER_RECIPE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_HANE_HANE]
	{
		.defense = 50,
		.attack = 45,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_BEAST,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_HANIWA]
	{
		.defense = 50,
		.attack = 50,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ROCK,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_HAPPY_LOVER]
	{
		.defense = 50,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FAIRY,
		.level = 2,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_HARD_ARMOR]
	{
		.defense = 120,
		.attack = 30,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_HARPIE_LADY]
	{
		.defense = 140,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WINGED_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_HARPIE_LADY_SISTERS]
	{
		.defense = 210,
		.attack = 195,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WINGED_BEAST,
		.level = 6,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_HARPIE_S_BROTHER]
	{
		.defense = 60,
		.attack = 180,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WINGED_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_HARPIE_S_FEATHER_DUSTER]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_HARPIE_S_PET_DRAGON]
	{
		.defense = 250,
		.attack = 200,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_DRAGON,
		.level = 7,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_HEAVY_STORM]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_HERCULES_BEETLE]
	{
		.defense = 200,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_INSECT,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_HERO_OF_THE_EAST]
	{
		.defense = 100,
		.attack = 110,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_HIBIKIME]
	{
		.defense = 100,
		.attack = 145,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_HIGH_TIDE_GYOJIN]
	{
		.defense = 130,
		.attack = 165,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_HINOTAMA]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_HINOTAMA_SOUL]
	{
		.defense = 50,
		.attack = 60,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PYRO,
		.level = 2,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_HIRO_S_SHADOW_SCOUT]
	{
		.defense = 50,
		.attack = 65,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_HITODENCHAK]
	{
		.defense = 70,
		.attack = 60,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 2,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_HITOTSU_ME_GIANT]
	{
		.defense = 100,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_HOLOGRAH]
	{
		.defense = 70,
		.attack = 110,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_HORN_IMP]
	{
		.defense = 100,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_HORN_OF_HEAVEN]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_HORN_OF_LIGHT]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_HORN_OF_THE_UNICORN]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_HOSHININGEN]
	{
		.defense = 70,
		.attack = 50,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FAIRY,
		.level = 2,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_HOURGLASS_OF_COURAGE]
	{
		.defense = 120,
		.attack = 110,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FAIRY,
		.level = 4,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_HOURGLASS_OF_LIFE]
	{
		.defense = 60,
		.attack = 70,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FAIRY,
		.level = 2,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_HOUSE_OF_ADHESIVE_TAPE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_HUNGRY_BURGER]
	{
		.defense = 185,
		.attack = 200,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_WARRIOR,
		.level = 6,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_HUNTER_SPIDER]
	{
		.defense = 140,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_INSECT,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_HYO]
	{
		.defense = 120,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_HYOSUBE]
	{
		.defense = 90,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_HYOZANRYU]
	{
		.defense = 280,
		.attack = 210,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 7,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_ICE_WATER]
	{
		.defense = 90,
		.attack = 115,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 3,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_ILL_WITCH]
	{
		.defense = 150,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 5,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_ILLUSIONIST_FACELESS_MAGE]
	{
		.defense = 220,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 5,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_IMPERIAL_ORDER]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_INSECT_ARMOR_WITH_LASER_CANNON]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_INSECT_QUEEN]
	{
		.defense = 240,
		.attack = 220,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_INSECT,
		.level = 7,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_INSECT_SOLDIERS_OF_THE_SKY]
	{
		.defense = 80,
		.attack = 100,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_INSECT,
		.level = 3,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_INSPECTION]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_INVADER_FROM_ANOTHER_DIMENSION]
	{
		.defense = 140,
		.attack = 95,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_INVADER_OF_THE_THRONE]
	{
		.defense = 170,
		.attack = 135,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_INVIGORATION]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_JAVELIN_BEETLE]
	{
		.defense = 255,
		.attack = 245,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_INSECT,
		.level = 8,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_JAVELIN_BEETLE_PACT]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_JELLYFISH]
	{
		.defense = 150,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_JIGEN_BAKUDAN]
	{
		.defense = 100,
		.attack = 20,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_PYRO,
		.level = 2,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_JINZO]
	{
		.defense = 150,
		.attack = 240,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MACHINE,
		.level = 6,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_JINZO_7]
	{
		.defense = 40,
		.attack = 50,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MACHINE,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_JIRAI_GUMO]
	{
		.defense = 10,
		.attack = 220,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_INSECT,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_JUDGE_MAN]
	{
		.defense = 150,
		.attack = 220,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 6,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_JUST_DESSERTS]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_KAGEMUSHA_OF_THE_BLUE_FLAME]
	{
		.defense = 40,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_KAGENINGEN]
	{
		.defense = 60,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_KAIRYU_SHIN]
	{
		.defense = 150,
		.attack = 180,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SEA_SERPENT,
		.level = 5,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_KAISER_DRAGON]
	{
		.defense = 200,
		.attack = 230,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_DRAGON,
		.level = 7,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_KAMAKIRIMAN]
	{
		.defense = 140,
		.attack = 115,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_INSECT,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_KAMINARI_ATTACK]
	{
		.defense = 140,
		.attack = 190,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_THUNDER,
		.level = 5,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_KAMINARIKOZOU]
	{
		.defense = 60,
		.attack = 70,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_THUNDER,
		.level = 2,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_KAMIONWIZARD]
	{
		.defense = 110,
		.attack = 130,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_SPELLCASTER,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_KANAN_THE_SWORDMISTRESS]
	{
		.defense = 140,
		.attack = 140,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_KANIKABUTO]
	{
		.defense = 90,
		.attack = 65,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 3,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_KARATE_MAN]
	{
		.defense = 100,
		.attack = 100,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_KARBONALA_WARRIOR]
	{
		.defense = 120,
		.attack = 150,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_KATTAPILLAR]
	{
		.defense = 30,
		.attack = 25,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_INSECT,
		.level = 1,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_KAZEJIN]
	{
		.defense = 220,
		.attack = 240,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_SPELLCASTER,
		.level = 7,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_KEY_MACE_2]
	{
		.defense = 120,
		.attack = 105,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_KILLER_NEEDLE]
	{
		.defense = 100,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_INSECT,
		.level = 4,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_KING_FOG]
	{
		.defense = 90,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_KING_OF_YAMIMAKAI]
	{
		.defense = 153,
		.attack = 200,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 5,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_KISEITAI]
	{
		.defense = 80,
		.attack = 30,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_KOJIKOCY]
	{
		.defense = 120,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_KOTODAMA]
	{
		.defense = 160,
		.attack = 0,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FAIRY,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_KOUMORI_DRAGON]
	{
		.defense = 120,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_KROKODILUS]
	{
		.defense = 120,
		.attack = 110,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_REPTILE,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_KUMOOTOKO]
	{
		.defense = 140,
		.attack = 70,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_INSECT,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_KUNAI_WITH_CHAIN]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_KURAMA]
	{
		.defense = 80,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WINGED_BEAST,
		.level = 3,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_KURIBOH]
	{
		.defense = 20,
		.attack = 30,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 1,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_KUWAGATA_A]
	{
		.defense = 100,
		.attack = 125,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_INSECT,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_KWAGAR_HERCULES]
	{
		.defense = 170,
		.attack = 190,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_INSECT,
		.level = 6,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_LA_JINN_THE_MYSTICAL_GENIE_OF_THE_LAMP]
	{
		.defense = 100,
		.attack = 180,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_LABYRINTH_TANK]
	{
		.defense = 240,
		.attack = 240,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_MACHINE,
		.level = 7,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_LABYRINTH_WALL]
	{
		.defense = 300,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ROCK,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_LADY_OF_FAITH]
	{
		.defense = 80,
		.attack = 110,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 3,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_LALA_LI_OON]
	{
		.defense = 60,
		.attack = 60,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_THUNDER,
		.level = 2,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_LARVAE_MOTH]
	{
		.defense = 40,
		.attack = 50,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_INSECT,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_LARVAS]
	{
		.defense = 100,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_LASER_CANNON_ARMOR]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_LAST_DAY_OF_WITCH]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_LAST_WILL]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_LAUGHING_FLOWER]
	{
		.defense = 50,
		.attack = 90,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PLANT,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_LAUNCHER_SPIDER]
	{
		.defense = 250,
		.attack = 220,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 7,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_LAUNCHER_SPIDER_2]
	{
		.defense = 250,
		.attack = 220,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 7,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_LAVA_BATTLEGUARD]
	{
		.defense = 180,
		.attack = 155,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_LEFT_ARM_OF_THE_FORBIDDEN_ONE]
	{
		.defense = 30,
		.attack = 20,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 1,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_LEFT_LEG_OF_THE_FORBIDDEN_ONE]
	{
		.defense = 30,
		.attack = 20,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 1,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_LEGENDARY_SWORD]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_LEGHUL]
	{
		.defense = 35,
		.attack = 30,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_INSECT,
		.level = 1,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_LEOGUN]
	{
		.defense = 155,
		.attack = 175,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_LESSER_DRAGON]
	{
		.defense = 100,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 4,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_LIGHT_OF_INTERVENTION]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_LIGHTFORCE_SWORD]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_LIQUID_BEAST]
	{
		.defense = 80,
		.attack = 95,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 3,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_LITTLE_CHIMERA]
	{
		.defense = 55,
		.attack = 60,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_BEAST,
		.level = 2,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_LITTLE_D]
	{
		.defense = 70,
		.attack = 110,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DINOSAUR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_LORD_OF_D]
	{
		.defense = 110,
		.attack = 120,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_SPELLCASTER,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_LORD_OF_THE_LAMP]
	{
		.defense = 120,
		.attack = 140,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_LORD_OF_ZEMIA]
	{
		.defense = 100,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_LUMINOUS_SPARK]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_LUNAR_QUEEN_ELZAIM]
	{
		.defense = 110,
		.attack = 75,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FAIRY,
		.level = 3,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_MABARREL]
	{
		.defense = 140,
		.attack = 170,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 5,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_MACHINE_CONVERSION_FACTORY]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_MACHINE_KING]
	{
		.defense = 200,
		.attack = 220,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MACHINE,
		.level = 6,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MAGIC_JAMMER]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_MAGIC_THORN]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_MAGICAL_GHOST]
	{
		.defense = 140,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_MAGICAL_HATS]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_MAGICAL_LABYRINTH]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_MAGIC_ARM_SHIELD]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_MAGICIAN_OF_BLACK_CHAOS]
	{
		.defense = 260,
		.attack = 280,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_SPELLCASTER,
		.level = 8,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_MAGICIAN_OF_FAITH]
	{
		.defense = 40,
		.attack = 30,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_SPELLCASTER,
		.level = 1,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_MAHA_VAILO]
	{
		.defense = 140,
		.attack = 155,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_SPELLCASTER,
		.level = 4,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_MAIDEN_OF_THE_MOONLIGHT]
	{
		.defense = 130,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 4,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_MAJOR_RIOT]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_MALEVOLENT_NUZZLER]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_MAMMOTH_GRAVEYARD]
	{
		.defense = 80,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DINOSAUR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MAN_EATER]
	{
		.defense = 60,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PLANT,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MAN_EATER_BUG]
	{
		.defense = 60,
		.attack = 45,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_INSECT,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MAN_EATING_BLACK_SHARK]
	{
		.defense = 130,
		.attack = 210,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_FISH,
		.level = 5,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_MAN_EATING_PLANT]
	{
		.defense = 60,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PLANT,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MAN_EATING_TREASURE_CHEST]
	{
		.defense = 100,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_MANGA_RYU_RAN]
	{
		.defense = 260,
		.attack = 220,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_DRAGON,
		.level = 7,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_MARINE_BEAST]
	{
		.defense = 160,
		.attack = 170,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_FISH,
		.level = 5,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_MASAKI_THE_LEGENDARY_SWORDSMAN]
	{
		.defense = 110,
		.attack = 110,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MASK_OF_DARKNESS]
	{
		.defense = 40,
		.attack = 90,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_MASKED_SORCERER]
	{
		.defense = 140,
		.attack = 90,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_SPELLCASTER,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_MASTER_AND_EXPERT]
	{
		.defense = 100,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MAVELUS]
	{
		.defense = 90,
		.attack = 130,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_WINGED_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_MECHANICAL_SNAIL]
	{
		.defense = 100,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_MECHANICAL_SPIDER]
	{
		.defense = 50,
		.attack = 40,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MACHINE,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MECHANICALCHASER]
	{
		.defense = 80,
		.attack = 185,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_MEDA_BAT]
	{
		.defense = 40,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_MEGA_THUNDERBALL]
	{
		.defense = 60,
		.attack = 75,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_THUNDER,
		.level = 2,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_MEGAMORPH]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_MEGAZOWLER]
	{
		.defense = 200,
		.attack = 180,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DINOSAUR,
		.level = 6,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MEOTOKO]
	{
		.defense = 60,
		.attack = 70,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MESMERIC_CONTROL]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_MESSENGER_OF_PEACE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_METAL_DETECTOR]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_METAL_DRAGON]
	{
		.defense = 170,
		.attack = 185,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_MACHINE,
		.level = 6,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_METAL_FISH]
	{
		.defense = 190,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 5,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_METAL_GUARDIAN]
	{
		.defense = 215,
		.attack = 115,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 5,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_METALMORPH]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_METALZOA]
	{
		.defense = 230,
		.attack = 300,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MACHINE,
		.level = 8,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_METEOR_B_DRAGON]
	{
		.defense = 200,
		.attack = 350,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_DRAGON,
		.level = 8,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_METEOR_DRAGON]
	{
		.defense = 200,
		.attack = 180,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 6,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MIKAZUKINOYAIBA]
	{
		.defense = 235,
		.attack = 220,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 7,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_MILLENNIUM_GOLEM]
	{
		.defense = 220,
		.attack = 200,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ROCK,
		.level = 6,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MILLENNIUM_SHIELD]
	{
		.defense = 300,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MILUS_RADIANT]
	{
		.defense = 25,
		.attack = 30,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_BEAST,
		.level = 1,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MINAR]
	{
		.defense = 75,
		.attack = 85,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_INSECT,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MINOMUSHI_WARRIOR]
	{
		.defense = 120,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ROCK,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MIRROR_FORCE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_MIRROR_WALL]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_MISAIRUZAME]
	{
		.defense = 160,
		.attack = 140,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FISH,
		.level = 5,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_MOLTEN_DESTRUCTION]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_MONSTER_EGG]
	{
		.defense = 90,
		.attack = 60,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MONSTER_EYE]
	{
		.defense = 35,
		.attack = 25,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 1,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_MONSTER_REBORN]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_MONSTER_TAMER]
	{
		.defense = 160,
		.attack = 180,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MONSTROUS_BIRD]
	{
		.defense = 190,
		.attack = 200,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WINGED_BEAST,
		.level = 6,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_MOON_ENVOY]
	{
		.defense = 100,
		.attack = 110,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_MOOYAN_CURRY]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_MORINPHEN]
	{
		.defense = 130,
		.attack = 155,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 5,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_MORPHING_JAR]
	{
		.defense = 60,
		.attack = 70,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_ROCK,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MORPHING_JAR_2]
	{
		.defense = 70,
		.attack = 80,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_ROCK,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MOTHER_GRIZZLY]
	{
		.defense = 100,
		.attack = 140,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_BEAST_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_MOUNTAIN]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_MOUNTAIN_WARRIOR]
	{
		.defense = 100,
		.attack = 60,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MR_VOLCANO]
	{
		.defense = 130,
		.attack = 210,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PYRO,
		.level = 5,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_MUKA_MUKA]
	{
		.defense = 30,
		.attack = 60,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_ROCK,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MUSHROOM_MAN]
	{
		.defense = 60,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PLANT,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MUSHROOM_MAN_2]
	{
		.defense = 80,
		.attack = 125,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MUSICIAN_KING]
	{
		.defense = 150,
		.attack = 175,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_SPELLCASTER,
		.level = 5,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_M_WARRIOR_1]
	{
		.defense = 50,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_M_WARRIOR_2]
	{
		.defense = 100,
		.attack = 50,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MYSTERIOUS_PUPPETEER]
	{
		.defense = 150,
		.attack = 100,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MYSTIC_HORSEMAN]
	{
		.defense = 155,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MYSTIC_LAMP]
	{
		.defense = 30,
		.attack = 40,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_SPELLCASTER,
		.level = 1,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_MYSTIC_PLASMA_ZONE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_MYSTIC_PROBE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_MYSTIC_TOMATO]
	{
		.defense = 110,
		.attack = 140,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_PLANT,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_MYSTICAL_CAPTURE_CHAIN]
	{
		.defense = 70,
		.attack = 70,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FAIRY,
		.level = 2,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_MYSTICAL_ELF]
	{
		.defense = 200,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 4,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_MYSTICAL_MOON]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_MYSTICAL_SAND]
	{
		.defense = 170,
		.attack = 210,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_ROCK,
		.level = 6,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MYSTICAL_SHEEP_1]
	{
		.defense = 90,
		.attack = 115,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_BEAST,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MYSTICAL_SHEEP_2]
	{
		.defense = 100,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_MYSTICAL_SPACE_TYPHOON]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_NEEDLE_BALL]
	{
		.defense = 70,
		.attack = 75,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_NEEDLE_WORM]
	{
		.defense = 60,
		.attack = 75,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_INSECT,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_NEGATE_ATTACK]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_NEKOGAL_1]
	{
		.defense = 90,
		.attack = 110,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_NEKOGAL_2]
	{
		.defense = 200,
		.attack = 190,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST_WARRIOR,
		.level = 6,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_NEMURIKO]
	{
		.defense = 70,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_NEO_THE_MAGIC_SWORDSMAN]
	{
		.defense = 100,
		.attack = 170,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 4,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_NIMBLE_MOMONGA]
	{
		.defense = 10,
		.attack = 100,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_BEAST,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_NIWATORI]
	{
		.defense = 80,
		.attack = 90,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WINGED_BEAST,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_NOBLEMAN_OF_CROSSOUT]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_NOBLEMAN_OF_EXTERMINATION]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_NOVOX_S_PRAYER]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_NUMINOUS_HEALER]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_OCTOBERSER]
	{
		.defense = 140,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 5,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_OCUBEAM]
	{
		.defense = 165,
		.attack = 155,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FAIRY,
		.level = 5,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_OGRE_OF_THE_BLACK_SHADOW]
	{
		.defense = 140,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_ONE_EYED_SHIELD_DRAGON]
	{
		.defense = 130,
		.attack = 70,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 3,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_OOGUCHI]
	{
		.defense = 25,
		.attack = 30,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_AQUA,
		.level = 1,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_OOKAZI]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_ORION_THE_BATTLE_KING]
	{
		.defense = 150,
		.attack = 180,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FAIRY,
		.level = 5,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_OSCILLO_HERO]
	{
		.defense = 70,
		.attack = 125,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_OSCILLO_HERO_2]
	{
		.defense = 50,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_THUNDER,
		.level = 3,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_PAINFUL_CHOICE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_PALE_BEAST]
	{
		.defense = 120,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_PANTHER_WARRIOR]
	{
		.defense = 160,
		.attack = 200,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_BEAST_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_PARALYZING_POTION]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_PARASITE_PARACIDE]
	{
		.defense = 30,
		.attack = 50,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_INSECT,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_PARROT_DRAGON]
	{
		.defense = 130,
		.attack = 200,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 5,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_PATROL_ROBO]
	{
		.defense = 90,
		.attack = 110,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MACHINE,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_PEACOCK]
	{
		.defense = 150,
		.attack = 170,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WINGED_BEAST,
		.level = 5,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_PENDULUM_MACHINE]
	{
		.defense = 200,
		.attack = 175,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 6,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_PENDULUM_MACHINE_2]
	{
		.defense = 200,
		.attack = 175,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 6,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_PENGUIN_KNIGHT]
	{
		.defense = 80,
		.attack = 90,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_AQUA,
		.level = 3,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_PENGUIN_SOLDIER]
	{
		.defense = 50,
		.attack = 75,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_AQUA,
		.level = 2,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_PERFECTLY_ULTIMATE_GREAT_MOTH]
	{
		.defense = 300,
		.attack = 350,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_INSECT,
		.level = 8,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_PERFORMANCE_OF_SWORD]
	{
		.defense = 185,
		.attack = 195,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_WARRIOR,
		.level = 6,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_PETIT_ANGEL]
	{
		.defense = 90,
		.attack = 60,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FAIRY,
		.level = 3,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_PETIT_DRAGON]
	{
		.defense = 70,
		.attack = 60,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 2,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_PETIT_MOTH]
	{
		.defense = 20,
		.attack = 30,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_INSECT,
		.level = 1,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_POLYMERIZATION]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_POLYMERIZATION_2]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_POT_OF_GREED]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_POWER_OF_KAISHIN]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_PRAGTICAL]
	{
		.defense = 150,
		.attack = 190,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_DINOSAUR,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_PREMATURE_BURIAL]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_PREVENT_RAT]
	{
		.defense = 200,
		.attack = 50,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_PRINCESS_OF_TSURUGI]
	{
		.defense = 70,
		.attack = 90,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_PRISMAN]
	{
		.defense = 100,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ROCK,
		.level = 3,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_PROHIBITION]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_PROTECTOR_OF_THE_THRONE]
	{
		.defense = 150,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_PSYCHIC_KAPPA]
	{
		.defense = 100,
		.attack = 40,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 2,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_PUMPKING_THE_KING_OF_GHOSTS]
	{
		.defense = 200,
		.attack = 180,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_ZOMBIE,
		.level = 6,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_PUNISHED_EAGLE]
	{
		.defense = 180,
		.attack = 210,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_WINGED_BEAST,
		.level = 6,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_QUEEN_BIRD]
	{
		.defense = 200,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WINGED_BEAST,
		.level = 5,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_QUEEN_OF_AUTUMN_LEAVES]
	{
		.defense = 150,
		.attack = 180,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PLANT,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_QUEEN_S_DOUBLE]
	{
		.defense = 30,
		.attack = 35,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 1,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_RABID_HORSEMAN]
	{
		.defense = 170,
		.attack = 200,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_BEAST_WARRIOR,
		.level = 6,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_RAIGEKI]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_RAIMEI]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_RAINBOW_FLOWER]
	{
		.defense = 50,
		.attack = 40,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_PLANT,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_RAISE_BODY_HEAT]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_RARE_FISH]
	{
		.defense = 120,
		.attack = 150,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_FISH,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_RAY_AND_TEMPERATURE]
	{
		.defense = 100,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FAIRY,
		.level = 3,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_REAPER_OF_THE_CARDS]
	{
		.defense = 193,
		.attack = 138,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 5,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_RED_ARCHERY_GIRL]
	{
		.defense = 150,
		.attack = 140,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_RED_MEDICINE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_RED_EYES_B_DRAGON]
	{
		.defense = 200,
		.attack = 240,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 7,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_RED_EYES_BLACK_METAL_DRAGON]
	{
		.defense = 240,
		.attack = 280,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MACHINE,
		.level = 8,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_REINFORCEMENTS]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_RELINQUISHED]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_SPELLCASTER,
		.level = 1,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_REMOVE_TRAP]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_RESPECT_PLAY]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_RESTRUCTER_REVOLUTION]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_RESURRECTION_OF_CHAKRA]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_REVERSE_TRAP]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_REVIVAL_OF_DOKURORIDER]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_RHAIMUNDOS_OF_THE_RED_SWORD]
	{
		.defense = 130,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_RIGHT_ARM_OF_THE_FORBIDDEN_ONE]
	{
		.defense = 30,
		.attack = 20,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 1,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_RIGHT_LEG_OF_THE_FORBIDDEN_ONE]
	{
		.defense = 30,
		.attack = 20,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 1,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_RING_OF_MAGNETISM]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_RIRYOKU]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_RISING_AIR_CURRENT]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_ROARING_OCEAN_SNAKE]
	{
		.defense = 180,
		.attack = 210,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_AQUA,
		.level = 6,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_ROBBIN_GOBLIN]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_ROCK_OGRE_GROTTO_1]
	{
		.defense = 120,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ROCK,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_ROGUE_DOLL]
	{
		.defense = 100,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 4,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_ROOT_WATER]
	{
		.defense = 80,
		.attack = 90,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FISH,
		.level = 3,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_ROSE_SPECTRE_OF_DUNN]
	{
		.defense = 180,
		.attack = 200,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_PLANT,
		.level = 6,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_ROYAL_DECREE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_ROYAL_GUARD]
	{
		.defense = 220,
		.attack = 190,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 6,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_RUDE_KAISER]
	{
		.defense = 160,
		.attack = 180,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST_WARRIOR,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_RUSH_RECKLESSLY]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_RYU_KISHIN]
	{
		.defense = 50,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_RYU_KISHIN_POWERED]
	{
		.defense = 120,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_RYU_RAN]
	{
		.defense = 260,
		.attack = 220,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 7,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_SABER_SLASHER]
	{
		.defense = 150,
		.attack = 145,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 5,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_SAGGI_THE_DARK_CLOWN]
	{
		.defense = 150,
		.attack = 60,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_SALAMANDRA]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_SAND_STONE]
	{
		.defense = 160,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ROCK,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_SANGA_OF_THE_THUNDER]
	{
		.defense = 220,
		.attack = 260,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_THUNDER,
		.level = 7,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_SANGAN]
	{
		.defense = 60,
		.attack = 100,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_SEA_KAMEN]
	{
		.defense = 130,
		.attack = 110,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_SEA_KING_DRAGON]
	{
		.defense = 170,
		.attack = 200,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SEA_SERPENT,
		.level = 6,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_SEAL_OF_THE_ANCIENTS]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_SEBEK_S_BLESSING]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_SECTARIAN_OF_SECRETS]
	{
		.defense = 50,
		.attack = 70,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_SEIYARYU]
	{
		.defense = 230,
		.attack = 250,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 7,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_SENGENJIN]
	{
		.defense = 250,
		.attack = 275,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST_WARRIOR,
		.level = 8,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_SENJU_OF_THE_THOUSAND_HANDS]
	{
		.defense = 100,
		.attack = 140,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FAIRY,
		.level = 4,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_SERPENT_NIGHT_DRAGON]
	{
		.defense = 240,
		.attack = 235,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 7,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_SEVEN_TOOLS_OF_THE_BANDIT]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_SHADOW_GHOUL]
	{
		.defense = 130,
		.attack = 160,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_ZOMBIE,
		.level = 5,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_SHADOW_SPECTER]
	{
		.defense = 20,
		.attack = 50,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 1,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_SHARE_THE_PAIN]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_SHIELD_AND_SWORD]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_SHINING_FAIRY]
	{
		.defense = 80,
		.attack = 140,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FAIRY,
		.level = 4,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_SHOVEL_CRUSHER]
	{
		.defense = 120,
		.attack = 90,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_SILVER_BOW_AND_ARROW]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_SILVER_FANG]
	{
		.defense = 80,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_SINISTER_SERPENT]
	{
		.defense = 25,
		.attack = 30,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_REPTILE,
		.level = 1,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_SKELENGEL]
	{
		.defense = 40,
		.attack = 90,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FAIRY,
		.level = 2,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_SKELGON]
	{
		.defense = 190,
		.attack = 170,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_ZOMBIE,
		.level = 6,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_SKULL_DICE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_SKULL_GUARDIAN]
	{
		.defense = 250,
		.attack = 205,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_WARRIOR,
		.level = 7,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_SKULL_KNIGHT]
	{
		.defense = 225,
		.attack = 265,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_SPELLCASTER,
		.level = 7,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_SKULL_RED_BIRD]
	{
		.defense = 120,
		.attack = 155,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WINGED_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_SKULL_SERVANT]
	{
		.defense = 20,
		.attack = 30,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 1,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_SKULL_STALKER]
	{
		.defense = 80,
		.attack = 90,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_SKULLBIRD]
	{
		.defense = 170,
		.attack = 190,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_WINGED_BEAST,
		.level = 6,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_SLEEPING_LION]
	{
		.defense = 170,
		.attack = 70,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_SLOT_MACHINE]
	{
		.defense = 230,
		.attack = 200,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 7,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_SNAKE_FANG]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_SNAKEYASHI]
	{
		.defense = 120,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PLANT,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_SNATCH_STEAL]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_SOGEN]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_SOLEMN_JUDGMENT]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_SOLITUDE]
	{
		.defense = 100,
		.attack = 105,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_SOLOMON_S_LAWBOOK]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_SONIC_BIRD]
	{
		.defense = 100,
		.attack = 140,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WINGED_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_SONIC_MAID]
	{
		.defense = 90,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_SOUL_HUNTER]
	{
		.defense = 180,
		.attack = 220,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_FIEND,
		.level = 6,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_SOUL_OF_THE_PURE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_SOUL_RELEASE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_SPARKS]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_SPEAR_CRETIN]
	{
		.defense = 50,
		.attack = 50,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_SPELLBINDING_CIRCLE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_SPIKE_SEADRA]
	{
		.defense = 130,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SEA_SERPENT,
		.level = 5,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_SPIRIT_OF_THE_BOOKS]
	{
		.defense = 120,
		.attack = 140,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WINGED_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_SPIRIT_OF_THE_HARP]
	{
		.defense = 200,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FAIRY,
		.level = 4,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_STAIN_STORM]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_STAR_BOY]
	{
		.defense = 50,
		.attack = 55,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_AQUA,
		.level = 2,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_STEEL_OGRE_GROTTO_1]
	{
		.defense = 180,
		.attack = 140,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_STEEL_OGRE_GROTTO_2]
	{
		.defense = 220,
		.attack = 190,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 6,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_STEEL_SCORPION]
	{
		.defense = 30,
		.attack = 25,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MACHINE,
		.level = 1,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_STEEL_SHELL]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_STIM_PACK]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_STONE_ARMADILLER]
	{
		.defense = 120,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ROCK,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_STONE_OGRE_GROTTO]
	{
		.defense = 150,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ROCK,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_STOP_DEFENSE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_STUFFED_ANIMAL]
	{
		.defense = 90,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_SUCCUBUS_KNIGHT]
	{
		.defense = 130,
		.attack = 165,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 5,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_SUIJIN]
	{
		.defense = 240,
		.attack = 250,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_AQUA,
		.level = 7,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_SUMMONED_SKULL]
	{
		.defense = 120,
		.attack = 250,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 6,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_SUPER_WAR_LION]
	{
		.defense = 210,
		.attack = 230,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_BEAST,
		.level = 7,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_SUPPORTER_IN_THE_SHADOWS]
	{
		.defense = 100,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_SWAMP_BATTLEGUARD]
	{
		.defense = 150,
		.attack = 180,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_SWORD_ARM_OF_DRAGON]
	{
		.defense = 203,
		.attack = 175,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DINOSAUR,
		.level = 6,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_SWORD_OF_DARK_DESTRUCTION]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_SWORD_OF_DEEP_SEATED]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_SWORD_OF_DRAGON_S_SOUL]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_SWORDS_OF_REVEALING_LIGHT]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_SWORDSMAN_FROM_A_FOREIGN_LAND]
	{
		.defense = 25,
		.attack = 25,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 1,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_SWORDSTALKER]
	{
		.defense = 160,
		.attack = 200,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 6,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_TAILOR_OF_THE_FICKLE]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_TAINTED_WISDOM]
	{
		.defense = 80,
		.attack = 125,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_TAKRIMINOS]
	{
		.defense = 120,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SEA_SERPENT,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_TAKUHEE]
	{
		.defense = 100,
		.attack = 145,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WINGED_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_TAO_THE_CHANTER]
	{
		.defense = 90,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_TEMPLE_OF_SKULLS]
	{
		.defense = 130,
		.attack = 90,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_TENDERNESS]
	{
		.defense = 140,
		.attack = 70,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FAIRY,
		.level = 3,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_TERRA_THE_TERRIBLE]
	{
		.defense = 130,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_THE_13TH_GRAVE]
	{
		.defense = 90,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_THE_BEWITCHING_PHANTOM_THIEF]
	{
		.defense = 70,
		.attack = 70,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_SPELLCASTER,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_THE_BISTRO_BUTCHER]
	{
		.defense = 100,
		.attack = 180,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_THE_CHEERFUL_COFFIN]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_THE_DRDEK]
	{
		.defense = 80,
		.attack = 70,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_THE_EYE_OF_TRUTH]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_THE_FLUTE_OF_SUMMONING_DRAGON]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_THE_FORCEFUL_SENTRY]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_THE_FURIOUS_SEA_KING]
	{
		.defense = 70,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 3,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_THE_IMMORTAL_OF_THUNDER]
	{
		.defense = 130,
		.attack = 150,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_THUNDER,
		.level = 4,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_THE_INEXPERIENCED_SPY]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_THE_LITTLE_SWORDSMAN_OF_AILE]
	{
		.defense = 130,
		.attack = 80,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_THE_REGULATION_OF_TRIBE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_THE_RELIABLE_GUARDIAN]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_THE_SHALLOW_GRAVE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_THE_SNAKE_HAIR]
	{
		.defense = 120,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_THE_STERN_MYSTIC]
	{
		.defense = 120,
		.attack = 150,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_SPELLCASTER,
		.level = 4,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_THE_THING_THAT_HIDES_IN_THE_MUD]
	{
		.defense = 130,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ROCK,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_THE_UNHAPPY_MAIDEN]
	{
		.defense = 10,
		.attack = 0,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_SPELLCASTER,
		.level = 1,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_THE_WANDERING_DOOMED]
	{
		.defense = 60,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_THE_WICKED_WORM_BEAST]
	{
		.defense = 70,
		.attack = 140,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_BEAST,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_THOUSAND_DRAGON]
	{
		.defense = 200,
		.attack = 240,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_DRAGON,
		.level = 7,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_THOUSAND_DRAGON_2]
	{
		.defense = 200,
		.attack = 240,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_DRAGON,
		.level = 7,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_THREE_HEADED_GEEDO]
	{
		.defense = 140,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_THREE_LEGGED_ZOMBIES]
	{
		.defense = 80,
		.attack = 110,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_THUNDER_DRAGON]
	{
		.defense = 150,
		.attack = 160,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_THUNDER,
		.level = 5,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_TIGER_AXE]
	{
		.defense = 110,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_TIGER_AXE_2]
	{
		.defense = 110,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_TIME_MACHINE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_TIME_SEAL]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_TIME_WIZARD]
	{
		.defense = 40,
		.attack = 50,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_SPELLCASTER,
		.level = 2,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_TOAD_MASTER]
	{
		.defense = 100,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 3,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_TOGEX]
	{
		.defense = 180,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_TOLL]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_TOMOZAURUS]
	{
		.defense = 40,
		.attack = 50,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DINOSAUR,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_TONGYO]
	{
		.defense = 80,
		.attack = 135,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FISH,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_TOON_ALLIGATOR]
	{
		.defense = 160,
		.attack = 80,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_REPTILE,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_TOON_MERMAID]
	{
		.defense = 150,
		.attack = 140,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_TOON_SUMMONED_SKULL]
	{
		.defense = 120,
		.attack = 250,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 6,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_TOON_WORLD]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_TORIKE]
	{
		.defense = 60,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_TOTAL_DEFENSE_SHOGUN]
	{
		.defense = 250,
		.attack = 155,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 6,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_TRAKADON]
	{
		.defense = 80,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DINOSAUR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_TRAP_HOLE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_TRAP_MASTER]
	{
		.defense = 110,
		.attack = 50,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_TREMENDOUS_FIRE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_TRENT]
	{
		.defense = 180,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PLANT,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_TRIAL_OF_NIGHTMARE]
	{
		.defense = 90,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_TRIBUTE_TO_THE_DOOMED]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_TRI_HORNED_DRAGON]
	{
		.defense = 235,
		.attack = 285,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 8,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_TRIPWIRE_BEAST]
	{
		.defense = 130,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_THUNDER,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_TURTLE_OATH]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_TURTLE_TIGER]
	{
		.defense = 150,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_TWIN_LONG_RODS_2]
	{
		.defense = 70,
		.attack = 85,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 3,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_TWIN_HEADED_FIRE_DRAGON]
	{
		.defense = 170,
		.attack = 220,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PYRO,
		.level = 6,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_TWIN_HEADED_THUNDER_DRAGON]
	{
		.defense = 210,
		.attack = 280,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_THUNDER,
		.level = 7,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_TWO_HEADED_KING_REX]
	{
		.defense = 120,
		.attack = 160,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DINOSAUR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_TWO_MOUTH_DARKRULER]
	{
		.defense = 70,
		.attack = 90,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DINOSAUR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_TWO_PRONGED_ATTACK]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_TYHONE]
	{
		.defense = 140,
		.attack = 120,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WINGED_BEAST,
		.level = 4,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_TYHONE_2]
	{
		.defense = 190,
		.attack = 170,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 6,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_UFO_TURTLE]
	{
		.defense = 120,
		.attack = 140,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MACHINE,
		.level = 4,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_ULTIMATE_OFFERING]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_UMI]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_UMIIRUKA]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_UNKNOWN_WARRIOR_OF_FIEND]
	{
		.defense = 50,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_UPSTART_GOBLIN]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_URABY]
	{
		.defense = 80,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DINOSAUR,
		.level = 4,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_USHI_ONI]
	{
		.defense = 195,
		.attack = 215,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 6,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_VALKYRION_THE_MAGNA_WARRIOR]
	{
		.defense = 385,
		.attack = 350,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_ROCK,
		.level = 8,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_VERMILLION_SPARROW]
	{
		.defense = 150,
		.attack = 190,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_PYRO,
		.level = 5,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_VERSAGO_THE_DESTROYER]
	{
		.defense = 90,
		.attack = 110,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_VILE_GERMS]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_VIOLENT_RAIN]
	{
		.defense = 80,
		.attack = 155,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_VIOLET_CRYSTAL]
	{
		.defense = 0,
		.attack = 256,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_VISHWAR_RANDI]
	{
		.defense = 70,
		.attack = 90,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_VORSE_RAIDER]
	{
		.defense = 120,
		.attack = 190,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_BEAST_WARRIOR,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_WABOKU]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_WALL_OF_ILLUSION]
	{
		.defense = 185,
		.attack = 100,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_WALL_SHADOW]
	{
		.defense = 300,
		.attack = 160,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 7,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_WAR_LION_RITUAL]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_WARRIOR_ELIMINATION]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_WARRIOR_OF_TRADITION]
	{
		.defense = 170,
		.attack = 190,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_WARRIOR,
		.level = 6,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_WASTELAND]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_WATER_ELEMENT]
	{
		.defense = 70,
		.attack = 90,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 3,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_WATER_GIRL]
	{
		.defense = 100,
		.attack = 125,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_WATER_MAGICIAN]
	{
		.defense = 100,
		.attack = 140,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_WATER_OMOTICS]
	{
		.defense = 120,
		.attack = 140,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_WATERDRAGON_FAIRY]
	{
		.defense = 70,
		.attack = 110,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_AQUA,
		.level = 3,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_WEATHER_CONTROL]
	{
		.defense = 40,
		.attack = 60,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FAIRY,
		.level = 2,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_WEATHER_REPORT]
	{
		.defense = 150,
		.attack = 95,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_WHIPTAIL_CROW]
	{
		.defense = 160,
		.attack = 165,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_WHITE_HOLE]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_WHITE_MAGICAL_HAT]
	{
		.defense = 70,
		.attack = 100,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_SPELLCASTER,
		.level = 3,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_WICKED_MIRROR]
	{
		.defense = 60,
		.attack = 70,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_WIDESPREAD_RUIN]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_WINDSTORM_OF_ETAQUA]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_WING_EGG_ELF]
	{
		.defense = 130,
		.attack = 50,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FAIRY,
		.level = 3,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_WINGED_CLEAVER]
	{
		.defense = 70,
		.attack = 70,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_INSECT,
		.level = 2,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_WINGED_DRAGON_GUARDIAN_OF_THE_FORTRESS_1]
	{
		.defense = 120,
		.attack = 140,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 4,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_WINGS_OF_WICKED_FLAME]
	{
		.defense = 60,
		.attack = 70,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_PYRO,
		.level = 2,
		.attribute = ATTRIBUTE_FIRE,
	},
	[CARD_NUMBER_WITCH_OF_THE_BLACK_FOREST]
	{
		.defense = 120,
		.attack = 110,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_SPELLCASTER,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_WITCH_S_APPRENTICE]
	{
		.defense = 50,
		.attack = 55,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_SPELLCASTER,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_WITTY_PHANTOM]
	{
		.defense = 130,
		.attack = 140,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_WODAN_THE_RESIDENT_OF_THE_FOREST]
	{
		.defense = 120,
		.attack = 90,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_WARRIOR,
		.level = 3,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_WOOD_REMAINS]
	{
		.defense = 90,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_WORLD_SUPPRESSION]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TRAP,
		.level = 0,
		.attribute = ATTRIBUTE_LIGHT,
	},
	[CARD_NUMBER_WOW_WARRIOR]
	{
		.defense = 90,
		.attack = 125,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FISH,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_WRETCHED_GHOST_OF_THE_ATTIC]
	{
		.defense = 40,
		.attack = 55,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 2,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_YADO_KARU]
	{
		.defense = 170,
		.attack = 90,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_AQUA,
		.level = 4,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_YAIBA_ROBO]
	{
		.defense = 130,
		.attack = 100,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_MACHINE,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_YAMATANO_DRAGON_SCROLL]
	{
		.defense = 30,
		.attack = 90,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DRAGON,
		.level = 2,
		.attribute = ATTRIBUTE_WIND,
	},
	[CARD_NUMBER_YAMI]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_YARANZO]
	{
		.defense = 150,
		.attack = 130,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_ZOMBIE,
		.level = 4,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_ZANKI]
	{
		.defense = 170,
		.attack = 150,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_WARRIOR,
		.level = 5,
		.attribute = ATTRIBUTE_EARTH,
	},
	[CARD_NUMBER_ZERA_RITUAL]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_MAGIC,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_ZERA_THE_MANT]
	{
		.defense = 230,
		.attack = 280,
		.monsterType = MONSTER_TYPE_RITUAL,
		.race = RACE_FIEND,
		.level = 8,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_ZOA]
	{
		.defense = 190,
		.attack = 260,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_FIEND,
		.level = 7,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_ZOMBIE_WARRIOR]
	{
		.defense = 90,
		.attack = 120,
		.monsterType = MONSTER_TYPE_FUSION,
		.race = RACE_ZOMBIE,
		.level = 3,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_ZONE_EATER]
	{
		.defense = 20,
		.attack = 25,
		.monsterType = MONSTER_TYPE_EFFECT,
		.race = RACE_AQUA,
		.level = 1,
		.attribute = ATTRIBUTE_WATER,
	},
	[CARD_NUMBER_THE_MONARCHY]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TICKET,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_SET_SAIL_FOR_THE_KINGDOM]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TICKET,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_GLORY_OF_THE_KING_S_HAND]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_TICKET,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[CARD_NUMBER_OBELISK_THE_TORMENTOR]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DIVINE,
		.level = 0,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_SLIFER_THE_SKY_DRAGON]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DIVINE,
		.level = 0,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_THE_WINGED_DRAGON_OF_RA]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_DIVINE,
		.level = 0,
		.attribute = ATTRIBUTE_DARK,
	},
	[CARD_NUMBER_INSECT_MONSTER_TOKEN]
	{
		.defense = 10,
		.attack = 10,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_INSECT,
		.level = 1,
		.attribute = ATTRIBUTE_EARTH,
	},
	[821]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[822]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[823]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[824]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[825]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[826]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[827]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[828]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[829]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[830]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[831]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[832]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[833]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[834]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[835]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[836]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[837]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[838]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[839]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[840]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[841]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[842]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[843]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[844]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[845]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[846]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[847]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[848]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[849]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[850]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[851]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[852]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[853]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[854]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[855]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[856]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[857]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[858]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[859]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[860]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[861]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[862]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[863]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[864]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[865]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[866]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[867]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[868]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[869]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[870]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[871]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[872]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[873]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[874]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[875]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[876]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[877]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[878]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[879]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[880]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[881]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[882]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[883]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[884]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[885]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[886]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[887]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[888]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[889]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[890]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[891]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[892]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[893]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[894]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[895]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[896]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[897]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[898]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[899]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[900]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[901]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[902]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[903]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[904]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[905]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[906]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[907]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[908]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[909]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[910]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[911]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[912]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[913]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[914]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[915]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[916]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[917]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[918]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[919]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[920]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[921]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[922]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[923]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[924]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[925]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[926]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[927]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[928]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[929]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[930]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[931]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[932]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[933]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[934]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[935]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[936]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[937]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[938]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[939]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[940]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[941]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[942]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[943]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[944]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[945]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[946]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[947]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[948]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[949]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[950]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[951]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[952]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[953]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[954]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[955]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[956]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[957]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[958]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[959]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[960]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[961]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[962]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[963]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[964]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[965]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[966]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[967]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[968]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[969]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[970]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[971]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[972]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[973]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[974]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[975]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[976]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[977]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[978]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[979]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[980]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[981]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[982]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[983]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[984]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[985]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[986]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[987]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[988]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[989]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[990]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[991]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[992]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[993]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[994]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[995]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[996]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[997]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[998]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[999]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1000]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1001]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1002]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1003]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1004]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1005]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1006]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1007]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1008]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1009]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1010]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1011]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1012]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1013]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1014]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1015]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1016]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1017]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1018]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1019]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1020]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1021]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1022]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1023]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1024]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1025]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1026]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1027]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1028]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1029]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1030]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1031]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1032]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1033]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1034]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1035]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1036]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1037]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1038]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1039]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1040]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1041]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1042]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1043]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1044]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1045]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1046]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1047]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1048]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1049]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1050]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1051]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1052]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1053]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1054]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1055]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1056]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1057]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1058]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1059]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1060]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1061]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1062]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1063]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1064]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1065]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1066]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1067]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1068]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1069]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1070]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1071]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1072]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1073]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1074]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1075]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1076]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1077]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1078]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1079]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1080]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1081]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1082]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1083]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1084]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1085]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1086]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1087]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1088]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1089]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1090]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1091]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1092]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1093]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1094]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1095]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1096]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1097]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1098]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1099]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1100]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1101]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1102]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1103]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1104]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1105]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1106]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1107]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1108]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1109]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1110]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1111]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1112]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1113]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1114]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1115]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1116]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1117]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1118]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1119]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1120]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1121]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1122]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1123]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1124]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1125]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1126]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1127]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1128]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1129]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1130]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1131]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1132]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1133]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1134]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1135]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1136]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1137]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1138]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1139]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1140]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1141]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1142]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1143]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1144]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1145]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1146]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1147]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1148]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1149]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1150]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1151]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1152]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1153]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1154]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1155]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1156]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1157]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1158]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1159]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1160]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1161]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1162]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1163]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1164]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1165]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1166]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1167]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1168]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1169]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1170]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1171]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1172]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1173]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1174]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1175]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1176]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1177]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1178]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1179]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1180]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1181]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1182]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1183]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1184]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1185]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1186]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1187]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1188]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1189]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1190]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1191]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1192]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1193]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1194]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1195]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1196]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1197]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1198]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1199]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1200]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1201]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1202]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1203]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1204]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1205]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1206]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1207]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1208]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1209]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1210]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1211]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1212]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1213]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1214]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1215]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1216]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1217]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1218]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1219]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1220]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1221]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1222]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1223]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1224]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1225]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1226]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1227]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1228]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1229]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1230]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1231]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1232]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1233]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1234]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1235]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1236]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1237]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1238]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1239]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1240]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1241]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1242]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1243]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1244]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1245]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1246]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1247]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1248]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1249]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1250]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1251]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1252]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1253]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1254]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1255]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1256]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1257]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1258]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1259]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1260]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1261]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1262]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1263]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1264]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1265]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1266]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1267]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1268]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1269]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1270]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1271]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1272]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1273]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1274]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1275]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1276]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1277]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1278]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1279]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1280]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1281]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1282]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1283]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1284]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1285]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1286]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1287]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1288]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1289]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1290]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1291]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1292]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1293]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1294]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1295]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1296]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1297]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1298]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1299]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1300]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1301]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1302]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1303]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1304]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1305]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1306]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1307]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1308]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1309]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1310]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1311]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1312]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1313]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1314]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1315]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1316]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1317]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1318]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1319]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
	[1320]
	{
		.defense = 0,
		.attack = 0,
		.monsterType = MONSTER_TYPE_MONSTER,
		.race = RACE_NONE,
		.level = 0,
		.attribute = ATTRIBUTE_NONE,
	},
};

const struct CardName gCardNames[] =
{
	[CARD_NUMBER_NONE]
	{
		.cardName = ""
	},
	[CARD_NUMBER_7_COLORED_FISH]
	{
		.cardName = "7 Colored Fish"
	},
	[CARD_NUMBER_7_COMPLETED]
	{
		.cardName = "7 Completed"
	},
	[CARD_NUMBER_ACID_CRAWLER]
	{
		.cardName = "Acid Crawler"
	},
	[CARD_NUMBER_ACID_TRAP_HOLE]
	{
		.cardName = "Acid Trap Hole"
	},
	[CARD_NUMBER_AIR_EATER]
	{
		.cardName = "Air Eater"
	},
	[CARD_NUMBER_AIR_MARMOT_OF_NEFARIOUSNESS]
	{
		.cardName = "Air Marmot of Nefariousness"
	},
	[CARD_NUMBER_AKAKIEISU]
	{
		.cardName = "Akakieisu"
	},
	[CARD_NUMBER_AKIHIRON]
	{
		.cardName = "Akihiron"
	},
	[CARD_NUMBER_ALLIGATOR_S_SWORD]
	{
		.cardName = "Alligator's Sword"
	},
	[CARD_NUMBER_ALLIGATOR_S_SWORD_DRAGON]
	{
		.cardName = "Alligator's Sword Dragon"
	},
	[CARD_NUMBER_ALPHA_THE_MAGNET_WARRIOR]
	{
		.cardName = "Alpha The Magnet Warrior"
	},
	[CARD_NUMBER_AMAZON_OF_THE_SEAS]
	{
		.cardName = "Amazon of the Seas"
	},
	[CARD_NUMBER_AMEBA]
	{
		.cardName = "Ameba"
	},
	[CARD_NUMBER_AMPHIBIOUS_BUGROTH]
	{
		.cardName = "Amphibious Bugroth"
	},
	[CARD_NUMBER_ANCIENT_BRAIN]
	{
		.cardName = "Ancient Brain"
	},
	[CARD_NUMBER_ANCIENT_ELF]
	{
		.cardName = "Ancient Elf"
	},
	[CARD_NUMBER_ANCIENT_JAR]
	{
		.cardName = "Ancient Jar"
	},
	[CARD_NUMBER_ANCIENT_LIZARD_WARRIOR]
	{
		.cardName = "Ancient Lizard Warrior"
	},
	[CARD_NUMBER_ANCIENT_ONE_OF_THE_DEEP_FOREST]
	{
		.cardName = "Ancient One of the Deep Forest"
	},
	[CARD_NUMBER_ANCIENT_TELESCOPE]
	{
		.cardName = "Ancient Telescope"
	},
	[CARD_NUMBER_ANCIENT_TOOL]
	{
		.cardName = "Ancient Tool"
	},
	[CARD_NUMBER_ANSATSU]
	{
		.cardName = "Ansatsu"
	},
	[CARD_NUMBER_ANTHROSAURUS]
	{
		.cardName = "Anthrosaurus"
	},
	[CARD_NUMBER_ANTI_RAIGEKI]
	{
		.cardName = "Anti Raigeki"
	},
	[CARD_NUMBER_ANTI_MAGIC_FRAGRANCE]
	{
		.cardName = "Anti-Magic Fragrance"
	},
	[CARD_NUMBER_APPROPRIATE]
	{
		.cardName = "Appropriate"
	},
	[CARD_NUMBER_AQUA_CHORUS]
	{
		.cardName = "Aqua Chorus"
	},
	[CARD_NUMBER_AQUA_DRAGON]
	{
		.cardName = "Aqua Dragon"
	},
	[CARD_NUMBER_AQUA_MADOOR]
	{
		.cardName = "Aqua Madoor"
	},
	[CARD_NUMBER_ARLOWNAY]
	{
		.cardName = "Arlownay"
	},
	[CARD_NUMBER_ARMA_KNIGHT]
	{
		.cardName = "Arma Knight"
	},
	[CARD_NUMBER_ARMAILL]
	{
		.cardName = "Armaill"
	},
	[CARD_NUMBER_ARMED_NINJA]
	{
		.cardName = "Armed Ninja"
	},
	[CARD_NUMBER_ARMORED_GLASS]
	{
		.cardName = "Armored Glass"
	},
	[CARD_NUMBER_ARMORED_LIZARD]
	{
		.cardName = "Armored Lizard"
	},
	[CARD_NUMBER_ARMORED_RAT]
	{
		.cardName = "Armored Rat"
	},
	[CARD_NUMBER_ARMORED_STARFISH]
	{
		.cardName = "Armored Starfish"
	},
	[CARD_NUMBER_ARMORED_ZOMBIE]
	{
		.cardName = "Armored Zombie"
	},
	[CARD_NUMBER_AXE_OF_DESPAIR]
	{
		.cardName = "Axe of Despair"
	},
	[CARD_NUMBER_AXE_RAIDER]
	{
		.cardName = "Axe Raider"
	},
	[CARD_NUMBER_B_DRAGON_JUNGLE_KING]
	{
		.cardName = "B. Dragon Jungle King"
	},
	[CARD_NUMBER_B_SKULL_DRAGON]
	{
		.cardName = "B. Skull Dragon"
	},
	[CARD_NUMBER_BABY_DRAGON]
	{
		.cardName = "Baby Dragon"
	},
	[CARD_NUMBER_BACKUP_SOLDIER]
	{
		.cardName = "Backup Soldier"
	},
	[CARD_NUMBER_BANISHER_OF_THE_LIGHT]
	{
		.cardName = "Banisher of the Light"
	},
	[CARD_NUMBER_BAROX]
	{
		.cardName = "Barox"
	},
	[CARD_NUMBER_BARREL_DRAGON]
	{
		.cardName = "Barrel Dragon"
	},
	[CARD_NUMBER_BARREL_LILY]
	{
		.cardName = "Barrel Lily"
	},
	[CARD_NUMBER_BARREL_ROCK]
	{
		.cardName = "Barrel Rock"
	},
	[CARD_NUMBER_BASIC_INSECT]
	{
		.cardName = "Basic Insect"
	},
	[CARD_NUMBER_BATTLE_OX]
	{
		.cardName = "Battle Ox"
	},
	[CARD_NUMBER_BATTLE_STEER]
	{
		.cardName = "Battle Steer"
	},
	[CARD_NUMBER_BATTLE_WARRIOR]
	{
		.cardName = "Battle Warrior"
	},
	[CARD_NUMBER_BEAN_SOLDIER]
	{
		.cardName = "Bean Soldier"
	},
	[CARD_NUMBER_BEAST_FANGS]
	{
		.cardName = "Beast Fangs"
	},
	[CARD_NUMBER_BEASTKING_OF_THE_SWAMPS]
	{
		.cardName = "Beastking of the Swamps"
	},
	[CARD_NUMBER_BEASTLY_MIRROR_RITUAL]
	{
		.cardName = "Beastly Mirror Ritual"
	},
	[CARD_NUMBER_BEAUTIFUL_HEADHUNTRESS]
	{
		.cardName = "Beautiful Headhuntress"
	},
	[CARD_NUMBER_BEAVER_WARRIOR]
	{
		.cardName = "Beaver Warrior"
	},
	[CARD_NUMBER_BEHEGON]
	{
		.cardName = "Behegon"
	},
	[CARD_NUMBER_BELL_OF_DESTRUCTION]
	{
		.cardName = "Bell of Destruction"
	},
	[CARD_NUMBER_BETA_THE_MAGNET_WARRIOR]
	{
		.cardName = "Beta The Magnet Warrior"
	},
	[CARD_NUMBER_BICKURIBOX]
	{
		.cardName = "Bickuribox"
	},
	[CARD_NUMBER_BIG_EYE]
	{
		.cardName = "Big Eye"
	},
	[CARD_NUMBER_BIG_INSECT]
	{
		.cardName = "Big Insect"
	},
	[CARD_NUMBER_BIG_SHIELD_GARDNA]
	{
		.cardName = "Big Shield Gardna"
	},
	[CARD_NUMBER_BINDING_CHAIN]
	{
		.cardName = "Binding Chain"
	},
	[CARD_NUMBER_BIO_PLANT]
	{
		.cardName = "Bio Plant"
	},
	[CARD_NUMBER_BLACK_ILLUSION_RITUAL]
	{
		.cardName = "Black Illusion Ritual"
	},
	[CARD_NUMBER_BLACK_LUSTER_RITUAL]
	{
		.cardName = "Black Luster Ritual"
	},
	[CARD_NUMBER_BLACK_LUSTER_SOLDIER]
	{
		.cardName = "Black Luster Soldier"
	},
	[CARD_NUMBER_BLACK_PENDANT]
	{
		.cardName = "Black Pendant"
	},
	[CARD_NUMBER_BLACKLAND_FIRE_DRAGON]
	{
		.cardName = "Blackland Fire Dragon"
	},
	[CARD_NUMBER_BLADEFLY]
	{
		.cardName = "Bladefly"
	},
	[CARD_NUMBER_BLAST_JUGGLER]
	{
		.cardName = "Blast Juggler"
	},
	[CARD_NUMBER_BLAST_SPHERE]
	{
		.cardName = "Blast Sphere"
	},
	[CARD_NUMBER_BLOCK_ATTACK]
	{
		.cardName = "Block Attack"
	},
	[CARD_NUMBER_BLUE_MEDICINE]
	{
		.cardName = "Blue Medicine"
	},
	[CARD_NUMBER_BLUE_EYED_SILVER_ZOMBIE]
	{
		.cardName = "Blue-Eyed Silver Zombie"
	},
	[CARD_NUMBER_BLUE_EYES_TOON_DRAGON]
	{
		.cardName = "Blue-Eyes Toon Dragon"
	},
	[CARD_NUMBER_BLUE_EYES_ULTIMATE_DRAGON]
	{
		.cardName = "Blue-Eyes Ultimate Dragon"
	},
	[CARD_NUMBER_BLUE_EYES_WHITE_DRAGON]
	{
		.cardName = "Blue-Eyes White Dragon"
	},
	[CARD_NUMBER_BLUE_EYES_WHITE_DRAGON_2]
	{
		.cardName = "Blue-Eyes White Dragon"
	},
	[CARD_NUMBER_BLUE_WINGED_CROWN]
	{
		.cardName = "Blue-Winged Crown"
	},
	[CARD_NUMBER_BOAR_SOLDIER]
	{
		.cardName = "Boar Soldier"
	},
	[CARD_NUMBER_BOLT_ESCARGOT]
	{
		.cardName = "Bolt Escargot"
	},
	[CARD_NUMBER_BOOK_OF_SECRET_ARTS]
	{
		.cardName = "Book of Secret Arts"
	},
	[CARD_NUMBER_BOTTOM_DWELLER]
	{
		.cardName = "Bottom Dweller"
	},
	[CARD_NUMBER_BRACCHIO_RAIDUS]
	{
		.cardName = "Bracchio-raidus"
	},
	[CARD_NUMBER_BREATH_OF_LIGHT]
	{
		.cardName = "Breath of Light"
	},
	[CARD_NUMBER_BRIGHT_CASTLE]
	{
		.cardName = "Bright Castle"
	},
	[CARD_NUMBER_BURGLAR]
	{
		.cardName = "Burglar"
	},
	[CARD_NUMBER_BURNING_SPEAR]
	{
		.cardName = "Burning Spear"
	},
	[CARD_NUMBER_BUSTER_BLADER]
	{
		.cardName = "Buster Blader"
	},
	[CARD_NUMBER_CALL_OF_THE_DARK]
	{
		.cardName = "Call of the Dark"
	},
	[CARD_NUMBER_CALL_OF_THE_GRAVE]
	{
		.cardName = "Call of the Grave"
	},
	[CARD_NUMBER_CALL_OF_THE_HAUNTED]
	{
		.cardName = "Call Of The Haunted"
	},
	[CARD_NUMBER_CANDLE_OF_FATE]
	{
		.cardName = "Candle of Fate"
	},
	[CARD_NUMBER_CANNON_SOLDIER]
	{
		.cardName = "Cannon Soldier"
	},
	[CARD_NUMBER_CASTLE_OF_DARK_ILLUSIONS]
	{
		.cardName = "Castle of Dark Illusions"
	},
	[CARD_NUMBER_CASTLE_WALLS]
	{
		.cardName = "Castle Walls"
	},
	[CARD_NUMBER_CATAPULT_TURTLE]
	{
		.cardName = "Catapult Turtle"
	},
	[CARD_NUMBER_CEASEFIRE]
	{
		.cardName = "Ceasefire"
	},
	[CARD_NUMBER_CELTIC_GUARDIAN]
	{
		.cardName = "Celtic Guardian"
	},
	[CARD_NUMBER_CELTIC_GUARDIAN_2]
	{
		.cardName = "Celtic Guardian"
	},
	[CARD_NUMBER_CEREMONIAL_BELL]
	{
		.cardName = "Ceremonial Bell"
	},
	[CARD_NUMBER_CHAIN_DESTRUCTION]
	{
		.cardName = "Chain Destruction"
	},
	[CARD_NUMBER_CHAIN_ENERGY]
	{
		.cardName = "Chain Energy"
	},
	[CARD_NUMBER_CHAKRA]
	{
		.cardName = "Chakra"
	},
	[CARD_NUMBER_CHANGE_OF_HEART]
	{
		.cardName = "Change of Heart"
	},
	[CARD_NUMBER_CHARUBIN_THE_FIRE_KNIGHT]
	{
		.cardName = "Charubin the Fire Knight"
	},
	[CARD_NUMBER_CHORUS_OF_SANCTUARY]
	{
		.cardName = "Chorus of Sanctuary"
	},
	[CARD_NUMBER_CLAW_REACHER]
	{
		.cardName = "Claw Reacher"
	},
	[CARD_NUMBER_CLOWN_ZOMBIE]
	{
		.cardName = "Clown Zombie"
	},
	[CARD_NUMBER_COCKROACH_KNIGHT]
	{
		.cardName = "Cockroach Knight"
	},
	[CARD_NUMBER_COCOON_OF_EVOLUTION]
	{
		.cardName = "Cocoon of Evolution"
	},
	[CARD_NUMBER_COMMENCEMENT_DANCE]
	{
		.cardName = "Commencement Dance"
	},
	[CARD_NUMBER_CONFISCATION]
	{
		.cardName = "Confiscation"
	},
	[CARD_NUMBER_COSMO_QUEEN]
	{
		.cardName = "Cosmo Queen"
	},
	[CARD_NUMBER_CRAB_TURTLE]
	{
		.cardName = "Crab Turtle"
	},
	[CARD_NUMBER_CRASS_CLOWN]
	{
		.cardName = "Crass Clown"
	},
	[CARD_NUMBER_CRAWLING_DRAGON]
	{
		.cardName = "Crawling Dragon"
	},
	[CARD_NUMBER_CRAWLING_DRAGON_2]
	{
		.cardName = "Crawling Dragon #2"
	},
	[CARD_NUMBER_CRAZY_FISH]
	{
		.cardName = "Crazy Fish"
	},
	[CARD_NUMBER_CRIMSON_SUNBIRD]
	{
		.cardName = "Crimson Sunbird"
	},
	[CARD_NUMBER_CROW_GOBLIN]
	{
		.cardName = "Crow Goblin"
	},
	[CARD_NUMBER_CRUSH_CARD]
	{
		.cardName = "Crush Card"
	},
	[CARD_NUMBER_CURSE_OF_DRAGON]
	{
		.cardName = "Curse of Dragon"
	},
	[CARD_NUMBER_CURSE_OF_FIEND]
	{
		.cardName = "Curse of Fiend"
	},
	[CARD_NUMBER_CURTAIN_OF_THE_DARK_ONES]
	{
		.cardName = "Curtain of the Dark Ones"
	},
	[CARD_NUMBER_CYBER_COMMANDER]
	{
		.cardName = "Cyber Commander"
	},
	[CARD_NUMBER_CYBER_FALCON]
	{
		.cardName = "Cyber Falcon"
	},
	[CARD_NUMBER_CYBER_JAR]
	{
		.cardName = "Cyber Jar"
	},
	[CARD_NUMBER_CYBER_SAURUS]
	{
		.cardName = "Cyber Saurus"
	},
	[CARD_NUMBER_CYBER_SHIELD]
	{
		.cardName = "Cyber Shield"
	},
	[CARD_NUMBER_CYBER_SOLDIER]
	{
		.cardName = "Cyber Soldier"
	},
	[CARD_NUMBER_CYBER_STEIN]
	{
		.cardName = "Cyber-Stein"
	},
	[CARD_NUMBER_CYBER_TECH_ALLIGATOR]
	{
		.cardName = "Cyber-Tech Alligator"
	},
	[CARD_NUMBER_D_HUMAN]
	{
		.cardName = "D. Human"
	},
	[CARD_NUMBER_DANCING_ELF]
	{
		.cardName = "Dancing Elf"
	},
	[CARD_NUMBER_DARK_ARTIST]
	{
		.cardName = "Dark Artist"
	},
	[CARD_NUMBER_DARK_ASSAILANT]
	{
		.cardName = "Dark Assailant"
	},
	[CARD_NUMBER_DARK_CHIMERA]
	{
		.cardName = "Dark Chimera"
	},
	[CARD_NUMBER_DARK_ELF]
	{
		.cardName = "Dark Elf"
	},
	[CARD_NUMBER_DARK_ENERGY]
	{
		.cardName = "Dark Energy"
	},
	[CARD_NUMBER_DARK_GRAY]
	{
		.cardName = "Dark Gray"
	},
	[CARD_NUMBER_DARK_HOLE]
	{
		.cardName = "Dark Hole"
	},
	[CARD_NUMBER_DARK_KING_OF_THE_ABYSS]
	{
		.cardName = "Dark King of the Abyss"
	},
	[CARD_NUMBER_DARK_MAGIC_RITUAL]
	{
		.cardName = "Dark Magic Ritual"
	},
	[CARD_NUMBER_DARK_MAGICIAN]
	{
		.cardName = "Dark Magician"
	},
	[CARD_NUMBER_DARK_MAGICIAN_2]
	{
		.cardName = "Dark Magician"
	},
	[CARD_NUMBER_DARK_MAGICIAN_GIRL]
	{
		.cardName = "Dark Magician Girl"
	},
	[CARD_NUMBER_DARK_RABBIT]
	{
		.cardName = "Dark Rabbit"
	},
	[CARD_NUMBER_DARK_SAGE]
	{
		.cardName = "Dark Sage"
	},
	[CARD_NUMBER_DARK_SHADE]
	{
		.cardName = "Dark Shade"
	},
	[CARD_NUMBER_DARK_WITCH]
	{
		.cardName = "Dark Witch"
	},
	[CARD_NUMBER_DARK_ZEBRA]
	{
		.cardName = "Dark Zebra"
	},
	[CARD_NUMBER_DARK_EYES_ILLUSIONIST]
	{
		.cardName = "Dark-Eyes Illusionist"
	},
	[CARD_NUMBER_DARKFIRE_DRAGON]
	{
		.cardName = "Darkfire Dragon"
	},
	[CARD_NUMBER_DARKFIRE_SOLDIER_1]
	{
		.cardName = "Darkfire Soldier #1"
	},
	[CARD_NUMBER_DARKFIRE_SOLDIER_2]
	{
		.cardName = "Darkfire Soldier #2"
	},
	[CARD_NUMBER_DARKNESS_APPROACHES]
	{
		.cardName = "Darkness Approaches"
	},
	[CARD_NUMBER_DARK_PIERCING_LIGHT]
	{
		.cardName = "Dark-Piercing Light"
	},
	[CARD_NUMBER_DARKWORLD_THORNS]
	{
		.cardName = "Darkworld Thorns"
	},
	[CARD_NUMBER_DEEPSEA_SHARK]
	{
		.cardName = "Deepsea Shark"
	},
	[CARD_NUMBER_DELINQUENT_DUO]
	{
		.cardName = "Delinquent Duo"
	},
	[CARD_NUMBER_DE_SPELL]
	{
		.cardName = "De-Spell"
	},
	[CARD_NUMBER_DESTROYER_GOLEM]
	{
		.cardName = "Destroyer Golem"
	},
	[CARD_NUMBER_DIAN_KETO_THE_CURE_MASTER]
	{
		.cardName = "Dian Keto the Cure Master"
	},
	[CARD_NUMBER_DICE_ARMADILLO]
	{
		.cardName = "Dice Armadillo"
	},
	[CARD_NUMBER_DIMENSIONAL_WARRIOR]
	{
		.cardName = "Dimensional Warrior"
	},
	[CARD_NUMBER_DISK_MAGICIAN]
	{
		.cardName = "Disk Magician"
	},
	[CARD_NUMBER_DISSOLVEROCK]
	{
		.cardName = "Dissolverock"
	},
	[CARD_NUMBER_DNA_SURGERY]
	{
		.cardName = "DNA Surgery"
	},
	[CARD_NUMBER_DOKUROIZO_THE_GRIM_REAPER]
	{
		.cardName = "Dokuroizo the Grim Reaper"
	},
	[CARD_NUMBER_DOKURORIDER]
	{
		.cardName = "Dokurorider"
	},
	[CARD_NUMBER_DOMA_THE_ANGEL_OF_SILENCE]
	{
		.cardName = "Doma The Angel of Silence"
	},
	[CARD_NUMBER_DORON]
	{
		.cardName = "Doron"
	},
	[CARD_NUMBER_DOROVER]
	{
		.cardName = "Dorover"
	},
	[CARD_NUMBER_DRAGON_CAPTURE_JAR]
	{
		.cardName = "Dragon Capture Jar"
	},
	[CARD_NUMBER_DRAGON_PIPER]
	{
		.cardName = "Dragon Piper"
	},
	[CARD_NUMBER_DRAGON_SEEKER]
	{
		.cardName = "Dragon Seeker"
	},
	[CARD_NUMBER_DRAGON_TREASURE]
	{
		.cardName = "Dragon Treasure"
	},
	[CARD_NUMBER_DRAGON_ZOMBIE]
	{
		.cardName = "Dragon Zombie"
	},
	[CARD_NUMBER_DRAGONESS_THE_WICKED_KNIGHT]
	{
		.cardName = "Dragoness the Wicked Knight"
	},
	[CARD_NUMBER_DREAM_CLOWN]
	{
		.cardName = "Dream Clown"
	},
	[CARD_NUMBER_DRIVING_SNOW]
	{
		.cardName = "Driving Snow"
	},
	[CARD_NUMBER_DROOLING_LIZARD]
	{
		.cardName = "Drooling Lizard"
	},
	[CARD_NUMBER_DRYAD]
	{
		.cardName = "Dryad"
	},
	[CARD_NUMBER_DUNAMES_DARK_WITCH]
	{
		.cardName = "Dunames Dark Witch"
	},
	[CARD_NUMBER_DUNGEON_WORM]
	{
		.cardName = "Dungeon Worm"
	},
	[CARD_NUMBER_DUST_TORNADO]
	{
		.cardName = "Dust Tornado"
	},
	[CARD_NUMBER_EARTHSHAKER]
	{
		.cardName = "Earthshaker"
	},
	[CARD_NUMBER_EATGABOON]
	{
		.cardName = "Eatgaboon"
	},
	[CARD_NUMBER_ELDEEN]
	{
		.cardName = "Eldeen"
	},
	[CARD_NUMBER_ELECTRIC_LIZARD]
	{
		.cardName = "Electric Lizard"
	},
	[CARD_NUMBER_ELECTRIC_SNAKE]
	{
		.cardName = "Electric Snake"
	},
	[CARD_NUMBER_ELECTRO_WHIP]
	{
		.cardName = "Electro-Whip"
	},
	[CARD_NUMBER_ELEGANT_EGOTIST]
	{
		.cardName = "Elegant Egotist"
	},
	[CARD_NUMBER_ELF_S_LIGHT]
	{
		.cardName = "Elf's Light"
	},
	[CARD_NUMBER_EMPRESS_JUDGE]
	{
		.cardName = "Empress Judge"
	},
	[CARD_NUMBER_ENCHANTED_JAVELIN]
	{
		.cardName = "Enchanted Javelin"
	},
	[CARD_NUMBER_ENCHANTING_MERMAID]
	{
		.cardName = "Enchanting Mermaid"
	},
	[CARD_NUMBER_ERADICATING_AEROSOL]
	{
		.cardName = "Eradicating Aerosol"
	},
	[CARD_NUMBER_ETERNAL_DRAUGHT]
	{
		.cardName = "Eternal Draught"
	},
	[CARD_NUMBER_ETERNAL_REST]
	{
		.cardName = "Eternal Rest"
	},
	[CARD_NUMBER_EXCHANGE]
	{
		.cardName = "Exchange"
	},
	[CARD_NUMBER_EXILE_OF_THE_WICKED]
	{
		.cardName = "Exile of the Wicked"
	},
	[CARD_NUMBER_EXODIA_THE_FORBIDDEN_ONE]
	{
		.cardName = "Exodia the Forbidden One"
	},
	[CARD_NUMBER_EYEARMOR]
	{
		.cardName = "Eyearmor"
	},
	[CARD_NUMBER_FAIRY_DRAGON]
	{
		.cardName = "Fairy Dragon"
	},
	[CARD_NUMBER_FAIRY_S_HAND_MIRROR]
	{
		.cardName = "Fairy's Hand Mirror"
	},
	[CARD_NUMBER_FAIRYWITCH]
	{
		.cardName = "Fairywitch"
	},
	[CARD_NUMBER_FAITH_BIRD]
	{
		.cardName = "Faith Bird"
	},
	[CARD_NUMBER_FAKE_TRAP]
	{
		.cardName = "Fake Trap"
	},
	[CARD_NUMBER_FERAL_IMP]
	{
		.cardName = "Feral Imp"
	},
	[CARD_NUMBER_FIEND_KRAKEN]
	{
		.cardName = "Fiend Kraken"
	},
	[CARD_NUMBER_FIEND_REFLECTION_1]
	{
		.cardName = "Fiend Reflection #1"
	},
	[CARD_NUMBER_FIEND_REFLECTION_2]
	{
		.cardName = "Fiend Reflection #2"
	},
	[CARD_NUMBER_FIEND_SWORD]
	{
		.cardName = "Fiend Sword"
	},
	[CARD_NUMBER_FIEND_S_HAND]
	{
		.cardName = "Fiend's Hand"
	},
	[CARD_NUMBER_FIEND_S_MIRROR]
	{
		.cardName = "Fiend's Mirror"
	},
	[CARD_NUMBER_FINAL_DESTINY]
	{
		.cardName = "Final Destiny"
	},
	[CARD_NUMBER_FINAL_FLAME]
	{
		.cardName = "Final Flame"
	},
	[CARD_NUMBER_FIRE_KRAKEN]
	{
		.cardName = "Fire Kraken"
	},
	[CARD_NUMBER_FIRE_REAPER]
	{
		.cardName = "Fire Reaper"
	},
	[CARD_NUMBER_FIREGRASS]
	{
		.cardName = "Firegrass"
	},
	[CARD_NUMBER_FIREWING_PEGASUS]
	{
		.cardName = "Firewing Pegasus"
	},
	[CARD_NUMBER_FIREYAROU]
	{
		.cardName = "Fireyarou"
	},
	[CARD_NUMBER_FISSURE]
	{
		.cardName = "Fissure"
	},
	[CARD_NUMBER_FLAME_CEREBRUS]
	{
		.cardName = "Flame Cerebrus"
	},
	[CARD_NUMBER_FLAME_CHAMPION]
	{
		.cardName = "Flame Champion"
	},
	[CARD_NUMBER_FLAME_GHOST]
	{
		.cardName = "Flame Ghost"
	},
	[CARD_NUMBER_FLAME_MANIPULATOR]
	{
		.cardName = "Flame Manipulator"
	},
	[CARD_NUMBER_FLAME_SWORDSMAN]
	{
		.cardName = "Flame Swordsman"
	},
	[CARD_NUMBER_FLAME_SWORDSMAN_2]
	{
		.cardName = "Flame Swordsman"
	},
	[CARD_NUMBER_FLAME_VIPER]
	{
		.cardName = "Flame Viper"
	},
	[CARD_NUMBER_FLASH_ASSAILANT]
	{
		.cardName = "Flash Assailant"
	},
	[CARD_NUMBER_FLOWER_WOLF]
	{
		.cardName = "Flower Wolf"
	},
	[CARD_NUMBER_FLYING_KAMAKIRI_1]
	{
		.cardName = "Flying Kamakiri #1"
	},
	[CARD_NUMBER_FLYING_KAMAKIRI_2]
	{
		.cardName = "Flying Kamakiri #2"
	},
	[CARD_NUMBER_FOLLOW_WIND]
	{
		.cardName = "Follow Wind"
	},
	[CARD_NUMBER_FORCED_REQUISITION]
	{
		.cardName = "Forced Requisition"
	},
	[CARD_NUMBER_FOREST]
	{
		.cardName = "Forest"
	},
	[CARD_NUMBER_FORTRESS_WHALE]
	{
		.cardName = "Fortress Whale"
	},
	[CARD_NUMBER_FORTRESS_WHALE_S_OATH]
	{
		.cardName = "Fortress Whale's Oath"
	},
	[CARD_NUMBER_FRENZIED_PANDA]
	{
		.cardName = "Frenzied Panda"
	},
	[CARD_NUMBER_FUSION_SAGE]
	{
		.cardName = "Fusion Sage"
	},
	[CARD_NUMBER_FUSIONIST]
	{
		.cardName = "Fusionist"
	},
	[CARD_NUMBER_GAIA_POWER]
	{
		.cardName = "Gaia Power"
	},
	[CARD_NUMBER_GAIA_THE_DRAGON_CHAMPION]
	{
		.cardName = "Gaia the Dragon Champion"
	},
	[CARD_NUMBER_GAIA_THE_FIERCE_KNIGHT]
	{
		.cardName = "Gaia The Fierce Knight"
	},
	[CARD_NUMBER_GAIA_THE_FIERCE_KNIGHT_2]
	{
		.cardName = "Gaia The Fierce Knight"
	},
	[CARD_NUMBER_GALE_DOGRA]
	{
		.cardName = "Gale Dogra"
	},
	[CARD_NUMBER_GAMMA_THE_MAGNET_WARRIOR]
	{
		.cardName = "Gamma The Magnet Warrior"
	},
	[CARD_NUMBER_GANIGUMO]
	{
		.cardName = "Ganigumo"
	},
	[CARD_NUMBER_GARMA_SWORD]
	{
		.cardName = "Garma Sword"
	},
	[CARD_NUMBER_GARMA_SWORD_OATH]
	{
		.cardName = "Garma Sword Oath"
	},
	[CARD_NUMBER_GARNECIA_ELEFANTIS]
	{
		.cardName = "Garnecia Elefantis"
	},
	[CARD_NUMBER_GAROOZIS]
	{
		.cardName = "Garoozis"
	},
	[CARD_NUMBER_GARVAS]
	{
		.cardName = "Garvas"
	},
	[CARD_NUMBER_GATE_GUARDIAN]
	{
		.cardName = "Gate Guardian"
	},
	[CARD_NUMBER_GATEKEEPER]
	{
		.cardName = "Gatekeeper"
	},
	[CARD_NUMBER_GAZELLE_THE_KING_OF_MYTHICAL_BEASTS]
	{
		.cardName = "Gazelle the King of Mythical Beasts"
	},
	[CARD_NUMBER_GEMINI_ELF]
	{
		.cardName = "Gemini Elf"
	},
	[CARD_NUMBER_GENIN]
	{
		.cardName = "Genin"
	},
	[CARD_NUMBER_GERM_INFECTION]
	{
		.cardName = "Germ Infection"
	},
	[CARD_NUMBER_GHOUL_WITH_AN_APPETITE]
	{
		.cardName = "Ghoul with an Appetite"
	},
	[CARD_NUMBER_GIANT_FLEA]
	{
		.cardName = "Giant Flea"
	},
	[CARD_NUMBER_GIANT_GERM]
	{
		.cardName = "Giant Germ"
	},
	[CARD_NUMBER_GIANT_MECH_SOLDIER]
	{
		.cardName = "Giant Mech-Soldier"
	},
	[CARD_NUMBER_GIANT_RAT]
	{
		.cardName = "Giant Rat"
	},
	[CARD_NUMBER_GIANT_RED_SEASNAKE]
	{
		.cardName = "Giant Red Seasnake"
	},
	[CARD_NUMBER_GIANT_SCORPION_OF_THE_TUNDRA]
	{
		.cardName = "Giant Scorpion of the Tundra"
	},
	[CARD_NUMBER_GIANT_SOLDIER_OF_STONE]
	{
		.cardName = "Giant Soldier of Stone"
	},
	[CARD_NUMBER_GIANT_TRUNADE]
	{
		.cardName = "Giant Trunade"
	},
	[CARD_NUMBER_GIANT_TURTLE_WHO_FEEDS_ON_FLAMES]
	{
		.cardName = "Giant Turtle Who Feeds on Flames"
	},
	[CARD_NUMBER_GIFT_OF_THE_MYSTICAL_ELF]
	{
		.cardName = "Gift of The Mystical Elf"
	},
	[CARD_NUMBER_GIGANTO]
	{
		.cardName = "Giganto"
	},
	[CARD_NUMBER_GIGA_TECH_WOLF]
	{
		.cardName = "Giga-tech Wolf"
	},
	[CARD_NUMBER_GILTIA_THE_D_KNIGHT]
	{
		.cardName = "Giltia the D. Knight"
	},
	[CARD_NUMBER_GOBLIN_FAN]
	{
		.cardName = "Goblin Fan"
	},
	[CARD_NUMBER_GOBLIN_S_SECRET_REMEDY]
	{
		.cardName = "Goblin's Secret Remedy"
	},
	[CARD_NUMBER_GODDESS_OF_WHIM]
	{
		.cardName = "Goddess of Whim"
	},
	[CARD_NUMBER_GODDESS_WITH_THE_THIRD_EYE]
	{
		.cardName = "Goddess with the Third Eye"
	},
	[CARD_NUMBER_GOKIBORE]
	{
		.cardName = "Gokibore"
	},
	[CARD_NUMBER_GRACEFUL_CHARITY]
	{
		.cardName = "Graceful Charity"
	},
	[CARD_NUMBER_GRACEFUL_DICE]
	{
		.cardName = "Graceful Dice"
	},
	[CARD_NUMBER_GRAPPLER]
	{
		.cardName = "Grappler"
	},
	[CARD_NUMBER_GRAVEDIGGER_GHOUL]
	{
		.cardName = "Gravedigger Ghoul"
	},
	[CARD_NUMBER_GRAVEKEEPER_S_SERVANT]
	{
		.cardName = "Gravekeeper's Servant"
	},
	[CARD_NUMBER_GRAVEROBBER]
	{
		.cardName = "Graverobber"
	},
	[CARD_NUMBER_GRAVEYARD_AND_THE_HAND_OF_INVITATION]
	{
		.cardName = "Graveyard and the Hand of Invitation"
	},
	[CARD_NUMBER_GREAT_BILL]
	{
		.cardName = "Great Bill"
	},
	[CARD_NUMBER_GREAT_MAMMOTH_OF_GOLDFINE]
	{
		.cardName = "Great Mammoth of Goldfine"
	},
	[CARD_NUMBER_GREAT_MOTH]
	{
		.cardName = "Great Moth"
	},
	[CARD_NUMBER_GREAT_WHITE]
	{
		.cardName = "Great White"
	},
	[CARD_NUMBER_GREEN_PHANTOM_KING]
	{
		.cardName = "Green Phantom King"
	},
	[CARD_NUMBER_GREENKAPPA]
	{
		.cardName = "Greenkappa"
	},
	[CARD_NUMBER_GRIFFORE]
	{
		.cardName = "Griffore"
	},
	[CARD_NUMBER_GRIGGLE]
	{
		.cardName = "Griggle"
	},
	[CARD_NUMBER_GROUND_ATTACKER_BUGROTH]
	{
		.cardName = "Ground Attacker Bugroth"
	},
	[CARD_NUMBER_GRUESOME_GOO]
	{
		.cardName = "Gruesome Goo"
	},
	[CARD_NUMBER_GRYPHON_WING]
	{
		.cardName = "Gryphon Wing"
	},
	[CARD_NUMBER_GUARDIAN_OF_THE_LABYRINTH]
	{
		.cardName = "Guardian of the Labyrinth"
	},
	[CARD_NUMBER_GUARDIAN_OF_THE_SEA]
	{
		.cardName = "Guardian of the Sea"
	},
	[CARD_NUMBER_GUARDIAN_OF_THE_THRONE_ROOM]
	{
		.cardName = "Guardian of the Throne Room"
	},
	[CARD_NUMBER_GUST]
	{
		.cardName = "Gust"
	},
	[CARD_NUMBER_GUST_FAN]
	{
		.cardName = "Gust Fan"
	},
	[CARD_NUMBER_GYAKUTENNO_MEGAMI]
	{
		.cardName = "Gyakutenno Megami"
	},
	[CARD_NUMBER_HAMBURGER_RECIPE]
	{
		.cardName = "Hamburger Recipe"
	},
	[CARD_NUMBER_HANE_HANE]
	{
		.cardName = "Hane-Hane"
	},
	[CARD_NUMBER_HANIWA]
	{
		.cardName = "Haniwa"
	},
	[CARD_NUMBER_HAPPY_LOVER]
	{
		.cardName = "Happy Lover"
	},
	[CARD_NUMBER_HARD_ARMOR]
	{
		.cardName = "Hard Armor"
	},
	[CARD_NUMBER_HARPIE_LADY]
	{
		.cardName = "Harpie Lady"
	},
	[CARD_NUMBER_HARPIE_LADY_SISTERS]
	{
		.cardName = "Harpie Lady Sisters"
	},
	[CARD_NUMBER_HARPIE_S_BROTHER]
	{
		.cardName = "Harpie's Brother"
	},
	[CARD_NUMBER_HARPIE_S_FEATHER_DUSTER]
	{
		.cardName = "Harpie's Feather Duster"
	},
	[CARD_NUMBER_HARPIE_S_PET_DRAGON]
	{
		.cardName = "Harpie's Pet Dragon"
	},
	[CARD_NUMBER_HEAVY_STORM]
	{
		.cardName = "Heavy Storm"
	},
	[CARD_NUMBER_HERCULES_BEETLE]
	{
		.cardName = "Hercules Beetle"
	},
	[CARD_NUMBER_HERO_OF_THE_EAST]
	{
		.cardName = "Hero of the East"
	},
	[CARD_NUMBER_HIBIKIME]
	{
		.cardName = "Hibikime"
	},
	[CARD_NUMBER_HIGH_TIDE_GYOJIN]
	{
		.cardName = "High Tide Gyojin"
	},
	[CARD_NUMBER_HINOTAMA]
	{
		.cardName = "Hinotama"
	},
	[CARD_NUMBER_HINOTAMA_SOUL]
	{
		.cardName = "Hinotama Soul"
	},
	[CARD_NUMBER_HIRO_S_SHADOW_SCOUT]
	{
		.cardName = "Hiro's Shadow Scout"
	},
	[CARD_NUMBER_HITODENCHAK]
	{
		.cardName = "Hitodenchak"
	},
	[CARD_NUMBER_HITOTSU_ME_GIANT]
	{
		.cardName = "Hitotsu-Me Giant"
	},
	[CARD_NUMBER_HOLOGRAH]
	{
		.cardName = "Holograh"
	},
	[CARD_NUMBER_HORN_IMP]
	{
		.cardName = "Horn Imp"
	},
	[CARD_NUMBER_HORN_OF_HEAVEN]
	{
		.cardName = "Horn of Heaven"
	},
	[CARD_NUMBER_HORN_OF_LIGHT]
	{
		.cardName = "Horn of Light"
	},
	[CARD_NUMBER_HORN_OF_THE_UNICORN]
	{
		.cardName = "Horn of the Unicorn"
	},
	[CARD_NUMBER_HOSHININGEN]
	{
		.cardName = "Hoshiningen"
	},
	[CARD_NUMBER_HOURGLASS_OF_COURAGE]
	{
		.cardName = "Hourglass of Courage"
	},
	[CARD_NUMBER_HOURGLASS_OF_LIFE]
	{
		.cardName = "Hourglass of Life"
	},
	[CARD_NUMBER_HOUSE_OF_ADHESIVE_TAPE]
	{
		.cardName = "House of Adhesive Tape"
	},
	[CARD_NUMBER_HUNGRY_BURGER]
	{
		.cardName = "Hungry Burger"
	},
	[CARD_NUMBER_HUNTER_SPIDER]
	{
		.cardName = "Hunter Spider"
	},
	[CARD_NUMBER_HYO]
	{
		.cardName = "Hyo"
	},
	[CARD_NUMBER_HYOSUBE]
	{
		.cardName = "Hyosube"
	},
	[CARD_NUMBER_HYOZANRYU]
	{
		.cardName = "Hyozanryu"
	},
	[CARD_NUMBER_ICE_WATER]
	{
		.cardName = "Ice Water"
	},
	[CARD_NUMBER_ILL_WITCH]
	{
		.cardName = "Ill Witch"
	},
	[CARD_NUMBER_ILLUSIONIST_FACELESS_MAGE]
	{
		.cardName = "Illusionist Faceless Mage"
	},
	[CARD_NUMBER_IMPERIAL_ORDER]
	{
		.cardName = "Imperial Order"
	},
	[CARD_NUMBER_INSECT_ARMOR_WITH_LASER_CANNON]
	{
		.cardName = "Insect Armor with Laser Cannon"
	},
	[CARD_NUMBER_INSECT_QUEEN]
	{
		.cardName = "Insect Queen"
	},
	[CARD_NUMBER_INSECT_SOLDIERS_OF_THE_SKY]
	{
		.cardName = "Insect Soldiers of the Sky"
	},
	[CARD_NUMBER_INSPECTION]
	{
		.cardName = "Inspection"
	},
	[CARD_NUMBER_INVADER_FROM_ANOTHER_DIMENSION]
	{
		.cardName = "Invader from Another Dimension"
	},
	[CARD_NUMBER_INVADER_OF_THE_THRONE]
	{
		.cardName = "Invader of the Throne"
	},
	[CARD_NUMBER_INVIGORATION]
	{
		.cardName = "Invigoration"
	},
	[CARD_NUMBER_JAVELIN_BEETLE]
	{
		.cardName = "Javelin Beetle"
	},
	[CARD_NUMBER_JAVELIN_BEETLE_PACT]
	{
		.cardName = "Javelin Beetle Pact"
	},
	[CARD_NUMBER_JELLYFISH]
	{
		.cardName = "Jellyfish"
	},
	[CARD_NUMBER_JIGEN_BAKUDAN]
	{
		.cardName = "Jigen Bakudan"
	},
	[CARD_NUMBER_JINZO]
	{
		.cardName = "Jinzo"
	},
	[CARD_NUMBER_JINZO_7]
	{
		.cardName = "Jinzo #7"
	},
	[CARD_NUMBER_JIRAI_GUMO]
	{
		.cardName = "Jirai Gumo"
	},
	[CARD_NUMBER_JUDGE_MAN]
	{
		.cardName = "Judge Man"
	},
	[CARD_NUMBER_JUST_DESSERTS]
	{
		.cardName = "Just Desserts"
	},
	[CARD_NUMBER_KAGEMUSHA_OF_THE_BLUE_FLAME]
	{
		.cardName = "Kagemusha of the Blue Flame"
	},
	[CARD_NUMBER_KAGENINGEN]
	{
		.cardName = "Kageningen"
	},
	[CARD_NUMBER_KAIRYU_SHIN]
	{
		.cardName = "Kairyu-Shin"
	},
	[CARD_NUMBER_KAISER_DRAGON]
	{
		.cardName = "Kaiser Dragon"
	},
	[CARD_NUMBER_KAMAKIRIMAN]
	{
		.cardName = "Kamakiriman"
	},
	[CARD_NUMBER_KAMINARI_ATTACK]
	{
		.cardName = "Kaminari Attack"
	},
	[CARD_NUMBER_KAMINARIKOZOU]
	{
		.cardName = "Kaminarikozou"
	},
	[CARD_NUMBER_KAMIONWIZARD]
	{
		.cardName = "Kamionwizard"
	},
	[CARD_NUMBER_KANAN_THE_SWORDMISTRESS]
	{
		.cardName = "Kanan the Swordmistress"
	},
	[CARD_NUMBER_KANIKABUTO]
	{
		.cardName = "Kanikabuto"
	},
	[CARD_NUMBER_KARATE_MAN]
	{
		.cardName = "Karate Man"
	},
	[CARD_NUMBER_KARBONALA_WARRIOR]
	{
		.cardName = "Karbonala Warrior"
	},
	[CARD_NUMBER_KATTAPILLAR]
	{
		.cardName = "Kattapillar"
	},
	[CARD_NUMBER_KAZEJIN]
	{
		.cardName = "Kazejin"
	},
	[CARD_NUMBER_KEY_MACE_2]
	{
		.cardName = "Key Mace #2"
	},
	[CARD_NUMBER_KILLER_NEEDLE]
	{
		.cardName = "Killer Needle"
	},
	[CARD_NUMBER_KING_FOG]
	{
		.cardName = "King Fog"
	},
	[CARD_NUMBER_KING_OF_YAMIMAKAI]
	{
		.cardName = "King of Yamimakai"
	},
	[CARD_NUMBER_KISEITAI]
	{
		.cardName = "Kiseitai"
	},
	[CARD_NUMBER_KOJIKOCY]
	{
		.cardName = "Kojikocy"
	},
	[CARD_NUMBER_KOTODAMA]
	{
		.cardName = "Kotodama"
	},
	[CARD_NUMBER_KOUMORI_DRAGON]
	{
		.cardName = "Koumori Dragon"
	},
	[CARD_NUMBER_KROKODILUS]
	{
		.cardName = "Krokodilus"
	},
	[CARD_NUMBER_KUMOOTOKO]
	{
		.cardName = "Kumootoko"
	},
	[CARD_NUMBER_KUNAI_WITH_CHAIN]
	{
		.cardName = "Kunai with Chain"
	},
	[CARD_NUMBER_KURAMA]
	{
		.cardName = "Kurama"
	},
	[CARD_NUMBER_KURIBOH]
	{
		.cardName = "Kuriboh"
	},
	[CARD_NUMBER_KUWAGATA_A]
	{
		.cardName = "Kuwagata a"
	},
	[CARD_NUMBER_KWAGAR_HERCULES]
	{
		.cardName = "Kwagar Hercules"
	},
	[CARD_NUMBER_LA_JINN_THE_MYSTICAL_GENIE_OF_THE_LAMP]
	{
		.cardName = "La Jinn the Mystical Genie of the Lamp"
	},
	[CARD_NUMBER_LABYRINTH_TANK]
	{
		.cardName = "Labyrinth Tank"
	},
	[CARD_NUMBER_LABYRINTH_WALL]
	{
		.cardName = "Labyrinth Wall"
	},
	[CARD_NUMBER_LADY_OF_FAITH]
	{
		.cardName = "Lady of Faith"
	},
	[CARD_NUMBER_LALA_LI_OON]
	{
		.cardName = "LaLa Li-oon"
	},
	[CARD_NUMBER_LARVAE_MOTH]
	{
		.cardName = "Larvae Moth"
	},
	[CARD_NUMBER_LARVAS]
	{
		.cardName = "Larvas"
	},
	[CARD_NUMBER_LASER_CANNON_ARMOR]
	{
		.cardName = "Laser Cannon Armor"
	},
	[CARD_NUMBER_LAST_DAY_OF_WITCH]
	{
		.cardName = "Last Day of Witch"
	},
	[CARD_NUMBER_LAST_WILL]
	{
		.cardName = "Last Will"
	},
	[CARD_NUMBER_LAUGHING_FLOWER]
	{
		.cardName = "Laughing Flower"
	},
	[CARD_NUMBER_LAUNCHER_SPIDER]
	{
		.cardName = "Launcher Spider"
	},
	[CARD_NUMBER_LAUNCHER_SPIDER_2]
	{
		.cardName = "Launcher Spider"
	},
	[CARD_NUMBER_LAVA_BATTLEGUARD]
	{
		.cardName = "Lava Battleguard"
	},
	[CARD_NUMBER_LEFT_ARM_OF_THE_FORBIDDEN_ONE]
	{
		.cardName = "Left Arm of the Forbidden One"
	},
	[CARD_NUMBER_LEFT_LEG_OF_THE_FORBIDDEN_ONE]
	{
		.cardName = "Left Leg of the Forbidden One"
	},
	[CARD_NUMBER_LEGENDARY_SWORD]
	{
		.cardName = "Legendary Sword"
	},
	[CARD_NUMBER_LEGHUL]
	{
		.cardName = "Leghul"
	},
	[CARD_NUMBER_LEOGUN]
	{
		.cardName = "Leogun"
	},
	[CARD_NUMBER_LESSER_DRAGON]
	{
		.cardName = "Lesser Dragon"
	},
	[CARD_NUMBER_LIGHT_OF_INTERVENTION]
	{
		.cardName = "Light of Intervention"
	},
	[CARD_NUMBER_LIGHTFORCE_SWORD]
	{
		.cardName = "Lightforce Sword"
	},
	[CARD_NUMBER_LIQUID_BEAST]
	{
		.cardName = "Liquid Beast"
	},
	[CARD_NUMBER_LITTLE_CHIMERA]
	{
		.cardName = "Little Chimera"
	},
	[CARD_NUMBER_LITTLE_D]
	{
		.cardName = "Little D"
	},
	[CARD_NUMBER_LORD_OF_D]
	{
		.cardName = "Lord of D."
	},
	[CARD_NUMBER_LORD_OF_THE_LAMP]
	{
		.cardName = "Lord of the Lamp"
	},
	[CARD_NUMBER_LORD_OF_ZEMIA]
	{
		.cardName = "Lord of Zemia"
	},
	[CARD_NUMBER_LUMINOUS_SPARK]
	{
		.cardName = "Luminous Spark"
	},
	[CARD_NUMBER_LUNAR_QUEEN_ELZAIM]
	{
		.cardName = "Lunar Queen Elzaim"
	},
	[CARD_NUMBER_MABARREL]
	{
		.cardName = "Mabarrel"
	},
	[CARD_NUMBER_MACHINE_CONVERSION_FACTORY]
	{
		.cardName = "Machine Conversion Factory"
	},
	[CARD_NUMBER_MACHINE_KING]
	{
		.cardName = "Machine King"
	},
	[CARD_NUMBER_MAGIC_JAMMER]
	{
		.cardName = "Magic Jammer"
	},
	[CARD_NUMBER_MAGIC_THORN]
	{
		.cardName = "Magic Thorn"
	},
	[CARD_NUMBER_MAGICAL_GHOST]
	{
		.cardName = "Magical Ghost"
	},
	[CARD_NUMBER_MAGICAL_HATS]
	{
		.cardName = "Magical Hats"
	},
	[CARD_NUMBER_MAGICAL_LABYRINTH]
	{
		.cardName = "Magical Labyrinth"
	},
	[CARD_NUMBER_MAGIC_ARM_SHIELD]
	{
		.cardName = "Magic-Arm Shield"
	},
	[CARD_NUMBER_MAGICIAN_OF_BLACK_CHAOS]
	{
		.cardName = "Magician of Black Chaos"
	},
	[CARD_NUMBER_MAGICIAN_OF_FAITH]
	{
		.cardName = "Magician of Faith"
	},
	[CARD_NUMBER_MAHA_VAILO]
	{
		.cardName = "Maha Vailo"
	},
	[CARD_NUMBER_MAIDEN_OF_THE_MOONLIGHT]
	{
		.cardName = "Maiden of the Moonlight"
	},
	[CARD_NUMBER_MAJOR_RIOT]
	{
		.cardName = "Major Riot"
	},
	[CARD_NUMBER_MALEVOLENT_NUZZLER]
	{
		.cardName = "Malevolent Nuzzler"
	},
	[CARD_NUMBER_MAMMOTH_GRAVEYARD]
	{
		.cardName = "Mammoth Graveyard"
	},
	[CARD_NUMBER_MAN_EATER]
	{
		.cardName = "Man Eater"
	},
	[CARD_NUMBER_MAN_EATER_BUG]
	{
		.cardName = "Man-Eater Bug"
	},
	[CARD_NUMBER_MAN_EATING_BLACK_SHARK]
	{
		.cardName = "Man-eating Black Shark"
	},
	[CARD_NUMBER_MAN_EATING_PLANT]
	{
		.cardName = "Man-Eating Plant"
	},
	[CARD_NUMBER_MAN_EATING_TREASURE_CHEST]
	{
		.cardName = "Man-Eating Treasure Chest"
	},
	[CARD_NUMBER_MANGA_RYU_RAN]
	{
		.cardName = "Manga Ryu-Ran"
	},
	[CARD_NUMBER_MARINE_BEAST]
	{
		.cardName = "Marine Beast"
	},
	[CARD_NUMBER_MASAKI_THE_LEGENDARY_SWORDSMAN]
	{
		.cardName = "Masaki the Legendary Swordsman"
	},
	[CARD_NUMBER_MASK_OF_DARKNESS]
	{
		.cardName = "Mask of Darkness"
	},
	[CARD_NUMBER_MASKED_SORCERER]
	{
		.cardName = "Masked Sorcerer"
	},
	[CARD_NUMBER_MASTER_AND_EXPERT]
	{
		.cardName = "Master & Expert"
	},
	[CARD_NUMBER_MAVELUS]
	{
		.cardName = "Mavelus"
	},
	[CARD_NUMBER_MECHANICAL_SNAIL]
	{
		.cardName = "Mechanical Snail"
	},
	[CARD_NUMBER_MECHANICAL_SPIDER]
	{
		.cardName = "Mechanical Spider"
	},
	[CARD_NUMBER_MECHANICALCHASER]
	{
		.cardName = "Mechanicalchaser"
	},
	[CARD_NUMBER_MEDA_BAT]
	{
		.cardName = "Meda Bat"
	},
	[CARD_NUMBER_MEGA_THUNDERBALL]
	{
		.cardName = "Mega Thunderball"
	},
	[CARD_NUMBER_MEGAMORPH]
	{
		.cardName = "Megamorph"
	},
	[CARD_NUMBER_MEGAZOWLER]
	{
		.cardName = "Megazowler"
	},
	[CARD_NUMBER_MEOTOKO]
	{
		.cardName = "Meotoko"
	},
	[CARD_NUMBER_MESMERIC_CONTROL]
	{
		.cardName = "Mesmeric Control"
	},
	[CARD_NUMBER_MESSENGER_OF_PEACE]
	{
		.cardName = "Messenger of Peace"
	},
	[CARD_NUMBER_METAL_DETECTOR]
	{
		.cardName = "Metal Detector"
	},
	[CARD_NUMBER_METAL_DRAGON]
	{
		.cardName = "Metal Dragon"
	},
	[CARD_NUMBER_METAL_FISH]
	{
		.cardName = "Metal Fish"
	},
	[CARD_NUMBER_METAL_GUARDIAN]
	{
		.cardName = "Metal Guardian"
	},
	[CARD_NUMBER_METALMORPH]
	{
		.cardName = "Metalmorph"
	},
	[CARD_NUMBER_METALZOA]
	{
		.cardName = "Metalzoa"
	},
	[CARD_NUMBER_METEOR_B_DRAGON]
	{
		.cardName = "Meteor B. Dragon"
	},
	[CARD_NUMBER_METEOR_DRAGON]
	{
		.cardName = "Meteor Dragon"
	},
	[CARD_NUMBER_MIKAZUKINOYAIBA]
	{
		.cardName = "Mikazukinoyaiba"
	},
	[CARD_NUMBER_MILLENNIUM_GOLEM]
	{
		.cardName = "Millennium Golem"
	},
	[CARD_NUMBER_MILLENNIUM_SHIELD]
	{
		.cardName = "Millennium Shield"
	},
	[CARD_NUMBER_MILUS_RADIANT]
	{
		.cardName = "Milus Radiant"
	},
	[CARD_NUMBER_MINAR]
	{
		.cardName = "Minar"
	},
	[CARD_NUMBER_MINOMUSHI_WARRIOR]
	{
		.cardName = "Minomushi Warrior"
	},
	[CARD_NUMBER_MIRROR_FORCE]
	{
		.cardName = "Mirror Force"
	},
	[CARD_NUMBER_MIRROR_WALL]
	{
		.cardName = "Mirror Wall"
	},
	[CARD_NUMBER_MISAIRUZAME]
	{
		.cardName = "Misairuzame"
	},
	[CARD_NUMBER_MOLTEN_DESTRUCTION]
	{
		.cardName = "Molten Destruction"
	},
	[CARD_NUMBER_MONSTER_EGG]
	{
		.cardName = "Monster Egg"
	},
	[CARD_NUMBER_MONSTER_EYE]
	{
		.cardName = "Monster Eye"
	},
	[CARD_NUMBER_MONSTER_REBORN]
	{
		.cardName = "Monster Reborn"
	},
	[CARD_NUMBER_MONSTER_TAMER]
	{
		.cardName = "Monster Tamer"
	},
	[CARD_NUMBER_MONSTROUS_BIRD]
	{
		.cardName = "Monstrous Bird"
	},
	[CARD_NUMBER_MOON_ENVOY]
	{
		.cardName = "Moon Envoy"
	},
	[CARD_NUMBER_MOOYAN_CURRY]
	{
		.cardName = "Mooyan Curry"
	},
	[CARD_NUMBER_MORINPHEN]
	{
		.cardName = "Morinphen"
	},
	[CARD_NUMBER_MORPHING_JAR]
	{
		.cardName = "Morphing Jar"
	},
	[CARD_NUMBER_MORPHING_JAR_2]
	{
		.cardName = "Morphing Jar #2"
	},
	[CARD_NUMBER_MOTHER_GRIZZLY]
	{
		.cardName = "Mother Grizzly"
	},
	[CARD_NUMBER_MOUNTAIN]
	{
		.cardName = "Mountain"
	},
	[CARD_NUMBER_MOUNTAIN_WARRIOR]
	{
		.cardName = "Mountain Warrior"
	},
	[CARD_NUMBER_MR_VOLCANO]
	{
		.cardName = "Mr. Volcano"
	},
	[CARD_NUMBER_MUKA_MUKA]
	{
		.cardName = "Muka Muka"
	},
	[CARD_NUMBER_MUSHROOM_MAN]
	{
		.cardName = "Mushroom Man"
	},
	[CARD_NUMBER_MUSHROOM_MAN_2]
	{
		.cardName = "Mushroom Man #2"
	},
	[CARD_NUMBER_MUSICIAN_KING]
	{
		.cardName = "Musician King"
	},
	[CARD_NUMBER_M_WARRIOR_1]
	{
		.cardName = "M-Warrior #1"
	},
	[CARD_NUMBER_M_WARRIOR_2]
	{
		.cardName = "M-Warrior #2"
	},
	[CARD_NUMBER_MYSTERIOUS_PUPPETEER]
	{
		.cardName = "Mysterious Puppeteer"
	},
	[CARD_NUMBER_MYSTIC_HORSEMAN]
	{
		.cardName = "Mystic Horseman"
	},
	[CARD_NUMBER_MYSTIC_LAMP]
	{
		.cardName = "Mystic Lamp"
	},
	[CARD_NUMBER_MYSTIC_PLASMA_ZONE]
	{
		.cardName = "Mystic Plasma Zone"
	},
	[CARD_NUMBER_MYSTIC_PROBE]
	{
		.cardName = "Mystic Probe"
	},
	[CARD_NUMBER_MYSTIC_TOMATO]
	{
		.cardName = "Mystic Tomato"
	},
	[CARD_NUMBER_MYSTICAL_CAPTURE_CHAIN]
	{
		.cardName = "Mystical Capture Chain"
	},
	[CARD_NUMBER_MYSTICAL_ELF]
	{
		.cardName = "Mystical Elf"
	},
	[CARD_NUMBER_MYSTICAL_MOON]
	{
		.cardName = "Mystical Moon"
	},
	[CARD_NUMBER_MYSTICAL_SAND]
	{
		.cardName = "Mystical Sand"
	},
	[CARD_NUMBER_MYSTICAL_SHEEP_1]
	{
		.cardName = "Mystical Sheep #1"
	},
	[CARD_NUMBER_MYSTICAL_SHEEP_2]
	{
		.cardName = "Mystical Sheep #2"
	},
	[CARD_NUMBER_MYSTICAL_SPACE_TYPHOON]
	{
		.cardName = "Mystical Space Typhoon"
	},
	[CARD_NUMBER_NEEDLE_BALL]
	{
		.cardName = "Needle Ball"
	},
	[CARD_NUMBER_NEEDLE_WORM]
	{
		.cardName = "Needle Worm"
	},
	[CARD_NUMBER_NEGATE_ATTACK]
	{
		.cardName = "Negate Attack"
	},
	[CARD_NUMBER_NEKOGAL_1]
	{
		.cardName = "Nekogal #1"
	},
	[CARD_NUMBER_NEKOGAL_2]
	{
		.cardName = "Nekogal #2"
	},
	[CARD_NUMBER_NEMURIKO]
	{
		.cardName = "Nemuriko"
	},
	[CARD_NUMBER_NEO_THE_MAGIC_SWORDSMAN]
	{
		.cardName = "Neo the Magic Swordsman"
	},
	[CARD_NUMBER_NIMBLE_MOMONGA]
	{
		.cardName = "Nimble Momonga"
	},
	[CARD_NUMBER_NIWATORI]
	{
		.cardName = "Niwatori"
	},
	[CARD_NUMBER_NOBLEMAN_OF_CROSSOUT]
	{
		.cardName = "Nobleman of Crossout"
	},
	[CARD_NUMBER_NOBLEMAN_OF_EXTERMINATION]
	{
		.cardName = "Nobleman of Extermination"
	},
	[CARD_NUMBER_NOVOX_S_PRAYER]
	{
		.cardName = "Novox's Prayer"
	},
	[CARD_NUMBER_NUMINOUS_HEALER]
	{
		.cardName = "Numinous Healer"
	},
	[CARD_NUMBER_OCTOBERSER]
	{
		.cardName = "Octoberser"
	},
	[CARD_NUMBER_OCUBEAM]
	{
		.cardName = "Ocubeam"
	},
	[CARD_NUMBER_OGRE_OF_THE_BLACK_SHADOW]
	{
		.cardName = "Ogre of the Black Shadow"
	},
	[CARD_NUMBER_ONE_EYED_SHIELD_DRAGON]
	{
		.cardName = "One-Eyed Shield Dragon"
	},
	[CARD_NUMBER_OOGUCHI]
	{
		.cardName = "Ooguchi"
	},
	[CARD_NUMBER_OOKAZI]
	{
		.cardName = "Ookazi"
	},
	[CARD_NUMBER_ORION_THE_BATTLE_KING]
	{
		.cardName = "Orion the Battle King"
	},
	[CARD_NUMBER_OSCILLO_HERO]
	{
		.cardName = "Oscillo Hero"
	},
	[CARD_NUMBER_OSCILLO_HERO_2]
	{
		.cardName = "Oscillo Hero #2"
	},
	[CARD_NUMBER_PAINFUL_CHOICE]
	{
		.cardName = "Painful Choice"
	},
	[CARD_NUMBER_PALE_BEAST]
	{
		.cardName = "Pale Beast"
	},
	[CARD_NUMBER_PANTHER_WARRIOR]
	{
		.cardName = "Panther Warrior"
	},
	[CARD_NUMBER_PARALYZING_POTION]
	{
		.cardName = "Paralyzing Potion"
	},
	[CARD_NUMBER_PARASITE_PARACIDE]
	{
		.cardName = "Parasite Paracide"
	},
	[CARD_NUMBER_PARROT_DRAGON]
	{
		.cardName = "Parrot Dragon"
	},
	[CARD_NUMBER_PATROL_ROBO]
	{
		.cardName = "Patrol Robo"
	},
	[CARD_NUMBER_PEACOCK]
	{
		.cardName = "Peacock"
	},
	[CARD_NUMBER_PENDULUM_MACHINE]
	{
		.cardName = "Pendulum Machine"
	},
	[CARD_NUMBER_PENDULUM_MACHINE_2]
	{
		.cardName = "Pendulum Machine"
	},
	[CARD_NUMBER_PENGUIN_KNIGHT]
	{
		.cardName = "Penguin Knight"
	},
	[CARD_NUMBER_PENGUIN_SOLDIER]
	{
		.cardName = "Penguin Soldier"
	},
	[CARD_NUMBER_PERFECTLY_ULTIMATE_GREAT_MOTH]
	{
		.cardName = "Perfectly Ultimate Great Moth"
	},
	[CARD_NUMBER_PERFORMANCE_OF_SWORD]
	{
		.cardName = "Performance of Sword"
	},
	[CARD_NUMBER_PETIT_ANGEL]
	{
		.cardName = "Petit Angel"
	},
	[CARD_NUMBER_PETIT_DRAGON]
	{
		.cardName = "Petit Dragon"
	},
	[CARD_NUMBER_PETIT_MOTH]
	{
		.cardName = "Petit Moth"
	},
	[CARD_NUMBER_POLYMERIZATION]
	{
		.cardName = "Polymerization"
	},
	[CARD_NUMBER_POLYMERIZATION_2]
	{
		.cardName = "Polymerization"
	},
	[CARD_NUMBER_POT_OF_GREED]
	{
		.cardName = "Pot of Greed"
	},
	[CARD_NUMBER_POWER_OF_KAISHIN]
	{
		.cardName = "Power of Kaishin"
	},
	[CARD_NUMBER_PRAGTICAL]
	{
		.cardName = "Pragtical"
	},
	[CARD_NUMBER_PREMATURE_BURIAL]
	{
		.cardName = "Premature Burial"
	},
	[CARD_NUMBER_PREVENT_RAT]
	{
		.cardName = "Prevent Rat"
	},
	[CARD_NUMBER_PRINCESS_OF_TSURUGI]
	{
		.cardName = "Princess of Tsurugi"
	},
	[CARD_NUMBER_PRISMAN]
	{
		.cardName = "Prisman"
	},
	[CARD_NUMBER_PROHIBITION]
	{
		.cardName = "Prohibition"
	},
	[CARD_NUMBER_PROTECTOR_OF_THE_THRONE]
	{
		.cardName = "Protector of the Throne"
	},
	[CARD_NUMBER_PSYCHIC_KAPPA]
	{
		.cardName = "Psychic Kappa"
	},
	[CARD_NUMBER_PUMPKING_THE_KING_OF_GHOSTS]
	{
		.cardName = "Pumpking the King of Ghosts"
	},
	[CARD_NUMBER_PUNISHED_EAGLE]
	{
		.cardName = "Punished Eagle"
	},
	[CARD_NUMBER_QUEEN_BIRD]
	{
		.cardName = "Queen Bird"
	},
	[CARD_NUMBER_QUEEN_OF_AUTUMN_LEAVES]
	{
		.cardName = "Queen of Autumn Leaves"
	},
	[CARD_NUMBER_QUEEN_S_DOUBLE]
	{
		.cardName = "Queen's Double"
	},
	[CARD_NUMBER_RABID_HORSEMAN]
	{
		.cardName = "Rabid Horseman"
	},
	[CARD_NUMBER_RAIGEKI]
	{
		.cardName = "Raigeki"
	},
	[CARD_NUMBER_RAIMEI]
	{
		.cardName = "Raimei"
	},
	[CARD_NUMBER_RAINBOW_FLOWER]
	{
		.cardName = "Rainbow Flower"
	},
	[CARD_NUMBER_RAISE_BODY_HEAT]
	{
		.cardName = "Raise Body Heat"
	},
	[CARD_NUMBER_RARE_FISH]
	{
		.cardName = "Rare Fish"
	},
	[CARD_NUMBER_RAY_AND_TEMPERATURE]
	{
		.cardName = "Ray & Temperature"
	},
	[CARD_NUMBER_REAPER_OF_THE_CARDS]
	{
		.cardName = "Reaper of the Cards"
	},
	[CARD_NUMBER_RED_ARCHERY_GIRL]
	{
		.cardName = "Red Archery Girl"
	},
	[CARD_NUMBER_RED_MEDICINE]
	{
		.cardName = "Red Medicine"
	},
	[CARD_NUMBER_RED_EYES_B_DRAGON]
	{
		.cardName = "Red-Eyes B. Dragon"
	},
	[CARD_NUMBER_RED_EYES_BLACK_METAL_DRAGON]
	{
		.cardName = "Red-Eyes Black Metal Dragon"
	},
	[CARD_NUMBER_REINFORCEMENTS]
	{
		.cardName = "Reinforcements"
	},
	[CARD_NUMBER_RELINQUISHED]
	{
		.cardName = "Relinquished"
	},
	[CARD_NUMBER_REMOVE_TRAP]
	{
		.cardName = "Remove Trap"
	},
	[CARD_NUMBER_RESPECT_PLAY]
	{
		.cardName = "Respect Play"
	},
	[CARD_NUMBER_RESTRUCTER_REVOLUTION]
	{
		.cardName = "Restructer Revolution"
	},
	[CARD_NUMBER_RESURRECTION_OF_CHAKRA]
	{
		.cardName = "Resurrection of Chakra"
	},
	[CARD_NUMBER_REVERSE_TRAP]
	{
		.cardName = "Reverse Trap"
	},
	[CARD_NUMBER_REVIVAL_OF_DOKURORIDER]
	{
		.cardName = "Revival of Dokurorider"
	},
	[CARD_NUMBER_RHAIMUNDOS_OF_THE_RED_SWORD]
	{
		.cardName = "Rhaimundos of the Red Sword"
	},
	[CARD_NUMBER_RIGHT_ARM_OF_THE_FORBIDDEN_ONE]
	{
		.cardName = "Right Arm of the Forbidden One"
	},
	[CARD_NUMBER_RIGHT_LEG_OF_THE_FORBIDDEN_ONE]
	{
		.cardName = "Right Leg of the Forbidden One"
	},
	[CARD_NUMBER_RING_OF_MAGNETISM]
	{
		.cardName = "Ring of Magnetism"
	},
	[CARD_NUMBER_RIRYOKU]
	{
		.cardName = "Riryoku"
	},
	[CARD_NUMBER_RISING_AIR_CURRENT]
	{
		.cardName = "Rising Air Current"
	},
	[CARD_NUMBER_ROARING_OCEAN_SNAKE]
	{
		.cardName = "Roaring Ocean Snake"
	},
	[CARD_NUMBER_ROBBIN_GOBLIN]
	{
		.cardName = "Robbin' Goblin"
	},
	[CARD_NUMBER_ROCK_OGRE_GROTTO_1]
	{
		.cardName = "Rock Ogre Grotto #1"
	},
	[CARD_NUMBER_ROGUE_DOLL]
	{
		.cardName = "Rogue Doll"
	},
	[CARD_NUMBER_ROOT_WATER]
	{
		.cardName = "Root Water"
	},
	[CARD_NUMBER_ROSE_SPECTRE_OF_DUNN]
	{
		.cardName = "Rose Spectre of Dunn"
	},
	[CARD_NUMBER_ROYAL_DECREE]
	{
		.cardName = "Royal Decree"
	},
	[CARD_NUMBER_ROYAL_GUARD]
	{
		.cardName = "Royal Guard"
	},
	[CARD_NUMBER_RUDE_KAISER]
	{
		.cardName = "Rude Kaiser"
	},
	[CARD_NUMBER_RUSH_RECKLESSLY]
	{
		.cardName = "Rush Recklessly"
	},
	[CARD_NUMBER_RYU_KISHIN]
	{
		.cardName = "Ryu-Kishin"
	},
	[CARD_NUMBER_RYU_KISHIN_POWERED]
	{
		.cardName = "Ryu-Kishin Powered"
	},
	[CARD_NUMBER_RYU_RAN]
	{
		.cardName = "Ryu-Ran"
	},
	[CARD_NUMBER_SABER_SLASHER]
	{
		.cardName = "Saber Slasher"
	},
	[CARD_NUMBER_SAGGI_THE_DARK_CLOWN]
	{
		.cardName = "Saggi the Dark Clown"
	},
	[CARD_NUMBER_SALAMANDRA]
	{
		.cardName = "Salamandra"
	},
	[CARD_NUMBER_SAND_STONE]
	{
		.cardName = "Sand Stone"
	},
	[CARD_NUMBER_SANGA_OF_THE_THUNDER]
	{
		.cardName = "Sanga of the Thunder"
	},
	[CARD_NUMBER_SANGAN]
	{
		.cardName = "Sangan"
	},
	[CARD_NUMBER_SEA_KAMEN]
	{
		.cardName = "Sea Kamen"
	},
	[CARD_NUMBER_SEA_KING_DRAGON]
	{
		.cardName = "Sea King Dragon"
	},
	[CARD_NUMBER_SEAL_OF_THE_ANCIENTS]
	{
		.cardName = "Seal of the Ancients"
	},
	[CARD_NUMBER_SEBEK_S_BLESSING]
	{
		.cardName = "Sebek's Blessing"
	},
	[CARD_NUMBER_SECTARIAN_OF_SECRETS]
	{
		.cardName = "Sectarian of Secrets"
	},
	[CARD_NUMBER_SEIYARYU]
	{
		.cardName = "Seiyaryu"
	},
	[CARD_NUMBER_SENGENJIN]
	{
		.cardName = "Sengenjin"
	},
	[CARD_NUMBER_SENJU_OF_THE_THOUSAND_HANDS]
	{
		.cardName = "Senju of the Thousand Hands"
	},
	[CARD_NUMBER_SERPENT_NIGHT_DRAGON]
	{
		.cardName = "Serpent Night Dragon"
	},
	[CARD_NUMBER_SEVEN_TOOLS_OF_THE_BANDIT]
	{
		.cardName = "Seven Tools of the Bandit"
	},
	[CARD_NUMBER_SHADOW_GHOUL]
	{
		.cardName = "Shadow Ghoul"
	},
	[CARD_NUMBER_SHADOW_SPECTER]
	{
		.cardName = "Shadow Specter"
	},
	[CARD_NUMBER_SHARE_THE_PAIN]
	{
		.cardName = "Share the Pain"
	},
	[CARD_NUMBER_SHIELD_AND_SWORD]
	{
		.cardName = "Shield & Sword"
	},
	[CARD_NUMBER_SHINING_FAIRY]
	{
		.cardName = "Shining Fairy"
	},
	[CARD_NUMBER_SHOVEL_CRUSHER]
	{
		.cardName = "Shovel Crusher"
	},
	[CARD_NUMBER_SILVER_BOW_AND_ARROW]
	{
		.cardName = "Silver Bow and Arrow"
	},
	[CARD_NUMBER_SILVER_FANG]
	{
		.cardName = "Silver Fang"
	},
	[CARD_NUMBER_SINISTER_SERPENT]
	{
		.cardName = "Sinister Serpent"
	},
	[CARD_NUMBER_SKELENGEL]
	{
		.cardName = "Skelengel"
	},
	[CARD_NUMBER_SKELGON]
	{
		.cardName = "Skelgon"
	},
	[CARD_NUMBER_SKULL_DICE]
	{
		.cardName = "Skull Dice"
	},
	[CARD_NUMBER_SKULL_GUARDIAN]
	{
		.cardName = "Skull Guardian"
	},
	[CARD_NUMBER_SKULL_KNIGHT]
	{
		.cardName = "Skull Knight"
	},
	[CARD_NUMBER_SKULL_RED_BIRD]
	{
		.cardName = "Skull Red Bird"
	},
	[CARD_NUMBER_SKULL_SERVANT]
	{
		.cardName = "Skull Servant"
	},
	[CARD_NUMBER_SKULL_STALKER]
	{
		.cardName = "Skull Stalker"
	},
	[CARD_NUMBER_SKULLBIRD]
	{
		.cardName = "Skullbird"
	},
	[CARD_NUMBER_SLEEPING_LION]
	{
		.cardName = "Sleeping Lion"
	},
	[CARD_NUMBER_SLOT_MACHINE]
	{
		.cardName = "Slot Machine"
	},
	[CARD_NUMBER_SNAKE_FANG]
	{
		.cardName = "Snake Fang"
	},
	[CARD_NUMBER_SNAKEYASHI]
	{
		.cardName = "Snakeyashi"
	},
	[CARD_NUMBER_SNATCH_STEAL]
	{
		.cardName = "Snatch Steal"
	},
	[CARD_NUMBER_SOGEN]
	{
		.cardName = "Sogen"
	},
	[CARD_NUMBER_SOLEMN_JUDGMENT]
	{
		.cardName = "Solemn Judgment"
	},
	[CARD_NUMBER_SOLITUDE]
	{
		.cardName = "Solitude"
	},
	[CARD_NUMBER_SOLOMON_S_LAWBOOK]
	{
		.cardName = "Solomon's Lawbook"
	},
	[CARD_NUMBER_SONIC_BIRD]
	{
		.cardName = "Sonic Bird"
	},
	[CARD_NUMBER_SONIC_MAID]
	{
		.cardName = "Sonic Maid"
	},
	[CARD_NUMBER_SOUL_HUNTER]
	{
		.cardName = "Soul Hunter"
	},
	[CARD_NUMBER_SOUL_OF_THE_PURE]
	{
		.cardName = "Soul of the Pure"
	},
	[CARD_NUMBER_SOUL_RELEASE]
	{
		.cardName = "Soul Release"
	},
	[CARD_NUMBER_SPARKS]
	{
		.cardName = "Sparks"
	},
	[CARD_NUMBER_SPEAR_CRETIN]
	{
		.cardName = "Spear Cretin"
	},
	[CARD_NUMBER_SPELLBINDING_CIRCLE]
	{
		.cardName = "Spellbinding Circle"
	},
	[CARD_NUMBER_SPIKE_SEADRA]
	{
		.cardName = "Spike Seadra"
	},
	[CARD_NUMBER_SPIRIT_OF_THE_BOOKS]
	{
		.cardName = "Spirit of the Books"
	},
	[CARD_NUMBER_SPIRIT_OF_THE_HARP]
	{
		.cardName = "Spirit of the Harp"
	},
	[CARD_NUMBER_STAIN_STORM]
	{
		.cardName = "Stain Storm"
	},
	[CARD_NUMBER_STAR_BOY]
	{
		.cardName = "Star Boy"
	},
	[CARD_NUMBER_STEEL_OGRE_GROTTO_1]
	{
		.cardName = "Steel Ogre Grotto #1"
	},
	[CARD_NUMBER_STEEL_OGRE_GROTTO_2]
	{
		.cardName = "Steel Ogre Grotto #2"
	},
	[CARD_NUMBER_STEEL_SCORPION]
	{
		.cardName = "Steel Scorpion"
	},
	[CARD_NUMBER_STEEL_SHELL]
	{
		.cardName = "Steel Shell"
	},
	[CARD_NUMBER_STIM_PACK]
	{
		.cardName = "Stim-Pack"
	},
	[CARD_NUMBER_STONE_ARMADILLER]
	{
		.cardName = "Stone Armadiller"
	},
	[CARD_NUMBER_STONE_OGRE_GROTTO]
	{
		.cardName = "Stone Ogre Grotto"
	},
	[CARD_NUMBER_STOP_DEFENSE]
	{
		.cardName = "Stop Defense"
	},
	[CARD_NUMBER_STUFFED_ANIMAL]
	{
		.cardName = "Stuffed Animal"
	},
	[CARD_NUMBER_SUCCUBUS_KNIGHT]
	{
		.cardName = "Succubus Knight"
	},
	[CARD_NUMBER_SUIJIN]
	{
		.cardName = "Suijin"
	},
	[CARD_NUMBER_SUMMONED_SKULL]
	{
		.cardName = "Summoned Skull"
	},
	[CARD_NUMBER_SUPER_WAR_LION]
	{
		.cardName = "Super War-Lion"
	},
	[CARD_NUMBER_SUPPORTER_IN_THE_SHADOWS]
	{
		.cardName = "Supporter in the Shadows"
	},
	[CARD_NUMBER_SWAMP_BATTLEGUARD]
	{
		.cardName = "Swamp Battleguard"
	},
	[CARD_NUMBER_SWORD_ARM_OF_DRAGON]
	{
		.cardName = "Sword Arm of Dragon"
	},
	[CARD_NUMBER_SWORD_OF_DARK_DESTRUCTION]
	{
		.cardName = "Sword of Dark Destruction"
	},
	[CARD_NUMBER_SWORD_OF_DEEP_SEATED]
	{
		.cardName = "Sword of Deep-Seated"
	},
	[CARD_NUMBER_SWORD_OF_DRAGON_S_SOUL]
	{
		.cardName = "Sword of Dragon's Soul"
	},
	[CARD_NUMBER_SWORDS_OF_REVEALING_LIGHT]
	{
		.cardName = "Swords of Revealing Light"
	},
	[CARD_NUMBER_SWORDSMAN_FROM_A_FOREIGN_LAND]
	{
		.cardName = "Swordsman from a Foreign Land"
	},
	[CARD_NUMBER_SWORDSTALKER]
	{
		.cardName = "Swordstalker"
	},
	[CARD_NUMBER_TAILOR_OF_THE_FICKLE]
	{
		.cardName = "Tailor of the Fickle"
	},
	[CARD_NUMBER_TAINTED_WISDOM]
	{
		.cardName = "Tainted Wisdom"
	},
	[CARD_NUMBER_TAKRIMINOS]
	{
		.cardName = "Takriminos"
	},
	[CARD_NUMBER_TAKUHEE]
	{
		.cardName = "Takuhee"
	},
	[CARD_NUMBER_TAO_THE_CHANTER]
	{
		.cardName = "Tao the Chanter"
	},
	[CARD_NUMBER_TEMPLE_OF_SKULLS]
	{
		.cardName = "Temple of Skulls"
	},
	[CARD_NUMBER_TENDERNESS]
	{
		.cardName = "Tenderness"
	},
	[CARD_NUMBER_TERRA_THE_TERRIBLE]
	{
		.cardName = "Terra the Terrible"
	},
	[CARD_NUMBER_THE_13TH_GRAVE]
	{
		.cardName = "The 13th Grave"
	},
	[CARD_NUMBER_THE_BEWITCHING_PHANTOM_THIEF]
	{
		.cardName = "The Bewitching Phantom Thief"
	},
	[CARD_NUMBER_THE_BISTRO_BUTCHER]
	{
		.cardName = "The Bistro Butcher"
	},
	[CARD_NUMBER_THE_CHEERFUL_COFFIN]
	{
		.cardName = "The Cheerful Coffin"
	},
	[CARD_NUMBER_THE_DRDEK]
	{
		.cardName = "The Drdek "
	},
	[CARD_NUMBER_THE_EYE_OF_TRUTH]
	{
		.cardName = "The Eye of Truth"
	},
	[CARD_NUMBER_THE_FLUTE_OF_SUMMONING_DRAGON]
	{
		.cardName = "The Flute of Summoning Dragon"
	},
	[CARD_NUMBER_THE_FORCEFUL_SENTRY]
	{
		.cardName = "The Forceful Sentry"
	},
	[CARD_NUMBER_THE_FURIOUS_SEA_KING]
	{
		.cardName = "The Furious Sea King"
	},
	[CARD_NUMBER_THE_IMMORTAL_OF_THUNDER]
	{
		.cardName = "The Immortal of Thunder"
	},
	[CARD_NUMBER_THE_INEXPERIENCED_SPY]
	{
		.cardName = "The Inexperienced Spy"
	},
	[CARD_NUMBER_THE_LITTLE_SWORDSMAN_OF_AILE]
	{
		.cardName = "The Little Swordsman of Aile"
	},
	[CARD_NUMBER_THE_REGULATION_OF_TRIBE]
	{
		.cardName = "The Regulation of Tribe"
	},
	[CARD_NUMBER_THE_RELIABLE_GUARDIAN]
	{
		.cardName = "The Reliable Guardian"
	},
	[CARD_NUMBER_THE_SHALLOW_GRAVE]
	{
		.cardName = "The Shallow Grave"
	},
	[CARD_NUMBER_THE_SNAKE_HAIR]
	{
		.cardName = "The Snake Hair"
	},
	[CARD_NUMBER_THE_STERN_MYSTIC]
	{
		.cardName = "The Stern Mystic"
	},
	[CARD_NUMBER_THE_THING_THAT_HIDES_IN_THE_MUD]
	{
		.cardName = "The Thing That Hides in the Mud"
	},
	[CARD_NUMBER_THE_UNHAPPY_MAIDEN]
	{
		.cardName = "The Unhappy Maiden"
	},
	[CARD_NUMBER_THE_WANDERING_DOOMED]
	{
		.cardName = "The Wandering Doomed"
	},
	[CARD_NUMBER_THE_WICKED_WORM_BEAST]
	{
		.cardName = "The Wicked Worm Beast"
	},
	[CARD_NUMBER_THOUSAND_DRAGON]
	{
		.cardName = "Thousand Dragon"
	},
	[CARD_NUMBER_THOUSAND_DRAGON_2]
	{
		.cardName = "Thousand Dragon"
	},
	[CARD_NUMBER_THREE_HEADED_GEEDO]
	{
		.cardName = "Three-Headed Geedo"
	},
	[CARD_NUMBER_THREE_LEGGED_ZOMBIES]
	{
		.cardName = "Three-Legged Zombies"
	},
	[CARD_NUMBER_THUNDER_DRAGON]
	{
		.cardName = "Thunder Dragon"
	},
	[CARD_NUMBER_TIGER_AXE]
	{
		.cardName = "Tiger Axe"
	},
	[CARD_NUMBER_TIGER_AXE_2]
	{
		.cardName = "Tiger Axe"
	},
	[CARD_NUMBER_TIME_MACHINE]
	{
		.cardName = "Time Machine"
	},
	[CARD_NUMBER_TIME_SEAL]
	{
		.cardName = "Time Seal"
	},
	[CARD_NUMBER_TIME_WIZARD]
	{
		.cardName = "Time Wizard"
	},
	[CARD_NUMBER_TOAD_MASTER]
	{
		.cardName = "Toad Master"
	},
	[CARD_NUMBER_TOGEX]
	{
		.cardName = "Togex"
	},
	[CARD_NUMBER_TOLL]
	{
		.cardName = "Toll"
	},
	[CARD_NUMBER_TOMOZAURUS]
	{
		.cardName = "Tomozaurus"
	},
	[CARD_NUMBER_TONGYO]
	{
		.cardName = "Tongyo"
	},
	[CARD_NUMBER_TOON_ALLIGATOR]
	{
		.cardName = "Toon Alligator"
	},
	[CARD_NUMBER_TOON_MERMAID]
	{
		.cardName = "Toon Mermaid"
	},
	[CARD_NUMBER_TOON_SUMMONED_SKULL]
	{
		.cardName = "Toon Summoned Skull"
	},
	[CARD_NUMBER_TOON_WORLD]
	{
		.cardName = "Toon World"
	},
	[CARD_NUMBER_TORIKE]
	{
		.cardName = "Torike"
	},
	[CARD_NUMBER_TOTAL_DEFENSE_SHOGUN]
	{
		.cardName = "Total Defense Shogun"
	},
	[CARD_NUMBER_TRAKADON]
	{
		.cardName = "Trakadon"
	},
	[CARD_NUMBER_TRAP_HOLE]
	{
		.cardName = "Trap Hole"
	},
	[CARD_NUMBER_TRAP_MASTER]
	{
		.cardName = "Trap Master"
	},
	[CARD_NUMBER_TREMENDOUS_FIRE]
	{
		.cardName = "Tremendous Fire"
	},
	[CARD_NUMBER_TRENT]
	{
		.cardName = "Trent"
	},
	[CARD_NUMBER_TRIAL_OF_NIGHTMARE]
	{
		.cardName = "Trial of Nightmare"
	},
	[CARD_NUMBER_TRIBUTE_TO_THE_DOOMED]
	{
		.cardName = "Tribute to The Doomed"
	},
	[CARD_NUMBER_TRI_HORNED_DRAGON]
	{
		.cardName = "Tri-Horned Dragon"
	},
	[CARD_NUMBER_TRIPWIRE_BEAST]
	{
		.cardName = "Tripwire Beast"
	},
	[CARD_NUMBER_TURTLE_OATH]
	{
		.cardName = "Turtle Oath"
	},
	[CARD_NUMBER_TURTLE_TIGER]
	{
		.cardName = "Turtle Tiger"
	},
	[CARD_NUMBER_TWIN_LONG_RODS_2]
	{
		.cardName = "Twin Long Rods #2"
	},
	[CARD_NUMBER_TWIN_HEADED_FIRE_DRAGON]
	{
		.cardName = "Twin-Headed Fire Dragon"
	},
	[CARD_NUMBER_TWIN_HEADED_THUNDER_DRAGON]
	{
		.cardName = "Twin-Headed Thunder Dragon"
	},
	[CARD_NUMBER_TWO_HEADED_KING_REX]
	{
		.cardName = "Two-Headed King Rex"
	},
	[CARD_NUMBER_TWO_MOUTH_DARKRULER]
	{
		.cardName = "Two-Mouth Darkruler"
	},
	[CARD_NUMBER_TWO_PRONGED_ATTACK]
	{
		.cardName = "Two-Pronged Attack"
	},
	[CARD_NUMBER_TYHONE]
	{
		.cardName = "Tyhone"
	},
	[CARD_NUMBER_TYHONE_2]
	{
		.cardName = "Tyhone #2"
	},
	[CARD_NUMBER_UFO_TURTLE]
	{
		.cardName = "UFO Turtle"
	},
	[CARD_NUMBER_ULTIMATE_OFFERING]
	{
		.cardName = "Ultimate Offering"
	},
	[CARD_NUMBER_UMI]
	{
		.cardName = "Umi "
	},
	[CARD_NUMBER_UMIIRUKA]
	{
		.cardName = "Umiiruka"
	},
	[CARD_NUMBER_UNKNOWN_WARRIOR_OF_FIEND]
	{
		.cardName = "Unknown Warrior of Fiend"
	},
	[CARD_NUMBER_UPSTART_GOBLIN]
	{
		.cardName = "Upstart Goblin"
	},
	[CARD_NUMBER_URABY]
	{
		.cardName = "Uraby"
	},
	[CARD_NUMBER_USHI_ONI]
	{
		.cardName = "Ushi Oni"
	},
	[CARD_NUMBER_VALKYRION_THE_MAGNA_WARRIOR]
	{
		.cardName = "Valkyrion the Magna Warrior"
	},
	[CARD_NUMBER_VERMILLION_SPARROW]
	{
		.cardName = "Vermillion Sparrow"
	},
	[CARD_NUMBER_VERSAGO_THE_DESTROYER]
	{
		.cardName = "Versago the Destroyer"
	},
	[CARD_NUMBER_VILE_GERMS]
	{
		.cardName = "Vile Germs"
	},
	[CARD_NUMBER_VIOLENT_RAIN]
	{
		.cardName = "Violent Rain"
	},
	[CARD_NUMBER_VIOLET_CRYSTAL]
	{
		.cardName = "Violet Crystal"
	},
	[CARD_NUMBER_VISHWAR_RANDI]
	{
		.cardName = "Vishwar Randi"
	},
	[CARD_NUMBER_VORSE_RAIDER]
	{
		.cardName = "Vorse Raider"
	},
	[CARD_NUMBER_WABOKU]
	{
		.cardName = "Waboku"
	},
	[CARD_NUMBER_WALL_OF_ILLUSION]
	{
		.cardName = "Wall of Illusion"
	},
	[CARD_NUMBER_WALL_SHADOW]
	{
		.cardName = "Wall Shadow"
	},
	[CARD_NUMBER_WAR_LION_RITUAL]
	{
		.cardName = "War-Lion Ritual"
	},
	[CARD_NUMBER_WARRIOR_ELIMINATION]
	{
		.cardName = "Warrior Elimination"
	},
	[CARD_NUMBER_WARRIOR_OF_TRADITION]
	{
		.cardName = "Warrior of Tradition"
	},
	[CARD_NUMBER_WASTELAND]
	{
		.cardName = "Wasteland"
	},
	[CARD_NUMBER_WATER_ELEMENT]
	{
		.cardName = "Water Element"
	},
	[CARD_NUMBER_WATER_GIRL]
	{
		.cardName = "Water Girl"
	},
	[CARD_NUMBER_WATER_MAGICIAN]
	{
		.cardName = "Water Magician"
	},
	[CARD_NUMBER_WATER_OMOTICS]
	{
		.cardName = "Water Omotics"
	},
	[CARD_NUMBER_WATERDRAGON_FAIRY]
	{
		.cardName = "Waterdragon Fairy"
	},
	[CARD_NUMBER_WEATHER_CONTROL]
	{
		.cardName = "Weather Control"
	},
	[CARD_NUMBER_WEATHER_REPORT]
	{
		.cardName = "Weather Report"
	},
	[CARD_NUMBER_WHIPTAIL_CROW]
	{
		.cardName = "Whiptail Crow"
	},
	[CARD_NUMBER_WHITE_HOLE]
	{
		.cardName = "White Hole"
	},
	[CARD_NUMBER_WHITE_MAGICAL_HAT]
	{
		.cardName = "White Magical Hat"
	},
	[CARD_NUMBER_WICKED_MIRROR]
	{
		.cardName = "Wicked Mirror"
	},
	[CARD_NUMBER_WIDESPREAD_RUIN]
	{
		.cardName = "Widespread Ruin"
	},
	[CARD_NUMBER_WINDSTORM_OF_ETAQUA]
	{
		.cardName = "Windstorm of Etaqua"
	},
	[CARD_NUMBER_WING_EGG_ELF]
	{
		.cardName = "Wing Egg Elf"
	},
	[CARD_NUMBER_WINGED_CLEAVER]
	{
		.cardName = "Winged Cleaver"
	},
	[CARD_NUMBER_WINGED_DRAGON_GUARDIAN_OF_THE_FORTRESS_1]
	{
		.cardName = "Winged Dragon,Guardian of the Fortress #1"
	},
	[CARD_NUMBER_WINGS_OF_WICKED_FLAME]
	{
		.cardName = "Wings of Wicked Flame"
	},
	[CARD_NUMBER_WITCH_OF_THE_BLACK_FOREST]
	{
		.cardName = "Witch of the Black Forest"
	},
	[CARD_NUMBER_WITCH_S_APPRENTICE]
	{
		.cardName = "Witch's Apprentice"
	},
	[CARD_NUMBER_WITTY_PHANTOM]
	{
		.cardName = "Witty Phantom"
	},
	[CARD_NUMBER_WODAN_THE_RESIDENT_OF_THE_FOREST]
	{
		.cardName = "Wodan the Resident of the Forest"
	},
	[CARD_NUMBER_WOOD_REMAINS]
	{
		.cardName = "Wood Remains"
	},
	[CARD_NUMBER_WORLD_SUPPRESSION]
	{
		.cardName = "World Suppression"
	},
	[CARD_NUMBER_WOW_WARRIOR]
	{
		.cardName = "Wow Warrior"
	},
	[CARD_NUMBER_WRETCHED_GHOST_OF_THE_ATTIC]
	{
		.cardName = "Wretched Ghost of the Attic"
	},
	[CARD_NUMBER_YADO_KARU]
	{
		.cardName = "Yado Karu"
	},
	[CARD_NUMBER_YAIBA_ROBO]
	{
		.cardName = "Yaiba Robo"
	},
	[CARD_NUMBER_YAMATANO_DRAGON_SCROLL]
	{
		.cardName = "Yamatano Dragon Scroll"
	},
	[CARD_NUMBER_YAMI]
	{
		.cardName = "Yami"
	},
	[CARD_NUMBER_YARANZO]
	{
		.cardName = "Yaranzo"
	},
	[CARD_NUMBER_ZANKI]
	{
		.cardName = "Zanki"
	},
	[CARD_NUMBER_ZERA_RITUAL]
	{
		.cardName = "Zera Ritual"
	},
	[CARD_NUMBER_ZERA_THE_MANT]
	{
		.cardName = "Zera The Mant"
	},
	[CARD_NUMBER_ZOA]
	{
		.cardName = "Zoa"
	},
	[CARD_NUMBER_ZOMBIE_WARRIOR]
	{
		.cardName = "Zombie Warrior"
	},
	[CARD_NUMBER_ZONE_EATER]
	{
		.cardName = "Zone Eater"
	},
	[CARD_NUMBER_THE_MONARCHY]
	{
		.cardName = "The Monarchy"
	},
	[CARD_NUMBER_SET_SAIL_FOR_THE_KINGDOM]
	{
		.cardName = "Set Sail for the Kingdom"
	},
	[CARD_NUMBER_GLORY_OF_THE_KING_S_HAND]
	{
		.cardName = "Glory of the King's Hand"
	},
	[CARD_NUMBER_OBELISK_THE_TORMENTOR]
	{
		.cardName = "Obelisk the Tormentor"
	},
	[CARD_NUMBER_SLIFER_THE_SKY_DRAGON]
	{
		.cardName = "Slifer the Sky Dragon"
	},
	[CARD_NUMBER_THE_WINGED_DRAGON_OF_RA]
	{
		.cardName = "The Winged Dragon of Ra"
	},
	[CARD_NUMBER_INSECT_MONSTER_TOKEN]
	{
		.cardName = "Insect Monster Token"
	},
	[821]
	{
		.cardName = ""
	},
	[822]
	{
		.cardName = ""
	},
	[823]
	{
		.cardName = ""
	},
	[824]
	{
		.cardName = ""
	},
	[825]
	{
		.cardName = ""
	},
	[826]
	{
		.cardName = ""
	},
	[827]
	{
		.cardName = ""
	},
	[828]
	{
		.cardName = ""
	},
	[829]
	{
		.cardName = ""
	},
	[830]
	{
		.cardName = ""
	},
	[831]
	{
		.cardName = ""
	},
	[832]
	{
		.cardName = ""
	},
	[833]
	{
		.cardName = ""
	},
	[834]
	{
		.cardName = ""
	},
	[835]
	{
		.cardName = ""
	},
	[836]
	{
		.cardName = ""
	},
	[837]
	{
		.cardName = ""
	},
	[838]
	{
		.cardName = ""
	},
	[839]
	{
		.cardName = ""
	},
	[840]
	{
		.cardName = ""
	},
	[841]
	{
		.cardName = ""
	},
	[842]
	{
		.cardName = ""
	},
	[843]
	{
		.cardName = ""
	},
	[844]
	{
		.cardName = ""
	},
	[845]
	{
		.cardName = ""
	},
	[846]
	{
		.cardName = ""
	},
	[847]
	{
		.cardName = ""
	},
	[848]
	{
		.cardName = ""
	},
	[849]
	{
		.cardName = ""
	},
	[850]
	{
		.cardName = ""
	},
	[851]
	{
		.cardName = ""
	},
	[852]
	{
		.cardName = ""
	},
	[853]
	{
		.cardName = ""
	},
	[854]
	{
		.cardName = ""
	},
	[855]
	{
		.cardName = ""
	},
	[856]
	{
		.cardName = ""
	},
	[857]
	{
		.cardName = ""
	},
	[858]
	{
		.cardName = ""
	},
	[859]
	{
		.cardName = ""
	},
	[860]
	{
		.cardName = ""
	},
	[861]
	{
		.cardName = ""
	},
	[862]
	{
		.cardName = ""
	},
	[863]
	{
		.cardName = ""
	},
	[864]
	{
		.cardName = ""
	},
	[865]
	{
		.cardName = ""
	},
	[866]
	{
		.cardName = ""
	},
	[867]
	{
		.cardName = ""
	},
	[868]
	{
		.cardName = ""
	},
	[869]
	{
		.cardName = ""
	},
	[870]
	{
		.cardName = ""
	},
	[871]
	{
		.cardName = ""
	},
	[872]
	{
		.cardName = ""
	},
	[873]
	{
		.cardName = ""
	},
	[874]
	{
		.cardName = ""
	},
	[875]
	{
		.cardName = ""
	},
	[876]
	{
		.cardName = ""
	},
	[877]
	{
		.cardName = ""
	},
	[878]
	{
		.cardName = ""
	},
	[879]
	{
		.cardName = ""
	},
	[880]
	{
		.cardName = ""
	},
	[881]
	{
		.cardName = ""
	},
	[882]
	{
		.cardName = ""
	},
	[883]
	{
		.cardName = ""
	},
	[884]
	{
		.cardName = ""
	},
	[885]
	{
		.cardName = ""
	},
	[886]
	{
		.cardName = ""
	},
	[887]
	{
		.cardName = ""
	},
	[888]
	{
		.cardName = ""
	},
	[889]
	{
		.cardName = ""
	},
	[890]
	{
		.cardName = ""
	},
	[891]
	{
		.cardName = ""
	},
	[892]
	{
		.cardName = ""
	},
	[893]
	{
		.cardName = ""
	},
	[894]
	{
		.cardName = ""
	},
	[895]
	{
		.cardName = ""
	},
	[896]
	{
		.cardName = ""
	},
	[897]
	{
		.cardName = ""
	},
	[898]
	{
		.cardName = ""
	},
	[899]
	{
		.cardName = ""
	},
	[900]
	{
		.cardName = ""
	},
	[901]
	{
		.cardName = ""
	},
	[902]
	{
		.cardName = ""
	},
	[903]
	{
		.cardName = ""
	},
	[904]
	{
		.cardName = ""
	},
	[905]
	{
		.cardName = ""
	},
	[906]
	{
		.cardName = ""
	},
	[907]
	{
		.cardName = ""
	},
	[908]
	{
		.cardName = ""
	},
	[909]
	{
		.cardName = ""
	},
	[910]
	{
		.cardName = ""
	},
	[911]
	{
		.cardName = ""
	},
	[912]
	{
		.cardName = ""
	},
	[913]
	{
		.cardName = ""
	},
	[914]
	{
		.cardName = ""
	},
	[915]
	{
		.cardName = ""
	},
	[916]
	{
		.cardName = ""
	},
	[917]
	{
		.cardName = ""
	},
	[918]
	{
		.cardName = ""
	},
	[919]
	{
		.cardName = ""
	},
	[920]
	{
		.cardName = ""
	},
	[921]
	{
		.cardName = ""
	},
	[922]
	{
		.cardName = ""
	},
	[923]
	{
		.cardName = ""
	},
	[924]
	{
		.cardName = ""
	},
	[925]
	{
		.cardName = ""
	},
	[926]
	{
		.cardName = ""
	},
	[927]
	{
		.cardName = ""
	},
	[928]
	{
		.cardName = ""
	},
	[929]
	{
		.cardName = ""
	},
	[930]
	{
		.cardName = ""
	},
	[931]
	{
		.cardName = ""
	},
	[932]
	{
		.cardName = ""
	},
	[933]
	{
		.cardName = ""
	},
	[934]
	{
		.cardName = ""
	},
	[935]
	{
		.cardName = ""
	},
	[936]
	{
		.cardName = ""
	},
	[937]
	{
		.cardName = ""
	},
	[938]
	{
		.cardName = ""
	},
	[939]
	{
		.cardName = ""
	},
	[940]
	{
		.cardName = ""
	},
	[941]
	{
		.cardName = ""
	},
	[942]
	{
		.cardName = ""
	},
	[943]
	{
		.cardName = ""
	},
	[944]
	{
		.cardName = ""
	},
	[945]
	{
		.cardName = ""
	},
	[946]
	{
		.cardName = ""
	},
	[947]
	{
		.cardName = ""
	},
	[948]
	{
		.cardName = ""
	},
	[949]
	{
		.cardName = ""
	},
	[950]
	{
		.cardName = ""
	},
	[951]
	{
		.cardName = ""
	},
	[952]
	{
		.cardName = ""
	},
	[953]
	{
		.cardName = ""
	},
	[954]
	{
		.cardName = ""
	},
	[955]
	{
		.cardName = ""
	},
	[956]
	{
		.cardName = ""
	},
	[957]
	{
		.cardName = ""
	},
	[958]
	{
		.cardName = ""
	},
	[959]
	{
		.cardName = ""
	},
	[960]
	{
		.cardName = ""
	},
	[961]
	{
		.cardName = ""
	},
	[962]
	{
		.cardName = ""
	},
	[963]
	{
		.cardName = ""
	},
	[964]
	{
		.cardName = ""
	},
	[965]
	{
		.cardName = ""
	},
	[966]
	{
		.cardName = ""
	},
	[967]
	{
		.cardName = ""
	},
	[968]
	{
		.cardName = ""
	},
	[969]
	{
		.cardName = ""
	},
	[970]
	{
		.cardName = ""
	},
	[971]
	{
		.cardName = ""
	},
	[972]
	{
		.cardName = ""
	},
	[973]
	{
		.cardName = ""
	},
	[974]
	{
		.cardName = ""
	},
	[975]
	{
		.cardName = ""
	},
	[976]
	{
		.cardName = ""
	},
	[977]
	{
		.cardName = ""
	},
	[978]
	{
		.cardName = ""
	},
	[979]
	{
		.cardName = ""
	},
	[980]
	{
		.cardName = ""
	},
	[981]
	{
		.cardName = ""
	},
	[982]
	{
		.cardName = ""
	},
	[983]
	{
		.cardName = ""
	},
	[984]
	{
		.cardName = ""
	},
	[985]
	{
		.cardName = ""
	},
	[986]
	{
		.cardName = ""
	},
	[987]
	{
		.cardName = ""
	},
	[988]
	{
		.cardName = ""
	},
	[989]
	{
		.cardName = ""
	},
	[990]
	{
		.cardName = ""
	},
	[991]
	{
		.cardName = ""
	},
	[992]
	{
		.cardName = ""
	},
	[993]
	{
		.cardName = ""
	},
	[994]
	{
		.cardName = ""
	},
	[995]
	{
		.cardName = ""
	},
	[996]
	{
		.cardName = ""
	},
	[997]
	{
		.cardName = ""
	},
	[998]
	{
		.cardName = ""
	},
	[999]
	{
		.cardName = ""
	},
	[1000]
	{
		.cardName = ""
	},
	[1001]
	{
		.cardName = ""
	},
	[1002]
	{
		.cardName = ""
	},
	[1003]
	{
		.cardName = ""
	},
	[1004]
	{
		.cardName = ""
	},
	[1005]
	{
		.cardName = ""
	},
	[1006]
	{
		.cardName = ""
	},
	[1007]
	{
		.cardName = ""
	},
	[1008]
	{
		.cardName = ""
	},
	[1009]
	{
		.cardName = ""
	},
	[1010]
	{
		.cardName = ""
	},
	[1011]
	{
		.cardName = ""
	},
	[1012]
	{
		.cardName = ""
	},
	[1013]
	{
		.cardName = ""
	},
	[1014]
	{
		.cardName = ""
	},
	[1015]
	{
		.cardName = ""
	},
	[1016]
	{
		.cardName = ""
	},
	[1017]
	{
		.cardName = ""
	},
	[1018]
	{
		.cardName = ""
	},
	[1019]
	{
		.cardName = ""
	},
	[1020]
	{
		.cardName = ""
	},
	[1021]
	{
		.cardName = ""
	},
	[1022]
	{
		.cardName = ""
	},
	[1023]
	{
		.cardName = ""
	},
	[1024]
	{
		.cardName = ""
	},
	[1025]
	{
		.cardName = ""
	},
	[1026]
	{
		.cardName = ""
	},
	[1027]
	{
		.cardName = ""
	},
	[1028]
	{
		.cardName = ""
	},
	[1029]
	{
		.cardName = ""
	},
	[1030]
	{
		.cardName = ""
	},
	[1031]
	{
		.cardName = ""
	},
	[1032]
	{
		.cardName = ""
	},
	[1033]
	{
		.cardName = ""
	},
	[1034]
	{
		.cardName = ""
	},
	[1035]
	{
		.cardName = ""
	},
	[1036]
	{
		.cardName = ""
	},
	[1037]
	{
		.cardName = ""
	},
	[1038]
	{
		.cardName = ""
	},
	[1039]
	{
		.cardName = ""
	},
	[1040]
	{
		.cardName = ""
	},
	[1041]
	{
		.cardName = ""
	},
	[1042]
	{
		.cardName = ""
	},
	[1043]
	{
		.cardName = ""
	},
	[1044]
	{
		.cardName = ""
	},
	[1045]
	{
		.cardName = ""
	},
	[1046]
	{
		.cardName = ""
	},
	[1047]
	{
		.cardName = ""
	},
	[1048]
	{
		.cardName = ""
	},
	[1049]
	{
		.cardName = ""
	},
	[1050]
	{
		.cardName = ""
	},
	[1051]
	{
		.cardName = ""
	},
	[1052]
	{
		.cardName = ""
	},
	[1053]
	{
		.cardName = ""
	},
	[1054]
	{
		.cardName = ""
	},
	[1055]
	{
		.cardName = ""
	},
	[1056]
	{
		.cardName = ""
	},
	[1057]
	{
		.cardName = ""
	},
	[1058]
	{
		.cardName = ""
	},
	[1059]
	{
		.cardName = ""
	},
	[1060]
	{
		.cardName = ""
	},
	[1061]
	{
		.cardName = ""
	},
	[1062]
	{
		.cardName = ""
	},
	[1063]
	{
		.cardName = ""
	},
	[1064]
	{
		.cardName = ""
	},
	[1065]
	{
		.cardName = ""
	},
	[1066]
	{
		.cardName = ""
	},
	[1067]
	{
		.cardName = ""
	},
	[1068]
	{
		.cardName = ""
	},
	[1069]
	{
		.cardName = ""
	},
	[1070]
	{
		.cardName = ""
	},
	[1071]
	{
		.cardName = ""
	},
	[1072]
	{
		.cardName = ""
	},
	[1073]
	{
		.cardName = ""
	},
	[1074]
	{
		.cardName = ""
	},
	[1075]
	{
		.cardName = ""
	},
	[1076]
	{
		.cardName = ""
	},
	[1077]
	{
		.cardName = ""
	},
	[1078]
	{
		.cardName = ""
	},
	[1079]
	{
		.cardName = ""
	},
	[1080]
	{
		.cardName = ""
	},
	[1081]
	{
		.cardName = ""
	},
	[1082]
	{
		.cardName = ""
	},
	[1083]
	{
		.cardName = ""
	},
	[1084]
	{
		.cardName = ""
	},
	[1085]
	{
		.cardName = ""
	},
	[1086]
	{
		.cardName = ""
	},
	[1087]
	{
		.cardName = ""
	},
	[1088]
	{
		.cardName = ""
	},
	[1089]
	{
		.cardName = ""
	},
	[1090]
	{
		.cardName = ""
	},
	[1091]
	{
		.cardName = ""
	},
	[1092]
	{
		.cardName = ""
	},
	[1093]
	{
		.cardName = ""
	},
	[1094]
	{
		.cardName = ""
	},
	[1095]
	{
		.cardName = ""
	},
	[1096]
	{
		.cardName = ""
	},
	[1097]
	{
		.cardName = ""
	},
	[1098]
	{
		.cardName = ""
	},
	[1099]
	{
		.cardName = ""
	},
	[1100]
	{
		.cardName = ""
	},
	[1101]
	{
		.cardName = ""
	},
	[1102]
	{
		.cardName = ""
	},
	[1103]
	{
		.cardName = ""
	},
	[1104]
	{
		.cardName = ""
	},
	[1105]
	{
		.cardName = ""
	},
	[1106]
	{
		.cardName = ""
	},
	[1107]
	{
		.cardName = ""
	},
	[1108]
	{
		.cardName = ""
	},
	[1109]
	{
		.cardName = ""
	},
	[1110]
	{
		.cardName = ""
	},
	[1111]
	{
		.cardName = ""
	},
	[1112]
	{
		.cardName = ""
	},
	[1113]
	{
		.cardName = ""
	},
	[1114]
	{
		.cardName = ""
	},
	[1115]
	{
		.cardName = ""
	},
	[1116]
	{
		.cardName = ""
	},
	[1117]
	{
		.cardName = ""
	},
	[1118]
	{
		.cardName = ""
	},
	[1119]
	{
		.cardName = ""
	},
	[1120]
	{
		.cardName = ""
	},
	[1121]
	{
		.cardName = ""
	},
	[1122]
	{
		.cardName = ""
	},
	[1123]
	{
		.cardName = ""
	},
	[1124]
	{
		.cardName = ""
	},
	[1125]
	{
		.cardName = ""
	},
	[1126]
	{
		.cardName = ""
	},
	[1127]
	{
		.cardName = ""
	},
	[1128]
	{
		.cardName = ""
	},
	[1129]
	{
		.cardName = ""
	},
	[1130]
	{
		.cardName = ""
	},
	[1131]
	{
		.cardName = ""
	},
	[1132]
	{
		.cardName = ""
	},
	[1133]
	{
		.cardName = ""
	},
	[1134]
	{
		.cardName = ""
	},
	[1135]
	{
		.cardName = ""
	},
	[1136]
	{
		.cardName = ""
	},
	[1137]
	{
		.cardName = ""
	},
	[1138]
	{
		.cardName = ""
	},
	[1139]
	{
		.cardName = ""
	},
	[1140]
	{
		.cardName = ""
	},
	[1141]
	{
		.cardName = ""
	},
	[1142]
	{
		.cardName = ""
	},
	[1143]
	{
		.cardName = ""
	},
	[1144]
	{
		.cardName = ""
	},
	[1145]
	{
		.cardName = ""
	},
	[1146]
	{
		.cardName = ""
	},
	[1147]
	{
		.cardName = ""
	},
	[1148]
	{
		.cardName = ""
	},
	[1149]
	{
		.cardName = ""
	},
	[1150]
	{
		.cardName = ""
	},
	[1151]
	{
		.cardName = ""
	},
	[1152]
	{
		.cardName = ""
	},
	[1153]
	{
		.cardName = ""
	},
	[1154]
	{
		.cardName = ""
	},
	[1155]
	{
		.cardName = ""
	},
	[1156]
	{
		.cardName = ""
	},
	[1157]
	{
		.cardName = ""
	},
	[1158]
	{
		.cardName = ""
	},
	[1159]
	{
		.cardName = ""
	},
	[1160]
	{
		.cardName = ""
	},
	[1161]
	{
		.cardName = ""
	},
	[1162]
	{
		.cardName = ""
	},
	[1163]
	{
		.cardName = ""
	},
	[1164]
	{
		.cardName = ""
	},
	[1165]
	{
		.cardName = ""
	},
	[1166]
	{
		.cardName = ""
	},
	[1167]
	{
		.cardName = ""
	},
	[1168]
	{
		.cardName = ""
	},
	[1169]
	{
		.cardName = ""
	},
	[1170]
	{
		.cardName = ""
	},
	[1171]
	{
		.cardName = ""
	},
	[1172]
	{
		.cardName = ""
	},
	[1173]
	{
		.cardName = ""
	},
	[1174]
	{
		.cardName = ""
	},
	[1175]
	{
		.cardName = ""
	},
	[1176]
	{
		.cardName = ""
	},
	[1177]
	{
		.cardName = ""
	},
	[1178]
	{
		.cardName = ""
	},
	[1179]
	{
		.cardName = ""
	},
	[1180]
	{
		.cardName = ""
	},
	[1181]
	{
		.cardName = ""
	},
	[1182]
	{
		.cardName = ""
	},
	[1183]
	{
		.cardName = ""
	},
	[1184]
	{
		.cardName = ""
	},
	[1185]
	{
		.cardName = ""
	},
	[1186]
	{
		.cardName = ""
	},
	[1187]
	{
		.cardName = ""
	},
	[1188]
	{
		.cardName = ""
	},
	[1189]
	{
		.cardName = ""
	},
	[1190]
	{
		.cardName = ""
	},
	[1191]
	{
		.cardName = ""
	},
	[1192]
	{
		.cardName = ""
	},
	[1193]
	{
		.cardName = ""
	},
	[1194]
	{
		.cardName = ""
	},
	[1195]
	{
		.cardName = ""
	},
	[1196]
	{
		.cardName = ""
	},
	[1197]
	{
		.cardName = ""
	},
	[1198]
	{
		.cardName = ""
	},
	[1199]
	{
		.cardName = ""
	},
	[1200]
	{
		.cardName = ""
	},
	[1201]
	{
		.cardName = ""
	},
	[1202]
	{
		.cardName = ""
	},
	[1203]
	{
		.cardName = ""
	},
	[1204]
	{
		.cardName = ""
	},
	[1205]
	{
		.cardName = ""
	},
	[1206]
	{
		.cardName = ""
	},
	[1207]
	{
		.cardName = ""
	},
	[1208]
	{
		.cardName = ""
	},
	[1209]
	{
		.cardName = ""
	},
	[1210]
	{
		.cardName = ""
	},
	[1211]
	{
		.cardName = ""
	},
	[1212]
	{
		.cardName = ""
	},
	[1213]
	{
		.cardName = ""
	},
	[1214]
	{
		.cardName = ""
	},
	[1215]
	{
		.cardName = ""
	},
	[1216]
	{
		.cardName = ""
	},
	[1217]
	{
		.cardName = ""
	},
	[1218]
	{
		.cardName = ""
	},
	[1219]
	{
		.cardName = ""
	},
	[1220]
	{
		.cardName = ""
	},
	[1221]
	{
		.cardName = ""
	},
	[1222]
	{
		.cardName = ""
	},
	[1223]
	{
		.cardName = ""
	},
	[1224]
	{
		.cardName = ""
	},
	[1225]
	{
		.cardName = ""
	},
	[1226]
	{
		.cardName = ""
	},
	[1227]
	{
		.cardName = ""
	},
	[1228]
	{
		.cardName = ""
	},
	[1229]
	{
		.cardName = ""
	},
	[1230]
	{
		.cardName = ""
	},
	[1231]
	{
		.cardName = ""
	},
	[1232]
	{
		.cardName = ""
	},
	[1233]
	{
		.cardName = ""
	},
	[1234]
	{
		.cardName = ""
	},
	[1235]
	{
		.cardName = ""
	},
	[1236]
	{
		.cardName = ""
	},
	[1237]
	{
		.cardName = ""
	},
	[1238]
	{
		.cardName = ""
	},
	[1239]
	{
		.cardName = ""
	},
	[1240]
	{
		.cardName = ""
	},
	[1241]
	{
		.cardName = ""
	},
	[1242]
	{
		.cardName = ""
	},
	[1243]
	{
		.cardName = ""
	},
	[1244]
	{
		.cardName = ""
	},
	[1245]
	{
		.cardName = ""
	},
	[1246]
	{
		.cardName = ""
	},
	[1247]
	{
		.cardName = ""
	},
	[1248]
	{
		.cardName = ""
	},
	[1249]
	{
		.cardName = ""
	},
	[1250]
	{
		.cardName = ""
	},
	[1251]
	{
		.cardName = ""
	},
	[1252]
	{
		.cardName = ""
	},
	[1253]
	{
		.cardName = ""
	},
	[1254]
	{
		.cardName = ""
	},
	[1255]
	{
		.cardName = ""
	},
	[1256]
	{
		.cardName = ""
	},
	[1257]
	{
		.cardName = ""
	},
	[1258]
	{
		.cardName = ""
	},
	[1259]
	{
		.cardName = ""
	},
	[1260]
	{
		.cardName = ""
	},
	[1261]
	{
		.cardName = ""
	},
	[1262]
	{
		.cardName = ""
	},
	[1263]
	{
		.cardName = ""
	},
	[1264]
	{
		.cardName = ""
	},
	[1265]
	{
		.cardName = ""
	},
	[1266]
	{
		.cardName = ""
	},
	[1267]
	{
		.cardName = ""
	},
	[1268]
	{
		.cardName = ""
	},
	[1269]
	{
		.cardName = ""
	},
	[1270]
	{
		.cardName = ""
	},
	[1271]
	{
		.cardName = ""
	},
	[1272]
	{
		.cardName = ""
	},
	[1273]
	{
		.cardName = ""
	},
	[1274]
	{
		.cardName = ""
	},
	[1275]
	{
		.cardName = ""
	},
	[1276]
	{
		.cardName = ""
	},
	[1277]
	{
		.cardName = ""
	},
	[1278]
	{
		.cardName = ""
	},
	[1279]
	{
		.cardName = ""
	},
	[1280]
	{
		.cardName = ""
	},
	[1281]
	{
		.cardName = ""
	},
	[1282]
	{
		.cardName = ""
	},
	[1283]
	{
		.cardName = ""
	},
	[1284]
	{
		.cardName = ""
	},
	[1285]
	{
		.cardName = ""
	},
	[1286]
	{
		.cardName = ""
	},
	[1287]
	{
		.cardName = ""
	},
	[1288]
	{
		.cardName = ""
	},
	[1289]
	{
		.cardName = ""
	},
	[1290]
	{
		.cardName = ""
	},
	[1291]
	{
		.cardName = ""
	},
	[1292]
	{
		.cardName = ""
	},
	[1293]
	{
		.cardName = ""
	},
	[1294]
	{
		.cardName = ""
	},
	[1295]
	{
		.cardName = ""
	},
	[1296]
	{
		.cardName = ""
	},
	[1297]
	{
		.cardName = ""
	},
	[1298]
	{
		.cardName = ""
	},
	[1299]
	{
		.cardName = ""
	},
	[1300]
	{
		.cardName = ""
	},
	[1301]
	{
		.cardName = ""
	},
	[1302]
	{
		.cardName = ""
	},
	[1303]
	{
		.cardName = ""
	},
	[1304]
	{
		.cardName = ""
	},
	[1305]
	{
		.cardName = ""
	},
	[1306]
	{
		.cardName = ""
	},
	[1307]
	{
		.cardName = ""
	},
	[1308]
	{
		.cardName = ""
	},
	[1309]
	{
		.cardName = ""
	},
	[1310]
	{
		.cardName = ""
	},
	[1311]
	{
		.cardName = ""
	},
	[1312]
	{
		.cardName = ""
	},
	[1313]
	{
		.cardName = ""
	},
	[1314]
	{
		.cardName = ""
	},
	[1315]
	{
		.cardName = ""
	},
	[1316]
	{
		.cardName = ""
	},
	[1317]
	{
		.cardName = ""
	},
	[1318]
	{
		.cardName = ""
	},
	[1319]
	{
		.cardName = ""
	},
	[1320]
	{
		.cardName = ""
	},
};

const struct CardDescription gCardDescriptions[] =
{
	[CARD_NUMBER_NONE]
	{
		.description = ""
	},
	[CARD_NUMBER_7_COLORED_FISH]
	{
		.description = "A rare rainbow fish that has never been caught by mortal man."
	},
	[CARD_NUMBER_7_COMPLETED]
	{
		.description = "A Machine-type monster equipped with this card increases its ATK and DEF by 700 points."
	},
	[CARD_NUMBER_ACID_CRAWLER]
	{
		.description = "A giant caterpillar that secretes an acid mist that melts anything.  "
	},
	[CARD_NUMBER_ACID_TRAP_HOLE]
	{
		.description = "Frip 1 face-down Defense Position monster face-up.  If the monster's DEF is 2000 points or less, the monster is destroyed.  If the DEF is more than 2000 points, return the monster to its face-down Defense Position."
	},
	[CARD_NUMBER_AIR_EATER]
	{
		.description = "A monster that feeds on oxygen, suffocating any who stand near."
	},
	[CARD_NUMBER_AIR_MARMOT_OF_NEFARIOUSNESS]
	{
		.description = "A horned beaver that dive-bombs enemies with acorns."
	},
	[CARD_NUMBER_AKAKIEISU]
	{
		.description = "A sorcerer who utters spells that can render monsters unconscious."
	},
	[CARD_NUMBER_AKIHIRON]
	{
		.description = "This strange creature hides in the deep, dark corners of the seven seas."
	},
	[CARD_NUMBER_ALLIGATOR_S_SWORD]
	{
		.description = "This lizard man can swing a sword at velocities that exceed the speed of sound."
	},
	[CARD_NUMBER_ALLIGATOR_S_SWORD_DRAGON]
	{
		.description = "\"Baby Dragon\"+\"Alligator's Sword\".  You can Inflict Direct Damage to your opponent's Life Points with this card if the only Attributes of Monster Cards on your opponent's side of the field are EARTH, WATER, or FIRE."
	},
	[CARD_NUMBER_ALPHA_THE_MAGNET_WARRIOR]
	{
		.description = "Alpha, Beta, and Gamma meld as one to form a powerful monster."
	},
	[CARD_NUMBER_AMAZON_OF_THE_SEAS]
	{
		.description = "A mermaid who serves as herald of the Sea King and guards the sanctuary."
	},
	[CARD_NUMBER_AMEBA]
	{
		.description = "When this card is face-up on the field and control shifts to your opponent, inflict 2000 points of Direct Damage to your opponent's Life Points. This effect can only be used once as long as this card remains face-up on the field."
	},
	[CARD_NUMBER_AMPHIBIOUS_BUGROTH]
	{
		.description = "Ground Attacker Bugroth + Guardian of the Sea"
	},
	[CARD_NUMBER_ANCIENT_BRAIN]
	{
		.description = "A fallen fairy that is powerful in the dark."
	},
	[CARD_NUMBER_ANCIENT_ELF]
	{
		.description = "This elf is rumored to have lived for thousands of years. He leads an army of spirits against his enemies."
	},
	[CARD_NUMBER_ANCIENT_JAR]
	{
		.description = "A very fragile jar that contains something ancient and dangerous."
	},
	[CARD_NUMBER_ANCIENT_LIZARD_WARRIOR]
	{
		.description = "Before the dawn of man, this lizard warrior ruled supreme.  "
	},
	[CARD_NUMBER_ANCIENT_ONE_OF_THE_DEEP_FOREST]
	{
		.description = "This creature adopts the form of a white goat living in the forest, but is actually a Forest Elder."
	},
	[CARD_NUMBER_ANCIENT_TELESCOPE]
	{
		.description = "See the top 5 cards of your opponent's Deck. Return the cards to the Deck in the same order."
	},
	[CARD_NUMBER_ANCIENT_TOOL]
	{
		.description = "A destructive machine discovered in the Ruins of the Ancients."
	},
	[CARD_NUMBER_ANSATSU]
	{
		.description = "A silent and deadly warrior specializing in assassinations."
	},
	[CARD_NUMBER_ANTHROSAURUS]
	{
		.description = "Man-like dinosaur with a high I.Q. that is lacking in strength."
	},
	[CARD_NUMBER_ANTI_RAIGEKI]
	{
		.description = "When your opponent activates \"Raigeki\", all of your opponent's monsters are destroyed in place of your own. "
	},
	[CARD_NUMBER_ANTI_MAGIC_FRAGRANCE]
	{
		.description = "As long as this card remains on the field, Magic Cards must always be Set on the field and cannot be activated until a player's following turn."
	},
	[CARD_NUMBER_APPROPRIATE]
	{
		.description = "You can activate this card when your opponent draws a card outside of his/her Draw Phase. Draw 2 cards from your Deck."
	},
	[CARD_NUMBER_AQUA_CHORUS]
	{
		.description = "If there are Monster Cards of the same name on the field, the ATK and DEF of those cards are increased by 500 points."
	},
	[CARD_NUMBER_AQUA_DRAGON]
	{
		.description = "Fairy Dragon + Amazon of the Seas + Zone Eater"
	},
	[CARD_NUMBER_AQUA_MADOOR]
	{
		.description = "A wizard of the waters that conjures a liquid wall to crush any enemies that oppose him."
	},
	[CARD_NUMBER_ARLOWNAY]
	{
		.description = "A lady monster dwelling in a flower, she sprinkles the air with poisonous pollen."
	},
	[CARD_NUMBER_ARMA_KNIGHT]
	{
		.description = "An ammonite warrior that has protected the seas throughout history."
	},
	[CARD_NUMBER_ARMAILL]
	{
		.description = "A strange warrior who manipulates three deadly blades with both hands and his tail."
	},
	[CARD_NUMBER_ARMED_NINJA]
	{
		.description = "FLIP: Destroys 1 Magic Card on the field. If this card's target is face-down, flip it face-up. If the card is a Magic Card, it is destroyed. If not, it is returned to its face-down position. The flipped card is not activated."
	},
	[CARD_NUMBER_ARMORED_GLASS]
	{
		.description = "You can activate this card when a monster is equpped with an Equip Magic Card to deactivate the effects of all Equip Magic Cards on the field."
	},
	[CARD_NUMBER_ARMORED_LIZARD]
	{
		.description = "A lizard with a very tough hide and a vicious bite."
	},
	[CARD_NUMBER_ARMORED_RAT]
	{
		.description = "The fur on this monster rat is tough enough to repel swords."
	},
	[CARD_NUMBER_ARMORED_STARFISH]
	{
		.description = "A bluish starfish with a solid hide capable of fending off attacks."
	},
	[CARD_NUMBER_ARMORED_ZOMBIE]
	{
		.description = "This warrior blindly swings a deadly blade with devastating force."
	},
	[CARD_NUMBER_AXE_OF_DESPAIR]
	{
		.description = "A monster equipped with this card increases its ATK by 1000 points. When this card is sent from the field to the Graveyard, you can offer 1 monster from the field as a Tribute to place it on top of your Deck. "
	},
	[CARD_NUMBER_AXE_RAIDER]
	{
		.description = "An axe-wielding monster of tremendous strength and agility."
	},
	[CARD_NUMBER_B_DRAGON_JUNGLE_KING]
	{
		.description = "A jet-black dragon found in the deepest jungles who normally devours trees."
	},
	[CARD_NUMBER_B_SKULL_DRAGON]
	{
		.description = "Summoned Skull + Red-Eyes B. Dragon"
	},
	[CARD_NUMBER_BABY_DRAGON]
	{
		.description = "Much more than just a child, this dragon is gifted with untapped power."
	},
	[CARD_NUMBER_BACKUP_SOLDIER]
	{
		.description = "You can activate this card when there are 5 or more Monster Cards in your Graveyard. Take up to 3 Normal Monster Cards with an ATK of 1500 points or less from your Graveyard and add them to your hand."
	},
	[CARD_NUMBER_BANISHER_OF_THE_LIGHT]
	{
		.description = "As long as this card remains face-up on the field, any card sent to the Graveyard is removed from play."
	},
	[CARD_NUMBER_BAROX]
	{
		.description = "Frenzied Panda + Ryu-Kishin"
	},
	[CARD_NUMBER_BARREL_DRAGON]
	{
		.description = "Toss a coin 3 times. If 2 out of 3 results are Heads, destroy 1 opponent's monster. This card can only be used during your own turn, once per turn."
	},
	[CARD_NUMBER_BARREL_LILY]
	{
		.description = "This wicked flower attacks enemies with pollen projectiles."
	},
	[CARD_NUMBER_BARREL_ROCK]
	{
		.description = "Shouldering a pair of machine guns, this monster is unstoppable."
	},
	[CARD_NUMBER_BASIC_INSECT]
	{
		.description = "Usually found traveling in swarms, this creature's ideal environment is the forest."
	},
	[CARD_NUMBER_BATTLE_OX]
	{
		.description = "A monster with tremendous power, it destroys enemies with a swing of its axe."
	},
	[CARD_NUMBER_BATTLE_STEER]
	{
		.description = "A bull monster often found in the woods, it charges enemy monsters with a pair of deadly horns."
	},
	[CARD_NUMBER_BATTLE_WARRIOR]
	{
		.description = "A warrior that fights with his bare hands."
	},
	[CARD_NUMBER_BEAN_SOLDIER]
	{
		.description = "A plant-warrior that attacks with seeds and sword."
	},
	[CARD_NUMBER_BEAST_FANGS]
	{
		.description = "A Beast-type monster equipped with this card increases its ATK and DEF by 300 points."
	},
	[CARD_NUMBER_BEASTKING_OF_THE_SWAMPS]
	{
		.description = "You can substitute this card for any 1 Fusion-Material Monster. You cannot substitute for any other Fusion-Material Monsters in the current Fusion."
	},
	[CARD_NUMBER_BEASTLY_MIRROR_RITUAL]
	{
		.description = "This card is used to summon \"Fiend's Mirror\". You must also offer monsters whose total Level stars equal 6 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_BEAUTIFUL_HEADHUNTRESS]
	{
		.description = "A vicious creature that has decapitated numerous enemy monsters."
	},
	[CARD_NUMBER_BEAVER_WARRIOR]
	{
		.description = "What this creature lacks in size it makes up for in defense when battling in the prairie."
	},
	[CARD_NUMBER_BEHEGON]
	{
		.description = "With a large mouth and massive teeth, this is one dangerous and strange sea snake."
	},
	[CARD_NUMBER_BELL_OF_DESTRUCTION]
	{
		.description = "Destroy 1 face-up Monster Card and inflict Direct Damage equal to the destroyed card's ATK to the Life Points of both you and your opponent."
	},
	[CARD_NUMBER_BETA_THE_MAGNET_WARRIOR]
	{
		.description = "Alpha, Beta, and Gamma meld as one to form a powerful monster."
	},
	[CARD_NUMBER_BICKURIBOX]
	{
		.description = "Crass Clown + Dream Clown"
	},
	[CARD_NUMBER_BIG_EYE]
	{
		.description = "FLIP: Draw 5 cards from the top of your Deck, arrange them in any order desired, and replace them on top of the Deck."
	},
	[CARD_NUMBER_BIG_INSECT]
	{
		.description = "A giant ant that dwells in the jungle, it is powerful whether attacking or defending."
	},
	[CARD_NUMBER_BIG_SHIELD_GARDNA]
	{
		.description = "When this card is face-down and targeted by a Magic Card whose effect targets only 1 monster the Magic Card is negated and this card is turned face-up in Defense Position. When this card is attacked, it is shifted to Attack Position following the Damage step."
	},
	[CARD_NUMBER_BINDING_CHAIN]
	{
		.description = "The mystic links of this chain can rob enemies of their power."
	},
	[CARD_NUMBER_BIO_PLANT]
	{
		.description = "A monster created from a major accident in an underground lab."
	},
	[CARD_NUMBER_BLACK_ILLUSION_RITUAL]
	{
		.description = "This card is used to Ritual Summon \"Relinquished\". You must also offer monsters whose total Level Stars equal 1 or more from the field or your hand as a Tribute."
	},
	[CARD_NUMBER_BLACK_LUSTER_RITUAL]
	{
		.description = "This card is used to summon \"Black Luster Soldier\". You must also offer monsters whose total Level stars equal 8 or more from the field or your hand as a Tribute."
	},
	[CARD_NUMBER_BLACK_LUSTER_SOLDIER]
	{
		.description = "This monster is summoned with the Ritual Magic Card, \"Black Luster Ritual\". You must also offer monsters whose total Level stars equal 8 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_BLACK_PENDANT]
	{
		.description = "A monster equipped with this card increases its ATK by 500 points. When this card is sent from the field to the Graveyard, inflict 500 points of Direct Damage to your opponent's Life Points."
	},
	[CARD_NUMBER_BLACKLAND_FIRE_DRAGON]
	{
		.description = "A dragon that dwells in the depths of darkness, its vulnerability lies in its poor eyesight."
	},
	[CARD_NUMBER_BLADEFLY]
	{
		.description = "As long as this card remains face-up on the field, increase the ATK of all WIND monsters by 500 points and decrease the ATK of all EARTH monsters by 400 points."
	},
	[CARD_NUMBER_BLAST_JUGGLER]
	{
		.description = "You can destroy 2 monsters with an ATK of 1000 or less by offering this card as a Tribute if it is face-up on the field during your Standby Phase."
	},
	[CARD_NUMBER_BLAST_SPHERE]
	{
		.description = "When your opponent attacks this monster in face-down Defense Position, this card is treated as an Equip Card and is used to equip the attacking monster (damage is not calculated). The equipped monster and this card are destroyed during your opponent's next Standby Phase. Your opponent then receives Direct Damage equal to the equipped monster's ATK. "
	},
	[CARD_NUMBER_BLOCK_ATTACK]
	{
		.description = "You can select 1 of your opponent's monsters and shift it to Defense Position."
	},
	[CARD_NUMBER_BLUE_MEDICINE]
	{
		.description = "Increase your Life Points by 400 points."
	},
	[CARD_NUMBER_BLUE_EYED_SILVER_ZOMBIE]
	{
		.description = "The beams from the eyes of this creature are said to turn enemies into zombies."
	},
	[CARD_NUMBER_BLUE_EYES_TOON_DRAGON]
	{
		.description = "This card cannot be summoned unless \"Toon World\" is on the field. This card cannot attack in the same turn that it is summoned. Pay 500 Life Points each time this monster attacks. When \"Toon World\" is destroyed, this card is also destroyed. If your opponent doesn't control a Toon monster on the field, this card may inflict Direct Damage to your opponent's Life Points. If a Toon monster is on your opponent's side of the field, your attacks must target the Toon monster. "
	},
	[CARD_NUMBER_BLUE_EYES_ULTIMATE_DRAGON]
	{
		.description = "Blue-Eyes White Dragon + Blue-Eyes White Dragon + Blue-Eyes White Dragon"
	},
	[CARD_NUMBER_BLUE_EYES_WHITE_DRAGON]
	{
		.description = "This legendary dragon is a powerful engine of destruction. Virtually invincible, very few have faced this awesome creature and lived to tell the tale."
	},
	[CARD_NUMBER_BLUE_EYES_WHITE_DRAGON_2]
	{
		.description = "This legendary dragon is a powerful engine of destruction. Virtually invincible, very few have faced this awesome creature and lived to tell the tale."
	},
	[CARD_NUMBER_BLUE_WINGED_CROWN]
	{
		.description = "With hair shaped like a crown and a body encased in bluish white flames, this bird is a formidable sight."
	},
	[CARD_NUMBER_BOAR_SOLDIER]
	{
		.description = "This card can only be summoned by a Flip Summon. If summoned by a Normal Summon, the card is destroyed. If your opponent has 1 or more monsters under his/her control, the ATK of this card is decreased by 1000 points."
	},
	[CARD_NUMBER_BOLT_ESCARGOT]
	{
		.description = "After rendering an opponent immobile by spitting a sticky goo, this monster closes in for the attack."
	},
	[CARD_NUMBER_BOOK_OF_SECRET_ARTS]
	{
		.description = "A Spellcaster-type monster equipped with this card increases its ATK and DEF by 300 points."
	},
	[CARD_NUMBER_BOTTOM_DWELLER]
	{
		.description = "This is one sea creature whose wrath is something monsters fear to face."
	},
	[CARD_NUMBER_BRACCHIO_RAIDUS]
	{
		.description = "Two-Headed King Rex + Crawling Dragon #2"
	},
	[CARD_NUMBER_BREATH_OF_LIGHT]
	{
		.description = "Destroys all Rock-type monsters on the field."
	},
	[CARD_NUMBER_BRIGHT_CASTLE]
	{
		.description = "Increases the ATK of all LIGHT monsters by 700 points. "
	},
	[CARD_NUMBER_BURGLAR]
	{
		.description = "A wily rat armed with a huge left claw."
	},
	[CARD_NUMBER_BURNING_SPEAR]
	{
		.description = "A FIRE monster equipped with this card increases its ATK by 400 points and decreases its DEF by 200 points."
	},
	[CARD_NUMBER_BUSTER_BLADER]
	{
		.description = "The ATK of this card increases by 500 points for every Dragon-type monster in your opponent's side of the field and Graveyard."
	},
	[CARD_NUMBER_CALL_OF_THE_DARK]
	{
		.description = "All monsters restored with \"Monster Reborn\" are sent to the Graveyard. \"Monster Reborn\" also cannot be played as long as this card remains on the field."
	},
	[CARD_NUMBER_CALL_OF_THE_GRAVE]
	{
		.description = "Deactivate the effect of \"Monster Reborn\" when your opponent plays it."
	},
	[CARD_NUMBER_CALL_OF_THE_HAUNTED]
	{
		.description = "Select 1 monster from your Graveyard and Special Summon it in Attack Position. When this card is destroyed or removed from the field, the summoned monster is also destroyed, and vice-versa."
	},
	[CARD_NUMBER_CANDLE_OF_FATE]
	{
		.description = "Decides the fate of an opponent when the candle on its fingertip burns out."
	},
	[CARD_NUMBER_CANNON_SOLDIER]
	{
		.description = "Offer 1 or more monsters on your side of the field as a Tribute to inflict 500 points of Direct Damage per monster to your opponent's Life Points.  Monsters used for a Tribute Summon or that are offered as Tributes due to other cards' effects are excluded. "
	},
	[CARD_NUMBER_CASTLE_OF_DARK_ILLUSIONS]
	{
		.description = "Increases the ATK and DEF of all Zombie-type monsters by 200 points for each turn this card is face-up. This effect remains for 5 turns."
	},
	[CARD_NUMBER_CASTLE_WALLS]
	{
		.description = "Increase a selected monster's DEF by 500 points during the turn this card is activated."
	},
	[CARD_NUMBER_CATAPULT_TURTLE]
	{
		.description = "Offer 1 of your monsters on the field as a Tribute. Half of the Tribute monster's ATK is inflicted to your opponent's Life Points as Direct Damage."
	},
	[CARD_NUMBER_CEASEFIRE]
	{
		.description = "Flip all face-down Monster Cards on the field face-up (Flip Effects are not activated). For every Effect Monster Card on the field, decrease your opponent's Life Points by 500 points."
	},
	[CARD_NUMBER_CELTIC_GUARDIAN]
	{
		.description = "An elf who learned to wield a sword, he baffles enemies with lightning-swift attacks."
	},
	[CARD_NUMBER_CELTIC_GUARDIAN_2]
	{
		.description = "An elf who learned to wield a sword, he baffles enemies with lightning-swift attacks."
	},
	[CARD_NUMBER_CEREMONIAL_BELL]
	{
		.description = "As long as this card remains face-up on the field, you and your opponent must show your respective hands to each other."
	},
	[CARD_NUMBER_CHAIN_DESTRUCTION]
	{
		.description = "You can activate this card when a monster with an ATK of 2000 points or less is summoned (including Special Summon). Destroys all Monster Cards of the same name in the summoning player's hand and Deck. The summoning player's Deck is then shuffled."
	},
	[CARD_NUMBER_CHAIN_ENERGY]
	{
		.description = "As long as this card remains face-up on the field, both you and your opponent must pay 500 Life Points per card to play or Set cards from your respective hands."
	},
	[CARD_NUMBER_CHAKRA]
	{
		.description = "This monster is summoned with the Ritual Magic Card, \"Resurrection of Chakra\". You must also offer monsters whose total Level stars equal 7 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_CHANGE_OF_HEART]
	{
		.description = "Select and control 1 opposing monster (regardless of position) on the field until the end of your turn."
	},
	[CARD_NUMBER_CHARUBIN_THE_FIRE_KNIGHT]
	{
		.description = "Monster Egg + Hinotama Soul"
	},
	[CARD_NUMBER_CHORUS_OF_SANCTUARY]
	{
		.description = "Increases the DEF of all Defense Position monsters by 500 points."
	},
	[CARD_NUMBER_CLAW_REACHER]
	{
		.description = "Stretching arms and razor-sharp claws make this monster a formidable opponent."
	},
	[CARD_NUMBER_CLOWN_ZOMBIE]
	{
		.description = "A clown revived by the powers of darkness, its deadly dance has sent many monsters to their grave."
	},
	[CARD_NUMBER_COCKROACH_KNIGHT]
	{
		.description = "When this card is sent to the Graveyard, it is returned to the top of the Deck instead."
	},
	[CARD_NUMBER_COCOON_OF_EVOLUTION]
	{
		.description = "You may treat this card as an Equip Magic Card on a face-up \"Petit Moth\" on the field.  When equipped, the ATK and DEF of \"Petit Moth\" becomes the same as \"Cocoon of Evolution\". "
	},
	[CARD_NUMBER_COMMENCEMENT_DANCE]
	{
		.description = "This card is used to Ritual Summon \"Performance of Sword\". You must also offer monsters whose total Level Stars equal 6 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_CONFISCATION]
	{
		.description = "Pay 1000 Life Points to look at your opponent's hand. Select 1 card and discard it to the Graveyard."
	},
	[CARD_NUMBER_COSMO_QUEEN]
	{
		.description = "Queen of the galaxies and mistress of the stars."
	},
	[CARD_NUMBER_CRAB_TURTLE]
	{
		.description = "This monster can only be Ritual Summoned with the Ritual Magic Card, \"Turtle Oath\". You must also offer monsters whose total Level Stars equal 8 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_CRASS_CLOWN]
	{
		.description = "When this card is shifted from Defense Position to Attack Position, return 1 of your opponent's monsters to the owner's hand."
	},
	[CARD_NUMBER_CRAWLING_DRAGON]
	{
		.description = "This weakened dragon can no longer fly, but is still a deadly force to be reckoned with."
	},
	[CARD_NUMBER_CRAWLING_DRAGON_2]
	{
		.description = "A powerful dragon with teeth that can grind almost anything to dust."
	},
	[CARD_NUMBER_CRAZY_FISH]
	{
		.description = "A flying fish that attacks with its pointed head."
	},
	[CARD_NUMBER_CRIMSON_SUNBIRD]
	{
		.description = "Faith Bird + Skull Red Bird"
	},
	[CARD_NUMBER_CROW_GOBLIN]
	{
		.description = "A clever long-nosed goblin, he is a force to be reckoned with."
	},
	[CARD_NUMBER_CRUSH_CARD]
	{
		.description = "Offer 1 DARK monster with an ATK of 1000 or less as a Tribute.  Any opponent's monster with an ATK of 1500 or higher on the field, in your opponent's hand, or drawn in the next 3 turns is automatically destroyed."
	},
	[CARD_NUMBER_CURSE_OF_DRAGON]
	{
		.description = "A wicked dragon that taps into dark forces to execute a powerful attack."
	},
	[CARD_NUMBER_CURSE_OF_FIEND]
	{
		.description = "Changes the battle positions of all Attack Position monsters on the field to Defense Position and vice-versa. These positions cannot be changed during the turn this card is activated except by the effect of a Magic, Trap or Effect Monster Card. You can activate this card only during your Standby Phase."
	},
	[CARD_NUMBER_CURTAIN_OF_THE_DARK_ONES]
	{
		.description = "A curtain that a spellcaster made.  It is said to raise a dark power.  "
	},
	[CARD_NUMBER_CYBER_COMMANDER]
	{
		.description = "A strike force equipped with rocket launchers and bazookas."
	},
	[CARD_NUMBER_CYBER_FALCON]
	{
		.description = "A jet-powered hawk that travels at the speed of sound."
	},
	[CARD_NUMBER_CYBER_JAR]
	{
		.description = "FLIP: Destroys all monsters on the field (including this monster). Both players then pick up (not Draw) 5 cards from the top of their respective Decks and show the cards to each other. Immediately Special Summon any Monster Cards of Level 4 or lower among them on the field in face-up Attack Position or face-down Defense Position. The rest of the cards picked up are placed in the players' hands."
	},
	[CARD_NUMBER_CYBER_SAURUS]
	{
		.description = "Blast Juggler + Two-Headed King Rex"
	},
	[CARD_NUMBER_CYBER_SHIELD]
	{
		.description = "Increases the ATK of either \"Harpie Lady\" or \"Harpie Lady Sisters\" by 500 points."
	},
	[CARD_NUMBER_CYBER_SOLDIER]
	{
		.description = "Guardian of the Machine Master, it crushes opposition by rolling over them."
	},
	[CARD_NUMBER_CYBER_STEIN]
	{
		.description = "At the cost of 5000 of your own Life Points, you can Special Summon 1 Fusion Monster from your Fusion Deck in face-up Attack Position."
	},
	[CARD_NUMBER_CYBER_TECH_ALLIGATOR]
	{
		.description = "A winged dragon brought back to life by means of modern technology. "
	},
	[CARD_NUMBER_D_HUMAN]
	{
		.description = "Gifted with the power of dragons, this warrior wields a sword created from a dragon's fang."
	},
	[CARD_NUMBER_DANCING_ELF]
	{
		.description = "An elf that dances across the sky with wings of razor-sharp blades."
	},
	[CARD_NUMBER_DARK_ARTIST]
	{
		.description = "The DEF of this monster is decreased by half when attacked by LIGHT monsters."
	},
	[CARD_NUMBER_DARK_ASSAILANT]
	{
		.description = "Armed with the Psycho Sword, this sinister assassin rules the bad land."
	},
	[CARD_NUMBER_DARK_CHIMERA]
	{
		.description = "A fire-breathing monster that dwells in the netherworld."
	},
	[CARD_NUMBER_DARK_ELF]
	{
		.description = "This card requires a cost of 1000  of your own Life Points to attack."
	},
	[CARD_NUMBER_DARK_ENERGY]
	{
		.description = "A Fiend-type monster equipped with this card increases its ATK and DEF by 300 points."
	},
	[CARD_NUMBER_DARK_GRAY]
	{
		.description = "Entirely gray, this beast has rarely been seen by mortal eyes."
	},
	[CARD_NUMBER_DARK_HOLE]
	{
		.description = "Destroys all monsters on the field."
	},
	[CARD_NUMBER_DARK_KING_OF_THE_ABYSS]
	{
		.description = "It's said that this King of the Netherworld once had the power to rule over the dark."
	},
	[CARD_NUMBER_DARK_MAGIC_RITUAL]
	{
		.description = "This card is used to summon \"Magician of Black Chaos\". You must also offer monsters whose total Level stars equal 8 or more from the field or your hand as a Tribute."
	},
	[CARD_NUMBER_DARK_MAGICIAN]
	{
		.description = "The ultimate wizard in terms of attack and defense."
	},
	[CARD_NUMBER_DARK_MAGICIAN_2]
	{
		.description = "The ultimate wizard in terms of attack and defense."
	},
	[CARD_NUMBER_DARK_MAGICIAN_GIRL]
	{
		.description = "This card's ATK increases by 300 points for every \"Dark Magician\" or \"Magician of Black Chaos\" in either player's Graveyard."
	},
	[CARD_NUMBER_DARK_RABBIT]
	{
		.description = "A cartoon rabbit that quickly leaps all over the place, making it a difficult target."
	},
	[CARD_NUMBER_DARK_SAGE]
	{
		.description = "When you activate the effect of \"Time Wizard\" and call it right, you can summon this card from either your hand or your Deck by offering 1\"Dark Magician\" as a Tribute.  Then move 1 Magic Card from your Deck to your hand and shuffle your Deck."
	},
	[CARD_NUMBER_DARK_SHADE]
	{
		.description = "A crystal monster that unleashes a brilliant light to blind enemies."
	},
	[CARD_NUMBER_DARK_WITCH]
	{
		.description = "A popular creature in mythology that delivers fatal attacks with a sharp spear."
	},
	[CARD_NUMBER_DARK_ZEBRA]
	{
		.description = "If this is the only card in your control during your Standby Phase, it is automatically placed in Defense Position. You cannot change the position of this card during the same turn."
	},
	[CARD_NUMBER_DARK_EYES_ILLUSIONIST]
	{
		.description = "FLIP : As long as this card remains on the field, 1 designated monster cannot attack."
	},
	[CARD_NUMBER_DARKFIRE_DRAGON]
	{
		.description = "Firegrass + Petit Dragon"
	},
	[CARD_NUMBER_DARKFIRE_SOLDIER_1]
	{
		.description = "An explosive expert from a special elite force."
	},
	[CARD_NUMBER_DARKFIRE_SOLDIER_2]
	{
		.description = "A warrior who gained immeasurable power from the heart of a volcano."
	},
	[CARD_NUMBER_DARKNESS_APPROACHES]
	{
		.description = "Discard 2 cards from your hand. Select 1 face-up monster and flip it face-down, but do not change its battle position. "
	},
	[CARD_NUMBER_DARK_PIERCING_LIGHT]
	{
		.description = "Flip all of your opponent's face-down Monster Cards on the field face-up.  The effect of the monster will activate at this time."
	},
	[CARD_NUMBER_DARKWORLD_THORNS]
	{
		.description = "A thorny plant found in the darklands that wraps itself around any  unwary traveler."
	},
	[CARD_NUMBER_DEEPSEA_SHARK]
	{
		.description = "Bottom Dweller + Tongyo"
	},
	[CARD_NUMBER_DELINQUENT_DUO]
	{
		.description = "Pay 1000 Life Points. Randomly select and discard 1 card from your opponent's hand. Your opponent then selects and discards another card from his/her hand. "
	},
	[CARD_NUMBER_DE_SPELL]
	{
		.description = "Destroys 1 Magic Card on the field. If this card's target is face-down, flip it face-up. If the card is a Magic Card, it is destroyed. If not, it is returned to its face-down position. The flipped card is not activated."
	},
	[CARD_NUMBER_DESTROYER_GOLEM]
	{
		.description = "A golem with a massive right hand for crushing its victims."
	},
	[CARD_NUMBER_DIAN_KETO_THE_CURE_MASTER]
	{
		.description = "Increases your Life Points by 1000 points."
	},
	[CARD_NUMBER_DICE_ARMADILLO]
	{
		.description = "An armadillo monster that rolls up to form a dice-like shape."
	},
	[CARD_NUMBER_DIMENSIONAL_WARRIOR]
	{
		.description = "When this card Attacks or is attacked, both this card and the opposing monster are removed from play and cannot return during the current Duel."
	},
	[CARD_NUMBER_DISK_MAGICIAN]
	{
		.description = "This monster hides in a saucer and only appears when executing an attack."
	},
	[CARD_NUMBER_DISSOLVEROCK]
	{
		.description = "A monster born in the lava pits, it generates intense heat that can melt away its enemies."
	},
	[CARD_NUMBER_DNA_SURGERY]
	{
		.description = "Select 1 Type of monster.  As long as this card remains on the field, all face-up Monster Cards will be treated as the Type you selected."
	},
	[CARD_NUMBER_DOKUROIZO_THE_GRIM_REAPER]
	{
		.description = "A messenger of doom that steals a soul with a single blow."
	},
	[CARD_NUMBER_DOKURORIDER]
	{
		.description = "This monster is summoned with the Ritual Magic Card, \"Revival of Dokurorider\". You must also offer monsters whose total Level stars equal 6 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_DOMA_THE_ANGEL_OF_SILENCE]
	{
		.description = "This fairy rules over death, and administers it when necessary."
	},
	[CARD_NUMBER_DORON]
	{
		.description = "This monster splits in two and attacks from opposite sides."
	},
	[CARD_NUMBER_DOROVER]
	{
		.description = "This ugly monster emits a highly poisonous gas."
	},
	[CARD_NUMBER_DRAGON_CAPTURE_JAR]
	{
		.description = "All Dragon-type monsters on the field are switched to Defense Position and remain in this position as long as this card is active."
	},
	[CARD_NUMBER_DRAGON_PIPER]
	{
		.description = "FLIP: Destroys \"Dragon Capture Jar\", and turns all face-up Dragon-type monsters to Attack Position."
	},
	[CARD_NUMBER_DRAGON_SEEKER]
	{
		.description = "When this card is summoned to the field (excluding Special Summon), one Dragon-type monster can be automatically destroyed."
	},
	[CARD_NUMBER_DRAGON_TREASURE]
	{
		.description = "A Dragon-type monster equipped with this card increases its ATK and DEF by 300 points."
	},
	[CARD_NUMBER_DRAGON_ZOMBIE]
	{
		.description = "A dragon revived by sorcery. Its breath is highly corrosive."
	},
	[CARD_NUMBER_DRAGONESS_THE_WICKED_KNIGHT]
	{
		.description = "Armaill + One-Eyed Shield Dragon"
	},
	[CARD_NUMBER_DREAM_CLOWN]
	{
		.description = "When this card is changed from Attack to Defense Position, 1 opposing monster is automatically destroyed."
	},
	[CARD_NUMBER_DRIVING_SNOW]
	{
		.description = "You can activate this card when 1 or more of your Magic Cards are destroyed and sent from the field to the Graveyard. Destroy 1 Magic or Trap Card on the field."
	},
	[CARD_NUMBER_DROOLING_LIZARD]
	{
		.description = "A blood-sucking snake in human form that attacks any living being that passes nearby."
	},
	[CARD_NUMBER_DRYAD]
	{
		.description = "A spirit of the forest powered by the surrounding trees and wildlife."
	},
	[CARD_NUMBER_DUNAMES_DARK_WITCH]
	{
		.description = "Even when the odds are against this brave fairy, this monster will engage in battle and never run away."
	},
	[CARD_NUMBER_DUNGEON_WORM]
	{
		.description = "Hidden under the floors of a labyrinth, it swallows any who pass above."
	},
	[CARD_NUMBER_DUST_TORNADO]
	{
		.description = "Destroy 1 of your opponent's Magic or Trap Cards on the field. You can then Set 1 Magic or Trap Card from your hand."
	},
	[CARD_NUMBER_EARTHSHAKER]
	{
		.description = "Select 2 Monster Card Attributes. Your opponent then select 1 of the 2 Attributes and destroys face-up monsters of that Attribute on the field."
	},
	[CARD_NUMBER_EATGABOON]
	{
		.description = "If the ATK of a monster summoned by your opponent (excluding Special Summon) is 500 points or less, the monster is destroyed."
	},
	[CARD_NUMBER_ELDEEN]
	{
		.description = "The cane of this monster is the source of many powerful spells."
	},
	[CARD_NUMBER_ELECTRIC_LIZARD]
	{
		.description = "A non Zombie-type monster that attacks \"Electric Lizard\" cannot attack on their following turn."
	},
	[CARD_NUMBER_ELECTRIC_SNAKE]
	{
		.description = "When this card is sent directly from your hand to the Graveyard by your opponent's card effect, you can draw 2 cards from your Deck. "
	},
	[CARD_NUMBER_ELECTRO_WHIP]
	{
		.description = "A Thunder-type monster equipped with this card increases its ATK and DEF by 300 points."
	},
	[CARD_NUMBER_ELEGANT_EGOTIST]
	{
		.description = "When you have 1 or more \"Harpie Lady\" cards on the field, you can Special Summon a \"Harpie Lady\" or \"Harpie Lady Sisters\" card from your hand or your Deck. "
	},
	[CARD_NUMBER_ELF_S_LIGHT]
	{
		.description = "Increases the ATK of all LIGHT monsters by 400 points and decreases their DEF by 200 points."
	},
	[CARD_NUMBER_EMPRESS_JUDGE]
	{
		.description = "Queen's Double + Hibikime"
	},
	[CARD_NUMBER_ENCHANTED_JAVELIN]
	{
		.description = "Select 1 of your opponent's monsters in Attack Position and add its ATK points to your Life Points."
	},
	[CARD_NUMBER_ENCHANTING_MERMAID]
	{
		.description = "A beautiful mermaid that lures voyagers to a watery death."
	},
	[CARD_NUMBER_ERADICATING_AEROSOL]
	{
		.description = "Destroys all Insect-type monsters on the field."
	},
	[CARD_NUMBER_ETERNAL_DRAUGHT]
	{
		.description = "Destroys all Fish-type monsters on the field."
	},
	[CARD_NUMBER_ETERNAL_REST]
	{
		.description = "Destroys all monsters equipped with Equip Cards."
	},
	[CARD_NUMBER_EXCHANGE]
	{
		.description = "Both players show their hands to each other. You both select 1 card from each other's hand and add it your own. When sent to the Graveyard, the cards are placed in the Graveyard of the original owner."
	},
	[CARD_NUMBER_EXILE_OF_THE_WICKED]
	{
		.description = "Destroys all face-up Fiend-type monsters on the field."
	},
	[CARD_NUMBER_EXODIA_THE_FORBIDDEN_ONE]
	{
		.description = "An automatic victory can be declared by the player whose hand contains this card together with the Left Leg/Right Leg/Left Arm/Right Arm of the Forbidden One."
	},
	[CARD_NUMBER_EYEARMOR]
	{
		.description = "This warrior transforms into various creatures to confuse enemies in battle."
	},
	[CARD_NUMBER_FAIRY_DRAGON]
	{
		.description = "A beautiful and powerful dragon fairy."
	},
	[CARD_NUMBER_FAIRY_S_HAND_MIRROR]
	{
		.description = "Switch the opponent's Magic Card effect that specifically designates 1 monster as a target to another correctly targeted monster."
	},
	[CARD_NUMBER_FAIRYWITCH]
	{
		.description = "Though destined to be a fairy, this creature chose the way of the witch instead."
	},
	[CARD_NUMBER_FAITH_BIRD]
	{
		.description = "This long-tailed bird blinds its enemies with mystical light."
	},
	[CARD_NUMBER_FAKE_TRAP]
	{
		.description = "When your opponent uses a Magic, Trap, or Effect Monster Card to destroy your Trap Card(s), this card can be destroyed as a substitute for your Trap Card(s)."
	},
	[CARD_NUMBER_FERAL_IMP]
	{
		.description = "A playful little fiend that lurks in the dark, waiting to attack an unwary enemy."
	},
	[CARD_NUMBER_FIEND_KRAKEN]
	{
		.description = "A giant squid that drags its enemies to a watery grave."
	},
	[CARD_NUMBER_FIEND_REFLECTION_1]
	{
		.description = "This monster can draw its enemies into mirror world that renders them helpless."
	},
	[CARD_NUMBER_FIEND_REFLECTION_2]
	{
		.description = "A bird-beast that summons reinforcements with a hand mirror."
	},
	[CARD_NUMBER_FIEND_SWORD]
	{
		.description = "Whoever resists the curse of this blade will gain untold power."
	},
	[CARD_NUMBER_FIEND_S_HAND]
	{
		.description = "Arms that reach out from the Swamp of Chaos to drag down the unwary."
	},
	[CARD_NUMBER_FIEND_S_MIRROR]
	{
		.description = "This monster is summoned with the Ritual Magic Card, \"Beastly Mirror Ritual\". You must also offer monsters whose total Level stars equal 6 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_FINAL_DESTINY]
	{
		.description = "Discard 5 cards from your hand to destroy all the cards on the field."
	},
	[CARD_NUMBER_FINAL_FLAME]
	{
		.description = "Inflicts 600 points of Direct Damage to your opponent's Life Points."
	},
	[CARD_NUMBER_FIRE_KRAKEN]
	{
		.description = "A squid that thrives on fire and heat."
	},
	[CARD_NUMBER_FIRE_REAPER]
	{
		.description = "A reaper with a flaming arrow that burns an enemy to a crisp."
	},
	[CARD_NUMBER_FIREGRASS]
	{
		.description = "A fire-breathing plant found growing near volcanoes."
	},
	[CARD_NUMBER_FIREWING_PEGASUS]
	{
		.description = "A heavenly stallion soaring through the skies on crimson wings."
	},
	[CARD_NUMBER_FIREYAROU]
	{
		.description = "A malevolent creature wrapped in flames that attacks enemies with intense fire."
	},
	[CARD_NUMBER_FISSURE]
	{
		.description = "Destroys 1 opponent's face-up monster with the lowest ATK."
	},
	[CARD_NUMBER_FLAME_CEREBRUS]
	{
		.description = "Known to many as the \"Burning Executioner\", this monster is capable of burning enemies to cinders."
	},
	[CARD_NUMBER_FLAME_CHAMPION]
	{
		.description = "A warrior protected by a flaming shield that nullifies any attack."
	},
	[CARD_NUMBER_FLAME_GHOST]
	{
		.description = "Skull Servant + Dissolverock"
	},
	[CARD_NUMBER_FLAME_MANIPULATOR]
	{
		.description = "This Spellcaster attacks enemies with fire-related spells such as \"Sea of Flames\" and \"Wall of Fire\"."
	},
	[CARD_NUMBER_FLAME_SWORDSMAN]
	{
		.description = "Flame Manipulator + Masaki the Legendary Swordsman"
	},
	[CARD_NUMBER_FLAME_SWORDSMAN_2]
	{
		.description = "Flame Manipulator + Masaki the Legendary Swordsman"
	},
	[CARD_NUMBER_FLAME_VIPER]
	{
		.description = "A fire-breathing snake whose speed makes it a difficult target."
	},
	[CARD_NUMBER_FLASH_ASSAILANT]
	{
		.description = "Decrease the ATK and DEF of this card by 400 points for every card in your hand."
	},
	[CARD_NUMBER_FLOWER_WOLF]
	{
		.description = "Silver Fang + Darkworld Thorns"
	},
	[CARD_NUMBER_FLYING_KAMAKIRI_1]
	{
		.description = "When this card is sent to the Graveyard as a result of battle, you may select 1 WIND monster with an ATK of 1500 or less from your Deck and Special Summon it to the field (no Tribute is required for monsters of Level 5 or more). The Deck is then shuffled."
	},
	[CARD_NUMBER_FLYING_KAMAKIRI_2]
	{
		.description = "A flying mantis that feeds primarily on insects."
	},
	[CARD_NUMBER_FOLLOW_WIND]
	{
		.description = "A Winged Beast-type monster equipped with this card increases its ATK and DEF by 300 points."
	},
	[CARD_NUMBER_FORCED_REQUISITION]
	{
		.description = "You can activate this card when you discard from your hand.  Every time you discard from your hand, your opponent must also discard from his/her hand."
	},
	[CARD_NUMBER_FOREST]
	{
		.description = "Increases the ATK and DEF of all Insect, Beast, Plant, and Beast-Warrior-type monsters by 200 points."
	},
	[CARD_NUMBER_FORTRESS_WHALE]
	{
		.description = "This monster is summoned with the Ritual Magic Card, \"Fortress Whale's Oath\". You must also offer monsters whose total Level stars equal 7 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_FORTRESS_WHALE_S_OATH]
	{
		.description = "This card is used to summon \"Fortress Whale\". You must also offer monsters whose total Level stars equal 7 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_FRENZIED_PANDA]
	{
		.description = "A savage beast that carries a big bamboo stick for beating down its enemies."
	},
	[CARD_NUMBER_FUSION_SAGE]
	{
		.description = "Take 1 \"Polymerization\" from your Deck and add it your hand. The Deck is then shuffled."
	},
	[CARD_NUMBER_FUSIONIST]
	{
		.description = "Petit Angel + Mystical Sheep #2"
	},
	[CARD_NUMBER_GAIA_POWER]
	{
		.description = "Increases the ATK of all EARTH monsters by 500 points and decreases their DEF by 400 points."
	},
	[CARD_NUMBER_GAIA_THE_DRAGON_CHAMPION]
	{
		.description = "Gaia The Fierce Knight + Curse of Dragon"
	},
	[CARD_NUMBER_GAIA_THE_FIERCE_KNIGHT]
	{
		.description = "A knight whose horse travels faster than the wind. His battle-charge is a force to be reckoned with."
	},
	[CARD_NUMBER_GAIA_THE_FIERCE_KNIGHT_2]
	{
		.description = "A knight whose horse travels faster than the wind. His battle-charge is a force to be reckoned with."
	},
	[CARD_NUMBER_GALE_DOGRA]
	{
		.description = "At the cost of 3000 Life Points, you can discard 1 monster from your Fusion Deck to the Graveyard."
	},
	[CARD_NUMBER_GAMMA_THE_MAGNET_WARRIOR]
	{
		.description = "Alpha, Beta, and Gamma meld as one to form a powerful monster."
	},
	[CARD_NUMBER_GANIGUMO]
	{
		.description = "A crab that binds its enemies with a sticky web and attacks them with its sharp claws."
	},
	[CARD_NUMBER_GARMA_SWORD]
	{
		.description = "This monster is summoned with the Ritual Magic Card, \"Garma Sword Oath\". You must also offer monsters whose total Level stars equal 7 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_GARMA_SWORD_OATH]
	{
		.description = "This card is used to summon \"Garma Sword\". You must also offer monsters whose total Level stars equal 7 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_GARNECIA_ELEFANTIS]
	{
		.description = "A monster so heavy that each step rocks the earth."
	},
	[CARD_NUMBER_GAROOZIS]
	{
		.description = "An axe-swinging beast-warrior with the head of a dragon."
	},
	[CARD_NUMBER_GARVAS]
	{
		.description = "A wicked beast that resembles a winged lion."
	},
	[CARD_NUMBER_GATE_GUARDIAN]
	{
		.description = "This card can only be summoned by offering \"Sanga of the Thunder\", \"Kazejin\" and \"Suijin\" as a Tribute."
	},
	[CARD_NUMBER_GATEKEEPER]
	{
		.description = "An indestructible machine created for the sole purpose of protecting entrances."
	},
	[CARD_NUMBER_GAZELLE_THE_KING_OF_MYTHICAL_BEASTS]
	{
		.description = "This monster moves so fast that it looks like an illusion to mortal eyes."
	},
	[CARD_NUMBER_GEMINI_ELF]
	{
		.description = "Elf twins that alternate their attacks."
	},
	[CARD_NUMBER_GENIN]
	{
		.description = "A creature that defeats its enemies using sleight-of-hand."
	},
	[CARD_NUMBER_GERM_INFECTION]
	{
		.description = "The ATK of a non-Machine-type monster equipped with this card is decreased by 300 points at each of its Standby Phases ."
	},
	[CARD_NUMBER_GHOUL_WITH_AN_APPETITE]
	{
		.description = "A monster with a very big appetite that has never been satisfied. "
	},
	[CARD_NUMBER_GIANT_FLEA]
	{
		.description = "A massive flea that feeds on the blood of its enemies."
	},
	[CARD_NUMBER_GIANT_GERM]
	{
		.description = "When this card is sent to the Graveyard as a result of battle, inflict 500 points of Direct Damage to your opponent's Life Points. You can also take cards of the same name from your Deck and Special Summon them to the field in face-up Attack Position. The Deck is then shuffled."
	},
	[CARD_NUMBER_GIANT_MECH_SOLDIER]
	{
		.description = "This monster swings an earth-shaking axe that cannot be blocked by a common sword."
	},
	[CARD_NUMBER_GIANT_RAT]
	{
		.description = "When this card is sent to the Graveyard as a result of battle, you may select 1 EARTH monster with an ATK of 1500 or less from your Deck and Special Summon it to the field (no Tribute is required for monsters of Level 5 or more). The Deck is then shuffled."
	},
	[CARD_NUMBER_GIANT_RED_SEASNAKE]
	{
		.description = "A sea-dwelling snake that attacks passing enemies with its sharp teeth."
	},
	[CARD_NUMBER_GIANT_SCORPION_OF_THE_TUNDRA]
	{
		.description = "An extraordinary blue scorpion found in the tundra, not in the desert."
	},
	[CARD_NUMBER_GIANT_SOLDIER_OF_STONE]
	{
		.description = "A giant warrior made of stone. A punch from this creature has earth-shaking results."
	},
	[CARD_NUMBER_GIANT_TRUNADE]
	{
		.description = "Returns all Magic and Trap Cards on the field to the respective owner's hands."
	},
	[CARD_NUMBER_GIANT_TURTLE_WHO_FEEDS_ON_FLAMES]
	{
		.description = "A crimson-shelled tortoise that feeds on flames."
	},
	[CARD_NUMBER_GIFT_OF_THE_MYSTICAL_ELF]
	{
		.description = "Increase your Life Points by 300 points for each monster on the field, regardless of position."
	},
	[CARD_NUMBER_GIGANTO]
	{
		.description = "A massive monster that swings a huge steel ball to destroy anything in its path."
	},
	[CARD_NUMBER_GIGA_TECH_WOLF]
	{
		.description = "An iron wolf with razor-sharp fangs that can penetrate any armor."
	},
	[CARD_NUMBER_GILTIA_THE_D_KNIGHT]
	{
		.description = "Guardian of the Labyrinth + Protector of the Throne"
	},
	[CARD_NUMBER_GOBLIN_FAN]
	{
		.description = "As long as this card remains face-up on the field, all Flip Summoned monsters of Level 2 or lower are immediately destroyed without their effects being activated"
	},
	[CARD_NUMBER_GOBLIN_S_SECRET_REMEDY]
	{
		.description = "Increases a selected player's Life Points by 600 points."
	},
	[CARD_NUMBER_GODDESS_OF_WHIM]
	{
		.description = "Toss a coin and call \"Heads\" or \"Tails\". Call it right and this card's ATK will be doubled during this turn. Call it wrong and the ATK will be halved during this turn."
	},
	[CARD_NUMBER_GODDESS_WITH_THE_THIRD_EYE]
	{
		.description = "You can substitute this card for any 1 Fusion-Material Monster. You cannot substitute for any other Fusion-Material Monsters in the current Fusion."
	},
	[CARD_NUMBER_GOKIBORE]
	{
		.description = "A large, spherical roach that attacks its enemies by rolling over them."
	},
	[CARD_NUMBER_GRACEFUL_CHARITY]
	{
		.description = "Draw 3 cards from your Deck, then discard any 2 cards from your hand."
	},
	[CARD_NUMBER_GRACEFUL_DICE]
	{
		.description = "Roll a die. The result is multiplied by 100 points and added to the ATK and DEF of all monsters you control until the end of your turn."
	},
	[CARD_NUMBER_GRAPPLER]
	{
		.description = "A devious snake with a thick body that wraps around an enemy monster and squeezes the life out of it."
	},
	[CARD_NUMBER_GRAVEDIGGER_GHOUL]
	{
		.description = "Select 2 Monster Cards from your opponent's Graveyard. These Monster Cards are removed from play for the remainder of the Duel."
	},
	[CARD_NUMBER_GRAVEKEEPER_S_SERVANT]
	{
		.description = "Each time your opponent attacks with a monster, the opponent must send 1 card from the top of his/her Deck to the Graveyard."
	},
	[CARD_NUMBER_GRAVEROBBER]
	{
		.description = "You can take 1 Magic Card from your opponent's Graveyard and play it during this turn.  If you choose to play it, you must pay 2000 of your own Life Points."
	},
	[CARD_NUMBER_GRAVEYARD_AND_THE_HAND_OF_INVITATION]
	{
		.description = "A graveyard that serves as a power source for zombies."
	},
	[CARD_NUMBER_GREAT_BILL]
	{
		.description = "This beast has a mouth that will swallow anything."
	},
	[CARD_NUMBER_GREAT_MAMMOTH_OF_GOLDFINE]
	{
		.description = "The Snake Hair + Dragon Zombie"
	},
	[CARD_NUMBER_GREAT_MOTH]
	{
		.description = "This monster is summoned by offering \"Petit Moth\" as a Tribute on the 4th of your turns after it has been equipped with \"Cocoon of Evolution\"."
	},
	[CARD_NUMBER_GREAT_WHITE]
	{
		.description = "A giant white shark with razor-sharp teeth."
	},
	[CARD_NUMBER_GREEN_PHANTOM_KING]
	{
		.description = "This youthful king of the forests lives in a green world, abundant with trees and wildlife."
	},
	[CARD_NUMBER_GREENKAPPA]
	{
		.description = "FLIP : Select 2 face-down Magic or Trap Cards on the field and destroy them."
	},
	[CARD_NUMBER_GRIFFORE]
	{
		.description = "This monster's tough hide deflects almost any attack."
	},
	[CARD_NUMBER_GRIGGLE]
	{
		.description = "When this card is face-up on the field and control shifts to your opponent, you gain 3000 Life Points. This effect can only be used once as long as this card remains face-up on the field."
	},
	[CARD_NUMBER_GROUND_ATTACKER_BUGROTH]
	{
		.description = "A surface battle robot that was once used for sea warfare."
	},
	[CARD_NUMBER_GRUESOME_GOO]
	{
		.description = "A slime boss that is definitely tougher than it looks."
	},
	[CARD_NUMBER_GRYPHON_WING]
	{
		.description = "When your opponent activates \"Harpie's Feather Duster\", all of your opponent's Magic and Trap Cards are destroyed in place of your own. "
	},
	[CARD_NUMBER_GUARDIAN_OF_THE_LABYRINTH]
	{
		.description = "A monster that guards the entrance to the Netherworld."
	},
	[CARD_NUMBER_GUARDIAN_OF_THE_SEA]
	{
		.description = "A merman warrior that relentlessly attacks those who pollute the seas with their presence."
	},
	[CARD_NUMBER_GUARDIAN_OF_THE_THRONE_ROOM]
	{
		.description = "A robot guard built to protect throne rooms, it is armed with homing missiles."
	},
	[CARD_NUMBER_GUST]
	{
		.description = "You can activate this card when 1 or more of your Magic Cards are destroyed and sent from the field to the Graveyard. Destroy 1 Magic or Trap Card on the field."
	},
	[CARD_NUMBER_GUST_FAN]
	{
		.description = "A WIND monster equipped with this card increases its ATK by 400 points and decreases its DEF by 200 points."
	},
	[CARD_NUMBER_GYAKUTENNO_MEGAMI]
	{
		.description = "This fairy uses her mystical power to protect the weak and provide spiritual support."
	},
	[CARD_NUMBER_HAMBURGER_RECIPE]
	{
		.description = "This card is used to Ritual Summon \"Hungry Burger\". You must also offer monsters whose total Level Stars equal 6 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_HANE_HANE]
	{
		.description = "FLIP: Select 1 Monster Card on the field (regardless of position) and return it to its owner's hand."
	},
	[CARD_NUMBER_HANIWA]
	{
		.description = "An earthen figure that protects the tomb of an ancient ruler."
	},
	[CARD_NUMBER_HAPPY_LOVER]
	{
		.description = "A little fairy that fires beams of happiness from the heart-shaped jewel on its forehead."
	},
	[CARD_NUMBER_HARD_ARMOR]
	{
		.description = "A living suit of armor that attacks enemies with a bone-jarring tackle."
	},
	[CARD_NUMBER_HARPIE_LADY]
	{
		.description = "This human-shaped animal with wings is beautiful to watch but deadly in battle."
	},
	[CARD_NUMBER_HARPIE_LADY_SISTERS]
	{
		.description = "This monster can only be Special Summoned with the Magic Card \"Elegant Egotist\"."
	},
	[CARD_NUMBER_HARPIE_S_BROTHER]
	{
		.description = "With eyes like a hawk and a flying speed exceeding Mach 5, this monster is a master of the sky."
	},
	[CARD_NUMBER_HARPIE_S_FEATHER_DUSTER]
	{
		.description = "Destroys all of your opponent's Magic and Trap Cards on the field."
	},
	[CARD_NUMBER_HARPIE_S_PET_DRAGON]
	{
		.description = "Increases the ATK and DEF of this card by 300 points for each face-up \"Harpie Lady\" on the field."
	},
	[CARD_NUMBER_HEAVY_STORM]
	{
		.description = "Destroys all Magic/Trap Cards on the field."
	},
	[CARD_NUMBER_HERCULES_BEETLE]
	{
		.description = "A massive beetle with a tough carapace and a dangerous horn."
	},
	[CARD_NUMBER_HERO_OF_THE_EAST]
	{
		.description = "A sword-swinging samurai from the Far East."
	},
	[CARD_NUMBER_HIBIKIME]
	{
		.description = "Confuses enemy monsters with a noise that is harsh to the ears. "
	},
	[CARD_NUMBER_HIGH_TIDE_GYOJIN]
	{
		.description = "A very agile half-fish warrior known for its relentless attacks."
	},
	[CARD_NUMBER_HINOTAMA]
	{
		.description = "Inflicts 500 points of Direct Damage to your opponent's Life Points."
	},
	[CARD_NUMBER_HINOTAMA_SOUL]
	{
		.description = "An intensely hot flame creature that rams anything standing in its way."
	},
	[CARD_NUMBER_HIRO_S_SHADOW_SCOUT]
	{
		.description = "FLIP: Your opponent draws 3 cards. Both players check the cards and any Magic Cards among them must be immediately discarded to the Graveyard."
	},
	[CARD_NUMBER_HITODENCHAK]
	{
		.description = "A rabid starfish that spits a lethal acid that can melt almost anything."
	},
	[CARD_NUMBER_HITOTSU_ME_GIANT]
	{
		.description = "A one-eyed behemoth with thick, powerful arms made for delivering punishing blows."
	},
	[CARD_NUMBER_HOLOGRAH]
	{
		.description = "This machine generates illusions that leave an enemy wide open to attacks."
	},
	[CARD_NUMBER_HORN_IMP]
	{
		.description = "A small fiend that dwells in the dark, its single horn makes it a formidable opponent."
	},
	[CARD_NUMBER_HORN_OF_HEAVEN]
	{
		.description = "Offer 1 of your own monsters on the field as a Tribute to negate the summon of a monster and send it to the Graveyard."
	},
	[CARD_NUMBER_HORN_OF_LIGHT]
	{
		.description = "A monster equipped with this card increases its DEF by 800 points. When this card is sent from the field to the Graveyard, you can pay 500 Life Points to place it on top of your Deck."
	},
	[CARD_NUMBER_HORN_OF_THE_UNICORN]
	{
		.description = "A monster equipped with this card increases its ATK and DEF by 700 points. When this card is sent from the field to the Graveyard, it returns to the top of your Deck."
	},
	[CARD_NUMBER_HOSHININGEN]
	{
		.description = "As long as this card remains face-up on the field, increase the ATK of all LIGHT monsters by 500 points and decrease the ATK of all DARK monsters by 400 points."
	},
	[CARD_NUMBER_HOURGLASS_OF_COURAGE]
	{
		.description = "For 3 turns (including your opponent's) following the Summon of this card (including Flip Summon), the ATK and DEF of this monster is halved. After that, both ATK and DEF are doubled for the remainder of the Duel."
	},
	[CARD_NUMBER_HOURGLASS_OF_LIFE]
	{
		.description = "This creature grants power instead of shortening life."
	},
	[CARD_NUMBER_HOUSE_OF_ADHESIVE_TAPE]
	{
		.description = "If the DEF of a monster summoned by your opponent (excluding Special Summon) is 500 points or less, the monster is destroyed."
	},
	[CARD_NUMBER_HUNGRY_BURGER]
	{
		.description = "This monster can only be Ritual Summoned with the Ritual Magic Card, \"Hamburger Recipe\". You must also offer monsters whose total Level Stars equal 6 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_HUNTER_SPIDER]
	{
		.description = "This monster feeds on whatever it catches in its web."
	},
	[CARD_NUMBER_HYO]
	{
		.description = "None can survive the cold touch of this sub-zero warrior."
	},
	[CARD_NUMBER_HYOSUBE]
	{
		.description = "This amphibian is strong on the attack, but leaves much to be desired when defending."
	},
	[CARD_NUMBER_HYOZANRYU]
	{
		.description = "A dragon created from a massive diamond that sparkles with blinding light."
	},
	[CARD_NUMBER_ICE_WATER]
	{
		.description = "A very aggressive mermaid that attacks enemies with the spikes growing from its body."
	},
	[CARD_NUMBER_ILL_WITCH]
	{
		.description = "This monster blasts enemies with unexpected bursts of wind."
	},
	[CARD_NUMBER_ILLUSIONIST_FACELESS_MAGE]
	{
		.description = "Manipulates enemy attacks with the power of illusion."
	},
	[CARD_NUMBER_IMPERIAL_ORDER]
	{
		.description = "As long as this card remains face-up on the field, the effects of all Magic Cards are deactivated. To keep this card in effect, you must pay 700 Life Points at your Standby Phase. If you cannot pay, this card is destroyed."
	},
	[CARD_NUMBER_INSECT_ARMOR_WITH_LASER_CANNON]
	{
		.description = "Increases the ATK of all Insect-type monsters by 700 points."
	},
	[CARD_NUMBER_INSECT_QUEEN]
	{
		.description = "This card cannot attack unless you offer 1 of your monsters on the field as a Tribute. The ATK of this card increases by 200 points for each Insect-type monster on the field. When this card destroys an enemy monster, you can place an Insect Monster Token (face-up Attack Position/Insect-type/EARTH/1 Star/ATK 100/DEF 100) on the field at the end of your turn."
	},
	[CARD_NUMBER_INSECT_SOLDIERS_OF_THE_SKY]
	{
		.description = "The ATK of this card increases by 1000 points whenever it attacks a WIND monster."
	},
	[CARD_NUMBER_INSPECTION]
	{
		.description = "At your opponent's Standby Phase, you can randomly select 1 card in your opponent's hand and look at it at the cost of 500 Life Points."
	},
	[CARD_NUMBER_INVADER_FROM_ANOTHER_DIMENSION]
	{
		.description = "An extraterrestrial monster that came from a distant galaxy."
	},
	[CARD_NUMBER_INVADER_OF_THE_THRONE]
	{
		.description = "FLIP: Select 1 opponent's monster and switch control of it with this card. This effect cannot be activated during the Battle Phase."
	},
	[CARD_NUMBER_INVIGORATION]
	{
		.description = "An EARTH monster equipped with this card increases its ATK by 400 points and decreases its DEF by 200 points."
	},
	[CARD_NUMBER_JAVELIN_BEETLE]
	{
		.description = "This monster is summoned with the Ritual Magic Card, \"Javelin Beetle Pact\". You must also offer monsters whose total Level stars equal 8 or more from the field or your hand as a Tribute."
	},
	[CARD_NUMBER_JAVELIN_BEETLE_PACT]
	{
		.description = "This card is used to summon \"Javelin Beetle\". You must also offer monsters whose total Level stars equal 8 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_JELLYFISH]
	{
		.description = "An almost invisible, semi-transparent jellyfish that drifts in the sea."
	},
	[CARD_NUMBER_JIGEN_BAKUDAN]
	{
		.description = "FLIP: After this card is flipped, offer it as a Tribute during your Standby Phase to destroy all monsters on your side of the field and inflict Direct Damage equal to half of the total ATK of the destroyed cards (excluding this monster) to your opponent's Life Points."
	},
	[CARD_NUMBER_JINZO]
	{
		.description = "As long as this card remains face-up on the field, all the effects of Trap Cards are deactivated."
	},
	[CARD_NUMBER_JINZO_7]
	{
		.description = "This monster attacks your opponent's Life Points directly."
	},
	[CARD_NUMBER_JIRAI_GUMO]
	{
		.description = "When you attack with this card, toss a coin and call it. If you call it right, attack normally. If you call it wrong, reduce your Life Points by half before attacking."
	},
	[CARD_NUMBER_JUDGE_MAN]
	{
		.description = "This club-wielding warrior battles to the end and will never surrender."
	},
	[CARD_NUMBER_JUST_DESSERTS]
	{
		.description = "Inflict 500 points of Direct Damage to your opponent's Life Points for each monster your opponent has on the field."
	},
	[CARD_NUMBER_KAGEMUSHA_OF_THE_BLUE_FLAME]
	{
		.description = "Serving as a double for the Ruler of the Blue Flame, he's a master swordsman that wields a fine blade."
	},
	[CARD_NUMBER_KAGENINGEN]
	{
		.description = "Uses both its physical and shadow forms to attack, making it a difficult monster to overcome."
	},
	[CARD_NUMBER_KAIRYU_SHIN]
	{
		.description = "A sea dragon known as the King of the Ocean, it attacks its enemies with huge tidal waves."
	},
	[CARD_NUMBER_KAISER_DRAGON]
	{
		.description = "Winged Dragon,Guardian of the Fortress #1 + Fairy Dragon"
	},
	[CARD_NUMBER_KAMAKIRIMAN]
	{
		.description = "A man-shaped mantis with two razor-sharp scythes."
	},
	[CARD_NUMBER_KAMINARI_ATTACK]
	{
		.description = "Ocubeam + Mega Thunderball"
	},
	[CARD_NUMBER_KAMINARIKOZOU]
	{
		.description = "This monster stores electricity within its body, unleashing it with lethal effect."
	},
	[CARD_NUMBER_KAMIONWIZARD]
	{
		.description = "Mystical Elf + Curtain of the Dark Ones"
	},
	[CARD_NUMBER_KANAN_THE_SWORDMISTRESS]
	{
		.description = "A lady warrior armed with sword and shield, she floats like a butterfly and stings like a bee."
	},
	[CARD_NUMBER_KANIKABUTO]
	{
		.description = "A monster crab with huge claws for clipping enemies to little pieces."
	},
	[CARD_NUMBER_KARATE_MAN]
	{
		.description = "Once per turn, the original ATK of this card can be doubled. When this effect is applied, the card is immediately destroyed at the end of the turn. "
	},
	[CARD_NUMBER_KARBONALA_WARRIOR]
	{
		.description = "M-Warrior #1 + M-Warrior #2"
	},
	[CARD_NUMBER_KATTAPILLAR]
	{
		.description = "Attacks enemies by spitting thin, sticky webs. "
	},
	[CARD_NUMBER_KAZEJIN]
	{
		.description = "Reduce the ATK of an opponent's monster attacking this card to 0. This effect can be used only once. The card's owner chooses when to activate this effect."
	},
	[CARD_NUMBER_KEY_MACE_2]
	{
		.description = "The power of this monster lies in its ability to suppress the good and bring out the bad in any monster."
	},
	[CARD_NUMBER_KILLER_NEEDLE]
	{
		.description = "A huge bee with exceptional strength that's particularly dangerous in a swarm."
	},
	[CARD_NUMBER_KING_FOG]
	{
		.description = "A fiend that dwells in a blinding curtain of smoke."
	},
	[CARD_NUMBER_KING_OF_YAMIMAKAI]
	{
		.description = "Wields the power of darkness to destroy its enemies."
	},
	[CARD_NUMBER_KISEITAI]
	{
		.description = "When your opponent's monster attacks this card in face-down Defense Position, the attacking monster is equipped with this card (damage calculations are canceled).  At each of your opponent's Standby Phases, increase your Life Points by half of the ATK of the monster equipped with this card."
	},
	[CARD_NUMBER_KOJIKOCY]
	{
		.description = "A man-hunter with powerful arms that can crush boulders."
	},
	[CARD_NUMBER_KOTODAMA]
	{
		.description = "As long as this card remains face-up on the field, monsters of the same name cannot exist on the field at the same time (face-down cards not included). If a card of the same name is summoned in a later turn, that card is destroyed. If 2 cards of the same name are played at the same time, both cards are destroyed."
	},
	[CARD_NUMBER_KOUMORI_DRAGON]
	{
		.description = "A vicious, fire-breathing dragon whose wicked flame corrupts the souls of its victims."
	},
	[CARD_NUMBER_KROKODILUS]
	{
		.description = "A vicious crocodile with great intelligence."
	},
	[CARD_NUMBER_KUMOOTOKO]
	{
		.description = "A massive, intelligent spider that traps enemies with webbing."
	},
	[CARD_NUMBER_KUNAI_WITH_CHAIN]
	{
		.description = "You can shift an opponent's monster in Attack Position to Defense Position. In addition, you can increase the ATK of 1 of your own monsters by 500 points."
	},
	[CARD_NUMBER_KURAMA]
	{
		.description = "A vicious bird that attacks from the skies with its whip-like tail."
	},
	[CARD_NUMBER_KURIBOH]
	{
		.description = "Discard this card from your hand to the Graveyard to negate the damage inflicted by an opponent's monster. This effect can only be used once, and must be activated during your opponent's Battle Phase."
	},
	[CARD_NUMBER_KUWAGATA_A]
	{
		.description = "A very vicious stag beetle that goes for the head."
	},
	[CARD_NUMBER_KWAGAR_HERCULES]
	{
		.description = "Kuwagata a + Hercules Beetle"
	},
	[CARD_NUMBER_LA_JINN_THE_MYSTICAL_GENIE_OF_THE_LAMP]
	{
		.description = "A genie of the lamp that's at the beck and call of its master."
	},
	[CARD_NUMBER_LABYRINTH_TANK]
	{
		.description = "Giga-tech Wolf + Cannon Soldier"
	},
	[CARD_NUMBER_LABYRINTH_WALL]
	{
		.description = "These walls form a labyrinth with no exit for enemies."
	},
	[CARD_NUMBER_LADY_OF_FAITH]
	{
		.description = "Soothes the souls of others by chanting a mysterious spell."
	},
	[CARD_NUMBER_LALA_LI_OON]
	{
		.description = "An electric cloud creature, its acid rain makes it very dangerous."
	},
	[CARD_NUMBER_LARVAE_MOTH]
	{
		.description = "This monster is summoned by offering \"Petit Moth\" as a Tribute on the 2nd of your turns after it has been equipped with \"Cocoon of Evolution\"."
	},
	[CARD_NUMBER_LARVAS]
	{
		.description = "A fast-moving, bird-like creature that strangles opposing monsters with its long, thin arms."
	},
	[CARD_NUMBER_LASER_CANNON_ARMOR]
	{
		.description = "An Insect-type monster equipped with this card increases its ATK and DEF by 300 points."
	},
	[CARD_NUMBER_LAST_DAY_OF_WITCH]
	{
		.description = "Destroys all face-up Spellcaster-type monsters on the field."
	},
	[CARD_NUMBER_LAST_WILL]
	{
		.description = "If a monster of yours is sent from the field to the Graveyard during the turn that you've played this card, you can select a monster with an ATK of 1500 points or less from your Deck and play it as a Special Summon. Shuffle the Deck after playing the card. This card is active for 1 turn only."
	},
	[CARD_NUMBER_LAUGHING_FLOWER]
	{
		.description = "A flower whose laugh can confuse the minds of enemies."
	},
	[CARD_NUMBER_LAUNCHER_SPIDER]
	{
		.description = "A mechanical spider with rocket launchers capable of random fire."
	},
	[CARD_NUMBER_LAUNCHER_SPIDER_2]
	{
		.description = "A mechanical spider with rocket launchers capable of random fire."
	},
	[CARD_NUMBER_LAVA_BATTLEGUARD]
	{
		.description = "Increase the ATK of this card by 500 points for each face-up \"Swamp Battleguard\" on your side of the field."
	},
	[CARD_NUMBER_LEFT_ARM_OF_THE_FORBIDDEN_ONE]
	{
		.description = "A forbidden left arm sealed by magic. Whosoever breaks this seal will know infinite power."
	},
	[CARD_NUMBER_LEFT_LEG_OF_THE_FORBIDDEN_ONE]
	{
		.description = "A forbidden left leg sealed by magic. Whosoever breaks this seal will know infinite power."
	},
	[CARD_NUMBER_LEGENDARY_SWORD]
	{
		.description = "A Warrior-type monster equipped with this card increases its ATK and DEF by 300 points."
	},
	[CARD_NUMBER_LEGHUL]
	{
		.description = "This monster attacks your opponent's Life Points directly."
	},
	[CARD_NUMBER_LEOGUN]
	{
		.description = "Huge monster with a lion's mane similar to the King of Beasts."
	},
	[CARD_NUMBER_LESSER_DRAGON]
	{
		.description = "A minor dragon incapable of breathing fire."
	},
	[CARD_NUMBER_LIGHT_OF_INTERVENTION]
	{
		.description = "Monster Cards cannot be played face-down. Monsters Set in Defense Position are played face-up on the field. Flip Effects are not activated."
	},
	[CARD_NUMBER_LIGHTFORCE_SWORD]
	{
		.description = "Select 1 card at random from your opponent's hand. Keep it face-down and place it outside of the field. The card is returned to it's owner's hand on your opponent's 4th Standby Phase following this turn."
	},
	[CARD_NUMBER_LIQUID_BEAST]
	{
		.description = "A liquid life form that thrives on water."
	},
	[CARD_NUMBER_LITTLE_CHIMERA]
	{
		.description = "As long as this card remains face-up on the field, increase the ATK of all FIRE monsters by 500 points and decrease the ATK of all WATER monsters by 400 points."
	},
	[CARD_NUMBER_LITTLE_D]
	{
		.description = "A tyrannosaurus offspring with a vicious disposition."
	},
	[CARD_NUMBER_LORD_OF_D]
	{
		.description = "All Dragon-type monsters are not affected by Magic Cards, Trap Cards, or other effects while this card is face-up on the field."
	},
	[CARD_NUMBER_LORD_OF_THE_LAMP]
	{
		.description = "A giant that appears from a mystic lamp and follows the orders of the lamp's owner."
	},
	[CARD_NUMBER_LORD_OF_ZEMIA]
	{
		.description = "A wicked entity that manipulates enemies towards a path of destruction."
	},
	[CARD_NUMBER_LUMINOUS_SPARK]
	{
		.description = "Increases the ATK of all LIGHT monsters by 500 points and decreases their DEF by 400 points."
	},
	[CARD_NUMBER_LUNAR_QUEEN_ELZAIM]
	{
		.description = "A lovely creature guarded by the moon. Her lunar curtain can block just about any attack."
	},
	[CARD_NUMBER_MABARREL]
	{
		.description = "This cannon-like creature fires eyeballs so fast they can't be seen."
	},
	[CARD_NUMBER_MACHINE_CONVERSION_FACTORY]
	{
		.description = "A Machine-type monster equipped with this card increases its ATK and DEF by 300 points."
	},
	[CARD_NUMBER_MACHINE_KING]
	{
		.description = "Increase the ATK of this card by 100 points for each face-up Machine-type monster on the field."
	},
	[CARD_NUMBER_MAGIC_JAMMER]
	{
		.description = "Discard 1 card from your hand to the Graveyard to negate the activation of a Magic Card. The Magic Card is sent to the Graveyard."
	},
	[CARD_NUMBER_MAGIC_THORN]
	{
		.description = "You can inflict 500 points of damage per card to your opponent's Life Points when your opponent's cards are discarded to the Graveyard by the effects of Magic, Trap or Effect Monster Cards."
	},
	[CARD_NUMBER_MAGICAL_GHOST]
	{
		.description = "This creature casts a spell of terror and confusion just before attacking its enemies."
	},
	[CARD_NUMBER_MAGICAL_HATS]
	{
		.description = "Take 2 non-Monster Cards from your Deck and select 1 of your Monster Card on the field, then shuffle your Deck. Shuffle the 3 selected cards and place them on the field in face-down Defense Position. These 3 cards are treated as monsters (ATK 0/DEF 0) and are destroyed at the end of your Battle Phase. This card can only be activated during your opponent's Battle Phase."
	},
	[CARD_NUMBER_MAGICAL_LABYRINTH]
	{
		.description = "Equip \"Labyrinth Wall\" with this card. If you offer \"Labyrinth Wall\" equipped with this card as a Tribute, you can Special Summon \"Wall Shadow\" from your Deck."
	},
	[CARD_NUMBER_MAGIC_ARM_SHIELD]
	{
		.description = "You can activate this card when your opponent announces an attack. Select 1 of your opponent's face-up Defense Position Monster Cards on the field and designate it as the target of the attack."
	},
	[CARD_NUMBER_MAGICIAN_OF_BLACK_CHAOS]
	{
		.description = "This monster is summoned with the Ritual Magic Card, \"Dark Magic Ritual\". You must also offer monsters whose total Level stars equal 8 or more from the field or your hand as a Tribute."
	},
	[CARD_NUMBER_MAGICIAN_OF_FAITH]
	{
		.description = "FLIP: Select a Magic Card from your Graveyard and return it to your hand."
	},
	[CARD_NUMBER_MAHA_VAILO]
	{
		.description = "In addition to the effects of Equip Cards, the ATK of this monster is increased by 500 points for each card equipped to this monster."
	},
	[CARD_NUMBER_MAIDEN_OF_THE_MOONLIGHT]
	{
		.description = "A sorcerer blessed by lunar light with powers far beyond mortal comprehension."
	},
	[CARD_NUMBER_MAJOR_RIOT]
	{
		.description = "You can activate this card when 1 of your monsters are returned from the field to your hand. Return all Monster Cards on the field to your respective hands. Both you and your opponent can then place the same number of Monster Cards on the field in face-down Defense Position."
	},
	[CARD_NUMBER_MALEVOLENT_NUZZLER]
	{
		.description = "A monster equipped with this card increases its ATK by 700 points. When this card is sent from the field to the Graveyard, you can pay 500 Life Points to place it on top of your Deck."
	},
	[CARD_NUMBER_MAMMOTH_GRAVEYARD]
	{
		.description = "A mammoth that protects the graves of its pack and is absolutely merciless when facing grave-robbers."
	},
	[CARD_NUMBER_MAN_EATER]
	{
		.description = "Man-eating plant with poison feelers for attacking enemies."
	},
	[CARD_NUMBER_MAN_EATER_BUG]
	{
		.description = "FLIP: Destroys 1 monster on the field (regardless of position)."
	},
	[CARD_NUMBER_MAN_EATING_BLACK_SHARK]
	{
		.description = "Sea Kamen + Gruesome Goo + Amazon of the Seas"
	},
	[CARD_NUMBER_MAN_EATING_PLANT]
	{
		.description = "A meat-eating plant that is attractive to the eye but dangerous when approached."
	},
	[CARD_NUMBER_MAN_EATING_TREASURE_CHEST]
	{
		.description = "A monster disguised as a treasure chest that is known to attack the unwary adventurer."
	},
	[CARD_NUMBER_MANGA_RYU_RAN]
	{
		.description = "This card cannot be summoned unless \"Toon World\" is on the field. This card cannot attack in the same turn that it is summoned. Pay 500 Life Points each time this monster attacks. When \"Toon World\" is destroyed, this card is also destroyed. If your opponent doesn't control a Toon monster on the field, this card may inflict Direct Damage to your opponent's Life Points. If a Toon monster is on your opponent's side of the field, your attacks must target the Toon monster. "
	},
	[CARD_NUMBER_MARINE_BEAST]
	{
		.description = "Water Magician + Behegon"
	},
	[CARD_NUMBER_MASAKI_THE_LEGENDARY_SWORDSMAN]
	{
		.description = "Legendary swordmaster Masaki is a veteran of over 100 battles."
	},
	[CARD_NUMBER_MASK_OF_DARKNESS]
	{
		.description = "FLIP: Select a Trap Card from your Graveyard and return it to your hand."
	},
	[CARD_NUMBER_MASKED_SORCERER]
	{
		.description = "Draw 1 card from your Deck when you inflict Direct Damage to your opponent's Life Points with this card."
	},
	[CARD_NUMBER_MASTER_AND_EXPERT]
	{
		.description = "A deadly duo consisting of a beast master and its loyal servant."
	},
	[CARD_NUMBER_MAVELUS]
	{
		.description = "Tyhone + Wings of Wicked Flame"
	},
	[CARD_NUMBER_MECHANICAL_SNAIL]
	{
		.description = "A cyborg snail that still travels at a slow pace."
	},
	[CARD_NUMBER_MECHANICAL_SPIDER]
	{
		.description = "Any DARK monster attacked by this card is automatically destroyed. Damage calculations apply."
	},
	[CARD_NUMBER_MECHANICALCHASER]
	{
		.description = "A hunter that relentlessly pursues its target by order of the Machine King."
	},
	[CARD_NUMBER_MEDA_BAT]
	{
		.description = "An eyeball fiend created by a servant of the wicked, it uses \"Dark Blasts\" to blow away its enemies."
	},
	[CARD_NUMBER_MEGA_THUNDERBALL]
	{
		.description = "Rolls along the ground releasing bolts of electricity to attack its enemies."
	},
	[CARD_NUMBER_MEGAMORPH]
	{
		.description = "If your Life Points are lower than your opponent's, the original ATK of a monster equipped with this card is doubled. If your Life Points are higher, the original ATK is halved. "
	},
	[CARD_NUMBER_MEGAZOWLER]
	{
		.description = "Nothing stands in the way of this spike-covered dinosaur."
	},
	[CARD_NUMBER_MEOTOKO]
	{
		.description = "A huge monster with a single eye that fires a deadly beam."
	},
	[CARD_NUMBER_MESMERIC_CONTROL]
	{
		.description = "When this card is played your opponent cannot change the position of monsters during his/her next turn."
	},
	[CARD_NUMBER_MESSENGER_OF_PEACE]
	{
		.description = "You must pay 100 Life Points at each of your Standby Phases. If you cannot pay, this card is destroyed. All monsters with an ATK of 1500 points or more cannot attack."
	},
	[CARD_NUMBER_METAL_DETECTOR]
	{
		.description = "You can activate this card when a Continuous Magic Card is played to deactivate all Continuous Magic Cards for the current turn."
	},
	[CARD_NUMBER_METAL_DRAGON]
	{
		.description = "Steel Ogre Grotto #1 + Lesser Dragon"
	},
	[CARD_NUMBER_METAL_FISH]
	{
		.description = "A metal fish with a razor-sharp caudal fin."
	},
	[CARD_NUMBER_METAL_GUARDIAN]
	{
		.description = "A fiend guarding the treasures of the netherworld, it's most at home in the dark."
	},
	[CARD_NUMBER_METALMORPH]
	{
		.description = "After activation, this card is used to equip a face-up monster. The monster equipped with this card increases its ATK and DEF by 300 points. When attacking with a monster equipped with this card, you can further increase its ATK by an amount equal to half the ATK of your target.  "
	},
	[CARD_NUMBER_METALZOA]
	{
		.description = "This monster is Special Summoned from the Deck to the field by offering \"Zoa\" equipped with \"Metalmorph\" as a Tribute."
	},
	[CARD_NUMBER_METEOR_B_DRAGON]
	{
		.description = "Red-Eyes B. Dragon + Meteor Dragon"
	},
	[CARD_NUMBER_METEOR_DRAGON]
	{
		.description = "This dragon appeared from the heavens and crashed to earth."
	},
	[CARD_NUMBER_MIKAZUKINOYAIBA]
	{
		.description = "A dragon warrior of the moon armed with a crescent sword."
	},
	[CARD_NUMBER_MILLENNIUM_GOLEM]
	{
		.description = "For nearly a millennium, this golem has served as guardian of an ancient treasure trove."
	},
	[CARD_NUMBER_MILLENNIUM_SHIELD]
	{
		.description = "A Millennium item, it's rumored to block any strong attack."
	},
	[CARD_NUMBER_MILUS_RADIANT]
	{
		.description = "As long as this card remains face-up on the field, increase the ATK of all EARTH monsters by 500 points and decrease the ATK of all WIND monsters by 400 points."
	},
	[CARD_NUMBER_MINAR]
	{
		.description = "When this card is sent directly from your hand to the Graveyard by your opponent's card effect, inflict 1000 points of Direct Damage to your opponent's Life Points."
	},
	[CARD_NUMBER_MINOMUSHI_WARRIOR]
	{
		.description = "A rock warrior that wields a heavy blade carved from stone."
	},
	[CARD_NUMBER_MIRROR_FORCE]
	{
		.description = "When an opponent's monster attacks, negate the attack and destroy all opponent's monsters in Attack Position."
	},
	[CARD_NUMBER_MIRROR_WALL]
	{
		.description = "You must pay 2000 of your own Life Points during each Standby Phase.  If you cannot, this card is destroyed. Decrease the ATK of all your opponent's attacking monsters by half. "
	},
	[CARD_NUMBER_MISAIRUZAME]
	{
		.description = "A missile-launching fish protected by deadly spikes."
	},
	[CARD_NUMBER_MOLTEN_DESTRUCTION]
	{
		.description = "Increases the ATK of all FIRE monsters by 500 points and decreases their DEF by 400 points."
	},
	[CARD_NUMBER_MONSTER_EGG]
	{
		.description = "A warrior hidden within an egg that attacks enemies by flinging eggshells."
	},
	[CARD_NUMBER_MONSTER_EYE]
	{
		.description = "At the cost of 1000 Life Points, you can return \"Polymerization\" from the Graveyard to your hand."
	},
	[CARD_NUMBER_MONSTER_REBORN]
	{
		.description = "Select 1 Monster Card from either your opponent's or your own Graveyard and place it on the field under your control in Attack or Defense Position (face-up). This is considered a Special Summon."
	},
	[CARD_NUMBER_MONSTER_TAMER]
	{
		.description = "A master of monsters that exercises control over several creatures."
	},
	[CARD_NUMBER_MONSTROUS_BIRD]
	{
		.description = "Few have set eyes on this dive-bombing bird and lived to tell the tale. "
	},
	[CARD_NUMBER_MOON_ENVOY]
	{
		.description = "Many have fallen victim to this lunar warrior's crescent pike."
	},
	[CARD_NUMBER_MOOYAN_CURRY]
	{
		.description = "Increase your Life Points by 200 points."
	},
	[CARD_NUMBER_MORINPHEN]
	{
		.description = "A strange fiend with long arms and razor-sharp talons."
	},
	[CARD_NUMBER_MORPHING_JAR]
	{
		.description = "FLIP: Both you and your opponent discard your hands and draw 5 new cards from your respective Decks."
	},
	[CARD_NUMBER_MORPHING_JAR_2]
	{
		.description = "FLIP: Return all Monster Cards on the field to their respective Decks and shuffle them. You and your opponent then draw cards until you both have the same number of Monster Cards that were returned to each Deck. Place the monsters on the field in face-down Defense Position. Any other cards drawn are discarded to the Graveyard."
	},
	[CARD_NUMBER_MOTHER_GRIZZLY]
	{
		.description = "When this card is sent to the Graveyard as a result of battle, you may select 1 WATER monster with an ATK of 1500 or less from your Deck and Special Summon it to the field (no Tribute is required for monsters of Level 5 or more). The Deck is then shuffled."
	},
	[CARD_NUMBER_MOUNTAIN]
	{
		.description = "Increases the ATK and DEF of all Dragon, Winged Beast, and Thunder-type monsters by 200 points."
	},
	[CARD_NUMBER_MOUNTAIN_WARRIOR]
	{
		.description = "A tough warrior that can move smoothly on even the roughest terrain."
	},
	[CARD_NUMBER_MR_VOLCANO]
	{
		.description = "This seemingly mild-mannered creature has an extremely volatile temper."
	},
	[CARD_NUMBER_MUKA_MUKA]
	{
		.description = "Increase the ATK and DEF of this card by 300 points for every card in your hand."
	},
	[CARD_NUMBER_MUSHROOM_MAN]
	{
		.description = "Found in humid regions, this creature attacks enemies with a lethal rain of poison spores."
	},
	[CARD_NUMBER_MUSHROOM_MAN_2]
	{
		.description = "A player controlling this monster loses 300 Life Points during each his/her Standby Phase when this card is on the field. Control of this card is shifted to your opponent by paying 500 Life Points at your own End Phase."
	},
	[CARD_NUMBER_MUSICIAN_KING]
	{
		.description = "Witch of the Black Forest + Lady of Faith"
	},
	[CARD_NUMBER_M_WARRIOR_1]
	{
		.description = "Specializing in combination attacks, this warrior uses magnetism to block an enemy's escape."
	},
	[CARD_NUMBER_M_WARRIOR_2]
	{
		.description = "Specializing in combination attacks, this warrior is equipped with a tough, magnetically coated armor."
	},
	[CARD_NUMBER_MYSTERIOUS_PUPPETEER]
	{
		.description = "When the monster is summoned (excluding Special Summon) or flipped face-up by attack or some effect, the Life Points of this card's owner increase by 500 points for each monster while this card is face-up on the field."
	},
	[CARD_NUMBER_MYSTIC_HORSEMAN]
	{
		.description = "Half man and half horse, this monster is known for its extreme speed."
	},
	[CARD_NUMBER_MYSTIC_LAMP]
	{
		.description = "This monster attacks your opponent's Life Points directly."
	},
	[CARD_NUMBER_MYSTIC_PLASMA_ZONE]
	{
		.description = "Increases the ATK of all DARK monsters by 500 points and decreases their DEF by 400 points."
	},
	[CARD_NUMBER_MYSTIC_PROBE]
	{
		.description = "You can activate this card when a Continuous Magic Card is played to deactivate all Continuous Magic Cards for the current turn."
	},
	[CARD_NUMBER_MYSTIC_TOMATO]
	{
		.description = "When this card is sent to the Graveyard as a result of battle, you may select 1 DARK monster with an ATK of 1500 or less from your Deck and Special Summon it to the field (no Tribute is required for monsters of Level 5 or more). The Deck is then shuffled."
	},
	[CARD_NUMBER_MYSTICAL_CAPTURE_CHAIN]
	{
		.description = "A mystical chain that binds enemies, rendering them immobile."
	},
	[CARD_NUMBER_MYSTICAL_ELF]
	{
		.description = "A delicate elf that lacks offense, but has a terrific defense backed by mystical power."
	},
	[CARD_NUMBER_MYSTICAL_MOON]
	{
		.description = "A Beast-Warrior-type monster equipped with this card increases its ATK and DEF by 300 points."
	},
	[CARD_NUMBER_MYSTICAL_SAND]
	{
		.description = "Giant Soldier of Stone + Ancient Elf"
	},
	[CARD_NUMBER_MYSTICAL_SHEEP_1]
	{
		.description = "You can substitute this card for any 1 Fusion-Material Monster. You cannot substitute for any other Fusion-Material Monsters in the current Fusion."
	},
	[CARD_NUMBER_MYSTICAL_SHEEP_2]
	{
		.description = "A monstrous sheep with a long tail for hypnotizing enemies."
	},
	[CARD_NUMBER_MYSTICAL_SPACE_TYPHOON]
	{
		.description = "Destroy 1 Magic or Trap Card on the field."
	},
	[CARD_NUMBER_NEEDLE_BALL]
	{
		.description = "FLIP: You can inflict 1000 points of Direct Damage to your opponent's Life Points at the cost of 2000 of your own Life Points."
	},
	[CARD_NUMBER_NEEDLE_WORM]
	{
		.description = "FLIP: Discard 5 cards from the top of your opponent's Deck to his/her Graveyard."
	},
	[CARD_NUMBER_NEGATE_ATTACK]
	{
		.description = "When your opponent attacks with a monster, all attacks are negated and your opponent's Battle Phase ends."
	},
	[CARD_NUMBER_NEKOGAL_1]
	{
		.description = "Deceptively cute, this feline fairy has a set of fast and lethal claws."
	},
	[CARD_NUMBER_NEKOGAL_2]
	{
		.description = "A fast and lethal creature with very dangerous claws."
	},
	[CARD_NUMBER_NEMURIKO]
	{
		.description = "A child-like creature that controls a sleep fiend to beckon enemies into eternal slumber."
	},
	[CARD_NUMBER_NEO_THE_MAGIC_SWORDSMAN]
	{
		.description = "A dimensional drifter who not only practices sorcery, but is also a sword and martial arts master."
	},
	[CARD_NUMBER_NIMBLE_MOMONGA]
	{
		.description = "When this card is sent to the Graveyard as a result of battle, increase your Life Points by 1000 points. You can also take cards of the same name from your Deck and Special Summon them to the field in face-down Defense Position. The Deck is then shuffled."
	},
	[CARD_NUMBER_NIWATORI]
	{
		.description = "Swallows enemies whole and uses their essence as energy."
	},
	[CARD_NUMBER_NOBLEMAN_OF_CROSSOUT]
	{
		.description = "Destroy 1 face-down monster and remove it from play. If the monster destroyed is a Flip Effect Monster, both players must remove Monster Cards of the same name from their respective Decks and remove them from play. The Decks are then shuffled."
	},
	[CARD_NUMBER_NOBLEMAN_OF_EXTERMINATION]
	{
		.description = "Destroy 1 face-down Magic or Trap Card and remove it from play. If the card is a Trap Card, both players must remove Trap Cards of the same name from their respective Decks and remove them from play. The Decks are then shuffled."
	},
	[CARD_NUMBER_NOVOX_S_PRAYER]
	{
		.description = "This card is used to summon \"Skull Guardian\". You must also offer monsters whose total Level stars equal 6 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_NUMINOUS_HEALER]
	{
		.description = "You can activate this card when you take damage to your Life Points. Increase your Life Points by 1000 points. In addition, increase your Life Points by 500 points per card if there are additional \"Numinous Healer\" cards in the Graveyard. "
	},
	[CARD_NUMBER_OCTOBERSER]
	{
		.description = "With the head of a fish and the legs of an octopus, this strange creature attacks enemies by flinging spears."
	},
	[CARD_NUMBER_OCUBEAM]
	{
		.description = "Frightening in appearance, this creature uses its large eyes and ears to keep track of any movement."
	},
	[CARD_NUMBER_OGRE_OF_THE_BLACK_SHADOW]
	{
		.description = "An ogre possessed by the powers of the dark. Few can withstand its rapid charge."
	},
	[CARD_NUMBER_ONE_EYED_SHIELD_DRAGON]
	{
		.description = "This dragon wears a shield not only for its own protection, but also for ramming its enemies."
	},
	[CARD_NUMBER_OOGUCHI]
	{
		.description = "This monster attacks your opponent's Life Points directly."
	},
	[CARD_NUMBER_OOKAZI]
	{
		.description = "Inflict 800 points of Direct Damage to your opponent's Life Points."
	},
	[CARD_NUMBER_ORION_THE_BATTLE_KING]
	{
		.description = "None have lived to tell tales of this powerful battle fairy."
	},
	[CARD_NUMBER_OSCILLO_HERO]
	{
		.description = "A strange warrior from another dimension."
	},
	[CARD_NUMBER_OSCILLO_HERO_2]
	{
		.description = "A creature that electrocutes opponents with bolts of lightning."
	},
	[CARD_NUMBER_PAINFUL_CHOICE]
	{
		.description = "Select 5 cards from your Deck and show them to your opponent. Your opponent must select 1 card that will be added to your hand. Discard the remaining cards to the Graveyard."
	},
	[CARD_NUMBER_PALE_BEAST]
	{
		.description = "With skin tinged a bluish-white, this strange creature is a fearsome sight to behold."
	},
	[CARD_NUMBER_PANTHER_WARRIOR]
	{
		.description = "This card cannot attack unless you offer 1 of your monsters on the field as a Tribute."
	},
	[CARD_NUMBER_PARALYZING_POTION]
	{
		.description = "A non-Machine-type monster equipped with this card cannot attack."
	},
	[CARD_NUMBER_PARASITE_PARACIDE]
	{
		.description = "FLIP: Put this card face-up in your opponent's Deck and shuffle it. When your opponent draws this card, it is Special Summoned on the field face-up in Defense Position. Your opponent's Life Points are decreased by 1000 points, and from this point, all of your opponent's face-up Monster Cards are treated as Insect-type monsters as long as this card remains face-up on the field."
	},
	[CARD_NUMBER_PARROT_DRAGON]
	{
		.description = "A dragon from the cartoons that's more dangerous than it appears to be."
	},
	[CARD_NUMBER_PATROL_ROBO]
	{
		.description = "During your Standby Phase, you can look at 1 face-down card that's been Set by your opponent as long as this card remains face-up on the field."
	},
	[CARD_NUMBER_PEACOCK]
	{
		.description = "A large peacock that launches its feathers in a lethal attack."
	},
	[CARD_NUMBER_PENDULUM_MACHINE]
	{
		.description = "A horrible torture machine with a large pendulum blade."
	},
	[CARD_NUMBER_PENDULUM_MACHINE_2]
	{
		.description = "A horrible torture machine with a large pendulum blade."
	},
	[CARD_NUMBER_PENGUIN_KNIGHT]
	{
		.description = "When this card is sent directly from your Deck to the Graveyard by an opponent's card effect, combine your Graveyard cards with your own Deck, shuffle them and form a new Deck."
	},
	[CARD_NUMBER_PENGUIN_SOLDIER]
	{
		.description = "FLIP: You can return up to 2 Monster Cards from the field to the owner's hand."
	},
	[CARD_NUMBER_PERFECTLY_ULTIMATE_GREAT_MOTH]
	{
		.description = "This monster is summoned by offering \"Petit Moth\" as a Tribute on the 6th of your turns after it has been equipped with \"Cocoon of Evolution\"."
	},
	[CARD_NUMBER_PERFORMANCE_OF_SWORD]
	{
		.description = "This monster can only be Ritual Summoned with the Ritual Magic Card, \"Commencement Dance\". You must also offer monsters whose total Level Stars equal 6 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_PETIT_ANGEL]
	{
		.description = "A quick-moving and tiny fairy that's very difficult to hit."
	},
	[CARD_NUMBER_PETIT_DRAGON]
	{
		.description = "A very small dragon known for its vicious attacks."
	},
	[CARD_NUMBER_PETIT_MOTH]
	{
		.description = "This small but deadly creature is better off avoided."
	},
	[CARD_NUMBER_POLYMERIZATION]
	{
		.description = "Fuses 2 or more Fusion-Material Monsters to form a new Fusion Monster."
	},
	[CARD_NUMBER_POLYMERIZATION_2]
	{
		.description = "Fuses 2 or more Fusion-Material Monsters to form a new Fusion Monster."
	},
	[CARD_NUMBER_POT_OF_GREED]
	{
		.description = "Draw 2 cards from your Deck."
	},
	[CARD_NUMBER_POWER_OF_KAISHIN]
	{
		.description = "An Aqua-type monster equipped with this card increases its ATK and DEF by 300 points."
	},
	[CARD_NUMBER_PRAGTICAL]
	{
		.description = "Trakadon + Flame Viper"
	},
	[CARD_NUMBER_PREMATURE_BURIAL]
	{
		.description = "Pay 800 Life Points. Select 1 Monster Card from your Graveyard, place it on the field in Attack Position, and equip it with this card.  When this card is destroyed, the monster is also destroyed."
	},
	[CARD_NUMBER_PREVENT_RAT]
	{
		.description = "This creature is shielded with a tough hide of hair and is excellent at defending itself."
	},
	[CARD_NUMBER_PRINCESS_OF_TSURUGI]
	{
		.description = "FLIP: Inflicts 500 points of Direct Damage to your opponent's Life Points for each Magic and Trap Card your opponent has on the field."
	},
	[CARD_NUMBER_PRISMAN]
	{
		.description = "This crystalline monster filters light to create a lethal laser."
	},
	[CARD_NUMBER_PROHIBITION]
	{
		.description = "When you play this card, declare the name of 1 card. As long as this card remains on the field, the declared card cannot be played."
	},
	[CARD_NUMBER_PROTECTOR_OF_THE_THRONE]
	{
		.description = "While the king is away, this queen protects his throne with a mighty defense."
	},
	[CARD_NUMBER_PSYCHIC_KAPPA]
	{
		.description = "An amphibian with a myriad of powers to shield it from enemy attacks."
	},
	[CARD_NUMBER_PUMPKING_THE_KING_OF_GHOSTS]
	{
		.description = "As long as the \"Castle of Dark Illusions\" remains face-up on the field, the ATK and DEF of this card increases by 100 points each turn. This effect remains active for 5 turns."
	},
	[CARD_NUMBER_PUNISHED_EAGLE]
	{
		.description = "Blue-Winged Crown + Niwatori"
	},
	[CARD_NUMBER_QUEEN_BIRD]
	{
		.description = "This monster attacks enemies using its huge beak."
	},
	[CARD_NUMBER_QUEEN_OF_AUTUMN_LEAVES]
	{
		.description = "Queen of the Emerald Forest and wife of the Spirit King, she lives surrounded by vivid red leaves."
	},
	[CARD_NUMBER_QUEEN_S_DOUBLE]
	{
		.description = "This monster attacks your opponent's Life Points directly."
	},
	[CARD_NUMBER_RABID_HORSEMAN]
	{
		.description = "Battle Ox + Mystic Horseman"
	},
	[CARD_NUMBER_RAIGEKI]
	{
		.description = "Destroys all of your opponent's monsters on the field."
	},
	[CARD_NUMBER_RAIMEI]
	{
		.description = "Decrease your opponent's Life Points by 300 points."
	},
	[CARD_NUMBER_RAINBOW_FLOWER]
	{
		.description = "This monster attacks your opponent's Life Points directly."
	},
	[CARD_NUMBER_RAISE_BODY_HEAT]
	{
		.description = "A Dinosaur-type monster equipped with this card increases its ATK and DEF by 300 points."
	},
	[CARD_NUMBER_RARE_FISH]
	{
		.description = "Fusionist + Enchanting Mermaid"
	},
	[CARD_NUMBER_RAY_AND_TEMPERATURE]
	{
		.description = "The Sun and the North Wind join hands to deliver a devastating combination of heat and gale-force winds."
	},
	[CARD_NUMBER_REAPER_OF_THE_CARDS]
	{
		.description = "FLIP: Destroys 1 Trap Card on the field. If this card's target is face-down, flip it face-up. If the card is a Trap Card, it is destroyed. If not, it is returned to its face-down position. The flipped card is not activated."
	},
	[CARD_NUMBER_RED_ARCHERY_GIRL]
	{
		.description = "A mermaid archer that hides in a protective shell, waiting for the right moment to strike."
	},
	[CARD_NUMBER_RED_MEDICINE]
	{
		.description = "Increases your Life Points by 500 points."
	},
	[CARD_NUMBER_RED_EYES_B_DRAGON]
	{
		.description = "A ferocious dragon with a deadly attack."
	},
	[CARD_NUMBER_RED_EYES_BLACK_METAL_DRAGON]
	{
		.description = "This card can be Special Summoned from the Deck to the field by offering \"Red-Eyes B. Dragon\" equipped with \"Metalmorph\" as a Tribute."
	},
	[CARD_NUMBER_REINFORCEMENTS]
	{
		.description = "Increase 1 selected monster's ATK by 500 points during the turn this card is activated."
	},
	[CARD_NUMBER_RELINQUISHED]
	{
		.description = "This monster can take on the ATK and DEF of 1 opponent's monster on the field (a face-down monster results in an ATK and DEF of 0). Treat the selected monster as an Equip Magic Card and use it to equip \"Relinquished\". You may use this effect only once per turn and can equip \"Relinquished\" with only 1 monster at a time. When your opponent's monster attacks this monster with an ATK higher than \"Relinquished\", the equipped monster is destroyed instead of \"Relinquished\"."
	},
	[CARD_NUMBER_REMOVE_TRAP]
	{
		.description = "Destroys 1 face-up Trap Card on the field."
	},
	[CARD_NUMBER_RESPECT_PLAY]
	{
		.description = "During their respective turns, each player must show their opponent their hands."
	},
	[CARD_NUMBER_RESTRUCTER_REVOLUTION]
	{
		.description = "Inflict 200 points of damage to your opponent's Life Points for each card in your opponent's hand."
	},
	[CARD_NUMBER_RESURRECTION_OF_CHAKRA]
	{
		.description = "This card is used to summon \"Chakra\". You must also offer monsters whose total Level stars equal 7 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_REVERSE_TRAP]
	{
		.description = "All increases and decreases to ATK and DEF are reversed for the turn in which this card is activated."
	},
	[CARD_NUMBER_REVIVAL_OF_DOKURORIDER]
	{
		.description = "This card is used to summon \"Dokurorider\". You must also offer monsters whose total Level stars equal 6 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_RHAIMUNDOS_OF_THE_RED_SWORD]
	{
		.description = "Armed with the Sword of Crimson Flames, this warrior can bind a monster with fiery restraints."
	},
	[CARD_NUMBER_RIGHT_ARM_OF_THE_FORBIDDEN_ONE]
	{
		.description = "A forbidden right arm sealed by magic. Whosoever breaks this seal will know infinite power."
	},
	[CARD_NUMBER_RIGHT_LEG_OF_THE_FORBIDDEN_ONE]
	{
		.description = "A forbidden right leg sealed by magic. Whosoever breaks this seal will know infinite power."
	},
	[CARD_NUMBER_RING_OF_MAGNETISM]
	{
		.description = "A monster equipped with this card decreases its ATK and DEF by 500 points. All your opponent's monsters must attack the monster equipped with this card."
	},
	[CARD_NUMBER_RIRYOKU]
	{
		.description = "During your turn, you can reduce the ATK of 1 monster by half and add that amount to the ATK of another monster on the field."
	},
	[CARD_NUMBER_RISING_AIR_CURRENT]
	{
		.description = "Increases the ATK of all WIND monsters by 500 points and decreases their DEF by 400 points."
	},
	[CARD_NUMBER_ROARING_OCEAN_SNAKE]
	{
		.description = "Mystic Lamp + Hyosube"
	},
	[CARD_NUMBER_ROBBIN_GOBLIN]
	{
		.description = "Each time 1 of your monsters inflicts damage to your opponent's Life Points, 1 card is randomly selected from your opponent's hand and discarded."
	},
	[CARD_NUMBER_ROCK_OGRE_GROTTO_1]
	{
		.description = "Protected by a solid body of rock, this monster throws a bone-shattering punch."
	},
	[CARD_NUMBER_ROGUE_DOLL]
	{
		.description = "A deadly doll gifted with mystical power, it is particularly powerful when attacking against dark forces."
	},
	[CARD_NUMBER_ROOT_WATER]
	{
		.description = "An amphibian capable of calling up a massive tidal wave from the dark seas to wipe out enemy monsters."
	},
	[CARD_NUMBER_ROSE_SPECTRE_OF_DUNN]
	{
		.description = "Feral Imp + Snakeyashi"
	},
	[CARD_NUMBER_ROYAL_DECREE]
	{
		.description = "As long as this card remains face-up on the field, the effects of all Trap Cards except this one are deactivated."
	},
	[CARD_NUMBER_ROYAL_GUARD]
	{
		.description = "A mechanized soldier created to protect royalty."
	},
	[CARD_NUMBER_RUDE_KAISER]
	{
		.description = "With an axe in each hand, this monster delivers heavy damage."
	},
	[CARD_NUMBER_RUSH_RECKLESSLY]
	{
		.description = "Increase 1 monster's ATK by 700 points during the turn this card is activated."
	},
	[CARD_NUMBER_RYU_KISHIN]
	{
		.description = "A very elusive creature that looks like a harmless statue until it attacks."
	},
	[CARD_NUMBER_RYU_KISHIN_POWERED]
	{
		.description = "A gargoyle enhanced by the powers of darkness. Very sharp talons make it a worthy opponent."
	},
	[CARD_NUMBER_RYU_RAN]
	{
		.description = "A vicious little dragon sheltered in an egg that looks deceptively harmless."
	},
	[CARD_NUMBER_SABER_SLASHER]
	{
		.description = "A lethal engine of destruction that wields a well-honed blade."
	},
	[CARD_NUMBER_SAGGI_THE_DARK_CLOWN]
	{
		.description = "This clown appears from nowhere and executes very strange moves to avoid enemy attacks."
	},
	[CARD_NUMBER_SALAMANDRA]
	{
		.description = "A FIRE monster equipped with this card increases its ATK by 700 points."
	},
	[CARD_NUMBER_SAND_STONE]
	{
		.description = "Appears from underground and attacks with long, snake-like tentacles."
	},
	[CARD_NUMBER_SANGA_OF_THE_THUNDER]
	{
		.description = "Reduce the ATK of an opponent's monster attacking this card to 0. This effect can be used only once. The card's owner chooses when to activate this effect."
	},
	[CARD_NUMBER_SANGAN]
	{
		.description = "When this card is sent from the field to the Graveyard, you can move 1 monster with a ATK of 1500 or less from your Deck to your hand.  Your Deck is then shuffled."
	},
	[CARD_NUMBER_SEA_KAMEN]
	{
		.description = "A merciless monster that tears opponents to shreds with razor-like claws."
	},
	[CARD_NUMBER_SEA_KING_DRAGON]
	{
		.description = "Protected by a tough shell, this master of the sea attacks its enemies with toxic bubbles."
	},
	[CARD_NUMBER_SEAL_OF_THE_ANCIENTS]
	{
		.description = "At the cost of 1000 of your own Life Points, flip all of your opponent's face-down cards face-up. After seeing the cards, return them to their original positions (card effects are not activated)."
	},
	[CARD_NUMBER_SEBEK_S_BLESSING]
	{
		.description = "You can activate this card when your Monster Card inflicts Direct Damage to your opponent's Life Points. Increase your own Life Points by an amount equal to the Direct Damage you inflicted to your opponent. "
	},
	[CARD_NUMBER_SECTARIAN_OF_SECRETS]
	{
		.description = "A spellcaster that worships the dark, it is served by a sinister hand that drags enemies into oblivion."
	},
	[CARD_NUMBER_SEIYARYU]
	{
		.description = "A sacred dragon that burns away the unworthy  with its holy flames."
	},
	[CARD_NUMBER_SENGENJIN]
	{
		.description = "An unstoppable savage that carries a Millennium Item."
	},
	[CARD_NUMBER_SENJU_OF_THE_THOUSAND_HANDS]
	{
		.description = "When this card is summoned to the field (excluding Special Summon), you may move 1 Ritual Monster Card from your Deck to your hand. The Deck is then shuffled."
	},
	[CARD_NUMBER_SERPENT_NIGHT_DRAGON]
	{
		.description = "A dragon created from the soul of a wicked knight."
	},
	[CARD_NUMBER_SEVEN_TOOLS_OF_THE_BANDIT]
	{
		.description = "At the cost of 1,000 of your own Life Points, negate the activation of a Trap Card and destroy it."
	},
	[CARD_NUMBER_SHADOW_GHOUL]
	{
		.description = "Increase the ATK of this monster by 100 points for each monster in your own Graveyard."
	},
	[CARD_NUMBER_SHADOW_SPECTER]
	{
		.description = "Powerful in groups, this animal spirit can be found in the wastelands."
	},
	[CARD_NUMBER_SHARE_THE_PAIN]
	{
		.description = "Both you and your opponent must select 1 of your own Monster Cards on the field and offer it as a Tribute."
	},
	[CARD_NUMBER_SHIELD_AND_SWORD]
	{
		.description = "For 1 turn, each face-up monster's ATK becomes their DEF and vice-versa."
	},
	[CARD_NUMBER_SHINING_FAIRY]
	{
		.description = "When this card is sent to the Graveyard as a result of battle, you can select 1 LIGHT monster with an ATK of 1500 or less from your Deck and Special Summon it to the field (no Tribute is required for monsters of Level 5 or more). The Deck is then shuffled."
	},
	[CARD_NUMBER_SHOVEL_CRUSHER]
	{
		.description = "Armed with a pair of shovels, this monster will destroy anything that stands in its way."
	},
	[CARD_NUMBER_SILVER_BOW_AND_ARROW]
	{
		.description = "A Fairy-type monster equipped with this card increases its ATK and DEF by 300 points."
	},
	[CARD_NUMBER_SILVER_FANG]
	{
		.description = "A snow wolf that's beautiful to the eye, but absolutely vicious in battle."
	},
	[CARD_NUMBER_SINISTER_SERPENT]
	{
		.description = "During your Standby Phase, if a \"Sinister Serpent\" exists in your Graveyard, you can return the \"Sinister Serpent\" to your hand."
	},
	[CARD_NUMBER_SKELENGEL]
	{
		.description = "FLIP: You can draw 1 card from your deck."
	},
	[CARD_NUMBER_SKELGON]
	{
		.description = "The Snake Hair + Blackland Fire Dragon"
	},
	[CARD_NUMBER_SKULL_DICE]
	{
		.description = "Roll a die. The result is multiplied by 100 points and subtracted from the ATK and DEF of all monsters in your opponent's control until the end of your turn."
	},
	[CARD_NUMBER_SKULL_GUARDIAN]
	{
		.description = "This monster is summoned with the Ritual Magic Card, \"Novox's Prayer\". You must also offer monsters whose total Level stars equal 7 or more from the field or your hand as a Tribute."
	},
	[CARD_NUMBER_SKULL_KNIGHT]
	{
		.description = "Tainted Wisdom + Ancient Brain"
	},
	[CARD_NUMBER_SKULL_RED_BIRD]
	{
		.description = "This monster swoops down and attacks with a rain of knives stored in its wings.  "
	},
	[CARD_NUMBER_SKULL_SERVANT]
	{
		.description = "A skeletal ghost that isn't strong but can mean trouble in large numbers."
	},
	[CARD_NUMBER_SKULL_STALKER]
	{
		.description = "Swift and deadly, this monster grabs victims with its claws and attacks with a poison stinger."
	},
	[CARD_NUMBER_SKULLBIRD]
	{
		.description = "Takuhee + Temple of Skulls"
	},
	[CARD_NUMBER_SLEEPING_LION]
	{
		.description = "A very vicious creature that's best left sleeping."
	},
	[CARD_NUMBER_SLOT_MACHINE]
	{
		.description = "The machine's ability is said to vary according to its slot results."
	},
	[CARD_NUMBER_SNAKE_FANG]
	{
		.description = "Decrease 1 selected monster's DEF by 500 points during the turn this card is activated."
	},
	[CARD_NUMBER_SNAKEYASHI]
	{
		.description = "This monster is formed by several serpents that break off to individually attack nearby enemies."
	},
	[CARD_NUMBER_SNATCH_STEAL]
	{
		.description = "Take control of 1 of your opponent's face-up monsters. Your opponent gains 1000 Life Points at each of his/her Standby Phases."
	},
	[CARD_NUMBER_SOGEN]
	{
		.description = "Increases the ATK and DEF of all Beast-Warrior and Warrior-type monsters by 200 points."
	},
	[CARD_NUMBER_SOLEMN_JUDGMENT]
	{
		.description = "When your opponent either activates a Magic or Trap Card or summons a monster (including Special Summon), you can negate the action and destroy the cards involved at the cost of half your Life Points."
	},
	[CARD_NUMBER_SOLITUDE]
	{
		.description = "This beast-warrior swings a massive scythe that feeds on the souls of the slain."
	},
	[CARD_NUMBER_SOLOMON_S_LAWBOOK]
	{
		.description = "Skip your own Standby Phase."
	},
	[CARD_NUMBER_SONIC_BIRD]
	{
		.description = "When this card is summoned (excluding Special Summon), you may move 1 Ritual Magic Card from your Deck to your hand.  The Deck is then shuffled."
	},
	[CARD_NUMBER_SONIC_MAID]
	{
		.description = "A maiden that uses sound to her advantage, she wields a scythe that's shaped like a musical note."
	},
	[CARD_NUMBER_SOUL_HUNTER]
	{
		.description = "Lord of the Lamp + Invader from Another Dimension"
	},
	[CARD_NUMBER_SOUL_OF_THE_PURE]
	{
		.description = "Increases a selected player's Life Points by 800 points."
	},
	[CARD_NUMBER_SOUL_RELEASE]
	{
		.description = "Select 5 cards from either you or your opponent's Graveyard and remove them from the current duel."
	},
	[CARD_NUMBER_SPARKS]
	{
		.description = "Inflicts 200 points of Direct Damage to your opponent's Life Points."
	},
	[CARD_NUMBER_SPEAR_CRETIN]
	{
		.description = "FLIP: After this card is flipped, when it is sent to the Graveyard, both you and your opponent select 1 monster from your respective Graveyards and Special Summon it on the field in face-up Attack Position or face-down Defense Position (no Tribute is required for monsters of Level 5 or more)."
	},
	[CARD_NUMBER_SPELLBINDING_CIRCLE]
	{
		.description = "Select 1 monster.  As long as this card remains face-up on the field, the selected monster cannot attack or change its battle position except by the effect of a Magic, Trap or Effect Monster Card. When the selected monster is destroyed, this card is also destroyed. If the selected monster is offered as a Tribute, this card is not destroyed."
	},
	[CARD_NUMBER_SPIKE_SEADRA]
	{
		.description = "Using the spikes sprouting from its body, this creature stabs its opponents and floods them with electricity."
	},
	[CARD_NUMBER_SPIRIT_OF_THE_BOOKS]
	{
		.description = "This wise spirit dwells in books, using its accumulated knowledge to defeat enemies."
	},
	[CARD_NUMBER_SPIRIT_OF_THE_HARP]
	{
		.description = "A spirit that soothes the soul with the music of its heavenly harp."
	},
	[CARD_NUMBER_STAIN_STORM]
	{
		.description = "Destroys all Machine-type monsters on the field."
	},
	[CARD_NUMBER_STAR_BOY]
	{
		.description = "As long as this card remains face-up on the field, increase the ATK of all WATER monsters by 500 points and decrease the ATK of all FIRE monsters by 400 points."
	},
	[CARD_NUMBER_STEEL_OGRE_GROTTO_1]
	{
		.description = "A steel idol worshipped in the Land of Machines."
	},
	[CARD_NUMBER_STEEL_OGRE_GROTTO_2]
	{
		.description = "A mechanized iron doll with tremendous strength."
	},
	[CARD_NUMBER_STEEL_SCORPION]
	{
		.description = "Non Machine-type Monsters attacking \"Steel Scorpion\" will be destroyed at the End Phase of your opponent's turn 3 turns later."
	},
	[CARD_NUMBER_STEEL_SHELL]
	{
		.description = "A WATER monster equipped with this card increases its ATK by 400 ponits and decreases its DEF by 200 points."
	},
	[CARD_NUMBER_STIM_PACK]
	{
		.description = "A monster equipped with this card increases its ATK by 700 points. Its ATK is then decreased by 300 points at each of its Standby Phases."
	},
	[CARD_NUMBER_STONE_ARMADILLER]
	{
		.description = "With a body armored by rock-hard fur, this monster features excellent defense capabilities."
	},
	[CARD_NUMBER_STONE_OGRE_GROTTO]
	{
		.description = "A behemoth shaped by giant boulders."
	},
	[CARD_NUMBER_STOP_DEFENSE]
	{
		.description = "Select 1 of your opponent's monsters and switch it to Attack Position. If the card is face-down, flip it face-up. If the card has a flip effect, it is activated immediately."
	},
	[CARD_NUMBER_STUFFED_ANIMAL]
	{
		.description = "It may look like a harmless stuffed animal, but its zipper mouth deals a deadly bite."
	},
	[CARD_NUMBER_SUCCUBUS_KNIGHT]
	{
		.description = "An unworthy warrior wizard adept in casting death-dealing spells."
	},
	[CARD_NUMBER_SUIJIN]
	{
		.description = "Reduce the ATK of an opponent's monster attacking this card to 0. This effect can be used only once. The card's owner chooses when to activate this effect."
	},
	[CARD_NUMBER_SUMMONED_SKULL]
	{
		.description = "A fiend with dark powers for confusing the enemy.  Among the Fiend-type monsters, this monster boasts considerable force. "
	},
	[CARD_NUMBER_SUPER_WAR_LION]
	{
		.description = "This monster is summoned with the Ritual Magic Card, \"War-Lion Ritual\". You must also offer monsters whose total Level stars equal 7 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_SUPPORTER_IN_THE_SHADOWS]
	{
		.description = "A cute little elf that hides in the shadows and provides spiritual support."
	},
	[CARD_NUMBER_SWAMP_BATTLEGUARD]
	{
		.description = "Increase the ATK of this monster by 500 points for every face-up \"Lava Battleguard\" on your side of the field. "
	},
	[CARD_NUMBER_SWORD_ARM_OF_DRAGON]
	{
		.description = "With a body covered in sword-like thorns, nothing dares stand in the way of this charging monster.  "
	},
	[CARD_NUMBER_SWORD_OF_DARK_DESTRUCTION]
	{
		.description = "A DARK monster equipped with this card increases its ATK by 400 points and decreases its DEF by 200 points."
	},
	[CARD_NUMBER_SWORD_OF_DEEP_SEATED]
	{
		.description = "A Monster Card equipped with this card increases its ATK and DEF by 500 points.  When this card is sent to the Graveyard, place it on top of your Deck."
	},
	[CARD_NUMBER_SWORD_OF_DRAGON_S_SOUL]
	{
		.description = "This card can only be used to equip by a Warrior-type monster to increase its ATK by 700 points. Any Dragon-type monster battling a monster equipped with this card is automatically destroyed at the end of a Battle Phase, regardless of ATK/DEF. (Damage calculations are applied normally)."
	},
	[CARD_NUMBER_SWORDS_OF_REVEALING_LIGHT]
	{
		.description = "Counting from your opponent's turn, none of your opponent's monsters can attack for 3 turns of his/her own. When this card is activated, opponent's face-down monsters at that time are turned face-up, but remain in Defense Position. Any effects the monsters may have are immediately activated."
	},
	[CARD_NUMBER_SWORDSMAN_FROM_A_FOREIGN_LAND]
	{
		.description = "A monster attacked by this card will be destroyed at the End Phase 5 turns later."
	},
	[CARD_NUMBER_SWORDSTALKER]
	{
		.description = "A monster formed by the vengeful souls of those who passed away in battle."
	},
	[CARD_NUMBER_TAILOR_OF_THE_FICKLE]
	{
		.description = "Select 1 equipped Equip Card and switch it to another correct target."
	},
	[CARD_NUMBER_TAINTED_WISDOM]
	{
		.description = "When this card is changed from Attack to Defense Position, shuffle your own Deck."
	},
	[CARD_NUMBER_TAKRIMINOS]
	{
		.description = "A member of a race of sea serpents that freely travels through the sea."
	},
	[CARD_NUMBER_TAKUHEE]
	{
		.description = "This bird is known far and wide as a harbinger of doom."
	},
	[CARD_NUMBER_TAO_THE_CHANTER]
	{
		.description = "Master of Yin and Yang, this wizard handles a delicate balance of spells and counterspells."
	},
	[CARD_NUMBER_TEMPLE_OF_SKULLS]
	{
		.description = "A mysterious temple of skulls and bones that sucks in unwary enemies."
	},
	[CARD_NUMBER_TENDERNESS]
	{
		.description = "An adorable fairy that celebrates the gift of love."
	},
	[CARD_NUMBER_TERRA_THE_TERRIBLE]
	{
		.description = "Known as a swamp dweller, this creature is a minion of the dark forces."
	},
	[CARD_NUMBER_THE_13TH_GRAVE]
	{
		.description = "A zombie that suddenly appeared from plot #13  - an empty grave. "
	},
	[CARD_NUMBER_THE_BEWITCHING_PHANTOM_THIEF]
	{
		.description = "An elegant thief with a black cloak that charms its enemies."
	},
	[CARD_NUMBER_THE_BISTRO_BUTCHER]
	{
		.description = "When this card inflict a Direct Damage to your opponent, your opponent must draw 2 cards from the Deck."
	},
	[CARD_NUMBER_THE_CHEERFUL_COFFIN]
	{
		.description = "You can discard up to 3 Monster Cards from your hand."
	},
	[CARD_NUMBER_THE_DRDEK]
	{
		.description = "A bipedal eyeball that seldom misses an enemy with its lethal talons."
	},
	[CARD_NUMBER_THE_EYE_OF_TRUTH]
	{
		.description = "As long as this card remains face-up on the field, your opponent must show his/her hand.  Your opponent recovers 1000 Life Points at every Standby Phase if he/she has a Magic Card in his/her hand."
	},
	[CARD_NUMBER_THE_FLUTE_OF_SUMMONING_DRAGON]
	{
		.description = "Playing this card when you have a \"Lord of D.\" card face-up on the field allows you to play up to 2 Dragon-type cards from your hand as a Special Summon."
	},
	[CARD_NUMBER_THE_FORCEFUL_SENTRY]
	{
		.description = "Look at your opponent's hand, then select 1 card and return it to his/her Deck. The Deck is then shuffled."
	},
	[CARD_NUMBER_THE_FURIOUS_SEA_KING]
	{
		.description = "Grand King of the Seven Seas, he's able to summon massive tidal waves to drown the enemy."
	},
	[CARD_NUMBER_THE_IMMORTAL_OF_THUNDER]
	{
		.description = "FLIP: You gain 3000 Life Points. When this card is sent from the field to the Graveyard, you lose 5000 Life Points."
	},
	[CARD_NUMBER_THE_INEXPERIENCED_SPY]
	{
		.description = "Select and see 1 card in your opponent's hand."
	},
	[CARD_NUMBER_THE_LITTLE_SWORDSMAN_OF_AILE]
	{
		.description = "Offer 1 monster on the field as a Tribute to increase this monster's ATK by 700 points until the end of the turn."
	},
	[CARD_NUMBER_THE_REGULATION_OF_TRIBE]
	{
		.description = "Select 1 Type of monster. Any monster of the selected Type cannot attack. To keep this card in effect, you must offer 1 monster as a Tribute at each of your Standby Phases. If you cannot do so, this card is destroyed."
	},
	[CARD_NUMBER_THE_RELIABLE_GUARDIAN]
	{
		.description = "Increase 1 monster's DEF by 700 points during the turn this card is activated."
	},
	[CARD_NUMBER_THE_SHALLOW_GRAVE]
	{
		.description = "Each player takes 1 Monster Card from their respective Graveyards and Sets them on the field in Defense Position."
	},
	[CARD_NUMBER_THE_SNAKE_HAIR]
	{
		.description = "A monster with a head of poison snakes. One look from this monster can turn an opponent to stone."
	},
	[CARD_NUMBER_THE_STERN_MYSTIC]
	{
		.description = "FLIP: All face-down cards on the field are turned face-up, and then returned to their original positions. No card effects are activated when cards are turned face-up."
	},
	[CARD_NUMBER_THE_THING_THAT_HIDES_IN_THE_MUD]
	{
		.description = "This monster melts its way underground to attack enemies from below."
	},
	[CARD_NUMBER_THE_UNHAPPY_MAIDEN]
	{
		.description = "When this card is sent to the Graveyard as a result of battle, the Battle Phase for that turn ends immediately."
	},
	[CARD_NUMBER_THE_WANDERING_DOOMED]
	{
		.description = "A monster that wanders the edges of the netherworld."
	},
	[CARD_NUMBER_THE_WICKED_WORM_BEAST]
	{
		.description = "This card is returned to your hand at the end of your turn."
	},
	[CARD_NUMBER_THOUSAND_DRAGON]
	{
		.description = "Time Wizard + Baby Dragon"
	},
	[CARD_NUMBER_THOUSAND_DRAGON_2]
	{
		.description = "Time Wizard + Baby Dragon"
	},
	[CARD_NUMBER_THREE_HEADED_GEEDO]
	{
		.description = "A three-headed nocturnal monster that is absolutely ruthless when fighting."
	},
	[CARD_NUMBER_THREE_LEGGED_ZOMBIES]
	{
		.description = "A pair of friendly skeletons, lean and fat, that travels with extreme difficulty."
	},
	[CARD_NUMBER_THUNDER_DRAGON]
	{
		.description = "You can add up to 2 \"Thunder Dragon\" card(s) from your Deck to your hand by discarding this card from your hand. After that, shuffle your Deck.  This effect is activated only during a Main Phase."
	},
	[CARD_NUMBER_TIGER_AXE]
	{
		.description = "A fast and powerful axe-wielding beast-warrior."
	},
	[CARD_NUMBER_TIGER_AXE_2]
	{
		.description = "A fast and powerful axe-wielding beast-warrior."
	},
	[CARD_NUMBER_TIME_MACHINE]
	{
		.description = "When 1 monster is sent to the Graveyard as a result of battle, you can return it to the field in the same battle position as a Special Summon."
	},
	[CARD_NUMBER_TIME_SEAL]
	{
		.description = "Your opponent skips the Draw Phase of his/her next turn."
	},
	[CARD_NUMBER_TIME_WIZARD]
	{
		.description = "Toss a coin and call Heads or tails. If you call it right, your opponent's monsters on the field are destroyed. If you call it wrong, your own monsters on the field are destroyed and you lose Life Points equal to half the total ATK of the destroyed monsters.  This card can be used only during your own turn, once per turn."
	},
	[CARD_NUMBER_TOAD_MASTER]
	{
		.description = "A hermit frog that has been in existence for thousands of years, it attacks with tadpoles."
	},
	[CARD_NUMBER_TOGEX]
	{
		.description = "An agile monster that rolls up to ram its opponents."
	},
	[CARD_NUMBER_TOLL]
	{
		.description = "As long as this card remains face-up on the field, both you and your opponent must pay 500 Life Points per monster to attack."
	},
	[CARD_NUMBER_TOMOZAURUS]
	{
		.description = "Small but vicious, this monster even attacks its own kind."
	},
	[CARD_NUMBER_TONGYO]
	{
		.description = "This monster captures other fish with its long tongue and sucks the energy out of them."
	},
	[CARD_NUMBER_TOON_ALLIGATOR]
	{
		.description = "An alligator monster straight from the cartoons."
	},
	[CARD_NUMBER_TOON_MERMAID]
	{
		.description = "This card cannot be summoned unless \"Toon World\" is on the field. This card cannot attack in the same turn that it is summoned. Pay 500 Life Points each time this monster attacks. When \"Toon World\" is destroyed, this card is also destroyed. If your opponent doesn't control a Toon monster on the field, this card may inflict Direct Damage to your opponent's Life Points. If a Toon monster is on your opponent's side of the field, your attacks must target the Toon monster. "
	},
	[CARD_NUMBER_TOON_SUMMONED_SKULL]
	{
		.description = "This card cannot be summoned unless \"Toon World\" is on the field. This card cannot attack in the same turn that it is summoned. Pay 500 Life Points each time this monster attacks. When \"Toon World\" is destroyed, this card is also destroyed. If your opponent doesn't control a Toon monster on the field, this card may inflict Direct Damage to your opponent's Life Points. If a Toon monster is on your opponent's side of the field, your attacks must target the Toon monster. "
	},
	[CARD_NUMBER_TOON_WORLD]
	{
		.description = "This card is activated by paying 1000 of your Life Points."
	},
	[CARD_NUMBER_TORIKE]
	{
		.description = "Although a poor defender, this monster's sharp horn gives it an edge when attacking."
	},
	[CARD_NUMBER_TOTAL_DEFENSE_SHOGUN]
	{
		.description = "When this card is summoned (excluding Special Summon), it is placed on the field in Defense Position. This card can attack without being shifted to Attack Position. Damage results are calculated normally."
	},
	[CARD_NUMBER_TRAKADON]
	{
		.description = "A tiger-striped dragon that is often seen racing across the wasteland at tremendous speeds."
	},
	[CARD_NUMBER_TRAP_HOLE]
	{
		.description = "If the ATK of a monster summoned by your opponent (excluding Special Summon) is 1000 points or more, the monster is destroyed."
	},
	[CARD_NUMBER_TRAP_MASTER]
	{
		.description = "FLIP: Destroys 1 Trap Card on the field. If this card's target is face-down, flip it face-up. If the card is a Trap Card, it is destroyed. If not, it is returned to its face-down position. The flipped card is not activated."
	},
	[CARD_NUMBER_TREMENDOUS_FIRE]
	{
		.description = "Inflicts 1000 points of Direct Damage to your opponent's Life Points and 500 points of Direct Damage to your Life Points."
	},
	[CARD_NUMBER_TRENT]
	{
		.description = "A guardian of the woods, this massive tree is believed to be immortal."
	},
	[CARD_NUMBER_TRIAL_OF_NIGHTMARE]
	{
		.description = "This fiend passes judgment on enemies that are locked in coffins."
	},
	[CARD_NUMBER_TRIBUTE_TO_THE_DOOMED]
	{
		.description = "You can destroy 1 opponent's monster (regardless of its position) by discarding 1 card from your hand to the Graveyard."
	},
	[CARD_NUMBER_TRI_HORNED_DRAGON]
	{
		.description = "An unworthy dragon with three sharp horns sprouting from its head."
	},
	[CARD_NUMBER_TRIPWIRE_BEAST]
	{
		.description = "This creature attacks with electromagnetic waves."
	},
	[CARD_NUMBER_TURTLE_OATH]
	{
		.description = "This card is used to Ritual Summon \"Crab Turtle\". You must also offer monsters whose total Level Stars equal 8 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_TURTLE_TIGER]
	{
		.description = "A tiger encased in a protective shell that attacks with razor-sharp fangs."
	},
	[CARD_NUMBER_TWIN_LONG_RODS_2]
	{
		.description = "An amphibious creature with two whip-like tails."
	},
	[CARD_NUMBER_TWIN_HEADED_FIRE_DRAGON]
	{
		.description = "Two dragons fused as one from the effects of the Big Bang."
	},
	[CARD_NUMBER_TWIN_HEADED_THUNDER_DRAGON]
	{
		.description = "Thunder Dragon + Thunder Dragon"
	},
	[CARD_NUMBER_TWO_HEADED_KING_REX]
	{
		.description = "A powerful monster whose two heads attack as one."
	},
	[CARD_NUMBER_TWO_MOUTH_DARKRULER]
	{
		.description = "A dinosaur with two deadly jaws, it stores electricity in its horn and releases high voltage bolts from the mouth on its back."
	},
	[CARD_NUMBER_TWO_PRONGED_ATTACK]
	{
		.description = "Select and destroy 2 of your monsters and 1 of your opponent's monsters."
	},
	[CARD_NUMBER_TYHONE]
	{
		.description = "Capable of firing cannonballs from its mouth for long-range attacks, this creature is particularly effective in mountain battles."
	},
	[CARD_NUMBER_TYHONE_2]
	{
		.description = "A crimson dragon that spits fireballs to create a blazing sea of fire."
	},
	[CARD_NUMBER_UFO_TURTLE]
	{
		.description = "When this card is sent to the Graveyard as a result of battle, you may select 1 FIRE monster with an ATK of 1500 or less from your Deck and Special Summon it to the field (no Tribute is required for monsters of Level 5 or more). The Deck is then shuffled."
	},
	[CARD_NUMBER_ULTIMATE_OFFERING]
	{
		.description = "At the cost of 500 Life Points per monster, a player is allowed  an extra Normal Summon or Set."
	},
	[CARD_NUMBER_UMI]
	{
		.description = "Increases the ATK and DEF of all Fish, Sea Serpent, Thunder, and Aqua-type monsters by 200 points. Also decreases the ATK and DEF of all Machine and Pyro-type monsters by 200 points."
	},
	[CARD_NUMBER_UMIIRUKA]
	{
		.description = "Increases the ATK of all WATER monsters by 500 points and decreases their DEF by 400 points."
	},
	[CARD_NUMBER_UNKNOWN_WARRIOR_OF_FIEND]
	{
		.description = "The speed of this warrior creates an intense vacuum that can slice through a monster's hide."
	},
	[CARD_NUMBER_UPSTART_GOBLIN]
	{
		.description = "Draw 1 card from your Deck. Your opponent gains 1000 Life Points."
	},
	[CARD_NUMBER_URABY]
	{
		.description = "Fast on its feet, this dinosaur rips enemies to shreds with its sharp claws."
	},
	[CARD_NUMBER_USHI_ONI]
	{
		.description = "A bull fiend restored by the dark arts, this monster appears out of a jar."
	},
	[CARD_NUMBER_VALKYRION_THE_MAGNA_WARRIOR]
	{
		.description = "You may Special Summon this card by offering Alpha The Magnet Warrior, Beta The Magnet Warrior, and %4792 from your hand or the field as a Tribute.  If Alpha The Magnet Warrior, Beta The Magnet Warrior, and Gamma The Magnet Warrior are in the Graveyard, you can offer this card as a Tribute to Special Summon these 3 cards to the field."
	},
	[CARD_NUMBER_VERMILLION_SPARROW]
	{
		.description = "Rhaimundos of the Red Sword + Fireyarou"
	},
	[CARD_NUMBER_VERSAGO_THE_DESTROYER]
	{
		.description = "You can substitute this card for any 1 Fusion-Material Monster. You cannot substitute for any other Fusion-Material Monsters in the current Fusion."
	},
	[CARD_NUMBER_VILE_GERMS]
	{
		.description = "A Plant-type monster equipped with this card increases its ATK and DEF by 300 points."
	},
	[CARD_NUMBER_VIOLENT_RAIN]
	{
		.description = "This monster can call up sudden torrents of battering rain."
	},
	[CARD_NUMBER_VIOLET_CRYSTAL]
	{
		.description = "A Zombie-type monster equipped with this card increases its ATK and DEF by 300 points."
	},
	[CARD_NUMBER_VISHWAR_RANDI]
	{
		.description = "This lady warrior with unquenchable bloodlust serves the forces of darkness."
	},
	[CARD_NUMBER_VORSE_RAIDER]
	{
		.description = "The axe in the hand of this evil animal has tasted the blood of many monsters."
	},
	[CARD_NUMBER_WABOKU]
	{
		.description = "Any damage inflicted by an opponent's monster is decreased to 0 during the turn this card is activated."
	},
	[CARD_NUMBER_WALL_OF_ILLUSION]
	{
		.description = "The monster attacking this creature is returned to its owner's hand. Any damage resulting from the attack is calculated normally."
	},
	[CARD_NUMBER_WALL_SHADOW]
	{
		.description = "You cannot Normal Summon this monster. This card can only be Special Summoned by offering \"Labyrinth Wall\" equipped with \"Magical Labyrinth\" as a Tribute. No other Tribute Monsters are necessary. "
	},
	[CARD_NUMBER_WAR_LION_RITUAL]
	{
		.description = "This card is used to summon \"Super War-Lion\". You must also offer monsters whose total Level stars equal 6 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_WARRIOR_ELIMINATION]
	{
		.description = "Destroys all Warrior-type monsters on the field."
	},
	[CARD_NUMBER_WARRIOR_OF_TRADITION]
	{
		.description = "Sonic Maid + Beautiful Headhuntress"
	},
	[CARD_NUMBER_WASTELAND]
	{
		.description = "Increases the ATK and DEF of all Dinosaur, Zombie, and Rock-type monsters by 200 points."
	},
	[CARD_NUMBER_WATER_ELEMENT]
	{
		.description = "A spirit that dwells in water, this creature generates a mist to cloud the vision of foes."
	},
	[CARD_NUMBER_WATER_GIRL]
	{
		.description = "A lovely lady who can launch water projectiles that turn into lethal ice spikes before they reach an opponent."
	},
	[CARD_NUMBER_WATER_MAGICIAN]
	{
		.description = "This monster swamps an opponent with an almost endless supply of water."
	},
	[CARD_NUMBER_WATER_OMOTICS]
	{
		.description = "Transforms the water overflowing from her jar into attacking dragons."
	},
	[CARD_NUMBER_WATERDRAGON_FAIRY]
	{
		.description = "A water fairy that is said to be able to summon a giant sea serpent."
	},
	[CARD_NUMBER_WEATHER_CONTROL]
	{
		.description = "This creature controls weather and is often the cause of mountain storms."
	},
	[CARD_NUMBER_WEATHER_REPORT]
	{
		.description = "FLIP: Destroys all opponent's face-up \"Swords of Revealing Light\" on the field. If \"Swords of Revealing Light\" is destroyed, you can perform your Battle Phase twice this turn (or your next turn, if activated during opponent's turn)."
	},
	[CARD_NUMBER_WHIPTAIL_CROW]
	{
		.description = "Attacks from the skies with a whip-like tail."
	},
	[CARD_NUMBER_WHITE_HOLE]
	{
		.description = "Your monsters are not destroyed when your opponent plays \"Dark Hole\"."
	},
	[CARD_NUMBER_WHITE_MAGICAL_HAT]
	{
		.description = "When this card inflicts damage to your opponent's Life Points, 1 card must be discarded randomly from your opponent's hand to the Graveyard. "
	},
	[CARD_NUMBER_WICKED_MIRROR]
	{
		.description = "A wicked mirror that hypnotizes enemies, diverting attacks from their intended targets."
	},
	[CARD_NUMBER_WIDESPREAD_RUIN]
	{
		.description = "When your opponent attacks with a monster, destroy his/her Attack Position monster with the highest ATK."
	},
	[CARD_NUMBER_WINDSTORM_OF_ETAQUA]
	{
		.description = "Shift the position of all your opponent's face-up Monster Cards on the field to the opposite position (Defense Position to Attack Position or vice versa)."
	},
	[CARD_NUMBER_WING_EGG_ELF]
	{
		.description = "This fairy in an eggshell uses massive wings to blow back almost any projectile attack."
	},
	[CARD_NUMBER_WINGED_CLEAVER]
	{
		.description = "Few can withstand the scythe-like arms of this dangerous creature."
	},
	[CARD_NUMBER_WINGED_DRAGON_GUARDIAN_OF_THE_FORTRESS_1]
	{
		.description = "A dragon commonly found guarding mountain fortresses. Its signature attack is a sweeping dive from out of the blue."
	},
	[CARD_NUMBER_WINGS_OF_WICKED_FLAME]
	{
		.description = "Crimson wings of fire make this a very lethal creature."
	},
	[CARD_NUMBER_WITCH_OF_THE_BLACK_FOREST]
	{
		.description = "When this card is sent from the field to the Graveyard, you can move 1 monster with a DEF of 1500 or less from your Deck to your hand.  Your Deck is then shuffled."
	},
	[CARD_NUMBER_WITCH_S_APPRENTICE]
	{
		.description = "As long as this card remains face-up on the field, increase the ATK of all DARK monsters by 500 points and decrease the ATK of all LIGHT monsters by 400 points."
	},
	[CARD_NUMBER_WITTY_PHANTOM]
	{
		.description = "Dressed in a night-black tuxedo, this creature presides over death."
	},
	[CARD_NUMBER_WODAN_THE_RESIDENT_OF_THE_FOREST]
	{
		.description = "Increase this card's ATK by 100 points for every Plant-type monster that is face-up on the field."
	},
	[CARD_NUMBER_WOOD_REMAINS]
	{
		.description = "A living corpse of wood reanimated by the powers of darkness."
	},
	[CARD_NUMBER_WORLD_SUPPRESSION]
	{
		.description = "You can activate this card when a Field Magic Card is played to deactivate the Field Magic Card for the current turn."
	},
	[CARD_NUMBER_WOW_WARRIOR]
	{
		.description = "A fish with arms, legs, and some very sharp teeth."
	},
	[CARD_NUMBER_WRETCHED_GHOST_OF_THE_ATTIC]
	{
		.description = "A harmless monster found in just about any attic."
	},
	[CARD_NUMBER_YADO_KARU]
	{
		.description = "When this card's position is changed from Attack to Defense, you can place any number of cards from your hand at the bottom of your Deck in any order you desire."
	},
	[CARD_NUMBER_YAIBA_ROBO]
	{
		.description = "A cubical machine equipped with cutting blades for shredding an opponent to mincemeat."
	},
	[CARD_NUMBER_YAMATANO_DRAGON_SCROLL]
	{
		.description = "A dragon conjured from the very scroll in which it was depicted."
	},
	[CARD_NUMBER_YAMI]
	{
		.description = "Increases the ATK and DEF of all Fiend and Spellcaster-type monsters by 200 points. Also decreases the ATK and DEF of all Fairy-type monsters by 200 points."
	},
	[CARD_NUMBER_YARANZO]
	{
		.description = "A treasure box containing a monster that attacks any unwary bandit."
	},
	[CARD_NUMBER_ZANKI]
	{
		.description = "His swiftly drawn blade delivers quick and fatal damage."
	},
	[CARD_NUMBER_ZERA_RITUAL]
	{
		.description = "This card is used to summon \"Zera The Mant\". You must also offer monsters whose total Level stars equal 8 or more from the field or your hand as a Tribute."
	},
	[CARD_NUMBER_ZERA_THE_MANT]
	{
		.description = "This monster is summoned with the Ritual Magic Card, \"Zera Ritual\". You must also offer monsters whose total Level stars equal 8 or more as a Tribute from the field or your hand."
	},
	[CARD_NUMBER_ZOA]
	{
		.description = "A monster whose full potential can be achieved when outfitted with Metalmorph."
	},
	[CARD_NUMBER_ZOMBIE_WARRIOR]
	{
		.description = "Skull Servant + Battle Warrior"
	},
	[CARD_NUMBER_ZONE_EATER]
	{
		.description = "A monster attacked by this card will be destroyed at the End Phase 5 turns later."
	},
	[CARD_NUMBER_THE_MONARCHY]
	{
		.description = ""
	},
	[CARD_NUMBER_SET_SAIL_FOR_THE_KINGDOM]
	{
		.description = ""
	},
	[CARD_NUMBER_GLORY_OF_THE_KING_S_HAND]
	{
		.description = ""
	},
	[CARD_NUMBER_OBELISK_THE_TORMENTOR]
	{
		.description = "The descent of this mighty creature shall be heralded by burning winds and twisted land. And with the coming of this horror, those who draw breath shall know the true meaning of eternal slumber."
	},
	[CARD_NUMBER_SLIFER_THE_SKY_DRAGON]
	{
		.description = "The heavens twist and thunder roars, signaling the coming of this ancient creature, and the dawn of true power."
	},
	[CARD_NUMBER_THE_WINGED_DRAGON_OF_RA]
	{
		.description = "Spirits sing of a powerful creature that rules over all that is mystic"
	},
	[CARD_NUMBER_INSECT_MONSTER_TOKEN]
	{
		.description = ""
	},
	[821]
	{
		.description = ""
	},
	[822]
	{
		.description = ""
	},
	[823]
	{
		.description = ""
	},
	[824]
	{
		.description = ""
	},
	[825]
	{
		.description = ""
	},
	[826]
	{
		.description = ""
	},
	[827]
	{
		.description = ""
	},
	[828]
	{
		.description = ""
	},
	[829]
	{
		.description = ""
	},
	[830]
	{
		.description = ""
	},
	[831]
	{
		.description = ""
	},
	[832]
	{
		.description = ""
	},
	[833]
	{
		.description = ""
	},
	[834]
	{
		.description = ""
	},
	[835]
	{
		.description = ""
	},
	[836]
	{
		.description = ""
	},
	[837]
	{
		.description = ""
	},
	[838]
	{
		.description = ""
	},
	[839]
	{
		.description = ""
	},
	[840]
	{
		.description = ""
	},
	[841]
	{
		.description = ""
	},
	[842]
	{
		.description = ""
	},
	[843]
	{
		.description = ""
	},
	[844]
	{
		.description = ""
	},
	[845]
	{
		.description = ""
	},
	[846]
	{
		.description = ""
	},
	[847]
	{
		.description = ""
	},
	[848]
	{
		.description = ""
	},
	[849]
	{
		.description = ""
	},
	[850]
	{
		.description = ""
	},
	[851]
	{
		.description = ""
	},
	[852]
	{
		.description = ""
	},
	[853]
	{
		.description = ""
	},
	[854]
	{
		.description = ""
	},
	[855]
	{
		.description = ""
	},
	[856]
	{
		.description = ""
	},
	[857]
	{
		.description = ""
	},
	[858]
	{
		.description = ""
	},
	[859]
	{
		.description = ""
	},
	[860]
	{
		.description = ""
	},
	[861]
	{
		.description = ""
	},
	[862]
	{
		.description = ""
	},
	[863]
	{
		.description = ""
	},
	[864]
	{
		.description = ""
	},
	[865]
	{
		.description = ""
	},
	[866]
	{
		.description = ""
	},
	[867]
	{
		.description = ""
	},
	[868]
	{
		.description = ""
	},
	[869]
	{
		.description = ""
	},
	[870]
	{
		.description = ""
	},
	[871]
	{
		.description = ""
	},
	[872]
	{
		.description = ""
	},
	[873]
	{
		.description = ""
	},
	[874]
	{
		.description = ""
	},
	[875]
	{
		.description = ""
	},
	[876]
	{
		.description = ""
	},
	[877]
	{
		.description = ""
	},
	[878]
	{
		.description = ""
	},
	[879]
	{
		.description = ""
	},
	[880]
	{
		.description = ""
	},
	[881]
	{
		.description = ""
	},
	[882]
	{
		.description = ""
	},
	[883]
	{
		.description = ""
	},
	[884]
	{
		.description = ""
	},
	[885]
	{
		.description = ""
	},
	[886]
	{
		.description = ""
	},
	[887]
	{
		.description = ""
	},
	[888]
	{
		.description = ""
	},
	[889]
	{
		.description = ""
	},
	[890]
	{
		.description = ""
	},
	[891]
	{
		.description = ""
	},
	[892]
	{
		.description = ""
	},
	[893]
	{
		.description = ""
	},
	[894]
	{
		.description = ""
	},
	[895]
	{
		.description = ""
	},
	[896]
	{
		.description = ""
	},
	[897]
	{
		.description = ""
	},
	[898]
	{
		.description = ""
	},
	[899]
	{
		.description = ""
	},
	[900]
	{
		.description = ""
	},
	[901]
	{
		.description = ""
	},
	[902]
	{
		.description = ""
	},
	[903]
	{
		.description = ""
	},
	[904]
	{
		.description = ""
	},
	[905]
	{
		.description = ""
	},
	[906]
	{
		.description = ""
	},
	[907]
	{
		.description = ""
	},
	[908]
	{
		.description = ""
	},
	[909]
	{
		.description = ""
	},
	[910]
	{
		.description = ""
	},
	[911]
	{
		.description = ""
	},
	[912]
	{
		.description = ""
	},
	[913]
	{
		.description = ""
	},
	[914]
	{
		.description = ""
	},
	[915]
	{
		.description = ""
	},
	[916]
	{
		.description = ""
	},
	[917]
	{
		.description = ""
	},
	[918]
	{
		.description = ""
	},
	[919]
	{
		.description = ""
	},
	[920]
	{
		.description = ""
	},
	[921]
	{
		.description = ""
	},
	[922]
	{
		.description = ""
	},
	[923]
	{
		.description = ""
	},
	[924]
	{
		.description = ""
	},
	[925]
	{
		.description = ""
	},
	[926]
	{
		.description = ""
	},
	[927]
	{
		.description = ""
	},
	[928]
	{
		.description = ""
	},
	[929]
	{
		.description = ""
	},
	[930]
	{
		.description = ""
	},
	[931]
	{
		.description = ""
	},
	[932]
	{
		.description = ""
	},
	[933]
	{
		.description = ""
	},
	[934]
	{
		.description = ""
	},
	[935]
	{
		.description = ""
	},
	[936]
	{
		.description = ""
	},
	[937]
	{
		.description = ""
	},
	[938]
	{
		.description = ""
	},
	[939]
	{
		.description = ""
	},
	[940]
	{
		.description = ""
	},
	[941]
	{
		.description = ""
	},
	[942]
	{
		.description = ""
	},
	[943]
	{
		.description = ""
	},
	[944]
	{
		.description = ""
	},
	[945]
	{
		.description = ""
	},
	[946]
	{
		.description = ""
	},
	[947]
	{
		.description = ""
	},
	[948]
	{
		.description = ""
	},
	[949]
	{
		.description = ""
	},
	[950]
	{
		.description = ""
	},
	[951]
	{
		.description = ""
	},
	[952]
	{
		.description = ""
	},
	[953]
	{
		.description = ""
	},
	[954]
	{
		.description = ""
	},
	[955]
	{
		.description = ""
	},
	[956]
	{
		.description = ""
	},
	[957]
	{
		.description = ""
	},
	[958]
	{
		.description = ""
	},
	[959]
	{
		.description = ""
	},
	[960]
	{
		.description = ""
	},
	[961]
	{
		.description = ""
	},
	[962]
	{
		.description = ""
	},
	[963]
	{
		.description = ""
	},
	[964]
	{
		.description = ""
	},
	[965]
	{
		.description = ""
	},
	[966]
	{
		.description = ""
	},
	[967]
	{
		.description = ""
	},
	[968]
	{
		.description = ""
	},
	[969]
	{
		.description = ""
	},
	[970]
	{
		.description = ""
	},
	[971]
	{
		.description = ""
	},
	[972]
	{
		.description = ""
	},
	[973]
	{
		.description = ""
	},
	[974]
	{
		.description = ""
	},
	[975]
	{
		.description = ""
	},
	[976]
	{
		.description = ""
	},
	[977]
	{
		.description = ""
	},
	[978]
	{
		.description = ""
	},
	[979]
	{
		.description = ""
	},
	[980]
	{
		.description = ""
	},
	[981]
	{
		.description = ""
	},
	[982]
	{
		.description = ""
	},
	[983]
	{
		.description = ""
	},
	[984]
	{
		.description = ""
	},
	[985]
	{
		.description = ""
	},
	[986]
	{
		.description = ""
	},
	[987]
	{
		.description = ""
	},
	[988]
	{
		.description = ""
	},
	[989]
	{
		.description = ""
	},
	[990]
	{
		.description = ""
	},
	[991]
	{
		.description = ""
	},
	[992]
	{
		.description = ""
	},
	[993]
	{
		.description = ""
	},
	[994]
	{
		.description = ""
	},
	[995]
	{
		.description = ""
	},
	[996]
	{
		.description = ""
	},
	[997]
	{
		.description = ""
	},
	[998]
	{
		.description = ""
	},
	[999]
	{
		.description = ""
	},
	[1000]
	{
		.description = ""
	},
	[1001]
	{
		.description = ""
	},
	[1002]
	{
		.description = ""
	},
	[1003]
	{
		.description = ""
	},
	[1004]
	{
		.description = ""
	},
	[1005]
	{
		.description = ""
	},
	[1006]
	{
		.description = ""
	},
	[1007]
	{
		.description = ""
	},
	[1008]
	{
		.description = ""
	},
	[1009]
	{
		.description = ""
	},
	[1010]
	{
		.description = ""
	},
	[1011]
	{
		.description = ""
	},
	[1012]
	{
		.description = ""
	},
	[1013]
	{
		.description = ""
	},
	[1014]
	{
		.description = ""
	},
	[1015]
	{
		.description = ""
	},
	[1016]
	{
		.description = ""
	},
	[1017]
	{
		.description = ""
	},
	[1018]
	{
		.description = ""
	},
	[1019]
	{
		.description = ""
	},
	[1020]
	{
		.description = ""
	},
	[1021]
	{
		.description = ""
	},
	[1022]
	{
		.description = ""
	},
	[1023]
	{
		.description = ""
	},
	[1024]
	{
		.description = ""
	},
	[1025]
	{
		.description = ""
	},
	[1026]
	{
		.description = ""
	},
	[1027]
	{
		.description = ""
	},
	[1028]
	{
		.description = ""
	},
	[1029]
	{
		.description = ""
	},
	[1030]
	{
		.description = ""
	},
	[1031]
	{
		.description = ""
	},
	[1032]
	{
		.description = ""
	},
	[1033]
	{
		.description = ""
	},
	[1034]
	{
		.description = ""
	},
	[1035]
	{
		.description = ""
	},
	[1036]
	{
		.description = ""
	},
	[1037]
	{
		.description = ""
	},
	[1038]
	{
		.description = ""
	},
	[1039]
	{
		.description = ""
	},
	[1040]
	{
		.description = ""
	},
	[1041]
	{
		.description = ""
	},
	[1042]
	{
		.description = ""
	},
	[1043]
	{
		.description = ""
	},
	[1044]
	{
		.description = ""
	},
	[1045]
	{
		.description = ""
	},
	[1046]
	{
		.description = ""
	},
	[1047]
	{
		.description = ""
	},
	[1048]
	{
		.description = ""
	},
	[1049]
	{
		.description = ""
	},
	[1050]
	{
		.description = ""
	},
	[1051]
	{
		.description = ""
	},
	[1052]
	{
		.description = ""
	},
	[1053]
	{
		.description = ""
	},
	[1054]
	{
		.description = ""
	},
	[1055]
	{
		.description = ""
	},
	[1056]
	{
		.description = ""
	},
	[1057]
	{
		.description = ""
	},
	[1058]
	{
		.description = ""
	},
	[1059]
	{
		.description = ""
	},
	[1060]
	{
		.description = ""
	},
	[1061]
	{
		.description = ""
	},
	[1062]
	{
		.description = ""
	},
	[1063]
	{
		.description = ""
	},
	[1064]
	{
		.description = ""
	},
	[1065]
	{
		.description = ""
	},
	[1066]
	{
		.description = ""
	},
	[1067]
	{
		.description = ""
	},
	[1068]
	{
		.description = ""
	},
	[1069]
	{
		.description = ""
	},
	[1070]
	{
		.description = ""
	},
	[1071]
	{
		.description = ""
	},
	[1072]
	{
		.description = ""
	},
	[1073]
	{
		.description = ""
	},
	[1074]
	{
		.description = ""
	},
	[1075]
	{
		.description = ""
	},
	[1076]
	{
		.description = ""
	},
	[1077]
	{
		.description = ""
	},
	[1078]
	{
		.description = ""
	},
	[1079]
	{
		.description = ""
	},
	[1080]
	{
		.description = ""
	},
	[1081]
	{
		.description = ""
	},
	[1082]
	{
		.description = ""
	},
	[1083]
	{
		.description = ""
	},
	[1084]
	{
		.description = ""
	},
	[1085]
	{
		.description = ""
	},
	[1086]
	{
		.description = ""
	},
	[1087]
	{
		.description = ""
	},
	[1088]
	{
		.description = ""
	},
	[1089]
	{
		.description = ""
	},
	[1090]
	{
		.description = ""
	},
	[1091]
	{
		.description = ""
	},
	[1092]
	{
		.description = ""
	},
	[1093]
	{
		.description = ""
	},
	[1094]
	{
		.description = ""
	},
	[1095]
	{
		.description = ""
	},
	[1096]
	{
		.description = ""
	},
	[1097]
	{
		.description = ""
	},
	[1098]
	{
		.description = ""
	},
	[1099]
	{
		.description = ""
	},
	[1100]
	{
		.description = ""
	},
	[1101]
	{
		.description = ""
	},
	[1102]
	{
		.description = ""
	},
	[1103]
	{
		.description = ""
	},
	[1104]
	{
		.description = ""
	},
	[1105]
	{
		.description = ""
	},
	[1106]
	{
		.description = ""
	},
	[1107]
	{
		.description = ""
	},
	[1108]
	{
		.description = ""
	},
	[1109]
	{
		.description = ""
	},
	[1110]
	{
		.description = ""
	},
	[1111]
	{
		.description = ""
	},
	[1112]
	{
		.description = ""
	},
	[1113]
	{
		.description = ""
	},
	[1114]
	{
		.description = ""
	},
	[1115]
	{
		.description = ""
	},
	[1116]
	{
		.description = ""
	},
	[1117]
	{
		.description = ""
	},
	[1118]
	{
		.description = ""
	},
	[1119]
	{
		.description = ""
	},
	[1120]
	{
		.description = ""
	},
	[1121]
	{
		.description = ""
	},
	[1122]
	{
		.description = ""
	},
	[1123]
	{
		.description = ""
	},
	[1124]
	{
		.description = ""
	},
	[1125]
	{
		.description = ""
	},
	[1126]
	{
		.description = ""
	},
	[1127]
	{
		.description = ""
	},
	[1128]
	{
		.description = ""
	},
	[1129]
	{
		.description = ""
	},
	[1130]
	{
		.description = ""
	},
	[1131]
	{
		.description = ""
	},
	[1132]
	{
		.description = ""
	},
	[1133]
	{
		.description = ""
	},
	[1134]
	{
		.description = ""
	},
	[1135]
	{
		.description = ""
	},
	[1136]
	{
		.description = ""
	},
	[1137]
	{
		.description = ""
	},
	[1138]
	{
		.description = ""
	},
	[1139]
	{
		.description = ""
	},
	[1140]
	{
		.description = ""
	},
	[1141]
	{
		.description = ""
	},
	[1142]
	{
		.description = ""
	},
	[1143]
	{
		.description = ""
	},
	[1144]
	{
		.description = ""
	},
	[1145]
	{
		.description = ""
	},
	[1146]
	{
		.description = ""
	},
	[1147]
	{
		.description = ""
	},
	[1148]
	{
		.description = ""
	},
	[1149]
	{
		.description = ""
	},
	[1150]
	{
		.description = ""
	},
	[1151]
	{
		.description = ""
	},
	[1152]
	{
		.description = ""
	},
	[1153]
	{
		.description = ""
	},
	[1154]
	{
		.description = ""
	},
	[1155]
	{
		.description = ""
	},
	[1156]
	{
		.description = ""
	},
	[1157]
	{
		.description = ""
	},
	[1158]
	{
		.description = ""
	},
	[1159]
	{
		.description = ""
	},
	[1160]
	{
		.description = ""
	},
	[1161]
	{
		.description = ""
	},
	[1162]
	{
		.description = ""
	},
	[1163]
	{
		.description = ""
	},
	[1164]
	{
		.description = ""
	},
	[1165]
	{
		.description = ""
	},
	[1166]
	{
		.description = ""
	},
	[1167]
	{
		.description = ""
	},
	[1168]
	{
		.description = ""
	},
	[1169]
	{
		.description = ""
	},
	[1170]
	{
		.description = ""
	},
	[1171]
	{
		.description = ""
	},
	[1172]
	{
		.description = ""
	},
	[1173]
	{
		.description = ""
	},
	[1174]
	{
		.description = ""
	},
	[1175]
	{
		.description = ""
	},
	[1176]
	{
		.description = ""
	},
	[1177]
	{
		.description = ""
	},
	[1178]
	{
		.description = ""
	},
	[1179]
	{
		.description = ""
	},
	[1180]
	{
		.description = ""
	},
	[1181]
	{
		.description = ""
	},
	[1182]
	{
		.description = ""
	},
	[1183]
	{
		.description = ""
	},
	[1184]
	{
		.description = ""
	},
	[1185]
	{
		.description = ""
	},
	[1186]
	{
		.description = ""
	},
	[1187]
	{
		.description = ""
	},
	[1188]
	{
		.description = ""
	},
	[1189]
	{
		.description = ""
	},
	[1190]
	{
		.description = ""
	},
	[1191]
	{
		.description = ""
	},
	[1192]
	{
		.description = ""
	},
	[1193]
	{
		.description = ""
	},
	[1194]
	{
		.description = ""
	},
	[1195]
	{
		.description = ""
	},
	[1196]
	{
		.description = ""
	},
	[1197]
	{
		.description = ""
	},
	[1198]
	{
		.description = ""
	},
	[1199]
	{
		.description = ""
	},
	[1200]
	{
		.description = ""
	},
	[1201]
	{
		.description = ""
	},
	[1202]
	{
		.description = ""
	},
	[1203]
	{
		.description = ""
	},
	[1204]
	{
		.description = ""
	},
	[1205]
	{
		.description = ""
	},
	[1206]
	{
		.description = ""
	},
	[1207]
	{
		.description = ""
	},
	[1208]
	{
		.description = ""
	},
	[1209]
	{
		.description = ""
	},
	[1210]
	{
		.description = ""
	},
	[1211]
	{
		.description = ""
	},
	[1212]
	{
		.description = ""
	},
	[1213]
	{
		.description = ""
	},
	[1214]
	{
		.description = ""
	},
	[1215]
	{
		.description = ""
	},
	[1216]
	{
		.description = ""
	},
	[1217]
	{
		.description = ""
	},
	[1218]
	{
		.description = ""
	},
	[1219]
	{
		.description = ""
	},
	[1220]
	{
		.description = ""
	},
	[1221]
	{
		.description = ""
	},
	[1222]
	{
		.description = ""
	},
	[1223]
	{
		.description = ""
	},
	[1224]
	{
		.description = ""
	},
	[1225]
	{
		.description = ""
	},
	[1226]
	{
		.description = ""
	},
	[1227]
	{
		.description = ""
	},
	[1228]
	{
		.description = ""
	},
	[1229]
	{
		.description = ""
	},
	[1230]
	{
		.description = ""
	},
	[1231]
	{
		.description = ""
	},
	[1232]
	{
		.description = ""
	},
	[1233]
	{
		.description = ""
	},
	[1234]
	{
		.description = ""
	},
	[1235]
	{
		.description = ""
	},
	[1236]
	{
		.description = ""
	},
	[1237]
	{
		.description = ""
	},
	[1238]
	{
		.description = ""
	},
	[1239]
	{
		.description = ""
	},
	[1240]
	{
		.description = ""
	},
	[1241]
	{
		.description = ""
	},
	[1242]
	{
		.description = ""
	},
	[1243]
	{
		.description = ""
	},
	[1244]
	{
		.description = ""
	},
	[1245]
	{
		.description = ""
	},
	[1246]
	{
		.description = ""
	},
	[1247]
	{
		.description = ""
	},
	[1248]
	{
		.description = ""
	},
	[1249]
	{
		.description = ""
	},
	[1250]
	{
		.description = ""
	},
	[1251]
	{
		.description = ""
	},
	[1252]
	{
		.description = ""
	},
	[1253]
	{
		.description = ""
	},
	[1254]
	{
		.description = ""
	},
	[1255]
	{
		.description = ""
	},
	[1256]
	{
		.description = ""
	},
	[1257]
	{
		.description = ""
	},
	[1258]
	{
		.description = ""
	},
	[1259]
	{
		.description = ""
	},
	[1260]
	{
		.description = ""
	},
	[1261]
	{
		.description = ""
	},
	[1262]
	{
		.description = ""
	},
	[1263]
	{
		.description = ""
	},
	[1264]
	{
		.description = ""
	},
	[1265]
	{
		.description = ""
	},
	[1266]
	{
		.description = ""
	},
	[1267]
	{
		.description = ""
	},
	[1268]
	{
		.description = ""
	},
	[1269]
	{
		.description = ""
	},
	[1270]
	{
		.description = ""
	},
	[1271]
	{
		.description = ""
	},
	[1272]
	{
		.description = ""
	},
	[1273]
	{
		.description = ""
	},
	[1274]
	{
		.description = ""
	},
	[1275]
	{
		.description = ""
	},
	[1276]
	{
		.description = ""
	},
	[1277]
	{
		.description = ""
	},
	[1278]
	{
		.description = ""
	},
	[1279]
	{
		.description = ""
	},
	[1280]
	{
		.description = ""
	},
	[1281]
	{
		.description = ""
	},
	[1282]
	{
		.description = ""
	},
	[1283]
	{
		.description = ""
	},
	[1284]
	{
		.description = ""
	},
	[1285]
	{
		.description = ""
	},
	[1286]
	{
		.description = ""
	},
	[1287]
	{
		.description = ""
	},
	[1288]
	{
		.description = ""
	},
	[1289]
	{
		.description = ""
	},
	[1290]
	{
		.description = ""
	},
	[1291]
	{
		.description = ""
	},
	[1292]
	{
		.description = ""
	},
	[1293]
	{
		.description = ""
	},
	[1294]
	{
		.description = ""
	},
	[1295]
	{
		.description = ""
	},
	[1296]
	{
		.description = ""
	},
	[1297]
	{
		.description = ""
	},
	[1298]
	{
		.description = ""
	},
	[1299]
	{
		.description = ""
	},
	[1300]
	{
		.description = ""
	},
	[1301]
	{
		.description = ""
	},
	[1302]
	{
		.description = ""
	},
	[1303]
	{
		.description = ""
	},
	[1304]
	{
		.description = ""
	},
	[1305]
	{
		.description = ""
	},
	[1306]
	{
		.description = ""
	},
	[1307]
	{
		.description = ""
	},
	[1308]
	{
		.description = ""
	},
	[1309]
	{
		.description = ""
	},
	[1310]
	{
		.description = ""
	},
	[1311]
	{
		.description = ""
	},
	[1312]
	{
		.description = ""
	},
	[1313]
	{
		.description = ""
	},
	[1314]
	{
		.description = ""
	},
	[1315]
	{
		.description = ""
	},
	[1316]
	{
		.description = ""
	},
	[1317]
	{
		.description = ""
	},
	[1318]
	{
		.description = ""
	},
	[1319]
	{
		.description = ""
	},
	[1320]
	{
		.description = ""
	},
};