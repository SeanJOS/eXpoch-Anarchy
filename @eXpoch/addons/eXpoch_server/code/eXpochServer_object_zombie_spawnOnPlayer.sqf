/*
	eXpochServer_object_zombie_spawnOnPlayer

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_reqPlayer","_locationType","_targetPosition","_maxZeds","_playerZeds","_countZeds","_sum","_adjZedArray","_adjClass","_zombieCategoriesArray","_maxValue","_pressYourLuck","_zedCategory","_zombieClassArray","_zombieClass","_direction","_distance","_minimum","_startPosition","_adjVests","_vest","_adjLoot","_loot","_zombie","_playerZeds","_spawnedAt"];
_reqPlayer = _this select 0;
if(isNull _reqPlayer)exitWith{};
_locationType = _this select 1;
if(isNil {_locationType})then{_locationType = "Wilderness";};
_targetPosition = _this select 2;
if(isNil {_targetPosition})then{_targetPosition = position _reqPlayer;};
_maxZeds = _this select 3;
if(isNil {eXpochSpawnedZombies}) then {eXpochSpawnedZombies = [];};
if(isNil {eXpochZombiesForDeletion}) then {eXpochZombiesForDeletion = [];};
_playerZeds = _reqPlayer getVariable["eXpochSpawnedZombies",[]];
_countZeds = count(_playerZeds);
if(!(isNull _reqPlayer) && (alive _reqPlayer) && (_countZeds < _maxZeds))then
{
	_sum = 0;
	_adjZedArray = [];
	_adjClass = "ZombieClasses" + _locationType;
	_zombieCategoriesArray = getArray(missionConfigFile >> "CfgeXpochZombies" >> _adjClass);
	{
		_sum = _sum + (_x select 1);
	}forEach _zombieCategoriesArray;
	_maxValue = _sum;
	_pressYourLuck = ceil random (_maxValue);
	{
		if((_x select 1) >= _pressYourLuck)then
		{
			_adjZedArray pushBack (_x select 0);
		};
	}forEach _zombieCategoriesArray;
	if!(_adjZedArray isEqualTo [])then
	{
		_zedCategory = selectRandom(_adjZedArray);
		_zombieClassArray = getArray(missionConfigFile >> "CfgeXpochZombies" >> _zedCategory);
		_zombieClass = selectRandom(_zombieClassArray);
		_direction = floor(random 360);
		_distance = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "MaxSpawnDistanceFromPlayer");
		_minimum = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "MinSpawnDistanceFromPlayer");
		_distance = floor(random _distance) max _minimum;
		_startPosition = 
		[
			(_targetPosition select 0) + (sin _direction) * _distance,
			(_targetPosition select 1) + (cos _direction) * _distance,
			0 
		];
		_group = _reqPlayer getVariable["eXpochEventGroup",grpNull];
		if(isNull _group)then
		{
			_group = createGroup CIVILIAN;
			_reqPlayer setVariable["eXpochEventGroup",_group,true];
		};
		_adjVests = "Vests" + _locationType;
		_vest = selectRandom(getArray(missionConfigFile >> "CfgeXpochZombies" >> _adjVests));
		_adjLoot = "Loot" + _locationType;
		_loot = selectRandom(getArray(missionConfigFile >> "CfgeXpochZombies" >> _adjLoot));
		
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
		_zombie setVariable["eXpochZombieLocationType",_locationType];
		_zombie setVariable ["cba_xeh_isprocessed", true];
		_zombie switchmove "AmovPercMstpSnonWnonDnon_SaluteOut";
		[_zombie,_group,_reqPlayer] execVM "\eXpoch_multifix\zombie.sqf";
		_playerZeds pushBack [_zombie,diag_tickTime];
		eXpochSpawnedZombies pushBack [_zombie,diag_tickTime];
		_reqPlayer setVariable["eXpochSpawnedZombies",_playerZeds];
		[_zombie,_group,_playerZeds] remoteExecCall ["eXpochClient_object_zombie_offloadingInit",_reqPlayer];
	};
};
_playerZeds = _reqPlayer getVariable["eXpochSpawnedZombies",[]];
if!(_playerZeds isEqualTo [])then
{
	{
		_zombie = _x select 0;
		_spawnedAt = _x select 1;
		if((isNull _zombie) || !(alive _zombie))then
		{
			eXpochSpawnedZombies = eXpochSpawnedZombies - [_x];
			_playerZeds = _playerZeds - [_x];
			_reqPlayer setVariable["eXpochSpawnedZombies",_playerZeds];
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