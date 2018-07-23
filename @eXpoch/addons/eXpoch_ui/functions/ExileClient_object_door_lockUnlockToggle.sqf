_house = _this select 0;
_doorNumber = _this select 1;
_lockUnlock = _this select 2;
_playerUID = getPlayerUID player;
_maxRadius = 30;//setup config entry for SquattersRightsMaxRadius
_inTerritory = _house nearObjects ["Exile_Construction_Flag_Static", _maxRadius];//only pull from max radius
_nearFlags = count _inTerritory;

if(_nearFlags isEqualTo 0)then
{
	_house setVariable[format["bis_disabled_Door_%1",_doorNumber],_lockUnlock];
}
else
{
	_flagObject = _inTerritory select 0;
	_buildRights = _flagObject getVariable ["ExileTerritoryBuildRights", []];
	_radius = _flagObject getVariable ["ExileTerritorySize",15];
	_distance = player distance _flagObject;
	if(_distance > _radius)then
	{
		_house setVariable[format["bis_disabled_Door_%1",_doorNumber],_lockUnlock];
	}
	else
	{
		if(_playerUID in _buildRights)then
		{
			_house setVariable[format["bis_disabled_Door_%1",_doorNumber],_lockUnlock];
		}
		else
		{
			["Whoops", ["You do not own this house"]] call ExileClient_gui_notification_event_addNotification;
		};
	};
};