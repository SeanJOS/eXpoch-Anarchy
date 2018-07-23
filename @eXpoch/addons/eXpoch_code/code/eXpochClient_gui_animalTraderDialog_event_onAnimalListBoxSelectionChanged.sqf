/*
	eXpochClient_gui_animalTraderDialog_event_onAnimalListBoxSelectionChanged

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_listBox","_index","_animalClass"];
disableSerialization;
_listBox = _this select 0;
_index = _this select 1;
_animalClass = _listBox lbData _index;
_animalClass call eXpochClient_gui_animalTraderDialog_updateAnimal;
true