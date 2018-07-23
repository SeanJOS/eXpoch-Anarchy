/*
	eXpochClient_object_player_merc_actions

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
[eXpochClientPlayerMercenary] spawn
{
	while {alive eXpochClientPlayerMercenary} do 
	{
		private _types = ["player","enemy"];
		if!(eXpochClientPlayerMercenarymoveTo in _types)then
		{
			eXpochClientPlayerMercenary moveTo eXpochClientPlayerMercenarymoveTo;
		}
		else
		{
			if(eXpochClientPlayerMercenarymoveTo isEqualTo "enemy")then
			{
				eXpochClientPlayerMercenary moveTo getPos eXpochClientPlayerMercenaryNewVictim;
			};
			if(eXpochClientPlayerMercenarymoveTo isEqualTo "player")then
			{
				eXpochClientPlayerMercenary moveTo getPos player;
			};
		};
		sleep 1;
	};
};