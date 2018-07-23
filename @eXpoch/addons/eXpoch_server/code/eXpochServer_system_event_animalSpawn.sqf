/**
 * eXpochServer_system_event_animalSpawn
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_targetPlayer","_animalClass","_direction","_distance","_startPosition","_targetPosition","_animal","_spawnedAt"];
if(isNil {eXpochSpawnedAnimals}) then {eXpochSpawnedAnimals = [];};
_targetPlayer = selectRandom allPlayers;
if(!(isNull _targetPlayer) || !(alive _targetPlayer))then
{
	_lastSpawn = _targetPlayer getVariable["eXpochAnimalSpawnedforPlayer",(diag_tickTime-600)];
	if!(diag_tickTime < _lastSpawn + 600)then
	{
		_targetPosition = 
		[
			(getPos _targetPlayer) select 0, 
			(getPos _targetPlayer) select 1, 
			0
		];
		_safeZone = [_targetPosition,1000] call ExileClient_util_world_isTraderZoneInRange;
		_territory = [_targetPosition,400] call ExileClient_util_world_isTerritoryInRange;
		//_militaryZone = [_targetPosition,1000] call ExileClient_util_world_isMilitaryZoneInRange;//(_militaryZone)
		if(!(_safeZone) || !(_territory))then
		{
			format ["Animal Spawn for Player:%1 near %2...", _targetPlayer,_targetPosition] call ExileServer_util_log;
			_targetPlayer setVariable["eXpochAnimalSpawnedforPlayer",diag_tickTime];
			_animalClass = selectRandom 
			[
				"Hen_random_f",
				"Cock_random_f",
				"Exile_Animal_Sheep_Tricolor",
				"Exile_Animal_Sheep_Spotted",
				"Exile_Animal_Sheep_Brown",
				"Exile_Animal_Sheep_White",
				"Exile_Animal_Sheep_Beige",
				"Exile_Animal_Rooster_Gold",
				"Exile_Animal_Rooster_White",
				"Exile_Animal_Rooster_Brown",
				"Exile_Animal_Goat_Spotted",
				"Exile_Animal_Goat_Old",
				"Exile_Animal_Goat_White",
				"Exile_Animal_Goat_Dirty"
			];
			for "_i" from 1 to (1 + (floor (random 2))) do 
			{
				_direction = floor(random 360);
				_distance = floor(random 300) max 120;
				_startPosition = 
				[
					(_targetPosition select 0) + (sin _direction) * _distance,
					(_targetPosition select 1) + (cos _direction) * _distance,
					0 
				];
				_animal = createAgent [_animalClass, _startPosition, [], 0, "NONE"];
				_animal setVariable["eXpochAnimalSpawnedAt",diag_tickTime];
				eXpochSpawnedAnimals pushBack [_animal,_animal getVariable "eXpochAnimalSpawnedAt"];
				ExileServerOwnershipSwapQueue pushBack [_animal,_targetPlayer];
			};
		};
	};
};
if!(eXpochSpawnedAnimals isEqualTo [])then
{
	{
		_animal = _x select 0;
		_spawnedAt = _x select 1;
		if((isNull _animal) || !(alive _animal))then
		{
			eXpochSpawnedAnimals = eXpochSpawnedAnimals - [_animal,_spawnedAt];
		}
		else
		{
			if(diag_tickTime > (_spawnedAt+300))then
			{
				deleteVehicle _animal;
				eXpochSpawnedAnimals = eXpochSpawnedAnimals - [_animal,_spawnedAt];
			};
		};
	}forEach eXpochSpawnedAnimals;
};