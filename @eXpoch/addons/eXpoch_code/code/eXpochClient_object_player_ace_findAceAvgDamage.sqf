/*
	eXpochClient_object_player_ace_findAceAvgDamage

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private _liveAceMedicalStats = player getVariable ["Ace_medical_bodyPartStatus", [0,0,0,0,0,0]];

private _head = _liveAceMedicalStats select 0;
private _body = _liveAceMedicalStats select 1;
private _hand_l = _liveAceMedicalStats select 2;
private _hand_r = _liveAceMedicalStats select 3;
private _leg_l = _liveAceMedicalStats select 4;
private _leg_r = _liveAceMedicalStats select 5;
/*
player setHitPointDamage ["hitFace", (_head/3) min 0.95];
player setHitPointDamage ["hitNeck", (_head/3) min 0.95];
player setHitPointDamage ["hitHead", (_head/3) min 0.95];
player setHitPointDamage ["hitPelvis", (_body/5) min 0.95];
player setHitPointDamage ["hitAbdomen", (_body/5) min 0.95];
player setHitPointDamage ["hitDiaphragm", (_body/5) min 0.95];
player setHitPointDamage ["hitChest", (_body/5) min 0.95];
player setHitPointDamage ["hitBody", (_body/5) min 0.95];
player setHitPointDamage ["hitArms", ((_hand_l+_hand_r)/2) min 0.95];
player setHitPointDamage ["hitHands", ((_hand_l+_hand_r)/2) min 0.95];
player setHitPointDamage ["hitLegs", ((_leg_l+_leg_r)/2) min 0.95];
*/
private _totaldmg = _head + _body + _hand_l + _hand_r + _leg_l + _leg_r;
_avgDMG = (_totaldmg/4) min 0.99;
//player setDammage _avgDMG;
_avgDMG