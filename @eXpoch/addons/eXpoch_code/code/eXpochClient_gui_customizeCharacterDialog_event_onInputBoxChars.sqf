/*
	eXpochClient_gui_customizeCharacterDialog_event_onInputBoxChars

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_inputBox","_character","_dialog","_checkAccessCodeButton","_continueSpawnButton","_eXpochAccessCode","_codeLength","_goodCharacters","_animalClass","_salesPrice","_quality","_requiredRespect","_ctrlText"];
disableSerialization;
_inputBox = _this select 0;
_character = _this select 1;
_dialog = uiNameSpace getVariable ["RscExilecustomizeCharacterDialog", displayNull];
_security = getNumber(missionConfigFile >> "CfgeXpochSecurity" >> "spawnSecurityFeature");
if(_security isEqualTo 1)then
{
_checkAccessCodeButton = _dialog displayCtrl 4002;
_checkAccessCodeButton ctrlSetText "INCOMPLETE ACCESS CODE";
_checkAccessCodeButton ctrlSetTextColor [1, 0, 0, 1];

_continueSpawnButton = _dialog displayCtrl 42002;
_eXpochAccessCode = getText(missionConfigFile >> "CfgeXpochSecurity" >> "generalServerCode");
_ctrlText = (ctrlText _inputBox);

_codeLength = getNumber(missionConfigFile >> "CfgeXpochSecurity" >> "accessCodeLength");
if((count _ctrlText) <= _codeLength)then
{
	_goodCharacters = [65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,48,49,50,51,52,53,54,55,56,57,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122];
	if!(_character in _goodCharacters)then
	{
		_ctrlText = _ctrlText select [0,(count _ctrlText) - 1];	
	};
	if((count _ctrlText) isEqualTo _codeLength)then
	{
		if(_ctrlText isEqualTo _eXpochAccessCode)then
		{
			_checkAccessCodeButton ctrlEnable true;
			_checkAccessCodeButton ctrlSetText "CORRECT ENTRY";
			_checkAccessCodeButton ctrlSetTextColor [0, 1, 0, 1];
			_continueSpawnButton ctrlEnable true;
			_continueSpawnButton ctrlSetTextColor [0,1,0,1];
		}
		else
		{
			_checkAccessCodeButton ctrlSetText "WRONG ACCESS CODE";
			_checkAccessCodeButton ctrlSetTextColor [1, 0, 0, 1];
		};
	}
	else
	{
		_checkAccessCodeButton ctrlSetText "INCOMPLETE ACCESS CODE";
		_checkAccessCodeButton ctrlSetTextColor [1, 0, 0, 1];
	};
}
else
{
	_checkAccessCodeButton ctrlSetTextColor [1, 0, 0, 1];
	_ctrlText = _ctrlText select [0,(count _ctrlText) - 1];
};
_inputBox ctrlSetText _ctrlText;
_inputBox ctrlCommit 0;
}else{
	_checkAccessCodeButton = _dialog displayCtrl 4002;
	_checkAccessCodeButton ctrlSetText "Feature NOT enabled";
	_checkAccessCodeButton ctrlSetTextColor [1, 0, 0, 1];
	_inputBox ctrlSetText "Feature NOT enabled";
	_inputBox ctrlCommit 0;
};
true