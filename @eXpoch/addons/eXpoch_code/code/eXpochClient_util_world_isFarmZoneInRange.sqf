/*
	eXpochClient_util_world_isFarmZoneInRange
 
	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/

 
private["_position","_radius","_isInRange"];
_position = _this select 0;
_radius = _this select 1;
_isInRange = false;
{
	if ((_x distance2D _position) < _radius) exitWith
	{
		_isInRange = true;
	};
}
forEach eXpochFarmZoneMarkerPositions;
_isInRange