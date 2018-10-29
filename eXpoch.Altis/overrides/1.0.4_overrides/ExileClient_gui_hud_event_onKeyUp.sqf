/**
 * ExileClient_gui_hud_event_onKeyUp
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
 
private["_stopPropagation", "_caller", "_keyCode", "_shiftState", "_controlState", "_altState", "_posObject", "_step"];
_stopPropagation = false;
_caller = _this select 0;
_keyCode = _this select 1;
_shiftState = _this select 2;
_controlState = _this select 3;
_altState = _this select 4;
if (_keyCode in (actionKeys "TacticalView")) exitWith {true};
if (_keyCode in (actionKeys "User1") && !(_keyCode isEqualTo 0x02)) exitWith 
{
	if !(ExileClientIsHandcuffed) then 
	{
		call ExileClient_object_vehicle_interaction_keyLock;
	};
	true
};
if (_keyCode in (actionKeys "User2")) exitWith
{
	if (ExileClientAllowPartyMarkers) then 
	{
		if !(ExileClientPartyID isEqualTo -1) then 
		{
			if !(ExileClientIsHandcuffed) then 
			{
				call ExileClient_system_party_updateMyMarker;	
			};
		};
	};
	true
};
if (_keyCode in (actionKeys "User3")) exitWith
{
	ExileClientWaypoints = [];
	true
};
/* eXpoch New Addition */
//eXpoch toggle HOTKEYS for Mercenary AI Commanding
if (_keyCode in (actionKeys "User4")) exitWith
{
	if!(isNull (eXpochClientPlayerMercenary))then
	{
		if!(eXpochMercenaryHotKeys)then
		{
			eXpochMercenaryHotKeys = true;
		}
		else
		{
			eXpochMercenaryHotKeys = false;
		};
	}
	else
	{
		eXpochMercenaryHotKeys = false;
	};
	true
};
//eXpoch toggle HOTKEYS for Animal Pets Commanding
if (_keyCode in (actionKeys "User5")) exitWith
{
	if!(isNil "eXpochClientPlayerBestFriend")then
	{
		if!(eXpochBestFriendHotKeys)then
		{
			eXpochBestFriendHotKeys = true;
		}
		else
		{
			eXpochBestFriendHotKeys = false;
		};
	}
	else
	{
		eXpochBestFriendHotKeys = false;
	};
	true
};
switch (_keyCode) do  
{ 
	case 0x29:	
	{ 
		call ExileClient_gui_hud_toggleStatsBar;
		_stopPropagation = true; 
	}; 
	case 0x11,
	case 0x1E,
	case 0x1F,
	case 0x20:
	{
		if (ExileClientIsAutoRunning) then
		{
			call ExileClient_system_autoRun_stop;
			_stopPropagation = true; 
		};
	};
	case 0x0B:	 	
	{ 
		if !(ExileClientIsHandcuffed) then 
		{
			if !(ExileIsPlayingRussianRoulette) then
			{
				call ExileClient_system_autoRun_toggle;
			};
		};
		_stopPropagation = true; 
	};
	/* eXpoch New Addition */
	case 0x08: 	
	{ 
		if !(ExileClientIsHandcuffed || ExileIsPlayingRussianRoulette) then 
		{
			if (ExileClientIsInConstructionMode) then
			{
				if (ExileClientConstructionMode != 4) then 
				{
					["InfoTitleAndText", ["Vector Mode", "Arrow Keys handle Tilt forward and back. NumPad 7/9 for rotation. 2/8 forward and back. 4/6 left and right. 5 resets piece!"]] call ExileClient_gui_toaster_addTemplateToast;
				};
				ExileClientConstructionMode = 4;
				eXpochClientIsInVectorMode = true;
				[] call ExileClient_gui_constructionMode_update;
			}
			else
			{
				if !(ExileKeyZisVisible) then
				{
					[] call ExileClient_gui_hud_toggleDPXRulez;
					_stopPropagation = true;
				};
			};
		};
	};
	case 0x09: 	
	{ 
		if !(ExileClientIsHandcuffed || ExileIsPlayingRussianRoulette) then 
		{
			if (ExileClientIsInConstructionMode) then
			{
				if (ExileClientConstructionMode != 5) then 
				{
					["InfoTitleAndText", ["Object Snapping", "Arrow Keys handle Tilt forward and back. NumPad 7/9 for rotation. 2/8 forward and back. 4/6 left and right. 5 resets piece!"]] call ExileClient_gui_toaster_addTemplateToast;
				};
				ExileClientConstructionMode = 5;
				eXpochClientIsInVectorMode = true;
				eXpochClientIsInObjectSnappingMode = true;
				eXpochClientVectorSnappedToObject = player;
				[] call ExileClient_gui_constructionMode_update;
			}
			else
			{
				if !(ExileRuleZisVisible) then
				{
					[] call ExileClient_gui_hud_toggleDPXKeyz;
					_stopPropagation = true;
				};
			};
		};
	};
	case 0x0A: 	
	{
		[] call ExileClient_gui_hud_toggleDPXHud;
		_stopPropagation = true;
	};
	
	case 0x3B: 	{ _stopPropagation = true; };
	case 0x3C: 	{ _stopPropagation = true; };
	case 0x3D:	{ _stopPropagation = true; };
	case 0x3E:	{ _stopPropagation = true; };
	case 0x41: 	{ _stopPropagation = true; };
	case 0x42:	{ _stopPropagation = true; };
	case 0x43: 	{ _stopPropagation = true; };
	case 0x44:	{ _stopPropagation = true; };
	case 0x57: 	{ _stopPropagation = true; };
	case 0x58: 	{ _stopPropagation = true; };
	case 0x0E: 	{ _stopPropagation = true; };
	case 0x02: 	
	{ 
		if !(ExileClientIsHandcuffed || ExileIsPlayingRussianRoulette) then 
		{
			if (ExileClientIsInConstructionMode) then
			{
				ExileClientConstructionObject setObjectTextureGlobal [0, "#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"];
				ExileClientConstructionCurrentSnapToObject = objNull;
				ExileClientConstructionIsInSelectSnapObjectMode = false;
				ExileClientConstructionPossibleSnapPositions = [];
				ExileClientConstructionMode = 1; 
				[] call ExileClient_gui_constructionMode_update;
			}
			else 
			{
				if (primaryWeapon player != "") then
				{
					if (primaryWeapon player != currentWeapon player) then
					{
						player selectWeapon (primaryWeapon player);
					};
				};
			};
		};
		_stopPropagation = true; 
	};
	case 0x03: 	
	{ 
		if !(ExileClientIsHandcuffed || ExileIsPlayingRussianRoulette) then 
		{
			if (ExileClientIsInConstructionMode) then
			{
				ExileClientConstructionObject setObjectTextureGlobal [0, "#(argb,2,2,1)color(0.7,0.93,0,0.6,ca)"];
				ExileClientConstructionCurrentSnapToObject = objNull;
				ExileClientConstructionIsInSelectSnapObjectMode = false;
				ExileClientConstructionPossibleSnapPositions = [];
				ExileClientConstructionMode = 2; 
				[] call ExileClient_gui_constructionMode_update;
			}
			else 
			{
				if (handgunWeapon player != "") then
				{
					if (handgunWeapon player != currentWeapon player) then
					{
						player selectWeapon (handgunWeapon player);
					};
				};
			};
		};
		_stopPropagation = true; 
	};
	case 0x04: 	
	{ 
		if !(ExileClientIsHandcuffed || ExileIsPlayingRussianRoulette) then 
		{
			if (ExileClientIsInConstructionMode) then
			{
				if (ExileClientConstructionSupportSnapMode) then
				{
					if (ExileClientConstructionMode != 3) then 
					{
						ExileClientConstructionCurrentSnapToObject = objNull; 
						ExileClientConstructionPossibleSnapPositions = [];
						["InfoTitleAndText", ["Snap Mode", "Look at the object you want to snap to, press SPACE to lock on it and then move your object next to a snap point. Press SPACE again to place the object."]] call ExileClient_gui_toaster_addTemplateToast;
					};
					ExileClientConstructionMode = 3; 
					ExileClientConstructionIsInSelectSnapObjectMode = true;
					[] call ExileClient_gui_constructionMode_update;
				};
			}
			else 
			{
				if (secondaryWeapon player != "") then
				{
					if (secondaryWeapon player != currentWeapon player) then
					{
						player selectWeapon (secondaryWeapon player);
					};
				};
			};
		};
		_stopPropagation = true; 
	};
	case 0x05: 	
	{ 
		if !(ExileClientIsHandcuffed || ExileIsPlayingRussianRoulette) then 
		{
			if (ExileClientIsInConstructionMode) then
			{
				if !(ExileClientConstructionKitClassName isEqualTo "Exile_Item_Flag") then 
				{
					ExileClientConstructionModePhysx = !ExileClientConstructionModePhysx;
					[] call ExileClient_gui_constructionMode_update;
				};
			}
			else
			{
				if (currentWeapon player != "") then
				{
					ExileClientPlayerHolsteredWeapon = currentWeapon player;
					player action["switchWeapon", player, player, 100];
				}
				else 
				{
					if (ExileClientPlayerHolsteredWeapon != "") then
					{
						player selectWeapon ExileClientPlayerHolsteredWeapon;
					};
				};
			};
		};
		_stopPropagation = true;
	};
	case 0x06:
	{
		if (ExileClientIsInConstructionMode) then
		{
			ExileClientConstructionShowHint = !ExileClientConstructionShowHint;
			[] call ExileClient_gui_constructionMode_update;
		}
		else 
		{
			call ExileClient_system_music_earplugs_toggle;
		};
		_stopPropagation = true;
	};
	case 0x07:
	{
		if (getText(missionConfigFile >> "Header" >> "gameType") isEqualTo "Escape") then 
		{
			if (alive player) then
			{
				[] call ExileClient_gui_hud_toggleEscapeStats;
			};	
		}
		else
		{
			/* eXpoch New Addition */
			if (ExileClientIsInConstructionMode) then
			{
				if(eXpochClientIsInVectorMode)then
				{
					if(eXpochClientVectorLock2Player)then
					{
						eXpochClientVectorLock2Player = false;
						detach ExileClientConstructionObject;
					}else{
						eXpochClientVectorLock2Player = true;
						eXpochClientVectorSnap2Object = false;
					};
				}
				else
				{
					if(ExileClientConstructionLock)then
					{
						ExileClientConstructionLock = false;
						eXpochClientVectorLock2Player = true;
						_posObject = position ExileClientConstructionObject;
						ExileClientConstructionOffset = player worldToModel _posObject;
						ExileClientConstructionRotation = (getDir ExileClientConstructionObject) - (getDir player);
					}
					else
					{
						ExileClientConstructionLock = true;
					};
				};
			}
			else
			{
				if (!ExileClientXM8IsVisible) then
				{
					if ("Exile_Item_XM8" in (assignedItems player)) then
					{
						if (alive player) then
						{
							[] call ExileClient_gui_xm8_show;
						};	
					};
				};
			};
			_stopPropagation = true;
		};
	};
	case 0x39:
	{
		if (ExileIsPlayingRussianRoulette) then
		{
			if (ExileRussianRouletteCanFire) then 
			{
				[] spawn ExileClient_system_russianRoulette_fire;
			};
		}
		else 
		{
			if (ExileClientIsInConstructionMode) then
			{
				if (ExileClientConstructionMode == 3) then 
				{
					if (ExileClientConstructionIsInSelectSnapObjectMode) then 
					{
						if !(isNull ExileClientConstructionCurrentSnapToObject) then
						{
							ExileClientConstructionIsInSelectSnapObjectMode = false;
							[] call ExileClient_gui_constructionMode_update;
						};
					}
					else 
					{
						if (ExileClientConstructionCanPlaceObject) then
						{
							ExileClientConstructionResult = 1;
						};
					};
				};
				/* eXpoch New Addition */
				if (ExileClientConstructionMode == 5) then 
				{
					if(eXpochClientVectorSnappedToObject isKindOf "car")then
					{
						ExileClientConstructionResult = 4;
						eXpochClientVectorSnap2Object = false;
					}
					else
					{
						ExileClientConstructionResult = 1;
					};
				}
				else 
				{
					if (ExileClientConstructionCanPlaceObject) then
					{
						ExileClientConstructionResult = 1;
					};
				};
				_stopPropagation = true;
			};
		};
	};
	case 0x01:
	{
		if (ExileIsPlayingRussianRoulette) then 
		{
			_stopPropagation = true;
		}
		else 
		{
			if (ExileClientIsInConstructionMode) then
			{
				_stopPropagation = true;
			};
		};
	};
	/* eXpoch New Addition */
	case 0x10:
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 22.5;
			if (_shiftState) then  {_step = 45;};
			if (_controlState) then {_step = 10;};
			if (_altState) then {_step = 2.50;};
			ExileClientConstructionRotation = (ExileClientConstructionRotation - _step + 360) % 360;
			BuildVecYaw = ((BuildVecYaw - _step) min 360) max -360;
			[] call ExileClient_gui_constructionMode_update;
			_stopPropagation = true;
		};
	};
	case 0x12:
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 22.5;
			if (_shiftState) then  {_step = 45;};
			if (_controlState) then {_step = 10;};
			if (_altState) then {_step = 2.50;};
			ExileClientConstructionRotation = (ExileClientConstructionRotation + _step + 360) % 360;
			BuildVecYaw = ((BuildVecYaw + _step) min 360) max -360;
			[] call ExileClient_gui_constructionMode_update;
			_stopPropagation = true;
		};
	};
	
	case 0x19:
	{
		if (ExileClientIsInBush) then
		{
			call ExileClient_object_bush_detach;
			_stopPropagation = true;
		};
	};
	case 0x31:
	{
		/* eXpoch New Addition */
		if(eXpochClientPlayerNVGogglesOn)then
		{
			eXpochClientPlayerNVGogglesOn = false;
			player action ["nvGogglesOff", player];
		}
		else
		{
			if!((hmd player) isEqualTo "")then
			{
				if((getText(configFile >> "CfgWeapons" >> (hmd player) >> "simulation")) isEqualTo "NVGoggles")then
				{
					eXpochClientPlayerNVGogglesOn = true;
					player action ["nvGoggles", player];
				};
			};
		};
		
		if!(isNull ExileClientCameraParentObject)then
		{
			if(ExileClientCameraNVG)then
			{
				camUseNVG false;
			}
			else
			{
				camUseNVG true;
			};	
			ExileClientCameraNVG = !ExileClientCameraNVG;
			_stopPropagation = true;
		};
	};
	/* eXpoch New Addition */
	case 0xC9: 
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 0.5;
			if (_shiftState) then  {_step = 1;};
			if (_controlState) then {_step = 0.25;};
			if (_altState) then {_step = 0.025;};
			ExileClientConstructionOffset set [2, ((((ExileClientConstructionOffset select 2) + _step) min 6) max -3) ];
			[] call ExileClient_gui_constructionMode_update;
			_stopPropagation = true;
		};
	};
	case 0xD1: 
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 0.5;
			if (_shiftState) then  {_step = 1;};
			if (_controlState) then {_step = 0.25;};
			if (_altState) then {_step = 0.025;};
			ExileClientConstructionOffset set [2, ((((ExileClientConstructionOffset select 2) - _step) min 6) max -3) ];
			[] call ExileClient_gui_constructionMode_update;
			_stopPropagation = true;
		};
	};
	case 0xC7: 
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 0.5;
			if (_shiftState) then  {_step = 1;};
			if (_controlState) then {_step = 0.25;};
			if (_altState) then {_step = 0.025;};
			ExileClientConstructionOffset set [1, (((ExileClientConstructionOffset select 1) + _step) min 6) max ExileClientConstructionBoundingRadius ];
			[] call ExileClient_gui_constructionMode_update;
			_stopPropagation = true;
		};
	};
	case 0xCF: 
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 0.5;
			if (_shiftState) then  {_step = 1;};
			if (_controlState) then {_step = 0.25;};
			if (_altState) then {_step = 0.025;};
			ExileClientConstructionOffset set [1, (((ExileClientConstructionOffset select 1) - _step) min 6) max ExileClientConstructionBoundingRadius ];
			[] call ExileClient_gui_constructionMode_update;
			_stopPropagation = true;
		};
	};
	
	case 0xDB:
	{
		switch (ExilePartyEspMode) do 
		{
			case 0: 		{ ExilePartyEspMode = 1; };
			case 1: 	{ ExilePartyEspMode = 2; };
			case 2: 			{ ExilePartyEspMode = 0; };
		};
		_stopPropagation = true;
	};
	/* eXpoch New Addition */
	//Vector Building and AI Behavior system
	// NUM7
	case 0x47:
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 22.5;
			if (_shiftState) then  {_step = 45;};
			if (_controlState) then {_step = 10;};
			if (_altState) then {_step = 2.50;};
			//eXpochClientVectorOffset set [0,(((BuildVecYaw - _step) min 0) max 360)];
			BuildVecYaw = ((BuildVecYaw - _step) min 360) max -360;
			[] call ExileClient_gui_constructionMode_update;
		}
		else
		{
			if!(isNull (eXpochClientPlayerMercenary))then
			{
				if (_controlState) then 
				{
					eXpochClientPlayerMercenaryNewVictim = cursorObject;
					eXpochClientPlayerMercenarymoveTo = "enemy";
				}else{
					eXpochClientPlayerMercenary setBehaviour "AWARE";
					eXpochClientPlayerMercenary setCombatMode "YELLOW";
				};
				
			};
			if!(isNull (eXpochClientPlayerBestFriend))then
			{
				if (_controlState) then 
				{
					eXpochClientPlayerBuddyNewVictim = cursorObject;
					eXpochClientPlayerBestFriendmoveTo = "enemy";
				};
			};
		};
		_stopPropagation = true; 
	};
	// NUM9
	case 0x49:
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 22.5;
			if (_shiftState) then  {_step = 45;};
			if (_controlState) then {_step = 10;};
			if (_altState) then {_step = 2.50;};
			BuildVecYaw = ((BuildVecYaw + _step) min 360) max -360;
			//eXpochClientVectorOffset set [0,(((BuildVecYaw + _step) min 0) max 360)];
			[] call ExileClient_gui_constructionMode_update;
		}
		else
		{
			if!(isNull (eXpochClientPlayerMercenary))then
			{
				eXpochClientPlayerMercenary setBehaviour "CARELESS";
				eXpochClientPlayerMercenary setCombatMode "RED";
			};
		};
		_stopPropagation = true; 
	};

	// NUM8
	case 0x48:
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 0.5;
			if (_shiftState) then  {_step = 1;};
			if (_controlState) then {_step = 0.25;};
			if (_altState) then {_step = 0.025;};
			if(!isNil {eXpochClientVectorSnappedToObject})then
			{
				ExileClientConstructionOffset set [1, ((((ExileClientConstructionOffset select 1) + _step) min 10) max -10)];
			}
			else
			{
				ExileClientConstructionOffset set [1, ((((ExileClientConstructionOffset select 1) + _step) min 10) max 1)];
			};
			[] call ExileClient_gui_constructionMode_update;
		}
		else
		{
			if!(isNull (eXpochClientPlayerMercenary))then
			{
				if (_shiftState) then
				{
					eXpochClientPlayerMercenary forceWalk false;
				};
				if (_controlState) then 
				{
					eXpochClientPlayerMercenary forceWalk true;
				}else{
					eXpochClientPlayerMercenary setBehaviour "SAFE";
					eXpochClientPlayerMercenary setCombatMode "YELLOW";
				};
				
			};
			if!(isNull (eXpochClientPlayerBestFriend))then
			{
				if (_controlState) then 
				{
					eXpochClientPlayerBestFriend playMove "Dog_Walk";
				};
				if (_shiftState) then
				{
					eXpochClientPlayerBestFriend playMove "Dog_Sprint";
				};
			};
		};
		_stopPropagation = true; 
	};
	// NUM2
	case 0x50:
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 0.5;
			if (_shiftState) then  {_step = 1;};
			if (_controlState) then {_step = 0.25;};
			if (_altState) then {_step = 0.025;};
			if(!isNil {eXpochClientVectorSnappedToObject})then
			{
				ExileClientConstructionOffset set [1, ((((ExileClientConstructionOffset select 1) - _step) min 10) max -10)];
			}
			else
			{
				ExileClientConstructionOffset set [1, ((((ExileClientConstructionOffset select 1) - _step) min 10) max 1)];
			};
			[] call ExileClient_gui_constructionMode_update;
		}
		else
		{
			if!(isNull (eXpochClientPlayerMercenary))then
			{
				if (_controlState) then 
				{
					eXpochClientPlayerMercenary setUnitPos "DOWN";
				}else{
					eXpochClientPlayerMercenary setBehaviour "DANGER";
					eXpochClientPlayerMercenary setCombatMode "GREEN";
				};				
			};
			if!(isNull (eXpochClientPlayerBestFriend))then
			{
				if (_controlState) then 
				{
					if!(eXpochClientPlayerBestFriendInCar)then
					{
						eXpochClientPlayerBestFriend playMove "Dog_Sit";
					}else{
						eXpochClientPlayerBestFriend switchMove "Dog_Sit";
					};
				};
			};
		};
		_stopPropagation = true; 
	};
	
	// NUM4
	case 0x4B:
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 0.5;
			if (_shiftState) then  {_step = 1;};
			if (_controlState) then {_step = 0.25;};
			if (_altState) then {_step = 0.025;};
			ExileClientConstructionOffset set [0, ((((ExileClientConstructionOffset select 0) - _step) min 10) max -10)];
			[] call ExileClient_gui_constructionMode_update;
		}
		else
		{
			if!(isNull (eXpochClientPlayerMercenary))then
			{
				if (_controlState) then 
				{
					_scoutPOS = player modelToWorld [0,100,1];
					_scoutPos set [2,0];
					eXpochClientPlayerMercenarymoveTo = _scoutPos;
				}else{
					eXpochClientPlayerMercenary setBehaviour "DANGER";
					eXpochClientPlayerMercenary setCombatMode "WHITE";
				};
			};
			if!(isNull (eXpochClientPlayerBestFriend))then
			{
				if (_controlState) then 
				{
					_scoutPOS = player modelToWorld [0,100,1];
					_scoutPos set [2,0];
					eXpochClientPlayerBestFriendmoveTo = _scoutPos;
				};
			};
		};
		_stopPropagation = true; 
	};
	// NUM6
	case 0x4D:
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 0.5;
			if (_shiftState) then  {_step = 1;};
			if (_controlState) then {_step = 0.25;};
			if (_altState) then {_step = 0.025;};
			ExileClientConstructionOffset set [0, ((((ExileClientConstructionOffset select 0) + _step) min 10) max -10)];
			[] call ExileClient_gui_constructionMode_update;
		}
		else
		{
			if!(isNull (eXpochClientPlayerMercenary))then
			{
				eXpochClientPlayerMercenary setBehaviour "CARELESS";
				eXpochClientPlayerMercenary setCombatMode "YELLOW";
			};
		};
		_stopPropagation = true; 
	};
	
	// NUM5
	case 0x4C:
	{
		if (ExileClientIsInConstructionMode) then
		{
			ExileClientConstructionOffset = [0,5,0];
			eXpochClientVectorOffset = [0,0,0];
			BuildVecYaw = 0;BuildVecPitch = 0;BuildVecRoll = 0;
			[] call ExileClient_gui_constructionMode_update;
		}
		else
		{
			if!(isNull (eXpochClientPlayerMercenary))then
			{
				if (_controlState) then 
				{
					eXpochClientPlayerMercenarymoveTo = "player";
				}else{
					eXpochClientPlayerMercenary setBehaviour "AWARE";
					eXpochClientPlayerMercenary setCombatMode "WHITE";
				};
			};
			if!(isNull (eXpochClientPlayerBestFriend))then
			{
				if (_controlState) then 
				{
					eXpochClientPlayerBestFriendmoveTo = "player";
				};
			};
		};
		_stopPropagation = true; 
	};

	// ARROWUP
	case 0xC8:
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 22.5;
			if (_shiftState) then  {_step = 45;};
			if (_controlState) then {_step = 10;};
			if (_altState) then {_step = 2.50;};
			//eXpochClientVectorOffset set [1,(((BuildVecPitch - _step) min 0) max 360)];
			BuildVecPitch = ((BuildVecPitch - _step) min 360) max -360;
			[] call ExileClient_gui_constructionMode_update;
		}
		else
		{
			if!(isNull (eXpochClientPlayerMercenary))then
			{
				eXpochClientPlayerMercenary setUnitPos "UP";
			};
		};
		_stopPropagation = true;
	};
	// ARROWDOWN
	case 0xD0:
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 22.5;
			if (_shiftState) then  {_step = 45;};
			if (_controlState) then {_step = 10;};
			if (_altState) then {_step = 2.50;};
			//eXpochClientVectorOffset set [1,(((BuildVecPitch + _step) min 0) max 360)];
			BuildVecPitch = ((BuildVecPitch + _step) min 360) max -360;
			[] call ExileClient_gui_constructionMode_update;
		}
		else
		{
			if!(isNull (eXpochClientPlayerMercenary))then
			{
				eXpochClientPlayerMercenary setUnitPos "DOWN";
			};
		};
		_stopPropagation = true; 
	};
	
	// ARROWLEFT
	case 0xCB:
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 22.5;
			if (_shiftState) then  {_step = 45;};
			if (_controlState) then {_step = 10;};
			if (_altState) then {_step = 2.50;};
			//eXpochClientVectorOffset set [2,(((BuildVecRoll - _step) min 0) max 360)];
			BuildVecRoll = ((BuildVecRoll - _step) min 360) max -360;
			[] call ExileClient_gui_constructionMode_update;
		}
		else
		{
			if!(isNull (eXpochClientPlayerMercenary))then
			{
				eXpochClientPlayerMercenary setBehaviour "AWARE";
				eXpochClientPlayerMercenary setCombatMode "YELLOW";
			};
		};
		_stopPropagation = true;
	};
	// ARROWRIGHT
	case 0xCD:
	{
		if (ExileClientIsInConstructionMode) then
		{
			_step = 22.5;
			if (_shiftState) then  {_step = 45;};
			if (_controlState) then {_step = 10;};
			if (_altState) then {_step = 2.50;};
			BuildVecRoll = ((BuildVecRoll + _step) min 360) max -360;
			[] call ExileClient_gui_constructionMode_update;
		}
		else
		{
			if!(isNull (eXpochClientPlayerMercenary))then
			{
				eXpochClientPlayerMercenary setBehaviour "AWARE";
				eXpochClientPlayerMercenary setCombatMode "YELLOW";
			};
		};
		_stopPropagation = true;
	};
	
	// NUM1
	case 0x4F:
	{
		if!(isNull (eXpochClientPlayerMercenary))then
		{
			eXpochClientPlayerMercenary setBehaviour "STEALTH";
			eXpochClientPlayerMercenary setCombatMode "BLUE";
		};
		_stopPropagation = true; 
	};
	// NUM3
	case 0x51:
	{
		if!(isNull (eXpochClientPlayerMercenary))then
		{
			if (_controlState) then 
			{
				_scoutPOS = player modelToWorld [0,-100,1];
				_scoutPos set [2,0];
				eXpochClientPlayerMercenarymoveTo = _scoutPos;
			}else{
				eXpochClientPlayerMercenary setBehaviour "AWARE";
				eXpochClientPlayerMercenary setCombatMode "GREEN";
			};
		};
		if!(isNull (eXpochClientPlayerBestFriend))then
		{
			if (_controlState) then 
			{
				_scoutPOS = player modelToWorld [0,-100,1];
				_scoutPos set [2,0];
				eXpochClientPlayerBestFriendmoveTo = _scoutPos;
			};
		};
		_stopPropagation = true; 
	};
	// NUM0
	case 0x52:
	{
		if (ExileClientIsInConstructionMode) then
		{
			if(eXpochClientIsInObjectSnappingMode)then
			{
				if(eXpochClientVectorSnap2Object)then
				{
					eXpochClientVectorSnappedToObject = nil;
					eXpochClientVectorSnap2Object = false;
					eXpochClientVectorSnappedToObject = player;
				}
				else
				{
					if(!isNil {cursorObject})then
					{
						eXpochClientVectorSnappedToObject = cursorObject;
						eXpochClientVectorSnap2Object = true;
						ExileClientConstructionObject attachTo [eXpochClientVectorSnappedToObject,ExileClientConstructionOffset];
						ExileClientConstructionFinalObject = getText (ExileClientConstructionConfig >> "staticObject");
						_attachedName = getText(configFile >> "CfgVehicles" >> (typeOf ExileClientConstructionObject) >> "displayName");
						_attachToName = getText(configFile >> "CfgVehicles" >> (typeOf eXpochClientVectorSnappedToObject) >> "displayName");
						_msg = format["%2 found and %1 attached and ready.",_attachedName,_attachToName];
						["SuccessTitleAndText", ["Vector Snapping!", _msg]] call ExileClient_gui_toaster_addTemplateToast;
					}
					else
					{
						["ErrorTitleAndText", ["Vector Snapping!", "There is no object for you to Vector Snap to...."]] call ExileClient_gui_toaster_addTemplateToast;
					};
				};
				_stopPropagation = true;
				[] call ExileClient_gui_constructionMode_update;
			};
		};
	};
};
_stopPropagation