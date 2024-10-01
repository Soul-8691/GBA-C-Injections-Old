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
	"graphics/Resize/gCardGraphicsInsectMonsterToken.gbapal"
);

const struct CardStats gCardStats [] =
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
	}
};

const struct CardName gCardNames [] =
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
	}
};