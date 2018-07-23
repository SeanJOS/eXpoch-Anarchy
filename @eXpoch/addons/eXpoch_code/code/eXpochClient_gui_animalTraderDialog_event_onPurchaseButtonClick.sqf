/*
	eXpochClient_gui_animalTraderDialog_event_onPurchaseButtonClick

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private _player = player;
private _animalClass = uiNameSpace getVariable ["RscExileAnimalTraderDialogAnimalClass", ""];
private _pin = ctrlText ((uiNamespace getVariable ["RscExileAnimalTraderDialog",displayNull]) displayCtrl 4008);
[_player,_animalClass,ExileClientSessionId] remoteExec ["eXpochServer_object_player_network_trading_purchaseDogRequest", 2];
closeDialog 0;