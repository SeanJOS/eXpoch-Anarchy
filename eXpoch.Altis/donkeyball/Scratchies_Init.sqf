disableSerialization;
/*
XM8 Apps script made by Shix
http://www.exilemod.com/profile/4566-shix/
Use: replaces the server info button in the XM8 and opens a apps page in in a xm8 dialouge
XM8 Apps can be configured below
*/
/////////////////
//CONFIG
////////////////
/*
Example
_app1Text = "DeployBike"; //Text what will appear at the bottom of the app button
_app1Logo = "xm8Apps\images\bikeLog.paa"; //The Logo that will Appear on the app button images MUST be in a .paa format
app1_action = {
execVM"custom\deploy_bike.sqf";
};

If you want to change what button the XM8 Apps appears on edit ExileClient_gui_xm8_slide_apps_onOpen.sqf
*/
//Big Picture
_app6Text = "DONKEYBALLZ";
_app6Logo = "donkeyball\scratchies.paa";
app6_action = {};
//App 9
_app9Text = "Use Scratchie";
_app9Logo = "donkeyball\scratchie.paa";
app9_action = {
	['use',ExileClientSessionId, player, ''] remoteExecCall ['ExileServer_lottery_network_request', 2];
		// used to make available t he scratchCount variable
	missionNamespace setVariable ["scratchieCount", 0];
	['',ExileClientSessionId, player, ''] remoteExecCall ['ExileServer_lottery_network_request', 2];
	
	[] spawn {
		disableSerialization;
		sleep 3;
		_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
		_ctrl = (_display displayCtrl 999);
		_ctrl ctrlSetStructuredText (parseText (format ["%1 Scratchies",missionNamespace getVariable ["scratchieCount", 0]]));
	};
};

//App 10
_app10Text = "Buy Scratchie";
_app10Logo = "donkeyball\scratchie-buy.paa";
app10_action = {
	['buy',ExileClientSessionId, player, ''] remoteExecCall ['ExileServer_lottery_network_request', 2];
};

//App 11
_app11Text = "Get Prize";
_app11Logo = "donkeyball\scratchie-prize.paa";
app11_action = {
	['get',ExileClientSessionId, player, ''] remoteExecCall ['ExileServer_lottery_network_request', 2];
};


//App 12
//NOTICE by default the app 12 button is used to go back to the main menu. if you change this you will need to give player a way to return to the main menu
_app12Text = "Back";
_app12Logo = "donkeyball\home.paa";
app12_action = {
  _display = uiNameSpace getVariable ["RscExileXM8", displayNull];
  _AppsArray = [886,996,999,889,9910,8810,9911,8811,9912,8812];
  {
      _ctrl = (_display displayCtrl _x);
      _ctrl ctrlSetFade 1;
      _ctrl ctrlCommit 0.25;
      ctrlEnable [_x, true];
  } forEach _AppsArray;
  _ctrlArray = [4007,4060,4040,4120,4080,4070,4090,4100,4110,4130,4030];
  {
      _ctrl = (_display displayCtrl _x);
      _ctrl ctrlSetFade 0;
      _ctrl ctrlCommit 0;
      ctrlEnable [_x, true];
  } forEach _ctrlArray;
  _appsSlide = (_display displayCtrl 4040);
  _appsSlide ctrlSetPosition [(0 * 0.05), (0 * 0.05)];
  _appsSlide ctrlCommit 0.25;
  {
      ctrlDelete ((findDisplay 24015) displayCtrl _x);
  } forEach _AppsArray;
};
/////////////////
//CONFIG END
////////////////

//If you dont know what you are doing .... just don't touch shit down here

_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
(_display displayCtrl 4004) ctrlSetStructuredText (parseText (format ["<t align='center' font='RobotoMedium'>eXnet</t>"]));
ctrlShow [4092, false];
_esc = (findDisplay 24015) displayAddEventHandler ["KeyDown", "if(_this select 1 == 1)then{ExileClientXM8CurrentSlide = 'apps';};"];

_appsSlide = (_display displayCtrl 4040);
_appsSlide ctrlSetPosition [(-19 * 0.05), (0 * 0.05)];
_appsSlide ctrlCommit 0.25;
uiSleep 0.26;
_ctrlArray = [4007,4060,4040,4120,4080,4070,4090,4100,4110,4130,4030];
{
    _ctrl = (_display displayCtrl _x);
    _ctrl ctrlSetFade 1;
    _ctrl ctrlCommit 0;
    ctrlEnable [_x, false];
} forEach _ctrlArray;

