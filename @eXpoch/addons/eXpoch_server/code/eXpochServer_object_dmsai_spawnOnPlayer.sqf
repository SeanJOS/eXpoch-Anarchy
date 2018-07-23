/*
	eXpochServer_object_dmsai_spawnOnPlayer

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
if(isNil {eXpochSpawnedDMSRandomAI}) then {eXpochSpawnedDMSRandomAI = [];};
if(isNil {eXpochDMSRandomAIForDeletion}) then {eXpochDMSRandomAIForDeletion = [];};
_playerRandomAI = _reqPlayer getVariable["eXpochSpawnedDMSRandomAI",[]];
_countRandomAI = count(_playerRandomAI);

if(!(isNull _reqPlayer) && (alive _reqPlayer))then
{
	_targetPosition = 
	[
		(getPos _reqPlayer) select 0, 
		(getPos _reqPlayer) select 1, 
		0
	];
	_safeZone = [_targetPosition,1000] call ExileClient_util_world_isTraderZoneInRange;
	if!(_safeZone)then
	{
		format ["DMSRandomAI  Spawn for Player %1 near %2...", _reqPlayer,_targetPosition] call ExileServer_util_log;
		_direction = floor(random 360);
		_distance = getNumber(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "MaxSpawnDistanceFromPlayer");
		_minimum = getNumber(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "MinSpawnDistanceFromPlayer");
		_distance = floor(random _distance) max _minimum;
		_startPosition = 
		[
			(_targetPosition select 0) + (sin _direction) * _distance,
			(_targetPosition select 1) + (cos _direction) * _distance,
			0 
		];
		_adjMin = "PlayerMinRandomAIIn" + _locationType;
		_randomAIMin = getNumber(missionConfigFile >> "CfgeXpochDMSRandomAI" >> _adjMin);
		_adjMax = "PlayerMaxRandomAIIn" + _locationType;
		_randomAIMax = getNumber(missionConfigFile >> "CfgeXpochDMSRandomAI" >> _adjMax);
		_adjType = "AITypeIn" + _locationType;
		_type = getText(missionConfigFile >> "CfgeXpochDMSRandomAI" >> _adjType);
		_side = "bandit";
		_difficulty = "moderate";
		_respect = _reqPlayer getVariable["ExileScore",0];
		_rank = _reqplayer getVariable["ExileRank",0];
		_blackMarketRank = getNumber(missionConfigFile >> "CfgeXpochRank" >> "blackmarketRank");
		_heroNbanditRank = getNumber(missionConfigFile >> "CfgeXpochRank" >> "heroNbanditRank");
		if!(_respect <= 0)then
		{
			_side = "bandit";
			_difficulty = getText(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "HeroLowRankAIDifficulty");
			if(_rank < _blackMarketRank)then
			{
				_difficulty = getText(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "HeroMiddleRankAIDifficulty");
			};
			if(_rank > _heroNbanditRank)then
			{
				_difficulty = getText(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "HeroFullRankAIDifficulty");
			};			
		}
		else
		{
			_side = "hero";
			_difficulty = getText(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "BanditLowRankAIDifficulty");
			if(-(_rank) < _blackMarketRank)then
			{
				_difficulty = getText(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "BanditMiddleRankAIDifficulty");
			};
			if(-(_rank) > _heroNbanditRank)then
			{
				_difficulty = getText(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "BanditFullRankAIDifficulty");
			};
		};
		
		_randomAICount = _randomAIMin + (round (random(_randomAIMax - _randomAIMin)));
		if(count(units(group player)) < 2)then
		{
			_randomAICount = _randomAIMin;
		};
		if(_randomAICount isEqualTo 0)exitWith{};
		[_startPosition, _randomAICount, _difficulty, _type, _side] call DMS_fnc_SpawnAIGroup;
	};
};