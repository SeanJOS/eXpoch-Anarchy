/*
	fn_eXpoch_trackMyBase

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
	
	influenced by LunchBox's base marker script :) Thanks LunchBox 
*/
if(eXpochClientFindMyBaseMarkers isEqualTo [])then
{
	_playerUID = getPlayerUID player;
	{
		_flag = _x;
		_buildRights = _flag getVariable ["ExileTerritoryBuildRights", []];
		if (_playerUID in _buildRights) then
		{
			_flagName = _flag getVariable ["ExileTerritoryName", ""];
			_flagPos = getPos _flag;
			_marker = createMarkerLocal [_flagName, _flagPos];
			_marker setMarkerTextLocal _flagName;
			_marker setMarkerTypeLocal "plp_mark_civ_campingsite";
			_marker setMarkerColorLocal "ColorYellow";
			eXpochClientFindMyBaseMarkers pushBack _marker;
		};
	}forEach (allMissionObjects "Exile_Construction_Flag_Static");
	["SuccessTitleOnly", ["Added all Base map markers."]] call ExileClient_gui_toaster_addTemplateToast;
	((findDisplay 24015) displayCtrl 82501) ctrlSetStructuredText parseText "<t color='#FF0000'>Show bases ON</t>";
}
else
{
	{
		_marker = _x;
		deleteMarkerLocal _marker;
	}forEach eXpochClientFindMyBaseMarkers;
	FIND_MY_BASE_ID=nil;
	["ErrorTitleOnly", ["Removed all Base map markers."]] call ExileClient_gui_toaster_addTemplateToast;
	((findDisplay 24015) displayCtrl 82501) ctrlSetStructuredText parseText "<t color='#44CD00'>Show bases OFF</t>";
	eXpochClientFindMyBaseMarkers = [];
};