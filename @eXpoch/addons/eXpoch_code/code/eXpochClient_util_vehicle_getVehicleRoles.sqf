/*
	eXpochClient_util_vehicle_getVehicleRoles

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
 eXpochClientVehicleRoles pushBack _x; 
}forEach _vehicleRoles;

eXpochClientVehicleCrew = fullCrew _vehicle;
_countCrew = count(eXpochClientVehicleCrew)-1;
_countRoles = count(eXpochClientVehicleRoles)-1; 
eXpochClientSwitchSeats = _countRoles;
_countRoles