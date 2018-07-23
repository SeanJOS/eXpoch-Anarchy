_fz=[];//FUNCTION: Silence global radio noise + remove getInMan/OutMan eventHandlers
if(surfaceIsWater getPos player)then
{
	if((vehicle player!=player)&&{(vehicle player isKindOf "LandVehicle")||(vehicle player isKindOf "Air")||(vehicle player isKindOf "Ship_F")})then
	{
		_fz=nearestObjects[getPosASLW vehicle player,["Land_HelipadEmpty_F","Land_PortableLongRangeRadio_F"],4];
	}else{
		_fz=nearestObjects[getPosASLW player,["Land_HelipadEmpty_F","Land_PortableLongRangeRadio_F"],2];
	};
};

if(!surfaceIsWater getPos player)then
{
	if((vehicle player!=player)&&{(vehicle player isKindOf "LandVehicle")||(vehicle player isKindOf "Air")||(vehicle player isKindOf "Ship_F")})then
	{
		_fz=nearestObjects[getPosATL vehicle player,["Land_HelipadEmpty_F","Land_PortableLongRangeRadio_F"],4];
	}else{
		_fz=nearestObjects[getPosATL player,["Land_HelipadEmpty_F","Land_PortableLongRangeRadio_F"],2];
	};
};

{
	detach _x;
	deleteVehicle _x;
}forEach _fz;
hintSilent"";//Ends radio noise sound effect

//EVENTHANDLERS: Removes the eventHandlers added in other functions
{
	player removeEventHandler["GetInMan",_x];
	vehicle player removeEventHandler["GetInMan",_x];
	player removeEventHandler["GetOutMan",_x];
	vehicle player removeEventHandler["GetOutMan",_x];
}forEach r_rEH;
r_rEH resize 0;