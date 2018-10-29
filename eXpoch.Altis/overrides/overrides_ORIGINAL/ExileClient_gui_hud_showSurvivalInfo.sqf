/**
 * ExileClient_gui_hud_showSurvivalInfo
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_showDaysSurvived","_locationName","_timeAlive","_msg","_msg"];
_showDaysSurvived = _this;
_locationName = [(getPos player)] call ExileClient_util_world_getNearestLocationName;
_timeAlive = ExileClientPlayerTimeAlive;
_msg = "Day 1";
_hours = " | Zero Hour";
if(_timeAlive >= 21600)then
{
	_dayz = floor(_timeAlive/21600);
	_timeAliveRemainder = _timeAlive - (21600 * _dayz);
	_msg = format["Day %1",_dayz+1];
	_approxHours = floor(_timeAliveRemainder/900);
	_hours = format[" | Hour %1",_approxHours+1];
};
if((_timeAlive >= 900) && (_timeAlive < 21600))then
{
	_approxHours = floor(_timeAlive/900);
	_timeAliveMinutes = _timeAlive - 900;
	_hours = format[" | Hour %1",_approxHours+1];
	
};
_msg = _msg + _hours;
if(isNil "ExileClientPlayerFirstLogin")then
{
	if !(_locationName isEqualTo "") then
	{
		_messages = 
		[
				[(toUpper _locationName), "align='left' size='0.7' font='PuristaSemibold'"],
				["","<br/>"],
				[([daytime] call BIS_fnc_timeToString), "align='left' size='0.5' font='PuristaMedium'"],
				["","<br/>"],
				[_msg, "align='left' size='0.8' font='PuristaSemibold'"]
		];
		[_messages] spawn BIS_fnc_typeText2;
		ExileClientPlayerFirstLogin = true;
	};
	ExileClientLastLocation = _locationName;
}
else
{
	if !(_locationName isEqualTo "") then
	{
		_messages = 
		[
				[(toUpper _locationName), "align='left' size='0.7' font='PuristaSemibold'"],
				["","<br/>"],
				[([daytime] call BIS_fnc_timeToString), "align='left' size='0.7' font='PuristaMedium'"]
		];
		[_messages] spawn BIS_fnc_typeText2;
	};
	ExileClientLastLocation = _locationName;
};