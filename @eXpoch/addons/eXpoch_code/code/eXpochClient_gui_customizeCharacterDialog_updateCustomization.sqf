/*
	eXpochClient_gui_customizeCharacterDialog_updateCustomization

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_customClass","_dialog","_controlIDs","_traderObject","_customConfig","_promotedStats","_controlID","_itemType","_category","_type","_weaponHolders","_magazineClassNames","_magazineClassName","_launchers","_accessories","_added","_primaryWpn","_compatibleItems","_handgunWpn","_secondaryWpn","_variableName"];
disableSerialization;
_customClass = _this;
_dialog = uiNameSpace getVariable ["RscExileCustomizeCharacterDialog", displayNull];
_controlIDs = [6000,6004,6008,6012];
{
	lbClear (_dialog displayCtrl _x);
}forEach _controlIDs;
if !(_customClass isEqualTo "") then
{
	_customConfig = _customClass call ExileClient_util_gear_getConfigNameByClassName;
	_promotedStats = _customClass call ExileClient_util_item_getMainStats;
	_controlID = 6000;
	{
		if!((_x select 0) isEqualTo "SALES PRICE")then
		{
			(_dialog displayCtrl _controlID) ctrlShow true;
			(_dialog displayCtrl (_controlID + 2)) ctrlSetText (_x select 0);
			(_dialog displayCtrl (_controlID + 2)) ctrlShow true;
			(_dialog displayCtrl (_controlID + 3)) ctrlSetStructuredText parseText (_x select 1);
			(_dialog displayCtrl (_controlID + 3)) ctrlShow true;
			(_dialog displayCtrl (_controlID + 1)) progressSetPosition (_x select 2);
			(_dialog displayCtrl (_controlID + 1)) ctrlShow true;
			(_dialog displayCtrl (_controlID + 1)) ctrlCommit 1;
			_controlID = _controlID + 4;
		};
	}forEach _promotedStats;
	_itemType = _customClass call BIS_fnc_itemType;
	_category = _itemType select 0;
	_type = _itemType select 1;
	if(_type == "Uniform")then{player forceAddUniform _customClass;};
	if(_type == "Vest")then{player addVest _customClass;};
	if(_type == "Backpack")then
	{
		player addBackpack _customClass;
		_weaponHolders = nearestObjects[player,["GroundWeaponHolder"],20];
		{deleteVehicle _x}forEach _weaponHolders;
	};
	if(_type == "Headgear")then{player addHeadgear _customClass;};
	if(_type == "Glasses")then{player addGoggles _customClass;};
	if(_category == "Weapon")then
	{
		if(_type == "Handgun")then
		{
			_magazineClassNames = getArray(configFile >> "CfgWeapons" >> _customClass >> "magazines");
			_magazineClassName = selectRandom _magazineClassNames;
			player addMagazines [_magazineClassName,1];
			player addWeapon _customClass;
		};
		_launchers = ["Launcher","MissileLauncher","RocketLauncher"];
		if(_type in _launchers)then
		{
			_type = "Secondary";
			_magazineClassNames = getArray(configFile >> "CfgWeapons" >> _customClass >> "magazines");
			_magazineClassName = selectRandom _magazineClassNames;
			player addMagazines [_magazineClassName,1];
			player addWeapon _customClass;
		}
		else
		{
			_type = "Primary";
			_magazineClassNames = getArray(configFile >> "CfgWeapons" >> _customClass >> "magazines");
			_magazineClassName = selectRandom _magazineClassNames;
			player addMagazines [_magazineClassName,1];
			player addWeapon _customClass;
		};
	};
	if(_category == "Item")then
	{
		_accessories = ["AccessoryMuzzle","AccessoryPointer","AccessorySights","AccessoryBipod"];
		if(_type in _accessories)then
		{
			_added = false;
			_currentWpn = currentWeapon player;
			_primaryWpn = primaryWeapon player;
			_compatibleItems = _currentWpn call ExileClient_util_item_getCompatibleWeaponItems;
			if(!(_primaryWpn isEqualTo "") && (_currentWpn == _primaryWpn) && (_customClass in _compatibleItems))then
			{
				player addPrimaryWeaponItem _customClass;
				player action ["GunLightOn", player];
				_type = "Primary"+_type;
				_added = true;
			};
			_handgunWpn = handgunWeapon player;
			if(!(_handgunWpn isEqualTo "") && (_currentWpn == _handgunWpn) && (_customClass in _compatibleItems))then
			{
				player addHandgunItem _customClass;
				_type = "Handgun"+_type;
				_added = true;
			};
			_secondaryWpn = secondaryWeapon player;
			if(!(_secondaryWpn isEqualTo "") && (_currentWpn == _secondaryWpn) && (_customClass in _compatibleItems))then
			{
				player addSecondaryWeaponItem _customClass;
				_type = "Secondary"+_type;
				_added = true;
			};
			if!(_added)then{systemChat "This attachment does not fit a weapon you have equiped";};
		};
	};
	_variableName = format["RscExileCustomizeCharacterDialog%1Class",_type];
	uiNameSpace setVariable [_variableName, _customClass];
	_weaponHolders = nearestObjects[player,["GroundWeaponHolder"],20];
	{deleteVehicle _x}forEach _weaponHolders;
};

