/*
	eXpochClient_object_player_hunting_canGutCheck

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private _inventory = magazines player;
_inventory pushBack (currentWeapon player);
_inventory pushBack (handgunWeapon player);
_inventory pushBack (secondaryWeapon player);
private _sharpObjects = getArray(missionConfigFile >> "CfgeXpoch" >> "CuttingTools");
private _availableCuttlery = _inventory arrayIntersect _sharpObjects;
if(count _availableCuttlery == 0)then
{
	["ErrorTitleOnly", ["You have no sharp blade to gut this animal!"]] call ExileClient_gui_toaster_addTemplateToast;
}
else
{
	{
		player removeAction _x;
	}forEach ExileClientInteractions;
	[]spawn
	{
		ExileClientInteractionAgent switchMove "AinjPpneMstpSnonWrflDnon";
		uisleep 2;
		player playMove "ainvpknlmstpsnonwrfldr_medic0s";
		uisleep 5;
		[player,ExileClientInteractionAgent,ExileClientInteractionModelName] remoteExec ["eXpochServer_object_player_network_gutAnimalRequest", 2];
	};
};