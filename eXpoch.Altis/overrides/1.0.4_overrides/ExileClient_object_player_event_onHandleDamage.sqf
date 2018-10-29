/**
 * ExileClient_object_player_event_onHandleDamage
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
 
private["_unit", "_selectionName", "_amountOfDamage", "_sourceOfDamage", "_typeOfProjectile"];
_unit = _this select 0;
_selectionName = _this select 1;
_amountOfDamage = _this select 2;
_sourceOfDamage = _this select 3;
_typeOfProjectile = _this select 4;
_this call ace_medical_fnc_handleDamage;
true