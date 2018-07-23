/*
	ExileClient_gui_xm8_slide_clan_event_handleModeration

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_display","_playerListBox","_index","_playerIsOwner","_selectedUid","_playerName"];
disableSerialization;
_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_playerListBox = _display displayCtrl 4061;
_index = lbCurSel _playerListBox;
_playerIsOwner = (getPlayerUID player) isEqualTo (ExileClientClanInfo select 1);
_selectedUid = _playerListBox lbData (lbCursel _playerListBox);
_playerName = _playerListBox lbText (lbCursel _playerListBox);
if!(_selectedUid isEqualTo "")then
{
	if!(ExileClientClanInfo isEqualTo [])then
	{
		if((getPlayerUID player) isEqualTo (ExileClientClanInfo select 1))then
		{
			[format ["Promote %1?", _playerName], "Promote?", "Don't Promote"] call ExileClient_gui_xm8_showConfirm;
			waitUntil { !(isNil "ExileClientXM8ConfirmResult") };
			if (ExileClientXM8ConfirmResult) then
			{
				["moderationClanRequest", [_selectedUid]] call ExileClient_system_network_send;
			};
		};
	};
};
true