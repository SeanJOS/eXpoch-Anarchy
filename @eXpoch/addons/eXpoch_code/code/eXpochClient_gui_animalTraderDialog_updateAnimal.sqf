/*
	eXpochClient_gui_animalTraderDialog_updateAnimal

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_animalClass","_dialog","_traderObject","_animalConfig","_salesPrice","_pin","_quality","_requiredRespect","_purchaseButton","_armor","_fuelCapacity","_maximumLoad","_maximumSpeed","_stats","_controlID"];
disableSerialization;
_animalClass = _this;
_dialog = uiNameSpace getVariable ["RscExileAnimalTraderDialog", displayNull];
_traderObject = uiNameSpace getVariable ["ExileCurrentTrader", objNull];
_animalConfig = configFile >> "CfgVehicles" >> _animalClass;
_salesPrice = getNumber(missionConfigFile >> "CfgExileArsenal" >> _animalClass >> "price");
_pin = ctrlText (_dialog displayCtrl 4008);
if(count _pin isEqualTo 4)then
{
	_quality = getNumber(missionConfigFile >> "CfgExileArsenal" >> _animalClass >> "quality");
	_requiredRespect = getNumber(missionConfigFile >> "CfgTrading" >> "requiredRespect" >> format["Level%1",_quality]);
	if(_requiredRespect <= ExileClientPlayerScore)then
	{
		_purchaseButton = _dialog displayCtrl 4002;
		_purchaseButton ctrlEnable (_salesPrice <= (player getVariable ["ExileMoney", 0]));
	};
};
_armor = getNumber(_animalConfig >> "armor");
_fuelCapacity = 60;
_maximumLoad = 1337;
_maximumSpeed = getNumber(_animalConfig >> "maxSpeed"); 
_stats = [];
_stats pushBack ["Speed", 		format["%1km/h", 	_maximumSpeed], 	_maximumSpeed/1059 	];
_stats pushBack ["Capacity", 	format["%1", 		_maximumLoad], 		_maximumLoad/6000 		];
_stats pushBack ["Armor", 		format["%1", 		_armor], 			_armor/5000 			];
_stats pushBack ["Companionship",format["%1", 		_fuelCapacity], 			_fuelCapacity/60 			];
_controlID = 6000;
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
_animalClass call ExileClient_gui_modelBox_update;
uiNameSpace setVariable ["RscExileAnimalTraderDialogAnimalClass", _animalClass];