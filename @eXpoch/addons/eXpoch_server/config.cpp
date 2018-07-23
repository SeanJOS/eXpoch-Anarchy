class CfgPatches
{
	class eXpoch_server
	{
		fileName = "eXpoch_server.pbo";
		requiredAddons[] = {"A3_Data_F","A3_Ui_F","A3_Functions_F","A3_UiFonts_F","eXpoch_code"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		vehicles[] = {};
		author = "DonkeyPunch Community Gaming";
	};
};
class CfgFunctions
{
	class eXpochServer
	{
		class bootstrap 
		{
			file = "\eXpoch_server\bootstrap";
			isServer = 1;
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
