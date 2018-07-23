/*
	eXpochClient_object_player_hunting_gutAnimal

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
if(ExileClientInteractions isEqualTo [])then
{
	private _animal = [] call eXpochClient_util_world_findNearestAgent;
	ExileClientInteractionAgent = _animal;
	private _model = (getModelInfo _animal)select 0;
	private _deP3D = _model splitString ".";
	private _split = _model splitString "_."; 
	private _modelName = _split select 0;
	ExileClientInteractionModelName = _deP3D select 0;
	private _actionTitle = format["Gut %1",_modelName];
	private _actionID = player addaction [_actionTitle, 
	{
		[] call eXpochClient_object_player_hunting_canGutCheck;
	}, 
	nil, 0, false, true, "", "!(alive ExileClientInteractionAgent)"];// was ExileClientInteractionObject
	ExileClientInteractions pushback _actionID;
};