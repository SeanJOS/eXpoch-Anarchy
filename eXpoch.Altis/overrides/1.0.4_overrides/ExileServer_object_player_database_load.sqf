/**
 * ExileServer_object_player_database_load
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
 
private["_data", "_oldPlayerObject", "_playerUID", "_sessionID", "_position", "_direction", "_player", "_clanID", "_clanName", "_clanData", "_clanGroup", "_devFriendlyMode", "_devs", "_headgear", "_goggles", "_binocular", "_primaryWeapon", "_handgunWeapon", "_secondaryWeapon", "_currentWeapon", "_uniform", "_vest", "_backpack", "_uniformContainer", "_vestContainer", "_backpackContainer", "_assignedItems", "_respect", "_rankMult", "_adjRespect", "_rank"];
_data = _this select 0;
_oldPlayerObject = _this select 1;
_playerUID = _this select 2;
_sessionID = _this select 3;
/* eXpoch New Addition */
_loadAceStats = _this select 4;
_loadAccountStats = _this select 5;

_name = name _oldPlayerObject;
_position = [_data select 11, _data select 12, _data select 13];
_direction = _data select 10;
/* eXpoch New Addition */
_gender = _data select 57;
_group = (createGroup independent);
if!(_gender isEqualTo 1)then
{
	_player = _group createUnit ["eXpoch_Female_Prisoner_F", _position, [], 0, "CAN_COLLIDE"];
}
else
{
	_player = _group createUnit ["Exile_Unit_Player", _position, [], 0, "CAN_COLLIDE"];
};

_player setDir _direction;
_player setPosATL _position;
_player disableAI "FSM";
_player disableAI "MOVE";
_player disableAI "AUTOTARGET";
_player disableAI "TARGET";
_player disableAI "CHECKVISIBLE";
_clanID = (_data select 42);
_clanName = (_data select 43);
if !((typeName _clanID) isEqualTo "SCALAR") then
{
	_clanID = -1;
	_clanData = [];
}
else
{
	_clanData = missionnamespace getVariable [format ["ExileServer_clan_%1",_clanID],[]];
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
	[_player] joinSilent _clanGroup;
};
_player setDamage (_data select 3);
_player setName _name;
_player setVariable ["ExileMoney", (_data select 38), true];
_player setVariable ["ExileScore", (_data select 39)];
_player setVariable ["ExileKills", (_data select 40)];
_player setVariable ["ExileDeaths", (_data select 41)];
_player setVariable ["ExileClanID", _clanID];
_player setVariable ["ExileClanData", _clanData];
_player setVariable ["ExileName", _name]; 
_player setVariable ["ExileOwnerUID", _playerUID]; 
_player setVariable ["ExileDatabaseID", _data select 0];
_player setVariable ["ExileHunger", _data select 4];
_player setVariable ["ExileThirst", _data select 5];
_player setVariable ["ExileAlcohol", _data select 6]; 
_player setVariable ["ExileTemperature", _data select 44]; 
_player setVariable ["ExileWetness", _data select 45]; 
_player setVariable ["ExileIsBambi", false];
_player setVariable ["ExileXM8IsOnline", false, true];
_player setOxygenRemaining (_data select 7);
_player setBleedingRemaining (_data select 8);
_player setVariable ["ExileLocker", (_data select 46), true];
/* eXpoch New Addition */
_player setVariable ["ExileHeroKills", (_loadAccountStats select 5), true];
_player setVariable ["ExileBanditKills", (_loadAccountStats select 6), true];
_player setVariable ["ExileZedKills", (_loadAccountStats select 7), true];
_player setVariable ["ryanzombiesinfected", (_data select 48), true];
if((_data select 48) > 0)then
{
	[_player,side _group, ""] execVM "\eXpoch_multifix\persistentInfection.sqf";
};
_player setVariable ["ExileAIKills", (_loadAccountStats select 8), true];
_player setVariable ["ExileHeroAIKills", (_loadAccountStats select 9), true];
_player setVariable ["ExileBanditAIKills", (_loadAccountStats select 10), true];
_player setVariable ["ExileHeals", (_loadAccountStats select 11), true];
_player setVariable ["ExileRevives", (_loadAccountStats select 12), true];
_player setVariable ["ExileBlood", (_data select 52), true];
_player setVariable ["ExileTimeAlive", (_data select 53), true];
_player setVariable ["ExileTimeAliveLastCheck", diag_tickTime,true];
_player setVariable ["ExileDMS", (_loadAccountStats select 13), true];
_player setVariable ["ExileZCP", (_loadAccountStats select 14), true];
_player setVariable ["ExileVEMF", (_loadAccountStats select 15), true];
_player setVariable ["ExileTotalTimePlayed", (_accountData select 17), true];

