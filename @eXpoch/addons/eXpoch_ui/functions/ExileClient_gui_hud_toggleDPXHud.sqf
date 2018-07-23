/**
 * ExileClient_gui_hud_toggleDPXHud
 *
 * DonkeyPuncheD Exile Mod
 * DonkeyPunch.INFO
 * © 2016 DirtySanchez
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
 
private["_display","_moneyLabel","_moneyValue","_respectLabel","_respectValue","_rankLabel","_rankValue","_killsLabel","_killsValue","_deathsLabel","_deathsValue"];
	if (ExileHudIsVisible) then
		{
			ExileLayerHUD cutText ["", "PLAIN"]; 
			ExileHudIsVisible = false;
			removeMissionEventHandler ["Draw3D", ExileHudEventHandle];
		}
		else 
		{
			ExileLayerHUD cutRsc ["RscExileHUD", "PLAIN", 1, false];
			ExileHudEventHandle = addMissionEventHandler ["Draw3D", { _this call ExileClient_gui_hud_event_onDraw3d; }];
			ExileHudIsVisible = true;
		};