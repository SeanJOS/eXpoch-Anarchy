/**
 * ExileServer_object_player_database_update
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_player","_playerID","_playerPos","_data","_extDB2Message","_lastAliveCheck","_addTime","_timeAlive","_totalTimeAlive"];
_player = _this;
_playerID = _player getVariable["ExileDatabaseID", -1];

_lastAliveCheck = _player getVariable ["ExileTimeAliveLastCheck", 0];
_addTime = diag_tickTime - _lastAliveCheck;
_timeAlive = _player getVariable ["ExileTimeAlive", 0];
_totalTimeAlive = _timeAlive + _addTime;
_player setVariable ["ExileTimeAlive",_totalTimeAlive,true];
ExileClientPlayerTimeAlive = _totalTimeAlive;
(owner _player) publicVariableClient "ExileClientPlayerTimeAlive";
ExileClientPlayerTimeAlive = nil;
_player setVariable ["ExileTimeAliveLastCheck", diag_tickTime,true];
_playerPos = getPosATL _player;
_data = 
[
	_player getVariable ["ExileName",""],
	damage _player,
	_player getVariable ["ExileHunger", 100],
	_player getVariable ["ExileThirst", 100],
	_player getVariable ["ExileAlcohol", 0],
	getOxygenRemaining _player,
	getBleedingRemaining _player,
	_player call ExileClient_util_player_getHitPointMap,
	getDir _player,
	_playerPos select 0,
	_playerPos select 1,
	_playerPos select 2,
	assignedItems _player,
	backpack _player,
	(getItemCargo backpackContainer _player) call ExileClient_util_cargo_getMap,
	(backpackContainer _player) call ExileClient_util_cargo_getMagazineMap,
	(getWeaponCargo backpackContainer _player) call ExileClient_util_cargo_getMap,
	currentWeapon _player,
	goggles _player,
	handgunItems _player,
	handgunWeapon _player,
	headgear _player,
	binocular _player,
	_player call ExileClient_util_inventory_getLoadedMagazinesMap,
	primaryWeapon _player,
	primaryWeaponItems _player,
	secondaryWeapon _player,
	secondaryWeaponItems _player,
	uniform _player,
	(getItemCargo uniformContainer _player) call ExileClient_util_cargo_getMap,
	(uniformContainer _player) call ExileClient_util_cargo_getMagazineMap,
	(getWeaponCargo uniformContainer _player) call ExileClient_util_cargo_getMap,
	vest _player,
	(getItemCargo vestContainer _player) call ExileClient_util_cargo_getMap,
	(vestContainer _player) call ExileClient_util_cargo_getMagazineMap,
	(getWeaponCargo vestContainer _player) call ExileClient_util_cargo_getMap,
	_player getVariable ["ExileTemperature", 0],
	_player getVariable ["ExileWetness", 0],
	_player getVariable ["ryanzombiesinfected", 0],
	_player getVariable ["ExileBlood", 10000],
	_player getVariable ["ExileTimeAlive", 0],
	_playerID
];
_extDB2Message = ["updatePlayer", _data] call ExileServer_util_extDB2_createMessage;
_extDB2Message call ExileServer_system_database_query_fireAndForget;

_pain = _player getVariable ["Ace_medical_pain", 0];
_morphine = _player getVariable ["Ace_medical_morphine", 0];
_bloodVolume = _player getVariable ["Ace_medical_bloodVolume", 100];
_isUnconscious = _player getVariable ["ACE_isUnconscious", false];

_tourniquets = _player getVariable ["Ace_medical_tourniquets", [0,0,0,0,0,0]];

_occludedMedications = _player getVariable ["Ace_medical_occludedMedications", -1];

_openWounds = _player getVariable ["Ace_medical_openWounds", []];
_bandagedWounds = _player getVariable ["Ace_medical_bandagedWounds", []];
_internalWounds = _player getVariable ["Ace_medical_internalWounds", []];
_lastUniqueWoundID = _player getVariable ["Ace_medical_lastUniqueWoundID", 1];

_heartRate = _player getVariable ["Ace_medical_heartRate", 80];
_heartRateAdjustments = _player getVariable ["Ace_medical_heartRateAdjustments", []];
_bloodPressure = _player getVariable ["Ace_medical_bloodPressure", [80, 120]];
_peripheralResistance = _player getVariable ["Ace_medical_peripheralResistance", 100];

_fractures = _player getVariable ["Ace_medical_fractures", []];

_triageLevel = _player getVariable ["Ace_medical_triageLevel", 0];
_triageCard = _player getVariable ["Ace_medical_triageCard", []];

_salineIVVolume = _player getVariable ["Ace_medical_salineIVVolume", 0];
_plasmaIVVolume = _player getVariable ["Ace_medical_plasmaIVVolume", 0];
_bloodIVVolume = _player getVariable ["Ace_medical_bloodIVVolume", 0];

_bodyPartStatus = _player getVariable ["Ace_medical_bodyPartStatus", [0,0,0,0,0,0]];

_airwayStatus = _player getVariable ["Ace_medical_airwayStatus", 100];
_airwayOccluded = _player getVariable ["Ace_medical_airwayOccluded", false];
_airwayCollapsed = _player getVariable ["Ace_medical_airwayCollapsed", false];

_addedToUnitLoop = _player getVariable ["Ace_medical_addedToUnitLoop", false];
_inCardiacArrest = _player getVariable ["Ace_medical_inCardiacArrest", false];
_hasLostBlood = _player getVariable ["Ace_medical_hasLostBlood", 0];
_isBleeding = _player getVariable ["Ace_medical_isBleeding", false];
_hasPain = _player getVariable ["Ace_medical_hasPain", false];
_amountOfReviveLives = _player getVariable ["Ace_medical_amountOfReviveLives", 1];
_painSuppress = _player getVariable ["Ace_medical_painSuppress", 0];
_allUsedMedication = _player getVariable ["Ace_medical_allUsedMedication", []];
_allLogs = _player getVariable ["Ace_medical_allLogs", []];


_aceBasic = [_pain,_morphine,_bloodVolume,_isUnconscious];
_aceAdv1 = [_tourniquets,_occludedMedications];
_aceAdv2Wounds = [_openWounds,_bandagedWounds,_internalWounds,_lastUniqueWoundID];
_aceAdv3Vitals = [_heartRate,_heartRateAdjustments,_bloodPressure,_peripheralResistance];
_aceAdv4 = _fractures;
_aceAdv5Triage = [_triageLevel,_triageCard];
_aceAdv6IVs = [_salineIVVolume,_plasmaIVVolume,_bloodIVVolume];
_aceAdv7BodyParts = _bodyPartStatus;
_aceAdv8Airway = [_airwayStatus,_airwayOccluded,_airwayCollapsed];
_aceGeneralMedAd = [_addedToUnitLoop,_inCardiacArrest,_hasLostBlood,_isBleeding,_hasPain,_amountOfReviveLives,_painSuppress];
_aceGeneralLogs = [_allUsedMedication,_allLogs];

_aceStats = format["updateAceStats:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10:%11:%12", _aceBasic,_aceAdv1,_aceAdv2Wounds,_aceAdv3Vitals,_aceAdv4,_aceAdv5Triage,_aceAdv6IVs,_aceAdv7BodyParts,_aceAdv8Airway,_aceGeneralMedAd,_aceGeneralLogs,_playerID] call ExileServer_system_database_query_fireAndForget;

true