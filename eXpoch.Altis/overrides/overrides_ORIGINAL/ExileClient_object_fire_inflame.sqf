/**
 * ExileClient_object_fire_inflame
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private _fire = _this;
private _done = false;
if ("Exile_Item_Matches" in (magazines player)) then
{
	[player, "Exile_Item_Matches", -1] call ExileClient_util_gear_repackMagazines;
	_fire inflame true;
	_done = true;
};
if!(_done)then
{
	if ("eXpoch_lighter_epoch" in (magazines player)) then
	{
		[player, "eXpoch_lighter_epoch", -1] call ExileClient_util_gear_repackMagazines;
		_fire inflame true;
		_done = true;
	};
};
if!(_done)then
{
	["ErrorTitleAndText", ["No fire for you!", "You need matches or a zippo to light a fire."]] call ExileClient_gui_toaster_addTemplateToast;
};
true