/**
 * ExileClient_gui_traderDialog_updateStoreListBox
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_dialog","_categoryDropdown","_currentCategoryIndex","_currentCategory","_storeListBox","_traderConfig","_applyItemClassFilter","_filterToItemClasses","_primaryWeaponCheckbox","_handgunCheckbox","_categoryClass","_categoryItemClassNames","_itemClassName","_showItem","_configName","_indexEntryIndex","_quality","_salesPrice","_requiredRespect","_qualityColor","_popTabColor","_imageColor","_playerMoney","_missingPopTabs","_missingRespect","_playereXpochMoney","_priceChange","_rankBased","_tradingBoost","_allLevels"];
disableSerialization;
_dialog = uiNameSpace getVariable ["RscExileTraderDialog", displayNull];
_categoryDropdown = _dialog displayCtrl 4008;
_currentCategoryIndex = lbCurSel _categoryDropdown;
_currentCategory = _categoryDropdown lbData _currentCategoryIndex;
_storeListBox = _dialog displayCtrl 4009;
lbClear _storeListBox;
_traderConfig = missionConfigFile >> "CfgTraders" >> ExileClientCurrentTrader;
_applyItemClassFilter = false;
_filterToItemClasses = [];
if !((primaryWeapon player) isEqualTo "") then
{
	_primaryWeaponCheckbox = _dialog displayCtrl 4044;
	if (cbChecked _primaryWeaponCheckbox) then
	{
		_applyItemClassFilter = true;
		_filterToItemClasses append ((primaryWeapon player) call ExileClient_util_item_getCompatibleWeaponItems);
	};
};
if !((handgunWeapon player) isEqualTo "") then
{
	_handgunCheckbox = _dialog displayCtrl 4045;
	if (cbChecked _handgunCheckbox) then
	{
		_applyItemClassFilter = true;
		_filterToItemClasses append ((handgunWeapon player) call ExileClient_util_item_getCompatibleWeaponItems);
	};
};
{
	_categoryClass = _x;
	if (_currentCategoryIndex isEqualTo 0 || _currentCategory isEqualTo _categoryClass) then
	{
		_categoryItemClassNames = getArray(missionConfigFile >> "CfgTraderCategories" >> _categoryClass >> "items");
		{
			_itemClassName = _x;
			_availableItem = false;
			_rankAllowed = getNumber(missionConfigFile >> "CfgExileArsenal" >> _itemClassName >> "traderRank");
			_configBlackMarketRank = getNumber(missionConfigFile >> "CfgeXpochRank" >> "blackmarketRank");
			if(((eXpochClientPlayerRank >= _rankAllowed) || (eXpochClientPlayerRank <= -(_rankAllowed))) && (_rankAllowed < _configBlackMarketRank))then
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
					_indexEntryIndex = _storeListBox lbAdd getText(configFile >> _configName >> _itemClassName >> "displayName");
					_quality = getNumber(missionConfigFile >> "CfgExileArsenal" >> _itemClassName >> "quality");
					_salesPrice = getNumber(missionConfigFile >> "CfgExileArsenal" >> _itemClassName >> "price");
					_rankBased = getNumber(missionConfigFile >> "CfgeXpochTrading" >> "RankBasedTradingON");
					_tradingBoost = 0;
					if(_rankBased isEqualTo 1)then
					{
						_allLevels = getArray(missionConfigFile >> "CfgeXpochTrading" >> "RankBasedTrading");
						{
							if(ExileClientPlayerScore > _x select 0)then
							{
								_tradingBoost = _x select 2;
								_allLevels = [];
							};
						}forEach _allLevels;
					};
					if!(_tradingBoost isEqualTo 0)then
					{
						_priceChange = _salesPrice * (_tradingBoost/100);
						_salesPrice = (floor(_priceChange + _salesPrice)) max 1;
					};
					_requiredRespect = getNumber(missionConfigFile >> "CfgTrading" >> "requiredRespect" >> format["Level%1",_quality]);
					_qualityColor = [1, 1, 1, 1];
					_popTabColor = [1, 1, 1, 1];
					_imageColor = [1, 1, 1, 1];
					switch (_quality) do
					{
						case 2: 		 { _qualityColor = [0.62, 0.87 ,0.23, 1]; };
						case 3:		 { _qualityColor = [0, 0.78, 0.92, 1]; };
						case 4:		 { _qualityColor = [0.62, 0.27, 0.58, 1]; };
						case 5:		 { _qualityColor = [1, 0.7, 0.09, 1]; };
						case 6:		 { _qualityColor = [0.93, 0, 0.48, 1]; };						
					};
					_playerMoney = player getVariable ["ExileMoney", 0];
					_playereXpochMoney = 0;
					_magazines = magazines player;
					_preciousMetals = getArray(missionConfigFile >> "CfgeXpochCurrencies" >> "MetalsNGems");
					{
						if(_x in _preciousMetals)then
						{
							_value = getNumber(missionConfigFile >> "CfgExileArsenal" >> _x >> "price");
							_playereXpochMoney = _playereXpochMoney + _value;
						};
					}forEach _magazines;
					_playerMoney = _playerMoney + _playereXpochMoney;
					if (_salesPrice > _playerMoney) then
					{
						_popTabColor = [0.91, 0, 0, 0.6];
						_missingPopTabs = _salesPrice - _playerMoney;
						_storeListBox lbSetTooltip [_indexEntryIndex, format["Missing %1 Pop Tabs", _missingPopTabs]];
					};
					_storeListBox lbSetData [_indexEntryIndex, _itemClassName];
					_storeListBox lbSetColor [_indexEntryIndex, _qualityColor];
					_storeListBox lbSetPicture [_indexEntryIndex, getText(configFile >> _configName >> _itemClassName >> "picture")];
					_storeListBox lbSetPictureColor [_indexEntryIndex, _imageColor];
					_storeListBox lbSetTextRight [_indexEntryIndex, format["%1", _salesPrice]];
					_storeListBox lbSetColorRight [_indexEntryIndex, _popTabColor];
					_storeListBox lbSetPictureRight [_indexEntryIndex, "exile_assets\texture\ui\poptab_trader_ca.paa"];
					_storeListBox lbSetPictureRightColor [_indexEntryIndex, _popTabColor];
					_storeListBox lbSetValue [_indexEntryIndex, _quality * 100000 + _salesPrice];
				};
			};
		}
		forEach _categoryItemClassNames;
	};
}
forEach getArray(_traderConfig >> "categories");
lbSortByValue _storeListBox;
true