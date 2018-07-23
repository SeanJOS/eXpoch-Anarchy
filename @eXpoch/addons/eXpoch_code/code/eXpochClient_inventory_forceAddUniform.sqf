/*
	eXpochClient_inventory_forceAddUniform

	DonkeyPunch eXpoch 
	2016 DonkeyPunch Dev Team
	
	http://DonkeyPunch.INFO
	
	The contents of this file are under the following license:
	Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License
	http://creativecommons.org/licenses/by-nc-nd/4.0/
*/
private["_list","_character","_uniform","_females","_cargo","_itemClassName"];
_list = [];
_character = typeOf player;
if!(_character isEqualTo "eXpoch_Female_Prisoner_F")exitWith{["ErrorTitleAndText", ["Failed!", "No transgender ops while in game."]] call ExileClient_gui_toaster_addTemplateToast;};
if(_character isEqualTo "eXpoch_Female_Prisoner_F")then
{
	_uniform = (uniform player);
	if!(isNil "_uniform")then{
		_list pushback _uniform;
	};

	_cargo = ((uniformContainer player) call ExileClient_util_containerCargo_list);
	if!(_cargo isEqualTo [])then{
		{
			_list pushback _x;
		}forEach _cargo;
	};

	_itemClassName = ExileClientSelectedInventoryItem select 0;
	if!(isNil "_itemClassName")then{
		player forceAddUniform _itemClassName;
		player removeItem _itemClassName;
		{
			player additem _x;
		}forEach _list;
	};
};