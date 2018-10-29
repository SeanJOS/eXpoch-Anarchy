/**
 * ExileClient_object_item_craft
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
 
private["_recipeClassName", "_quantityToCraft", "_quantityCrafted", "_metSideConditions", "_recipeConfig", "_returnedItems", "_interactionModelGroupClassName", "_components", "_tools", "_equippedMagazines", "_addedItems", "_concreteMixer", "_toolItemClassName", "_equippedToolQuantity", "_interactionModelGroupModels", "_foundObject", "_i", "_hasAllComponents", "_componentQuantity", "_componentItemClassName", "_equippedComponentQuantity", "_groundHolder", "_returnedItemQuantity", "_returnedItemClassName", "_feedbackMessage", "_returnedItemName"];
_recipeClassName = _this select 0;
_quantityToCraft = _this select 1;
_quantityCrafted = 0;
_metSideConditions = true;
_recipeConfig = missionConfigFile >> "CfgCraftingRecipes" >> _recipeClassName;
_returnedItems = getArray(_recipeConfig >> "returnedItems");
_interactionModelGroupClassName = getText(_recipeConfig >> "requiredInteractionModelGroup");
_components = getArray(_recipeConfig >> "components");
_tools = getArray(_recipeConfig >> "tools");
/* eXpoch New Addition */
_equippedMagazines = player call ExileClient_util_playerCargo_list;
_inventory = [];

//New crafting from containers
_nearestContainers = nearestObjects[player,["Exile_Container_Abstract"],10];
_nearestContainer = _nearestContainers select 0;
_altContainerMags = [];
if !(isNull _nearestContainer) then
{
	_contUID = _nearestContainer getVariable ["ExileOwnerUID",""];
	_playerUID = getPlayerUID player;
	_group = group player;
	_members = units _group;
	if((_playerUID isEqualTo _contUID) || (_contUID in _members))then{
		if (!(_nearestContainer getVariable ["ExileIsLocked", 1] isEqualTo -1) || !((locked _nearestContainer) isEqualTo 2)) then
		{
			_altContainerMags = magazines _nearestContainer select 0;
		};
	};
};
//end block

