/**
 * ExileServer_object_player_createBambi
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 * 
 * eXpoch Addon Mod
 * by DirtySanchez of DonkeyPunch Community Gaming
 * DonkeyPunch.INFO or discord.gg/eXpoch
 *
 */
 
private["_sessionID", "_requestingPlayer", "_spawnLocationMarkerName", "_bambiPlayer", "_accountData", "_escapeEnabled", "_direction", "_position", "_spawnAreaPosition", "_spawnAreaRadius", "_clanID", "_clanData", "_clanGroup", "_escapeAccountdata", "_devFriendlyMode", "_devs", "_parachuteNetID", "_spawnType", "_parachuteObject"];
_sessionID = _this select 0;
_requestingPlayer = _this select 1;
_spawnLocationMarkerNameArray = _this select 2;
/* eXpoch New Addition */
_spawnLocationMarkerName = _spawnLocationMarkerNameArray select 0;
_genderSelection = _spawnLocationMarkerNameArray select 1;
_spawnType = _spawnLocationMarkerNameArray select 2;
if!(_genderSelection isEqualTo 1)then
{
	_bambiPlayer = (createGroup independent) createUnit ["eXpoch_Female_Prisoner_F", [0,0,0], [], 0, "CAN_COLLIDE"];
	_pushFemale = format["setFemaleGender:%1", getPlayerUID _requestingPlayer] call ExileServer_system_database_query_selectSingle;
}
else
{
	_bambiPlayer = (createGroup independent) createUnit ["Exile_Unit_Player", [0,0,0], [], 0, "CAN_COLLIDE"];
	_pushMale = format["setMaleGender:%1", getPlayerUID _requestingPlayer] call ExileServer_system_database_query_selectSingle;
};
removeHeadgear _bambiPlayer;
{
	_cargoType = _x call ExileClient_util_cargo_getType;
	switch (_cargoType) do
	{
		case 1: 	{ _bambiPlayer addItem _x; };
		case 2: 	{ _bambiPlayer addWeaponGlobal _x; };
		case 3: 	{ _bambiPlayer addBackpackGlobal _x; };
		case 4:		{ _bambiPlayer linkItem _x; };
		default 					{ _bambiPlayer addItem _x; };
	};
}forEach getArray(configFile >> "CfgSettings" >> "BambiSettings" >> "loadOut");	

