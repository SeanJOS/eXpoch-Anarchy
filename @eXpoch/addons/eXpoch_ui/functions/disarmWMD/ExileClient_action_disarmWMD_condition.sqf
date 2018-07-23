/**
 * ExileClient_action_disarmWMD_condition
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_wmd","_result"];
_wmd = _this;
_result = "";
try 
{
	if (ExilePlayerInSafezone) then
	{
		throw "You are in a safe zone!";
	};
	if !("Exile_Item_ThermalScannerPro" in (magazines player)) then
	{
		throw "You need a Thermal Scanner Pro!";
	};
	if ((_wmd distance player) > 5) then 
	{
		throw "You are too far away!";
	};
}
catch 
{
	_result = _exception;
};
_result