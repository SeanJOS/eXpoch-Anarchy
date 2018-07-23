/**
 * Pre-Initialization
 *
 * www.DonkeyPunch.INFO
 * © 2015 DirtySanchez
 *
 * 
 */
if!(isServer)exitWith{diag_log "not for client use, move on. I said move on!LOL"};
private ['_code', '_function', '_file'];

{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;

    _code = compileFinal (preprocessFileLineNumbers _file);                    

    missionNamespace setVariable [_function, _code];
}
forEach 
[
	['ExileServer_system_clan_network_moderationClanRequest','eXpoch_server\code\ExileServer_system_clan_network_moderationClanRequest.sqf'],
	
	['eXpochServer_object_animal_onMpKilled','eXpoch_server\code\eXpochServer_object_animal_onMpKilled.sqf'],
	['eXpochServer_object_dmsai_spawnOnPlayer','eXpoch_server\code\eXpochServer_object_dmsai_spawnOnPlayer.sqf'],
	['eXpochServer_object_merc_event_onMpKilled','eXpoch_server\code\eXpochServer_object_merc_event_onMpKilled.sqf'],
	['eXpochServer_object_player_aceMedicalDatabaseUpdate','eXpoch_server\code\eXpochServer_object_player_aceMedicalDatabaseUpdate.sqf'],
	['eXpochServer_object_player_network_fishingRequest','eXpoch_server\code\eXpochServer_object_player_network_fishingRequest.sqf'],
	['eXpochServer_object_player_network_gutAnimalRequest','eXpoch_server\code\eXpochServer_object_player_network_gutAnimalRequest.sqf'],
	['eXpochServer_object_player_network_lootContainerRequest','eXpoch_server\code\eXpochServer_object_player_network_lootContainerRequest.sqf'],
	['eXpochServer_object_player_network_lootBushesRequest','eXpoch_server\code\eXpochServer_object_player_network_lootBushesRequest.sqf'],
	['eXpochServer_system_event_animalSpawn','eXpoch_server\code\eXpochServer_system_event_animalSpawn.sqf'],
	['eXpochServer_system_event_zombieSpawn','eXpoch_server\code\eXpochServer_system_event_zombieSpawn.sqf'],
	['eXpochServer_object_player_network_miningRequest','eXpoch_server\code\eXpochServer_object_player_network_miningRequest.sqf'],
	['eXpochServer_object_player_network_trading_purchaseDogRequest','eXpoch_server\code\eXpochServer_object_player_network_trading_purchaseDogRequest.sqf'],
	['eXpochServer_object_player_network_trading_purchaseMercRequest','eXpoch_server\code\eXpochServer_object_player_network_trading_purchaseMercRequest.sqf'],
	['eXpochServer_object_player_rzInfectionPersistence','eXpoch_server\code\eXpochServer_object_player_rzInfectionPersistence.sqf'],
	['eXpochServer_object_zombie_spawnOnPlayer','eXpoch_server\code\eXpochServer_object_zombie_spawnOnPlayer.sqf'],
	['eXpochServer_object_zombie_onMpKilled','eXpoch_server\code\eXpochServer_object_zombie_onMpKilled.sqf'],
	['eXpochServer_system_event_platoonSpawn','eXpoch_server\code\eXpochServer_system_event_platoonSpawn.sqf']
];
