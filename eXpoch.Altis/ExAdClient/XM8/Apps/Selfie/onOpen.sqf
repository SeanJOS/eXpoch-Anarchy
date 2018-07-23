private ["_camera"];

if ((nearestObject [player,'Exile_Construction_Abstract_Static']) distance player < 100) exitWith {
    (findDisplay 24015) closeDisplay 0;
    ["ErrorTitleAndText", ["Action Failed", format ["You are to close a base"]]] call ExileClient_gui_toaster_addTemplateToast; 
};

if (ExileClientPlayerIsInCombat) exitWith {
	(findDisplay 24015) closeDisplay 0;
	["ErrorTitleAndText", ["Action Failed", format ["You are in combat"]]] call ExileClient_gui_toaster_addTemplateToast; 
};

if !(player getVariable ["ExileXM8IsOnline", false]) exitWith { 
	(findDisplay 24015) closeDisplay 0;
	["ErrorTitleAndText", ["Action Failed", format ["Your 8G network is offline"]]] call ExileClient_gui_toaster_addTemplateToast; 
};

(findDisplay 24015) closeDisplay 0;
StatusEnabled = false;
player enablesimulation false; 
showCinemaBorder true;
_camera = "camera" camCreate (player modelToWorld [1,1,2]);
_camera cameraEffect ["Internal","TOP"];  
_camera camSetTarget vehicle player;  
_camera camSetRelPos [0,2,2];  
_camera camCommit 5;  

waitUntil {camCommitted _camera};
cutText ['','WHITE IN'];
playSound "Selfie";
uiSleep 2;
player enablesimulation true;
StatusEnabled = false;
_camera cameraEffect ["terminate","back"];
camDestroy _camera;
