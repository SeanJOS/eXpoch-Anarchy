/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
#include "infiSTAR_AdminMenu.hpp"
#include "MarXet\dialog\RscMarXetDefines.hpp"
#include "MarXet\dialog\RscMarXetDialog.hpp"
class CfgFunctions
{
	#include "ExAdClient\CfgFunctions.cpp"
};

class RscTitles
{
	#include "ExAdClient\RscTitles.cpp"
};

class CfgMarXet
{
    class Database
    {
        /*
            The time in DAYS that a MarXet listing will sit in the database before it gets restricted.
            Restricted means that the seller's UID gets set to 0 so it's no longer owned by the player who sold it
            This keeps players from using MarXet as a long term storage device.
            This value must be LESS THAN the deleteTime
            Set this to -1 to disable
        */
        restrictTime = 7;

        /*
            The time in DAYS that a MarXet listing will stay in the database before it gets deleted
            This value only works if it's GREATER THAN the restrictTime.
            The listing must be restricted first before it can get deleted.
            Set this to -1 to disable
        */
        deleteTime = 10;
    };

    class Settings
    {
        /*
            Setting this to 1 will cause vehicles to spawn on preplaced Helipads.
            By default this option is 0 because servers will have to manually place the helipads
            Default (0) uses Exile's default position function
        */
        staticVehicleSpawning = 0;
    };
};

class CfgeXpoch
{
	serverName = "eXpoch Beta Test";
	
	serverRulez = "<t align='left'>TeamSpeak:</t><t align='right' color='#3fd4fc'>TS3.DonkeyPunch.INFO</t><br/><t align='left'>Website:</t><t align='right' color='#3fd4fc'>DONKEYPUNCH.INFO</t><br/><t align='left'>Key Legend</t><t align='right' color='#3fd4fc'>Hit 8</t><br/><t align='center' color='#fa2424'>Dem Rulez</t><br/><br/><t align='center'>Do NOT Glitch/Exploit/Hack(bans)</t><br/><t align='center'>Douchebaggery is BANNABLE!</t><br/><t align='center'>Do NOT Act a Fool in Side nor VOICE</t><br/><t align='center'>Disrespect is a big NONO</t><br/><t align='center'>PvP and PvE Server. Kill or be killed</t><br/><t align='center'>Use Teamspeak for Admin HELP</t><br/><t align='center'>Admins are there for help not to BLAME</t><br/><t align='center'>Safezones are meant to be safe</t><br/><t align='center'>Thats why there is ONLY 1 here!</t><br/><t align='center'>Do not build on Airfields/Military</t><br/>";
	
	serverKeyz = "<t align='left'>TeamSpeak:</t><t align='right' color='#3fd4fc'>TS3.DonkeyPunch.INFO</t><br/><t align='left'>Website:</t><t align='right' color='#3fd4fc'>DONKEYPUNCH.INFO</t><br/><br/><t align='left'>Function</t><t align='right'>Key</t><br/><t align='center' color='#fa2424'>Custom</t><br/><t align='left'>Stats Toggle</t><t align='right' color='#3fd4fc'>Shift + ~</t><br/><t align='left'>Compass Toggle</t><t align='right' color='#3fd4fc'>ALT + ~</t><br/><t align='left'>Server Rulez</t><t align='right' color='#3fd4fc'>7</t><br/><t align='left'>HUD Toggle</t><t align='right' color='#3fd4fc'>9</t><br/><t align='center' color='#fa2424'>Exile Default</t><br/><t align='left'>Primary Weapon</t><t align='right' color='#3fd4fc'>1</t><br/><t align='left'>Secondary Weapon</t><t align='right' color='#3fd4fc'>2</t><br/><t align='left'>Axe/Launcher</t><t align='right' color='#3fd4fc'>3</t><br/><t align='left'>Holster Weapon</t><t align='right' color='#3fd4fc'>4</t><br/><t align='left'>Earplugs</t><t align='right' color='#3fd4fc'>5</t><br/><t align='left'>XM8</t><t align='right' color='#3fd4fc'>6</t><br/><t align='left'>AutoRun</t><t align='right' color='#3fd4fc'>0</t><br/>";
	
	
	//Tools
	CuttingTools[] = 
	{
		"Exile_Item_Knife",
		"Exile_Item_Handsaw",
		"Exile_Item_Grinder",
		"Exile_Melee_Axe",
		"MeleeSword",
		"Hatchet",
		"CrudeHatchet"
	};
	
	//Weapons Jamming
	StopWeaponsJamming[] =
	{
		//fill in melee weapons here
		"Exile_Melee_Axe",
		"Exile_Melee_Shovel",
		"Exile_Melee_SledgeHammer",
		"MeleeSledge",
		"MeleeSword",
		"MeleeMaul",
		"MeleeRod",
		"Hatchet",
		"CrudeHatchet",
		"Plunger",
		"WoodClub"
	};
	
	//Add more masks that you would like to drop oxygen and add breathing sounds
	MasksRequiringOxygenAndSounds[] =
	{
		"Exile_HeadGear_GasMask"
	};
	
	//Add more masks that you would like to stop the radiation poisoning of Exile
	RadiationProtectionMasks[] =
	{
		"Exile_HeadGear_GasMask"
	};
	
	//Toasts
	ToastDeleteDelay = 10; //  set this to the amount of delay in deleting the toast off the screen. Exile default was 5.
	
	//Roulette Thread ON(1) / OFF(0)
	ThreadRussianRouletteON = 0;
	
	//Safes and container POPTAB Storage    Default Exile: MaxLoad * 10;
	ContainerMaxPopTabsMultiplier = 40;
};
class CfgeXpochLoadouts
{
	assignedItems[] = {"ItemCompass","ItemMap","Exile_Item_XM8","ItemRadio"};
	baseItems[] = {"Exile_Item_PlasticBottleFreshWater","rzinfection_antivirus_pills","FirstAidKit","FirstAidKit","rzinfection_antivirus_injector"};
	primaryMagazines[] = {0,1,1,1,2,2,2,2,3,3,4};
	handgunMagazines[] = {1,2,2,2,2,3,3,3,3,3,3};
	secondaryMagazines[] = {0,0,0,0,1,1,1,1,1,1,1};
	maleCategories[] = 
	{
		"MaleUniforms",
		"MaleDiving",
		"HeadGear",
		"Glasses",
		"MaleVests",
		"Backpacks",
		"AssaultRifles",
		"SubMachineGuns",
		"LightMachineGuns",
		"SniperRifles",
		"Shotguns",
		"Pistols",
		"MeleeWeapons",
		"Launchers",
		"OpticAttachments",
		"PointerAttachments",
		"MuzzleAttachments",
		"BipodAttachments"
	};
	femaleCategories[] = 
	{	
		"FemaleUniforms",
		"FemaleDiving",
		"HeadGear",
		"Glasses",
		"FemaleVests",
		"Backpacks",
		"AssaultRifles",
		"SubMachineGuns",
		"LightMachineGuns",
		"SniperRifles",
		"Shotguns",
		"Pistols",
		"MeleeWeapons",
		"Launchers",
		"OpticAttachments",
		"PointerAttachments",
		"MuzzleAttachments",
		"BipodAttachments"	
	};
	AttachmentCategories[] =
	{
		"OpticAttachments",
		"PointerAttachments",
		"MuzzleAttachments",
		"BipodAttachments"
	};
};
class CfgeXpochZombies
{
	ZombiesON = true; //Client Zombie Spawner Toggle
	ZombieSpawnLoopDelayMin = 30;
	ZombieSpawnLoopDelayMax = 90;
	
	GlowingEyesChance = 15;
	ZombiePlayerDamage = 0.095;
	ZombieAnimalDamage = 0.25;
	ZombiesStartingHealth = 0.8;
	
	RoamingZombiesON = true;
	ZombieFeedOnCorpses = true;
	
	PlayerInfectionChance = 5;
	PlayerInfectedRate = 0.05;
	
	MaxSpawnDistanceFromPlayer = 150;
	MinSpawnDistanceFromPlayer = 40;
	
	RoadKillBonus = 10;
	CQBDistance = 10;
	CQBBonus = 20;
	
	//ExileZ Explosive Zeds
	ExplosiveZombies = true;
	ExplosiveZombiesRatio = 2;
	ExplosiveZombiesWarning = "Tick-Tock MOFO!";
	ExplosiveZombiesDelay = 4;
	ExplosiveZombiesType = "GRENADE";
	ExplosiveZombiesRespect = 50;
	
	//Epoch Sapper Gas
	NoxiousGasZombies = true;
	NoxiousGasZombiesRatio = 2;
	NoxiousGasZombiesWarning = "This Aint Good...";
	NoxiousGasZombiesRespect = 50;
	NoxiousGasDamageToPlayer = 0.20;
	NoxiousGasDistance = 15;
	
