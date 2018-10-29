/**
 * ExileClient_gui_selectSpawnLocation_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_randomSpawnChosen","_markers","_spawnName","_display","_spawnButton","_listBox","_listItemIndex","_numberOfSpawnPoints","_randNum","_randData","_randomSpawnIndex"];
disableSerialization;
ExileClientSpawnLocationSelectionDone = false;
ExileClientSelectedSpawnLocationMarkerName = ["",1,2,""];
createDialog "RscExileSelectSpawnLocationDialog";
eXpochClientGenderSelect = 0;
eXpochClientSpawnType = 0;
eXpochClientGearSelect = 0;
ExileClientPlayerTimeAlive = 0; // eXpoch_Comment - remove if successful change below
eXpochSpawnPoints = [];
waitUntil
{
	_display = findDisplay 24002;
	!isNull _display
};
_spawnButton = _display displayCtrl 24003;
_spawnButton ctrlEnable false;
_display displayAddEventHandler ["KeyDown", "_this call ExileClient_gui_loadingScreen_event_onKeyDown"];
_listBox = _display displayCtrl 24002;
lbClear _listBox;
{
	if (getMarkerType _x == "ExileSpawnZone") then
	{
		_listItemIndex = _listBox lbAdd (markerText _x);
		_listBox lbSetData [_listItemIndex, _x];
		eXpochSpawnPoints pushBack (markerText _x);
	};
}
forEach allMapMarkers;
//eXpoch base spawn
_mapCenter = [worldSize/2,worldSize/2,0];
_allTerritoryFlags = (nearestObjects [_mapCenter, ["Exile_Construction_Flag_Static"], ceil(worldSize/1.75 + 3000)]);
{
	_playerUID = getPlayerUID player;
	_buildRights = _x getVariable ["ExileTerritoryBuildRights", []];
	if (_playerUID in _buildRights) then
	{
		_territoryLevelConfig =_x getVariable ["ExileTerritoryLevel", 0];
		if(_territoryLevelConfig >= 4)then{
			_baseName = _x getVariable ["ExileTerritoryName", ""];
			createMarker [_baseName,getPosATL _x];
			_listItemIndex = _listBox lbAdd _baseName;
			_listBox lbSetData [_listItemIndex, _baseName];
		};
	};
}forEach _allTerritoryFlags;

_numberOfSpawnPoints = {getMarkerType _x == "ExileSpawnZone"} count allMapMarkers;
if (_numberOfSpawnPoints > 0) then 
{
	if!((eXpochSpawnPoints select 0) isEqualTo "Random Coastal Spawn")then
	{
		_randNum = floor(random _numberOfSpawnPoints);
		_randData = lbData [24002,_randNum];
		_randomSpawnIndex = _listBox lbAdd "Random";
		_listBox lbSetData [_randomSpawnIndex, _randData];
	};
};
//eXpoch spawnType and Gender Selection
_maleButton = _display displayCtrl 79998;
_maleButton ctrlEnable false;
_femaleButton = _display displayCtrl 79997;
_femaleButton ctrlEnable false;
_groundButton = _display displayCtrl 79996;
_groundButton ctrlEnable false;
_haloButton = _display displayCtrl 79995;
_haloButton ctrlEnable false;
_haloButton ctrlSetText "eXpochA4E Beta";
_gearButton = _display displayCtrl 79994;
_gearButton ctrlEnable false;
_gearButton ctrlSetText "ACE3 for eXpoch";
fnc_ButtonClick_24003 = {
	[] call ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick;
	ExileClientPlayerTimeAlive = 0;
};
_spawnButton = _display displayCtrl 24003;
_spawnButton ctrlRemoveAllEventHandlers "SliderPosChanged";
_spawnButton ctrlSetEventHandler["ButtonClick","call fnc_ButtonClick_24003"];
_spawnButton ctrlSetText "GAME ON!!!";
true