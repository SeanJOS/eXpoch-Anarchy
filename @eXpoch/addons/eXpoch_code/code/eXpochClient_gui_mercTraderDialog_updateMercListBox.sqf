/*
	eXpochClient_gui_mercTraderDialog_updateMercListBox

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_dialog","_categoryClasses","_itemListControl","_categoryClass","_categoryMercClassNames","_className","_salesPrice","_indexEntryIndex","_playerMoney","_quality","_requiredRespect","_qualityColor","_popTabColor","_missingPopTabs","_missingRespect"];
disableSerialization;
_dialog = uiNameSpace getVariable ["RscExileMercTraderDialog", displayNull];
_categoryClasses = _this;
if (_categoryClasses select 0 == "") then
{
	_categoryClasses = getArray(missionConfigFile >> "CfgTraders" >> ExileClientCurrentTrader >> "categories");
};
_itemListControl = _dialog displayCtrl 4001;
lbClear _itemListControl;
{
	_categoryClass = _x;
	_categoryMercClassNames = getArray(missionConfigFile >> "CfgTraderCategories" >> _categoryClass >> "items");
	{
		_className = _x;
		availableItem = false;
		_rankAllowed = getNumber(missionConfigFile >> "CfgExileArsenal" >> _itemClassName >> "traderRank");
		_configBlackMarketRank = getNumber(missionConfigFile >> "CfgeXpochRank" >> "blackmarketRank");
		if(((eXpochClientPlayerRank >= _rankAllowed) || (eXpochClientPlayerRank <= -(_rankAllowed))) && (_rankAllowed < _configBlackMarketRank))then
		{
			_availableItem = true;
		};
		if(_availableItem)then
		{
			_salesPrice = getNumber(missionConfigFile >> "CfgExileArsenal" >> _className >> "price");
			_indexEntryIndex = _itemListControl lbAdd getText(configFile >> "CfgVehicles" >> _className >> "displayName");
			_playerMoney = player getVariable ["ExileMoney", 0];
			_quality = getNumber(missionConfigFile >> "CfgExileArsenal" >> _className >> "quality");
			_requiredRespect = getNumber(missionConfigFile >> "CfgTrading" >> "requiredRespect" >> format["Level%1",_quality]);
			_qualityColor = [1, 1, 1, 1];
			_popTabColor = [1, 1, 1, 1];
			switch (_quality) do
			{
				case 2: 		 { _qualityColor = [0.62, 0.87 ,0.23, 1]; };
				case 3:		 { _qualityColor = [0, 0.78, 0.92, 1]; };
				case 4:		 { _qualityColor = [0.62, 0.27, 0.58, 1]; };
				case 5:		 { _qualityColor = [1, 0.7, 0.09, 1]; };
				case 6:		 { _qualityColor = [0.93, 0, 0.48, 1]; };						
			};
			if (_salesPrice > _playerMoney) then
			{
				_popTabColor = [0.91, 0, 0, 0.6];
				_missingPopTabs = _salesPrice - _playerMoney;
				_itemListControl lbSetTooltip [_indexEntryIndex, format["Missing %1 Pop Tabs", _missingPopTabs]];
			};
			_itemListControl lbSetData [_indexEntryIndex, _className];
			_itemListControl lbSetTextRight [_indexEntryIndex, format["%1", _salesPrice]];
			_itemListControl lbSetPictureRight [_indexEntryIndex, "exile_assets\texture\ui\poptab_trader_ca.paa"];
			_itemListControl lbSetColor [_indexEntryIndex, _qualityColor];
			_itemListControl lbSetColorRight [_indexEntryIndex, _popTabColor];
			_itemListControl lbSetPictureRightColor [_indexEntryIndex, _popTabColor];
			_itemListControl lbSetValue [_indexEntryIndex, _quality * 100000 + _salesPrice];
		};
	}
	forEach _categoryMercClassNames;
}
forEach _categoryClasses;
lbSortByValue _itemListControl;
true