_rank = [_accountData select 0] call eXpochClient_util_player_recalculateRank;
_player setVariable ["ExileRank", _rank, true];
_player setVariable ["eXpochZombieFood",false,true];

//ace persistance
//basic
_aceBasic = _loadAceStats select 1;
_player setVariable ["Ace_medical_pain", _aceBasic select 0,true];
_player setVariable ["Ace_medical_morphine", _aceBasic select 1,true];
_player setVariable ["Ace_medical_bloodVolume", _aceBasic select 2,true];
_player setVariable ["ACE_isUnconscious", _aceBasic select 3,true];
diag_log format["Anarchy spawnmenu load acebasic %1",_aceBasic];

//advanced
_aceAdv1 = _loadAceStats select 2;
_player setVariable ["Ace_medical_tourniquets", _aceAdv1 select 0,true];
if!(_aceAdv1 isEqualTo -1)then{_player setVariable ["Ace_medical_occludedMedications", _aceAdv1 select 1,true];};

//Wounds
_aceAdv2Wounds = _loadAceStats select 3;
_player setVariable ["Ace_medical_openWounds", _aceAdv2Wounds select 0,true];
_player setVariable ["Ace_medical_bandagedWounds", _aceAdv2Wounds select 1,true];
_player setVariable ["Ace_medical_internalWounds", _aceAdv2Wounds select 2,true];
_player setVariable ["Ace_medical_lastUniqueWoundID", _aceAdv2Wounds select 3,true];

//Vitals
_aceAdv3Vitals = _loadAceStats select 4;
if(ANARCHYDEBUG)then{diag_log format["[Anarchy spawnMenu] _aceAdv3Vitals:%1",_aceAdv3Vitals];};
_player setVariable ["Ace_medical_heartRate", _aceAdv3Vitals select 0,true];
_player setVariable ["Ace_medical_heartRateAdjustments", _aceAdv3Vitals select 1,true];
_player setVariable ["Ace_medical_bloodPressure", _aceAdv3Vitals select 2,true];
_player setVariable ["Ace_medical_peripheralResistance", _aceAdv3Vitals select 3,true];

//Fractures
_aceAdv4Fractures = _loadAceStats select 5;
if(ANARCHYDEBUG)then{diag_log format["[Anarchy spawnMenu] _aceAdv4Fractures:%1",_aceAdv4Fractures];};
_player setVariable ["Ace_medical_fractures", _aceAdv4Fractures,true];

//Triage
_aceAdv5Triage = _loadAceStats select 6;
if(ANARCHYDEBUG)then{diag_log format["[Anarchy spawnMenu] _aceAdv5Triage:%1",_aceAdv5Triage];};
_player setVariable ["Ace_medical_triageLevel", _aceAdv5Triage select 0,true];
_player setVariable ["Ace_medical_triageCard", _aceAdv5Triage select 1,true];

//IVs
_aceAdv6IVs = _loadAceStats select 7;
if(ANARCHYDEBUG)then{diag_log format["[Anarchy spawnMenu] _aceAdv6IVs:%1",_aceAdv6IVs];};
_player setVariable ["Ace_medical_salineIVVolume", _aceAdv6IVs select 0,true];
_player setVariable ["Ace_medical_plasmaIVVolume", _aceAdv6IVs select 1,true];
_player setVariable ["Ace_medical_bloodIVVolume", _aceAdv6IVs select 2,true];

