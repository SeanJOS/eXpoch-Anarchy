/**
 * ExileClient_object_player_network_createPlayerResponse
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_player","_chuteNetID","_spawnType","_chute"];
diag_log str (_this);
_player = _this select 0;
_chuteNetID = _this select 1;
_spawnType = _this select 10;
_loadAccountStats = _this select 11;
ExileClientPlayerFirstLogin = nil;
if !(_chuteNetID isEqualTo "") then
{
	_chute = objectFromNetId _chuteNetID;
}
else
{
	_chute = objNull;
};
if !(isNull _chute) then 
{
	_player disableCollisionWith _chute;
};
_player call ExileClient_object_player_initialize;
_player call ace_medical_fnc_init;
ExileClientPlayerIsSpawned = true;
ExileClientPlayerAttributesASecondAgo = 
[
	(1 - ([] call eXpochClient_object_player_ace_findAceAvgDamage)) * 100,
	ExileClientPlayerAttributes select 1,
	ExileClientPlayerAttributes select 2,
	ExileClientPlayerAttributes select 3,
	ExileClientPlayerAttributes select 4,
	ExileClientPlayerAttributes select 5,
	ExileClientPlayerAttributes select 6
];
switch (_spawnType) do 
{
	case 0: 
	{
	};
	case 1:
	{
		player action ["GetinDriver", _chute];
		["InfoTitleAndText", ["Watch your landing speed!", "Going faster than 20km/h might kill you."]] call ExileClient_gui_toaster_addTemplateToast;
		ExileJobParachuteFix = [0.25, ExileClient_object_player_parachuteFix, [], true] call ExileClient_system_thread_addtask;
	};
	case 2:
	{
		["InfoTitleAndText", ["Watch your landing speed!", "Going faster than 20km/h might kill you."]] call ExileClient_gui_toaster_addTemplateToast;
		player switchMove "";
		player playMoveNow "HaloFreeFall_non"; 
		player playMoveNow "HaloFreeFall_non";
		player playMoveNow "HaloFreeFall_non";
		player setVelocity [(sin (getDir player)) * 50, (cos (getDir player)) * 50, -5];
		ExileJobParachuteFix = [0.25, ExileClient_object_player_parachuteFix, [], true] call ExileClient_system_thread_addtask;
	};
};
call ExileClient_object_player_initStamina;
false call ExileClient_gui_hud_showSurvivalInfo;
call ExileClient_system_rating_balance;
ExileClientPlayerScore = parseNumber (_this select 2);
ExileClientPlayerKills = _this select 3;
ExileClientPlayerDeaths = _this select 4;
//DPCG

ExileClientPlayerHeroKills = _loadAccountStats select 5;
ExileClientPlayerBanditKills = _loadAccountStats select 6;
ExileClientPlayerZedKills = _loadAccountStats select 7;
ExileClientPlayerAIKills = _loadAccountStats select 8;
ExileClientPlayerHeroAIKills = _loadAccountStats select 9;
ExileClientPlayerBanditAIKills = _loadAccountStats select 10;
ExileClientPlayerHeals = _loadAccountStats select 11;
ExileClientPlayerRevives = _loadAccountStats select 12;
ExileClientPlayerBlood = 10000;
ExileClientPlayerTimeAlive = 0;
ExileClientPlayerDMS = _loadAccountStats select 13;
ExileClientPlayerZCP = _loadAccountStats select 14;
ExileClientPlayerVEMF = _loadAccountStats select 15;
ExileClientPlayerTotalTimePlayed = _loadAccountStats select 17;
_player call ace_medical_fnc_init;

_player setVariable ["eXpochClientPlayerInCustomization",false,true];
_player setVariable ["eXpochZombieFood",false,true];
eXpochClientPlayerRank = [ExileClientPlayerScore] call eXpochClient_util_player_recalculateRank;
_player setVariable ["eXpochClientPlayerRank",eXpochClientPlayerRank,true];
/*
_rankMult = getNumber(missionConfigFile >> "CfgeXpochRank" >> "rankMultiplier");
if!(ExileClientPlayerScore isEqualTo 0)then
{
	if(ExileClientPlayerScore < 0)then
	{
		_adjRespect = -(ExileClientPlayerScore);
		eXpochClientPlayerRank = floor(_adjRespect/(10000 * _rankMult));
	}
	else
	{
		eXpochClientPlayerRank = floor(ExileClientPlayerScore/(10000 * _rankMult));
	};
}
else
{
	eXpochClientPlayerRank = 0;
};*/
		
(_this select 9) call ExileClient_system_clan_network_updateClanInfoFull;
if!((_this select 9) isEqualTo [])then
{
	if!(isNull ((_this select 9) select 5))then
	{
		ExileClientPartyID = netid ((_this select 9) select 5);
	};
};
if !(ExileClientPartyID isEqualTo -1) then
{
	[player] joinSilent (groupFromNetId ExileClientPartyID);
};
if !(isNull ExileClientLastDiedPlayerObject) then
{	
	[ExileClientLastDiedPlayerObject] joinSilent (createGroup independent);
};
(_this select 8) call ExileClient_object_player_bambiStateBegin;
[_player] call eXpochClient_gui_customizeCharacterDialog_show;
true