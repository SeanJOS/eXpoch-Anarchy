/**
 * ExileClient_gui_selectSpawnLocation_event_onListBoxSelectionChanged
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
 
private["_listBoxControl", "_listBoxControlIndex", "_display", "_spawnButton"];
disableSerialization;
_listBoxControl = _this select 0;
_listBoxControlIndex = _this select 1;
_display = findDisplay 24002;
/* eXpoch New Addition */
ExileClientSelectedSpawnLocationMarkerName = [_listBoxControl lbData _listBoxControlIndex,eXpochClientGenderSelect,eXpochClientSpawnType];
_spawnButton = _display displayCtrl 24003;
_spawnButton ctrlEnable true;
private _maleButton = _display displayCtrl 79998;
_maleButton ctrlEnable true; 
private _femaleButton = _display displayCtrl 79997;
_femaleButton ctrlEnable true;
private _groundButton = _display displayCtrl 79996;
_groundButton ctrlEnable true;
private _haloButton = _display displayCtrl 79995;
_haloButton ctrlEnable false;
private _gearButton = _display displayCtrl 79994;
_gearButton ctrlEnable false;
if !((_listBoxControl lbText _listBoxControlIndex) == "Random") then 
{
	(ExileClientSelectedSpawnLocationMarkerName select 0) call ExileClient_gui_selectSpawnLocation_zoomToMarker;
};
true