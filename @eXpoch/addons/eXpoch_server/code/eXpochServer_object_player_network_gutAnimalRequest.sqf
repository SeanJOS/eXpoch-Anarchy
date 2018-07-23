/*
	eXpochServer_object_player_network_gutAnimalRequest

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
params["_player","_agent","_modelName"];
private _lootHolderNetIDs = [];
private _returnItem = getArray(missionConfigFile >> "CfgInteractionModels" >> "Animals" >> _modelName >> "returnItem");
private _lootHolderPOS = getPosATL _agent;
private _lootHolder = createVehicle ["GroundWeaponHolder", _lootHolderPOS, [], 0, "CAN_COLLIDE"];
_lootHolder setPosATL _lootHolderPOS;
_lootHolderNetIDs pushBack (netId _lootHolder);
private _itemClassName = selectRandom(_returnItem);
_lootHolder addMagazineCargoGlobal [_itemClassName, 1];

_player setVariable ["ExileLootSpawnedAt", diag_tickTime];
_player setVariable ["ExileHasLoot", true];
_player setVariable ["ExileLootWeaponHolderNetIDs", _lootHolderNetIDs];
ExileServerBuildingNetIdsWithLoot pushBack (netId _player);


deleteVehicle _agent;

private _countAnimalKill = false;
_killer = _player;
_killingPlayer = _killer call ExileServer_util_getFragKiller;
_killerName = name _killingPlayer;

_killSummary = [];
_oldKillerRespect = 0;
if !(isNull _killingPlayer) then 
{
	_oldKillerRespect = _killingPlayer getVariable ["ExileScore", 0];
};
_respectTransfer = getNumber(missionConfigFile >> "CfgInteractionModels" >> "Animals" >> _modelName >> "respect");
_newKillerRespect = _oldKillerRespect + _respectTransfer;
_killSummary pushBack ["UNWASTED MEAT", _respectTransfer];

if !(isNull _killingPlayer) then 
{
	if !(_killSummary isEqualTo []) then 
	{	
		[_killingPlayer, "showFragRequest", [_killSummary]] call ExileServer_system_network_send_to;
	};
};

if !(isNull _killingPlayer) then 
{
	_killerStatsNeedUpdate = false;
	if (_countAnimalKill) then
	{
		_newKillerFrags = _killingPlayer getVariable ["ExileAnimalKills", 0];
		_newKillerFrags = _newKillerFrags + 1;
		_killerStatsNeedUpdate = true;
		_killingPlayer setVariable ["ExileAnimalKills", _newKillerFrags];
		format["addAccountAnimalKill:%1", getPlayerUID _killingPlayer] call ExileServer_system_database_query_fireAndForget;
	};
	if !(_newKillerRespect isEqualTo _oldKillerRespect) then 
	{
		_killingPlayer setVariable ["ExileScore", _newKillerRespect];
		_killerStatsNeedUpdate = true;
		format["setAccountScore:%1:%2", _newKillerRespect, getPlayerUID _killingPlayer] call ExileServer_system_database_query_fireAndForget;
	};
	if (_killerStatsNeedUpdate) then 
	{
		_killingPlayer call ExileServer_object_player_sendStatsUpdate;
	};
};