/**
 * ExileServer_util_getFragKiller
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_killer","_player"];
_killer = _this;
_player = objNull;
if (isPlayer _killer) then 
{
	_unitTypes = ['Exile_Unit_Player','eXpoch_Female_Prisoner_F','RyanZombiePlayer1','RyanZombiePlayer2','RyanZombiePlayer3','RyanZombiePlayer4','RyanZombiePlayer5','RyanZombiePlayer6'];
	_killerType = typeOf _killer;
	if (_killerType in _unitTypes) then
	{
		_player = _killer;	
	}
	else 
	{
		_uid = getPlayerUID _killer;
		{
			if ((getPlayerUID _x) isEqualTo _uid) exitWith 
			{
				_player = _x;
			};
		}
		forEach allPlayers;
	};
}
else 
{
	if (isUAVConnected _killer) then 
	{
		_player = (UAVControl _killer) select 0;
	};
};
_player