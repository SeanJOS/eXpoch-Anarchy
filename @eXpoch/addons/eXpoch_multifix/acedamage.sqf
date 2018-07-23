_target = _this select 0;
_typeDamage = _this select 1;
_zombie = _this select 2;
if(count(_this) > 3)then
{
	_selection = _this select 3;
	_hitpart = _this select 4;
};
diag_log format["eXpoch_DEBUG acedamage.sqf - 1 begin: target:%1 typeDamage:%2 zombie:%3",_target, _typeDamage, _zombie];
_damage = 0;
switch _typeDamage do 
{	
	case 'manNormal': { _damage = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "ZombiePlayerDamage"); };
	case 'vehNormal': { _damage = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "ZombiePlayerDamage")/25; };
	case 'manDemon': { _damage = 0.3; };
	case 'vehDemon': { _damage = 0.03; };
};	
_selection = selectRandom ace_medical_selections;
_hitpart = _selection;
switch _selection do
{
	case "hand_l": { 
		_hitpart = "hands";
	};
	case "hand_r": { 
		_hitpart = "hands";
	};
	case "leg_l": { 
		_hitpart = "legs";
	};
	case "leg_r": { 
		_hitpart = "legs"; 
	};
};
diag_log format["eXpoch_DEBUG acedamage.sqf - 2 random selection then change if hand or legs: selection:%1 hitpart:%2",_selection, _hitpart];
if(isPlayer _target) then 
{
	diag_log format["eXpoch_DEBUG acedamage.sqf - 3a process as isPlayer:%1", _this];
	_damage = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "ZombiePlayerDamage");
	[_target,_selection,_damage,_hitpart,_zombie] remoteExecCall ["eXpochClient_object_player_zombieAceDamage",_target];
}
else
{ // note that this damage won't be applied to AI group members of a player-led team on a server (because AIs are local to group leader) - low priority...
	diag_log format["eXpoch_DEBUG acedamage.sqf - 3b process as !isPlayer:%1", _this];
	_target setdamage (damage _target + _damage);
	//[_target, _selection, _damage, _zombie, "Bullet",-1] call ace_medical_fnc_handleDamage;
};