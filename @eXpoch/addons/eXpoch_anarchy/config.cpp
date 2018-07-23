class CfgPatches
{
	class eXpoch_anarchy
	{
		fileName = "eXpoch_anarchy.pbo";
		requiredAddons[] = {"A3_Data_F","A3_Ui_F","A3_Functions_F","A3_UiFonts_F","eXpoch_assets","eXpoch_code"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		vehicles[] = {};
		author = "DonkeyPunch Community Gaming";
	};
};
class CfgAmmo
{
	class RocketCore;
	class GyroGrenade: RocketCore
	{
		model = "\A3\Weapons_f\ammo\Handgrenade";
		hit = 20;
		indirectHit = 18;
		indirectHitRange = 7;
		explosive = 1;
		explosionEffectsRadius = 5;		
		soundHit[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_01",15.848933,1,1000};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.5011872,1.3,400};//soundFly[] = {"Ca\sounds\Weapons\explosions\noise",0.0001,1,20};//rocket_fly_1//soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.0,1.1,700};
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
		visibleFire = 18;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 10;
		initTime = 0;
		thrustTime = 0;
		thrust = 0;
		whistleDist = 0;
	};
};
class AbstractConstruction
{
	staticObject = "";
	previewObject = "";
	kitMagazine = "";
	upgradeObject = "";
	refundObjects[] = {};
	requiresTerritory = 1;
	canBePlacedOnRoad = 1;
	allowDuplicateSnap = 0;
	class SnapPositions{};
	class SnapObjects{};
};
class CfgConstruction
{
	class AbstractFloorEpoch: AbstractConstruction
	{
		class SnapPositions
		{
			Floor_01[] = {-5.275,0,0};
			Floor_02[] = {5.275,0,0};
			Floor_03[] = {0,-5.255,0};
			Floor_04[] = {0,5.255,0};
			Wall_01[] = {-2.62,-2.767,0};
			Wall_02[] = {2.62,-2.767,0};
			Wall_03[] = {-2.62,2.767,0};
			Wall_04[] = {2.62,2.767,0};
			Wall_05[] = {0,-2.767,0};
			Wall_06[] = {0,2.767,0};
			Wall_07[] = {-2.767,0,0};
			Wall_08[] = {2.767,0,0};
			Wall_09[] = {0,-2.767,3.0435};
			Wall_10[] = {0,2.767,3.0435};
			Wall_11[] = {-2.767,0,3.0435};
			Wall_12[] = {2.767,0,3.0435};
		};
		class SnapObjects
		{
			class eXpoch_Construction_WoodFloor
			{
				positions[] = {"Floor_01","Floor_02","Floor_03","Floor_04"};
			};
			class eXpoch_Construction_MetalFloor
			{
				positions[] = {"Floor_01","Floor_02","Floor_03","Floor_04"};
			};
			class eXpoch_Construction_StudWall
			{
				positions[] = {"Floor_01","Floor_02","Floor_03","Floor_04","Floor_05","Floor_06","Floor_07","Floor_08"};
			};
			class eXpoch_Construction_LargeWoodWall
			{
				positions[] = {"Floor_01","Floor_02","Floor_03","Floor_04","Floor_05","Floor_06","Floor_07","Floor_08"};
			};
			class eXpoch_Construction_LargeCorrugatedWall
			{
				positions[] = {"Floor_01","Floor_02","Floor_03","Floor_04","Floor_05","Floor_06","Floor_07","Floor_08"};
			};
			class eXpoch_Construction_LargeWoodWallDoorway
			{
				positions[] = {"Floor_01","Floor_02","Floor_03","Floor_04","Floor_05","Floor_06","Floor_07","Floor_08"};
			};
			class eXpoch_Construction_LargeCorrugatedWallDoorway
			{
				positions[] = {"Floor_01","Floor_02","Floor_03","Floor_04","Floor_05","Floor_06","Floor_07","Floor_08"};
			};
			class eXpoch_Construction_LargeWoodWallwDoor
			{
				positions[] = {"Floor_01","Floor_02","Floor_03","Floor_04","Floor_05","Floor_06","Floor_07","Floor_08"};
			};
			class eXpoch_Construction_LargeCorrugatedWallwDoor
			{
				positions[] = {"Floor_01","Floor_02","Floor_03","Floor_04","Floor_05","Floor_06","Floor_07","Floor_08"};
			};
			class eXpoch_Construction_LargeWoodWallwDoorwLock
			{
				positions[] = {"Floor_01","Floor_02","Floor_03","Floor_04","Floor_05","Floor_06","Floor_07","Floor_08"};
			};
			class eXpoch_Construction_LargeCorrugatedWallwDoorwLock
			{
				positions[] = {"Floor_01","Floor_02","Floor_03","Floor_04","Floor_05","Floor_06","Floor_07","Floor_08"};
			};
		};
	};
	class AbstractWoodWallEpoch: AbstractConstruction
	{
		class SnapPositions
		{
			Wall_01[] = {-5.21,0,0};
			Wall_02[] = {5.21,0,0};
			Wall_03[] = {0,0,-3};
			Wall_04[] = {0,0,3};
			Floor_01[] = {0,-2.767,0};
			Floor_02[] = {0,2.767,0};
			Floor_03[] = {-2.767,0,0};
			Floor_04[] = {2.767,0,0};
			Floor_05[] = {0,-2.767,3.0435};
			Floor_06[] = {0,2.767,3.0435};
			Floor_07[] = {-2.767,0,3.0435};
			Floor_08[] = {2.767,0,3.0435};
		};
		class SnapObjects
		{
			class eXpoch_Construction_WoodFloor
			{
				positions[] = {"Wall_01","Wall_02","Wall_03","Wall_04","Wall_05","Wall_06","Wall_07","Wall_08","Wall_09","Wall_10","Wall_11","Wall_12"};
			};
			class eXpoch_Construction_MetalFloor
			{
				positions[] = {"Wall_01","Wall_02","Wall_03","Wall_04","Wall_05","Wall_06","Wall_07","Wall_08","Wall_09","Wall_10","Wall_11","Wall_12"};
			};
			class eXpoch_Construction_StudWall
			{
				positions[] = {"Wall_01","Wall_02","Wall_03","Wall_04"};
			};
			class eXpoch_Construction_LargeWoodWall
			{
				positions[] = {"Wall_01","Wall_02","Wall_03","Wall_04"};
			};
			class eXpoch_Construction_LargeCorrugatedWall
			{
				positions[] = {"Wall_01","Wall_02","Wall_03","Wall_04"};
			};
			class eXpoch_Construction_LargeWoodWallDoorway
			{
				positions[] = {"Wall_01","Wall_02","Wall_03","Wall_04"};
			};
			class eXpoch_Construction_LargeCorrugatedWallDoorway
			{
				positions[] = {"Wall_01","Wall_02","Wall_03","Wall_04"};
			};
			class eXpoch_Construction_LargeWoodWallwDoor
			{
				positions[] = {"Wall_01","Wall_02","Wall_03","Wall_04"};
			};
			class eXpoch_Construction_LargeCorrugatedWallwDoor
			{
				positions[] = {"Wall_01","Wall_02","Wall_03","Wall_04"};
			};
			class eXpoch_Construction_LargeWoodWallwDoorwLock
			{
				positions[] = {"Wall_01","Wall_02","Wall_03","Wall_04"};
			};
			class eXpoch_Construction_LargeCorrugatedWallwDoorwLock
			{
				positions[] = {"Wall_01","Wall_02","Wall_03","Wall_04"};
			};
		};	
	};

	class SafeEpoch: AbstractConstruction
	{
		staticObject = "eXpoch_Container_Safe";
		previewObject = "eXpoch_Construction_Safe_Preview";
		kitMagazine = "eXpoch_ItemSafe";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_ItemSafe"};
	};
	class LockboxEpoch: AbstractConstruction
	{
		staticObject = "eXpoch_Container_Lockbox";
		previewObject = "eXpoch_Construction_Lockbox_Preview";
		kitMagazine = "eXpoch_ItemLockbox";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_ItemLockbox"};
	};
	class KitSpikeTrapEpoch: AbstractConstruction
	{
		staticObject = "eXpoch_Construction_SpikeTrap";
		previewObject = "eXpoch_Construction_KitSpikeTrap_Preview";
		kitMagazine = "eXpoch_KitSpikeTrap";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitSpikeTrap"};
	};
	class KitMetalTrapEpoch: AbstractConstruction
	{
		staticObject = "eXpoch_Construction_MetalTrap";
		previewObject = "eXpoch_Construction_KitMetalTrap_Preview";
		kitMagazine = "eXpoch_KitMetalTrap";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitMetalTrap"};
	};
	class KitStudWallEpoch: AbstractWoodWallEpoch
	{
		staticObject = "eXpoch_Construction_StudWall";
		previewObject = "eXpoch_Construction_KitStudWall_Preview";
		kitMagazine = "eXpoch_KitStudWall";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitStudWall"};
	};
	class KitLargeWoodWallEpoch: AbstractWoodWallEpoch
	{
		staticObject = "eXpoch_Construction_LargeWoodWall";
		previewObject = "eXpoch_Construction_KitLargeWoodWall_Preview";
		kitMagazine = "eXpoch_KitLargeWoodWall";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitLargeWoodWall"};
	};
	class KitLargeCorrugatedWallEpoch: AbstractWoodWallEpoch
	{
		staticObject = "eXpoch_Construction_LargeCorrugatedWall";
		previewObject = "eXpoch_Construction_KitLargeCorrugatedWall_Preview";
		kitMagazine = "eXpoch_KitLargeCorrugatedWall";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitLargeCorrugatedWall"};
	};
	class KitLargeWoodWallDoorwayEpoch: AbstractWoodWallEpoch
	{
		staticObject = "eXpoch_Construction_LargeWoodWallDoorway";
		previewObject = "eXpoch_Construction_KitLargeWoodWallDoorway_Preview";
		kitMagazine = "eXpoch_KitLargeWoodWallDoorway";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitLargeWoodWallDoorway"};
	};
	class KitLargeCorrugatedWallDoorwayEpoch: AbstractWoodWallEpoch
	{
		staticObject = "eXpoch_Construction_LargeCorrugatedWallDoorway";
		previewObject = "eXpoch_Construction_KitLargeCorrugatedWallDoorway_Preview";
		kitMagazine = "eXpoch_KitLargeCorrugatedWallDoorway";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitLargeCorrugatedWallDoorway"};
	};
	class KitLargeWoodWallwDoorEpoch: AbstractWoodWallEpoch
	{
		staticObject = "eXpoch_Construction_LargeWoodWallwDoor";
		previewObject = "eXpoch_Construction_KitLargeWoodWallwDoor_Preview";
		kitMagazine = "eXpoch_KitLargeWoodWallwDoor";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitLargeWoodWallwDoor"};
	};
	class KitLargeCorrugatedWallwDoorEpoch: AbstractWoodWallEpoch
	{
		staticObject = "eXpoch_Construction_LargeCorrugatedWallwDoor";
		previewObject = "eXpoch_Construction_KitLargeCorrugatedWallwDoor_Preview";
		kitMagazine = "eXpoch_KitLargeCorrugatedWallwDoor";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitLargeCorrugatedWallwDoor"};
	};
	class KitLargeWoodWallwDoorwLockEpoch: AbstractWoodWallEpoch
	{
		staticObject = "eXpoch_Construction_LargeWoodWallwDoorwLock";
		previewObject = "eXpoch_Construction_KitLargeWoodWallwDoorwLock_Preview";
		kitMagazine = "eXpoch_KitLargeWoodWallwDoorwLock";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitLargeWoodWallwDoorwLock"};
	};
	class KitLargeCorrugatedWallwDoorwLockEpoch: AbstractWoodWallEpoch
	{
		staticObject = "eXpoch_Construction_LargeCorrugatedWallwDoorwLock";
		previewObject = "eXpoch_Construction_KitLargeCorrugatedWallwDoorwLock_Preview";
		kitMagazine = "eXpoch_KitLargeCorrugatedWallwDoorwLock";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitLargeCorrugatedWallwDoorwLock"};
	};
	class KitWoodFloorEpoch: AbstractFloorEpoch
	{
		staticObject = "eXpoch_Construction_WoodFloor";
		previewObject = "eXpoch_Construction_KitWoodFloor_Preview";
		kitMagazine = "eXpoch_KitWoodFloor";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitWoodFloor"};
	};
	class KitWoodMetalEpoch: AbstractFloorEpoch
	{
		staticObject = "eXpoch_Construction_MetalFloor";
		previewObject = "eXpoch_Construction_KitMetalFloor_Preview";
		kitMagazine = "eXpoch_KitMetalFloor";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitMetalFloor"};
	};
	class KitWoodStairsEpoch: AbstractConstruction
	{
		staticObject = "eXpoch_Construction_WoodStairs";
		previewObject = "eXpoch_Construction_KitWoodStairs_Preview";
		kitMagazine = "eXpoch_KitWoodStairs";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitWoodStairs"};
		class SnapPositions
		{
			eXpoch_Construction_WoodStairs_01[] = {0,0,-3.245};
			eXpoch_Construction_WoodStairs_02[] = {0,0,3.245};
		};
		class SnapObjects
		{
			class eXpoch_Construction_WoodStairs
			{
				positions[] = {"eXpoch_Construction_WoodStairs_01","eXpoch_Construction_WoodStairs_02"};
			};
		};
	};
	class KitWoodStairs2Epoch: AbstractConstruction
	{
		staticObject = "eXpoch_Construction_WoodStairs2";
		previewObject = "eXpoch_Construction_KitWoodStairs2_Preview";
		kitMagazine = "eXpoch_KitWoodStairs2";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitWoodStairs2"};
		class SnapPositions
		{
			eXpoch_Construction_WoodStairs2_01[] = {0,0,-3.245};
			eXpoch_Construction_WoodStairs2_02[] = {0,0,3.245};
		};
		class SnapObjects
		{
			class eXpoch_Construction_WoodStairs2
			{
				positions[] = {"eXpoch_Construction_WoodStairs2_01","eXpoch_Construction_WoodStairs2_02"};
			};
		};
	};
	class KitWoodTowerEpoch: AbstractConstruction
	{
		staticObject = "eXpoch_Construction_WoodTower";
		previewObject = "eXpoch_Construction_KitWoodTower_Preview";
		kitMagazine = "eXpoch_KitWoodTower";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitWoodTower"};
	};
	class KitWoodRampEpoch: AbstractConstruction
	{
		staticObject = "eXpoch_Construction_WoodRamp";//5.2,0,1.68
		previewObject = "eXpoch_Construction_KitWoodRamp_Preview";
		kitMagazine = "eXpoch_KitWoodRamp";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitWoodRamp"};
		class SnapPositions
		{
			eXpoch_Construction_WoodRamp_01[] = {5.2,0,1.68};
		};
		class SnapObjects
		{
			class eXpoch_Construction_WoodRamp
			{
				positions[] = {"eXpoch_Construction_WoodRamp_01"};
			};
		};
	};
	class KitTankTrapEpoch: AbstractConstruction
	{
		staticObject = "eXpoch_Construction_TankTrap";
		previewObject = "eXpoch_Construction_KitTankTrap_Preview";
		kitMagazine = "eXpoch_KitTankTrap";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitTankTrap"};
	};
	class KitHesco3Epoch: AbstractConstruction
	{
		staticObject = "eXpoch_Construction_Hesco3";
		previewObject = "eXpoch_Construction_KitHesco3_Preview";
		kitMagazine = "eXpoch_KitHesco3";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitHesco3"};
		class SnapPositions
		{
			eXpoch_Construction_Hesco3_01[] = {-3.38,0,0};
			eXpoch_Construction_Hesco3_02[] = {3.38,0,0};
		};
		class SnapObjects
		{
			class eXpoch_Construction_Hesco3
			{
				positions[] = {"eXpoch_Construction_Hesco3_01","eXpoch_Construction_Hesco3_02"};
			};
		};
	};
	class KitWoodLadderEpoch: AbstractConstruction
	{
		staticObject = "eXpoch_Construction_WoodLadder";
		previewObject = "eXpoch_Construction_KitWoodLadder_Preview";
		kitMagazine = "eXpoch_KitWoodLadder";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitWoodLadder"};
		class SnapPositions
		{
			eXpoch_Construction_WoodLadder_01[] = {0,0,-3.47};
			eXpoch_Construction_WoodLadder_02[] = {0,0,3.47};
		};
		class SnapObjects
		{
			class eXpoch_Construction_WoodLadder
			{
				positions[] = {"eXpoch_Construction_WoodLadder_01","eXpoch_Construction_WoodLadder_02"};
			};
		};
	};
	class KitTiPiEpoch: AbstractConstruction
	{
		staticObject = "eXpoch_Construction_TiPi";
		previewObject = "eXpoch_Construction_KitTiPi_Preview";
		kitMagazine = "eXpoch_KitTiPi";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitTiPi"};
	};
	class KitShelfEpoch: AbstractConstruction
	{
		staticObject = "eXpoch_Construction_Shelf";
		previewObject = "eXpoch_Construction_KitShelf_Preview";
		kitMagazine = "eXpoch_KitShelf";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitShelf"};
	};
	class KitFoundationEpoch: AbstractConstruction
	{
		staticObject = "eXpoch_Construction_Foundation";
		previewObject = "eXpoch_Construction_KitFoundation_Preview";
		kitMagazine = "eXpoch_KitFoundation";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitFoundation"};
	};
	class KitWoodFoundationEpoch: AbstractConstruction
	{
		staticObject = "eXpoch_Construction_WoodFoundation";
		previewObject = "eXpoch_Construction_KitWoodFoundation_Preview";
		kitMagazine = "eXpoch_KitWoodFoundation";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitWoodFoundation"};
	};
	class KitSolarGenEpoch: AbstractConstruction
	{
		staticObject = "eXpoch_Construction_SolarGen";
		previewObject = "eXpoch_Construction_KitSolarGen_Preview";
		kitMagazine = "eXpoch_KitSolarGen";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitSolarGen"};
	};
	class KitPlotPoleEpoch: AbstractConstruction
	{
		staticObject = "eXpoch_Construction_PlotPole";
		previewObject = "eXpoch_Construction_KitPlotPole_Preview";
		kitMagazine = "eXpoch_KitPlotPole";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitPlotPole"};
	};
	class KitHalfCinderWallEpoch: AbstractConstruction
	{
		staticObject = "eXpoch_Construction_HalfCinderWall";
		previewObject = "eXpoch_Construction_KitHalfCinderWall_Preview";
		kitMagazine = "eXpoch_KitHalfCinderWall";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitHalfCinderWall"};
		class SnapPositions
		{
			CinderWall_01[] = {-5.25,0,0};
			CinderWall_02[] = {5.25,0,0};
			CinderWall_03[] = {0,0,3.08};
			CinderWall_04[] = {0,0,-3.08};
			CinderWall_05[] = {-2.625,0,0};
			CinderWall_06[] = {2.625,0,0};
			HalfCinderWall_01[] = {0,0,1.55};
			HalfCinderWall_02[] = {0,0,-1.55};
		};
		class SnapObjects
		{
			class eXpoch_Construction_HalfCinderWall
			{
				positions[] = {"HalfCinderWall_01","HalfCinderWall_02","CinderWall_01","CinderWall_02"};
			};
			class eXpoch_Construction_CinderWall
			{
				positions[] = {"CinderWall_01","CinderWall_02","CinderWall_05","CinderWall_06","HalfCinderWall_01","HalfCinderWall_02"};
			};
			class eXpoch_Construction_CinderWallGarage
			{
				positions[] = {"CinderWall_01","CinderWall_02","CinderWall_05","CinderWall_06","HalfCinderWall_01","HalfCinderWall_02"};
			};
		};
	};
	class KitCinderWallEpoch: AbstractConstruction
	{
		staticObject = "eXpoch_Construction_CinderWall";
		previewObject = "eXpoch_Construction_KitCinderWall_Preview";
		kitMagazine = "eXpoch_KitCinderWall";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitCinderWall"};
		class SnapPositions
		{
			CinderWall_01[] = {-5.25,0,0};
			CinderWall_02[] = {5.25,0,0};
			CinderWall_03[] = {0,0,3.08};
			CinderWall_04[] = {0,0,-3.08};
			CinderWall_05[] = {-2.625,0,0};
			CinderWall_06[] = {2.625,0,0};
		};
		class SnapObjects
		{
			class eXpoch_Construction_CinderWall
			{
				positions[] = {"CinderWall_01","CinderWall_02","CinderWall_03","CinderWall_04","CinderWall_05","CinderWall_06"};
			};
			class eXpoch_Construction_HalfCinderWall
			{
				positions[] = {"CinderWall_01","CinderWall_02","CinderWall_03","CinderWall_04","CinderWall_05","CinderWall_06"};
			};
			class eXpoch_Construction_CinderWallGarage
			{
				positions[] = {"CinderWall_01","CinderWall_02","CinderWall_03","CinderWall_04","CinderWall_05","CinderWall_06"};
			};
		};
	};
	class KitCinderWallGarageEpoch: AbstractConstruction
	{
		staticObject = "eXpoch_Construction_CinderWallGarage";
		previewObject = "eXpoch_Construction_KitCinderWallGarage_Preview";
		kitMagazine = "eXpoch_KitCinderWallGarage";
		requiresTerritory = 0;
		refundObjects[] = {"eXpoch_KitCinderWallGarage"};
		class SnapPositions
		{
			CinderWall_01[] = {-5.25,0,0};
			CinderWall_02[] = {5.25,0,0};
			CinderWall_03[] = {0,0,3.08};
			CinderWall_04[] = {0,0,-3.08};
			CinderWall_05[] = {-2.625,0,0};
			CinderWall_06[] = {2.625,0,0};
		};
		class SnapObjects
		{
			class eXpoch_Construction_CinderWallGarage
			{
				positions[] = {"CinderWall_01","CinderWall_02","CinderWall_03","CinderWall_04","CinderWall_05","CinderWall_06"};
			};
			class eXpoch_Construction_HalfCinderWall
			{
				positions[] = {"CinderWall_01","CinderWall_02","CinderWall_03","CinderWall_04","CinderWall_05","CinderWall_06"};
			};
			class eXpoch_Construction_CinderWall
			{
				positions[] = {"CinderWall_01","CinderWall_02","CinderWall_03","CinderWall_04","CinderWall_05","CinderWall_06"};
			};
		};
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class VehicleMagazine: CA_Magazine{};
	class 3Rnd_MosquitoGrenade: VehicleMagazine
	{
		author = "eXpoch Dev Team";
		scope = 2;
		displayName = "Grenade";
		descriptionShort = "";
		ammo = "GyroGrenade";
		count = 3;
		initSpeed = 3;
		maxLeadSpeed = 200;
		sound[] = {"",1.0,1};
		reloadSound[] = {"",0.00031622773,1};
		nameSound = "cannon";		
	};
	class HandGrenade_Stone;
	class Exile_AbstractItem_Interaction_Consuming
	{
		scope = 1;
		sounds[] = {};
		returnedItem = "";
		stopBleeding = 0;
		animations[] = {};
		tools[] = {};
	};
	class Exile_AbstractItem_Interaction_Eating: Exile_AbstractItem_Interaction_Consuming
	{
		scope = 1;
		sounds[] = {"SndExileHeartbeatEating01","SndExileHeartbeatEating02"};
	};
	class Exile_AbstractItem_Interaction_Eating_Can: Exile_AbstractItem_Interaction_Eating
	{
		tools[] = {"Exile_Item_CanOpener"};
	};
	class Exile_AbstractItem_Interaction_Drinking: Exile_AbstractItem_Interaction_Consuming
	{
		scope = 1;
		sounds[] = {"SndExileHeartbeatDrinking01"};
	};
	class Exile_AbstractItem_Interaction_Consuming_Healing: Exile_AbstractItem_Interaction_Consuming
	{
		animations[] = {"AinvPknlMstpSlayWnonDnon_medic","AinvPknlMstpSlayWrflDnon_medic","AinvPknlMstpSlayWpstDnon_medic","AinvPknlMstpSlayWrflDnon_medic","AinvPknlMstpSlayWnonDnon_medic","AinvPknlMstpSlayWnonDnon_medic","AinvPknlMstpSlayWrflDnon_medic","AinvPknlMstpSlayWpstDnon_medic","AinvPknlMstpSlayWrflDnon_medic","AinvPknlMstpSlayWnonDnon_medic","AinvPpneMstpSlayWnonDnon_medic","AinvPpneMstpSlayWrflDnon_medic","AinvPpneMstpSlayWpstDnon_medic","AinvPpneMstpSlayWrflDnon_medic","AinvPpneMstpSlayWnonDnon_medic"};
	};
	class Exile_AbstractItem_Interaction_Using
	{
		scope = 1;
		chance = 100;
		successFunction = "";
		successNotification = "";
	};
	class Exile_AbstractItem_Interaction_Constructing
	{
		scope = 1;
	};
	class Exile_AbstractItem: CA_Magazine
	{
		scope = 1;
		descriptionShort = "Dummy";
		displayName = "Dummy";
		count = 1;
		mass = 1;
		picture = "\exile_assets\texture\item\Dummy.paa";
		model = "\exile_assets\model\Dummy.p3d";
		class Interactions{};
	};
	
//Storage
	class eXpoch_ItemLockbox: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		displayName = "Lockbox";
		model = "\x\addons\a3_epoch_assets_1\models\lockbox_mag.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_lockbox_CA.paa";
		descriptionShort = "Semi secure lockbox";
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_ItemSafe: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		displayName = "Safe";
		model = "\x\addons\a3_epoch_assets_1\models\safe_onside.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_safe_CA.paa";
		descriptionShort = "Secure Safe";
		mass = 200;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitTiPi: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_TP_ca.paa";
		displayName = "TiPi Kit";
		scope = 2;
		descriptionShort = "TeePee (TiPi)";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitShelf: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_shelf_ca.paa";
		displayName = "Shelf Kit";
		scope = 2;
		descriptionShort = "Shelf";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};

//Precious Metals and Currencies for Millionaires 
	class eXpoch_ItemBriefcaseE: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_briefcase_E_CA.paa";
		displayName = "Empty Briefcase";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\briefcase.p3d";
		descriptionShort = "Empty Briefcase";
		count = 1;
		mass = 1;
	};
	class eXpoch_ItemBriefcaseGold100oz: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_briefcase_100oz_CA.paa";
		displayName = "Briefcase of Gold 10-10oz bars";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\briefcase.p3d";
		descriptionShort = "Briefcase of Gold 10-10oz bars";
		count = 1;
		mass = 100;
	};
	class eXpoch_ItemGoldBar10oz: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		worth = 1000;
		displayName = "10oz Gold";
		model = "\x\addons\a3_epoch_assets_1\models\ItemGoldBar10oz.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_gold_bar_10oz_CA.paa";
		descriptionShort = "10 x 1oz Gold Bar";
		mass = 10;
	};
	class eXpoch_ItemGoldBar: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		worth = 100;
		displayName = "Gold";
		model = "\x\addons\a3_epoch_assets_1\models\ItemGoldBar1oz.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_gold_bar_CA.paa";
		descriptionShort = "Gold Bar";
		mass = 1;
	};
	class eXpoch_PartOreGold: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		displayName = "Gold Ore";
		model = "\x\addons\a3_epoch_assets\models\oreGold.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_gold_ore_CA.paa";
		descriptionShort = "Can be mined from rocks using a sledgehammer.";
		mass = 1;
	};
	class eXpoch_ItemSilverBar: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		worth = 1;
		displayName = "Silver";
		model = "\x\addons\a3_epoch_assets_1\models\ItemSilverBar1oz.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_silver_bar_CA.paa";
		descriptionShort = "Silver Bar";
		mass = 1;
	};
	class eXpoch_PartOreSilver: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		displayName = "Silver Ore";
		model = "\x\addons\a3_epoch_assets\models\oreSilver.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_silver_ore_CA.paa";
		descriptionShort = "Can be mined from rocks using a sledgehammer.";
		mass = 1;
	};
	class eXpoch_PartOre: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		displayName = "Iron Ore";
		model = "\x\addons\a3_epoch_assets\models\ore.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_iron_ore_CA.paa";
		descriptionShort = "Used for crafting scrap metal. Can be mined from rocks using a sledgehammer.";
		mass = 1;
	};
	class eXpoch_ItemAluminumBar: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_alum_bar_CA.paa";
		displayName = "Aluminum Bar";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\aluminum_bar.p3d";
		descriptionShort = "$STR_EPOCH_ItemAluminumBar_descriptionShort";
		count = 1;
		mass = 1;
	};
	class eXpoch_ItemCopperBar: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_copper_bar_CA.paa";
		displayName = "Copper Bar";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\copper_bar.p3d";
		descriptionShort = "$STR_EPOCH_ItemCopperBar_descriptionShort";
		count = 1;
		mass = 1;
	};
	class eXpoch_ItemTinBar: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_tin_bar_CA.paa";
		displayName = "Tin Bar";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\tin_bar.p3d";
		descriptionShort = "$STR_EPOCH_ItemTinBar_descriptionShort";
		count = 1;
		mass = 1;
	};
	class eXpoch_ItemEmptyTin: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets_2\gear\gear_emptytincan_x_ca.paa";
		displayName = "Empty Tin";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_2\empty_tin.p3d";
		descriptionShort = "$STR_EPOCH_ItemEmptyTin_descriptionShort";
		count = 1;
		mass = 2;
	};
	
