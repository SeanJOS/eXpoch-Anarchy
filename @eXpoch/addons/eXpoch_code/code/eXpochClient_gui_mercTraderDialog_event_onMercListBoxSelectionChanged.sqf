/*
	eXpochClient_gui_mercTraderDialog_event_onMercListBoxSelectionChanged

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_listBox","_index","_mercClass"];
disableSerialization;
_listBox = _this select 0;
_index = _this select 1;
_mercClass = _listBox lbData _index;
_mercClass call eXpochClient_gui_mercTraderDialog_updateMerc;
true