	//Hordes
	MaxZedsInHordes = 20;
	RandomMoneyOnZombieHordes = 12;
	MaxSpawnDistanceHordes = 300;
	MinSpawnDistanceHordes = 125;
	ZombieRespectHordes = 7;
	ZombieClassesHordes[] =
	{
		{"WalkerSoldiers", 25},
		{"SlowSoldiers", 25},
		{"MediumSoldiers", 35},
		{"FastSoldiers", 15}
	};
	VestsHordes[] =
	{
		"V_HarnessOGL_brn",
		"V_HarnessOGL_gry",
		"V_HarnessO_brn",
		"V_HarnessO_gry",
		"V_HarnessOSpec_brn",
		"V_HarnessOSpec_gry",
		"V_TacVest_blk",
		"V_TacVest_blk_POLICE",
		"V_TacVest_brn",
		"V_TacVest_camo",
		"V_TacVest_khk",
		"V_TacVest_oli",
		"V_TacVestCamo_khk",
		"V_TacVestIR_blk",
		"V_Rangemaster_belt"
	};
	LootHordes[] =
	{
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"10Rnd_338_Mag",
		"130Rnd_338_Mag",
		"7Rnd_408_Mag",
		"6Rnd_45ACP_Cylinder",
		"9Rnd_45ACP_Mag",
		"11Rnd_45ACP_Mag",
		"30Rnd_45ACP_Mag_SMG_01",
		"30Rnd_45ACP_Mag_SMG_01_Tracer_Green",
		"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
		"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
		"20Rnd_556x45_UW_mag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag_green",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_Tracer_Green",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Yellow",
		"30Rnd_65x39_caseless_green",
		"30Rnd_65x39_caseless_green_mag_Tracer",
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"100Rnd_65x39_caseless_mag",
		"100Rnd_65x39_caseless_mag_Tracer",
		"200Rnd_65x39_cased_Box",
		"200Rnd_65x39_cased_Box_Tracer",
		"20Rnd_762x51_Mag",
		"10Rnd_762x54_Mag",
		"150Rnd_762x54_Box",
		"150Rnd_762x54_Box_Tracer",
		"16Rnd_9x21_Mag",
		"30Rnd_9x21_Mag",
		"10Rnd_93x64_DMR_05_Mag",
		"150Rnd_93x64_Mag",
		"5Rnd_127x108_Mag",
		"5Rnd_127x108_APDS_Mag",
		"10Rnd_127x54_Mag",
		"6Rnd_GreenSignal_F",
		"eXpoch_ItemAluminumBar",
		"eXpoch_ItemHotwire",
		"eXpoch_ItemSodaRbull",
		"eXpoch_WhiskeyNoodle",
		"eXpoch_FoodMeeps",
		"eXpoch_Goldenseal",
		"eXpoch_lighter_epoch",
		"eXpoch_FoodBioMeat",
		"eXpoch_SnakeMeat_EPOCH",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"6Rnd_RedSignal_F"
	};
	
	//Cities-Towns-Villages-Capitals
	MaxZedsInTowns = 10;
	RandomMoneyOnZombieTowns = 12;
	ZombieRespectTowns = 7;
	ZombieClassesTowns[] =
	{
		{walkerCivilians,	30},
		{walkerSoldiers,	30},
		{slowCivilians,		20},
		{slowSoldiers,		20}
	};
	VestsTowns[] = 
	{
		"V_41_EPOCH"
	};
	LootTowns[] =
	{
		"Exile_Item_InstaDoc",
		"Exile_Item_Catfood",
		"Exile_Item_PlasticBottleFreshWater",
		"Exile_Item_Matches",
		"Exile_Item_DuctTape",
		"Exile_Item_CookingPot"
	};
	
	//Military areas based on the new Military Zones added to eXpoch
	MaxZedsInMilitary = 20;
	RandomMoneyOnZombieMilitary = 30;
	ZombieRespectMilitary = 15;
	ZombieClassesMilitary[] =
	{
		{"WalkerSoldiers", 50},
		{"SlowSoldiers", 44},
		{"MediumSoldiers", 5},
		{"FastSoldiers", 1}
	};
	VestsMilitary[] = 
	{
		"V_HarnessOGL_brn",
		"V_HarnessOGL_gry",
		"V_HarnessO_brn",
		"V_HarnessO_gry",
		"V_HarnessOSpec_brn",
		"V_HarnessOSpec_gry",
		"V_TacVest_blk",
		"V_TacVest_blk_POLICE",
		"V_TacVest_brn",
		"V_TacVest_camo",
		"V_TacVest_khk",
		"V_TacVest_oli",
		"V_TacVestCamo_khk",
		"V_TacVestIR_blk",
		"V_Rangemaster_belt"
	};
	LootMilitary[] =
	{
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"10Rnd_338_Mag",
		"130Rnd_338_Mag",
		"7Rnd_408_Mag",
		"6Rnd_45ACP_Cylinder",
		"9Rnd_45ACP_Mag",
		"11Rnd_45ACP_Mag",
		"30Rnd_45ACP_Mag_SMG_01",
		"30Rnd_45ACP_Mag_SMG_01_Tracer_Green",
		"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
		"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
		"20Rnd_556x45_UW_mag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag_green",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_Tracer_Green",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Yellow",
		"30Rnd_65x39_caseless_green",
		"30Rnd_65x39_caseless_green_mag_Tracer",
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"100Rnd_65x39_caseless_mag",
		"100Rnd_65x39_caseless_mag_Tracer",
		"200Rnd_65x39_cased_Box",
		"200Rnd_65x39_cased_Box_Tracer",
		"20Rnd_762x51_Mag",
		"10Rnd_762x54_Mag",
		"150Rnd_762x54_Box",
		"150Rnd_762x54_Box_Tracer",
		"16Rnd_9x21_Mag",
		"30Rnd_9x21_Mag",
		"10Rnd_93x64_DMR_05_Mag",
		"150Rnd_93x64_Mag",
		"5Rnd_127x108_Mag",
		"5Rnd_127x108_APDS_Mag",
		"10Rnd_127x54_Mag",
		"6Rnd_GreenSignal_F",
		"eXpoch_ItemAluminumBar",
		"eXpoch_ItemHotwire",
		"eXpoch_ItemSodaRbull",
		"eXpoch_WhiskeyNoodle",
		"eXpoch_FoodMeeps",
		"eXpoch_Goldenseal",
		"eXpoch_lighter_epoch",
		"eXpoch_FoodBioMeat",
		"eXpoch_SnakeMeat_EPOCH",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"Exile_Item_InstaDoc",
		"6Rnd_RedSignal_F"
	};
	
	//Territory zone settings  (enemy territory)
	MaxZedsInTerritory = 0;
	RandomMoneyOnZombieTerritory = 10;
	ZombieRespectTerritory = 5;
	ZombieClassesTerritory[] =
	{
		{"WalkerCivilians", 25},
		{"SlowCivilians", 20},
		{"MediumCivilians", 5},
		{"FastCivilians", 1},
		{"WalkerSoldiers", 15},
		{"SlowSoldiers", 10},
		{"MediumSoldiers", 5},
		{"FastSoldiers", 4},
		{"Boss", 5},
		{"Spiders", 5},
		{"Crawlers", 5}
	};
	VestsTerritory[] = 
	{
		"V_41_EPOCH"
	};
	LootTerritory[] =
	{
		"Exile_Item_InstaDoc",
		"Exile_Item_Catfood",
		"Exile_Item_PlasticBottleFreshWater",
		"Exile_Item_Matches",
		"Exile_Item_DuctTape",
		"Exile_Item_CookingPot",
		"16Rnd_9x21_Mag"
	};
	
	//Everywhere else
	MaxZedsInWilderness = 3;
	RandomMoneyOnZombieWilderness = 10;
	ZombieRespectWilderness = 5;
	ZombieClassesWilderness[] =
	{
		{"WalkerCivilians", 50},
		{"SlowCivilians", 44},
		{"MediumCivilians", 5},
		{"FastCivilians", 1}
	};
	VestsWilderness[] = 
	{
		"V_41_EPOCH"
	};
	LootWilderness[] =
	{
		"Exile_Item_InstaDoc",
		"Exile_Item_Catfood",
		"Exile_Item_PlasticBottleFreshWater",
		"Exile_Item_Matches",
		"Exile_Item_DuctTape",
		"Exile_Item_CookingPot",
		"16Rnd_9x21_Mag"
	};
	