//Gems 
	class eXpoch_ItemTopaz: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Topaz";
		model = "\x\addons\a3_epoch_assets_1\models\topaz.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_topaz_CA.paa";
		count = 1;
		descriptionShort = "Topaz";
		mass = 1;
	};
	class eXpoch_ItemOnyx: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Onyx";
		model = "\x\addons\a3_epoch_assets_1\models\obsidian.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_obsidian_CA.paa";
		count = 1;
		descriptionShort = "Onyx";
		mass = 1;
	};
	class eXpoch_ItemSapphire: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Sapphire";
		model = "\x\addons\a3_epoch_assets_1\models\sapphire.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_sapphire_CA.paa";
		count = 1;
		descriptionShort = "Sapphire";
		mass = 1;
	};
	class eXpoch_ItemAmethyst: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Amethyst";
		model = "\x\addons\a3_epoch_assets_1\models\amethyst.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_amethyst_CA.paa";
		count = 1;
		descriptionShort = "Amethyst";
		mass = 1;
	};
	class eXpoch_ItemEmerald: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Emerald";
		model = "\x\addons\a3_epoch_assets_1\models\emerald.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_emerald_CA.paa";
		count = 1;
		descriptionShort = "Emerald";
		mass = 1;
	};
	class eXpoch_ItemCitrine: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Citrine";
		model = "\x\addons\a3_epoch_assets_1\models\citrine.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_citrine_CA.paa";
		count = 1;
		descriptionShort = "Citrine";
		mass = 1;
	};
	class eXpoch_ItemRuby: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Ruby";
		model = "\x\addons\a3_epoch_assets_1\models\ruby.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_ruby_CA.paa";
		count = 1;
		descriptionShort = "Ruby";
		mass = 1;
	};
	class eXpoch_ItemQuartz: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Quartz";
		model = "\x\addons\a3_epoch_assets\models\quartz.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\gem\equip_quartz_CA.paa";
		count = 1;
		descriptionShort = "Quartz";
		mass = 1;
	};
	class eXpoch_ItemJade: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Jade";
		model = "\x\addons\a3_epoch_assets\models\jade.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\gem\equip_jade_CA.paa";
		count = 1;
		descriptionShort = "Jade";
		mass = 1;
	};
	class eXpoch_ItemGarnet: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Garnet";
		model = "\x\addons\a3_epoch_assets\models\garnet.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\gem\equip_garnet_CA.paa";
		count = 1;
		descriptionShort = "Garnet";
		mass = 1;
	};

//KEY stuff
	class eXpoch_ItemHotwire: CA_Magazine
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_hotwire_ca.paa";
		displayName = "Hotwire Kit";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\hotwire.p3d";
		descriptionShort = "Needed as part of the required items to steal a vehicle";
		count = 1;
		mass = 2;
	};
	class eXpoch_ItemKeyKit: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_keykit_ca.paa";
		displayName = "KeyMakers Kit";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\keykit.p3d";
		descriptionShort = "Used to make a copy of your key";
		count = 1;
		mass = 2;
	};
	class eXpoch_ItemKey: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_key_CA.paa";
		displayName = "Black key";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\key.p3d";
		descriptionShort = "$STR_EPOCH_ItemKey_descriptionShort";
		count = 1;
		mass = 1;
	};
	class eXpoch_ItemKeyBlue: eXpoch_ItemKey
	{
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_key_CA_blue.paa";
		displayName = "Blue Key";
		model = "\x\addons\a3_epoch_assets_1\models\key_blue.p3d";
	};
	class eXpoch_ItemKeyGreen: eXpoch_ItemKey
	{
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_key_CA_green.paa";
		displayName = "Green Key";
		model = "\x\addons\a3_epoch_assets_1\models\key_green.p3d";
	};
	class eXpoch_ItemKeyRed: eXpoch_ItemKey
	{
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_key_CA_red.paa";
		displayName = "Red Key";
		model = "\x\addons\a3_epoch_assets_1\models\key_red.p3d";
	};
	class eXpoch_ItemKeyYellow: eXpoch_ItemKey
	{
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_key_CA_yellow.paa";
		displayName = "Yellow Key";
		model = "\x\addons\a3_epoch_assets_1\models\key_yellow.p3d";
	};

//Drink
	class eXpoch_ItemSodaAlpineDude: Exile_AbstractItem
	{
		author = "vbgreen|Sequisha";
		picture = "\x\addons\a3_epoch_assets_1\pictures\soda_alpinedude_ca.paa";
		displayName = "Alpine Soda";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\soda_alpine.p3d";
		descriptionShort = "$STR_EPOCH_ItemSodaAlpineDude_descriptionShort";
		count = 1;
		mass = 7;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[] = {{3,50,10}};
				returnedItem = "";
			};
		};
	};
	class eXpoch_honey_epoch: Exile_AbstractItem
	{
		author = "Kiory";
		scope = 2;
		count = 1;
		displayName = "Honey";
		model = "\x\addons\a3_epoch_assets_2\honey.p3d";
		picture = "\x\addons\a3_epoch_assets_2\gear\gear_honey_x_ca.paa";
		descriptionShort = "Probably collected some time ago.";
		mass = 1;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[] = {{3,50,10}};
				returnedItem = "eXpoch_emptyjar_epoch";
			};
		};
	};
	class eXpoch_emptyjar_epoch: Exile_AbstractItem
	{
		author = "Kiory";
		scope = 2;
		count = 1;
		displayName = "Empty jar";
		model = "\x\addons\a3_epoch_assets_2\jar_empty.p3d";
		picture = "\x\addons\a3_epoch_assets_2\gear\gear_ejar_x_ca.paa";
		descriptionShort = "Could be filled with many things.";
		mass = 0.5;
	};
	class eXpoch_ItemSodaRbull: Exile_AbstractItem
	{
		author = "Sequisha";
		displayName = "Red Gull";
		descriptionShort = "Red Gull Soda";
		model = "\x\addons\a3_epoch_assets_1\models\soda_redbull.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_soda_rbull_CA.paa";
		mass = 7;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[] = {{3,80,20}};
			};
		};
	};
	class eXpoch_ItemSodaOrangeSherbet: Exile_AbstractItem
	{
		author = "Sequisha";
		displayName = "Orange Sherbet";
		descriptionShort = "Orange Sherbet Soda";
		model = "\x\addons\a3_epoch_assets_1\models\soda_sherbet.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\soda_orangesherbet_ca.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[] = {{3,50,20}};
			};
		};
	};
	class eXpoch_ItemSodaPurple: Exile_AbstractItem
	{
		author = "Sequisha";
		displayName = "Purple Nurple";
		descriptionShort = "Purple Nurple Soda";
		model = "\x\addons\a3_epoch_assets_1\models\soda_purple.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\soda_purple_equip_ca.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[] = {{3,50,20}};
			};
		};
	};
	class eXpoch_ItemSodaMocha: Exile_AbstractItem
	{
		author = "Sequisha";
		displayName = "Mocha Cola";
		descriptionShort = "Mocha Cola Soda";
		model = "\x\addons\a3_epoch_assets_1\models\soda_mocha.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\soda_mocha_equip_ca.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[] = {{3,100,60},{2,10,5},{5,0.5,10}};
			};
		};
	};
	class eXpoch_ItemSodaBurst: Exile_AbstractItem
	{
		author = "Sequisha";
		displayName = "Burst Koke";
		descriptionShort = "Burst Koke Soda";
		model = "\x\addons\a3_epoch_assets_1\models\soda_burst.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\soda_burst_equip_ca.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[] = {{3,50,20}};
			};
		};
	};
	class eXpoch_WhiskeyNoodle: Exile_AbstractItem
	{
		author = "Sequisha";
		displayName = "Whisky Noodle";
		picture = "\x\addons\a3_epoch_assets\textures\whiskeynoodle\equip_whiskeyNoodle_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\whiskeynoodle.p3d";
		scope = 2;
		descriptionShort = "Say it slow, Drink it fast..";
		count = 1;
		mass = 7;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				effects[] = {{3,75,20},{4,1.0,30}};
			};
		};
	};

//Food
	class eXpoch_sardines_epoch: Exile_AbstractItem
	{
		author = "Kiory";
		scope = 2;
		count = 1;
		displayName = "Sardines";
		model = "\x\addons\a3_epoch_assets_2\sardines.p3d";
		picture = "\x\addons\a3_epoch_assets_2\gear\gear_sardines_x_ca.paa";
		descriptionShort = "Small fish, nobody likes them.";
		mass = 3;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,40,40}};
				returnedItem = "eXpoch_ItemEmptyTin";
			};
		};
	};
	class eXpoch_meatballs_epoch: Exile_AbstractItem
	{
		author = "Kiory";
		scope = 2;
		count = 1;
		displayName = "Meatballs";
		model = "\x\addons\a3_epoch_assets_2\meatballs.p3d";
		picture = "\x\addons\a3_epoch_assets_2\gear\gear_meatballs_x_ca.paa";
		descriptionShort = "Warning, will make you fat.";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,100,30}};
			};
		};
	};
	class eXpoch_scam_epoch: Exile_AbstractItem
	{
		author = "Kiory";
		scope = 2;
		count = 1;
		displayName = "Scam";
		model = "\x\addons\a3_epoch_assets_2\scamtin.p3d";
		picture = "\x\addons\a3_epoch_assets_2\gear\gear_scam_x_ca.paa";
		descriptionShort = "Was given the name due to fake meat.";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,40,40}};
			};
		};
	};
	class eXpoch_sweetcorn_epoch: Exile_AbstractItem
	{
		author = "Kiory";
		scope = 2;
		count = 1;
		displayName = "Sweetcorn";
		model = "\x\addons\a3_epoch_assets_2\sweetcorn.p3d";
		picture = "\x\addons\a3_epoch_assets_2\gear\gear_sweetcorn_x_ca.paa";
		descriptionShort = "Cheap brand, still tasty.";
		mass = 4;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{2,30,60}};
			};
		};
	};
	class eXpoch_FoodMeeps: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Meeps Candy";
		model = "\x\addons\a3_epoch_assets\models\meeps.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\candy\equip_meeps_ca.paa";
		descriptionShort = "Pumpkin marshmallow candy";
		mass = 2;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,15,12}};
			};
		};
	};
	class eXpoch_FoodSnooter: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Snooters Candy";
		model = "\x\addons\a3_epoch_assets\models\snooter.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\candy\equip_snooters_ca.paa";
		descriptionShort = "Not hungry? grab a Snooters";
		mass = 2;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,15,12}};
			};
		};
	};
	class eXpoch_FoodWalkNSons: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Walk N' Sons Soda";
		model = "\x\addons\a3_epoch_assets\models\walkinson.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\candy\equip_walkinson_ca.paa";
		descriptionShort = "Stuck walkin' grab a Walk N' Sons Soda";
		mass = 2;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,15,12},{4,1.4,0}};
			};
		};
	};
	class eXpoch_Poppy: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\poppy.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\moist\gear_moist_ca.paa";
		displayName = "Poppy";
		descriptionShort = "Pod off of a poppy plant.";
		count = 1;
		mass = 3;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{0,5,10},{2,20,40},{4,0.1,0}};
			};
		};
	};
	class eXpoch_Goldenseal: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\vegetation\models\goldenseal.p3d";
		picture = "\x\addons\a3_epoch_assets_3\vegetation\gear_goldenseal_ca.paa";
		displayName = "Goldenseal";
		descriptionShort = "Helps reduce toxicity";
		count = 1;
		mass = 3;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{0,5,10},{2,20,40}};
			};
		};
	};
	class eXpoch_Pumpkin: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\vegetation\models\pumpkin.p3d";
		picture = "\x\addons\a3_epoch_assets_3\vegetation\gear_pumpkin_ca.paa";
		displayName = "Pumpkin";
		descriptionShort = "Pumpkin";
		count = 1;
		mass = 3;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,20,40}};
			};
		};
	};
	
//Medical
	class eXpoch_FAK: Exile_AbstractItem
	{
		scope = 2;
		count = 1;
		displayName = "First Aid Kit";
		picture = "\A3\Weapons_F\Items\data\UI\gear_FirstAidKit_CA.paa";
		model = "\A3\Weapons_F\Items\FirstAidkit";
		descriptionShort = "$STR_A3_cfgWeapons_FirstAidKit1";
		mass = 8;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				stopBleeding = 1;
				effects[] = {{0,5,10}};
			};
		};
	};
	class eXpoch_Towelette: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\moist.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\moist\gear_moist_ca.paa";
		displayName = "Moist Towelette";
		descriptionShort = "Tear open packet, remove towelette and use.";
		count = 1;
		mass = 3;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				stopBleeding = 1;
				effects[] = {{0,5,10}};
			};
		};
	};
	class eXpoch_HeatPack: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\heatdough.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\moist\gear_heat_ca.paa";
		displayName = "Heat Pack";
		descriptionShort = "Don't suffer in the cold... just open one of these and get toasty!";
		count = 1;
		mass = 1;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				effects[] = {{5,5,10}};
			};
		};
	};
	class eXpoch_ColdPack: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\heatdough.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\moist\gear_heat_ca.paa";
		displayName = "Cold Pack";
		descriptionShort = "Running Hot? cool it off!";
		count = 1;
		mass = 1;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Consuming_Healing
			{
				effects[] = {{5,-5,10}};
			};
		};
	};

//Building Supplies
	class eXpoch_lighter_epoch: Exile_AbstractItem
	{
		author = "Kiory";
		scope = 2;
		count = 50;
		displayName = "Lighter";
		model = "\x\addons\a3_epoch_assets_2\lighter.p3d";
		picture = "\x\addons\a3_epoch_assets_2\gear\gear_lighter_x_ca.paa";
		descriptionShort = "A very ordinary looking lighter, BURN STUFF!";
		mass = 5;
	};
	class eXpoch_ItemBarrelF: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_oil_drum_model_ca.paa";
		displayName = "Barrel Full";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\oil_drum_model.p3d";
		descriptionShort = "$STR_EPOCH_ItemBarrelF_descriptionShort";
		count = 1;
		mass = 250;
	};
	class eXpoch_ItemBarrelE: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_oildrum_e_CA.paa";
		displayName = "Barrel Empty";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\oil_drum_model.p3d";
		descriptionShort = "$STR_EPOCH_ItemBarrelE_descriptionShort";
		count = 1;
		mass = 25;
	};
	class eXpoch_ItemPipe: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_pipe_CA.paa";
		displayName = "Pipe";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\pipe.p3d";
		descriptionShort = "$STR_EPOCH_ItemPipe_descriptionShort";
		count = 1;
		mass = 15;
	};
	class eXpoch_ItemPlywoodPack: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_plywood_pack_CA.paa";
		displayName = "Plywood Pack";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\plywood_pack.p3d";
		descriptionShort = "$STR_EPOCH_ItemPlywoodPack_descriptionShort";
		count = 1;
		mass = 1;
	};
	class eXpoch_ItemComboLock: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_combolock_ca.paa";
		displayName = "Combination Lock";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\combo_lock_mag.p3d";
		descriptionShort = "$STR_EPOCH_ItemComboLock_descriptionShort";
		count = 1;
		mass = 1;
	};
	class eXpoch_PartPlankPack: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		displayName = "Lumber Pack";
		model = "\x\addons\a3_epoch_assets_1\models\plank_pack.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_lumber_pack_CA.paa";
		descriptionShort = "Lumber in a stack";
		mass = 6;
	};
	class eXpoch_CinderBlocks: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		displayName = "Cinder Blocks";
		model = "\x\addons\a3_epoch_assets_1\models\cinder_stack.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\epuip_cinder_blocks_CA.paa";
		descriptionShort = "Stack of nine cinder blocks";
		mass = 75;
	};
	class eXpoch_MortarBucket: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		displayName = "Bucket of Mortar";
		model = "\x\addons\a3_epoch_assets_1\models\mortar.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_mortar_CA.paa";
		descriptionShort = "Premixed mastic adhesive that will bond to concrete block.";
		mass = 15;
	};
	class eXpoch_ItemRock: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		displayName = "Rock";
		model = "\x\addons\a3_epoch_assets\models\rock.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\improv_weapon\gear_rock_ca.paa";
		descriptionShort = "Used for crafting fireplaces and mortar. Can be mined from rocks using a sledgehammer.";
		mass = 1;
	};
	class eXpoch_ItemStick: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		displayName = "Stick";
		model = "\x\addons\a3_epoch_assets\models\stick.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\improv_weapon\gear_stick_ca.paa";
		descriptionShort = "Used for crafting.";
		mass = 1;
	};
	class eXpoch_ItemRope: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		displayName = "Rope";
		model = "\x\addons\a3_epoch_assets\models\rope.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\improv_weapon\gear_rope_ca.paa";
		descriptionShort = "Used for crafting.";
		mass = 1;
	};
	class eXpoch_ItemPacked: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		displayName = "Packed Backpack";
		model = "\x\addons\a3_epoch_assets\models\PackedBag.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\backpack\gear_packedBag_ca.paa";
		descriptionShort = "Brand new backpack still in the package";
		mass = 1.5;
	};
	class eXpoch_ItemSolar: Exile_AbstractItem
	{
		author = "SteamPunkGears";
		scope = 2;
		count = 1;
		displayName = "Solar Panels";
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\solar_gen_assets\Solar_panels\Solar_Panels.p3d";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\solar_gen_assets\Solar_panels\Solar_Panels_Icon_CA.paa";
		descriptionShort = "Next gen solar panels";
		mass = 10;
	};
	class eXpoch_ItemCables: Exile_AbstractItem
	{
		author = "SteamPunkGears";
		scope = 2;
		count = 1;
		displayName = "Wire Cables";
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\solar_gen_assets\Cables\Solar_cables.p3d";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\solar_gen_assets\Cables\Solar_Cable_Icon_CA.paa";
		descriptionShort = "Copper wire isulated with rubber.";
		mass = 10;
	};
	class eXpoch_ItemBattery: Exile_AbstractItem
	{
		author = "SteamPunkGears";
		scope = 2;
		count = 1;
		displayName = "Enclosed Battery";
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\solar_gen_assets\Battery\Battery.p3d";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\solar_gen_assets\Battery\Battery_box_Icon_CA.paa";
		descriptionShort = "Battery in a protective case.";
		mass = 10;
	};
	class eXpoch_ItemScraps: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		displayName = "Metal Scraps";
		model = "\x\addons\a3_epoch_assets\models\scraps.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\scraps\gear_scraps_ca.paa";
		descriptionShort = "Piece of metal scrap";
		mass = 1.5;
	};
	class eXpoch_ItemCorrugated: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		displayName = "Salvage Metal (Small)";
		model = "\x\addons\a3_epoch_assets\models\salvage_small.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\salvage\equip_salvage_small_ca.paa";
		descriptionShort = "Small pile of assorted metal parts";
		mass = 5;
	};
	class eXpoch_ItemCorrugatedLg: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		displayName = "Salvage Metal (Large)";
		model = "\x\addons\a3_epoch_assets\models\salvage_large.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\salvage\equip_salvage_large_ca.paa";
		descriptionShort = "Large pile of assorted metal parts";
		mass = 12;
	};
	class eXpoch_WoodLog_EPOCH: Exile_AbstractItem
	{
		author = "SteamPunkGears";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenLog_ca.paa";
		model = "x\addons\a3_epoch_assets_3\cfgmagazines\log\SteamLogs.p3d";
		displayName = "Big Wooden Log";
		scope = 2;
		descriptionShort = "$STR_A3_wooden_log";
		count = 1;
		mass = 10;
	};
	class eXpoch_PaintCanBase: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets\models\paintCan.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\paint can\gear_paintCan_ca.paa";
		displayName = "Paint Can";
		scope = 0;
		descriptionShort = "Crust-O-Leum, Oil based protective enamel.";
		count = 1;
		mass = 1;
	};
	class eXpoch_PaintCanClear: eXpoch_PaintCanBase
	{
		scope = 2;
		displayName = "Paint Stripper";
		descriptionShort = "Removes paint and other finishes.";
		colorName = "None";
		textureIndex = 0;
	};
	class eXpoch_PaintCanBlk: eXpoch_PaintCanBase
	{
		scope = 2;
		displayName = "Paint Can (Black)";
		colorName = "Black";
		textureIndex = 1;
	};
	class eXpoch_PaintCanBlu: eXpoch_PaintCanBase
	{
		scope = 2;
		displayName = "Paint Can (Blue)";
		colorName = "Blue";
		textureIndex = 2;
	};
	class eXpoch_PaintCanBrn: eXpoch_PaintCanBase
	{
		scope = 2;
		displayName = "Paint Can (Brown)";
		colorName = "Brown";
		textureIndex = 3;
	};
	class eXpoch_PaintCanGrn: eXpoch_PaintCanBase
	{
		scope = 2;
		displayName = "Paint Can (Green)";
		colorName = "Green";
		textureIndex = 4;
	};
	class eXpoch_PaintCanOra: eXpoch_PaintCanBase
	{
		scope = 2;
		displayName = "Paint Can (Orange)";
		colorName = "Orange";
		textureIndex = 5;
	};
	class eXpoch_PaintCanPur: eXpoch_PaintCanBase
	{
		scope = 2;
		displayName = "Paint Can (Purple)";
		colorName = "Purple";
		textureIndex = 6;
	};
	class eXpoch_PaintCanRed: eXpoch_PaintCanBase
	{
		scope = 2;
		displayName = "Paint Can (Red)";
		colorName = "Red";
		textureIndex = 7;
	};
	class eXpoch_PaintCanTeal: eXpoch_PaintCanBase
	{
		scope = 2;
		displayName = "Paint Can (Teal)";
		colorName = "Teal";
		textureIndex = 8;
	};
	class eXpoch_PaintCanYel: eXpoch_PaintCanBase
	{
		scope = 2;
		displayName = "Paint Can (Yellow)";
		colorName = "Yellow";
		textureIndex = 9;
	};

