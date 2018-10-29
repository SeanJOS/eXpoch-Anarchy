/**
 * ExileClient_object_player_stats_update
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 * 
 * eXpoch Addon Mod
 * by DirtySanchez of DonkeyPunch Community Gaming
 * DonkeyPunch.INFO or discord.gg/eXpoch
 *
 */
 
private["_timeElapsed", "_hungerFactor", "_thirstFactor", "_bloodAlcohol", "_effectAttribute", "_effectValue", "_effectDuration", "_effectStartTime", "_effectValueRemaining", "_endEffect", "_effectToApply", "_hunger", "_thirst"];
if (isNil "ExileLastStatUpdate") then 
{ 
	ExileLastStatUpdate = diag_tickTime; 
};
_timeElapsed = diag_tickTime - ExileLastStatUpdate;
if (diag_tickTime - ExileClientLastTemperatureUpdateAt >= 5) then
{
	(diag_tickTime - ExileClientLastTemperatureUpdateAt) call ExileClient_object_player_stats_updateTemperature;
	ExileClientLastTemperatureUpdateAt = diag_tickTime;
};
ExileClientPlayerLoad = loadAbs player;
ExileClientPlayerOxygen = getOxygenRemaining player * 100;
/* eXpoch New Addition */
_liveAceMedicalStats = player getVariable ["Ace_medical_bodyPartStatus", [0,0,0,0,0,0]];
_liveAceMedicalStats params ["_headDamage", "_torsoDamage",  "_handsDamageL", "_handsDamageR", "_legsDamageL" ,"_legsDamageR"];
eXpochClientPlayerDamageCounter = 0;
_filteredHitPoints =  [ ["head", _headDamage min 1], ["body", _torsoDamage min 1], ["hand_l", _handsDamageL min 1], ["hand_r", _handsDamageR min 1], ["leg_l", _legsDamageL min 1], ["leg_r", _legsDamageR min 1] ];
{
	_stat = _x select 1;
	if!(_stat > 0)then{_stat = (0 - (_stat)) min 1;};
	eXpochClientPlayerDamageCounter = eXpochClientPlayerDamageCounter + _stat;
	player setHit [_x select 0, _stat];
}forEach _filteredHitPoints;

_health = eXpochClientPlayerDamageCounter/6;
player setDammage _health;
ExileClientPlayerAttributes set [0, (1 - (eXpochClientPlayerDamageCounter/6)) * 100];

_pain = player getVariable ["ace_medical_pain",0];
if ((damage player) <= 0.1)then{
	if(_pain > 0.1)then{player setVariable["ace_medical_pain",0.1];};
};
if (((damage player) > 0.1) && ((damage player) <= 0.3))then
{
	if(_pain > 0.15)then{player setVariable["ace_medical_pain",0.15];};
};
if (((damage player) > 0.3) && ((damage player) <= 0.5))then
{
	if(_pain > 0.2)then{player setVariable["ace_medical_pain",0.2];};
};
if (((damage player) >= 0.5) && ((damage player) <= 0.7))then
{
	if(_pain > 0.35)then{player setVariable["ace_medical_pain",0.35];};
};

