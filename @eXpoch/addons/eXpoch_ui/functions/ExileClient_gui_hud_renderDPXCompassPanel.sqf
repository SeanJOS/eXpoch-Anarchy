/**
 * ExileClient_gui_hud_renderDPXCompassPanel
 *
 * DonkeyPuncheD Exile Mod
 * DonkeyPunch.INFO
 * © 2016 DirtySanchez
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
 
private["_display","_degrees","_degreesValueControl","_direction","_directionLabelControl"];
disableSerialization;
if (diag_tickTime - ExileHudDPXCompassRenderedAt >= 0.25) then
{
	ExileHudDPXCompassRenderedAt = diag_tickTime;
	_display = uiNamespace getVariable "RscExileHUD";
	_degrees = round (getDir (vehicle player));
	_degreesValueControl = _display displayCtrl 6402;  
	_degreesValueControl ctrlSetText format["%1%2",_degrees,"°"];
	_direction = [];
	if((_degrees >= 337.6) && (_degrees <= 360)) then {_direction="N"};
	if((_degrees >= 0) && (_degrees < 22.5)) then {_direction="N"};
	if((_degrees >= 22.6) && (_degrees < 67.5)) then {_direction="NE"};
	if((_degrees >= 67.6) && (_degrees < 112.5)) then {_direction="E"};
	if((_degrees >= 112.6) && (_degrees < 157.5)) then {_direction="SE"};
	if((_degrees >= 157.6) && (_degrees < 202.5)) then {_direction="S"};
	if((_degrees >= 202.6) && (_degrees < 247.5)) then {_direction="SW"};
	if((_degrees >= 247.6) && (_degrees < 292.5)) then {_direction="W"};
	if((_degrees >= 292.6) && (_degrees < 337.5)) then {_direction="NW"};
	_directionLabelControl = _display displayCtrl 6403; 
	_directionLabelControl ctrlSetText format["%1", _direction];
	
	_grid = mapGridPosition  player; 
	_xx = (format[_grid]) select  [0,3]; 
	_yy = (format[_grid]) select  [3,3];
	_gridValueControl = _display displayCtrl 6404;  
	_gridValueControl ctrlSetText format["%1%2%3",_xx,"|",_yy];
	
	_infected = player getVariable["ryanzombiesinfected",0];
	_rzinfection = round(_infected * 100);	
	_rziValueControl = _display displayCtrl 6405;
	_rziValueControl ctrlSetText format ["%1",_rzinfection];
	
};