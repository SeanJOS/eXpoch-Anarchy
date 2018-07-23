/*
	eXpochServer_object_player_network_trading_purchaseDogRequest

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_dogOwner","_dogType","_sessionID","_playerObject","_msg","_dog","_salesPrice","_playerMoney","_shortPoptabs","_mngValue","_mngTotalValue","_mngArray","_magazinesPlayer","_preciousMetals","_value","_playerCombinedMoney","_ownerPos","_shortAmount","_item2Remove","_check","_logging","_traderLog"];
_dogOwner = _this select 0;
_dogType = _this select 1;
_sessionID = _this select 2;
_playerObject = _sessionID call ExileServer_system_session_getPlayerObject;
if (isNull _playerObject)exitWith
{
	_msg = format["eXpochDEBUG: Server purchaseDogRequest - Player is Null : %1",_dogOwner];
	[_dogOwner,_msg] remoteExecCall ["eXpochClient_object_player_network_purchaseDogResponse",_dogOwner];
};
if !(alive _playerObject)exitWith
{
	_msg = format["eXpochDEBUG: Server purchaseDogRequest - Player is Dead : %1",_dogOwner];
	[_dogOwner,_msg] remoteExecCall ["eXpochClient_object_player_network_purchaseDogResponse",_dogOwner];
};
if (_playerObject getVariable ["ExileMutex",false])exitWith
{
	_msg = format["eXpochDEBUG: Server purchaseDogRequest - Player is Trading : %1",_dogOwner];
	[_dogOwner,_msg] remoteExecCall ["eXpochClient_object_player_network_purchaseDogResponse",_dogOwner];
};
_playerObject setVariable ["ExileMutex", true];
_salesPrice = getNumber (missionConfigFile >> "CfgExileArsenal" >> _dogType >> "price");
if (_salesPrice <= 0)exitWith
{
	_msg = format["eXpochDEBUG: Server purchaseDogRequest - Price is less than 0 : %1",_dogType];
	[_dogOwner,_msg] remoteExecCall ["eXpochClient_object_player_network_purchaseDogResponse",_dogOwner];
};
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
	if (_playerCombinedMoney < _salesPrice)exitWith
	{
		_msg = format["eXpochDEBUG: Server purchaseDogRequest - Player does not have enough money : %1",_playerCombinedMoney];
		[_dogOwner,_msg] remoteExecCall ["eXpochClient_object_player_network_purchaseDogResponse",_dogOwner];
	};
};
diag_log format["DOGS:_dogOwner %1 _dogType%2",_dogOwner,_dogType];
_ownerPos = getPos _dogOwner;
_dog = createAgent [_dogType, getPos _dogOwner, [], 5, "CAN_COLLIDE"]; 
_dog setVariable ["BIS_fnc_animalBehaviour_disable", true];
_dog setVariable ["ExileOwnerUID", (getPlayerUID _playerObject)];
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
ExileServerOwnershipSwapQueue pushBack [_dog,_dogOwner];
[_dog,""] remoteExecCall ["eXpochClient_object_player_network_purchaseDogResponse",_dogOwner];
_logging = getNumber(configFile >> "CfgSettings" >> "Logging" >> "traderLogging");
if (_logging isEqualTo 1) then
{
	_traderLog = format ["PLAYER: ( %1 ) %2 PURCHASED VEHICLE %3 FOR %4 POPTABS | PLAYER TOTAL MONEY: %5",getPlayerUID _playerObject,_playerObject,_vehicleClass,_salesPrice,_playerMoney];
	"extDB2" callExtension format["1:TRADING:%1",_traderLog];
};
if !(isNull _playerObject) then 
{
	_playerObject setVariable ["ExileMutex", false];
};