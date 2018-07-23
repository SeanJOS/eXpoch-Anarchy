/*
	fn_eXpoch_activateMotionSensor

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
/*
Motion sensor, have a specialty item.

click app, place item at location.

mark map and start script that searches for MAN within 30m :)

*/
eXpochClientMyMotionSensorCounter = 0;
eXpochClientMyMotionSensorMarkers = [];
private _tracking = false;
//_sensor = nearestObject [player,["eXpoch_Item_MotionSensor"]];
//eXpochClientMyMotionSensor pushBack _sensor;
private _sensorPos = position player;
private _sensorName = format["MotionSensor%1",eXpochClientMyMotionSensorCounter];
eXpochClientMyMotionSensorCounter = eXpochClientMyMotionSensorCounter + 1;
private _marker = createMarkerLocal [_sensorName, _sensorPos];
_marker setMarkerTextLocal _enemyName;
_marker setMarkerTypeLocal "plp_mark_trg_Asset";
_marker setMarkerColorLocal "ColorGreen";
_marker setMarkerSizeLocal [0.3,0.3];
eXpochClientMyMotionSensorMarkers pushBack _marker;
["SuccessTitleOnly", ["Motion Sensor Added"]] call ExileClient_gui_toaster_addTemplateToast;
_tracking = true;


if(_tracking)then
{
	sleep 10;
	while {alive player} do 
	{
			
		{
			_sensingArray = [];
			_markerPosition = getMarkerPos _x;
			_sensingArray = nearestObjects [_markerPosition,["Man"],25];
			if!(_sensingArray isEqualTo [])then
			{
				["ErrorTitleOnly", ["Motion Sensor Tripped."]] call ExileClient_gui_toaster_addTemplateToast;
				_x setMarkerTextLocal "Motion";
				_x setMarkerColorLocal "ColorRed";
			}
			else
			{
				_x setMarkerTextLocal " ";
				_x setMarkerColorLocal "ColorGreen";
			};
		}forEach eXpochClientMyMotionSensorMarkers;
		sleep 30;
	};
};