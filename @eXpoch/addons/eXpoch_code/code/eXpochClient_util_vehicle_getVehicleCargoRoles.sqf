/*
	eXpochClient_util_vehicle_getVehicleCargoRoles

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
eXpochClientVehicleRoles = []; 
eXpochClientVehicleCrew = []; 
 
_vehicle = ExileClientInteractionObject; 
_vehicleRoles = _vehicle call BIS_fnc_vehicleRoles; 
{ 
	if!((_x select 0) in ["Driver","Turret"])then
	{	
		eXpochClientVehicleRoles pushBack _x;
	};
}forEach _vehicleRoles;

eXpochClientVehicleCrew = fullCrew _vehicle;
_countCrew = count(eXpochClientVehicleCrew);
_countRoles = count(eXpochClientVehicleRoles)-1; 
eXpochClientSwitchSeats = _countRoles;
_countRoles