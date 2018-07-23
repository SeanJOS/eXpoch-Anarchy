/*
	eXpochClient_util_vehicle_moveSwitchInTurrets

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
if(eXpochClientPlayerMercenaryInCar)then 
{ 
	moveout eXpochClientPlayerMercenary; 
};
private _object = _this;
private _countCrew = count(eXpochClientVehicleTurretCrew)-1;
private _countRoles = count(eXpochClientVehicleTurretRoles)-1;
if!(eXpochClientSwitchTurretSeats < 0) then
{
	if!(_countRoles > _countCrew)then
	{
		hint "NO ROOM";
	}
	else
	{
		private _vehicle = ExileClientInteractionObject; 
		private _index = (((eXpochClientVehicleTurretRoles select eXpochClientSwitchTurretSeats) select 1) select 0);
		_object moveInTurret [_vehicle, [_index]]; 
		eXpochClientSwitchTurretSeats = (eXpochClientSwitchTurretSeats - 1);
	};
}
else
{
	eXpochClientSwitchTurretSeats = count(eXpochClientVehicleTurretRoles)-1;
	private _vehicle = ExileClientInteractionObject; 
	private _index = (((eXpochClientVehicleTurretRoles select eXpochClientSwitchTurretSeats) select 1) select 0);
	_object moveInTurret [_vehicle, [_index]]; 
	eXpochClientSwitchTurretSeats = (eXpochClientSwitchTurretSeats - 1) max 0;
};