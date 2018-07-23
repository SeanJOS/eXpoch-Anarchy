/*
	eXpochClient_object_player_network_fishingResponse
	
	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
params["_response","_fishClassName"];
private _picture = getText(configFile >> "CfgMagazines" >> _fishClassName >> "picture");
private _displayName = getText(configFile >> "CfgMagazines" >> _fishClassName >> "displayName");
private _randomWeight = random(20);
switch(_response)do
{
	case "Error":
	{
		["ErrorTitleAndText", ["Class/Model Error!", "The server could not process a classname/model for your fish. Please notify the eXpoch developers of this issue."]] call ExileClient_gui_toaster_addTemplateToast;
	};
	case "Failure":
	{
		_message = format["You did have yourself a %1 Lb %2",_randomWeight,_displayName];
		["ErrorTitleAndText", ["You Lost the Fish!", _message]] call ExileClient_gui_toaster_addTemplateToast;
	};
	case "Success":
	{
		_message = format["You caught yourself a %1 Lb %2",_randomWeight,_displayName];
		["SuccessTitleAndText", ["OH YEAH, GOT HIM!", _message]] call ExileClient_gui_toaster_addTemplateToast;
	};
};
private _bobber = missionNamespace getVariable ["EPOCH_myBobber", objNull];
if(!isNull _bobber)then
{
	deleteVehicle _bobber;
	missionNamespace setVariable ["EPOCH_myBobber", objNull];
	eXpochClientPlayerIsFishing = false;
};