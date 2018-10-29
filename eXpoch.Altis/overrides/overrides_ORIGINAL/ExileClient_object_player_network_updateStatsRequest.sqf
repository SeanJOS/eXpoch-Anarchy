/**
 * ExileClient_object_player_network_updateStatsRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
ExileClientPlayerScore = parseNumber (_this select 0);
ExileClientPlayerKills = _this select 1;
ExileClientPlayerDeaths = _this select 2;
ExileClientPlayerZedKills = _this select 3;
ExileClientPlayerAIKills = _this select 4;
ExileClientPlayerHeals = _this select 5;
ExileClientPlayerRevives = _this select 6;
_missionStats = _this select 7;
ExileClientPlayerDMS = _missionStats select 0;
ExileClientPlayerZCP = _missionStats select 1;
ExileClientPlayerVEMF = _missionStats select 2;
ExileClientPlayerAceBodyParts = _this select 8;
ExileClientPlayerEmpty = _this select 9;
ExileClientPlayerTimeAlive = _this select 10;
diag_log _this;
/*
private _head = ExileClientPlayerAceBodyParts select 0;
private _body = ExileClientPlayerAceBodyParts select 1;
private _hand_l = ExileClientPlayerAceBodyParts select 2;
private _hand_r = ExileClientPlayerAceBodyParts select 3;
private _leg_l = ExileClientPlayerAceBodyParts select 4;
private _leg_r = ExileClientPlayerAceBodyParts select 5;
private _avgHandDamage = (_hand_l + _hand_r)/2;
private _avgLegDamage = (_leg_l + _leg_r)/2;
player setHitPointDamage ["hitFace", _head];
player setHitPointDamage ["hitNeck", _head];
player setHitPointDamage ["hitHead", _head];
player setHitPointDamage ["hitPelvis", _body];
player setHitPointDamage ["hitAbdomen", _body];
player setHitPointDamage ["hitDiaphragm", _body];
player setHitPointDamage ["hitChest", _body];
player setHitPointDamage ["hitBody", _body];
player setHitPointDamage ["hitArms", _avgHandDamage];
player setHitPointDamage ["hitHands", _avgHandDamage];
player setHitPointDamage ["hitLegs", _avgLegDamage];*/