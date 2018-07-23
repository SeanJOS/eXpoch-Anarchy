class CfgPatches
{
	class eXpoch_plp2exile
	{
		fileName = "eXpoch_plp2exile.pbo";
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
	class CA_Magazine;
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
	#include "Cfgmagazines.hpp"
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
	#include "CfgConstruction.hpp"
};
class UniformSlotInfo;
class SmallFire;
class DefaultEventHandlers;
class AnimationSources;
class CfgVehicles
{
	class thingX;
	class NonStrategic;
	class ReammoBox_F;
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
	#include "CfgVehicles.hpp"
};