//Building Kits
	class eXpoch_KitSpikeTrap: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
		displayName = "Wooden Spike Trap";
		scope = 2;
		descriptionShort = "Wooden Spike Trap";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitMetalTrap: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
		displayName = "Metal Spike Trap";
		scope = 2;
		descriptionShort = "Metal Spike Trap";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitStudWall: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenWall_ca.paa";
		displayName = "Wooden Stud Wall";
		scope = 2;
		descriptionShort = "Wooden Stud Wall";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitLargeWoodWall: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenWall_ca.paa";
		displayName = "Plywood Wall";
		scope = 2;
		descriptionShort = "Large Plywood Wall";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitLargeCorrugatedWall: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenWall_ca.paa";
		displayName = "Corrugated Wall";
		scope = 2;
		descriptionShort = "Large Corrugated Wall";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitLargeWoodWallDoorway: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenWall_ca.paa";
		displayName = "Plywood Wall Doorway";
		scope = 2;
		descriptionShort = "Large Plywood Wall Doorway";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitLargeCorrugatedWallDoorway: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenWall_ca.paa";
		displayName = "Corrugated Wall Doorway";
		scope = 2;
		descriptionShort = "Large Corrugated Wall Doorway";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitLargeWoodWallwDoor: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenWall_ca.paa";
		displayName = "Plywood Wall Doorway w/ Door";
		scope = 2;
		descriptionShort = "Large Plywood Wall Doorway w/ Door";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitLargeCorrugatedWallwDoor: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenWall_ca.paa";
		displayName = "Corrugated Wall Doorway w/ Door";
		scope = 2;
		descriptionShort = "Large Corrugated Wall Doorway w/ Door";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitLargeWoodWallwDoorwLock: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenWall_ca.paa";
		displayName = "Plywood Wall Doorway w/ Locking Door";
		scope = 2;
		descriptionShort = "Large Plywood Wall Doorway w/ Locking Door";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitLargeCorrugatedWallwDoorwLock: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenWall_ca.paa";
		displayName = "Corrugated Wall Doorway w/ Locking Door";
		scope = 2;
		descriptionShort = "Large Corrugated Wall Doorway w/ Locking Door";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitWoodFloor: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenFloor_ca.paa";
		displayName = "Wooden Floor";
		scope = 2;
		descriptionShort = "Wooden Floor";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitMetalFloor: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenFloor_ca.paa";
		displayName = "Metal Floor";
		scope = 2;
		descriptionShort = "Metal Floor";
		count = 1;
		mass = 40;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitWoodStairs: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenStairs_ca.paa";
		displayName = "Wooden Stairs";
		scope = 2;
		descriptionShort = "Wooden Stairs";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitWoodStairs2: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodenStairs_ca.paa";
		displayName = "Wooden Stairs 2";
		scope = 2;
		descriptionShort = "Wooden Stairs 2";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitWoodTower: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
		displayName = "Wooden Tower";
		scope = 2;
		descriptionShort = "Wooden Tower";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitWoodRamp: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_woodramp_ca.paa";
		displayName = "Wooden Ramp";
		scope = 2;
		descriptionShort = "Wooden Ramp";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitTankTrap: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
		displayName = "Tank Trap";
		scope = 2;
		descriptionShort = "Tank Trap";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitHesco3: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
		displayName = "Hesco Wide";
		scope = 2;
		descriptionShort = "Hesco Wide";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitWoodLadder: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
		displayName = "Wooden Ladder";
		scope = 2;
		descriptionShort = "Wooden Ladder";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitFoundation: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_foundation_ca.paa";
		displayName = "Concrete Foundation";
		scope = 2;
		descriptionShort = "Concrete Foundation";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitWoodFoundation: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_foundation_ca.paa";
		displayName = "Wood Foundation";
		scope = 2;
		descriptionShort = "Wood Foundation";
		count = 1;
		mass = 10;
	};
	class eXpoch_KitSolarGen: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_wooden_crate_ca.paa";
		displayName = "Solar Generator Kit";
		scope = 2;
		descriptionShort = "Solar Generator Kit";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitPlotPole: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\jammer\equip_jammer_ca.paa";
		displayName = "Frequency Jammer";
		scope = 2;
		descriptionShort = "Frequency Jammer";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitHalfCinderWall: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_cinderHalf_ca.paa";
		displayName = "Half Cinder Wall";
		scope = 2;
		descriptionShort = "Half Cinder Wall";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitCinderWall: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_cinderHalf_ca.paa";
		displayName = "Cinder Wall";
		scope = 2;
		descriptionShort = "Cinder Wall";
		count = 1;
		mass = 40;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};
	class eXpoch_KitCinderWallGarage: Exile_AbstractItem
	{
		author = "Sequisha";
		model = "\x\addons\a3_epoch_assets_1\models\supply_crate.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_cinderHalf_ca.paa";
		displayName = "Cinder Wall Garage";
		scope = 2;
		descriptionShort = "Cinder Wall Garage";
		count = 1;
		mass = 70;
		class Interactions
		{
			class Constructing: Exile_AbstractItem_Interaction_Constructing{};
		};
	};

//Hunting Fishing and Meat
	class eXpoch_ItemBurlap: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_burlap_ca.paa";
		displayName = "Piece of Burlap";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\burlap.p3d";
		descriptionShort = "$STR_EPOCH_ItemBurlap_descriptionShort";
		count = 1;
		mass = 15;
	};
	class eXpoch_ItemTrout: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Rainbow Trout";
		descriptionShort = "Rainbow Trout: A small fish that can be fairly easy to catch.";
		model = "\x\addons\a3_epoch_assets_1\models\trout.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_rainbowtrout_CA.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,15,45}};
			};
		};
	};
	class eXpoch_ItemSeaBass: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Sea Bass";
		descriptionShort = "Sea Bass: A medium sized fish that is fairly rare.";
		model = "\x\addons\a3_epoch_assets_1\models\seabass.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_seabass_CA.paa";
		mass = 10;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,20,45}};
			};
		};
	};
	class eXpoch_ItemTuna: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Blue Fin Tuna";
		descriptionShort = "Blue Fin Tuna: A very large and hard to catch fish. Sushi anyone?";
		model = "\x\addons\a3_epoch_assets_1\models\tuna.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_tuna_CA.paa";
		mass = 50;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,30,30}};
			};
		};
	};
	class eXpoch_ItemTroutCooked: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Rainbow Trout (Cooked)";
		descriptionShort = "Rainbow Trout: A small fish that can be fairly easy to catch.";
		model = "\x\addons\a3_epoch_assets_1\models\trout_cooked.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_trout_cooked_CA.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,30,45}};
			};
		};
	};
	class eXpoch_ItemSeaBassCooked: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Sea Bass (Cooked)";
		descriptionShort = "Sea Bass: A medium sized fish that is fairly rare.";
		model = "\x\addons\a3_epoch_assets_1\models\seabass_cooked.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_seabass_cooked_CA.paa";
		mass = 10;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,45,45}};
			};
		};
	};
	class eXpoch_ItemTunaCooked: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Blue Fin Tuna (Cooked)";
		descriptionShort = "Blue Fin Tuna: A very large and hard to catch fish. Sushi anyone?";
		model = "\x\addons\a3_epoch_assets_1\models\tuna_cooked.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_tuna_cooked_CA.paa";
		mass = 50;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,100,45}};
			};
		};
	};
	class eXpoch_FoodBioMeat: Exile_AbstractItem
	{
		author = "vbgreen,Sequisha";
		scope = 2;
		displayName = "Bio Meat";
		model = "\x\addons\a3_epoch_assets_1\models\biomeat_can.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_biomeat_CA.paa";
		descriptionShort = "Bio Meat: A very good source of nutrition, and a very high chance of infection. Eat at own risk.";
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{0,-5,30},{2,50,45},{4,2.5,120},{5,2,120}};
			};
		};
	};
	class eXpoch_Pelt_EPOCH: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets\textures\meat\equip_scrapHide_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\scrapHide.p3d";
		displayName = "Scrap Pelt";
		scope = 2;
		descriptionShort = "Scrap Pelt";
		count = 1;
		mass = 5;
	};
	class eXpoch_Venom_EPOCH: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets\textures\meat\equip_venomSac_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\venomSac.p3d";
		displayName = "Venom Sack";
		scope = 2;
		descriptionShort = "Venom Sack";
		count = 1;
		mass = 1;
	};
	class eXpoch_SnakeCarcass_EPOCH: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets\textures\meat\equip_snakeCorpse_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\snakeCorpse.p3d";
		displayName = "Snake Carcass";
		scope = 2;
		descriptionShort = "Gutted and cleaned";
		count = 1;
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,15,30},{4,0.1,10}};
			};
		};
	};
	class eXpoch_SnakeMeat_EPOCH: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets\textures\meat\equip_snakemeatCooked_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\snakeMeat_cooked.p3d";
		displayName = "Cooked Snake Meat";
		scope = 2;
		descriptionShort = "Tastes like chicken.";
		count = 1;
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,30,30}};
			};
		};
	};
	class eXpoch_RabbitCarcass_EPOCH: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets\textures\meat\equip_rabbitCorpse_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\rabbit.p3d";
		displayName = "Rabbit Carcass";
		scope = 2;
		descriptionShort = "Gutted and cleaned";
		count = 1;
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,25,30},{4,0.2,10}};
			};
		};
	};
	class eXpoch_TurtleCarcass_EPOCH: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets\textures\meat\equip_rabbitCorpse_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\rabbit.p3d";
		displayName = "Turtle Carcass";
		scope = 2;
		descriptionShort = "Gutted and cleaned";
		count = 1;
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,25,30},{4,0.2,10}};
			};
		};
	};
	class eXpoch_CookedRabbit_EPOCH: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets\textures\meat\equip_rabbitCooked_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\rabbit_cooked.p3d";
		displayName = "Cooked Rabbit";
		scope = 2;
		descriptionShort = "Mmm Tasty!";
		count = 1;
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,40,30}};
			};
		};
	};
	class eXpoch_CookedTurtle_EPOCH: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets\textures\meat\equip_rabbitCooked_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\rabbit_cooked.p3d";
		displayName = "Cooked Turtle";
		scope = 2;
		descriptionShort = "Anyone up for Turtle Soup?!";
		count = 1;
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,40,30}};
			};
		};
	};
	class eXpoch_ChickenCarcass_EPOCH: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets\textures\meat\equip_chickenRaw_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\chickenRaw.p3d";
		displayName = "Chicken Carcass";
		scope = 2;
		descriptionShort = "Gutted and cleaned";
		count = 1;
		mass = 10;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,25,30},{4,0.2,10}};
			};
		};
	};
	class eXpoch_CookedChicken_EPOCH: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets\textures\meat\equip_chickenCooked_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\chicken_cooked.p3d";
		displayName = "Cooked Chicken";
		scope = 2;
		descriptionShort = "Roasted to perfection!";
		count = 1;
		mass = 10;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,40,30}};
			};
		};
	};
	class eXpoch_GoatCarcass_EPOCH: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets\textures\meat\equip_goatLeg_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\goatLeg.p3d";
		displayName = "Raw Goat Leg";
		scope = 2;
		descriptionShort = "Raw Goat Leg";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,25,30},{4,0.3,30}};
			};
		};
	};
	class eXpoch_DogCarcass_EPOCH: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets\textures\meat\equip_goatLeg_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\goatLeg.p3d";
		displayName = "Raw Dog Leg";
		scope = 2;
		descriptionShort = "Raw Dog Leg";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,25,30},{4,0.3,30}};
			};
		};
	};
	class eXpoch_CookedGoat_EPOCH: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets\textures\meat\equip_goatlegCooked_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\goatLeg_cooked.p3d";
		displayName = "Cooked Goat Leg";
		scope = 2;
		descriptionShort = "Cooked Goat Leg";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,60,30}};
			};
		};
	};
	class eXpoch_CookedDog_EPOCH: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets\textures\meat\equip_goatlegCooked_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\goatLeg_cooked.p3d";
		displayName = "Cooked Dog Leg";
		scope = 2;
		descriptionShort = "Cooked Dog Leg";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,50,30}};
			};
		};
	};
	class eXpoch_SheepCarcass_EPOCH: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets\textures\meat\equip_goatLeg_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\goatLeg.p3d";
		displayName = "Raw Sheep Leg";
		scope = 2;
		descriptionShort = "Raw Sheep Leg";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,25,30},{4,0.3,30}};
			};
		};
	};
	class eXpoch_CookedSheep_EPOCH: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets\textures\meat\equip_goatlegCooked_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\goatLeg_cooked.p3d";
		displayName = "Cooked Sheep Leg";
		scope = 2;
		descriptionShort = "Cooked Sheep Leg";
		count = 1;
		mass = 20;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,60,30}};
			};
		};
	};

	
//Various Supplies
	class eXpoch_ItemKiloHemp: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		displayName = "Kilo of Hemp";
		descriptionShort = "Kilo of Hemp";
		model = "\x\addons\a3_epoch_assets_1\models\kilohemp.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_kilohemp_CA.paa";
		mass = 1;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{0,25,30},{2,75,60},{3,-50,60},{4,-5,0}};
			};
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				//successFunction = "ExileClient_object_bush_attachGreenBush";
				//successNotification = "TurnedIntoABushNotification";
			};
		};
	};
	class eXpoch_ItemMixOil: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "2-Stroke Engine Oil";
		model = "\x\addons\a3_epoch_assets_1\models\oilmix.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_oilmix_CA.paa";
		count = 1;
		descriptionShort = "2-Stroke Engine Oil";
		mass = 8;
	};
	class eXpoch_EnergyPack: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\A3\Weapons_F\Data\UI\M_battery_CA.paa";
		displayName = "Small energy pack";
		scope = 2;
		ammo = "B_EnergyPack";
		sound[] = {"A3\sounds_f\dummysound",31.622776,1,1600};
		reloadMagazineSound[] = {"A3\sounds_f\dummysound",0.01,1,10};
		descriptionShort = "Two part container filled with enough energy and matter for one use";
		initSpeed = 420;
		count = 10;
		mass = 4;
	};
	class eXpoch_EnergyPackLg: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\A3\Weapons_F\Data\UI\M_battery_CA.paa";
		displayName = "Large energy pack";
		scope = 2;
		ammo = "B_EnergyPack";
		sound[] = {"A3\sounds_f\dummysound",31.622776,1,1600};
		reloadMagazineSound[] = {"A3\sounds_f\dummysound",0.01,1,10};
		descriptionShort = "Large two part container filled with enough energy and matter 10 uses";
		initSpeed = 420;
		count = 100;
		mass = 40;
	};
	class eXpoch_CircuitParts: Exile_AbstractItem
	{
		author = "Sequisha";
		displayName = "Electronic components";
		picture = "\x\addons\a3_epoch_assets\textures\circuit\equip_circuit_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\circuit.p3d";
		scope = 2;
		descriptionShort = "Electronic components";
		count = 1;
		mass = 5;
	};
	class eXpoch_ItemCoolerE: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Food Cooler (empty)";
		model = "\x\addons\a3_epoch_assets\models\cooler.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\cooler\gear_cooler_ca.paa";
		count = 1;
		descriptionShort = "Seal-a-Meal, its cold in here.";
		mass = 1;
	};
	class eXpoch_ItemCooler0: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Food Cooler";
		model = "\x\addons\a3_epoch_assets\models\cooler.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\cooler\gear_cooler_ca.paa";
		count = 1;
		descriptionShort = "Contains: Cooked Snake Meat and a drink";
		mass = 20;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,60,30},{3,50,30}};
			};
		};
	};
	class eXpoch_ItemCooler1: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Food Cooler";
		model = "\x\addons\a3_epoch_assets\models\cooler.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\cooler\gear_cooler_ca.paa";
		count = 1;
		descriptionShort = "Contains: Cooked Rabbit Meat and a drink";
		mass = 25;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,70,30},{3,50,30}};
			};
		};
	};
	class eXpoch_ItemCooler2: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Food Cooler";
		model = "\x\addons\a3_epoch_assets\models\cooler.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\cooler\gear_cooler_ca.paa";
		count = 1;
		descriptionShort = "Contains: Cooked Chicken and a drink";
		mass = 30;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,80,30},{3,60,30}};
			};
		};
	};
	class eXpoch_ItemCooler3: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Food Cooler";
		model = "\x\addons\a3_epoch_assets\models\cooler.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\cooler\gear_cooler_ca.paa";
		count = 1;
		descriptionShort = "Contains: Cooked Goat Leg and a drink";
		mass = 40;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,90,30},{3,70,30}};
			};
		};
	};
	class eXpoch_ItemCooler4: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Food Cooler";
		model = "\x\addons\a3_epoch_assets\models\cooler.p3d";
		picture = "\x\addons\a3_epoch_assets\textures\cooler\gear_cooler_ca.paa";
		count = 1;
		descriptionShort = "Contains: Cooked Sheep Leg and a drink";
		mass = 40;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{2,90,30},{3,80,30}};
			};
		};
	};

//Ammo for Awesome Epoch weapons
/*	class 30Rnd_test_mag: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Test magazine";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa";
		ammo = "B_Test_Caseless";
		count = 30;
		initSpeed = 795;
		tracersEvery = 0;
		lastRoundsTracer = 4;
		descriptionShort = "Used to shoot test bullets";
	};
	class 5Rnd_rollins_mag: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Rollins magazine";
		picture = "\x\addons\a3_epoch_assets\textures\rol_rounds\equip_Rol_rounds_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\rol_rounds.p3d";
		ammo = "B_Test_Caseless";
		count = 5;
		initSpeed = 795;
		tracersEvery = 0;
		lastRoundsTracer = 4;
		descriptionShort = "Rollins 5Rnd Magazine";
		mass = 3;
	};
	class CSGAS: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Chainsaw Gas";
		picture = "\x\addons\a3_epoch_assets\textures\kits\gear_jerryMixed_ca.paa";
		ammo = "ChainSaw_Bullet";
		count = 1000;
		initSpeed = 100;
		tracersEvery = 0;
		lastRoundsTracer = 9999;
		descriptionShort = "Chainsaw Gas";
		mass = 5;
	};
	class sledge_swing: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Swing";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_swing_ca.paa";
		ammo = "B_Swing";
		count = 1000;
		initSpeed = 275;
		tracersEvery = 0;
		lastRoundsTracer = 9999;
		descriptionShort = "Swing";
		mass = 0;
	};
	class stick_swing: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Swing";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_swing_ca.paa";
		ammo = "B_Stick";
		count = 1000;
		initSpeed = 275;
		tracersEvery = 0;
		lastRoundsTracer = 9999;
		descriptionShort = "Swing";
		mass = 0;
	};
	class hatchet_swing: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		displayName = "Swing";
		picture = "\x\addons\a3_epoch_assets\textures\kits\equip_swing_ca.paa";
		ammo = "B_Hatchet";
		count = 1000;
		initSpeed = 100;
		tracersEvery = 0;
		lastRoundsTracer = 9999;
		descriptionShort = "Swing";
		mass = 0;
	};
	class 30Rnd_test_mag_Tracer: 30Rnd_test_mag
	{
		tracersEvery = 1;
		lastRoundsTracer = 30;
		displayName = "Test tracer magazine";
		descriptionShort = "Used to shoot test tracer bullets";
		displaynameshort = "Tracers";
	};*/