_App6Icon = _display ctrlCreate ["RscPicture", 886];
_App6Icon ctrlSetPosition [(20.1 - 3) * (0.025), (6.5 - 2) * (0.04), 2.75 * (0.04), 2.75 * (0.04)];
_App6Icon ctrlSetFade 1;
_App6Icon ctrlCommit 0;
_App6Icon ctrlSetText _app6Logo;
_App6Button = _display ctrlCreate ["RscExileXM8AppButton2x1", 996];
_App6Button ctrlSetPosition [(16 - 3) * (0.025), (6 - 2) * (0.04)];
_App6Button ctrlSetFade 1;
_App6Button ctrlCommit 0;
_App6Button ctrlSetEventHandler ["ButtonClick", "playSound3D ['A3\Sounds_F\sfx\alarm_independent.wss', player]; "];
_App6Button ctrlSetStructuredText (parseText (format ["%1",_app6Text]));

_App9Icon = _display ctrlCreate ["RscPicture", 889];
_App9Icon ctrlSetPosition [(9.9 - 3) * (0.025), (17.5 - 2) * (0.04), 2.75 * (0.04), 2.75 * (0.04)];
_App9Icon ctrlSetFade 1;
_App9Icon ctrlCommit 0;
_App9Icon ctrlSetText _app9Logo;
_App9Button = _display ctrlCreate ["RscExileXM8AppButton1x1", 999];
_App9Button ctrlSetPosition [(9 - 3) * (0.025), (17 - 2) * (0.04)];
_App9Button ctrlSetFade 1;
_App9Button ctrlCommit 0;
_App9Button ctrlSetEventHandler ["ButtonClick", "call app9_action;"];
_App9Button ctrlSetStructuredText (parseText (format ["%1",_app9Text]));

_App10Icon = _display ctrlCreate ["RscPicture", 8810];
_App10Icon ctrlSetPosition [(16.9 - 3) * (0.025), (17.5 - 2) * (0.04), 2.75 * (0.04), 2.75 * (0.04)];
_App10Icon ctrlSetFade 1;
_App10Icon ctrlCommit 0;
_App10Icon ctrlSetText _app10Logo;
_App10Button = _display ctrlCreate ["RscExileXM8AppButton1x1", 9910];
_App10Button ctrlSetPosition [(16 - 3) * (0.025), (17 - 2) * (0.04)];
_App10Button ctrlSetFade 1;
_App10Button ctrlCommit 0;
_App10Button ctrlSetEventHandler ["ButtonClick", "call app10_action;"];
_App10Button ctrlSetStructuredText (parseText (format ["%1",_app10Text]));

_App11Icon = _display ctrlCreate ["RscPicture", 8811];
_App11Icon ctrlSetPosition [(23.9 - 3) * (0.025), (17.5 - 2) * (0.04), 2.75 * (0.04), 2.75 * (0.04)];
_App11Icon ctrlSetFade 1;
_App11Icon ctrlCommit 0;
_App11Icon ctrlSetText _app11Logo;
_App11Button = _display ctrlCreate ["RscExileXM8AppButton1x1", 9911];
_App11Button ctrlSetPosition [(23 - 3) * (0.025), (17 - 2) * (0.04)];
_App11Button ctrlSetFade 1;
_App11Button ctrlCommit 0;
_App11Button ctrlSetEventHandler ["ButtonClick", "call app11_action;"];
_App11Button ctrlSetStructuredText (parseText (format ["%1", _app11Text]));

_App12Icon = _display ctrlCreate ["RscPicture", 8812];
_App12Icon ctrlSetPosition [(30.9 - 3) * (0.025), (17.5 - 2) * (0.04), 2.75 * (0.04), 2.75 * (0.04)];
_App12Icon ctrlSetFade 1;
_App12Icon ctrlCommit 0;
_App12Icon ctrlSetText _app12Logo;
_App12Button = _display ctrlCreate ["RscExileXM8AppButton1x1", 9912];
_App12Button ctrlSetPosition [(30 - 3) * (0.025), (17 - 2) * (0.04)];
_App12Button ctrlSetFade 1;
_App12Button ctrlCommit 0;
_App12Button ctrlSetEventHandler ["ButtonClick", "call app12_action;"];
_App12Button ctrlSetStructuredText (parseText (format ["%1",_app12Text]));

_GoBackBtn = _display displayCtrl 4091;
_GoBackBtn ctrlSetPosition [0.65, 0.7];
_GoBackBtn ctrlSetFade 1;
_GoBackBtn ctrlCommit 0;

_AppsArray = [886,996,999,889,9910,8810,9911,8811,9912,8812];
{
    _ctrl = (_display displayCtrl _x);
    _ctrl ctrlSetFade 0;
    _ctrl ctrlCommit 0.25;
    ctrlEnable [_x, true];
} forEach _AppsArray;
