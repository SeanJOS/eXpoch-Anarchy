/**
 * ExileClient_gui_interactionMenu_hook
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 * 
 * eXpoch Addon Mod
 * by DirtySanchez of DonkeyPunch Community Gaming
 * DonkeyPunch.INFO or discord.gg/eXpoch
 *
 */
 
private["_object", "_menus", "_i", "_menu", "_targetType", "_target", "_showMenu", "_menuItems", "_n", "_menuItem", "_showMenuItem", "_model", "_modelNames"];
_object = _this;
_menus = missionConfigFile >> "CfgInteractionMenus";
ExileClientInteractionObject = _object;

/* eXpoch New Addition */
_model = (getModelInfo ExileClientInteractionObject)select 0;
ExileClientInteractionModel = _model;

ExileClientInteractionLastHookTime = time;
for "_i" from 0 to count(_menus) - 1 do 
{
	_menu = _menus select _i;
	_targetType = getNumber(_menu >> "targetType");
	_target = getText(_menu >> "target");
	_showMenu = false;
	/* eXpoch New Addition */
	_playerMenu = false;
	if!(_showMenu) then
	{
		if (_targetType == 2) then 
		{
			if (_object isKindOf _target) then
			{
				_showMenu = true;
			};
		}
		else 
		{
			if ([_object, _target] call ExileClient_util_model_isInteraction) then
			{
				_showMenu = true;
			};
			if ([_model, _target] call ExileClient_util_model_isInteraction)then
			{
				_playerMenu = true;
			};
		};
	};
	
	if (_showMenu) then
	{
		_menuItems = _menu >> "Actions";
		for "_n" from 0 to count(_menuItems) - 1 do 
		{
			_menuItem = _menuItems select _n;
			_showMenuItem = call compile (getText (_menuItem >> "condition"));
			if (_showMenuItem) then
			{
				ExileClientInteractionHandles pushBack (_object addAction 
				[
					getText(_menuItem >> "title"), 
					getText(_menuItem >> "action"), 
					nil, 
					getNumber(_menuItem >> "priority"), 
					getNumber(_menuItem >> "showWindow") isEqualTo 1 
				]);
			};
		};
	};
	/* eXpoch New Addition */
	if (_playerMenu) then
	{
		switch(_target)do
		{
			case "AmbientLoot":
			{
				[] call eXpochClient_object_player_loot_ambientObjects;
			};
			case "Animals":
			{
				[] call eXpochClient_object_player_hunting_gutAnimal;
			};
		};
	};
};