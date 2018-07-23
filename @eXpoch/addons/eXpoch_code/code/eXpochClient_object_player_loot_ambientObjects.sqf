/*
	eXpochClient_object_player_loot_ambientObjects

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_model","_split","_modelName","_ambientLootModelNames","_ambientLoot","_modelArray","_actionName","_actionID"];
_model = ExileClientInteractionModel;
_split = _model splitString "."; 
_modelName = _split select 0;
if(ExileClientInteractions isEqualTo [])then
{
	eXpochClientAmbientLootObject = [];
	_ambientLootModelNames = getArray(missionConfigFile >> "CfgInteractionModels" >> "AmbientLoot" >> "models");
	_ambientLoot = _ambientLootModelNames call ExileClient_util_model_getLookAt;
	//_ambientLoot = cursorObject;
	if(!(isNil "_ambientLoot") && (_ambientLoot == cursorObject))then
	{
		eXpochClientAmbientLootObject = _ambientLoot;
		_modelArray = getArray(missionConfigFile >> "CfgInteractionModels" >> "AmbientLoot" >> _modelName);
		_actionName = _modelArray select 0;
		_actionID = player addaction [_actionName,
			{
				[] call eXpochClient_object_player_loot_networkSend;
			},nil, 0, false, true, "", "!((getDammage cursorObject) isEqualTo 1)"];
		ExileClientInteractions pushback _actionID;
	};
};