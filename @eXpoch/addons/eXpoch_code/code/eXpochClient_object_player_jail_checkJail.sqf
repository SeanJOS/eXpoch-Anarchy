/*
	eXpochClient_object_player_jail_checkJail

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
if !(eXpochPlayerInJail) then 
{
	if ((getPosATL (vehicle player)) call eXpochClient_util_world_isInJailZone) then 
	{
		ExileClientPlayerIsInCombat = true;
		ExileClientPlayerLastCombatAt = diag_tickTime+30;
		true call ExileClient_gui_hud_toggleCombatIcon;
		eXpochPlayerInJail = true;
	};
	eXpochClientPlayerLastjailCheckAt = diag_tickTime;
}
else 
{
	if (diag_tickTime - eXpochClientPlayerLastjailCheckAt >= 30) then
	{
		if !((vehicle player) call eXpochClient_util_world_isInJailZone) then 
		{
			ExileClientPlayerIsInCombat = false;
			ExileClientPlayerLastCombatAt = diag_tickTime-30;
			false call ExileClient_gui_hud_toggleCombatIcon;
			eXpochPlayerInJail = false;
		};
		eXpochClientPlayerLastjailCheckAt = diag_tickTime;
	};
};
true