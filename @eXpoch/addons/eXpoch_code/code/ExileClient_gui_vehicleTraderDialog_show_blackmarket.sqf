/**
 * ExileClient_gui_vehicleTraderDialog_show_blackmarket
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
 
private["_traderObject","_dialog","_purchaseButton","_traderCategories","_categoryComboBox","_allIndex","_categoryClass","_categoryConfig","_categoryIndex","_configBlackMarketRank"];
disableSerialization;
_traderObject = _this;
_configBlackMarketRank = getNumber(missionConfigFile >> "CfgeXpochRank" >> "blackmarketRank");
if ((eXpochClientPlayerRank >= _configBlackMarketRank) || (eXpochClientPlayerRank <= -(_configBlackMarketRank)))then
{
	ExileClientCurrentTrader = _this getVariable "ExileTraderType";
	ExileClientPinCode = "";
	ExileClientMoonLight setLightBrightness 5;
	createDialog "RscExileVehicleTraderDialog";
	_dialog = uiNameSpace getVariable ["RscExileVehicleTraderDialog", displayNull];
	_purchaseButton = _dialog displayCtrl 4002;
	_purchaseButton ctrlEnable false;
	_traderCategories = getArray(missionConfigFile >> "CfgTraders" >> ExileClientCurrentTrader >> "categories");
	_categoryComboBox = _dialog displayCtrl 4000;
	_allIndex = _categoryComboBox lbAdd "";
	_categoryComboBox lbSetCurSel _allIndex;
	{
		_categoryClass = _x;
		_categoryConfig = missionConfigFile >> "CfgTraderCategories" >> _categoryClass;
		_categoryIndex = _categoryComboBox lbAdd getText(_categoryConfig >> "name");
		_categoryComboBox lbSetData [_categoryIndex, _categoryClass];
		_categoryComboBox lbSetPicture [_categoryIndex, getText(_categoryConfig >> "icon")];
	}
	forEach _traderCategories;
	[""] call ExileClient_gui_vehicleTraderDialog_updateVehicleListBox_blackmarket;
	call ExileClient_gui_modelBox_create;
}
else
{
	_configBlackMarketRank = getNumber(missionConfigFile >> "CfgeXpochRank" >> "blackmarketRank");
	["InfoTitleAndText_Yellow", ["BlackMarket Ranks ONLY!", format ["The Blackmarket requires Rank %1 and up, you are only Rank %2. Keep playing!!", _configBlackMarketRank, eXpochClientPlayerRank]]] call ExileClient_gui_toaster_addTemplateToast;
};