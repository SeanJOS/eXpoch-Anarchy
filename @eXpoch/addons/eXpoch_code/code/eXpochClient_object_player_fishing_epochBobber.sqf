/*
	eXpochClient_object_player_fishing_epochBobber

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/

private _currentPos = player modelToWorld[0, 5 + (random 5), 0];
if (surfaceIsWater _currentPos) then {

    private _objects = lineIntersectsObjs[eyePos player, _currentPos, player, objNull, true, 2];
    if (_objects isEqualTo []) then{

        private _bobber = missionNamespace getVariable ["EPOCH_myBobber", objNull];
        if (isNull _bobber) then {
            _bobber = createVehicle ["Bobber_EPOCH",_currentPos, [], 0, "CAN_COLLIDE"];
            _bobber setPosASL _currentPos;
            _bobber setVariable ["EPOCH_bobberTime", diag_tickTime];
            EPOCH_myBobber = _bobber;
			eXpochClientPlayerIsFishing = true;
        } else {
            if (_bobber distance player > 45) then {
				["InfoTitleAndText_Orange", ["Fishing 101", "No bobber found within 45m..."]] call ExileClient_gui_toaster_addTemplateToast;
				eXpochClientPlayerIsFishing = false;
            } else {
                private _castTime = _bobber getVariable ["EPOCH_bobberTime", diag_tickTime];
                private _diffTime = (diag_tickTime - _castTime) / 10;

                if (_diffTime == 0) then {
                    _bobber setVariable ["EPOCH_bobberTime", diag_tickTime];
                } else {

                    if ((diag_tickTime - (_bobber getVariable ["EPOCH_fishOnLine" , 0])) <= 10) then {
                        _diffTime = 100;
                    };

                    _bobber setVelocity [0,-1,-10];
                    _bobber spawn {
                        uiSleep 0.5;
                        deleteVehicle _this;
						eXpochClientPlayerIsFishing = false;
                    };
                };
            };
        };
    };
};