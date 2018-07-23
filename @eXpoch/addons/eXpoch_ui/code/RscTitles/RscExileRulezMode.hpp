	class RscExileRulezMode
	{
		idd = 64002;
		onLoad = "uiNamespace setVariable ['RscExileRulezMode', _this select 0];";
		onUnload = "uiNamespace setVariable ['RscExileRulezMode', displayNull]";
		duration = 999999;
		fadein = 1;
		fadeout = 1;
		class controls
		{
			class Mode: RscText
			{
				idc = 1000;
				text = "DonkeyPunch RuleZ";
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 250 * pixelW";
				y = "safeZoneY + 60 * pixelH";
				w = "250 * pixelW";
				h = "40 * pixelH";
				style = 2;
				colorBackground[] = {"19/255","22/255","27/255",0.8};
			};
			class DescriptionBackground: RscText
			{
				idc = 1002;
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 250 * pixelW";
				y = "safeZoneY + 60 * pixelH + 40 * pixelH + 10 * pixelH";
				w = "250 * pixelW";
				h = "350 * pixelH";
				colorBackground[] = {"19/255","22/255","27/255",0.8};
			};
			class Description: RscStructuredText
			{
				idc = 1001;
				text = "<t align='left'>TeamSpeak:</t><t align='right' color='#3fd4fc'>TS3.DONKEYPUNCH.INFO</t><br/><t align='left'>Website:</t><t align='right' color='#3fd4fc'>DONKEYPUNCH.INFO</t><br/><t align='left'>Key Legend</t><t align='right' color='#3fd4fc'>Hit 8</t><br/><t align='center' color='#fa2424'>Dem Rulez</t><br/><br/><t align='center'>Do NOT Glitch/Exploit/Hack(bans)</t><br/><t align='center'>Douchebaggery is BANNABLE!</t><br/><t align='center'>Do NOT Act a Fool in Side nor VOICE</t><br/><t align='center'>Disrespect is a big NONO</t><br/><t align='center'>PvP and PvE Server. Kill or be killed</t><br/><t align='center'>Use Teamspeak for Admin HELP</t><br/><t align='center'>Admins are there for help not to BLAME</t><br/><t align='center'>Safezones are meant to be safe</t><br/><t align='center'>Thats why there is ONLY 1 here!</t><br/><t align='center'>Do not build on Airfields/Military</t><br/>";
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 250 * pixelW + 10 * pixelW";
				y = "safeZoneY + 60 * pixelH + 40 * pixelH + 10 * pixelH + 10 * pixelH";
				w = "(250 - 20) * pixelW";
				h = "(450 - 20) * pixelH";
				size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
				colorBackground[] = {0,0,0,0};
			};
		};
	};