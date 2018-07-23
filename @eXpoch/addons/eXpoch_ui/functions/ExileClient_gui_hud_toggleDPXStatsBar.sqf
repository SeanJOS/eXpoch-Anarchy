/**
 * ExileClient_gui_hud_toggleDPXStatsBar
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
_moneyLabel = _display displayCtrl 6303;
_moneyLabel ctrlShow (ExileHudMode isEqualTo 0);
_moneyValue = _display displayCtrl 6302;
_moneyValue ctrlShow (ExileHudMode isEqualTo 0);
_respectLabel = _display displayCtrl 6305;
_respectLabel ctrlShow (ExileHudMode isEqualTo 0); 
_respectValue = _display displayCtrl 6304;
_respectValue  ctrlShow (ExileHudMode isEqualTo 0);
_rankLabel = _display displayCtrl 6307;
_rankLabel ctrlShow (ExileHudMode isEqualTo 1);
_rankValue = _display displayCtrl 6306;
_rankValue ctrlShow (ExileHudMode isEqualTo 1);
_killsLabel = _display displayCtrl 6309;
_killsLabel ctrlShow (ExileHudMode isEqualTo 2);
_killsValue = _display displayCtrl 6308;
_killsValue ctrlShow (ExileHudMode isEqualTo 2);
_deathsLabel = _display displayCtrl 6311;
_deathsLabel ctrlShow (ExileHudMode isEqualTo 2);
_deathsValue = _display displayCtrl 6310;
_deathsValue ctrlShow (ExileHudMode isEqualTo 2);