//BodyParts
_aceAdv7BodyParts = _loadAceStats select 8;
if(ANARCHYDEBUG)then{diag_log format["[Anarchy spawnMenu] _aceAdv7BodyParts:%1",_aceAdv7BodyParts];};
_player setVariable ["Ace_medical_bodyPartStatus", _aceAdv7BodyParts,true];

//Airway
_aceAdv8Airway = _loadAceStats select 9;
if(ANARCHYDEBUG)then{diag_log format["[Anarchy spawnMenu] _aceAdv8Airway:%1",_aceAdv8Airway];};
_player setVariable ["Ace_medical_airwayStatus", _aceAdv8Airway select 0,true];
_player setVariable ["Ace_medical_airwayOccluded", _aceAdv8Airway select 1,true];
_player setVariable ["Ace_medical_airwayCollapsed", _aceAdv8Airway select 2,true];
//General Medical Admin
_aceGeneralMedAd = _loadAceStats select 10;
if(ANARCHYDEBUG)then{diag_log format["[Anarchy spawnMenu] _aceGeneralMedAd:%1",_aceGeneralMedAd];};
_player setVariable ["Ace_medical_addedToUnitLoop", _aceGeneralMedAd select 0,true];
_player setVariable ["Ace_medical_inCardiacArrest", _aceGeneralMedAd select 1,true];
_player setVariable ["Ace_medical_hasLostBlood", _aceGeneralMedAd select 2,true];
_player setVariable ["Ace_medical_isBleeding", _aceGeneralMedAd select 3,true];
_player setVariable ["Ace_medical_hasPain", _aceGeneralMedAd select 4,true];
_player setVariable ["Ace_medical_amountOfReviveLives", _aceGeneralMedAd select 5,true];
_player setVariable ["Ace_medical_painSuppress", _aceGeneralMedAd select 6,true];

_aceGeneralLogs = _loadAceStats select 11;
if(ANARCHYDEBUG)then{diag_log format["[Anarchy spawnMenu] _aceGeneralLogs:%1",_aceGeneralLogs];};
_player setVariable ["Ace_medical_allUsedMedication", _aceGeneralLogs select 0,true];
_player setVariable ["Ace_medical_allLogs", _aceGeneralLogs select 1,true];
_player call ace_medical_fnc_init;

[_player, _data select 9] call ExileClient_util_player_applyHitPointMap;
_devFriendlyMode = getNumber (configFile >> "CfgSettings" >> "ServerSettings" >> "devFriendyMode");
if (_devFriendlyMode isEqualTo 1) then 
{
	_devs = getArray (configFile >> "CfgSettings" >> "ServerSettings" >> "devs");
	{
		if (_playerUID isEqualTo (_x select 0)) exitWith 
		{
			if (_name isEqualTo (_x select 1)) then
			{
				_player setVariable ["ExileMoney", 500000, true];
				_player setVariable ["ExileScore", 100000];
			};
		};
	}
	forEach _devs;
};
_player call ExileClient_util_playerCargo_clear;
_headgear = _data select 23;
if (_headgear != "") then
{
	_player addHeadgear _headgear;
};
_goggles = _data select 20;
if (_goggles != "") then
{
	_player addGoggles _goggles;
};
_binocular = _data select 24;
if (_binocular != "") then
{
	_player addWeapon _binocular;
};
_primaryWeapon = _data select 26;
if (_primaryWeapon != "") then 
{
	_player addWeapon _primaryWeapon;
	//removeAllPrimaryWeaponItems _player;
	{ 
		if (_x != "") then
		{
			_player addPrimaryWeaponItem _x; 
		};
	} 
	forEach (_data select 27);
};
_handgunWeapon = _data select 22;
if (_handgunWeapon != "") then
{
	_player addWeapon _handgunWeapon;
	removeAllHandgunItems _player;
	{ 
		if (_x != "") then
		{
			_player addHandgunItem _x; 
		};
	} 
	forEach (_data select 21);
};
_secondaryWeapon = _data select 28;
if (_secondaryWeapon != "") then
{
	_player addWeapon _secondaryWeapon;
	{ 
		if (_x != "") then
		{
			_player addSecondaryWeaponItem _x; 
		};
	} 
	forEach (_data select 29);
};
 _currentWeapon = _data select 19;