	WalkerCivilians[] =
	{
		"RyanZombieC_man_1Walker",
		"RyanZombieC_man_polo_1_FWalker",
		"RyanZombieC_man_polo_2_FWalker",
		"RyanZombieC_man_polo_4_FWalker",
		"RyanZombieC_man_polo_5_FWalker",
		"RyanZombieC_man_polo_6_FWalker",
		"RyanZombieC_man_p_fugitive_FWalker",
		"RyanZombieC_man_w_worker_FWalker",
		"RyanZombieC_scientist_FWalker",
		"RyanZombieC_man_hunter_1_FWalker",
		"RyanZombieC_man_pilot_FWalker",
		"RyanZombieC_journalist_FWalker",
		"RyanZombieC_OrestesWalker",
		"RyanZombieC_NikosWalker",
		"RyanZombie15walker",
		"RyanZombie16walker",
		"RyanZombie17walker",
		"RyanZombie18walker",
		"RyanZombie19walker",
		"RyanZombie20walker",
		"RyanZombie21walker",
		"RyanZombie22walker",
		"RyanZombie23walker",
		"RyanZombie24walker",
		"RyanZombie25walker",
		"RyanZombie26walker",
		"RyanZombie27walker",
		"RyanZombie28walker",
		"RyanZombie29walker",
		"RyanZombie30walker",
		"RyanZombie31walker",
		"RyanZombie32walker"
	};
	
	SlowCivilians[] =
	{
		"RyanZombieC_man_1slow",
		"RyanZombieC_man_polo_1_Fslow",
		"RyanZombieC_man_polo_2_Fslow",
		"RyanZombieC_man_polo_4_Fslow",
		"RyanZombieC_man_polo_5_Fslow",
		"RyanZombieC_man_polo_6_Fslow",
		"RyanZombieC_man_p_fugitive_Fslow",
		"RyanZombieC_man_w_worker_Fslow",
		"RyanZombieC_scientist_Fslow",
		"RyanZombieC_man_hunter_1_Fslow",
		"RyanZombieC_man_pilot_Fslow",
		"RyanZombieC_journalist_Fslow",
		"RyanZombieC_Orestesslow",
		"RyanZombieC_Nikosslow",
		"RyanZombie15slow",
		"RyanZombie16slow",
		"RyanZombie17slow",
		"RyanZombie18slow",
		"RyanZombie19slow",
		"RyanZombie20slow",
		"RyanZombie21slow",
		"RyanZombie22slow",
		"RyanZombie23slow",
		"RyanZombie24slow",
		"RyanZombie25slow",
		"RyanZombie26slow",
		"RyanZombie27slow",
		"RyanZombie28slow",
		"RyanZombie29slow",
		"RyanZombie30slow",
		"RyanZombie31slow",
		"RyanZombie32slow"
	};
	
	MediumCivilians[] =
	{
		"RyanZombieC_man_1medium",
		"RyanZombieC_man_polo_1_Fmedium",
		"RyanZombieC_man_polo_2_Fmedium",
		"RyanZombieC_man_polo_4_Fmedium",
		"RyanZombieC_man_polo_5_Fmedium",
		"RyanZombieC_man_polo_6_Fmedium",
		"RyanZombieC_man_p_fugitive_Fmedium",
		"RyanZombieC_man_w_worker_Fmedium",
		"RyanZombieC_scientist_Fmedium",
		"RyanZombieC_man_hunter_1_Fmedium",
		"RyanZombieC_man_pilot_Fmedium",
		"RyanZombieC_journalist_Fmedium",
		"RyanZombieC_Orestesmedium",
		"RyanZombieC_Nikosmedium",
		"RyanZombie15medium",
		"RyanZombie16medium",
		"RyanZombie17medium",
		"RyanZombie18medium",
		"RyanZombie19medium",
		"RyanZombie20medium",
		"RyanZombie21medium",
		"RyanZombie22medium",
		"RyanZombie23medium",
		"RyanZombie24medium",
		"RyanZombie25medium",
		"RyanZombie26medium",
		"RyanZombie27medium",
		"RyanZombie28medium",
		"RyanZombie29medium",
		"RyanZombie30medium",
		"RyanZombie31medium",
		"RyanZombie32medium"
	};
	
	FastCivilians[] =
	{
		"RyanZombieC_man_1",
		"RyanZombieC_man_polo_1_F",
		"RyanZombieC_man_polo_2_F",
		"RyanZombieC_man_polo_4_F",
		"RyanZombieC_man_polo_5_F",
		"RyanZombieC_man_polo_6_F",
		"RyanZombieC_man_p_fugitive_F",
		"RyanZombieC_man_w_worker_F",
		"RyanZombieC_scientist_F",
		"RyanZombieC_man_hunter_1_F",
		"RyanZombieC_man_pilot_F",
		"RyanZombieC_journalist_F",
		"RyanZombieC_Orestes",
		"RyanZombieC_Nikos",
		"RyanZombie15",
		"RyanZombie16",
		"RyanZombie17",
		"RyanZombie18",
		"RyanZombie19",
		"RyanZombie20",
		"RyanZombie21",
		"RyanZombie22",
		"RyanZombie23",
		"RyanZombie24",
		"RyanZombie25",
		"RyanZombie26",
		"RyanZombie27",
		"RyanZombie28",
		"RyanZombie29",
		"RyanZombie30",
		"RyanZombie31",
		"RyanZombie32"
	};
	
	WalkerSoldiers[] =
	{
		"RyanZombieB_Soldier_02_fWalker",
		"RyanZombieB_Soldier_02_f_1Walker",
		"RyanZombieB_Soldier_02_f_1_1Walker",
		"RyanZombieB_Soldier_03_fWalker",
		"RyanZombieB_Soldier_03_f_1Walker",
		"RyanZombieB_Soldier_03_f_1_1Walker",
		"RyanZombieB_Soldier_04_fWalker",
		"RyanZombieB_Soldier_04_f_1Walker",
		"RyanZombieB_Soldier_04_f_1_1Walker",
		"RyanZombieB_Soldier_lite_FWalker",
		"RyanZombieB_Soldier_lite_F_1Walker"
	};
	
	SlowSoldiers[] = 
	{
		"RyanZombieB_Soldier_02_fslow",
		"RyanZombieB_Soldier_02_f_1slow",
		"RyanZombieB_Soldier_02_f_1_1slow",
		"RyanZombieB_Soldier_03_fslow",
		"RyanZombieB_Soldier_03_f_1slow",
		"RyanZombieB_Soldier_03_f_1_1slow",
		"RyanZombieB_Soldier_04_fslow",
		"RyanZombieB_Soldier_04_f_1slow",
		"RyanZombieB_Soldier_04_f_1_1slow",
		"RyanZombieB_Soldier_lite_Fslow",
		"RyanZombieB_Soldier_lite_F_1slow"
	};
	
	MediumSoldiers[] = 
	{
		"RyanZombieB_Soldier_02_fmedium",
		"RyanZombieB_Soldier_02_f_1medium",
		"RyanZombieB_Soldier_02_f_1_1medium",
		"RyanZombieB_Soldier_03_fmedium",
		"RyanZombieB_Soldier_03_f_1medium",
		"RyanZombieB_Soldier_03_f_1_1medium",
		"RyanZombieB_Soldier_04_fmedium",
		"RyanZombieB_Soldier_04_f_1medium",
		"RyanZombieB_Soldier_04_f_1_1medium",
		"RyanZombieB_Soldier_lite_Fmedium",
		"RyanZombieB_Soldier_lite_F_1medium"
	};
	
	FastSoldiers[] =
	{
		"RyanZombieB_Soldier_02_f",
		"RyanZombieB_Soldier_02_f_1",
		"RyanZombieB_Soldier_02_f_1_1",
		"RyanZombieB_Soldier_03_f",
		"RyanZombieB_Soldier_03_f_1",
		"RyanZombieB_Soldier_03_f_1_1",
		"RyanZombieB_Soldier_04_f",
		"RyanZombieB_Soldier_04_f_1",
		"RyanZombieB_Soldier_04_f_1_1",
		"RyanZombieB_Soldier_lite_F",
		"RyanZombieB_Soldier_lite_F_1"
	};
	
	Boss[] =
	{
		"RyanZombieboss1",
		"RyanZombieboss2",
		"RyanZombieboss3",
		"RyanZombieboss4",
		"RyanZombieboss5",
		"RyanZombieboss6",
		"RyanZombieboss7",
		"RyanZombieboss8",
		"RyanZombieboss9",
		"RyanZombieboss10",
		"RyanZombieboss11",
		"RyanZombieboss12",
		"RyanZombieboss13",
		"RyanZombieboss14",
		"RyanZombieboss15",
		"RyanZombieboss16",
		"RyanZombieboss17",
		"RyanZombieboss18",
		"RyanZombieboss19",
		"RyanZombieboss20",
		"RyanZombieboss21",
		"RyanZombieboss22",
		"RyanZombieboss23",
		"RyanZombieboss24",
		"RyanZombieboss25",
		"RyanZombieboss26",
		"RyanZombieboss27",
		"RyanZombieboss28",
		"RyanZombieboss29",
		"RyanZombieboss30",
		"RyanZombieboss31",
		"RyanZombieboss32"
	};
	
