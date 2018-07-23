/*
	eXpochClient_util_inventory_getValueMetalsGems

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
params["_magazinesPlayer"];
private _playereXpochMoney = 0;
private _preciousMetals = getArray(missionConfigFile >> "CfgeXpochCurrencies" >> "MetalsNGems");
{
	if(_x in _preciousMetals)then
	{
		private _value = getNumber(missionConfigFile >> "CfgExileArsenal" >> _x >> "price");
		_playereXpochMoney = _playereXpochMoney + _value;
	};
}forEach _magazinesPlayer;
_playereXpochMoney