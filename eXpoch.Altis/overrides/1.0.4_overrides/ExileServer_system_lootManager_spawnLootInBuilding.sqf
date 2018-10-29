/**
 * ExileServer_system_lootManager_spawnLootInBuilding
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
 
private["_building", "_buildingConfig", "_lootTableName", "_localPositions", "_lootConfig", "_maximumNumberOfLootPositions", "_maximumPositionCoverage", "_maximumNumberOfItemsPerLootSpot", "_numberOfPositionsToUse", "_lootPositions", "_spawnedItemClassNames", "_lootWeaponHolderNetIDs", "_lootPosition", "_lootHolder", "_numberOfItemsToSpawn", "_n", "_itemClassName", "_cargoType", "_magazineClassNames", "_magazineClassName", "_numberOfMagazines", "_removeBetaCMags","_minAmmo","_maxAmmo","_devs","_playerUID"];
_building = _this select 0;
_player = _this select 1;
_building setVariable ["ExileLootSpawnedAt", time];
_building setVariable ["ExileHasLoot", true];
_buildingConfig = configFile >> "CfgBuildings" >> typeOf _building;
_lootTableName = getText (_buildingConfig >> "table");
_localPositions = getArray (_buildingConfig >> "positions");
if ((getPosATL _building) call ExileClient_util_world_isInRadiatedZone) then 
{
	_lootTableName = "Radiation";
};
_lootConfig = missionConfigFile >> "CfgExileLootSettings";
_maximumNumberOfLootPositions = getNumber (_lootConfig >> "maximumNumberOfLootSpotsPerBuilding");
_maximumPositionCoverage = getNumber (_lootConfig >> "maximumPositionCoverage");
_maximumNumberOfItemsPerLootSpot = getNumber (_lootConfig >> "maximumNumberOfItemsPerLootSpot");
_numberOfPositionsToUse = 1 max (((count _localPositions) * _maximumPositionCoverage / 100) min _maximumNumberOfLootPositions);
_localPositions = _localPositions call ExileClient_util_array_shuffle;
_lootPositions = _localPositions select [0, _numberOfPositionsToUse];
_spawnedItemClassNames = [];
_lootWeaponHolderNetIDs = [];
{
	_lootPosition = ASLToATL (AGLToASL (_building modelToWorld _x));
	if (_lootPosition select 2 < 0.05) then
	{
		_lootPosition set [2, 0.05];
	};
	_lootHolder = objNull;
	_numberOfItemsToSpawn = (floor (random _maximumNumberOfItemsPerLootSpot)) + 1;
	for "_n" from 1 to _numberOfItemsToSpawn do
	{
		_itemClassName = _lootTableName call ExileServer_system_lootManager_dropItem;
				
		if !(_itemClassName in _spawnedItemClassNames) then
		{
			if (isNull _lootHolder) then 
			{
				_lootHolder = createVehicle ["LootWeaponHolder", _lootPosition, [], 0, "CAN_COLLIDE"];
				_lootHolder setDir (random 360);
				_lootHolder setPosATL _lootPosition;
				_lootHolder setVariable ["ExileSpawnedAt", time];
				_lootWeaponHolderNetIDs pushBack (netId _lootHolder);											
			};
			_cargoType = _itemClassName call ExileClient_util_cargo_getType;
			switch (_cargoType) do
			{
				case 1: 	
				{ 
					if (_itemClassName isEqualTo "Exile_Item_MountainDupe") then
					{
						_lootHolder addMagazineCargoGlobal [_itemClassName, 2]; 
					}
					else 
					{
						_lootHolder addMagazineCargoGlobal [_itemClassName, 1]; 
					};
				};
				case 3: 	
				{ 
					_lootHolder addBackpackCargoGlobal [_itemClassName, 1]; 
				};
				case 2: 	
				{ 
					_lootHolder addWeaponCargoGlobal [_itemClassName, 1]; 
					if !(_itemClassName isKindOf ["Exile_Melee_Abstract", configFile >> "CfgWeapons"]) then
					{
						_magazineClassNames = getArray(configFile >> "CfgWeapons" >> _itemClassName >> "magazines");
						if (count(_magazineClassNames) > 0) then
						{
							_magazineClassName = selectRandom _magazineClassNames;
														
							// Start Removal of BetaC Mags
							_removeBetaCMags = ["16Rnd_9x21_green_Mag","16Rnd_9x21_yellow_Mag","30Rnd_9x21_Red_Mag","30Rnd_9x21_Green_Mag","30Rnd_9x21_Yellow_Mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","Exile_Magazine_30Rnd_545x39_AK_Green","Exile_Magazine_30Rnd_545x39_AK_White","Exile_Magazine_30Rnd_545x39_AK_Red","Exile_Magazine_30Rnd_545x39_AK_Yellow","CUP_64Rnd_Green_Tracer_9x19_Bizon_M","CUP_64Rnd_Red_Tracer_9x19_Bizon_M","CUP_64Rnd_White_Tracer_9x19_Bizon_M","CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag","CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag","CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag","CUP_30Rnd_TE1_Red_Tracer_556x45_G36","CUP_30Rnd_TE1_Green_Tracer_556x45_G36","CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36","CUP_30Rnd_Sa58_M_TracerG","CUP_30Rnd_Sa58_M_TracerR","CUP_30Rnd_Sa58_M_TracerY","CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR","CUP_20Rnd_TE1_Red_Tracer_762x51_DMR","CUP_20Rnd_TE1_Green_Tracer_762x51_DMR","CUP_20Rnd_TE1_White_Tracer_762x51_DMR","CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110","CUP_20Rnd_TE1_Red_Tracer_762x51_M110","CUP_20Rnd_TE1_Green_Tracer_762x51_M110","CUP_20Rnd_TE1_White_Tracer_762x51_M110","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Green","30Rnd_556x45_Stanag_Red","30Rnd_556x45_Stanag_Yellow","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_red_Mag","16Rnd_9x21_green_Mag","16Rnd_9x21_yellow_Mag","30Rnd_9x21_Red_Mag","30Rnd_9x21_Green_Mag","30Rnd_9x21_Yellow_Mag"];
							{ _magazineClassNames = _magazineClassNames - [_x]; } forEach _removeBetaCMags;
							// End Removal of BetaC Mags
							_magazineClassName = selectRandom _magazineClassNames;
							/* eXpoch New Addition */
							_getConfigNumberOfMags = getNumber(missionConfigFile >> "CfgeXpochLooting" >> "NumberOfMagsWithWeapons");
							_numberOfMagazines = round(random _getConfigNumberOfMags);
							_maxAmmo = getNumber(configFile >> "CfgMagazines" >> _magazineClassName >> "count");
							_minAmmo = 1;
							if(_maxAmmo > 1)then
							{
								_cfgRandomAmmo = getNumber(missionConfigFile >> "CfgeXpochLooting" >> "RandomAmmoCountOn");
								if(_cfgRandomAmmo isEqualTo 1)then
								{
									_minAmmo = (ceil(random(_maxAmmo)));
								}else{
									_minAmmo = _maxAmmo;
								};
							};
							if((!isNil {eXpoch_DEBUG}) && (eXpoch_DEBUG))then
							{
								diag_log format["_magazineClassNames:%1, _magazineClassName:%2, _getConfigNumberOfMags:%3, _numberOfMagazines:%4, _maxAmmo:%5, _minAmmo:%6",_magazineClassNames,_magazineClassName,_getConfigNumberOfMags,_numberOfMagazines,_maxAmmo,_minAmmo]; 
							};
							_lootHolder addMagazineCargoGlobal [_magazineClassName, _numberOfMagazines, _minAmmo];
							_spawnedItemClassNames pushBack _magazineClassName;
						};
					};
					_numberOfItemsToSpawn = -1;
				};
				default
				{ 
					_lootHolder addItemCargoGlobal [_itemClassName, 1]; 
				};
			};
			_spawnedItemClassNames pushBack _itemClassName;
		};
	};
}
forEach _lootPositions;
_building setVariable ["ExileLootWeaponHolderNetIDs", _lootWeaponHolderNetIDs];
ExileServerBuildingNetIdsWithLoot pushBack (netId _building);