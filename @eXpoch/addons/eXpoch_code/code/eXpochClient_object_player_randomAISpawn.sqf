/*
	eXpochClient_object_player_randomAISpawn

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
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

if(!(isNull player) && (alive player) && !(_safeZone))then 
{
	_groupSize = count(units(group player));
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
			_maxRandomAITerritory = getNumber(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "PlayerMaxRandomAIInTerritory");
			if((_maxRandomAITerritory > 0) && (eXpochClientDMSRandomAISpawned <= _maxRandomAITerritory))then
			{
				[player,"Territory",_targetPosition,_maxRandomAITerritory] remoteExec ["eXpochServer_object_dmsai_spawnOnPlayer",2];
			};
		};
		_handled = true;
	};
	
	if!(_handled)then
	{
		_military = [_targetPosition,400] call eXpochClient_util_world_isMilitaryZoneInRange;
		if(!(isNil {_military}) && (_military))then
		{
			_maxRandomAIMilitary = getNumber(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "PlayerMaxRandomAIInMilitary");
			if((_maxRandomAIMilitary > 0) && (eXpochClientDMSRandomAISpawned <= _maxRandomAIMilitary))then
			{
				[player,"Military",_targetPosition,_maxRandomAIMilitary] remoteExec ["eXpochServer_object_dmsai_spawnOnPlayer",2];
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
			_maxRandomAITowns = getNumber(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "PlayerMaxRandomAIInTowns");
			if((_maxRandomAITowns > 0) && (eXpochClientDMSRandomAISpawned <= _maxRandomAITowns))then
			{
				if(_inVehicle)then
				{
					//send helicopter encounter
				};
				if(count(units(group player)) > 3)then
				{
					//send vehicle
				};
				[player,"Towns",_targetPosition,_maxRandomAITowns] remoteExec ["eXpochServer_object_dmsai_spawnOnPlayer",2];
			};
			_handled = true;
		};
	};
	
	if!(_handled)then
	{
		_maxRandomAIWilderness  = getNumber(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "PlayerMaxRandomAIInWilderness");
		if((_maxRandomAIWilderness > 0) && (eXpochClientDMSRandomAISpawned <= _maxRandomAIWilderness))then
		{
			[player,"Wilderness",_targetPosition,_maxRandomAIWilderness] remoteExec ["eXpochServer_object_dmsai_spawnOnPlayer",2];
		};
	};
};
if!(eXpochClientDMSRandomAIArray isEqualTo [])then
{
	{
		_zombie = _x select 0;
		_spawnedAt = _x select 1;
		if((isNull _zombie) || !(alive _zombie))then
		{
			eXpochClientDMSRandomAIArray = eXpochClientDMSRandomAIArray - [_x];
			eXpochClientZombiesSpawned = count(eXpochClientDMSRandomAIArray);
		};
	}forEach eXpochClientDMSRandomAIArray;
};	
	