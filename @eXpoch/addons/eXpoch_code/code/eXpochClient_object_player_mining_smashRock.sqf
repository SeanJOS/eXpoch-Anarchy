/*
	eXpochClient_object_player_mining_smashRock

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_surfaceType","_rocksModelNames","_rock"];
_surfaceType = surfaceType (getpos player); 
_rockModelNames = getArray(missionConfigFile >> "CfgInteractionModels" >> "RockSource" >> "models");
_rock = getModelInfo (_rockModelNames call ExileClient_util_model_getLookAt) select 0;
if!(_surfaceType isEqualTo "#CRRock")then
{
	if(_rock in _rockModelNames)then
	{
		_miningChanceSuccess = getNumber(missionConfigFile >> "CfgeXpochMining" >> "MiningChanceSuccess");
		if(random(100) < _miningChanceSuccess)then
		{
			[player,_rock] remoteExec ["eXpochServer_object_player_network_miningRequest",2];
		};
	};
}
else
{
	_surfaceTypeMiningChanceSuccess = getNumber(missionConfigFile >> "CfgeXpochMining" >> "SurfaceTypeRockMiningChanceSuccess");
	if(random(100) < _surfaceTypeMiningChanceSuccess)then
	{
		[player,_surfaceType] remoteExec ["eXpochServer_object_player_network_miningRequest",2];
	};
};
true