//_bambiPlayer = _this select 3;
_accountData = _this select 4;
_escapeEnabled = getNumber(configFile >> "CfgSettings" >> "Escape" >> "enableEscape") isEqualTo 1;
_direction = random 360;
if (_escapeEnabled) then 
{
	_position = getArray(configFile >> "CfgSettings" >> "Escape" >> worldName >> "startingLocation");
	(uniformContainer _bambiPlayer) call ExileClient_util_containerCargo_clear;
	_bambiPlayer linkItem "ItemGPS";
}
else
{
	/* eXpoch New Addition */
	if (_spawnLocationMarkerName isEqualTo "eXpochRandomSpawn") then 
	{
		_direction = 270;
		_position = call ExileClient_util_world_findCoastPosition;
		if ((toLower worldName) isEqualTo "namalsk") then 
		{
			while {(_position distance2D [76.4239, 107.141, 0]) < 100} do 
			{
				_position = call ExileClient_util_world_findCoastPosition;
			};
		};
	}
	else
	{
		if ((count ExileSpawnZoneMarkerPositions) isEqualTo 0) then 
		{
			_position = call ExileClient_util_world_findCoastPosition;
			if ((toLower worldName) isEqualTo "namalsk") then 
			{
				while {(_position distance2D [76.4239, 107.141, 0]) < 100} do 
				{
					_position = call ExileClient_util_world_findCoastPosition;
				};
			};
		}
		else 
		{
			_spawnAreaPosition = getMarkerPos _spawnLocationMarkerName;
			_spawnAreaRadius = getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "spawnZoneRadius");
			_position = [_spawnAreaPosition, _spawnAreaRadius] call ExileClient_util_math_getRandomPositionInCircle;
			while {surfaceIsWater _position} do 
			{
				_position = [_spawnAreaPosition, _spawnAreaRadius] call ExileClient_util_math_getRandomPositionInCircle;
			};
		};
	};
};
_name = name _requestingPlayer;
_clanID = (_accountData select 3);
if !((typeName _clanID) isEqualTo "SCALAR") then
{
	_clanID = -1;
	_clanData = [];
}
else
{
	_clanData = missionNamespace getVariable [format ["ExileServer_clan_%1",_clanID],[]];
	if(isNull (_clanData select 5))then
	{
		_clanGroup = createGroup independent;
		_clanData set [5,_clanGroup];
		_clanGroup setGroupIdGlobal [_clanData select 0];
		missionNameSpace setVariable [format ["ExileServer_clan_%1",_clanID],_clanData];
	}
	else
	{
		_clanGroup = (_clanData select 5);
	};
	[_bambiPlayer] joinSilent _clanGroup;
};
_bambiPlayer setPosATL [_position select 0,_position select 1,0];
_bambiPlayer disableAI "FSM";
_bambiPlayer disableAI "MOVE";
_bambiPlayer disableAI "AUTOTARGET";
_bambiPlayer disableAI "TARGET";
_bambiPlayer disableAI "CHECKVISIBLE";
_bambiPlayer setDir _direction;
_bambiPlayer setName _name;
_bambiPlayer setVariable ["ExileMoney", 0, true]; 
_bambiPlayer setVariable ["ExileScore", (_accountData select 0)];
_bambiPlayer setVariable ["ExileKills", (_accountData select 1)];
_bambiPlayer setVariable ["ExileDeaths", (_accountData select 2)];
_bambiPlayer setVariable ["ExileClanID", _clanID];
_bambiPlayer setVariable ["ExileClanData", _clanData];
_bambiPlayer setVariable ["ExileHunger", 100];
_bambiPlayer setVariable ["ExileThirst", 100];
_bambiPlayer setVariable ["ExileTemperature", 37];
_bambiPlayer setVariable ["ExileWetness", 0];
_bambiPlayer setVariable ["ExileAlcohol", 0]; 
_bambiPlayer setVariable ["ExileName", _name]; 
_bambiPlayer setVariable ["ExileOwnerUID", getPlayerUID _requestingPlayer]; 
_bambiPlayer setVariable ["ExileIsBambi", !_escapeEnabled];
_bambiPlayer setVariable ["ExileXM8IsOnline", false, true];
_bambiPlayer setVariable ["ExileLocker", (_accountData select 4), true];
/* eXpoch New Addition */
_bambiPlayer setVariable ["ExileHeroKills", (_accountData select 5), true];
_bambiPlayer setVariable ["ExileBanditKills", (_accountData select 6), true];
_bambiPlayer setVariable ["ExileZedKills", (_accountData select 7), true];
_bambiPlayer setVariable ["ExileAIKills", (_accountData select 8), true];
_bambiPlayer setVariable ["ExileHeroAIKills", (_accountData select 9), true];
_bambiPlayer setVariable ["ExileBanditAIKills", (_accountData select 10), true];
_bambiPlayer setVariable ["ExileHeals", (_accountData select 11), true];
_bambiPlayer setVariable ["ExileRevives", (_accountData select 12), true];
_bambiPlayer setVariable ["ExileBlood", 10000,true];
_bambiPlayer setVariable ["ExileTimeAlive", 0,true];
_bambiPlayer setVariable ["ExileTimeAliveLastCheck", diag_tickTime,true];
_bambiPlayer setVariable ["ExileDMS", (_accountData select 13), true];
_bambiPlayer setVariable ["ExileZCP", (_accountData select 14), true];
_bambiPlayer setVariable ["ExileVEMF", (_accountData select 15), true];
_bambiPlayer setVariable ["ExileTotalTimePlayed", (_accountData select 17), true];

if (_escapeEnabled) then 
{
	_escapeAccountdata = format["getEscapeAccountStats:%1", getPlayerUID _requestingPlayer] call ExileServer_system_database_query_selectSingle;
	_bambiPlayer setVariable ["ExileWins", (_escapeAccountdata select 0)];
	_bambiPlayer setVariable ["ExileMatches", (_escapeAccountdata select 1)];
};
/* eXpoch New Addition */
_rank = [_accountData select 0] call eXpochClient_util_player_recalculateRank;
_bambiPlayer setVariable ["ExileRank", _rank, true];
_bambiPlayer setVariable ["eXpochZombieFood",false,true];
_bambiPlayer call ace_medical_fnc_init;

_devFriendlyMode = getNumber (configFile >> "CfgSettings" >> "ServerSettings" >> "devFriendyMode");
if (_devFriendlyMode isEqualTo 1) then 
{
	_devs = getArray (configFile >> "CfgSettings" >> "ServerSettings" >> "devs");
	{
		if ((getPlayerUID _requestingPlayer) isEqualTo (_x select 0))exitWith 
		{
			if ((name _requestingPlayer) isEqualTo (_x select 1))then
			{
				_bambiPlayer setVariable ["ExileMoney", 500000, true];
				_bambiPlayer setVariable ["ExileScore", 100000];
			};
		};
	}
	forEach _devs;
};
_parachuteNetID = "";
/* eXpoch New Addition */
if (_spawnType isEqualTo 2) then
{
	_position set [2, getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "parachuteDropHeight")];
	_bambiPlayer addBackpackGlobal "B_Parachute";
	_bambiPlayer setPosATL _position;
	_spawnType = 2;
}	
else
{
	_spawnType = 0;
};

