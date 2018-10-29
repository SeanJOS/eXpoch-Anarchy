/**
 * ExileClient_system_music_earplugs_toggle
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

if (alive player) then
{
	_hasEarPlugsIn = [player] call ace_hearing_fnc_hasEarPlugsIn;
	_hasEarPlugs = "ACE_EarPlugs" in items player;
	if (_hasEarPlugsIn) then
	{
		[player] call ace_hearing_fnc_removeEarPlugs;
		false call ExileClient_gui_hud_toggleEarplugsIcon;
	}
	else
	{
		[player] call ace_hearing_fnc_putInEarPlugs;
		true call ExileClient_gui_hud_toggleEarplugsIcon;
	};
	//remove variable not needed
	//ExileClientEarplugsInserted = !ExileClientEarplugsInserted; 
};
true