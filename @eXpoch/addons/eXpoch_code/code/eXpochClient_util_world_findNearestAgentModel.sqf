/*
	eXpochClient_util_world_findNearestAgentModel

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
eXpochClientAgentObjectModel = [];
private _agent = [];
private _model = [];
private _objects = nearestobjects [position player,[],10];
{ 
	if(toLower(str _x) find "agent" > -1)then
	{  
		eXpochClientAgentObjectModel pushback _x;
	}; 
}forEach _objects;
if!(eXpochClientAgentObjectModel isEqualTo [])then
{
	_agent = eXpochClientAgentObjectModel select 0;
	_model = (getModelInfo _agent) select 0;
};
_model