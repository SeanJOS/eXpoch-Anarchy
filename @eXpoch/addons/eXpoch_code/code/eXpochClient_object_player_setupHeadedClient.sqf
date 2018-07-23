/*
	eXpochClient_object_player_setupHeadedClient

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
_headedClientPOS = [7536.87, 12204.4, 33.27];
_headedClientVDnU = [ [-0.913848, -0.406056, 0], [0, 0, 1] ];
_group = createGroup civilian;
_headedClient = _group createUnit ["Exile_Unit_Player",[0,0,0],[],0,"FORM"];
_headedClient setPosWorld _headedClientPOS;
_headedClient setVectorDirAndUp [_headedClientVDnU select 0, _headedClientVDnU select 1];
_headedClient setVariable ["BIS_enableRandomization", false];
_headedClient setVariable ["BIS_fnc_animalBehaviour_disable", true];
_headedClient disableAI "ANIM";
_headedClient disableAI "MOVE";
_headedClient disableAI "FSM";
_headedClient disableAI "AUTOTARGET";
_headedClient disableAI "TARGET";
_headedClient disableAI "CHECKVISIBLE";
_headedClient allowDamage false;
_headedClient hideObject true;
_headedClient setVariable["eXpochHeadedClientParams",[player,_group],true];
player setVariable ["eXpochHeadedClient",[_headedClient,_group],true];