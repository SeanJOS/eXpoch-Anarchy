class CfgPatches
{
	class eXpoch_code
	{
		requiredAddons[] = {"A3_Data_F","A3_Ui_F","A3_Functions_F","A3_UiFonts_F","eXpoch_assets"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		vehicles[] = {};
		author = "DonkeyPunch Community Gaming";
	};
};
class CfgFunctions
{
	class eXpochClient 
	{
		class bootstrap 
		{
			file = "\eXpoch_code\bootstrap";
			class preInit 
			{
				preInit = 1;
			};
			class postInit
			{
				postInit = 1;
			};
		};
	};
};
