/*
	fn_eXpoch_trackMyEnemy

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private _enemyArray = nearestObjects [position player,["Man"],5];
private _tracking = false;
private _count = count(_enemyArray);
if(_count > 1)then
{
	private _enemy = _enemyArray select 1;
	private _enemyType = typeOf _enemy;
	private _enemyPos = getPos _enemy;
	private _enemyName = "eXnet Tracking";
	if!(_enemyType isEqualTo "Exile_Unit_Player")then
	{
		_enemyName = getText(configFile >> "CfgVehicles" >> _enemyType >> "displayName");
	};
	if(eXpochClientFindMyEnemyMarkers isEqualTo [])then
	{
		eXpochClientFindMyEnemy pushBack _enemy;
		private _marker = createMarkerLocal [_enemyName, _enemyPos];
		eXpochClientFindMyEnemyMarkers pushBack _marker;
		_marker setMarkerTextLocal _enemyName;
		_marker setMarkerTypeLocal "plp_mark_trg_Asset";
		_marker setMarkerColorLocal "ColorRed";
		["SuccessTitleOnly", ["Added this enemies marker."]] call ExileClient_gui_toaster_addTemplateToast;
		((findDisplay 24015) displayCtrl 82503) ctrlSetStructuredText parseText "<t color='#44CD00'>Tracking ON</t>";
		_tracking = true;
	}
	else
	{
		{
			_marker = _x;
			deleteMarkerLocal _marker;
		}forEach eXpochClientFindMyEnemyMarkers;
		["ErrorTitleOnly", ["Removed all enemy map markers."]] call ExileClient_gui_toaster_addTemplateToast;
		((findDisplay 24015) displayCtrl 82503) ctrlSetStructuredText parseText "<t color='#FF0000'>Tracking OFF</t>";
		eXpochClientFindMyEnemyMarkers = [];
	};
}
else
{
	["ErrorTitleOnly", ["There is no enemy nearby to track."]] call ExileClient_gui_toaster_addTemplateToast;
};
if(_tracking)then
{
	while {alive (eXpochClientFindMyEnemy select 0)} do 
	{
		_enemy = (eXpochClientFindMyEnemy select 0);
		_marker = (eXpochClientFindMyEnemyMarkers select 0);
		_marker setMarkerPos getPOS _enemy;
		sleep 3;
	};
};