/*
	Pre-Initialization

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private ['_code', '_function', '_file'];

{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;

    _code = compileFinal (preprocessFileLineNumbers _file);                    

    missionNamespace setVariable [_function, _code];
}
forEach 
[
	['eXpochClient_rz_fnc_aceDamage','eXpoch_multifix\acedamage.sqf'],

	['eXpochClient_rz_fnc_infected','eXpoch_multifix\infected.sqf'],	
	['eXpochClient_rz_fnc_infected_player','eXpoch_multifix\infected_player.sqf'],
	
	['eXpochClient_rz_fnc_infection','eXpoch_multifix\infection.sqf'],
	['eXpochClient_rz_fnc_zombie','eXpoch_multifix\zombie.sqf'],
	['eXpochClient_rz_fnc_persistentInfection','eXpoch_multifix\persistentInfection.sqf']
];