/*
	eXpochClient_object_player_network_miningResponse
	
	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
params["_response","_miningClassName"];
private _picture = getText(configFile >> "CfgMagazines" >> _miningClassName >> "picture");
private _displayName = getText(configFile >> "CfgMagazines" >> _miningClassName >> "displayName");
switch(_response)do
{
	case "Error":
	{
		["ErrorTitleAndText", ["Class/Model Error!", "The server could not process a classname/model for your mined item. Please notify the eXpoch developers of this issue."]] call ExileClient_gui_toaster_addTemplateToast;
	};
	case "Failure":
	{
		uisleep random(10);
		["ErrorTitleOnly", ["Fools GOLD!"]] call ExileClient_gui_toaster_addTemplateToast;
	};
	case "Success":
	{
		private _message = format["You found yourself some %1",_displayName];
		uisleep random(10);
		["SuccessTitleAndText", ["OH YEAH, PAYDIRT!", _message]] call ExileClient_gui_toaster_addTemplateToast;
	};
};