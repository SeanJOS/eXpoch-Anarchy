/*
	eXpochClient_gui_customizeCharacterDialog_show

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
 
private["_dialog","_security","_continueSpawnButton","_checkAccessCodeButton","_playerNameControl","_category","_customizationCategories","_categoryComboBox","_allIndex","_categoryClass","_categoryConfig","_categoryIndex","_rankMult","_rankChange","_progressValue","_stats","_controlID"];
disableSerialization;
player setVariable ["eXpochClientPlayerInCustomization",true,true];
eXpochCustomizeStance = 0;
ExileClientMoonLight setLightBrightness 5;
createDialog "RscExileCustomizeCharacterDialog";
_dialog = uiNameSpace getVariable ["RscExileCustomizeCharacterDialog", displayNull];
_security = getNumber(missionConfigFile >> "CfgeXpochSecurity" >> "spawnSecurityFeature");
if(_security isEqualTo 1)then
{
	_continueSpawnButton = _dialog displayCtrl 42002;
	_continueSpawnButton ctrlEnable false;
}else{
	_continueSpawnButton = _dialog displayCtrl 42002;
	_continueSpawnButton ctrlEnable true;
};

_checkAccessCodeButton = _dialog displayCtrl 4002;
_checkAccessCodeButton ctrlEnable true;
_checkAccessCodeButton ctrlSetText "PLEASE ENTER YOUR CODE ABOVE";
_checkAccessCodeButton ctrlSetTextColor [1, 1, 1, 1];

_playerNameControl = _dialog displayCtrl 41999;
_playerNameControl ctrlSetText (name player);
_playerNameControl ctrlShow true;
_category = "femaleCategories";
if(eXpochClientGenderSelect isEqualTo 1)then{_category = "maleCategories";};
_customizationCategories = getArray(missionConfigFile >> "CfgeXpochLoadouts" >> _category);
_categoryComboBox = _dialog displayCtrl 4000;
_allIndex = _categoryComboBox lbAdd "";
_categoryComboBox lbSetCurSel _allIndex;
{
	_categoryClass = _x;
	_categoryConfig = missionConfigFile >> "CfgTraderCategories" >> _categoryClass;
	_categoryIndex = _categoryComboBox lbAdd getText(_categoryConfig >> "name");
	_categoryComboBox lbSetData [_categoryIndex, _categoryClass];
	_categoryComboBox lbSetPicture [_categoryIndex, getText(_categoryConfig >> "icon")];
}
forEach _customizationCategories;
[""] call ExileClient_gui_customizeCharacterDialog_updateCustomizationListBox;
call eXpochClient_gui_characterBox_create;
player call eXpochClient_gui_characterBox_update;
uiNameSpace setVariable ["RscExileCustomizeCharacterDialogCharacterClass", _characterClass];

_rankMult = getNumber(missionConfigFile >> "CfgeXpochRank" >> "rankMultiplier");
_rankChange = (10000 * _rankMult);
eXpochClientPlayerRank = floor(ExileClientPlayerScore/_rankChange);
_progressValue = (ExileClientPlayerScore - (eXpochClientPlayerRank*_rankChange));

_murders = ExileClientPlayerKills + ExileClientPlayerHeroKills + ExileClientPlayerBanditKills;
_AIKills = ExileClientPlayerAIKills + ExileClientPlayerHeroAIKills + ExileClientPlayerBanditAIKills;
_missions = ExileClientPlayerDMS + ExileClientPlayerZCP;
_totalKills = _murders + _AIKills + ExileClientPlayerZedKills;

_stats = [];
_stats pushBack ["Rank", 		format["%1", eXpochClientPlayerRank], 	_progressValue/_rankChange];
_stats pushBack ["Murders", 	format["%1", _murders], 	_murders/500 		];
_stats pushBack ["AI Kills", 		format["%1", _AIKills], 	_AIKills/1000 			];
_stats pushBack ["Zed Kills",format["%1", ExileClientPlayerZedKills], 	ExileClientPlayerZedKills/5000 			];
_stats pushBack ["Deaths", 		format["%1", 	ExileClientPlayerDeaths], 	ExileClientPlayerDeaths/(_totalKills max 1) 	];
_stats pushBack ["Missions", 		format["%1", 	_missions], 	_missions/1000 	];
_stats pushBack ["Total Time Played", 		format["%1", ([ExileClientPlayerTotalTimePlayed,"HH:MM"] call BIS_FNC_secondsToString)], 	ExileClientPlayerTotalTimePlayed/1000000 	];


_controlID = 42005;
{
	(_dialog displayCtrl _controlID) ctrlShow true;
	(_dialog displayCtrl (_controlID + 2)) ctrlSetText (_x select 0);
	(_dialog displayCtrl (_controlID + 2)) ctrlShow true;
	(_dialog displayCtrl (_controlID + 3)) ctrlSetStructuredText parseText (_x select 1);
	(_dialog displayCtrl (_controlID + 3)) ctrlShow true;
	(_dialog displayCtrl (_controlID + 1)) progressSetPosition (_x select 2);
	(_dialog displayCtrl (_controlID + 1)) ctrlShow true;
	(_dialog displayCtrl (_controlID + 1)) ctrlCommit 1;
	_controlID = _controlID + 4;
}
forEach _stats;