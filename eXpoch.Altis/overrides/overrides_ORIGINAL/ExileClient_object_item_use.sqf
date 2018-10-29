/**
 * ExileClient_object_item_use
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_itemClassName","_playerCargo","_usingConfig","_chance","_dice","_successFunction","_successNotification","_successCode"];
_itemClassName = _this select 0;
_playerCargo = player call ExileClient_util_playerCargo_list;
if !(_itemClassName in _playerCargo) exitWith {false};
if( isClass(configFile >> "CfgMagazines" >> _itemClassName >> "Interactions" >> "Using") ) then
{
	_usingConfig = configFile >> "CfgMagazines" >> _itemClassName >> "Interactions" >> "Using";
	_chance = getNumber (_usingConfig >> "chance");
	_dice = floor (random 100);
	if (_dice <= _chance) then
	{
		_successFunction = getText (_usingConfig >> "successFunction");
		_successNotification = getText (_usingConfig >> "successNotification");
		_successCode = format["[] call %1", _successFunction];
		[] call compile _successCode;
		["SuccessTitleOnly", [_successNotification]] call ExileClient_gui_toaster_addTemplateToast;
	}
	else 
	{
		["ErrorTitleAndText", ["Failed!", "Please try again."]] call ExileClient_gui_toaster_addTemplateToast;
	};
	player removeItem _itemClassName;
}
else
{
	if( isClass(configFile >> "CfgWeapons" >> _itemClassName >> "Interactions" >> "Using") ) then
	{
		_usingConfig = configFile >> "CfgWeapons" >> _itemClassName >> "Interactions" >> "Using";
		_chance = getNumber (_usingConfig >> "chance");
		_dice = floor (random 100);
		if (_dice <= _chance) then
		{
			_successFunction = getText (_usingConfig >> "successFunction");
			_successNotification = getText (_usingConfig >> "successNotification");
			_successCode = format["[] call %1", _successFunction];
			[] call compile _successCode;
			["SuccessTitleOnly", [_successNotification]] call ExileClient_gui_toaster_addTemplateToast;
		}
		else 
		{
			["ErrorTitleAndText", ["Failed!", "Please try again."]] call ExileClient_gui_toaster_addTemplateToast;
		};
		player removeItem _itemClassName;
	};
};
true