ExileClientPlayerAttributes set [1, (1 - getFatigue player) * 100];
ExileClientPlayerIsAbleToBreathe = isAbleToBreathe player;
ExileClientPlayerIsInfantry = (vehicle player) isEqualTo player;
ExileClientPlayerVelocity = player call BIS_fnc_absSpeed;
ExileClientPlayerIsBleeding = isBleeding player;
ExileClientPlayerIsBurning = isBurning player;
ExileClientPlayerIsOverburdened = ExileClientPlayerLoad > 900; 
ExileClientPlayerIsDrowning = ExileClientPlayerOxygen < 50;
ExileClientPlayerIsInjured = (ExileClientPlayerAttributes select 0) < 50;
ExileClientPlayerIsHungry = (ExileClientPlayerAttributes select 2) < 25;
ExileClientPlayerIsThirsty = (ExileClientPlayerAttributes select 3) < 25;
ExileClientPlayerIsExhausted = (ExileClientPlayerAttributes select 1) < 40;
ExileClientPlayerIsHungry call ExileClient_gui_hud_toggleHungerIcon;
ExileClientPlayerIsThirsty call ExileClient_gui_hud_toggleThirstIcon;
if (ExileClientIsAutoRunning) then
{
	call ExileClient_system_autoRun_update;
};
if (ExileClientPlayerIsInCombat) then
{
	if( diag_tickTime - ExileClientPlayerLastCombatAt >= 30 ) then
	{
		ExileClientPlayerIsInCombat = false;
		false call ExileClient_gui_hud_toggleCombatIcon;
		call ExileClient_system_rating_balance;		
	};
};
_hungerFactor = 1;
_thirstFactor = 1;
if (ExileClientPlayerIsInfantry) then 
{
	ExileClientPlayerVelocity = ExileClientPlayerVelocity min 24;
	if (ExileClientPlayerVelocity > 0) then 
	{
		_hungerFactor = 1 + ExileClientPlayerVelocity / 64 * _timeElapsed; 
		_thirstFactor = 1 + ExileClientPlayerVelocity / 48 * _timeElapsed; 
	};
}
else 
{
	if (ExileClientIsInBush) then 
	{
		call ExileClient_object_bush_detach;
	};
	if (ExileClientPlayerIsBambi) then 
	{
		if !((typeOf (vehicle player)) isEqualTo "Steerable_Parachute_F") then
		{
			call ExileClient_object_player_bambiStateEnd;
		};
	};
};
if (getText(missionConfigFile >> "Header" >> "gameMode") isEqualTo "Escape") then 
{
	ExileClientPlayerAttributes set [2, 100];
	ExileClientPlayerAttributes set [3, 100];
}
else
{
	ExileClientPlayerAttributes set [2, ((((ExileClientPlayerAttributes select 2) - (100 / ExileClientHungerDecay * _hungerFactor * _timeElapsed)) min 100) max 0)];
	ExileClientPlayerAttributes set [3, ((((ExileClientPlayerAttributes select 3) - (100 / ExileClientThirstDecay * _thirstFactor * _timeElapsed)) min 100) max 0)];
};
/* eXpoch New Addition */
if ((ExileClientPlayerAttributes select 2) == 0 || (ExileClientPlayerAttributes select 3) == 0 || ExileClientPlayerIsBleeding) then
{
	ExileClientPlayerAttributes set [0, ((((ExileClientPlayerAttributes select 0) - ExileClientHealthDecay * _timeElapsed) min 100) max 0)];
	if((ExileClientPlayerAttributes select 2) isEqualTo 0)then
	{
		player setVariable["eXpochClientLastHitArray", [objNull, "Starvation", diag_tickTime], true];
	}
	else
	{
		player setVariable["eXpochClientLastHitArray", [objNull, "Dehydration", diag_tickTime], true];
	};
	_eXpochSelections = ["head","body","hand_l","hand_r","leg_l","leg_r"];
	_selection = selectRandom(_eXpochSelections);
	_returnDamage = [player, _selection, 0.09, player, "Bullet", -1, objNull] call ace_medical_fnc_handleDamage;
	[player, _selection, _returnDamage, "Bullet", ""] call ace_medical_fnc_handleDamage_wounds;
	[player, _returnDamage, _selection, "Bullet"] call ace_medical_fnc_addDamageToUnit;
};

