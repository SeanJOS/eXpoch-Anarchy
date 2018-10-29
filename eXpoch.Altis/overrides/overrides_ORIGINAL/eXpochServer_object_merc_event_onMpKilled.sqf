/*
	eXpochServer_object_merc_event_onMpKilled

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
_victim = _this select 0;

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
_respectTransfer = 500;
_newKillerRespect = _oldKillerRespect + _respectTransfer;
_killSummary pushBack ["MERCENARY KILLED", _respectTransfer];

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
	if (_countAIKill) then
	{
		_newKillerFrags = _killingPlayer getVariable ["ExileAIKills", 0];
		_newKillerFrags = _newKillerFrags + 1;
		_killerStatsNeedUpdate = true;
		_killingPlayer setVariable ["ExileAIKills", _newKillerFrags];
		format["addAccountAIKill:%1", getPlayerUID _killingPlayer] call ExileServer_system_database_query_fireAndForget;
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