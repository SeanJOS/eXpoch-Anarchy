/*
	eXpochClient_gui_animalTraderDialog_event_onCategoryDropDownSelectionChanged

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_comboBox","_index","_categoryClass"];
disableSerialization;
_comboBox = _this select 0;
_index = _this select 1;
_categoryClass = _comboBox lbData _index;
[_categoryClass] call eXpochClient_gui_animalTraderDialog_updateAnimalListBox;
true