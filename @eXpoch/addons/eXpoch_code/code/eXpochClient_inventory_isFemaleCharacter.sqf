/*
	eXpochClient_inventory_isFemaleCharacter

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
disableSerialization;
waituntil {ExileClientInventoryOpened};
waituntil {!(isnull (finddisplay 602))};
private _display = findDisplay 602;
private _uniform = (uniform player);
private _females = getArray(missionConfigFile >> "CfgTraderCategories" >> "FemaleUniforms");
//private _females = ["U_BasicBodyFemale","U_Wetsuit_uniform","U_Wetsuit_White","U_Wetsuit_Blue","U_Wetsuit_Purp","U_Wetsuit_Camo","U_ghillie1_uniform","U_ghillie2_uniform","U_ghillie3_uniform","U_CamoBlue_uniform","U_CamoBrn_uniform","U_CamoRed_uniform"];
if(_uniform in _females)then{
private _uniformSlot = _display displayCtrl 6331;
_uniformSlot ctrlEnable false;
};


/*

//this is the Ground Container RscListBox
idc = 632;

((findDisplay 602) displayCtrl 632) ctrlSetEventHandler ["LBSelChanged", "_this call fnc_test;closedialog 0;"];

LBSelChanged
LBDrag*/