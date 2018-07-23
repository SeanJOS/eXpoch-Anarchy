/**
 * ExileClient_gui_traderDialog_show_bandit
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * Modified by DirtySanchez for eXpochA4E
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_dialog","_traderName","_primaryWeaponCheckbox","_handgunCheckbox","_storeDropdown","_storeDropdownSize","_quantityDropdown","_purchaseButton","_sellButton","_configBanditRank","_configBanditName"];
disableSerialization;
ExileClientCurrentTrader = _this getVariable "ExileTraderType";
_configBanditRank = getNumber(missionConfigFile >> "CfgeXpochRank" >> "heroNbanditRank");
_configBanditName = getText(missionConfigFile >> "CfgeXpochRank" >> "nameBandit");
if(eXpochClientPlayerRank <= -(_configBanditRank))then
{
	createDialog "RscExileTraderDialog";
	waitUntil { !isNull findDisplay 24007 };
	_dialog = uiNameSpace getVariable ["RscExileTraderDialog", displayNull];
	uiNameSpace setVariable ["RscExileTraderDialogIsInitialized", false];
	_traderName = _dialog displayCtrl 4001;
	_traderName ctrlSetText getText(missionConfigFile >> "CfgTraders" >> ExileClientCurrentTrader >> "name");
	ctrlSetFocus _traderName;
	_primaryWeaponCheckbox = _dialog displayCtrl 4044;
	_handgunCheckbox = _dialog displayCtrl 4045;
	_storeDropdown = _dialog displayCtrl 4008;
	_storeDropdownSize = ctrlPosition _storeDropdown; 
	if (getNumber (missionConfigFile >> "CfgTraders" >> ExileClientCurrentTrader >> "showWeaponFilter") isEqualTo 1) then
	{
		_primaryWeaponCheckbox ctrlShow true;
		_handgunCheckbox ctrlShow true;
		_storeDropdownSize set [2, 13.2 * (0.025)];
	}
	else 
	{
		_primaryWeaponCheckbox ctrlShow false;
		_handgunCheckbox ctrlShow false;
		_storeDropdownSize set [2, 16.5 * (0.025)];
	};
	_storeDropdown ctrlSetPosition _storeDropdownSize;
	_storeDropdown ctrlCommit 0;
	_quantityDropdown = _dialog displayCtrl 4011;
	lbClear _quantityDropdown;
	_quantityDropdown lbAdd "1x";
	_quantityDropdown lbSetCurSel 0;
	_quantityDropdown ctrlEnable false;
	_purchaseButton = _dialog displayCtrl 4010;
	_purchaseButton ctrlEnable false;
	_sellButton = _dialog displayCtrl 4007;
	_sellButton ctrlEnable false;
	true call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;
	call ExileClient_gui_traderDialog_updatePlayerControls;
	call ExileClient_gui_traderDialog_updateInventoryDropdown;
	call ExileClient_gui_traderDialog_updateInventoryListBox;
	call ExileClient_gui_traderDialog_updateStoreDropdown;
	call ExileClient_gui_traderDialog_updateStoreListBox_bandit;
	"" call ExileClient_gui_traderDialog_updateItemStats;
	uiNameSpace setVariable ["RscExileTraderDialogIsInitialized", true];
}
else
{
	_configBanditRank = getNumber(missionConfigFile >> "CfgeXpochRank" >> "heroNbanditRank");
	_configBanditName = getText(missionConfigFile >> "CfgeXpochRank" >> "nameBandit");
	["ErrorTitleAndText", [format["Rank %1 %2 ONLY!", _configBanditRank, _configBanditName], format ["You are only Rank %1, go trade elsewhere before we kill you and take all your gear", eXpochClientPlayerRank]]] call ExileClient_gui_toaster_addTemplateToast;
};
true