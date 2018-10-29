/*
	eXpochServer_object_player_aceMedicalDatabaseUpdate

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
_player = _this select 0;
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
_playerID = _player getVariable ["ExileDatabaseID", -1];
_aceStats = format["updateAceStats:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10:%11:%12", _aceBasic,_aceAdv1,_aceAdv2Wounds,_aceAdv3Vitals,_aceAdv4,_aceAdv5Triage,_aceAdv6IVs,_aceAdv7BodyParts,_aceAdv8Airway,_aceGeneralMedAd,_aceGeneralLogs,_playerID] call ExileServer_system_database_query_fireAndForget;