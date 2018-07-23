class CfgPatches
{
	class eXpoch_vehammo
	{
		fileName = "eXpoch_vehammo.pbo";
		requiredAddons[] = {"A3_Data_F","A3_Ui_F","A3_Functions_F","A3_UiFonts_F","eXpoch_assets","eXpoch_code"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		vehicles[] = {};
		author = "DonkeyPunch Community Gaming";
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
		ammo = "GrenadeHand";
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
	
//Ammo for vehicles
//Offroad + HMMW M2
	class 100Rnd_127x99_mag: Exile_AbstractItem {
		author = "Bohemia Interactive";
		count = 100;
		displayName = "12.7 mm M2 HMG Belt";
		descriptionShort = "Caliber: 1.27x99 mm NATO<br/>Rounds: 100<br />Used in: Mounted M2";
		// 500Rnd_127x99_mag
		scope = 2;
		ammo = "B_127x99_Ball";
		initSpeed = 910;
		maxLeadSpeed = 200;
		tracersEvery = 4;
		nameSound = "mgun";
		class Interactions{};
		// VehicleMagazine
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		model = "x\addons\a3_epoch_assets_1\models\50cal_mag.p3d";
		picture = "equip_50cal_mag_ca";
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		mass = 25;
		// Default
		simulation = "ProxyMagazines";
		displayNameShort = "";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};
	class 100Rnd_127x99_mag_Tracer_Red: Exile_AbstractItem {
		author = "Bohemia Interactive";
		ammo = "B_127x99_Ball_Tracer_Red";
		displayName = "12.7 mm M2 HMG Tracer (Red) Belt";
		descriptionShort = "Caliber: 12.7x99 mm Tracer - Red<br/>Rounds: 100<br />Used in: Mounted M2";
		displaynameshort = "Tracer";
		class Interactions{};
		// 100Rnd_127x99_mag
		count = 100;
		// 500Rnd_127x99_mag
		scope = 2;
		initSpeed = 910;
		maxLeadSpeed = 200;
		tracersEvery = 4;
		nameSound = "mgun";
		// VehicleMagazine
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		model = "x\addons\a3_epoch_assets_1\models\50cal_mag.p3d";
		picture = "equip_50cal_mag_ca";
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		mass = 25;
		// Default
		simulation = "ProxyMagazines";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};
	class 100Rnd_127x99_mag_Tracer_Green: Exile_AbstractItem {
		author = "Bohemia Interactive";
		ammo = "B_127x99_Ball_Tracer_Green";
		displayName = "12.7 mm M2 HMG Tracer (Green) Belt";
		descriptionShort = "Caliber: 12.7x99 mm Tracer - Green<br/>Rounds: 100<br />Used in: Mounted M2";
		displaynameshort = "Tracer";
		class Interactions{};
		// 100Rnd_127x99_mag
		count = 100;
		// 500Rnd_127x99_mag
		scope = 2;
		initSpeed = 910;
		maxLeadSpeed = 200;
		tracersEvery = 4;
		nameSound = "mgun";
		// VehicleMagazine
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		model = "x\addons\a3_epoch_assets_1\models\50cal_mag.p3d";
		picture = "equip_50cal_mag_ca";
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		mass = 25;
		// Default
		simulation = "ProxyMagazines";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};
	class 100Rnd_127x99_mag_Tracer_Yellow: Exile_AbstractItem {
		author = "Bohemia Interactive";
		ammo = "B_127x99_Ball_Tracer_Yellow";
		displayName = "12.7 mm M2 HMG Tracer (Yellow) Belt";
		descriptionShort = "Caliber: 12.7x99 mm Tracer - Yellow<br/>Rounds: 100<br />Used in: Mounted M2";
		displaynameshort = "Tracer";
		class Interactions{};
		// 100Rnd_127x99_mag
		count = 100;
		// 500Rnd_127x99_mag
		scope = 2;
		initSpeed = 910;
		maxLeadSpeed = 200;
		tracersEvery = 4;
		nameSound = "mgun";
		// VehicleMagazine
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		model = "x\addons\a3_epoch_assets_1\models\50cal_mag.p3d";
		picture = "equip_50cal_mag_ca";
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		mass = 25;
		// Default
		simulation = "ProxyMagazines";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};

//BTR	
	class 50Rnd_127x107_DSHKM_M: Exile_AbstractItem {
		count = 50;
		// 100Rnd_127x107_DSHKM_M
		scope = 2;
		displayName = "50Rnd 127x107 DSHKM";
		ammo = "B_127x107_Ball";
		initSpeed = 850;
		maxLeadSpeed = 200;
		tracersEvery = 3;
		lastRoundsTracer = 5;
		nameSound = "mgun";
		class Interactions{};
		// VehicleMagazine
		author = "Bohemia Interactive";
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		model = "x\addons\a3_epoch_assets_1\models\dshkm_mag.p3d";
		picture = "equip_Dshkm_mag_ca";
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		mass = 50;
		// Default
		simulation = "ProxyMagazines";
		displayNameShort = "";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		descriptionShort = "";
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};
	class 100Rnd_127x107_DSHKM_M: Exile_AbstractItem {
		scope = 2;
		displayName = "100Rnd 127x107 DSHKM";
		ammo = "B_127x107_Ball";
		count = 100;
		initSpeed = 850;
		maxLeadSpeed = 200;
		tracersEvery = 3;
		lastRoundsTracer = 5;
		nameSound = "mgun";
		// VehicleMagazine
		author = "Bohemia Interactive";
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		model = "x\addons\a3_epoch_assets_1\models\dshkm_mag.p3d";
		picture = "equip_Dshkm_mag_ca";
		class Interactions{};
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		mass = 100;
		// Default
		simulation = "ProxyMagazines";
		displayNameShort = "";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		descriptionShort = "";
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};
	class 100Rnd_Green_Tracer_127x107_DSHKM_M: Exile_AbstractItem {
		scope = 2;
		displayName = "100Rnd 127x107 DSHKM Green Tracer";
		ammo = "B_127x107_Ball_Green_Tracer";
		count = 100;
		initSpeed = 850;
		maxLeadSpeed = 200;
		tracersEvery = 3;
		lastRoundsTracer = 5;
		nameSound = "mgun";
		// VehicleMagazine
		author = "Bohemia Interactive";
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		model = "x\addons\a3_epoch_assets_1\models\dshkm_mag.p3d";
		picture = "equip_Dshkm_mag_ca";
		class Interactions{};
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		mass = 100;
		// Default
		simulation = "ProxyMagazines";
		displayNameShort = "";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		descriptionShort = "";
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};

//HMMW M134
	class 2000Rnd_762x51_Belt: Exile_AbstractItem {
		author = "Bohemia Interactive";
		count = 2000;
		// 200Rnd_762x51_Belt
		scope = 2;
		ammo = "B_762x51_Ball";
		initSpeed = 860;
		maxLeadSpeed = 200;
		tracersEvery = 5;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		displayName = "7.62 mm Minigun Belt";
		descriptionShort = "Caliber: 7.62x51 mm<br />Rounds: 2000<br />Used in: AH-9";
		// VehicleMagazine
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		model = "x\addons\a3_epoch_assets_1\models\m134_mag.p3d";
		picture = "equip_m134_mag_ca";
		class Interactions{};
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		mass = 100;
		// Default
		simulation = "ProxyMagazines";
		displayNameShort = "";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};

//GMG
	class 32Rnd_40mm_G_belt: Exile_AbstractItem {
		author = "Bohemia Interactive";
		count = 32;
		// 200Rnd_40mm_G_belt
		scope = 2;
		ammo = "G_40mm_HEDP";
		initSpeed = 241;
		maxLeadSpeed = 400;
		nameSound = "";
		displayName = "40 mm HE Grenade Mag";
		descriptionShort = "Caliber: 40 mm <br/>Rounds: 200 DSS<br />Used in: Grenade Launcher, RCWS";
		// VehicleMagazine
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		model = "x\addons\a3_epoch_assets_1\models\40mm_mag.p3d";
		picture = "equip_40mm_mag_ca";
		class Interactions{};
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		mass = 25;
		// Default
		simulation = "ProxyMagazines";
		displayNameShort = "";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};
	class 64Rnd_40mm_G_belt: Exile_AbstractItem {
		author = "Bohemia Interactive";
		count = 64;
		// 200Rnd_40mm_G_belt
		scope = 2;
		ammo = "G_40mm_HEDP";
		initSpeed = 241;
		maxLeadSpeed = 400;
		nameSound = "";
		displayName = "40 mm HE Grenade Mag";
		descriptionShort = "Caliber: 40 mm <br/>Rounds: 200 DSS<br />Used in: Grenade Launcher, RCWS";
		// VehicleMagazine
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		model = "x\addons\a3_epoch_assets_1\models\40mm_mag.p3d";
		picture = "equip_40mm_mag_ca";
		class Interactions{};
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		mass = 50;
		// Default
		simulation = "ProxyMagazines";
		displayNameShort = "";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};
	class 96Rnd_40mm_G_belt: Exile_AbstractItem {
		author = "Bohemia Interactive";
		count = 96;
		// 200Rnd_40mm_G_belt
		scope = 2;
		ammo = "G_40mm_HEDP";
		initSpeed = 241;
		maxLeadSpeed = 400;
		nameSound = "";
		displayName = "40 mm HE Grenade Mag";
		descriptionShort = "Caliber: 40 mm <br/>Rounds: 200 DSS<br />Used in: Grenade Launcher, RCWS";
		// VehicleMagazine
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		mass = 100;
		model = "x\addons\a3_epoch_assets_1\models\40mm_mag.p3d";
		picture = "equip_40mm_mag_ca";
		class Interactions{};
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		// Default
		simulation = "ProxyMagazines";
		displayNameShort = "";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};
	class 200Rnd_40mm_G_belt: Exile_AbstractItem {
		author = "Bohemia Interactive";
		scope = 2;
		ammo = "G_40mm_HEDP";
		initSpeed = 241;
		maxLeadSpeed = 400;
		nameSound = "";
		count = 200;
		displayName = "40 mm HE Grenade Mag";
		descriptionShort = "Caliber: 40 mm <br/>Rounds: 200 DSS<br />Used in: Grenade Launcher, RCWS";
		// VehicleMagazine
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		mass = 200;
		model = "x\addons\a3_epoch_assets_1\models\40mm_mag.p3d";
		picture = "equip_40mm_mag_ca";
		class Interactions{};
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		// Default
		simulation = "ProxyMagazines";
		displayNameShort = "";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};

//HMG + Static HMG
	class 200Rnd_127x99_mag: Exile_AbstractItem {
		author = "Bohemia Interactive";
		count = 200;
		tracersEvery = 3;
		displayName = "12.7 mm RCWS HMG";
		descriptionShort = "Caliber: 12.7x99 mm NATO<br/>Rounds: 200<br />Used in: RCWS";
		// 500Rnd_127x99_mag
		scope = 2;
		ammo = "B_127x99_Ball";
		initSpeed = 910;
		maxLeadSpeed = 200;
		nameSound = "mgun";
		// VehicleMagazine
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		mass = 50;
		model = "x\addons\a3_epoch_assets_1\models\50cal_mag.p3d";
		picture = "equip_50cal_mag_ca";
		class Interactions{};
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		// Default
		simulation = "ProxyMagazines";
		displayNameShort = "";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};
	class 200Rnd_127x99_mag_Tracer_Red: Exile_AbstractItem {
		author = "Bohemia Interactive";
		ammo = "B_127x99_Ball_Tracer_Red";
		displayName = "12.7 mm RCWS HMG Tracer (Red)";
		descriptionShort = "Caliber: 12.7x99 mm Tracer - Red<br/>Rounds: 200<br />Used in: RCWS";
		displaynameshort = "Tracer";
		// 200Rnd_127x99_mag
		count = 200;
		tracersEvery = 3;
		// 500Rnd_127x99_mag
		scope = 2;
		initSpeed = 910;
		maxLeadSpeed = 200;
		nameSound = "mgun";
		// VehicleMagazine
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		mass = 50;
		model = "x\addons\a3_epoch_assets_1\models\50cal_mag.p3d";
		picture = "equip_50cal_mag_ca";
		class Interactions{};
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		// Default
		simulation = "ProxyMagazines";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};
	class 200Rnd_127x99_mag_Tracer_Green: Exile_AbstractItem {
		author = "Bohemia Interactive";
		ammo = "B_127x99_Ball_Tracer_Green";
		displayName = "12.7 mm RCWS HMG Tracer (Green)";
		descriptionShort = "Caliber: 12.7x99 mm Tracer - Green<br/>Rounds: 200<br />Used in: RCWS";
		displaynameshort = "Tracer";
		// 200Rnd_127x99_mag
		count = 200;
		tracersEvery = 3;
		// 500Rnd_127x99_mag
		scope = 2;
		initSpeed = 910;
		maxLeadSpeed = 200;
		nameSound = "mgun";
		// VehicleMagazine
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		mass = 50;
		model = "x\addons\a3_epoch_assets_1\models\50cal_mag.p3d";
		picture = "equip_50cal_mag_ca";
		class Interactions{};
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		// Default
		simulation = "ProxyMagazines";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};
	class 200Rnd_127x99_mag_Tracer_Yellow: Exile_AbstractItem {
		author = "Bohemia Interactive";
		ammo = "B_127x99_Ball_Tracer_Yellow";
		displayName = "12.7 mm RCWS HMG Tracer (Yellow)";
		descriptionShort = "Caliber: 12.7x99 mm Tracer - Yellow<br/>Rounds: 200<br />Used in: RCWS";
		displaynameshort = "Tracer";
		// 200Rnd_127x99_mag
		count = 200;
		tracersEvery = 3;
		// 500Rnd_127x99_mag
		scope = 2;
		initSpeed = 910;
		maxLeadSpeed = 200;
		nameSound = "mgun";
		// VehicleMagazine
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		mass = 50;
		model = "x\addons\a3_epoch_assets_1\models\50cal_mag.p3d";
		picture = "equip_50cal_mag_ca";
		class Interactions{};
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		// Default
		simulation = "ProxyMagazines";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};
	class 500Rnd_127x99_mag: Exile_AbstractItem {
		author = "Bohemia Interactive";
		scope = 2;
		count = 500;
		ammo = "B_127x99_Ball";
		initSpeed = 910;
		maxLeadSpeed = 200;
		tracersEvery = 4;
		nameSound = "mgun";
		displayName = "12.7 mm AA MG Mag";
		descriptionShort = "Caliber: 12.7x99 mm NATO<br/>Rounds: 500<br />Used in: Vehicles";
		// VehicleMagazine
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		mass = 100;
		model = "x\addons\a3_epoch_assets_1\models\50cal_mag.p3d";
		picture = "equip_50cal_mag_ca";
		class Interactions{};
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		// Default
		simulation = "ProxyMagazines";
		displayNameShort = "";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};
	class 500Rnd_127x99_mag_Tracer_Red: Exile_AbstractItem {
		author = "Bohemia Interactive";
		ammo = "B_127x99_Ball_Tracer_Red";
		displayName = "12.7 mm AA MG Tracer (Red) Mag";
		descriptionShort = "Caliber: 12.7x99 mm Tracer - Red<br/>Rounds: 500<br />Used in: Vehicles";
		displaynameshort = "Tracer";
		// 500Rnd_127x99_mag
		scope = 2;
		count = 500;
		initSpeed = 910;
		maxLeadSpeed = 200;
		tracersEvery = 4;
		nameSound = "mgun";
		// VehicleMagazine
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		mass = 100;
		model = "x\addons\a3_epoch_assets_1\models\50cal_mag.p3d";
		picture = "equip_50cal_mag_ca";
		class Interactions{};
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		// Default
		simulation = "ProxyMagazines";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};
	class 500Rnd_127x99_mag_Tracer_Green: Exile_AbstractItem {
		author = "Bohemia Interactive";
		ammo = "B_127x99_Ball_Tracer_Green";
		displayName = "12.7 mm AA MG Tracer (Green) Mag";
		descriptionShort = "Caliber: 12.7x99 mm Tracer - Green<br/>Rounds: 500<br />Used in: Vehicles";
		displaynameshort = "Tracer";
		// 500Rnd_127x99_mag
		scope = 2;
		count = 500;
		initSpeed = 910;
		maxLeadSpeed = 200;
		tracersEvery = 4;
		nameSound = "mgun";
		// VehicleMagazine
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		mass = 100;
		model = "x\addons\a3_epoch_assets_1\models\50cal_mag.p3d";
		picture = "equip_50cal_mag_ca";
		class Interactions{};
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		// Default
		simulation = "ProxyMagazines";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};
	class 500Rnd_127x99_mag_Tracer_Yellow: Exile_AbstractItem {
		author = "Bohemia Interactive";
		ammo = "B_127x99_Ball_Tracer_Yellow";
		displayName = "12.7 mm AA MG Tracer (Yellow) Mag";
		descriptionShort = "Caliber: 12.7x99 mm Tracer - Yellow<br/>Rounds: 500<br />Used in: Vehicles";
		displaynameshort = "Tracer";
		// 500Rnd_127x99_mag
		scope = 2;
		count = 500;
		initSpeed = 910;
		maxLeadSpeed = 200;
		tracersEvery = 4;
		nameSound = "mgun";
		// VehicleMagazine
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		mass = 100;
		model = "x\addons\a3_epoch_assets_1\models\50cal_mag.p3d";
		picture = "equip_50cal_mag_ca";
		class Interactions{};
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		// Default
		simulation = "ProxyMagazines";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};

//Static DSHKM
	class mas_50Rnd_127x107_DSHKM: Exile_AbstractItem {
		scope = 2;
		displayName = "DShKM";
		ammo = "mas_B_127x107_Ball";
		count = 50;
		initSpeed = 850;
		maxLeadSpeed = 200;
		tracersEvery = 3;
		lastRoundsTracer = 5;
		nameSound = "mgun";
		// VehicleMagazine
		author = "Bohemia Interactive";
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		mass = 100;
		model = "x\addons\a3_epoch_assets_1\models\dshkm_mag.p3d";
		picture = "equip_Dshkm_mag_ca";
		class Interactions{};
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		// Default
		simulation = "ProxyMagazines";
		displayNameShort = "";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		descriptionShort = "";
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};
	class mas_150Rnd_127x107_DSHKM: Exile_AbstractItem {
		count = 150;
		// mas_50Rnd_127x107_DSHKM
		scope = 2;
		displayName = "DShKM";
		ammo = "mas_B_127x107_Ball";
		initSpeed = 850;
		maxLeadSpeed = 200;
		tracersEvery = 3;
		lastRoundsTracer = 5;
		nameSound = "mgun";
		// VehicleMagazine
		author = "Bohemia Interactive";
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		mass = 100;
		model = "x\addons\a3_epoch_assets_1\models\dshkm_mag.p3d";
		picture = "equip_Dshkm_mag_ca";
		class Interactions{};
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		// Default
		simulation = "ProxyMagazines";
		displayNameShort = "";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		descriptionShort = "";
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};

//Static GMG
	class 40Rnd_20mm_G_belt: Exile_AbstractItem {
		author = "Bohemia Interactive";
		count = 40;
		displayName = "20 mm HE Grenade Mag";
		displayNameShort = "HE";
		descriptionShort = "Caliber: 20 mm<br/>Rounds: 40<br />Used in: Grenade Launcher";
		// 200Rnd_20mm_G_belt
		scope = 2;
		ammo = "G_20mm_HE";
		initSpeed = 185;
		maxLeadSpeed = 400;
		nameSound = "";
		// VehicleMagazine
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		mass = 60;
		model = "x\addons\a3_epoch_assets_1\models\30mm_mag.p3d";
		picture = "equip_30mm_mag_ca";
		class Interactions{};
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		// Default
		simulation = "ProxyMagazines";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};
	class 200Rnd_20mm_G_belt: Exile_AbstractItem {
		author = "Bohemia Interactive";
		scope = 2;
		ammo = "G_20mm_HE";
		initSpeed = 185;
		maxLeadSpeed = 400;
		nameSound = "";
		count = 200;
		displayName = "20 mm Grenade Mag";
		descriptionShort = "Caliber: 20 mm <br/>Rounds: 200 DSS<br />Used in: Grenade Launcher";
		// VehicleMagazine
		type = 0;
		reloadAction = "";
		weaponPoolAvailable = 0;
		// CA_Magazine
		value = 1;
		mass = 300;
		model = "x\addons\a3_epoch_assets_1\models\30mm_mag.p3d";
		picture = "equip_30mm_mag_ca";
		class Interactions{};
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		selectionFireAnim = "zasleh";
		// Default
		simulation = "ProxyMagazines";
		displayNameShort = "";
		weight = 0;
		class InventoryPlacements {};
		class Library {
			libTextDesc = "";
		};
		maxThrowHoldTime = 2;
		minThrowIntensityCoef = 0.3;
		maxThrowIntensityCoef = 1.4;
		quickReload = 0;
	};

//Static Mortar
	class 8Rnd_82mm_Mo_shells: Exile_AbstractItem
	{
		scope = 2;
		descriptionShort = "eXpoch Mortar Static Veh Ammo by DonkeyPunch.INFO";
		displayName = "VehAmmo 8Rnd_82mm_Mo_shells";
		count = 8;
		mass = 100;
		picture = "\exile_assets\texture\item\Dummy.paa";
		model = "\exile_assets\model\Dummy.p3d";
		class Interactions{};
	};
	class 8Rnd_82mm_Mo_LG: Exile_AbstractItem
	{
		scope = 2;
		descriptionShort = "eXpoch Mortar Static Veh Ammo by DonkeyPunch.INFO";
		displayName = "VehAmmo 8Rnd_82mm_Mo_LG";
		count = 8;
		mass = 100;
		picture = "\exile_assets\texture\item\Dummy.paa";
		model = "\exile_assets\model\Dummy.p3d";
		class Interactions{};
	};
	class 8Rnd_82mm_Mo_guided: Exile_AbstractItem
	{
		scope = 2;
		descriptionShort = "eXpoch Mortar Static Veh Ammo by DonkeyPunch.INFO";
		displayName = "VehAmmo 8Rnd_82mm_Mo_guided";
		count = 8;
		mass = 140;
		picture = "\exile_assets\texture\item\Dummy.paa";
		model = "\exile_assets\model\Dummy.p3d";
		class Interactions{};
	};
	class 8Rnd_82mm_Mo_Smoke_white: Exile_AbstractItem
	{
		scope = 2;
		descriptionShort = "eXpoch Mortar Static Veh Ammo by DonkeyPunch.INFO";
		displayName = "VehAmmo 8Rnd_82mm_Mo_Smoke_white";
		count = 8;
		mass = 100;
		picture = "\exile_assets\texture\item\Dummy.paa";
		model = "\exile_assets\model\Dummy.p3d";
		class Interactions{};
	};
	class 8Rnd_82mm_Mo_Flare_white: Exile_AbstractItem
	{
		scope = 2;
		descriptionShort = "eXpoch Mortar Static Veh Ammo by DonkeyPunch.INFO";
		displayName = "VehAmmo 8Rnd_82mm_Mo_Flare_white";
		count = 8;
		mass = 100;
		picture = "\exile_assets\texture\item\Dummy.paa";
		model = "\exile_assets\model\Dummy.p3d";
		class Interactions{};
	};
//Static AA-AT Titan
	class 1Rnd_GAT_missiles: Exile_AbstractItem
	{
		scope = 2;
		descriptionShort = "eXpoch Titan Static Veh Ammo by DonkeyPunch.INFO";
		displayName = "VehAmmo 1Rnd_GAT_missiles";
		count = 1;
		mass = 100;
		picture = "\exile_assets\texture\item\Dummy.paa";
		model = "\exile_assets\model\Dummy.p3d";
		class Interactions{};
	};
	class 1Rnd_GAA_missiles: Exile_AbstractItem
	{
		scope = 2;
		descriptionShort = "eXpoch Titan Static Veh Ammo by DonkeyPunch.INFO";
		displayName = "VehAmmo 1Rnd_GAA_missiles";
		count = 1;
		mass = 100;
		picture = "\exile_assets\texture\item\Dummy.paa";
		model = "\exile_assets\model\Dummy.p3d";
		class Interactions{};
	};
//
};

