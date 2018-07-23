	class RscExileHUD
	{
		idd = 24014;
		duration = 999999;
		fadein = 1;
		fadeout = 1;
		onLoad = "uiNamespace setVariable ['RscExileHUD', _this select 0];";
		class controls
		{
			class Grenade: RscControlsGroup
			{
				idc = 1400;
				x = "(safezoneX + safezoneW) - 256 * pixelW - 60 * pixelW";
				y = "(safezoneY + safezoneH) - 128 * pixelH - 60 * pixelH";
				w = "256 * pixelW";
				h = "128 * pixelH";
				class controls
				{
					class WeaponBackground: RscPictureKeepAspect
					{
						idc = 1401;
						x = 0;
						y = 0;
						w = "256 * pixelW";
						h = "128 * pixelH";
						colorText[] = {1,1,1,1};
						text = "\exile_assets\texture\hud\hud_panel_grenade_ca.paa";
					};
					class Ammo: RscText
					{
						idc = 1402;
						x = "256 * pixelW - 55 * pixelW";
						y = "128 * pixelH - 95 * pixelH";
						w = "45 * pixelW";
						h = "35 * pixelH";
						colorText[] = {1,1,1,1};
						text = "";
						font = "OrbitronMedium";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "29 * pixelH";
					};
					class TypeSingleLine: RscText
					{
						idc = 1403;
						x = "256 * pixelW - 115 * pixelW";
						y = "128 * pixelH - 95 * pixelH";
						w = "60 * pixelW";
						h = "35 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "RGO";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 1;
						style = 1;
						sizeEx = "11 * pixelH";
						show = "false";
					};
					class TypeDoubleLine1: RscText
					{
						idc = 1404;
						x = "256 * pixelW - 115 * pixelW";
						y = "128 * pixelH - 90 * pixelH";
						w = "60 * pixelW";
						h = "15 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "RGO";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 1;
						style = 1;
						sizeEx = "11 * pixelH";
						show = "false";
					};
					class TypeDoubleLine2: RscText
					{
						idc = 1405;
						x = "256 * pixelW - 115 * pixelW";
						y = "128 * pixelH - 80 * pixelH";
						w = "60 * pixelW";
						h = "15 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "RGO";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 1;
						style = 1;
						sizeEx = "11 * pixelH";
						show = "false";
					};
				};
			};
			class Weapon: RscControlsGroup
			{
				idc = 1100;
				x = "(safezoneX + safezoneW) - 256 * pixelW - 60 * pixelW";
				y = "(safezoneY + safezoneH) - 128 * pixelH - 60 * pixelH";
				w = "256 * pixelW";
				h = "128 * pixelH";
				class controls
				{
					class WeaponBackground: RscPictureKeepAspect
					{
						idc = 1101;
						x = 0;
						y = 0;
						w = "256 * pixelW";
						h = "128 * pixelH";
						colorText[] = {1,1,1,1};
						text = "\exile_assets\texture\hud\hud_panel_weapon_ca.paa";
					};
					class Ammo: RscText
					{
						idc = 1102;
						x = "256 * pixelW - 235 * pixelW";
						y = "128 * pixelH - 50 * pixelH";
						w = "125 * pixelW";
						h = "50 * pixelH";
						colorText[] = {1,1,1,1};
						text = "30";
						font = "OrbitronMedium";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "50 * pixelH";
					};
					class Magazines: RscText
					{
						idc = 1104;
						x = "256 * pixelW - 115 * pixelW";
						y = "128 * pixelH - 40 * pixelH";
						w = "55 * pixelW";
						h = "30 * pixelH";
						colorText[] = {1,1,1,1};
						text = "2";
						font = "OrbitronMedium";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "30 * pixelH";
					};
					class Zeroing: RscText
					{
						idc = 1105;
						x = "256 * pixelW - 55 * pixelW - 10 * pixelW";
						y = "128 * pixelH - 45 * pixelH";
						w = "55 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"111/255","113/255","122/255",1};
						text = "100m";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
					};
					class FireMode: RscText
					{
						idc = 1103;
						x = "256 * pixelW - 60 * pixelW - 10 * pixelW";
						y = "128 * pixelH - 25 * pixelH";
						w = "60 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"111/255","113/255","122/255",1};
						text = "SEMI";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
					};
				};
			};
			class Vehicle: RscControlsGroup
			{
				idc = 1200;
				x = "(safezoneX + safezoneW) - 256 * pixelW - 60 * pixelW";
				y = "(safezoneY + safezoneH) - 128 * pixelH - 60 * pixelH";
				w = "256 * pixelW";
				h = "128 * pixelH";
				class controls
				{
					class VehicleBackground: RscPictureKeepAspect
					{
						idc = 1201;
						x = 0;
						y = 0;
						w = "256 * pixelW";
						h = "128 * pixelH";
						colorText[] = {1,1,1,1};
						text = "\exile_assets\texture\hud\hud_panel_weapon_ca.paa";
					};
					class Speed: RscText
					{
						idc = 1202;
						x = "256 * pixelW - 235 * pixelW";
						y = "128 * pixelH - 50 * pixelH";
						w = "125 * pixelW";
						h = "50 * pixelH";
						colorText[] = {1,1,1,1};
						text = "30";
						font = "OrbitronMedium";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "50 * pixelH";
					};
					class Height: RscText
					{
						idc = 1203;
						x = "256 * pixelW - 55 * pixelW - 10 * pixelW";
						y = "128 * pixelH - 45 * pixelH";
						w = "55 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"111/255","113/255","122/255",1};
						text = "100m";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
						show = "false";
					};
					class Fuel: RscText
					{
						idc = 1204;
						x = "256 * pixelW - 100 * pixelW - 10 * pixelW";
						y = "128 * pixelH - 25 * pixelH";
						w = "100 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"111/255","113/255","122/255",1};
						text = "";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
					};
				};
			};
			class Stats: RscControlsGroup
			{
				idc = 1300;
				x = "safeZoneX + 60 * pixelW";
				y = "(safeZoneY + safeZoneH) - 20 * pixelH - 64 * pixelH";//was -60*pixelH
				w = "256 * pixelW";
				h = "64 * pixelH";
				class controls
				{
					class StatsBackground: RscPictureKeepAspect
					{
						idc = 1301;
						x = 0;
						y = 0;
						w = "256 * pixelW";
						h = "64 * pixelH";
						colorText[] = {1,1,1,1};
						text = "\exile_assets\texture\hud\hud_panel_player_ca.paa";
					};
					class HungerLabel: RscText
					{
						idc = 1303;
						x = "10 * pixelW";
						y = "64 * pixelH - 45 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "HUNGER";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
					};
					class ThirstLabel: RscText
					{
						idc = 1305;
						x = "10 * pixelW";
						y = "64 * pixelH - 25 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "THIRST";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
					};
					class Hunger: RscText
					{
						idc = 1302;
						x = "85 * pixelW";
						y = "64 * pixelH - 45 * pixelH";
						w = "50 * pixelW";
						h = "20 * pixelH";
						colorText[] = {1,1,1,1};
						text = "100%";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
					};
					class Thirst: RscText
					{
						idc = 1304;
						x = "85 * pixelW";
						y = "64 * pixelH - 25 * pixelH";
						w = "50 * pixelW";
						h = "20 * pixelH";
						colorText[] = {1,1,1,1};
						text = "100%";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
					};
					class HealthLabel: RscText
					{
						idc = 1307;
						x = "10 * pixelW";
						y = "64 * pixelH - 35 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "HP";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
						show = "false";
					};
					class Health: RscText
					{
						idc = 1306;
						x = "55 * pixelW";
						y = "64 * pixelH - 45 * pixelH";
						w = "80 * pixelW";
						h = "40 * pixelH";
						colorText[] = {1,1,1,1};
						text = "100%";
						font = "OrbitronMedium";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "30 * pixelH";
						show = "false";
					};
					class EnvironmentTemperatureLabel: RscText
					{
						idc = 1309;
						x = "10 * pixelW";
						y = "64 * pixelH - 45 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "CLIMATE";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
						show = "false";
					};
					class BodyTemperatureLabel: RscText
					{
						idc = 1311;
						x = "10 * pixelW";
						y = "64 * pixelH - 25 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "BODY";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
						show = "false";
					};
					class EnvironmentTemperature: RscText
					{
						idc = 1308;
						x = "65 * pixelW";
						y = "64 * pixelH - 45 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {1,1,1,1};
						text = "0°C";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
						show = "false";
					};
					class BodyTemperature: RscText
					{
						idc = 1310;
						x = "65 * pixelW";
						y = "64 * pixelH - 25 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {1,1,1,1};
						text = "37°C";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
						show = "false";
					};
				};
			};
			class MuzzleDisplay: RscText
			{
				idc = 1005;
				x = "(safeZoneX + safeZoneW) - 280 * pixelW";
				y = "(safeZoneY + safeZoneH) - 50 * pixelH";
				w = "220 * pixelW";
				h = "30 * pixelH";
				colorText[] = {1,1,1,1};
				colorBackground[] = {"19/255","22/255","27/255",0.8};
				text = "";
				shadow = 0;
				fixedWidth = 0;
				sizeEx = "18 * pixelH";
				fade = 1;
				style = 1;
			};
			class GroupMembers: RscStructuredText
			{
				idc = 1000;
				x = "safeZoneX + 60 * pixelW";
				y = "safeZoneY + 60 * pixelH";
				w = "400 * pixelW";
				h = "500 * pixelH";
				colorBackground[] = {0,0,0,0};
				lineSpacing = 2;
				text = "";
				shadow = 2;
			};
			class HungerIcon: RscPictureKeepAspect
			{
				idc = 1002;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y = "(safeZoneY + safeZoneH) - 630 * pixelH - 64 * pixelH";
				w = "64 * pixelW";
				h = "64 * pixelH";
				text = "\exile_assets\texture\hud\hud_icon_hunger_ca.paa";
				shadow = 0;
				show = "false";
				colorText[] = {1,1,1,1};
				blinkingPeriod = 0.75;
			};
			class ThirstIcon: RscPictureKeepAspect
			{
				idc = 1007;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y = "(safeZoneY + safeZoneH) - 720 * pixelH - 64 * pixelH";
				w = "64 * pixelW";
				h = "64 * pixelH";
				text = "\exile_assets\texture\hud\hud_icon_thirst_ca.paa";
				shadow = 0;
				show = "false";
				colorText[] = {1,1,1,1};
				blinkingPeriod = 0.75;
			};
			class CombatIcon: RscPictureKeepAspect
			{
				idc = 1008;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y = "(safeZoneY + safeZoneH) - 810 * pixelH - 64 * pixelH";
				w = "64 * pixelW";
				h = "64 * pixelH";
				text = "\exile_assets\texture\hud\hud_icon_combat_ca.paa";
				shadow = 0;
				show = "false";
				colorText[] = {1,1,1,1};
				blinkingPeriod = 0.75;
			};
			class BambiIcon: RscPictureKeepAspect
			{
				idc = 1003;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y = "(safeZoneY + safeZoneH) - 455 * pixelH - 64 * pixelH";
				w = "64 * pixelW";
				h = "64 * pixelH";
				text = "\exile_assets\texture\hud\hud_icon_bambi_ca.paa";
				shadow = 0;
				show = "false";
				colorText[] = {1,1,1,1};
			};
			class EarPlugsIcon: RscPictureKeepAspect
			{
				idc = 1004;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y = "(safeZoneY + safeZoneH) - 365 * pixelH - 64 * pixelH";
				w = "64 * pixelW";
				h = "64 * pixelH";
				text = "\exile_assets\texture\hud\hud_icon_earplugs_ca.paa";
				shadow = 0;
				show = "false";
				colorText[] = {1,1,1,1};
			};
			class AutoRunIcon: RscPictureKeepAspect
			{
				idc = 1006;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 64 * pixelW";
				y = "(safeZoneY + safeZoneH) - 275 * pixelH - 64 * pixelH";
				w = "64 * pixelW";
				h = "64 * pixelH";
				text = "\exile_assets\texture\hud\hud_icon_autorun_ca.paa";
				shadow = 0;
				show = "false";
				colorText[] = {1,1,1,1};
			};
			class DPXStatsL: RscControlsGroup
			{
				idc = 6300;
				x = "safeZoneX + 60 * pixelW";// Higher moves to right
				y = "(safeZoneY + safeZoneH) - 80 * pixelH - 64 * pixelH";//was - 60 * pixelH - 64 * pixelH"
				w = "256 * pixelW";
				h = "64 * pixelH";
				class controls
				{
					class DPXStatsBackground: RscPictureKeepAspect
					{
						idc = 6301;
						x = 0;
						y = 0;
						w = "256 * pixelW";
						h = "64 * pixelH";
						colorText[] = {1,1,1,1};
						text = "\exile_assets\texture\hud\hud_panel_player_ca.paa";
					};
					class MoneyLabel: RscText
					{
						idc = 6303;
						x = "10 * pixelW";
						y = "64 * pixelH - 45 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "STASH";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
					};
					class RespectLabel: RscText
					{
						idc = 6305;
						x = "10 * pixelW";
						y = "64 * pixelH - 25 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "RESPECT";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
					};
					class Money: RscText
					{
						idc = 6302;
						x = "65 * pixelW";//was 85 lower moves it left
						y = "64 * pixelH - 45 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {1,1,1,1};
						text = "0";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "14 * pixelH";
					};
					class Respect: RscText
					{
						idc = 6304;
						x = "65 * pixelW";
						y = "64 * pixelH - 25 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {1,1,1,1};
						text = "0";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "14 * pixelH";
					};
					class RankLabel: RscText
					{
						idc = 6307;
						x = "10 * pixelW";
						y = "64 * pixelH - 35 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "RANK";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
						show = "false";
					};
					class Rank: RscText
					{
						idc = 6306;
						x = "55 * pixelW";
						y = "64 * pixelH - 45 * pixelH";
						w = "80 * pixelW";
						h = "40 * pixelH";
						colorText[] = {1,1,1,1};
						text = "10000";
						font = "OrbitronMedium";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "24 * pixelH";
						show = "false";
					};
					class KillsLabel: RscText
					{
						idc = 6309;
						x = "10 * pixelW";
						y = "64 * pixelH - 45 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "KILLS";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
						show = "false";
					};
					class DeathsLabel: RscText
					{
						idc = 6311;
						x = "10 * pixelW";
						y = "64 * pixelH - 25 * pixelH";
						w = "70 * pixelW";
						h = "20 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "DEATHS";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "11 * pixelH";
						show = "false";
					};
					class Kills: RscText
					{
						idc = 6308;
						x = "85 * pixelW";
						y = "64 * pixelH - 45 * pixelH";
						w = "50 * pixelW";
						h = "20 * pixelH";
						colorText[] = {1,1,1,1};
						text = "100";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
						show = "false";
					};
					class Deaths: RscText
					{
						idc = 6310;
						x = "85 * pixelW";
						y = "64 * pixelH - 25 * pixelH";
						w = "50 * pixelW";
						h = "20 * pixelH";
						colorText[] = {1,1,1,1};
						text = "100";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "18 * pixelH";
						show = "false";
					};
				};
			};	
			class Compass: RscControlsGroup
			{
				idc = 6400;
				x = "(safezoneX + safezoneW) - 256 * pixelW - 60 * pixelW";// Left and Right
				y = "(safezoneY + safezoneH) - 128 * pixelH - 105 * pixelH"; // Up and Down
				w = "256 * pixelW";//size width
				h = "128 * pixelH";//size height
				class controls
				{
					class Compass: RscPictureKeepAspect
					{
						idc = 6401;
						x = 0;
						y = 0;
						w = "256 * pixelW";
						h = "128 * pixelH";
						colorText[] = {1,1,1,1};
						text = "\exile_assets\texture\hud\hud_panel_grenade_ca.paa";
					};
					class Degrees: RscText
					{
						idc = 6402;
						x = "256 * pixelW - 65 * pixelW";//Placement width in display
						y = "128 * pixelH - 95 * pixelH";//Placement Height in display
						w = "65 * pixelW";//total width of this item
						h = "35 * pixelH";//total height of this item
						colorText[] = {1,1,1,1};
						text = "0°";
						font = "OrbitronMedium";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "28 * pixelH";
					};
					class Direction: RscText
					{
						idc = 6403;
						x = "256 * pixelW - 105 * pixelW";
						y = "128 * pixelH - 95 * pixelH";
						w = "40 * pixelW";
						h = "35 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "N";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "20 * pixelH";
					};
					class Grid: RscText
					{
						idc = 6404;
						x = "256 * pixelW - 110 * pixelW";
						y = "128 * pixelH - 93.25 * pixelH";//was 95
						w = "110 * pixelW";//was 90
						h = "35 * pixelH";
						colorText[] = {1,1,1,1};
						text = "00|00";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 2;// 2 should be center 0 left 1 right
						sizeEx = "24 * pixelH";
						show = "false";
					};
					class Infection: RscText
					{
						idc = 6405;
						x = "256 * pixelW - 65 * pixelW";//Placement width in display
						y = "128 * pixelH - 95 * pixelH";//Placement Height in display
						w = "65 * pixelW";//total width of this item
						h = "35 * pixelH";//total height of this item
						colorText[] = {1,1,1,1};
						text = "0.0";
						font = "OrbitronMedium";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;
						sizeEx = "28 * pixelH";
						show = "false";
					};
					class InfectionLabel: RscText
					{
						idc = 6406;
						x = "256 * pixelW - 105 * pixelW";
						y = "128 * pixelH - 95 * pixelH";
						w = "40 * pixelW";
						h = "35 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "RZI";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 0;
						sizeEx = "20 * pixelH";
						show = "false";
					};
				};
			};
			class RestartTimer: RscControlsGroup
			{
				idc = 6410;
				x = "(safezoneX + safezoneW) - 256 * pixelW - 60 * pixelW";// Left and Right
				y = "(safezoneY + safezoneH) - 128 * pixelH - 150 * pixelH";// Up and Down
				w = "256 * pixelW";//size width
				h = "128 * pixelH";//size height
				class controls
				{
					class RestartTimer: RscPictureKeepAspect
					{
						idc = 6414;
						x = 0;
						y = 0;
						w = "256 * pixelW";
						h = "128 * pixelH";
						colorText[] = {1,1,1,1};
						text = "\exile_assets\texture\hud\hud_panel_grenade_ca.paa";
					};
					class Time: RscText
					{
						idc = 6415;
						x = "256 * pixelW - 65 * pixelW";//55 too far right 75 too far left
						y = "128 * pixelH - 95 * pixelH";
						w = "65 * pixelW";//live with scroll is 75//45 no scroll but small
						h = "35 * pixelH";
						colorText[] = {"255/255","255/255","255/255",1};
						text = "1:00";
						font = "OrbitronMedium";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 0;
						style = 1;// style 1= 2= 0=
						sizeEx = "28 * pixelH";
					};
					class TypeDoubleLine1: RscText
					{
						idc = 6416;
						x = "256 * pixelW - 105 * pixelW";
						y = "128 * pixelH - 90 * pixelH";
						w = "50 * pixelW";
						h = "15 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "TIME";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 1;
						style = 0;
						sizeEx = "12 * pixelH";
					};
					class TypeDoubleLine2: RscText
					{
						idc = 6417;
						x = "256 * pixelW - 105 * pixelW";
						y = "128 * pixelH - 80 * pixelH";
						w = "50 * pixelW";
						h = "15 * pixelH";
						colorText[] = {"63/255","212/255","252/255",1};
						text = "LEFT";
						font = "OrbitronLight";
						shadow = 0;
						fixedWidth = 0;
						linespacing = 1;
						style = 0;
						sizeEx = "12 * pixelH";
					};
				};
			};
		};
	};