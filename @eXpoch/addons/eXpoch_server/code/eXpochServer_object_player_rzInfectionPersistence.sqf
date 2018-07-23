/*
	eXpochServer_object_player_rzInfectionPersistence

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
_player = _this select 0;
_side = _this select 1;
diag_log format["eXpoch_DEBUG infected player.sqf - 1 begin: _player:%1",_player];
if!(isNull _player)then
{	
	_array = ["ryanzombiescough1", "ryanzombiescough2", "ryanzombiescough3", "ryanzombiescough4", "ryanzombiescough5", "ryanzombiescough6", "ryanzombiescough7", "ryanzombiescough8", "ryanzombiescough9", "ryanzombiescough10", "ryanzombiescough11", "ryanzombiescough12", "ryanzombiescough13", "ryanzombiescough14"];
	_deatharray = ["ryanzombies\sounds\infected_death1.ogg", "ryanzombies\sounds\infected_death2.ogg"];
	_sound = 1;

	_damage1 = ryanzombiesinfectedrate/60;
	_damage2 = ryanzombiesinfectedrate/30;
	_damage3 = ryanzombiesinfectedrate/20;
	_damage4 = ryanzombiesinfectedrate/10;

	while {(alive _player) && (_player getvariable ["ryanzombiesinfected",0] > 0)} do
	{
		if !(_player getvariable ["ryanzombiesimmunity",false]) then
		{
			if (ryanzombiesinfectedsymptoms != 0.5) then
			{
				if (_sound < 1) then
				{
					_random = _array select floor random count _array;
					[_player, format ["%1",_random]] remoteExecCall ["say3D"];
					if (isPlayer _player) then {[[[1.5, 2, 10],_player] remoteExecCall ["fnc_RyanZombies_AddCamShake"]];};
				};
				if (ryanzombiesinfectedsymptoms == 0.9) then {_sound = _sound + 1} else {_sound = _sound + 0.5};
				if (_sound > 4) then {_sound = 0};
			};
			if ((_player getvariable ["ryanzombiesinfected",0]) >= 1) exitwith
			{
				_player setspeaker "NoVoice";
				if (ryanzombiesinfecteddeath == 0.9) then {_deathrandom = _deatharray select floor random count _deatharray; playsound3d [format ["%1",_deathrandom], _player];};
				sleep 0.9;
				_player playaction "gear";
				sleep 0.6;
				_player setdamage 1;
				if !(isnil "Ryanzombiesinfection") then {[_player, _side] execVM "\eXpoch_multifix\infection.sqf"};
				sleep 5;
			};
			if (isnil "ryanzombiesdisablebleeding") then {[_player,1] remoteExecCall ["fnc_RyanZombies_Bleeding"];};
			if ((_player getvariable ["ryanzombiesinfected",0]) > 0.9) exitwith
			{
				_player setVariable ["ryanzombiesinfected",(_player getvariable ["ryanzombiesinfected",0]) + _damage1,true];
				sleep 1;
			};
			if ((_player getvariable ["ryanzombiesinfected",0]) > 0.6) exitwith
			{
				_player setVariable ["ryanzombiesinfected",(_player getvariable ["ryanzombiesinfected",0]) + _damage2,true];
				sleep 2;
			};
			if ((_player getvariable ["ryanzombiesinfected",0]) > 0.3) exitwith
			{
				_player setVariable ["ryanzombiesinfected",(_player getvariable ["ryanzombiesinfected",0]) + _damage3,true];
				sleep 3;
			};
			_player setVariable ["ryanzombiesinfected",(_player getvariable ["ryanzombiesinfected",0]) + _damage4,true];
			sleep 6;
		} else {sleep 4;};
	};
	_player setVariable ["ryanzombiesinfected",0,true];
	_player setVariable ["ryanzombiesimmunity",false,true];
};