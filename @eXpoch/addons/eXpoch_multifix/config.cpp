class CfgPatches
{
	class eXpoch_multifix
	{
		requiredAddons[] = {"A3_Data_F","A3_Ui_F","A3_Functions_F","A3_UiFonts_F","eXpoch_assets"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		vehicles[] = {};
		author = "DonkeyPunch Community Gaming";
	};
};
class CfgFunctions
{
	class eXpoch_multifix 
	{
		class bootstrap 
		{
			file = "\eXpoch_multifix\bootstrap";
			class preInit 
			{
				preInit = 1;
			};
		};
	};
};
class RscStandardDisplay;
class RscProgress;
class RscStructuredText;
class RscPicture;
class RscButton;
class RscShortcutButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscText;
class RscVignette;
class RscDisplayGetReady;
class RscActiveText;
class RscListBox;
class RscListNBox;
class RscCombo;
class RscXListBox;
class RscHTML;
class RscPictureKeepAspect;
class RscActivePicture;
class RscMapControl;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscFrame;
class RscTitle;
class CA_Title;
class RscDebugConsole;
class RscTrafficLight;
class RscFeedback;
class RscMessageBox;
class RscControlsGroup;
class RscTextCheckbox;
class RscDisplayInventory_DLCTemplate;
class RscEdit;
class RscCheckBox;
class RscIGProgress;
class RscHitZones;
class RscVehicleToggles;
class RscIGUIText;
class RscIGUIValue;
class RscOpticsValue;
class RscOpticsText;
class Scrollbar;
class RscIGUIShortcutButton;
class RscActivePictureKeepAspect;
class RscTree;
class RscXSliderH;
class RscObject;
class ctrlMenu;
class ctrlStaticPicture;
class RscButtonMenuSteam;
class RscButtonTextOnly;
class RscDisplayNotFreeze: RscStandardDisplay
{
	enableSimulation = 1;
	access = 3;
	onLoad = "with uiNameSpace do { [_this select 0, 'RscDisplayNotFreeze'] call ExileClient_gui_loadingScreen_load; };";
	onUnload = "with uiNameSpace do { (_this select 0) call ExileClient_gui_loadingScreen_unload; };";
	delete scriptName;
	delete scriptPath;
	class controlsBackground
	{
		class Black: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_Vignette: RscVignette
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Line: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Map: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Noise: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ExileBlackBackground: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,1};
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
		class ExileBackgroundPicture: RscPicture
		{
			idc = 66000;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneW * 4/3";
			text = "exile_assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class controls
	{
		class Disclaimer: RscControlsGroupNoScrollbars
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class LoadingStart: RscControlsGroup
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapAuthor: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapBackBottom: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapBackTop: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapDescription: RscStructuredText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapName: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Mission: RscControlsGroupNoScrollbars
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ProgressMap: RscProgress
		{
			idc = -1;
			x = "safeZoneX";
			y = "safeZoneY";
			w = "safeZoneW";
			h = "5 * pixelH";
			colorBar[] = {"199/255","38/255","81/255",1};
		};
		class ProgressMission: ProgressMap
		{
			x = "safeZoneX";
			y = "safeZoneY";
			w = "safeZoneW";
			h = "5 * pixelH";
			colorBar[] = {"199/255","38/255","81/255",1};
		};
		class Logo3DEN: ctrlStaticPicture
		{
			x = "safeZoneX + safeZoneW - 60 * pixelW - 0.3";
			y = "safeZoneY + safeZoneH - 60 * pixelW - 0.2";
		};
		class ExileSpinnerPicture: RscPicture
		{
			idc = 66001;
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 64) * pixelH";
			w = "64 * pixelW";
			h = "64 * pixelH";
			text = "exile_assets\texture\loading\spinner_ca.paa";
			type = 0;
			centerU = 0.5;
			centerV = 0.5;
			angle = 90;
			show = 0;
		};
		class ExileSpinnerTitle: RscStructuredText
		{
			idc = 66002;
			text = "<t>Almost there...</t>";
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w = "safeZoneW - (60 + 64 + 15) * pixelW";
			h = "64 * pixelH";
			size = "44 * pixelH";
			sizeEx = "44 * pixelH";
			colorText[] = {1,1,1,1};
			shadow = 0;
			class Attributes
			{
				font = "RobotoMedium";
				color = "#ffffff";
				colorLink = "#ffffff";
				align = "left";
				shadow = 0;
			};
		};
		class ExileLogo: RscControlsGroupNoScrollbars
		{
			idc = -1;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + 60 * pixelH";
			w = "380 * pixelW";
			h = "60 * pixelH";
			class controls
			{
				class ExileModBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModIcon: RscPictureKeepAspect
				{
					idc = -1;
					text = "exile_assets\texture\mod\icon.paa";
					x = 0;
					y = 0;
					w = "60 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModName: RscText
				{
					idc = -1;
					text = "Exile Mod";
					font = "RobotoMedium";
					x = "(60 + 10) * pixelW";
					y = "1 * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "(30 + 15) * pixelH";
					sizeEx = "30 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
				};
				class ExileModUrl: RscText
				{
					idc = -1;
					text = "www.exilemod.com";
					font = "RobotoCondensedLight";
					x = "(60 + 10) * pixelW";
					y = "(1 + 30) * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMap: RscControlsGroupNoScrollbars
		{
			idc = 66003;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMapBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMapPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapPicture: RscPicture
				{
					idc = 66004;
					text = "a3\ui_f\data\Logos\arma3_white_ca.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapName: RscText
				{
					idc = 66005;
					text = "RscDisplayNotFreeze";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMapAuthor: RscText
				{
					idc = 66006;
					text = "by some special person";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMission: RscControlsGroupNoScrollbars
		{
			idc = 66007;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMissionBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMissionPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionPicture: RscPictureKeepAspect
				{
					idc = 66008;
					text = "exile_assets\texture\mod\logo.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionName: RscText
				{
					idc = 66009;
					text = "RscDisplayNotFreeze";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMissionAuthor: RscText
				{
					idc = 66010;
					text = "by Community";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
	};
};

class RscDisplayClient: RscStandardDisplay
{
	delete scriptName;
	delete scriptPath;
	access = 3;
	onLoad = "with uiNameSpace do { [_this select 0, 'RscDisplayClient'] call ExileClient_gui_loadingScreen_load; };";
	onUnload = "with uiNameSpace do { (_this select 0) call ExileClient_gui_loadingScreen_unload; };";
	class controlsBackground
	{
		class Black: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Map: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Noise: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_Vignette: RscVignette
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Line: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ExileBlackBackground: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,1};
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
		class ExileBackgroundPicture: RscPicture
		{
			idc = 66000;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneW * 4/3";
			text = "exile_assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class Controls
	{
		class Disclaimer: RscControlsGroupNoScrollbars
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapAuthor: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapBackBottom: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapBackTop: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapName: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapDescription: RscStructuredText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ProgressMap: RscProgress
		{
			idc = -1;
			x = "safeZoneX";
			y = "safeZoneY";
			w = "safeZoneW";
			h = "5 * pixelH";
			colorBar[] = {"199/255","38/255","81/255",1};
		};
		class ProgressMission: ProgressMap
		{
			x = "safeZoneX";
			y = "safeZoneY";
			w = "safeZoneW";
			h = "5 * pixelH";
			colorBar[] = {"199/255","38/255","81/255",1};
		};
		class ExileSpinnerPicture: RscPicture
		{
			idc = 66001;
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 64) * pixelH";
			w = "64 * pixelW";
			h = "64 * pixelH";
			text = "exile_assets\texture\loading\spinner_ca.paa";
			type = 0;
			centerU = 0.5;
			centerV = 0.5;
			angle = 90;
			show = 0;
		};
		class ExileSpinnerTitle: RscStructuredText
		{
			idc = 66002;
			text = "<t>Still loading...</t>";
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w = "safeZoneW - (60 + 64 + 15) * pixelW";
			h = "64 * pixelH";
			size = "44 * pixelH";
			sizeEx = "44 * pixelH";
			colorText[] = {1,1,1,1};
			shadow = 0;
			class Attributes
			{
				font = "RobotoMedium";
				color = "#ffffff";
				colorLink = "#ffffff";
				align = "left";
				shadow = 0;
			};
		};
		class ExileLogo: RscControlsGroupNoScrollbars
		{
			idc = -1;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + 60 * pixelH";
			w = "380 * pixelW";
			h = "60 * pixelH";
			class controls
			{
				class ExileModBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModIcon: RscPictureKeepAspect
				{
					idc = -1;
					text = "exile_assets\texture\mod\icon.paa";
					x = 0;
					y = 0;
					w = "60 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModName: RscText
				{
					idc = -1;
					text = "Exile Mod";
					font = "RobotoMedium";
					x = "(60 + 10) * pixelW";
					y = "1 * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "(30 + 15) * pixelH";
					sizeEx = "30 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
				};
				class ExileModUrl: RscText
				{
					idc = -1;
					text = "www.exilemod.com";
					font = "RobotoCondensedLight";
					x = "(60 + 10) * pixelW";
					y = "(1 + 30) * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMap: RscControlsGroupNoScrollbars
		{
			idc = 66003;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMapBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMapPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapPicture: RscPicture
				{
					idc = 66004;
					text = "a3\ui_f\data\Logos\arma3_white_ca.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapName: RscText
				{
					idc = 66005;
					text = "RscDisplayLoadMission";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMapAuthor: RscText
				{
					idc = 66006;
					text = "by some special person";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMission: RscControlsGroupNoScrollbars
		{
			idc = 66007;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMissionBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMissionPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionPicture: RscPictureKeepAspect
				{
					idc = 66008;
					text = "exile_assets\texture\mod\logo.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionName: RscText
				{
					idc = 66009;
					text = "RscDisplayLoadMission";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMissionAuthor: RscText
				{
					idc = 66010;
					text = "by Community";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
	};
};

class RscDisplayLoadMission: RscStandardDisplay
{
	movingEnable = 0;
	enableSimulation = 0;
	enableDisplay = 1;
	access = 3;
	onLoad = "with uiNameSpace do { [_this select 0, 'RscDisplayLoadMission'] call ExileClient_gui_loadingScreen_load; };";
	onUnload = "with uiNameSpace do { (_this select 0) call ExileClient_gui_loadingScreen_unload; };";
	delete scriptName;
	delete scriptPath;
	class controlsBackground
	{
		class Black: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_Vignette: RscVignette
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Line: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Map: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Noise: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ExileBlackBackground: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,1};
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
		class ExileBackgroundPicture: RscPicture
		{
			idc = 66000;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneW * 4/3";
			text = "exile_assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class controls
	{
		class Disclaimer: RscControlsGroupNoScrollbars
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class LoadingStart: RscControlsGroup
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapAuthor: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapBackBottom: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapBackTop: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapDescription: RscStructuredText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MapName: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Mission: RscControlsGroupNoScrollbars
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ProgressMap: RscProgress
		{
			idc = -1;
			x = "safeZoneX";
			y = "safeZoneY";
			w = "safeZoneW";
			h = "5 * pixelH";
			colorBar[] = {"199/255","38/255","81/255",1};
		};
		class ProgressMission: ProgressMap
		{
			x = "safeZoneX";
			y = "safeZoneY";
			w = "safeZoneW";
			h = "5 * pixelH";
			colorBar[] = {"199/255","38/255","81/255",1};
		};
		class Logo3DEN: ctrlStaticPicture
		{
			x = "safeZoneX + safeZoneW - 60 * pixelW - 0.3";
			y = "safeZoneY + safeZoneH - 60 * pixelW - 0.2";
		};
		class ExileSpinnerPicture: RscPicture
		{
			idc = 66001;
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 64) * pixelH";
			w = "64 * pixelW";
			h = "64 * pixelH";
			text = "exile_assets\texture\loading\spinner_ca.paa";
			type = 0;
			centerU = 0.5;
			centerV = 0.5;
			angle = 90;
			show = 0;
		};
		class ExileSpinnerTitle: RscStructuredText
		{
			idc = 66002;
			text = "<t>Still loading...</t>";
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w = "safeZoneW - (60 + 64 + 15) * pixelW";
			h = "64 * pixelH";
			size = "44 * pixelH";
			sizeEx = "44 * pixelH";
			colorText[] = {1,1,1,1};
			shadow = 0;
			class Attributes
			{
				font = "RobotoMedium";
				color = "#ffffff";
				colorLink = "#ffffff";
				align = "left";
				shadow = 0;
			};
		};
		class ExileLogo: RscControlsGroupNoScrollbars
		{
			idc = -1;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + 60 * pixelH";
			w = "380 * pixelW";
			h = "60 * pixelH";
			class controls
			{
				class ExileModBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModIcon: RscPictureKeepAspect
				{
					idc = -1;
					text = "exile_assets\texture\mod\icon.paa";
					x = 0;
					y = 0;
					w = "60 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModName: RscText
				{
					idc = -1;
					text = "Exile Mod";
					font = "RobotoMedium";
					x = "(60 + 10) * pixelW";
					y = "1 * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "(30 + 15) * pixelH";
					sizeEx = "30 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
				};
				class ExileModUrl: RscText
				{
					idc = -1;
					text = "www.exilemod.com";
					font = "RobotoCondensedLight";
					x = "(60 + 10) * pixelW";
					y = "(1 + 30) * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMap: RscControlsGroupNoScrollbars
		{
			idc = 66003;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMapBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMapPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapPicture: RscPicture
				{
					idc = 66004;
					text = "a3\ui_f\data\Logos\arma3_white_ca.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapName: RscText
				{
					idc = 66005;
					text = "RscDisplayLoadMission";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMapAuthor: RscText
				{
					idc = 66006;
					text = "by some special person";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMission: RscControlsGroupNoScrollbars
		{
			idc = 66007;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMissionBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMissionPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionPicture: RscPictureKeepAspect
				{
					idc = 66008;
					text = "exile_assets\texture\mod\logo.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionName: RscText
				{
					idc = 66009;
					text = "RscDisplayLoadMission";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMissionAuthor: RscText
				{
					idc = 66010;
					text = "by Community";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
	};
};

class RscDisplayMultiplayerSetup: RscStandardDisplay
{
	access = 3;
	onLoad = "with uiNameSpace do { [_this select 0, 'RscDisplayLoadMission'] call ExileClient_gui_loadingScreen_load; };";
	onUnload = "with uiNameSpace do { (_this select 0) call ExileClient_gui_loadingScreen_unload; };";
	delete scriptName;
	delete scriptPath;
	class controlsbackground
	{
		class TileGroup: RscControlsGroupNoScrollbars
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Vignette: RscVignette
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class RscTitleBackground: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MainBackground: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MissionSettingsBackground: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class NumOfPlayersBackground: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class SideBackground: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class PlayersPoolHeaderBackground: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class RolesBackground: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ChatBackground: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class PlayersPoolBackground: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ExileBlackBackground: RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,1};
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
		class ExileBackgroundPicture: RscPicture
		{
			idc = 66000;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneW * 4/3";
			text = "exile_assets\texture\loading\loading_cheathas_co.paa";
		};
	};
	class controls
	{
		class SortPing: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class SortPlayers: RscPicture
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Y_GamerCard: RscActiveText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class PartyGUI: RscActiveText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class MuteAll: RscCheckBox
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class AssignRole: RscActiveText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ButtonPlayers: RscButtonTextOnly
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ButtonPing: ButtonPlayers
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class Title: RscTitle
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class PlayersName: RscTitle
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_TextVotingTimeLeft: RscTitle
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ValueMission: RscTitle
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_TextDescription: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_ValueDescription: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class TextIsland: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ValueIsland: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class TextSide: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_West: RscActiveText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_Logic: CA_B_West
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_East: CA_B_West
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_Guerrila: CA_B_West
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_Civilian: CA_B_West
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_Virtual: CA_B_West
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_ValueRoles: RscListBox
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_ValuePool: RscListNBox
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_EnableAll: RscButtonMenu
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_Lock: RscButtonMenu
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_Params: RscButtonMenu
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ButtonSteamWorkshop: RscButtonMenuSteam
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_B_Kick: RscButtonMenu
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_ButtonContinue: RscButtonMenuOK
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class CA_ButtonCancel: RscButtonMenuCancel
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class TextMission: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class TextRole: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class TextPlayersPool: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class TextListedPlayers: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ValueListedPlayers: RscText
		{
			x = -1;
			y = -1;
			h = 0;
			w = 0;
			show = 0;
		};
		class ProgressMap: RscProgress
		{
			idc = -1;
			x = "safeZoneX";
			y = "safeZoneY";
			w = "safeZoneW";
			h = "5 * pixelH";
			colorBar[] = {"199/255","38/255","81/255",1};
		};
		class ProgressMission: ProgressMap
		{
			x = "safeZoneX";
			y = "safeZoneY";
			w = "safeZoneW";
			h = "5 * pixelH";
			colorBar[] = {"199/255","38/255","81/255",1};
		};
		class ExileSpinnerPicture: RscPicture
		{
			idc = 66001;
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 64) * pixelH";
			w = "64 * pixelW";
			h = "64 * pixelH";
			text = "exile_assets\texture\loading\spinner_ca.paa";
			type = 0;
			centerU = 0.5;
			centerV = 0.5;
			angle = 90;
			show = 0;
		};
		class ExileSpinnerTitle: RscStructuredText
		{
			idc = 66002;
			text = "<t>Still loading...</t>";
			x = "safeZoneX + 60 * pixelW";
			y = "safeZoneY + safeZoneH - (60 + 64 - 10) * pixelH";
			w = "safeZoneW - (60 + 64 + 15) * pixelW";
			h = "64 * pixelH";
			size = "44 * pixelH";
			sizeEx = "44 * pixelH";
			colorText[] = {1,1,1,1};
			shadow = 0;
			class Attributes
			{
				font = "RobotoMedium";
				color = "#ffffff";
				colorLink = "#ffffff";
				align = "left";
				shadow = 0;
			};
		};
		class ExileLogo: RscControlsGroupNoScrollbars
		{
			idc = -1;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + 60 * pixelH";
			w = "380 * pixelW";
			h = "60 * pixelH";
			class controls
			{
				class ExileModBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModIcon: RscPictureKeepAspect
				{
					idc = -1;
					text = "exile_assets\texture\mod\icon.paa";
					x = 0;
					y = 0;
					w = "60 * pixelW";
					h = "60 * pixelH";
				};
				class ExileModName: RscText
				{
					idc = -1;
					text = "Exile Mod";
					font = "RobotoMedium";
					x = "(60 + 10) * pixelW";
					y = "1 * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "(30 + 15) * pixelH";
					sizeEx = "30 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
				};
				class ExileModUrl: RscText
				{
					idc = -1;
					text = "www.exilemod.com";
					font = "RobotoCondensedLight";
					x = "(60 + 10) * pixelW";
					y = "(1 + 30) * pixelH";
					w = "(380 - 60 - 10) * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMap: RscControlsGroupNoScrollbars
		{
			idc = 66003;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMapBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMapPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapPicture: RscPicture
				{
					idc = 66004;
					text = "a3\ui_f\data\Logos\arma3_white_ca.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMapName: RscText
				{
					idc = 66005;
					text = "RscDisplayLoadMission";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMapAuthor: RscText
				{
					idc = 66006;
					text = "by some special person";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
		class ExileMission: RscControlsGroupNoScrollbars
		{
			idc = 66007;
			x = "safeZoneX + safeZoneW - (60 + 380) * pixelW";
			y = "safeZoneY + (60 + 60 + 30 + 190 + 30 + 20 + 30) * pixelH";
			w = "380 * pixelW";
			h = "(190 + 30 + 20) * pixelH";
			show = 0;
			class controls
			{
				class ExileMissionBackground: RscText
				{
					idc = -1;
					colorBackground[] = {0,0,0,1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "(190 + 30 + 20) * pixelH";
				};
				class ExileMissionPictureBackground: RscText
				{
					idc = -1;
					colorBackground[] = {"18/255","19/255","21/255",1};
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionPicture: RscPictureKeepAspect
				{
					idc = 66008;
					text = "exile_assets\texture\mod\logo.paa";
					x = 0;
					y = 0;
					w = "380 * pixelW";
					h = "190 * pixelH";
				};
				class ExileMissionName: RscText
				{
					idc = 66009;
					text = "RscDisplayLoadMission";
					font = "RobotoMedium";
					x = 0;
					y = "(190 + 1) * pixelH";
					w = "380 * pixelW";
					h = "30 * pixelH";
					sizeEx = "24 * pixelH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					style = 192;
				};
				class ExileMissionAuthor: RscText
				{
					idc = 66010;
					text = "by Community";
					font = "RobotoCondensedLight";
					x = 0;
					y = "(190 + 25 - 1) * pixelH";
					w = "380 * pixelW";
					h = "20 * pixelH";
					sizeEx = "20 * pixelH";
					colorText[] = {"151/255","155/255","161/255",1};
					shadow = 0;
				};
			};
		};
	};
};


class CfgVehicles
{
	class CAManBase;
	class RyanZombieB_Soldier_base_F: CAManBase 
	{
		author = "Ryan";
		moves = "CfgRyanZombiesMovesMaleSdr";
		side = 2;
		threat[] = {1, 0.5, 0.1};
		icon = "\Ryanzombies\zombie1.paa";
		faction = "Ryanzombiesfaction";
		vehicleClass = "Ryanzombiesfast";
		editorSubcategory = "Ryanzombiesfast";
		cost = 80000;
		minHeadTurnAI = -25;
		maxHeadTurnAI = 25;
		fsmFormation = "";
		fsmDanger = "";
		accuracy = 2;
		camouflage = 2;
		oxygenCapacity = 1e+006;
		class EventHandlers {
			class CBA_Extended_EventHandlers {
				dummy = 1;
			};
			class Ryanzombies {
				init = "(_this select 0) setVariable ['cba_xeh_isprocessed', true]; if !(isnil 'ryanzombiesstartinganim') then {(_this select 0) switchmove 'AmovPercMstpSnonWnonDnon_SaluteOut';}; _this execVM '\eXpoch_multifix\zombie.sqf'";
			};
		};
		identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
		class HitPoints {
			class HitFace {
				armor = 2;
				passThrough = 0.5;
				material = -1;
				name = "face_hub";
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck {
				armor = 5;
				passThrough = 0.5;
				material = -1;
				name = "neck";
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			// HitPoints
			class HitHead {
				armor = 2;
				passThrough = 0.5;
				material = -1;
				name = "head";
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			// HitPoints
			class HitPelvis {
				armor = 20;
				passThrough = 0.25;
				material = -1;
				name = "pelvis";
				radius = 0.2;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitAbdomen {
				armor = 20;
				passThrough = 0.5;
				material = -1;
				name = "spine1";
				radius = 0.15;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			// HitPoints
			class HitDiaphragm {
				armor = 15;
				passThrough = 0.5;
				material = -1;
				name = "spine2";
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			// HitPoints
			class HitChest {
				armor = 15;
				passThrough = 0.5;
				material = -1;
				name = "spine3";
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			// HitPoints
			class HitBody {
				armor = 1000;
				passThrough = 0.5;
				material = -1;
				name = "body";
				radius = 0.16;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			// HitPoints
			class HitArms {
				armor = 20;
				passThrough = 1;
				material = -1;
				name = "arms";
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands {
				armor = 25;
				passThrough = 1;
				material = -1;
				name = "hands";
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			// HitPoints
			class HitLegs {
				armor = 20;
				passThrough = 1;
				material = -1;
				name = "legs";
				radius = 0.12;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitLeftArm {
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm {
				name = "hand_r";
				// HitLeftArm
				armor = 1;
				material = -1;
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitLeftLeg {
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg {
				name = "leg_r";
				// HitLeftLeg
				armor = 1;
				material = -1;
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
		};
		armor = 8;
		armorStructural = 20;
		explosionShielding = 0.1;
		class Wounds {
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat", "A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat", "A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat", "A3\Characters_F\Common\Data\basicbody.rvmat", "A3\Characters_F\Common\Data\basicbody_injury.rvmat", "A3\Characters_F\Common\Data\basicbody_injury.rvmat", "A3\characters_f\common\data\coveralls.rvmat", "A3\Characters_F\Common\Data\coveralls_injury.rvmat", "A3\Characters_F\Common\Data\coveralls_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		weapons[] = {"Throw", "Put"};
		respawnWeapons[] = {"Throw", "Put"};
		linkedItems[] = {"V_PlateCarrier1_rgr", "H_HelmetB"};
		respawnlinkedItems[] = {};
		ACE_GForceCoef = 1;
		class ACE_SelfActions {
			class ACE_Equipment {
				class ace_huntir_open {
					displayName = "Activate HuntIR monitor";
					condition = "[ACE_player,'ACE_HuntIR_monitor'] call ace_common_fnc_hasItem";
					statement = "call ace_huntir_fnc_huntir";
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\huntir\UI\w_huntir_monitor_ca.paa";
					exceptions[] = {};
				};
				displayName = "Equipment";
				condition = 1;
				exceptions[] = {"isNotInside", "notOnMap", "isNotSitting"};
				statement = "";
				showDisabled = 1;
				priority = 4.5;
				icon = "";
				class ace_microdagr_configure {
					displayName = "Configure MicroDAGR";
					condition = "([2] call ace_microdagr_fnc_canShow) && {ace_microdagr_currentShowMode!= 2}";
					statement = "[2] call ace_microdagr_fnc_openDisplay";
					icon = "\z\ace\addons\microdagr\UI\icon_microDAGR.paa";
					exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
					class ace_microdagr_show {
						displayName = "Show MicoDAGR";
						condition = "([1] call ace_microdagr_fnc_canShow) && {ace_microdagr_currentShowMode!= 1}";
						statement = "[1] call ace_microdagr_fnc_openDisplay";
						icon = "\z\ace\addons\microdagr\UI\icon_microDAGR.paa";
						exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
					};
					class ace_microdagr_close {
						displayName = "Close MicroDAGR";
						condition = "ace_microdagr_currentShowMode!= 0";
						statement = "[0] call ace_microdagr_fnc_openDisplay";
						icon = "\z\ace\addons\microdagr\UI\icon_microDAGR.paa";
						exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
					};
				};
				class ace_mk6mortar_rangetable {
					displayName = "Open 82mm Rangetable";
					condition = "_this call ace_mk6mortar_fnc_rangeTableCanUse";
					statement = "_this call ace_mk6mortar_fnc_rangeTableOpen";
					priority = 0;
					icon = "\z\ace\addons\mk6mortar\UI\icon_rangeTable.paa";
					exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
				};
				class ace_overheating_UnJam {
					displayName = "Clear jam";
					condition = "ace_overheating_enabled&& {[_player] call ace_overheating_fnc_canUnjam}";
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_player,currentMuzzle _player] call ace_overheating_fnc_clearJam;";
					showDisabled = 0;
					priority = 4;
					icon = "\z\ace\addons\overheating\UI\unjam_ca.paa";
				};
				class ace_overheating_SwapBarrel {
					displayName = "Swap barrel";
					condition = "[_player,currentWeapon _player] call ace_overheating_fnc_canSwapBarrel";
					statement = "[_player,_player,currentWeapon _player] call ace_overheating_fnc_swapBarrel;";
					showDisabled = 0;
					priority = 3;
					icon = "\z\ace\addons\overheating\UI\spare_barrel_ca.paa";
				};
				class ace_overheating_CheckTemperature {
					displayName = "Check weapon temperature";
					condition = "ace_overheating_enabled&& {switch (currentWeapon _player) do {case (''): {false}; case (primaryWeapon _player); case (handgunWeapon _player): {true}; default {false}}}";
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_player,_player,currentWeapon _player] call ace_overheating_fnc_checkTemperature;";
					showDisabled = 0;
					priority = 2.9;
					icon = "\z\ace\addons\overheating\UI\temp_ca.paa";
				};
				class ace_overheating_CheckTemperatureSpareBarrels {
					displayName = "Check spare barrels temperatures";
					condition = "(_player) call ace_overheating_fnc_canCheckSpareBarrelsTemperatures";
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_player] call ace_overheating_fnc_checkSpareBarrelsTemperatures;";
					showDisabled = 0;
					priority = 2.8;
					icon = "\z\ace\addons\overheating\UI\temp_ca.paa";
				};
				class ace_scopes_adjustZero {
					displayName = "Set zero adjustment";
					condition = "[ACE_player] call ace_scopes_fnc_canAdjustZero";
					statement = "[ACE_player] call ace_scopes_fnc_adjustZero";
					showDisabled = 0;
					priority = 0.2;
					exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
				};
				class ace_spottingscope_place {
					displayName = "Place Spotting Scope";
					condition = "[_player,'ACE_SpottingScope'] call ace_common_fnc_hasItem";
					statement = "[_player,'ACE_SpottingScope'] call ace_spottingscope_fnc_place";
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\spottingscope\UI\w_spottingscope_ca.paa";
				};
				class ACE_TacticalLadders {
					displayName = "Deploy ladder";
					condition = "backpack _player == 'ACE_TacticalLadder_Pack'";
					statement = "[_player] call ace_tacticalladder_fnc_deployTL";
					exceptions[] = {};
					showDisabled = 1;
					priority = 4;
				};
				class ace_trenches_digEnvelopeSmall {
					displayName = "Dig Small Trench";
					condition = "_player call ace_trenches_fnc_canDigTrench";
					statement = "[{_this call ace_trenches_fnc_placeTrench},[_this select 0,'ACE_envelope_small']] call CBA_fnc_execNextFrame";
					exceptions[] = {};
					showDisabled = 0;
					priority = 4;
				};
				class ace_trenches_digEnvelopeBig {
					displayName = "Dig Big Trench";
					condition = "_player call ace_trenches_fnc_canDigTrench";
					statement = "[{_this call ace_trenches_fnc_placeTrench},[_this select 0,'ACE_envelope_big']] call CBA_fnc_execNextFrame";
					exceptions[] = {};
					showDisabled = 0;
					priority = 4;
				};
				class ace_tripod_place {
					displayName = "Place SSWT Kit";
					condition = "[_player,'ACE_Tripod'] call ace_common_fnc_hasItem";
					statement = "[_player,'ACE_Tripod'] call ace_tripod_fnc_place";
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\tripod\UI\w_sniper_tripod_ca.paa";
				};
				class ace_atragmx_open {
					displayName = "Open ATragMX";
					condition = "call ace_atragmx_fnc_can_show";
					statement = "call ace_atragmx_fnc_create_dialog";
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\atragmx\UI\ATRAG_Icon.paa";
					exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
				};
				class ace_attach_Attach {
					displayName = "Attach item";
					condition = "_this call ace_attach_fnc_canAttach";
					insertChildren = "_this call ace_attach_fnc_getChildrenAttachActions";
					exceptions[] = {"isNotDragging"};
					showDisabled = 0;
					priority = 5;
					icon = "\z\ace\addons\attach\UI\attach_ca.paa";
				};
				class ace_attach_Detach {
					displayName = "Detach item";
					condition = "_this call ace_attach_fnc_canDetach";
					statement = "_this call ace_attach_fnc_detach";
					exceptions[] = {"isNotDragging"};
					showDisabled = 0;
					priority = 5;
					icon = "\z\ace\addons\attach\UI\detach_ca.paa";
				};
				class ACE_Chemlights {
					displayName = "Chemlights";
					icon = "\a3\ui_f\data\gui\cfg\Hints\chemlights_ca.paa";
					condition = "count ([ACE_player] call ace_chemlights_fnc_getShieldComponents) > 0";
					statement = 1;
					exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
					insertChildren = "_this call ace_chemlights_fnc_compileChemlightMenu";
					showDisabled = 0;
					priority = 99;
				};
				class ace_dagr_menu {
					displayName = "Configure DAGR";
					condition = "[_player,'ACE_DAGR'] call ace_common_fnc_hasItem";
					statement = "call ace_dagr_fnc_menuInit";
					showDisabled = 0;
					priority = 0.1;
					icon = "\z\ace\addons\dagr\UI\DAGR_Icon.paa";
					exceptions[] = {"isNotInside", "isNotSitting"};
					class ace_dagr_toggle {
						displayName = "Toggle DAGR";
						condition = "[_player,'ACE_DAGR'] call ace_common_fnc_hasItem";
						statement = "call ace_dagr_fnc_toggleOverlay";
						showDisabled = 0;
						priority = 0.2;
						icon = "\z\ace\addons\dagr\UI\DAGR_Icon.paa";
						exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
					};
				};
				class ACE_CheckDogtags {
					displayName = "Check Dog Tag";
					condition = 1;
					statement = "";
					exceptions[] = {"isNotInside", "isNotSitting"};
					insertChildren = "_this call ace_dogtags_fnc_addDogtagActions";
				};
				class ace_gunbag_actions {
					displayName = "Gunbag";
					condition = "[_player] call ace_gunbag_fnc_hasGunbag";
					showDisabled = 0;
					priority = 0.1;
					icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					class ace_gunbag_weaponTo {
						displayName = "Put weapon into gunbag";
						condition = "[_player,_player] call ace_gunbag_fnc_canInteract== 0";
						statement = "[_player,_player] call ace_gunbag_fnc_toGunbag";
						showDisabled = 0;
						priority = 1;
						icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					};
					class ace_gunbag_weaponOff {
						displayName = "Get weapon out of gunbag";
						condition = "[_player,_player] call ace_gunbag_fnc_canInteract== 1";
						statement = "[_player,_player] call ace_gunbag_fnc_offGunbag";
						showDisabled = 0;
						priority = 1;
						icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					};
					class ace_gunbag_status {
						displayName = "Status";
						condition = "[_player] call ace_gunbag_fnc_hasGunbag";
						statement = "[_player] call ace_gunbag_fnc_status";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					};
				};
				class ACE_PutInEarplugs {
					displayName = "Earplugs in";
					condition = "!([_player] call ace_hearing_fnc_hasEarPlugsIn) && {'ACE_EarPlugs' in items _player}";
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_player] call ace_hearing_fnc_putInEarPlugs";
					showDisabled = 0;
					priority = 2.5;
					icon = "\z\ace\addons\hearing\UI\ACE_earplugs_x_ca.paa";
				};
				class ACE_RemoveEarplugs {
					displayName = "Earplugs out";
					condition = "[_player] call ace_hearing_fnc_hasEarPlugsIn";
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_player] call ace_hearing_fnc_removeEarPlugs";
					showDisabled = 0;
					priority = 2.5;
					icon = "\z\ace\addons\hearing\UI\ACE_earplugs_x_ca.paa";
				};
				class ace_kestrel4500_open {
					displayName = "Open Kestrel 4500";
					condition = "call ace_kestrel4500_fnc_canShow&& !ace_kestrel4500_Kestrel4500";
					statement = "call ace_kestrel4500_fnc_createKestrelDialog";
					showDisabled = 0;
					priority = 0.1;
					icon = "\z\ace\addons\kestrel4500\UI\Kestrel4500_Icon.paa";
					exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
					class ace_kestrel4500_show {
						displayName = "Show Kestrel 4500";
						condition = "call ace_kestrel4500_fnc_canShow&& !ace_kestrel4500_Overlay";
						statement = "call ace_kestrel4500_fnc_displayKestrel";
						showDisabled = 0;
						priority = 0.2;
						icon = "\z\ace\addons\kestrel4500\UI\Kestrel4500_Icon.paa";
						exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
					};
					class ace_kestrel4500_hide {
						displayName = "Hide Kestrel 4500";
						condition = "ace_kestrel4500_Overlay";
						statement = "call ace_kestrel4500_fnc_displayKestrel";
						showDisabled = 0;
						priority = 0.3;
						icon = "\z\ace\addons\kestrel4500\UI\Kestrel4500_Icon.paa";
						exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
					};
				};
				class ace_minedetector_metalDetector {
					displayName = "Metal detector";
					condition = "[ACE_player] call ace_minedetector_fnc_hasDetector";
					statement = "";
					icon = "\z\ace\addons\minedetector\ui\icon_mineDetector.paa";
					exceptions[] = {};
					class ace_minedetector_activate {
						displayName = "Activate";
						condition = "call ace_minedetector_fnc_canActivateDetector";
						statement = "call ace_minedetector_fnc_activateDetector";
						icon = "\z\ace\addons\minedetector\ui\icon_mineDetectorOn.paa";
						exceptions[] = {};
					};
					class ace_minedetector_deactivate {
						displayName = "Deactivate";
						condition = "call ace_minedetector_fnc_canDeactivateDetector";
						statement = "call ace_minedetector_fnc_deactivateDetector";
						icon = "\z\ace\addons\minedetector\ui\icon_mineDetectorOff.paa";
						exceptions[] = {};
					};
					class ace_minedetector_connectHeadphones {
						displayName = "Connect Headphones";
						condition = "call ace_minedetector_fnc_canConnectHeadphones";
						statement = "[ACE_player,true] call ace_minedetector_fnc_connectHeadphones";
						icon = "";
						exceptions[] = {};
					};
					class ace_minedetector_disconnectHeadphones {
						displayName = "Disconnect Headphones";
						condition = "call ace_minedetector_fnc_canDisconnectHeadphones";
						statement = "[ACE_player,false] call ace_minedetector_fnc_connectHeadphones";
						icon = "";
						exceptions[] = {};
					};
				};
				class ace_rangecard_open {
					displayName = "Open Range Card";
					condition = "call ace_rangecard_fnc_canShow&& !ace_rangecard_RangeCardOpened";
					statement = "false call ace_rangecard_fnc_openRangeCard";
					showDisabled = 0;
					priority = 0.1;
					icon = "\z\ace\addons\rangecard\UI\RangeCard_Icon.paa";
					exceptions[] = {"notOnMap"};
					class ace_rangecard_openCopy {
						displayName = "Open Range Card Copy";
						condition = "call ace_rangecard_fnc_canShowCopy&& !ace_rangecard_RangeCardOpened";
						statement = "true call ace_rangecard_fnc_openRangeCard";
						showDisabled = 0;
						priority = 0.1;
						icon = "\z\ace\addons\rangecard\UI\RangeCard_Icon.paa";
						exceptions[] = {"notOnMap"};
					};
					class ace_rangecard_makeCopy {
						displayName = "Copy Range Card";
						condition = "call ace_rangecard_fnc_canShow&& !ace_rangecard_RangeCardOpened";
						statement = "ace_rangecard_ammoClassCopy= ace_rangecard_ammoClass; ace_rangecard_magazineClassCopy= ace_rangecard_magazineClass; ace_rangecard_weaponClassCopy= ace_rangecard_ammoClass;";
						showDisabled = 0;
						priority = 0.1;
						icon = "\z\ace\addons\rangecard\UI\RangeCard_Icon.paa";
						exceptions[] = {"notOnMap"};
					};
				};
			};
			class ACE_TeamManagement {
				displayName = "Team Management";
				condition = "ace_interaction_EnableTeamManagement";
				exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
				statement = "";
				showDisabled = 1;
				priority = 3.2;
				icon = "\z\ace\addons\interaction\UI\team\team_management_ca.paa";
				class ACE_JoinTeamRed {
					displayName = "Join Red";
					condition = 1;
					exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
					statement = "[_player,'RED'] call ace_interaction_fnc_joinTeam";
					showDisabled = 1;
					priority = 2.4;
					icon = "\z\ace\addons\interaction\UI\team\team_red_ca.paa";
				};
				class ACE_JoinTeamGreen {
					displayName = "Join Green";
					condition = 1;
					exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
					statement = "[_player,'GREEN'] call ace_interaction_fnc_joinTeam";
					showDisabled = 1;
					priority = 2.3;
					icon = "\z\ace\addons\interaction\UI\team\team_green_ca.paa";
				};
				class ACE_JoinTeamBlue {
					displayName = "Join Blue";
					condition = 1;
					exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
					statement = "[_player,'BLUE'] call ace_interaction_fnc_joinTeam";
					showDisabled = 1;
					priority = 2.2;
					icon = "\z\ace\addons\interaction\UI\team\team_blue_ca.paa";
				};
				class ACE_JoinTeamYellow {
					displayName = "Join Yellow";
					condition = 1;
					exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
					statement = "[_player,'YELLOW'] call ace_interaction_fnc_joinTeam";
					showDisabled = 1;
					priority = 2.1;
					icon = "\z\ace\addons\interaction\UI\team\team_yellow_ca.paa";
				};
				class ACE_LeaveTeam {
					displayName = "Leave Team";
					condition = "assignedTeam _player != 'MAIN'";
					exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
					statement = "[_player,'MAIN'] call ace_interaction_fnc_joinTeam";
					showDisabled = 1;
					priority = 2.5;
					icon = "\z\ace\addons\interaction\UI\team\team_white_ca.paa";
				};
				class ACE_BecomeLeader {
					displayName = "Become Leader";
					condition = "_this call ace_interaction_fnc_canBecomeLeader";
					exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
					statement = "_this call ace_interaction_fnc_doBecomeLeader";
					showDisabled = 1;
					priority = 1;
					icon = "\z\ace\addons\interaction\UI\team\team_white_ca.paa";
				};
				class ACE_LeaveGroup {
					displayName = "Leave Group";
					condition = "count (units group _player) > 1";
					exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
					statement = "_oldGroup = units group _player; _newGroup = createGroup side _player; [_player] joinSilent _newGroup; {_player reveal _x} forEach _oldGroup;";
					showDisabled = 1;
					priority = 1.2;
					icon = "\z\ace\addons\interaction\UI\team\team_management_ca.paa";
				};
			};
			class ACE_RepackMagazines {
				displayName = "Repack Magazines";
				condition = 1;
				exceptions[] = {"isNotInside", "isNotSitting"};
				insertChildren = "_this call ace_magazinerepack_fnc_getMagazineChildren";
				priority = -2;
				icon = "\z\ace\addons\magazinerepack\UI\repack_ca.paa";
			};
			class ACE_MapFlashlight {
				displayName = "Flashlights";
				icon = "\a3\ui_f\data\IGUI\Cfg\VehicleToggles\lightsiconon_ca.paa";
				condition = "ace_map_mapIllumination&& visibleMap && {count ([ACE_player] call ace_map_fnc_getUnitFlashlights) > 0}";
				statement = 1;
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
				insertChildren = "_this call ace_map_fnc_compileFlashlightMenu";
				showDisabled = 0;
				priority = 99;
			};
			class ACE_MapGpsShow {
				displayName = "Show GPS on Map";
				condition = "(!ace_maptools_mapGpsShow) && {call ace_maptools_fnc_canUseMapGPS}";
				statement = "ace_maptools_mapGpsShow= true; [ace_maptools_mapGpsShow] call ace_maptools_fnc_openMapGps";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
				showDisabled = 0;
				priority = 0;
			};
			class ACE_MapGpsHide {
				displayName = "Hide GPS on Map";
				condition = "(ace_maptools_mapGpsShow) && {call ace_maptools_fnc_canUseMapGPS}";
				statement = "ace_maptools_mapGpsShow= false; [ace_maptools_mapGpsShow] call ace_maptools_fnc_openMapGps";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
				showDisabled = 0;
				priority = 0;
			};
			class ACE_MapTools {
				displayName = "Map Tools";
				condition = "call ace_maptools_fnc_canUseMapTools";
				statement = "";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
				showDisabled = 0;
				priority = 100;
				class ACE_MapToolsHide {
					displayName = "Hide Map Tool";
					condition = "ace_maptools_mapTool_Shown!= 0";
					statement = "ace_maptools_mapTool_Shown= 0;";
					exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
					showDisabled = 1;
					priority = 5;
				};
				class ACE_MapToolsShowNormal {
					displayName = "Show Normal Map Tool";
					condition = "ace_maptools_mapTool_Shown!= 1";
					statement = "ace_maptools_mapTool_Shown= 1;";
					exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
					showDisabled = 1;
					priority = 4;
				};
				class ACE_MapToolsShowSmall {
					displayName = "Show Small Map Tool";
					condition = "ace_maptools_mapTool_Shown!= 2";
					statement = "ace_maptools_mapTool_Shown= 2;";
					exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
					showDisabled = 1;
					priority = 3;
				};
				class ACE_MapToolsAlignNorth {
					displayName = "Align Map Tool to North";
					condition = "ace_maptools_mapTool_Shown!= 0";
					statement = "ace_maptools_mapTool_angle= 0;";
					exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
					showDisabled = 1;
					priority = 2;
				};
				class ACE_MapToolsAlignCompass {
					displayName = "Align Map Tool to Compass";
					condition = "(ace_maptools_mapTool_Shown!= 0) && {'ItemCompass' in assigneditems ACE_player}";
					statement = "ace_maptools_mapTool_angle= getDir ACE_player;";
					exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
					showDisabled = 1;
					priority = 1;
				};
			};
			class Medical {
				displayName = "Medical";
				runOnHover = 1;
				exceptions[] = {"isNotInside", "isNotSitting"};
				statement = "[_target,true,0] call ace_medical_fnc_displayPatientInformation";
				condition = 1;
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				class ACE_Head {
					displayName = "Head";
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_target,true,0] call ace_medical_fnc_displayPatientInformation";
					modifierFunction = "[_target,_player,0,_this select 3] call ace_medical_fnc_modifyMedicalAction";
					condition = 1;
					runOnHover = 1;
					class Bandage {
						displayName = "Bandage";
						distance = 2;
						condition = "[_player,_target,'head','Bandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'head','Bandage'] call ace_medical_fnc_treatment";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class FieldDressing {
						displayName = "Field Dressing";
						distance = 5;
						condition = "[_player,_target,'head','FieldDressing'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'head','FieldDressing'] call ace_medical_fnc_treatment";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class PackingBandage: FieldDressing {
						displayName = "Packing Bandage";
						condition = "[_player,_target,'head','PackingBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'head','PackingBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class ElasticBandage: FieldDressing {
						displayName = "Elastic Bandage";
						condition = "[_player,_target,'head','ElasticBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'head','ElasticBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class QuikClot: FieldDressing {
						displayName = "QuikClot";
						condition = "[_player,_target,'head','QuikClot'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'head','QuikClot'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class CheckPulse: FieldDressing {
						displayName = "Check Pulse";
						condition = "[_player,_target,'head','CheckPulse'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'head','CheckPulse'] call ace_medical_fnc_treatment";
						icon = "";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class CheckBloodPressure: CheckPulse {
						displayName = "Check Blood Pressure";
						condition = "[_player,_target,'head','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'head','CheckBloodPressure'] call ace_medical_fnc_treatment";
						// CheckPulse
						icon = "";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
				};
				class ACE_Torso {
					displayName = "Torso";
					distance = 5;
					condition = 1;
					runOnHover = 1;
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_target,true,1] call ace_medical_fnc_displayPatientInformation";
					modifierFunction = "[_target,_player,1,_this select 3] call ace_medical_fnc_modifyMedicalAction";
					showDisabled = 1;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					class Bandage {
						displayName = "Bandage";
						distance = 2;
						condition = "[_player,_target,'body','Bandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'body','Bandage'] call ace_medical_fnc_treatment";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class TriageCard {
						displayName = "Triage Card";
						distance = 2;
						condition = 1;
						exceptions[] = {"isNotInside"};
						statement = "[_target,true] call ace_medical_fnc_displayTriageCard";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\triageCard.paa";
					};
					class FieldDressing {
						displayName = "Field Dressing";
						distance = 5;
						condition = "[_player,_target,'body','FieldDressing'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'body','FieldDressing'] call ace_medical_fnc_treatment";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class PackingBandage: FieldDressing {
						displayName = "Packing Bandage";
						condition = "[_player,_target,'body','PackingBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'body','PackingBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class ElasticBandage: FieldDressing {
						displayName = "Elastic Bandage";
						condition = "[_player,_target,'body','ElasticBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'body','ElasticBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class QuikClot: FieldDressing {
						displayName = "QuikClot";
						condition = "[_player,_target,'body','QuikClot'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'body','QuikClot'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
				};
				class ACE_ArmLeft {
					displayName = "Left Arm";
					runOnHover = 1;
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_target,true,2] call ace_medical_fnc_displayPatientInformation";
					modifierFunction = "[_target,_player,2,_this select 3] call ace_medical_fnc_modifyMedicalAction";
					condition = 1;
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					class Bandage {
						displayName = "Bandage";
						distance = 2;
						condition = "[_player,_target,'hand_l','Bandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','Bandage'] call ace_medical_fnc_treatment";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class FieldDressing {
						displayName = "Field Dressing";
						distance = 5;
						condition = "[_player,_target,'hand_l','FieldDressing'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','FieldDressing'] call ace_medical_fnc_treatment";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class PackingBandage: FieldDressing {
						displayName = "Packing Bandage";
						condition = "[_player,_target,'hand_l','PackingBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','PackingBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class ElasticBandage: FieldDressing {
						displayName = "Elastic Bandage";
						condition = "[_player,_target,'hand_l','ElasticBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','ElasticBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class QuikClot: FieldDressing {
						displayName = "QuikClot";
						condition = "[_player,_target,'hand_l','QuikClot'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','QuikClot'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Tourniquet: FieldDressing {
						displayName = "Tourniquet";
						condition = "[_player,_target,'hand_l','Tourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','Tourniquet'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Morphine: FieldDressing {
						displayName = "Inject Morphine";
						condition = "[_player,_target,'hand_l','Morphine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','Morphine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Adenosine: Morphine {
						displayName = "Inject Atropine";
						condition = "[_player,_target,'hand_l','Adenosine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','Adenosine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Atropine: Morphine {
						displayName = "Inject Atropine";
						condition = "[_player,_target,'hand_l','Atropine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','Atropine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Epinephrine: Morphine {
						displayName = "Inject Epinephrine";
						condition = "[_player,_target,'hand_l','Epinephrine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','Epinephrine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class CheckPulse: FieldDressing {
						displayName = "Check Pulse";
						condition = "[_player,_target,'hand_l','CheckPulse'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','CheckPulse'] call ace_medical_fnc_treatment";
						icon = "";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class CheckBloodPressure: CheckPulse {
						displayName = "Check Blood Pressure";
						condition = "[_player,_target,'hand_l','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','CheckBloodPressure'] call ace_medical_fnc_treatment";
						// CheckPulse
						icon = "";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class RemoveTourniquet: Tourniquet {
						displayName = "Remove Tourniquet";
						condition = "[_player,_target,'hand_l','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','RemoveTourniquet'] call ace_medical_fnc_treatment";
						// Tourniquet
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
				};
				class ACE_ArmRight {
					displayName = "Right Arm";
					runOnHover = 1;
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_target,true,3] call ace_medical_fnc_displayPatientInformation";
					modifierFunction = "[_target,_player,3,_this select 3] call ace_medical_fnc_modifyMedicalAction";
					condition = 1;
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					class Bandage {
						displayName = "Bandage";
						distance = 2;
						condition = "[_player,_target,'hand_r','Bandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','Bandage'] call ace_medical_fnc_treatment";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class FieldDressing {
						displayName = "Field Dressing";
						distance = 5;
						condition = "[_player,_target,'hand_r','FieldDressing'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','FieldDressing'] call ace_medical_fnc_treatment";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class PackingBandage: FieldDressing {
						displayName = "Packing Bandage";
						condition = "[_player,_target,'hand_r','PackingBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','PackingBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class ElasticBandage: FieldDressing {
						displayName = "Elastic Bandage";
						condition = "[_player,_target,'hand_r','ElasticBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','ElasticBandage'] call ace_medical_fnc_treatment";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class QuikClot: FieldDressing {
						displayName = "QuikClot";
						condition = "[_player,_target,'hand_r','QuikClot'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','QuikClot'] call ace_medical_fnc_treatment";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class Tourniquet: FieldDressing {
						displayName = "Tourniquet";
						condition = "[_player,_target,'hand_r','Tourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','Tourniquet'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Morphine: FieldDressing {
						displayName = "Inject Morphine";
						condition = "[_player,_target,'hand_r','Morphine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','Morphine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Adenosine: Morphine {
						displayName = "Inject Atropine";
						condition = "[_player,_target,'hand_r','Adenosine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','Adenosine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Atropine: Morphine {
						displayName = "Inject Atropine";
						condition = "[_player,_target,'hand_r','Atropine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','Atropine'] call ace_medical_fnc_treatment";
						// Morphine
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Epinephrine: Morphine {
						displayName = "Inject Epinephrine";
						condition = "[_player,_target,'hand_r','Epinephrine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','Epinephrine'] call ace_medical_fnc_treatment";
						// Morphine
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class CheckPulse: FieldDressing {
						displayName = "Check Pulse";
						condition = "[_player,_target,'hand_r','CheckPulse'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','CheckPulse'] call ace_medical_fnc_treatment";
						icon = "";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class CheckBloodPressure: CheckPulse {
						displayName = "Check Blood Pressure";
						condition = "[_player,_target,'hand_r','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','CheckBloodPressure'] call ace_medical_fnc_treatment";
						// CheckPulse
						icon = "";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class RemoveTourniquet: Tourniquet {
						displayName = "Remove Tourniquet";
						condition = "[_player,_target,'hand_r','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','RemoveTourniquet'] call ace_medical_fnc_treatment";
						// Tourniquet
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
				};
				class ACE_LegLeft {
					displayName = "Left Leg";
					runOnHover = 1;
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_target,true,4] call ace_medical_fnc_displayPatientInformation";
					modifierFunction = "[_target,_player,4,_this select 3] call ace_medical_fnc_modifyMedicalAction";
					condition = 1;
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					class Bandage {
						displayName = "Bandage";
						distance = 2;
						condition = "[_player,_target,'leg_l','Bandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','Bandage'] call ace_medical_fnc_treatment";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class FieldDressing {
						displayName = "Field Dressing";
						distance = 5;
						condition = "[_player,_target,'leg_l','FieldDressing'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','FieldDressing'] call ace_medical_fnc_treatment";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class PackingBandage: FieldDressing {
						displayName = "Packing Bandage";
						condition = "[_player,_target,'leg_l','PackingBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','PackingBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class ElasticBandage: FieldDressing {
						displayName = "Elastic Bandage";
						condition = "[_player,_target,'leg_l','ElasticBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','ElasticBandage'] call ace_medical_fnc_treatment";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class QuikClot: FieldDressing {
						displayName = "QuikClot";
						condition = "[_player,_target,'leg_l','QuikClot'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','QuikClot'] call ace_medical_fnc_treatment";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class Tourniquet: FieldDressing {
						displayName = "Tourniquet";
						condition = "[_player,_target,'leg_l','Tourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','Tourniquet'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Morphine: FieldDressing {
						displayName = "Inject Morphine";
						condition = "[_player,_target,'leg_l','Morphine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','Morphine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Adenosine: Morphine {
						displayName = "Inject Atropine";
						condition = "[_player,_target,'leg_l','Adenosine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','Adenosine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Atropine: Morphine {
						displayName = "Inject Atropine";
						condition = "[_player,_target,'leg_l','Atropine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','Atropine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Epinephrine: Morphine {
						displayName = "Inject Epinephrine";
						condition = "[_player,_target,'leg_l','Epinephrine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','Epinephrine'] call ace_medical_fnc_treatment";
						// Morphine
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class RemoveTourniquet: Tourniquet {
						displayName = "Remove Tourniquet";
						condition = "[_player,_target,'leg_l','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','RemoveTourniquet'] call ace_medical_fnc_treatment";
						// Tourniquet
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
				};
				class ACE_LegRight {
					displayName = "Right Leg";
					runOnHover = 1;
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_target,true,5] call ace_medical_fnc_displayPatientInformation";
					modifierFunction = "[_target,_player,5,_this select 3] call ace_medical_fnc_modifyMedicalAction";
					condition = 1;
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					class Bandage {
						displayName = "Bandage";
						distance = 2;
						condition = "[_player,_target,'leg_r','Bandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','Bandage'] call ace_medical_fnc_treatment";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class FieldDressing {
						displayName = "Field Dressing";
						distance = 5;
						condition = "[_player,_target,'leg_r','FieldDressing'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','FieldDressing'] call ace_medical_fnc_treatment";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class PackingBandage: FieldDressing {
						displayName = "Packing Bandage";
						condition = "[_player,_target,'leg_r','PackingBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','PackingBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class ElasticBandage: FieldDressing {
						displayName = "Elastic Bandage";
						condition = "[_player,_target,'leg_r','ElasticBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','ElasticBandage'] call ace_medical_fnc_treatment";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class QuikClot: FieldDressing {
						displayName = "QuikClot";
						condition = "[_player,_target,'leg_r','QuikClot'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','QuikClot'] call ace_medical_fnc_treatment";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class Tourniquet: FieldDressing {
						displayName = "Tourniquet";
						condition = "[_player,_target,'leg_r','Tourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','Tourniquet'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Morphine: FieldDressing {
						displayName = "Inject Morphine";
						condition = "[_player,_target,'leg_r','Morphine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','Morphine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Adenosine: Morphine {
						displayName = "Inject Atropine";
						condition = "[_player,_target,'leg_r','Adenosine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','Adenosine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Atropine: Morphine {
						displayName = "Inject Atropine";
						condition = "[_player,_target,'leg_r','Atropine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','Atropine'] call ace_medical_fnc_treatment";
						// Morphine
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Epinephrine: Morphine {
						displayName = "Inject Epinephrine";
						condition = "[_player,_target,'leg_r','Epinephrine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','Epinephrine'] call ace_medical_fnc_treatment";
						// Morphine
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class RemoveTourniquet: Tourniquet {
						displayName = "Remove Tourniquet";
						condition = "[_player,_target,'leg_r','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','RemoveTourniquet'] call ace_medical_fnc_treatment";
						// Tourniquet
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
				};
			};
			class Medical_Menu {
				displayName = "Medical Menu";
				runOnHover = 0;
				exceptions[] = {"isNotInside"};
				condition = "[ACE_player,_target] call ace_medical_menu_fnc_canOpenMenu";
				statement = "[_target] call ace_medical_menu_fnc_openMenu";
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
			};
			class ACE_CutParachute {
				displayName = "Cut Parachute";
				exceptions[] = {"isNotInside"};
				condition = "[_player] call ace_parachute_fnc_checkCutParachute";
				statement = "[_player] call ace_parachute_fnc_cutParachute";
				showDisabled = 0;
				priority = 2.9;
				icon = "\z\ace\addons\parachute\UI\cut_ca.paa";
			};
			class ACE_MoveRallypoint {
				displayName = "Move Rallypoint";
				condition = "[_player,side group _player] call ace_respawn_fnc_canMoveRallypoint";
				statement = "[_player,side group _player] call ace_respawn_fnc_moveRallypoint";
				showDisabled = 0;
				priority = -0.5;
			};
			class ace_sandbag_place {
				displayName = "Deploy Sandbag";
				condition = "_this call ace_sandbag_fnc_canDeploy";
				statement = "[{_this call ace_sandbag_fnc_deploy},_this] call CBA_fnc_execNextFrame";
				exceptions[] = {"isNotSwimming"};
				showDisabled = 0;
				priority = 4;
				icon = "\z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
			};
			class ACE_Tags {
				displayName = "Tag";
				condition = "_player call ace_tagging_fnc_checkTaggable";
				statement = "_player call ace_tagging_fnc_quickTag";
				icon = "\z\ace\addons\tagging\UI\icons\iconTaggingBlack.paa";
				insertChildren = "_player call ace_tagging_fnc_addTagActions";
			};
			class ACE_StopEscortingSelf {
				displayName = "Release Prisoner";
				condition = "[_player,objNull] call ace_captives_fnc_canStopEscorting";
				statement = "[_player,objNull,false] call ace_captives_fnc_doEscortCaptive";
				exceptions[] = {"isNotEscorting"};
				showDisabled = 0;
				priority = 2.3;
			};
			class ACE_StartSurrenderingSelf {
				displayName = "Surrender";
				condition = "[_player,true] call ace_captives_fnc_canSurrender";
				statement = "[_player,true] call ace_captives_fnc_setSurrendered";
				exceptions[] = {};
				showDisabled = 0;
				priority = 0;
				icon = "\z\ace\addons\captives\UI\Surrender_ca.paa";
			};
			class ACE_StopSurrenderingSelf {
				displayName = "Stop Surrendering";
				condition = "[_player,false] call ace_captives_fnc_canSurrender";
				statement = "[_player,false] call ace_captives_fnc_setSurrendered";
				exceptions[] = {"isNotSurrendering"};
				showDisabled = 0;
				priority = 0;
				icon = "\z\ace\addons\captives\UI\Surrender_ca.paa";
			};
			class ACE_Explosives {
				displayName = "Explosives";
				condition = "!(_player getVariable [""""ace_explosives_PlantingExplosive"""",false])";
				statement = "";
				exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting"};
				showDisabled = 1;
				priority = 4;
				icon = "\z\ace\addons\explosives\UI\Explosives_Menu_ca.paa";
				insertChildren = "[_player] call ace_explosives_fnc_addTransmitterActions;";
				class ACE_Place {
					displayName = "Place";
					condition = "(vehicle _player == _player) and {[_player] call ace_explosives_fnc_hasExplosives}";
					statement = "";
					insertChildren = "[_player] call ace_explosives_fnc_addExplosiveActions;";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
					icon = "\z\ace\addons\explosives\UI\Place_Explosive_ca.paa";
					priority = 1;
				};
				class ACE_Cellphone {
					displayName = "Cellphone";
					condition = "('ACE_Cellphone' in (items ace_player))";
					statement = "closeDialog 0;createDialog 'Rsc_ACE_PhoneInterface';";
					exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting"};
					showDisabled = 0;
					icon = "\z\ace\addons\explosives\Data\UI\Cellphone_UI.paa";
					priority = 0.8;
				};
			};
			class ace_gestures {
				displayName = "Gestures";
				condition = "(canStand _target) && {ace_gestures_showOnInteractionMenu== 2}";
				statement = "";
				showDisabled = 1;
				priority = 3.5;
				icon = "\z\ace\addons\gestures\UI\gestures_ca.paa";
				class ace_gestures_Advance {
					displayName = "Advance";
					condition = 1;
					statement = "[_target,'gestureAdvance'] call ace_common_fnc_doGesture;";
					showDisabled = 1;
					priority = 1.9;
				};
				class ace_gestures_Go {
					displayName = "Go";
					condition = 1;
					statement = "[_target,selectRandom ['gestureGo','gestureGoB']] call ace_common_fnc_doGesture;";
					showDisabled = 1;
					priority = 1.8;
				};
				class ace_gestures_Follow {
					displayName = "Follow";
					condition = 1;
					statement = "[_target,'gestureFollow'] call ace_common_fnc_doGesture;";
					showDisabled = 1;
					priority = 1.7;
				};
				class ace_gestures_Up {
					displayName = "Up";
					condition = 1;
					statement = "[_target,'gestureUp'] call ace_common_fnc_doGesture;";
					showDisabled = 1;
					priority = 1.5;
				};
				class ace_gestures_CeaseFire {
					displayName = "Cease Fire";
					condition = 1;
					statement = "[_target,'gestureCeaseFire'] call ace_common_fnc_doGesture;";
					showDisabled = 1;
					priority = 1.3;
				};
				class ace_gestures_Stop {
					displayName = "Stop";
					condition = 1;
					statement = "[_target,'gestureFreeze'] call ace_common_fnc_doGesture;";
					showDisabled = 1;
					priority = 1.2;
				};
				class ace_gestures_Forward {
					displayName = "Move forward";
					condition = 1;
					statement = """""ace_gestures_forward"""" call ace_gestures_fnc_playSignal";
					showDisabled = 1;
					priority = 1.9;
				};
				class ace_gestures_Regroup {
					displayName = "Rally up";
					condition = 1;
					statement = """""ace_gestures_regroup"""" call ace_gestures_fnc_playSignal";
					showDisabled = 1;
					priority = 1.8;
				};
				class ace_gestures_Freeze {
					displayName = "Freeze";
					condition = 1;
					statement = """""ace_gestures_freeze"""" call ace_gestures_fnc_playSignal";
					showDisabled = 1;
					priority = 1.7;
				};
				class ace_gestures_Cover {
					displayName = "Cover";
					condition = 1;
					statement = """""ace_gestures_cover"""" call ace_gestures_fnc_playSignal";
					showDisabled = 1;
					priority = 1.6;
				};
				class ace_gestures_Point {
					displayName = "Point";
					condition = 1;
					statement = """""ace_gestures_point"""" call ace_gestures_fnc_playSignal";
					showDisabled = 1;
					priority = 1.5;
				};
				class ace_gestures_Engage {
					displayName = "Engage";
					condition = 1;
					statement = """""ace_gestures_engage"""" call ace_gestures_fnc_playSignal";
					showDisabled = 1;
					priority = 1.4;
				};
				class ace_gestures_Hold {
					displayName = "Hold";
					condition = 1;
					statement = """""ace_gestures_hold"""" call ace_gestures_fnc_playSignal";
					showDisabled = 1;
					priority = 1.3;
				};
				class ace_gestures_Warning {
					displayName = "Warning";
					condition = 1;
					statement = """""ace_gestures_warning"""" call ace_gestures_fnc_playSignal";
					showDisabled = 1;
					priority = 1.2;
				};
			};
		};
		class ACE_Actions {
			class ACE_MainActions {
				displayName = "Interactions";
				distance = 4;
				condition = 1;
				statement = "";
				icon = "\a3\ui_f\data\IGUI\Cfg\Actions\eject_ca.paa";
				selection = "pelvis";
				class ACE_PassMagazine {
					displayName = "Pass magazine";
					condition = "";
					statement = "";
					showDisabled = 0;
					priority = 3.3;
					icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargomag_ca.paa";
					class ACE_PassMagazinePrimary {
						displayName = "Primary magazine";
						condition = "[_player,_target,primaryWeapon _target] call ace_interaction_fnc_canPassMagazine";
						statement = "[_player,_target,primaryWeapon _target] call ace_interaction_fnc_passMagazine";
						showDisabled = 0;
						priority = 3;
						icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryweapon_ca.paa";
					};
					class ACE_PassMagazineHandgun {
						displayName = "Pistol magazine";
						condition = "[_player,_target,handgunWeapon _target] call ace_interaction_fnc_canPassMagazine";
						statement = "[_player,_target,handgunWeapon _target] call ace_interaction_fnc_passMagazine";
						showDisabled = 0;
						priority = 1;
						icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
					};
				};
				class ACE_TeamManagement {
					displayName = "Team Management";
					condition = "[_player,_target] call ace_interaction_fnc_canJoinTeam&& {ace_interaction_EnableTeamManagement}";
					statement = "";
					showDisabled = 0;
					priority = 3.2;
					icon = "\z\ace\addons\interaction\UI\team\team_management_ca.paa";
					class ACE_AssignTeamRed {
						displayName = "Assign Red";
						condition = "[_player,_target] call ace_interaction_fnc_canJoinTeam";
						statement = "[_target,'RED'] call ace_interaction_fnc_joinTeam";
						showDisabled = 1;
						icon = "\z\ace\addons\interaction\UI\team\team_red_ca.paa";
						priority = 2.4;
					};
					class ACE_AssignTeamGreen {
						displayName = "Assign Green";
						condition = "[_player,_target] call ace_interaction_fnc_canJoinTeam";
						statement = "[_target,'GREEN'] call ace_interaction_fnc_joinTeam";
						showDisabled = 1;
						icon = "\z\ace\addons\interaction\UI\team\team_green_ca.paa";
						priority = 2.3;
					};
					class ACE_AssignTeamBlue {
						displayName = "Assign Blue";
						condition = "[_player,_target] call ace_interaction_fnc_canJoinTeam";
						statement = "[_target,'BLUE'] call ace_interaction_fnc_joinTeam";
						showDisabled = 1;
						icon = "\z\ace\addons\interaction\UI\team\team_blue_ca.paa";
						priority = 2.2;
					};
					class ACE_AssignTeamYellow {
						displayName = "Assign Yellow";
						condition = "[_player,_target] call ace_interaction_fnc_canJoinTeam";
						statement = "[_target,'YELLOW'] call ace_interaction_fnc_joinTeam";
						showDisabled = 1;
						icon = "\z\ace\addons\interaction\UI\team\team_yellow_ca.paa";
						priority = 2.1;
					};
					class ACE_UnassignTeam {
						displayName = "Leave Team";
						condition = "[_player,_target] call ace_interaction_fnc_canJoinTeam&& {assignedTeam _target != 'MAIN'}";
						statement = "[_target,'MAIN'] call ace_interaction_fnc_joinTeam";
						showDisabled = 1;
						icon = "\z\ace\addons\interaction\UI\team\team_white_ca.paa";
						priority = 2.5;
					};
				};
				class ACE_JoinGroup {
					displayName = "Join group";
					condition = "ace_interaction_EnableTeamManagement&& {[_player,_target] call ace_interaction_fnc_canJoinGroup}";
					statement = "[_player] joinSilent group _target";
					showDisabled = 0;
					priority = 2.6;
					icon = "\z\ace\addons\interaction\UI\team\team_management_ca.paa";
				};
				class ACE_GetDown {
					displayName = "Get Down!";
					condition = "[_player,_target] call ace_interaction_fnc_canInteractWithCivilian";
					statement = "[_player,_target] call ace_interaction_fnc_getDown";
					showDisabled = 0;
					priority = 2.2;
				};
				class ACE_SendAway {
					displayName = "Go Away!";
					condition = "[_player,_target] call ace_interaction_fnc_canInteractWithCivilian";
					statement = "[_player,_target] call ace_interaction_fnc_sendAway";
					showDisabled = 0;
					priority = 2;
				};
				class ACE_Pardon {
					displayName = "Pardon";
					condition = "[_player,_target] call ace_interaction_fnc_canPardon";
					statement = "[_player,_target] call ace_interaction_fnc_pardon";
					showDisabled = 0;
					priority = 2.5;
				};
				class ACE_GetOut {
					displayName = "Get Out";
					condition = "!(isNull objectParent _target) && [_player,_target] call ace_interaction_fnc_canInteractWithCivilian";
					statement = "[_target] call ace_common_fnc_unloadPerson";
					showDisabled = 0;
					priority = 2.6;
				};
				class Medical {
					displayName = "Medical";
					runOnHover = 1;
					exceptions[] = {"isNotInside"};
					condition = "(vehicle _target != _target && vehicle _target == vehicle _player) || ace_medical_menuTypeStyle== 1";
					statement = "[_target,true,0] call ace_medical_fnc_displayPatientInformation";
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					class ACE_Head {
						displayName = "Head";
						runOnHover = 1;
						statement = "[_target,true,0] call ace_medical_fnc_displayPatientInformation";
						condition = 1;
						modifierFunction = "[_target,_player,0,_this select 3] call ace_medical_fnc_modifyMedicalAction";
						exceptions[] = {"isNotInside"};
						icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
						distance = 1.75;
						class Bandage {
							displayName = "Bandage";
							distance = 2;
							condition = "[_player,_target,'head','Bandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','Bandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 1;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class FieldDressing {
							displayName = "Field Dressing";
							distance = 5;
							condition = "[_player,_target,'head','FieldDressing'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','FieldDressing'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PackingBandage: FieldDressing {
							displayName = "Packing Bandage";
							condition = "[_player,_target,'head','PackingBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','PackingBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class ElasticBandage: FieldDressing {
							displayName = "Elastic Bandage";
							condition = "[_player,_target,'head','ElasticBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','ElasticBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class QuikClot: FieldDressing {
							displayName = "QuikClot";
							condition = "[_player,_target,'head','QuikClot'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','QuikClot'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class CheckPulse: FieldDressing {
							displayName = "Check Pulse";
							condition = "[_player,_target,'head','CheckPulse'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','CheckPulse'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class CheckBloodPressure: CheckPulse {
							displayName = "Check Blood Pressure";
							condition = "[_player,_target,'head','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','CheckBloodPressure'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// CheckPulse
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class CheckResponse: CheckPulse {
							displayName = "Response";
							condition = "[_player,_target,'head','CheckResponse'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','CheckResponse'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// CheckPulse
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Diagnose: CheckPulse {
							displayName = "Diagnose";
							condition = "[_player,_target,'head','Diagnose'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','Diagnose'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// CheckPulse
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
					};
					class ACE_Torso {
						displayName = "Torso";
						runOnHover = 1;
						statement = "[_target,true,1] call ace_medical_fnc_displayPatientInformation";
						condition = 1;
						modifierFunction = "[_target,_player,1,_this select 3] call ace_medical_fnc_modifyMedicalAction";
						exceptions[] = {"isNotInside"};
						icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
						distance = 1.75;
						class Bandage {
							displayName = "Bandage";
							distance = 2;
							condition = "[_player,_target,'body','Bandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','Bandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 1;
							priority = 2;
							enableInside = 1;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PlaceInBodyBag {
							displayName = "Place body in bodybag";
							distance = 2;
							condition = "[_player,_target,'body','BodyBag'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','BodyBag'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 1;
							priority = 2;
							enableInside = 1;
						};
						class TriageCard {
							displayName = "Triage Card";
							distance = 2;
							condition = 1;
							statement = "[_target,true] call ace_medical_fnc_displayTriageCard";
							exceptions[] = {"isNotInside"};
							showDisabled = 1;
							priority = 2;
							enableInside = 1;
							icon = "\z\ace\addons\medical\UI\icons\triageCard.paa";
						};
						class Diagnose {
							displayName = "Diagnose";
							distance = 5;
							condition = "[_player,_target,'body','Diagnose'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','Diagnose'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 0;
							priority = 2;
							icon = "";
						};
						class FieldDressing {
							displayName = "Field Dressing";
							distance = 5;
							condition = "[_player,_target,'body','FieldDressing'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','FieldDressing'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 0;
							priority = 2;
							enableInside = 1;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PackingBandage: FieldDressing {
							displayName = "Packing Bandage";
							condition = "[_player,_target,'body','PackingBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','PackingBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							enableInside = 1;
						};
						class ElasticBandage: FieldDressing {
							displayName = "Elastic Bandage";
							condition = "[_player,_target,'body','ElasticBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','ElasticBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							enableInside = 1;
						};
						class QuikClot: FieldDressing {
							displayName = "QuikClot";
							condition = "[_player,_target,'body','QuikClot'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','QuikClot'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							enableInside = 1;
						};
						class SurgicalKit: FieldDressing {
							displayName = "Use Surgical Kit";
							condition = "[_player,_target,'body','SurgicalKit'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','SurgicalKit'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\surgicalKit.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							enableInside = 1;
						};
						class PersonalAidKit: FieldDressing {
							displayName = "Use Personal Aid Kit";
							condition = "[_player,_target,'body','PersonalAidKit'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','PersonalAidKit'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							enableInside = 1;
						};
						class CPR: FieldDressing {
							displayName = "CPR";
							condition = "[_player,_target,'body','CPR'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','CPR'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							enableInside = 1;
						};
					};
					class ACE_ArmLeft {
						displayName = "Left Arm";
						runOnHover = 1;
						statement = "[_target,true,2] call ace_medical_fnc_displayPatientInformation";
						condition = 1;
						modifierFunction = "[_target,_player,2,_this select 3] call ace_medical_fnc_modifyMedicalAction";
						exceptions[] = {"isNotInside"};
						icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
						distance = 1.75;
						class Bandage {
							displayName = "Bandage";
							distance = 2;
							condition = "[_player,_target,'hand_l','Bandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','Bandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 1;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class FieldDressing {
							displayName = "Field Dressing";
							distance = 5;
							condition = "[_player,_target,'hand_l','FieldDressing'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','FieldDressing'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PackingBandage: FieldDressing {
							displayName = "Packing Bandage";
							condition = "[_player,_target,'hand_l','PackingBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','PackingBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class ElasticBandage: FieldDressing {
							displayName = "Elastic Bandage";
							condition = "[_player,_target,'hand_l','ElasticBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','ElasticBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class QuikClot: FieldDressing {
							displayName = "QuikClot";
							condition = "[_player,_target,'hand_l','QuikClot'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','QuikClot'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Tourniquet: FieldDressing {
							displayName = "Tourniquet";
							condition = "[_player,_target,'hand_l','Tourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','Tourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Morphine: FieldDressing {
							displayName = "Inject Morphine";
							condition = "[_player,_target,'hand_l','Morphine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','Morphine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Adenosine: Morphine {
							displayName = "Inject Adenosine";
							condition = "[_player,_target,'hand_l','Adenosine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','Adenosine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Atropine: Morphine {
							displayName = "Inject Atropine";
							condition = "[_player,_target,'hand_l','Atropine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','Atropine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Epinephrine: Morphine {
							displayName = "Inject Epinephrine";
							condition = "[_player,_target,'hand_l','Epinephrine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','Epinephrine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV: FieldDressing {
							displayName = "Give Blood IV (1000ml)";
							condition = "[_player,_target,'hand_l','BloodIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','BloodIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV_500: BloodIV {
							displayName = "Give Blood IV (500ml)";
							condition = "[_player,_target,'hand_l','BloodIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','BloodIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV_250: BloodIV {
							displayName = "Give Blood IV (250ml)";
							condition = "[_player,_target,'hand_l','BloodIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','BloodIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV: BloodIV {
							displayName = "Give Plasma IV (1000ml)";
							condition = "[_player,_target,'hand_l','PlasmaIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','PlasmaIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV_500: PlasmaIV {
							displayName = "Give Plasma IV (500ml)";
							condition = "[_player,_target,'hand_l','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','PlasmaIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV_250: PlasmaIV {
							displayName = "Give Plasma IV (250ml)";
							condition = "[_player,_target,'hand_l','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','PlasmaIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV: BloodIV {
							displayName = "Give Saline IV (1000ml)";
							condition = "[_player,_target,'hand_l','SalineIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','SalineIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV_500: SalineIV {
							displayName = "Give Saline IV (500ml)";
							condition = "[_player,_target,'hand_l','SalineIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','SalineIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV_250: SalineIV {
							displayName = "Give Saline IV (250ml)";
							condition = "[_player,_target,'hand_l','SalineIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','SalineIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class CheckPulse: FieldDressing {
							displayName = "Check Pulse";
							condition = "[_player,_target,'hand_l','CheckPulse'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','CheckPulse'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class CheckBloodPressure: CheckPulse {
							displayName = "Check Blood Pressure";
							condition = "[_player,_target,'hand_l','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','CheckBloodPressure'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// CheckPulse
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class RemoveTourniquet: Tourniquet {
							displayName = "Remove Tourniquet";
							condition = "[_player,_target,'hand_l','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','RemoveTourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// Tourniquet
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
					};
					class ACE_ArmRight {
						displayName = "Right Arm";
						runOnHover = 1;
						statement = "[_target,true,3] call ace_medical_fnc_displayPatientInformation";
						condition = 1;
						modifierFunction = "[_target,_player,3,_this select 3] call ace_medical_fnc_modifyMedicalAction";
						exceptions[] = {"isNotInside"};
						icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
						distance = 1.75;
						class Bandage {
							displayName = "Bandage";
							distance = 2;
							condition = "[_player,_target,'hand_r','Bandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','Bandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 1;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class FieldDressing {
							displayName = "Field Dressing";
							distance = 5;
							condition = "[_player,_target,'hand_r','FieldDressing'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','FieldDressing'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PackingBandage: FieldDressing {
							displayName = "Packing Bandage";
							condition = "[_player,_target,'hand_r','PackingBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','PackingBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class ElasticBandage: FieldDressing {
							displayName = "Elastic Bandage";
							condition = "[_player,_target,'hand_r','ElasticBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','ElasticBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class QuikClot: FieldDressing {
							displayName = "QuikClot";
							condition = "[_player,_target,'hand_r','QuikClot'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','QuikClot'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class Tourniquet: FieldDressing {
							displayName = "Tourniquet";
							condition = "[_player,_target,'hand_r','Tourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','Tourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Morphine: FieldDressing {
							displayName = "Inject Morphine";
							condition = "[_player,_target,'hand_r','Morphine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','Morphine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Adenosine: Morphine {
							displayName = "Inject Adenosine";
							condition = "[_player,_target,'hand_r','Adenosine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','Adenosine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Atropine: Morphine {
							displayName = "Inject Atropine";
							condition = "[_player,_target,'hand_r','Atropine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','Atropine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// Morphine
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Epinephrine: Morphine {
							displayName = "Inject Epinephrine";
							condition = "[_player,_target,'hand_r','Epinephrine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','Epinephrine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// Morphine
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV: FieldDressing {
							displayName = "Give Blood IV (1000ml)";
							condition = "[_player,_target,'hand_r','BloodIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','BloodIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV_500: BloodIV {
							displayName = "Give Blood IV (500ml)";
							condition = "[_player,_target,'hand_r','BloodIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','BloodIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV_250: BloodIV {
							displayName = "Give Blood IV (250ml)";
							condition = "[_player,_target,'hand_r','BloodIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','BloodIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV: BloodIV {
							displayName = "Give Plasma IV (1000ml)";
							condition = "[_player,_target,'hand_r','PlasmaIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','PlasmaIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV_500: PlasmaIV {
							displayName = "Give Plasma IV (500ml)";
							condition = "[_player,_target,'hand_r','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','PlasmaIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV_250: PlasmaIV {
							displayName = "Give Plasma IV (250ml)";
							condition = "[_player,_target,'hand_r','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','PlasmaIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV: BloodIV {
							displayName = "Give Saline IV (1000ml)";
							condition = "[_player,_target,'hand_r','SalineIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','SalineIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV_500: SalineIV {
							displayName = "Give Saline IV (500ml)";
							condition = "[_player,_target,'hand_r','SalineIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','SalineIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV_250: SalineIV {
							displayName = "Give Saline IV (250ml)";
							condition = "[_player,_target,'hand_r','SalineIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','SalineIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class CheckPulse: FieldDressing {
							displayName = "Check Pulse";
							condition = "[_player,_target,'hand_r','CheckPulse'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','CheckPulse'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class CheckBloodPressure: CheckPulse {
							displayName = "Check Blood Pressure";
							condition = "[_player,_target,'hand_r','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','CheckBloodPressure'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// CheckPulse
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class RemoveTourniquet: Tourniquet {
							displayName = "Remove Tourniquet";
							condition = "[_player,_target,'hand_r','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','RemoveTourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// Tourniquet
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
					};
					class ACE_LegLeft {
						displayName = "Left Leg";
						runOnHover = 1;
						statement = "[_target,true,4] call ace_medical_fnc_displayPatientInformation";
						condition = 1;
						modifierFunction = "[_target,_player,4,_this select 3] call ace_medical_fnc_modifyMedicalAction";
						exceptions[] = {"isNotInside"};
						icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
						distance = 1.75;
						class Bandage {
							displayName = "Bandage";
							distance = 2;
							condition = "[_player,_target,'leg_l','Bandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','Bandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 1;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class FieldDressing {
							displayName = "Field Dressing";
							distance = 5;
							condition = "[_player,_target,'leg_l','FieldDressing'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','FieldDressing'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PackingBandage: FieldDressing {
							displayName = "Packing Bandage";
							condition = "[_player,_target,'leg_l','PackingBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','PackingBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class ElasticBandage: FieldDressing {
							displayName = "Elastic Bandage";
							condition = "[_player,_target,'leg_l','ElasticBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','ElasticBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class QuikClot: FieldDressing {
							displayName = "QuikClot";
							condition = "[_player,_target,'leg_l','QuikClot'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','QuikClot'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class Tourniquet: FieldDressing {
							displayName = "Tourniquet";
							condition = "[_player,_target,'leg_l','Tourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','Tourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Morphine: FieldDressing {
							displayName = "Inject Morphine";
							condition = "[_player,_target,'leg_l','Morphine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','Morphine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Adenosine: Morphine {
							displayName = "Inject Atropine";
							condition = "[_player,_target,'leg_l','Adenosine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','Adenosine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Atropine: Morphine {
							displayName = "Inject Atropine";
							condition = "[_player,_target,'leg_l','Atropine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','Atropine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Epinephrine: Morphine {
							displayName = "Inject Epinephrine";
							condition = "[_player,_target,'leg_l','Epinephrine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','Epinephrine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// Morphine
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV: FieldDressing {
							displayName = "Give Blood IV (1000ml)";
							condition = "[_player,_target,'leg_l','BloodIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','BloodIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV_500: BloodIV {
							displayName = "Give Blood IV (500ml)";
							condition = "[_player,_target,'leg_l','BloodIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','BloodIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV_250: BloodIV {
							displayName = "Give Blood IV (250ml)";
							condition = "[_player,_target,'leg_l','BloodIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','BloodIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV: BloodIV {
							displayName = "Give Plasma IV (1000ml)";
							condition = "[_player,_target,'leg_l','PlasmaIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','PlasmaIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV_500: PlasmaIV {
							displayName = "Give Plasma IV (500ml)";
							condition = "[_player,_target,'leg_l','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','PlasmaIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV_250: PlasmaIV {
							displayName = "Give Plasma IV (250ml)";
							condition = "[_player,_target,'leg_l','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','PlasmaIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV: BloodIV {
							displayName = "Give Saline IV (1000ml)";
							condition = "[_player,_target,'leg_l','SalineIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','SalineIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV_500: SalineIV {
							displayName = "Give Saline IV (500ml)";
							condition = "[_player,_target,'leg_l','SalineIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','SalineIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV_250: SalineIV {
							displayName = "Give Saline IV (250ml)";
							condition = "[_player,_target,'leg_l','SalineIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','SalineIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class RemoveTourniquet: Tourniquet {
							displayName = "Remove Tourniquet";
							condition = "[_player,_target,'leg_l','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','RemoveTourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// Tourniquet
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
					};
					class ACE_LegRight {
						displayName = "Right Leg";
						runOnHover = 1;
						statement = "[_target,true,5] call ace_medical_fnc_displayPatientInformation";
						condition = 1;
						modifierFunction = "[_target,_player,5,_this select 3] call ace_medical_fnc_modifyMedicalAction";
						exceptions[] = {"isNotInside"};
						icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
						distance = 1.75;
						class Bandage {
							displayName = "Bandage";
							distance = 2;
							condition = "[_player,_target,'leg_r','Bandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','Bandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 1;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class FieldDressing {
							displayName = "Field Dressing";
							distance = 5;
							condition = "[_player,_target,'leg_r','FieldDressing'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','FieldDressing'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PackingBandage: FieldDressing {
							displayName = "Packing Bandage";
							condition = "[_player,_target,'leg_r','PackingBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','PackingBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class ElasticBandage: FieldDressing {
							displayName = "Elastic Bandage";
							condition = "[_player,_target,'leg_r','ElasticBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','ElasticBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class QuikClot: FieldDressing {
							displayName = "QuikClot";
							condition = "[_player,_target,'leg_r','QuikClot'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','QuikClot'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class Tourniquet: FieldDressing {
							displayName = "Tourniquet";
							condition = "[_player,_target,'leg_r','Tourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','Tourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Morphine: FieldDressing {
							displayName = "Inject Morphine";
							condition = "[_player,_target,'leg_r','Morphine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','Morphine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Adenosine: Morphine {
							displayName = "Inject Atropine";
							condition = "[_player,_target,'leg_r','Adenosine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','Adenosine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Atropine: Morphine {
							displayName = "Inject Atropine";
							condition = "[_player,_target,'leg_r','Atropine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','Atropine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// Morphine
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Epinephrine: Morphine {
							displayName = "Inject Epinephrine";
							condition = "[_player,_target,'leg_r','Epinephrine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','Epinephrine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// Morphine
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV: FieldDressing {
							displayName = "Give Blood IV (1000ml)";
							condition = "[_player,_target,'leg_r','BloodIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','BloodIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV_500: BloodIV {
							displayName = "Give Blood IV (500ml)";
							condition = "[_player,_target,'leg_r','BloodIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','BloodIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV_250: BloodIV {
							displayName = "Give Blood IV (250ml)";
							condition = "[_player,_target,'leg_r','BloodIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','BloodIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV: BloodIV {
							displayName = "Give Plasma IV (1000ml)";
							condition = "[_player,_target,'leg_r','PlasmaIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','PlasmaIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV_500: PlasmaIV {
							displayName = "Give Plasma IV (500ml)";
							condition = "[_player,_target,'leg_r','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','PlasmaIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV_250: PlasmaIV {
							displayName = "Give Plasma IV (250ml)";
							condition = "[_player,_target,'leg_r','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','PlasmaIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV: BloodIV {
							displayName = "Give Saline IV (1000ml)";
							condition = "[_player,_target,'leg_r','SalineIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','SalineIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV_500: SalineIV {
							displayName = "Give Saline IV (500ml)";
							condition = "[_player,_target,'leg_r','SalineIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','SalineIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV_250: SalineIV {
							displayName = "Give Saline IV (250ml)";
							condition = "[_player,_target,'leg_r','SalineIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','SalineIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class RemoveTourniquet: Tourniquet {
							displayName = "Remove Tourniquet";
							condition = "[_player,_target,'leg_r','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','RemoveTourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// Tourniquet
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
					};
				};
				class ace_medical_loadPatient {
					displayName = "Load patient";
					distance = 5;
					condition = "_target getVariable[""""ACE_isUnconscious"""",false] && vehicle _target == _target";
					statement = "[_player,_target] call ace_medical_fnc_actionLoadUnit";
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					exceptions[] = {"isNotDragging", "isNotCarrying"};
				};
				class ace_medical_UnLoadPatient {
					displayName = "Unload patient";
					distance = 5;
					condition = "_target getVariable[""""ACE_isUnconscious"""",false] && vehicle _target != _target";
					statement = "[_player,_target] call ace_medical_fnc_actionUnloadUnit";
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					exceptions[] = {"isNotDragging", "isNotCarrying", "isNotInside"};
				};
				class Medical_Menu {
					displayName = "Medical Menu";
					runOnHover = 0;
					exceptions[] = {"isNotInside"};
					condition = "[ACE_player,_target] call ace_medical_menu_fnc_canOpenMenu";
					statement = "[_target] call ace_medical_menu_fnc_openMenu";
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				};
				class ACE_RemoveHandcuffs {
					displayName = "Free Prisoner";
					selection = "righthand";
					distance = 2;
					condition = "[_player,_target] call ace_captives_fnc_canRemoveHandcuffs";
					statement = "[_player,_target] call ace_captives_fnc_doRemoveHandcuffs";
					exceptions[] = {};
					icon = "\z\ace\addons\captives\UI\handcuff_ca.paa";
				};
				class ACE_EscortCaptive {
					displayName = "Escort Prisoner";
					distance = 4;
					condition = "[_player,_target] call ace_captives_fnc_canEscortCaptive";
					statement = "[_player,_target,true] call ace_captives_fnc_doEscortCaptive";
					exceptions[] = {};
					showDisabled = 0;
					icon = "\z\ace\addons\captives\UI\captive_ca.paa";
					priority = 2.3;
				};
				class ACE_StopEscorting {
					displayName = "Release Prisoner";
					distance = 4;
					condition = "[_player,_target] call ace_captives_fnc_canStopEscorting";
					statement = "[_player,_target,false] call ace_captives_fnc_doEscortCaptive";
					exceptions[] = {"isNotEscorting"};
					showDisabled = 0;
					icon = "\z\ace\addons\captives\UI\captive_ca.paa";
					priority = 2.3;
				};
				class ACE_LoadCaptive {
					displayName = "Load Captive";
					distance = 4;
					condition = "[_player,_target,objNull] call ace_captives_fnc_canLoadCaptive";
					statement = "[_player,_target,objNull] call ace_captives_fnc_doLoadCaptive";
					exceptions[] = {"isNotEscorting"};
					showDisabled = 0;
					icon = "\z\ace\addons\captives\UI\captive_ca.paa";
					priority = 2.2;
				};
				class ace_captives_UnloadCaptive {
					displayName = "Unload Captive";
					distance = 4;
					condition = "[_player,_target] call ace_captives_fnc_canUnloadCaptive";
					statement = "[_player,_target] call ace_captives_fnc_doUnloadCaptive";
					priority = 1.2;
				};
				class ACE_DisarmInventory {
					displayName = "Open Inventory";
					distance = 3.5;
					condition = "[_player,_target] call ace_disarming_fnc_canPlayerDisarmUnit";
					statement = "[_player,_target] call ace_disarming_fnc_openDisarmDialog";
					icon = "\z\ace\addons\disarming\UI\disarm.paa";
					exceptions[] = {};
				};
				class ace_gunbag_weaponTo {
					displayName = "Put weapon into gunbag";
					condition = "([_target] call ace_gunbag_fnc_hasGunbag) && {[_player,_target] call ace_gunbag_fnc_canInteract== 0}";
					statement = "[_player,_target] call ace_gunbag_fnc_toGunbag";
					showDisabled = 0;
					priority = 1;
					icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
				};
				class ace_gunbag_weaponOff {
					displayName = "Get weapon out of gunbag";
					condition = "([_target] call ace_gunbag_fnc_hasGunbag) && {[_player,_target] call ace_gunbag_fnc_canInteract== 1}";
					statement = "[_player,_target] call ace_gunbag_fnc_offGunbag";
					showDisabled = 0;
					priority = 1;
					icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
				};
				class ace_gunbag_status {
					displayName = "Status";
					condition = "[_target] call ace_gunbag_fnc_hasGunbag";
					statement = "[_target] call ace_gunbag_fnc_status";
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
				};
			};
			class ACE_Torso {
				selection = "spine3";
				displayName = "Torso";
				runOnHover = 1;
				statement = "[_target,true,1] call ace_medical_fnc_displayPatientInformation";
				condition = "ace_medical_menuTypeStyle== 0";
				modifierFunction = "[_target,_player,1,_this select 3] call ace_medical_fnc_modifyMedicalAction";
				exceptions[] = {};
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				distance = 1.75;
				class Bandage {
					displayName = "Bandage";
					distance = 2;
					condition = "[_player,_target,'body','Bandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','Bandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 1;
					priority = 2;
					enableInside = 1;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PlaceInBodyBag {
					displayName = "Place body in bodybag";
					distance = 2;
					condition = "[_player,_target,'body','BodyBag'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','BodyBag'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 1;
					priority = 2;
					enableInside = 1;
				};
				class TriageCard {
					displayName = "Triage Card";
					distance = 2;
					condition = 1;
					statement = "[_target,true] call ace_medical_fnc_displayTriageCard";
					exceptions[] = {};
					showDisabled = 1;
					priority = 2;
					enableInside = 1;
					icon = "\z\ace\addons\medical\UI\icons\triageCard.paa";
				};
				class Diagnose {
					displayName = "Diagnose";
					distance = 5;
					condition = "[_player,_target,'body','Diagnose'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','Diagnose'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 0;
					priority = 2;
					icon = "";
				};
				class FieldDressing {
					displayName = "Field Dressing";
					distance = 5;
					condition = "[_player,_target,'body','FieldDressing'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','FieldDressing'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 0;
					priority = 2;
					enableInside = 1;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PackingBandage: FieldDressing {
					displayName = "Packing Bandage";
					condition = "[_player,_target,'body','PackingBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','PackingBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					enableInside = 1;
				};
				class ElasticBandage: FieldDressing {
					displayName = "Elastic Bandage";
					condition = "[_player,_target,'body','ElasticBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','ElasticBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					enableInside = 1;
				};
				class QuikClot: FieldDressing {
					displayName = "QuikClot";
					condition = "[_player,_target,'body','QuikClot'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','QuikClot'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					enableInside = 1;
				};
				class SurgicalKit: FieldDressing {
					displayName = "Use Surgical Kit";
					condition = "[_player,_target,'body','SurgicalKit'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','SurgicalKit'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\surgicalKit.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					enableInside = 1;
				};
				class PersonalAidKit: FieldDressing {
					displayName = "Use Personal Aid Kit";
					condition = "[_player,_target,'body','PersonalAidKit'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','PersonalAidKit'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					enableInside = 1;
				};
				class CPR: FieldDressing {
					displayName = "CPR";
					condition = "[_player,_target,'body','CPR'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','CPR'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					enableInside = 1;
				};
			};
			class ACE_Head {
				selection = "pilot";
				displayName = "Head";
				runOnHover = 1;
				statement = "[_target,true,0] call ace_medical_fnc_displayPatientInformation";
				condition = "ace_medical_menuTypeStyle== 0";
				modifierFunction = "[_target,_player,0,_this select 3] call ace_medical_fnc_modifyMedicalAction";
				exceptions[] = {};
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				distance = 1.75;
				class Bandage {
					displayName = "Bandage";
					distance = 2;
					condition = "[_player,_target,'head','Bandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','Bandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 1;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class FieldDressing {
					displayName = "Field Dressing";
					distance = 5;
					condition = "[_player,_target,'head','FieldDressing'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','FieldDressing'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PackingBandage: FieldDressing {
					displayName = "Packing Bandage";
					condition = "[_player,_target,'head','PackingBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','PackingBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class ElasticBandage: FieldDressing {
					displayName = "Elastic Bandage";
					condition = "[_player,_target,'head','ElasticBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','ElasticBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class QuikClot: FieldDressing {
					displayName = "QuikClot";
					condition = "[_player,_target,'head','QuikClot'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','QuikClot'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class CheckPulse: FieldDressing {
					displayName = "Check Pulse";
					condition = "[_player,_target,'head','CheckPulse'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','CheckPulse'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class CheckBloodPressure: CheckPulse {
					displayName = "Check Blood Pressure";
					condition = "[_player,_target,'head','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','CheckBloodPressure'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// CheckPulse
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class CheckResponse: CheckPulse {
					displayName = "Response";
					condition = "[_player,_target,'head','CheckResponse'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','CheckResponse'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// CheckPulse
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Diagnose: CheckPulse {
					displayName = "Diagnose";
					condition = "[_player,_target,'head','Diagnose'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','Diagnose'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// CheckPulse
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
			};
			class ACE_ArmLeft {
				selection = "LeftForeArm";
				displayName = "Left Arm";
				runOnHover = 1;
				statement = "[_target,true,2] call ace_medical_fnc_displayPatientInformation";
				condition = "ace_medical_menuTypeStyle== 0";
				modifierFunction = "[_target,_player,2,_this select 3] call ace_medical_fnc_modifyMedicalAction";
				exceptions[] = {};
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				distance = 1.75;
				class Bandage {
					displayName = "Bandage";
					distance = 2;
					condition = "[_player,_target,'hand_l','Bandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','Bandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 1;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class FieldDressing {
					displayName = "Field Dressing";
					distance = 5;
					condition = "[_player,_target,'hand_l','FieldDressing'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','FieldDressing'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PackingBandage: FieldDressing {
					displayName = "Packing Bandage";
					condition = "[_player,_target,'hand_l','PackingBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','PackingBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class ElasticBandage: FieldDressing {
					displayName = "Elastic Bandage";
					condition = "[_player,_target,'hand_l','ElasticBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','ElasticBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class QuikClot: FieldDressing {
					displayName = "QuikClot";
					condition = "[_player,_target,'hand_l','QuikClot'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','QuikClot'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Tourniquet: FieldDressing {
					displayName = "Tourniquet";
					condition = "[_player,_target,'hand_l','Tourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','Tourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Morphine: FieldDressing {
					displayName = "Inject Morphine";
					condition = "[_player,_target,'hand_l','Morphine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','Morphine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Adenosine: Morphine {
					displayName = "Inject Adenosine";
					condition = "[_player,_target,'hand_l','Adenosine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','Adenosine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Atropine: Morphine {
					displayName = "Inject Atropine";
					condition = "[_player,_target,'hand_l','Atropine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','Atropine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Epinephrine: Morphine {
					displayName = "Inject Epinephrine";
					condition = "[_player,_target,'hand_l','Epinephrine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','Epinephrine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV: FieldDressing {
					displayName = "Give Blood IV (1000ml)";
					condition = "[_player,_target,'hand_l','BloodIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','BloodIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV_500: BloodIV {
					displayName = "Give Blood IV (500ml)";
					condition = "[_player,_target,'hand_l','BloodIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','BloodIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV_250: BloodIV {
					displayName = "Give Blood IV (250ml)";
					condition = "[_player,_target,'hand_l','BloodIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','BloodIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV: BloodIV {
					displayName = "Give Plasma IV (1000ml)";
					condition = "[_player,_target,'hand_l','PlasmaIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','PlasmaIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV_500: PlasmaIV {
					displayName = "Give Plasma IV (500ml)";
					condition = "[_player,_target,'hand_l','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','PlasmaIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV_250: PlasmaIV {
					displayName = "Give Plasma IV (250ml)";
					condition = "[_player,_target,'hand_l','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','PlasmaIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV: BloodIV {
					displayName = "Give Saline IV (1000ml)";
					condition = "[_player,_target,'hand_l','SalineIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','SalineIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV_500: SalineIV {
					displayName = "Give Saline IV (500ml)";
					condition = "[_player,_target,'hand_l','SalineIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','SalineIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV_250: SalineIV {
					displayName = "Give Saline IV (250ml)";
					condition = "[_player,_target,'hand_l','SalineIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','SalineIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class CheckPulse: FieldDressing {
					displayName = "Check Pulse";
					condition = "[_player,_target,'hand_l','CheckPulse'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','CheckPulse'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class CheckBloodPressure: CheckPulse {
					displayName = "Check Blood Pressure";
					condition = "[_player,_target,'hand_l','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','CheckBloodPressure'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// CheckPulse
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class RemoveTourniquet: Tourniquet {
					displayName = "Remove Tourniquet";
					condition = "[_player,_target,'hand_l','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','RemoveTourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// Tourniquet
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
			};
			class ACE_ArmRight {
				selection = "RightForeArm";
				displayName = "Right Arm";
				runOnHover = 1;
				statement = "[_target,true,3] call ace_medical_fnc_displayPatientInformation";
				condition = "ace_medical_menuTypeStyle== 0";
				modifierFunction = "[_target,_player,3,_this select 3] call ace_medical_fnc_modifyMedicalAction";
				exceptions[] = {};
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				distance = 1.75;
				class Bandage {
					displayName = "Bandage";
					distance = 2;
					condition = "[_player,_target,'hand_r','Bandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','Bandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 1;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class FieldDressing {
					displayName = "Field Dressing";
					distance = 5;
					condition = "[_player,_target,'hand_r','FieldDressing'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','FieldDressing'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PackingBandage: FieldDressing {
					displayName = "Packing Bandage";
					condition = "[_player,_target,'hand_r','PackingBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','PackingBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class ElasticBandage: FieldDressing {
					displayName = "Elastic Bandage";
					condition = "[_player,_target,'hand_r','ElasticBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','ElasticBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class QuikClot: FieldDressing {
					displayName = "QuikClot";
					condition = "[_player,_target,'hand_r','QuikClot'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','QuikClot'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class Tourniquet: FieldDressing {
					displayName = "Tourniquet";
					condition = "[_player,_target,'hand_r','Tourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','Tourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Morphine: FieldDressing {
					displayName = "Inject Morphine";
					condition = "[_player,_target,'hand_r','Morphine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','Morphine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Adenosine: Morphine {
					displayName = "Inject Adenosine";
					condition = "[_player,_target,'hand_r','Adenosine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','Adenosine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Atropine: Morphine {
					displayName = "Inject Atropine";
					condition = "[_player,_target,'hand_r','Atropine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','Atropine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// Morphine
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Epinephrine: Morphine {
					displayName = "Inject Epinephrine";
					condition = "[_player,_target,'hand_r','Epinephrine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','Epinephrine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// Morphine
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV: FieldDressing {
					displayName = "Give Blood IV (1000ml)";
					condition = "[_player,_target,'hand_r','BloodIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','BloodIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV_500: BloodIV {
					displayName = "Give Blood IV (500ml)";
					condition = "[_player,_target,'hand_r','BloodIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','BloodIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV_250: BloodIV {
					displayName = "Give Blood IV (250ml)";
					condition = "[_player,_target,'hand_r','BloodIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','BloodIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV: BloodIV {
					displayName = "Give Plasma IV (1000ml)";
					condition = "[_player,_target,'hand_r','PlasmaIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','PlasmaIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV_500: PlasmaIV {
					displayName = "Give Plasma IV (500ml)";
					condition = "[_player,_target,'hand_r','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','PlasmaIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV_250: PlasmaIV {
					displayName = "Give Plasma IV (250ml)";
					condition = "[_player,_target,'hand_r','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','PlasmaIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV: BloodIV {
					displayName = "Give Saline IV (1000ml)";
					condition = "[_player,_target,'hand_r','SalineIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','SalineIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV_500: SalineIV {
					displayName = "Give Saline IV (500ml)";
					condition = "[_player,_target,'hand_r','SalineIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','SalineIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV_250: SalineIV {
					displayName = "Give Saline IV (250ml)";
					condition = "[_player,_target,'hand_r','SalineIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','SalineIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class CheckPulse: FieldDressing {
					displayName = "Check Pulse";
					condition = "[_player,_target,'hand_r','CheckPulse'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','CheckPulse'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class CheckBloodPressure: CheckPulse {
					displayName = "Check Blood Pressure";
					condition = "[_player,_target,'hand_r','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','CheckBloodPressure'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// CheckPulse
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class RemoveTourniquet: Tourniquet {
					displayName = "Remove Tourniquet";
					condition = "[_player,_target,'hand_r','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','RemoveTourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// Tourniquet
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
			};
			class ACE_LegLeft {
				selection = "LKnee";
				displayName = "Left Leg";
				runOnHover = 1;
				statement = "[_target,true,4] call ace_medical_fnc_displayPatientInformation";
				condition = "ace_medical_menuTypeStyle== 0";
				modifierFunction = "[_target,_player,4,_this select 3] call ace_medical_fnc_modifyMedicalAction";
				exceptions[] = {};
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				distance = 1.75;
				class Bandage {
					displayName = "Bandage";
					distance = 2;
					condition = "[_player,_target,'leg_l','Bandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','Bandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 1;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class FieldDressing {
					displayName = "Field Dressing";
					distance = 5;
					condition = "[_player,_target,'leg_l','FieldDressing'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','FieldDressing'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PackingBandage: FieldDressing {
					displayName = "Packing Bandage";
					condition = "[_player,_target,'leg_l','PackingBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','PackingBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class ElasticBandage: FieldDressing {
					displayName = "Elastic Bandage";
					condition = "[_player,_target,'leg_l','ElasticBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','ElasticBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class QuikClot: FieldDressing {
					displayName = "QuikClot";
					condition = "[_player,_target,'leg_l','QuikClot'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','QuikClot'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class Tourniquet: FieldDressing {
					displayName = "Tourniquet";
					condition = "[_player,_target,'leg_l','Tourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','Tourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Morphine: FieldDressing {
					displayName = "Inject Morphine";
					condition = "[_player,_target,'leg_l','Morphine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','Morphine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Adenosine: Morphine {
					displayName = "Inject Atropine";
					condition = "[_player,_target,'leg_l','Adenosine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','Adenosine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Atropine: Morphine {
					displayName = "Inject Atropine";
					condition = "[_player,_target,'leg_l','Atropine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','Atropine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Epinephrine: Morphine {
					displayName = "Inject Epinephrine";
					condition = "[_player,_target,'leg_l','Epinephrine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','Epinephrine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// Morphine
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV: FieldDressing {
					displayName = "Give Blood IV (1000ml)";
					condition = "[_player,_target,'leg_l','BloodIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','BloodIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV_500: BloodIV {
					displayName = "Give Blood IV (500ml)";
					condition = "[_player,_target,'leg_l','BloodIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','BloodIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV_250: BloodIV {
					displayName = "Give Blood IV (250ml)";
					condition = "[_player,_target,'leg_l','BloodIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','BloodIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV: BloodIV {
					displayName = "Give Plasma IV (1000ml)";
					condition = "[_player,_target,'leg_l','PlasmaIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','PlasmaIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV_500: PlasmaIV {
					displayName = "Give Plasma IV (500ml)";
					condition = "[_player,_target,'leg_l','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','PlasmaIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV_250: PlasmaIV {
					displayName = "Give Plasma IV (250ml)";
					condition = "[_player,_target,'leg_l','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','PlasmaIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV: BloodIV {
					displayName = "Give Saline IV (1000ml)";
					condition = "[_player,_target,'leg_l','SalineIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','SalineIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV_500: SalineIV {
					displayName = "Give Saline IV (500ml)";
					condition = "[_player,_target,'leg_l','SalineIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','SalineIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV_250: SalineIV {
					displayName = "Give Saline IV (250ml)";
					condition = "[_player,_target,'leg_l','SalineIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','SalineIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class RemoveTourniquet: Tourniquet {
					displayName = "Remove Tourniquet";
					condition = "[_player,_target,'leg_l','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','RemoveTourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// Tourniquet
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
			};
			class ACE_LegRight {
				selection = "RKnee";
				displayName = "Right Leg";
				runOnHover = 1;
				statement = "[_target,true,5] call ace_medical_fnc_displayPatientInformation";
				condition = "ace_medical_menuTypeStyle== 0";
				modifierFunction = "[_target,_player,5,_this select 3] call ace_medical_fnc_modifyMedicalAction";
				exceptions[] = {};
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				distance = 1.75;
				class Bandage {
					displayName = "Bandage";
					distance = 2;
					condition = "[_player,_target,'leg_r','Bandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','Bandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 1;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class FieldDressing {
					displayName = "Field Dressing";
					distance = 5;
					condition = "[_player,_target,'leg_r','FieldDressing'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','FieldDressing'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PackingBandage: FieldDressing {
					displayName = "Packing Bandage";
					condition = "[_player,_target,'leg_r','PackingBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','PackingBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class ElasticBandage: FieldDressing {
					displayName = "Elastic Bandage";
					condition = "[_player,_target,'leg_r','ElasticBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','ElasticBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class QuikClot: FieldDressing {
					displayName = "QuikClot";
					condition = "[_player,_target,'leg_r','QuikClot'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','QuikClot'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class Tourniquet: FieldDressing {
					displayName = "Tourniquet";
					condition = "[_player,_target,'leg_r','Tourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','Tourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Morphine: FieldDressing {
					displayName = "Inject Morphine";
					condition = "[_player,_target,'leg_r','Morphine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','Morphine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Adenosine: Morphine {
					displayName = "Inject Atropine";
					condition = "[_player,_target,'leg_r','Adenosine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','Adenosine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Atropine: Morphine {
					displayName = "Inject Atropine";
					condition = "[_player,_target,'leg_r','Atropine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','Atropine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// Morphine
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Epinephrine: Morphine {
					displayName = "Inject Epinephrine";
					condition = "[_player,_target,'leg_r','Epinephrine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','Epinephrine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// Morphine
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV: FieldDressing {
					displayName = "Give Blood IV (1000ml)";
					condition = "[_player,_target,'leg_r','BloodIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','BloodIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV_500: BloodIV {
					displayName = "Give Blood IV (500ml)";
					condition = "[_player,_target,'leg_r','BloodIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','BloodIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV_250: BloodIV {
					displayName = "Give Blood IV (250ml)";
					condition = "[_player,_target,'leg_r','BloodIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','BloodIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV: BloodIV {
					displayName = "Give Plasma IV (1000ml)";
					condition = "[_player,_target,'leg_r','PlasmaIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','PlasmaIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV_500: PlasmaIV {
					displayName = "Give Plasma IV (500ml)";
					condition = "[_player,_target,'leg_r','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','PlasmaIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV_250: PlasmaIV {
					displayName = "Give Plasma IV (250ml)";
					condition = "[_player,_target,'leg_r','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','PlasmaIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV: BloodIV {
					displayName = "Give Saline IV (1000ml)";
					condition = "[_player,_target,'leg_r','SalineIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','SalineIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV_500: SalineIV {
					displayName = "Give Saline IV (500ml)";
					condition = "[_player,_target,'leg_r','SalineIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','SalineIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV_250: SalineIV {
					displayName = "Give Saline IV (250ml)";
					condition = "[_player,_target,'leg_r','SalineIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','SalineIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class RemoveTourniquet: Tourniquet {
					displayName = "Remove Tourniquet";
					condition = "[_player,_target,'leg_r','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','RemoveTourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// Tourniquet
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
			};
			class ACE_Weapon {
				displayName = "Weapon";
				position = "call ace_interaction_fnc_getWeaponPos";
				distance = 1.5;
				condition = "";
				statement = "";
				class ace_overheating_SwapBarrel {
					displayName = "Swap barrel";
					condition = "[_player,currentWeapon _target] call ace_overheating_fnc_canSwapBarrel";
					statement = "[_player,_target,currentWeapon _target] call ace_overheating_fnc_swapBarrelAssistant;";
					icon = "\z\ace\addons\overheating\UI\spare_barrel_ca.paa";
				};
				class ace_overheating_CheckTemperature {
					displayName = "Check weapon temperature";
					condition = "ace_overheating_enabled&& {switch (currentWeapon _target) do {case (''): {false}; case (primaryWeapon _target); case (handgunWeapon _target): {true}; default {false}}}";
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_player,_target,currentWeapon _target] call ace_overheating_fnc_checkTemperature;";
					icon = "\z\ace\addons\overheating\UI\temp_ca.paa";
				};
				class ace_reload_LinkBelt {
					displayName = "Link belt";
					distance = 2;
					condition = "[_player,_target] call ace_reload_fnc_canLinkBelt";
					statement = "[_player,_target] call ace_reload_fnc_startLinkingBelt";
				};
				class ace_reload_CheckAmmo {
					displayName = "Check Ammo";
					distance = 2;
					condition = "[_player,_target] call ace_reload_fnc_canCheckAmmo";
					statement = "[_player,_target] call ace_reload_fnc_checkAmmo";
				};
				class ace_rangecard_copyRangeCard {
					displayName = "Copy Range Card";
					distance = 2;
					condition = "_target call ace_rangecard_fnc_canCopy";
					statement = "_target call ace_rangecard_fnc_updateClassNames";
					icon = "\z\ace\addons\rangecard\UI\RangeCard_Icon.paa";
				};
			};
			class ACE_TapShoulderRight {
				displayName = "Tap Shoulder";
				selection = "rightshoulder";
				distance = 2;
				condition = "[_player,_target] call ace_interaction_fnc_canTapShoulder";
				statement = "[_player,_target,0] call ace_interaction_fnc_tapShoulder";
			};
			class ACE_TapShoulderLeft {
				displayName = "Tap Shoulder";
				selection = "leftshoulder";
				distance = 2;
				condition = "[_player,_target] call ace_interaction_fnc_canTapShoulder";
				statement = "[_player,_target,1] call ace_interaction_fnc_tapShoulder";
			};
			class ace_reloadlaunchers_ReloadLauncher {
				displayName = "Load launcher";
				selection = "launcher";
				distance = 4;
				condition = "";
				insertChildren = "_this call ace_reloadlaunchers_fnc_addMissileReloadActions";
			};
			class ACE_ApplyHandcuffs {
				displayName = "Take Prisoner";
				selection = "righthand";
				distance = 2;
				condition = "[_player,_target] call ace_captives_fnc_canApplyHandcuffs";
				statement = "[_player,_target] call ace_captives_fnc_doApplyHandcuffs";
				exceptions[] = {};
				icon = "\z\ace\addons\captives\UI\handcuff_ca.paa";
			};
			class ACE_Dogtag {
				displayName = "Dog Tag";
				condition = "[_player,_target] call ace_dogtags_fnc_canTakeDogtag";
				statement = "";
				showDisabled = 0;
				distance = 1.75;
				icon = "\z\ace\addons\dogtags\data\dogtag_icon_ca.paa";
				selection = "neck";
				class ACE_CheckDogtag {
					displayName = "Check";
					condition = "[_player,_target] call ace_dogtags_fnc_canCheckDogtag";
					statement = "[_player,_target] call ace_dogtags_fnc_checkDogtag";
					showDisabled = 0;
					priority = 3;
					icon = "\z\ace\addons\dogtags\data\dogtag_icon_ca.paa";
				};
				class ACE_TakeDogtag {
					displayName = "Take";
					condition = "[_player,_target] call ace_dogtags_fnc_canTakeDogtag";
					statement = "[_player,_target] call ace_dogtags_fnc_takeDogtag";
					showDisabled = 0;
					priority = 3;
					icon = "\z\ace\addons\dogtags\data\dogtag_icon_ca.paa";
				};
			};
		};
		maxGunElev = 80;
		// Man
		mapSize = 0.5;
		autocenter = 0;
		isMan = 1;
		impactEffectsBlood = "ImpactEffectsBlood";
		impactEffectsNoBlood = "ImpactPlastic";
		displayName = "Man";
		genericNames = "EnglishMen";
		aiBrainType = "DefaultSoldierBrain";
		audible = 0.05;
		formationX = 5;
		formationZ = 5;
		precision = 1;
		brakeDistance = 1;
		steerAheadSimul = 0.1;
		steerAheadPlan = 0.1;
		steerAheadSimulDiving = 0.5;
		steerAheadPlanDiving = 0.5;
		maxSpeed = 24;
		maxTurnAngularVelocity = 3;
		costTurnCoef = 0.025;
		lyingLimitSpeedHiding = 0.8;
		crouchProbabilityHiding = 0.8;
		lyingLimitSpeedCombat = 1.8;
		crouchProbabilityCombat = 0.4;
		crouchProbabilityEngage = 0.75;
		lyingLimitSpeedStealth = 2;
		irTarget = 0;
		canHideBodies = 0;
		canDeactivateMines = 0;
		unitInfoType = "RscUnitInfoSoldier";
		hideUnitInfo = 1;
		simulation = "soldier";
		class TalkTopics {};
		commanderCanSee = "31+32";
		respawnMagazines[] = {};
		respawnItems[] = {};
		class HeadLimits {
			initAngleX = 5;
			minAngleX = -40;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			minAngleZ = -45;
			maxAngleZ = 45;
			rotZRadius = 0.2;
		};
		microMimics = "Micro";
		magazines[] = {};
		model = "";
		backpack = "";
		glassesEnabled = 1;
		memoryPointPilot = "pilot";
		memoryPointHandGrenade = "granat";
		selectionPersonality = "osobnost";
		selectionPersonalityHL = "hl";
		selectionGlasses = "brejle";
		hitSound1[] = {"", 0.0562341, 1};
		hitSound2[] = {"", 0.0562341, 1};
		hitSound3[] = {"", 0.0562341, 1};
		hitSound4[] = {"", 0.0562341, 1};
		hitSound5[] = {"", 0.0562341, 1};
		hitSound6[] = {"", 0.0562341, 1};
		hitSound7[] = {"", 0.0562341, 1};
		hitSound8[] = {"", 0.0562341, 1};
		hitSound9[] = {"", 0.0562341, 1};
		hitSound10[] = {"", 0.0562341, 1};
		hitSound11[] = {"", 0.0562341, 1};
		hitSound12[] = {"", 0.0562341, 1};
		hitSound13[] = {"", 0.0562341, 1};
		hitSound14[] = {"", 0.0562341, 1};
		hitSound15[] = {"", 0.0562341, 1};
		hitSound16[] = {"", 0.0562341, 1};
		hitSound17[] = {"", 0.0562341, 1};
		hitSound18[] = {"", 0.0562341, 1};
		hitSound19[] = {"", 0.0562341, 1};
		hitSound20[] = {"", 0.0562341, 1};
		hitSounds[] = {"hitSound1", 0.05, "hitSound2", 0.05, "hitSound3", 0.05, "hitSound4", 0.05, "hitSound5", 0.05, "hitSound6", 0.05, "hitSound7", 0.05, "hitSound8", 0.05, "hitSound9", 0.05, "hitSound10", 0.05, "hitSound11", 0.05, "hitSound12", 0.05, "hitSound13", 0.05, "hitSound14", 0.05, "hitSound15", 0.05, "hitSound16", 0.05, "hitSound17", 0.05, "hitSound18", 0.05, "hitSound19", 0.05, "hitSound20", 0.05};
		emptySound[] = {"", 0, 1};
		additionalSound[] = {"", 1e-006, 1};
		class SoundBleeding {
			breath[] = {};
		};
		class HitDamage {};
		class Reflectors {};
		class MGunClouds{
			// WeaponCloudsMGun
			access = 0;
			cloudletGrowUp = 0.05;
			cloudletFadeIn = 0;
			cloudletFadeOut = 0.1;
			cloudletDuration = 0.05;
			cloudletAnimPeriod = 1;
			cloudletSize = 1;
			cloudletAlpha = 0.3;
			cloudletAccY = 0;
			cloudletMinYSpeed = -100;
			cloudletMaxYSpeed = 100;
			cloudletShape = "cloudletClouds";
			cloudletColor[] = {1, 1, 1, 0};
			timeToLive = 0;
			interval = 0.02;
			size = 0.3;
			sourceSize = 0.02;
			initT = 0;
			deltaT = 0;
			class Table {
				class T0 {
					maxT = 0;
					color[] = {1, 1, 1, 0};
				};
			};
		};
		// Man
		class GunClouds{
			cloudletGrowUp = 0.2;
			cloudletFadeIn = 0;
			cloudletFadeOut = 0.4;
			cloudletDuration = 0.2;
			cloudletAlpha = 1;
			cloudletAccY = 2;
			cloudletMinYSpeed = -10;
			cloudletMaxYSpeed = 10;
			interval = 0.02;
			size = 0.3;
			sourceSize = 0.015;
			// WeaponCloudsGun
			access = 0;
			cloudletAnimPeriod = 1;
			cloudletSize = 1;
			cloudletShape = "cloudletClouds";
			cloudletColor[] = {1, 1, 1, 0};
			timeToLive = 0;
			initT = 0;
			deltaT = 0;
			class Table {
				class T0 {
					maxT = 0;
					color[] = {1, 1, 1, 0};
				};
			};
		};
		class InventorySlots {};
		enableGPS = 0;
		characterID = -1;
		primaryAmmoCoef = 0.4;
		secondaryAmmoCoef = 0.2;
		handgunAmmoCoef = 0.1;
		allowedUniformSides[] = {};
		allowedHeadgearSides[] = {};
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_infantry_s"};
				speechPlural[] = {"veh_infantry_p"};
			};
		};
		breathingBubblesPoint = "BubblesEffect";
		breathingBubblesPointDir = "BubblesDir";
		breathingBubblesEffect = "ScubaEffect";
		breathingBubblesInteval = 10;
		rightDustEffects[] = {{"GdtGrassShort", "RDustEffectsMan"}, {"GdtGrassTall", "RDustEffectsMan"}, {"GdtRedDirt", "RDustEffectsManRed"}, {"GdtField", "RDustEffectsMan"}, {"GdtForest", "RDustEffectsMan"}, {"GdtVolcano", "RDustEffectsMan"}, {"GdtCliff", "RDustEffectsMan"}, {"GdtVolcanoBeach", "RDustEffectsMan"}, {"SurfRoadDirt_exp", "RDustEffectsManRed"}, {"SurfRoadConcrete_exp", "RDustEffectsMan"}, {"SurfRoadTarmac_exp", "RDustEffectsMan"}, {"GdtStratisConcrete", "RDustEffectsMan"}, {"GdtStratisBeach", "RDustEffectsMan"}, {"GdtStratisDirt", "RDustEffectsMan"}, {"GdtStratisSeabedCluttered", "RDustEffectsMan"}, {"GdtStratisSeabed", "RDustEffectsMan"}, {"GdtStratisDryGrass", "RDustEffectsMan"}, {"GdtStratisGreenGrass", "RDustEffectsMan"}, {"GdtStratisRocky", "RDustEffectsMan"}, {"GdtStratisThistles", "RDustEffectsMan"}, {"GdtConcrete", "RDustEffectsMan"}, {"GdtAsphalt", "RDustEffectsMan"}, {"GdtRubble", "RDustEffectsMan"}, {"GdtSoil", "RDustEffectsMan"}, {"GdtBeach", "RDustEffectsMan"}, {"GdtRock", "RDustEffectsMan"}, {"GdtDead", "RDustEffectsMan"}, {"Default", "RDustEffectsMan"}, {"GdtDesert", "RDustEffectsMan"}, {"GdtDesert1", "RDustEffectsMan"}, {"GdtDesert2", "RDustEffectsMan"}, {"GdtDirt", "RDustEffectsMan"}, {"GdtGrassGreen", "RDustEffectsMan"}, {"GdtGrassDry", "RDustEffectsMan"}, {"GdtGrassWild", "RDustEffectsMan"}, {"GdtWildField", "RDustEffectsMan"}, {"GdtWeed1", "RDustEffectsMan"}, {"GdtWeed2", "RDustEffectsMan"}, {"GdtThorn", "RDustEffectsMan"}, {"GdtStony", "RDustEffectsMan"}, {"GdtStonyGreen", "RDustEffectsMan"}, {"GdtStonyThistle", "RDustEffectsMan"}, {"GdtSeabedDeep", "RDustEffectsMan"}, {"GdtSeabed", "RDustEffectsMan"}, {"SurfRoadDirt", "RDustEffectsMan"}, {"SurfRoadConcrete", "RDustEffectsMan"}, {"SurfRoadTarmac", "RDustEffectsMan"}, {"SurfWood", "RDustEffectsMan"}, {"SurfMetal", "RDustEffectsMan"}, {"SurfRoofTin", "RDustEffectsMan"}, {"SurfRoofTiles", "RDustEffectsMan"}, {"SurfIntWood", "RDustEffectsMan"}, {"SurfIntConcrete", "RDustEffectsMan"}, {"SurfIntTiles", "RDustEffectsMan"}, {"SurfIntMetal", "RDustEffectsMan"}};
		leftDustEffects[] = {{"GdtGrassShort", "LDustEffectsMan"}, {"GdtGrassTall", "LDustEffectsMan"}, {"GdtRedDirt", "LDustEffectsManRed"}, {"GdtField", "LDustEffectsMan"}, {"GdtForest", "LDustEffectsMan"}, {"GdtVolcano", "LDustEffectsMan"}, {"GdtCliff", "LDustEffectsMan"}, {"GdtVolcanoBeach", "LDustEffectsMan"}, {"SurfRoadDirt_exp", "LDustEffectsManRed"}, {"SurfRoadConcrete_exp", "LDustEffectsMan"}, {"SurfRoadTarmac_exp", "LDustEffectsMan"}, {"GdtStratisConcrete", "LDustEffectsMan"}, {"GdtStratisBeach", "LDustEffectsMan"}, {"GdtStratisDirt", "LDustEffectsMan"}, {"GdtStratisSeabedCluttered", "LDustEffectsMan"}, {"GdtStratisSeabed", "LDustEffectsMan"}, {"GdtStratisDryGrass", "LDustEffectsMan"}, {"GdtStratisGreenGrass", "LDustEffectsMan"}, {"GdtStratisRocky", "LDustEffectsMan"}, {"GdtStratisThistles", "LDustEffectsMan"}, {"GdtConcrete", "LDustEffectsMan"}, {"GdtAsphalt", "LDustEffectsMan"}, {"GdtRubble", "LDustEffectsMan"}, {"GdtSoil", "LDustEffectsMan"}, {"GdtBeach", "LDustEffectsMan"}, {"GdtRock", "LDustEffectsMan"}, {"GdtDead", "LDustEffectsMan"}, {"Default", "LDustEffectsMan"}, {"GdtDesert", "LDustEffectsMan"}, {"GdtDesert1", "LDustEffectsMan"}, {"GdtDesert2", "LDustEffectsMan"}, {"GdtDirt", "LDustEffectsMan"}, {"GdtGrassGreen", "LDustEffectsMan"}, {"GdtGrassDry", "LDustEffectsMan"}, {"GdtGrassWild", "LDustEffectsMan"}, {"GdtWildField", "LDustEffectsMan"}, {"GdtWeed1", "LDustEffectsMan"}, {"GdtWeed2", "LDustEffectsMan"}, {"GdtThorn", "LDustEffectsMan"}, {"GdtStony", "LDustEffectsMan"}, {"GdtStonyGreen", "LDustEffectsMan"}, {"GdtStonyThistle", "LDustEffectsMan"}, {"GdtSeabedDeep", "LDustEffectsMan"}, {"GdtSeabed", "LDustEffectsMan"}, {"SurfRoadDirt", "LDustEffectsMan"}, {"SurfRoadConcrete", "LDustEffectsMan"}, {"SurfRoadTarmac", "LDustEffectsMan"}, {"SurfWood", "LDustEffectsMan"}, {"SurfMetal", "LDustEffectsMan"}, {"SurfRoofTin", "LDustEffectsMan"}, {"SurfRoofTiles", "LDustEffectsMan"}, {"SurfIntWood", "LDustEffectsMan"}, {"SurfIntConcrete", "LDustEffectsMan"}, {"SurfIntTiles", "LDustEffectsMan"}, {"SurfIntMetal", "LDustEffectsMan"}};
		textSingular = "infantry";
		textPlural = "infantry";
		nameSound = "veh_infantry_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Man.jpg";
		sensitivityEar = 0.125;
		sensitivity = 1.75;
		minFireTime = 5;
		keepHorizontalPlacement = 1;
		insideSoundCoef = 0.3;
		role = "Default";
		curatorInfoType = "RscDisplayAttributesMan";
		curatorInfoTypeEmpty = "RscDisplayAttributesMan";
		weight = 100;
		mFact = 1;
		tBody = 32;
		// Land
		fuelCapacity = 0;
		wheelDamageThreshold = 0.2;
		wheelDestroyThreshold = 0.99;
		wheelDamageRadiusCoef = 0.9;
		wheelDestroyRadiusCoef = 0.4;
		weaponsGroup1 = 1;
		weaponsGroup2 = "2 + 		4";
		weaponsGroup3 = "8 + 	16 + 	32";
		weaponsGroup4 = "64 + 		128";
		// AllVehicles
		class SquadTitles {
			name = "clan_sign";
			color[] = {0, 0, 0, 0.75};
		};
		memoryPointDriverOptics[] = {"driverview", "pilot"};
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		memoryPointsGetInCoDriver = "pos codriver";
		memoryPointsGetInCoDriverDir = "pos codriver dir";
		memoryPointsGetInDriverPrecise = "pos driver";
		memoryPointsGetInCargoPrecise[] = {"pos cargo"};
		memoryPointsLeftWaterEffect = "waterEffectL";
		memoryPointsRightWaterEffect = "waterEffectR";
		memoryPointTaskMarker = "";
		memoryPointTaskMarkerOffset[] = {0, 0, 0};
		selectionClan = "clan";
		selectionDashboard = "podsvit pristroju";
		selectionShowDamage = "poskozeni";
		selectionBackLights = "zadni svetlo";
		class NewTurret {
			body = "mainTurret";
			gun = "mainGun";
			animationSourceBody = "mainTurret";
			animationSourceGun = "mainGun";
			animationSourceHatch = "hatchGunner";
			animationSourceCamElev = "camElev";
			proxyType = "CPGunner";
			proxyIndex = 1;
			gunnerName = "Gunner";
			gunnerType = "";
			primaryGunner = 1;
			primaryObserver = 0;
			weapons[] = {};
			magazines[] = {};
			soundServo[] = {"", 0.00316228, 1};
			soundElevation[] = {"", 1, 1};
			minElev = -4;
			maxElev = 20;
			initElev = 0;
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			minOutElev = -4;
			maxOutElev = 20;
			initOutElev = 0;
			minOutTurn = -60;
			maxOutTurn = 60;
			initOutTurn = 0;
			maxHorizontalRotSpeed = 1.2;
			maxVerticalRotSpeed = 1.2;
			stabilizedInAxes = 3;
			primary = 1;
			hasGunner = 1;
			commanding = 1;
			gunnerGetInAction = "";
			gunnerGetOutAction = "";
			turretCanSee = 0;
			canUseScanners = 1;
			class ViewGunner{
				initAngleX = 5;
				minAngleX = -75;
				maxAngleX = 85;
				initAngleY = 0;
				minAngleY = -150;
				maxAngleY = 150;
				minFov = 0.25;
				maxFov = 1.25;
				initFov = 0.75;
				minMoveX = 0;
				maxMoveX = 0;
				minMoveY = 0;
				maxMoveY = 0;
				minMoveZ = 0;
				maxMoveZ = 0;
				continuous = 0;
			};
			// NewTurret
			class TurretSpec {
				showHeadPhones = 0;
			};
			gunnerOpticsModel = "";
			gunnerOpticsColor[] = {0, 0, 0, 1};
			gunnerForceOptics = 1;
			gunnerOpticsShowCursor = 0;
			turrentInfoType = "";
			gunnerOutOpticsModel = "";
			gunnerOutOpticsColor[] = {0, 0, 0, 1};
			gunnerOpticsEffect[] = {};
			gunnerOutOpticsEffect[] = {};
			memoryPointGunnerOutOptics = "";
			gunnerOutForceOptics = 0;
			gunnerOutOpticsShowCursor = 0;
			gunnerFireAlsoInInternalCamera = 1;
			gunnerOutFireAlsoInInternalCamera = 1;
			gunnerUsesPilotView = 0;
			castGunnerShadow = 0;
			viewGunnerShadow = 1;
			viewGunnerShadowDiff = 1;
			viewGunnerShadowAmb = 1;
			ejectDeadGunner = 0;
			hideWeaponsGunner = 1;
			canHideGunner = -1;
			forceHideGunner = 0;
			outGunnerMayFire = 0;
			inGunnerMayFire = 1;
			showHMD = 0;
			viewGunnerInExternal = 0;
			lockWhenDriverOut = 0;
			lockWhenVehicleSpeed = -1;
			gunnerCompartments = "Compartment1";
			LODTurnedIn = -1;
			LODTurnedOut = -1;
			startEngine = 1;
			memoryPointsGetInGunnerPrecise = "";
			missileBeg = "spice rakety";
			missileEnd = "konec rakety";
			armorLights = 0.4;
			class Reflectors {};
			aggregateReflectors[] = {};
			class GunFire{
				// WeaponFireGun
				access = 0;
				cloudletDuration = 0.2;
				cloudletAnimPeriod = 1;
				cloudletSize = 1;
				cloudletAlpha = 1;
				cloudletGrowUp = 0.2;
				cloudletFadeIn = 0.01;
				cloudletFadeOut = 0.5;
				cloudletAccY = 0;
				cloudletMinYSpeed = -100;
				cloudletMaxYSpeed = 100;
				cloudletShape = "cloudletFire";
				cloudletColor[] = {1, 1, 1, 0};
				interval = 0.01;
				size = 3;
				sourceSize = 0.5;
				timeToLive = 0;
				initT = 4500;
				deltaT = -3000;
				class Table {
					class T0 {
						maxT = 0;
						color[] = {0.82, 0.95, 0.93, 0};
					};
					class T1 {
						maxT = 200;
						color[] = {0.75, 0.77, 0.9, 0};
					};
					class T2 {
						maxT = 400;
						color[] = {0.56, 0.62, 0.67, 0};
					};
					class T3 {
						maxT = 600;
						color[] = {0.39, 0.46, 0.47, 0};
					};
					class T4 {
						maxT = 800;
						color[] = {0.24, 0.31, 0.31, 0};
					};
					class T5 {
						maxT = 1000;
						color[] = {0.23, 0.31, 0.29, 0};
					};
					class T6 {
						maxT = 1500;
						color[] = {0.21, 0.29, 0.27, 0};
					};
					class T7 {
						maxT = 2000;
						color[] = {0.19, 0.23, 0.21, 0};
					};
					class T8 {
						maxT = 2300;
						color[] = {0.22, 0.19, 0.1, 0};
					};
					class T9 {
						maxT = 2500;
						color[] = {0.35, 0.2, 0.02, 0};
					};
					class T10 {
						maxT = 2600;
						color[] = {0.62, 0.29, 0.03, 0};
					};
					class T11 {
						maxT = 2650;
						color[] = {0.59, 0.35, 0.05, 0};
					};
					class T12 {
						maxT = 2700;
						color[] = {0.75, 0.37, 0.03, 0};
					};
					class T13 {
						maxT = 2750;
						color[] = {0.88, 0.34, 0.03, 0};
					};
					class T14 {
						maxT = 2800;
						color[] = {0.91, 0.5, 0.17, 0};
					};
					class T15 {
						maxT = 2850;
						color[] = {1, 0.6, 0.2, 0};
					};
					class T16 {
						maxT = 2900;
						color[] = {1, 0.71, 0.3, 0};
					};
					class T17 {
						maxT = 2950;
						color[] = {0.98, 0.83, 0.41, 0};
					};
					class T18 {
						maxT = 3000;
						color[] = {0.98, 0.91, 0.54, 0};
					};
					class T19 {
						maxT = 3100;
						color[] = {0.98, 0.99, 0.6, 0};
					};
					class T20 {
						maxT = 3300;
						color[] = {0.96, 0.99, 0.72, 0};
					};
					class T21 {
						maxT = 3600;
						color[] = {1, 0.98, 0.91, 0};
					};
					class T22 {
						maxT = 4200;
						color[] = {1, 1, 1, 0};
					};
				};
			};
			class GunClouds{
				// WeaponCloudsGun
				access = 0;
				cloudletDuration = 0.3;
				cloudletAnimPeriod = 1;
				cloudletSize = 1;
				cloudletAlpha = 1;
				cloudletGrowUp = 1;
				cloudletFadeIn = 0.01;
				cloudletFadeOut = 1;
				cloudletAccY = 0.4;
				cloudletMinYSpeed = 0.2;
				cloudletMaxYSpeed = 0.8;
				cloudletShape = "cloudletClouds";
				cloudletColor[] = {1, 1, 1, 0};
				interval = 0.05;
				size = 3;
				sourceSize = 0.5;
				timeToLive = 0;
				initT = 0;
				deltaT = 0;
				class Table {
					class T0 {
						maxT = 0;
						color[] = {1, 1, 1, 0};
					};
				};
			};
			class MGunClouds{
				// WeaponCloudsMGun
				access = 0;
				cloudletGrowUp = 0.05;
				cloudletFadeIn = 0;
				cloudletFadeOut = 0.1;
				cloudletDuration = 0.05;
				cloudletAnimPeriod = 1;
				cloudletSize = 1;
				cloudletAlpha = 0.3;
				cloudletAccY = 0;
				cloudletMinYSpeed = -100;
				cloudletMaxYSpeed = 100;
				cloudletShape = "cloudletClouds";
				cloudletColor[] = {1, 1, 1, 0};
				timeToLive = 0;
				interval = 0.02;
				size = 0.3;
				sourceSize = 0.02;
				initT = 0;
				deltaT = 0;
				class Table {
					class T0 {
						maxT = 0;
						color[] = {1, 1, 1, 0};
					};
				};
			};
			// NewTurret
			class HitPoints {
				class HitTurret {
					armor = 0.8;
					material = 51;
					name = "turret";
					visual = "turret";
					passThrough = 1;
					explosionShielding = 1;
				};
				class HitGun {
					armor = 0.6;
					material = 52;
					name = "gun";
					visual = "gun";
					passThrough = 1;
					explosionShielding = 1;
				};
			};
			class Turrets {};
			class ViewOptics {
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.3;
				minFov = 0.07;
				maxFov = 0.35;
				minMoveX = 0;
				maxMoveX = 0;
				minMoveY = 0;
				maxMoveY = 0;
				minMoveZ = 0;
				maxMoveZ = 0;
			};
			forceNVG = 0;
			isCopilot = 0;
			canEject = 1;
			gunnerLeftHandAnimName = "";
			gunnerRightHandAnimName = "";
			gunnerLeftLegAnimName = "";
			gunnerRightLegAnimName = "";
			gunnerDoor = "";
			preciseGetInOut = 0;
			turretFollowFreeLook = 0;
			allowTabLock = 1;
			showAllTargets = 0;
			dontCreateAI = 0;
			disableSoundAttenuation = 0;
			slingLoadOperator = 0;
			playerPosition = 0;
			allowLauncherIn = 0;
			allowLauncherOut = 0;
			class TurnIn {
				turnOffset = 0;
			};
			class TurnOut: TurnIn {
				// TurnIn
				turnOffset = 0;
			};
			showCrewAim = 0;
			gunnerInAction = "ManActTestDriver";
			gunnerAction = "ManActTestDriver";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			memoryPointGunnerOptics = "gunnerview";
			memoryPointsGetInGunner = "pos gunner";
			memoryPointsGetInGunnerDir = "pos gunner dir";
			memoryPointGun = "kulas";
			selectionFireAnim = "zasleh";
			ace_fcs_Enabled = 0;
			ace_fcs_MinDistance = 200;
			ace_fcs_MaxDistance = 5500;
			ace_fcs_DistanceInterval = 5;
		};
		class ViewCargo {
			initAngleX = 5;
			minAngleX = -75;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class ViewOptics {
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class PilotSpec {
			showHeadPhones = 0;
		};
		class CargoSpec {
			class Cargo1 {
				showHeadPhones = 0;
			};
		};
		class MFD {};
		class Sounds {
			class Engine {
				sound = "soundEngine";
				frequency = "rpm";
				volume = "rpm + speed";
			};
			class Movement {
				sound = "soundEnviron";
				frequency = "speed";
				volume = "speed";
			};
		};
		class SoundEvents {};
		tracksSpeed = 0;
		selectionLeftOffset = "";
		selectionRightOffset = "";
		class RenderTargets {};
		cargoProxyIndexes[] = {};
		driverLeftHandAnimName = "";
		driverRightHandAnimName = "";
		driverLeftLegAnimName = "";
		driverRightLegAnimName = "";
		driverDoor = "";
		cargoDoors[] = {};
		hasTerminal = 0;
		getInOutOnProxy = 0;
		preciseGetInOut = 0;
		cargoPreciseGetInOut[] = {0};
		availableForSupportTypes[] = {};
		waterPPInVehicle = 1;
		showCrewAim = 0;
		class CargoTurret{
			class ViewGunner{
				// ViewCargo
				initAngleX = 5;
				minAngleX = -75;
				maxAngleX = 85;
				initAngleY = 0;
				minAngleY = -150;
				maxAngleY = 150;
				minFov = 0.25;
				maxFov = 1.25;
				initFov = 0.75;
				minMoveX = 0;
				maxMoveX = 0;
				minMoveY = 0;
				maxMoveY = 0;
				minMoveZ = 0;
				maxMoveZ = 0;
			};
			animationSourceBody = "";
			animationSourceGun = "";
			body = "";
			canEject = 1;
			commanding = 0;
			dontCreateAI = 1;
			gun = "";
			gunnerGetInAction = "GetInLow";
			gunnerGetOutAction = "GetOutLow";
			gunnerName = "cargo";
			hideWeaponsGunner = 0;
			isCopilot = 0;
			memoryPointsGetInGunner = "pos cargo";
			memoryPointsGetInGunnerDir = "pos cargo dir";
			primaryGunner = 0;
			proxyType = "CPCargo";
			startEngine = 0;
			turretFollowFreeLook = 0;
			viewGunnerInExternal = 1;
			disableSoundAttenuation = 1;
			outGunnerMayFire = 1;
			isPersonTurret = 1;
			showAsCargo = 1;
			maxElev = 45;
			minElev = -45;
			maxTurn = 95;
			minTurn = -95;
			// NewTurret
			animationSourceHatch = "hatchGunner";
			animationSourceCamElev = "camElev";
			proxyIndex = 1;
			gunnerType = "";
			primaryObserver = 0;
			weapons[] = {};
			magazines[] = {};
			soundServo[] = {"", 0.00316228, 1};
			soundElevation[] = {"", 1, 1};
			initElev = 0;
			initTurn = 0;
			minOutElev = -4;
			maxOutElev = 20;
			initOutElev = 0;
			minOutTurn = -60;
			maxOutTurn = 60;
			initOutTurn = 0;
			maxHorizontalRotSpeed = 1.2;
			maxVerticalRotSpeed = 1.2;
			stabilizedInAxes = 3;
			primary = 1;
			hasGunner = 1;
			turretCanSee = 0;
			canUseScanners = 1;
			class TurretSpec {
				showHeadPhones = 0;
			};
			gunnerOpticsModel = "";
			gunnerOpticsColor[] = {0, 0, 0, 1};
			gunnerForceOptics = 1;
			gunnerOpticsShowCursor = 0;
			turrentInfoType = "";
			gunnerOutOpticsModel = "";
			gunnerOutOpticsColor[] = {0, 0, 0, 1};
			gunnerOpticsEffect[] = {};
			gunnerOutOpticsEffect[] = {};
			memoryPointGunnerOutOptics = "";
			gunnerOutForceOptics = 0;
			gunnerOutOpticsShowCursor = 0;
			gunnerFireAlsoInInternalCamera = 1;
			gunnerOutFireAlsoInInternalCamera = 1;
			gunnerUsesPilotView = 0;
			castGunnerShadow = 0;
			viewGunnerShadow = 1;
			viewGunnerShadowDiff = 1;
			viewGunnerShadowAmb = 1;
			ejectDeadGunner = 0;
			canHideGunner = -1;
			forceHideGunner = 0;
			inGunnerMayFire = 1;
			showHMD = 0;
			lockWhenDriverOut = 0;
			lockWhenVehicleSpeed = -1;
			gunnerCompartments = "Compartment1";
			LODTurnedIn = -1;
			LODTurnedOut = -1;
			memoryPointsGetInGunnerPrecise = "";
			missileBeg = "spice rakety";
			missileEnd = "konec rakety";
			armorLights = 0.4;
			class Reflectors {};
			aggregateReflectors[] = {};
			class GunFire{
				// WeaponFireGun
				access = 0;
				cloudletDuration = 0.2;
				cloudletAnimPeriod = 1;
				cloudletSize = 1;
				cloudletAlpha = 1;
				cloudletGrowUp = 0.2;
				cloudletFadeIn = 0.01;
				cloudletFadeOut = 0.5;
				cloudletAccY = 0;
				cloudletMinYSpeed = -100;
				cloudletMaxYSpeed = 100;
				cloudletShape = "cloudletFire";
				cloudletColor[] = {1, 1, 1, 0};
				interval = 0.01;
				size = 3;
				sourceSize = 0.5;
				timeToLive = 0;
				initT = 4500;
				deltaT = -3000;
				class Table {
					class T0 {
						maxT = 0;
						color[] = {0.82, 0.95, 0.93, 0};
					};
					class T1 {
						maxT = 200;
						color[] = {0.75, 0.77, 0.9, 0};
					};
					class T2 {
						maxT = 400;
						color[] = {0.56, 0.62, 0.67, 0};
					};
					class T3 {
						maxT = 600;
						color[] = {0.39, 0.46, 0.47, 0};
					};
					class T4 {
						maxT = 800;
						color[] = {0.24, 0.31, 0.31, 0};
					};
					class T5 {
						maxT = 1000;
						color[] = {0.23, 0.31, 0.29, 0};
					};
					class T6 {
						maxT = 1500;
						color[] = {0.21, 0.29, 0.27, 0};
					};
					class T7 {
						maxT = 2000;
						color[] = {0.19, 0.23, 0.21, 0};
					};
					class T8 {
						maxT = 2300;
						color[] = {0.22, 0.19, 0.1, 0};
					};
					class T9 {
						maxT = 2500;
						color[] = {0.35, 0.2, 0.02, 0};
					};
					class T10 {
						maxT = 2600;
						color[] = {0.62, 0.29, 0.03, 0};
					};
					class T11 {
						maxT = 2650;
						color[] = {0.59, 0.35, 0.05, 0};
					};
					class T12 {
						maxT = 2700;
						color[] = {0.75, 0.37, 0.03, 0};
					};
					class T13 {
						maxT = 2750;
						color[] = {0.88, 0.34, 0.03, 0};
					};
					class T14 {
						maxT = 2800;
						color[] = {0.91, 0.5, 0.17, 0};
					};
					class T15 {
						maxT = 2850;
						color[] = {1, 0.6, 0.2, 0};
					};
					class T16 {
						maxT = 2900;
						color[] = {1, 0.71, 0.3, 0};
					};
					class T17 {
						maxT = 2950;
						color[] = {0.98, 0.83, 0.41, 0};
					};
					class T18 {
						maxT = 3000;
						color[] = {0.98, 0.91, 0.54, 0};
					};
					class T19 {
						maxT = 3100;
						color[] = {0.98, 0.99, 0.6, 0};
					};
					class T20 {
						maxT = 3300;
						color[] = {0.96, 0.99, 0.72, 0};
					};
					class T21 {
						maxT = 3600;
						color[] = {1, 0.98, 0.91, 0};
					};
					class T22 {
						maxT = 4200;
						color[] = {1, 1, 1, 0};
					};
				};
			};
			class GunClouds{
				// WeaponCloudsGun
				access = 0;
				cloudletDuration = 0.3;
				cloudletAnimPeriod = 1;
				cloudletSize = 1;
				cloudletAlpha = 1;
				cloudletGrowUp = 1;
				cloudletFadeIn = 0.01;
				cloudletFadeOut = 1;
				cloudletAccY = 0.4;
				cloudletMinYSpeed = 0.2;
				cloudletMaxYSpeed = 0.8;
				cloudletShape = "cloudletClouds";
				cloudletColor[] = {1, 1, 1, 0};
				interval = 0.05;
				size = 3;
				sourceSize = 0.5;
				timeToLive = 0;
				initT = 0;
				deltaT = 0;
				class Table {
					class T0 {
						maxT = 0;
						color[] = {1, 1, 1, 0};
					};
				};
			};
			class MGunClouds{
				// WeaponCloudsMGun
				access = 0;
				cloudletGrowUp = 0.05;
				cloudletFadeIn = 0;
				cloudletFadeOut = 0.1;
				cloudletDuration = 0.05;
				cloudletAnimPeriod = 1;
				cloudletSize = 1;
				cloudletAlpha = 0.3;
				cloudletAccY = 0;
				cloudletMinYSpeed = -100;
				cloudletMaxYSpeed = 100;
				cloudletShape = "cloudletClouds";
				cloudletColor[] = {1, 1, 1, 0};
				timeToLive = 0;
				interval = 0.02;
				size = 0.3;
				sourceSize = 0.02;
				initT = 0;
				deltaT = 0;
				class Table {
					class T0 {
						maxT = 0;
						color[] = {1, 1, 1, 0};
					};
				};
			};
			// NewTurret
			class HitPoints {
				class HitTurret {
					armor = 0.8;
					material = 51;
					name = "turret";
					visual = "turret";
					passThrough = 1;
					explosionShielding = 1;
				};
				class HitGun {
					armor = 0.6;
					material = 52;
					name = "gun";
					visual = "gun";
					passThrough = 1;
					explosionShielding = 1;
				};
			};
			class Turrets {};
			class ViewOptics {
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.3;
				minFov = 0.07;
				maxFov = 0.35;
				minMoveX = 0;
				maxMoveX = 0;
				minMoveY = 0;
				maxMoveY = 0;
				minMoveZ = 0;
				maxMoveZ = 0;
			};
			forceNVG = 0;
			gunnerLeftHandAnimName = "";
			gunnerRightHandAnimName = "";
			gunnerLeftLegAnimName = "";
			gunnerRightLegAnimName = "";
			gunnerDoor = "";
			preciseGetInOut = 0;
			allowTabLock = 1;
			showAllTargets = 0;
			slingLoadOperator = 0;
			playerPosition = 0;
			allowLauncherIn = 0;
			allowLauncherOut = 0;
			class TurnIn {
				turnOffset = 0;
			};
			class TurnOut: TurnIn {
				// TurnIn
				turnOffset = 0;
			};
			showCrewAim = 0;
			gunnerInAction = "ManActTestDriver";
			gunnerAction = "ManActTestDriver";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			memoryPointGunnerOptics = "gunnerview";
			memoryPointGun = "kulas";
			selectionFireAnim = "zasleh";
			ace_fcs_Enabled = 0;
			ace_fcs_MinDistance = 200;
			ace_fcs_MaxDistance = 5500;
			ace_fcs_DistanceInterval = 5;
		};
		impactEffectSpeedLimit = 8;
		ace_refuel_flowRate = 1;
		htMin = 60;
		htMax = 1800;
		afMax = 70;
		mfMax = 50;
		// All
		access = 0;
		scope = 0;
		reversed = 1;
		animated = 1;
		shadow = 1;
		featureSize = 0;
		speechSingular[] = {};
		speechPlural[] = {};
		maxDetectRange = 20;
		detectSkill = 20;
		mineAlertIconRange = 200;
		killFriendlyExpCoef = 1;
		spotableDarkNightLightsOff = 0.001;
		spotableNightLightsOff = 0.02;
		spotableNightLightsOn = 4;
		accuracyDarkNightLightsOff = 0.001;
		accuracyNightLightsOff = 0.006;
		accuracyNightLightsOn = 0.1;
		attenuationEffectType = "";
		outsideSoundFilter = 0;
		occludeSoundsWhenIn = 0.316228;
		obstructSoundsWhenIn = 0.562341;
		obstructSoundLFRatio = 0;
		occludeSoundLFRatio = 0.25;
		unloadInCombat = 0;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 60;
		slowSpeedForwardCoef = 0.3;
		normalSpeedForwardCoef = 0.85;
		epeImpulseDamageCoef = 30;
		gunnerHasFlares = 1;
		enableManualFire = 1;
		portrait = "";
		ghostPreview = "";
		destrType = "DestructDefault";
		armorLights = 0.4;
		crewVulnerable = 1;
		damageResistance = 0.004;
		crewCrashProtection = 1;
		replaceDamaged = "";
		replaceDamagedLimit = 0.9;
		replaceDamagedHitpoints[] = {};
		keepInEPESceneAfterDeath = 0;
		fuelConsumptionRate = 0.01;
		groupCameraPosition[] = {0, 5, -30};
		cameraSmoothSpeed = 5;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1;
		indirectHitEnemyCoefAI = 10;
		indirectHitFriendlyCoefAI = -20;
		indirectHitCivilianCoefAI = -20;
		indirectHitUnknownCoefAI = -0.5;
		formationTime = 5;
		alwaysTarget = 0;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		irScanGround = 1;
		laserTarget = 0;
		laserScanner = 0;
		nvTarget = 0;
		nvScanner = 0;
		artilleryTarget = 0;
		artilleryScanner = 0;
		canUseScanners = 1;
		preferRoads = 0;
		unitInfoTypeLite = 0;
		nightVision = 0;
		gunnerCanSee = "4+8+16";
		driverCanSee = "2+8+16";
		radarType = 0;
		limitedSpeedCoef = 0.22;
		secondaryExplosion = -1;
		hasDriver = 1;
		driverForceOptics = 0;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		getInRadius = 2.5;
		memoryPointSupply = "doplnovani";
		supplyRadius = -1;
		enableWatch = 0;
		enableRadio = 0;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		usePreciseGetInAction = 0;
		allowTabLock = 1;
		showAllTargets = 0;
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		wheelCircumference = 1;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.5;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterAngularDampingCoef = 0;
		showNVGDriver = 0;
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGCargo[] = {0};
		soundAttenuationCargo[] = {1};
		countsForScoreboard = 1;
		hullDamageCauseExplosion = 0;
		class MarkerLights {};
		class NVGMarkers {};
		class NVGMarker {
			diffuse[] = {1, 1, 1, 1};
			ambient[] = {1, 1, 1, 1};
			brightness = 1;
			blinking = 0;
			onlyInNvg = 0;
		};
		class Turrets {};
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		isbackpack = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons {};
		class TransportMagazines {};
		attendant = 0;
		engineer = 0;
		uavHacker = 0;
		soundEngine[] = {"", 1, 1};
		soundEnviron[] = {"", 1, 1};
		soundCrash[] = {"", 0.316228, 1};
		soundLandCrash[] = {"", 1, 1};
		soundWaterCrash[] = {"", 0.177828, 1};
		soundGetIn[] = {"", 0.000316228, 1};
		soundGetOut[] = {"", 0.000316228, 1};
		soundServo[] = {"", 0.00316228, 0.5};
		soundElevation[] = {"", 1, 0.5};
		sounddamage[] = {"", 1, 1};
		soundEngineOnInt[] = {"", 1, 1};
		soundEngineOffInt[] = {"", 1, 1};
		soundEngineOnExt[] = {"", 1, 1};
		soundEngineOffExt[] = {"", 1, 1};
		soundGearUp[] = {"", 1, 1};
		soundGearDown[] = {"", 1, 1};
		soundFlapsUp[] = {"", 1, 1};
		soundFlapsDown[] = {"", 1, 1};
		soundCrashes[] = {"soundCrash", 1};
		soundLandCrashes[] = {"soundLandCrash", 1};
		soundWaterCrashes[] = {"soundWaterCrash", 1};
		soundWoodCrash[] = {"emptySound", 0};
		soundBushCrash[] = {"emptySound", 0};
		soundBuildingCrash[] = {"emptySound", 0};
		soundArmorCrash[] = {"emptySound", 0};
		soundLocked[] = {"", 1, 1};
		soundIncommingMissile[] = {"", 1, 1};
		soundDammage[] = {"", 1, 1};
		typicalCargo[] = {};
		aggregateReflectors[] = {};
		getInAction = "";
		getOutAction = "";
		driverAction = "";
		driverInAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] = {};
		cargoIsCoDriver[] = {0};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		driverOpticsModel = "";
		driverOpticsEffect[] = {};
		driverOpticsColor[] = {1, 1, 1, 1};
		hideProxyInCombat = 0;
		forceHideDriver = 0;
		canHideDriver = -1;
		castDriverShadow = 0;
		castCargoShadow = 0;
		viewDriverShadow = 1;
		viewDriverShadowDiff = 1;
		viewDriverShadowAmb = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		crew = "Civilian";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		hiddenUnderwaterSelections[] = {};
		shownUnderWaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		class FxExplo {
			access = 1;
		};
		class AnimationSources {};
		selectionFireAnim = "";
		class GunFire{
			// WeaponFireGun
			access = 0;
			cloudletDuration = 0.2;
			cloudletAnimPeriod = 1;
			cloudletSize = 1;
			cloudletAlpha = 1;
			cloudletGrowUp = 0.2;
			cloudletFadeIn = 0.01;
			cloudletFadeOut = 0.5;
			cloudletAccY = 0;
			cloudletMinYSpeed = -100;
			cloudletMaxYSpeed = 100;
			cloudletShape = "cloudletFire";
			cloudletColor[] = {1, 1, 1, 0};
			interval = 0.01;
			size = 3;
			sourceSize = 0.5;
			timeToLive = 0;
			initT = 4500;
			deltaT = -3000;
			class Table {
				class T0 {
					maxT = 0;
					color[] = {0.82, 0.95, 0.93, 0};
				};
				class T1 {
					maxT = 200;
					color[] = {0.75, 0.77, 0.9, 0};
				};
				class T2 {
					maxT = 400;
					color[] = {0.56, 0.62, 0.67, 0};
				};
				class T3 {
					maxT = 600;
					color[] = {0.39, 0.46, 0.47, 0};
				};
				class T4 {
					maxT = 800;
					color[] = {0.24, 0.31, 0.31, 0};
				};
				class T5 {
					maxT = 1000;
					color[] = {0.23, 0.31, 0.29, 0};
				};
				class T6 {
					maxT = 1500;
					color[] = {0.21, 0.29, 0.27, 0};
				};
				class T7 {
					maxT = 2000;
					color[] = {0.19, 0.23, 0.21, 0};
				};
				class T8 {
					maxT = 2300;
					color[] = {0.22, 0.19, 0.1, 0};
				};
				class T9 {
					maxT = 2500;
					color[] = {0.35, 0.2, 0.02, 0};
				};
				class T10 {
					maxT = 2600;
					color[] = {0.62, 0.29, 0.03, 0};
				};
				class T11 {
					maxT = 2650;
					color[] = {0.59, 0.35, 0.05, 0};
				};
				class T12 {
					maxT = 2700;
					color[] = {0.75, 0.37, 0.03, 0};
				};
				class T13 {
					maxT = 2750;
					color[] = {0.88, 0.34, 0.03, 0};
				};
				class T14 {
					maxT = 2800;
					color[] = {0.91, 0.5, 0.17, 0};
				};
				class T15 {
					maxT = 2850;
					color[] = {1, 0.6, 0.2, 0};
				};
				class T16 {
					maxT = 2900;
					color[] = {1, 0.71, 0.3, 0};
				};
				class T17 {
					maxT = 2950;
					color[] = {0.98, 0.83, 0.41, 0};
				};
				class T18 {
					maxT = 3000;
					color[] = {0.98, 0.91, 0.54, 0};
				};
				class T19 {
					maxT = 3100;
					color[] = {0.98, 0.99, 0.6, 0};
				};
				class T20 {
					maxT = 3300;
					color[] = {0.96, 0.99, 0.72, 0};
				};
				class T21 {
					maxT = 3600;
					color[] = {1, 0.98, 0.91, 0};
				};
				class T22 {
					maxT = 4200;
					color[] = {1, 1, 1, 0};
				};
			};
		};
		class Damage {
			tex[] = {};
			mat[] = {};
		};
		selectionDamage = "zbytek";
		HeadAimDown = 0;
		class DestructionEffects {
			class Light1 {
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "destructionEffect1";
				intensity = 0.001;
				interval = 1;
				lifeTime = 3;
			};
			class Smoke1 {
				simulation = "particles";
				type = "ObjectDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.5;
			};
			class Fire1 {
				simulation = "particles";
				type = "ObjectDestructionFire1";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Sparks1 {
				simulation = "particles";
				type = "ObjectDestructionSparks";
				position = "destructionEffect1";
				intensity = 0;
				interval = 1;
				lifeTime = 0;
			};
			class Sound {
				simulation = "sound";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
				type = "Fire";
			};
			class Light2 {
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "destructionEffect2";
				intensity = 0.001;
				interval = 1;
				lifeTime = 3;
			};
			class Fire2 {
				simulation = "particles";
				type = "ObjectDestructionFire2";
				position = "destructionEffect2";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Smoke1_2 {
				simulation = "particles";
				type = "ObjectDestructionSmoke1_2";
				position = "destructionEffect2";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.5;
			};
		};
		cargoCanEject = 1;
		driverCanEject = 1;
		fireResistance = 10;
		airCapacity = 10;
		waterResistance = 10;
		waterDamageEngine = 0.2;
		maxFordingDepth = 1;
		damageTexDelay = 0;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 2;
		windSockExist = 0;
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
		numberPhysicalWheels = 0;
		damageHalf[] = {};
		damageFull[] = {};
		class camShakeGForce {
			power = 1;
			frequency = 20;
			distance = 0;
			minSpeed = 1;
			duration = 3;
		};
		minGForce = 0.2;
		maxGForce = 2;
		gForceShakeAttenuation = 0.5;
		class camShakeDamage {
			power = 0.5;
			frequency = 60;
			distance = -1;
			minSpeed = 1;
			attenuation = 0.5;
			duration = 3;
		};
		insideDetectCoef = 0.05;
		features = "";
		SLX_XEH_DISABLED = 0;
		ACE_NightVision_grain = 0.75;
		ACE_NightVision_blur = 0.055;
	};
	
	class RyanZombieCivilian_F: CAManBase 
	{
		author = "Ryan";
		side = 2;
		threat[] = {1, 0.5, 0.1};
		icon = "\Ryanzombies\zombie1.paa";
		faction = "Ryanzombiesfaction";
		vehicleClass = "Ryanzombiesfast";
		editorSubcategory = "Ryanzombiesfast";
		moves = "CfgRyanZombiesMovesMaleSdr";
		cost = 80000;
		minHeadTurnAI = -25;
		maxHeadTurnAI = 25;
		fsmFormation = "";
		fsmDanger = "";
		accuracy = 2;
		camouflage = 2;
		oxygenCapacity = 1e+006;
		class EventHandlers {
			class CBA_Extended_EventHandlers {
				dummy = 1;
			};
			class Ryanzombies {
				init = "(_this select 0) setVariable ['cba_xeh_isprocessed', true]; if !(isnil 'ryanzombiesstartinganim') then {(_this select 0) switchmove 'AmovPercMstpSnonWnonDnon_SaluteOut';}; _this execVM '\eXpoch_multifix\zombie.sqf'";
			};
		};
		identityTypes[] = {"LanguageGRE_F", "Head_Greek", "G_CIVIL_male"};
		class HitPoints {
			class HitFace {
				armor = 2;
				passThrough = 0.5;
				material = -1;
				name = "face_hub";
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck {
				armor = 5;
				passThrough = 0.5;
				material = -1;
				name = "neck";
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			// HitPoints
			class HitHead {
				armor = 2;
				passThrough = 0.5;
				material = -1;
				name = "head";
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			// HitPoints
			class HitPelvis {
				armor = 20;
				passThrough = 0.25;
				material = -1;
				name = "pelvis";
				radius = 0.2;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitAbdomen {
				armor = 20;
				passThrough = 0.5;
				material = -1;
				name = "spine1";
				radius = 0.15;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			// HitPoints
			class HitDiaphragm {
				armor = 15;
				passThrough = 0.5;
				material = -1;
				name = "spine2";
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			// HitPoints
			class HitChest {
				armor = 15;
				passThrough = 0.5;
				material = -1;
				name = "spine3";
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			// HitPoints
			class HitBody {
				armor = 1000;
				passThrough = 0.5;
				material = -1;
				name = "body";
				radius = 0.16;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			// HitPoints
			class HitArms {
				armor = 20;
				passThrough = 1;
				material = -1;
				name = "arms";
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands {
				armor = 25;
				passThrough = 1;
				material = -1;
				name = "hands";
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			// HitPoints
			class HitLegs {
				armor = 20;
				passThrough = 1;
				material = -1;
				name = "legs";
				radius = 0.12;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitLeftArm {
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm {
				name = "hand_r";
				// HitLeftArm
				armor = 1;
				material = -1;
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitLeftLeg {
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg {
				name = "leg_r";
				// HitLeftLeg
				armor = 1;
				material = -1;
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
		};
		armor = 8;
		armorStructural = 20;
		explosionShielding = 0.1;
		model = "\A3\Characters_F\Civil\c_citizen1";
		class Wounds {
			tex[] = {};
			mat[] = {"A3\Characters_F\Civil\Data\c_cloth1.rvmat", "A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth2.rvmat", "A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth3.rvmat", "A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth4.rvmat", "A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat", "A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat", "A3\characters_f\civil\data\c_poloshirt.rvmat", "A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat", "A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat", "A3\characters_f\common\data\coveralls.rvmat", "A3\Characters_F\Common\Data\coveralls_injury.rvmat", "A3\Characters_F\Common\Data\coveralls_injury.rvmat", "A3\Characters_F\Civil\Data\hunter.rvmat", "A3\Characters_F\Civil\Data\hunter_injury.rvmat", "A3\Characters_F\Civil\Data\hunter_injury.rvmat", "A3\Characters_F\Civil\Data\c_poloshirtpants.rvmat", "A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat", "A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat", "A3\Characters_F\Civil\Data\priest.rvmat", "A3\Characters_F\Civil\Data\priest_injury.rvmat", "A3\Characters_F\Civil\Data\priest_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		weapons[] = {"Throw", "Put"};
		respawnWeapons[] = {"Throw", "Put"};
		ACE_GForceCoef = 1;
		class ACE_SelfActions {
			class ACE_Equipment {
				class ace_huntir_open {
					displayName = "Activate HuntIR monitor";
					condition = "[ACE_player,'ACE_HuntIR_monitor'] call ace_common_fnc_hasItem";
					statement = "call ace_huntir_fnc_huntir";
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\huntir\UI\w_huntir_monitor_ca.paa";
					exceptions[] = {};
				};
				displayName = "Equipment";
				condition = 1;
				exceptions[] = {"isNotInside", "notOnMap", "isNotSitting"};
				statement = "";
				showDisabled = 1;
				priority = 4.5;
				icon = "";
				class ace_microdagr_configure {
					displayName = "Configure MicroDAGR";
					condition = "([2] call ace_microdagr_fnc_canShow) && {ace_microdagr_currentShowMode!= 2}";
					statement = "[2] call ace_microdagr_fnc_openDisplay";
					icon = "\z\ace\addons\microdagr\UI\icon_microDAGR.paa";
					exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
					class ace_microdagr_show {
						displayName = "Show MicoDAGR";
						condition = "([1] call ace_microdagr_fnc_canShow) && {ace_microdagr_currentShowMode!= 1}";
						statement = "[1] call ace_microdagr_fnc_openDisplay";
						icon = "\z\ace\addons\microdagr\UI\icon_microDAGR.paa";
						exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
					};
					class ace_microdagr_close {
						displayName = "Close MicroDAGR";
						condition = "ace_microdagr_currentShowMode!= 0";
						statement = "[0] call ace_microdagr_fnc_openDisplay";
						icon = "\z\ace\addons\microdagr\UI\icon_microDAGR.paa";
						exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
					};
				};
				class ace_mk6mortar_rangetable {
					displayName = "Open 82mm Rangetable";
					condition = "_this call ace_mk6mortar_fnc_rangeTableCanUse";
					statement = "_this call ace_mk6mortar_fnc_rangeTableOpen";
					priority = 0;
					icon = "\z\ace\addons\mk6mortar\UI\icon_rangeTable.paa";
					exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
				};
				class ace_overheating_UnJam {
					displayName = "Clear jam";
					condition = "ace_overheating_enabled&& {[_player] call ace_overheating_fnc_canUnjam}";
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_player,currentMuzzle _player] call ace_overheating_fnc_clearJam;";
					showDisabled = 0;
					priority = 4;
					icon = "\z\ace\addons\overheating\UI\unjam_ca.paa";
				};
				class ace_overheating_SwapBarrel {
					displayName = "Swap barrel";
					condition = "[_player,currentWeapon _player] call ace_overheating_fnc_canSwapBarrel";
					statement = "[_player,_player,currentWeapon _player] call ace_overheating_fnc_swapBarrel;";
					showDisabled = 0;
					priority = 3;
					icon = "\z\ace\addons\overheating\UI\spare_barrel_ca.paa";
				};
				class ace_overheating_CheckTemperature {
					displayName = "Check weapon temperature";
					condition = "ace_overheating_enabled&& {switch (currentWeapon _player) do {case (''): {false}; case (primaryWeapon _player); case (handgunWeapon _player): {true}; default {false}}}";
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_player,_player,currentWeapon _player] call ace_overheating_fnc_checkTemperature;";
					showDisabled = 0;
					priority = 2.9;
					icon = "\z\ace\addons\overheating\UI\temp_ca.paa";
				};
				class ace_overheating_CheckTemperatureSpareBarrels {
					displayName = "Check spare barrels temperatures";
					condition = "(_player) call ace_overheating_fnc_canCheckSpareBarrelsTemperatures";
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_player] call ace_overheating_fnc_checkSpareBarrelsTemperatures;";
					showDisabled = 0;
					priority = 2.8;
					icon = "\z\ace\addons\overheating\UI\temp_ca.paa";
				};
				class ace_scopes_adjustZero {
					displayName = "Set zero adjustment";
					condition = "[ACE_player] call ace_scopes_fnc_canAdjustZero";
					statement = "[ACE_player] call ace_scopes_fnc_adjustZero";
					showDisabled = 0;
					priority = 0.2;
					exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
				};
				class ace_spottingscope_place {
					displayName = "Place Spotting Scope";
					condition = "[_player,'ACE_SpottingScope'] call ace_common_fnc_hasItem";
					statement = "[_player,'ACE_SpottingScope'] call ace_spottingscope_fnc_place";
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\spottingscope\UI\w_spottingscope_ca.paa";
				};
				class ACE_TacticalLadders {
					displayName = "Deploy ladder";
					condition = "backpack _player == 'ACE_TacticalLadder_Pack'";
					statement = "[_player] call ace_tacticalladder_fnc_deployTL";
					exceptions[] = {};
					showDisabled = 1;
					priority = 4;
				};
				class ace_trenches_digEnvelopeSmall {
					displayName = "Dig Small Trench";
					condition = "_player call ace_trenches_fnc_canDigTrench";
					statement = "[{_this call ace_trenches_fnc_placeTrench},[_this select 0,'ACE_envelope_small']] call CBA_fnc_execNextFrame";
					exceptions[] = {};
					showDisabled = 0;
					priority = 4;
				};
				class ace_trenches_digEnvelopeBig {
					displayName = "Dig Big Trench";
					condition = "_player call ace_trenches_fnc_canDigTrench";
					statement = "[{_this call ace_trenches_fnc_placeTrench},[_this select 0,'ACE_envelope_big']] call CBA_fnc_execNextFrame";
					exceptions[] = {};
					showDisabled = 0;
					priority = 4;
				};
				class ace_tripod_place {
					displayName = "Place SSWT Kit";
					condition = "[_player,'ACE_Tripod'] call ace_common_fnc_hasItem";
					statement = "[_player,'ACE_Tripod'] call ace_tripod_fnc_place";
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\tripod\UI\w_sniper_tripod_ca.paa";
				};
				class ace_atragmx_open {
					displayName = "Open ATragMX";
					condition = "call ace_atragmx_fnc_can_show";
					statement = "call ace_atragmx_fnc_create_dialog";
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\atragmx\UI\ATRAG_Icon.paa";
					exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
				};
				class ace_attach_Attach {
					displayName = "Attach item";
					condition = "_this call ace_attach_fnc_canAttach";
					insertChildren = "_this call ace_attach_fnc_getChildrenAttachActions";
					exceptions[] = {"isNotDragging"};
					showDisabled = 0;
					priority = 5;
					icon = "\z\ace\addons\attach\UI\attach_ca.paa";
				};
				class ace_attach_Detach {
					displayName = "Detach item";
					condition = "_this call ace_attach_fnc_canDetach";
					statement = "_this call ace_attach_fnc_detach";
					exceptions[] = {"isNotDragging"};
					showDisabled = 0;
					priority = 5;
					icon = "\z\ace\addons\attach\UI\detach_ca.paa";
				};
				class ACE_Chemlights {
					displayName = "Chemlights";
					icon = "\a3\ui_f\data\gui\cfg\Hints\chemlights_ca.paa";
					condition = "count ([ACE_player] call ace_chemlights_fnc_getShieldComponents) > 0";
					statement = 1;
					exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
					insertChildren = "_this call ace_chemlights_fnc_compileChemlightMenu";
					showDisabled = 0;
					priority = 99;
				};
				class ace_dagr_menu {
					displayName = "Configure DAGR";
					condition = "[_player,'ACE_DAGR'] call ace_common_fnc_hasItem";
					statement = "call ace_dagr_fnc_menuInit";
					showDisabled = 0;
					priority = 0.1;
					icon = "\z\ace\addons\dagr\UI\DAGR_Icon.paa";
					exceptions[] = {"isNotInside", "isNotSitting"};
					class ace_dagr_toggle {
						displayName = "Toggle DAGR";
						condition = "[_player,'ACE_DAGR'] call ace_common_fnc_hasItem";
						statement = "call ace_dagr_fnc_toggleOverlay";
						showDisabled = 0;
						priority = 0.2;
						icon = "\z\ace\addons\dagr\UI\DAGR_Icon.paa";
						exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
					};
				};
				class ACE_CheckDogtags {
					displayName = "Check Dog Tag";
					condition = 1;
					statement = "";
					exceptions[] = {"isNotInside", "isNotSitting"};
					insertChildren = "_this call ace_dogtags_fnc_addDogtagActions";
				};
				class ace_gunbag_actions {
					displayName = "Gunbag";
					condition = "[_player] call ace_gunbag_fnc_hasGunbag";
					showDisabled = 0;
					priority = 0.1;
					icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					class ace_gunbag_weaponTo {
						displayName = "Put weapon into gunbag";
						condition = "[_player,_player] call ace_gunbag_fnc_canInteract== 0";
						statement = "[_player,_player] call ace_gunbag_fnc_toGunbag";
						showDisabled = 0;
						priority = 1;
						icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					};
					class ace_gunbag_weaponOff {
						displayName = "Get weapon out of gunbag";
						condition = "[_player,_player] call ace_gunbag_fnc_canInteract== 1";
						statement = "[_player,_player] call ace_gunbag_fnc_offGunbag";
						showDisabled = 0;
						priority = 1;
						icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					};
					class ace_gunbag_status {
						displayName = "Status";
						condition = "[_player] call ace_gunbag_fnc_hasGunbag";
						statement = "[_player] call ace_gunbag_fnc_status";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
					};
				};
				class ACE_PutInEarplugs {
					displayName = "Earplugs in";
					condition = "!([_player] call ace_hearing_fnc_hasEarPlugsIn) && {'ACE_EarPlugs' in items _player}";
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_player] call ace_hearing_fnc_putInEarPlugs";
					showDisabled = 0;
					priority = 2.5;
					icon = "\z\ace\addons\hearing\UI\ACE_earplugs_x_ca.paa";
				};
				class ACE_RemoveEarplugs {
					displayName = "Earplugs out";
					condition = "[_player] call ace_hearing_fnc_hasEarPlugsIn";
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_player] call ace_hearing_fnc_removeEarPlugs";
					showDisabled = 0;
					priority = 2.5;
					icon = "\z\ace\addons\hearing\UI\ACE_earplugs_x_ca.paa";
				};
				class ace_kestrel4500_open {
					displayName = "Open Kestrel 4500";
					condition = "call ace_kestrel4500_fnc_canShow&& !ace_kestrel4500_Kestrel4500";
					statement = "call ace_kestrel4500_fnc_createKestrelDialog";
					showDisabled = 0;
					priority = 0.1;
					icon = "\z\ace\addons\kestrel4500\UI\Kestrel4500_Icon.paa";
					exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
					class ace_kestrel4500_show {
						displayName = "Show Kestrel 4500";
						condition = "call ace_kestrel4500_fnc_canShow&& !ace_kestrel4500_Overlay";
						statement = "call ace_kestrel4500_fnc_displayKestrel";
						showDisabled = 0;
						priority = 0.2;
						icon = "\z\ace\addons\kestrel4500\UI\Kestrel4500_Icon.paa";
						exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
					};
					class ace_kestrel4500_hide {
						displayName = "Hide Kestrel 4500";
						condition = "ace_kestrel4500_Overlay";
						statement = "call ace_kestrel4500_fnc_displayKestrel";
						showDisabled = 0;
						priority = 0.3;
						icon = "\z\ace\addons\kestrel4500\UI\Kestrel4500_Icon.paa";
						exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
					};
				};
				class ace_minedetector_metalDetector {
					displayName = "Metal detector";
					condition = "[ACE_player] call ace_minedetector_fnc_hasDetector";
					statement = "";
					icon = "\z\ace\addons\minedetector\ui\icon_mineDetector.paa";
					exceptions[] = {};
					class ace_minedetector_activate {
						displayName = "Activate";
						condition = "call ace_minedetector_fnc_canActivateDetector";
						statement = "call ace_minedetector_fnc_activateDetector";
						icon = "\z\ace\addons\minedetector\ui\icon_mineDetectorOn.paa";
						exceptions[] = {};
					};
					class ace_minedetector_deactivate {
						displayName = "Deactivate";
						condition = "call ace_minedetector_fnc_canDeactivateDetector";
						statement = "call ace_minedetector_fnc_deactivateDetector";
						icon = "\z\ace\addons\minedetector\ui\icon_mineDetectorOff.paa";
						exceptions[] = {};
					};
					class ace_minedetector_connectHeadphones {
						displayName = "Connect Headphones";
						condition = "call ace_minedetector_fnc_canConnectHeadphones";
						statement = "[ACE_player,true] call ace_minedetector_fnc_connectHeadphones";
						icon = "";
						exceptions[] = {};
					};
					class ace_minedetector_disconnectHeadphones {
						displayName = "Disconnect Headphones";
						condition = "call ace_minedetector_fnc_canDisconnectHeadphones";
						statement = "[ACE_player,false] call ace_minedetector_fnc_connectHeadphones";
						icon = "";
						exceptions[] = {};
					};
				};
				class ace_rangecard_open {
					displayName = "Open Range Card";
					condition = "call ace_rangecard_fnc_canShow&& !ace_rangecard_RangeCardOpened";
					statement = "false call ace_rangecard_fnc_openRangeCard";
					showDisabled = 0;
					priority = 0.1;
					icon = "\z\ace\addons\rangecard\UI\RangeCard_Icon.paa";
					exceptions[] = {"notOnMap"};
					class ace_rangecard_openCopy {
						displayName = "Open Range Card Copy";
						condition = "call ace_rangecard_fnc_canShowCopy&& !ace_rangecard_RangeCardOpened";
						statement = "true call ace_rangecard_fnc_openRangeCard";
						showDisabled = 0;
						priority = 0.1;
						icon = "\z\ace\addons\rangecard\UI\RangeCard_Icon.paa";
						exceptions[] = {"notOnMap"};
					};
					class ace_rangecard_makeCopy {
						displayName = "Copy Range Card";
						condition = "call ace_rangecard_fnc_canShow&& !ace_rangecard_RangeCardOpened";
						statement = "ace_rangecard_ammoClassCopy= ace_rangecard_ammoClass; ace_rangecard_magazineClassCopy= ace_rangecard_magazineClass; ace_rangecard_weaponClassCopy= ace_rangecard_ammoClass;";
						showDisabled = 0;
						priority = 0.1;
						icon = "\z\ace\addons\rangecard\UI\RangeCard_Icon.paa";
						exceptions[] = {"notOnMap"};
					};
				};
			};
			class ACE_TeamManagement {
				displayName = "Team Management";
				condition = "ace_interaction_EnableTeamManagement";
				exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
				statement = "";
				showDisabled = 1;
				priority = 3.2;
				icon = "\z\ace\addons\interaction\UI\team\team_management_ca.paa";
				class ACE_JoinTeamRed {
					displayName = "Join Red";
					condition = 1;
					exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
					statement = "[_player,'RED'] call ace_interaction_fnc_joinTeam";
					showDisabled = 1;
					priority = 2.4;
					icon = "\z\ace\addons\interaction\UI\team\team_red_ca.paa";
				};
				class ACE_JoinTeamGreen {
					displayName = "Join Green";
					condition = 1;
					exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
					statement = "[_player,'GREEN'] call ace_interaction_fnc_joinTeam";
					showDisabled = 1;
					priority = 2.3;
					icon = "\z\ace\addons\interaction\UI\team\team_green_ca.paa";
				};
				class ACE_JoinTeamBlue {
					displayName = "Join Blue";
					condition = 1;
					exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
					statement = "[_player,'BLUE'] call ace_interaction_fnc_joinTeam";
					showDisabled = 1;
					priority = 2.2;
					icon = "\z\ace\addons\interaction\UI\team\team_blue_ca.paa";
				};
				class ACE_JoinTeamYellow {
					displayName = "Join Yellow";
					condition = 1;
					exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
					statement = "[_player,'YELLOW'] call ace_interaction_fnc_joinTeam";
					showDisabled = 1;
					priority = 2.1;
					icon = "\z\ace\addons\interaction\UI\team\team_yellow_ca.paa";
				};
				class ACE_LeaveTeam {
					displayName = "Leave Team";
					condition = "assignedTeam _player != 'MAIN'";
					exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
					statement = "[_player,'MAIN'] call ace_interaction_fnc_joinTeam";
					showDisabled = 1;
					priority = 2.5;
					icon = "\z\ace\addons\interaction\UI\team\team_white_ca.paa";
				};
				class ACE_BecomeLeader {
					displayName = "Become Leader";
					condition = "_this call ace_interaction_fnc_canBecomeLeader";
					exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
					statement = "_this call ace_interaction_fnc_doBecomeLeader";
					showDisabled = 1;
					priority = 1;
					icon = "\z\ace\addons\interaction\UI\team\team_white_ca.paa";
				};
				class ACE_LeaveGroup {
					displayName = "Leave Group";
					condition = "count (units group _player) > 1";
					exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder"};
					statement = "_oldGroup = units group _player; _newGroup = createGroup side _player; [_player] joinSilent _newGroup; {_player reveal _x} forEach _oldGroup;";
					showDisabled = 1;
					priority = 1.2;
					icon = "\z\ace\addons\interaction\UI\team\team_management_ca.paa";
				};
			};
			class ACE_RepackMagazines {
				displayName = "Repack Magazines";
				condition = 1;
				exceptions[] = {"isNotInside", "isNotSitting"};
				insertChildren = "_this call ace_magazinerepack_fnc_getMagazineChildren";
				priority = -2;
				icon = "\z\ace\addons\magazinerepack\UI\repack_ca.paa";
			};
			class ACE_MapFlashlight {
				displayName = "Flashlights";
				icon = "\a3\ui_f\data\IGUI\Cfg\VehicleToggles\lightsiconon_ca.paa";
				condition = "ace_map_mapIllumination&& visibleMap && {count ([ACE_player] call ace_map_fnc_getUnitFlashlights) > 0}";
				statement = 1;
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
				insertChildren = "_this call ace_map_fnc_compileFlashlightMenu";
				showDisabled = 0;
				priority = 99;
			};
			class ACE_MapGpsShow {
				displayName = "Show GPS on Map";
				condition = "(!ace_maptools_mapGpsShow) && {call ace_maptools_fnc_canUseMapGPS}";
				statement = "ace_maptools_mapGpsShow= true; [ace_maptools_mapGpsShow] call ace_maptools_fnc_openMapGps";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
				showDisabled = 0;
				priority = 0;
			};
			class ACE_MapGpsHide {
				displayName = "Hide GPS on Map";
				condition = "(ace_maptools_mapGpsShow) && {call ace_maptools_fnc_canUseMapGPS}";
				statement = "ace_maptools_mapGpsShow= false; [ace_maptools_mapGpsShow] call ace_maptools_fnc_openMapGps";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
				showDisabled = 0;
				priority = 0;
			};
			class ACE_MapTools {
				displayName = "Map Tools";
				condition = "call ace_maptools_fnc_canUseMapTools";
				statement = "";
				exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
				showDisabled = 0;
				priority = 100;
				class ACE_MapToolsHide {
					displayName = "Hide Map Tool";
					condition = "ace_maptools_mapTool_Shown!= 0";
					statement = "ace_maptools_mapTool_Shown= 0;";
					exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
					showDisabled = 1;
					priority = 5;
				};
				class ACE_MapToolsShowNormal {
					displayName = "Show Normal Map Tool";
					condition = "ace_maptools_mapTool_Shown!= 1";
					statement = "ace_maptools_mapTool_Shown= 1;";
					exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
					showDisabled = 1;
					priority = 4;
				};
				class ACE_MapToolsShowSmall {
					displayName = "Show Small Map Tool";
					condition = "ace_maptools_mapTool_Shown!= 2";
					statement = "ace_maptools_mapTool_Shown= 2;";
					exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
					showDisabled = 1;
					priority = 3;
				};
				class ACE_MapToolsAlignNorth {
					displayName = "Align Map Tool to North";
					condition = "ace_maptools_mapTool_Shown!= 0";
					statement = "ace_maptools_mapTool_angle= 0;";
					exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
					showDisabled = 1;
					priority = 2;
				};
				class ACE_MapToolsAlignCompass {
					displayName = "Align Map Tool to Compass";
					condition = "(ace_maptools_mapTool_Shown!= 0) && {'ItemCompass' in assigneditems ACE_player}";
					statement = "ace_maptools_mapTool_angle= getDir ACE_player;";
					exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
					showDisabled = 1;
					priority = 1;
				};
			};
			class Medical {
				displayName = "Medical";
				runOnHover = 1;
				exceptions[] = {"isNotInside", "isNotSitting"};
				statement = "[_target,true,0] call ace_medical_fnc_displayPatientInformation";
				condition = 1;
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				class ACE_Head {
					displayName = "Head";
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_target,true,0] call ace_medical_fnc_displayPatientInformation";
					modifierFunction = "[_target,_player,0,_this select 3] call ace_medical_fnc_modifyMedicalAction";
					condition = 1;
					runOnHover = 1;
					class Bandage {
						displayName = "Bandage";
						distance = 2;
						condition = "[_player,_target,'head','Bandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'head','Bandage'] call ace_medical_fnc_treatment";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class FieldDressing {
						displayName = "Field Dressing";
						distance = 5;
						condition = "[_player,_target,'head','FieldDressing'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'head','FieldDressing'] call ace_medical_fnc_treatment";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class PackingBandage: FieldDressing {
						displayName = "Packing Bandage";
						condition = "[_player,_target,'head','PackingBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'head','PackingBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class ElasticBandage: FieldDressing {
						displayName = "Elastic Bandage";
						condition = "[_player,_target,'head','ElasticBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'head','ElasticBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class QuikClot: FieldDressing {
						displayName = "QuikClot";
						condition = "[_player,_target,'head','QuikClot'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'head','QuikClot'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class CheckPulse: FieldDressing {
						displayName = "Check Pulse";
						condition = "[_player,_target,'head','CheckPulse'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'head','CheckPulse'] call ace_medical_fnc_treatment";
						icon = "";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class CheckBloodPressure: CheckPulse {
						displayName = "Check Blood Pressure";
						condition = "[_player,_target,'head','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'head','CheckBloodPressure'] call ace_medical_fnc_treatment";
						// CheckPulse
						icon = "";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
				};
				class ACE_Torso {
					displayName = "Torso";
					distance = 5;
					condition = 1;
					runOnHover = 1;
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_target,true,1] call ace_medical_fnc_displayPatientInformation";
					modifierFunction = "[_target,_player,1,_this select 3] call ace_medical_fnc_modifyMedicalAction";
					showDisabled = 1;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					class Bandage {
						displayName = "Bandage";
						distance = 2;
						condition = "[_player,_target,'body','Bandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'body','Bandage'] call ace_medical_fnc_treatment";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class TriageCard {
						displayName = "Triage Card";
						distance = 2;
						condition = 1;
						exceptions[] = {"isNotInside"};
						statement = "[_target,true] call ace_medical_fnc_displayTriageCard";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\triageCard.paa";
					};
					class FieldDressing {
						displayName = "Field Dressing";
						distance = 5;
						condition = "[_player,_target,'body','FieldDressing'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'body','FieldDressing'] call ace_medical_fnc_treatment";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class PackingBandage: FieldDressing {
						displayName = "Packing Bandage";
						condition = "[_player,_target,'body','PackingBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'body','PackingBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class ElasticBandage: FieldDressing {
						displayName = "Elastic Bandage";
						condition = "[_player,_target,'body','ElasticBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'body','ElasticBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class QuikClot: FieldDressing {
						displayName = "QuikClot";
						condition = "[_player,_target,'body','QuikClot'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'body','QuikClot'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
				};
				class ACE_ArmLeft {
					displayName = "Left Arm";
					runOnHover = 1;
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_target,true,2] call ace_medical_fnc_displayPatientInformation";
					modifierFunction = "[_target,_player,2,_this select 3] call ace_medical_fnc_modifyMedicalAction";
					condition = 1;
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					class Bandage {
						displayName = "Bandage";
						distance = 2;
						condition = "[_player,_target,'hand_l','Bandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','Bandage'] call ace_medical_fnc_treatment";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class FieldDressing {
						displayName = "Field Dressing";
						distance = 5;
						condition = "[_player,_target,'hand_l','FieldDressing'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','FieldDressing'] call ace_medical_fnc_treatment";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class PackingBandage: FieldDressing {
						displayName = "Packing Bandage";
						condition = "[_player,_target,'hand_l','PackingBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','PackingBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class ElasticBandage: FieldDressing {
						displayName = "Elastic Bandage";
						condition = "[_player,_target,'hand_l','ElasticBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','ElasticBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class QuikClot: FieldDressing {
						displayName = "QuikClot";
						condition = "[_player,_target,'hand_l','QuikClot'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','QuikClot'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Tourniquet: FieldDressing {
						displayName = "Tourniquet";
						condition = "[_player,_target,'hand_l','Tourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','Tourniquet'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Morphine: FieldDressing {
						displayName = "Inject Morphine";
						condition = "[_player,_target,'hand_l','Morphine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','Morphine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Adenosine: Morphine {
						displayName = "Inject Atropine";
						condition = "[_player,_target,'hand_l','Adenosine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','Adenosine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Atropine: Morphine {
						displayName = "Inject Atropine";
						condition = "[_player,_target,'hand_l','Atropine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','Atropine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Epinephrine: Morphine {
						displayName = "Inject Epinephrine";
						condition = "[_player,_target,'hand_l','Epinephrine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','Epinephrine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class CheckPulse: FieldDressing {
						displayName = "Check Pulse";
						condition = "[_player,_target,'hand_l','CheckPulse'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','CheckPulse'] call ace_medical_fnc_treatment";
						icon = "";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class CheckBloodPressure: CheckPulse {
						displayName = "Check Blood Pressure";
						condition = "[_player,_target,'hand_l','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','CheckBloodPressure'] call ace_medical_fnc_treatment";
						// CheckPulse
						icon = "";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class RemoveTourniquet: Tourniquet {
						displayName = "Remove Tourniquet";
						condition = "[_player,_target,'hand_l','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_l','RemoveTourniquet'] call ace_medical_fnc_treatment";
						// Tourniquet
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
				};
				class ACE_ArmRight {
					displayName = "Right Arm";
					runOnHover = 1;
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_target,true,3] call ace_medical_fnc_displayPatientInformation";
					modifierFunction = "[_target,_player,3,_this select 3] call ace_medical_fnc_modifyMedicalAction";
					condition = 1;
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					class Bandage {
						displayName = "Bandage";
						distance = 2;
						condition = "[_player,_target,'hand_r','Bandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','Bandage'] call ace_medical_fnc_treatment";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class FieldDressing {
						displayName = "Field Dressing";
						distance = 5;
						condition = "[_player,_target,'hand_r','FieldDressing'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','FieldDressing'] call ace_medical_fnc_treatment";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class PackingBandage: FieldDressing {
						displayName = "Packing Bandage";
						condition = "[_player,_target,'hand_r','PackingBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','PackingBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class ElasticBandage: FieldDressing {
						displayName = "Elastic Bandage";
						condition = "[_player,_target,'hand_r','ElasticBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','ElasticBandage'] call ace_medical_fnc_treatment";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class QuikClot: FieldDressing {
						displayName = "QuikClot";
						condition = "[_player,_target,'hand_r','QuikClot'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','QuikClot'] call ace_medical_fnc_treatment";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class Tourniquet: FieldDressing {
						displayName = "Tourniquet";
						condition = "[_player,_target,'hand_r','Tourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','Tourniquet'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Morphine: FieldDressing {
						displayName = "Inject Morphine";
						condition = "[_player,_target,'hand_r','Morphine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','Morphine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Adenosine: Morphine {
						displayName = "Inject Atropine";
						condition = "[_player,_target,'hand_r','Adenosine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','Adenosine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Atropine: Morphine {
						displayName = "Inject Atropine";
						condition = "[_player,_target,'hand_r','Atropine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','Atropine'] call ace_medical_fnc_treatment";
						// Morphine
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Epinephrine: Morphine {
						displayName = "Inject Epinephrine";
						condition = "[_player,_target,'hand_r','Epinephrine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','Epinephrine'] call ace_medical_fnc_treatment";
						// Morphine
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class CheckPulse: FieldDressing {
						displayName = "Check Pulse";
						condition = "[_player,_target,'hand_r','CheckPulse'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','CheckPulse'] call ace_medical_fnc_treatment";
						icon = "";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class CheckBloodPressure: CheckPulse {
						displayName = "Check Blood Pressure";
						condition = "[_player,_target,'hand_r','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','CheckBloodPressure'] call ace_medical_fnc_treatment";
						// CheckPulse
						icon = "";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class RemoveTourniquet: Tourniquet {
						displayName = "Remove Tourniquet";
						condition = "[_player,_target,'hand_r','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'hand_r','RemoveTourniquet'] call ace_medical_fnc_treatment";
						// Tourniquet
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
				};
				class ACE_LegLeft {
					displayName = "Left Leg";
					runOnHover = 1;
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_target,true,4] call ace_medical_fnc_displayPatientInformation";
					modifierFunction = "[_target,_player,4,_this select 3] call ace_medical_fnc_modifyMedicalAction";
					condition = 1;
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					class Bandage {
						displayName = "Bandage";
						distance = 2;
						condition = "[_player,_target,'leg_l','Bandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','Bandage'] call ace_medical_fnc_treatment";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class FieldDressing {
						displayName = "Field Dressing";
						distance = 5;
						condition = "[_player,_target,'leg_l','FieldDressing'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','FieldDressing'] call ace_medical_fnc_treatment";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class PackingBandage: FieldDressing {
						displayName = "Packing Bandage";
						condition = "[_player,_target,'leg_l','PackingBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','PackingBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class ElasticBandage: FieldDressing {
						displayName = "Elastic Bandage";
						condition = "[_player,_target,'leg_l','ElasticBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','ElasticBandage'] call ace_medical_fnc_treatment";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class QuikClot: FieldDressing {
						displayName = "QuikClot";
						condition = "[_player,_target,'leg_l','QuikClot'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','QuikClot'] call ace_medical_fnc_treatment";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class Tourniquet: FieldDressing {
						displayName = "Tourniquet";
						condition = "[_player,_target,'leg_l','Tourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','Tourniquet'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Morphine: FieldDressing {
						displayName = "Inject Morphine";
						condition = "[_player,_target,'leg_l','Morphine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','Morphine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Adenosine: Morphine {
						displayName = "Inject Atropine";
						condition = "[_player,_target,'leg_l','Adenosine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','Adenosine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Atropine: Morphine {
						displayName = "Inject Atropine";
						condition = "[_player,_target,'leg_l','Atropine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','Atropine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Epinephrine: Morphine {
						displayName = "Inject Epinephrine";
						condition = "[_player,_target,'leg_l','Epinephrine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','Epinephrine'] call ace_medical_fnc_treatment";
						// Morphine
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class RemoveTourniquet: Tourniquet {
						displayName = "Remove Tourniquet";
						condition = "[_player,_target,'leg_l','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_l','RemoveTourniquet'] call ace_medical_fnc_treatment";
						// Tourniquet
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
				};
				class ACE_LegRight {
					displayName = "Right Leg";
					runOnHover = 1;
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_target,true,5] call ace_medical_fnc_displayPatientInformation";
					modifierFunction = "[_target,_player,5,_this select 3] call ace_medical_fnc_modifyMedicalAction";
					condition = 1;
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					class Bandage {
						displayName = "Bandage";
						distance = 2;
						condition = "[_player,_target,'leg_r','Bandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','Bandage'] call ace_medical_fnc_treatment";
						showDisabled = 1;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class FieldDressing {
						displayName = "Field Dressing";
						distance = 5;
						condition = "[_player,_target,'leg_r','FieldDressing'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','FieldDressing'] call ace_medical_fnc_treatment";
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class PackingBandage: FieldDressing {
						displayName = "Packing Bandage";
						condition = "[_player,_target,'leg_r','PackingBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','PackingBandage'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class ElasticBandage: FieldDressing {
						displayName = "Elastic Bandage";
						condition = "[_player,_target,'leg_r','ElasticBandage'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','ElasticBandage'] call ace_medical_fnc_treatment";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class QuikClot: FieldDressing {
						displayName = "QuikClot";
						condition = "[_player,_target,'leg_r','QuikClot'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','QuikClot'] call ace_medical_fnc_treatment";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
						icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					};
					class Tourniquet: FieldDressing {
						displayName = "Tourniquet";
						condition = "[_player,_target,'leg_r','Tourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','Tourniquet'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Morphine: FieldDressing {
						displayName = "Inject Morphine";
						condition = "[_player,_target,'leg_r','Morphine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','Morphine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Adenosine: Morphine {
						displayName = "Inject Atropine";
						condition = "[_player,_target,'leg_r','Adenosine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','Adenosine'] call ace_medical_fnc_treatment";
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Atropine: Morphine {
						displayName = "Inject Atropine";
						condition = "[_player,_target,'leg_r','Atropine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','Atropine'] call ace_medical_fnc_treatment";
						// Morphine
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class Epinephrine: Morphine {
						displayName = "Inject Epinephrine";
						condition = "[_player,_target,'leg_r','Epinephrine'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','Epinephrine'] call ace_medical_fnc_treatment";
						// Morphine
						icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
					class RemoveTourniquet: Tourniquet {
						displayName = "Remove Tourniquet";
						condition = "[_player,_target,'leg_r','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
						exceptions[] = {"isNotInside"};
						statement = "[_player,_target,'leg_r','RemoveTourniquet'] call ace_medical_fnc_treatment";
						// Tourniquet
						icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
						// FieldDressing
						distance = 5;
						showDisabled = 0;
						priority = 2;
					};
				};
			};
			class Medical_Menu {
				displayName = "Medical Menu";
				runOnHover = 0;
				exceptions[] = {"isNotInside"};
				condition = "[ACE_player,_target] call ace_medical_menu_fnc_canOpenMenu";
				statement = "[_target] call ace_medical_menu_fnc_openMenu";
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
			};
			class ACE_CutParachute {
				displayName = "Cut Parachute";
				exceptions[] = {"isNotInside"};
				condition = "[_player] call ace_parachute_fnc_checkCutParachute";
				statement = "[_player] call ace_parachute_fnc_cutParachute";
				showDisabled = 0;
				priority = 2.9;
				icon = "\z\ace\addons\parachute\UI\cut_ca.paa";
			};
			class ACE_MoveRallypoint {
				displayName = "Move Rallypoint";
				condition = "[_player,side group _player] call ace_respawn_fnc_canMoveRallypoint";
				statement = "[_player,side group _player] call ace_respawn_fnc_moveRallypoint";
				showDisabled = 0;
				priority = -0.5;
			};
			class ace_sandbag_place {
				displayName = "Deploy Sandbag";
				condition = "_this call ace_sandbag_fnc_canDeploy";
				statement = "[{_this call ace_sandbag_fnc_deploy},_this] call CBA_fnc_execNextFrame";
				exceptions[] = {"isNotSwimming"};
				showDisabled = 0;
				priority = 4;
				icon = "\z\ace\addons\sandbag\UI\icon_sandbag_ca.paa";
			};
			class ACE_Tags {
				displayName = "Tag";
				condition = "_player call ace_tagging_fnc_checkTaggable";
				statement = "_player call ace_tagging_fnc_quickTag";
				icon = "\z\ace\addons\tagging\UI\icons\iconTaggingBlack.paa";
				insertChildren = "_player call ace_tagging_fnc_addTagActions";
			};
			class ACE_StopEscortingSelf {
				displayName = "Release Prisoner";
				condition = "[_player,objNull] call ace_captives_fnc_canStopEscorting";
				statement = "[_player,objNull,false] call ace_captives_fnc_doEscortCaptive";
				exceptions[] = {"isNotEscorting"};
				showDisabled = 0;
				priority = 2.3;
			};
			class ACE_StartSurrenderingSelf {
				displayName = "Surrender";
				condition = "[_player,true] call ace_captives_fnc_canSurrender";
				statement = "[_player,true] call ace_captives_fnc_setSurrendered";
				exceptions[] = {};
				showDisabled = 0;
				priority = 0;
				icon = "\z\ace\addons\captives\UI\Surrender_ca.paa";
			};
			class ACE_StopSurrenderingSelf {
				displayName = "Stop Surrendering";
				condition = "[_player,false] call ace_captives_fnc_canSurrender";
				statement = "[_player,false] call ace_captives_fnc_setSurrendered";
				exceptions[] = {"isNotSurrendering"};
				showDisabled = 0;
				priority = 0;
				icon = "\z\ace\addons\captives\UI\Surrender_ca.paa";
			};
			class ACE_Explosives {
				displayName = "Explosives";
				condition = "!(_player getVariable [""""ace_explosives_PlantingExplosive"""",false])";
				statement = "";
				exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting"};
				showDisabled = 1;
				priority = 4;
				icon = "\z\ace\addons\explosives\UI\Explosives_Menu_ca.paa";
				insertChildren = "[_player] call ace_explosives_fnc_addTransmitterActions;";
				class ACE_Place {
					displayName = "Place";
					condition = "(vehicle _player == _player) and {[_player] call ace_explosives_fnc_hasExplosives}";
					statement = "";
					insertChildren = "[_player] call ace_explosives_fnc_addExplosiveActions;";
					exceptions[] = {"isNotSwimming"};
					showDisabled = 1;
					icon = "\z\ace\addons\explosives\UI\Place_Explosive_ca.paa";
					priority = 1;
				};
				class ACE_Cellphone {
					displayName = "Cellphone";
					condition = "('ACE_Cellphone' in (items ace_player))";
					statement = "closeDialog 0;createDialog 'Rsc_ACE_PhoneInterface';";
					exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting"};
					showDisabled = 0;
					icon = "\z\ace\addons\explosives\Data\UI\Cellphone_UI.paa";
					priority = 0.8;
				};
			};
			class ace_gestures {
				displayName = "Gestures";
				condition = "(canStand _target) && {ace_gestures_showOnInteractionMenu== 2}";
				statement = "";
				showDisabled = 1;
				priority = 3.5;
				icon = "\z\ace\addons\gestures\UI\gestures_ca.paa";
				class ace_gestures_Advance {
					displayName = "Advance";
					condition = 1;
					statement = "[_target,'gestureAdvance'] call ace_common_fnc_doGesture;";
					showDisabled = 1;
					priority = 1.9;
				};
				class ace_gestures_Go {
					displayName = "Go";
					condition = 1;
					statement = "[_target,selectRandom ['gestureGo','gestureGoB']] call ace_common_fnc_doGesture;";
					showDisabled = 1;
					priority = 1.8;
				};
				class ace_gestures_Follow {
					displayName = "Follow";
					condition = 1;
					statement = "[_target,'gestureFollow'] call ace_common_fnc_doGesture;";
					showDisabled = 1;
					priority = 1.7;
				};
				class ace_gestures_Up {
					displayName = "Up";
					condition = 1;
					statement = "[_target,'gestureUp'] call ace_common_fnc_doGesture;";
					showDisabled = 1;
					priority = 1.5;
				};
				class ace_gestures_CeaseFire {
					displayName = "Cease Fire";
					condition = 1;
					statement = "[_target,'gestureCeaseFire'] call ace_common_fnc_doGesture;";
					showDisabled = 1;
					priority = 1.3;
				};
				class ace_gestures_Stop {
					displayName = "Stop";
					condition = 1;
					statement = "[_target,'gestureFreeze'] call ace_common_fnc_doGesture;";
					showDisabled = 1;
					priority = 1.2;
				};
				class ace_gestures_Forward {
					displayName = "Move forward";
					condition = 1;
					statement = """""ace_gestures_forward"""" call ace_gestures_fnc_playSignal";
					showDisabled = 1;
					priority = 1.9;
				};
				class ace_gestures_Regroup {
					displayName = "Rally up";
					condition = 1;
					statement = """""ace_gestures_regroup"""" call ace_gestures_fnc_playSignal";
					showDisabled = 1;
					priority = 1.8;
				};
				class ace_gestures_Freeze {
					displayName = "Freeze";
					condition = 1;
					statement = """""ace_gestures_freeze"""" call ace_gestures_fnc_playSignal";
					showDisabled = 1;
					priority = 1.7;
				};
				class ace_gestures_Cover {
					displayName = "Cover";
					condition = 1;
					statement = """""ace_gestures_cover"""" call ace_gestures_fnc_playSignal";
					showDisabled = 1;
					priority = 1.6;
				};
				class ace_gestures_Point {
					displayName = "Point";
					condition = 1;
					statement = """""ace_gestures_point"""" call ace_gestures_fnc_playSignal";
					showDisabled = 1;
					priority = 1.5;
				};
				class ace_gestures_Engage {
					displayName = "Engage";
					condition = 1;
					statement = """""ace_gestures_engage"""" call ace_gestures_fnc_playSignal";
					showDisabled = 1;
					priority = 1.4;
				};
				class ace_gestures_Hold {
					displayName = "Hold";
					condition = 1;
					statement = """""ace_gestures_hold"""" call ace_gestures_fnc_playSignal";
					showDisabled = 1;
					priority = 1.3;
				};
				class ace_gestures_Warning {
					displayName = "Warning";
					condition = 1;
					statement = """""ace_gestures_warning"""" call ace_gestures_fnc_playSignal";
					showDisabled = 1;
					priority = 1.2;
				};
			};
		};
		class ACE_Actions {
			class ACE_MainActions {
				displayName = "Interactions";
				distance = 4;
				condition = 1;
				statement = "";
				icon = "\a3\ui_f\data\IGUI\Cfg\Actions\eject_ca.paa";
				selection = "pelvis";
				class ACE_PassMagazine {
					displayName = "Pass magazine";
					condition = "";
					statement = "";
					showDisabled = 0;
					priority = 3.3;
					icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargomag_ca.paa";
					class ACE_PassMagazinePrimary {
						displayName = "Primary magazine";
						condition = "[_player,_target,primaryWeapon _target] call ace_interaction_fnc_canPassMagazine";
						statement = "[_player,_target,primaryWeapon _target] call ace_interaction_fnc_passMagazine";
						showDisabled = 0;
						priority = 3;
						icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryweapon_ca.paa";
					};
					class ACE_PassMagazineHandgun {
						displayName = "Pistol magazine";
						condition = "[_player,_target,handgunWeapon _target] call ace_interaction_fnc_canPassMagazine";
						statement = "[_player,_target,handgunWeapon _target] call ace_interaction_fnc_passMagazine";
						showDisabled = 0;
						priority = 1;
						icon = "\a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
					};
				};
				class ACE_TeamManagement {
					displayName = "Team Management";
					condition = "[_player,_target] call ace_interaction_fnc_canJoinTeam&& {ace_interaction_EnableTeamManagement}";
					statement = "";
					showDisabled = 0;
					priority = 3.2;
					icon = "\z\ace\addons\interaction\UI\team\team_management_ca.paa";
					class ACE_AssignTeamRed {
						displayName = "Assign Red";
						condition = "[_player,_target] call ace_interaction_fnc_canJoinTeam";
						statement = "[_target,'RED'] call ace_interaction_fnc_joinTeam";
						showDisabled = 1;
						icon = "\z\ace\addons\interaction\UI\team\team_red_ca.paa";
						priority = 2.4;
					};
					class ACE_AssignTeamGreen {
						displayName = "Assign Green";
						condition = "[_player,_target] call ace_interaction_fnc_canJoinTeam";
						statement = "[_target,'GREEN'] call ace_interaction_fnc_joinTeam";
						showDisabled = 1;
						icon = "\z\ace\addons\interaction\UI\team\team_green_ca.paa";
						priority = 2.3;
					};
					class ACE_AssignTeamBlue {
						displayName = "Assign Blue";
						condition = "[_player,_target] call ace_interaction_fnc_canJoinTeam";
						statement = "[_target,'BLUE'] call ace_interaction_fnc_joinTeam";
						showDisabled = 1;
						icon = "\z\ace\addons\interaction\UI\team\team_blue_ca.paa";
						priority = 2.2;
					};
					class ACE_AssignTeamYellow {
						displayName = "Assign Yellow";
						condition = "[_player,_target] call ace_interaction_fnc_canJoinTeam";
						statement = "[_target,'YELLOW'] call ace_interaction_fnc_joinTeam";
						showDisabled = 1;
						icon = "\z\ace\addons\interaction\UI\team\team_yellow_ca.paa";
						priority = 2.1;
					};
					class ACE_UnassignTeam {
						displayName = "Leave Team";
						condition = "[_player,_target] call ace_interaction_fnc_canJoinTeam&& {assignedTeam _target != 'MAIN'}";
						statement = "[_target,'MAIN'] call ace_interaction_fnc_joinTeam";
						showDisabled = 1;
						icon = "\z\ace\addons\interaction\UI\team\team_white_ca.paa";
						priority = 2.5;
					};
				};
				class ACE_JoinGroup {
					displayName = "Join group";
					condition = "ace_interaction_EnableTeamManagement&& {[_player,_target] call ace_interaction_fnc_canJoinGroup}";
					statement = "[_player] joinSilent group _target";
					showDisabled = 0;
					priority = 2.6;
					icon = "\z\ace\addons\interaction\UI\team\team_management_ca.paa";
				};
				class ACE_GetDown {
					displayName = "Get Down!";
					condition = "[_player,_target] call ace_interaction_fnc_canInteractWithCivilian";
					statement = "[_player,_target] call ace_interaction_fnc_getDown";
					showDisabled = 0;
					priority = 2.2;
				};
				class ACE_SendAway {
					displayName = "Go Away!";
					condition = "[_player,_target] call ace_interaction_fnc_canInteractWithCivilian";
					statement = "[_player,_target] call ace_interaction_fnc_sendAway";
					showDisabled = 0;
					priority = 2;
				};
				class ACE_Pardon {
					displayName = "Pardon";
					condition = "[_player,_target] call ace_interaction_fnc_canPardon";
					statement = "[_player,_target] call ace_interaction_fnc_pardon";
					showDisabled = 0;
					priority = 2.5;
				};
				class ACE_GetOut {
					displayName = "Get Out";
					condition = "!(isNull objectParent _target) && [_player,_target] call ace_interaction_fnc_canInteractWithCivilian";
					statement = "[_target] call ace_common_fnc_unloadPerson";
					showDisabled = 0;
					priority = 2.6;
				};
				class Medical {
					displayName = "Medical";
					runOnHover = 1;
					exceptions[] = {"isNotInside"};
					condition = "(vehicle _target != _target && vehicle _target == vehicle _player) || ace_medical_menuTypeStyle== 1";
					statement = "[_target,true,0] call ace_medical_fnc_displayPatientInformation";
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					class ACE_Head {
						displayName = "Head";
						runOnHover = 1;
						statement = "[_target,true,0] call ace_medical_fnc_displayPatientInformation";
						condition = 1;
						modifierFunction = "[_target,_player,0,_this select 3] call ace_medical_fnc_modifyMedicalAction";
						exceptions[] = {"isNotInside"};
						icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
						distance = 1.75;
						class Bandage {
							displayName = "Bandage";
							distance = 2;
							condition = "[_player,_target,'head','Bandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','Bandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 1;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class FieldDressing {
							displayName = "Field Dressing";
							distance = 5;
							condition = "[_player,_target,'head','FieldDressing'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','FieldDressing'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PackingBandage: FieldDressing {
							displayName = "Packing Bandage";
							condition = "[_player,_target,'head','PackingBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','PackingBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class ElasticBandage: FieldDressing {
							displayName = "Elastic Bandage";
							condition = "[_player,_target,'head','ElasticBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','ElasticBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class QuikClot: FieldDressing {
							displayName = "QuikClot";
							condition = "[_player,_target,'head','QuikClot'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','QuikClot'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class CheckPulse: FieldDressing {
							displayName = "Check Pulse";
							condition = "[_player,_target,'head','CheckPulse'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','CheckPulse'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class CheckBloodPressure: CheckPulse {
							displayName = "Check Blood Pressure";
							condition = "[_player,_target,'head','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','CheckBloodPressure'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// CheckPulse
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class CheckResponse: CheckPulse {
							displayName = "Response";
							condition = "[_player,_target,'head','CheckResponse'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','CheckResponse'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// CheckPulse
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Diagnose: CheckPulse {
							displayName = "Diagnose";
							condition = "[_player,_target,'head','Diagnose'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'head','Diagnose'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// CheckPulse
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
					};
					class ACE_Torso {
						displayName = "Torso";
						runOnHover = 1;
						statement = "[_target,true,1] call ace_medical_fnc_displayPatientInformation";
						condition = 1;
						modifierFunction = "[_target,_player,1,_this select 3] call ace_medical_fnc_modifyMedicalAction";
						exceptions[] = {"isNotInside"};
						icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
						distance = 1.75;
						class Bandage {
							displayName = "Bandage";
							distance = 2;
							condition = "[_player,_target,'body','Bandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','Bandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 1;
							priority = 2;
							enableInside = 1;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PlaceInBodyBag {
							displayName = "Place body in bodybag";
							distance = 2;
							condition = "[_player,_target,'body','BodyBag'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','BodyBag'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 1;
							priority = 2;
							enableInside = 1;
						};
						class TriageCard {
							displayName = "Triage Card";
							distance = 2;
							condition = 1;
							statement = "[_target,true] call ace_medical_fnc_displayTriageCard";
							exceptions[] = {"isNotInside"};
							showDisabled = 1;
							priority = 2;
							enableInside = 1;
							icon = "\z\ace\addons\medical\UI\icons\triageCard.paa";
						};
						class Diagnose {
							displayName = "Diagnose";
							distance = 5;
							condition = "[_player,_target,'body','Diagnose'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','Diagnose'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 0;
							priority = 2;
							icon = "";
						};
						class FieldDressing {
							displayName = "Field Dressing";
							distance = 5;
							condition = "[_player,_target,'body','FieldDressing'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','FieldDressing'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 0;
							priority = 2;
							enableInside = 1;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PackingBandage: FieldDressing {
							displayName = "Packing Bandage";
							condition = "[_player,_target,'body','PackingBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','PackingBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							enableInside = 1;
						};
						class ElasticBandage: FieldDressing {
							displayName = "Elastic Bandage";
							condition = "[_player,_target,'body','ElasticBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','ElasticBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							enableInside = 1;
						};
						class QuikClot: FieldDressing {
							displayName = "QuikClot";
							condition = "[_player,_target,'body','QuikClot'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','QuikClot'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							enableInside = 1;
						};
						class SurgicalKit: FieldDressing {
							displayName = "Use Surgical Kit";
							condition = "[_player,_target,'body','SurgicalKit'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','SurgicalKit'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\surgicalKit.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							enableInside = 1;
						};
						class PersonalAidKit: FieldDressing {
							displayName = "Use Personal Aid Kit";
							condition = "[_player,_target,'body','PersonalAidKit'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','PersonalAidKit'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							enableInside = 1;
						};
						class CPR: FieldDressing {
							displayName = "CPR";
							condition = "[_player,_target,'body','CPR'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'body','CPR'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							enableInside = 1;
						};
					};
					class ACE_ArmLeft {
						displayName = "Left Arm";
						runOnHover = 1;
						statement = "[_target,true,2] call ace_medical_fnc_displayPatientInformation";
						condition = 1;
						modifierFunction = "[_target,_player,2,_this select 3] call ace_medical_fnc_modifyMedicalAction";
						exceptions[] = {"isNotInside"};
						icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
						distance = 1.75;
						class Bandage {
							displayName = "Bandage";
							distance = 2;
							condition = "[_player,_target,'hand_l','Bandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','Bandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 1;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class FieldDressing {
							displayName = "Field Dressing";
							distance = 5;
							condition = "[_player,_target,'hand_l','FieldDressing'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','FieldDressing'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PackingBandage: FieldDressing {
							displayName = "Packing Bandage";
							condition = "[_player,_target,'hand_l','PackingBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','PackingBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class ElasticBandage: FieldDressing {
							displayName = "Elastic Bandage";
							condition = "[_player,_target,'hand_l','ElasticBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','ElasticBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class QuikClot: FieldDressing {
							displayName = "QuikClot";
							condition = "[_player,_target,'hand_l','QuikClot'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','QuikClot'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Tourniquet: FieldDressing {
							displayName = "Tourniquet";
							condition = "[_player,_target,'hand_l','Tourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','Tourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Morphine: FieldDressing {
							displayName = "Inject Morphine";
							condition = "[_player,_target,'hand_l','Morphine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','Morphine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Adenosine: Morphine {
							displayName = "Inject Adenosine";
							condition = "[_player,_target,'hand_l','Adenosine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','Adenosine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Atropine: Morphine {
							displayName = "Inject Atropine";
							condition = "[_player,_target,'hand_l','Atropine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','Atropine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Epinephrine: Morphine {
							displayName = "Inject Epinephrine";
							condition = "[_player,_target,'hand_l','Epinephrine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','Epinephrine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV: FieldDressing {
							displayName = "Give Blood IV (1000ml)";
							condition = "[_player,_target,'hand_l','BloodIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','BloodIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV_500: BloodIV {
							displayName = "Give Blood IV (500ml)";
							condition = "[_player,_target,'hand_l','BloodIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','BloodIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV_250: BloodIV {
							displayName = "Give Blood IV (250ml)";
							condition = "[_player,_target,'hand_l','BloodIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','BloodIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV: BloodIV {
							displayName = "Give Plasma IV (1000ml)";
							condition = "[_player,_target,'hand_l','PlasmaIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','PlasmaIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV_500: PlasmaIV {
							displayName = "Give Plasma IV (500ml)";
							condition = "[_player,_target,'hand_l','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','PlasmaIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV_250: PlasmaIV {
							displayName = "Give Plasma IV (250ml)";
							condition = "[_player,_target,'hand_l','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','PlasmaIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV: BloodIV {
							displayName = "Give Saline IV (1000ml)";
							condition = "[_player,_target,'hand_l','SalineIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','SalineIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV_500: SalineIV {
							displayName = "Give Saline IV (500ml)";
							condition = "[_player,_target,'hand_l','SalineIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','SalineIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV_250: SalineIV {
							displayName = "Give Saline IV (250ml)";
							condition = "[_player,_target,'hand_l','SalineIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','SalineIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class CheckPulse: FieldDressing {
							displayName = "Check Pulse";
							condition = "[_player,_target,'hand_l','CheckPulse'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','CheckPulse'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class CheckBloodPressure: CheckPulse {
							displayName = "Check Blood Pressure";
							condition = "[_player,_target,'hand_l','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','CheckBloodPressure'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// CheckPulse
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class RemoveTourniquet: Tourniquet {
							displayName = "Remove Tourniquet";
							condition = "[_player,_target,'hand_l','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_l','RemoveTourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// Tourniquet
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
					};
					class ACE_ArmRight {
						displayName = "Right Arm";
						runOnHover = 1;
						statement = "[_target,true,3] call ace_medical_fnc_displayPatientInformation";
						condition = 1;
						modifierFunction = "[_target,_player,3,_this select 3] call ace_medical_fnc_modifyMedicalAction";
						exceptions[] = {"isNotInside"};
						icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
						distance = 1.75;
						class Bandage {
							displayName = "Bandage";
							distance = 2;
							condition = "[_player,_target,'hand_r','Bandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','Bandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 1;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class FieldDressing {
							displayName = "Field Dressing";
							distance = 5;
							condition = "[_player,_target,'hand_r','FieldDressing'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','FieldDressing'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PackingBandage: FieldDressing {
							displayName = "Packing Bandage";
							condition = "[_player,_target,'hand_r','PackingBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','PackingBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class ElasticBandage: FieldDressing {
							displayName = "Elastic Bandage";
							condition = "[_player,_target,'hand_r','ElasticBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','ElasticBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class QuikClot: FieldDressing {
							displayName = "QuikClot";
							condition = "[_player,_target,'hand_r','QuikClot'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','QuikClot'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class Tourniquet: FieldDressing {
							displayName = "Tourniquet";
							condition = "[_player,_target,'hand_r','Tourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','Tourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Morphine: FieldDressing {
							displayName = "Inject Morphine";
							condition = "[_player,_target,'hand_r','Morphine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','Morphine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Adenosine: Morphine {
							displayName = "Inject Adenosine";
							condition = "[_player,_target,'hand_r','Adenosine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','Adenosine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Atropine: Morphine {
							displayName = "Inject Atropine";
							condition = "[_player,_target,'hand_r','Atropine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','Atropine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// Morphine
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Epinephrine: Morphine {
							displayName = "Inject Epinephrine";
							condition = "[_player,_target,'hand_r','Epinephrine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','Epinephrine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// Morphine
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV: FieldDressing {
							displayName = "Give Blood IV (1000ml)";
							condition = "[_player,_target,'hand_r','BloodIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','BloodIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV_500: BloodIV {
							displayName = "Give Blood IV (500ml)";
							condition = "[_player,_target,'hand_r','BloodIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','BloodIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV_250: BloodIV {
							displayName = "Give Blood IV (250ml)";
							condition = "[_player,_target,'hand_r','BloodIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','BloodIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV: BloodIV {
							displayName = "Give Plasma IV (1000ml)";
							condition = "[_player,_target,'hand_r','PlasmaIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','PlasmaIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV_500: PlasmaIV {
							displayName = "Give Plasma IV (500ml)";
							condition = "[_player,_target,'hand_r','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','PlasmaIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV_250: PlasmaIV {
							displayName = "Give Plasma IV (250ml)";
							condition = "[_player,_target,'hand_r','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','PlasmaIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV: BloodIV {
							displayName = "Give Saline IV (1000ml)";
							condition = "[_player,_target,'hand_r','SalineIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','SalineIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV_500: SalineIV {
							displayName = "Give Saline IV (500ml)";
							condition = "[_player,_target,'hand_r','SalineIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','SalineIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV_250: SalineIV {
							displayName = "Give Saline IV (250ml)";
							condition = "[_player,_target,'hand_r','SalineIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','SalineIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class CheckPulse: FieldDressing {
							displayName = "Check Pulse";
							condition = "[_player,_target,'hand_r','CheckPulse'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','CheckPulse'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class CheckBloodPressure: CheckPulse {
							displayName = "Check Blood Pressure";
							condition = "[_player,_target,'hand_r','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','CheckBloodPressure'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// CheckPulse
							icon = "";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class RemoveTourniquet: Tourniquet {
							displayName = "Remove Tourniquet";
							condition = "[_player,_target,'hand_r','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'hand_r','RemoveTourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// Tourniquet
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
					};
					class ACE_LegLeft {
						displayName = "Left Leg";
						runOnHover = 1;
						statement = "[_target,true,4] call ace_medical_fnc_displayPatientInformation";
						condition = 1;
						modifierFunction = "[_target,_player,4,_this select 3] call ace_medical_fnc_modifyMedicalAction";
						exceptions[] = {"isNotInside"};
						icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
						distance = 1.75;
						class Bandage {
							displayName = "Bandage";
							distance = 2;
							condition = "[_player,_target,'leg_l','Bandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','Bandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 1;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class FieldDressing {
							displayName = "Field Dressing";
							distance = 5;
							condition = "[_player,_target,'leg_l','FieldDressing'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','FieldDressing'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PackingBandage: FieldDressing {
							displayName = "Packing Bandage";
							condition = "[_player,_target,'leg_l','PackingBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','PackingBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class ElasticBandage: FieldDressing {
							displayName = "Elastic Bandage";
							condition = "[_player,_target,'leg_l','ElasticBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','ElasticBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class QuikClot: FieldDressing {
							displayName = "QuikClot";
							condition = "[_player,_target,'leg_l','QuikClot'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','QuikClot'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class Tourniquet: FieldDressing {
							displayName = "Tourniquet";
							condition = "[_player,_target,'leg_l','Tourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','Tourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Morphine: FieldDressing {
							displayName = "Inject Morphine";
							condition = "[_player,_target,'leg_l','Morphine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','Morphine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Adenosine: Morphine {
							displayName = "Inject Atropine";
							condition = "[_player,_target,'leg_l','Adenosine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','Adenosine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Atropine: Morphine {
							displayName = "Inject Atropine";
							condition = "[_player,_target,'leg_l','Atropine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','Atropine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Epinephrine: Morphine {
							displayName = "Inject Epinephrine";
							condition = "[_player,_target,'leg_l','Epinephrine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','Epinephrine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// Morphine
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV: FieldDressing {
							displayName = "Give Blood IV (1000ml)";
							condition = "[_player,_target,'leg_l','BloodIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','BloodIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV_500: BloodIV {
							displayName = "Give Blood IV (500ml)";
							condition = "[_player,_target,'leg_l','BloodIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','BloodIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV_250: BloodIV {
							displayName = "Give Blood IV (250ml)";
							condition = "[_player,_target,'leg_l','BloodIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','BloodIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV: BloodIV {
							displayName = "Give Plasma IV (1000ml)";
							condition = "[_player,_target,'leg_l','PlasmaIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','PlasmaIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV_500: PlasmaIV {
							displayName = "Give Plasma IV (500ml)";
							condition = "[_player,_target,'leg_l','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','PlasmaIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV_250: PlasmaIV {
							displayName = "Give Plasma IV (250ml)";
							condition = "[_player,_target,'leg_l','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','PlasmaIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV: BloodIV {
							displayName = "Give Saline IV (1000ml)";
							condition = "[_player,_target,'leg_l','SalineIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','SalineIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV_500: SalineIV {
							displayName = "Give Saline IV (500ml)";
							condition = "[_player,_target,'leg_l','SalineIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','SalineIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV_250: SalineIV {
							displayName = "Give Saline IV (250ml)";
							condition = "[_player,_target,'leg_l','SalineIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','SalineIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class RemoveTourniquet: Tourniquet {
							displayName = "Remove Tourniquet";
							condition = "[_player,_target,'leg_l','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_l','RemoveTourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// Tourniquet
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
					};
					class ACE_LegRight {
						displayName = "Right Leg";
						runOnHover = 1;
						statement = "[_target,true,5] call ace_medical_fnc_displayPatientInformation";
						condition = 1;
						modifierFunction = "[_target,_player,5,_this select 3] call ace_medical_fnc_modifyMedicalAction";
						exceptions[] = {"isNotInside"};
						icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
						distance = 1.75;
						class Bandage {
							displayName = "Bandage";
							distance = 2;
							condition = "[_player,_target,'leg_r','Bandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','Bandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 1;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class FieldDressing {
							displayName = "Field Dressing";
							distance = 5;
							condition = "[_player,_target,'leg_r','FieldDressing'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','FieldDressing'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class PackingBandage: FieldDressing {
							displayName = "Packing Bandage";
							condition = "[_player,_target,'leg_r','PackingBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','PackingBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class ElasticBandage: FieldDressing {
							displayName = "Elastic Bandage";
							condition = "[_player,_target,'leg_r','ElasticBandage'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','ElasticBandage'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class QuikClot: FieldDressing {
							displayName = "QuikClot";
							condition = "[_player,_target,'leg_r','QuikClot'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','QuikClot'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
							icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
						};
						class Tourniquet: FieldDressing {
							displayName = "Tourniquet";
							condition = "[_player,_target,'leg_r','Tourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','Tourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Morphine: FieldDressing {
							displayName = "Inject Morphine";
							condition = "[_player,_target,'leg_r','Morphine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','Morphine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Adenosine: Morphine {
							displayName = "Inject Atropine";
							condition = "[_player,_target,'leg_r','Adenosine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','Adenosine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Atropine: Morphine {
							displayName = "Inject Atropine";
							condition = "[_player,_target,'leg_r','Atropine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','Atropine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// Morphine
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class Epinephrine: Morphine {
							displayName = "Inject Epinephrine";
							condition = "[_player,_target,'leg_r','Epinephrine'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','Epinephrine'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// Morphine
							icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV: FieldDressing {
							displayName = "Give Blood IV (1000ml)";
							condition = "[_player,_target,'leg_r','BloodIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','BloodIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV_500: BloodIV {
							displayName = "Give Blood IV (500ml)";
							condition = "[_player,_target,'leg_r','BloodIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','BloodIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class BloodIV_250: BloodIV {
							displayName = "Give Blood IV (250ml)";
							condition = "[_player,_target,'leg_r','BloodIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','BloodIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV: BloodIV {
							displayName = "Give Plasma IV (1000ml)";
							condition = "[_player,_target,'leg_r','PlasmaIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','PlasmaIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV_500: PlasmaIV {
							displayName = "Give Plasma IV (500ml)";
							condition = "[_player,_target,'leg_r','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','PlasmaIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class PlasmaIV_250: PlasmaIV {
							displayName = "Give Plasma IV (250ml)";
							condition = "[_player,_target,'leg_r','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','PlasmaIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV: BloodIV {
							displayName = "Give Saline IV (1000ml)";
							condition = "[_player,_target,'leg_r','SalineIV'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','SalineIV'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV_500: SalineIV {
							displayName = "Give Saline IV (500ml)";
							condition = "[_player,_target,'leg_r','SalineIV_500'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','SalineIV_500'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class SalineIV_250: SalineIV {
							displayName = "Give Saline IV (250ml)";
							condition = "[_player,_target,'leg_r','SalineIV_250'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','SalineIV_250'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// BloodIV
							icon = "\z\ace\addons\medical\UI\icons\iv.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
						class RemoveTourniquet: Tourniquet {
							displayName = "Remove Tourniquet";
							condition = "[_player,_target,'leg_r','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
							statement = "[_player,_target,'leg_r','RemoveTourniquet'] call ace_medical_fnc_treatment";
							exceptions[] = {"isNotInside"};
							// Tourniquet
							icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
							// FieldDressing
							distance = 5;
							showDisabled = 0;
							priority = 2;
						};
					};
				};
				class ace_medical_loadPatient {
					displayName = "Load patient";
					distance = 5;
					condition = "_target getVariable[""""ACE_isUnconscious"""",false] && vehicle _target == _target";
					statement = "[_player,_target] call ace_medical_fnc_actionLoadUnit";
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					exceptions[] = {"isNotDragging", "isNotCarrying"};
				};
				class ace_medical_UnLoadPatient {
					displayName = "Unload patient";
					distance = 5;
					condition = "_target getVariable[""""ACE_isUnconscious"""",false] && vehicle _target != _target";
					statement = "[_player,_target] call ace_medical_fnc_actionUnloadUnit";
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
					exceptions[] = {"isNotDragging", "isNotCarrying", "isNotInside"};
				};
				class Medical_Menu {
					displayName = "Medical Menu";
					runOnHover = 0;
					exceptions[] = {"isNotInside"};
					condition = "[ACE_player,_target] call ace_medical_menu_fnc_canOpenMenu";
					statement = "[_target] call ace_medical_menu_fnc_openMenu";
					icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				};
				class ACE_RemoveHandcuffs {
					displayName = "Free Prisoner";
					selection = "righthand";
					distance = 2;
					condition = "[_player,_target] call ace_captives_fnc_canRemoveHandcuffs";
					statement = "[_player,_target] call ace_captives_fnc_doRemoveHandcuffs";
					exceptions[] = {};
					icon = "\z\ace\addons\captives\UI\handcuff_ca.paa";
				};
				class ACE_EscortCaptive {
					displayName = "Escort Prisoner";
					distance = 4;
					condition = "[_player,_target] call ace_captives_fnc_canEscortCaptive";
					statement = "[_player,_target,true] call ace_captives_fnc_doEscortCaptive";
					exceptions[] = {};
					showDisabled = 0;
					icon = "\z\ace\addons\captives\UI\captive_ca.paa";
					priority = 2.3;
				};
				class ACE_StopEscorting {
					displayName = "Release Prisoner";
					distance = 4;
					condition = "[_player,_target] call ace_captives_fnc_canStopEscorting";
					statement = "[_player,_target,false] call ace_captives_fnc_doEscortCaptive";
					exceptions[] = {"isNotEscorting"};
					showDisabled = 0;
					icon = "\z\ace\addons\captives\UI\captive_ca.paa";
					priority = 2.3;
				};
				class ACE_LoadCaptive {
					displayName = "Load Captive";
					distance = 4;
					condition = "[_player,_target,objNull] call ace_captives_fnc_canLoadCaptive";
					statement = "[_player,_target,objNull] call ace_captives_fnc_doLoadCaptive";
					exceptions[] = {"isNotEscorting"};
					showDisabled = 0;
					icon = "\z\ace\addons\captives\UI\captive_ca.paa";
					priority = 2.2;
				};
				class ace_captives_UnloadCaptive {
					displayName = "Unload Captive";
					distance = 4;
					condition = "[_player,_target] call ace_captives_fnc_canUnloadCaptive";
					statement = "[_player,_target] call ace_captives_fnc_doUnloadCaptive";
					priority = 1.2;
				};
				class ACE_DisarmInventory {
					displayName = "Open Inventory";
					distance = 3.5;
					condition = "[_player,_target] call ace_disarming_fnc_canPlayerDisarmUnit";
					statement = "[_player,_target] call ace_disarming_fnc_openDisarmDialog";
					icon = "\z\ace\addons\disarming\UI\disarm.paa";
					exceptions[] = {};
				};
				class ace_gunbag_weaponTo {
					displayName = "Put weapon into gunbag";
					condition = "([_target] call ace_gunbag_fnc_hasGunbag) && {[_player,_target] call ace_gunbag_fnc_canInteract== 0}";
					statement = "[_player,_target] call ace_gunbag_fnc_toGunbag";
					showDisabled = 0;
					priority = 1;
					icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
				};
				class ace_gunbag_weaponOff {
					displayName = "Get weapon out of gunbag";
					condition = "([_target] call ace_gunbag_fnc_hasGunbag) && {[_player,_target] call ace_gunbag_fnc_canInteract== 1}";
					statement = "[_player,_target] call ace_gunbag_fnc_offGunbag";
					showDisabled = 0;
					priority = 1;
					icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
				};
				class ace_gunbag_status {
					displayName = "Status";
					condition = "[_target] call ace_gunbag_fnc_hasGunbag";
					statement = "[_target] call ace_gunbag_fnc_status";
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\gunbag\ui\gunbag_icon_ca.paa";
				};
			};
			class ACE_Torso {
				selection = "spine3";
				displayName = "Torso";
				runOnHover = 1;
				statement = "[_target,true,1] call ace_medical_fnc_displayPatientInformation";
				condition = "ace_medical_menuTypeStyle== 0";
				modifierFunction = "[_target,_player,1,_this select 3] call ace_medical_fnc_modifyMedicalAction";
				exceptions[] = {};
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				distance = 1.75;
				class Bandage {
					displayName = "Bandage";
					distance = 2;
					condition = "[_player,_target,'body','Bandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','Bandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 1;
					priority = 2;
					enableInside = 1;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PlaceInBodyBag {
					displayName = "Place body in bodybag";
					distance = 2;
					condition = "[_player,_target,'body','BodyBag'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','BodyBag'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 1;
					priority = 2;
					enableInside = 1;
				};
				class TriageCard {
					displayName = "Triage Card";
					distance = 2;
					condition = 1;
					statement = "[_target,true] call ace_medical_fnc_displayTriageCard";
					exceptions[] = {};
					showDisabled = 1;
					priority = 2;
					enableInside = 1;
					icon = "\z\ace\addons\medical\UI\icons\triageCard.paa";
				};
				class Diagnose {
					displayName = "Diagnose";
					distance = 5;
					condition = "[_player,_target,'body','Diagnose'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','Diagnose'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 0;
					priority = 2;
					icon = "";
				};
				class FieldDressing {
					displayName = "Field Dressing";
					distance = 5;
					condition = "[_player,_target,'body','FieldDressing'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','FieldDressing'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 0;
					priority = 2;
					enableInside = 1;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PackingBandage: FieldDressing {
					displayName = "Packing Bandage";
					condition = "[_player,_target,'body','PackingBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','PackingBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					enableInside = 1;
				};
				class ElasticBandage: FieldDressing {
					displayName = "Elastic Bandage";
					condition = "[_player,_target,'body','ElasticBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','ElasticBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					enableInside = 1;
				};
				class QuikClot: FieldDressing {
					displayName = "QuikClot";
					condition = "[_player,_target,'body','QuikClot'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','QuikClot'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					enableInside = 1;
				};
				class SurgicalKit: FieldDressing {
					displayName = "Use Surgical Kit";
					condition = "[_player,_target,'body','SurgicalKit'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','SurgicalKit'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\surgicalKit.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					enableInside = 1;
				};
				class PersonalAidKit: FieldDressing {
					displayName = "Use Personal Aid Kit";
					condition = "[_player,_target,'body','PersonalAidKit'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','PersonalAidKit'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					enableInside = 1;
				};
				class CPR: FieldDressing {
					displayName = "CPR";
					condition = "[_player,_target,'body','CPR'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'body','CPR'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					enableInside = 1;
				};
			};
			class ACE_Head {
				selection = "pilot";
				displayName = "Head";
				runOnHover = 1;
				statement = "[_target,true,0] call ace_medical_fnc_displayPatientInformation";
				condition = "ace_medical_menuTypeStyle== 0";
				modifierFunction = "[_target,_player,0,_this select 3] call ace_medical_fnc_modifyMedicalAction";
				exceptions[] = {};
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				distance = 1.75;
				class Bandage {
					displayName = "Bandage";
					distance = 2;
					condition = "[_player,_target,'head','Bandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','Bandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 1;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class FieldDressing {
					displayName = "Field Dressing";
					distance = 5;
					condition = "[_player,_target,'head','FieldDressing'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','FieldDressing'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PackingBandage: FieldDressing {
					displayName = "Packing Bandage";
					condition = "[_player,_target,'head','PackingBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','PackingBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class ElasticBandage: FieldDressing {
					displayName = "Elastic Bandage";
					condition = "[_player,_target,'head','ElasticBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','ElasticBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class QuikClot: FieldDressing {
					displayName = "QuikClot";
					condition = "[_player,_target,'head','QuikClot'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','QuikClot'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class CheckPulse: FieldDressing {
					displayName = "Check Pulse";
					condition = "[_player,_target,'head','CheckPulse'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','CheckPulse'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class CheckBloodPressure: CheckPulse {
					displayName = "Check Blood Pressure";
					condition = "[_player,_target,'head','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','CheckBloodPressure'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// CheckPulse
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class CheckResponse: CheckPulse {
					displayName = "Response";
					condition = "[_player,_target,'head','CheckResponse'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','CheckResponse'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// CheckPulse
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Diagnose: CheckPulse {
					displayName = "Diagnose";
					condition = "[_player,_target,'head','Diagnose'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'head','Diagnose'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// CheckPulse
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
			};
			class ACE_ArmLeft {
				selection = "LeftForeArm";
				displayName = "Left Arm";
				runOnHover = 1;
				statement = "[_target,true,2] call ace_medical_fnc_displayPatientInformation";
				condition = "ace_medical_menuTypeStyle== 0";
				modifierFunction = "[_target,_player,2,_this select 3] call ace_medical_fnc_modifyMedicalAction";
				exceptions[] = {};
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				distance = 1.75;
				class Bandage {
					displayName = "Bandage";
					distance = 2;
					condition = "[_player,_target,'hand_l','Bandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','Bandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 1;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class FieldDressing {
					displayName = "Field Dressing";
					distance = 5;
					condition = "[_player,_target,'hand_l','FieldDressing'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','FieldDressing'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PackingBandage: FieldDressing {
					displayName = "Packing Bandage";
					condition = "[_player,_target,'hand_l','PackingBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','PackingBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class ElasticBandage: FieldDressing {
					displayName = "Elastic Bandage";
					condition = "[_player,_target,'hand_l','ElasticBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','ElasticBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class QuikClot: FieldDressing {
					displayName = "QuikClot";
					condition = "[_player,_target,'hand_l','QuikClot'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','QuikClot'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Tourniquet: FieldDressing {
					displayName = "Tourniquet";
					condition = "[_player,_target,'hand_l','Tourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','Tourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Morphine: FieldDressing {
					displayName = "Inject Morphine";
					condition = "[_player,_target,'hand_l','Morphine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','Morphine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Adenosine: Morphine {
					displayName = "Inject Adenosine";
					condition = "[_player,_target,'hand_l','Adenosine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','Adenosine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Atropine: Morphine {
					displayName = "Inject Atropine";
					condition = "[_player,_target,'hand_l','Atropine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','Atropine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Epinephrine: Morphine {
					displayName = "Inject Epinephrine";
					condition = "[_player,_target,'hand_l','Epinephrine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','Epinephrine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV: FieldDressing {
					displayName = "Give Blood IV (1000ml)";
					condition = "[_player,_target,'hand_l','BloodIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','BloodIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV_500: BloodIV {
					displayName = "Give Blood IV (500ml)";
					condition = "[_player,_target,'hand_l','BloodIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','BloodIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV_250: BloodIV {
					displayName = "Give Blood IV (250ml)";
					condition = "[_player,_target,'hand_l','BloodIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','BloodIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV: BloodIV {
					displayName = "Give Plasma IV (1000ml)";
					condition = "[_player,_target,'hand_l','PlasmaIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','PlasmaIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV_500: PlasmaIV {
					displayName = "Give Plasma IV (500ml)";
					condition = "[_player,_target,'hand_l','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','PlasmaIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV_250: PlasmaIV {
					displayName = "Give Plasma IV (250ml)";
					condition = "[_player,_target,'hand_l','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','PlasmaIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV: BloodIV {
					displayName = "Give Saline IV (1000ml)";
					condition = "[_player,_target,'hand_l','SalineIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','SalineIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV_500: SalineIV {
					displayName = "Give Saline IV (500ml)";
					condition = "[_player,_target,'hand_l','SalineIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','SalineIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV_250: SalineIV {
					displayName = "Give Saline IV (250ml)";
					condition = "[_player,_target,'hand_l','SalineIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','SalineIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class CheckPulse: FieldDressing {
					displayName = "Check Pulse";
					condition = "[_player,_target,'hand_l','CheckPulse'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','CheckPulse'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class CheckBloodPressure: CheckPulse {
					displayName = "Check Blood Pressure";
					condition = "[_player,_target,'hand_l','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','CheckBloodPressure'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// CheckPulse
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class RemoveTourniquet: Tourniquet {
					displayName = "Remove Tourniquet";
					condition = "[_player,_target,'hand_l','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_l','RemoveTourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// Tourniquet
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
			};
			class ACE_ArmRight {
				selection = "RightForeArm";
				displayName = "Right Arm";
				runOnHover = 1;
				statement = "[_target,true,3] call ace_medical_fnc_displayPatientInformation";
				condition = "ace_medical_menuTypeStyle== 0";
				modifierFunction = "[_target,_player,3,_this select 3] call ace_medical_fnc_modifyMedicalAction";
				exceptions[] = {};
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				distance = 1.75;
				class Bandage {
					displayName = "Bandage";
					distance = 2;
					condition = "[_player,_target,'hand_r','Bandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','Bandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 1;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class FieldDressing {
					displayName = "Field Dressing";
					distance = 5;
					condition = "[_player,_target,'hand_r','FieldDressing'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','FieldDressing'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PackingBandage: FieldDressing {
					displayName = "Packing Bandage";
					condition = "[_player,_target,'hand_r','PackingBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','PackingBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class ElasticBandage: FieldDressing {
					displayName = "Elastic Bandage";
					condition = "[_player,_target,'hand_r','ElasticBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','ElasticBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class QuikClot: FieldDressing {
					displayName = "QuikClot";
					condition = "[_player,_target,'hand_r','QuikClot'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','QuikClot'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class Tourniquet: FieldDressing {
					displayName = "Tourniquet";
					condition = "[_player,_target,'hand_r','Tourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','Tourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Morphine: FieldDressing {
					displayName = "Inject Morphine";
					condition = "[_player,_target,'hand_r','Morphine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','Morphine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Adenosine: Morphine {
					displayName = "Inject Adenosine";
					condition = "[_player,_target,'hand_r','Adenosine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','Adenosine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Atropine: Morphine {
					displayName = "Inject Atropine";
					condition = "[_player,_target,'hand_r','Atropine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','Atropine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// Morphine
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Epinephrine: Morphine {
					displayName = "Inject Epinephrine";
					condition = "[_player,_target,'hand_r','Epinephrine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','Epinephrine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// Morphine
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV: FieldDressing {
					displayName = "Give Blood IV (1000ml)";
					condition = "[_player,_target,'hand_r','BloodIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','BloodIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV_500: BloodIV {
					displayName = "Give Blood IV (500ml)";
					condition = "[_player,_target,'hand_r','BloodIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','BloodIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV_250: BloodIV {
					displayName = "Give Blood IV (250ml)";
					condition = "[_player,_target,'hand_r','BloodIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','BloodIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV: BloodIV {
					displayName = "Give Plasma IV (1000ml)";
					condition = "[_player,_target,'hand_r','PlasmaIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','PlasmaIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV_500: PlasmaIV {
					displayName = "Give Plasma IV (500ml)";
					condition = "[_player,_target,'hand_r','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','PlasmaIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV_250: PlasmaIV {
					displayName = "Give Plasma IV (250ml)";
					condition = "[_player,_target,'hand_r','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','PlasmaIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV: BloodIV {
					displayName = "Give Saline IV (1000ml)";
					condition = "[_player,_target,'hand_r','SalineIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','SalineIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV_500: SalineIV {
					displayName = "Give Saline IV (500ml)";
					condition = "[_player,_target,'hand_r','SalineIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','SalineIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV_250: SalineIV {
					displayName = "Give Saline IV (250ml)";
					condition = "[_player,_target,'hand_r','SalineIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','SalineIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class CheckPulse: FieldDressing {
					displayName = "Check Pulse";
					condition = "[_player,_target,'hand_r','CheckPulse'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','CheckPulse'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class CheckBloodPressure: CheckPulse {
					displayName = "Check Blood Pressure";
					condition = "[_player,_target,'hand_r','CheckBloodPressure'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','CheckBloodPressure'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// CheckPulse
					icon = "";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class RemoveTourniquet: Tourniquet {
					displayName = "Remove Tourniquet";
					condition = "[_player,_target,'hand_r','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'hand_r','RemoveTourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// Tourniquet
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
			};
			class ACE_LegLeft {
				selection = "LKnee";
				displayName = "Left Leg";
				runOnHover = 1;
				statement = "[_target,true,4] call ace_medical_fnc_displayPatientInformation";
				condition = "ace_medical_menuTypeStyle== 0";
				modifierFunction = "[_target,_player,4,_this select 3] call ace_medical_fnc_modifyMedicalAction";
				exceptions[] = {};
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				distance = 1.75;
				class Bandage {
					displayName = "Bandage";
					distance = 2;
					condition = "[_player,_target,'leg_l','Bandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','Bandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 1;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class FieldDressing {
					displayName = "Field Dressing";
					distance = 5;
					condition = "[_player,_target,'leg_l','FieldDressing'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','FieldDressing'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PackingBandage: FieldDressing {
					displayName = "Packing Bandage";
					condition = "[_player,_target,'leg_l','PackingBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','PackingBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class ElasticBandage: FieldDressing {
					displayName = "Elastic Bandage";
					condition = "[_player,_target,'leg_l','ElasticBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','ElasticBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class QuikClot: FieldDressing {
					displayName = "QuikClot";
					condition = "[_player,_target,'leg_l','QuikClot'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','QuikClot'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class Tourniquet: FieldDressing {
					displayName = "Tourniquet";
					condition = "[_player,_target,'leg_l','Tourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','Tourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Morphine: FieldDressing {
					displayName = "Inject Morphine";
					condition = "[_player,_target,'leg_l','Morphine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','Morphine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Adenosine: Morphine {
					displayName = "Inject Atropine";
					condition = "[_player,_target,'leg_l','Adenosine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','Adenosine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Atropine: Morphine {
					displayName = "Inject Atropine";
					condition = "[_player,_target,'leg_l','Atropine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','Atropine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Epinephrine: Morphine {
					displayName = "Inject Epinephrine";
					condition = "[_player,_target,'leg_l','Epinephrine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','Epinephrine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// Morphine
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV: FieldDressing {
					displayName = "Give Blood IV (1000ml)";
					condition = "[_player,_target,'leg_l','BloodIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','BloodIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV_500: BloodIV {
					displayName = "Give Blood IV (500ml)";
					condition = "[_player,_target,'leg_l','BloodIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','BloodIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV_250: BloodIV {
					displayName = "Give Blood IV (250ml)";
					condition = "[_player,_target,'leg_l','BloodIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','BloodIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV: BloodIV {
					displayName = "Give Plasma IV (1000ml)";
					condition = "[_player,_target,'leg_l','PlasmaIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','PlasmaIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV_500: PlasmaIV {
					displayName = "Give Plasma IV (500ml)";
					condition = "[_player,_target,'leg_l','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','PlasmaIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV_250: PlasmaIV {
					displayName = "Give Plasma IV (250ml)";
					condition = "[_player,_target,'leg_l','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','PlasmaIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV: BloodIV {
					displayName = "Give Saline IV (1000ml)";
					condition = "[_player,_target,'leg_l','SalineIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','SalineIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV_500: SalineIV {
					displayName = "Give Saline IV (500ml)";
					condition = "[_player,_target,'leg_l','SalineIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','SalineIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV_250: SalineIV {
					displayName = "Give Saline IV (250ml)";
					condition = "[_player,_target,'leg_l','SalineIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','SalineIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class RemoveTourniquet: Tourniquet {
					displayName = "Remove Tourniquet";
					condition = "[_player,_target,'leg_l','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_l','RemoveTourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// Tourniquet
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
			};
			class ACE_LegRight {
				selection = "RKnee";
				displayName = "Right Leg";
				runOnHover = 1;
				statement = "[_target,true,5] call ace_medical_fnc_displayPatientInformation";
				condition = "ace_medical_menuTypeStyle== 0";
				modifierFunction = "[_target,_player,5,_this select 3] call ace_medical_fnc_modifyMedicalAction";
				exceptions[] = {};
				icon = "\z\ace\addons\medical\UI\icons\medical_cross.paa";
				distance = 1.75;
				class Bandage {
					displayName = "Bandage";
					distance = 2;
					condition = "[_player,_target,'leg_r','Bandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','Bandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 1;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class FieldDressing {
					displayName = "Field Dressing";
					distance = 5;
					condition = "[_player,_target,'leg_r','FieldDressing'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','FieldDressing'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class PackingBandage: FieldDressing {
					displayName = "Packing Bandage";
					condition = "[_player,_target,'leg_r','PackingBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','PackingBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\packingBandage.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class ElasticBandage: FieldDressing {
					displayName = "Elastic Bandage";
					condition = "[_player,_target,'leg_r','ElasticBandage'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','ElasticBandage'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class QuikClot: FieldDressing {
					displayName = "QuikClot";
					condition = "[_player,_target,'leg_r','QuikClot'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','QuikClot'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
					icon = "\z\ace\addons\medical\UI\icons\bandage.paa";
				};
				class Tourniquet: FieldDressing {
					displayName = "Tourniquet";
					condition = "[_player,_target,'leg_r','Tourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','Tourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Morphine: FieldDressing {
					displayName = "Inject Morphine";
					condition = "[_player,_target,'leg_r','Morphine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','Morphine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Adenosine: Morphine {
					displayName = "Inject Atropine";
					condition = "[_player,_target,'leg_r','Adenosine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','Adenosine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Atropine: Morphine {
					displayName = "Inject Atropine";
					condition = "[_player,_target,'leg_r','Atropine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','Atropine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// Morphine
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class Epinephrine: Morphine {
					displayName = "Inject Epinephrine";
					condition = "[_player,_target,'leg_r','Epinephrine'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','Epinephrine'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// Morphine
					icon = "\z\ace\addons\medical\UI\icons\autoInjector.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV: FieldDressing {
					displayName = "Give Blood IV (1000ml)";
					condition = "[_player,_target,'leg_r','BloodIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','BloodIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV_500: BloodIV {
					displayName = "Give Blood IV (500ml)";
					condition = "[_player,_target,'leg_r','BloodIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','BloodIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class BloodIV_250: BloodIV {
					displayName = "Give Blood IV (250ml)";
					condition = "[_player,_target,'leg_r','BloodIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','BloodIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV: BloodIV {
					displayName = "Give Plasma IV (1000ml)";
					condition = "[_player,_target,'leg_r','PlasmaIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','PlasmaIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV_500: PlasmaIV {
					displayName = "Give Plasma IV (500ml)";
					condition = "[_player,_target,'leg_r','PlasmaIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','PlasmaIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class PlasmaIV_250: PlasmaIV {
					displayName = "Give Plasma IV (250ml)";
					condition = "[_player,_target,'leg_r','PlasmaIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','PlasmaIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV: BloodIV {
					displayName = "Give Saline IV (1000ml)";
					condition = "[_player,_target,'leg_r','SalineIV'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','SalineIV'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV_500: SalineIV {
					displayName = "Give Saline IV (500ml)";
					condition = "[_player,_target,'leg_r','SalineIV_500'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','SalineIV_500'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class SalineIV_250: SalineIV {
					displayName = "Give Saline IV (250ml)";
					condition = "[_player,_target,'leg_r','SalineIV_250'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','SalineIV_250'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// BloodIV
					icon = "\z\ace\addons\medical\UI\icons\iv.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
				class RemoveTourniquet: Tourniquet {
					displayName = "Remove Tourniquet";
					condition = "[_player,_target,'leg_r','RemoveTourniquet'] call ace_medical_fnc_canTreatCached";
					statement = "[_player,_target,'leg_r','RemoveTourniquet'] call ace_medical_fnc_treatment";
					exceptions[] = {};
					// Tourniquet
					icon = "\z\ace\addons\medical\UI\icons\tourniquet.paa";
					// FieldDressing
					distance = 5;
					showDisabled = 0;
					priority = 2;
				};
			};
			class ACE_Weapon {
				displayName = "Weapon";
				position = "call ace_interaction_fnc_getWeaponPos";
				distance = 1.5;
				condition = "";
				statement = "";
				class ace_overheating_SwapBarrel {
					displayName = "Swap barrel";
					condition = "[_player,currentWeapon _target] call ace_overheating_fnc_canSwapBarrel";
					statement = "[_player,_target,currentWeapon _target] call ace_overheating_fnc_swapBarrelAssistant;";
					icon = "\z\ace\addons\overheating\UI\spare_barrel_ca.paa";
				};
				class ace_overheating_CheckTemperature {
					displayName = "Check weapon temperature";
					condition = "ace_overheating_enabled&& {switch (currentWeapon _target) do {case (''): {false}; case (primaryWeapon _target); case (handgunWeapon _target): {true}; default {false}}}";
					exceptions[] = {"isNotInside", "isNotSitting"};
					statement = "[_player,_target,currentWeapon _target] call ace_overheating_fnc_checkTemperature;";
					icon = "\z\ace\addons\overheating\UI\temp_ca.paa";
				};
				class ace_reload_LinkBelt {
					displayName = "Link belt";
					distance = 2;
					condition = "[_player,_target] call ace_reload_fnc_canLinkBelt";
					statement = "[_player,_target] call ace_reload_fnc_startLinkingBelt";
				};
				class ace_reload_CheckAmmo {
					displayName = "Check Ammo";
					distance = 2;
					condition = "[_player,_target] call ace_reload_fnc_canCheckAmmo";
					statement = "[_player,_target] call ace_reload_fnc_checkAmmo";
				};
				class ace_rangecard_copyRangeCard {
					displayName = "Copy Range Card";
					distance = 2;
					condition = "_target call ace_rangecard_fnc_canCopy";
					statement = "_target call ace_rangecard_fnc_updateClassNames";
					icon = "\z\ace\addons\rangecard\UI\RangeCard_Icon.paa";
				};
			};
			class ACE_TapShoulderRight {
				displayName = "Tap Shoulder";
				selection = "rightshoulder";
				distance = 2;
				condition = "[_player,_target] call ace_interaction_fnc_canTapShoulder";
				statement = "[_player,_target,0] call ace_interaction_fnc_tapShoulder";
			};
			class ACE_TapShoulderLeft {
				displayName = "Tap Shoulder";
				selection = "leftshoulder";
				distance = 2;
				condition = "[_player,_target] call ace_interaction_fnc_canTapShoulder";
				statement = "[_player,_target,1] call ace_interaction_fnc_tapShoulder";
			};
			class ace_reloadlaunchers_ReloadLauncher {
				displayName = "Load launcher";
				selection = "launcher";
				distance = 4;
				condition = "";
				insertChildren = "_this call ace_reloadlaunchers_fnc_addMissileReloadActions";
			};
			class ACE_ApplyHandcuffs {
				displayName = "Take Prisoner";
				selection = "righthand";
				distance = 2;
				condition = "[_player,_target] call ace_captives_fnc_canApplyHandcuffs";
				statement = "[_player,_target] call ace_captives_fnc_doApplyHandcuffs";
				exceptions[] = {};
				icon = "\z\ace\addons\captives\UI\handcuff_ca.paa";
			};
			class ACE_Dogtag {
				displayName = "Dog Tag";
				condition = "[_player,_target] call ace_dogtags_fnc_canTakeDogtag";
				statement = "";
				showDisabled = 0;
				distance = 1.75;
				icon = "\z\ace\addons\dogtags\data\dogtag_icon_ca.paa";
				selection = "neck";
				class ACE_CheckDogtag {
					displayName = "Check";
					condition = "[_player,_target] call ace_dogtags_fnc_canCheckDogtag";
					statement = "[_player,_target] call ace_dogtags_fnc_checkDogtag";
					showDisabled = 0;
					priority = 3;
					icon = "\z\ace\addons\dogtags\data\dogtag_icon_ca.paa";
				};
				class ACE_TakeDogtag {
					displayName = "Take";
					condition = "[_player,_target] call ace_dogtags_fnc_canTakeDogtag";
					statement = "[_player,_target] call ace_dogtags_fnc_takeDogtag";
					showDisabled = 0;
					priority = 3;
					icon = "\z\ace\addons\dogtags\data\dogtag_icon_ca.paa";
				};
			};
		};
		maxGunElev = 80;
		// Man
		mapSize = 0.5;
		autocenter = 0;
		isMan = 1;
		impactEffectsBlood = "ImpactEffectsBlood";
		impactEffectsNoBlood = "ImpactPlastic";
		displayName = "Man";
		genericNames = "EnglishMen";
		aiBrainType = "DefaultSoldierBrain";
		audible = 0.05;
		formationX = 5;
		formationZ = 5;
		precision = 1;
		brakeDistance = 1;
		steerAheadSimul = 0.1;
		steerAheadPlan = 0.1;
		steerAheadSimulDiving = 0.5;
		steerAheadPlanDiving = 0.5;
		maxSpeed = 24;
		maxTurnAngularVelocity = 3;
		costTurnCoef = 0.025;
		lyingLimitSpeedHiding = 0.8;
		crouchProbabilityHiding = 0.8;
		lyingLimitSpeedCombat = 1.8;
		crouchProbabilityCombat = 0.4;
		crouchProbabilityEngage = 0.75;
		lyingLimitSpeedStealth = 2;
		irTarget = 0;
		canHideBodies = 0;
		canDeactivateMines = 0;
		unitInfoType = "RscUnitInfoSoldier";
		hideUnitInfo = 1;
		simulation = "soldier";
		class TalkTopics {};
		commanderCanSee = "31+32";
		respawnMagazines[] = {};
		respawnItems[] = {};
		respawnLinkedItems[] = {};
		class HeadLimits {
			initAngleX = 5;
			minAngleX = -40;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			minAngleZ = -45;
			maxAngleZ = 45;
			rotZRadius = 0.2;
		};
		microMimics = "Micro";
		magazines[] = {};
		backpack = "";
		glassesEnabled = 1;
		memoryPointPilot = "pilot";
		memoryPointHandGrenade = "granat";
		selectionPersonality = "osobnost";
		selectionPersonalityHL = "hl";
		selectionGlasses = "brejle";
		hitSound1[] = {"", 0.0562341, 1};
		hitSound2[] = {"", 0.0562341, 1};
		hitSound3[] = {"", 0.0562341, 1};
		hitSound4[] = {"", 0.0562341, 1};
		hitSound5[] = {"", 0.0562341, 1};
		hitSound6[] = {"", 0.0562341, 1};
		hitSound7[] = {"", 0.0562341, 1};
		hitSound8[] = {"", 0.0562341, 1};
		hitSound9[] = {"", 0.0562341, 1};
		hitSound10[] = {"", 0.0562341, 1};
		hitSound11[] = {"", 0.0562341, 1};
		hitSound12[] = {"", 0.0562341, 1};
		hitSound13[] = {"", 0.0562341, 1};
		hitSound14[] = {"", 0.0562341, 1};
		hitSound15[] = {"", 0.0562341, 1};
		hitSound16[] = {"", 0.0562341, 1};
		hitSound17[] = {"", 0.0562341, 1};
		hitSound18[] = {"", 0.0562341, 1};
		hitSound19[] = {"", 0.0562341, 1};
		hitSound20[] = {"", 0.0562341, 1};
		hitSounds[] = {"hitSound1", 0.05, "hitSound2", 0.05, "hitSound3", 0.05, "hitSound4", 0.05, "hitSound5", 0.05, "hitSound6", 0.05, "hitSound7", 0.05, "hitSound8", 0.05, "hitSound9", 0.05, "hitSound10", 0.05, "hitSound11", 0.05, "hitSound12", 0.05, "hitSound13", 0.05, "hitSound14", 0.05, "hitSound15", 0.05, "hitSound16", 0.05, "hitSound17", 0.05, "hitSound18", 0.05, "hitSound19", 0.05, "hitSound20", 0.05};
		emptySound[] = {"", 0, 1};
		additionalSound[] = {"", 1e-006, 1};
		class SoundBleeding {
			breath[] = {};
		};
		class HitDamage {};
		class Reflectors {};
		class MGunClouds{
			// WeaponCloudsMGun
			access = 0;
			cloudletGrowUp = 0.05;
			cloudletFadeIn = 0;
			cloudletFadeOut = 0.1;
			cloudletDuration = 0.05;
			cloudletAnimPeriod = 1;
			cloudletSize = 1;
			cloudletAlpha = 0.3;
			cloudletAccY = 0;
			cloudletMinYSpeed = -100;
			cloudletMaxYSpeed = 100;
			cloudletShape = "cloudletClouds";
			cloudletColor[] = {1, 1, 1, 0};
			timeToLive = 0;
			interval = 0.02;
			size = 0.3;
			sourceSize = 0.02;
			initT = 0;
			deltaT = 0;
			class Table {
				class T0 {
					maxT = 0;
					color[] = {1, 1, 1, 0};
				};
			};
		};
		// Man
		class GunClouds{
			cloudletGrowUp = 0.2;
			cloudletFadeIn = 0;
			cloudletFadeOut = 0.4;
			cloudletDuration = 0.2;
			cloudletAlpha = 1;
			cloudletAccY = 2;
			cloudletMinYSpeed = -10;
			cloudletMaxYSpeed = 10;
			interval = 0.02;
			size = 0.3;
			sourceSize = 0.015;
			// WeaponCloudsGun
			access = 0;
			cloudletAnimPeriod = 1;
			cloudletSize = 1;
			cloudletShape = "cloudletClouds";
			cloudletColor[] = {1, 1, 1, 0};
			timeToLive = 0;
			initT = 0;
			deltaT = 0;
			class Table {
				class T0 {
					maxT = 0;
					color[] = {1, 1, 1, 0};
				};
			};
		};
		class InventorySlots {};
		enableGPS = 0;
		characterID = -1;
		primaryAmmoCoef = 0.4;
		secondaryAmmoCoef = 0.2;
		handgunAmmoCoef = 0.1;
		allowedUniformSides[] = {};
		allowedHeadgearSides[] = {};
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_infantry_s"};
				speechPlural[] = {"veh_infantry_p"};
			};
		};
		breathingBubblesPoint = "BubblesEffect";
		breathingBubblesPointDir = "BubblesDir";
		breathingBubblesEffect = "ScubaEffect";
		breathingBubblesInteval = 10;
		rightDustEffects[] = {{"GdtGrassShort", "RDustEffectsMan"}, {"GdtGrassTall", "RDustEffectsMan"}, {"GdtRedDirt", "RDustEffectsManRed"}, {"GdtField", "RDustEffectsMan"}, {"GdtForest", "RDustEffectsMan"}, {"GdtVolcano", "RDustEffectsMan"}, {"GdtCliff", "RDustEffectsMan"}, {"GdtVolcanoBeach", "RDustEffectsMan"}, {"SurfRoadDirt_exp", "RDustEffectsManRed"}, {"SurfRoadConcrete_exp", "RDustEffectsMan"}, {"SurfRoadTarmac_exp", "RDustEffectsMan"}, {"GdtStratisConcrete", "RDustEffectsMan"}, {"GdtStratisBeach", "RDustEffectsMan"}, {"GdtStratisDirt", "RDustEffectsMan"}, {"GdtStratisSeabedCluttered", "RDustEffectsMan"}, {"GdtStratisSeabed", "RDustEffectsMan"}, {"GdtStratisDryGrass", "RDustEffectsMan"}, {"GdtStratisGreenGrass", "RDustEffectsMan"}, {"GdtStratisRocky", "RDustEffectsMan"}, {"GdtStratisThistles", "RDustEffectsMan"}, {"GdtConcrete", "RDustEffectsMan"}, {"GdtAsphalt", "RDustEffectsMan"}, {"GdtRubble", "RDustEffectsMan"}, {"GdtSoil", "RDustEffectsMan"}, {"GdtBeach", "RDustEffectsMan"}, {"GdtRock", "RDustEffectsMan"}, {"GdtDead", "RDustEffectsMan"}, {"Default", "RDustEffectsMan"}, {"GdtDesert", "RDustEffectsMan"}, {"GdtDesert1", "RDustEffectsMan"}, {"GdtDesert2", "RDustEffectsMan"}, {"GdtDirt", "RDustEffectsMan"}, {"GdtGrassGreen", "RDustEffectsMan"}, {"GdtGrassDry", "RDustEffectsMan"}, {"GdtGrassWild", "RDustEffectsMan"}, {"GdtWildField", "RDustEffectsMan"}, {"GdtWeed1", "RDustEffectsMan"}, {"GdtWeed2", "RDustEffectsMan"}, {"GdtThorn", "RDustEffectsMan"}, {"GdtStony", "RDustEffectsMan"}, {"GdtStonyGreen", "RDustEffectsMan"}, {"GdtStonyThistle", "RDustEffectsMan"}, {"GdtSeabedDeep", "RDustEffectsMan"}, {"GdtSeabed", "RDustEffectsMan"}, {"SurfRoadDirt", "RDustEffectsMan"}, {"SurfRoadConcrete", "RDustEffectsMan"}, {"SurfRoadTarmac", "RDustEffectsMan"}, {"SurfWood", "RDustEffectsMan"}, {"SurfMetal", "RDustEffectsMan"}, {"SurfRoofTin", "RDustEffectsMan"}, {"SurfRoofTiles", "RDustEffectsMan"}, {"SurfIntWood", "RDustEffectsMan"}, {"SurfIntConcrete", "RDustEffectsMan"}, {"SurfIntTiles", "RDustEffectsMan"}, {"SurfIntMetal", "RDustEffectsMan"}};
		leftDustEffects[] = {{"GdtGrassShort", "LDustEffectsMan"}, {"GdtGrassTall", "LDustEffectsMan"}, {"GdtRedDirt", "LDustEffectsManRed"}, {"GdtField", "LDustEffectsMan"}, {"GdtForest", "LDustEffectsMan"}, {"GdtVolcano", "LDustEffectsMan"}, {"GdtCliff", "LDustEffectsMan"}, {"GdtVolcanoBeach", "LDustEffectsMan"}, {"SurfRoadDirt_exp", "LDustEffectsManRed"}, {"SurfRoadConcrete_exp", "LDustEffectsMan"}, {"SurfRoadTarmac_exp", "LDustEffectsMan"}, {"GdtStratisConcrete", "LDustEffectsMan"}, {"GdtStratisBeach", "LDustEffectsMan"}, {"GdtStratisDirt", "LDustEffectsMan"}, {"GdtStratisSeabedCluttered", "LDustEffectsMan"}, {"GdtStratisSeabed", "LDustEffectsMan"}, {"GdtStratisDryGrass", "LDustEffectsMan"}, {"GdtStratisGreenGrass", "LDustEffectsMan"}, {"GdtStratisRocky", "LDustEffectsMan"}, {"GdtStratisThistles", "LDustEffectsMan"}, {"GdtConcrete", "LDustEffectsMan"}, {"GdtAsphalt", "LDustEffectsMan"}, {"GdtRubble", "LDustEffectsMan"}, {"GdtSoil", "LDustEffectsMan"}, {"GdtBeach", "LDustEffectsMan"}, {"GdtRock", "LDustEffectsMan"}, {"GdtDead", "LDustEffectsMan"}, {"Default", "LDustEffectsMan"}, {"GdtDesert", "LDustEffectsMan"}, {"GdtDesert1", "LDustEffectsMan"}, {"GdtDesert2", "LDustEffectsMan"}, {"GdtDirt", "LDustEffectsMan"}, {"GdtGrassGreen", "LDustEffectsMan"}, {"GdtGrassDry", "LDustEffectsMan"}, {"GdtGrassWild", "LDustEffectsMan"}, {"GdtWildField", "LDustEffectsMan"}, {"GdtWeed1", "LDustEffectsMan"}, {"GdtWeed2", "LDustEffectsMan"}, {"GdtThorn", "LDustEffectsMan"}, {"GdtStony", "LDustEffectsMan"}, {"GdtStonyGreen", "LDustEffectsMan"}, {"GdtStonyThistle", "LDustEffectsMan"}, {"GdtSeabedDeep", "LDustEffectsMan"}, {"GdtSeabed", "LDustEffectsMan"}, {"SurfRoadDirt", "LDustEffectsMan"}, {"SurfRoadConcrete", "LDustEffectsMan"}, {"SurfRoadTarmac", "LDustEffectsMan"}, {"SurfWood", "LDustEffectsMan"}, {"SurfMetal", "LDustEffectsMan"}, {"SurfRoofTin", "LDustEffectsMan"}, {"SurfRoofTiles", "LDustEffectsMan"}, {"SurfIntWood", "LDustEffectsMan"}, {"SurfIntConcrete", "LDustEffectsMan"}, {"SurfIntTiles", "LDustEffectsMan"}, {"SurfIntMetal", "LDustEffectsMan"}};
		textSingular = "infantry";
		textPlural = "infantry";
		nameSound = "veh_infantry_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Man.jpg";
		sensitivityEar = 0.125;
		sensitivity = 1.75;
		minFireTime = 5;
		keepHorizontalPlacement = 1;
		insideSoundCoef = 0.3;
		role = "Default";
		curatorInfoType = "RscDisplayAttributesMan";
		curatorInfoTypeEmpty = "RscDisplayAttributesMan";
		weight = 100;
		mFact = 1;
		tBody = 32;
		// Land
		fuelCapacity = 0;
		wheelDamageThreshold = 0.2;
		wheelDestroyThreshold = 0.99;
		wheelDamageRadiusCoef = 0.9;
		wheelDestroyRadiusCoef = 0.4;
		weaponsGroup1 = 1;
		weaponsGroup2 = "2 + 		4";
		weaponsGroup3 = "8 + 	16 + 	32";
		weaponsGroup4 = "64 + 		128";
		// AllVehicles
		class SquadTitles {
			name = "clan_sign";
			color[] = {0, 0, 0, 0.75};
		};
		memoryPointDriverOptics[] = {"driverview", "pilot"};
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		memoryPointsGetInCoDriver = "pos codriver";
		memoryPointsGetInCoDriverDir = "pos codriver dir";
		memoryPointsGetInDriverPrecise = "pos driver";
		memoryPointsGetInCargoPrecise[] = {"pos cargo"};
		memoryPointsLeftWaterEffect = "waterEffectL";
		memoryPointsRightWaterEffect = "waterEffectR";
		memoryPointTaskMarker = "";
		memoryPointTaskMarkerOffset[] = {0, 0, 0};
		selectionClan = "clan";
		selectionDashboard = "podsvit pristroju";
		selectionShowDamage = "poskozeni";
		selectionBackLights = "zadni svetlo";
		class NewTurret {
			body = "mainTurret";
			gun = "mainGun";
			animationSourceBody = "mainTurret";
			animationSourceGun = "mainGun";
			animationSourceHatch = "hatchGunner";
			animationSourceCamElev = "camElev";
			proxyType = "CPGunner";
			proxyIndex = 1;
			gunnerName = "Gunner";
			gunnerType = "";
			primaryGunner = 1;
			primaryObserver = 0;
			weapons[] = {};
			magazines[] = {};
			soundServo[] = {"", 0.00316228, 1};
			soundElevation[] = {"", 1, 1};
			minElev = -4;
			maxElev = 20;
			initElev = 0;
			minTurn = -360;
			maxTurn = 360;
			initTurn = 0;
			minOutElev = -4;
			maxOutElev = 20;
			initOutElev = 0;
			minOutTurn = -60;
			maxOutTurn = 60;
			initOutTurn = 0;
			maxHorizontalRotSpeed = 1.2;
			maxVerticalRotSpeed = 1.2;
			stabilizedInAxes = 3;
			primary = 1;
			hasGunner = 1;
			commanding = 1;
			gunnerGetInAction = "";
			gunnerGetOutAction = "";
			turretCanSee = 0;
			canUseScanners = 1;
			class ViewGunner{
				initAngleX = 5;
				minAngleX = -75;
				maxAngleX = 85;
				initAngleY = 0;
				minAngleY = -150;
				maxAngleY = 150;
				minFov = 0.25;
				maxFov = 1.25;
				initFov = 0.75;
				minMoveX = 0;
				maxMoveX = 0;
				minMoveY = 0;
				maxMoveY = 0;
				minMoveZ = 0;
				maxMoveZ = 0;
				continuous = 0;
			};
			// NewTurret
			class TurretSpec {
				showHeadPhones = 0;
			};
			gunnerOpticsModel = "";
			gunnerOpticsColor[] = {0, 0, 0, 1};
			gunnerForceOptics = 1;
			gunnerOpticsShowCursor = 0;
			turrentInfoType = "";
			gunnerOutOpticsModel = "";
			gunnerOutOpticsColor[] = {0, 0, 0, 1};
			gunnerOpticsEffect[] = {};
			gunnerOutOpticsEffect[] = {};
			memoryPointGunnerOutOptics = "";
			gunnerOutForceOptics = 0;
			gunnerOutOpticsShowCursor = 0;
			gunnerFireAlsoInInternalCamera = 1;
			gunnerOutFireAlsoInInternalCamera = 1;
			gunnerUsesPilotView = 0;
			castGunnerShadow = 0;
			viewGunnerShadow = 1;
			viewGunnerShadowDiff = 1;
			viewGunnerShadowAmb = 1;
			ejectDeadGunner = 0;
			hideWeaponsGunner = 1;
			canHideGunner = -1;
			forceHideGunner = 0;
			outGunnerMayFire = 0;
			inGunnerMayFire = 1;
			showHMD = 0;
			viewGunnerInExternal = 0;
			lockWhenDriverOut = 0;
			lockWhenVehicleSpeed = -1;
			gunnerCompartments = "Compartment1";
			LODTurnedIn = -1;
			LODTurnedOut = -1;
			startEngine = 1;
			memoryPointsGetInGunnerPrecise = "";
			missileBeg = "spice rakety";
			missileEnd = "konec rakety";
			armorLights = 0.4;
			class Reflectors {};
			aggregateReflectors[] = {};
			class GunFire{
				// WeaponFireGun
				access = 0;
				cloudletDuration = 0.2;
				cloudletAnimPeriod = 1;
				cloudletSize = 1;
				cloudletAlpha = 1;
				cloudletGrowUp = 0.2;
				cloudletFadeIn = 0.01;
				cloudletFadeOut = 0.5;
				cloudletAccY = 0;
				cloudletMinYSpeed = -100;
				cloudletMaxYSpeed = 100;
				cloudletShape = "cloudletFire";
				cloudletColor[] = {1, 1, 1, 0};
				interval = 0.01;
				size = 3;
				sourceSize = 0.5;
				timeToLive = 0;
				initT = 4500;
				deltaT = -3000;
				class Table {
					class T0 {
						maxT = 0;
						color[] = {0.82, 0.95, 0.93, 0};
					};
					class T1 {
						maxT = 200;
						color[] = {0.75, 0.77, 0.9, 0};
					};
					class T2 {
						maxT = 400;
						color[] = {0.56, 0.62, 0.67, 0};
					};
					class T3 {
						maxT = 600;
						color[] = {0.39, 0.46, 0.47, 0};
					};
					class T4 {
						maxT = 800;
						color[] = {0.24, 0.31, 0.31, 0};
					};
					class T5 {
						maxT = 1000;
						color[] = {0.23, 0.31, 0.29, 0};
					};
					class T6 {
						maxT = 1500;
						color[] = {0.21, 0.29, 0.27, 0};
					};
					class T7 {
						maxT = 2000;
						color[] = {0.19, 0.23, 0.21, 0};
					};
					class T8 {
						maxT = 2300;
						color[] = {0.22, 0.19, 0.1, 0};
					};
					class T9 {
						maxT = 2500;
						color[] = {0.35, 0.2, 0.02, 0};
					};
					class T10 {
						maxT = 2600;
						color[] = {0.62, 0.29, 0.03, 0};
					};
					class T11 {
						maxT = 2650;
						color[] = {0.59, 0.35, 0.05, 0};
					};
					class T12 {
						maxT = 2700;
						color[] = {0.75, 0.37, 0.03, 0};
					};
					class T13 {
						maxT = 2750;
						color[] = {0.88, 0.34, 0.03, 0};
					};
					class T14 {
						maxT = 2800;
						color[] = {0.91, 0.5, 0.17, 0};
					};
					class T15 {
						maxT = 2850;
						color[] = {1, 0.6, 0.2, 0};
					};
					class T16 {
						maxT = 2900;
						color[] = {1, 0.71, 0.3, 0};
					};
					class T17 {
						maxT = 2950;
						color[] = {0.98, 0.83, 0.41, 0};
					};
					class T18 {
						maxT = 3000;
						color[] = {0.98, 0.91, 0.54, 0};
					};
					class T19 {
						maxT = 3100;
						color[] = {0.98, 0.99, 0.6, 0};
					};
					class T20 {
						maxT = 3300;
						color[] = {0.96, 0.99, 0.72, 0};
					};
					class T21 {
						maxT = 3600;
						color[] = {1, 0.98, 0.91, 0};
					};
					class T22 {
						maxT = 4200;
						color[] = {1, 1, 1, 0};
					};
				};
			};
			class GunClouds{
				// WeaponCloudsGun
				access = 0;
				cloudletDuration = 0.3;
				cloudletAnimPeriod = 1;
				cloudletSize = 1;
				cloudletAlpha = 1;
				cloudletGrowUp = 1;
				cloudletFadeIn = 0.01;
				cloudletFadeOut = 1;
				cloudletAccY = 0.4;
				cloudletMinYSpeed = 0.2;
				cloudletMaxYSpeed = 0.8;
				cloudletShape = "cloudletClouds";
				cloudletColor[] = {1, 1, 1, 0};
				interval = 0.05;
				size = 3;
				sourceSize = 0.5;
				timeToLive = 0;
				initT = 0;
				deltaT = 0;
				class Table {
					class T0 {
						maxT = 0;
						color[] = {1, 1, 1, 0};
					};
				};
			};
			class MGunClouds{
				// WeaponCloudsMGun
				access = 0;
				cloudletGrowUp = 0.05;
				cloudletFadeIn = 0;
				cloudletFadeOut = 0.1;
				cloudletDuration = 0.05;
				cloudletAnimPeriod = 1;
				cloudletSize = 1;
				cloudletAlpha = 0.3;
				cloudletAccY = 0;
				cloudletMinYSpeed = -100;
				cloudletMaxYSpeed = 100;
				cloudletShape = "cloudletClouds";
				cloudletColor[] = {1, 1, 1, 0};
				timeToLive = 0;
				interval = 0.02;
				size = 0.3;
				sourceSize = 0.02;
				initT = 0;
				deltaT = 0;
				class Table {
					class T0 {
						maxT = 0;
						color[] = {1, 1, 1, 0};
					};
				};
			};
			// NewTurret
			class HitPoints {
				class HitTurret {
					armor = 0.8;
					material = 51;
					name = "turret";
					visual = "turret";
					passThrough = 1;
					explosionShielding = 1;
				};
				class HitGun {
					armor = 0.6;
					material = 52;
					name = "gun";
					visual = "gun";
					passThrough = 1;
					explosionShielding = 1;
				};
			};
			class Turrets {};
			class ViewOptics {
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.3;
				minFov = 0.07;
				maxFov = 0.35;
				minMoveX = 0;
				maxMoveX = 0;
				minMoveY = 0;
				maxMoveY = 0;
				minMoveZ = 0;
				maxMoveZ = 0;
			};
			forceNVG = 0;
			isCopilot = 0;
			canEject = 1;
			gunnerLeftHandAnimName = "";
			gunnerRightHandAnimName = "";
			gunnerLeftLegAnimName = "";
			gunnerRightLegAnimName = "";
			gunnerDoor = "";
			preciseGetInOut = 0;
			turretFollowFreeLook = 0;
			allowTabLock = 1;
			showAllTargets = 0;
			dontCreateAI = 0;
			disableSoundAttenuation = 0;
			slingLoadOperator = 0;
			playerPosition = 0;
			allowLauncherIn = 0;
			allowLauncherOut = 0;
			class TurnIn {
				turnOffset = 0;
			};
			class TurnOut: TurnIn {
				// TurnIn
				turnOffset = 0;
			};
			showCrewAim = 0;
			gunnerInAction = "ManActTestDriver";
			gunnerAction = "ManActTestDriver";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			memoryPointGunnerOptics = "gunnerview";
			memoryPointsGetInGunner = "pos gunner";
			memoryPointsGetInGunnerDir = "pos gunner dir";
			memoryPointGun = "kulas";
			selectionFireAnim = "zasleh";
			ace_fcs_Enabled = 0;
			ace_fcs_MinDistance = 200;
			ace_fcs_MaxDistance = 5500;
			ace_fcs_DistanceInterval = 5;
		};
		class ViewCargo {
			initAngleX = 5;
			minAngleX = -75;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class ViewOptics {
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class PilotSpec {
			showHeadPhones = 0;
		};
		class CargoSpec {
			class Cargo1 {
				showHeadPhones = 0;
			};
		};
		class MFD {};
		class Sounds {
			class Engine {
				sound = "soundEngine";
				frequency = "rpm";
				volume = "rpm + speed";
			};
			class Movement {
				sound = "soundEnviron";
				frequency = "speed";
				volume = "speed";
			};
		};
		class SoundEvents {};
		tracksSpeed = 0;
		selectionLeftOffset = "";
		selectionRightOffset = "";
		class RenderTargets {};
		cargoProxyIndexes[] = {};
		driverLeftHandAnimName = "";
		driverRightHandAnimName = "";
		driverLeftLegAnimName = "";
		driverRightLegAnimName = "";
		driverDoor = "";
		cargoDoors[] = {};
		hasTerminal = 0;
		getInOutOnProxy = 0;
		preciseGetInOut = 0;
		cargoPreciseGetInOut[] = {0};
		availableForSupportTypes[] = {};
		waterPPInVehicle = 1;
		showCrewAim = 0;
		class CargoTurret{
			class ViewGunner{
				// ViewCargo
				initAngleX = 5;
				minAngleX = -75;
				maxAngleX = 85;
				initAngleY = 0;
				minAngleY = -150;
				maxAngleY = 150;
				minFov = 0.25;
				maxFov = 1.25;
				initFov = 0.75;
				minMoveX = 0;
				maxMoveX = 0;
				minMoveY = 0;
				maxMoveY = 0;
				minMoveZ = 0;
				maxMoveZ = 0;
			};
			animationSourceBody = "";
			animationSourceGun = "";
			body = "";
			canEject = 1;
			commanding = 0;
			dontCreateAI = 1;
			gun = "";
			gunnerGetInAction = "GetInLow";
			gunnerGetOutAction = "GetOutLow";
			gunnerName = "cargo";
			hideWeaponsGunner = 0;
			isCopilot = 0;
			memoryPointsGetInGunner = "pos cargo";
			memoryPointsGetInGunnerDir = "pos cargo dir";
			primaryGunner = 0;
			proxyType = "CPCargo";
			startEngine = 0;
			turretFollowFreeLook = 0;
			viewGunnerInExternal = 1;
			disableSoundAttenuation = 1;
			outGunnerMayFire = 1;
			isPersonTurret = 1;
			showAsCargo = 1;
			maxElev = 45;
			minElev = -45;
			maxTurn = 95;
			minTurn = -95;
			// NewTurret
			animationSourceHatch = "hatchGunner";
			animationSourceCamElev = "camElev";
			proxyIndex = 1;
			gunnerType = "";
			primaryObserver = 0;
			weapons[] = {};
			magazines[] = {};
			soundServo[] = {"", 0.00316228, 1};
			soundElevation[] = {"", 1, 1};
			initElev = 0;
			initTurn = 0;
			minOutElev = -4;
			maxOutElev = 20;
			initOutElev = 0;
			minOutTurn = -60;
			maxOutTurn = 60;
			initOutTurn = 0;
			maxHorizontalRotSpeed = 1.2;
			maxVerticalRotSpeed = 1.2;
			stabilizedInAxes = 3;
			primary = 1;
			hasGunner = 1;
			turretCanSee = 0;
			canUseScanners = 1;
			class TurretSpec {
				showHeadPhones = 0;
			};
			gunnerOpticsModel = "";
			gunnerOpticsColor[] = {0, 0, 0, 1};
			gunnerForceOptics = 1;
			gunnerOpticsShowCursor = 0;
			turrentInfoType = "";
			gunnerOutOpticsModel = "";
			gunnerOutOpticsColor[] = {0, 0, 0, 1};
			gunnerOpticsEffect[] = {};
			gunnerOutOpticsEffect[] = {};
			memoryPointGunnerOutOptics = "";
			gunnerOutForceOptics = 0;
			gunnerOutOpticsShowCursor = 0;
			gunnerFireAlsoInInternalCamera = 1;
			gunnerOutFireAlsoInInternalCamera = 1;
			gunnerUsesPilotView = 0;
			castGunnerShadow = 0;
			viewGunnerShadow = 1;
			viewGunnerShadowDiff = 1;
			viewGunnerShadowAmb = 1;
			ejectDeadGunner = 0;
			canHideGunner = -1;
			forceHideGunner = 0;
			inGunnerMayFire = 1;
			showHMD = 0;
			lockWhenDriverOut = 0;
			lockWhenVehicleSpeed = -1;
			gunnerCompartments = "Compartment1";
			LODTurnedIn = -1;
			LODTurnedOut = -1;
			memoryPointsGetInGunnerPrecise = "";
			missileBeg = "spice rakety";
			missileEnd = "konec rakety";
			armorLights = 0.4;
			class Reflectors {};
			aggregateReflectors[] = {};
			class GunFire{
				// WeaponFireGun
				access = 0;
				cloudletDuration = 0.2;
				cloudletAnimPeriod = 1;
				cloudletSize = 1;
				cloudletAlpha = 1;
				cloudletGrowUp = 0.2;
				cloudletFadeIn = 0.01;
				cloudletFadeOut = 0.5;
				cloudletAccY = 0;
				cloudletMinYSpeed = -100;
				cloudletMaxYSpeed = 100;
				cloudletShape = "cloudletFire";
				cloudletColor[] = {1, 1, 1, 0};
				interval = 0.01;
				size = 3;
				sourceSize = 0.5;
				timeToLive = 0;
				initT = 4500;
				deltaT = -3000;
				class Table {
					class T0 {
						maxT = 0;
						color[] = {0.82, 0.95, 0.93, 0};
					};
					class T1 {
						maxT = 200;
						color[] = {0.75, 0.77, 0.9, 0};
					};
					class T2 {
						maxT = 400;
						color[] = {0.56, 0.62, 0.67, 0};
					};
					class T3 {
						maxT = 600;
						color[] = {0.39, 0.46, 0.47, 0};
					};
					class T4 {
						maxT = 800;
						color[] = {0.24, 0.31, 0.31, 0};
					};
					class T5 {
						maxT = 1000;
						color[] = {0.23, 0.31, 0.29, 0};
					};
					class T6 {
						maxT = 1500;
						color[] = {0.21, 0.29, 0.27, 0};
					};
					class T7 {
						maxT = 2000;
						color[] = {0.19, 0.23, 0.21, 0};
					};
					class T8 {
						maxT = 2300;
						color[] = {0.22, 0.19, 0.1, 0};
					};
					class T9 {
						maxT = 2500;
						color[] = {0.35, 0.2, 0.02, 0};
					};
					class T10 {
						maxT = 2600;
						color[] = {0.62, 0.29, 0.03, 0};
					};
					class T11 {
						maxT = 2650;
						color[] = {0.59, 0.35, 0.05, 0};
					};
					class T12 {
						maxT = 2700;
						color[] = {0.75, 0.37, 0.03, 0};
					};
					class T13 {
						maxT = 2750;
						color[] = {0.88, 0.34, 0.03, 0};
					};
					class T14 {
						maxT = 2800;
						color[] = {0.91, 0.5, 0.17, 0};
					};
					class T15 {
						maxT = 2850;
						color[] = {1, 0.6, 0.2, 0};
					};
					class T16 {
						maxT = 2900;
						color[] = {1, 0.71, 0.3, 0};
					};
					class T17 {
						maxT = 2950;
						color[] = {0.98, 0.83, 0.41, 0};
					};
					class T18 {
						maxT = 3000;
						color[] = {0.98, 0.91, 0.54, 0};
					};
					class T19 {
						maxT = 3100;
						color[] = {0.98, 0.99, 0.6, 0};
					};
					class T20 {
						maxT = 3300;
						color[] = {0.96, 0.99, 0.72, 0};
					};
					class T21 {
						maxT = 3600;
						color[] = {1, 0.98, 0.91, 0};
					};
					class T22 {
						maxT = 4200;
						color[] = {1, 1, 1, 0};
					};
				};
			};
			class GunClouds{
				// WeaponCloudsGun
				access = 0;
				cloudletDuration = 0.3;
				cloudletAnimPeriod = 1;
				cloudletSize = 1;
				cloudletAlpha = 1;
				cloudletGrowUp = 1;
				cloudletFadeIn = 0.01;
				cloudletFadeOut = 1;
				cloudletAccY = 0.4;
				cloudletMinYSpeed = 0.2;
				cloudletMaxYSpeed = 0.8;
				cloudletShape = "cloudletClouds";
				cloudletColor[] = {1, 1, 1, 0};
				interval = 0.05;
				size = 3;
				sourceSize = 0.5;
				timeToLive = 0;
				initT = 0;
				deltaT = 0;
				class Table {
					class T0 {
						maxT = 0;
						color[] = {1, 1, 1, 0};
					};
				};
			};
			class MGunClouds{
				// WeaponCloudsMGun
				access = 0;
				cloudletGrowUp = 0.05;
				cloudletFadeIn = 0;
				cloudletFadeOut = 0.1;
				cloudletDuration = 0.05;
				cloudletAnimPeriod = 1;
				cloudletSize = 1;
				cloudletAlpha = 0.3;
				cloudletAccY = 0;
				cloudletMinYSpeed = -100;
				cloudletMaxYSpeed = 100;
				cloudletShape = "cloudletClouds";
				cloudletColor[] = {1, 1, 1, 0};
				timeToLive = 0;
				interval = 0.02;
				size = 0.3;
				sourceSize = 0.02;
				initT = 0;
				deltaT = 0;
				class Table {
					class T0 {
						maxT = 0;
						color[] = {1, 1, 1, 0};
					};
				};
			};
			// NewTurret
			class HitPoints {
				class HitTurret {
					armor = 0.8;
					material = 51;
					name = "turret";
					visual = "turret";
					passThrough = 1;
					explosionShielding = 1;
				};
				class HitGun {
					armor = 0.6;
					material = 52;
					name = "gun";
					visual = "gun";
					passThrough = 1;
					explosionShielding = 1;
				};
			};
			class Turrets {};
			class ViewOptics {
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.3;
				minFov = 0.07;
				maxFov = 0.35;
				minMoveX = 0;
				maxMoveX = 0;
				minMoveY = 0;
				maxMoveY = 0;
				minMoveZ = 0;
				maxMoveZ = 0;
			};
			forceNVG = 0;
			gunnerLeftHandAnimName = "";
			gunnerRightHandAnimName = "";
			gunnerLeftLegAnimName = "";
			gunnerRightLegAnimName = "";
			gunnerDoor = "";
			preciseGetInOut = 0;
			allowTabLock = 1;
			showAllTargets = 0;
			slingLoadOperator = 0;
			playerPosition = 0;
			allowLauncherIn = 0;
			allowLauncherOut = 0;
			class TurnIn {
				turnOffset = 0;
			};
			class TurnOut: TurnIn {
				// TurnIn
				turnOffset = 0;
			};
			showCrewAim = 0;
			gunnerInAction = "ManActTestDriver";
			gunnerAction = "ManActTestDriver";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			memoryPointGunnerOptics = "gunnerview";
			memoryPointGun = "kulas";
			selectionFireAnim = "zasleh";
			ace_fcs_Enabled = 0;
			ace_fcs_MinDistance = 200;
			ace_fcs_MaxDistance = 5500;
			ace_fcs_DistanceInterval = 5;
		};
		impactEffectSpeedLimit = 8;
		ace_refuel_flowRate = 1;
		htMin = 60;
		htMax = 1800;
		afMax = 70;
		mfMax = 50;
		// All
		access = 0;
		scope = 0;
		reversed = 1;
		animated = 1;
		shadow = 1;
		featureSize = 0;
		speechSingular[] = {};
		speechPlural[] = {};
		maxDetectRange = 20;
		detectSkill = 20;
		mineAlertIconRange = 200;
		killFriendlyExpCoef = 1;
		spotableDarkNightLightsOff = 0.001;
		spotableNightLightsOff = 0.02;
		spotableNightLightsOn = 4;
		accuracyDarkNightLightsOff = 0.001;
		accuracyNightLightsOff = 0.006;
		accuracyNightLightsOn = 0.1;
		attenuationEffectType = "";
		outsideSoundFilter = 0;
		occludeSoundsWhenIn = 0.316228;
		obstructSoundsWhenIn = 0.562341;
		obstructSoundLFRatio = 0;
		occludeSoundLFRatio = 0.25;
		unloadInCombat = 0;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 60;
		slowSpeedForwardCoef = 0.3;
		normalSpeedForwardCoef = 0.85;
		epeImpulseDamageCoef = 30;
		gunnerHasFlares = 1;
		enableManualFire = 1;
		portrait = "";
		ghostPreview = "";
		destrType = "DestructDefault";
		armorLights = 0.4;
		crewVulnerable = 1;
		damageResistance = 0.004;
		crewCrashProtection = 1;
		replaceDamaged = "";
		replaceDamagedLimit = 0.9;
		replaceDamagedHitpoints[] = {};
		keepInEPESceneAfterDeath = 0;
		fuelConsumptionRate = 0.01;
		groupCameraPosition[] = {0, 5, -30};
		cameraSmoothSpeed = 5;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1;
		indirectHitEnemyCoefAI = 10;
		indirectHitFriendlyCoefAI = -20;
		indirectHitCivilianCoefAI = -20;
		indirectHitUnknownCoefAI = -0.5;
		formationTime = 5;
		alwaysTarget = 0;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irScanToEyeFactor = 1;
		irScanGround = 1;
		laserTarget = 0;
		laserScanner = 0;
		nvTarget = 0;
		nvScanner = 0;
		artilleryTarget = 0;
		artilleryScanner = 0;
		canUseScanners = 1;
		preferRoads = 0;
		unitInfoTypeLite = 0;
		nightVision = 0;
		gunnerCanSee = "4+8+16";
		driverCanSee = "2+8+16";
		radarType = 0;
		limitedSpeedCoef = 0.22;
		secondaryExplosion = -1;
		hasDriver = 1;
		driverForceOptics = 0;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 0;
		getInRadius = 2.5;
		memoryPointSupply = "doplnovani";
		supplyRadius = -1;
		enableWatch = 0;
		enableRadio = 0;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		usePreciseGetInAction = 0;
		allowTabLock = 1;
		showAllTargets = 0;
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		wheelCircumference = 1;
		waterLeakiness = 0.5;
		waterResistanceCoef = 0.5;
		waterLinearDampingCoefX = 0;
		waterLinearDampingCoefY = 0;
		waterAngularDampingCoef = 0;
		showNVGDriver = 0;
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGCargo[] = {0};
		soundAttenuationCargo[] = {1};
		countsForScoreboard = 1;
		hullDamageCauseExplosion = 0;
		class MarkerLights {};
		class NVGMarkers {};
		class NVGMarker {
			diffuse[] = {1, 1, 1, 1};
			ambient[] = {1, 1, 1, 1};
			brightness = 1;
			blinking = 0;
			onlyInNvg = 0;
		};
		class Turrets {};
		transportSoldier = 0;
		transportAmmo = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		transportMaxBackpacks = 0;
		isbackpack = 0;
		transportFuel = 0;
		transportRepair = 0;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		class TransportWeapons {};
		class TransportMagazines {};
		attendant = 0;
		engineer = 0;
		uavHacker = 0;
		soundEngine[] = {"", 1, 1};
		soundEnviron[] = {"", 1, 1};
		soundCrash[] = {"", 0.316228, 1};
		soundLandCrash[] = {"", 1, 1};
		soundWaterCrash[] = {"", 0.177828, 1};
		soundGetIn[] = {"", 0.000316228, 1};
		soundGetOut[] = {"", 0.000316228, 1};
		soundServo[] = {"", 0.00316228, 0.5};
		soundElevation[] = {"", 1, 0.5};
		sounddamage[] = {"", 1, 1};
		soundEngineOnInt[] = {"", 1, 1};
		soundEngineOffInt[] = {"", 1, 1};
		soundEngineOnExt[] = {"", 1, 1};
		soundEngineOffExt[] = {"", 1, 1};
		soundGearUp[] = {"", 1, 1};
		soundGearDown[] = {"", 1, 1};
		soundFlapsUp[] = {"", 1, 1};
		soundFlapsDown[] = {"", 1, 1};
		soundCrashes[] = {"soundCrash", 1};
		soundLandCrashes[] = {"soundLandCrash", 1};
		soundWaterCrashes[] = {"soundWaterCrash", 1};
		soundWoodCrash[] = {"emptySound", 0};
		soundBushCrash[] = {"emptySound", 0};
		soundBuildingCrash[] = {"emptySound", 0};
		soundArmorCrash[] = {"emptySound", 0};
		soundLocked[] = {"", 1, 1};
		soundIncommingMissile[] = {"", 1, 1};
		soundDammage[] = {"", 1, 1};
		typicalCargo[] = {};
		aggregateReflectors[] = {};
		getInAction = "";
		getOutAction = "";
		driverAction = "";
		driverInAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		cargoAction[] = {};
		cargoIsCoDriver[] = {0};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		driverOpticsModel = "";
		driverOpticsEffect[] = {};
		driverOpticsColor[] = {1, 1, 1, 1};
		hideProxyInCombat = 0;
		forceHideDriver = 0;
		canHideDriver = -1;
		castDriverShadow = 0;
		castCargoShadow = 0;
		viewDriverShadow = 1;
		viewDriverShadowDiff = 1;
		viewDriverShadowAmb = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		ejectDeadDriver = 0;
		ejectDeadCargo = 0;
		crew = "Civilian";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		hiddenUnderwaterSelections[] = {};
		shownUnderWaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		class FxExplo {
			access = 1;
		};
		class AnimationSources {};
		selectionFireAnim = "";
		class GunFire{
			// WeaponFireGun
			access = 0;
			cloudletDuration = 0.2;
			cloudletAnimPeriod = 1;
			cloudletSize = 1;
			cloudletAlpha = 1;
			cloudletGrowUp = 0.2;
			cloudletFadeIn = 0.01;
			cloudletFadeOut = 0.5;
			cloudletAccY = 0;
			cloudletMinYSpeed = -100;
			cloudletMaxYSpeed = 100;
			cloudletShape = "cloudletFire";
			cloudletColor[] = {1, 1, 1, 0};
			interval = 0.01;
			size = 3;
			sourceSize = 0.5;
			timeToLive = 0;
			initT = 4500;
			deltaT = -3000;
			class Table {
				class T0 {
					maxT = 0;
					color[] = {0.82, 0.95, 0.93, 0};
				};
				class T1 {
					maxT = 200;
					color[] = {0.75, 0.77, 0.9, 0};
				};
				class T2 {
					maxT = 400;
					color[] = {0.56, 0.62, 0.67, 0};
				};
				class T3 {
					maxT = 600;
					color[] = {0.39, 0.46, 0.47, 0};
				};
				class T4 {
					maxT = 800;
					color[] = {0.24, 0.31, 0.31, 0};
				};
				class T5 {
					maxT = 1000;
					color[] = {0.23, 0.31, 0.29, 0};
				};
				class T6 {
					maxT = 1500;
					color[] = {0.21, 0.29, 0.27, 0};
				};
				class T7 {
					maxT = 2000;
					color[] = {0.19, 0.23, 0.21, 0};
				};
				class T8 {
					maxT = 2300;
					color[] = {0.22, 0.19, 0.1, 0};
				};
				class T9 {
					maxT = 2500;
					color[] = {0.35, 0.2, 0.02, 0};
				};
				class T10 {
					maxT = 2600;
					color[] = {0.62, 0.29, 0.03, 0};
				};
				class T11 {
					maxT = 2650;
					color[] = {0.59, 0.35, 0.05, 0};
				};
				class T12 {
					maxT = 2700;
					color[] = {0.75, 0.37, 0.03, 0};
				};
				class T13 {
					maxT = 2750;
					color[] = {0.88, 0.34, 0.03, 0};
				};
				class T14 {
					maxT = 2800;
					color[] = {0.91, 0.5, 0.17, 0};
				};
				class T15 {
					maxT = 2850;
					color[] = {1, 0.6, 0.2, 0};
				};
				class T16 {
					maxT = 2900;
					color[] = {1, 0.71, 0.3, 0};
				};
				class T17 {
					maxT = 2950;
					color[] = {0.98, 0.83, 0.41, 0};
				};
				class T18 {
					maxT = 3000;
					color[] = {0.98, 0.91, 0.54, 0};
				};
				class T19 {
					maxT = 3100;
					color[] = {0.98, 0.99, 0.6, 0};
				};
				class T20 {
					maxT = 3300;
					color[] = {0.96, 0.99, 0.72, 0};
				};
				class T21 {
					maxT = 3600;
					color[] = {1, 0.98, 0.91, 0};
				};
				class T22 {
					maxT = 4200;
					color[] = {1, 1, 1, 0};
				};
			};
		};
		class Damage {
			tex[] = {};
			mat[] = {};
		};
		selectionDamage = "zbytek";
		HeadAimDown = 0;
		class DestructionEffects {
			class Light1 {
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "destructionEffect1";
				intensity = 0.001;
				interval = 1;
				lifeTime = 3;
			};
			class Smoke1 {
				simulation = "particles";
				type = "ObjectDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.5;
			};
			class Fire1 {
				simulation = "particles";
				type = "ObjectDestructionFire1";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Sparks1 {
				simulation = "particles";
				type = "ObjectDestructionSparks";
				position = "destructionEffect1";
				intensity = 0;
				interval = 1;
				lifeTime = 0;
			};
			class Sound {
				simulation = "sound";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
				type = "Fire";
			};
			class Light2 {
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "destructionEffect2";
				intensity = 0.001;
				interval = 1;
				lifeTime = 3;
			};
			class Fire2 {
				simulation = "particles";
				type = "ObjectDestructionFire2";
				position = "destructionEffect2";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Smoke1_2 {
				simulation = "particles";
				type = "ObjectDestructionSmoke1_2";
				position = "destructionEffect2";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.5;
			};
		};
		cargoCanEject = 1;
		driverCanEject = 1;
		fireResistance = 10;
		airCapacity = 10;
		waterResistance = 10;
		waterDamageEngine = 0.2;
		maxFordingDepth = 1;
		damageTexDelay = 0;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 2;
		windSockExist = 0;
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
		numberPhysicalWheels = 0;
		damageHalf[] = {};
		damageFull[] = {};
		class camShakeGForce {
			power = 1;
			frequency = 20;
			distance = 0;
			minSpeed = 1;
			duration = 3;
		};
		minGForce = 0.2;
		maxGForce = 2;
		gForceShakeAttenuation = 0.5;
		class camShakeDamage {
			power = 0.5;
			frequency = 60;
			distance = -1;
			minSpeed = 1;
			attenuation = 0.5;
			duration = 3;
		};
		insideDetectCoef = 0.05;
		features = "";
		SLX_XEH_DISABLED = 0;
		ACE_NightVision_grain = 0.75;
		ACE_NightVision_blur = 0.055;
	};
	class RyanZombieC_man_1: RyanZombieCivilian_F
	{
		author = "Ryan";
		scope = 2;
		scopeCurator = 2;
		model = "\A3\characters_F\civil\c_poor";
		displayName = "Zombie 1";
	};
	class RyanZombiePlayer1: RyanZombieC_man_1
	{
		author = "Sanchez";
		scopeCurator = 0;
		displayName = "Player Zombie 1";
		moves = "CfgRyanZombiesMovesMaleSdrPlayer";
		vehicleClass = "Ryanzombiesplayer";
		editorSubcategory = "Ryanzombiesplayer";
		class EventHandlers
		{
			class CBA_Extended_EventHandlers
			{
				dummy = 1;
			};
			class Ryanzombies
			{
				init = "(_this select 0) setVariable ['cba_xeh_isprocessed', true]; _this execVM '\eXpoch_multifix\zombie_player_init.sqf'";
			};
		};
	};
	
	class RyanZombieboss1: RyanZombieC_man_1
	{
		author = "Ryan";
		vehicleClass = "Ryanzombiesboss";
		editorSubcategory = "Ryanzombiesboss";
		displayName = "Zombie Demon 1";
		moves = "CfgRyanZombiesMovesMaleSdrBoss";
		class EventHandlers
		{
			class CBA_Extended_EventHandlers
			{
				dummy = 1;
			};
			class Ryanzombies
			{
				init = "(_this select 0) setVariable ['cba_xeh_isprocessed', true]; if !(isnil 'ryanzombiesstartinganim') then {(_this select 0) switchmove 'AmovPercMstpSnonWnonDnon_SaluteOut';}; _this execVM '\eXpoch_multifix\zombie_demon.sqf'";
			};
		};
		class HitPoints {
			class HitFace {
				armor = 2;
				passThrough = 0.5;
				material = -1;
				name = "face_hub";
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck {
				armor = 5;
				passThrough = 0.5;
				material = -1;
				name = "neck";
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			// HitPoints
			class HitHead {
				armor = 2;
				passThrough = 0.5;
				material = -1;
				name = "head";
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			// HitPoints
			class HitPelvis {
				armor = 20;
				passThrough = 0.25;
				material = -1;
				name = "pelvis";
				radius = 0.2;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitAbdomen {
				armor = 20;
				passThrough = 0.5;
				material = -1;
				name = "spine1";
				radius = 0.15;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			// HitPoints
			class HitDiaphragm {
				armor = 15;
				passThrough = 0.5;
				material = -1;
				name = "spine2";
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			// HitPoints
			class HitChest {
				armor = 15;
				passThrough = 0.5;
				material = -1;
				name = "spine3";
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			// HitPoints
			class HitBody {
				armor = 1000;
				passThrough = 0.5;
				material = -1;
				name = "body";
				radius = 0.16;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			// HitPoints
			class HitArms {
				armor = 20;
				passThrough = 1;
				material = -1;
				name = "arms";
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands {
				armor = 25;
				passThrough = 1;
				material = -1;
				name = "hands";
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			// HitPoints
			class HitLegs {
				armor = 20;
				passThrough = 1;
				material = -1;
				name = "legs";
				radius = 0.12;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitLeftArm {
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm {
				name = "hand_r";
				// HitLeftArm
				armor = 1;
				material = -1;
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitLeftLeg {
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg {
				name = "leg_r";
				// HitLeftLeg
				armor = 1;
				material = -1;
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
		};
		armor = 12;
		armorStructural = 30;
		explosionShielding = 0.1;
	};
};

class CfgSounds
{
	sounds[] = {};
	class ryanzombiesmoan1
	{
		name = "Zombie Moan 1";
		sound[] = {"\ryanzombies\sounds\moaning1.ogg",0.5,"0.925 + random 0.15"};
		titles[] = {};
	};
	class ryanzombiesmoan2
	{
		name = "Zombie Moan 2";
		sound[] = {"\ryanzombies\sounds\moaning2.ogg",0.5,"0.925 + random 0.15"};
		titles[] = {};
	};
	class ryanzombiesmoan3
	{
		name = "Zombie Moan 3";
		sound[] = {"\ryanzombies\sounds\moaning3.ogg",0.5,"0.925 + random 0.15"};
		titles[] = {};
	};
	class ryanzombiesmoan4
	{
		name = "Zombie Moan 4";
		sound[] = {"\ryanzombies\sounds\moaning4.ogg",0.5,"0.925 + random 0.15"};
		titles[] = {};
	};
	class ryanzombiesmoan5
	{
		name = "Zombie Moan 5";
		sound[] = {"\ryanzombies\sounds\moaning5.ogg",0.5,"0.925 + random 0.15"};
		titles[] = {};
	};
	class ryanzombiesmoan6
	{
		name = "Zombie Moan 6";
		sound[] = {"\ryanzombies\sounds\moaning6.ogg",0.5,"0.925 + random 0.15"};
		titles[] = {};
	};
	class ryanzombiesmoan7
	{
		name = "Zombie Moan 7";
		sound[] = {"\ryanzombies\sounds\moaning7.ogg",0.5,"0.925 + random 0.15"};
		titles[] = {};
	};
	class ryanzombiesmoanboss1
	{
		name = "Zombie Demon Moan 1";
		sound[] = {"\ryanzombies\sounds\moaning_demon1.ogg",0.7,"0.925 + random 0.15"};
		titles[] = {};
	};
	class ryanzombiesmoanboss2
	{
		name = "Zombie Demon Moan 2";
		sound[] = {"\ryanzombies\sounds\moaning_demon2.ogg",0.7,"0.925 + random 0.15"};
		titles[] = {};
	};
	class ryanzombiesmoanboss3
	{
		name = "Zombie Demon Moan 3";
		sound[] = {"\ryanzombies\sounds\moaning_demon3.ogg",0.7,"0.925 + random 0.15"};
		titles[] = {};
	};
	class ryanzombiesmoanboss4
	{
		name = "Zombie Demon Moan 4";
		sound[] = {"\ryanzombies\sounds\moaning_demon4.ogg",0.7,"0.925 + random 0.15"};
		titles[] = {};
	};
	class ryanzombiesscream1
	{
		name = "Scream 1";
		sound[] = {"\ryanzombies\sounds\scream1.ogg",0.5,1};
		titles[] = {};
	};
	class ryanzombiesscream2
	{
		name = "Scream 2";
		sound[] = {"\ryanzombies\sounds\scream2.ogg",0.5,1};
		titles[] = {};
	};
	class ryanzombiesscream3
	{
		name = "Scream 3";
		sound[] = {"\ryanzombies\sounds\scream3.ogg",0.5,1};
		titles[] = {};
	};
	class ryanzombiesscream4
	{
		name = "Scream 4";
		sound[] = {"\ryanzombies\sounds\scream4.ogg",0.5,1};
		titles[] = {};
	};
	class ryanzombiesscream5
	{
		name = "Scream 5";
		sound[] = {"\ryanzombies\sounds\scream5.ogg",0.5,1};
		titles[] = {};
	};
	class ryanzombiesscream6
	{
		name = "Scream 6";
		sound[] = {"\ryanzombies\sounds\scream6.ogg",0.5,1};
		titles[] = {};
	};
	class ryanzombiesscream7
	{
		name = "Scream 7";
		sound[] = {"\ryanzombies\sounds\scream7.ogg",0.5,1};
		titles[] = {};
	};
	class ryanzombiesscream8
	{
		name = "Scream 8";
		sound[] = {"\ryanzombies\sounds\scream8.ogg",0.5,1};
		titles[] = {};
	};
	class ryanzombiesscream9
	{
		name = "Scream 9";
		sound[] = {"\ryanzombies\sounds\scream9.ogg",0.5,1};
		titles[] = {};
	};
	class ryanzombiescough1
	{
		name = "Cough 1";
		sound[] = {"\ryanzombies\sounds\cough1.ogg",0.45,1};
		titles[] = {};
	};
	class ryanzombiescough2
	{
		name = "Cough 2";
		sound[] = {"\ryanzombies\sounds\cough2.ogg",0.45,1};
		titles[] = {};
	};
	class ryanzombiescough3
	{
		name = "Cough 3";
		sound[] = {"\ryanzombies\sounds\cough3.ogg",0.45,1};
		titles[] = {};
	};
	class ryanzombiescough4
	{
		name = "Cough 4";
		sound[] = {"\ryanzombies\sounds\cough4.ogg",0.45,1};
		titles[] = {};
	};
	class ryanzombiescough5
	{
		name = "Cough 5";
		sound[] = {"\ryanzombies\sounds\cough5.ogg",0.45,1};
		titles[] = {};
	};
	class ryanzombiescough6
	{
		name = "Cough 6";
		sound[] = {"\ryanzombies\sounds\cough6.ogg",0.45,1};
		titles[] = {};
	};
	class ryanzombiescough7
	{
		name = "Cough 7";
		sound[] = {"\ryanzombies\sounds\cough7.ogg",0.45,1};
		titles[] = {};
	};
	class ryanzombiescough8
	{
		name = "Cough 8";
		sound[] = {"\ryanzombies\sounds\cough8.ogg",0.45,1};
		titles[] = {};
	};
	class ryanzombiescough9
	{
		name = "Cough 9";
		sound[] = {"\ryanzombies\sounds\cough9.ogg",0.45,1};
		titles[] = {};
	};
	class ryanzombiescough10
	{
		name = "Cough 10";
		sound[] = {"\ryanzombies\sounds\cough10.ogg",0.45,1};
		titles[] = {};
	};
	class ryanzombiescough11
	{
		name = "Cough 11";
		sound[] = {"\ryanzombies\sounds\cough11.ogg",0.45,1};
		titles[] = {};
	};
	class ryanzombiescough12
	{
		name = "Cough 12";
		sound[] = {"\ryanzombies\sounds\cough12.ogg",0.45,1};
		titles[] = {};
	};
	class ryanzombiescough13
	{
		name = "Cough 13";
		sound[] = {"\ryanzombies\sounds\cough13.ogg",0.45,1};
		titles[] = {};
	};
	class ryanzombiescough14
	{
		name = "Cough 14";
		sound[] = {"\ryanzombies\sounds\cough14.ogg",0.45,1};
		titles[] = {};
	};
	class ryanzombiesheart1
	{
		name = "Heartbeat 1";
		sound[] = {"\ryanzombies\sounds\heart1.ogg",11,1,2};
		titles[] = {};
	};
	class ryanzombiesheart2
	{
		name = "Heartbeat 2";
		sound[] = {"\ryanzombies\sounds\heart2.ogg",22,1,2};
		titles[] = {};
	};
	class ryanzombiesheart3
	{
		name = "Heartbeat 3";
		sound[] = {"\ryanzombies\sounds\heart3.ogg",33,1,2};
		titles[] = {};
	};
	class ryanzombiesheart4
	{
		name = "Heartbeat 4";
		sound[] = {"\ryanzombies\sounds\heart4.ogg",44,1,2};
		titles[] = {};
	};
};

