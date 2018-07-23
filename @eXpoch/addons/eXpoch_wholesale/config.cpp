class CfgPatches
{
	class eXpoch_wholesale
	{
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
	class eXpoch_WS_6x_30Rnd_556x45_Stanag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_556x45_Stanag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_556x45_Stanag_green : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_556x45_Stanag_green";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_556x45_Stanag_red : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_556x45_Stanag_red";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_556x45_Stanag_Tracer_Red : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_556x45_Stanag_Tracer_Red";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_556x45_Stanag_Tracer_Green : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_556x45_Stanag_Tracer_Green";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_556x45_Stanag_Tracer_Yellow : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_556x45_Stanag_Tracer_Yellow";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_20Rnd_556x45_UW_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 20Rnd_556x45_UW_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_65x39_caseless_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_65x39_caseless_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_65x39_caseless_green : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_65x39_caseless_green";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_65x39_caseless_mag_Tracer : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_65x39_caseless_mag_Tracer";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_65x39_caseless_green_mag_Tracer : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_65x39_caseless_green_mag_Tracer";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_20Rnd_762x51_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 20Rnd_762x51_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_7Rnd_408_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 7Rnd_408_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_5Rnd_127x108_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 5Rnd_127x108_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_100Rnd_65x39_caseless_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 100Rnd_65x39_caseless_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_100Rnd_65x39_caseless_mag_Tracer : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 100Rnd_65x39_caseless_mag_Tracer";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_200Rnd_65x39_cased_Box : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 200Rnd_65x39_cased_Box";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_200Rnd_65x39_cased_Box_Tracer : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 200Rnd_65x39_cased_Box_Tracer";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_9x21_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_9x21_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_9x21_Red_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_9x21_Red_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_9x21_Yellow_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_9x21_Yellow_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_9x21_Green_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_9x21_Green_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_16Rnd_9x21_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 16Rnd_9x21_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_16Rnd_9x21_red_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 16Rnd_9x21_red_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_16Rnd_9x21_green_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 16Rnd_9x21_green_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_16Rnd_9x21_yellow_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 16Rnd_9x21_yellow_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 38;
	};
	class eXpoch_WS_6x_RPG32_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x RPG32_F";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxLong.p3d";
		mass = 390;
	};
	class eXpoch_WS_6x_RPG32_HE_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x RPG32_HE_F";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxLong.p3d";
		mass = 270;
	};
	class eXpoch_WS_6x_NLAW_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x NLAW_F";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxLong.p3d";
		mass = 510;
	};
	class eXpoch_WS_6x_1Rnd_HE_Grenade_shell : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 1Rnd_HE_Grenade_shell";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_3Rnd_HE_Grenade_shell : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 3Rnd_HE_Grenade_shell";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 74;
	};
	class eXpoch_WS_6x_1Rnd_Smoke_Grenade_shell : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 1Rnd_Smoke_Grenade_shell";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_3Rnd_Smoke_Grenade_shell : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 3Rnd_Smoke_Grenade_shell";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 74;
	};
	class eXpoch_WS_6x_1Rnd_SmokeRed_Grenade_shell : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 1Rnd_SmokeRed_Grenade_shell";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_3Rnd_SmokeRed_Grenade_shell : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 3Rnd_SmokeRed_Grenade_shell";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 74;
	};
	class eXpoch_WS_6x_1Rnd_SmokeGreen_Grenade_shell : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 1Rnd_SmokeGreen_Grenade_shell";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_3Rnd_SmokeGreen_Grenade_shell : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 3Rnd_SmokeGreen_Grenade_shell";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 74;
	};
	class eXpoch_WS_6x_1Rnd_SmokeYellow_Grenade_shell : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 1Rnd_SmokeYellow_Grenade_shell";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_3Rnd_SmokeYellow_Grenade_shell : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 3Rnd_SmokeYellow_Grenade_shell";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 74;
	};
	class eXpoch_WS_6x_1Rnd_SmokePurple_Grenade_shell : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 1Rnd_SmokePurple_Grenade_shell";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_3Rnd_SmokePurple_Grenade_shell : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 3Rnd_SmokePurple_Grenade_shell";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 74;
	};
	class eXpoch_WS_6x_1Rnd_SmokeBlue_Grenade_shell : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 1Rnd_SmokeBlue_Grenade_shell";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_3Rnd_SmokeBlue_Grenade_shell : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 3Rnd_SmokeBlue_Grenade_shell";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 74;
	};
	class eXpoch_WS_6x_1Rnd_SmokeOrange_Grenade_shell : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 1Rnd_SmokeOrange_Grenade_shell";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_3Rnd_SmokeOrange_Grenade_shell : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 3Rnd_SmokeOrange_Grenade_shell";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 74;
	};
	class eXpoch_WS_6x_HandGrenade : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x HandGrenade";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 62;
	};
	class eXpoch_WS_6x_MiniGrenade : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x MiniGrenade";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 38;
	};
	class eXpoch_WS_6x_HandGrenade_Stone : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x HandGrenade_Stone";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 62;
	};
	class eXpoch_WS_6x_SmokeShell : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x SmokeShell";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_SmokeShellRed : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x SmokeShellRed";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_SmokeShellGreen : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x SmokeShellGreen";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_SmokeShellYellow : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x SmokeShellYellow";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_SmokeShellPurple : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x SmokeShellPurple";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_SmokeShellBlue : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x SmokeShellBlue";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_SmokeShellOrange : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x SmokeShellOrange";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_Chemlight_green : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Chemlight_green";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 14;
	};
	class eXpoch_WS_6x_Chemlight_red : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Chemlight_red";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 14;
	};
	class eXpoch_WS_6x_Chemlight_yellow : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Chemlight_yellow";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 14;
	};
	class eXpoch_WS_6x_Chemlight_blue : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Chemlight_blue";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 14;
	};
	class eXpoch_WS_6x_UGL_FlareWhite_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x UGL_FlareWhite_F";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_3Rnd_UGL_FlareWhite_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 3Rnd_UGL_FlareWhite_F";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 74;
	};
	class eXpoch_WS_6x_UGL_FlareGreen_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x UGL_FlareGreen_F";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_3Rnd_UGL_FlareGreen_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 3Rnd_UGL_FlareGreen_F";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 74;
	};
	class eXpoch_WS_6x_UGL_FlareRed_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x UGL_FlareRed_F";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_3Rnd_UGL_FlareRed_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 3Rnd_UGL_FlareRed_F";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 74;
	};
	class eXpoch_WS_6x_UGL_FlareYellow_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x UGL_FlareYellow_F";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_3Rnd_UGL_FlareYellow_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 3Rnd_UGL_FlareYellow_F";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 74;
	};
	class eXpoch_WS_6x_UGL_FlareCIR_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x UGL_FlareCIR_F";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_3Rnd_UGL_FlareCIR_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 3Rnd_UGL_FlareCIR_F";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 74;
	};
	class eXpoch_WS_6x_FlareWhite_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x FlareWhite_F";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_FlareGreen_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x FlareGreen_F";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_FlareRed_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x FlareRed_F";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_FlareYellow_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x FlareYellow_F";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_Laserbatteries : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Laserbatteries";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 38;
	};
	class eXpoch_WS_6x_30Rnd_45ACP_Mag_SMG_01 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_45ACP_Mag_SMG_01";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 62;
	};
	class eXpoch_WS_6x_30Rnd_45ACP_Mag_SMG_01_Tracer_Green : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_45ACP_Mag_SMG_01_Tracer_Green";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 62;
	};
	class eXpoch_WS_6x_30Rnd_45ACP_Mag_SMG_01_Tracer_Red : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_45ACP_Mag_SMG_01_Tracer_Red";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 62;
	};
	class eXpoch_WS_6x_30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 62;
	};
	class eXpoch_WS_6x_9Rnd_45ACP_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 9Rnd_45ACP_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 62;
	};
	class eXpoch_WS_6x_150Rnd_762x51_Box : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 150Rnd_762x51_Box";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxMedium.p3d";
		mass = 330;
	};
	class eXpoch_WS_6x_150Rnd_762x51_Box_Tracer : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 150Rnd_762x51_Box_Tracer";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxMedium.p3d";
		mass = 330;
	};
	class eXpoch_WS_6x_150Rnd_762x54_Box : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 150Rnd_762x54_Box";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxMedium.p3d";
		mass = 330;
	};
	class eXpoch_WS_6x_150Rnd_762x54_Box_Tracer : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 150Rnd_762x54_Box_Tracer";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxMedium.p3d";
		mass = 330;
	};
	class eXpoch_WS_6x_Titan_AA : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Titan_AA";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxMedium.p3d";
		mass = 520;
	};
	class eXpoch_WS_6x_Titan_AP : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Titan_AP";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxMedium.p3d";
		mass = 390;
	};
	class eXpoch_WS_6x_Titan_AT : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Titan_AT";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxMedium.p3d";
		mass = 520;
	};
	class eXpoch_WS_6x_11Rnd_45ACP_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 11Rnd_45ACP_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 44;
	};
	class eXpoch_WS_6x_6Rnd_45ACP_Cylinder : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 6Rnd_45ACP_Cylinder";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 26;
	};
	class eXpoch_WS_6x_10Rnd_762x51_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 10Rnd_762x51_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_10Rnd_762x54_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 10Rnd_762x54_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_5Rnd_127x108_APDS_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 5Rnd_127x108_APDS_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_B_IR_Grenade : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x B_IR_Grenade";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_O_IR_Grenade : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x O_IR_Grenade";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_I_IR_Grenade : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x I_IR_Grenade";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ATMine_Range_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x ATMine_Range_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxMedium.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_APERSMine_Range_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x APERSMine_Range_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxMedium.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_APERSBoundingMine_Range_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x APERSBoundingMine_Range_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxMedium.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_SLAMDirectionalMine_Wire_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x SLAMDirectionalMine_Wire_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxMedium.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_APERSTripMine_Wire_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x APERSTripMine_Wire_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxMedium.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ClaymoreDirectionalMine_Remote_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x ClaymoreDirectionalMine_Remote_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxMedium.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_SatchelCharge_Remote_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x SatchelCharge_Remote_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxMedium.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_DemoCharge_Remote_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x DemoCharge_Remote_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxMedium.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_IEDUrbanBig_Remote_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x IEDUrbanBig_Remote_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxMedium.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_IEDLandBig_Remote_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x IEDLandBig_Remote_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxLong.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_IEDUrbanSmall_Remote_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x IEDUrbanSmall_Remote_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxLong.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_IEDLandSmall_Remote_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x IEDLandSmall_Remote_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_WoodBoxLong.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_6Rnd_GreenSignal_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 6Rnd_GreenSignal_F";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_6Rnd_RedSignal_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 6Rnd_RedSignal_F";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_10Rnd_338_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 10Rnd_338_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_130Rnd_338_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 130Rnd_338_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_10Rnd_127x54_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 10Rnd_127x54_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_150Rnd_93x64_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 150Rnd_93x64_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_10Rnd_93x64_DMR_05_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 10Rnd_93x64_DMR_05_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Bandage : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Bandage";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_BaseCameraKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_BaseCameraKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_BBQSandwich : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_BBQSandwich";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_BBQSandwich_Cooked : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_BBQSandwich_Cooked";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_BeefParts : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_BeefParts";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Beer : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Beer";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_BushKit_Green : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_BushKit_Green";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_CamoTentKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_CamoTentKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_CampFireKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_CampFireKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_CanOpener : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_CanOpener";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Can_Empty : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Can_Empty";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_CarWheel : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_CarWheel";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_CatFood : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_CatFood";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_CatFood_Cooked : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_CatFood_Cooked";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Cement : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Cement";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Cheathas : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Cheathas";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_ChristmasTinner : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_ChristmasTinner";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_ChristmasTinner_Cooked : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_ChristmasTinner_Cooked";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_CockONut : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_CockONut";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Codelock : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Codelock";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_CookingPot : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_CookingPot";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_CordlessScrewdriver : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_CordlessScrewdriver";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Defibrillator : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Defibrillator";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_DogFood : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_DogFood";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_DogFood_Cooked : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_DogFood_Cooked";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_DsNuts : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_DsNuts";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_DuctTape : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_DuctTape";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_EMRE : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_EMRE";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_EnergyDrink : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_EnergyDrink";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_ExtensionCord : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_ExtensionCord";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_FireExtinguisher : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_FireExtinguisher";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Flag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Flag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_FloodLightKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_FloodLightKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Foolbox : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Foolbox";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_FortificationUpgrade : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_FortificationUpgrade";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_FuelBarrelEmpty : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_FuelBarrelEmpty";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_FuelBarrelFull : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_FuelBarrelFull";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_FuelCanisterEmpty : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_FuelCanisterEmpty";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_FuelCanisterFull : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_FuelCanisterFull";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_GloriousKnakworst : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_GloriousKnakworst";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_GloriousKnakworst_Cooked : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_GloriousKnakworst_Cooked";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Grinder : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Grinder";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Hammer : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Hammer";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Handsaw : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Handsaw";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Heatpack : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Heatpack";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_InstaDoc : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_InstaDoc";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_InstantCoffee : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_InstantCoffee";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_JunkMetal : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_JunkMetal";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Knife : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Knife";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Laptop : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Laptop";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Leaves : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Leaves";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_LightBulb : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_LightBulb";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Magazine01 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Magazine01";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Magazine02 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Magazine02";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Magazine03 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Magazine03";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Matches : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Matches";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_MetalBoard : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_MetalBoard";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_MetalHedgehogKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_MetalHedgehogKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_MetalPole : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_MetalPole";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_MetalScrews : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_MetalScrews";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_MetalWire : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_MetalWire";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Moobar : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Moobar";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_MountainDupe : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_MountainDupe";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Noodles : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Noodles";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_OilCanister : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_OilCanister";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_PlasticBottleCoffee : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_PlasticBottleCoffee";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_PlasticBottleDirtyWater : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_PlasticBottleDirtyWater";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_PlasticBottleEmpty : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_PlasticBottleEmpty";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_PlasticBottleFreshWater : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_PlasticBottleFreshWater";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_PlasticBottleSaltWater : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_PlasticBottleSaltWater";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Pliers : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Pliers";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_PortableGeneratorKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_PortableGeneratorKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_PowerDrink : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_PowerDrink";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Raisins : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Raisins";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Rope : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Rope";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_SafeKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_SafeKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Sand : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Sand";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_SausageGravy : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_SausageGravy";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_SausageGravy_Cooked : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_SausageGravy_Cooked";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Screwdriver : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Screwdriver";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_SeedAstics : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_SeedAstics";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Shovel : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Shovel";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_SleepingMat : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_SleepingMat";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Storagecratekit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Storagecratekit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Surstromming : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Surstromming";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Surstromming_Cooked : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Surstromming_Cooked";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_ThermalScannerPro : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_ThermalScannerPro";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_ToiletPaper : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_ToiletPaper";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_TreasureMap : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_TreasureMap";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Vishpirin : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Vishpirin";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_WaterBarrelKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_WaterBarrelKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_WoodDoorKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_WoodDoorKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_WoodDoorwayKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_WoodDoorwayKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_WoodDrawBridgeKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_WoodDrawBridgeKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_WoodFloorKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_WoodFloorKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_WoodFloorPortKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_WoodFloorPortKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_WoodGateKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_WoodGateKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_WoodLog : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_WoodLog";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_WoodPlank : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_WoodPlank";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_WoodStairsKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_WoodStairsKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_WoodSticks : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_WoodSticks";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_WoodSupportKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_WoodSupportKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_WoodWallHalfKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_WoodWallHalfKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_WoodWallKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_WoodWallKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_WoodWindowKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_WoodWindowKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_WorkBenchKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_WorkBenchKit";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_Wrench : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_Wrench";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Item_ZipTie : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Item_ZipTie";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Magazine_Battery : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Magazine_Battery";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Exile_Magazine_Swing : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x Exile_Magazine_Swing";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_3Rnd_MosquitoGrenade : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemLockbox : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemSafe : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitTiPi : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitShelf : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemBriefcaseE : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemAluminumBar : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemCopperBar : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemTinBar : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemEmptyTin : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemHotwire : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemKeyKit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemKey : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemKeyBlue : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemKeyGreen : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemKeyRed : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemKeyYellow : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemSodaAlpineDude : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_honey_epoch : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_emptyjar_epoch : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemSodaRbull : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemSodaOrangeSherbet : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemSodaPurple : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemSodaMocha : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemSodaBurst : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_WhiskeyNoodle : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_sardines_epoch : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_meatballs_epoch : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_scam_epoch : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_sweetcorn_epoch : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_FoodMeeps : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_FoodSnooter : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_FoodWalkNSons : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Poppy : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Goldenseal : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Pumpkin : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_FAK : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Towelette : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_HeatPack : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ColdPack : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_lighter_epoch : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemBarrelF : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemBarrelE : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemPipe : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemPlywoodPack : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemComboLock : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_PartPlankPack : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_CinderBlocks : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_MortarBucket : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemRock : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemStick : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemRope : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemPacked : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemSolar : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemCables : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemBattery : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemScraps : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemCorrugated : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemCorrugatedLg : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_WoodLog_EPOCH : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_PaintCanClear : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_PaintCanBlk : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_PaintCanBlu : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_PaintCanBrn : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_PaintCanGrn : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_PaintCanOra : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_PaintCanPur : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_PaintCanRed : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_PaintCanTeal : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_PaintCanYel : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitSpikeTrap : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitMetalTrap : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitStudWall : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitLargeWoodWall : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitLargeCorrugatedWall : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitLargeWoodWallDoorway : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitLargeCorrugatedWallDoorway : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitLargeWoodWallwDoor : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitLargeCorrugatedWallwDoor : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitLargeWoodWallwDoorwLock : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitLargeCorrugatedWallwDoorwLock : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitWoodFloor : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitMetalFloor : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitWoodStairs : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitWoodStairs2 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitWoodTower : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitWoodRamp : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitTankTrap : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitHesco3 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitWoodLadder : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitFoundation : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitWoodFoundation : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitSolarGen : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitPlotPole : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitHalfCinderWall : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitCinderWall : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_KitCinderWallGarage : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemBurlap : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemTrout : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemSeaBass : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemTuna : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemTroutCooked : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemSeaBassCooked : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemTunaCooked : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_FoodBioMeat : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Pelt_EPOCH : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Venom_EPOCH : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_SnakeCarcass_EPOCH : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_SnakeMeat_EPOCH : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_RabbitCarcass_EPOCH : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_TurtleCarcass_EPOCH : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_CookedRabbit_EPOCH : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_CookedTurtle_EPOCH : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ChickenCarcass_EPOCH : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_CookedChicken_EPOCH : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_GoatCarcass_EPOCH : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_DogCarcass_EPOCH : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_CookedGoat_EPOCH : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_CookedDog_EPOCH : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_SheepCarcass_EPOCH : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_CookedSheep_EPOCH : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemKiloHemp : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemMixOil : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_EnergyPack : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_EnergyPackLg : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_CircuitParts : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemCoolerE : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemCooler0 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemCooler1 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemCooler2 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemCooler3 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemCooler4 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_5Rnd_rollins_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_CSGAS : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemDoc1 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemDoc2 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemDoc3 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemDoc4 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemDoc5 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemDoc6 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemDoc7 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemDoc8 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemVehDoc1 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemVehDoc2 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemVehDoc3 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemVehDoc4 : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemDocument : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_ItemDocumentMission : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_Spirit_Rusty : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_Spirit : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_Fanta : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_RedGull : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_EmptyCan_F : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_TacticalBacon : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_BakedBeans : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_CrunchinCrisps : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_PowderedMilk : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_RichRice : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_Salema_Raw : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_Mackerel_Raw : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_Tuna_Raw : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_Mullet_Raw : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_CatShark_Raw : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_Ornate_Raw : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_Salema_Gutted : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_Mackerel_Gutted : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_Tuna_Gutted : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_Mullet_Gutted : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_CatShark_Gutted : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_Ornate_Gutted : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};	
	class eXpoch_WS_6x_Item_Salema_Cooked : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_Mackerel_Cooked : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_Tuna_Cooked : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_Mullet_Cooked : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_CatShark_Cooked : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_Item_Ornate_Cooked : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x xxx";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
		class eXpoch_WS_6x_30Rnd_mas_556x45_Stanag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_mas_556x45_Stanag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_mas_556x45_T_Stanag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_mas_556x45_T_Stanag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_200Rnd_mas_556x45_Stanag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 200Rnd_mas_556x45_Stanag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_200Rnd_mas_556x45_T_Stanag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 200Rnd_mas_556x45_T_Stanag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_100Rnd_mas_762x51_Stanag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 100Rnd_mas_762x51_Stanag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_100Rnd_mas_762x51_T_Stanag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 100Rnd_mas_762x51_T_Stanag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_100Rnd_mas_762x54_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 100Rnd_mas_762x54_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_100Rnd_mas_762x54_T_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 100Rnd_mas_762x54_T_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_100Rnd_mas_762x39_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 100Rnd_mas_762x39_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_100Rnd_mas_762x39_T_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 100Rnd_mas_762x39_T_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_mas_545x39_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_mas_545x39_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_mas_545x39_T_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_mas_545x39_T_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_100Rnd_mas_545x39_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 100Rnd_mas_545x39_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_100Rnd_mas_545x39_T_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 100Rnd_mas_545x39_T_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_20Rnd_mas_762x51_Stanag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 20Rnd_mas_762x51_Stanag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_20Rnd_mas_762x51_T_Stanag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 20Rnd_mas_762x51_T_Stanag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_5Rnd_mas_762x51_Stanag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 5Rnd_mas_762x51_Stanag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_5Rnd_mas_762x51_T_Stanag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 5Rnd_mas_762x51_T_Stanag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_10Rnd_mas_338_Stanag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 10Rnd_mas_338_Stanag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_10Rnd_mas_338_T_Stanag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 10Rnd_mas_338_T_Stanag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_mas_762x39_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_mas_762x39_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_mas_762x39_T_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_mas_762x39_T_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_10Rnd_mas_762x54_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 10Rnd_mas_762x54_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_10Rnd_mas_762x54_T_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 10Rnd_mas_762x54_T_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_5Rnd_mas_127x99_Stanag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 5Rnd_mas_127x99_Stanag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_5Rnd_mas_127x99_T_Stanag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 5Rnd_mas_127x99_T_Stanag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_5Rnd_mas_127x108_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 5Rnd_mas_127x108_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_5Rnd_mas_127x108_T_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 5Rnd_mas_127x108_T_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_mas_9x21_Stanag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_mas_9x21_Stanag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_mas_9x21d_Stanag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_mas_9x21d_Stanag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_12Rnd_mas_45acp_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 12Rnd_mas_45acp_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_10Rnd_mas_45acp_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 10Rnd_mas_45acp_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_8Rnd_mas_45acp_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 8Rnd_mas_45acp_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_15Rnd_mas_9x21_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 15Rnd_mas_9x21_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_17Rnd_mas_9x21_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 17Rnd_mas_9x21_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_13Rnd_mas_9x21_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 13Rnd_mas_9x21_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_8Rnd_mas_9x18_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 8Rnd_mas_9x18_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_7Rnd_mas_12Gauge_Slug : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 7Rnd_mas_12Gauge_Slug";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_7Rnd_mas_12Gauge_Pellets : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 7Rnd_mas_12Gauge_Pellets";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_10Rnd_mas_12Gauge_Slug : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 10Rnd_mas_12Gauge_Slug";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_10Rnd_mas_12Gauge_Pellets : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 10Rnd_mas_12Gauge_Pellets";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_64Rnd_mas_9x18_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 64Rnd_mas_9x18_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_20Rnd_mas_765x17_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 20Rnd_mas_765x17_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_25Rnd_mas_9x19_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 25Rnd_mas_9x19_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_40Rnd_mas_46x30_Mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 40Rnd_mas_46x30_Mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_20Rnd_mas_12Gauge_Slug : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 20Rnd_mas_12Gauge_Slug";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_20Rnd_mas_12Gauge_Pellets : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 20Rnd_mas_12Gauge_Pellets";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_150Rnd_mas_556x45_Stanag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 150Rnd_mas_556x45_Stanag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_150Rnd_mas_556x45_T_Stanag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 150Rnd_mas_556x45_T_Stanag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_30Rnd_mas_9x39_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 30Rnd_mas_9x39_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
	class eXpoch_WS_6x_20Rnd_mas_9x39_mag : Exile_AbstractItem
	{
		scope = 2;
		displayName = "6x 20Rnd_mas_9x39_mag";
		descriptionShort = "eXpoch WholeSale Item for marXet player trading";
		picture = "\exile_assets\texture\item\Exile_Construction_Crate.paa";
		model = "\plp_containers\plp_ct_CartonFlat.p3d";
		mass = 50;
	};
};