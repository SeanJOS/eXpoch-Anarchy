/*
	eXpochServer_object_zombie_onMpKilled

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_unit","_killer","_mpKiller","_playerObj","_roadKilled","_respectChange","_zombieMoney","_killerRespectPoints","_safetoblow","_explode","_locationType","_adjZombieMoney","_adjZombieRespect","_zombieRespect","_roadKillBonus","_cqbDistance","_cqbBonus","_respect","_killMsg","_killMsgRoad","_explosiveZeds","_noxiousGasZeds","_sapperSmoke","_noxiousGasDistance","_players","_noxiousGasDamage","_veh","_unitTypes","_killerType","_boom","_playerType","_distance","_distanceBonus","_zedMoney""_newKillerFrags","_delay"];
_unit           		= _this select 0;
_killer				= _this select 1;
_mpKiller			= _unit getVariable['eXpochZeds_LastHitBy',objNull];

if(isNull _killer)then{_killer = _mpKiller;diag_log format["eXpoch_DEBUG exilez MPKilled- _this:%1",_this];};

_playerObj      		= objNull;
_roadKilled    			= false;
_respectChange  		= 0;
_zombieMoney			= 0;
_killerRespectPoints 	= [];
_safetoblow				= true;
_explode				= false;

_unit addAction["Gut Zombie",{hint "Gutted";}];
_unit addAction["Bury Zombie",{hint "Buried";}];

_locationType = _unit getVariable["eXpochZombieLocationType","Wilderness"];

_adjZombieMoney = "RandomMoneyOnZombie" + _locationType;
_zombieMoney = getNumber(missionConfigFile >> "CfgeXpochZombies" >> _adjZombieMoney);

_adjZombieRespect = "ZombieRespect" + _locationType;
_zombieRespect = getNumber(missionConfigFile >> "CfgeXpochZombies" >> _adjZombieRespect);

_roadKillBonus = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "RoadKillBonus");

_cqbDistance = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "CQBDistance");
_cqbBonus = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "CQBBonus");

_respect = _killer getVariable ["ExileScore", 0];

_killMsg = ["ZOMBIE WACKED","ZOMBIE CLIPPED","ZOMBIE DISABLED","ZOMBIE DISQUALIFIED","ZOMBIE WIPED","ZOMBIE WIPED","ZOMBIE ERASED","ZOMBIE LYNCHED","ZOMBIE WRECKED","ZOMBIE NEUTRALIZED","ZOMBIE SNUFFED","ZOMBIE WASTED","ZOMBIE ZAPPED"] call BIS_fnc_selectRandom;
_killMsgRoad = ["ZOMBIE ROADKILL","ZOMBIE SMASHED","ERMAHGERD ROADKILL","CRUNCH!","BAMMMMM","POW!"] call BIS_fnc_selectRandom;


_explosiveZeds = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "ExplosiveZombies");
if(_explosiveZeds isEqualTo 1) then 
{
	if ((getNumber(missionConfigFile >> "CfgeXpochZombies" >> "ExplosiveZombiesRatio")) > random 100) then
	{	
		if!(_respect <= 0)then
		{
			_killerRespectPoints pushBack [(format ["%1",getText(missionConfigFile >> "CfgeXpochZombies" >> "ExplosiveZombiesWarning")]), getNumber(missionConfigFile >> "CfgeXpochZombies" >> "ExplosiveZombiesRespect")];
		}
		else
		{
			_killerRespectPoints pushBack [(format ["%1",getText(missionConfigFile >> "CfgeXpochZombies" >> "ExplosiveZombiesWarning")]), -(getNumber(missionConfigFile >> "CfgeXpochZombies" >> "ExplosiveZombiesRespect"))];
		};
		_explode = true;
	};
};

if!(_explode)then
{
	_noxiousGasZeds = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "NoxiousGasZombies");
	if(_noxiousGasZeds isEqualTo 1)then
	{
		if ((getNumber(missionConfigFile >> "CfgeXpochZombies" >> "NoxiousGasZombiesRatio")) > random 100) then
		{
			_sapperSmoke = "SmokeShellCustom" createVehicle [(getPosATL _unit) select 0, (getPosATL _unit) select 1, -0.2];
			_sapperSmoke attachTo [_unit,[0,0,-0.4]];
			if!(_respect <= 0)then
			{
				_killerRespectPoints pushBack [(format ["%1",getText(missionConfigFile >> "CfgeXpochZombies" >> "NoxiousGasZombiesWarning")]), getNumber(missionConfigFile >> "CfgeXpochZombies" >> "NoxiousGasZombiesRespect")];
			}
			else
			{
				_killerRespectPoints pushBack [(format ["%1",getText(missionConfigFile >> "CfgeXpochZombies" >> "NoxiousGasZombiesWarning")]), -(getNumber(missionConfigFile >> "CfgeXpochZombies" >> "NoxiousGasZombiesRespect"))];
			};

			_noxiousGasDistance = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "NoxiousGasDistance");
			_players = [];
			_players = nearestObjects[_zombie,["Exile_Unit_Player","eXpoch_Female_Prisoner_F"],_noxiousGasDistance];
			if!(_players isEqualTo [])then
			{
				{
					_noxiousGasDamage = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "NoxiousGasDamageToPlayer");
					[_x,"head",_noxiousGasDamage,"head",_zombie] remoteExecCall ["eXpochClient_object_player_zombieAceDamage",_x];
				}forEach _players;
			};
		};
	};
};

//Roadkill or not
if (isPlayer _killer) then
{
	_veh = vehicle _killer;
	_playerObj = _killer;
	_unitTypes = ["Exile_Unit_Player","eXpoch_Female_Prisoner_F"];
	_killerType = typeOf _killer;
	if (!(_killerType in _unitTypes) && {!isNull (gunner _killer)}) then
	{
			_playerObj = gunner _killer;
	};

	if (!(_veh isEqualTo _killer) && {(driver _veh) isEqualTo _killer}) then
	{
			_playerObj = driver _veh;
			_roadKilled = true;
	};
};

if(!(_explode) && (_roadKilled))then
{
	if (35 > random 100) then
	{
		if!(_respect <= 0)then
		{
			_killerRespectPoints pushBack [(format ["%1",getText(missionConfigFile >> "CfgeXpochZombies" >> "ExplosiveZombiesWarning")]), getNumber(missionConfigFile >> "CfgeXpochZombies" >> "ExplosiveZombiesRespect")];
		}
		else
		{
			_killerRespectPoints pushBack [(format ["%1",getText(missionConfigFile >> "CfgeXpochZombies" >> "ExplosiveZombiesWarning")]), -(getNumber(missionConfigFile >> "CfgeXpochZombies" >> "ExplosiveZombiesRespect"))];
		};
		
		private _boom = createVehicle ["SLAMDirectionalMine_Wire_Ammo", [0,0,100], [], 0, "CAN_COLLIDE"];
		_boom setPosATL (getPosATL _playerObj);
		_boom setDamage 1;
	};
};
	

_unitTypes = ["Exile_Unit_Player","eXpoch_Female_Prisoner_F"];
_playerType = typeOf _playerObj;
if ((!isNull _playerObj) && (alive _playerObj) && {((getPlayerUID _playerObj) != "") && {_playerType in _unitTypes}}) then
{
	//Default
	if!(_respect <= 0)then
	{
		_killerRespectPoints pushBack [(format ["%1",_killMsg]), _zombieRespect];
		if (_roadKilled) then
		{
			_killerRespectPoints pushBack [(format ["%1",_killMsgRoad]), _roadKillBonus];
		}
		else
		//DistanceBonus
		{
			_distance = _unit distance _playerObj;
			if (_distance <= _cqbDistance) then
			{
				_distanceBonus = round((floor ((_cqbDistance + 1) - _distance)) * ( _cqbBonus /_cqbDistance));
				_killerRespectPoints pushBack [(format ["%1m CQB BONUS", (round _distance)]), _distanceBonus];
			};
		};
	}
	else
	{
		_killerRespectPoints pushBack [(format ["%1",_killMsg]), -(_zombieRespect)];
		if (_roadKilled) then
		{
			_killerRespectPoints pushBack [(format ["%1",_killMsgRoad]), -(_roadKillBonus)];
		}
		else
		//DistanceBonus
		{
			_distance = _unit distance _playerObj;
			if (_distance <= _cqbDistance) then
			{
				_distanceBonus = round((floor ((_cqbDistance + 1) - _distance)) * ( _cqbBonus /_cqbDistance));
				_killerRespectPoints pushBack [(format ["%1m CQB BONUS", (round _distance)]), -(_distanceBonus)];
			};
		};
	};
	
	//Set random money on zed
	_zedMoney = random(_zombieMoney);
	_unit setVariable ["ExileMoney", round(_zedMoney), true];
	
	// Calculate killer's respect
	{
		_respectChange = (_respectChange + (_x select 1));
	}
	forEach _killerRespectPoints;
	_respect = _playerObj getVariable ["ExileScore", 0];
	_respect = (_respect + _respectChange);
	[_playerObj, "showFragRequest", [_killerRespectPoints]] call ExileServer_system_network_send_to;
	_playerObj setVariable ["ExileScore", _respect];
	ExileClientPlayerScore = _respect;
	format["setAccountScore:%1:%2", _respect, (getPlayerUID _playerObj)] call ExileServer_system_database_query_fireAndForget;
	(owner _playerObj) publicVariableClient "ExileClientPlayerScore";
	ExileClientPlayerScore = nil;
	
	//Add zed kill stat
	_newKillerFrags = _killer getVariable ["ExileZedKills", 0];
	_newKillerFrags = _newKillerFrags + 1;
	_killer setVariable ["ExileZedKills", _newKillerFrags];
	format["addAccountZombieKill:%1", getPlayerUID _killer] call ExileServer_system_database_query_fireAndForget;
	ExileClientPlayerZedKills = _newKillerFrags;
	(owner _playerObj) publicVariableClient "ExileClientPlayerZedKills";
	ExileClientPlayerZedKills = nil;
};

if(_explode) then 
{
	_safeZone = [(position _unit),800] call ExileClient_util_world_isTraderZoneInRange;	
	if!(_safeZone)then
	{
		_delay = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "ExplosiveZombiesDelay");
		sleep _delay;
		(getText(missionConfigFile >> "CfgeXpochZombies" >> "ExplosiveZombiesType")) createvehicle position _unit;
	};
};
	