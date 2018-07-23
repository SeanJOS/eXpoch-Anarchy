/*
	eXpochClient_gui_characterBox_thread_update

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
 
private["_direction"];
waituntil { !(IsNull eXpochClientCharacterBoxVehicle) };
_direction = 270;
eXpochClientCharacterBoxVehicle setDir _direction;
ExAd_SB_Dialog_Layer cutText ["", "PLAIN"];
false call ExileClient_gui_hud_toggle;
/*while {true} do 
{
	_direction = _direction + 0.5;
	if (_direction >= 360) then 
	{
		_direction = 0;
	};
	eXpochClientCharacterBoxVehicle setDir _direction;
	uiSleep 0.1;
};*/