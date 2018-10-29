/**
 * ExileServer_system_process_postInit
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 * 
 * eXpoch Addon Mod
 * by DirtySanchez of DonkeyPunch Community Gaming
 * DonkeyPunch.INFO or discord.gg/eXpoch
 *
 */
 
if (!isNil "PublicServerVersion") then
{
	if (getNumber(configFile >> "CfgSettings" >> "Escape" >> "enableEscape") isEqualTo 1) then 
	{		
		call ExileClient_system_map_initialize;
		call ExileServer_system_thread_initialize;
		call ExileServer_system_escape_initialize;
		call ExileServer_system_swapOwnershipQueue_initialize;
		call ExileServer_system_simulationMonitor_initialize;
		call ExileServer_system_lootManager_initialize;
		PublicServerIsLoaded = true; 
		publicVariable "PublicServerIsLoaded";
		format ["Escape server is up and running! Version: %1", PublicServerVersion] call ExileServer_util_log;
		call ExileServer_system_rcon_event_ready;
	}
	else
	{
		call ExileClient_system_map_initialize;
		call ExileServer_system_thread_initialize;
		call ExileServer_system_playerSaveQueue_initialize;
		call ExileServer_system_swapOwnershipQueue_initialize;
		call ExileServer_system_vehicleSaveQueue_initialize;
		call ExileServer_system_simulationMonitor_initialize;
		call ExileServer_system_lootManager_initialize;
		call ExileServer_system_weather_initialize;
		call ExileServer_system_garbageCollector_cleanDatabase;
		call ExileServer_system_event_initialize;
		call ExileServer_world_initialize;
		/* eXpoch New Addition */
		_russianRoulette = getNumber(missionConfigFile >> "CfgeXpoch" >> "ThreadRussianRouletteON");
		if(_russianRoulette isEqualTo 1)then
		{
			call ExileServer_system_russianRoulette_initialize;
		};
		
		PublicServerIsLoaded = true; 
		publicVariable "PublicServerIsLoaded";
		format ["Server is up and running! Version: %1", PublicServerVersion] call ExileServer_util_log;
		call ExileServer_system_garbageCollector_start;
		call ExileServer_system_rcon_event_ready;
		
		/* eXpoch New Addition */
		//call eXpochServer_system_disableGasStaions_initialize;
		_disableGas = getNumber(missionConfigFile >> "CfgeXpochMapping" >> "DisableGasStations");
		if(isNil {_disableGas})then{_disableGas = 0;};
		if(_disableGas isEqualTo 1)then
		{
			_classNames = getArray(missionConfigFile >> "CfgeXpochMapping" >> "GasStationClassNames");
			{
				for "_i" from 0 to(count _classNames-1) do 
				{
					_bldgObjects = nearestObjects [(getArray (configFile >> "CfgWorlds" >> worldName >> "centerPosition")), [_x], 20000];
					{
						_x enableSimulation false;
						_x allowDamage false;
					}forEach _bldgObjects;
				};
			}forEach _classNames;
		};
		
		//call eXpochServer_system_forceMapObjDamage_initialize;
		_forceMapObjDmg = [];
		_forceMapObjDmg = getArray(missionConfigFile >> "CfgeXpochMapping" >> "MapObjectForcedDamage");
		if!(_forceMapObjDmg isEqualTo [])then
		{
			{
				_objectClass = _x select 0;
				_damage = _x select 1;
				_bldgObjects = nearestObjects [(getArray (configFile >> "CfgWorlds" >> worldName >> "centerPosition")), [_objectClass], 20000];
				_countBldgs = count(_bldgObjects);
				for "_i" from 0 to (_countBldgs-1) do
				{
					_foundBldg = _bldgObjects select _i;
					_foundBldg setDammage _damage;
				}; 
			}forEach _forceMapObjDmg;
		};
		
		//call eXpochServer_system_searchNreplace_initialize;
		_searchNreplaceArray = [];
		_searchNreplaceArray = getArray(missionConfigFile >> "CfgeXpochMapping" >> "SearchNReplaceArray");
		if!(_searchNreplaceArray isEqualTo [])then
		{
			{
				_CurrentBuilding = _x select 0;
				_ReplacementBuilding = _x select 1;
				_DirectionOffset = _x select 2;
				_bldgObjects = nearestObjects [(getArray (configFile >> "CfgWorlds" >> worldName >> "centerPosition")), [_CurrentBuilding], 20000];
				_countBldgs = count(_bldgObjects);
				for "_i" from 0 to (_countBldgs-1) do
				{
					_foundBldg = _bldgObjects select _i;
					hideObjectGlobal _foundBldg;
					_myReplacement = createVehicle [_ReplacementBuilding, getPosATL _foundBldg, [], 0, "CAN_COLLIDE"];
					_myReplacement setDir (getdir _foundBldg) + _DirectionOffset;
					_myReplacement setPosATL (getPosATL _foundBldg);
					_myReplacement enableSimulationGlobal false;
				};
			}forEach _searchNreplaceArray;
		};
	};
};