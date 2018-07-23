/*
	eXpochClient_util_vehicle_getVehicleCargoRoles

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
eXpochClientVehicleTurretRoles = []; 
eXpochClientVehicleTurretCrew = []; 
 
_vehicle = ExileClientInteractionObject; 
_vehicleRoles = _vehicle call BIS_fnc_vehicleRoles; 
{ 
	if!((_x select 0) in ["Driver","Cargo"])then
	{	
		eXpochClientVehicleTurretRoles pushBack _x;
	};
}forEach _vehicleRoles;

eXpochClientVehicleTurretCrew = fullCrew _vehicle;
_countCrew = count(eXpochClientVehicleTurretCrew);
_countRoles = count(eXpochClientVehicleTurretRoles)-1; 
eXpochClientSwitchTurretSeats = _countRoles;
_countRoles