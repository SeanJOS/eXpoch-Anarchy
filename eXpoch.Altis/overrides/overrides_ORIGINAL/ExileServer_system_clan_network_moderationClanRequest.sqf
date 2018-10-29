/*
	ExileServer_system_clan_network_moderationClanRequest

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
 
private["_sessionID","_requestedPromotePlayerUID","_player","_clanID","_clanHash","_clanMembers","_index","_memberName","_promotePlayer"];
_sessionID = _this select 0;
_requestedPromotePlayerUID = (_this select 1) select 0;
try
{
	_player = _sessionID call ExileServer_system_session_getPlayerObject;
	if(isNull _player)then
	{
		throw "You do not exist! :)";
	};
	_clanID = _player getVariable ["ExileClanID",-1];
	if(_clanID isEqualTo -1)then
	{
		throw "You are not in a family!";
	};
	_clanHash = missionNameSpace getVariable [format["ExileServer_clan_%1",_clanID],[]];
	if(_clanHash isEqualTo [])then
	{
		throw "Family data is broken!";
	};
	if!((getPlayerUID _player) isEqualTo (_clanHash select 1))then
	{
		throw "You are not the papa!";
	};
	_clanMembers = _clanHash select 2;
	_index = [_clanMembers,_requestedPromotePlayerUID] call ExileClient_util_find;
	if(_index isEqualTo -1)then
	{
		throw "Promoted player is not in a family!";
	};
	_clanModerators = _clanHash select 6;
	_clanModerators pushBack _requestedPromotePlayerUID;
	_clanHash set [6,_clanModerators];
	
	format ["updateClanModerators:%1:%2",_clanModerators,_clanID] call ExileServer_system_database_query_fireAndForget;
	missionNameSpace setVariable [format["ExileServer_clan_%1",_clanID],_clanHash];
	_clanID call ExileServer_system_clan_updateClients;
	_promotePlayer = _requestedPromotePlayerUID call ExileClient_util_player_objectFromPlayerUid;
	_memberName = "";
	if!(isNull _promotePlayer)then
	{
		_memberName = name _promotePlayer;
		[_promotePlayer, "toastRequest", ["SuccessTitleOnly",["You have been promoted within your family!"]]] call ExileServer_system_network_send_to;
	};
	if!(_memberName isEqualTo "")then
	{
		[_sessionID, "toastRequest", ["SuccessTitleOnly", [format["%1 was promoted within the family!", _memberName]]]] call ExileServer_system_network_send_to;
	}
	else
	{
		[_sessionID, "toastRequest", ["SuccessTitleOnly", ["The offline family member was promoted."]]] call ExileServer_system_network_send_to;
	};
}
catch
{
	_exception call ExileServer_util_log;
	[_sessionID, "toastRequest", ["ErrorTitleAndText", ["Failed to promote!", _exception]]] call ExileServer_system_network_send_to;
};