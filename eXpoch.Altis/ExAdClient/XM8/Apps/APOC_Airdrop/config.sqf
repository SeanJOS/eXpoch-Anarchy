scriptName "config.sqf";
/*--------------------------------------------------------------------
// ******************************************************************************************
// * This script is licensed under the GNU Lesser GPL v3.
// ******************************************************************************************
	file: config.sqf
	======
	Author: Bill Springer <Apoc@MayhemServers.com>
	Description: XM8 App config for ExAd APOC Airdrop Port
--------------------------------------------------------------------*/
#include "functions.sqf"; //Dialog functions for the client

/* ************************************ */

APOC_AA_AdvancedBanking = false;		// Advanced Banking support. Change false to true if you run Advanced Banking on your server.  Not sure of 0.9.8 compatability.
APOC_AA_UseExileLockerFunds = false;	//Removes funds from player's locker stash instead of their hand
APOC_AA_DamageOnWhenLanded = false;		//Turn object allowDamage back on when object is on ground, instead of when in 'chute

APOC_AA_coolDownTime = 300; //Expressed in sec

APOC_AA_Drops =[
/*
	["Category Name",
		[
			["Text displayed to player",	"Name of vehicle or drop box",	cost, "vehicle or supply (use nothing but these two!)", respectThreshold]  //This is an array, use commas between, DUH!
		] //If something breaks with your list of drops, you've likely messed up the nested arrays.
	]
*/

//Also, presently, these are NON-Persistant vehicles.  Meaning that they will not last over a restart.  Keep that in mind with prices.  Later updates I'll set that up, with pin code entry.
	["Vehicles",
		[
		    ["SDV",             "Exile_Boat_SDV_Grey",                  2000, 	"vehicle"],
		    ["JetSki",          "C_Scooter_Transport_01_F",             800, 	"vehicle"],
			["Quadbike", 		"Exile_Bike_QuadBike_Black", 			500, 	"vehicle"],
			["Golf GTI", 		"CUP_C_Golf4_random_Civ", 			    9000, 	"vehicle"],
			["Offroad", 		"Exile_Car_Offroad_Red",				10000, 	"vehicle"]
		]
	],

	["Weapons",
		[
		    ["Covert Ops",         "airdrop_CovertOpps",           4500, "supply"],
			["Small Arms", 			"airdrop_Rifles", 		     	5000, "supply"],
			["Sniper Kits", 		"airdrop_Snipers", 				5500, "supply"],
			["Heavy Weapons", 		"airdrop_Heavy_Weapons", 		6500, "supply"]
		]
	],

	["Supplies",
		[
			["Food (small)",		       "airdrop_FoodSmall",			1500, "supply"],
			["Food (large)",		       "airdrop_FoodLarge",			5000, "supply"],
			["Medical Drop(small)",	       "airdrop_MedicalSmall",	    3500, "supply"],
			["Medical Drop(large)",	       "airdrop_MedicalLarge",	    9000, "supply"]
		]
	],
	["BaseKits",
		[
			["Starter Base Kit",		   "airdrop_SmallBaseKit",	    15000, "supply"],
			["Medium Base Kit",		       "airdrop_MediumBaseKit",	    30000, "supply"],
			["Security Kit",		       "airdrop_SecurityKit",	    35000, "supply"]
	    ]
	]
];

