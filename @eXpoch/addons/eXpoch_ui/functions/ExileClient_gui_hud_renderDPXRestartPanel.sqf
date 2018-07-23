/**
 * ExileClient_gui_hud_renderDPXRestartPanel
 *
 * DonkeyPuncheD Exile Mod
 * DonkeyPunch.INFO
 * © 2016 DirtySanchez
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display","_time","_timeValueControl","_hours","_minutes","_timeLabelControl1","_timeLabelControl2"];
disableSerialization;
if (diag_tickTime - ExileHudDPXRestartRenderedAt >= 0.25) then
{
	ExileHudDPXRestartRenderedAt = diag_tickTime;
	_display = uiNamespace getVariable "RscExileHUD";
	_time = (round(180-(serverTime)/60));  //edit the '240' value (60*4=240) to change the countdown timer if your server restarts are shorter or longer than 4 hour intervals
	_hours = (floor(_time/60));
	_minutes = (_time - (_hours * 60));
		switch(_minutes) do
		{
			case 9: {_minutes = "09"};
			case 8: {_minutes = "08"};
			case 7: {_minutes = "07"};
			case 6: {_minutes = "06"};
			case 5: {_minutes = "05"};
			case 4: {_minutes = "04"};
			case 3: {_minutes = "03"};
			case 2: {_minutes = "02"};
			case 1: {_minutes = "01"};
			case 0: {_minutes = "00"};
		};
	_timeValueControl = _display displayCtrl 6415;  
	_timeValueControl ctrlSetText format["%1%2%3",_hours,":",_minutes];
	
	_timeLabelControl1 = _display displayCtrl 6416;
	_timeLabelControl2 = _display displayCtrl 6417;
	if (_hours < 1) then
	{
		_timeLabelControl1 ctrlSetTextColor [255/255, 0/255, 0/255, 1];
		_timeLabelControl2 ctrlSetTextColor [255/255, 0/255, 0/255, 1];
		_timeValueControl ctrlSetTextColor [255/255, 0/255, 0/255, 1];
	}
	else 
	{
		_timeLabelControl1 ctrlSetTextColor [221/255, 38/255, 38/255, 1];
		_timeLabelControl2 ctrlSetTextColor [221/255, 38/255, 38/255, 1];
	};
};