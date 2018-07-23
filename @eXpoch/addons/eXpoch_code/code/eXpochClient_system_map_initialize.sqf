/*
	eXpochClient_system_map_initialize

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
eXpochJailZoneMarkerPositions = [];
eXpochJailZoneMarkerPositionsAndSize = [];
{
	switch (getMarkerType _x) do 
	{
		case "eXpochJailZone": 
		{
			eXpochJailZoneMarkerPositions pushBack (getMarkerPos _x);
			eXpochJailZoneMarkerPositionsAndSize pushBack 
			[
				getMarkerPos _x, 
				(getMarkerSize _x) select 0
			];
		};
	};
}
forEach allMapMarkers;