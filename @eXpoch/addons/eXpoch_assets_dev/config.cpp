class CfgPatches
{
	class eXpoch_assets
	{
		fileName = "eXpoch_assets.pbo";
		requiredAddons[] = {"A3_Data_F","A3_Ui_F","A3_Functions_F","A3_UiFonts_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		vehicles[] = {};
		author = "DonkeyPunch Community Gaming";
	};
};
class CfgFunctions
{
	class eXpochClientAssets 
	{
		class bootstrap 
		{
			file = "\eXpoch_assets\bootstrap";
			class preInit 
			{
				preInit = 1;
			};
		};
	};
};