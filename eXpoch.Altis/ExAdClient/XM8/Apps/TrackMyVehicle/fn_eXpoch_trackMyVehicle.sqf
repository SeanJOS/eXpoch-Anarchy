/*
	fn_eXpoch_trackMyVehicle

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO"plp_mark_civ_parkinglot"
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private _vehicleArray = nearestObjects [position player,["Car","Truck","Air","Support","Ship","Armored","Submarine"],50];
private _tracking = false;
if!(_vehicleArray isEqualTo [])then
{
	private _vehicle = _vehicleArray select 0;
	private _vehicleType = typeOf _vehicle;
	private _vehPos = getPos _vehicle;
	private _vehName = getText(configFile >> "CfgVehicles" >> _vehicleType >> "displayName");
	if(eXpochClientFindMyVehicleMarkers isEqualTo [])then
	{
		eXpochClientFindMyVehicle pushBack _vehicle;
		private _marker = createMarkerLocal [_vehName, _vehPos];
		eXpochClientFindMyVehicleMarkers pushBack _marker;
		_marker setMarkerTextLocal _vehName;
		_marker setMarkerTypeLocal "plp_mark_civ_parkinglot";
		_marker setMarkerColorLocal "ColorYellow";
		["SuccessTitleOnly", ["Added this vehicles marker."]] call ExileClient_gui_toaster_addTemplateToast;
		((findDisplay 24015) displayCtrl 82502) ctrlSetStructuredText parseText "<t color='#44CD00'>Tracking ON</t>";
		_tracking = true;
	}
	else
	{
		{
			_marker = _x;
			deleteMarkerLocal _marker;
		}forEach eXpochClientFindMyVehicleMarkers;
		["ErrorTitleOnly", ["Removed all vehicle map markers."]] call ExileClient_gui_toaster_addTemplateToast;
		((findDisplay 24015) displayCtrl 82502) ctrlSetStructuredText parseText "<t color='#FF0000'>Tracking OFF</t>";
		eXpochClientFindMyVehicleMarkers = [];
	};
}
else
{
	["ErrorTitleOnly", ["There is no vehicle nearby to track."]] call ExileClient_gui_toaster_addTemplateToast;
};
if(_tracking)then
{
	while {alive (eXpochClientFindMyVehicle select 0)} do 
	{
		_vehicle = (eXpochClientFindMyVehicle select 0);
		_marker = (eXpochClientFindMyVehicleMarkers select 0);
		_marker setMarkerPos getPOS _vehicle;
		sleep 30;
	};
};