	Spiders[] =
	{
		"RyanZombieSpider1",
		"RyanZombieSpider2",
		"RyanZombieSpider3",
		"RyanZombieSpider4",
		"RyanZombieSpider5",
		"RyanZombieSpider6",
		"RyanZombieSpider7",
		"RyanZombieSpider8",
		"RyanZombieSpider9",
		"RyanZombieSpider10",
		"RyanZombieSpider11",
		"RyanZombieSpider12",
		"RyanZombieSpider13",
		"RyanZombieSpider14",
		"RyanZombieSpider15",
		"RyanZombieSpider16",
		"RyanZombieSpider17",
		"RyanZombieSpider18",
		"RyanZombieSpider19",
		"RyanZombieSpider20",
		"RyanZombieSpider21",
		"RyanZombieSpider22",
		"RyanZombieSpider23",
		"RyanZombieSpider24",
		"RyanZombieSpider25",
		"RyanZombieSpider26",
		"RyanZombieSpider27",
		"RyanZombieSpider28",
		"RyanZombieSpider29",
		"RyanZombieSpider30",
		"RyanZombieSpider31",
		"RyanZombieSpider32"
	};
	
	Crawlers[] =
	{
		"RyanZombieCrawler1",
		"RyanZombieCrawler2",
		"RyanZombieCrawler3",
		"RyanZombieCrawler4",
		"RyanZombieCrawler5",
		"RyanZombieCrawler6",
		"RyanZombieCrawler7",
		"RyanZombieCrawler8",
		"RyanZombieCrawler9",
		"RyanZombieCrawler10",
		"RyanZombieCrawler11",
		"RyanZombieCrawler12",
		"RyanZombieCrawler13",
		"RyanZombieCrawler14",
		"RyanZombieCrawler15",
		"RyanZombieCrawler16",
		"RyanZombieCrawler17",
		"RyanZombieCrawler18",
		"RyanZombieCrawler19",
		"RyanZombieCrawler20",
		"RyanZombieCrawler21",
		"RyanZombieCrawler22",
		"RyanZombieCrawler23",
		"RyanZombieCrawler24",
		"RyanZombieCrawler25",
		"RyanZombieCrawler26",
		"RyanZombieCrawler27",
		"RyanZombieCrawler28",
		"RyanZombieCrawler29",
		"RyanZombieCrawler30",
		"RyanZombieCrawler31",
		"RyanZombieCrawler32"
	};
	
	//RZInfection is persistent
	//Balanced for pleasing gameplay
	infectedDamage = 0.025; 	//Use Multiples of 0.025 as 0.1 means damage every loop...HARDCORE
};
class CfgeXpochDMSRandomAI
{
	DMSRandomAION = true; //Client Random AI Spawner Toggle
	
	DMSRandomAISpawnLoopDelayMin = 600;
	DMSRandomAISpawnLoopDelayMax = 900;
		
	MaxSpawnDistanceFromPlayer = 250;
	MinSpawnDistanceFromPlayer = 100;
	
	//Player Rank determines AI Difficulty Settings - "random","hardcore","difficult","moderate", or "easy"
	BanditLowRankAIDifficulty = "easy";		//Player Rank = Bandit Low( 0 to -BlackMarket) and results in "easy" AI
	BanditMiddleRankAIDifficulty = "moderate";
	BanditFullRankAIDifficulty = "hardcore";
	
	HeroLowRankAIDifficulty = "easy";		//Player Rank = Hero Low( 0 to BlackMarket) and results in "easy" AI
	HeroMiddleRankAIDifficulty = "moderate";
	HeroFullRankAIDifficulty = "hardcore";	//Player Rank = Hero Full( Hero +) and results in "hardcore" AI
	
	//These Numbers determine the min and max of a group to spawn on the player
	//Cities-Towns-Villages-Capitals
	PlayerMaxRandomAIInTowns = 3;
	PlayerMinRandomAIInTowns = 1;
	AITypeInTowns = "random";
	
	//Military areas based on the new Military Zones added to eXpoch
	PlayerMaxRandomAIInMilitary = 5;
	PlayerMinRandomAIInMilitary = 2;
	AITypeInMilitary = "random";

	//Territory zone settings (enemy territory)
	PlayerMaxRandomAIInTerritory = 5;
	PlayerMinRandomAIInTerritory = 3;
	AITypeInTerritory = "random";
	
	//Everywhere else
	PlayerMaxRandomAIInWilderness = 2;
	PlayerMinRandomAIInWilderness = 0;
	AITypeInWilderness = "assault";
	
	
	//Platoon Events
	MaxSpawnDistancePlatoons = 500;
	MinSpawnDistancePlatoons = 300;
	
	MaxAIInPlatoons = 12;
	MinAIInPlatoons = 3;
	AITypeInPlatoons = "random";
};
class CfgeXpochMapping
{
	//Force Damage to class names of objects on your map. Faster destruction and some explosive FUN
	//This can be utilized for many aspects of gameplay
	MapObjectForcedDamage[] =
	{
		{"Land_Ind_TankSmall2",0.7},
		{"Land_fuel_tank_small",0.7}		
	};
	
	//Fill in the gas pumps and stations on your map in the GasStationClassNames[] array
	DisableGasStations = false;
	GasStationClassNames[] = 
	{
		"Land_A_FuelStation_Feed"
	};
	
	//Search N Replace map objects
	// {Original ClassName, New ClassName, Rotation}
	SearchNReplaceArray[] =
	{

	};
};
class CfgeXpochLooting
{
	//Edit The Loot System When Spawning in a Weapon
	NumberOfMagsWithWeapons = 1; // It takes a random of this number on each spawn
	RandomAmmoCountOn = 1; // 1 = ON, 0 = OFF      Random the clips max ammo for better experience
	
	//add more classnames of objects that arent HOUSE
	//allows you to add more objects to spawn loot around
	NewLootBuildingTypes[] = 
	{
		"Land_HelipadEmpty_F"
	};
	
	// Ambient looting system chance to spawn loot for player
	PercentChanceAmbientLootSpawn = 35;
	// Ambient looting system CUSTOM LOOT TABLE: 
	CustomAmbientLootTable = ""; // leaving this to "" = eXpoch default ambient loot table is "CivillianLowerClass"
};
class CfgeXpochMining
{
	// Percent chance of successful mining attempt
	MiningChanceSuccess = 20;
	SurfaceTypeRockMiningChanceSuccess = 10;
	
	// Possible items rewarded for mining rocks and rock walls
	Mining[] =
	{
		"eXpoch_ItemRuby",
		"eXpoch_ItemEmerald",
		"eXpoch_ItemJade",
		"eXpoch_ItemGarnet",
		"eXpoch_ItemCitrine",
		"eXpoch_ItemAmethyst",
		"eXpoch_ItemSapphire",
		"eXpoch_ItemOnyx",
		"eXpoch_ItemTopaz",
		"eXpoch_PartOreGold",
		"eXpoch_PartOreSilver",
		"eXpoch_PartOre"
	};
};
class CfgeXpochRank
{
	nameHero = "Hero";
	nameBandit = "Bandit";
	//Default rank progress is every 10,000 respect, use multiplier to modify this number. 
	rankMultiplier = 1; 		// rankMultiplier = 2; //20,000 respect per level
	
	//Set level required here
	blackmarketRank = 5; 		// heroNbanditRank = 10; (10-1=9) so the blackmarket will show items for ranks 5 through 9 but not 10 or over
	heroNbanditRank = 10; 		// This level and their stats will determine hero / bandit
	
};
class CfgeXpochTrading
{
	//waste dumps are quick payouts, full price should not apply.
	//ie. -20 would be 20% drop in total payout
	WasteDumpXRate = -20;
	
	//Blackmarket HIKE UP costs
	//ie 5 would be a 5% increase in total price
	BlackmarketXRate = 5;
	
	//Respect-Rank based trading boosts
	RankBasedTradingON = true;
	
	//	LEVEL respect, SALES +%,PURCHASES -%
	RankBasedTrading[] =
	{
		{10000, 1, -1},
		{20000, 2, -2},
		{30000, 3, -3},
		{40000, 5, -5},
		{50000, 6, -6},
		{60000, 7, -7},
		{70000, 9, -9},
		{80000, 10, -10},
		{90000, 12, -12},
		{100000, 15, -15}
	};
	
