/*
	eXpochServer_system_event_platoonSpawn

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
 
 private["_targetPlayer","_targetPosition","_safeZone","_territory","_direction","_distance","_minimum","_startPosition","_platoonMin","_platoonMax","_type","_side","_difficulty","_respect","_blackMarketRank","_heroNbanditRank","_platoonCount"];
if(isNil {eXpochSpawnedDMSRandomAI}) then {eXpochSpawnedDMSRandomAI = [];};
if(isNil {eXpochDMSRandomAIForDeletion}) then {eXpochDMSRandomAIForDeletion = [];};

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
		format ["DMSRandomAI Platoon Spawn for Player %1 near %2...", _targetPlayer,_targetPosition] call ExileServer_util_log;
		_direction = floor(random 360);
		_distance = getNumber(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "MaxSpawnDistancePlatoons");
		_minimum = getNumber(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "MinSpawnDistancePlatoons");
		_distance = floor(random _distance) max _minimum;
		_startPosition = 
		[
			(_targetPosition select 0) + (sin _direction) * _distance,
			(_targetPosition select 1) + (cos _direction) * _distance,
			0 
		];
		_platoonMin = getNumber(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "MinAIInPlatoons");
		_platoonMax = getNumber(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "MaxAIInPlatoons");
		_type = getText(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "AITypeInPlatoons");
		_side = "bandit";
		_difficulty = "moderate";
		_respect = _targetPlayer getVariable["ExileScore",0];
		_blackMarketRank = getNumber(missionConfigFile >> "CfgeXpochRank" >> "blackmarketRank");
		_heroNbanditRank = getNumber(missionConfigFile >> "CfgeXpochRank" >> "heroNbanditRank");
		if!(_respect <= 0)then
		{
			_side = "bandit";
			_difficulty = getText(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "HeroLowRankAIDifficulty");
			if(eXpochClientPlayerRank < _blackMarketRank)then
			{
				_difficulty = getText(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "HeroMiddleRankAIDifficulty");
			};
			if(eXpochClientPlayerRank > _heroNbanditRank)then
			{
				_difficulty = getText(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "HeroFullRankAIDifficulty");
			};			
		}
		else
		{
			_side = "hero";
			_difficulty = getText(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "BanditLowRankAIDifficulty");
			if(-(eXpochClientPlayerRank) < _blackMarketRank)then
			{
				_difficulty = getText(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "BanditMiddleRankAIDifficulty");
			};
			if(-(eXpochClientPlayerRank) > _heroNbanditRank)then
			{
				_difficulty = getText(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "BanditFullRankAIDifficulty");
			};
		};
		_platoonCount = _platoonMin + (round (random(_platoonMax - _platoonMin)));
		if(count(units(group player)) <2)then
		{
			_platoonCount = _platoonMin;
		};
		
		[_startPosition, _platoonCount, _difficulty, _type, _side] call DMS_fnc_SpawnAIGroup;
	};
};