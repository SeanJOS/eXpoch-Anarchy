/**
 * ExileClient_object_handcuffs_use
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
 
private["_success", "_object"];
_success = false;
try 
{
	if !(alive player) then 
	{
		throw false; 
	};
	if (ExileClientIsHandcuffed) then 
	{
		throw false;
	};
	if (ExilePlayerInSafezone) then 
	{
		throw false; 
	};
	if !(((currentThrowable player) select 0) isEqualTo "Exile_Item_ZipTie") then 
	{
		throw false;
	};
	_object = cursorTarget;
	if (_object isEqualTo player) then 
	{
		throw false; 
	};
	/* eXpoch New Addition */
	_unitTypes = ["Exile_Unit_Player","eXpoch_Female_Prisoner_F"];
	if !((typeOf _object) in _unitTypes) then 
	{
		throw false; 
	};
	if !(isPlayer _object) then 
	{
		throw false; 
	};
	if !(alive _object) then 
	{
		throw false; 
	};
	if (_object getVariable ["ExileIsHandcuffed", false]) then 
	{
		throw false;  
	};
	if ((player distance _object) > 2) then 
	{
		throw false;  
	};
	["handcuffRequest", [netId _object]] call ExileClient_system_network_send;
}
catch 
{
	_success = _exception;
};
_success