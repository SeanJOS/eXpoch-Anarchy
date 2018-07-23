class RscExileXM8
{
	idd = 24015;
	onLoad = "uiNamespace setVariable ['RscExileXM8', _this select 0]";
	onUnload = "call ExileClient_gui_xm8_event_onUnload; uiNamespace setVariable ['RscExileXM8', displayNull]";
	onKeyUp = "_this call ExileClient_gui_xm8_event_onKeyUp";
	onKeyDown = "_this call ExileClient_gui_xm8_event_onKeyDown";
	class ControlsBackground
	{
		class BackgroundOff: RscPictureKeepAspect
		{
			idc = 4000;
			text = "\exile_assets\texture\ui\xm8_off_ca.paa";
			x = "0 * (0.025) + (0)";
			y = "-4 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "33.3333 * (0.04)";
		};
		class BackgroundOn: RscPictureKeepAspect
		{
			idc = 4001;
			text = "\exile_assets\texture\ui\xm8_on_ca.paa";
			x = "0 * (0.025) + (0)";
			y = "-4 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "33.3333 * (0.04)";
		};
	};
	class Controls
	{
		class Slides: RscExileXM8Slide
		{
			idc = 4007;
			x = "3 * (0.025) + (0)";
			y = "2 * (0.04) + (0)";
			show = "true";
			class Controls
			{
				class SlideApps: RscExileXM8Slide
				{
					idc = 4040;
					show = "true";
					class Controls
					{
						class KillDeathRatio: RscStructuredText
						{
							idc = 4057;
							text = "<t color='#00b2cd' font='RobotoRegular' size='0.7' valign='middle' align='center' shadow='0'><br/><t font='RobotoMedium' size='2' color='#ffffff'>100%</t><br/>Health</t>";
							x = "(4 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "5 * (0.04)";
							colorBackground[] = {255,255,255,0.05};
							size = "10 * pixelH";
						};
						class PopTabs: RscStructuredText
						{
							idc = 4058;
							text = "<t color='#00b2cd' font='RobotoRegular' size='0.7' valign='middle' align='center' shadow='0'><br/><t font='RobotoMedium' size='2' color='#ffffff'>100%</t><br/>Pop Tabs</t>";
							x = "(4 - 3) * (0.025)";
							y = "(9.5 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "5 * (0.04)";
							colorBackground[] = {255,255,255,0.05};
							size = "10 * pixelH";
						};
						class Respect: RscStructuredText
						{
							idc = 4059;
							text = "<t color='#00b2cd' font='RobotoRegular' size='0.7' valign='middle' align='center' shadow='0'><br/><t font='RobotoMedium' size='2' color='#ffffff'>100%</t><br/>Respect</t>";
							x = "(4 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "5 * (0.04)";
							colorBackground[] = {255,255,255,0.05};
							size = "10 * pixelH";
						};
						class App01: RscExileXM8AppButton
						{
							idc = 1111;
							x = "(10.5 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							w = "12.5 * (0.025)";
							h = "10.5 * (0.04)";
							textureNoShortcut = "\eXpoch_characters\textures\logos\network.paa";
							text = "eXnet Client Terminal";
							onButtonClick = "['players', 0] call ExileClient_gui_xm8_slide";
							class ShortcutPos
							{
								left = "(12.5 * (0.025)) * 0.25";
								top = "(10.5 * (0.04)) * 0.25";
								w = "(12.5 * (0.025)) * 0.5";
								h = "(10.5 * (0.04)) * 0.5";
							};
							class TextPos
							{
								bottom = 0;
								left = 0;
								right = 0;
								top = "(10.5 * (0.04)) * 0.75";
							};
						};
						class App02: RscExileXM8AppButton1x1
						{
							idc = 1106;
							x = "(23.5 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							textureNoShortcut = "\eXpoch_characters\textures\logos\party.paa";
							text = "Party";
							onButtonClick = "[] spawn ExileClient_gui_xm8_showPartySlides";
						};
						class App03: RscExileXM8AppButton1x1
						{
							idc = 1105;
							x = "(30 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							textureNoShortcut = "\eXpoch_characters\textures\logos\family.paa";
							text = "Family";
							onButtonClick = "[] spawn ExileClient_gui_xm8_showClanSlide";
						};
						class App04: RscExileXM8AppButton2x1
						{
							idc = 1113;
							x = "(23.5 - 3) * (0.025)";
							y = "(9.5 - 2) * (0.04)";
							textureNoShortcut = "\eXpoch_characters\textures\logos\territory.paa";
							text = "Territory";
							onButtonClick = "call ExileClient_gui_xm8_showTerritorySlide";
						};
						class App05: RscExileXM8AppButton1x1
						{
							idc = 1104;
							x = "(10.5 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "\eXpoch_characters\textures\logos\mobileXM8.paa";
							text = "Mobile eXnet";
							onButtonClick = "														if((getText(missionConfigFile >> 'CfgExileMobileXM8' >> 'code')) isEqualTo '')then 							{								['This server does not support the mobile eXnet app yet.<br/>Contact server admin for support.', 'Okay'] call ExileClient_gui_xm8_showWarning;							}							else							{									['mobileXm8', 0] call ExileClient_gui_xm8_slide;							};";
						};
						class App06: RscExileXM8AppButton1x1
						{
							idc = 1103;
							x = "(17 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "\eXpoch_characters\textures\logos\X-1024.paa";
							text = "eXpoch Alpha";
							onButtonClick = "['Settings', 0] call ExileClient_gui_xm8_slide";
						};
						class App07: RscExileXM8AppButton1x1
						{
							idc = 1107;
							x = "(23.5 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "\exile_assets\texture\ui\xm8_app_settings_ca.paa";
							text = "DonkeyBall";
							onButtonClick = "execVM 'donkeyball\Scratchies_Init.sqf'";
						};
						class App08: RscExileXM8AppButton1x1
						{
							idc = 1117;
							x = "(30 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "\eXpoch_characters\textures\logos\more.paa";
							text = "More";
							onButtonClick = "['extraApps', 0] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideExtraApps: RscExileXM8Slide
				{
					idc = 5000;
					show = "false";
					class Controls
					{
						class App11: RscExileXM8AppButton1x1
						{
							idc = 5001;
							x = "(4 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							textureNoShortcut = "\eXpoch_characters\textures\logos\settings.paa";
							text = "Settings";
							onButtonClick = "['settings', 0] call ExileClient_gui_xm8_slide";
						};
						class App12: RscExileXM8AppButton1x1
						{
							idc = 5002;
							x = "(10.5 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							textureNoShortcut = "\eXpoch_characters\textures\logos\healthscanner.paa";
							text = "Health Scanner";
							onButtonClick = "['healthScanner', 0] call ExileClient_gui_xm8_slide";
						};
						class App13: RscExileXM8AppButton1x1
						{
							idc = 5003;
							x = "(17 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							textureNoShortcut = "\eXpoch_characters\textures\logos\boom.paa";
							text = "BOOM!";
							onButtonClick = "call ExileClient_system_breaching_detonate";
						};
						class App14: RscExileXM8AppButton1x1
						{
							idc = 5004;
							x = "(23.5 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class App15: RscExileXM8AppButton1x1
						{
							idc = 5005;
							x = "(30 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class App21: RscExileXM8AppButton1x1
						{
							idc = 5006;
							x = "(4 - 3) * (0.025)";
							y = "(9.5 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class App22: RscExileXM8AppButton1x1
						{
							idc = 5007;
							x = "(10.5 - 3) * (0.025)";
							y = "(9.5 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class App23: RscExileXM8AppButton1x1
						{
							idc = 5008;
							x = "(17 - 3) * (0.025)";
							y = "(9.5 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class App24: RscExileXM8AppButton1x1
						{
							idc = 5009;
							x = "(23.5 - 3) * (0.025)";
							y = "(9.5 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class App25: RscExileXM8AppButton1x1
						{
							idc = 5010;
							x = "(30 - 3) * (0.025)";
							y = "(9.5 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class App31: RscExileXM8AppButton1x1
						{
							idc = 5011;
							x = "(4 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class App32: RscExileXM8AppButton1x1
						{
							idc = 5012;
							x = "(10.5 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class App33: RscExileXM8AppButton1x1
						{
							idc = 5013;
							x = "(17 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class App34: RscExileXM8AppButton1x1
						{
							idc = 5014;
							x = "(23.5 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "\eXpoch_characters\textures\logos\evenmore.paa";
							text = "Even More";
							onButtonClick = "['extraApps2', 0] call ExileClient_gui_xm8_slide";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc = -1;
							text = "GO BACK";
							x = "(30 - 3) * (0.025)";
							y = "(19 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideExtraApps2: RscExileXM8Slide
				{
					idc = 82500;
					show = "false";
					class Controls
					{
						class App11: RscExileXM8AppButton1x1
						{
							idc = 82501;
							x = "(4 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							textureNoShortcut = "\eXpoch_characters\textures\logos\findmybase.paa";
							text = "Where's My Base";
							onButtonClick = "[]execVM 'ExAdClient\XM8\Apps\FindMyBase\fn_eXpoch_findMyBase.sqf'";
						};
						class App12: RscExileXM8AppButton1x1
						{
							idc = 82502;
							x = "(10.5 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							textureNoShortcut = "\eXpoch_characters\textures\logos\trackmyvehicle.paa";
							text = "Track My Vehicle";
							onButtonClick = "[]execVM 'ExAdClient\XM8\Apps\TrackMyVehicle\fn_eXpoch_trackMyVehicle.sqf'";
						};
						class App13: RscExileXM8AppButton1x1
						{
							idc = 82503;
							x = "(17 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							textureNoShortcut = "\eXpoch_characters\textures\logos\trackmyenemy.paa";
							text = "Track My Enemy";
							onButtonClick = "[]execVM 'ExAdClient\XM8\Apps\TrackMyEnemy\fn_eXpoch_trackMyEnemy.sqf'";
						};
						class App14: RscExileXM8AppButton1x1
						{
							idc = 82504;
							x = "(23.5 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							textureNoShortcut = "\eXpoch_characters\textures\logos\motionsensor.paa";
							text = "Drop Sensor";
							onButtonClick = "[]execVM 'ExAdClient\XM8\Apps\MotionSensor\fn_eXpoch_activateMotionSensor.sqf'";
						};
						class App15: RscExileXM8AppButton1x1
						{
							idc = 82505;
							x = "(30 - 3) * (0.025)";
							y = "(4 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class App21: RscExileXM8AppButton1x1
						{
							idc = 82506;
							x = "(4 - 3) * (0.025)";
							y = "(9.5 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class App22: RscExileXM8AppButton1x1
						{
							idc = 82507;
							x = "(10.5 - 3) * (0.025)";
							y = "(9.5 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class App23: RscExileXM8AppButton1x1
						{
							idc = 82508;
							x = "(17 - 3) * (0.025)";
							y = "(9.5 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class App24: RscExileXM8AppButton1x1
						{
							idc = 82509;
							x = "(23.5 - 3) * (0.025)";
							y = "(9.5 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class App25: RscExileXM8AppButton1x1
						{
							idc = 82510;
							x = "(30 - 3) * (0.025)";
							y = "(9.5 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class App31: RscExileXM8AppButton1x1
						{
							idc = 82511;
							x = "(4 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class App32: RscExileXM8AppButton1x1
						{
							idc = 82512;
							x = "(10.5 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class App33: RscExileXM8AppButton1x1
						{
							idc = 82513;
							x = "(17 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class App34: RscExileXM8AppButton1x1
						{
							idc = 82514;
							x = "(23.5 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							textureNoShortcut = "";
							text = "";
							onButtonClick = "";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc = -1;
							text = "GO HOME";
							x = "(30 - 3) * (0.025)";
							y = "(19 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideMobileXm8: RscExileXM8Slide
				{
					idc = 4200;
					show = "false";
					class Controls
					{
						class Description: RscStructuredText
						{
							idc = -1;
							x = "11.5 * (0.025)";
							y = "3 * (0.04)";
							w = "20.5 * (0.025)";
							h = "12 * (0.04)";
							colorBackground[] = {0,0,0,0.25};
							text = "<t size='1.5'>Never miss a base raid!<br/><br/></t>Use the code to the left to link your smartphone with your in-game character. You will then receive notifications about base raids, protection money reminders and more!<br/><br/><a href='https://xm8.exilemod.com/'>Read more</a>";
							size = "24 * pixelH";
							class Attributes
							{
								align = "left";
								color = "#ffffff";
								colorLink = "#00b2cd";
								font = "PuristaMedium";
								shadow = 0;
							};
						};
						class CodeLabel: RscStructuredText
						{
							idc = 4201;
							text = "<t color='#00b2cd' font='OrbitronLight' size='1.6' valign='middle' align='center' shadow='0'><br/><br/><br/><t font='OrbitronMedium' size='3.5' color='#ffffff'>ABCD</t><br/>SERVER CODE</t>";
							x = "2 * (0.025)";
							y = "3 * (0.04)";
							w = "9 * (0.025)";
							h = "12 * (0.04)";
							colorBackground[] = {255,255,255,0.05};
							size = "10 * pixelH";
						};
						class PlayStoreImage: RscStructuredText
						{
							idc = -1;
							text = "<t valign='middle' align='center' shadow='0'><a href='https://xm8.exilemod.com/redirect/playstore'><img image='exile_assets\texture\ui\google_play_ca.paa'></a></t>";
							x = "2 * (0.025)";
							y = "9 * (0.04)";
							w = "9 * (0.025)";
							h = "3 * (0.04)";
							colorBackground[] = {0,0,0,0};
							size = "64 * pixelH";
						};
						class AppStoreImage: RscStructuredText
						{
							idc = -1;
							text = "<t valign='middle' align='center' shadow='0'><img color='#40FFFFFF' image='exile_assets\texture\ui\app_store_ca.paa'></t>";
							x = "2 * (0.025)";
							y = "11 * (0.04)";
							w = "9 * (0.025)";
							h = "3 * (0.04)";
							colorBackground[] = {0,0,0,0};
							size = "64 * pixelH";
							tooltip = "Not available yet";
						};
						class GoogleLegalHint: RscText
						{
							idc = -1;
							text = "Google Play and the Google Play logo are trademarks of Google Inc.";
							colorText[] = {1,1,1,0.5};
							x = "2 * (0.025)";
							y = "16 * (0.04)";
							w = "30 * (0.025)";
							h = "1 * (0.04)";
							sizeEx = "14 * pixelH";
						};
						class AppleShitLegalHint: RscText
						{
							idc = -1;
							text = "Apple and the Apple logo are trademarks of Apple Inc. - App Store is a service mark of Apple Inc.";
							colorText[] = {1,1,1,0.5};
							x = "2 * (0.025)";
							y = "17 * (0.04)";
							w = "30 * (0.025)";
							h = "1 * (0.04)";
							sizeEx = "14 * pixelH";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc = -1;
							text = "GO BACK";
							x = "26 * (0.025)";
							y = "16 * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideHealthScanner: RscExileXM8Slide
				{
					idc = 4120;
					show = "false";
					class Controls
					{
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc = 4122;
							text = "GO BACK";
							x = "(29 - 3) * (0.025)";
							y = "(18 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
						};
						class HealthInfoControlGroup: RscControlsGroupNoHScrollbars
						{
							idc = -1;
							x = "(5 - 3) * (0.025)";
							y = "(5 - 2) * (0.04)";
							w = "30 * (0.025)";
							h = "12 * (0.04)";
							colorBackground[] = {0,0,0,0.25};
							class controls
							{
								class HealthInfo: RscStructuredText
								{
									idc = 4121;
									x = 0;
									y = 0;
									w = "29 * (0.025)";
									h = "12 * (0.04)";
								};
							};
						};
					};
				};
				class SlideHostParty: RscExileXM8Slide
				{
					idc = 4080;
					show = "false";
					class Controls
					{
						class PartyButton: RscExileXM8Button
						{
							idc = 4081;
							text = "Host Party";
							x = "(10.5 - 3) * (0.025)";
							y = "(12 - 2) * (0.04)";
							w = "19 * (0.025)";
							h = "2 * (0.04)";
							onButtonClick = "_this call ExileClient_gui_xm8_slide_hostParty_event_onOkayButtonClick";
						};
						class NameInput: RscExileXM8Edit
						{
							idc = 4082;
							text = "Eichi's Party";
							x = "(10.5 - 3) * (0.025)";
							y = "(9 - 2) * (0.04)";
							w = "19 * (0.025)";
							h = "2 * (0.04)";
							tooltip = "Name for your party";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc = -1;
							text = "GO BACK";
							x = "(29 - 3) * (0.025)";
							y = "(18 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideSettings: RscExileXM8Slide
				{
					idc = 4070;
					show = "false";
					class Controls
					{
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc = 4071;
							text = "GO BACK";
							x = "(29 - 3) * (0.025)";
							y = "(18 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
						class 8GDropDown: RscCombo
						{
							idc = 4072;
							x = "(5 - 3) * (0.025)";
							y = "(5 - 2) * (0.04)";
							w = "7 * (0.025)";
							h = "1 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_on8GSelectionChanged";
						};
						class 8GLabel: RscText
						{
							idc = -1;
							text = "Show my device in eXnet global.";
							x = "(13 - 3) * (0.025)";
							y = "(5 - 2) * (0.04)";
							w = "22 * (0.025)";
							h = "1 * (0.04)";
							shadow = 0;
						};
						class SoundDropDown: RscCombo
						{
							idc = 4075;
							x = "(5 - 3) * (0.025)";
							y = "(7 - 2) * (0.04)";
							w = "7 * (0.025)";
							h = "1 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onSoundSelectionChanged";
						};
						class SoundLabel: RscText
						{
							idc = -1;
							text = "Play a beep sound on notifications.";
							x = "(13 - 3) * (0.025)";
							y = "(7 - 2) * (0.04)";
							w = "22 * (0.025)";
							h = "1 * (0.04)";
							shadow = 0;
						};
						class PartyEspDropDown: RscCombo
						{
							idc = 4076;
							x = "(5 - 3) * (0.025)";
							y = "(9 - 2) * (0.04)";
							w = "7 * (0.025)";
							h = "1 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSelectionChanged";
						};
						class PartyEspLabel: RscText
						{
							idc = -1;
							text = "Color of 3D party icons and name tags.";
							x = "(13 - 3) * (0.025)";
							y = "(9 - 2) * (0.04)";
							w = "22 * (0.025)";
							h = "1 * (0.04)";
							shadow = 0;
						};
						class PartyEspSlider: RscXSliderH
						{
							idc = 4078;
							x = "(5 - 3) * (0.025)";
							y = "(11 - 2) * (0.04)";
							w = "7 * (0.025)";
							h = "1 * (0.04)";
							onSliderPosChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSliderChanged";
						};
						class PartyEspSliderLabel: RscText
						{
							idc = -1;
							text = "Opacity of 3D party icons and name tags.";
							x = "(13 - 3) * (0.025)";
							y = "(11 - 2) * (0.04)";
							w = "22 * (0.025)";
							h = "1 * (0.04)";
							shadow = 0;
						};
						class PartyMarkerSlider: RscXSliderH
						{
							idc = 4079;
							x = "(5 - 3) * (0.025)";
							y = "(13 - 2) * (0.04)";
							w = "7 * (0.025)";
							h = "1 * (0.04)";
							onSliderPosChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyMarkerSliderChanged";
						};
						class PartyMarkerSliderLabel: RscText
						{
							idc = -1;
							text = "Opacity of 3D party markers.";
							x = "(13 - 3) * (0.025)";
							y = "(13 - 2) * (0.04)";
							w = "22 * (0.025)";
							h = "1 * (0.04)";
							shadow = 0;
						};
						class StreamModeDropDown: RscCombo
						{
							idc = 4077;
							x = "(5 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							w = "7 * (0.025)";
							h = "1 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onStreamModeSelectionChanged";
						};
						class StreamModeLabel: RscText
						{
							idc = -1;
							text = "Masquerade PIN codes. Perfect for streamers.";
							x = "(13 - 3) * (0.025)";
							y = "(15 - 2) * (0.04)";
							w = "22 * (0.025)";
							h = "1 * (0.04)";
							shadow = 0;
						};
						
						class TempModeButton: RscExileXM8ButtonMenu
						{
							idc = 4977;
							text = "ToggleME";
							x = "(5 - 3) * (0.025)";
							y = "(17 - 2) * (0.04)";
							w = "7 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this call ExileClient_gui_hud_toggleDPXTemp";
						};
						class TempModeLabel: RscText
						{
							idc = -1;
							text = "Changes temperature type to celcius or fahrenheit";
							x = "(13 - 3) * (0.025)";
							y = "(17 - 2) * (0.04)";
							w = "22 * (0.025)";
							h = "1 * (0.04)";
							shadow = 0;
						};
					};
				};
				class SlideServer: RscExileXM8Slide
				{
					idc = 4090;
					show = "false";
					class Controls
					{
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc = 4091;
							text = "GO BACK";
							x = "(29 - 3) * (0.025)";
							y = "(18 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
						class InfoHTML: RscHTML
						{
							idc = 4092;
							x = "(5 - 3) * (0.025)";
							y = "(5 - 2) * (0.04)";
							w = "30 * (0.025)";
							h = "12 * (0.04)";
							colorBackground[] = {0,0,0,0.25};
						};
					};
				};
				class SlideClan: RscExileXM8Slide
				{
					idc = 4060;
					show = "false";
					class Controls
					{
						class MembersListBox: RscExileXM8ListBox
						{
							idc = 4061;
							x = "2 * (0.025) + (0)";
							y = "3 * (0.04) + (0)";
							w = "23 * (0.025)";
							h = "14 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_clan_event_onMemberLBSelChanged";
						};
						class KickButton: RscExileXM8ButtonMenu
						{
							idc = 4062;
							text = "KICK";
							x = "26 * (0.025) + (0)";
							y = "6 * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_clan_event_onClanKickButtonClick";
						};
						class LeaveButton: RscExileXM8ButtonMenu
						{
							idc = 4063;
							text = "Leave";
							x = "26 * (0.025) + (0)";
							y = "3 * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_clan_event_onClanLeaveButtonClick";
						};
						class PromoteButton: RscExileXM8ButtonMenu
						{
							idc = 4064;
							text = "Promote";
							x = "26 * (0.025) + (0)";
							y = "9 * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_clan_event_onClanPromoteButtonClick";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
							idc = -1;
							text = "GO BACK";
							x = "26 * (0.025) + (0)";
							y = "16 * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
						};
					};
				};
				class SlideParty: RscExileXM8Slide
				{
					idc = 4100;
					show = "false";
					class Controls
					{
						class MembersListBox: RscExileXM8ListBox
						{
							idc = 4102;
							x = "(5 - 3) * (0.025)";
							y = "(5 - 2) * (0.04)";
							w = "22 * (0.025)";
							h = "14 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_party_event_onMemberListBoxSelectionChanged";
						};
						class KickButton: RscExileXM8ButtonMenu
						{
							idc = 4104;
							text = "KICK";
							x = "(29 - 3) * (0.025)";
							y = "(10 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_party_event_onKickButtonClick";
						};
						class LeaveButton: RscExileXM8ButtonMenu
						{
							idc = 4105;
							text = "LEAVE";
							x = "(29 - 3) * (0.025)";
							y = "(5 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_party_event_onLeaveButtonClick";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc = -1;
							text = "GO BACK";
							x = "(29 - 3) * (0.025)";
							y = "(18 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlidePlayers: RscExileXM8Slide
				{
					idc = 4110;
					show = "false";
					class Controls
					{
						class PlayersListBox: RscExileXM8ListBox
						{
							idc = 4111;
							x = "(5 - 3) * (0.025) + (0)";
							y = "(5 - 2) * (0.04) + (0)";
							w = "19 * (0.025)";
							h = "14 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_players_event_onPlayerListBoxSelectionChanged";
						};
						class PartyButton: RscExileXM8ButtonMenu
						{
							idc = 4112;
							text = "INVITE TO PARTY";
							x = "(26 - 3) * (0.025) + (0)";
							y = "(5 - 2) * (0.04) + (0)";
							w = "9 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this call ExileClient_gui_xm8_slide_players_event_onPartyButtonClick";
						};
						class ClanButton: RscExileXM8ButtonMenu
						{
							idc = 4116;
							text = "INVITE TO FAMILY";
							x = "23 * (0.025) + (0)";
							y = "5 * (0.04) + (0)";
							w = "9 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this call ExileClient_gui_xm8_slide_players_event_onClanButtonClick";
						};
						class TerritoryGroup: RscExileXM8Frame
						{
							idc = -1;
							x = "23 * (0.025) + (0)";
							y = "7 * (0.04) + (0)";
							w = "9 * (0.025)";
							h = "4 * (0.04)";
						};
						class TerritoryGroupCaption: RscText
						{
							idc = -1;
							text = "TERRITORY";
							sizeEx = "11 * pixelH";
							font = "OrbitronLight";
							colorText[] = {"252/255","253/255","255/255",1};
							x = "23 * (0.025) + (0)";
							y = "7 * (0.04) + (0)";
							w = "9 * (0.025)";
							h = "1 * (0.04)";
							style = 2;
						};
						class TerritoryDropdown: RscCombo
						{
							idc = 4114;
							x = "23.5 * (0.025) + (0)";
							y = "8 * (0.04) + (0)";
							w = "8 * (0.025)";
							h = "1 * (0.04)";
						};
						class GrantTerritoryBuildRightsButton: RscExileXM8ButtonMenu
						{
							idc = 4115;
							text = "GRANT RIGHTS";
							x = "23.5 * (0.025) + (0)";
							y = "9.5 * (0.04) + (0)";
							w = "8 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_players_event_onGrantTerritoryButtonClick";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc = 4113;
							text = "GO BACK";
							x = "(26 - 3) * (0.025) + (0)";
							y = "(18 - 2) * (0.04) + (0)";
							w = "9 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
					};
				};
				class SlideTerritory: RscExileXM8Slide
				{
					idc = 4130;
					show = "false";
					class Controls
					{
						class TerritoryDropdown: RscCombo
						{
							idc = 4132;
							x = "(5 - 3) * (0.025) + (0)";
							y = "(5 - 2) * (0.04) + (0)";
							w = "22 * (0.025)";
							h = "1 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_territory_event_onTerritoryDropdownSelectionChanged";
						};
						class PlayersListBox: RscListBox
						{
							idc = 4131;
							x = "(5 - 3) * (0.025) + (0)";
							y = "(6.5 - 2) * (0.04) + (0)";
							w = "22 * (0.025)";
							h = "11.5 * (0.04)";
							onLBSelChanged = "_this call ExileClient_gui_xm8_slide_territory_event_onPlayerListBoxSelectionChanged";
						};
						class InfoText: RscText
						{
							idc = 4133;
							text = "";
							x = "(5 - 3) * (0.025) + (0)";
							y = "(18 - 2) * (0.04) + (0)";
							w = "22 * (0.025)";
							h = "1 * (0.04)";
							colorBackground[] = {0,0,0,0.8};
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc = -1;
							text = "GO BACK";
							x = "(29 - 3) * (0.025)";
							y = "(18 - 2) * (0.04)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
						class KickButton: RscExileXM8ButtonMenu
						{
							idc = 4134;
							text = "KICK";
							x = "(29 - 3) * (0.025) + (0)";
							y = "(6.5 - 2) * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_territory_event_onKickButtonClick";
						};
						class LeaveButton: RscExileXM8ButtonMenu
						{
							idc = 4135;
							text = "LEAVE";
							x = "(29 - 3) * (0.025) + (0)";
							y = "(5 - 2) * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_territory_event_onLeaveButtonClick";
						};
						class PromoteButton: RscExileXM8ButtonMenu
						{
							idc = 4136;
							text = "PROMOTE";
							x = "(29 - 3) * (0.025) + (0)";
							y = "(8 - 2) * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_territory_event_onPromoteButtonClick";
						};
						class DemoteButton: RscExileXM8ButtonMenu
						{
							idc = 4137;
							text = "DEMOTE";
							x = "(29 - 3) * (0.025) + (0)";
							y = "(9.5 - 2) * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_territory_event_onDemoteButtonClick";
						};
						class RadiusButton: RscExileXM8ButtonMenu
						{
							idc = 4138;
							text = "RADIUS";
							x = "(29 - 3) * (0.025) + (0)";
							y = "(11 - 2) * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "1 * (0.04)";
							onButtonClick = "_this spawn ExileClient_gui_xm8_slide_territory_event_onRadiusButtonClick";
						};
					};
				};
				class SlideSlothMachine: RscExileXM8Slide
				{
					idc = 4140;
					show = "false";
					class Controls
					{
						class Background: RscPictureKeepAspect
						{
							idc = -1;
							text = "\exile_assets\texture\ui\slothMachine\xm8_slothMachineBackground.paa";
							x = "-3.1 * (0.025) + (0)";
							y = "-6 * (0.04) + (0)";
							w = "40 * (0.025)";
							h = "33 * (0.04)";
						};
						class XM8SlothMachineSpinButton: RscPictureButton
						{
							idc = 4141;
							style = 48;
							x = "14.3 * (0.025) + (0)";
							y = "15.9 * (0.04) + (0)";
							w = "5.7 * (0.025)";
							h = "2 * (0.04)";
							text = "\exile_assets\texture\ui\slothMachine\button_off_ca.paa";
							action = "[] call ExileClient_gui_xm8_slide_slothMachine_event_onSpinButtonClick;";
						};
						class GoBackButton: RscExileXM8ButtonMenu
						{
							idc = 4148;
							text = "GO BACK";
							x = "29.25 * (0.025) + (0)";
							y = "17.5 * (0.04) + (0)";
							w = "4.5 * (0.025)";
							h = "1 * (0.04)";
							sizeEx = ".9 * (0.04)";
							onButtonClick = "['apps', 1] call ExileClient_gui_xm8_slide";
						};
						class PopTabsLabel: RscStructuredText
						{
							idc = 4142;
							text = "<t align='center'><t color='#e14141'><img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>";
							x = "6.5 * (0.025) + (0)";
							y = "13 * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "2 * (0.04)";
						};
						class JackpotLabel: RscStructuredText
						{
							idc = 4143;
							text = "<t align='center'><t color='#e14141'></t>";
							x = "14 * (0.025) + (0)";
							y = "13 * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "2 * (0.04)";
						};
						class WinningsLabel: RscStructuredText
						{
							idc = 4144;
							text = "<t align='center'><t color='#e14141'>0</t>";
							x = "21.5 * (0.025) + (0)";
							y = "13 * (0.04) + (0)";
							w = "6 * (0.025)";
							h = "2 * (0.04)";
						};
						class Symbol01: RscPictureKeepAspect
						{
							idc = 4145;
							text = "";
							x = "6.55 * (0.025) + (0)";
							y = "4 * (0.04) + (0)";
							w = "5.83 * (0.025)";
							h = "5 * (0.04)";
						};
						class Symbol02: RscPictureKeepAspect
						{
							idc = 4146;
							text = "";
							x = "14.1 * (0.025) + (0)";
							y = "4 * (0.04) + (0)";
							w = "5.83 * (0.025)";
							h = "5 * (0.04)";
						};
						class Symbol03: RscPictureKeepAspect
						{
							idc = 4147;
							text = "";
							x = "21.6 * (0.025) + (0)";
							y = "4 * (0.04) + (0)";
							w = "5.83 * (0.025)";
							h = "5 * (0.04)";
						};
					};
				};
			};
		};
		class Warning: RscExileXM8Slide
		{
			idc = 4030;
			show = "false";
			x = "3 * (0.025) + (0)";
			y = "(2 + 1.5) * (0.04) + (0)";
			h = "(19 - 1.5) * (0.04)";
			class Controls
			{
				class Background: RscText
				{
					idc = -1;
					x = 0;
					y = 0;
					w = "34 * (0.025)";
					h = "19 * (0.04)";
					colorBackground[] = {"41/255","39/255","46/255",0.95};
				};
				class OkayButton: RscExileXM8Button
				{
					idc = 4031;
					text = "Meh... Okay";
					x = "(16.5 - 3) * (0.025)";
					y = "(12 - 2) * (0.04)";
					w = "7 * (0.025)";
					h = "2 * (0.04)";
					onButtonClick = "call ExileClient_gui_xm8_hideWarning";
				};
				class Message: RscStructuredText
				{
					idc = 4032;
					text = "<t align='center'><t color='#e14141'>Whoops</t><br/><t color='#fcfdff' size='1.4'>Computer says no.</t></t>";
					x = "(4 - 3) * (0.025)";
					y = "(7 - 2) * (0.04)";
					w = "32 * (0.025)";
					h = "3.5 * (0.04)";
					colorBackground[] = {0,0,0,0};
				};
			};
		};
		class Message: RscExileXM8Slide
		{
			idc = 4010;
			show = "false";
			x = "3 * (0.025) + (0)";
			y = "(2 + 1.5) * (0.04) + (0)";
			h = "(19 - 1.5) * (0.04)";
			class Controls
			{
				class Background: RscText
				{
					idc = -1;
					x = 0;
					y = 0;
					w = "34 * (0.025)";
					h = "19 * (0.04)";
					colorBackground[] = {"41/255","39/255","46/255",0.95};
				};
				class OkayButton: RscExileXM8Button
				{
					idc = 4011;
					text = "Okay";
					x = "(16.5 - 3) * (0.025)";
					y = "(12 - 2) * (0.04)";
					w = "7 * (0.025)";
					h = "2 * (0.04)";
					onButtonClick = "call ExileClient_gui_xm8_hideMessage";
				};
				class Question: RscStructuredText
				{
					idc = 4012;
					text = "<t align='center'><t color='#a0df3b'>Yay!</t><br/><t color='#fcfdff' size='1.4'>You have done something cool!</t></t>";
					x = "(4 - 3) * (0.025)";
					y = "(7 - 2) * (0.04)";
					w = "32 * (0.025)";
					h = "3.5 * (0.04)";
					colorBackground[] = {0,0,0,0};
				};
			};
		};
		class Confirm: RscExileXM8Slide
		{
			idc = 4020;
			show = "false";
			x = "3 * (0.025) + (0)";
			y = "(2 + 1.5) * (0.04) + (0)";
			h = "(19 - 1.5) * (0.04)";
			class Controls
			{
				class Background: RscText
				{
					idc = -1;
					x = 0;
					y = 0;
					w = "34 * (0.025)";
					h = "19 * (0.04)";
					colorBackground[] = {"41/255","39/255","46/255",0.95};
				};
				class Question: RscStructuredText
				{
					idc = 4021;
					text = "<t align='center'><t color='#00b2cd'>Confirm</t><br/><t color='#fcfdff' size='1.4'>Kick Eichi?</t></t>";
					x = "(4 - 3) * (0.025)";
					y = "(7 - 2) * (0.04)";
					w = "32 * (0.025)";
					h = "3.5 * (0.04)";
					colorBackground[] = {0,0,0,0};
				};
				class YesButton: RscExileXM8Button
				{
					idc = 4022;
					text = "Kick";
					x = "(12.5 - 3) * (0.025)";
					y = "(12 - 2) * (0.04)";
					w = "7 * (0.025)";
					h = "2 * (0.04)";
					onButtonClick = "true call ExileClient_gui_xm8_hideConfirm";
				};
				class NoButton: RscExileXM8Button
				{
					idc = 4023;
					text = "Don't kick";
					x = "(20.5 - 3) * (0.025)";
					y = "(12 - 2) * (0.04)";
					w = "7 * (0.025)";
					h = "2 * (0.04)";
					onButtonClick = "false call ExileClient_gui_xm8_hideConfirm";
				};
			};
		};
		class LeftHeader: RscStructuredText
		{
			idc = 4003;
			text = "<t align='left' font='RobotoRegular' shadow='0'>024420</t>";
			x = "3 * (0.025) + (0)";
			y = "2.2 * (0.04) + (0)";
			w = "17 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class RightHeader: RscStructuredText
		{
			idc = 4005;
			text = "<t align='right' font='RobotoRegular' shadow='0'><img image='\exile_assets\texture\ui\xm8_signal_0_ca.paa' shadow='0'/> 21:45</t>";
			x = "20 * (0.025) + (0)";
			y = "2.2 * (0.04) + (0)";
			w = "17 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class CenterHeader: RscStructuredText
		{
			idc = 4004;
			text = "<t align='center' font='RobotoMedium' shadow='0'>XM8</t>";
			x = "9 * (0.025) + (0)";
			y = "2.2 * (0.04) + (0)";
			w = "22 * (0.025)";
			h = "1 * (0.04)";
			colorBackground[] = {0,0,0,0};
		};
		class PowerButton: RscButton
		{
			idc = 4006;
			x = "19 * (0.025) + (0)";
			y = "21 * (0.04) + (0)";
			w = "2 * (0.025)";
			h = "2 * (0.04)";
			tooltip = "On/Off";
			onButtonClick = "[] spawn ExileClient_gui_xm8_togglePower";
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0,0,0,0};
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
		};
		class BackgroundSplash: RscPictureKeepAspect
		{
			idc = 4002;
			text = "\exile_assets\texture\ui\xm8_splash_ca.paa";
			x = "0 * (0.025) + (0)";
			y = "-4 * (0.04) + (0)";
			w = "40 * (0.025)";
			h = "33.3333 * (0.04)";
		};
	};
};