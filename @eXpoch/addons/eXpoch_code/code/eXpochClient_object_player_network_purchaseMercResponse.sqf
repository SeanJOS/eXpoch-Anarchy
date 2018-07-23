/*
	eXpochClient_object_player_network_purchaseMercResponse

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private _mercObj = _this select 0;
private _msg = _this select 1;
if(_msg isEqualTo "")then
{	
	eXpochClientPlayerMercenary = _mercObj;
	private _mercName = name eXpochClientPlayerMercenary;
	_group = group player;
	[eXpochClientPlayerMercenary] joinSilent _group;
	["InfoTitleAndText_Orange", ["Incoming MERC!", format ["You have been given the opportunity to fight beside %1. Good Luck.", _mercName]]] call ExileClient_gui_toaster_addTemplateToast;

	eXpochClientPlayerMercenarymoveTo = "player";
	[] call eXpochClient_object_player_merc_actions;
}
else
{
	["ErrorTitleAndText", ["Error Purchasing", format ["%1", _msg]]] call ExileClient_gui_toaster_addTemplateToast;
};
/*
if !(ExileClientPartyID isEqualTo -1) then
{
	[eXpochClientPlayerMercenary] joinSilent (groupFromNetId ExileClientPartyID);
	(groupFromNetId ExileClientPartyID) selectLeader player;
}else{
	[eXpochClientPlayerMercenary] joinSilent (group player);
	(group player) selectLeader player;
};

player addaction ["Defend",{
	(group player) setCombatMode "GREEN"; // (Hold fire - defend only)
	eXpochClientPlayerMercenary setBehaviour "SAFE";
}];
player addaction ["Follow",{
	(group player) setCombatMode "GREEN"; // (Hold fire - defend only)
	eXpochClientPlayerMercenary setBehaviour "SAFE";
	eXpochClientPlayerMercenarymoveTo = "player";
}];
player addaction ["Stealth",{
	(group player) setCombatMode "BLUE"; // (Hold fire - defend only)
	eXpochClientPlayerMercenary setBehaviour "STEALTH";
}];
player addaction ["Make it quick",{
	(group player) setCombatMode "Careless";
	eXpochClientPlayerMercenary setBehaviour "WHITE";
}];

player addaction ["Distract",{
	playSound3D ["A3\Sounds_F\environment\animals\dog3.wss", eXpochClientPlayerMercenary];
}];
player addaction ["Enemy at my 12",{
	if(isNil "cursorObject")then
	{
		_enemy = nearestObjects [player,["Man"],125];
		{
			_friendlies = [player,eXpochClientPlayerMercenary];
			if!(_x in _friendlies)then
			{
				eXpochClientPlayerMercenaryNewVictim = _x;
				_enemy = [];
			};
		}forEach _enemy;
		eXpochClientPlayerMercenarymoveTo = "enemy";
	}
	else
	{
		eXpochClientPlayerMercenaryNewVictim = cursorObject;
		eXpochClientPlayerMercenarymoveTo = "enemy";
	};
}];
player addaction ["Scout ahead 100m",{	
	_scoutPOS = player modelToWorld [0,100,1];
	_scoutPos set [2,0];
	eXpochClientPlayerMercenarymoveTo = _scoutPos;
}];

player addaction ["Get in my ride",{
	_vehicle = cursorObject;
	eXpochClientPlayerMercenary setPos (getPos _vehicle); 
	eXpochClientPlayerMercenary moveInAny _vehicle;
}];

player addaction ["Exit Vehicle Merc",{
	moveOut eXpochClientPlayerMercenary;
}];
*/