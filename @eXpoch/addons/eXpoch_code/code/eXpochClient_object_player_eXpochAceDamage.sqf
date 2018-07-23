/*
	eXpochClient_object_player_eXpochAceDamage

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
private _shooter = _this select 4;
diag_log format["eXpoch_DEBUG eXpochAceDamage - 1 begin player ace damage: _this:%1", _this];
private _returnDamage = [player, _selection, _damage, _shooter, "Bullet", -1, objNull] call ace_medical_fnc_handleDamage;
diag_log format["eXpoch_DEBUG eXpochAceDamage - 2 _returnDamage:%1", _returnDamage];
[player, _selection, 0.1, "Bullet", ""] call ace_medical_fnc_handleDamage_wounds;
[player, 0.1, _selection, "Bullet"] call ace_medical_fnc_addDamageToUnit;
diag_log format["eXpoch_DEBUG eXpochAceDamage - 3 end _victim:%1 _selection:%2 _hitpart:%3 _damage:%4 ", _victim,_selection,_hitpart,_damage];