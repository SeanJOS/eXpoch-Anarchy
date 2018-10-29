/**
 * ExileClient_object_player_network_loadPlayerResponse
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
 
private["_playerNetID", "_scoreString", "_kills", "_deaths", "_hunger", "_thirst", "_alcohol", "_clanData", "_temperature", "_wetness", "_player"];
_playerNetID = _this select 0;
_scoreString = _this select 1;
_kills = _this select 2;
_deaths = _this select 3;
_hunger = _this select 4;
_thirst = _this select 5;
_alcohol = _this select 6;
_clanData = _this select 7;
_temperature = _this select 8;
_wetness = _this select 9;
/* eXpoch New Addition */
_zedInfection = _this select 10;
_blood = _this select 11;
_timeAlive = _this select 12;
_loadAceStats = _this select 13;
_loadAccountStats = _this select 14;

_player = objectFromNetId _playerNetID;
_player call ExileClient_object_player_initialize;
ExileClientPlayerAttributes = 
[
	(1 - damage player) * 100, 
	(1 - getFatigue player) * 100, 
	_hunger, 
	_thirst, 
	_alcohol, 
	_temperature, 
	_wetness 
];
ExileClientPlayerAttributesASecondAgo = 
[
	ExileClientPlayerAttributes select 0,
	ExileClientPlayerAttributes select 1,
	ExileClientPlayerAttributes select 2,
	ExileClientPlayerAttributes select 3,
	ExileClientPlayerAttributes select 4,
	ExileClientPlayerAttributes select 5,
	ExileClientPlayerAttributes select 6
];
ExileClientPlayerIsSpawned = true;
call ExileClient_object_player_initStamina;
call ExileClient_system_rating_balance;
ExileClientPlayerScore = parseNumber _scoreString;
ExileClientPlayerKills = _kills;
ExileClientPlayerDeaths = _deaths;
/* eXpoch New Addition */
_player setVariable ["ryanzombiesinfected", _zedInfection, true];
if(_zedInfection > 0)then
{
	player execVM "\eXpoch_multifix\infected_player.sqf";
};

/* eXpoch New Addition */
_loadAccountStatsArray = _loadAccountStats select 0;
ExileClientPlayerHeroKills = _loadAccountStatsArray select 5;
ExileClientPlayerBanditKills = _loadAccountStatsArray select 6;
ExileClientPlayerZedKills = _loadAccountStatsArray select 7;
ExileClientPlayerAIKills = _loadAccountStatsArray select 8;
ExileClientPlayerHeroAIKills = _loadAccountStatsArray select 9;
ExileClientPlayerBanditAIKills = _loadAccountStatsArray select 10;
ExileClientPlayerHeals = _loadAccountStatsArray select 11;
ExileClientPlayerRevives = _loadAccountStatsArray select 12;
ExileClientPlayerBlood = _blood;
ExileClientPlayerTimeAlive = _timeAlive;
ExileClientPlayerDMS = _loadAccountStatsArray select 13;
ExileClientPlayerZCP = _loadAccountStatsArray select 14;
ExileClientPlayerVEMF = _loadAccountStatsArray select 15;
ExileClientPlayerType = _loadAccountStatsArray select 16;
ExileClientPlayerTotalTimePlayed = _loadAccountStatsArray select 17;

_player setVariable ["eXpochClientPlayerInCustomization",false,true];
_player setVariable ["eXpochZombieFood",false,true];
eXpochClientPlayerRank = [ExileClientPlayerScore] call eXpochClient_util_player_recalculateRank;
_player setVariable ["eXpochClientPlayerRank",eXpochClientPlayerRank,true];
_player call ace_medical_fnc_init;

//ace persistance
//basic
_loadAceStatsArray = _loadAceStats select 0;
_aceBasic = _loadAceStatsArray select 1;
_player setVariable ["Ace_medical_pain", _aceBasic select 0,true];
_player setVariable ["Ace_medical_morphine", _aceBasic select 1,true];
_player setVariable ["Ace_medical_bloodVolume", _aceBasic select 2,true];
_player setVariable ["ACE_isUnconscious", _aceBasic select 3,true];

//advanced
_aceAdv1 = _loadAceStatsArray select 2;
_player setVariable ["Ace_medical_tourniquets", _aceAdv1 select 0,true];
if!(_aceAdv1 isEqualTo -1)then{_player setVariable ["Ace_medical_occludedMedications", _aceAdv1 select 1,true];};

//Wounds
_aceAdv2Wounds = _loadAceStatsArray select 3;
_player setVariable ["Ace_medical_openWounds", _aceAdv2Wounds select 0,true];
_player setVariable ["Ace_medical_bandagedWounds", _aceAdv2Wounds select 1,true];
_player setVariable ["Ace_medical_internalWounds", _aceAdv2Wounds select 2,true];
_player setVariable ["Ace_medical_lastUniqueWoundID", _aceAdv2Wounds select 3,true];

