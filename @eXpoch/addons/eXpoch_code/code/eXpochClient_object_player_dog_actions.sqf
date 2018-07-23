/*
	eXpochClient_object_player_dog_actions

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/

[eXpochClientPlayerBestFriend] spawn
{
	while {alive eXpochClientPlayerBestFriend} do 
	{
		private _types = ["player","enemy"];
		if!(eXpochClientPlayerBestFriendmoveTo in _types)then
		{
			eXpochClientPlayerBestFriend moveTo eXpochClientPlayerBestFriendmoveTo;
		}
		else
		{
			if(eXpochClientPlayerBestFriendmoveTo isEqualTo "enemy")then
			{
				eXpochClientPlayerBestFriend moveTo getPos eXpochClientPlayerBuddyNewVictim;
			};
			if(eXpochClientPlayerBestFriendmoveTo isEqualTo "player")then
			{
				eXpochClientPlayerBestFriend moveTo getPos player;
			};
		};
		sleep 1;
	};
};