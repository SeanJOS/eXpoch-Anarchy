/*
	eXpochServer_network_lootContainerRequest

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
params["_player","_object","_action"];
_lootHolderNetIDs = [];
_objPos = getPosATL _object;
_looting = true;
switch(_action)do
{
	case "destroy":{_object setDammage 1;};
	case "hide":{_object setDammage 1;hideObject _object;};
	case "burn":
	{
		_eFire = "#particlesource" createVehicle _objPos;
		_eFire setParticleClass "MediumDestructionFire";
		_eFire setPosATL _objPos;
		_eSmoke = "#particlesource" createVehicle _objPos;
		_eSmoke setParticleClass "MediumDestructionSmoke";
		_eSmoke setPosATL _objPos;
		_looting = false;
	};
};
_chanceAmbientLoot = getNumber(missionConfigFile >> "CfgeXpochLooting" >> "PercentChanceAmbientLootSpawn");
if(_looting)then
{
	if(random(100) < _chanceAmbientLoot)then
	{
		_lootHolderPOS = getPosATL _player;
		_lootHolder = createVehicle ["GroundWeaponHolder", _lootHolderPOS, [], 0, "CAN_COLLIDE"];
		_lootHolder setPosATL _lootHolderPOS;
		_lootHolderNetIDs pushBack (netId _lootHolder);
		_customLootTable = getText(missionConfigFile >> "CfgeXpochLooting" >> "CustomAmbientLootTable");
		if(_customLootTable isEqualTo "")then{_customLootTable = "CivillianLowerClass"};
		_itemClassName = [_customLootTable] call ExileServer_system_lootManager_dropItem;
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
						_getConfigNumberOfMags = getNumber(missionConfigFile >> "CfgeXpochLooting" >> "NumberOfMagsWithWeapons");
						_numberOfMagazines = round(random _getConfigNumberOfMags);
						_maxAmmo = getNumber(configFile >> "CfgMagazines" >> _magazineClassName >> "count");
						_minAmmo = 1;
						if(_maxAmmo > 1)then
						{
							_percentOfMaxAmmo = getNumber(missionConfigFile >> "CfgeXpochLooting" >> "PercentMaxRandomAmountOfAmmo")/100;
							_minAmmo = (round(random(_maxAmmo * (_percentOfMaxAmmo))));
							_minAmmo = _minAmmo + 1;
						};
						_lootHolder addMagazineAmmoCargo [_magazineClassName, _numberOfMagazines, _minAmmo];
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
		_player setVariable ["ExileLootWeaponHolderNetIDs", _lootHolderNetIDs];
		ExileServerBuildingNetIdsWithLoot pushBack (netId _player);
	};
};