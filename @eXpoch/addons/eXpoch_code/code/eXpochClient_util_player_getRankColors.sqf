/*
	eXpochClient_util_player_getRankColors

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_respect","_rank","_rankColorsDefault","_rankColors","_blackmarketRank","_heroNbanditRank","_handled"];
_respect = _this select 0;
_rank = _this select 1;
_rankColorsDefault = [ [63/255, 212/255, 252/255, 1], [1, 1, 1, 1] ];
_rankColors = _rankColorsDefault;
_blackmarketRank = getNumber(missionConfigFile >> "CfgeXpochRank" >> "blackmarketRank");
_heroNbanditRank = getNumber(missionConfigFile >> "CfgeXpochRank" >> "heroNbanditRank");

_handled = false;
if(_rank < _blackmarketRank)then
{
	_handled = true;
	_rankColors = _rankColorsDefault;
};
if!(_handled)then
{
	if((_rank < _heroNbanditRank) && (_rank >= _blackmarketRank))then
	{
		_handled = true;
		if(_respect < 0)then
		{
			_rankColors = [ [221/255, 135/255, 0/255, 1], [221/255, 135/255, 0/255, 1] ];
		}
		else
		{
			_rankColors = [ [0/255, 120/255, 255/255, 1], [0/255, 120/255, 255/255, 1] ];
		};
	};
};
if!(_handled)then
{
	if(_rank >= _heroNbanditRank)then
	{
		_handled = true;
		if(_respect < 0)then
		{
			_rankColors = [ [221/255, 0/255, 0/255, 1], [221/255, 0/255, 0/255, 1] ];
		}
		else
		{
			_rankColors = [ [0/255, 0/255, 255/255, 1], [0/255, 0/255, 255/255, 1] ];
		};
	};
};
_rankColors