/*
	eXpochClient_gui_mercTraderDialog_event_onPurchaseButtonClick

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private _player = player;
private _mercClass = uiNameSpace getVariable ["RscExileMercTraderDialogMercClass", ""];
private _pin = ctrlText ((uiNamespace getVariable ["RscExileMercTraderDialog",displayNull]) displayCtrl 4008);
[_player,_mercClass,ExileClientSessionId] remoteExec ["eXpochServer_object_player_network_trading_purchaseMercRequest", 2];
closeDialog 0;