/*
	eXpochClient_object_player_zombieAceDamage

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private _victim = _this select 0;
private _selection = _this select 1;
private _damage = _this select 2;
private _hitpart = _this select 3;
private _zombie = _this select 4;
diag_log format["eXpoch_DEBUG zombieAceDamage - 1 begin player zombieAceDamage _this:%1", _this];

private _returnDamage = [player, _selection, _damage, _zombie, "Bullet", -1, objNull] call ace_medical_fnc_handleDamage;
eXpochClientZombieDamageHead = eXpochClientZombieDamageHead + _returnDamage;
if (eXpochClientZombieDamageHead > 0.09)then{
	private _eXpochSelections = ["head","body","hand_l","hand_r","leg_l","leg_r"];
	private _selection = selectRandom(_eXpochSelections);
	diag_log format["eXpoch_DEBUG zombieAceDamage - 2 _returnDamage:%1 eXpochClientZombieDamageHead:%2", _returnDamage, eXpochClientZombieDamageHead];
	[player, _selection, 0.1, "Bullet", ""] call ace_medical_fnc_handleDamage_wounds;
	[player, 0.1, _selection, "Bullet"] call ace_medical_fnc_addDamageToUnit;
	eXpochClientZombieDamageHead = 0;
	diag_log format["eXpoch_DEBUG zombieAceDamage.sqf - 2 end _victim:%1 _selection:%2 _hitpart:%3 _damage:%4 ", _victim,_selection,_hitpart,_damage];
};