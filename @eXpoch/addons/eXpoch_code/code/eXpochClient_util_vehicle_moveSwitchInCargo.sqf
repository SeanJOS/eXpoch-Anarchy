/*
	eXpochClient_util_vehicle_moveSwitchInCargo

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
private _countCrew = count(eXpochClientVehicleCrew)-1;
private _countRoles = count(eXpochClientVehicleRoles)-1;
if!(eXpochClientSwitchSeats < 0) then
{
	if!(_countRoles > _countCrew)then
	{
		hint "NO ROOM";
	}
	else
	{
		private _vehicle = ExileClientInteractionObject; 
		private _index = (((eXpochClientVehicleRoles select eXpochClientSwitchSeats) select 1) select 0);
		_object moveInCargo [_vehicle, _index]; 
		eXpochClientSwitchSeats = (eXpochClientSwitchSeats - 1);
	};
}
else
{
	eXpochClientSwitchSeats = count(eXpochClientVehicleRoles)-1;
	private _vehicle = ExileClientInteractionObject; 
	private _index = (((eXpochClientVehicleRoles select eXpochClientSwitchSeats) select 1) select 0);
	_object moveInCargo [_vehicle, _index]; 
	eXpochClientSwitchSeats = (eXpochClientSwitchSeats - 1) max 0;
};