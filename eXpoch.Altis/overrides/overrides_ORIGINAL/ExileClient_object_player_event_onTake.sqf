/**
 * ExileClient_object_player_event_onTake
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_unit","_container","_itemClassName","_itemType","_itemTypeMainCategory","_replacement"];
_unit = _this select 0;
_container = _this select 1;
_itemClassName = _this select 2;

_replacement = "";
_itemType = [_itemClassName] call BIS_fnc_itemType;
_itemTypeMainCategory = _itemType select 0;

if (ExileClientPlayerIsBambi) then
{
	if (_itemTypeMainCategory isEqualTo "Weapon") then
	{
		call ExileClient_object_player_bambiStateEnd;
	};
};
if (_itemTypeMainCategory isEqualTo "Weapon") then
{
	if (!(_itemClassName isEqualTo "") && {!(_itemClassName call UwU_fnc_isValid)}) then
	{
		{
			if ((configName _x) call UwU_fnc_isValid) exitWith {_replacement = configName _x;};
		} forEach ((configFile >> "CfgWeapons" >> _itemClassName) call BIS_fnc_returnParents);
		if (isText (configFile >> "CfgWeapons" >> _replacement >> "displayName")) then      // This bit ensures that the replacement weapon is an actual weapon, and not just a base class.
		{
			[player, _itemClassName] call ExileClient_util_playerCargo_remove;
			[player, _replacement] call ExileClient_util_playerCargo_add;
		};
	};
};

if (_itemClassName isEqualTo "Exile_Melee_Axe") then
{
	player addSecondaryWeaponItem "Exile_Magazine_Swing";
	player setammo [secondaryWeapon player, 120];
};
if (_itemClassName isEqualTo "Exile_Melee_SledgeHammer") then
{
	player addSecondaryWeaponItem "Exile_Magazine_Swoosh";
	player setammo [secondaryWeapon player, 120];
};
if (_itemClassName isEqualTo "Exile_Melee_Shovel") then
{
	player addSecondaryWeaponItem "Exile_Magazine_Boing";
	player setammo [secondaryWeapon player, 120];
};
_stickSwings = ["MeleeRod","Plunger","WoodClub"];
if (_itemClassName in _stickSwings) then
{
	player addSecondaryWeaponItem "stick_swing";
	player setammo [secondaryWeapon player, 120];
};
_sledgeSwings = ["meleeSledge","MeleeSword","MeleeMaul"];
if (_itemClassName in _sledgeSwings) then
{
	player addSecondaryWeaponItem "Sledge_swing";
	player setammo [secondaryWeapon player, 120];
};
_hatchetSwings = ["Hatchet","CrudeHatchet"];
if (_itemClassName in _hatchetSwings) then
{
	player addHandgunItem "hatchet_swing";
	player setammo [handgunWeapon player, 120];
};
if ((_container getVariable ["ExileIsLocked",1]) isEqualTo -1)then
{
	Exiled = format ["Me %1(%2) tried to open a locked storage (%3 at (%4)%5) by gltching. :( and i got cought :((",
		profileName,getPlayerUID player,typeOf _container,mapGridPosition _container,getPosATL _container];
	publicVariableServer "Exiled";
};
true