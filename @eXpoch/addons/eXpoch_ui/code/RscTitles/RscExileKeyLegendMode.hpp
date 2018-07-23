	class RscExileKeyLegendMode
	{
		idd = 64001;
		onLoad = "uiNamespace setVariable ['RscExileKeyLegendMode', _this select 0];";
		onUnload = "uiNamespace setVariable ['RscExileKeyLegendMode', displayNull]";
		duration = 999999;
		fadein = 1;
		fadeout = 1;
		class controls
		{
			class Mode: RscText
			{
				idc = 1000;
				text = "DonkeyPunch KeyZ";
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
				text = "<t align='left'>TeamSpeak:</t><t align='right' color='#3fd4fc'>TS3.DonkeyPunch.INFO</t><br/><t align='left'>Website:</t><t align='right' color='#3fd4fc'>DONKEYPUNCH.INFO</t><br/><br/><t align='left'>Function</t><t align='right'>Key</t><br/><t align='center' color='#fa2424'>Custom</t><br/><t align='left'>Stats Toggle</t><t align='right' color='#3fd4fc'>Shift + ~</t><br/><t align='left'>Compass Toggle</t><t align='right' color='#3fd4fc'>ALT + ~</t><br/><t align='left'>Server Rulez</t><t align='right' color='#3fd4fc'>7</t><br/><t align='left'>HUD Toggle</t><t align='right' color='#3fd4fc'>9</t><br/><t align='center' color='#fa2424'>Exile Default</t><br/><t align='left'>Primary Weapon</t><t align='right' color='#3fd4fc'>1</t><br/><t align='left'>Secondary Weapon</t><t align='right' color='#3fd4fc'>2</t><br/><t align='left'>Axe/Launcher</t><t align='right' color='#3fd4fc'>3</t><br/><t align='left'>Holster Weapon</t><t align='right' color='#3fd4fc'>4</t><br/><t align='left'>Earplugs</t><t align='right' color='#3fd4fc'>5</t><br/><t align='left'>XM8</t><t align='right' color='#3fd4fc'>6</t><br/><t align='left'>AutoRun</t><t align='right' color='#3fd4fc'>0</t><br/>";
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 250 * pixelW + 10 * pixelW";
				y = "safeZoneY + 60 * pixelH + 40 * pixelH + 10 * pixelH + 10 * pixelH";
				w = "(250 - 20) * pixelW";
				h = "(450 - 20) * pixelH";
				size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
				colorBackground[] = {0,0,0,0};
			};
		};
	};