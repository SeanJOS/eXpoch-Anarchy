/**
 * ExileClient_gui_hud_renderDPXStatsPanel
 *
 * DonkeyPuncheD Exile Mod
 * DonkeyPunch.INFO
 * © 2016 DirtySanchez
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
 
private["_display","_money","_moneyValueControl","_moneyLabelControl","_respect","_respectValueControl","_respectLabelControl","_rank","_rankValueControl","_rankLabelControl","_kills","_killsValueControl","_killsLabelControl","_deaths","_deathsLabelControl","_environmentTemperatureValueControl"];
disableSerialization;
if (diag_tickTime - ExileHudDPXStatsRenderedAt >= 0.25) then
{
	ExileHudDPXStatsRenderedAt = diag_tickTime;
	_display = uiNamespace getVariable "RscExileHUD";
	_money = player getVariable ["ExileLocker", 0];
	_moneyValueControl = _display displayCtrl 6302;
	_moneyValueControl ctrlSetText format ["%1", _money];
	_moneyLabelControl = _display displayCtrl 6303;
	if (_money > 25) then
	{
		_moneyLabelControl ctrlSetTextColor [63/255, 212/255, 252/255, 1];
		_moneyValueControl ctrlSetTextColor [1, 1, 1, 1];
	}
	else 
	{
		_moneyLabelControl ctrlSetTextColor [221/255, 38/255, 38/255, 1];
		_moneyValueControl ctrlSetTextColor [221/255, 38/255, 38/255, 1];
	};
	_respect = ExileClientPlayerScore;
	_respectValueControl = _display displayCtrl 6304;
	_respectValueControl ctrlSetText format ["%1", _respect];
	_respectLabelControl = _display displayCtrl 6305;
	if (_respect > 25) then
	{
		_respectLabelControl ctrlSetTextColor [63/255, 212/255, 252/255, 1];
		_respectValueControl ctrlSetTextColor [1, 1, 1, 1];
	}
	else 
	{
		_respectLabelControl ctrlSetTextColor [221/255, 38/255, 38/255, 1];
		_respectValueControl ctrlSetTextColor [221/255, 38/255, 38/255, 1];
	};
	
	_rank = eXpochClientPlayerRank;
	_rankValueControl = _display displayCtrl 6306;
	_rankValueControl ctrlSetText format ["%1", _rank];
	_rankLabelControl = _display displayCtrl 6307;
	_getRankColors = [_respect,_rank] call eXpochClient_util_player_getRankColors;
	_rankLabelControl ctrlSetTextColor (_getRankColors select 0);
	_rankValueControl ctrlSetTextColor (_getRankColors select 1);
		
	_murders = ExileClientPlayerKills + ExileClientPlayerHeroKills + ExileClientPlayerBanditKills;
	_killsValueControl = _display displayCtrl 6308;
	_killsValueControl ctrlSetText format ["%1", _murders];
	_killsLabelControl = _display displayCtrl 6309;
	if (_kills < 36) then
	{
		_killsLabelControl ctrlSetTextColor [221/255, 38/255, 38/255, 1];
		_killsValueControl ctrlSetTextColor [221/255, 38/255, 38/255, 1];
	}
	else 
	{
		_killsLabelControl ctrlSetTextColor [63/255, 212/255, 252/255, 1];
		_killsValueControl ctrlSetTextColor [1, 1, 1, 1];
	};
	_deaths = ExileClientPlayerDeaths;
	_deathsValueControl = _display displayCtrl 6310;
	_deathsValueControl ctrlSetText format ["%1", _deaths];
	_deathsLabelControl = _display displayCtrl 6311;
	if (_deaths > 25) then
	{
		_deathsLabelControl ctrlSetTextColor [63/255, 212/255, 252/255, 1];
		_deathsValueControl ctrlSetTextColor [1, 1, 1, 1];
	}
	else 
	{
		_deathsLabelControl ctrlSetTextColor [221/255, 38/255, 38/255, 1];
		_deathsValueControl ctrlSetTextColor [221/255, 38/255, 38/255, 1];
	};
};