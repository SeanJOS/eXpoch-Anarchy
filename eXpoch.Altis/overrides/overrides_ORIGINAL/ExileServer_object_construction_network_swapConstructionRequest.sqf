/**
 * ExileServer_object_construction_network_swapConstructionRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_sessionID","_paramaters","_fromVehicleNetID","_toVehicleClassName","_objectProperties","_position","_vectorDirection","_vectorUp","_velocity","_fromVehicle","_flagTexture","_territoryName","_isContainer","_alphabet","_forbiddenCharacter","_toVehicle","_playerObject","_flag","_attachObjectArray","_attachObject","_attachToObject","_attachingOffset"];
_sessionID = _this select 0;
_paramaters = _this select 1;
_fromVehicleNetID = _paramaters select 0;
_toVehicleClassName = _paramaters select 1;
_objectProperties = _paramaters select 2;
_position = _objectProperties select 0;
_vectorDirection = _objectProperties select 1;
_vectorUp = _objectProperties select 2;
_velocity = _objectProperties select 3;

_attachObjectArray = _paramaters select 3;
_attachObject = _attachObjectArray select 0;
_attachToObject = _attachObjectArray select 1;
_attachingOffset = _attachObjectArray select 2;
_attachedYaw = _attachObjectArray select 3;
_attachedPitch = _attachObjectArray select 4;
_attachedRoll = _attachObjectArray select 5;

_fromVehicle = objectFromNetId _fromVehicleNetID;

diag_log format["eXpoch_Debug swapConstrReq begin - _attachObjectArray:%1 _fromVehicle:%2 _toVehicleClassName:%3",_attachObjectArray,_fromVehicle,_toVehicleClassName];

if(_attachObject)then
{
	detach _fromVehicle;
	diag_log format["eXpoch_Debug swapConstrReq detaching - _attachObjectArray:%1 _fromVehicle:%2 _toVehicleClassName:%3",_attachObjectArray,_fromVehicle,_toVehicleClassName];
};
_flagTexture = _fromVehicle getVariable ["ExileFlagTexture","Kappa"];
_territoryName = _fromVehicle getVariable ["ExileTerritoryName","Kappa"];
_isContainer = isNumber(configFile >> "CfgVehicles" >> _toVehicleClassName >> "exileContainer");
_territoryName = _territoryName call ExileClient_util_string_trim;
_alphabet = getText (missionConfigFile >> "CfgClans" >> "clanNameAlphabet");
_forbiddenCharacter = [_territoryName, _alphabet] call ExileClient_util_string_containsForbiddenCharacter;
if!(_forbiddenCharacter isEqualTo -1)exitWith{format ["Invalid teritory name: %1",_territoryName] call ExileServer_util_log;};
deleteVehicle _fromVehicle;
_toVehicle = createVehicle[_toVehicleClassName, _position, [], 0, "CAN_COLLIDE"];
_toVehicle setVelocity _velocity;
_toVehicle setVectorDirAndUp [_vectorDirection, _vectorUp];
if(_attachObject)then
{
	_newDirAndUp = [[sin _attachedYaw * cos _attachedPitch, cos _attachedYaw * cos _attachedPitch, sin _attachedPitch],[[ sin _attachedRoll,-sin _attachedPitch,cos _attachedRoll * cos _attachedPitch],-_attachedYaw] call BIS_fnc_rotateVector2D];
	_position = ASLtoATL (AGLtoASL (_attachToObject modelToWorld _attachingOffset));
	_toVehicle setPosATL _position;
	_toVehicle attachTo [_attachToObject,_attachingOffset];
	_toVehicle setVectorDirAndUp _newDirAndUp;
	diag_log format["eXpoch_Debug swapConstrReq attaching - _attachObjectArray:%1 _fromVehicle:%2 _toVehicleClassName:%3",_attachObjectArray,_fromVehicle,_toVehicleClassName];
	_toVehicle setVariable["eXpochClientAttachedObject",getPlayerUID _playerObject,true];
}
else
{
	_toVehicle setPosATL _position;
};
_playerObject = _sessionID call ExileServer_system_session_getPlayerObject;
_toVehicle setVariable ["ExileOwnerUID",getPlayerUID _playerObject,true];
_toVehicle setVariable ["ExileIsPersistent",true];
//_toVehicle call ExileServer_util_vehicle_enableSimulationIfRequired;
if (getNumber(configFile >> "CfgVehicles" >> _toVehicleClassName >> "exileRequiresSimulation") isEqualTo 1) then
{
	_toVehicle enableSimulationGlobal true;
	//_toVehicle enableDynamicSimulation true;
}
else 
{
	_toVehicle enableSimulationGlobal false;
	//_toVehicle enableDynamicSimulation false;
};

switch (true) do 
{
	case (!(_flagTexture isEqualTo "Kappa")) :
	{
		[_toVehicle,_territoryName,_flagTexture] call ExileServer_system_territory_create;
		[_toVehicle,_territoryName,_flagTexture] call ExileServer_system_territory_database_insert;
		_toVehicle call ExileServer_system_territory_updateNearContainers;
		_toVehicle call ExileServer_system_territory_updateNearConstructions;
	};
	case (_attachObject) : {};
	case (_isContainer)	:				{ _toVehicle call ExileServer_object_container_database_insert; };
	default 							{ _toVehicle call ExileServer_object_construction_database_insert; };
};
_flag = _toVehicle call ExileClient_util_world_getTerritoryAtPosition;
if (!(isNull _flag) && !(_attachObject))then 
{
	_flag call ExileServer_system_territory_updateNumberOfConstructions;
};
_playerObject setVariable ["ExileConstructionObject", nil];
true