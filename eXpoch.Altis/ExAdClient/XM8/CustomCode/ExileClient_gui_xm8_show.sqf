/**
 * ExileClient_gui_xm8_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display","_control","_slideControlID","_slideName","_slideTitle","_slideControl","_titleControl","_toSlideOpenFunction","_AppsLogo","_serverInfo","_newIcon","_newControl","_slothButton"];
disableSerialization;
createDialog "RscExileXM8";
ExileClientXM8IsVisible = true;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];

_slothButton = _display displayCtrl 1103;
_slothButton ctrlSetText "eXpoch A4E";
_slothButton ctrlRemoveAllEventHandlers "ButtonClick";		
_slothButton ctrlAddEventHandler ["ButtonClick", "['Settings', 0] call ExileClient_gui_xm8_slide;hint 'Thank You Alpha Testers!'"];

_AppsLogo = "donkeyball\scratchies.paa";
_serverInfo = _display displayCtrl 1107;
_serverInfo ctrlSetText "";
_serverInfo ctrlSetFade 1;
_serverInfo ctrlCommit 0;

_newIcon = _display ctrlCreate ["RscPicture", 9897, _display displayCtrl 4040];
_newIcon ctrlSetPosition [(24.25 - 3) * (0.025), (15.5 - 2) * (0.04), 2.75 * (0.04), 2.75 * (0.04)];
_newIcon ctrlCommit 0.01;
_newIcon ctrlSetText _AppsLogo;

_newControl = _display ctrlCreate ["RscExileXM8AppButton1x1", 9898, _display displayCtrl 4040];
_newControl ctrlSetPosition [(23.5 - 3) * (0.025), (15 - 2) * (0.04)];
_newControl ctrlCommit 0.01;
_newControl ctrlSetEventHandler ["ButtonClick", "execVM'donkeyball\Scratchies_Init.sqf';"];
_newControl ctrlSetStructuredText (parseText (format ["DonkeyBall"]));

if (ExileClientXM8IsPowerOn) then
{
	_control = _display displayCtrl 4002;
	_control ctrlSetFade 1;
	_control ctrlCommit 0;
}
else
{
	{
		_control = _display displayCtrl _x;
		_control ctrlSetFade 1;
		_control ctrlCommit 0;
	}
	forEach 
	[
		4002,
		4003,
		4004,
		4005,
		4007,
		4001,
		4010,
		4030,
		4020		
	];
};
true call ExileClient_gui_postProcessing_toggleDialogBackgroundBlur;
if (ExileClientXM8CurrentSlide isEqualTo "party") then
{
	if (ExileClientPartyID isEqualTo -1) then
	{
		ExileClientXM8CurrentSlide = "apps";
	};
};

//Add configured controls and add them to "More"
call ExAd_fnc_createExtraApps;

{
	_slideControlID = getNumber (_x >> "controlID");
	_slideName = configName _x;
	_slideTitle = getText (_x >> "title");
	_slideControl = _display displayCtrl _slideControlID;
	if (_slideName isEqualTo ExileClientXM8CurrentSlide) then
	{
		_titleControl = _display displayCtrl 4004;
		_titleControl ctrlSetStructuredText (parseText (format ["<t align='center' font='RobotoMedium'>%1</t>", _slideTitle]));
		_slideControl ctrlSetPosition [(0 * 0.05), (0 * 0.05)];
		_slideControl ctrlCommit 0;
		_slideControl ctrlShow true;
		_toSlideOpenFunction = missionNamespace getVariable [format ["ExileClient_gui_xm8_slide_%1_onOpen", _slideName], ""];
		if !(_toSlideOpenFunction isEqualTo "") then
		{
			call _toSlideOpenFunction;
		};
	}
	else 
	{
		_slideControl ctrlShow false;
	};
}
forEach (("true" configClasses (configFile >> "CfgXM8")) + ("true" configClasses (missionConfigFile >> "CfgXM8")));

ExileXM8ThreadHandle = [10, ExileClient_gui_xm8_thread_update, [], true] call ExileClient_system_thread_addtask;
call ExileClient_gui_xm8_thread_update;