/**
 * ExileClient_object_player_healPlayer
 *
 * Exile Mod customized by DonkeyPunch.INFO
 * www.exilemod.com || www.DonkeyPunch.INFO
 * © 2015 Exile Mod Team || DirtySanchez
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
diag_log "Starting Heal Player Code";
_patientName= (name ExileClientInteractionObject);
_patientNetID = [netId (_this select 0)];
_medicName = (name player);
if !(isNull ExileClientInteractionObject) then 
{
	if ("Exile_Item_InstaDoc" in (magazines player)) then 
	{
		["healPlayerRequest", _patientNetID] call ExileClient_system_network_send;
		player removeItem "Exile_Item_InstaDoc";
	} else {
		
		_msg=format["%1, you do not have an InstaDoc to Heal %2",_medicName,_patientName];
		["Whoops",[_msg]] call ExileClient_gui_notification_event_addNotification;
	};
};
diag_log format["Instadoc used for %1 and his netID %2",_patientName,[netId (_this select 0)]];
