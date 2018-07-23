/*
	eXpochClient_object_player_vehicle_checkPlayer

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_player","_inVehicle","_vehicle","_vehName","_turrets","_isLocal","_noVehActions","_noTurretActions","_inDriver","_inCommander","_inTurret","_lockID","_unlockID","_vehicleNetID","_ejectionID","_vehicleObject","_pincode","_serviceLoc","_reloadLoc","_weaponTurret","_classNameTurret","_nameTurret","_ammoTurret"];

_player = (vehicle player == player);
_inVehicle = !(vehicle player == player);
_vehicle = typeOf vehicle player;
_vehName = getText(configFile >> "CfgVehicles" >> _vehicle >> "displayName");
_turrets = isClass(configFile >> "CfgVehicles" >> _vehicle >> "Turrets");
_isLocal = vehicle player turretLocal [0];
_noVehActions = eXpochClientInVehicleInteractions isEqualTo [];
_noTurretActions = eXpochClientInTurretInteractions isEqualTo [];
_inDriver = (driver vehicle player == player);
_inCommander = (commander vehicle player == player);
_inTurret = (gunner vehicle player == player);

if(_inVehicle)then
{
	if(_inDriver)then
	{
		if(_noVehActions)then
		{
			_lockID = player addAction ["Lock Doors", { 
				_vehicleNetID = player getVariable["DonkeyPunch_Vehicle_NetID",""];
				_vehicleObject = player getVariable["DonkeyPunch_Vehicle_Object",""];
				_pincode = _vehicleObject getVariable ["ExileAlreadyKnownCode",""];
				["lockToggle",[_vehicleNetID,_pincode,true]] call ExileClient_system_network_send;
			}, nil, 0, false, true, "", "!(vehicle player == player)&&(driver vehicle player == player)&&((locked vehicle player) isEqualTo 0)&&((locked ExileClientInteractionObject) != 1)&&(speed player < 5)"];
			eXpochClientInVehicleInteractions pushback _lockID;
			
			_unlockID = player addAction ["Unlock Doors", { 
				_vehicleNetID = player getVariable["DonkeyPunch_Vehicle_NetID",""];
				_vehicleObject = player getVariable["DonkeyPunch_Vehicle_Object",""];
				_pincode = _vehicleObject getVariable ["ExileAlreadyKnownCode",""];
				["lockToggle",[_vehicleNetID,_pincode,false]] call ExileClient_system_network_send;
			}, nil, 0, false, true, "", "!(vehicle player == player)&&(driver vehicle player == player)&&((locked vehicle player) isEqualTo 2)&&((locked ExileClientInteractionObject) != 1)&&(speed player < 5)"];
			eXpochClientInVehicleInteractions pushback _unlockID;
		};
		if(_noTurretActions)then
		{
			_ammoDriver = vehicle player magazinesTurret[-1];
			_weaponDriver = vehicle player weaponsTurret[-1];
			if((_noTurretActions) && (_inDriver) && !(isNil "_weaponDriver") && !(_ammoDriver isEqualTo []))then
			{
				_turretID = player addAction [format["Add Mag to %1",(vehicle player magazinesTurret[-1]) select 0],{
					[(vehicle player weaponsTurret[-1]) select 0] call eXpochClient_object_player_vehicle_checkDriverAmmo;
				}];
				eXpochClientInTurretInteractions pushBack _turretID;
				_count = count(_ammoDriver);
				if(_count >= 2)then
				{
					_turretID = player addAction [format["Add Mag to %1",(vehicle player magazinesTurret[-1]) select 1],{
						[(vehicle player weaponsTurret[-1]) select 1] call eXpochClient_object_player_vehicle_checkDriverAmmo;
					}];
					eXpochClientInTurretInteractions pushBack _turretID;
				};
				if(_count >= 3)then
				{
					_turretID = player addAction [format["Add Mag to %1",(vehicle player magazinesTurret[-1]) select 2],{
						[(vehicle player weaponsTurret[-1]) select 2] call eXpochClient_object_player_vehicle_checkDriverAmmo;
					}];
					eXpochClientInTurretInteractions pushBack _turretID;
				};
			};
		};
	};
	if(_inCommander)then{};
	if!((assignedVehicleRole player) isEqualTo [])then
	{
		_weaponTurret = (vehicle player) weaponsTurret ((assignedVehicleRole player) select 1);
	};
	if(_inTurret || !(isNil "_weaponTurret"))then
	{
		if(_noTurretActions)then
		{
			_classNameTurret = _weaponTurret select 0;
			_nameTurret = getText(configFile >> "CfgWeapons" >> _classNameTurret >> "displayName");
			_turretID = player addAction [format["Add Mag to %1",_nameTurret],{
				[] call eXpochClient_object_player_vehicle_checkTurretAmmo;
			}];
			eXpochClientInTurretInteractions pushBack _turretID;
		};
	};
	if(!(_inTurret) && !(_inDriver))then
	{
		//if!(_isLocal)then
		//{
			{player removeAction _x;}forEach eXpochClientInTurretInteractions;
			eXpochClientInTurretInteractions = [];
		//};
	};
}
else
{
	if!(_inDriver)then
	{
		{player removeAction _x;}forEach eXpochClientInVehicleInteractions;
		eXpochClientInVehicleInteractions = [];
	};
	if!(_inTurret && _inDriver)then
	{
		{player removeAction _x;}forEach eXpochClientInTurretInteractions;
		eXpochClientInTurretInteractions = [];
	};
	if(_player)then
	{
		{player removeAction _x;}forEach eXpochClientInVehicleInteractions;
		{player removeAction _x;}forEach eXpochClientInTurretInteractions;
		eXpochClientInVehicleInteractions = [];
		eXpochClientInTurretInteractions = [];
	};
};