/*
	eXpochClient_gui_customizeCharacterDialog_event_onUnload

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
 
private["_assignedItems","_invItems","_meleeWeapons","_configPMags","_pMags","_configHGMags","_hgMags","_configSMags","_sMags"];
closeDialog 0;
call eXpochClient_gui_characterBox_destroy;
player allowDamage true;
true call ExileClient_gui_hud_toggle;
[player, "SpectatorMode"] call ace_common_fnc_unhideUnit;
player setVariable ["eXpochClientPlayerInCustomization",false,true];
_rank = eXpochClientPlayerRank;
if(eXpochClientPlayerRank < 0)then
{
	_rank = -(eXpochClientPlayerRank);
};
_assignedItems = getArray(missionConfigFile >> "CfgeXpochLoadouts" >> "assignedItems");
if !(_assignedItems isEqualTo []) then
{
	{
		player linkItem _x;
	}
	forEach _assignedItems;
};
_invItems = getArray(missionConfigFile >> "CfgeXpochLoadouts" >> "baseItems");
{
	player addItem _x;
}forEach _invItems;
_meleeWeapons = getArray(missionConfigFile >> "CfgeXpoch" >> "StopWeaponsJamming");
_configPMags = getArray(missionConfigFile >> "CfgeXpochLoadouts" >> "primaryMagazines");
_pMags = 0;
_countPCfgs = count(_configPMags);
if!(_rank > _countPCfgs)then 
{ 
	_pMags = _configPMags select _rank;
} 
else 
{ 
	_pMags = _configPMags select (_countPCfgs-1);
};
if(!((primaryWeapon player) isEqualTo "") && (_pMags > 0) && !((primaryWeapon player) in _meleeWeapons))then{
	for "_i" from 1 to _pMags do{
		player addItem ((primaryWeaponMagazine player) select 0);
	};
};

_configHGMags = getArray(missionConfigFile >> "CfgeXpochLoadouts" >> "handgunMagazines");
_hgMags = 0;
_countHGCfgs = count(_configHGMags);
if!(_rank > _countHGCfgs)then 
{ 
	_hgMags = _configHGMags select _rank;
} 
else 
{ 
	_hgMags = _configHGMags select (_countHGCfgs-1);
};
if(!((handgunWeapon player) isEqualTo "") && (_hgMags > 0) && !((handgunWeapon player) in _meleeWeapons))then{
	for "_i" from 1 to _hgMags do{
		player addItem ((handgunMagazine player) select 0);
	};
};

_configSMags = getArray(missionConfigFile >> "CfgeXpochLoadouts" >> "secondaryMagazines");
_sMags = 0;
_countSMags = count(_configSMags);
if!(_rank > _countSMags)then 
{ 
	_sMags = _configSMags select _rank;
} 
else 
{ 
	_sMags = _configSMags select (_countSMags-1);
};
if(!((secondaryWeapon player) isEqualTo "") && (_sMags > 0) && !((secondaryWeapon player) in _meleeWeapons))then{
	for "_i" from 1 to _sMags do{
		player addItem ((secondaryWeaponMagazine player) select 0);
	};
};