/*
if ((getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "parachuteSpawning")) isEqualTo 1 && {!(_escapeEnabled)}) then
{
	_position set [2, getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "parachuteDropHeight")]; 
	if ((getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "haloJump")) isEqualTo 1) then
	{
		_bambiPlayer addBackpackGlobal "B_Parachute";
		_bambiPlayer setPosATL _position;
		_spawnType = 2;
	}
	else 
	{
		_parachuteObject = createVehicle ["Steerable_Parachute_F", _position, [], 0, "CAN_COLLIDE"];
		_parachuteObject setDir _direction;
		_parachuteObject setPosATL _position;
		_parachuteObject enableSimulationGlobal true;
		_parachuteNetID = netId _parachuteObject;
		_spawnType = 1;
	};
}
else
{
	_spawnType = 0;
};*/
/* eXpoch New Addition */
_genderSelection = _spawnLocationMarkerNameArray select 1;
if!(_genderSelection isEqualTo 1)then{
	clearWeaponCargo _bambiPlayer;
	clearMagazineCargo _bambiPlayer;
	
	_bambiPlayer forceAddUniform "eXpoch_U_Prisoner_uniform";
	_bambiPlayer addVest "V_F41_EPOCH";
	//_bambiPlayer addItem "Exile_Item_PlasticBottleFreshWater";
	//_bambiPlayer addItem "rzinfection_antivirus_pills";
	//_bambiPlayer addItem "FirstAidKit";
	_bambiPlayer addMagazines ["hatchet_swing",1];
	_bambiPlayer addWeapon "Hatchet";
	_bambiPlayer setAmmo [handgunWeapon _bambiPlayer, 120];
}else{
	_bambiPlayer forceAddUniform "eXpoch_U_male_prisoner";
	_bambiPlayer addVest "V_41_EPOCH";
	//_bambiPlayer addItem "Exile_Item_PlasticBottleFreshWater";
	//_bambiPlayer addItem "rzinfection_antivirus_pills";
	//_bambiPlayer addItem "FirstAidKit";
	_bambiPlayer addMagazines ["hatchet_swing",1];
	_bambiPlayer addWeapon "Hatchet";
	_bambiPlayer setAmmo [handgunWeapon _bambiPlayer, 120];
};



if (getNumber(missionConfigFile >> "CfgSimulation" >> "enableDynamicSimulation") isEqualTo 1) then 
{
	if ((canTriggerDynamicSimulation _bambiPlayer) isEqualTo false) then
	{
		_bambiPlayer triggerDynamicSimulation true;
	  	_bambiPlayer enableDynamicSimulation true;
	};
};
/* eXpoch New Addition */
[_bambiPlayer, "SpectatorMode"] call ace_common_fnc_hideUnit;
_bambiPlayer addMPEventHandler ["MPKilled", {_this call ExileServer_object_player_event_onMpKilled}];

_bambiPlayer addMPEventHandler ["MPHit",'if (isServer) then 
	{
		_unit = _this select 0;
		_hitby = _this select 1;
		_unit setVariable["eXpochClient_LastHitBy",_hitby];
		_unit setVariable["eXpochClient_LastHitTime",diag_tickTime];
		true
	};'];

if !(_escapeEnabled) then 
{
	_bambiPlayer call ExileServer_object_player_database_insert;
	_bambiPlayer call ExileServer_object_player_database_update;
};
[
	_sessionID, 
	"createPlayerResponse", 
	[
		_bambiPlayer, 
		_parachuteNetID, 
		str (_accountData select 0),
		(_accountData select 1),
		(_accountData select 2),
		100,
		100,
		0,
		(getNumber (configFile >> "CfgSettings" >> "BambiSettings" >> "protectionDuration")) * 60, 
		_clanData,
		_spawnType,
		_accountData
	]
] 
call ExileServer_system_network_send_to;
if (_escapeEnabled) then 
{
	[
		_sessionID, 
		"escapeVariables", 
		[
			(_escapeAccountdata select 0),
			(_escapeAccountdata select 1)
		]
	] 
	call ExileServer_system_network_send_to;
};
[_sessionID, _bambiPlayer] call ExileServer_system_session_update;
true