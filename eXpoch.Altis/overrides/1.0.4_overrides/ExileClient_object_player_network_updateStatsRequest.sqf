/**
 * ExileClient_object_player_network_updateStatsRequest
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
 
ExileClientPlayerScore = parseNumber (_this select 0);
ExileClientPlayerKills = _this select 1;
ExileClientPlayerDeaths = _this select 2;
/* eXpoch New Addition */
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