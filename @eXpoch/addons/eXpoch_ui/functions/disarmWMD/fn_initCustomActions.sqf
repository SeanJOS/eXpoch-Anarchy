if (!hasInterface && isServer) exitWith {
Diag_log "Initializing DonkeyPunch Custom Exile Action Compiles!";
};

private ['_code', '_function', '_file'];

{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;
    _code = compileFinal (preprocessFileLineNumbers _file);
    missionNamespace setVariable [_function, _code];
}
forEach
[
	['ExileClient_action_disarmWMD_completed', 'Custom\dpExile\ExileClient_action_disarmWMD_completed.sqf'],
	['ExileClient_action_disarmWMD_condition', 'Custom\dpExile\ExileClient_action_disarmWMD_condition.sqf'],
	['ExileClient_action_disarmWMD_failed', 'Custom\dpExile\ExileClient_action_disarmWMD_failed.sqf']
];

true