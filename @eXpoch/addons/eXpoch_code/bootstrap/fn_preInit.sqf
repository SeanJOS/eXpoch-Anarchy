/*
	Pre-Initialization

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
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
	['eXpochClient_system_map_initialize','eXpoch_code\code\eXpochClient_system_map_initialize.sqf'],

	['eXpochClient_inventory_forceAddUniform','eXpoch_code\code\eXpochClient_inventory_forceAddUniform.sqf'],	
	['eXpochClient_inventory_isFemaleCharacter','eXpoch_code\code\eXpochClient_inventory_isFemaleCharacter.sqf'],
	
	['eXpochClient_object_player_fishing_preCast','eXpoch_code\code\eXpochClient_object_player_fishing_preCast.sqf'],
	['eXpochClient_object_player_fishing_castReel','eXpoch_code\code\eXpochClient_object_player_fishing_castReel.sqf'],
	['eXpochClient_object_player_fishing_findFish','eXpoch_code\code\eXpochClient_object_player_fishing_findFish.sqf'],
	['eXpochClient_object_player_network_fishingResponse','eXpoch_code\code\eXpochClient_object_player_network_fishingResponse.sqf'],

	['eXpochClient_object_player_jail_checkJail','eXpoch_code\code\eXpochClient_object_player_jail_checkJail.sqf'],
	['eXpochClient_util_world_isInJailZone','eXpoch_code\code\eXpochClient_util_world_isInJailZone.sqf'],
	
	['eXpochClient_util_world_findNearestAgent','eXpoch_code\code\eXpochClient_util_world_findNearestAgent.sqf'],
	['eXpochClient_util_world_findNearestAgentModel','eXpoch_code\code\eXpochClient_util_world_findNearestAgentModel.sqf'],
	
	['eXpochClient_object_player_hunting_gutAnimal','eXpoch_code\code\eXpochClient_object_player_hunting_gutAnimal.sqf'],
	['eXpochClient_object_player_hunting_canGutCheck','eXpoch_code\code\eXpochClient_object_player_hunting_canGutCheck.sqf'],
	['eXpochClient_object_player_loot_ambientObjects','eXpoch_code\code\eXpochClient_object_player_loot_ambientObjects.sqf'],
	['eXpochClient_object_player_loot_networkSend','eXpoch_code\code\eXpochClient_object_player_loot_networkSend.sqf'],
	
	['eXpochClient_util_inventory_getValueMetalsGems','eXpoch_code\code\eXpochClient_util_inventory_getValueMetalsGems.sqf'],
	
	['eXpochClient_object_player_network_miningResponse','eXpoch_code\code\eXpochClient_object_player_network_miningResponse.sqf'],
	['eXpochClient_object_player_mining_smashRock','eXpoch_code\code\eXpochClient_object_player_mining_smashRock.sqf'],

	['eXpochClient_object_player_vehicle_checkPlayer','eXpoch_code\code\eXpochClient_object_player_vehicle_checkPlayer.sqf'],
	['eXpochClient_object_player_vehicle_checkTurretAmmo','eXpoch_code\code\eXpochClient_object_player_vehicle_checkTurretAmmo.sqf'],
	['eXpochClient_object_player_vehicle_checkDriverAmmo','eXpoch_code\code\eXpochClient_object_player_vehicle_checkDriverAmmo.sqf'],
	
	['eXpochClient_gui_animalTraderDialog_show','eXpoch_code\code\eXpochClient_gui_animalTraderDialog_show.sqf'],
	['eXpochClient_object_player_network_purchaseDogResponse','eXpoch_code\code\eXpochClient_object_player_network_purchaseDogResponse.sqf'],
	['eXpochClient_object_player_dog_actions','eXpoch_code\code\eXpochClient_object_player_dog_actions.sqf'],
	['eXpochClient_gui_animalTraderDialog_updateAnimal','eXpoch_code\code\eXpochClient_gui_animalTraderDialog_updateAnimal.sqf'],
	['eXpochClient_gui_animalTraderDialog_updateAnimalListBox','eXpoch_code\code\eXpochClient_gui_animalTraderDialog_updateAnimalListBox.sqf'],
	['eXpochClient_gui_animalTraderDialog_event_onUnload','eXpoch_code\code\eXpochClient_gui_animalTraderDialog_event_onUnload.sqf'],
	['eXpochClient_gui_animalTraderDialog_event_onPurchaseButtonClick','eXpoch_code\code\eXpochClient_gui_animalTraderDialog_event_onPurchaseButtonClick.sqf'],
	['eXpochClient_gui_animalTraderDialog_event_onInputBoxChars','eXpoch_code\code\eXpochClient_gui_animalTraderDialog_event_onInputBoxChars.sqf'],
	['eXpochClient_gui_animalTraderDialog_event_onCategoryDropDownSelectionChanged','eXpoch_code\code\eXpochClient_gui_animalTraderDialog_event_onCategoryDropDownSelectionChanged.sqf'],
	['eXpochClient_gui_animalTraderDialog_event_onAnimalListBoxSelectionChanged','eXpoch_code\code\eXpochClient_gui_animalTraderDialog_event_onAnimalListBoxSelectionChanged.sqf'],
	
	['eXpochClient_gui_mercTraderDialog_show','eXpoch_code\code\eXpochClient_gui_mercTraderDialog_show.sqf'],
	['eXpochClient_gui_mercTraderDialog_updateMerc','eXpoch_code\code\eXpochClient_gui_mercTraderDialog_updateMerc.sqf'],
	['eXpochClient_object_player_merc_actions','eXpoch_code\code\eXpochClient_object_player_merc_actions.sqf'],
	['eXpochClient_gui_mercTraderDialog_updateMercListBox','eXpoch_code\code\eXpochClient_gui_mercTraderDialog_updateMercListBox.sqf'],
	['eXpochClient_gui_mercTraderDialog_event_onUnload','eXpoch_code\code\eXpochClient_gui_mercTraderDialog_event_onUnload.sqf'],
	['eXpochClient_gui_mercTraderDialog_event_onPurchaseButtonClick','eXpoch_code\code\eXpochClient_gui_mercTraderDialog_event_onPurchaseButtonClick.sqf'],
	['eXpochClient_gui_mercTraderDialog_event_onInputBoxChars','eXpoch_code\code\eXpochClient_gui_mercTraderDialog_event_onInputBoxChars.sqf'],
	['eXpochClient_gui_mercTraderDialog_event_onCategoryDropDownSelectionChanged','eXpoch_code\code\eXpochClient_gui_mercTraderDialog_event_onCategoryDropDownSelectionChanged.sqf'],
	['eXpochClient_gui_mercTraderDialog_event_onMercListBoxSelectionChanged','eXpoch_code\code\eXpochClient_gui_mercTraderDialog_event_onMercListBoxSelectionChanged.sqf'],
	['eXpochClient_object_player_network_purchaseMercResponse','eXpoch_code\code\eXpochClient_object_player_network_purchaseMercResponse.sqf'],
	['eXpochClient_object_player_ace_findAceAvgDamage','eXpoch_code\code\eXpochClient_object_player_ace_findAceAvgDamage.sqf'],
	['eXpochClient_object_player_zombieAceDamage','eXpoch_code\code\eXpochClient_object_player_zombieAceDamage.sqf'],
	['eXpochClient_object_player_eXpochAceDamage','eXpoch_code\code\eXpochClient_object_player_eXpochAceDamage.sqf'],
	
	['eXpochClient_gui_customizeCharacterDialog_show','eXpoch_code\code\eXpochClient_gui_customizeCharacterDialog_show.sqf'],
	['eXpochClient_gui_customizeCharacterDialog_event_onUnload','eXpoch_code\code\eXpochClient_gui_customizeCharacterDialog_event_onUnload.sqf'],
	['eXpochClient_gui_customizeCharacterDialog_updateCustomizationListBox','eXpoch_code\code\eXpochClient_gui_customizeCharacterDialog_updateCustomizationListBox.sqf'],
	['eXpochClient_gui_customizeCharacterDialog_event_onCustomizationListBoxSelectionChanged','eXpoch_code\code\eXpochClient_gui_customizeCharacterDialog_event_onCustomizationListBoxSelectionChanged.sqf'],
	['eXpochClient_gui_customizeCharacterDialog_event_onCategoryDropDownSelectionChanged','eXpoch_code\code\eXpochClient_gui_customizeCharacterDialog_event_onCategoryDropDownSelectionChanged.sqf'],
	['eXpochClient_gui_customizeCharacterDialog_updateCustomization','eXpoch_code\code\eXpochClient_gui_customizeCharacterDialog_updateCustomization.sqf'],
	['eXpochClient_gui_customizeCharacterDialog_event_onInputBoxChars','eXpoch_code\code\eXpochClient_gui_customizeCharacterDialog_event_onInputBoxChars.sqf'],
	
	['eXpochClient_gui_characterBox_create','eXpoch_code\code\eXpochClient_gui_characterBox_create.sqf'],
	['eXpochClient_gui_characterBox_thread_update','eXpoch_code\code\eXpochClient_gui_characterBox_thread_update.sqf'],
	['eXpochClient_gui_characterBox_update','eXpoch_code\code\eXpochClient_gui_characterBox_update.sqf'],
	['eXpochClient_gui_characterBox_destroy','eXpoch_code\code\eXpochClient_gui_characterBox_destroy.sqf'],
	
	['eXpochClient_object_player_fishing_epochBobber','eXpoch_code\code\eXpochClient_object_player_fishing_epochBobber.sqf'],
	['eXpochClient_object_player_unconcious_startBleedingOut','eXpoch_code\code\eXpochClient_object_player_unconcious_startBleedingOut.sqf'],
	
	['ExileClient_gui_xm8_slide_clan_event_onClanPromoteButtonClick','eXpoch_code\code\ExileClient_gui_xm8_slide_clan_event_onClanPromoteButtonClick.sqf'],
	['ExileClient_gui_xm8_slide_clan_event_handleModeration','eXpoch_code\code\ExileClient_gui_xm8_slide_clan_event_handleModeration.sqf'],
	
	['ExileClient_gui_traderDialog_show_hero','eXpoch_code\code\ExileClient_gui_traderDialog_show_hero.sqf'],
	['ExileClient_gui_traderDialog_show_bandit','eXpoch_code\code\ExileClient_gui_traderDialog_show_bandit.sqf'],
	['ExileClient_gui_traderDialog_show_blackmarket','eXpoch_code\code\ExileClient_gui_traderDialog_show_blackmarket.sqf'],
	
	['ExileClient_gui_vehicleCustomsDialog_show_hero','eXpoch_code\code\ExileClient_gui_vehicleCustomsDialog_show_hero.sqf'],
	['ExileClient_gui_vehicleCustomsDialog_show_bandit','eXpoch_code\code\ExileClient_gui_vehicleCustomsDialog_show_bandit.sqf'],
	['ExileClient_gui_vehicleCustomsDialog_show_blackmarket','eXpoch_code\code\ExileClient_gui_vehicleCustomsDialog_show_blackmarket.sqf'],
	
	['ExileClient_gui_vehicleTraderDialog_show_hero','eXpoch_code\code\ExileClient_gui_vehicleTraderDialog_show_hero.sqf'],
	['ExileClient_gui_vehicleTraderDialog_show_bandit','eXpoch_code\code\ExileClient_gui_vehicleTraderDialog_show_bandit.sqf'],
	['ExileClient_gui_vehicleTraderDialog_show_blackmarket','eXpoch_code\code\ExileClient_gui_vehicleTraderDialog_show_blackmarket.sqf'],
	
	['ExileClient_gui_traderDialog_updateStoreListBox_hero','eXpoch_code\code\ExileClient_gui_traderDialog_updateStoreListBox_hero.sqf'],
	['ExileClient_gui_traderDialog_updateStoreListBox_bandit','eXpoch_code\code\ExileClient_gui_traderDialog_updateStoreListBox_bandit.sqf'],
	['ExileClient_gui_traderDialog_updateStoreListBox_blackmarket','eXpoch_code\code\ExileClient_gui_traderDialog_updateStoreListBox_blackmarket.sqf'],
	
	['ExileClient_gui_vehicleTraderDialog_updateVehicleListBox_hero','eXpoch_code\code\ExileClient_gui_vehicleTraderDialog_updateVehicleListBox_hero.sqf'],
	['ExileClient_gui_vehicleTraderDialog_updateVehicleListBox_bandit','eXpoch_code\code\ExileClient_gui_vehicleTraderDialog_updateVehicleListBox_bandit.sqf'],
	['ExileClient_gui_vehicleTraderDialog_updateVehicleListBox_blackmarket','eXpoch_code\code\ExileClient_gui_vehicleTraderDialog_updateVehicleListBox_blackmarket.sqf'],
	
	['eXpochClient_object_player_merc_checkVehicleCargoSlots','eXpoch_code\code\eXpochClient_object_player_merc_checkVehicleCargoSlots.sqf'],
	['eXpochClient_object_player_merc_checkVehicleTurretSlots','eXpoch_code\code\eXpochClient_object_player_merc_checkVehicleTurretSlots.sqf'],
	['eXpochClient_util_vehicle_getVehicleCargoRoles','eXpoch_code\code\eXpochClient_util_vehicle_getVehicleCargoRoles.sqf'],
	['eXpochClient_util_vehicle_getVehicleRoles','eXpoch_code\code\eXpochClient_util_vehicle_getVehicleRoles.sqf'],
	['eXpochClient_util_vehicle_getVehicleTurretRoles','eXpoch_code\code\eXpochClient_util_vehicle_getVehicleTurretRoles.sqf'],
	['eXpochClient_util_vehicle_moveSwitchInCargo','eXpoch_code\code\eXpochClient_util_vehicle_moveSwitchInCargo.sqf'],
	['eXpochClient_util_vehicle_moveSwitchInTurrets','eXpoch_code\code\eXpochClient_util_vehicle_moveSwitchInTurrets.sqf'],
	['eXpochClient_object_player_dog_checkVehicleCargoSlots','eXpoch_code\code\eXpochClient_object_player_dog_checkVehicleCargoSlots.sqf'],
	
	['eXpochClient_util_player_recalculateRank','eXpoch_code\code\eXpochClient_util_player_recalculateRank.sqf'],
	['eXpochClient_util_player_getRankColors','eXpoch_code\code\eXpochClient_util_player_getRankColors.sqf'],
	
	['eXpochClient_util_world_isMilitaryZoneInRange','eXpoch_code\code\eXpochClient_util_world_isMilitaryZoneInRange.sqf'],
	['eXpochClient_util_world_isFarmZoneInRange','eXpoch_code\code\eXpochClient_util_world_isFarmZoneInRange.sqf'],
	['eXpochClient_object_player_zombieSpawn','eXpoch_code\code\eXpochClient_object_player_zombieSpawn.sqf'],
	['eXpochClient_object_zombie_offloadingInit','eXpoch_code\code\eXpochClient_object_zombie_offloadingInit.sqf'],
	['eXpochClient_object_player_randomAISpawn','eXpoch_code\code\eXpochClient_object_player_randomAISpawn.sqf'],
	['eXpochClient_object_dmsai_offloadingInit','eXpoch_code\code\eXpochClient_object_dmsai_offloadingInit.sqf']
	
];