class RscExileSelectSpawnLocationDialog
{
	idd = 24002;
	onLoad = "uiNamespace setVariable ['RscExileSelectSpawnLocationDialog', _this select 0];";
	onUnload = "uiNamespace setVariable ['RscExileSelectSpawnLocationDialog', displayNull]";
	duration = -1;
	class controlsBackground
	{
		class BlackBackground: RscText
		{
			colorBackground[] = {0,0,0,1};
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
		class Noise: RscPicture
		{
			text = "\a3\ui_f\data\IGUI\RscTitles\Interlacing\interlacing_ca.paa";
			colorText[] = {1,1,1,1};
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneH";
		};
		class Vignette: RscVignette
		{
			colorText[] = {0,0,0,1};
		};
	};
	class controls
	{
		class MapBackTop: RscText
		{
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			idc = 1000;
			h = "2.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,1};
		};
		class MapName: RscText
		{
			x = "safezoneX + 0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY";
			w = "safezoneW - 0.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			idc = 1001;
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "DonkeyPuncheD Exile Mod";
		};
		class MapAuthor: RscText
		{
			x = "safezoneX + 0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			font = "PuristaLight";
			idc = 1002;
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {1,1,1,0.5};
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			text = "DonkeyPunch.INFO for more!";
		};
		class LoadingText: RscText
		{
			idc = 20002;
			text = "";
			x = "0 * (0.025) + (0)";
			y = "0 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "2 * (0.04)";
			sizeEx = "2 * (0.04)";
			style = 2;
		};
		class ProgressMap: RscProgress
		{
			colorBar[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			x = "safezoneX";
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY";
			w = "safezoneW";
			idc = 104;
			h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ProgressMission: ProgressMap
		{
			idc = 1013;
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TextCaption: RscText
		{
			idc = 24000;
			text = "Choose your spawn location:";
			x = "0 * (0.025) + (0)";
			y = "0 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "2 * (0.04)";
			sizeEx = "2 * (0.04)";
			style = 2;
		};
		class Map: RscMapControl
		{
			idc = 24001;
			text = "";
			x = "8 * (0.025) + (0)";
			y = "3 * (0.04) + (0)";
			w = "32 * (0.025)";
			h = "20 * (0.04)";
			moveOnEdges = 0;
			maxSatelliteAlpha = 0.75;
			alphaFadeStartScale = 1.15;
			alphaFadeEndScale = 1.29;
		};
		class ListBoxLocations: RscListBox
		{
			idc = 24002;
			text = "Locations";
			x = "0 * (0.025) + (0)";
			y = "3 * (0.04) + (0)";
			w = "9.5 * (0.025)";
			h = "20 * (0.04)";
			colorBackground[] = {0,0,0,0.25};
			onLBSelChanged = "_this call ExileClient_gui_selectSpawnLocation_event_onListBoxSelectionChanged;";
		};
		class ButtonSpawn: RscButton
		{
			idc = 24003;
			text = "OKAY";
			x = "0 * (0.025) + (0)";
			y = "23.5 * (0.04) + (0)";
			w = "9.5 * (0.025)";
			h = "1.5 * (0.04)";
			onButtonClick = "[] call ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick";
		};
	};
};