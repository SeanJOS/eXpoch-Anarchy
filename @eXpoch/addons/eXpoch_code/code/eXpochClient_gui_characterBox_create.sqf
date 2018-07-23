/*
	eXpochClient_gui_characterBox_create

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
 
eXpochClientCharacterBoxPosition = 
[
	(getPosATL player) select 0, 
	(getPosATL player) select 1, 
	((getPosATL player) select 2)
];
eXpochClientCharacterBoxVehicle = objNull; 
/*
eXpochClientCharacterBoxBackgroundObject = "Exile_Helper_50mBox" createVehicleLocal eXpochClientCharacterBoxPosition;
eXpochClientCharacterBoxBackgroundObject setPosATL eXpochClientCharacterBoxPosition;
eXpochClientCharacterBoxBackgroundObject setDir 270;
eXpochClientCharacterBoxBackgroundObject setObjectTexture [0, "#(rgb,8,8,3)color(0.5,0.5,0.5,1)"];
*/
eXpochClientCharacterBoxCameraFocusObject = "LOGIC" createVehicleLocal eXpochClientCharacterBoxPosition;
eXpochClientCharacterBoxCameraFocusObject setPosATL eXpochClientCharacterBoxPosition;
eXpochClientCharacterBoxCameraPosition = 
[
	(eXpochClientCharacterBoxPosition select 0) - 25, 
	eXpochClientCharacterBoxPosition select 1, 
	eXpochClientCharacterBoxPosition select 2
];
eXpochClientCharacterBoxCamera = "camera" camCreate eXpochClientCharacterBoxCameraPosition;
eXpochClientCharacterBoxCamera cameraEffect ["internal", "back"];
eXpochClientCharacterBoxCamera camPrepareFOV 0.7; 
eXpochClientCharacterBoxCamera camPrepareTarget eXpochClientCharacterBoxCameraFocusObject;
eXpochClientCharacterBoxCamera setPosATL eXpochClientCharacterBoxCameraPosition;
showCinemaBorder false; 
eXpochClientCharacterBoxCamera camCommitPrepared 0;
eXpochClientModelThreadHandle = [] spawn eXpochClient_gui_CharacterBox_thread_update;
