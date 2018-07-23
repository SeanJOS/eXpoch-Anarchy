if(player != _this) exitWith {};
diag_log format["eXpoch_DEBUG infected player.sqf - 1 begin: _this:%1",_this];
sleep 3;
if (player getvariable ["ryanzombiesinfected",0] == 0) exitwith {};
_zombie = player getVariable ["eXpochClientRZInfectedBy",objNull];
_ppInfected = ppEffectCreate ["ChromAberration", 1000];
_ppInfected ppEffectEnable true;

_trg = createTrigger ["EmptyDetector", getposATL player, false];
_trg attachTo [player];

_rziDamage = getNumber(missionConfigFile >> "CfgeXpochZombies" >> "infectedDamage");

while {(alive player) && (player getvariable ["ryanzombiesinfected",0] > 0)} do
{
	if !(player getvariable ["ryanzombiesimmunity",false]) then
	{
		if ((player getvariable ["ryanzombiesinfected",0]) >= 1) exitwith
		{
			_trg say3d "ryanzombiesheart4";
			_ppInfected ppEffectAdjust [0.3, 0.3, false];
			_ppInfected ppEffectCommit 3;
			[player,"head",0.1,"head",objNull] call eXpochClient_object_player_eXpochAceDamage;
			[player,"body",0.1,"body",objNull] call eXpochClient_object_player_eXpochAceDamage;
			sleep 1;
		};
		if ((player getvariable ["ryanzombiesinfected",0]) > 0.85) exitwith
		{
			_trg say3d "ryanzombiesheart4";
			_ppInfected ppEffectAdjust [0.022, 0.022, false];
			_ppInfected ppEffectCommit 3;
			eXpochClientAceDamageCounter = eXpochClientAceDamageCounter + 1;
			if(eXpochClientAceDamageCounter >= 4)then{
				[player,"head",0.1,"head",objNull] call eXpochClient_object_player_eXpochAceDamage;
				[player,"body",0.1,"body",objNull] call eXpochClient_object_player_eXpochAceDamage;
				eXpochClientAceDamageCounter = 0;
			};
			sleep 3;
		};
		if ((player getvariable ["ryanzombiesinfected",0]) > 0.65) exitwith
		{
			_trg say3d "ryanzombiesheart3";
			_ppInfected ppEffectAdjust [0.018, 0.018, false];
			_ppInfected ppEffectCommit 3;
			eXpochClientAceDamageCounter = eXpochClientAceDamageCounter + 1;
			if(eXpochClientAceDamageCounter >= 4)then{	
				[player,"body",_rziDamage,"body",objNull] call eXpochClient_object_player_eXpochAceDamage;
				eXpochClientAceDamageCounter = 0;
			};
			sleep 3;
		};
		if ((player getvariable ["ryanzombiesinfected",0]) > 0.55) exitwith
		{
			_trg say3d "ryanzombiesheart2";
			_ppInfected ppEffectAdjust [0.014, 0.014, false];
			_ppInfected ppEffectCommit 3;
			eXpochClientAceDamageCounter = eXpochClientAceDamageCounter + 1;
			if(eXpochClientAceDamageCounter >= 4)then{
				[player,"hand_l",_rziDamage,"hand_l",objNull] call eXpochClient_object_player_eXpochAceDamage;
				[player,"hand_r",_rziDamage,"hand_r",objNull] call eXpochClient_object_player_eXpochAceDamage;
				eXpochClientAceDamageCounter = 0;
			};
			sleep 5;
		};
		if ((player getvariable ["ryanzombiesinfected",0]) > 0.45) exitwith
		{
			_trg say3d "ryanzombiesheart1";
			_ppInfected ppEffectAdjust [0.01, 0.01, false];
			_ppInfected ppEffectCommit 3;
			eXpochClientAceDamageCounter = eXpochClientAceDamageCounter + 1;
			if(eXpochClientAceDamageCounter >= 4)then{
				[player,"leg_l",_rziDamage,"leg_l",objNull] call eXpochClient_object_player_eXpochAceDamage;
				[player,"leg_r",_rziDamage,"leg_r",objNull] call eXpochClient_object_player_eXpochAceDamage;
				eXpochClientAceDamageCounter = 0;
			};
			sleep 5;
		};
		_ppInfected ppEffectAdjust [0, 0, false];
		_ppInfected ppEffectCommit 2;
		sleep 3;
	} else {_ppInfected ppEffectAdjust [0, 0, false]; _ppInfected ppEffectCommit 2; sleep 4;};
};

player setVariable ["ryanzombiesinfected",0,true];
player setVariable ["ryanzombiesimmunity",false,true];

_ppInfected ppEffectAdjust [0, 0, false];
_ppInfected ppEffectCommit 2;

sleep 2;

deletevehicle _trg;
ppEffectDestroy _ppInfected;