/*
	eXpochClient_gui_customizeCharacterDialog_updateCustomizationListBox

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_dialog","_categoryClasses","_itemListControl","_categoryClass","_categoryItemClassNames","_itemClassName","_availableItem","_showItem","_rankAllowed","_rankMult","_configName","_indexEntryIndex","_playerMoney","_qualityColor","_imageColor","_myRank","_applyItemClassFilter","_filterToItemClasses","_attachmentCategories"];
disableSerialization;
_dialog = uiNameSpace getVariable ["RscExileCustomizeCharacterDialog", displayNull];
_categoryClasses = _this;

if ((_categoryClasses select 0 == "") && (eXpochClientGenderSelect isEqualTo 1))then
{
	_categoryClasses = getArray(missionConfigFile >> "CfgeXpochLoadouts" >> "maleCategories");
};
if ((_categoryClasses select 0 == "") && (eXpochClientGenderSelect isEqualTo 0))then
{
	_categoryClasses = getArray(missionConfigFile >> "CfgeXpochLoadouts" >> "femaleCategories");
};

_applyItemClassFilter = false;
_filterToItemClasses = [];
_attachmentCategories = getArray(missionConfigFile >> "CfgeXpochLoadouts" >> "AttachmentCategories");
if(((_categoryClasses select 0) in _attachmentCategories) && !((primaryWeapon player) isEqualTo "") && ((currentWeapon player) == (primaryWeapon player)))then
{
	_applyItemClassFilter = true;
	_filterToItemClasses append ((primaryWeapon player) call ExileClient_util_item_getCompatibleWeaponItems);
};
if(((_categoryClasses select 0) in _attachmentCategories) && !((handgunWeapon player) isEqualTo "") && ((currentWeapon player) == (handgunWeapon player)))then
{
	_applyItemClassFilter = true;
	_filterToItemClasses append ((handgunWeapon player) call ExileClient_util_item_getCompatibleWeaponItems);
};

_itemListControl = _dialog displayCtrl 4001;
lbClear _itemListControl;
{
	_categoryClass = _x;
	_categoryItemClassNames = getArray(missionConfigFile >> "CfgTraderCategories" >> _categoryClass >> "items");
	{
		_itemClassName = _x;
		_availableItem = false;
		_rankAllowed = getNumber(missionConfigFile >> "CfgExileArsenal" >> _itemClassName >> "loadoutRank");
		_myRank = abs eXpochClientPlayerRank;
		if(_myRank >= _rankAllowed)then
		{
			_availableItem = true;
		};
		if(_availableItem)then
		{
			_showItem = true;
			if (_applyItemClassFilter) then
			{
				_showItem = _itemClassName in _filterToItemClasses;
			};
			if (_showItem) then
			{
				_configName = _x call ExileClient_util_gear_getConfigNameByClassName;
				_indexEntryIndex = _itemListControl lbAdd getText(configFile >> _configName >> _itemClassName >> "displayName");
				_qualityColor = [1, 1, 1, 1];
				_imageColor = [1, 1, 1, 1];
				_itemListControl lbSetData [_indexEntryIndex, _itemClassName];
				_itemListControl lbSetColor [_indexEntryIndex, _qualityColor];
				_itemListControl lbSetPicture [_indexEntryIndex, getText(configFile >> _configName >> _itemClassName >> "picture")];
				_itemListControl lbSetPictureColor [_indexEntryIndex, _imageColor];
			};
		};
	}forEach _categoryItemClassNames;	
}forEach _categoryClasses;
true