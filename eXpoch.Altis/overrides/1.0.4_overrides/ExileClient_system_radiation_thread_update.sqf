/**
 * ExileClient_system_radiation_thread_update
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
 
private["_markerPos", "_markerDist1", "_markerDist2", "_distance", "_damage"];
ExilePlayerRadiationLastCheck = ExilePlayerRadiation;
ExilePlayerRadiation = 0;
if (getText(missionConfigFile >> "Header" >> "gameType") isEqualTo "Escape") then 
{
	_markerPos = getMarkerPos "ExilePlayArea";
	_markerDist1 = ((getMarkerSize "ExilePlayArea") select 0) * 1.25;
	_markerDist2 = ((getMarkerSize "ExilePlayArea") select 0);
	_distance = _markerPos distance2D (getPosASL player);
	if (_distance > _markerDist2) exitWith
	{
		ExilePlayerRadiation = 1 - ((_distance - _markerDist1) / (_markerDist2 - _markerDist1));
		if (ExilePlayerRadiation > 0.7) then 
		{
			playSound [format ["Exile_Sound_GeigerCounter_High0%1", 1 + (floor random 3)], true];
			_damage = 1/(2*60) * 2;
		}
		else 
		{
			if (ExilePlayerRadiation > 0.3) then 
			{
				playSound [format ["Exile_Sound_GeigerCounter_Medium0%1", 1 + (floor random 3)], true];
				_damage = 1/(2*60) * 2;
			}
			else 
			{
				playSound [format ["Exile_Sound_GeigerCounter_Low0%1", 1 + (floor random 3)], true];
				_damage = 1/(2*60) * 2;
			};
		};
		player setDamage ((damage player) + _damage);
	};
}
else
{
	{
		_distance = (_x select 0) distance (getPosATL player);
		if (_distance < (_x select 2)) exitWith
		{
			if (_distance < (_x select 1)) then 
			{
				ExilePlayerRadiation = 1; 
			}
			else 
			{
				ExilePlayerRadiation = 1 - ((_distance - (_x select 1)) / ((_x select 2) - (_x select 1)));
			};
			if (ExilePlayerRadiation > 0.7) then 
			{
				playSound [format ["Exile_Sound_GeigerCounter_High0%1", 1 + (floor random 3)], true];
				_damage = 1/(1*60) * 2;
			}
			else 
			{
				if (ExilePlayerRadiation > 0.3) then 
				{
					playSound [format ["Exile_Sound_GeigerCounter_Medium0%1", 1 + (floor random 3)], true];
					_damage = 1/(3*60) * 2;
				}
				else 
				{
					playSound [format ["Exile_Sound_GeigerCounter_Low0%1", 1 + (floor random 3)], true];
					_damage = 1/(5*60) * 2;
				};
			};
			/* eXpoch New Addition */
			_maskOn = false;
			_masks = getArray(missionConfigFile >> "CfgeXpoch" >> "RadiationProtectionMasks");
			{
				if(_x in (assignedItems player))then
				{
					_maskOn = true;
					_masks = [];
				};
			}forEach _masks;
			if !(_maskOn) then 
			{
				//player setDamage ((damage player) + _damage);
				//Make "Bullet" "RadZone" and add it to ace definitions 
				player setVariable["eXpochClientLastHitArray", [objNull, "RadZone", diag_tickTime], true];
				_eXpochSelections = ["head","body","hand_l","hand_r","leg_l","leg_r"];
				_selection = selectRandom(_eXpochSelections);
				_returnDamage = [player, _selection, _damage, player, "Bullet", -1, objNull] call ace_medical_fnc_handleDamage;
				[player, _selection, _returnDamage, "Bullet", ""] call ace_medical_fnc_handleDamage_wounds;
				[player, _returnDamage, _selection, "Bullet"] call ace_medical_fnc_addDamageToUnit;
			};
		};
	}
	forEach ExileContaminatedZones;
};
if !(ExilePlayerRadiation isEqualTo ExilePlayerRadiationLastCheck) then 
{
	ExilePostProcessing_RadiationColor ppEffectAdjust 
	[
		1,
		linearConversion [0, 1, ExilePlayerRadiation, 1, 0.45],
		linearConversion [0, 1, ExilePlayerRadiation, 0, -0.05],
		[0,0,0,0],
		[1.5,1.3,1,1 - ExilePlayerRadiation],
		[0.8,0.5,0.9,0],
		[0,0,0,0,0,0,4]
	];
	ExilePostProcessing_RadiationColor ppEffectCommit 2;
	ExilePostProcessing_RadiationChroma ppEffectAdjust [0.02 * ExilePlayerRadiation,0.02 * ExilePlayerRadiation,true];
	ExilePostProcessing_RadiationChroma ppEffectCommit 2;		
	ExilePostProcessing_RadiationFilm ppEffectAdjust [ExilePlayerRadiation,8.39,8,0.9,0.9,true];
	ExilePostProcessing_RadiationFilm ppEffectCommit 2;
};
