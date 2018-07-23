/*
	eXpochClient_object_player_fishing_findFish

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
eXpochClientFishObjects = [];
private _closestAgent = [];
private _objects = nearestobjects [position player,[],35];
{ 
	if(toLower(str _x) find "agent" > -1)then
	{  
		eXpochClientFishObjects pushback _x;
	}; 
}forEach _objects;
diag_log format["[eXpochDebug]fishing_castReel allAgents:%1",eXpochClientFishObjects];
if!(eXpochClientFishObjects isEqualTo [])then
{
	_closestAgent = eXpochClientFishObjects select 0;
};
_closestAgent