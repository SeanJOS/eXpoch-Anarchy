/*
	eXpochClient_gui_characterBox_update

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_vehicleClassName","_modelBoundingDimensions","_modelBoundingRadius"];
_vehicleClassName = _this;
if !(isNull eXpochClientCharacterBoxVehicle) then
{
	deleteVehicle eXpochClientCharacterBoxVehicle;
};
eXpochClientCharacterBoxVehicle = _vehicleClassName;
eXpochClientCharacterBoxVehicle setPosATL eXpochClientCharacterBoxPosition;
eXpochClientCharacterBoxVehicle setDir 270;
eXpochClientCharacterBoxVehicle enableSimulation true;
eXpochClientCharacterBoxVehicle allowDamage false;

_modelBoundingDimensions = eXpochClientCharacterBoxVehicle call BIS_fnc_boundingBoxDimensions;
_modelBoundingRadius = eXpochClientCharacterBoxVehicle call BIS_fnc_boundingCircle;
eXpochClientCharacterBoxCameraFocusPosition = 
[
	eXpochClientCharacterBoxPosition select 0, 
	eXpochClientCharacterBoxPosition select 1, 
	(eXpochClientCharacterBoxPosition select 2) + ((_modelBoundingDimensions select 2) * 0.275)
];
eXpochClientCharacterBoxCameraFocusObject setPosATL eXpochClientCharacterBoxCameraFocusPosition;
eXpochClientCharacterBoxCameraPosition = 
[
	(eXpochClientCharacterBoxCameraFocusPosition select 0) - _modelBoundingRadius, 
	eXpochClientCharacterBoxCameraFocusPosition select 1, 
	(eXpochClientCharacterBoxPosition select 2) + (_modelBoundingDimensions select 2) 
];
eXpochClientCharacterBoxCamera camPrepareTarget eXpochClientCharacterBoxCameraFocusObject;
eXpochClientCharacterBoxCamera setPosATL eXpochClientCharacterBoxCameraPosition;
eXpochClientCharacterBoxCamera camCommitPrepared 0;

[] spawn {
waitUntil{vehicle player == player && time > 6};
player hideobject false;
};