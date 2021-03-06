/*
	eXpochServer_system_event_zombieSpawn

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
 
private["_targetPlayer","_zombieClass","_direction","_distance","_startPosition","_targetPosition","_zombie","_spawnedAt"];
if(isNil {eXpochSpawnedZombies}) then {eXpochSpawnedZombies = [];};
if(isNil {eXpochZombiesForDeletion}) then {eXpochZombiesForDeletion = [];};

_targetPlayer = selectRandom allPlayers;
if(!(isNull _targetPlayer) && (alive _targetPlayer))then
{
	_targetPosition = 
	[
		(getPos _targetPlayer) select 0, 
		(getPos _targetPlayer) select 1, 
		0
	];
	_safeZone = [_targetPosition,1000] call ExileClient_util_world_isTraderZoneInRange;
	_territory = [_targetPosition,400] call ExileClient_util_world_isTerritoryInRange;
	if(!(_safeZone) && !(_territory))then
	{
		format ["Zombie Horde Spawn for Player %1 near %2...", _targetPlayer,_targetPosition] call ExileServer_util_log;
		
		_hordeMax = ceil(random(getNumber(missionConfigFile >> "CfgeXpochZombies" >> "MaxZedsInHordes"))) max 6;
		for "_i" from 1 to _hordeMax do 
		{
			_sum = 0;
			_adjZedArray = [];
			_zombieCategoriesArray = getArray(missionConfigFile >> "CfgeXpochZombies" >> "ZombieClassesHordes");
			{
				_sum = _sum + (_x select 1);
			}forEach _zombieCategoriesArray;
			_maxValue = _sum;
			_pressYourLuck = ceil random (_maxValue);
			{
				if(_pressYourLuck <= (_x select 1))then
				{
					_adjZedArray pushBack (_x select 0);
				};
			}forEach _zombieCategoriesArray;
			_category = selectRandom(_zombieCategoriesArray);
			_zedCategory = _category select 0;
			if!(_adjZedArray isEqualTo [])then
			{
				if!(count(_adjZedArray) > 1)then
				{
					_zedCategory = _adjZedArray select 0;
				}
				else
				{
					_zedCategory = selectRandom(_adjZedArray);
				};
			};
			_zombieClassArray = getArray(missionConfigFile >> "CfgeXpochZombies" >> _zedCategory);
			_zombieClass = selectRandom(_zombieClassArray);
			
			_direction = floor(random 360);
			_distance = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "MaxSpawnDistanceHordes");
			_minimum = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "MinSpawnDistanceHordes");
			_distance = floor(random _distance) max _minimum;
			_startPosition = 
			[
				(_targetPosition select 0) + (sin _direction) * _distance,
				(_targetPosition select 1) + (cos _direction) * _distance,
				0 
			];
			_group = _targetPlayer getVariable["eXpochEventGroup",grpNull];
			if(isNull _group)then
			{
				_group = createGroup CIVILIAN;
				_targetPlayer setVariable["eXpochEventGroup",_group,true];
			};
			_vest = selectRandom(getArray(missionConfigFile >> "CfgeXpochZombies" >> "VestsHordes"));
			_loot = selectRandom(getArray(missionConfigFile >> "CfgeXpochZombies" >> "LootHordes"));
			diag_log str (_group);
			diag_log str (_zombieClass);
			diag_log str (_startPosition);
			_zombie = _group createUnit[_zombieClass, _startPosition, [], 0, "FORM"];
			_zombie addvest _vest;
			_zombie addItemToVest _loot;
			doStop _zombie;
			_zombie disableAI "FSM";
			_zombie enableAI "ANIM";
			_zombie disableConversation true;
			_zombie triggerDynamicSimulation false;
			_zombie addMPEventHandler ["MPKilled", {_this call eXpochServer_object_zombie_onMPKilled;}];
			_zombie addMPEventHandler ["MPHit", 
			{
				_unit = _this select 0;
				_hitby = _this select 1;
				_unit setVariable["eXpochZeds_LastHitBy",_hitby];
			}];
			_zombie setVariable["eXpochZombieSpawnedAt",diag_tickTime];
			_zombie setVariable["eXpochZombieLocationType","Hordes"];
			_zombie setVariable ["cba_xeh_isprocessed", true];
			_zombie switchmove "AmovPercMstpSnonWnonDnon_SaluteOut";
			[_zombie,_group,_targetPlayer] execVM "\eXpoch_multifix\zombie.sqf";
			_playerZeds = _targetPlayer getVariable["eXpochSpawnedZombies",[]];
			_playerZeds pushBack [_zombie,diag_tickTime];
			eXpochSpawnedZombies pushBack [_zombie,diag_tickTime];
			_targetPlayer setVariable["eXpochSpawnedZombies",_playerZeds];
			[_zombie,_group,_playerZeds] remoteExecCall ["eXpochClient_object_zombie_offloadingInit",_targetPlayer];
		};
	};
};
_playerZeds = _targetPlayer getVariable["eXpochSpawnedZombies",[]];
if!(_playerZeds isEqualTo [])then
{
	{
		_zombie = _x select 0;
		_spawnedAt = _x select 1;
		if((isNull _zombie) || !(alive _zombie))then
		{
			eXpochSpawnedZombies = eXpochSpawnedZombies - [_x];
			_playerZeds = _playerZeds - [_x];
			_targetPlayer setVariable["eXpochSpawnedZombies",_playerZeds];
			eXpochZombiesForDeletion pushBack [_zombie,diag_tickTime+600];
		};
		{
			if(diag_tickTime > ((_x select 1)+600))then
			{
				deleteVehicle (_x select 0);
				eXpochZombiesForDeletion = eXpochZombiesForDeletion - [_x];
			};
		}forEach eXpochZombiesForDeletion;
	}forEach _playerZeds;
};
if!(eXpochSpawnedZombies isEqualTo [])then
{
	{
		_zombie = _x select 0;
		_spawnedAt = _x select 1;
		if((isNull _zombie) || !(alive _zombie))then
		{
			eXpochSpawnedZombies = eXpochSpawnedZombies - [_x];
			eXpochZombiesForDeletion pushBack [_zombie,diag_tickTime+600];
		};
		{
			if(diag_tickTime > ((_x select 1)+600))then
			{
				eXpochZombiesForDeletion = eXpochZombiesForDeletion - [_x];
				deleteVehicle (_x select 0);
			};
		}forEach eXpochZombiesForDeletion;
	}forEach eXpochSpawnedZombies;
};