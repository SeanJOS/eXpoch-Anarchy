/**
 * ExileClient_gui_hud_toggleDPXCompassBar
 *
 * DonkeyPuncheD Exile Mod
 * DonkeyPunch.INFO
 * © 2016 DirtySanchez
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
 
private["_display","_moneyLabel","_moneyValue","_respectLabel","_respectValue","_rankLabel","_rankValue","_killsLabel","_killsValue","_deathsLabel","_deathsValue"];
disableSerialization;
_display = uiNamespace getVariable "RscExileHUD";
ExileHudMode = ExileHudMode + 1;
if (ExileHudMode isEqualTo 3) then 
{
	ExileHudMode = 0;
};
_directionLabel = _display displayCtrl 6403; 
_directionLabel ctrlShow (ExileHudMode isEqualTo 0);
_degreesValue = _display displayCtrl 6402;
_degreesValue ctrlShow (ExileHudMode isEqualTo 0);


_gridValue = _display displayCtrl 6404;
_gridValue ctrlShow (ExileHudMode isEqualTo 1);

_rziLabel = _display displayCtrl 6406;
_rziLabel ctrlShow (ExileHudMode isEqualTo 2);
_rziValue = _display displayCtrl 6405;
_rziValue ctrlShow (ExileHudMode isEqualTo 2);
