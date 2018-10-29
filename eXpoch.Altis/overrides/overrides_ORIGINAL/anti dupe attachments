[30, 		// Delay, in seconds
{
private _fnc_isValid =
{
	private _linkedItems = configFile >> "CfgWeapons" >> _this >> "LinkedItems";

	private _isValid = true;
	{
		if !((getText (_linkedItems >> _x >> "item")) isEqualTo "") exitWith {_isValid = false};
	} forEach ["LinkedItemsOptic","LinkedItemsAcc","LinkedItemsMuzzle","LinkedItemsUnder"];

	_isValid
};
private _fnc_getLoadedMags =
{
	private _loadedMags = [];
	{
		if ((_x select 3) isEqualTo _this) then
		{
			_loadedMags pushBack [_x select 0,_x select 1];
		};
	} forEach (magazinesAmmoFull player);
	_loadedMags
};

private _primary = primaryWeapon player;
if (!(_primary isEqualTo "") && {!(_primary call _fnc_isValid)}) then
{
	private _replacement = "";

	{
		if ((configName _x) call _fnc_isValid) exitWith {_replacement = configName _x;};
	} forEach ((configFile >> "CfgWeapons" >> _primary) call BIS_fnc_returnParents);


	if (isText (configFile >> "CfgWeapons" >> _replacement >> "displayName")) then		// This bit ensures that the replacement weapon is an actual weapon, and not just a base class.
	{
		private _currentWeaponItems = primaryWeaponItems player;
		private _loadedMags_Original = 1 call _fnc_getLoadedMags;

		private _currentWeapon = currentWeapon player;

		player removeWeapon _primary;
		player addWeapon _replacement;

		private _loadedMags_Replacement = 1 call _fnc_getLoadedMags;

		if (_currentWeapon isEqualTo _primary) then
		{
			player selectWeapon _replacement;
		};

		{
			if !(_x isEqualTo "") then
			{
				player addPrimaryWeaponItem _x;
			};
		} forEach _currentWeaponItems;

		{
			player addWeaponItem [_replacement, _x];
		} forEach _loadedMags_Original;

		{player addMagazine _x} forEach _loadedMags_Replacement;
	};
};

private _handgun = handgunWeapon player;
if (!(_handgun isEqualTo "") && {!(_handgun call _fnc_isValid)}) then
{
	private _replacement = "";

	{
		if ((configName _x) call _fnc_isValid) exitWith {_replacement = configName _x;};
	} forEach ((configFile >> "CfgWeapons" >> _handgun) call BIS_fnc_returnParents);


	if (isText (configFile >> "CfgWeapons" >> _replacement >> "displayName")) then
	{
		private _currentWeaponItems = handgunItems player;
		private _loadedMags_Original = 2 call _fnc_getLoadedMags;

		private _currentWeapon = currentWeapon player;

		player removeWeapon _handgun;
		player addWeapon _replacement;

		private _loadedMags_Replacement = 2 call _fnc_getLoadedMags;

		if (_currentWeapon isEqualTo _handgun) then
		{
			player selectWeapon _replacement;
		};

		{
			if !(_x isEqualTo "") then
			{
				player addHandgunItem _x;
			};
		} forEach _currentWeaponItems;

		{
			player addWeaponItem [_replacement, _x];
		} forEach _loadedMags_Original;

		{player addMagazine _x} forEach _loadedMags_Replacement;
	};
};
},[],true] call ExileClient_system_thread_addTask;