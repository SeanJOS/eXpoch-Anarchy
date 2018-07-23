exileclientinteractions = [];
ExileClientInteractionModel = objNull;
ExileClientXM8IsPowerOn = true;
eXpochPlayerInJail = false;
eXpochClientPlayerLastjailCheckAt = 0;
eXpochClientChemLight = [];
eXpochClientExtinguishAction = [];
eXpochClientFindMyBaseMarkers = [];
eXpochClientFindMyVehicle = [];
eXpochClientFindMyVehicleMarkers = [];
eXpochClientFindMyEnemy = [];
eXpochClientFindMyEnemyMarkers = [];
eXpochClientMyMotionSensorCounter = 0;
eXpochClientMyMotionSensorMarkers = [];
eXpochClientInVehicleInteractions = [];
eXpochClientInTurretInteractions = [];
eXpochClientPlayerMercenary = objNull;
eXpochClientPlayerMercenaryInCar = false;
eXpochClientPlayerBestFriend = objNull;
eXpochClientPlayerBestFriendInCar = false; 
eXpochClientZombieDamageHead = 0;
eXpochClientZombieDamageBody = 0;
eXpochClientZombieDamageHandL = 0;
eXpochClientZombieDamageHandR = 0;
eXpochClientZombieDamageLegL = 0;
eXpochClientZombieDamageLegR = 0;
eXpochClientAceDamage = 0;
eXpochClientAceDamageCounter = 0;
EPOCH_myBobber = objNull;
ExileClientPlayerHeroKills = 0;
ExileClientPlayerBanditKills = 0;
ExileClientPlayerZedKills = 0;
ExileClientPlayerAIKills = 0;
ExileClientPlayerHeroAIKills = 0;
ExileClientPlayerBanditAIKills = 0;
ExileClientPlayerHeals = 0;
ExileClientPlayerRevives = 0;
ExileClientPlayerBlood = 10000;
ExileClientPlayerTimeAlive = 0;
ExileClientPlayerDMS = 0;
ExileClientPlayerZCP = 0;
ExileClientPlayerVEMF = 0;
ExileClientPlayerTotalTimePlayed = 0;
eXpochClientFishingNoFish = 0;
eXpochClientPlayerNVGogglesOn = false;
infiStarLastSwingTime = 0;
eXpochClientZombiesSpawned = 0;
eXpochClientZombiesArray = [];
ryanzombiesdisablescript = true;
eXpochClientDMSRandomAISpawned = 0;
eXpochClientDMSRandomAIArray = [];
player setVariable ["ExileXM8IsOnline", true, true];
player setVariable["eXpochEventGroup", grpNull];
player setVariable["eXpochZombieFood", false];
player setVariable["eXpochScentLost", false, true];
if (hasInterface) then
{
	//Moved to exile override [] call eXpochClient_system_map_initialize;
	//[] call eXpoch HUD
	if(!isServer)then
	{
		[30, eXpochClient_object_player_jail_checkJail, [], true] call ExileClient_system_thread_addtask;
		[30, eXpochClient_object_player_vehicle_checkPlayer, [], true] call ExileClient_system_thread_addtask;
		_zombiesOn = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "ZombiesON");
		if(_zombiesOn isEqualTo 1)then
		{
			_minDelay = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "ZombieSpawnLoopDelayMin");
			_maxDelay = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "ZombieSpawnLoopDelayMax");
			_randomDelay = _minDelay + (round (random(_maxDelay - _minDelay)));
			[_randomDelay, eXpochClient_object_player_zombieSpawn, [], true] call ExileClient_system_thread_addtask;
		};
		
		_randomAIOn = getNumber(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "DMSRandomAION");
		if(_randomAIOn isEqualTo 1)then
		{
			_minDelay = getNumber(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "DMSRandomAISpawnLoopDelayMin");
			_maxDelay = getNumber(missionConfigFile >> "CfgeXpochDMSRandomAI" >> "DMSRandomAISpawnLoopDelayMax");
			_randomDelay = _minDelay + (round (random(_maxDelay - _minDelay)));
			[_randomDelay, eXpochClient_object_player_randomAISpawn, [], true] call ExileClient_system_thread_addtask;
		};
		
		[30, 		// Delay, in seconds
		{
		private _fnc_isValid =
		{
			private _linkedItems = configFile >> "CfgWeapons" >> _this >> "LinkedItems";

			private _isValid = true;
			{
				if !((getText (_linkedItems >> _x >> "item")) isEqualTo "") exitWith {_isValid = false};
			} forEach ["LinkedItemsOptic","LinkedItemsAcc","LinkedItemsMuzzle","LinkedItemsUnder"];

			_isValid
		};
		private _fnc_getLoadedMags =
		{
			private _loadedMags = [];
			{
				if ((_x select 3) isEqualTo _this) then
				{
					_loadedMags pushBack [_x select 0,_x select 1];
				};
			} forEach (magazinesAmmoFull player);
			_loadedMags
		};

		private _primary = primaryWeapon player;
		if (!(_primary isEqualTo "") && {!(_primary call _fnc_isValid)}) then
		{
			private _replacement = "";

			{
				if ((configName _x) call _fnc_isValid) exitWith {_replacement = configName _x;};
			} forEach ((configFile >> "CfgWeapons" >> _primary) call BIS_fnc_returnParents);


			if (isText (configFile >> "CfgWeapons" >> _replacement >> "displayName")) then		// This bit ensures that the replacement weapon is an actual weapon, and not just a base class.
			{
				private _currentWeaponItems = primaryWeaponItems player;
				private _loadedMags_Original = 1 call _fnc_getLoadedMags;

				private _currentWeapon = currentWeapon player;

				player removeWeapon _primary;
				player addWeapon _replacement;

				private _loadedMags_Replacement = 1 call _fnc_getLoadedMags;

				if (_currentWeapon isEqualTo _primary) then
				{
					player selectWeapon _replacement;
				};

				{
					if !(_x isEqualTo "") then
					{
						player addPrimaryWeaponItem _x;
					};
				} forEach _currentWeaponItems;

				{
					player addWeaponItem [_replacement, _x];
				} forEach _loadedMags_Original;

				{player addMagazine _x} forEach _loadedMags_Replacement;
			};
		};

		private _handgun = handgunWeapon player;
		if (!(_handgun isEqualTo "") && {!(_handgun call _fnc_isValid)}) then
		{
			private _replacement = "";

			{
				if ((configName _x) call _fnc_isValid) exitWith {_replacement = configName _x;};
			} forEach ((configFile >> "CfgWeapons" >> _handgun) call BIS_fnc_returnParents);


			if (isText (configFile >> "CfgWeapons" >> _replacement >> "displayName")) then
			{
				private _currentWeaponItems = handgunItems player;
				private _loadedMags_Original = 2 call _fnc_getLoadedMags;

				private _currentWeapon = currentWeapon player;

				player removeWeapon _handgun;
				player addWeapon _replacement;

				private _loadedMags_Replacement = 2 call _fnc_getLoadedMags;

				if (_currentWeapon isEqualTo _handgun) then
				{
					player selectWeapon _replacement;
				};

				{
					if !(_x isEqualTo "") then
					{
						player addHandgunItem _x;
					};
				} forEach _currentWeaponItems;

				{
					player addWeaponItem [_replacement, _x];
				} forEach _loadedMags_Original;

				{player addMagazine _x} forEach _loadedMags_Replacement;
			};
		};
		},[],true] call ExileClient_system_thread_addTask;
	};
};
if(isServer)then
{
	if(({(getMarkerType _x) isEqualTo "ExileSpawnZone"} count allMapMarkers) isEqualTo 0)then
	{
		_forcedSpawnZone = createMarker ["eXpochRandomSpawn",[worldSize/2,worldSize/2]];
		"eXpochRandomSpawn" setMarkerType "ExileSpawnZone";
		"eXpochRandomSpawn" setMarkerText "Random Coastal Spawn";
		"eXpochRandomSpawn" setMarkerSize [0,0];
		"eXpochRandomSpawn" setMarkerAlpha 0;
	};
};