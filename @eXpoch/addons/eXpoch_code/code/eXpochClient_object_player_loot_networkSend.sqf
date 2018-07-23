/*
	eXpochClient_object_player_loot_networkSend

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
if(isNil {eXpochClientAmbientLootObject})exitWith{["ErrorTitleAndText", ["Ambient Loot Null!", "This just goes to show you need glasses, Again Again!"]] call ExileClient_gui_toaster_addTemplateToast;};
private _lootObj = eXpochClientAmbientLootObject;
private _model = (getModelInfo _lootObj) select 0;
private _split = _model splitString "."; 
private _modelName = _split select 0;
private _modelArray = getArray(missionConfigFile >> "CfgInteractionModels" >> "AmbientLoot" >> _modelName);
if(isNil {_modelArray})exitWith{["ErrorTitleAndText", ["Try Again!", "I dont think you were strong enough to move it...."]] call ExileClient_gui_toaster_addTemplateToast;};
private _actionName = _modelArray select 0;
private _damageType = _modelArray select 1;
private _soundFile1 = _modelArray select 2;
private _soundFile2 = _modelArray select 3;
diag_log format["_lootObj:%1, _model:%2, _split:%3, _modelName:%4, _modelArray:%5, _actionName:%6, _damageType:%7, _soundFile1:%8, _soundFile2:%9",_lootObj,_model,_split,_modelName,_modelArray,_actionName,_damageType,_soundFile1,_soundFile2];
if(_damageType isEqualTo "burn")then
{
	_done = false;
	if ("Exile_Item_Matches" in (magazines player)) then
	{
		[player, "Exile_Item_Matches", -1] call ExileClient_util_gear_repackMagazines;
		_done = true;
	};
	if!(_done)then
	{
		if ("eXpoch_lighter_epoch" in (magazines player)) then
		{
			[player, "eXpoch_lighter_epoch", -1] call ExileClient_util_gear_repackMagazines;
			_done = true;
		};
	};
	if(_done)then
	{
		[player,_lootObj,_damageType] remoteExec ["eXpochServer_object_player_network_lootContainerRequest", 2];
		{player removeAction _x;}forEach ExileClientInteractions;
		playSound3D [_soundFile1, player];
		playSound3D [_soundFile2, player];
	}
	else
	{
		["ErrorTitleAndText", ["No fire for you!", "You need matches or a zippo to light a fire."]] call ExileClient_gui_toaster_addTemplateToast;
	};
}
else
{
	[player,_lootObj,_damageType] remoteExec ["eXpochServer_object_player_network_lootContainerRequest", 2];
	{player removeAction _x;}forEach ExileClientInteractions;
	playSound3D [_soundFile1, player];
	playSound3D [_soundFile2, player];
};
{player removeAction _x;}forEach ExileClientInteractions;