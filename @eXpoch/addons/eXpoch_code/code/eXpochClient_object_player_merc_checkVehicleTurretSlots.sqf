/*
	eXpochClient_object_player_merc_checkVehicleTurretSlots

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
_result = true;
if(isNull (eXpochClientPlayerMercenary))then
{
	_result = false;
	//hint "You do not have a Merc";
};
if!((locked ExileClientInteractionObject) isEqualTo 0)then
{
	_result = false;
	//hint "Locked does not equal 0";
};
if!((locked ExileClientInteractionObject) != 1)then
{
	_result = false;
	//hint "Locked does not equal 1";
};
if(eXpochClientPlayerMercenaryInCar)then
{
	_result = false;
	//hint "Your Merc is already in the car";
};
_cargoSeats = [] call eXpochClient_util_vehicle_getVehicleTurretRoles;
if(_cargoSeats isEqualTo -1)then
{
	_result = false;
	//hint "There are no seats available";
};
_result