//Vitals
_aceAdv3Vitals = _loadAceStatsArray select 4;
if(ANARCHYDEBUG)then{diag_log format["[Anarchy spawnMenu] _aceAdv3Vitals:%1",_aceAdv3Vitals];};
_player setVariable ["Ace_medical_heartRate", _aceAdv3Vitals select 0,true];
_player setVariable ["Ace_medical_heartRateAdjustments", _aceAdv3Vitals select 1,true];
_player setVariable ["Ace_medical_bloodPressure", _aceAdv3Vitals select 2,true];
_player setVariable ["Ace_medical_peripheralResistance", _aceAdv3Vitals select 3,true];

//Fractures
_aceAdv4Fractures = _loadAceStatsArray select 5;
if(ANARCHYDEBUG)then{diag_log format["[Anarchy spawnMenu] _aceAdv4Fractures:%1",_aceAdv4Fractures];};
_player setVariable ["Ace_medical_fractures", _aceAdv4Fractures,true];

//Triage
_aceAdv5Triage = _loadAceStatsArray select 6;
if(ANARCHYDEBUG)then{diag_log format["[Anarchy spawnMenu] _aceAdv5Triage:%1",_aceAdv5Triage];};
_player setVariable ["Ace_medical_triageLevel", _aceAdv5Triage select 0,true];
_player setVariable ["Ace_medical_triageCard", _aceAdv5Triage select 1,true];

//IVs
_aceAdv6IVs = _loadAceStatsArray select 7;
if(ANARCHYDEBUG)then{diag_log format["[Anarchy spawnMenu] _aceAdv6IVs:%1",_aceAdv6IVs];};
_player setVariable ["Ace_medical_salineIVVolume", _aceAdv6IVs select 0,true];
_player setVariable ["Ace_medical_plasmaIVVolume", _aceAdv6IVs select 1,true];
_player setVariable ["Ace_medical_bloodIVVolume", _aceAdv6IVs select 2,true];

//BodyParts
_aceAdv7BodyParts = _loadAceStatsArray select 8;
if(ANARCHYDEBUG)then{diag_log format["[Anarchy spawnMenu] _aceAdv7BodyParts:%1",_aceAdv7BodyParts];};
_player setVariable ["Ace_medical_bodyPartStatus", _aceAdv7BodyParts,true];

//Airway
_aceAdv8Airway = _loadAceStatsArray select 9;
if(ANARCHYDEBUG)then{diag_log format["[Anarchy spawnMenu] _aceAdv8Airway:%1",_aceAdv8Airway];};
_player setVariable ["Ace_medical_airwayStatus", _aceAdv8Airway select 0,true];
_player setVariable ["Ace_medical_airwayOccluded", _aceAdv8Airway select 1,true];
_player setVariable ["Ace_medical_airwayCollapsed", _aceAdv8Airway select 2,true];
//General Medical Admin
_aceGeneralMedAd = _loadAceStatsArray select 10;
if(ANARCHYDEBUG)then{diag_log format["[Anarchy spawnMenu] _aceGeneralMedAd:%1",_aceGeneralMedAd];};
_player setVariable ["Ace_medical_addedToUnitLoop", _aceGeneralMedAd select 0,true];
_player setVariable ["Ace_medical_inCardiacArrest", _aceGeneralMedAd select 1,true];
_player setVariable ["Ace_medical_hasLostBlood", _aceGeneralMedAd select 2,true];
_player setVariable ["Ace_medical_isBleeding", _aceGeneralMedAd select 3,true];
_player setVariable ["Ace_medical_hasPain", _aceGeneralMedAd select 4,true];
_player setVariable ["Ace_medical_amountOfReviveLives", _aceGeneralMedAd select 5,true];
_player setVariable ["Ace_medical_painSuppress", _aceGeneralMedAd select 6,true];

_aceGeneralLogs = _loadAceStatsArray select 11;
if(ANARCHYDEBUG)then{diag_log format["[Anarchy spawnMenu] _aceGeneralLogs:%1",_aceGeneralLogs];};
_player setVariable ["Ace_medical_allUsedMedication", _aceGeneralLogs select 0,true];
_player setVariable ["Ace_medical_allLogs", _aceGeneralLogs select 1,true];

//turn zombies on since you are loaded in without touching spawn customization screen
_player setVariable ["eXpochClientPlayerInCustomization",false,true];

_clanData call ExileClient_system_clan_network_updateClanInfoFull;
if!(_clanData isEqualTo [])then
{
	if!(isNull (_clanData select 5))then
	{
		ExileClientPartyID = netid (_clanData select 5);
	};
};
ExileClientPlayerIsBambi = false;
ExileClientPlayerBambiStateExpiresAt = 0;
if !(ExileClientPartyID isEqualTo -1) then
{
	[player] joinSilent (groupFromNetId ExileClientPartyID);
};
false call ExileClient_gui_hud_showSurvivalInfo;
true