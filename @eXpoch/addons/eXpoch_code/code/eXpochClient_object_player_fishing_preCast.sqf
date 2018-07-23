/*
	eXpochClient_object_player_fishing_preCast

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
if(surfaceIsWater position player)then
{
	if(isNull EPOCH_myBobber)then
	{
		[] spawn eXpochClient_object_player_fishing_castReel;
	}
	else
	{
		["ErrorTitleAndText", ["Fishing 101", "Be patient my young Padawan, you must reel back in your line first, you still have a bobber in the water!"]] call ExileClient_gui_toaster_addTemplateToast;
		if!(eXpochClientPlayerIsFishing)then
		{
			EPOCH_myBobber = objNull;
		};
	};
};