/*
	eXpochClient_gui_characterBox_destroy

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
 
eXpochClientCharacterBoxCamera cameraEffect ["terminate", "back"];
terminate eXpochClientModelThreadHandle;
deleteVehicle eXpochClientCharacterBoxVehicle;
deleteVehicle eXpochClientCharacterBoxCameraFocusObject;
//deleteVehicle eXpochClientCharacterBoxBackgroundObject;
camDestroy eXpochClientCharacterBoxCamera;
ExileClientMoonLight setLightBrightness 1;