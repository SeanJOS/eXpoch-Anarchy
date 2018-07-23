/**
 * Pre-Initialization
 *
 * Arma 3 for Exile Mod Addon by DonkeyPunch.INFO
 * DonkeyPuncheD Exile Mod
 * DonkeyPunch.INFO
 * © 2016 DirtySanchez
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
 
private ['_code', '_function', '_file'];

{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;

    if (isText (missionConfigFile >> 'CfgExileCustomCode' >> _function)) then
    {
        _file = getText (missionConfigFile >> 'CfgExileCustomCode' >> _function);
    };

    _code = compileFinal (preprocessFileLineNumbers _file);                    

    missionNamespace setVariable [_function, _code];
}
forEach 
[
	['ExileClient_gui_hud_renderDPXStatsPanel', 'eXpoch_ui\functions\ExileClient_gui_hud_renderDPXStatsPanel.sqf'],
	['ExileClient_gui_hud_renderDPXCompassPanel', 'eXpoch_ui\functions\ExileClient_gui_hud_renderDPXCompassPanel.sqf'],
	['ExileClient_gui_hud_toggleDPXStatsBar', 'eXpoch_ui\functions\ExileClient_gui_hud_toggleDPXStatsBar.sqf'],
	['ExileClient_gui_hud_renderDPXRestartPanel', 'eXpoch_ui\functions\ExileClient_gui_hud_renderDPXRestartPanel.sqf'],
	['ExileClient_gui_hud_toggleDPXCompassBar', 'eXpoch_ui\functions\ExileClient_gui_hud_toggleDPXCompassBar.sqf'],
	['ExileClient_gui_hud_toggleDPXHud', 'eXpoch_ui\functions\ExileClient_gui_hud_toggleDPXHud.sqf'],
	['ExileClient_gui_hud_toggleDPXKeyz', 'eXpoch_ui\functions\ExileClient_gui_hud_toggleDPXKeyz.sqf'],
	['ExileClient_gui_hud_toggleDPXRulez', 'eXpoch_ui\functions\ExileClient_gui_hud_toggleDPXRulez.sqf'],
	['ExileClient_object_door_lockUnlockToggle', 'eXpoch_ui\functions\ExileClient_object_door_lockUnlockToggle.sqf'],
	['ExileClient_gui_hud_toggleDPXTemp','eXpoch_ui\functions\ExileClient_gui_hud_toggleDPXTemp.sqf']
];