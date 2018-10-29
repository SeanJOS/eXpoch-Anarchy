/**
 * ExileClient_util_gear_repackMagazines
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_container","_magazineClassName","_ammoToChange","_ammoPerMagazine","_equippedAmmo","_equippedMagazines","_ammoToRefund","_ammoToRefundThisRound"];
_container = _this select 0;
_magazineClassName = _this select 1;
_ammoToChange = _this select 2;

_ammoType = getText(configFile >> "CfgMagazines" >> _magazineClassName >> "ammo");
_configMagAmmoType = configFile >> "CfgAmmo" >> getText(configFile >> "CfgMagazines" >> _magazineClassName >> "ammo");
_configMagAmmoType = inheritsFrom _configMagAmmoType;

_ammoPerMagazine = getNumber(configFile >> "CfgMagazines" >> _magazineClassName >> "count");
_equippedAmmo = 0;
_equippedMagazines = magazinesAmmo _container;
_magsToDelete = [_magazineClassName];
if (_ammoPerMagazine > 1) then
{
	{
		_equippedMagAmmoType = configFile >> "CfgAmmo" >> getText(configFile >> "CfgMagazines" >> (_x select 0) >> "ammo");
		_equippedMagAmmoType = inheritsFrom _equippedMagAmmoType;
		if(_equippedMagAmmoType isEqualTo _configMagAmmoType)then
		{
			if((_x select 1) > _ammoPerMagazine)then
			{
				_magsToDelete pushback (_x select 0);
				_equippedAmmo = _equippedAmmo + (_x select 1);
			}
			else
			{
				_equippedAmmo = _equippedAmmo + (_x select 1);
			};
		};
	}forEach _equippedMagazines;
	{
		_container removeMagazines _x;
	}forEach _magsToDelete;
	_ammoToRefund = _equippedAmmo + _ammoToChange;
	while {_ammoToRefund > 0} do
	{
		_ammoToRefundThisRound = _ammoToRefund min _ammoPerMagazine;
		_container addMagazine [_magazineClassName, _ammoToRefundThisRound];
		_ammoToRefund = _ammoToRefund - _ammoToRefundThisRound;
	};
};