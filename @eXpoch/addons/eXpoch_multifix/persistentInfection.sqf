_target = _this select 0;
_side = _this select 1;

_zombie = _this select 2;//eXpoch new data

diag_log format["eXpoch_DEBUG infected.sqf - 1 begin: target:%1 _side:%2 _zombie:%3",_target, _side, _zombie];
if ((!isServer) and hasInterface) exitwith {};

_infectionChance = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "PlayerInfectionChance");
if (random 100 <= _infectionChance) then
{
	_target setVariable ["ryanzombiesinfected",0.01,true];
	_target setVariable ["eXpochClientRZInfectedBy",_zombie,true];//Make sure to turn this to nil when death occurs on client. Create dummy zed for assigning zed on restarts with persistent infection
	[_target,"\eXpoch_multifix\infected_player.sqf"] remoteExecCall ["fnc_RyanZombies_execVM",_target];

	_x = random 10;
	sleep _x;

	_array = ["ryanzombiescough1", "ryanzombiescough2", "ryanzombiescough3", "ryanzombiescough4", "ryanzombiescough5", "ryanzombiescough6", "ryanzombiescough7", "ryanzombiescough8", "ryanzombiescough9", "ryanzombiescough10", "ryanzombiescough11", "ryanzombiescough12", "ryanzombiescough13", "ryanzombiescough14"];
	_deatharray = ["ryanzombies\sounds\infected_death1.ogg", "ryanzombies\sounds\infected_death2.ogg"];
	_sound = 1;

	_infectedRate = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "PlayerInfectedRate");
	_damage1 = _infectedRate/60;
	_damage2 = _infectedRate/30;
	_damage3 = _infectedRate/20;
	_damage4 = _infectedRate/10;

	while {(alive _target) && (_target getvariable ["ryanzombiesinfected",0] > 0)} do
	{
		if !(_target getvariable ["ryanzombiesimmunity",false]) then
		{
			if (_sound < 1) then
			{
				_random = _array select floor random count _array;
				[_target, format ["%1",_random]] remoteExecCall ["say3D"];
				if (isPlayer _target) then {[[[1.5, 2, 10],_target] remoteExecCall ["fnc_RyanZombies_AddCamShake"]];};
			};
			_sound = _sound + 0.5;
			if (_sound > 4) then {_sound = 0;};

			if ((_target getvariable ["ryanzombiesinfected",0]) >= 1) exitwith
			{
				_target setspeaker "NoVoice";
				_deathrandom = _deatharray select floor random count _deatharray;
				playsound3d [format ["%1",_deathrandom], _target];
				sleep 0.9;
				_target playaction "gear";
				sleep 0.6;
				_target setdamage 1;
				
				if !(isnil "Ryanzombiesinfection") then 
				{
					diag_log format["eXpoch_DEBUG infected.sqf - 2 about to execVM infection: target:%1 _side:%2",_target, _side];
					[_target, _side] execVM "\eXpoch_multifix\infection.sqf";
				};
				
				sleep 5;
			};

			if ((_target getvariable ["ryanzombiesinfected",0]) > 0.9) exitwith
			{
				_target setVariable ["ryanzombiesinfected",(_target getvariable ["ryanzombiesinfected",0]) + _damage1,true];
				diag_log format["eXpoch_DEBUG infected.sqf - 3 set Damage for >0.9: target:%1 newDamage:%2",_target, (_target getvariable ["ryanzombiesinfected",0]) + _damage1];
				sleep 1;
			};
			if ((_target getvariable ["ryanzombiesinfected",0]) > 0.6) exitwith
			{
				_target setVariable ["ryanzombiesinfected",(_target getvariable ["ryanzombiesinfected",0]) + _damage2,true];
				diag_log format["eXpoch_DEBUG infected.sqf - 4 set Damage for >0.6: target:%1 newDamage:%2",_target, (_target getvariable ["ryanzombiesinfected",0]) + _damage2];
				sleep 2;
			};
			if ((_target getvariable ["ryanzombiesinfected",0]) > 0.3) exitwith
			{
				_target setVariable ["ryanzombiesinfected",(_target getvariable ["ryanzombiesinfected",0]) + _damage3,true];
				diag_log format["eXpoch_DEBUG infected.sqf - 5 set Damage for >0.3: target:%1 newDamage:%2",_target, (_target getvariable ["ryanzombiesinfected",0]) + _damage3];
				sleep 3;
			};
			_target setVariable ["ryanzombiesinfected",(_target getvariable ["ryanzombiesinfected",0]) + _damage4,true];
			diag_log format["eXpoch_DEBUG infected.sqf - 6 set Damage for > 0: target:%1 newDamage:%2",_target, (_target getvariable ["ryanzombiesinfected",0]) + _damage4];
			sleep 6;
		} else {sleep 4;};
	};
	_target setVariable ["ryanzombiesinfected",0,true];
	_target setVariable ["ryanzombiesimmunity",false,true];
};