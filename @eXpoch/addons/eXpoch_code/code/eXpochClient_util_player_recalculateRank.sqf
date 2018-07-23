/*
	eXpochClient_util_player_recalculateRank

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_respect","_rankMult","_adjRespect","_rank"];
_rank = 0;
_respect = _this select 0;
_rankMult = getNumber(missionConfigFile >> "CfgeXpochRank" >> "rankMultiplier");
if!(_respect isEqualTo 0)then
{
	if(_respect < 0)then
	{
		_adjRespect = -(_respect);
		_rank = floor(_adjRespect/(10000 * _rankMult));
	}
	else
	{
		_rank = floor(_respect/(10000 * _rankMult));
	};
}
else
{
	_rank = 0;
};
_rank