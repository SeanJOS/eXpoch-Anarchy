/*
	eXpochClient_object_player_network_purchaseDogResponse

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private _dogObj = _this select 0;
private _msg = _this select 1;
if(_msg isEqualTo "")then
{	
	eXpochClientPlayerBestFriend = _dogObj;

	private _dogName = name eXpochClientPlayerBestFriend;
	_group = group player;
	[eXpochClientPlayerBestFriend] joinSilent _group;
	["InfoTitleAndText_Orange", ["Incoming Best Friend", format ["Welcome %1 as your companion, enjoy!", _dogName]]] call ExileClient_gui_toaster_addTemplateToast;

	eXpochClientPlayerBestFriendmoveTo = "player";
	[] call eXpochClient_object_player_dog_actions;

	player addaction ["Speak",{
		playSound3D ["A3\Sounds_F\environment\animals\dog3.wss", eXpochClientPlayerBestFriend];
	}];
}
else
{
	["ErrorTitleAndText", ["Error Purchasing", format ["%1", _msg]]] call ExileClient_gui_toaster_addTemplateToast;
};

/*
[eXpochClientPlayerBestFriend] joinSilent (group player);
(group player) selectLeader player;

player addaction ["Heel",{
	eXpochClientPlayerBestFriend playMove "Dog_Sit";
}];
player addaction ["Come NOW",{
	eXpochClientPlayerBestFriendmoveTo = "player";
	[] call eXpochClient_object_player_dog_actions;
}];
player addaction ["Slow Boy",{
	eXpochClientPlayerBestFriend playMove "Dog_Walk";
}];
player addaction ["Hurry UP boy",{
	eXpochClientPlayerBestFriend playMove "Dog_Sprint";
}];

player addaction ["Sick Balls Chopper",{
	if(isNil "cursorObject")then
	{
		_enemy = nearestObjects [player,["Man"],125];
		{
			_friendlies = [player,eXpochClientPlayerBestFriend];
			if!(_x in _friendlies)then
			{
				eXpochClientPlayerBuddyNewVictim = _x;
				_enemy = [];
			};
		}forEach _enemy;
		eXpochClientPlayerBestFriendmoveTo = "enemy";
	}
	else
	{
		eXpochClientPlayerBuddyNewVictim = cursorObject;
		eXpochClientPlayerBestFriendmoveTo = "enemy";
	};
}];
player addaction ["Scout ahead 100m",{	
	_scoutPOS = player modelToWorld [0,100,1];
	_scoutPos set [2,0];
	eXpochClientPlayerBestFriendmoveTo = _scoutPos;
}];

player addaction ["Load Buddy in Vehicle",{
	_vehicle = cursorObject;
	eXpochClientPlayerBestFriend setPos (getPos _vehicle); 
	eXpochClientPlayerBestFriend moveInAny _vehicle;
	uisleep 1;
	eXpochClientPlayerBestFriend switchMove "Dog_Sit";
}];

player addaction ["Unload Buddy in Vehicle",{
	moveOut eXpochClientPlayerBestFriend;
}];
*/
//eXpochClientPlayerBestFriend switchMove "Dog_Sit";
