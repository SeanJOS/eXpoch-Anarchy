/*
	eXpochClient_gui_customizeCharacterDialog_event_onCustomizationListBoxSelectionChanged

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_listBox","_index","_customClass"];
disableSerialization;
_listBox = _this select 0;
_index = _this select 1;
_customClass = _listBox lbData _index;
_customClass call eXpochClient_gui_customizeCharacterDialog_updateCustomization;
true