APOC_AA_Drop_Contents =[
	["airdrop_Snipers",  //Name of the drop
		[
		// Item type, Item class(es), # of items, # of magazines per weapon
		// Valid item types: wep, itm, or bac.
			["wep", ["CUP_srifle_SVD","CUP_srifle_M110","CUP_srifle_CZ750","CUP_srifle_L129A1","CUP_srifle_VSSVintorez","srifle_DMR_03_multicam_F","srifle_DMR_05_hex_F","srifle_DMR_02_sniper_F","srifle_DMR_04_Tan_F"],2, 3],
			["wep", ["srifle_GM6_camo_F","srifle_LRR_camo_F","CUP_srifle_ksvk","CUP_srifle_AS50","CUP_srifle_M107_Base","CUP_srifle_AWM_wdl"],1, 3],
			["itm", ["bipod_01_F_blk","bipod_02_F_hex"], 3],
			["itm", ["Rangefinder","Binocular","CUP_Vector21Nite"], 2],
			["itm", ["optic_DMS","optic_AMS","optic_Nightstalker","optic_KHS_blk","optic_LRPS","CUP_optic_SB_3_12x50_PMII","CUP_optic_LeupoldMk4_10x40_LRT_Woodland"], 2],
			["itm", ["V_PlateCarrierIAGL_dgtl","V_PlateCarrierGL_rgr","V_PlateCarrierL_CTRG","V_PlateCarrierH_CTRG","V_PlateCarrierSpec_blk","V_PlateCarrierSpec_mtp","V_PlateCarrierSpec_rgr"], 2],
			["itm", ["CUP_U_I_Ghillie_Top","U_B_FullGhillie_ard","U_B_FullGhillie_lsh","U_B_FullGhillie_sard","U_I_FullGhillie_ard","U_I_FullGhillie_lsh","U_I_FullGhillie_sard","U_O_FullGhillie_ard","U_O_FullGhillie_lsh","U_O_FullGhillie_sard","U_B_GhillieSuit","U_I_GhillieSuit","U_O_GhillieSuit"], 2],
			["bac", ["B_Carryall_mcamo","B_Kitbag_mcamo","CUP_B_HikingPack_Civ","CUP_B_RUS_Backpack","CUP_B_GER_Pack_Flecktarn","CUP_B_GER_Pack_Tropentarn","CUP_B_ACRPara_m95","CUP_B_AlicePack_Khaki","CUP_B_AlicePack_Bedroll","CUP_B_USMC_MOLLE","CUP_B_USMC_MOLLE_WDL"], 2]
		]
	],

	["airdrop_Rifles",
		[
			["wep", ["CUP_arifle_FNFAL_railed","CUP_arifle_Sa58RIS2_gl","CUP_arifle_Mk17_STD_EGLM"],1,3],
			["wep", ["CUP_arifle_Mk17_CQC_EGLM","CUP_arifle_CZ805_B_GL","CUP_arifle_AKM"],1,3],
			["wep", ["CUP_arifle_AKS_Gold","CUP_arifle_CZ805_B","CUP_arifle_M16A4_Base"],1,3],
			["wep", ["CUP_arifle_AK107_GL","CUP_arifle_G36K_camo","CUP_arifle_L85A2_GL"],1,3],

			// ["ItemType",[Array of items/weps to choose from randomly], number of items]
			// If using wep, you need also number of mags to be included.
			["itm", ["V_PlateCarrierH_CTRG","V_PlateCarrierIAGL_dgtl","V_PlateCarrierGL_rgr","V_PlateCarrierL_CTRG","V_PlateCarrierSpec_blk","V_PlateCarrierSpec_mtp","V_PlateCarrierSpec_rgr"], 2],
			["itm", ["CUP_optic_ACOG","CUP_optic_SUSAT","CUP_optic_Elcan","CUP_optic_Elcan_reflex","CUP_optic_ElCAN_SpecterDR","CUP_optic_ElcanM145","optic_Hamr","optic_Arco","optic_DMS"], 2],
			["itm", ["CUP_1Rnd_HE_M203","CUP_1Rnd_HEDP_M203"], 3],
			["itm", ["muzzle_snds_B","muzzle_snds_M"], 2],
			["bac", ["B_Carryall_mcamo","B_Kitbag_mcamo","CUP_B_HikingPack_Civ","CUP_B_RUS_Backpack","CUP_B_GER_Pack_Flecktarn","CUP_B_GER_Pack_Tropentarn","CUP_B_ACRPara_m95","CUP_B_AlicePack_Khaki","CUP_B_AlicePack_Bedroll","CUP_B_USMC_MOLLE","CUP_B_USMC_MOLLE_WDL"], 2]
		]
	],

	["airdrop_Heavy_Weapons",
		[
			["wep", ["MMG_02_camo_F","MMG_01_hex_F","LMG_Mk200_F","LMG_Zafir_F","arifle_MX_SW_Black_F","CUP_lmg_Mk48_wdl","CUP_lmg_M60E4","CUP_arifle_MG36_camo"],3,4],
			["wep", ["CUP_launch_RPG18","CUP_launch_M136"], 1,2],
			["itm", ["V_PlateCarrierSpec_mtp","V_PlateCarrierIAGL_dgtl","V_PlateCarrierGL_rgr","V_PlateCarrierL_CTRG","V_PlateCarrierH_CTRG","V_PlateCarrierSpec_blk","V_PlateCarrierSpec_rgr"], 2],
			["bac", ["B_Carryall_mcamo", "B_Kitbag_mcamo","CUP_B_HikingPack_Civ","CUP_B_RUS_Backpack","CUP_B_GER_Pack_Flecktarn","CUP_B_GER_Pack_Tropentarn","CUP_B_ACRPara_m95","CUP_B_AlicePack_Khaki","CUP_B_AlicePack_Bedroll","CUP_B_USMC_MOLLE","CUP_B_USMC_MOLLE_WDL"], 2],
			["itm", ["HandGrenade","MiniGrenade","CUP_HandGrenade_RGD5"], 2],
			["itm", ["optic_Hamr","CUP_optic_SUSAT","CUP_optic_ACOG","CUP_optic_Elcan","CUP_optic_Elcan_reflex","CUP_optic_ElCAN_SpecterDR","optic_Nightstalker","CUP_optic_ElcanM145","optic_Arco","optic_DMS"], 2]
		]
	],

	["airdrop_CovertOpps",
		[
		    ["wep", ["arifle_SDAR_F","CUP_smg_MP5SD6","CUP_smg_bizon"], 2,6],
			["wep", ["CUP_hgun_MicroUzi","CUP_hgun_SA61"], 2,6],
			["itm", ["U_I_Wetsuit","U_O_Wetsuit","U_B_Wetsuit"], 2],
			["itm", ["NVGoggles","NVGoggles_INDEP","NVGoggles_OPFOR","CUP_NVG_HMNVS","CUP_NVG_PVS7"], 2],
			["itm", ["ItemGPS"], 2],
			["itm", ["V_RebreatherB","V_RebreatherIA","V_RebreatherIR"], 2],
			["itm", ["HandGrenade","MiniGrenade","CUP_HandGrenade_RGD5"], 2],
			["itm", ["DemoCharge_Remote_Mag"], 2],
			["itm", ["optic_Hamr","CUP_optic_SUSAT","CUP_optic_ACOG","CUP_optic_Elcan","CUP_optic_Elcan_reflex","CUP_optic_ElCAN_SpecterDR","optic_Nightstalker","CUP_optic_ElcanM145","optic_Arco","optic_DMS"], 2],
			["bac", ["B_Carryall_mcamo","B_Kitbag_mcamo","CUP_B_HikingPack_Civ","CUP_B_RUS_Backpack","CUP_B_GER_Pack_Flecktarn","CUP_B_GER_Pack_Tropentarn","CUP_B_ACRPara_m95","CUP_B_AlicePack_Khaki","CUP_B_AlicePack_Bedroll","CUP_B_USMC_MOLLE","CUP_B_USMC_MOLLE_WDL"], 2]
		]
	],
	
	["airdrop_FoodSmall",
		[
			["itm", ["Exile_Item_GloriousKnakworst","Exile_Item_EMRE","Exile_Item_Surstromming"], 5],
			["itm", ["Exile_Item_Surstromming","Exile_Item_GloriousKnakworst","Exile_Item_EMRE"], 5],
			["itm", ["Exile_Item_PowerDrink","Exile_Item_PlasticBottleCoffee","Exile_Item_PlasticBottleFreshWater","Exile_Item_MountainDupe"], 5],
			["itm", ["Exile_Item_PlasticBottleCoffee","Exile_Item_PlasticBottleFreshWater","Exile_Item_MountainDupe"], 5]
		]
	],

	["airdrop_FoodLarge",
		[
			["itm", ["Exile_Item_EMRE","Exile_Item_GloriousKnakworst","Exile_Item_Surstromming"], 10],
			["itm", ["Exile_Item_EMRE","Exile_Item_GloriousKnakworst","Exile_Item_Surstromming"], 10],
			["itm", ["Exile_Item_PowerDrink","Exile_Item_PlasticBottleCoffee","Exile_Item_PlasticBottleFreshWater","Exile_Item_MountainDupe"], 10],
			["itm", ["Exile_Item_PlasticBottleCoffee","Exile_Item_PlasticBottleFreshWater","Exile_Item_MountainDupe"], 10]
		]
	],
    ["airdrop_MedicalSmall",
		[
			["itm", ["Exile_Item_Bandage"], 10],
			["itm", ["Exile_Item_Vishpirin","FirstAidKit"], 10],
			["itm", ["Exile_Item_InstaDoc"], 2]
		]
	],
	["airdrop_MedicalLarge",
		[
			["itm", ["Exile_Item_Bandage"], 10],
			["itm", ["FirstAidKit"], 6],
			["itm", ["Exile_Item_Vishpirin"], 5],
			["itm", ["Exile_Item_InstaDoc"], 5],
			["itm", ["Exile_Item_Defibrillator"], 1]
		]
	],
	["airdrop_SmallBaseKit",
		[
			["itm", ["Exile_Item_Codelock"], 1],
			["itm", ["Exile_Item_StorageCrateKit"], 2],
			["itm", ["Exile_Item_WaterBarrelKit"], 1],
			["itm", ["Exile_Item_WoodDoorKit"], 2],
			["itm", ["Exile_Item_WoodFloorKit"], 10],
			["itm", ["Exile_Item_WoodWallKit"], 10],
			["itm", ["Exile_Item_WoodStairsKit"], 1],
			["itm", ["Exile_Item_WoodSupportKit"], 4],
			["itm", ["Exile_Item_WorkBenchKit"], 1],
			["itm", ["Exile_Item_CampFireKit"], 1],
			["itm", ["Exile_Item_Flag"], 1]
		]
	],
	["airdrop_MediumBaseKit",
		[
			["itm", ["Exile_Item_Codelock"], 2],
			["itm", ["Exile_Item_SafeKit"], 1],
			["itm", ["Exile_Item_WaterBarrelKit"], 1],
			["itm", ["Exile_Item_WoodDoorKit"], 4],
			["itm", ["Exile_Item_WoodFloorKit"], 25],
			["itm", ["Exile_Item_WoodWallKit"], 20],
			["itm", ["Exile_Item_WoodStairsKit"], 2],
			["itm", ["Exile_Item_WoodSupportKit"], 4],
			["itm", ["Exile_Item_WorkBenchKit"], 1],
			["itm", ["Exile_Item_CampFireKit"], 1],
			["itm", ["Exile_Item_Flag"], 1]
		]
	],
	["airdrop_SecurityKit",
		[
			["itm", ["Exile_Item_Codelock"], 2],
			["itm", ["Exile_Item_BaseCameraKit"], 6],
			["itm", ["Exile_Item_Laptop"], 1],
			["itm", ["Exile_Item_SafeKit"], 2],
			["itm", ["Exile_Item_MetalHedgehogKit"], 2]
		]
	]
];