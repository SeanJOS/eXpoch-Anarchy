/*
	eXpochClient_util_world_findNearestAgent

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
eXpochClientAgentObjects = [];
private _agent = [];
private _objects = nearestobjects [position player,[],35];
{ 
	if(toLower(str _x) find "agent" > -1)then
	{  
		eXpochClientAgentObjects pushback _x;
	}; 
}forEach _objects;
if!(eXpochClientAgentObjects isEqualTo [])then
{
	_agent = eXpochClientAgentObjects select 0;
};
_agent