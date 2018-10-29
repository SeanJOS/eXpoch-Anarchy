/*
	eXpochServer_object_animal_onMpKilled

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
_countAnimalKill = false;

_victim = _this select 0;
_victimModel = (getModelInfo _victim) select 0;
_split = _victimModel splitString ".";
_deP3D = _split select 0;
_split = _victimModel splitString "_.";
_victimName = _split select 0;

_killer = _this select 1;
_killingPlayer = _killer call ExileServer_util_getFragKiller;
_killerName = name _killingPlayer;

_killSummary = [];
//_killSummary = format["%1 killed a %2 with his %3",_killerName,_victimName];
_oldKillerRespect = 0;
if !(isNull _killingPlayer) then 
{
	_oldKillerRespect = _killingPlayer getVariable ["ExileScore", 0];
};
_respectTransfer = getNumber(missionConfigFile >> "CfgInteractionModels" >> "Animals" >> _deP3D >> "respect");
_newKillerRespect = _oldKillerRespect + _respectTransfer;
_killSummary pushBack ["ANIMAL KILLED", _respectTransfer];

if !(isNull _killingPlayer) then 
{
	if !(_killSummary isEqualTo []) then 
	{	
		[_killingPlayer, "showFragRequest", [_killSummary]] call ExileServer_system_network_send_to;
	};
};

if !(isNull _killingPlayer) then 
{
	_killerStatsNeedUpdate = false;
	if (_countAnimalKill) then
	{
		_newKillerFrags = _killingPlayer getVariable ["ExileAnimalKills", 0];
		_newKillerFrags = _newKillerFrags + 1;
		_killerStatsNeedUpdate = true;
		_killingPlayer setVariable ["ExileAnimalKills", _newKillerFrags];
		format["addAccountAnimalKill:%1", getPlayerUID _killingPlayer] call ExileServer_system_database_query_fireAndForget;
	};
	if !(_newKillerRespect isEqualTo _oldKillerRespect) then 
	{
		_killingPlayer setVariable ["ExileScore", _newKillerRespect];
		_killerStatsNeedUpdate = true;
		format["setAccountScore:%1:%2", _newKillerRespect, getPlayerUID _killingPlayer] call ExileServer_system_database_query_fireAndForget;
	};
	if (_killerStatsNeedUpdate) then 
	{
		_killingPlayer call ExileServer_object_player_sendStatsUpdate;
	};
};
true