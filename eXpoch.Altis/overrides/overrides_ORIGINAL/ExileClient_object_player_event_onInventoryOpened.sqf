/**
 * ExileClient_object_player_event_onInventoryOpened
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
//[] spawn eXpochClient_inventory_isFemaleCharacter;
private _cancelEvent = false;
private _container = _this select 1;
try 
{
	if (ExileIsPlayingRussianRoulette) then 
	{
		throw true;
	};
	if (ExileClientIsHandcuffed) then 
	{
		throw true;
	};
	if (ExileClientActionDelayShown) then 
	{
		throw true;
	};
	if (ExileClientIsInConstructionMode) then 
	{
		throw true;
	};
	if ((locked _container) isEqualTo 2) then
	{
		throw true;
	};
	if (_container getVariable ["ExileIsLocked", 1] isEqualTo -1) then 
	{
		throw true;
	};
	ExileClientInventoryOpened = true;
	ExileClientCurrentInventoryContainer = _container;
}
catch 
{
	_cancelEvent = _exception;
};
_cancelEvent