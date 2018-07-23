/*
	eXpochClient_util_world_isInJailZone

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_position","_result"];
_position = _this;
_result = false;
{
	if (((_x select 0) distance2D _position) < (_x select 1)) exitWith
	{
		_result = true;
	};
}
forEach eXpochJailZoneMarkerPositionsAndSize;
_result