_bloodAlcohol = (ExileClientPlayerAttributes select 4);
if (_bloodAlcohol > 0) then
{
	ExileClientPlayerAttributes set [1, linearConversion [0, 3, _bloodAlcohol, 100, 0, true]];
};
{
	_effectAttribute = _x select 0;
	_effectValue = _x select 1;
	_effectDuration = _x select 2;
	_effectStartTime = _x select 3;
	_effectValueRemaining = _x select 4;
	_endEffect = time - _effectStartTime >= _effectDuration; 
	if( _effectValue > 0 ) then 
	{
		if (_effectDuration == 0) then 
		{
			_effectToApply = _effectValue;
		}
		else 
		{
			_effectToApply = (_effectValue / _effectDuration * _timeElapsed) min _effectValueRemaining;
		};
		_x set [4, _effectValueRemaining - _effectToApply];
		ExileClientPlayerAttributes set [_effectAttribute, ((((ExileClientPlayerAttributes select _effectAttribute) + _effectToApply) min 100) max 0)];
	}
	else 
	{
		if (_effectDuration == 0) then 
		{
			_effectToApply = abs _effectValue;
		}
		else 
		{
			_effectToApply = ((abs _effectValue) / _effectDuration * _timeElapsed) max _effectValueRemaining;
		};
		_x set [4, _effectValueRemaining + _effectToApply];
		ExileClientPlayerAttributes set [_effectAttribute, (((ExileClientPlayerAttributes select _effectAttribute) - (abs _effectToApply) min 100) max 0)];
	};
	if( (ExileClientPlayerAttributes select _effectAttribute) == 0 || (ExileClientPlayerAttributes select _effectAttribute) == 100 ) then
	{
		_endEffect = true;
	};
	if( _endEffect ) then
	{
		ExileClientPlayerEffects deleteAt _forEachIndex;
	};
}
 foreach ExileClientPlayerEffects;
//player setDamage (1 - (ExileClientPlayerAttributes select 0) / 100);
_hunger = ExileClientPlayerAttributes select 2;
_thirst = ExileClientPlayerAttributes select 3;
if (diag_tickTime - ExileClientPlayerLastHpRegenerationAt >= 60) then
{
	if (_hunger >= ExileClientHungerRegen) then
	{
		if (_thirst >= ExileClientThirstRegen) then
		{
			//player setDamage (((damage player) - ExileClientRecoveryAmmount) max 0);
			/* eXpoch New Addition */
			eXpochACEBodyParts = [];
			_liveAceMedicalStats = player getVariable ["Ace_medical_bodyPartStatus", [0,0,0,0,0,0]];
			_liveAceMedicalStats params ["_headDamage", "_torsoDamage",  "_handsDamageL", "_handsDamageR", "_legsDamageL" ,"_legsDamageR"];
			_filteredHitPoints =  [ ["head", _headDamage min 1], ["body", _torsoDamage min 1], ["hand_l", _handsDamageL min 1], ["hand_r", _handsDamageR min 1], ["leg_l", _legsDamageL min 1], ["leg_r", _legsDamageR min 1] ];
			{
				_stat = (((_x select 1) - ExileClientRecoveryAmmount) max 0);
				player setHit [_x select 0, _stat];
				eXpochACEBodyParts pushBack _stat;
			}forEach _filteredHitPoints;
			if(count(eXpochACEBodyParts) isEqualTo 6)then{player setVariable ["Ace_medical_bodyPartStatus",eXpochACEBodyParts];};
			
			ExileClientPlayerLastHpRegenerationAt = diag_tickTime;
		};	
	};
};
/* eXpoch New Addition */
_maskOn = false;
_masks = getArray(missionConfigFile >> "CfgeXpoch" >> "MasksRequiringOxygenAndSounds");
{
	if(_x in (assignedItems player))then
	{
		_maskOn = true;
		_masks = [];
	};
}forEach _masks;
if (_maskOn) then 
{
	if !(ExileClientGasMaskVisible) then 
	{
		true call ExileClient_gui_gasMask_toggle;
	};
	if (alive player) then 
	{
		if (diag_tickTime >= ExileGasMaskNextSoundAt) then 
		{
			playSound format ["Exile_Sound_GasMaskBreathing0%1", 1 + (floor (random 2))];
			ExileGasMaskNextSoundAt = diag_tickTime + (2.2 + (random 1));
			_currentOxygenAdj = ExileClientPlayerOxygen - 0.001;
			player setOxygenRemaining _currentOxygenAdj;
		};
	};
}
else 
{
	if (ExileClientGasMaskVisible) then 
	{
		false call ExileClient_gui_gasMask_toggle;
	};
};
ExileLastStatUpdate = diag_tickTime;
true