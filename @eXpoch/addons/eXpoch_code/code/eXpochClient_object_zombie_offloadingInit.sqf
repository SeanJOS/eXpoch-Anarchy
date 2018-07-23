/*
	eXpochClient_object_zombie_offloadingInit

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
_zed = _this select 0;
_zGroup = _this select 1;
_zedArray = _this select 2;
diag_log format["eXpoch_DEBUG offloadingINIT _this:%1",_this];
//if(_zed in _zedArray)then
//{
	[_zed] joinSilent _zGroup;
	_zGroup setGroupOwner (groupOwner _reqPlayer);
	_currentZeds = count(_zedArray);
	eXpochClientZombiesArray = _zedArray;
	eXpochClientZombiesSpawned = _currentZeds;
	//[_zed,_zGroup,player] execVM "\eXpoch_multifix\zombie.sqf";
	//[_zed,_zGroup,player] execVM "\eXpoch_multifix\zombie_local.sqf";
	
	
//};