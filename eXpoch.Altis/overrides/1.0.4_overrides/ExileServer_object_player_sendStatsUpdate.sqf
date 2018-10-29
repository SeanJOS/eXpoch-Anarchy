/**
 * ExileServer_object_player_sendStatsUpdate
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
 
[
	_this, 
	"updateStatsRequest", 
	[
		str (_this getVariable ["ExileScore", 0]),
		_this getVariable ["ExileKills", 0],
		_this getVariable ["ExileDeaths", 0],
		_this getVariable ["ExileZedKills", 0],
		_this getVariable ["ExileAIKills", 0],
		_this getVariable ["ExileHeals", 0],
		_this getVariable ["ExileRevives", 0],		
		[_this getVariable ["ExileDMS", 0],_this getVariable ["ExileZCP", 0],_this getVariable ["ExileVEMF", 0]],
		_this getVariable ["Ace_medical_bodyPartStatus", [0,0,0,0,0,0]],
		_this getVariable ["ExileVEMF", 0],
		_this getVariable ["ExileTimeAlive", 0]
	]
] 
call ExileServer_system_network_send_to;