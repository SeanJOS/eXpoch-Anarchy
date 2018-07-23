/**
 * ExileClient_gui_hud_toggleDPXTemp
 *
 * DonkeyPuncheD Exile Mod
 * DonkeyPunch.INFO
 * © 2016 DirtySanchez
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
private["_tempVar"];
_tempVar = ExileClientPlayerUSATemp;
if(ExileClientPlayerUSATemp isEqualTo 1)then
{
	ExileClientPlayerUSATemp = 0;
}
else
{
	ExileClientPlayerUSATemp = 1;
};