//Documents for skills and upgrades
	class eXpoch_ItemDoc1: Exile_AbstractItem
	{
		author = "Sequisha";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_child1_ca.paa";
		displayName = "Document A";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\doc_child1.p3d";
		descriptionShort = "$STR_EPOCH_ItemDoc1_descriptionShort";
		count = 1;
		mass = 1;
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "";
				successNotification = "";
			};
		};
	};
	class eXpoch_ItemDoc2: eXpoch_ItemDoc1
	{
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_child2_ca.paa";
		displayName = "Document B";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\doc_child2.p3d";
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "";
				successNotification = "";
			};
		};
	};
	class eXpoch_ItemDoc3: eXpoch_ItemDoc1
	{
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_deaths_ca.paa";
		displayName = "Document C";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\doc_deaths.p3d";
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "";
				successNotification = "";
			};
		};
	};
	class eXpoch_ItemDoc4: eXpoch_ItemDoc1
	{
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_doc_generic_ca.paa";
		displayName = "Document D";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\doc_generic.p3d";
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "";
				successNotification = "";
			};
		};
	};
	class eXpoch_ItemDoc5: eXpoch_ItemDoc1
	{
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_doc_letter_ca.paa";
		displayName = "Document E";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\doc_letter.p3d";
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "";
				successNotification = "";
			};
		};
	};
	class eXpoch_ItemDoc6: eXpoch_ItemDoc1
	{
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_doc_ramp_ca.paa";
		displayName = "Document F";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\doc_ramp.p3d";
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "";
				successNotification = "";
			};
		};
	};
	class eXpoch_ItemDoc7: eXpoch_ItemDoc1
	{
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_child2_ca.paa";
		displayName = "Document G";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\doc_trashy1.p3d";
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "";
				successNotification = "";
			};
		};
	};
	class eXpoch_ItemDoc8: eXpoch_ItemDoc1
	{
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_child2_ca.paa";
		displayName = "Document H";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\doc_trashy2.p3d";
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "";
				successNotification = "";
			};
		};
	};
	class eXpoch_ItemVehDoc1: eXpoch_ItemDoc1
	{
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_docup1_ca.paa";
		displayName = "Vehicle Upgrade I";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\doc_Up1.p3d";
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "";
				successNotification = "";
			};
		};
	};
	class eXpoch_ItemVehDoc2: eXpoch_ItemDoc1
	{
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_docup2_ca.paa";
		displayName = "Vehicle Upgrade II";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\doc_Up2.p3d";
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "";
				successNotification = "";
			};
		};
	};
	class eXpoch_ItemVehDoc3: eXpoch_ItemDoc1
	{
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_docup3_ca.paa";
		displayName = "Vehicle Upgrade III";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\doc_Up3.p3d";
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "";
				successNotification = "";
			};
		};
	};
	class eXpoch_ItemVehDoc4: eXpoch_ItemDoc1
	{
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_docup4_ca.paa";
		displayName = "Vehicle Upgrade IV";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\doc_Up4.p3d";
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "";
				successNotification = "";
			};
		};
	};
	class eXpoch_ItemDocument: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		displayName = "Document";
		model = "\x\addons\a3_epoch_assets_1\models\doc_generic.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_doc_generic_ca.paa";
		descriptionShort = "Unknown document";
		mass = 1;
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "";
				successNotification = "";
			};
		};
	};
	class eXpoch_ItemDocumentMission: Exile_AbstractItem
	{
		author = "Sequisha";
		scope = 2;
		count = 1;
		displayName = "Mission Document";
		model = "\x\addons\a3_epoch_assets_1\models\doc_generic.p3d";
		picture = "\x\addons\a3_epoch_assets_1\pictures\equip_doc_generic_ca.paa";
		descriptionShort = "A very important message, Eyes Only !";
		mass = 1;
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "";
				successNotification = "";
			};
		};
	};

	//DonkeyPunch added eXpoch items from the DonkeyPunch Addon for Exile ;) told ya
		///////////////////////////////
	//Drink Items
	///////////////////////////////
	class eXpoch_Item_Spirit_Rusty : Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Rusty Spirit Lemon-Lime";
		descriptionShort = "DonkeyPunch Presents: Rusty Can of Spirit Soda.<br/>Thirst: +30%/15s<br/>Health: -10%/5s";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Can_Rusty_F.jpg";
		model = "\A3\Structures_F\Items\Food\Can_Rusty_F.p3d";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "DP_Exile_EmptyCan_F";
				effects[] = {{ 3,50,15 },{ 0,-10,5 }};
			};
		};
	};
	class eXpoch_Item_Spirit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Spirit Lemon-Lime";
		descriptionShort = "DonkeyPunch Presents: Spirit Soda.<br/>Thirst: +30%/15s";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Can_V1_F.jpg";
		model = "\A3\Structures_F\Items\Food\Can_V1_F.p3d";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "DP_Exile_EmptyCan_F";
				effects[] = {{ 3,50,15 },{ 0,-10,5 }};
			};
		};
	};
	class eXpoch_Item_Fanta : Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Orange Franta";
		descriptionShort = "DonkeyPunch Presents: No Juice Orange DRINK.<br/>Thirst: +30%/15s";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Can_V2_F.jpg";
		model = "\A3\Structures_F\Items\Food\Can_V2_F.p3d";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "DP_Exile_EmptyCan_F";
				effects[] = {{ 3,50,15 }};
			};
		};
	};	
	class eXpoch_Item_RedGull : Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Red Gull";
		descriptionShort = "DonkeyPunch Presents: High Concentration Energy Drink.<br/>Thirst: +50%/10s";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Can_V3_F.jpg";
		model = "\A3\Structures_F\Items\Food\Can_V3_F.p3d";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Drinking
			{
				returnedItem = "DP_Exile_EmptyCan_F";
				effects[] = {{ 3,50,10 }};
			};
		};
	};
	class eXpoch_Item_EmptyCan_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Empty Can";
		descriptionShort = "DonkeyPunch Presents: Empty Can.";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Can_Dented_F.jpg";
		model = "\A3\Structures_F\Items\Food\Can_Dented_F.p3d";
		mass = 1;
		class Interactions {};
	};
	///////////////////////////////
	//Food Items
	///////////////////////////////
	class eXpoch_Item_TacticalBacon: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Tactical Bacon! (Cooked)";
		descriptionShort = "Tactical Bacon by DonkeyPunch.INFO!<br/>Hunger +100%/15s";
		model = "\A3\Structures_F\Items\Food\TacticalBacon_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_TacticalBacon_F.jpg";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{ 2,60,15 }};
			};
		};
	};
	class eXpoch_Item_BakedBeans: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Baked Beans! (Cooked)";
		descriptionShort = "Baked Beans by DonkeyPunch.INFO!<br/>Hunger +100%/10s";
		model = "\A3\Structures_F_EPA\Items\Food\BakedBeans_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_BakedBeans_F.jpg";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating_Can
			{
				effects[] = {{ 2,60,10 }};
			};
		};
	};
	class eXpoch_Item_CrunchinCrisps: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Crunchin Crisps!";
		descriptionShort = "Crunchin Crisps by DonkeyPunch.INFO!<br/>Hunger +100%/10s";
		model = "\A3\Structures_F_EPA\Items\Food\CerealsBox_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_CerealsBox_F.jpg";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,60,10 }};
			};
		};
	};
	class eXpoch_Item_PowderedMilk: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Powdered Milk!";
		descriptionShort = "Powdered Milk by DonkeyPunch.INFO!<br/>Hunger +50%/10s";
		model = "\A3\Structures_F_EPA\Items\Food\PowderedMilk_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_PowderedMilk_F.jpg";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,50,10 }};
			};
		};
	};
	class eXpoch_Item_RichRice: Exile_AbstractItem
	{
		scope = 2;
		displayName = "DP Natural RichRice!";
		descriptionShort = "Natural RichRice by DonkeyPunch.INFO!<br/>Hunger +100%/5s";
		model = "\A3\Structures_F_EPA\Items\Food\RiceBox_F.p3d";
		picture = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_RiceBox_F.jpg";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,70,20 }};
			};
		};
	};
	
	class eXpoch_Item_Salema_Raw: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Fresh Salema";
		descriptionShort = "Salema by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\Salema_porgy_F.p3d";
		picture = "\eXpoch_characters\textures\fish\Salema_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,30,120 },{4,0.3,30}};
			};
		};
	};
	class eXpoch_Item_Mackerel_Raw: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Fresh Mackerel";
		descriptionShort = "Mackeral by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\mackerel_F.p3d";
		picture = "\eXpoch_characters\textures\fish\Mackerel_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,30,120 },{4,0.3,30}};
			};
		};
	};
	class eXpoch_Item_Tuna_Raw: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Fresh Tuna";
		descriptionShort = "Tuna Fish by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\Tuna_F.p3d";
		picture = "\eXpoch_characters\textures\fish\Tuna_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,30,120 },{4,0.3,30}};
			};
		};
	};
	class eXpoch_Item_Mullet_Raw: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Fresh Mullet";
		descriptionShort = "Mullet Fish by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\Mullet_F.p3d";
		picture = "\eXpoch_characters\textures\fish\Mullet_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,30,120 },{4,0.3,30}};
			};
		};
	};
	class eXpoch_Item_CatShark_Raw: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Fresh CatShark!";
		descriptionShort = "CatShark by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\CatShark_F.p3d";
		picture = "\eXpoch_characters\textures\fish\CatShark_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,30,120 },{4,0.3,30}};
			};
		};
	};
	class eXpoch_Item_Ornate_Raw: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Fresh Ornate";
		descriptionShort = "Ornate by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\ornate_F.p3d";
		picture = "\eXpoch_characters\textures\fish\Ornate_random_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,30,120 },{4,0.3,30}};
			};
		};
	};

	class eXpoch_Item_Salema_Gutted: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Salema Gutted";
		descriptionShort = "Salema by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\Salema_porgy_F.p3d";
		picture = "\eXpoch_characters\textures\fish\Salema_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,40,60 },{4,0.1,30}};
			};
		};
	};
	class eXpoch_Item_Mackerel_Gutted: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Mackerel Gutted";
		descriptionShort = "Mackeral by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\mackerel_F.p3d";
		picture = "\eXpoch_characters\textures\fish\Mackerel_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,40,60 },{4,0.1,30}};
			};
		};
	};
	class eXpoch_Item_Tuna_Gutted: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Tuna Gutted";
		descriptionShort = "Tuna Fish by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\Tuna_F.p3d";
		picture = "\eXpoch_characters\textures\fish\Tuna_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,40,60 },{4,0.1,30}};
			};
		};
	};
	class eXpoch_Item_Mullet_Gutted: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Mullet Gutted";
		descriptionShort = "Mullet Fish by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\Mullet_F.p3d";
		picture = "\eXpoch_characters\textures\fish\Mullet_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,40,60 },{4,0.1,30}};
			};
		};
	};
	class eXpoch_Item_CatShark_Gutted: Exile_AbstractItem
	{
		scope = 2;
		displayName = "CatShark Gutted";
		descriptionShort = "CatShark by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\CatShark_F.p3d";
		picture = "\eXpoch_characters\textures\fish\CatShark_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,40,60 },{4,0.1,30}};
			};
		};
	};
	class eXpoch_Item_Ornate_Gutted: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Ornate Gutted";
		descriptionShort = "Ornate by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\ornate_F.p3d";
		picture = "\eXpoch_characters\textures\fish\Ornate_random_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,40,60 },{4,0.1,30}};
			};
		};
	};

	
	class eXpoch_Item_Salema_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Salema Cooked";
		descriptionShort = "Salema by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\Salema_porgy_F.p3d";
		picture = "\eXpoch_characters\textures\fish\Salema_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,80,20 }};
			};
		};
	};
	class eXpoch_Item_Mackerel_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Mackerel Cooked";
		descriptionShort = "Mackeral by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\mackerel_F.p3d";
		picture = "\eXpoch_characters\textures\fish\Mackerel_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,80,20 }};
			};
		};
	};
	class eXpoch_Item_Tuna_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Tuna Cooked";
		descriptionShort = "Tuna Fish by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\Tuna_F.p3d";
		picture = "\eXpoch_characters\textures\fish\Tuna_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,80,20 }};
			};
		};
	};
	class eXpoch_Item_Mullet_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Mullet Cooked";
		descriptionShort = "Mullet Fish by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\Mullet_F.p3d";
		picture = "\eXpoch_characters\textures\fish\Mullet_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,80,20 }};
			};
		};
	};
	class eXpoch_Item_CatShark_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "CatShark Cooked";
		descriptionShort = "CatShark by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\CatShark_F.p3d";
		picture = "\eXpoch_characters\textures\fish\CatShark_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,80,20 }};
			};
		};
	};
	class eXpoch_Item_Ornate_Cooked: Exile_AbstractItem
	{
		scope = 2;
		displayName = "Ornate Cooked";
		descriptionShort = "Ornate by DonkeyPunch.INFO!<br/>Hunger +100%/20s";
		model = "\A3\animals_f\Fishes\ornate_F.p3d";
		picture = "\eXpoch_characters\textures\fish\Ornate_random_F.paa";
		mass = 5;
		class Interactions
		{
			class Consuming: Exile_AbstractItem_Interaction_Eating
			{
				effects[] = {{ 2,80,20 }};
			};
		};
	};

	class ItemLockbox: CA_Magazine
	{
		scope = 0;
	};
	class ItemSafe: CA_Magazine
	{
		scope = 0;
	};
	class KitTiPi: CA_Magazine
	{
		scope = 0;
	};
	class KitShelf: CA_Magazine
	{
		scope = 0;
	};
	class ItemBriefcaseE: CA_Magazine
	{
		scope = 0;
	};
	class ItemBriefcaseGold100oz: CA_Magazine
	{
		scope = 0;
	};class ItemGoldBar10oz: CA_Magazine
	{
		scope = 0;
	};
	class ItemGoldBar: CA_Magazine
	{
		scope = 0;
	};
	class PartOreGold: CA_Magazine
	{
		scope = 0;
	};
	class ItemSilverBar: CA_Magazine
	{
		scope = 0;
	};
	class PartOreSilver: CA_Magazine
	{
		scope = 0;
	};
	class PartOre: CA_Magazine
	{
		scope = 0;
	};
	class ItemAluminumBar: CA_Magazine
	{
		scope = 0;
	};
	class ItemCopperBar: CA_Magazine
	{
		scope = 0;
	};
	class ItemTinBar: CA_Magazine
	{
		scope = 0;
	};
	class ItemEmptyTin: CA_Magazine
	{
		scope = 0;
	};
	class ItemTopaz: CA_Magazine
	{
		scope = 0;
	};
	class ItemOnyx: CA_Magazine
	{
		scope = 0;
	};
	class ItemSapphire: CA_Magazine
	{
		scope = 0;
	};
	class ItemAmethyst: CA_Magazine
	{
		scope = 0;
	};
	class ItemEmerald: CA_Magazine
	{
		scope = 0;
	};
	class ItemCitrine: CA_Magazine
	{
		scope = 0;
	};
	class ItemRuby: CA_Magazine
	{
		scope = 0;
	};
	class ItemQuartz: CA_Magazine
	{
		scope = 0;
	};
	class ItemJade: CA_Magazine
	{
		scope = 0;
	};
	class ItemGarnet: CA_Magazine
	{
		scope = 0;
	};
	class ItemHotwire: CA_Magazine
	{
		scope = 0;
	};
	class ItemKeyKit: CA_Magazine
	{
		scope = 0;
	};
	class ItemKey: CA_Magazine
	{
		scope = 0;
	};
	class ItemKeyBlue: CA_Magazine
	{
		scope = 0;
	};
	class ItemKeyGreen: CA_Magazine
	{
		scope = 0;
	};
	class ItemKeyRed: CA_Magazine
	{
		scope = 0;
	};
	class ItemKeyYellow: CA_Magazine
	{
		scope = 0;
	};
	class ItemSodaAlpineDude: CA_Magazine
	{
		scope = 0;
	};
	class honey_epoch: CA_Magazine
	{
		scope = 0;
	};
	class emptyjar_epoch: CA_Magazine
	{
		scope = 0;
	};
	class ItemSodaRbull: CA_Magazine
	{
		scope = 0;
	};
	class ItemSodaOrangeSherbet: CA_Magazine
	{
		scope = 0;
	};
	class ItemSodaPurple: CA_Magazine
	{
		scope = 0;
	};
	class ItemSodaMocha: CA_Magazine
	{
		scope = 0;
	};
	class ItemSodaBurst: CA_Magazine
	{
		scope = 0;
	};
	class WhiskeyNoodle: CA_Magazine
	{
		scope = 0;
	};
	class sardines_epoch: CA_Magazine
	{
		scope = 0;
	};
	class meatballs_epoch: CA_Magazine
	{
		scope = 0;
	};
	class scam_epoch: CA_Magazine
	{
		scope = 0;
	};
	class sweetcorn_epoch: CA_Magazine
	{
		scope = 0;
	};
	class FoodMeeps: CA_Magazine
	{
		scope = 0;
	};
	class FoodSnooter: CA_Magazine
	{
		scope = 0;
	};
	class FoodWalkNSons: CA_Magazine
	{
		scope = 0;
	};
	class Poppy: CA_Magazine
	{
		scope = 0;
	};
	class Goldenseal: CA_Magazine
	{
		scope = 0;
	};
	class Pumpkin: CA_Magazine
	{
		scope = 0;
	};
	class Towelette: CA_Magazine
	{
		scope = 0;
	};
	class HeatPack: CA_Magazine
	{
		scope = 0;
	};
	class ColdPack: CA_Magazine
	{
		scope = 0;
	};
	class lighter_epoch: CA_Magazine
	{
		scope = 0;
	};
	class ItemBarrelF: CA_Magazine
	{
		scope = 0;
	};
	class ItemBarrelE: CA_Magazine
	{
		scope = 0;
	};
	class ItemPipe: CA_Magazine
	{
		scope = 0;
	};
	class ItemPlywoodPack: CA_Magazine
	{
		scope = 0;
	};
	class ItemComboLock: CA_Magazine
	{
		scope = 0;
	};
	class PartPlankPack: CA_Magazine
	{
		scope = 0;
	};
	class CinderBlocks: CA_Magazine
	{
		scope = 0;
	};
	class MortarBucket: CA_Magazine
	{
		scope = 0;
	};
	class ItemRock: CA_Magazine
	{
		scope = 0;
	};
	class ItemStick: CA_Magazine
	{
		scope = 0;
	};
	class ItemRope: CA_Magazine
	{
		scope = 0;
	};
	class ItemPacked: CA_Magazine
	{
		scope = 0;
	};
	class ItemSolar: CA_Magazine
	{
		scope = 0;
	};
	class ItemCables: CA_Magazine
	{
		scope = 0;
	};
	class ItemBattery: CA_Magazine
	{
		scope = 0;
	};
	class ItemScraps: CA_Magazine
	{
		scope = 0;
	};
	class ItemCorrugated: CA_Magazine
	{
		scope = 0;
	};
	class ItemCorrugatedLg: CA_Magazine
	{
		scope = 0;
	};
	class WoodLog_EPOCH: CA_Magazine
	{
		scope = 0;
	};
	class PaintCanBase: CA_Magazine
	{
		scope = 0;
	};
	class PaintCanClear: CA_Magazine
	{
		scope = 0;
	};
	class PaintCanBlk: CA_Magazine
	{
		scope = 0;
	};
	class PaintCanBlu: CA_Magazine
	{
		scope = 0;
	};
	class PaintCanBrn: CA_Magazine
	{
		scope = 0;
	};
	class PaintCanGrn: CA_Magazine
	{
		scope = 0;
	};
	class PaintCanOra: CA_Magazine
	{
		scope = 0;
	};
	class PaintCanPur: CA_Magazine
	{
		scope = 0;
	};
	class PaintCanRed: CA_Magazine
	{
		scope = 0;
	};
	class PaintCanTeal: CA_Magazine
	{
		scope = 0;
	};
	class PaintCanYel: CA_Magazine
	{
		scope = 0;
	};
	class KitSpikeTrap: CA_Magazine
	{
		scope = 0;
	};
	class KitMetalTrap: CA_Magazine
	{
		scope = 0;
	};
	class KitStudWall: CA_Magazine
	{
		scope = 0;
	};
	class KitLargeWoodWall: CA_Magazine
	{
		scope = 0;
	};
	class KitLargeCorrugatedWall: CA_Magazine
	{
		scope = 0;
	};
	class KitLargeWoodWallDoorway: CA_Magazine
	{
		scope = 0;
	};
	class KitLargeCorrugatedWallDoorway: CA_Magazine
	{
		scope = 0;
	};
	class KitLargeWoodWallwDoor: CA_Magazine
	{
		scope = 0;
	};
	class KitLargeWoodWallwDoorwLock: CA_Magazine
	{
		scope = 0;
	};
	class KitLargeCorrugatedWallwDoorwLock: CA_Magazine
	{
		scope = 0;
	};
	class KitWoodFloor: CA_Magazine
	{
		scope = 0;
	};
	class KitMetalFloor: CA_Magazine
	{
		scope = 0;
	};
	class KitWoodStairs: CA_Magazine
	{
		scope = 0;
	};
	class KitWoodStairs2: CA_Magazine
	{
		scope = 0;
	};
	class KitWoodTower: CA_Magazine
	{
		scope = 0;
	};
	class KitWoodRamp: CA_Magazine
	{
		scope = 0;
	};
	class KitTankTrap: CA_Magazine
	{
		scope = 0;
	};
	class KitHesco3: CA_Magazine
	{
		scope = 0;
	};
	class KitWoodLadder: CA_Magazine
	{
		scope = 0;
	};
	class KitFoundation: CA_Magazine
	{
		scope = 0;
	};
	class KitWoodFoundation: CA_Magazine
	{
		scope = 0;
	};
	class KitSolarGen: CA_Magazine
	{
		scope = 0;
	};
	class KitPlotPole: CA_Magazine
	{
		scope = 0;
	};
	class KitHalfCinderWall: CA_Magazine
	{
		scope = 0;
	};
	class KitCinderWall: CA_Magazine
	{
		scope = 0;
	};
	class KitCinderWallGarage: CA_Magazine
	{
		scope = 0;
	};
	class ItemBurlap: CA_Magazine
	{
		scope = 0;
	};
	class ItemTrout: CA_Magazine
	{
		scope = 0;
	};
	class ItemSeaBass: CA_Magazine
	{
		scope = 0;
	};
	class ItemTuna: CA_Magazine
	{
		scope = 0;
	};
	class ItemTroutCooked: CA_Magazine
	{
		scope = 0;
	};
	class ItemSeaBassCooked: CA_Magazine
	{
		scope = 0;
	};
	class ItemTunaCooked: CA_Magazine
	{
		scope = 0;
	};
	class FoodBioMeat: CA_Magazine
	{
		scope = 0;
	};
	class Pelt_EPOCH: CA_Magazine
	{
		scope = 0;
	};
	class Venom_EPOCH: CA_Magazine
	{
		scope = 0;
	};
	class SnakeCarcass_EPOCH: CA_Magazine
	{
		scope = 0;
	};
	class SnakeMeat_EPOCH: CA_Magazine
	{
		scope = 0;
	};
	class RabbitCarcass_EPOCH: CA_Magazine
	{
		scope = 0;
	};
	class TurtleCarcass_EPOCH: CA_Magazine
	{
		scope = 0;
	};
	class CookedRabbit_EPOCH: CA_Magazine
	{
		scope = 0;
	};
	class CookedTurtle_EPOCH: CA_Magazine
	{
		scope = 0;
	};
	class ChickenCarcass_EPOCH: CA_Magazine
	{
		scope = 0;
	};
	class CookedChicken_EPOCH: CA_Magazine
	{
		scope = 0;
	};
	class GoatCarcass_EPOCH: CA_Magazine
	{
		scope = 0;
	};
	class DogCarcass_EPOCH: CA_Magazine
	{
		scope = 0;
	};
	class CookedGoat_EPOCH: CA_Magazine
	{
		scope = 0;
	};
	class CookedDog_EPOCH: CA_Magazine
	{
		scope = 0;
	};
	class SheepCarcass_EPOCH: CA_Magazine
	{
		scope = 0;
	};
	class CookedSheep_EPOCH: CA_Magazine
	{
		scope = 0;
	};
	class ItemKiloHemp: CA_Magazine
	{
		scope = 0;
	};
	class ItemMixOil: CA_Magazine
	{
		scope = 0;
	};
	class EnergyPack: CA_Magazine
	{
		scope = 0;
	};
	class EnergyPackLg: CA_Magazine
	{
		scope = 0;
	};
	class CircuitParts: CA_Magazine
	{
		scope = 0;
	};
	class ItemCoolerE: CA_Magazine
	{
		scope = 0;
	};
	class ItemCooler0: CA_Magazine
	{
		scope = 0;
	};
	class ItemCooler1: CA_Magazine
	{
		scope = 0;
	};
	class ItemCooler2: CA_Magazine
	{
		scope = 0;
	};
	class ItemCooler3: CA_Magazine
	{
		scope = 0;
	};
	class ItemCooler4: CA_Magazine
	{
		scope = 0;
	};
	class ItemDoc1: CA_Magazine
	{
		scope = 0;
	};
	class ItemDoc2: CA_Magazine
	{
		scope = 0;
	};
	class ItemDoc3: CA_Magazine
	{
		scope = 0;
	};
	class ItemDoc4: CA_Magazine
	{
		scope = 0;
	};
	class ItemDoc5: CA_Magazine
	{
		scope = 0;
	};
	class ItemDoc6: CA_Magazine
	{
		scope = 0;
	};
	class ItemDoc7: CA_Magazine
	{
		scope = 0;
	};
	class ItemDoc8: CA_Magazine
	{
		scope = 0;
	};
	class ItemVehDoc1: CA_Magazine
	{
		scope = 0;
	};
	class ItemVehDoc2: CA_Magazine
	{
		scope = 0;
	};
	class ItemVehDoc3: CA_Magazine
	{
		scope = 0;
	};
	class ItemVehDoc4: CA_Magazine
	{
		scope = 0;
	};
	class ItemDocument: CA_Magazine
	{
		scope = 0;
	};
	class ItemDocumentMission: CA_Magazine
	{
		scope = 0;
	};	
};
class CfgVehicleClasses
{
	class eXpochConstructions
	{
		displayName = "eXpoch Constructions";
	};
	class eXpochContainers
	{
		displayName = "eXpoch Containers";
	};
	class eXpochCars
	{
		displayName = "eXpoch Cars";
	};
	class eXpochBikes
	{
		displayName = "eXpoch Bikes";
	};
	class eXpochPlanes
	{
		displayName = "eXpoch Planes";
	};
	class eXpochBoats
	{
		displayName = "eXpoch Boats";
	};
	class eXpochChoppers
	{
		displayName = "eXpoch Choppers";
	};
};
class SmallFire;
class AnimationSources;
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UniformSlotInfo;
class CfgVehicles
{
	class thingX;
	class NonStrategic;
	class ReammoBox_F;
	class B_Soldier_base_F;
	class Exile_Trader_Abstract: B_Soldier_base_F
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Exile Trader Base";
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
		vehicleClass = "Men";
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};
		respawnItems[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		backpack = "";
		canCarryBackPack = 1;
		nakedUniform = "U_BasicBody";
		model = "\A3\characters_F\common\coveralls";
		uniformClass = "";
		class EventHandlers
		{
			init = "";
		};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Trade";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show";
			};
		};
		actionBegin1 = "trade";
		actionEnd1 = "trade";
	};
	class Exile_Trader_WasteDump: Exile_Trader_Abstract
	{
		displayName = "Exile Waste Dump Trader";
		uniformClass = "U_I_G_Story_Protagonist_F";
		linkedItems[] = {"V_Rangemaster_belt","H_MilCap_gry"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Trade from Vehicle";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_wasteDumpDialog_show";
			};
			class tradeinv
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Trade from Inventory";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show";
			};
		};
	};
	class Exile_Trader_KeeshasKlothing: Exile_Trader_Abstract
	{
		displayName = "eXpoch Keesha's Klothing Trader";
		uniformClass = "U_I_G_Story_Protagonist_F";
		linkedItems[] = {"V_Rangemaster_belt","H_MilCap_gry"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Outfitters";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show";
			};
		};
	};
	class Exile_Trader_TheDogCatcher: Exile_Trader_Abstract
	{
		displayName = "The Dog Catcher";
		uniformClass = "U_I_G_Story_Protagonist_F";
		linkedItems[] = {"V_Rangemaster_belt","H_MilCap_gry"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Abused and Malnurished";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call eXpochClient_gui_animalTraderDialog_show";
			};
			class trade1
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Papers and Shots";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call eXpochClient_gui_animalTraderDialog_show";
			};
		};
	};
	class Exile_Trader_Mercenary: Exile_Trader_Abstract
	{
		displayName = "Mercenary Pimp";
		uniformClass = "U_I_G_Story_Protagonist_F";
		linkedItems[] = {"V_Rangemaster_belt","H_MilCap_gry"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Rent A Merc";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call eXpochClient_gui_mercTraderDialog_show";
			};
		};
	};
	/////////////////////////////////////////
	// Hero Traders
	/////////////////////////////////////////
	class Exile_Trader_Armory_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Armory Trader";
		uniformClass = "U_Rangemaster";
		linkedItems[] = {"V_Rangemaster_belt","H_Cap_headphones","G_Shades_Black"};
		weapons[] = {"srifle_DMR_06_olive_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' color='#0000FF' shadow='false' /><t color='#0000FF' shadow='false'>Armory Trader</t>";//Hero Armory";//"<t color='#0000FF'>Armory Trader</t>"
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_hero";
			};
		};
	};
	class Exile_Trader_SpecialOperations_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Special Operations Trader";
		backpack = "B_Parachute";
		linkedItems[] = {"V_PlateCarrierGL_blk","H_HelmetB_light_black","G_Balaclava_lowprofile","NVGoggles_OPFOR","muzzle_snds_H","acc_pointer_IR","optic_KHS_blk","bipod_03_F_blk"};
		uniformClass = "U_B_CTRG_1";
		weapons[] = {"arifle_MX_Black_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' color='#0000FF' shadow='false' /><t color='#0000FF' shadow='false'>Spec-Ops Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_hero";
			};
		};
	};
	class Exile_Trader_Equipment_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Equipment Trader";
		uniformClass = "U_BG_Guerrilla_6_1";
		linkedItems[] = {"V_I_G_resistanceLeader_F","H_Watchcap_khk","optic_KHS_blk"};
		weapons[] = {"arifle_MX_GL_Black_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' color='#0000FF' shadow='false' /><t color='#0000FF' shadow='false'>Equipment Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_hero";
			};
		};
	};
	class Exile_Trader_Food_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Food Trader";
		uniformClass = "U_C_Poloshirt_blue";
		linkedItems[] = {"H_Cap_tan"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' color='#0000FF' shadow='false' /><t color='#0000FF' shadow='false'>Food Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_hero";
			};
		};
	};
	class Exile_Trader_Hardware_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Hardware Trader";
		backpack = "B_UAV_01_backpack_F";
		uniformClass = "U_C_WorkerCoveralls";
		linkedItems[] = {"V_BandollierB_rgr","H_Booniehat_khk_hs"};
		weapons[] = {};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' color='#0000FF' shadow='false' /><t color='#0000FF' shadow='false'>Hardware Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_hero";
			};
			class pin
			{
				displayName = "<img image='\exile_assets\texture\ui\code_pad_ca.paa' size='1' color='#0000FF' shadow='false' /><t color='#0000FF' shadow='false'>Change Pin</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this spawn ExileClient_gui_vehicleRekeyDialog_show";
			};
		};
	};
	class Exile_Trader_Vehicle_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Vehicle Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {"H_RacingHelmet_4_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\mptable\soft_ca.paa' size='1' color='#0000FF' shadow='false' /><t color='#0000FF' shadow='false'>Vehicle Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show_hero";
			};
			class customs
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' color='#0000FF' shadow='false' /><t color='#0000FF' shadow='false'>Vehicle Paintjob's</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show_hero";
			};
		};
	};
	class Exile_Trader_Aircraft_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Aircraft Trader";
		uniformClass = "U_I_pilotCoveralls";
		linkedItems[] = {"H_PilotHelmetHeli_O"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\map\vehicleicons\iconhelicopter_ca.paa' size='1' color='#0000FF' shadow='false' /><t color='#0000FF' shadow='false'>Aircraft Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show_hero";
			};
			class customs
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' color='#0000FF' shadow='false' /><t color='#0000FF' shadow='false'>Aircraft Paintjob's</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show_hero";
			};
		};
	};
	class Exile_Trader_Boat_Hero: Exile_Trader_Abstract
	{
		displayName = "Hero Boat Trader";
		uniformClass = "U_OrestesBody";
		linkedItems[] = {"H_Cap_surfer"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\map\vehicleicons\iconship_ca.paa' size='1' color='#0000FF' shadow='false' /><t color='#0000FF' shadow='false'>Boat Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show_hero";
			};
			class customs
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' color='#0000FF' shadow='false' /><t color='#0000FF' shadow='false'>Boat Paintjob's</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show_hero";
			};
		};
	};
	/////////////////////////////////////////
	// Bandit Traders
	/////////////////////////////////////////
	class Exile_Trader_Armory_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Armory Trader";
		uniformClass = "U_Rangemaster";
		linkedItems[] = {"V_Rangemaster_belt","H_Cap_headphones","G_Shades_Black"};
		weapons[] = {"srifle_DMR_06_olive_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' color='#FF0000' shadow='false' /><t color='#FF0000' shadow='false'>Armory Trader</t>";//"<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Bandit Armory";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_bandit";
			};
		};
	};
	class Exile_Trader_SpecialOperations_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Special Operations Trader";
		backpack = "B_Parachute";
		linkedItems[] = {"V_PlateCarrierGL_blk","H_HelmetB_light_black","G_Balaclava_lowprofile","NVGoggles_OPFOR","muzzle_snds_H","acc_pointer_IR","optic_KHS_blk","bipod_03_F_blk"};
		uniformClass = "U_B_CTRG_1";
		weapons[] = {"arifle_MX_Black_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' color='#FF0000' shadow='false' /><t color='#FF0000' shadow='false'>Spec-Ops Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_bandit";
			};
		};
	};
	class Exile_Trader_Equipment_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Equipment Trader";
		uniformClass = "U_BG_Guerrilla_6_1";
		linkedItems[] = {"V_I_G_resistanceLeader_F","H_Watchcap_khk","optic_KHS_blk"};
		weapons[] = {"arifle_MX_GL_Black_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' color='#FF0000' shadow='false' /><t color='#FF0000' shadow='false'>Equipment Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_bandit";
			};
		};
	};
	class Exile_Trader_Food_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Food Trader";
		uniformClass = "U_C_Poloshirt_blue";
		linkedItems[] = {"H_Cap_tan"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' color='#FF0000' shadow='false' /><t color='#FF0000' shadow='false'>Food Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_bandit";
			};
		};
	};
	class Exile_Trader_Hardware_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Hardware Trader";
		backpack = "B_UAV_01_backpack_F";
		uniformClass = "U_C_WorkerCoveralls";
		linkedItems[] = {"V_BandollierB_rgr","H_Booniehat_khk_hs"};
		weapons[] = {};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' color='#FF0000' shadow='false' /><t color='#FF0000' shadow='false'>Hardware Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_bandit";
			};
			class pin
			{
				displayName = "<img image='\exile_assets\texture\ui\code_pad_ca.paa' size='1' color='#FF0000' shadow='false' /><t color='#FF0000' shadow='false'>Change Pin</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this spawn ExileClient_gui_vehicleRekeyDialog_show";
			};
		};
	};
	class Exile_Trader_Vehicle_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Vehicle Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {"H_RacingHelmet_4_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\mptable\soft_ca.paa' size='1' color='#FF0000' shadow='false' /><t color='#FF0000' shadow='false'>Vehicle Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show_bandit";
			};
			class customs
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' color='#FF0000' shadow='false' /><t color='#FF0000' shadow='false'>Vehicle Paintjob's</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show_bandit";
			};
		};
	};
	class Exile_Trader_Aircraft_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Aircraft Trader";
		uniformClass = "U_I_pilotCoveralls";
		linkedItems[] = {"H_PilotHelmetHeli_O"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\map\vehicleicons\iconhelicopter_ca.paa' size='1' color='#FF0000' shadow='false' /><t color='#FF0000' shadow='false'>Aircraft Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show_bandit";
			};
			class customs
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' color='#FF0000' shadow='false' /><t color='#FF0000' shadow='false'>Aircraft Paintjob's</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show_bandit";
			};
		};
	};
	class Exile_Trader_Boat_Bandit: Exile_Trader_Abstract
	{
		displayName = "Bandit Boat Trader";
		uniformClass = "U_OrestesBody";
		linkedItems[] = {"H_Cap_surfer"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\map\vehicleicons\iconship_ca.paa' size='1' color='#FF0000' shadow='false' /><t color='#FF0000' shadow='false'>Boat Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show_bandit";
			};
			class customs
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' color='#FF0000' shadow='false' /><t color='#FF0000' shadow='false'>Boat Paintjob's</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show_bandit";
			};
		};
	};
	/////////////////////////////////////////
	// BlackMarket Traders
	/////////////////////////////////////////
	class Exile_Trader_Armory_Blackmarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Armory Trader";
		uniformClass = "U_Rangemaster";
		linkedItems[] = {"V_Rangemaster_belt","H_Cap_headphones","G_Shades_Black"};
		weapons[] = {"srifle_DMR_06_olive_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' color='#E6D91A' shadow='false' /><t color='#E6D91A' shadow='false'>Armory Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_blackmarket";
			};
		};
	};
	class Exile_Trader_SpecialOperations_Blackmarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Special Operations Trader";
		backpack = "B_Parachute";
		linkedItems[] = {"V_PlateCarrierGL_blk","H_HelmetB_light_black","G_Balaclava_lowprofile","NVGoggles_OPFOR","muzzle_snds_H","acc_pointer_IR","optic_KHS_blk","bipod_03_F_blk"};
		uniformClass = "U_B_CTRG_1";
		weapons[] = {"arifle_MX_Black_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' color='#E6D91A' shadow='false' /><t color='#E6D91A' shadow='false'>Spec-Ops Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_blackmarket";
			};
		};
	};
	class Exile_Trader_Equipment_Blackmarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Equipment Trader";
		uniformClass = "U_BG_Guerrilla_6_1";
		linkedItems[] = {"V_I_G_resistanceLeader_F","H_Watchcap_khk","optic_KHS_blk"};
		weapons[] = {"arifle_MX_GL_Black_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' color='#E6D91A' shadow='false' /><t color='#E6D91A' shadow='false'>Equipment Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_blackmarket";
			};
		};
	};
	class Exile_Trader_Food_Blackmarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Food Trader";
		uniformClass = "U_C_Poloshirt_blue";
		linkedItems[] = {"H_Cap_tan"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' color='#E6D91A' shadow='false' /><t color='#E6D91A' shadow='false'>Food Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_blackmarket";
			};
		};
	};
	class Exile_Trader_Hardware_Blackmarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Hardware Trader";
		backpack = "B_UAV_01_backpack_F";
		uniformClass = "U_C_WorkerCoveralls";
		linkedItems[] = {"V_BandollierB_rgr","H_Booniehat_khk_hs"};
		weapons[] = {};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' color='#E6D91A' shadow='false' /><t color='#E6D91A' shadow='false'>Hardware Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_traderDialog_show_blackmarket";
			};
			class pin
			{
				displayName = "<img image='\exile_assets\texture\ui\code_pad_ca.paa' size='1' color='#E6D91A' shadow='false' /><t color='#E6D91A' shadow='false'>Change Pin</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this spawn ExileClient_gui_vehicleRekeyDialog_show";
			};
		};
	};
	class Exile_Trader_Vehicle_Blackmarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Vehicle Trader";
		uniformClass = "Exile_Uniform_ExileCustoms";
		linkedItems[] = {"H_RacingHelmet_4_F"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\mptable\soft_ca.paa' size='1' color='#E6D91A' shadow='false' /><t color='#E6D91A' shadow='false'>Vehicle Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show_blackmarket";
			};
			class customs
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' color='#E6D91A' shadow='false' /><t color='#E6D91A' shadow='false'>Vehicle Paintjob's</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show_blackmarket";
			};
		};
	};
	class Exile_Trader_Aircraft_Blackmarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Aircraft Trader";
		uniformClass = "U_I_pilotCoveralls";
		linkedItems[] = {"H_PilotHelmetHeli_O"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\map\vehicleicons\iconhelicopter_ca.paa' size='1' color='#E6D91A' shadow='false' /><t color='#E6D91A' shadow='false'>Aircraft Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show_blackmarket";
			};
			class customs
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' color='#E6D91A' shadow='false' /><t color='#E6D91A' shadow='false'>Aircraft Paintjob's</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show_blackmarket";
			};
		};
	};
	class Exile_Trader_Boat_Blackmarket: Exile_Trader_Abstract
	{
		displayName = "BlackMarket Boat Trader";
		uniformClass = "U_OrestesBody";
		linkedItems[] = {"H_Cap_surfer"};
		class UserActions
		{
			class trade
			{
				displayName = "<img image='\a3\ui_f\data\map\vehicleicons\iconship_ca.paa' size='1' color='#E6D91A' shadow='false' /><t color='#E6D91A' shadow='false'>Boat Trader</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleTraderDialog_show_blackmarket";
			};
			class customs
			{
				displayName = "<img image='\a3\ui_f\data\IGUI\Cfg\Actions\repair_ca.paa' size='1' color='#E6D91A' shadow='false' /><t color='#E6D91A' shadow='false'>Boat Paintjob's</t>";
				position = "ohniste";
				radius = 3;
				priority = 6;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_vehicleCustomsDialog_show_blackmarket";
			};
		};
	};

	
	
	class Exile_Locker: NonStrategic
	{
		scope = 2;
		author = "Exile Mod Team";
		displayName = "Locker";
		model = "\exile_assets\model\Exile_Locker.p3d";
		destrType = "DestructNo";
		class EventHandlers
		{
			init = "";
		};
		class UserActions
		{
			class play
			{
				displayName = "Inventory";
				position = "left";
				radius = 3;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_lockerDialog_show";
			};
		};
	};
	class Land_Atm_01_F: Exile_Locker
	{
		scope = 2;
		author = "eXpochA4E";
		displayName = "eXpoch ATM";
		model = "a3\structures_f_epc\civ\accessories\atm_01_f.p3d";
		destrType = "DestructNo";
		class EventHandlers
		{
			init = "";
		};
		class UserActions
		{
			class play
			{
				displayName = "Safe Stash";
				position = "left";
				radius = 3;
				onlyForPlayer = 1;
				condition = "true";
				statement = "this call ExileClient_gui_lockerDialog_show";
			};
		};
	};
	class Exile_Construction_Abstract_Physics: thingX
	{
		scope = 1;
		author = "Exile Mod Team";
		mapSize = 1;
		armor = 1000;
		cost = 1000;
		icon = "iconObject_1x1";
		destrType = "DestructNo";
		vehicleclass = "ExileConstructions";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		exileContainer = 1;
	};
	class Exile_Construction_Abstract_Static: NonStrategic
	{
		scope = 1;
		author = "Exile Mod Team";
		mapSize = 1;
		armor = 10000;
		cost = 1000;
		icon = "iconObject_1x1";
		destrType = "DestructNo";
		vehicleclass = "ExileConstructions";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		exileRequiresSimulation = 0;
	};
	class Exile_Container_Abstract: ReammoBox_F
	{
		author = "Exile Mod Team";
		scope = 1;
		vehicleClass = "Ammo";
		exileContainer = 1;
		icon = "iconCrateWpns";
		simulation = "thingX";
		exileRequiresSimulation = 0;
		maximumLoad = 500;
		armor = 1000;
		destrType = "DestructNo";
		exileIsLockable = 0;
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
	};
	class Exile_Container_Safe: Exile_Container_Abstract
	{
		scope = 2;
		model = "\exile_assets\model\Exile_Container_Safe.p3d";
		displayName = "Safe";
		destrType = "DestructNo";
		maximumLoad = 3000;
		armor = 20000;
		exileIsLockable = 1;
		simulation = "house";
		class AnimationSources
		{
			class DoorAnimationSource
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "MetalDoorsSound";
			};
		};
	};
	class eXpoch_Construction_Safe_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\safe.p3d";
		displayName = "SafeEpoch";
		exileContainer = 1;
	};
	class eXpoch_Container_Safe: Exile_Container_Safe
	{
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\safe.p3d";
		displayName = "SafeEpoch";
		destrType = "DestructNo";
		maximumLoad = 6000;
		armor = 20000;
		exileIsLockable = 1;
		simulation = "house";
	};
	class eXpoch_Construction_Lockbox_Preview: Exile_Construction_Abstract_Physics
	{
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\lockbox.p3d";
		displayName = "LockboxEpoch";
		exileContainer = 1;
	};
	class eXpoch_Container_Lockbox: Exile_Container_Safe
	{
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\lockbox.p3d";
		displayName = "LockboxEpoch";
		destrType = "DestructNo";
		maximumLoad = 6000;
		armor = 20000;
		exileIsLockable = 1;
		simulation = "house";
	};
	class eXpoch_Construction_KitSpikeTrap_Preview: Exile_Construction_Abstract_Physics
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\sticks.p3d";
		displayName = "Spike Trap (SIM)";
	};
	class eXpoch_Construction_SpikeTrap: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\sticks.p3d";
		displayName = "Spike Trap";
		destrType = "DestructBuilding";
		armor = 500;
		simulation = "house";
	};
	class eXpoch_Construction_KitMetalTrap_Preview: Exile_Construction_Abstract_Physics
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\sticks.p3d";
		displayName = "Metal Trap (SIM)";
	};
	class eXpoch_Construction_MetalTrap: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\sticks.p3d";
		displayName = "Metal Trap";
		destrType = "DestructBuilding";
		armor = 500;
		simulation = "house";
	};
	class eXpoch_Construction_KitStudWall_Preview: Exile_Construction_Abstract_Physics
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Wooden_Wall.p3d";
		displayName = "Large Wall";
	};
	class eXpoch_Construction_StudWall: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Wooden_Wall.p3d";
		displayName = "Large Wall";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
		selectionDamage = "zbytek";
		class Damage
		{
			tex[] = {};
			mat[] = {"x\addons\a3_epoch_assets\textures\plyplank.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat"};
		};
	};
	class eXpoch_Construction_KitLargeWoodWall_Preview: Exile_Construction_Abstract_Physics
	{
		author = "SteamPunkGears";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Plywood_Upgrades\plywood_wall\Wooden_Wall_ply.p3d";
		displayName = "Large Plywood Wall";
	};
	class eXpoch_Construction_LargeWoodWall: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Plywood_Upgrades\plywood_wall\Wooden_Wall_ply.p3d";
		displayName = "Large Plywood Wall";
		destrType = "DestructBuilding";
		armor = 5000;
		simulation = "house";
	};
	class eXpoch_Construction_KitLargeCorrugatedWall_Preview: Exile_Construction_Abstract_Physics
	{
		author = "SteamPunkGears";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Plywood_Upgrades\plywood_wall\Wooden_Wall_ply.p3d";
		displayName = "Large Plywood Wall";
		sections[] = {"camo_cor","camo"};
		hiddenSelections[] = {"camo_cor","camo"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets\textures\cor\corrugated_co.paa","x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
	};
	class eXpoch_Construction_LargeCorrugatedWall: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Wooden_Wall_Cor.p3d";
		displayName = "Large Corrugated Wall";
		sections[] = {"camo_cor","camo"};
		hiddenSelections[] = {"camo_cor","camo"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets\textures\cor\corrugated_co.paa","x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
		armor = 7500;
		destrType = "DestructBuilding";
		simulation = "house";
	};
	class eXpoch_Construction_KitLargeWoodWallDoorway_Preview: Exile_Construction_Abstract_Physics
	{
		author = "SteamPunkGears";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Plywood_Upgrades\plywood_doorway\Wooden_Wall_Doorway.p3d";
		displayName = "Plywood Wall Doorway";
	};
	class eXpoch_Construction_LargeWoodWallDoorway: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Plywood_Upgrades\plywood_doorway\Wooden_Wall_Doorway.p3d";
		displayName = "Plywood Wall Doorway";
		armor = 2500;
		destrType = "DestructBuilding";
		simulation = "house";
	};
	class eXpoch_Construction_KitLargeCorrugatedWallDoorway_Preview: Exile_Construction_Abstract_Physics
	{
		author = "SteamPunkGears";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Plywood_Upgrades\plywood_doorway\Wooden_Wall_Doorway.p3d";
		displayName = "Plywood Wall Doorway";
		sections[] = {"camo_cor","camo"};
		hiddenSelections[] = {"camo_cor","camo"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets\textures\cor\corrugated_co.paa","x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
	};
	class eXpoch_Construction_LargeCorrugatedWallDoorway: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Wooden_Wall_Doorway.p3d";
		displayName = "Wall Doorway";
		sections[] = {"camo_cor","camo"};
		hiddenSelections[] = {"camo_cor","camo"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets\textures\cor\corrugated_co.paa","x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
		armor = 2500;
		destrType = "DestructBuilding";
		simulation = "house";
	};
	class eXpoch_Construction_KitLargeWoodWallwDoor_Preview: Exile_Construction_Abstract_Physics
	{
		author = "SteamPunkGears";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Plywood_Upgrades\plywood_door\Wooden_Wall_Door.p3d";
		displayName = "Plywood Wall Doorway w/ Door";
		class AnimationSources
		{
			class Open_Door
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class Open_door
			{
				displayName = "Open";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyforplayer = 1;
				position = "Door_knopf";
				radius = 3;
				condition = "this animationPhase ""Open_Door"" < 0.5";
				statement = "this animate [""Open_Door"", 1]";
			};
			class Close_door: Open_door
			{
				displayName = "Close";
				condition = "this animationPhase ""Open_Door"" >= 0.5";
				statement = "this animate [""Open_Door"", 0];";
			};
		};
	};
	class eXpoch_Construction_LargeWoodWallwDoor: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Plywood_Upgrades\plywood_door\Wooden_Wall_Door.p3d";
		displayName = "Plywood Wall Doorway w/ Door";
		armor = 2500;
		destrType = "DestructBuilding";
		simulation = "house";
		class AnimationSources
		{
			class Open_Door
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class Open_door
			{
				displayName = "Open";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyforplayer = 1;
				position = "Door_knopf";
				radius = 3;
				condition = "this animationPhase ""Open_Door"" < 0.5";
				statement = "this animate [""Open_Door"", 1]";
			};
			class Close_door: Open_door
			{
				displayName = "Close";
				condition = "this animationPhase ""Open_Door"" >= 0.5";
				statement = "this animate [""Open_Door"", 0];";
			};
		};
	};
	class eXpoch_Construction_KitLargeCorrugatedWallwDoor_Preview: Exile_Construction_Abstract_Physics
	{
		author = "SteamPunkGears";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Wooden_Wall_Door.p3d";
		displayName = "Wall Doorway w/ Door";
		sections[] = {"camo_cor","camo"};
		hiddenSelections[] = {"camo_cor","camo"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets\textures\cor\corrugated_co.paa","x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
		class AnimationSources
		{
			class Open_Door
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class Open_door
			{
				displayName = "Open";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyforplayer = 1;
				position = "Door_knopf";
				radius = 3;
				condition = "this animationPhase ""Open_Door"" < 0.5";
				statement = "this animate [""Open_Door"", 1]";
			};
			class Close_door: Open_door
			{
				displayName = "Close";
				condition = "this animationPhase ""Open_Door"" >= 0.5";
				statement = "this animate [""Open_Door"", 0];";
			};
		};
	};
	class eXpoch_Construction_LargeCorrugatedWallwDoor: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Wooden_Wall_Door.p3d";
		displayName = "Wall Doorway w/ Door";
		sections[] = {"camo_cor","camo"};
		hiddenSelections[] = {"camo_cor","camo"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets\textures\cor\corrugated_co.paa","x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
		armor = 2500;
		destrType = "DestructBuilding";
		simulation = "house";
		class AnimationSources
		{
			class Open_Door
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class Open_door
			{
				displayName = "Open";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyforplayer = 1;
				position = "Door_knopf";
				radius = 3;
				condition = "this animationPhase ""Open_Door"" < 0.5";
				statement = "this animate [""Open_Door"", 1]";
			};
			class Close_door: Open_door
			{
				displayName = "Close";
				condition = "this animationPhase ""Open_Door"" >= 0.5";
				statement = "this animate [""Open_Door"", 0];";
			};
		};
	};
	class eXpoch_Construction_KitLargeWoodWallwDoorwLock_Preview: Exile_Construction_Abstract_Physics
	{
		author = "SteamPunkGears";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Plywood_Upgrades\Plywood_DoorW_L\Plywood_DoorL.p3d";
		displayName = "Plywood Wall Doorway w/ Locking Door";
		class AnimationSources
		{
			class Open_Door
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class lock_Door
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
				sound = "ServoDoorsSound";
			};
		};
		class UserActions
		{
			class Open_door
			{
				displayName = "Open";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyforplayer = 1;
				position = "Door_knopf";
				radius = 3;
				condition = "(this animationPhase ""Open_Door"" < 0.5) && (this animationPhase ""lock_Door"" == 0)";
				statement = "this animate [""Open_Door"", 1]";
			};
			class Close_door: Open_door
			{
				displayName = "Close";
				condition = "(this animationPhase ""Open_Door"" >= 0.5) && (this animationPhase ""lock_Door"" == 0)";
				statement = "this animate [""Open_Door"", 0];";
			};
			class Lock_Door
			{
				displayName = "Lock";
				displayNameDefault = "<img image='\A3\modules_f\data\iconlock_ca.paa' size='2.5' />";
				onlyforplayer = 1;
				position = "Door_knopf";
				radius = 3;
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0) && (this animationPhase ""lock_Door"" == 0)";
				statement = "this animate [""lock_Door"", 1];true spawn ExileClient_object_lock_toggle";
			};
			class Unlock_Door: Lock_Door
			{
				displayName = "Unlock";
				displayNameDefault = "<img image='\A3\modules_f\data\iconunlock_ca.paa' size='2.5' />";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1) && (this animationPhase ""lock_Door"" == 1)";
				statement = "this animate [""lock_Door"", 0];false spawn ExileClient_object_lock_toggle";
			};
		};
	};
	class eXpoch_Construction_LargeWoodWallwDoorwLock: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Plywood_Upgrades\Plywood_DoorW_L\Plywood_DoorL.p3d";
		displayName = "Plywood Wall Doorway w/ Locking Door";
		armor = 2500;
		destrType = "DestructBuilding";
		simulation = "house";
		ExileIsDoor = 1;
		exileIsLockable = 1;
		class AnimationSources
		{
			class Open_Door
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class lock_Door
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
				sound = "ServoDoorsSound";
			};
		};
		class UserActions
		{
			class Open_door
			{
				displayName = "Open";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyforplayer = 1;
				position = "Door_knopf";
				radius = 3;
				condition = "(this animationPhase ""Open_Door"" < 0.5) && (this animationPhase ""lock_Door"" == 0)";
				statement = "this animate [""Open_Door"", 1]";
			};
			class Close_door: Open_door
			{
				displayName = "Close";
				condition = "(this animationPhase ""Open_Door"" >= 0.5) && (this animationPhase ""lock_Door"" == 0)";
				statement = "this animate [""Open_Door"", 0];";
			};
			class Lock_Door
			{
				displayName = "Lock";
				displayNameDefault = "<img image='\A3\modules_f\data\iconlock_ca.paa' size='2.5' />";
				onlyforplayer = 1;
				position = "Door_knopf";
				radius = 3;
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0) && (this animationPhase ""lock_Door"" == 0)";
				statement = "this animate [""lock_Door"", 1];true spawn ExileClient_object_lock_toggle";
			};
			class Unlock_Door: Lock_Door
			{
				displayName = "Unlock";
				displayNameDefault = "<img image='\A3\modules_f\data\iconunlock_ca.paa' size='2.5' />";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1) && (this animationPhase ""lock_Door"" == 1)";
				statement = "this animate [""lock_Door"", 0];false spawn ExileClient_object_lock_toggle";
			};
		};
	};
	class eXpoch_Construction_KitLargeCorrugatedWallwDoorwLock_Preview: Exile_Construction_Abstract_Physics
	{
		author = "SteamPunkGears";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Wooden_Wall_DoorL.p3d";
		displayName = "Wall Doorway w/ Locking Door";
		sections[] = {"camo_cor","camo"};
		hiddenSelections[] = {"camo_cor","camo"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets\textures\cor\corrugated_co.paa","x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
		class AnimationSources
		{
			class Open_Door
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class lock_Door
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
				sound = "ServoDoorsSound";
			};
		};
		class UserActions
		{
			class Open_door
			{
				displayName = "Open";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyforplayer = 1;
				position = "Door_knopf";
				radius = 3;
				condition = "(this animationPhase ""Open_Door"" < 0.5) && (this animationPhase ""lock_Door"" == 0)";
				statement = "this animate [""Open_Door"", 1]";
			};
			class Close_door: Open_door
			{
				displayName = "Close";
				condition = "(this animationPhase ""Open_Door"" >= 0.5) && (this animationPhase ""lock_Door"" == 0)";
				statement = "this animate [""Open_Door"", 0];";
			};
			class Lock_Door
			{
				displayName = "Lock";
				displayNameDefault = "<img image='\A3\modules_f\data\iconlock_ca.paa' size='2.5' />";
				onlyforplayer = 1;
				position = "Door_knopf";
				radius = 3;
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0) && (this animationPhase ""lock_Door"" == 0)";
				statement = "this animate [""lock_Door"", 1];true spawn ExileClient_object_lock_toggle";
			};
			class Unlock_Door: Lock_Door
			{
				displayName = "Unlock";
				displayNameDefault = "<img image='\A3\modules_f\data\iconunlock_ca.paa' size='2.5' />";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1) && (this animationPhase ""lock_Door"" == 1)";
				statement = "this animate [""lock_Door"", 0];false spawn ExileClient_object_lock_toggle";	
			};
		};
	};
	class eXpoch_Construction_LargeCorrugatedWallwDoorwLock: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Wooden_Wall_DoorL.p3d";
		displayName = "Wall Doorway w/ Locking Door";
		sections[] = {"camo_cor","camo"};
		hiddenSelections[] = {"camo_cor","camo"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets\textures\cor\corrugated_co.paa","x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
		armor = 2500;
		destrType = "DestructBuilding";
		simulation = "house";
		ExileIsDoor = 1;
		exileIsLockable = 1;
		class AnimationSources
		{
			class Open_Door
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class lock_Door
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
				sound = "ServoDoorsSound";
			};
		};
		class UserActions
		{
			class Open_door
			{
				displayName = "Open";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyforplayer = 1;
				position = "Door_knopf";
				radius = 3;
				condition = "(this animationPhase ""Open_Door"" < 0.5) && (this animationPhase ""lock_Door"" == 0)";
				statement = "this animate [""Open_Door"", 1]";
			};
			class Close_door: Open_door
			{
				displayName = "Close";
				condition = "(this animationPhase ""Open_Door"" >= 0.5) && (this animationPhase ""lock_Door"" == 0)";
				statement = "this animate [""Open_Door"", 0];";
			};
			class Lock_Door
			{
				displayName = "Lock";
				displayNameDefault = "<img image='\A3\modules_f\data\iconlock_ca.paa' size='2.5' />";
				onlyforplayer = 1;
				position = "Door_knopf";
				radius = 3;
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0) && (this animationPhase ""lock_Door"" == 0)";
				statement = "this animate [""lock_Door"", 1];true spawn ExileClient_object_lock_toggle";
			};
			class Unlock_Door: Lock_Door
			{
				displayName = "Unlock";
				displayNameDefault = "<img image='\A3\modules_f\data\iconunlock_ca.paa' size='2.5' />";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1) && (this animationPhase ""lock_Door"" == 1)";
				statement = "this animate [""lock_Door"", 0];false spawn ExileClient_object_lock_toggle";	
			};
		};
	};
	class eXpoch_Construction_KitWoodFloor_Preview: Exile_Construction_Abstract_Physics
	{
		author = "SteamPunkGears";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Wooden_Floor_Ghost.p3d";
		displayName = "Wood Floor Ghost";
		ladders[] = {};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
	};
	class eXpoch_Construction_WoodFloor: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Wooden_Floor.p3d";
		displayName = "Wood Floor";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
		selectionDamage = "zbytek";
		armor = 5000;
		destrType = "DestructBuilding";
		class Damage
		{
			tex[] = {};
			mat[] = {"x\addons\a3_epoch_assets\textures\plyplank.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat"};
		};
	};
	class eXpoch_Construction_KitMetalFloor_Preview: Exile_Construction_Abstract_Physics
	{
		author = "SteamPunkGears";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\metal_floor_ghost.p3d";
		displayName = "Metal Floor Ghost";
		ladders[] = {};
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets_1\textures\mf_co.paa","a3\structures_f\data\metal\metal_rollup_co.paa","a3\structures_f\data\metal\metal_plates3_co.paa"};
	};
	class eXpoch_Construction_MetalFloor: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_1\models\metal_floor.p3d";
		displayName = "Metal Floor";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_assets_1\textures\mf_co.paa","a3\structures_f\data\metal\metal_rollup_co.paa","a3\structures_f\data\metal\metal_plates3_co.paa"};
		selectionDamage = "zbytek";
		armor = 10000;
		destrType = "DestructBuilding";
		class Damage
		{
			tex[] = {};
			mat[] = {"x\addons\a3_epoch_assets_1\textures\metal_floor.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat"};
		};
	};
	class eXpoch_Construction_KitWoodStairs_Preview: Exile_Construction_Abstract_Physics
	{
		author = "SteamPunkGears";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Wood_stairs90_Ghost.p3d";
		displayName = "Wood Stairs Ghost";
		ladders[] = {};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
	};
	class eXpoch_Construction_WoodStairs: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Wood_stairs.p3d";
		displayName = "Wood Stairs";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
		selectionDamage = "zbytek";
		armor = 5000;
		destrType = "DestructBuilding";
		class Damage
		{
			tex[] = {};
			mat[] = {"x\addons\a3_epoch_assets\textures\plyplank.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat"};
		};
	};
	class eXpoch_Construction_KitWoodStairs2_Preview: Exile_Construction_Abstract_Physics
	{
		author = "SteamPunkGears";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Wood_stairs90_Ghost.p3d";
		displayName = "Wood Stairs Ghost";
		ladders[] = {};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
	};
	class eXpoch_Construction_WoodStairs2: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Wood_stairs_upgrade.p3d";
		displayName = "Wood Stairs lvl 2";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
		selectionDamage = "zbytek";
		armor = 7500;
		destrType = "DestructBuilding";
		class Damage
		{
			tex[] = {};
			mat[] = {"x\addons\a3_epoch_assets\textures\plyplank.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat"};
		};
	};
	class eXpoch_Construction_KitWoodTower_Preview: Exile_Construction_Abstract_Physics
	{
		author = "SteamPunkGears";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Tower\Tower\Base_Tower_Frame_Ghost.p3d";
		displayName = "Wood Tower Ghost";
	};
	class eXpoch_Construction_WoodTower: Exile_Construction_Abstract_Static
	{
		author = "SteamPunkGears";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Tower\Tower\Base_Tower_Frame.p3d";
		displayName = "Wood Tower";
		armor = 10000;
		destrType = "DestructBuilding";
		class AnimationSources
		{
			class NWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class EWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class SWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class WWall
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class add_nwall
			{
				displayName = "Add Wall";
				onlyforplayer = 1;
				position = "NWall_trigger";
				radius = 2.5;
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""NWall"" < 0.5)";
				statement = "[this,""NWall"",1] call EPOCH_changeWallState";
			};
			class remove_nwall: add_nwall
			{
				displayName = "Remove Wall";
				position = "NWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""NWall"" >= 0.5)";
				statement = "[this,""NWall"",0] call EPOCH_changeWallState";
			};
			class add_ewall: add_nwall
			{
				displayName = "Add Wall";
				position = "EWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""EWall"" < 0.5)";
				statement = "[this,""EWall"",1] call EPOCH_changeWallState";
			};
			class remove_ewall: add_nwall
			{
				displayName = "Remove Wall";
				position = "EWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""EWall"" >= 0.5)";
				statement = "[this,""EWall"",0] call EPOCH_changeWallState";
			};
			class add_swall: add_nwall
			{
				displayName = "Add Wall";
				position = "SWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""SWall"" < 0.5)";
				statement = "[this,""SWall"",1] call EPOCH_changeWallState";
			};
			class remove_swall: add_nwall
			{
				displayName = "Remove Wall";
				position = "SWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""SWall"" >= 0.5)";
				statement = "[this,""SWall"",0] call EPOCH_changeWallState";
			};
			class add_wwall: add_nwall
			{
				displayName = "Add Wall";
				position = "WWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""WWall"" < 0.5)";
				statement = "[this,""WWall"",1] call EPOCH_changeWallState";
			};
			class remove_wwall: add_nwall
			{
				displayName = "Remove Wall";
				position = "WWall_trigger";
				condition = "(EPOCH_buildMode > 0) && !(call EPOCH_lockCheck) && (this animationPhase ""WWall"" >= 0.5)";
				statement = "[this,""WWall"",0] call EPOCH_changeWallState";
			};
		};
	};
	class eXpoch_Construction_KitWoodRamp_Preview: Exile_Construction_Abstract_Physics
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Wood_Ramp_Ghost.p3d";
		displayName = "Wood Ramp Ghost";
		ladders[] = {};
	};
	class eXpoch_Construction_WoodRamp: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Wood_Ramp.p3d";
		displayName = "Wood Ramp";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
		selectionDamage = "zbytek";
		armor = 7500;
		destrType = "DestructBuilding";
		class Damage
		{
			tex[] = {};
			mat[] = {"x\addons\a3_epoch_assets\textures\plyplank.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat","x\addons\a3_epoch_assets\textures\PlyPlank_destruct50.rvmat"};
		};
	};
	class eXpoch_Construction_KitTankTrap_Preview: Exile_Construction_Abstract_Physics
	{
		author = "Axle";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Defense\tank_trap.p3d";
		displayName = "Tank Trap";
	};
	class eXpoch_Construction_TankTrap: Exile_Construction_Abstract_Static
	{
		author = "Axle";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Defense\tank_trap.p3d";
		displayName = "Tank Trap";
		armor = 1250;
		destrType = "DestructBuilding";
	};
	class eXpoch_Construction_KitHesco3_Preview: Exile_Construction_Abstract_Physics
	{
		author = "Axle";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Defense\hesco_ghost.p3d";
		displayName = "Hesco Wide (Ghost)";
		ladders[] = {};
	};
	class eXpoch_Construction_Hesco3: Exile_Construction_Abstract_Static
	{
		author = "Axle";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Defense\hesco.p3d";
		displayName = "Hesco Wide";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\hesco\hesco_co.paa"};
		hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_assets\textures\hesco\hesco.rvmat"};
		armor = 2000;
		destrType = "DestructBuilding";
	};
	class eXpoch_Construction_KitWoodLadder_Preview: Exile_Construction_Abstract_Physics
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Ladder\wood_ladder_ghost.p3d";
		displayName = "Wood Ladder Ghost";
		ladders[] = {};
	};
	class eXpoch_Construction_WoodLadder: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Ladder\wood_ladder.p3d";
		displayName = "Wood Ladder";
		ladders[] = {{"start1","end1"}};
		armor = 500;
		destrType = "DestructBuilding";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\plyplank_eco.paa"};
	};
	class eXpoch_Construction_KitTiPi_Preview: Exile_Construction_Abstract_Physics
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\tp_ghost.p3d";
		displayName = "TiPi Ghost";
		ladders[] = {};
	};
	class eXpoch_Construction_TiPi: Exile_Container_Abstract
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\tp.p3d";
		displayName = "Tipi";
		maximumLoad = 1200;
		armor = 1500;
		destrType = "DestructTent";
	};
	class eXpoch_Construction_KitShelf_Preview: Exile_Construction_Abstract_Physics
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\shelf_ghost.p3d";
		displayName = "Shelf Ghost";
		ladders[] = {};
	};
	class eXpoch_Construction_Shelf: Exile_Container_Abstract
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\shelf.p3d";
		displayName = "Metal Shelf";
		maximumLoad = 800;
		armor = 750;
		destrType = "DestructTent";
	};
	class eXpoch_Construction_KitFoundation_Preview: Exile_Construction_Abstract_Physics
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Concrete_Col_Ghost.p3d";
		displayName = "Concrete Foundation (Ghost)";
		placement = "vertical";
		ladders[] = {};
	};
	class eXpoch_Construction_Foundation: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Concrete_Col.p3d";
		displayName = "Concrete Foundation";
		placement = "vertical";
		armor = 15000;
		destrType = "DestructBuilding";
	};
	class eXpoch_Construction_KitWoodFoundation_Preview: Exile_Construction_Abstract_Physics
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Concrete_Col_Ghost.p3d";
		displayName = "Wood Foundation (Ghost)";
		placement = "vertical";
		ladders[] = {};
	};
	class eXpoch_Construction_WoodFoundation: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\Wood_Col.p3d";
		displayName = "Wood Foundation";
		placement = "vertical";
		armor = 5000;
		destrType = "DestructBuilding";
	};
	class eXpoch_Construction_KitSolarGen_Preview: Exile_Construction_Abstract_Physics
	{
		author = "SteamPunkGears";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Solar_Generator_Complete\Solar_generator.p3d";
		displayName = "Solar Power Generator";
	};		
	class eXpoch_Construction_SolarGen: Exile_Construction_Abstract_Static
	{
		mapSize = 1.27;
		author = "SteamPunkGears";
		_generalMacro = "SolarGen_EPOCH";
		icon = "iconObject_5x4";
		armor = 5000;
		vehicleclass = "Epoch_objects";
		destrType = "DestructBuilding";
		cost = 1000;
		scope = 2;
		placement = "vertical";
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Solar_Generator_Complete\Solar_generator.p3d";
		displayName = "Solar Power Generator";
	};
	class eXpoch_Construction_KitPlotPole_Preview: Exile_Construction_Abstract_Physics{};
	class eXpoch_Construction_PlotPole: Exile_Construction_Abstract_Static{};
	class eXpoch_Construction_KitHalfCinderWall_Preview: Exile_Construction_Abstract_Physics
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\cinder_half_Ghost.p3d";
		displayName = "Cinder Half Wall Ghost";
		ladders[] = {};
	};
	class eXpoch_Construction_HalfCinderWall: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\cinder_half.p3d";
		displayName = "Half Cinder Block Wall";
		armor = 7500;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\cinder\cinder_eco.paa"};
	};
	class eXpoch_Construction_KitCinderWall_Preview: Exile_Construction_Abstract_Physics
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\cinder.p3d";
		displayName = "Cinder Block Wall";
		ladders[] = {};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
	};
	class eXpoch_Construction_CinderWall: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\cinder.p3d";
		displayName = "Cinder Block Wall";
		armor = 15000;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\cinder\cinder_eco.paa"};
	};
	class eXpoch_Construction_KitCinderWallGarage_Preview: Exile_Construction_Abstract_Physics
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\cGarage.p3d";
		displayName = "Cinder Block Garage";
		ladders[] = {};
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"};
		class AnimationSources
		{
			class open_left
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
				sound = "MetalBigDoorsSound";
			};
			class open_right
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
				sound = "MetalOldBigDoorsSound";
			};
			class lock_cGarage
			{
				source = "user";
				animPeriod = 2;
				initPhase = 1;
				sound = "ServoDoorsSound";
			};
		};
		class UserActions
		{
			class Open_left
			{
				displayName = "Open";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyforplayer = 1;
				position = "Door_knopf";
				radius = 3;
				condition = "(this animationPhase ""open_left"" < 0.5) && (this animationPhase ""lock_cGarage"" < 0.5)";
				statement = "this animate [""open_left"", 1]; this animate [""open_right"", 1]";
			};
			class Close_left: Open_left
			{
				displayName = "Close";
				condition = "this animationPhase ""open_left"" >= 0.5";
				statement = "this animate [""open_left"", 0]; this animate [""open_right"", 0]";
			};
			class Lock_cGarage
			{
				displayName = "Lock";
				displayNameDefault = "<img image='\A3\modules_f\data\iconlock_ca.paa' size='2.5' />";
				onlyforplayer = 1;
				position = "Door_knopf";
				radius = 3;
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0) && (this animationPhase ""open_left"" < 0.5) && (this animationPhase ""lock_cGarage"" < 0.5)";
				statement = "this animate [""lock_cGarage"", 1];true spawn ExileClient_object_lock_toggle";
			};
			class Unlock_cGarage: Lock_cGarage
			{
				displayName = "Unlock";
				displayNameDefault = "<img image='\A3\modules_f\data\iconunlock_ca.paa' size='2.5' />";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1) && (this animationPhase ""open_left"" < 0.5) && (this animationPhase ""lock_cGarage"" >= 0.5)";
				statement = "this animate [""lock_cGarage"", 0];false spawn ExileClient_object_lock_toggle";
			};
		};
	};
	class eXpoch_Construction_CinderWallGarage: Exile_Construction_Abstract_Static
	{
		author = "Sequisha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets\models\cGarage.p3d";
		displayName = "Cinder Block Garage";
		armor = 15000;
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\cinder\cinder_eco.paa","x\addons\a3_epoch_assets\textures\cinder garage\cgarage_co.paa"};
		class AnimationSources
		{
			class open_left
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
				sound = "MetalBigDoorsSound";
			};
			class open_right
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
				sound = "MetalOldBigDoorsSound";
			};
			class lock_cGarage
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
				sound = "ServoDoorsSound";
			};
		};
		class UserActions
		{
			class Open_left
			{
				displayName = "Open";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				onlyforplayer = 1;
				position = "Door_knopf";
				radius = 3;
				condition = "(this animationPhase ""open_left"" < 0.5) && (this animationPhase ""lock_cGarage"" < 0.5)";
				statement = "this animate [""open_left"", 1]; this animate [""open_right"", 1]";
			};
			class Close_left: Open_left
			{
				displayName = "Close";
				condition = "this animationPhase ""open_left"" >= 0.5";
				statement = "this animate [""open_left"", 0]; this animate [""open_right"", 0]";
			};
			class Lock_cGarage
			{
				displayName = "Lock";
				displayNameDefault = "<img image='\A3\modules_f\data\iconlock_ca.paa' size='2.5' />";
				onlyforplayer = 1;
				position = "Door_knopf";
				radius = 3;
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0) && (this animationPhase ""lock_cGarage"" < 0.5)";
				statement = "this animate [""lock_cGarage"", 1];true spawn ExileClient_object_lock_toggle";
			};
			class Unlock_cGarage: Lock_cGarage
			{
				displayName = "Unlock";
				displayNameDefault = "<img image='\A3\modules_f\data\iconunlock_ca.paa' size='2.5' />";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1) && (this animationPhase ""lock_cGarage"" >= 0.5)";
				statement = "this animate [""lock_cGarage"", 0];false spawn ExileClient_object_lock_toggle";
			};
		};
	};
    class mosquito_epoch_base;
	class B_Heli_Light_01_F;
	class mosquito_eXpoch_Abstract: mosquito_epoch_base
	{
		author = "eXpochA4E";
		scope = 0;
		armor = 10;
		side = 3;
		faction = "CIV_F";
		icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";
        picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";
		model = "\x\addons\a3_epoch_vehicles_1\mosquito\mosquito.p3d";
		cyclicAsideForceCoef = 0.8;
        cyclicForwardForceCoef = 0.8;
		_generalMacro = "mosquito_eXpoch";
		vehicleClass = "eXpochChoppers";
		crew = "";
		typicalCargo[] = {};
		skinName = "";
		displayName = "eXpoch Mosquito";
		weapons[] = {"MosquitoGrenadeLauncher"};
		magazines[] = {"3Rnd_MosquitoGrenade"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_vehicles_1\mosquito\data\mosquito_co.paa"};
		fuelCapacity = 242;
		fuelConsumptionRate = 0.0322;
		slingLoadMaxCargoMass = 200;
		driverCanSee = 31;
		driverCanEject = 1;
		ejectDeadCargo = 1;
		class EventHandlers: DefaultEventHandlers
		{
			init = "";
		};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
	};
	class mosquito_eXpoch: mosquito_eXpoch_Abstract
	{
		scope = 2;
		side = 3;
		displayName = "eXpoch Mosquito";
		icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";
        picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";
		model = "\x\addons\a3_epoch_vehicles_1\mosquito\mosquito.p3d";
		_generalMacro = "mosquito_eXpoch";
		vehicleClass = "eXpochChoppers";
		weapons[] = {"MosquitoGrenadeLauncher"};
		magazines[] = {"3Rnd_MosquitoGrenade"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_vehicles_1\mosquito\data\mosquito_co.paa"};
		fuelCapacity = 242;
		fuelConsumptionRate = 0.0322;
		slingLoadMaxCargoMass = 200;
		driverCanSee = 31;
		driverCanEject = 1;
		ejectDeadCargo = 1;
	};
	class mosquito_eXpoch_missles: mosquito_eXpoch_Abstract
	{
		scope = 2;
		side = 3;
		displayName = "eXpoch Mosquito";
		icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";
        picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";
		model = "\x\addons\a3_epoch_vehicles_1\mosquito\mosquito.p3d";
		_generalMacro = "mosquito_eXpoch";
		vehicleClass = "eXpochChoppers";
		weapons[] = {"missiles_DAR"};
		magazines[] = {"24Rnd_missiles"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"x\addons\a3_epoch_vehicles_1\mosquito\data\mosquito_co.paa"};
		fuelCapacity = 242;
		fuelConsumptionRate = 0.0322;
		slingLoadMaxCargoMass = 200;
		driverCanSee = 31;
		driverCanEject = 1;
		ejectDeadCargo = 1;
	};

	
	#define ARM_LEG_ARMOR_DEFAULT 1
    #define ARM_LEG_ARMOR_BETTER  1
    #define ARM_LEG_ARMOR_CSAT    1
	#define ADD_ACE_HITPOINTS(ARM_ARMOR,LEG_ARMOR) \
        class HitLeftArm { \
            armor = ARM_ARMOR; \
            material = -1; \
            name = "hand_l"; \
            passThrough = 1; \
            radius = 0.08; \
            explosionShielding = 1; \
            visual = "injury_hands"; \
            minimalHit = 0.01; \
        }; \
        class HitRightArm: HitLeftArm { \
            name = "hand_r"; \
        }; \
        class HitLeftLeg { \
            armor = LEG_ARMOR; \
            material = -1; \
            name = "leg_l"; \
            passThrough = 1; \
            radius = 0.1; \
            explosionShielding = 1; \
            visual = "injury_legs"; \
            minimalHit = 0.01; \
        }; \
        class HitRightLeg: HitLeftLeg { \
            name = "leg_r"; \
        };
	class C_man_w_worker_F;
	class Exile_Unit_Abstract: C_man_w_worker_F
	{
		scope = 0;
		author = "Exile Mod Team";
		displayName = "Exile Unit Abstract";
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
		vehicleClass = "Men";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};
		respawnItems[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		canCarryBackPack = 1;
		nakedUniform = "U_BasicBody";
		model = "";
		uniformClass = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Googles: UniformSlotInfo
				{
					slotType = 603;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
		class HitPoints {
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.12;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			ADD_ACE_HITPOINTS(ARM_LEG_ARMOR_DEFAULT,ARM_LEG_ARMOR_DEFAULT)
		};
	};
	class eXpoch_Male_Prisoner_F: Exile_Unit_Abstract
	{
		scope = 2;
		displayName = "eXpoch Prisoner";
		model = "\A3\characters_F\common\coveralls";
		uniformClass = "Exile_Uniform_BambiOverall";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\eXpoch_characters\textures\male\coveralls_Prisoner_co.paa"};
	};
	class Epoch_Female_base_F: B_Soldier_base_F
	{
		identityTypes[] = {"Woman","NoGlasses"};
		maxGunElev = 80;
		faceType = "Man_A3";
		woman = 1;
		side = 2;
		modelSides[] = {2};
		engineer = 1;
		vehicleClass = "Women";
		scope = 0;
		cost = 40000;
		headgearProbability = 100;
		allowedHeadgear[] = {};
		class HitPoints 
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.12;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			ADD_ACE_HITPOINTS(ARM_LEG_ARMOR_DEFAULT,ARM_LEG_ARMOR_DEFAULT)
		};
		armor = 2;
		armorStructural = 0.5;
		explosionShielding = 0.05;
		class Wounds
		{
			tex[] = {};
			mat[] = {"x\addons\a3_epoch_assets\textures\camo\female_camoDark.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
		};
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_character.p3d";
		picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Keesha_base.paa";
		nakedUniform = "U_BasicBodyFemale";
		uniformClass = "U_Test_uniform";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_F41_EPOCH"};
		respawnLinkedItems[] = {"V_F41_EPOCH"};
	};
	class eXpoch_Female_Prisoner_F: Epoch_Female_base_F
	{
		displayName = "Female Prisoner(eXpoch)";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_camo.p3d";
		side = 2;
		modelSides[] = {2};
		faction = "IND_F";
		uniformClass = "eXpoch_U_Prisoner_uniform";
		class HitPoints {
			class HitHead 
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitBody 
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			ADD_ACE_HITPOINTS(ARM_LEG_ARMOR_DEFAULT,ARM_LEG_ARMOR_DEFAULT)
		};
	};
	class eXpoch_Female_PinkPolka_F: Epoch_Female_base_F
	{
		displayName = "Keesha PinkPolka";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_camo.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\eXpoch_characters\textures\female\female_camo_pinkpolka.paa"};
		hiddenSelectionsMaterials[] = {"\eXpoch_characters\textures\female\female_camo_pinkpolka.rvmat"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"x\addons\a3_epoch_assets\textures\camo\female_camoBlue.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
		};
		uniformClass = "eXpoch_U_camo_pinkpolka";
	};
	class eXpoch_Female_Pink_F: Epoch_Female_base_F
	{
		displayName = "Keesha Pink";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_camo.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\eXpoch_characters\textures\female\female_camo_pink.paa"};
		hiddenSelectionsMaterials[] = {"\eXpoch_characters\textures\female\female_camo_pink.rvmat"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"x\addons\a3_epoch_assets\textures\camo\female_camoBlue.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
		};
		uniformClass = "eXpoch_U_camo_pink";
	};
	class eXpoch_Female_outback_F: Epoch_Female_base_F
	{
		displayName = "Keesha Outback";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_camo.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\eXpoch_characters\textures\female\female_camo_outback.paa"};
		hiddenSelectionsMaterials[] = {"\eXpoch_characters\textures\female\female_camo_outback.rvmat"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"x\addons\a3_epoch_assets\textures\camo\female_camoBlue.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
		};
		uniformClass = "eXpoch_U_camo_outback";
	};
	class eXpoch_Female_lumberjack_F: Epoch_Female_base_F
	{
		displayName = "Keesha Lumberjack";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_camo.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\eXpoch_characters\textures\female\female_camo_lumberjack.paa"};
		hiddenSelectionsMaterials[] = {"\eXpoch_characters\textures\female\female_camo_lumberjack.rvmat"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"x\addons\a3_epoch_assets\textures\camo\female_camoBlue.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
		};
		uniformClass = "eXpoch_U_camo_lumberjack";
	};
	class eXpoch_Female_bubblegum_F: Epoch_Female_base_F
	{
		displayName = "Keesha Bubblegun";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_camo.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\eXpoch_characters\textures\female\female_camo_bubblegum.paa"};
		hiddenSelectionsMaterials[] = {"\eXpoch_characters\textures\female\female_camo_bubblegum.rvmat"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"x\addons\a3_epoch_assets\textures\camo\female_camoBlue.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
		};
		uniformClass = "eXpoch_U_camo_bubblegum";
	};
	class eXpoch_Female_biker_F: Epoch_Female_base_F
	{
		displayName = "Keesha Biker";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_camo.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\eXpoch_characters\textures\female\female_camo_biker.paa"};
		hiddenSelectionsMaterials[] = {"\eXpoch_characters\textures\female\female_camo_biker.rvmat"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"x\addons\a3_epoch_assets\textures\camo\female_camoBlue.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
		};
		uniformClass = "eXpoch_U_camo_biker";
	};
	class eXpoch_Female_aloha_F: Epoch_Female_base_F
	{
		displayName = "Keesha Aloha";
		scope = 2;
		model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_camo.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\eXpoch_characters\textures\female\female_camo_aloha.paa"};
		hiddenSelectionsMaterials[] = {"\eXpoch_characters\textures\female\female_camo_aloha.rvmat"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"x\addons\a3_epoch_assets\textures\camo\female_camoBlue.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat","x\addons\a3_epoch_assets\textures\camo\female_camoinjury.rvmat"};
		};
		uniformClass = "eXpoch_U_camo_aloha";
	};

	class Exile_Car_SUVXL_Abstract;
	class eXpoch_Car_SUVXLX_Black: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		displayName = "SUV (XLX) Black";
		skinName = "Black";
		maximumLoad = 3000;
	};
	class eXpoch_Car_SUVXLX_Charcoal: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		displayName = "Suv (XLX) Charcoal";
		skinName = "Charcoal";
		maximumLoad = 3000;
		HiddenSelections[] = {"camo"};
		HiddenSelectionsTextures[] = {"Exile_psycho_SUV_a3\Data\textures\suv_body_charcoal_co.paa"};
	};
	class eXpoch_Car_SUVXLX_Silver: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		displayName = "Suv (XLX) Silver";
		skinName = "Silver";
		maximumLoad = 3000;
		HiddenSelections[] = {"camo"};
		HiddenSelectionsTextures[] = {"Exile_psycho_SUV_a3\Data\textures\suv_body_silver_co.paa"};
	};
	class eXpoch_Car_SUVXLX_White: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		displayName = "Suv (XLX) White";
		skinName = "White";
		maximumLoad = 3000;
		HiddenSelections[] = {"camo"};
		HiddenSelectionsTextures[] = {"Exile_psycho_SUV_a3\Data\textures\suv_body_white_co.paa"};
	};
	class eXpoch_Car_SUVXLX_WhiteBlue: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		displayName = "Suv (XLX) White Blue";
		skinName = "White Blue";
		maximumLoad = 3000;
		HiddenSelections[] = {"camo"};
		HiddenSelectionsTextures[] = {"Exile_psycho_SUV_a3\Data\textures\suv_body_bluewhite.paa"};
	};
	class eXpoch_Car_SUVXLX_Yellow: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		displayName = "Suv (XLX) Yellow";
		skinName = "Yellow";
		maximumLoad = 3000;
		HiddenSelections[] = {"camo"};
		HiddenSelectionsTextures[] = {"Exile_psycho_SUV_a3\Data\textures\suv_body_yellow_co.paa"};
	};
	class eXpoch_Car_SUVXLX_Red: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		displayName = "Suv (XLX) Red";
		skinName = "Red";
		maximumLoad = 3000;
		HiddenSelections[] = {"camo"};
		HiddenSelectionsTextures[] = {"Exile_psycho_SUV_a3\Data\textures\suv_body_red_co.paa"};
	};
	class eXpoch_Car_SUVXLX_HelloKitty: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		displayName = "Suv (XLX) Hello Kitty";
		skinName = "Hello Kitty";
		maximumLoad = 3000;
		HiddenSelections[] = {"camo"};
		HiddenSelectionsTextures[] = {"Exile_psycho_SUV_a3\Data\textures\suv_body_Pink_hello_co.paa"};
	};
	class eXpoch_Car_SUVXLX_Orange: Exile_Car_SUVXL_Abstract
	{
		scope = 2;
		displayName = "Suv (XLX) Orange";
		skinName = "Orange";
		maximumLoad = 3000;
		HiddenSelections[] = {"camo"};
		HiddenSelectionsTextures[] = {"Exile_psycho_SUV_a3\Data\textures\suv_body_orange_co.paa"};
	};

};
class CfgWeapons
{
	class CA_Magazine;
	class Exile_AbstractItem_Interaction_Using
	{
		scope = 1;
		chance = 100;
		successFunction = "";
		successNotification[] = {"",""};
	};
	class UniformItem;
	class ItemCore;
	class RocketPods;
	class MuzzleSlot;
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class MosquitoGrenadeLauncher: RocketPods
	{
		scope = 1;
		displayName = "Grenades";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		autoFire = 0;
		sound[] = {"",10.0,1};
		magazines[] = {"3Rnd_MosquitoGrenade"};
		reloadTime = 3;
		magazineReloadTime = 5;
		dispersion = 0;
		minRange = 1;
		minRangeProbab = 0.8;
		midRange = 50;
		midRangeProbab = 0.7;
		maxRange = 150;
		maxRangeProbab = 0.1;
		autoReload = 1;
		canLock = 0;
	};
	class U_BasicBodyFemale: ItemCore
	{
		author = "Sequisha";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Keesha Underwear";
		picture = "\x\addons\a3_epoch_assets\textures\keesha\icon_femaleW_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "FemaleUnderwear_F";
			containerClass = "Supply30";
			mass = 15;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification[] = {"Gender Switch Complete","You have officialy become a girl, thank you for participating in our IGDT campaign! GAME ON!!! -sTanG"};
			};
		};
	};
	class U_Wetsuit_uniform: ItemCore
	{
		author = "Sequisha";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Female Wetsuit";
		picture = "\x\addons\a3_epoch_assets\textures\wetsuit\icon_wetsuit_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Epoch_Female_wetsuit_F";
			containerClass = "Supply80";
			uniformType = "Neopren";
			mass = 60;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};
	class U_Wetsuit_White: ItemCore
	{
		author = "Sequisha";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Female Wetsuit (white)";
		picture = "\x\addons\a3_epoch_assets\textures\wetsuit\icon_wetsuitWhite_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Epoch_Female_wetsuitW_F";
			containerClass = "Supply80";
			uniformType = "Neopren";
			mass = 60;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};
	class U_Wetsuit_Blue: ItemCore
	{
		author = "Sequisha";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Female Wetsuit (blue)";
		picture = "\x\addons\a3_epoch_assets\textures\wetsuit\icon_wetsuitBlue_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Epoch_Female_wetsuitB_F";
			containerClass = "Supply80";
			uniformType = "Neopren";
			mass = 60;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};
	class U_Wetsuit_Purp: ItemCore
	{
		author = "Sequisha";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Female Wetsuit (purple)";
		picture = "\x\addons\a3_epoch_assets\textures\wetsuit\icon_wetsuitPurp_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Epoch_Female_wetsuitP_F";
			containerClass = "Supply80";
			uniformType = "Neopren";
			mass = 60;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};
	class U_Wetsuit_Camo: ItemCore
	{
		author = "Sequisha";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Female Wetsuit (camo)";
		picture = "\x\addons\a3_epoch_assets\textures\wetsuit\gear_femaleWetsuit_camo_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Epoch_Female_wetsuitC_F";
			containerClass = "Supply80";
			uniformType = "Neopren";
			mass = 60;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};
	class U_Camo_uniform: ItemCore
	{
		author = "Sequisha";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Keesha Camo";
		picture = "\x\addons\a3_epoch_assets\textures\camo\icon_camoDark_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Epoch_Female_Camo_F";
			containerClass = "Supply30";
			mass = 30;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};
	class U_ghillie1_uniform: ItemCore
	{
		author = "Sequisha";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Female Ghillie (tan)";
		picture = "\x\addons\a3_epoch_assets\textures\ghillie\gear_femaleGhillie_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Epoch_Female_Ghillie1_F";
			containerClass = "Supply80";
			mass = 60;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};
	class U_ghillie2_uniform: ItemCore
	{
		author = "Sequisha";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Female Ghillie (light green)";
		picture = "\x\addons\a3_epoch_assets\textures\ghillie\gear_femaleGhillie2_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Epoch_Female_Ghillie2_F";
			containerClass = "Supply80";
			mass = 60;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};
	class U_ghillie3_uniform: ItemCore
	{
		author = "Sequisha";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Female Ghillie (green)";
		picture = "\x\addons\a3_epoch_assets\textures\ghillie\gear_femaleGhillie3_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Epoch_Female_Ghillie3_F";
			containerClass = "Supply80";
			mass = 60;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};
	class U_CamoBlue_uniform: ItemCore
	{
		author = "Sequisha";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Keesha Camo (Blue)";
		picture = "\x\addons\a3_epoch_assets\textures\camo\icon_camoBlue_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Epoch_Female_CamoBlue_F";
			containerClass = "Supply30";
			mass = 30;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};
	class U_CamoBrn_uniform: ItemCore
	{
		author = "Sequisha";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Keesha Camo (Brown)";
		picture = "\x\addons\a3_epoch_assets\textures\camo\icon_camoBrown_ca.pqq.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Epoch_Female_CamoBrn_F";
			containerClass = "Supply30";
			mass = 30;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};
	class U_CamoRed_uniform: ItemCore
	{
		author = "Sequisha";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Keesha Camo (Red)";
		picture = "\x\addons\a3_epoch_assets\textures\camo\icon_camoRed_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Epoch_Female_CamoRed_F";
			containerClass = "Supply30";
			mass = 30;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};
	class eXpoch_U_Prisoner_uniform: ItemCore
	{
		author = "ComatoseBadger";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Keesha Prisoner";
		picture = "\x\addons\a3_epoch_assets\textures\camo\icon_camoBlue_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "eXpoch_Female_Prisoner_F";
			containerClass = "Supply30";
			mass = 30;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};
	class eXpoch_U_camo_pinkpolka: ItemCore
	{
		author = "ComatoseBadger";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Keesha Pink Polka";
		picture = "\x\addons\a3_epoch_assets\textures\camo\icon_camoBlue_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "eXpoch_Female_PinkPolka_F";
			containerClass = "Supply30";
			mass = 30;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};
	class eXpoch_U_camo_pink: ItemCore
	{
		author = "ComatoseBadger";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Keesha Pink";
		picture = "\x\addons\a3_epoch_assets\textures\camo\icon_camoBlue_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "eXpoch_Female_Pink_F";
			containerClass = "Supply30";
			mass = 30;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};
	class eXpoch_U_camo_outback: ItemCore
	{
		author = "ComatoseBadger";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Keesha Outback";
		picture = "\x\addons\a3_epoch_assets\textures\camo\icon_camoBlue_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "eXpoch_Female_outback_F";
			containerClass = "Supply30";
			mass = 30;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};
	class eXpoch_U_camo_lumberjack: ItemCore
	{
		author = "ComatoseBadger";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Keesha Lumberjack";
		picture = "\x\addons\a3_epoch_assets\textures\camo\icon_camoBlue_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "eXpoch_Female_lumberjack_F";
			containerClass = "Supply30";
			mass = 30;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};
	class eXpoch_U_camo_bubblegum: ItemCore
	{
		author = "ComatoseBadger";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Keesha Bubblegum";
		picture = "\x\addons\a3_epoch_assets\textures\camo\icon_camoBlue_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "eXpoch_Female_bubblegum_F";
			containerClass = "Supply30";
			mass = 30;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};
	class eXpoch_U_camo_biker: ItemCore
	{
		author = "ComatoseBadger";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Keesha Biker";
		picture = "\x\addons\a3_epoch_assets\textures\camo\icon_camoBlue_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "eXpoch_Female_biker_F";
			containerClass = "Supply30";
			mass = 30;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};
	class eXpoch_U_camo_aloha: ItemCore
	{
		author = "ComatoseBadger";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "Keesha Aloha";
		picture = "\x\addons\a3_epoch_assets\textures\camo\icon_camoBlue_ca.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "eXpoch_Female_aloha_F";
			containerClass = "Supply30";
			mass = 30;
		};
		class Interactions
		{
			class Using: Exile_AbstractItem_Interaction_Using
			{
				scope = 1;
				chance = 100;
				successFunction = "eXpochClient_inventory_forceAddUniform";
				successNotification = "";
			};
		};
	};

	class eXpoch_U_male_prisoner: ItemCore
	{
		author = "ComatoseBadger";
		scope = 2;
		allowedSlots[] = {801,901};
		displayName = "eXpoch Prisoner";
		picture = "\exile_assets\texture\item\Exile_Uniform_BambiOverall.paa";
		model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "eXpoch_Male_Prisoner_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	
	class 1911_pistol_epoch: Pistol_Base_F
	{
		scope = 2;
		author = "kiory";
		model = "\x\addons\a3_epoch_weapons\1911.p3d";
		picture = "\x\addons\a3_epoch_weapons\gear\gear_1911_x_ca.paa";
		magazines[] = {"9rnd_45X88_magazine"};
		displayname = "$STR_EPOCH_1911";
		descriptionShort = "$STR_A3_CFGWEAPONS_HGUN_ACPC2_F_2";
		class Library
		{
			libTextDesc = "$STR_A3_CfgWeapons_hgun_Pistol_heavy_01_F_Library0";
		};
		drySound[] = {"A3\Sounds_F\weapons\pistol_heavy_02\dry",0.39810717,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\weapons\pistol_heavy_02\reload",0.56234133,1,30};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",0.3,1,30};
				closure2[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",0.3,1.1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"x\addons\a3_epoch_weapons\sounds\SoundA",1.3,1,1000};
				begin2[] = {"x\addons\a3_epoch_weapons\sounds\SoundB",1.3,1,1000};
				soundBegin[] = {"begin1",0.4,"begin2",0.3};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",0.56234133,1,600};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",0.56234133,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.1;
			dispersion = 0.01;
			reloadAction = "GestureReloadPistol";
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		recoil = "recoil_pistol_light";
		recoilProne = "recoil_prone_pistol_light";
		reloadTime = 0.1;
		dispersion = 0.01;
		reloadAction = "GestureReloadPistol";
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.4125376,1,10};
		closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.4125376,1.1,10};
		soundClosure[] = {"closure1",0.5,"closure2",0.5};
		weaponSoundEffect = "DefaultRifle";
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "PistolCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
			class PistolAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "epoch_ammocloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "epoch_smoketrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot{};
			class MuzzleSlot{};
		};
	};
	class ruger_pistol_epoch: Pistol_Base_F
	{
		scope = 2;
		author = "kiory";
		model = "\x\addons\a3_epoch_weapons\ruger.p3d";
		picture = "\x\addons\a3_epoch_weapons\gear\gear_ruger_x_ca.paa";
		magazines[] = {"10rnd_22X44_magazine"};
		displayname = "$STR_EPOCH_Ruger";
		descriptionShort = "$STR_EPOCH_22caliberpistol";
		class Library
		{
			libTextDesc = ".22 caliber pistol";
		};
		drySound[] = {"A3\Sounds_F\weapons\pistol_heavy_02\dry",0.39810717,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\weapons\pistol_heavy_02\reload",0.56234133,1,30};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",0.3,1,30};
				closure2[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",0.3,1.1,30};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",0.56234133,1,600};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",0.56234133,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",0.56234133,1,600};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",0.56234133,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.1;
			dispersion = 0.01;
			reloadAction = "GestureReloadPistol";
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		recoil = "recoil_pistol_light";
		recoilProne = "recoil_prone_pistol_light";
		reloadTime = 0.1;
		dispersion = 0.01;
		reloadAction = "GestureReloadPistol";		
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.4125376,1,10};
		closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.4125376,1.1,10};
		soundClosure[] = {"closure1",0.5,"closure2",0.5};
		weaponSoundEffect = "DefaultRifle";
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "PistolCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
			class PistolAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "epoch_ammocloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "epoch_smoketrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 40;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_Aco","optic_Aco_smg","optic_ACO_grn_smg","optic_Holosight","optic_Holosight_smg"};
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot{};
		};
	};
};
class CfgMarkerClasses
{
	class eXpochJailZone
	{
		displayName = "eXpoch Jail Zone";
	};
	class eXpochMilitaryZone
	{
		displayName = "eXpoch Military Zone";
	};
	class eXpochFarmZone
	{
		displayName = "eXpoch Farm Zone";
	};
};
class CfgMarkers
{
	class eXpochJailZone
	{
		scope = 0;
		name = "eXpoch Jail Zone";
		icon = "";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "eXpochJailZone";
		showEditorMarkerColor = 0;
	};
	class eXpochMilitaryZone
	{
		scope = 0;
		name = "eXpoch Military Zone";
		icon = "";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "eXpochMilitaryZone";
		showEditorMarkerColor = 0;
	};
	class eXpochFarmZone
	{
		scope = 0;
		name = "eXpoch Farm Zone";
		icon = "";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
		markerClass = "eXpochFarmZone";
		showEditorMarkerColor = 0;
	};
};
class RscText;
class RscStructuredText;
class RscCombo;
class RscXSliderH;
class RscHTML;
class RscControlsGroupNoScrollbars;
class RscPicture;
class RscVignette;
class RscProgress;
class ProgressMap;
class RscMapControl;
class RscListBox;
class RscButton;
class RscControlsGroup;
class RscPictureKeepAspect;
class RscPictureButton;
class RscExileXM8Slide;
class RscExileXM8Button;
class RscExileXM8Edit;
class RscExileXM8AppButton;
class RscExileXM8AppButton1x1;
class RscExileXM8AppButton2x1;
class RscExileXm8ButtonMenu;
class RscExileXM8ListBox;
class RscExileXM8Frame;
class RscExilePrimaryButton;
class RscExileItemListBox;
class RscButtonMenuOK;
class RscEdit;
class Attributes;
class RscButtonMenuCancel;
class RscExileSelectSpawnLocationDialog
{
	idd = 24002;
	access = 3;
	duration = -1;
	onLoad = "uiNamespace setVariable ['RscExileSelectSpawnLocationDialog', _this select 0];";
	onUnload = "uiNamespace setVariable ['RscExileSelectSpawnLocationDialog', displayNull]";
	class controlsBackground
	{
		class ExileBlackBackground: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,1};
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
		class ExileBackgroundPicture: RscPicture
		{
			idc = 66000;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneW * 4/3";
			text = "exile_assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class controls
	{
		class ExileLogo: RscControlsGroupNoScrollbars
		{
			idc = -1;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + 60 * pixelH";
			w = "380 * pixelW";
			h = "60 * pixelH";
			class controls
			{
				class ExileModBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModIcon: RscPictureKeepAspect
				{
					idc = -1;
					text = "eXpoch_assets\texture\warningX.paa";
					x = 0;
					y = 0;
					w = "60 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModName: RscText
				{
					idc = -1;
					text = "eXpoch Mod";
					font = "RobotoMedium";
					x = "(60 + 10) * pixelW";
					y = "1 * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "(30 + 15) * pixelH";
					sizeEx = "30 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
				};
				class ExileModUrl: RscText
				{
					idc = -1;
					text = "DonkeyPunch.INFO";
					font = "RobotoCondensedLight";
					x = "(60 + 10) * pixelW";
					y = "(1 + 30) * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMap: RscControlsGroupNoScrollbars
		{
			idc = 66003;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMapBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMapPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapPicture: RscPicture
				{
					idc = 66004;
					text = "a3\ui_f\data\Logos\arma3_white_ca.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapName: RscText
				{
					idc = 66005;
					text = "RscMPSetupMessage";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMapAuthor: RscText
				{
					idc = 66006;
					text = "by some special person";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMission: RscControlsGroupNoScrollbars
		{
			idc = 66007;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMissionBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMissionPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionPicture: RscPictureKeepAspect
				{
					idc = 66008;
					text = "exile_assets\texture\mod\logo.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionName: RscText
				{
					idc = 66009;
					text = "RscMPSetupMessage";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMissionAuthor: RscText
				{
					idc = 66010;
					text = "by Community";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class DialogBackground: RscText
		{
			idc = -1;
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + 60 * pixelH";
			w = "safeZoneW - (60 + 60 + 380 + 60) * pixelW";
			h = "safeZoneH - (60 + 60) * pixelH";
			colorBackground[] = {"32/255","36/255","42/255",1};
		};
		class DialogTitleBackground: RscText
		{
			idc = -1;
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + 60 * pixelH";
			w = "safeZoneW - (60 + 60 + 380 + 60) * pixelW";
			h = "60 * pixelH";
			colorBackground[] = {0,0,0,1};
		};
		class DialogTitle: RscText
		{
			idc = -1;
			x = "safeZoneX + (60 + 15) * pixelW";
			y = "safeZoneY + 60 * pixelH";
			w = "safeZoneW - (60 + 60 + 380 + 60 + 60 + 10) * pixelW";
			h = "60 * pixelH";
			text = "Spawn Location";
			sizeEx = "30 * pixelH";
			font = "RobotoCondensed";
		};
		class ListBoxLocations: RscListBox
		{
			idc = 24002;
			text = "Locations";
			font = "RobotoCondensed";
			x = "safeZoneX + (60 + 15) * pixelW";
			y = "safeZoneY + (60 + 60 + 15) * pixelH";
			w = "300 * pixelW";
			h = "safeZoneH - (60 + 60 + 60 + 15 + 15 + 60 + 15) * pixelH";
			colorBackground[] = {0,0,0,0.25};
			onLBSelChanged = "_this call ExileClient_gui_selectSpawnLocation_event_onListBoxSelectionChanged;";
		};
		class Map: RscMapControl
		{
			idc = 24001;
			text = "";
			x = "safeZoneX + (60 + 15 + 300 + 15) * pixelW";
			y = "safeZoneY + (60 + 60 + 15) * pixelH";
			w = "safeZoneW - (60 + 15 + 300 + 15 + 15 + 60 + 380 + 60) * pixelW";
			h = "safeZoneH - (60 + 60 + 15 + 60 + 15) * pixelH";
			moveOnEdges = 0;
			maxSatelliteAlpha = 0.75;
			alphaFadeStartScale = 1.15;
			alphaFadeEndScale = 1.29;
		};
		class ButtonSpawn: RscExilePrimaryButton
		{
			idc = 24003;
			text = "GAME ON!!!";
			x = "safeZoneX + (60 + 15) * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 15 + 60) * pixelH";
			w = "300 * pixelW";
			h = "60 * pixelH";
			onButtonClick = "[] call eXpochClient_gui_customizeCharacterDialog_show";//"[] call ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick";
		};
		class ButtonMale: RscExilePrimaryButton
		{
			idc = 79998;
			onButtonClick = "eXpochClientGenderSelect = 1;ExileClientSelectedSpawnLocationMarkerName set [1,eXpochClientGenderSelect];";
			text = "MALE";
			x = 0.793906 * safezoneW + safezoneX;
			y = 0.656692 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ButtonFemale: RscExilePrimaryButton
		{
			idc = 79997;
			onButtonClick = "eXpochClientGenderSelect = 0;ExileClientSelectedSpawnLocationMarkerName set [1,eXpochClientGenderSelect];";

			text = "FEMALE";
			x = 0.871771 * safezoneW + safezoneX;
			y = 0.656885 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class ButtonGround: RscExilePrimaryButton
		{
			idc = 79996;
			onButtonClick = "eXpochClientSpawnType = 0;ExileClientSelectedSpawnLocationMarkerName set [2,eXpochClientSpawnType];";
			text = "GROUND";
			x = 0.793906 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.15625 * safezoneW;
			h = 0.0576924 * safezoneH;
		};
		class ButtonHalo: RscExilePrimaryButton
		{
			idc = 79995;
			onButtonClick = "eXpochClientSpawnType = 2;ExileClientSelectedSpawnLocationMarkerName set [2,eXpochClientSpawnType];";
			text = "HALO JUMP";
			x = 0.793906 * safezoneW + safezoneX;
			y = 0.786 * safezoneH + safezoneY;
			w = 0.15625 * safezoneW;
			h = 0.0576924 * safezoneH;
		};
		class ButtonGearSelect: RscExilePrimaryButton
		{
			idc = 79994;
			onButtonClick = "hint 'this is not done yet, but will be for heros and bandits when it is done';_names = ['ENGINEER','SNIPER','MEDIC','SUPPORT'];_display = findDisplay 24002;_gearButton = _display displayCtrl 79994;_gearButton ctrlSetText (_names select eXpochClientGearSelect);if(eXpochClientGearSelect<3)then{eXpochClientGearSelect = eXpochClientGearSelect + 1;}else{eXpochClientGearSelect = 0;};";
			text = "GEAR SELECT";
			x = 0.793906 * safezoneW + safezoneX;
			y = 0.852 * safezoneH + safezoneY;
			w = 0.15625 * safezoneW;
			h = 0.0576924 * safezoneH;
		};
	};
};
class RscExileAnimalTraderDialog
{
	idd = 24008;
	onLoad = "uiNamespace setVariable ['RscExileAnimalTraderDialog', _this select 0]";
	onUnload = "call eXpochClient_gui_animalTraderDialog_event_onUnload; uiNamespace setVariable ['RscExileAnimalTraderDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = 1000;
			x = "0.5 * safezoneW / 40 + safezoneX";
			y = "0.5 * safezoneH / 25 + safezoneY";
			w = "8 * safezoneW / 40";
			h = "16.5 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogTitle: RscText
		{
			idc = 1001;
			text = "The Dog Catcher";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "1 * safezoneH / 25";
			sizeEx = "1 * safezoneH / 25";
		};
		class CancelBackground: RscText
		{
			idc = 1006;
			x = "0.5 * safezoneW / 40 + safezoneX";
			y = "23 * safezoneH / 25 + safezoneY";
			w = "8 * safezoneW / 40";
			h = "1.5 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
	};
	class controls
	{
		class CategoryDropDown: RscCombo
		{
			idc = 4000;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "2.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			onLBSelChanged = "_this call eXpochClient_gui_animalTraderDialog_event_onCategoryDropDownSelectionChanged";
		};
		class AnimalsListBox: RscExileItemListBox
		{
			idc = 4001;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "2.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "7 * safezoneH / 25";
			onLBSelChanged = "_this call eXpochClient_gui_animalTraderDialog_event_onAnimalListBoxSelectionChanged";
		};
		class ButtonPurchase: RscButtonMenuOK
		{
			idc = 4002;
			text = "Adopt A Buddy";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "15.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "1 * safezoneH / 25";
			sizeEx = "0.75 * safezoneH / 25";
			onMouseButtonClick = "_this call eXpochClient_gui_animalTraderDialog_event_onPurchaseButtonClick";
			class Attributes: Attributes
			{
				align = "center";
				valign = "middle";
			};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = 4006;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "23.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.5 * safezoneH / 25";
			action = "closeDialog 0";
			class Attributes: Attributes
			{
				align = "center";
			};
		};
		class PinBox: RscEdit
		{
			idc = 4008;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "14.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.9 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
			onChar = "_this spawn eXpochClient_gui_animalTraderDialog_event_onInputBoxChars";
		};
		class PinText: RscStructuredText
		{
			text = "Tag ID Required:";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "13.8 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.8 * safezoneH / 25";
		};
		class Stat01Background: RscText
		{
			idc = 6000;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat01Progress: RscProgress
		{
			idc = 6001;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat01Label: RscText
		{
			idc = 6002;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat01Value: RscStructuredText
		{
			idc = 6003;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
		class Stat02Background: RscText
		{
			idc = 6004;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat02Progress: RscProgress
		{
			idc = 6005;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat02Label: RscText
		{
			idc = 6006;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat02Value: RscStructuredText
		{
			idc = 6007;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
		class Stat03Background: RscText
		{
			idc = 6008;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat03Progress: RscProgress
		{
			idc = 6009;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat03Label: RscText
		{
			idc = 6010;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat03Value: RscStructuredText
		{
			idc = 6011;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
		class Stat04Background: RscText
		{
			idc = 6012;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat04Progress: RscProgress
		{
			idc = 6013;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat04Label: RscText
		{
			idc = 6014;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat04Value: RscStructuredText
		{
			idc = 6015;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
	};
};
class RscExileMercTraderDialog
{
	idd = 24008;
	onLoad = "uiNamespace setVariable ['RscExileMercTraderDialog', _this select 0]";
	onUnload = "call eXpochClient_gui_mercTraderDialog_event_onUnload; uiNamespace setVariable ['RscExileMercTraderDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = 1000;
			x = "0.5 * safezoneW / 40 + safezoneX";
			y = "0.5 * safezoneH / 25 + safezoneY";
			w = "8 * safezoneW / 40";
			h = "16.5 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogTitle: RscText
		{
			idc = 1001;
			text = "Rent a Mercenary";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "1 * safezoneH / 25";
			sizeEx = "1 * safezoneH / 25";
		};
		class CancelBackground: RscText
		{
			idc = 1006;
			x = "0.5 * safezoneW / 40 + safezoneX";
			y = "23 * safezoneH / 25 + safezoneY";
			w = "8 * safezoneW / 40";
			h = "1.5 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
	};
	class controls
	{
		class CategoryDropDown: RscCombo
		{
			idc = 4000;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "2.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			onLBSelChanged = "_this call eXpochClient_gui_mercTraderDialog_event_onCategoryDropDownSelectionChanged";
		};
		class MercListBox: RscExileItemListBox
		{
			idc = 4001;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "2.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "7 * safezoneH / 25";
			onLBSelChanged = "_this call eXpochClient_gui_mercTraderDialog_event_onMercListBoxSelectionChanged";
		};
		class ButtonPurchase: RscButtonMenuOK
		{
			idc = 4002;
			text = "Purchase Contract";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "15.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "1 * safezoneH / 25";
			sizeEx = "0.75 * safezoneH / 25";
			onMouseButtonClick = "_this call eXpochClient_gui_mercTraderDialog_event_onPurchaseButtonClick";
			class Attributes: Attributes
			{
				align = "center";
				valign = "middle";
			};
		};
		class CancelButton: RscButtonMenuCancel
		{
			idc = 4006;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "23.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.5 * safezoneH / 25";
			action = "closeDialog 0";
			class Attributes: Attributes
			{
				align = "center";
			};
		};
		class PinBox: RscEdit
		{
			idc = 4008;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "14.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.9 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
			onChar = "_this spawn eXpochClient_gui_mercTraderDialog_event_onInputBoxChars";
		};
		class PinText: RscStructuredText
		{
			text = "Private Contract ID#";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "13.8 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.8 * safezoneH / 25";
		};
		class Stat01Background: RscText
		{
			idc = 6000;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat01Progress: RscProgress
		{
			idc = 6001;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat01Label: RscText
		{
			idc = 6002;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat01Value: RscStructuredText
		{
			idc = 6003;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
		class Stat02Background: RscText
		{
			idc = 6004;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat02Progress: RscProgress
		{
			idc = 6005;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat02Label: RscText
		{
			idc = 6006;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat02Value: RscStructuredText
		{
			idc = 6007;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
		class Stat03Background: RscText
		{
			idc = 6008;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat03Progress: RscProgress
		{
			idc = 6009;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat03Label: RscText
		{
			idc = 6010;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat03Value: RscStructuredText
		{
			idc = 6011;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
		class Stat04Background: RscText
		{
			idc = 6012;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat04Progress: RscProgress
		{
			idc = 6013;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat04Label: RscText
		{
			idc = 6014;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat04Value: RscStructuredText
		{
			idc = 6015;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
	};
};

class RscExileCustomizeCharacterDialog
{
	idd = 24008;
	onLoad = "uiNamespace setVariable ['RscExileCustomizeCharacterDialog', _this select 0]";
	onUnload = "call eXpochClient_gui_customizeCharacterDialog_event_onUnload; uiNamespace setVariable ['RscExileCustomizeCharacterDialog', displayNull]";
	class controlsBackground
	{
		class DialogBackground: RscText
		{
			idc = 1000;
			x = "0.5 * safezoneW / 40 + safezoneX";
			y = "0.5 * safezoneH / 25 + safezoneY";
			w = "8 * safezoneW / 40";
			h = "16.5 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class DialogTitle: RscText
		{
			idc = 1001;
			text = "Custom Loadouts";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "1 * safezoneH / 25";
			sizeEx = "1 * safezoneH / 25";
		};
		class CancelBackground: RscText
		{
			idc = 1006;
			x = "0.5 * safezoneW / 40 + safezoneX";
			y = "23 * safezoneH / 25 + safezoneY";
			w = "8 * safezoneW / 40";
			h = "1.5 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
	};
	class controls
	{
		class CategoryDropDown: RscCombo
		{
			idc = 4000;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "2.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			onLBSelChanged = "_this call eXpochClient_gui_customizeCharacterDialog_event_onCategoryDropDownSelectionChanged";
		};
		class AllowedItemsListBox: RscExileItemListBox
		{
			idc = 4001;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "2.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "7 * safezoneH / 25";
			onLBSelChanged = "_this call eXpochClient_gui_customizeCharacterDialog_event_onCustomizationListBoxSelectionChanged";
		};
		class ButtonCheckAccess: RscButtonMenuOK
		{
			idc = 4002;
			text = "Check Access Code";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "15.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "1 * safezoneH / 25";
			sizeEx = "0.75 * safezoneH / 25";
			onMouseButtonClick = "_this call eXpochClient_gui_customizeCharacterDialog_event_onPurchaseButtonClick";
			class Attributes: Attributes
			{
				align = "center";
				valign = "middle";
			};
		};
		class DisconnectButton: RscButton
		{
			idc = 4006;
			text = "Suicide";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "23.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.5 * safezoneH / 25";
			action = "closeDialog 0;player setdamage 1;deleteVehicle player;";
			class Attributes: Attributes
			{
				align = "center";
			};
		};
		class PinBox: RscEdit
		{
			idc = 4008;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "14.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.9 * safezoneH / 25";
			colorBackground[] = {0.05,0.05,0.05,0.7};
			onChar = "_this spawn eXpochClient_gui_customizeCharacterDialog_event_onInputBoxChars";
		};
		class PinText: RscStructuredText
		{
			text = "eXnet Client Password";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "13.8 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.8 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "center";
				valign = "middle";
			};
		};
		class Stat01Background: RscText
		{
			idc = 6000;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat01Progress: RscProgress
		{
			idc = 6001;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat01Label: RscText
		{
			idc = 6002;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat01Value: RscStructuredText
		{
			idc = 6003;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "10.5 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
		class Stat02Background: RscText
		{
			idc = 6004;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat02Progress: RscProgress
		{
			idc = 6005;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat02Label: RscText
		{
			idc = 6006;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat02Value: RscStructuredText
		{
			idc = 6007;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "11.3 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
		class Stat03Background: RscText
		{
			idc = 6008;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat03Progress: RscProgress
		{
			idc = 6009;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat03Label: RscText
		{
			idc = 6010;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat03Value: RscStructuredText
		{
			idc = 6011;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.1 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
		class Stat04Background: RscText
		{
			idc = 6012;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorBackground[] = {0,0,0,0.5};
		};
		class Stat04Progress: RscProgress
		{
			idc = 6013;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class Stat04Label: RscText
		{
			idc = 6014;
			text = "";
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
		};
		class Stat04Value: RscStructuredText
		{
			idc = 6015;
			text = "";
			style = 1;
			x = "1 * safezoneW / 40 + safezoneX";
			y = "12.9 * safezoneH / 25 + safezoneY";
			w = "7 * safezoneW / 40";
			h = "0.7 * safezoneH / 25";
			class Attributes: Attributes
			{
				align = "right";
			};
		};
//New Buttons Box for options
		class eXpochLogo: RscPicture
		{
			idc = 41993;
			text = "\eXpoch_characters\textures\logos\X-1024.paa";
			x = 0.80525 * safezoneW + safezoneX;
			y = 0.40012 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.253 * safezoneH;
		};
		class ButtonBackGround: RscText
		{
			idc = 41994;

			x = 0.78795 * safezoneW + safezoneX;
			y = 0.724042 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.165 * safezoneH;
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class ArmPrimaryButton: RscButton
		{
			idc = 41995;
			action = "player playMoveNow 'AmovPercMstpSrasWrflDnon';player selectWeapon (primaryWeapon player);";

			text = "Arm Primary Weapon"; //--- ToDo: Localize;
			x = 0.796794 * safezoneW + safezoneX;
			y = 0.7464 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.02 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class ArmSecondaryButton: RscButton
		{
			idc = 41996;
			action = "player playMoveNow 'AmovPercMstpSrasWlnrDnon';player selectWeapon (secondaryWeapon player);";

			text = "Arm Secondary Weapon"; //--- ToDo: Localize;
			x = 0.796794 * safezoneW + safezoneX;
			y = 0.7844 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.02 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class ArmHandgunButton: RscButton
		{
			idc = 41997;
			action = "player playMoveNow 'AmovPercMstpSrasWpstDnon';player selectWeapon (handGunWeapon player);";

			text = "Arm Handgun Weapon"; //--- ToDo: Localize;
			x = 0.796794 * safezoneW + safezoneX;
			y = 0.8224 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.02 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class ChangeStanceButton: RscButton
		{
			idc = 41998;
			action = "if(eXpochCustomizeStance isEqualTo 0)then{player playMoveNow 'AmovPknlMstpSnonWnonDnon'; eXpochCustomizeStance=1;}else{ if(eXpochCustomizeStance isEqualTo 1)then{player playMoveNow 'AmovPpneMstpSnonWnonDnon'; eXpochCustomizeStance=2;}else{player playMoveNow 'AmovPercMstpSnonWnonDnon'; eXpochCustomizeStance=0;};};";

			text = "Change Stance"; //--- ToDo: Localize;
			x = 0.796794 * safezoneW + safezoneX;
			y = 0.8604 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.02 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		
		class PlayerName: RscText
		{
			idc = 41999;
			text = "[eXpoch]MusTanG"; //--- ToDo: Localize;
			x = 0.821234 * safezoneW + safezoneX;
			y = 0.07936 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.033 * safezoneH;
			sizeEx = "0.75 * safezoneH / 25";
		};
//Main continue spawn button		
		class ContinueSpawnBackground: RscText
		{
			idc = 42001;

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.83 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.0599999 * safezoneH;
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class ContinueSpawn: RscButton
		{
			idc = 42002;
			action = "call eXpochClient_gui_customizeCharacterDialog_event_onUnload;";//call function send info to server

			text = "Continue Spawn"; //--- ToDo: Localize;
			x = 0.414045 * safezoneW + safezoneX;
			y = 0.849038 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.02 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			class Attributes: Attributes
			{
				align = "center";
				valign = "middle";
			};
		};
//New Stats tracker box		
		class PlayerStatsBackground: RscText
		{
			idc = 42003;

			x = 0.783594 * safezoneW + safezoneX;
			y = 0.016 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.66 * safezoneH;
			colorBackground[] = {0.05,0.05,0.05,0.7};
		};
		class PlayerStatsTitle: RscText
		{
			idc = 42004;

			text = "Your Statistics"; //--- ToDo: Localize;
			x = 0.796458 * safezoneW + safezoneX;
			y = 0.0325555 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.04 * safezoneH;
			sizeEx = "0.75 * safezoneH / 25";
		};
//First stat 		
		class PlayerStat01Background: RscText
		{
			idc = 42005;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.123101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class PlayerStat01Progress: RscProgress
		{
			idc = 42006;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.123101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		
		class PlayerStat01Label: RscText
		{
			idc = 42007;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.123101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
		};
		class PlayerStat01Value: RscStructuredText
		{
			idc = 42008;
			text = "";
			style = 1;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.123101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			class Attributes: Attributes
			{
				align = "right";
			};
		};
//Second stat 		
		class PlayerStat02Background: RscText
		{
			idc = 42009;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.161101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class PlayerStat02Progress: RscProgress
		{
			idc = 42010;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.161101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class PlayerStat02Label: RscText
		{
			idc = 42011;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.161101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
		};
		class PlayerStat02Value: RscStructuredText
		{
			idc = 42012;
			text = "";
			style = 1;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.161101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			class Attributes: Attributes
			{
				align = "right";
			};
		};
//Third stat 		
		class PlayerStat03Background: RscText
		{
			idc = 42013;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.199101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class PlayerStat03Progress: RscProgress
		{
			idc = 42014;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.199101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		
		class PlayerStat03Label: RscText
		{
			idc = 42015;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.199101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
		};
		class PlayerStat03Value: RscStructuredText
		{
			idc = 42016;
			text = "";
			style = 1;
			
			x = 0.795833 * safezoneW + safezoneX;
			y = 0.199101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			class Attributes: Attributes
			{
				align = "right";
			};
		};
//Fourth stat 		
		class PlayerStat04Background: RscText
		{
			idc = 42017;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.237101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class PlayerStat04Progress: RscProgress
		{
			idc = 42018;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.237101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class PlayerStat04Label: RscText
		{
			idc = 42019;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.237101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
		};
		class PlayerStat04Value: RscStructuredText
		{
			idc = 42020;
			text = "";
			style = 1;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.237101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			class Attributes: Attributes
			{
				align = "right";
			};
		};
//Fifth stat 		
		class PlayerStat05Background: RscText
		{
			idc = 42021;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.275101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class PlayerStat05Progress: RscProgress
		{
			idc = 42022;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.275101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class PlayerStat05Label: RscText
		{
			idc = 42023;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.275101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
		};
		class PlayerStat05Value: RscStructuredText
		{
			idc = 42024;
			text = "";
			style = 1;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.275101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			class Attributes: Attributes
			{
				align = "right";
			};
		};
//Sixth stat 		
		class PlayerStat06Background: RscText
		{
			idc = 42025;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.313101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class PlayerStat06Progress: RscProgress
		{
			idc = 42026;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.313101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class PlayerStat06Label: RscText
		{
			idc = 42027;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.313101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
		};
		class PlayerStat06Value: RscStructuredText
		{
			idc = 42028;
			text = "";
			style = 1;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.313101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			class Attributes: Attributes
			{
				align = "right";
			};
		};
//Seventh stat 		
		class PlayerStat07Background: RscText
		{
			idc = 42029;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.351101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class PlayerStat07Progress: RscProgress
		{
			idc = 42030;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.351101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			colorText[] = {1,1,1,0.25};
			colorBackground[] = {1,1,1,0.25};
		};
		class PlayerStat07Label: RscText
		{
			idc = 42031;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.351101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
		};
		class PlayerStat07Value: RscStructuredText
		{
			idc = 42032;
			text = "";
			style = 1;

			x = 0.795833 * safezoneW + safezoneX;
			y = 0.351101 * safezoneH + safezoneY;
			w = 0.175 * safezoneW;
			h = 0.0280001 * safezoneH;
			class Attributes: Attributes
			{
				align = "right";
			};
		};
		//next stat raise y +0.038
	};
};
class CfgExileToasts
{
	class InfoEmpty_Orange
	{
		template = "%1";
		color[] = {0.8,0.4,0,1};
	};
	class InfoTitleOnly_Orange
	{
		template = "<t size='22' font='PuristaMedium'>%1</t>";
		color[] = {0.8,0.4,0,1};
	};
	class InfoTitleAndText_Orange
	{
		template = "<t size='22' font='PuristaMedium'>%1</t><br/><t color='#ff979ba1' size='19' font='PuristaLight'>%2</t>";
		color[] = {0.8,0.4,0,1};
	};
	class InfoEmpty_Purple
	{
		template = "%1";
		color[] = {0.61,0,0.71,1};
	};
	class InfoTitleOnly_Purple
	{
		template = "<t size='22' font='PuristaMedium'>%1</t>";
		color[] = {0.61,0,0.71,1};
	};
	class InfoTitleAndText_Purple
	{
		template = "<t size='22' font='PuristaMedium'>%1</t><br/><t color='#ff979ba1' size='19' font='PuristaLight'>%2</t>";
		color[] = {0.61,0,0.71,1};
	};
	class InfoEmpty_Yellow
	{
		template = "%1";
		color[] = {0.9,0.85,0.1,1};
	};
	class InfoTitleOnly_Yellow
	{
		template = "<t size='22' font='PuristaMedium'>%1</t>";
		color[] = {0.9,0.85,0.1,1};
	};
	class InfoTitleAndText_Yellow
	{
		template = "<t size='22' font='PuristaMedium'>%1</t><br/><t color='#ff979ba1' size='19' font='PuristaLight'>%2</t>";
		color[] = {0.9,0.85,0.1,1};
	};
};