	//Non-Persistence Vehicle Claim
	WildSpawnRekeyPriceFactor = 0.75;
};
class CfgeXpochCurrencies
{
	//Add anything you want to be able to use as currency PRICE is determined by the CfgExileArsenal price
	//Keep in order from highest price to lowest price or by order of what it should take first :)
	//look into other ways of accomplishing this through breaking down everything to it based
	//briefcase down to 10 - 10 gold bars
	MetalsNGems[] = 
	{
		"eXpoch_ItemBriefcaseGold100oz",
		"eXpoch_ItemGoldBar10oz",
		"eXpoch_ItemGoldBar",
		"eXpoch_ItemSilverBar",
		"eXpoch_ItemCopperBar",
		"eXpoch_ItemRuby",
		"eXpoch_ItemEmerald",
		"eXpoch_ItemJade",
		"eXpoch_ItemGarnet",
		"eXpoch_ItemCitrine",
		"eXpoch_ItemAmethyst",
		"eXpoch_ItemSapphire",
		"eXpoch_ItemOnyx",
		"eXpoch_ItemTopaz"
	};
};
class CfgeXpochSecurity
{
	//if you turn this on you are turning on enhanced security
	spawnSecurityFeature = 0;//ON = 1 : OFF = 0
	//62 characters possible in each input. Case sensitive - AlphaNumeric
	accessCodeLength = 11;//Keep this the same number as the number of characters in 'generalServerCode'
	generalServerCode = "eXpochRuleZ";
	// Below is NOT implemented yet
	autoGenerateCodes = 0;//will generate a code on account creation 
	//if auto generating codes the below generalServerCode does not matter
	//IF USING THIS PASSCODE, make sure to use the proper CODE LENGTH 
	
};
class CfgeXpochBuildingUpgrades
{
	class eXpoch_Construction_StudWall
	{
		upgradeObjects[] = {"eXpoch_Construction_LargeWoodWall"};
		components[] = 
		{
			{ {2, "eXpoch_ItemPlywoodPack"} } // add nails
		};
		requiredInteractionModelGroup = "WorkBench";
		tools[] = {"Exile_Item_Handsaw"}; // add hammer required
	};
	class eXpoch_Construction_LargeWoodWall
	{
		upgradeObjects[] = 
		{
			"eXpoch_Construction_LargeCorrugatedWall", //First Upgrade Item Name
			"eXpoch_Construction_LargeWoodWallDoorway" //Second Upgrade Item Name
		};
		components[] = 
		{
			{ {2, "eXpoch_ItemCorrugatedLg"} },	//First Item Components
			{ {2, "eXpoch_PartPlankPack"} }		//Second Item Components
		};
		requiredInteractionModelGroup = "WorkBench";
		tools[] = {"Exile_Item_Handsaw"};
	};
	class eXpoch_Construction_LargeWoodWallDoorway
	{
		upgradeObjects[] = {"eXpoch_Construction_LargeWoodWallwDoor"};
		components[] = 
		{
			{ {1, "eXpoch_ItemPlywoodPack"} } 
		};
		requiredInteractionModelGroup = "WorkBench";
		tools[] = {"Exile_Item_Handsaw"};
	};
};

class CfgClans
{
	/*
		Defines the amount of pop tabs needed to register a new clan

		Default: 20,000
	*/
	registrationFee = 20000;

	/*
		A list of all characters allowed in a clan *name*

		NOTE: 
	*/
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ._-!:\\/";

	/*

		Maximum markers per clan

	*/
	maximumIcons = 20;

	/*
		Maximum number of characters on a Marker in a presistent system

		Note: MAX 255!
		
	*/
	maximumIconText = 50;

	/*

		Maximum poly markers per clan

	*/
	maximumPolys = 10;


	/* 

		Maximum points in poly
	*/
	maximumPolyNode = 10;
};

class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
	requiresConcreteMixer = 0; // Check if concrete mixer is nearby
	category = "Uncategorized";
};

class CfgCraftingRecipes
{
	#include "configs\CfgCraftingRecipes.hpp"
	#include "configs\eXpochCraftingRecipes.hpp"
	#include "configs\eXpochWScraftingrecipes.hpp"
	#include "configs\CfgCraftingRecipes_eXpoch_Rags.hpp"
};

class CfgExileArsenal
{
	#include "configs\CfgExileArsenal.hpp"
	#include "configs\CfgExileArsenal_eXpochRentAMerc.hpp"
	#include "addons\masWpnArsenal.hpp"
	#include "addons\masVehArsenal.hpp"
	#include "configs\CfgExileArsenal_eXpoch_Rags.hpp"
	#include "configs\CfgExileArsenal_ACE3.hpp"
};

class CfgXM8
{
	extraApps[] = {"ExAd_VG","ExAd_Info","ExAd_CHVD","ExAd_Journal","ExAd_Bike","ExAd_SB","ExAd_APOC_Airdrop","BRAmaRecipes","Exad_Killboard","Exad_Selfie"};
	
	class ExAd_VG 
	{
		title = "Virtual Garage";
		controlID = 50000;					//IDC:50000 -> 50015 || These need to be unique and out of range from each other 
		logo = "ExadClient\XM8\Apps\VG\Icon_VG.paa";
		onLoad = "ExAdClient\XM8\Apps\VG\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\VG\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\VG\onClose.sqf";
	};	
	class ExAd_Info 
	{
		title = "Server Info";
		controlID = 50100;					//IDC:50100 -> 50102 || These need to be unique and out of range from each other
		logo = "ExadClient\XM8\Apps\Info\Icon_SI.paa";
		onLoad = "ExAdClient\XM8\Apps\Info\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\Info\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\Info\onClose.sqf";
	};	
	class ExAd_CHVD 
	{
		title = "View Distance Settings";
		controlID = 50200;					//IDC:50200 -> 50102 || These need to be unique and out of range from each other
		config = "ExadClient\XM8\Apps\CHVD\config.sqf";
		logo = "ExadClient\XM8\Apps\CHVD\Icon_CHVD.paa";
		onLoad = "ExAdClient\XM8\Apps\CHVD\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\CHVD\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\CHVD\onClose.sqf";
	};		
	class ExAd_Journal 
	{
		title = "Journal";
		controlID = 50300;					//IDC:50300 -> 50305 || These need to be unique and out of range from each other
		config = "ExadClient\XM8\Apps\Journal\config.sqf";
		logo = "ExadClient\XM8\Apps\Journal\Icon_Journal.paa";
		onLoad = "ExAdClient\XM8\Apps\Journal\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\Journal\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\Journal\onClose.sqf";
	};
	class ExAd_Bike
	{
		title = "Deploy Bike";
		config = "ExadClient\XM8\Apps\DeployVehicle\config.sqf";
		bambiState = 0;
		vehicleClass = "Exile_Bike_MountainBike";
		recipe[] = {{"Exile_Item_ExtensionCord",-1}};
		packable = 1;
		autoCleanUp = 1;
		quickFunction = "['ExAd_Bike'] call ExAd_XM8_DV_fnc_spawnVehicle";
	};
	class ExAd_Quad
	{
		title = "Deploy Quad";
		bambiState = 0;
		vehicleClass = "Exile_Bike_QuadBike_Fia";
		recipe[] = {{"Exile_Item_ExtensionCord",1}};
		packable = 1;
		quickFunction = "['ExAd_Quad'] call ExAd_XM8_DV_fnc_spawnVehicle";
	};
	class ExAd_SB 
	{
		title = "Statsbar Settings";
		controlID = 50400;					//IDC:50400 -> 50475 || These need to be unique and out of range from each other
		logo = "ExadClient\XM8\Apps\SB_Settings\Icon_SB.paa";
		onLoad = "ExAdClient\XM8\Apps\SB_Settings\onLoad.sqf";
	};
	class ExAd_APOC_Airdrop
	{
		title = "APOC Airdrop";
		controlID = 66000;					//IDC:66000 -> 66005 || These need to be unique and out of range from each other
		logo = "ExadClient\XM8\Apps\APOC_Airdrop\apoc.paa";
		config = "ExadClient\XM8\Apps\APOC_Airdrop\config.sqf";
		onLoad = "ExAdClient\XM8\Apps\APOC_Airdrop\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\APOC_Airdrop\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\APOC_Airdrop\onClose.sqf";
	};
	class BRAmaRecipes 
	{
		controlID = 107000;
		title = "Recipes";		
		logo = "ExAdClient\XM8\Apps\BRAmaRecipes\BRAma.paa";
		config = "ExAdClient\XM8\Apps\BRAmaRecipes\config.sqf";
		onLoad = "ExAdClient\XM8\Apps\BRAmaRecipes\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\BRAmaRecipes\onOpen.sqf";
	};
	class ExAd_Killboard
	{
		title = "Killboard";
		controlID = 78000;					
		logo = "ExAdClient\XM8\Apps\Killboard\Killboard.paa";
		quickFunction = "ExileClientXM8CurrentSlide = 'apps';closeDialog 0;[] execVM 'ExAdClient\XM8\Apps\Killboard\onOpen.sqf'";
	};
	class Exad_Selfie
	{
		title = "Selfie";
		controlID = 80000;					
		logo = "ExAdClient\XM8\Apps\Selfie\Selfie.paa";
		quickFunction = "ExileClientXM8CurrentSlide = 'apps';closeDialog 0;[] execVM 'ExAdClient\XM8\Apps\Selfie\onOpen.sqf'";
	}; 
}; 

