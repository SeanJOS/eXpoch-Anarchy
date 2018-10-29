/**
 * ExileClient_util_player_applyHitPointMap
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
/* 
private["_player","_hitPoints"];
_player = _this select 0;
_hitPoints = _this select 1;
{
	_player setHitPointDamage [_x select 0, _x select 1];
}
forEach _hitPoints;*/

private["_player","_liveAceMedicalStats"];
_player = _this select 0;
_liveAceMedicalStats = _player getVariable ["Ace_medical_bodyPartStatus", [0,0,0,0,0,0]];
_head = _liveAceMedicalStats select 0;
_body = _liveAceMedicalStats select 1;
_hand_l = _liveAceMedicalStats select 2;
_hand_r = _liveAceMedicalStats select 3;
_leg_l = _liveAceMedicalStats select 4;
_leg_r = _liveAceMedicalStats select 5;

_avgHandDamage = (_hand_l + _hand_r)/2;
_avgLegDamage = (_leg_l + _leg_r)/2;

_player setHitPointDamage ["hitFace", _head];
_player setHitPointDamage ["hitNeck", _head];
_player setHitPointDamage ["hitHead", _head];
_player setHitPointDamage ["hitPelvis", _body];
_player setHitPointDamage ["hitAbdomen", _body];
_player setHitPointDamage ["hitDiaphragm", _body];
_player setHitPointDamage ["hitChest", _body];
_player setHitPointDamage ["hitBody", _body];
_player setHitPointDamage ["hitArms", _avgHandDamage];
_player setHitPointDamage ["hitHands", _avgHandDamage];
_player setHitPointDamage ["hitLegs", _avgLegDamage];