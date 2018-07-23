/*
	eXpochClient_object_player_dog_checkVehicleCargoSlots

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
_result = true;
if(isNull (eXpochClientPlayerBestFriend))then
{
	_result = false;
	//hint "You do not have a Dog";
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
if(eXpochClientPlayerBestFriendInCar)then
{
	_result = false;
	//hint "Your Dog is already in the car";
};
_cargoSeats = [] call eXpochClient_util_vehicle_getVehicleCargoRoles;
if(_cargoSeats isEqualTo -1)then
{
	_result = false;
	//hint "There are no seats available";
};
_result