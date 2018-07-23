/*
	eXpochClient_gui_animalTraderDialog_show

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
 
private["_traderObject","_dialog","_purchaseButton","_traderCategories","_categoryComboBox","_allIndex","_categoryClass","_categoryConfig","_categoryIndex"];
if(!(isNull (eXpochClientPlayerBestFriend)))exitWith{
	["InfoTitleAndText_Orange", ["STOP!", "You already have a best friend and he will make a good dinner!"]] call ExileClient_gui_toaster_addTemplateToast;
};
if(!(isNull (eXpochClientPlayerMercenary)))exitWith{
	["InfoTitleAndText_Orange", ["STOP!", "You already have a rented Merc, murder them to rent another!"]] call ExileClient_gui_toaster_addTemplateToast;
};
disableSerialization;
_traderObject = _this;
ExileClientCurrentTrader = _this getVariable "ExileTraderType";
ExileClientPinCode = "";
ExileClientMoonLight setLightBrightness 5;
createDialog "RscExileAnimalTraderDialog";
_dialog = uiNameSpace getVariable ["RscExileAnimalTraderDialog", displayNull];
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
[""] call ExileClient_gui_animalTraderDialog_updateAnimalListBox;
call ExileClient_gui_modelBox_create;