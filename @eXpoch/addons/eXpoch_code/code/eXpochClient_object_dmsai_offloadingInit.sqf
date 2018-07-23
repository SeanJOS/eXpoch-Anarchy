/*
	eXpochClient_object_dmsai_offloadingInit

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
_randomAI = _this select 0;
_randomAIGroup = _this select 1;
_randomAIArray = _this select 2;
diag_log format["eXpoch_DEBUG dms ai offloadingINIT _this:%1",_this];
//if(_zed in _zedArray)then
//{
	//[_zed] joinSilent _zGroup;
	//_zGroup setGroupOwner (groupOwner _reqPlayer);
	
	_currentRandomAI = count(_randomAIArray);
	eXpochClientRandomAIArray = _randomAIArray;
	eXpochClientDMSRandomAISpawned = _currentRandomAI;	
//};