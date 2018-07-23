/**
 * ExileClient_gui_hud_toggleDPXRulez
 *
 * DonkeyPuncheD Exile Mod
 * DonkeyPunch.INFO
 * © 2016 DirtySanchez
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
 
private["_display","_controlTitle","_controlDescription","_serverName","_respectValue","_rankLabel","_rankValue","_killsLabel","_killsValue","_deathsLabel","_deathsValue","_controlTitle"];
_serverName = getText(missionConfigFile >> "CfgeXpoch" >> "serverName");
_serverRulez = getText(missionConfigFile >> "CfgeXpoch" >> "serverRulez");
	if (ExileRuleZisVisible) then
		{
			("ExileClientRulezModeLayer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
			ExileRuleZisVisible = false;
			_stopPropagation = true; 
		}
		else 
		{
			("ExileClientRulezModeLayer" call BIS_fnc_rscLayer) cutRsc ["RscExileRulezMode", "PLAIN", 1, false];
			ExileRuleZisVisible = true;
			_stopPropagation = true;
			_display = uiNamespace getVariable "RscExileRulezMode";
			_controlTitle = _display displayCtrl 1000;
			_controlTitle ctrlSetText _serverName;
			_controlDescription = _display displayCtrl 1001;
			_controlDescription ctrlSetStructuredText (parseText _serverRulez);
		};