class CfgHints
{
	#include "ExAdClient\CfgHints.cpp"
};

class CfgNetworkMessages
{
	#include "configs\CfgNetworkMessages.hpp"
	#include "MarXet\CfgMarXetNetworkMessages.hpp"
	#include "ExAdClient\CfgNetworkMessages.cpp"
	class KillMessages
    {
        module = "KillMessages";
        parameters[] = {"STRING","STRING","OBJECT","OBJECT"};
    };
};

class CfgExileCustomCode 
{
	#include "configs\CfgExileCustomCode.hpp"
};
class CfgExileEnvironment
{
	#include "environment\altis.hpp"
	#include "environment\chernarus.hpp"
	#include "environment\namalsk.hpp"
	#include "environment\napf.hpp"
	#include "environment\tanoa.hpp"
	
	//Add more with the community
};
class CfgExileHUD
{
	class ShortItemNames
	{
		SmokeShell[] 						= {"WHITE", 	"SMOKE"};
		1Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		3Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};

		SmokeShellBlue[] 					= {"BLUE", 		"SMOKE"};
		1Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		3Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};

		SmokeShellGreen[] 					= {"GREEN", 	"SMOKE"};
		1Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		3Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};

		SmokeShellOrange[] 					= {"ORANGE", 	"SMOKE"};
		1Rnd_SmokeOrange_Grenade_shell[]	= {"ORANGE", 	"SMOKE"};
		3Rnd_SmokeOrange_Grenade_shell[] 	= {"ORANGE", 	"SMOKE"};

		SmokeShellPurple[] 					= {"PURPLE", 	"SMOKE"};
		1Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		3Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};

		SmokeShellRed[] 					= {"RED", 		"SMOKE"};
		1Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		3Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
				
		SmokeShellYellow[] 					= {"YELLOW", 	"SMOKE"};
		1Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		3Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
				
		UGL_FlareCIR_F[] 					= {"IR", 		"FLARE"};
		3Rnd_UGL_FlareCIR_F[] 				= {"IR", 		"FLARE"};

		UGL_FlareGreen_F[] 					= {"GREEN", 	"FLARE"};
		3Rnd_UGL_FlareGreen_F[] 			= {"GREEN", 	"FLARE"};

		UGL_FlareRed_F[] 					= {"RED", 		"FLARE"};
		3Rnd_UGL_FlareRed_F[] 				= {"RED", 		"FLARE"};

		UGL_FlareWhite_F[] 					= {"WHITE", 	"FLARE"};
		3Rnd_UGL_FlareWhite_F[] 			= {"WHITE", 	"FLARE"};

		UGL_FlareYellow_F[] 				= {"YELLOW", 	"FLARE"};
		3Rnd_UGL_FlareYellow_F[] 			= {"YELLOW", 	"FLARE"};

		Chemlight_blue[] 					= {"BLUE", 		"LIGHT"};
		Chemlight_green[] 					= {"GREEN", 	"LIGHT"};
		Chemlight_red[] 					= {"RED", 		"LIGHT"};
		Chemlight_yellow[] 					= {"YELLOW", 	"LIGHT"};

		1Rnd_HE_Grenade_shell[] 			= {"40MM"};
		3Rnd_HE_Grenade_shell[] 			= {"40MM"};

		O_IR_Grenade[] 						= {"IR"};
		I_IR_Grenade[] 						= {"IR"};
		B_IR_Grenade[] 						= {"IR"};

		HandGrenade[] 						= {"RGO"};
		MiniGrenade[] 						= {"RGN"};

		Exile_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};
class CfgExileLootSettings
{
	/**
	 * Lifetime of loot in minutes. Synchronize this with
	 * the garbage collector settings of your server
	 * CfgSettings!
	 */
	lifeTime = 8;

	/**
	 * Interval in seconds when the client searches for
	 * new buildings to spawn loot in
	 */
	spawnInterval = 30;

	/**
	 * This is a percentage value to determine how many loot
	 * positions should contain loot when the system spawns loot.
	 *
	 * If a building has 20 positions defined, Exile will 
	 * spawn loot in 10 random positions of them.
	 * 
	 * This means smaller buildings spawn less loot and larger
	 * ones spawn more loot.
	 *
	 * You can also cap it at a maximum value. See below.
	 */
	maximumPositionCoverage = 30;

 	/**
 	 * Limit the number of loot positions per building. If the 
 	 * above percentage value exceeds this value, it will be capped.
 	 *
 	 * Example: Coverage is 50%. Building has 60 loot positions defined.
 	 * This results in 30 loot positions and that is too much. So we
 	 * cap this at 10
 	 */
	maximumNumberOfLootSpotsPerBuilding = 3;

	/**
	 * Exile spawns a random number of items per loot spot. This 
	 * is the upper cap for that. So 3 means it could spawn 1, 2 
	 * or 3.
	 */
	maximumNumberOfItemsPerLootSpot = 2;

	/**
	 * Radius in meter to spawn loot AROUND each player.
	 * Do NOT touch this value if you dont know what you do.
	 * The higher the number, the higher the drop rates, the
	 * easier your server will lag.
	 *
	 * 50m  = Minimum
	 * 200m = Maximum
	 */
	spawnRadius = 60;

	/**
	 * Defines the radius around trader cities where the system should
	 * not spawn loot. Set this to 0 if you want to have loot spawning
	 * in trader citites, ugh.
	 */
	minimumDistanceToTraderZones = 500;

	/**
	 * Defines the radius around territories where no loot spawns.
	 * This does not regard the actual size of a territory. So do not
	 * set this to a lower value than the maximum radius of a territory,
	 * which is 150m by default.
	 */
	minimumDistanceToTerritories = 150;
};
class CfgExileMobileXM8
{
	/**
	 * Add the 4 digit permission code here, so players can authorize
	 * your server to send them messages to their Mobile XM8 app.
	 */
	code = "";
};
class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};
class CfgExileParty 
{
	showESP = 1;
	allow3DMarkers = 1;
};
class CfgExileRussianRoulette
{
	/*
		Minimum amount to join a session of 
		russian roulette
	*/
	buyInAmount = 1000;
};
class CfgFlags 
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uids[] = {};
	};
};

class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};

/**
 * Sort this by probability of occurence to speed things up a bit
 */
class CfgInteractionMenus
{
	#include "configs\CfgInteractionMenus.hpp"
};

/**
 * Classname is used for reference
 * name is displayed in crafting requirements
 * models is used for crafting and interaction menus
 */
class CfgInteractionModels
{
	#include "configs\CfgInteractionModels.hpp"
};

class CfgLocker 
{
	numbersOnly = "0123456789";
	
	maxDeposit = 999999;
};

class CfgPlayer 
{
	// In minutes ammount of time it takes to go from 100 - 0 if stationary
	hungerDecay = 90;
	thirstDecay = 60;

	// Damage taken from 0 (health||thirst)/sec
	healthDecay = 5.0;

	// Health regen if over BOTH
	thirstRegen = 90;
	hungerRegen = 90;

	// IF above meet recover HP%/MIN
	recoveryPerMinute = 2;

	// Set custom aim precision coefficient for weapon sway
	// https://community.bistudio.com/wiki/Arma_3_Stamina
	// Set to -1 if you want to use Arma 3 default value
	// setCustomAimCoef
	customAimCoefficient = 0.5;

	// 0 or 1
	enableFatigue = 0;
	enableStamina = 0;

	disableMapDrawing = 1;
};

class CfgSlothMachine
{
	spinCost = 100;
	Jackpot = 10100;
	
	chances[] = 
	{
		{85, ""}, 					// 85% = Nothing
		{95, "Level1"}, 			// 10% = 1pt
		{96, "Level2"}, 			// 1% = 10pt
		{97, "Level3"}, 			// 1% = 25pt
		{98, "Level4"}, 			// 1% = 50pt
		{99, "Level5"},				// 1% = 100pt
		{100, "Jackpot"} 			// 1% = Jackpot
	};

