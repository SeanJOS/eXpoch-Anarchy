/*
	eXpochServer_object_player_network_fishingRequest

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
params["_player","_agent","_agentModel"];
_className = "";
if!(_agentModel isEqualTo "")then
{
	switch(_agentModel)do
	{
		case "salema_porgy_f.p3d": 
		{
			_className = "eXpoch_Item_Salema_Raw";
		};
		case "ornate_f.p3d": 
		{
			_className = "eXpoch_Item_Ornate_Raw";
		};
		case "mackerel_f.p3d": 
		{
			_className = "eXpoch_Item_Mackerel_Raw";
		};
		case "tuna_f.p3d": 
		{
			_className = "eXpoch_ItemTuna";//eXpoch_Item_Tuna_Raw
		};
		case "mullet_f.p3d": 
		{
			_className = "eXpoch_Item_Mullet_Raw";
		};
		case "catshark_f.p3d": 
		{
			_className = "eXpoch_Item_CatShark_Raw";
		};
	};
	if!(_className isEqualTo "")then
	{
		if (25 > random(100)) then
		{
			["Success",_className] remoteExecCall ["eXpochClient_object_player_network_fishingResponse",_player];
			_player addItem _className;
			if!(_agent isEqualTo "")then
			{
				deleteVehicle _agent;
			};
		}
		else
		{
			["Failure",_className] remoteExecCall ["eXpochClient_object_player_network_fishingResponse",_player];
		};
	}
	else
	{
		["Error",_className] remoteExecCall ["eXpochClient_object_player_network_fishingResponse",_player];
	};
}
else
{
	["Error",_agentModel] remoteExecCall ["eXpochClient_object_player_network_fishingResponse",_player];
};