_addedItems = [];
_concreteMixer = objNull;
{
	_toolItemClassName = _x;
	/* eXpoch New Addition */
	if(_toolItemClassName isEqualTo "Exile_Item_Knife")then
	{
		private _inventory = _equippedMagazines;
		_inventory pushBack (currentWeapon player);
		_inventory pushBack (handgunWeapon player);
		_inventory pushBack (secondaryWeapon player);
		private _sharpObjects = getArray(missionConfigFile >> "CfgeXpoch" >> "CuttingTools");
		private _foundSharpObjects = _inventory arrayIntersect _sharpObjects;
		_toolItemClassName = _foundSharpObjects select 0;
		_equippedToolQuantity = count(_foundSharpObjects);
	}else{
		_toolItemClassName = _x;
		_equippedToolQuantity = { _x == _toolItemClassName } count _equippedMagazines;
	};
	if (_equippedToolQuantity == 0 ) then
	{
		_metSideConditions = false;
	};
}
forEach _tools;
if ( getNumber(_recipeConfig >> "requiresOcean") == 1 ) then
{
	if !(surfaceIsWater getPos player) then 
	{
		_metSideConditions = false;
	};
};
if ( getNumber(_recipeConfig >> "requiresFire") == 1 ) then
{
	if !([player, 4] call ExileClient_util_world_isFireInRange) then 
	{
		_metSideConditions = false;
	};
};
if ( getNumber(_recipeConfig >> "requiresConcreteMixer") == 1 ) then
{
	_concreteMixer = (ASLtoAGL (getPosASL player)) call ExileClient_util_world_getNearestConcreteMixer;
	if (isNull _concreteMixer) then 
	{
		_metSideConditions = false;
	};
};
if( _interactionModelGroupClassName != "" ) then
{
	_interactionModelGroupModels = getArray(missionConfigFile >> "CfgInteractionModels" >> _interactionModelGroupClassName >> "models");
	_foundObject = false;
	if ([ASLtoAGL (getPosASL player), 10, _interactionModelGroupModels] call ExileClient_util_model_isNearby) then
	{
		_foundObject = true;	
	}
	else 
	{
		if ( _interactionModelGroupModels call ExileClient_util_model_isLookingAt ) then
		{
			_foundObject = true;
		};
	};
	if !(_foundObject) then
	{
		_metSideConditions = false;
	};
};
if (_metSideConditions) then
{
	for "_i" from 1 to _quantityToCraft do 
	{
		_hasAllComponents = true;
		_altMags = [];
		{
			_componentQuantity = _x select 0;
			_componentItemClassName = _x select 1;
			_equippedComponentQuantity = { _x == _componentItemClassName } count _equippedMagazines;
			if (_equippedComponentQuantity < _componentQuantity ) then
			{
				_needed = _componentQuantity - _equippedComponentQuantity;
				_equippedComponentQuantity = { _x == _componentItemClassName } count _altContainerMags;
				if (_equippedComponentQuantity < _needed ) then
				{
					_hasAllComponents = false;
				}else{
					_altMags pushBack [_componentItemClassName, _needed];
				};
			};
		}
		forEach _components;
		if (_hasAllComponents) then
		{
			if !(isNull _concreteMixer) then 
			{
				["concreteMixerStartRequest", [netId _concreteMixer, _recipeClassName]] call ExileClient_system_network_send;
				_quantityCrafted = -1; 
			}
			else 
			{
				if ([_components, _returnedItems] call ExileClient_util_inventory_canExchangeItems) then
				{
					_groundHolder = objNull;
					{
						_componentQuantity = _x select 0;
						_componentItemClassName = _x select 1;
						for "_i" from 1 to _componentQuantity do 
						{
							player removeItem _componentItemClassName;
						};
					}
					forEach _components;
					
					// New Crafting
					{
						_item = _x select 0;
						_needed = _x select 1;
						for "_i" from 1 to _needed do 
						{
							_nearestContainer removeItem _item;
						}; 
					}forEach _altMags;
					//end block
					
					{
						_returnedItemQuantity = _x select 0;
						_returnedItemClassName = _x select 1;
						_addedItems = [_addedItems, _returnedItemClassName, _returnedItemQuantity] call BIS_fnc_addToPairs;
						for "_i" from 1 to _returnedItemQuantity do 
						{
							if !([player, _returnedItemClassName] call ExileClient_util_playerCargo_add) then 
							{
								if (isNull _groundHolder) then 
								{
									_groundHolder = createVehicle ["GroundWeaponHolder", getPosATL player, [], 0, "CAN_COLLIDE"];
									_groundHolder setPosATL (getPosATL player);
								};
								[_groundHolder, _returnedItemClassName] call ExileClient_util_containerCargo_add;
							};
						};
					} 
					forEach _returnedItems;
					if !(isNull _groundHolder) then 
					{
						["WarningTitleAndText", ["Inventory Full", "Unable to add one or more items to your inventory, it's been dropped on the ground"]] call ExileClient_gui_toaster_addTemplateToast;
					};
					_quantityCrafted = _quantityCrafted + 1;
				};
			};
		};
	};
};
if (_quantityCrafted > -1) then 
{
	if (_quantityCrafted > 0) then
	{	
		_feedbackMessage = "";
		{
			_returnedItemClassName = _x select 0;
			_returnedItemQuantity = _x select 1;
			//_returnedItemName = getText(configFile >> "CfgMagazines" >> _returnedItemClassName >> "displayName");
			/* eXpoch New Addition */
			if(isClass(configFile >> "CfgMagazines" >> _returnedItemClassName))then
			{
				_returnedItemName = getText(configFile >> "CfgMagazines" >> _returnedItemClassName >> "displayName");
			}
			else
			{
				_returnedItemName = getText(configFile >> "CfgWeapons" >> _returnedItemClassName >> "displayName");
			};
			if (_feedbackMessage != "") then 
			{
				_feedbackMessage = _feedbackMessage + "<br/>";
			};
			_feedbackMessage = _feedbackMessage + format ["+%1x %2", _returnedItemQuantity, _returnedItemName];
		}
		forEach _addedItems;
		["SuccessTitleAndText", ["Crafting completed!", _feedbackMessage]] call ExileClient_gui_toaster_addTemplateToast;
	}
	else 
	{
		["ErrorTitleAndText", ["Failed to craft!", "You do not have enough inventory space left!"]] call ExileClient_gui_toaster_addTemplateToast;
	};
};
true