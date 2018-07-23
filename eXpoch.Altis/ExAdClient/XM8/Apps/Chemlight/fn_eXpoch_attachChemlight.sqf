/*
	fn_eXpoch_attachChemlight

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private _chemlights = ["Chemlight_green","Chemlight_yellow","Chemlight_red","Chemlight_blue"];
private _object = player;
private _items = magazines _object;
private _availChems = _items arrayIntersect _chemlights;
eXpochClientChemlightTime = diag_tickTime;
if(eXpochClientChemLight isEqualTo [])then
{
	if (count _availChems == 0) then 
	{
		["ErrorTitleOnly", ["You have no chemlights!"]] call ExileClient_gui_toaster_addTemplateToast;
	}
	else
	{
		private _chem = _availChems call BIS_fnc_selectRandom;
		private _chemColour = [1.0, 0.0, 0.0];
		closeDialog 82500;
		if (_chem == "Chemlight_red") then {_chemColour = [1.0, 0.0, 0.0];};
		if (_chem == "Chemlight_green") then {_chemColour = [0.0, 1.0, 0.0];};
		if (_chem == "Chemlight_blue") then {_chemColour = [0.0, 0.0, 1.0];};
		if (_chem == "Chemlight_yellow") then {_chemColour = [0.5, 0.5, 0.0];};	
		_object removeItem _chem;
		_object playMove "AinvPknlMstpSnonWnonDr_medic3";
		sleep 10;
		_light = createVehicle ["#lightpoint", [0,0,0], [], 0, "NONE"];
		_light lightAttachObject [_object, [0.0,0.0,-2.5]];
		_light setLightBrightness 0.5;
		_light setLightAmbient _chemColour;
		_light setLightColor _chemColour;
		eXpochClientChemLight = _light;
		eXpochClientExtinguishAction = _object addAction ["Extinguish Chemlight",{[] call apps_fnc_eXpoch_extinguishChemlight}];	
	};
}
else
{
	["ErrorTitleOnly", ["You already have on a chemlight!"]] call ExileClient_gui_toaster_addTemplateToast;
};