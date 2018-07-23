////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
// 	DonkeyPunch Arma 3 for Exile Addon Mod
// 	by DirtySanchez (aka. =RAV=MusTanG)
//	DonkeyPunch_Exile_Overrides
//	config.cpp
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class eXpoch_ui
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_assets","eXpoch_assets"};
	};
};
class CfgFunctions 
{
	class DonkeyPunch_Exile_Functions_Init 
	{
		class bootstrap 
		{
			file = "\eXpoch_ui\bootstrap";
			class preInit 
			{
				preInit = 1;
			};
		};
	};
};
#include "code\CfgHints.hpp"
//#include "code\CfgLocationTypes.hpp"
//#include "code\CfgWorlds.hpp"
#include "code\CfgXM8.hpp"
class RscText;
class RscStructuredText;
class RscCombo;
class RscXSliderH;
class RscHTML;
class RscControlsGroupNoHScrollbars;
class RscPicture;
class RscVignette;
class RscProgress;
class ProgressMap;
class RscMapControl;
class RscListBox;
class RscButton;
class RscControlsGroup;
class RscPictureKeepAspect;
class RscPictureButton;
class RscExileXM8Slide;
class RscExileXM8Button;
class RscExileXM8Edit;
class RscExileXM8AppButton;
class RscExileXM8AppButton1x1;
class RscExileXM8AppButton2x1;
class RscExileXm8ButtonMenu;
class RscExileXM8ListBox;
class RscExileXM8Frame;
class RscExileXM8AppButton2x2: RscExileXM8AppButton2x1
{
	w = "12.5 * (0.025)";
	h = "10.25 * (0.04)";
	class ShortcutPos
	{
		left = "(12.5 * (0.025)) * 0.5 - (6 * (0.025)) * 0.25";
		top = "(10.25 * (0.04)) * 0.3 -  (5 * (0.04)) * 0.15";
		w = "(6 * (0.025)) * 0.5";
		h = "(5 * (0.04)) * 0.5";
	};
};
//#include "code\RscExileLoadingScreen.hpp"
//#include "code\RscExileSelectSpawnLocationDialog.hpp"
#include "code\RscExileXM8.hpp"
class RscTitles
{
	titles[] = {};
	
	#include "code\RscTitles\RscExileConstructionMode.hpp"
	#include "code\RscTitles\RscExileHUD.hpp"
	#include "code\RscTitles\RscExileRulezMode.hpp"
	#include "code\RscTitles\RscExileKeyLegendMode.hpp"
	
};