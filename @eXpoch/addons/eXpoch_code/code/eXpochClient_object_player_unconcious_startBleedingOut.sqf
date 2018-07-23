/*
	eXpochClient_object_player_unconcious_startBleedingOut

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/ 
private["_respawnDelay","_layer","_descriptions"];
_respawnDelay = _this;
[100] call BIS_fnc_bloodEffect;
ExileClientPostProcessingColorCorrections ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [0.39, 0.32, 0.25, 0], [0.5,0.5,0.5,0], [0,0,0,0,0,0,4]]; 
ExileClientPostProcessingColorCorrections ppEffectCommit 0;
ExileClientPostProcessingColorCorrections ppEffectAdjust [1, 1, 0, [0.4, 0.2, 0.3, 0], [0.3, 0.05, 0, 0], [0.5,0.5,0.5,0], [0,0,0,0,0,0,4]];
ExileClientPostProcessingColorCorrections ppEffectCommit _respawnDelay; 
ExileClientPostProcessingBackgroundBlur ppEffectAdjust [0];
ExileClientPostProcessingBackgroundBlur ppEffectCommit 0;
ExileClientPostProcessingBackgroundBlur ppEffectEnable true;
ExileClientPostProcessingBackgroundBlur ppEffectAdjust [2];
ExileClientPostProcessingBackgroundBlur ppEffectCommit _respawnDelay;
ExileClientBleedOutHeartbeatPlaying = false; 
ExileClientBleedOutCountDownDuration = _respawnDelay;
ExileClientBleedOutCountDownEnd = time + _respawnDelay;
_layer = "BIS_fnc_respawnCounter" call bis_fnc_rscLayer;
_layer cutText ["", "plain"];
_descriptions = 
[
	"UNCONCIOUS",
	"KNOCKED THE              F$#! OUT",
	"BLEEDING OUT"
];
missionnamespace setvariable ["RscRespawnCounter_description", format ["<t size='2' align='center'>%1</t>",selectRandom _descriptions]];
missionnamespace setvariable ["RscRespawnCounter_colorID", 0];
missionnamespace setvariable ["RscRespawnCounter_Custom", _respawnDelay];
_layer cutRsc ["RscRespawnCounter", "plain"];
showChat true;
"Start ACE Medical Unconscious bleeding out..." call ExileClient_util_log;