	class Prizes 
	{
		class Level1
		{
			symbol = "\exile_assets\texture\item\Exile_Item_ToiletPaper.paa";
			prize = 101;
		};

		class Level2
		{
			symbol = "\exile_assets\texture\item\Exile_Item_CockONut.paa";
			prize = 110;
		};

		class Level3
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Beer.paa";
			prize = 125;
		};

		class Level4
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Knife.paa";
			prize = 150;
		};

		class Level5
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Safe.paa";
			prize = 200;
		};
		
		class Jackpot
		{
			symbol = "\exile_assets\texture\item\Exile_Item_XmasPresent.paa";
		};
	};
};

class CfgTerritories
{
	// Base Cost / Radius
	// Level 1 is allways for Pop Tabs, >= 2 for Respect
	prices[] = 
	{
		// Purchase Price 		Radius 		Number of Objects
		{50000,						15,			30 					}, // Level 1
		{100000,					30,			60 					}, // Level 2 
		{150000,					45,			90 					}, // Level 3
		{200000,					60,			120					}, // Level 4
		{250000,					75,			150					}, // Level 5
		{300000,					90,			180					}, // Level 6
		{350000,					105,		210					}, // Level 7
		{400000,					120,		240					}, // Level 8
		{450000,					135,		270					}, // Level 9
		{500000,					150,		300					}  // Level 10
	};

	// A shortcut of the above maximum radius
	maximumRadius = 150;

	// The above * 2 plus coverving the 20m you can move while placing things
	minimumDistanceToOtherTerritories = 325; 

	// Maximum number of territories a player can own
	maximumNumberOfTerritoriesPerPlayer = 1;

	/**
	 * Defines the minimum distance to safe zones / trader cities where players
	 * cannot build territories
	 */
	minimumDistanceToTraderZones = 1000;

	/**
	 * Defines the minimum distance to spawn zones where players
	 * cannot build territories
	 */
	minimumDistanceToSpawnZones = 1000;

	// Amount of pop tabs per object to pay
	popTabAmountPerObject = 100;
};

class CfgTraderCategories 
{
	#include "configs\CfgTraderCategories.hpp"
};

class CfgTraders
{
	#include "configs\CfgTraders.hpp"
};	

class CfgTrading 
{
	/*
	* This factor defines the difference between sales/purchase price of
	* items and vehicles. It is used if there is no sales price defined
	* in CfgExileArsenal. 
	*/
	sellPriceFactor = 0.25;
	
	rekeyPriceFactor = 0.2;

	/* This doesnt get used with the new loadoutRank and traderRank setup in the Arsenal */
	class requiredRespect 
	{
		Level1 = 0;
		Level2 = 0;
		Level3 = 0;
		Level4 = 0;
		Level5 = 0;
		Level6 = 0;
	};
};

class CfgVehicleCustoms
{
	#include "configs\CfgVehicleTransport.hpp"
};	

class CfgVehicleTransport 
{
	#include "configs\CfgVehicleTransport.hpp"
};

