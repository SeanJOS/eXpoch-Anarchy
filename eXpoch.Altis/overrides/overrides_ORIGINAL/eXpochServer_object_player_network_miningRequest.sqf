/*
	eXpochServer_object_player_network_miningRequest

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
params["_player","_surfaceNrocks"];
private _lootHolderNetIDs = [];
_miningReturnItems = getArray(missionConfigFile >> "CfgeXpochMining" >> "Mining");
private _itemClassName = selectRandom(_miningReturnItems);
_miningChanceSuccess = getNumber(missionConfigFile >> "CfgeXpochMining" >> "MiningChanceSuccess");
if(random(100) < _miningChanceSuccess)then
{
	private _lootHolderPOS = getPosATL _player;
	private _lootHolder = createVehicle ["GroundWeaponHolder", _lootHolderPOS, [], 0, "CAN_COLLIDE"];
	_lootHolder setPosATL _lootHolderPOS;
	_lootHolderNetIDs pushBack (netId _lootHolder);
	_lootHolder addMagazineCargoGlobal [_itemClassName, 1];
	_player setVariable ["ExileLootWeaponHolderNetIDs", _lootHolderNetIDs];
	ExileServerBuildingNetIdsWithLoot pushBack (netId _player);
	["Success",_itemClassName] remoteExecCall ["eXpochClient_object_player_network_miningResponse",_player];
}
else
{
	["Failure",_itemClassName] remoteExecCall ["eXpochClient_object_player_network_miningResponse",_player];
};

