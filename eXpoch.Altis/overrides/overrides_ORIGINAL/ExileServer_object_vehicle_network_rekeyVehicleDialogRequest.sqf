/**
 * ExileServer_object_vehicle_network_rekeyVehicleDialogRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_sessionID","_parameters","_vehicle","_rekeyCost","_player","_vehiclePinCode","_playerMoney","_responseCode"];
_sessionID = _this select 0;
_parameters = _this select 1;
_vehicle = objectFromNetId (_parameters select 0);
_rekeyCost = _parameters select 1;
try
{
	_player = _sessionID call ExileServer_system_session_getPlayerObject;
	if (isNull _player) then
	{
		throw "Invalid player.";
	};
	if !(alive _player) then
	{
		throw "Dead player.";
	};
	_playerMoney = _player getVariable ["ExileMoney", 0];
	if (_rekeyCost > _playerMoney) then
	{
		throw "Player does not have enough money.";
	};
	_playerUID = getPlayerUID _player;
	_vehiclePinCode = _vehicle getVariable ["ExileAccessCode","000000"];
	if (_vehiclePinCode isEqualTo "000000") then
	{
		_vehicle setVariable ["ExileIsPersistent", true];
		_vehicle setVariable ["ExileIsLocked",-1];
		_vehicle setVariable ["ExileOwnerUID", _playerUID];
		_vehicle setVariable ["ExileAccessCode", "0000"];
		_vehicle setVariable ["ExileIsPersistent", true];
		_vehicle lock 2;
		_vehicle call ExileServer_object_vehicle_database_insert;
		_vehicle call ExileServer_object_vehicle_database_update;
		_vehicle addEventHandler ["GetOut", {_this call ExileServer_object_vehicle_event_onGetOut}];
		_vehicle addEventHandler ["GetIn", {_this call ExileServer_object_vehicle_event_onGetIn}];
		_vehicle addMPEventHandler ["MPKilled", { if !(isServer) exitWith {}; _this call ExileServer_object_vehicle_event_onMPKilled;}];
	};
	_responseCode = "Rekey successful";
	_playerMoney = _playerMoney - _rekeyCost;
	_player setVariable ["ExileMoney", _playerMoney, true];
	format["setPlayerMoney:%1:%2", _playerMoney, _player getVariable ["ExileDatabaseID", 0]] call ExileServer_system_database_query_fireAndForget;
	[_sessionID,"rekeyVehicleDialogResponse",[_responseCode, netId _vehicle,_rekeyCost]] call ExileServer_system_network_send_to;
}
catch 
{
	[_sessionID,"rekeyVehicleDialogResponse",[_exception,"",0]] call ExileServer_system_network_send_to;
};
true