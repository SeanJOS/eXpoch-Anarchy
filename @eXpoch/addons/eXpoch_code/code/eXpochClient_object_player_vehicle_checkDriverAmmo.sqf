/*
	eXpochClient_object_player_vehicle_checkDriverAmmo

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
params["_weapon"];
private _allammo = getArray (configFile >> "CfgWeapons" >> _weapon >> "magazines");
private _items = magazines player;
private _availAmmo = _items arrayIntersect _allammo;
private _msg = format["%1",_allammo select 0];
if (count _availAmmo == 0) then
{
	["ErrorTitleOnly", ["You need a can of " + _msg + " or any of its variants"]] call ExileClient_gui_toaster_addTemplateToast;
}
else
{
	vehicle player addMagazineTurret [_availAmmo select 0,[-1]];
	["SuccessTitleOnly", ["You have added 1 can of " + _msg]] call ExileClient_gui_toaster_addTemplateToast;
	player removeItem (_availAmmo select 0);
};