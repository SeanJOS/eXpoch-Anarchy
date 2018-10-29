/**
 * ExileServer_system_trading_network_purchaseItemRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_sessionID","_parameters","_itemClassName","_quantity","_containerType","_containerNetID","_playerObject","_vehicleObject","_salesPrice","_playerMoney","_playerRespect","_quality","_requiredRespect","_logging","_traderLog","_responseCode","_shortPoptabs","_mngValue","_mngTotalValue","_mngArray","_magazinesPlayer","_preciousMetals","_value","_playerCombinedMoney"];
_sessionID = _this select 0;
_parameters = _this select 1;
_itemClassName = _parameters select 0;
_quantity = _parameters select 1;
_containerType = _parameters select 2;
_containerNetID = _parameters select 3;
try 
{
	_playerObject = _sessionID call ExileServer_system_session_getPlayerObject;
	if (_playerObject getVariable ["ExileMutex",false]) then
	{
		throw 12;
	};
	_playerObject setVariable ["ExileMutex",true];
	_vehicleObject = objNull;
	if (isNull _playerObject) then
	{
		throw 1;
	};
	if !(alive _playerObject) then
	{
		throw 2;
	};
	if !(isClass (missionConfigFile >> "CfgExileArsenal" >> _itemClassName) ) then
	{
		throw 3;
	};
	_playerRespect = _playerObject getVariable ["ExileScore", 0];
	_rankBased = getNumber(missionConfigFile >> "CfgeXpochTrading" >> "RankBasedTradingON");
	_tradingBoost = 0;
	if(_rankBased isEqualTo 1)then
	{
		_allLevels = getArray(missionConfigFile >> "CfgeXpochTrading" >> "RankBasedTrading");
		{
			if(_playerRespect > _x select 0)then
			{
				_tradingBoost = _x select 2;
				_allLevels = [];
			};
		}forEach _allLevels;
	};
	_salesPrice = getNumber (missionConfigFile >> "CfgExileArsenal" >> _itemClassName >> "price");
	if!(_tradingBoost isEqualTo 0)then
	{
		_priceChange = _salesPrice * (_tradingBoost/100);
		_salesPrice = (floor(_priceChange + _salesPrice)) max 1;
	};
	if (_salesPrice <= 0) then
	{
		throw 4;
	};
	//DP 
	_playerMoney = _playerObject getVariable ["ExileMoney", 0];
	_shortPoptabs = false;
	if (_playerMoney < _salesPrice) then
	{
		_shortPoptabs = true;
	};
	_mngValue = 0;
	_mngTotalValue = 0;
	_mngArray = [];
	if(_shortPoptabs)then
	{
		_magazinesPlayer = magazines _playerObject;
		_preciousMetals = getArray(missionConfigFile >> "CfgeXpochCurrencies" >> "MetalsNGems");
		{
			if(_x in _preciousMetals)then
			{
				_value = getNumber(missionConfigFile >> "CfgExileArsenal" >> _x >> "price");
				_mngTotalValue = _mngTotalValue + _value;
				_mngArray pushBack [_x,_value];
			};
		}forEach _magazinesPlayer;
		_playerCombinedMoney = _playerMoney + _mngTotalValue;
		if (_playerCombinedMoney < _salesPrice) then
		{
			throw 5;
		};
	};
	/*
	_quality = getNumber(missionConfigFile >> "CfgExileArsenal" >> _itemClassName >> "quality");
	_requiredRespect = getNumber(missionConfigFile >> "CfgTrading" >> "requiredRespect" >> format["Level%1",_quality]);
	if (_playerRespect < _requiredRespect) then
	{
		throw 14;
	};
	*/
	//DP short remove some gold or gems
	if(_shortPoptabs)then
	{
		_shortAmount = _salesPrice - _playerMoney;
		_check = false;
		{
			_mngValue = _x select 1;
			if(_mngValue > _shortAmount)then
			{
				_item2Remove = _x select 0;
				_playerObject removeItem _item2Remove;
				_playerMoney = _playerMoney + _mngValue;
				_check = true;
			};
		}forEach _mngArray;
		if!(_check)then
		{
			if(_mngTotalValue > _shortAmount)then
			{
				{
					_item2Remove = _x select 0;
					_playerObject removeItem _item2Remove;
				}forEach _mngArray;
				_playerMoney = _playerMoney + _mngTotalValue;
			};
		};
	};
	
	_playerMoney = ceil(_playerMoney - _salesPrice);
	_playerObject setVariable ["ExileMoney", _playerMoney, true];
	format["setPlayerMoney:%1:%2", _playerMoney, _playerObject getVariable ["ExileDatabaseID", 0]] call ExileServer_system_database_query_fireAndForget;
	[_sessionID, "purchaseItemResponse", [0, _salesPrice, _itemClassName, 1, _containerType, _containerNetID]] call ExileServer_system_network_send_to;
	_logging = getNumber(configFile >> "CfgSettings" >> "Logging" >> "traderLogging");
	if (_logging isEqualTo 1) then
	{
		_traderLog = format ["PLAYER: ( %1 ) %2 PURCHASED ITEM %3 FOR %4 POPTABS | PLAYER TOTAL MONEY: %5",getPlayerUID _playerObject,_playerObject,_itemClassName,_salesPrice,_playerMoney];
		"extDB2" callExtension format["1:TRADING:%1",_traderLog];
	};
	if !(_vehicleObject isEqualTo objNull) then
	{
		_vehicleObject call ExileServer_object_vehicle_database_update;
	}
	else 
	{
		_playerObject call ExileServer_object_player_database_update;
	};
}
catch 
{
	_responseCode = _exception;
	[_sessionID, "purchaseItemResponse", [_responseCode, 0, "", 0, 0, ""]] call ExileServer_system_network_send_to;
};	
_playerObject setVariable ["ExileMutex",false];
true