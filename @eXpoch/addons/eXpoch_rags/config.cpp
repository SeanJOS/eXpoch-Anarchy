////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Sat Feb 04 13:24:08 2017 : 'file' last modified on Sat Jan 28 07:29:10 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class D:\ZZdpeXpoch\@eXpoch\addons\eXpoch_rags\config.bin{
class CfgPatches
{
	class eXpoch_Rags
	{
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		vehicles[] = {"eXpoch_Rag01","eXpoch_Rag02","eXpoch_Rag03","eXpoch_Rag04","eXpoch_Rag05","eXpoch_Rag06","eXpoch_Rag07","eXpoch_Rag08","eXpoch_Rag09","eXpoch_Rag10","eXpoch_Rag11","eXpoch_Rag12","eXpoch_Rag13","eXpoch_Rag14","eXpoch_Rag15","eXpoch_Rag16","eXpoch_Rag17","eXpoch_Rag18","eXpoch_Rag19","eXpoch_Rag20","eXpoch_Rag21","eXpoch_Rag22","eXpoch_Rag23","eXpoch_Rag24","eXpoch_Rag25","eXpoch_Rag26","eXpoch_Rag27","eXpoch_Rag28","eXpoch_Rag29","eXpoch_Rag30","eXpoch_Rag31","eXpoch_Rag32","eXpoch_Rag33","eXpoch_Rag34","eXpoch_Rag35","eXpoch_Rag36","eXpoch_Rag37","eXpoch_Rag38","eXpoch_Rag39","eXpoch_Rag40","eXpoch_Rag41","eXpoch_Rag42","eXpoch_Rag43","eXpoch_Rag44","eXpoch_Rag45","eXpoch_Rag46"};
		magazines[] = {"eXpoch_Rag01_Item","eXpoch_Rag02_Item","eXpoch_Rag03_Item","eXpoch_Rag04_Item","eXpoch_Rag05_Item","eXpoch_Rag06_Item","eXpoch_Rag07_Item","eXpoch_Rag08_Item","eXpoch_Rag09_Item","eXpoch_Rag10_Item","eXpoch_Rag11_Item","eXpoch_Rag12_Item","eXpoch_Rag13_Item","eXpoch_Rag14_Item","eXpoch_Rag15_Item","eXpoch_Rag16_Item","eXpoch_Rag17_Item","eXpoch_Rag18_Item","eXpoch_Rag19_Item","eXpoch_Rag20_Item","eXpoch_Rag21_Item","eXpoch_Rag22_Item","eXpoch_Rag23_Item","eXpoch_Rag24_Item","eXpoch_Rag25_Item","eXpoch_Rag26_Item","eXpoch_Rag27_Item","eXpoch_Rag28_Item","eXpoch_Rag29_Item","eXpoch_Rag30_Item","eXpoch_Rag31_Item","eXpoch_Rag32_Item","eXpoch_Rag33_Item","eXpoch_Rag34_Item","eXpoch_Rag35_Item","eXpoch_Rag36_Item","eXpoch_Rag37_Item","eXpoch_Rag38_Item","eXpoch_Rag39_Item","eXpoch_Rag40_Item","eXpoch_Rag41_Item","eXpoch_Rag42_Item","eXpoch_Rag43_Item","eXpoch_Rag44_Item","eXpoch_Rag45_Item","eXpoch_Rag46_Item"};
		ammo[] = {};
	};
};
class CfgVehicleClasses
{
	class eXpoch_Object
	{
		displayName = "eXpoch Objects";
	};
};
class CfgEditorCategories
{
	class eXpoch_EdCat_Objects
	{
		displayName = "eXpoch Objects";
	};
};
class CfgEditorSubcategories
{
	class eXpoch_EdSubcat_Misc
	{
		displayName = "eXpoch Misc";
	};
};
class UniformSlotInfo;
class CfgVehicles
{
	class Item_Base_F;
	class eXpoch_Rag00: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag00_Item
			{
				magazine = "eXpoch_Rag00_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag01: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag01_Item
			{
				magazine = "eXpoch_Rag01_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag02: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag02_Item
			{
				magazine = "eXpoch_Rag02_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag03: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag03_Item
			{
				magazine = "eXpoch_Rag03_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag04: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag04_Item
			{
				magazine = "eXpoch_Rag04_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag05: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag05_Item
			{
				magazine = "eXpoch_Rag05_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag06: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag06_Item
			{
				magazine = "eXpoch_Rag06_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag07: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag07_Item
			{
				magazine = "eXpoch_Rag07_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag08: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag08_Item
			{
				magazine = "eXpoch_Rag08_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag09: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag09_Item
			{
				magazine = "eXpoch_Rag09_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag10: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag10_Item
			{
				magazine = "eXpoch_Rag10_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag11: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag11_Item
			{
				magazine = "eXpoch_Rag11_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag12: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag12_Item
			{
				magazine = "eXpoch_Rag12_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag13: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag13_Item
			{
				magazine = "eXpoch_Rag13_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag14: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag14_Item
			{
				magazine = "eXpoch_Rag14_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag15: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag15_Item
			{
				magazine = "eXpoch_Rag15_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag16: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag16_Item
			{
				magazine = "eXpoch_Rag16_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag17: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag17_Item
			{
				magazine = "eXpoch_Rag17_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag18: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag18_Item
			{
				magazine = "eXpoch_Rag18_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag19: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag19_Item
			{
				magazine = "eXpoch_Rag19_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag20: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag20_Item
			{
				magazine = "eXpoch_Rag20_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag21: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag21_Item
			{
				magazine = "eXpoch_Rag21_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag22: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag22_Item
			{
				magazine = "eXpoch_Rag22_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag23: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag23_Item
			{
				magazine = "eXpoch_Rag23_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag24: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag24_Item
			{
				magazine = "eXpoch_Rag24_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag25: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag25_Item
			{
				magazine = "eXpoch_Rag25_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag26: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag26_Item
			{
				magazine = "eXpoch_Rag26_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag27: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag27_Item
			{
				magazine = "eXpoch_Rag27_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag28: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag28_Item
			{
				magazine = "eXpoch_Rag28_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag29: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag29_Item
			{
				magazine = "eXpoch_Rag29_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag30: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag30_Item
			{
				magazine = "eXpoch_Rag30_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag31: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag31_Item
			{
				magazine = "eXpoch_Rag31_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag32: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag32_Item
			{
				magazine = "eXpoch_Rag32_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag33: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag33_Item
			{
				magazine = "eXpoch_Rag33_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag34: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag34_Item
			{
				magazine = "eXpoch_Rag34_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag35: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag35_Item
			{
				magazine = "eXpoch_Rag35_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag36: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag36_Item
			{
				magazine = "eXpoch_Rag36_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag37: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag37_Item
			{
				magazine = "eXpoch_Rag37_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag38: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag38_Item
			{
				magazine = "eXpoch_Rag38_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag39: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag39_Item
			{
				magazine = "eXpoch_Rag39_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag40: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag40_Item
			{
				magazine = "eXpoch_Rag40_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag41: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag41_Item
			{
				magazine = "eXpoch_Rag41_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag42: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag42_Item
			{
				magazine = "eXpoch_Rag42_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag43: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag43_Item
			{
				magazine = "eXpoch_Rag43_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag44: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag44_Item
			{
				magazine = "eXpoch_Rag44_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag45: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag45_Item
			{
				magazine = "eXpoch_Rag45_Item";
				count = 1;
			};
		};
	};
	class eXpoch_Rag46: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Torn Rags";
		author = "Ultima-weapon";
		editorCategory = "eXpoch_EdCat_Objects";
		editorSubcategory = "eXpoch_EdSubcat_Misc";
		vehicleClass = "eXpoch_Object";
		class TransportMagazines
		{
			class eXpoch_Rag46_Item
			{
				magazine = "eXpoch_Rag46_Item";
				count = 1;
			};
		};
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class eXpoch_Rag00_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags (Sanitized)";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag00.p3d";
		picture = "\eXpoch_Rags\ui\Rag00.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag01_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag01.p3d";
		picture = "\eXpoch_Rags\ui\Rag01.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag02_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag02.p3d";
		picture = "\eXpoch_Rags\ui\Rag02.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag03_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag03.p3d";
		picture = "\eXpoch_Rags\ui\Rag03.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag04_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag04.p3d";
		picture = "\eXpoch_Rags\ui\Rag04.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag05_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag05.p3d";
		picture = "\eXpoch_Rags\ui\Rag05.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag06_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag06.p3d";
		picture = "\eXpoch_Rags\ui\Rag06.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag07_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag07.p3d";
		picture = "\eXpoch_Rags\ui\Rag07.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag08_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag08.p3d";
		picture = "\eXpoch_Rags\ui\Rag08.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag09_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag09.p3d";
		picture = "\eXpoch_Rags\ui\Rag09.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag10_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag10.p3d";
		picture = "\eXpoch_Rags\ui\Rag10.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag11_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag11.p3d";
		picture = "\eXpoch_Rags\ui\Rag11.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag12_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag12.p3d";
		picture = "\eXpoch_Rags\ui\Rag12.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag13_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag13.p3d";
		picture = "\eXpoch_Rags\ui\Rag13.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag14_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag14.p3d";
		picture = "\eXpoch_Rags\ui\Rag14.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag15_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag15.p3d";
		picture = "\eXpoch_Rags\ui\Rag15.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag16_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag16.p3d";
		picture = "\eXpoch_Rags\ui\Rag16.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag17_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag17.p3d";
		picture = "\eXpoch_Rags\ui\Rag17.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag18_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag18.p3d";
		picture = "\eXpoch_Rags\ui\Rag18.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag19_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag19.p3d";
		picture = "\eXpoch_Rags\ui\Rag19.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag20_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag20.p3d";
		picture = "\eXpoch_Rags\ui\Rag20.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag21_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag21.p3d";
		picture = "\eXpoch_Rags\ui\Rag21.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag22_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag22.p3d";
		picture = "\eXpoch_Rags\ui\Rag22.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag23_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag23.p3d";
		picture = "\eXpoch_Rags\ui\Rag23.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag24_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag24.p3d";
		picture = "\eXpoch_Rags\ui\Rag24.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag25_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag25.p3d";
		picture = "\eXpoch_Rags\ui\Rag25.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag26_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag26.p3d";
		picture = "\eXpoch_Rags\ui\Rag26.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag27_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag27.p3d";
		picture = "\eXpoch_Rags\ui\Rag27.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag28_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag28.p3d";
		picture = "\eXpoch_Rags\ui\Rag28.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag29_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag29.p3d";
		picture = "\eXpoch_Rags\ui\Rag29.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag30_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag30.p3d";
		picture = "\eXpoch_Rags\ui\Rag30.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag31_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag31.p3d";
		picture = "\eXpoch_Rags\ui\Rag31.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag32_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag32.p3d";
		picture = "\eXpoch_Rags\ui\Rag32.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag33_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag33.p3d";
		picture = "\eXpoch_Rags\ui\Rag33.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag34_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag34.p3d";
		picture = "\eXpoch_Rags\ui\Rag34.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag35_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag35.p3d";
		picture = "\eXpoch_Rags\ui\Rag35.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag36_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag36.p3d";
		picture = "\eXpoch_Rags\ui\Rag36.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag37_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag37.p3d";
		picture = "\eXpoch_Rags\ui\Rag37.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag38_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag38.p3d";
		picture = "\eXpoch_Rags\ui\Rag38.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag39_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag39.p3d";
		picture = "\eXpoch_Rags\ui\Rag39.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag40_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag40.p3d";
		picture = "\eXpoch_Rags\ui\Rag40.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag41_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag41.p3d";
		picture = "\eXpoch_Rags\ui\Rag41.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag42_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag42.p3d";
		picture = "\eXpoch_Rags\ui\Rag42.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag43_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag43.p3d";
		picture = "\eXpoch_Rags\ui\Rag43.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag44_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag44.p3d";
		picture = "\eXpoch_Rags\ui\Rag44.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag45_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag45.p3d";
		picture = "\eXpoch_Rags\ui\Rag45.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
	class eXpoch_Rag46_Item: CA_Magazine
	{
		scope = 2;
		displayName = "Torn Rags";
		descriptionShort = "Rags torn from clothing that can be used to bandage wounds.";
		author = "Ultima-weapon";
		model = "\eXpoch_Rags\data\Rag46.p3d";
		picture = "\eXpoch_Rags\ui\Rag46.paa";
		count = 1;
		type = 256;
		mass = 1;
	};
};
class cfgMods
{
	author = "76561198173462307";
	timepacked = "1485563350";
};
//};