if (_currentWeapon != "") then
{
	 _player selectWeapon _currentWeapon;
};
{ 
	_player addWeaponItem [_x select 0, [_x select 1, _x select 2, _x select 3]];
} 
forEach (_data select 25);
_uniform = _data select 30;
_vest = _data select 34;
_backpack = _data select 15;
if (_uniform != "") then 
{
	_player forceAddUniform _uniform;
};
if (_vest != "") then
{
	_player addVest _vest;
};
if (_backpack != "") then
{
	_player addBackpackGlobal _backpack;
};
_uniformContainer = uniformContainer _player;
if !(isNil "_uniformContainer") then
{
	{ 
		_uniformContainer addWeaponCargoGlobal _x; 
	} 
	forEach (_data select 33);
	{ 
		_uniformContainer addMagazineAmmoCargo [_x select 0, 1, _x select 1]; 
	} 
	forEach (_data select 32);
	{ 
		_uniformContainer addItemCargoGlobal _x; 
	} 
	forEach (_data select 31);
};
_vestContainer = vestContainer _player;
if !(isNil "_vestContainer") then
{
	{ 
		_vestContainer addWeaponCargoGlobal _x; 
	} 
	forEach (_data select 37);
	{ 
		_vestContainer addMagazineAmmoCargo [_x select 0, 1, _x select 1]; 
	} 
	forEach (_data select 36);
	{ 
		_vestContainer addItemCargoGlobal _x; 
	} 
	forEach (_data select 35);
};
_backpackContainer = backpackContainer _player;
if !(isNil "_backpackContainer") then
{
	{ 
		_backpackContainer addWeaponCargoGlobal _x; 
	} 
	forEach (_data select 18);
	{ 
		_backpackContainer addMagazineAmmoCargo [_x select 0, 1, _x select 1]; 
	} 
	forEach (_data select 17);
	{ 
		_backpackContainer addItemCargoGlobal _x; 
	} 
	forEach (_data select 16);
};
_assignedItems = _data select 14;
if !(_assignedItems isEqualTo []) then
{
	{
		_player linkItem _x;
	}
	forEach _assignedItems;
};
_player addMPEventHandler ["MPKilled", {_this call ExileServer_object_player_event_onMpKilled}];
/* eXpoch New Addition */
/*
_player addMPEventHandler ["MPHit",'if (isServer) then 
	{
		_unit = _this select 0;
		_hitby = _this select 1;
		_unit setVariable["eXpochDMS_LastHitBy",_hitby];
		diag_log format["eXpoch DEBUG: MPHit _unit:%1 _hitby:%2",_unit,_hitby];
		true
	};'];
*/
if (getNumber (configFile >> "CfgSettings" >> "VehicleSpawn" >> "thermalVision") isEqualTo 0) then 
{
	_player addEventHandler ["WeaponAssembled", {(_this select 1) disableTIEquipment true;}];
};
if (getNumber(missionConfigFile >> "CfgSimulation" >> "enableDynamicSimulation") isEqualTo 1) then 
{
	if ((canTriggerDynamicSimulation _player) isEqualTo false) then
	{
		_player triggerDynamicSimulation true;
	  	_player enableDynamicSimulation true;
	};
};
[
	_sessionID, 
	"loadPlayerResponse", 
	[
		(netId _player),
		str (_player getVariable ["ExileScore", 0]),
		(_player getVariable ["ExileKills", 0]),
		(_player getVariable ["ExileDeaths", 0]),
		(_player getVariable ["ExileHunger", 100]),
		(_player getVariable ["ExileThirst", 100]),
		(_player getVariable ["ExileAlcohol", 0]),
		(_player getVariable ["ExileClanData", []]),
		(_player getVariable ["ExileTemperature", 0]),
		(_player getVariable ["ExileWetness", 0])
	]
] 
call ExileServer_system_network_send_to;
[_sessionID, _player] call ExileServer_system_session_update;
true