class CfgClanMakerIcons
{
	Icons[] = {{"Text only","\A3\ui_f\data\map\markers\system\dummy_ca.paa"},{"Empty","\A3\ui_f\data\map\markers\system\empty_ca.paa"},{"Objective","\A3\ui_f\data\map\markers\military\objective_CA.paa"},{"Marker","\A3\ui_f\data\map\markers\military\marker_CA.paa"},{"Flag","\A3\ui_f\data\map\markers\military\flag_CA.paa"},{"Arrow","\A3\ui_f\data\map\markers\military\arrow_CA.paa"},{"Arrow (filled)","\A3\ui_f\data\map\markers\military\arrow2_CA.paa"},{"Ambush","\A3\ui_f\data\map\markers\military\ambush_CA.paa"},{"Destroy","\A3\ui_f\data\map\markers\military\destroy_CA.paa"},{"Start","\A3\ui_f\data\map\markers\military\start_CA.paa"},{"End","\A3\ui_f\data\map\markers\military\end_CA.paa"},{"Pick Up","\A3\ui_f\data\map\markers\military\pickup_CA.paa"},{"Join","\A3\ui_f\data\map\markers\military\join_CA.paa"},{"Warning","\A3\ui_f\data\map\markers\military\warning_CA.paa"},{"Unknown","\A3\ui_f\data\map\markers\military\unknown_CA.paa"},{"Circle","\A3\ui_f\data\map\markers\military\circle_CA.paa"},{"Dot","\A3\ui_f\data\map\markers\military\dot_CA.paa"},{"Square","\A3\ui_f\data\map\markers\military\box_CA.paa"},{"Triangle","\A3\ui_f\data\map\markers\military\triangle_CA.paa"},{"Select","\A3\ui_f\data\igui\cfg\islandmap\iconplayer_ca.paa"},{"Waypoint","\A3\ui_f\data\map\groupicons\waypoint.paa"},{"Selector - Selectable","\A3\ui_f\data\map\groupicons\selector_selectable_ca.paa"},{"Selector - Selected Enemy","\A3\ui_f\data\map\groupicons\selector_selectedEnemy_ca.paa"},{"Selector - Selected Friendly","\A3\ui_f\data\map\groupicons\selector_selectedFriendly_ca.paa"},{"Selector - Selected Mission","\A3\ui_f\data\map\groupicons\selector_selectedMission_ca.paa"},{"KIA","\a3\Ui_F_Curator\Data\CfgMarkers\kia_ca.paa"},{"Minefield","\a3\Ui_F_Curator\Data\CfgMarkers\minefield_ca.paa"},{"Minefield (AP)","\a3\Ui_F_Curator\Data\CfgMarkers\minefieldAP_ca.paa"},{"NATO","\A3\ui_f\data\map\markers\flags\nato_ca.paa"},{"CSAT","\A3\ui_f\data\map\markers\flags\CSAT_ca.paa"},{"Altis Armed Forces","\A3\ui_f\data\map\markers\flags\AAF_ca.paa"},{"Altis","\A3\ui_f\data\map\markers\flags\Altis_ca.paa"},{"Altis (Colonial)","\A3\ui_f\data\map\markers\flags\AltisColonial_ca.paa"},{"FIA","\A3\ui_f\data\map\markers\flags\FIA_ca.paa"},{"European Union","\A3\ui_f\data\map\markers\flags\EU_ca.paa"},{"United Nations","\A3\ui_f\data\map\markers\flags\UN_ca.paa"},{"Belgium","\A3\ui_f\data\map\markers\flags\Belgium_ca.paa"},{"Canada","\A3\ui_f\data\map\markers\flags\Canada_ca.paa"},{"Croatia","\A3\ui_f\data\map\markers\flags\Croatia_ca.paa"},{"Czech Republic","\A3\ui_f\data\map\markers\flags\CzechRepublic_ca.paa"},{"Denmark","\A3\ui_f\data\map\markers\flags\Denmark_ca.paa"},{"France","\A3\ui_f\data\map\markers\flags\France_ca.paa"},{"Georgia","\A3\ui_f\data\map\markers\flags\Georgia_ca.paa"},{"Germany","\A3\ui_f\data\map\markers\flags\Germany_ca.paa"},{"Greece","\A3\ui_f\data\map\markers\flags\Greece_ca.paa"},{"Hungary","\A3\ui_f\data\map\markers\flags\Hungary_ca.paa"},{"Iceland","\A3\ui_f\data\map\markers\flags\Iceland_ca.paa"},{"Italy","\A3\ui_f\data\map\markers\flags\Italy_ca.paa"},{"Luxembourg","\A3\ui_f\data\map\markers\flags\Luxembourg_ca.paa"},{"Netherlands","\A3\ui_f\data\map\markers\flags\Netherlands_ca.paa"},{"Norway","\A3\ui_f\data\map\markers\flags\Norway_ca.paa"},{"Poland","\A3\ui_f\data\map\markers\flags\Poland_ca.paa"},{"Portugal","\A3\ui_f\data\map\markers\flags\Portugal_ca.paa"},{"Slovakia","\A3\ui_f\data\map\markers\flags\Slovakia_ca.paa"},{"Slovenia","\A3\ui_f\data\map\markers\flags\Slovenia_ca.paa"},{"Spain","\A3\ui_f\data\map\markers\flags\Spain_ca.paa"},{"UK","\A3\ui_f\data\map\markers\flags\UK_ca.paa"},{"USA","\A3\ui_f\data\map\markers\flags\USA_ca.paa"},{"Airport", "\plp_markers\icons\plp_mark_as_airport.pac"},{"Airport 2", "\plp_markers\icons\plp_mark_as_airport2.pac"},{"Air Radar", "\plp_markers\icons\plp_mark_as_airradar.pac"},{"Ammunition", "\plp_markers\icons\plp_mark_as_ammunition.pac"},{"Anti Air (Cannon)", "\plp_markers\icons\plp_mark_as_aacannon.pac"},{"Anti Air (Missile)", "\plp_markers\icons\plp_mark_as_aamissile.pac"},{"Artillery (Cannon)", "\plp_markers\icons\plp_mark_as_artycannon.pac"},{"Artillery (Rocket)", "\plp_markers\icons\plp_mark_as_artyrocket.pac"},{"Backpack", "\plp_markers\icons\plp_mark_as_backpack.pac"},{"Bicycle", "\plp_markers\icons\plp_mark_as_bicycle.pac"},{"Binoculars", "\plp_markers\icons\plp_mark_as_binoculars.pac"},{"Boat", "\plp_markers\icons\plp_mark_as_boat.pac"},{"Building", "\plp_markers\icons\plp_mark_as_building.pac"},{"Camp", "\plp_markers\icons\plp_mark_as_camp.pac"},{"Canteen", "\plp_markers\icons\plp_mark_as_canteen.pac"},{"Checkpoint", "\plp_markers\icons\plp_mark_as_checkpoint.pac"},{"Cross", "\plp_markers\icons\plp_mark_as_cross.pac"},{"Dollar", "\plp_markers\icons\plp_mark_as_dollar.pac"},{"Drinking Water", "\plp_markers\icons\plp_mark_as_drinkingwater.pac"},{"Electronics", "\plp_markers\icons\plp_mark_as_electronics.pac"},{"Explosives", "\plp_markers\icons\plp_mark_as_explosives.pac"},{"Flag", "\plp_markers\icons\plp_mark_as_flag.pac"},{"Fuel", "\plp_markers\icons\plp_mark_as_fuel.pac"},{"Handgrenade", "\plp_markers\icons\plp_mark_as_handgrenade.pac"},{"Hardpoint", "\plp_markers\icons\plp_mark_as_hardpoint.pac"},{"Helicopter", "\plp_markers\icons\plp_mark_as_helicopter.pac"},{"House", "\plp_markers\icons\plp_mark_as_house.pac"},{"Industrial", "\plp_markers\icons\plp_mark_as_industrial.pac"},{"Infantry", "\plp_markers\icons\plp_mark_as_infantry.pac"},{"Launcher", "\plp_markers\icons\plp_mark_as_launcher.pac"},{"Machinegun", "\plp_markers\icons\plp_mark_as_machinegun.pac"},{"Machinegun Nest", "\plp_markers\icons\plp_mark_as_machinegunnest.pac"},{"Map Tools", "\plp_markers\icons\plp_mark_as_maptools.pac"},{"Mortar", "\plp_markers\icons\plp_mark_as_mortar.pac"},{"Motorized Inf", "\plp_markers\icons\plp_mark_as_motinfantry.pac"},{"Motorcycle", "\plp_markers\icons\plp_mark_as_motorcycle.pac"},{"Oildrop", "\plp_markers\icons\plp_mark_as_oildrop.pac"},{"Pistol", "\plp_markers\icons\plp_mark_as_pistol.pac"},{"Police", "\plp_markers\icons\plp_mark_as_police.pac"},{"Quad", "\plp_markers\icons\plp_mark_as_quad.pac"},{"Radiotower", "\plp_markers\icons\plp_mark_as_radiotower.pac"},{"Repairs", "\plp_markers\icons\plp_mark_as_repairs.pac"},{"Rifle", "\plp_markers\icons\plp_mark_as_rifle.pac"},{"Shotgun", "\plp_markers\icons\plp_mark_as_shotgun.pac"},{"Sniper Rifle", "\plp_markers\icons\plp_mark_as_sniperrifle.pac"},{"Special Forces", "\plp_markers\icons\plp_mark_as_specialforces.pac"},{"Storage", "\plp_markers\icons\plp_mark_as_storage.pac"},{"Submachinegun", "\plp_markers\icons\plp_mark_as_submachinegun.pac"},{"Tank", "\plp_markers\icons\plp_mark_as_tank.pac"},{"Truck", "\plp_markers\icons\plp_mark_as_truck.pac"},{"Vehicle", "\plp_markers\icons\plp_mark_as_vehicle.pac"},{"Voltage", "\plp_markers\icons\plp_mark_as_voltage.pac"},{"Watchtower", "\plp_markers\icons\plp_mark_as_watchtower.pac"},{"Animals", "\plp_markers\icons\plp_mark_civ_animals.pac"},{"Barn", "\plp_markers\icons\plp_mark_civ_Barn.pac"},{"Beach", "\plp_markers\icons\plp_mark_civ_beach.pac"},{"Bed", "\plp_markers\icons\plp_mark_civ_bed.pac"},{"Bridge", "\plp_markers\icons\plp_mark_civ_bridge.pac"},{"Bus", "\plp_markers\icons\plp_mark_civ_bus.pac"},{"Car Workshop", "\plp_markers\icons\plp_mark_civ_carWorkshop.pac"},{"Camping Site", "\plp_markers\icons\plp_mark_civ_campingsite.pac"},{"Cemetery", "\plp_markers\icons\plp_mark_civ_cemetery.pac"},{"Church", "\plp_markers\icons\plp_mark_civ_church.pac"},{"Commercial Zone", "\plp_markers\icons\plp_mark_civ_commercialzone.pac"},{"Coffee", "\plp_markers\icons\plp_mark_civ_coffee.pac"},{"Dollar", "\plp_markers\icons\plp_mark_civ_dollar.pac"},{"Farm", "\plp_markers\icons\plp_mark_civ_Farm.pac"},{"Fire department", "\plp_markers\icons\plp_mark_civ_firedepartment.pac"},{"Food", "\plp_markers\icons\plp_mark_civ_food.pac"},{"Fuel Station", "\plp_markers\icons\plp_mark_civ_fuelstation.pac"},{"Harbor", "\plp_markers\icons\plp_mark_civ_harbor.pac"},{"Hiking Trail", "\plp_markers\icons\plp_mark_civ_hikingtrail.pac"},{"Hospital A", "\plp_markers\icons\plp_mark_civ_hospitalA.pac"},{"Hospital B", "\plp_markers\icons\plp_mark_civ_hospitalB.pac"},{"Industrial", "\plp_markers\icons\plp_mark_civ_industrial.pac"},{"Information", "\plp_markers\icons\plp_mark_civ_information.pac"},{"Lake", "\plp_markers\icons\plp_mark_civ_lake.pac"},{"Mobile Home", "\plp_markers\icons\plp_mark_civ_mobilehome.pac"},{"Mountain", "\plp_markers\icons\plp_mark_civ_mountain.pac"},{"Motorway A", "\plp_markers\icons\plp_mark_civ_motorwayA.pac"},{"Motorway B", "\plp_markers\icons\plp_mark_civ_motorwayB.pac"},{"Nature Reserve", "\plp_markers\icons\plp_mark_civ_naturereserve.pac"},{"Oildrop", "\plp_markers\icons\plp_mark_civ_oildrop.pac"},{"Parking Lot", "\plp_markers\icons\plp_mark_civ_parkinglot.pac"},{"Parking Lot (Roofed)", "\plp_markers\icons\plp_mark_civ_parkinglotroofed.pac"},{"Radar Control", "\plp_markers\icons\plp_mark_civ_radarcontrol.pac"},{"Road works", "\plp_markers\icons\plp_mark_civ_roadworks.pac"},{"Ruins", "\plp_markers\icons\plp_mark_civ_ruins.pac"},{"ShoppingCart", "\plp_markers\icons\plp_mark_civ_shoppingcart.pac"},{"Taxi", "\plp_markers\icons\plp_mark_civ_taxi.pac"},{"Telephone", "\plp_markers\icons\plp_mark_civ_telephone.pac"},{"Toilets", "\plp_markers\icons\plp_mark_civ_toilets.pac"},{"Train", "\plp_markers\icons\plp_mark_civ_train.pac"},{"Tree", "\plp_markers\icons\plp_mark_civ_tree.pac"},{"Viewpoint", "\plp_markers\icons\plp_mark_civ_viewpoint.pac"},{"Water Tower", "\plp_markers\icons\plp_mark_civ_watertower.pac"},{"Exclamation Mark", "\plp_markers\icons\plp_mark_obj_Exclamation.pac"},{"Question Mark", "\plp_markers\icons\plp_mark_obj_Question.pac"},{"Asset", "\plp_markers\icons\plp_mark_trg_Asset.pac"},{"Civil", "\plp_markers\icons\plp_mark_trg_Civil.pac"}};
};

class CfgPatches
{
	class eXpoch_chernarus
	{
		units[] = {};
		weapons[] = {};
		vehicles[] = {};
		author = "DONKEYPUNCH.INFO";
	};
};