/*
	eXpochClient_object_player_fishing_castReel

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
eXpochClientPlayerIsFishing = false;
[] call eXpochClient_object_player_fishing_epochBobber;
["InfoTitleAndText_Orange", ["Like A Pro!", "Watch your bobber and be patient, you could get lucky."]] call ExileClient_gui_toaster_addTemplateToast;
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
diag_log format["[eXpochDebug]fishing_castReel _closestAgent:%1",_closestAgent];
_time = random(25);
if!(_closestAgent isEqualTo [])then
{
	private _agentModel = (getModelInfo _closestAgent) select 0;
	diag_log format["[eXpochDebug]fishing_castReel _agentModel:%1",_agentModel];
	private _fishNames = ["salema_porgy_f.p3d", "ornate_f.p3d", "mackerel_f.p3d", "tuna_f.p3d", "mullet_f.p3d", "catshark_f.p3d"];
	if(_agentModel in _fishNames)then
	{
		eXpochClientPlayerIsFishing = true;
		if (25 > random(100)) then
		{	
			sleep _time;
			["InfoTitleAndText_Orange", ["YAHOOOO!", "You have hooked a fish, can you keep it and reel it in?"]] call ExileClient_gui_toaster_addTemplateToast;
			[] call eXpochClient_object_player_fishing_epochBobber;
			sleep _time;
			[player, _closestAgent,_agentModel] remoteExec ["eXpochServer_object_player_network_fishingRequest",2];
		}
		else
		{
			sleep 5;
			["ErrorTitleAndText", ["SHIT!", "I almost had that dam fish, wish I had that WhiskeyNoodle!"]] call ExileClient_gui_toaster_addTemplateToast;
			eXpochClientPlayerIsFishing = false;
			[] call eXpochClient_object_player_fishing_epochBobber;
		};
	}
	else
	{
		sleep 3;
		["ErrorTitleAndText", ["What a Bummer!", "I dont think trying to hook a land animal is going to work out.."]] call ExileClient_gui_toaster_addTemplateToast;
		eXpochClientPlayerIsFishing = false;
		[] call eXpochClient_object_player_fishing_epochBobber;
	};
}
else
{
	if(eXpochClientFishingNoFish < 4)then
	{
		sleep 5;
		["ErrorTitleAndText", ["No Fish!", "Looks like the fish just arent biting today...."]] call ExileClient_gui_toaster_addTemplateToast;
		eXpochClientPlayerIsFishing = false;
		eXpochClientFishingNoFish = eXpochClientFishingNoFish + 1;
		[] call eXpochClient_object_player_fishing_epochBobber;
	}
	else
	{
		eXpochClientPlayerIsFishing = true;
		if (25 > random(100)) then
		{	
			sleep _time;
			["InfoTitleAndText_Orange", ["YAHOOOO!", "You have hooked a fish, can you keep it and reel it in?"]] call ExileClient_gui_toaster_addTemplateToast;
			[] call eXpochClient_object_player_fishing_epochBobber;
			sleep _time;
			_fishNames = ["salema_porgy_f.p3d", "ornate_f.p3d", "mackerel_f.p3d", "tuna_f.p3d", "mullet_f.p3d", "catshark_f.p3d"];
			_agentModel = selectRandom(_fishNames);
			[player, "",_agentModel] remoteExec ["eXpochServer_object_player_network_fishingRequest",2];
		}
		else
		{
			sleep 5;
			["ErrorTitleAndText", ["SHIT!", "I almost had that dam fish, wish I had that WhiskeyNoodle!"]] call ExileClient_gui_toaster_addTemplateToast;
			eXpochClientPlayerIsFishing = false;
			[] call eXpochClient_object_player_fishing_epochBobber;
		};
	};
};