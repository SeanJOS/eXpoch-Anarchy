/*
	eXpochClient_object_player_zombieSpawn

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_inVehicle","_targetPosition","_safeZone","_locations","_locationTypes","_maxZedsTowns","_military","_maxZedsMilitary","_territory","_maxZedsTerritory","_maxZedsWilderness"];
_inVehicle = !(vehicle player == player);
_targetPosition = 
[
	(getPos player) select 0, 
	(getPos player) select 1, 
	0
];
_safeZone = [_targetPosition,800] call ExileClient_util_world_isTraderZoneInRange;
if!(ExileClientPlayerIsSpawned)exitWith{};
if(player getVariable['eXpochClientPlayerInCustomization',false])exitWith{};
if(!(isNull player) && (alive player) && !(_inVehicle) && !(_safeZone))then 
{
	_handled = false;
	
	eXpochClientIsInOwnTerritory = false;
	_territory = [_targetPosition,500] call ExileClient_util_world_isTerritoryInRange;	
	if(_territory)then
	{
		_flags = _targetPosition nearObjects ["Exile_Construction_Flag_Static", _range];
		{
			if((getPlayerUID player) in (_x getVariable ["ExileTerritoryBuildRights",[]]))then
			{
				eXpochClientIsInOwnTerritory = true;
			};
		}forEach _flags;
		if!(eXpochClientIsInOwnTerritory)then
		{		
			_maxZedsTerritory = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "MaxZedsInTerritory");
			if((_maxZedsTerritory > 0) && (eXpochClientZombiesSpawned <= _maxZedsTerritory))then
			{
				[player,"Territory",_targetPosition,_maxZedsTerritory] remoteExec ["eXpochServer_object_zombie_spawnOnPlayer",2];
			};
		};
		_handled = true;
	};
	
	if!(_handled)then
	{
		_military = [_targetPosition,400] call eXpochClient_util_world_isMilitaryZoneInRange;
		if(!(isNil {_military}) && (_military))then
		{
			_maxZedsMilitary = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "MaxZedsInMilitary");
			if((_maxZedsMilitary > 0) && (eXpochClientZombiesSpawned <= _maxZedsMilitary))then
			{
				[player,"Military",_targetPosition,_maxZedsMilitary] remoteExec ["eXpochServer_object_zombie_spawnOnPlayer",2];
			};
			_handled = true;
		};
	};
	
	if!(_handled)then
	{
		_locations = [];
		_locationTypes = 	["NameCityCapital", "NameCity", "NameVillage", "NameLocal", "NameMarine"];
		_locations = nearestLocations [position player, _locationTypes, 400];
		if!(_locations isEqualTo [])exitWith
		{
			_maxZedsTowns = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "MaxZedsInTowns");
			if((_maxZedsTowns > 0) && (eXpochClientZombiesSpawned <= _maxZedsTowns))then
			{
				[player,"Towns",_targetPosition,_maxZedsTowns] remoteExec ["eXpochServer_object_zombie_spawnOnPlayer",2];
			};
			_handled = true;
		};
	};
	
	if!(_handled)then
	{
		_maxZedsWilderness  = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "MaxZedsInWilderness");
		if((_maxZedsWilderness > 0) && (eXpochClientZombiesSpawned <= _maxZedsWilderness))then
		{
			[player,"Wilderness",_targetPosition,_maxZedsWilderness] remoteExec ["eXpochServer_object_zombie_spawnOnPlayer",2];
		};
	};
};
if!(eXpochClientZombiesArray isEqualTo [])then
{
	{
		_zombie = _x select 0;
		_spawnedAt = _x select 1;
		if((isNull _zombie) || !(alive _zombie))then
		{
			eXpochClientZombiesArray = eXpochClientZombiesArray - [_x];
			eXpochClientZombiesSpawned = count(eXpochClientZombiesArray);
		};
	}forEach eXpochClientZombiesArray;
};