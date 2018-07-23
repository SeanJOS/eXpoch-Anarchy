/**
 * ExileClient_gui_hud_toggleDPXKeyz
 *
 * DonkeyPuncheD Exile Mod
 * DonkeyPunch.INFO
 * © 2016 DirtySanchez
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
 
private["_stopPropagation"];
_serverName = getText(missionConfigFile >> "CfgeXpoch" >> "serverName");
_serverKeyz = getText(missionConfigFile >> "CfgeXpoch" >> "serverKeyz");
	if (ExileKeyZisVisible) then
		{
			("ExileClientKeyLegendModeLayer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"]; ; 
			ExileKeyZisVisible = false;
			_stopPropagation = true; 
		}
		else 
		{
			("ExileClientKeyLegendModeLayer" call BIS_fnc_rscLayer) cutRsc ["RscExileKeyLegendMode", "PLAIN", 1, false];
			ExileKeyZisVisible = true;
			_stopPropagation = true; 
			_display = uiNamespace getVariable "RscExileKeyLegendMode";
			_controlTitle = _display displayCtrl 1000;
			_controlTitle ctrlSetText _serverName;
			_controlDescription = _display displayCtrl 1001;
			_controlDescription ctrlSetStructuredText (parseText _serverKeyz);
		};