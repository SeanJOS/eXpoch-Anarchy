	class RscExileConstructionMode
	{
		idd = 24006;
		onLoad = "uiNamespace setVariable ['RscExileConstructionMode', _this select 0];";
		onUnload = "uiNamespace setVariable ['RscExileConstructionMode', displayNull]";
		duration = 999999;
		fadein = 1;
		fadeout = 1;
		class controls
		{
			class Mode: RscText
			{
				idc = 1000;
				text = "FREE MODE, NO PHYSICS";
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
				text = "<t align='left'>Free Mode</t><t align='right' color='#3fd4fc'>1</t><br/><t align='left'>Grid Mode</t><t align='right' color='#3fd4fc'>2</t><br/><t align='left'>Snap Mode</t><t align='right' color='#3fd4fc'>3</t><br/><t align='left'>Toggle Physics</t><t align='right' color='#3fd4fc'>4</t><br/><t align='left'>Toggle Assistant</t><t align='right' color='#3fd4fc'>5</t><br/><t align='left'>Freeze/Lock2Player</t><t align='right' color='#3fd4fc'>6</t><br/><t align='left'>Vector Mode</t><t align='right' color='#3fd4fc'>7</t><br/><t align='left'>Object Snapping</t><t align='right' color='#3fd4fc'>8</t><br/><br/><t align='left'>Rotation</t><t align='right' color='#3fd4fc'>Q/E - NP : 7/9</t><br/><t align='left'>Elevation</t><t align='right' color='#3fd4fc'>PAGE UP/DOWN</t><br/><t align='left'>Distance</t><t align='right' color='#3fd4fc'>HOME/END - NP : 2/8</t><br/><t align='left'>Left/Right</t><t align='right' color='#3fd4fc'>NP : 4/6</t><br/><t align='left'>Vector Tilt</t><t align='right' color='#3fd4fc'>ARROWS</t><br/><t align='left'>Larger Steps</t><t align='right' color='#3fd4fc'>SHIFT</t><br/><t align='left'>Small Steps</t><t align='right' color='#3fd4fc'>CONTROL</t><br/><t align='left'>Smaller Steps</t><t align='right' color='#3fd4fc'>ALT</t><br/><t align='left'>Place</t><t align='right' color='#3fd4fc'>SPACE</t><br/><t align='left'>Abort</t><t align='right' color='#3fd4fc'>ESCAPE</t>";
				x = "(safeZoneX + safeZoneW) - 60 * pixelW - 250 * pixelW + 10 * pixelW";
				y = "safeZoneY + 60 * pixelH + 40 * pixelH + 10 * pixelH + 10 * pixelH";
				w = "(250 - 20) * pixelW";
				h = "(450 - 20) * pixelH";
				size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
				colorBackground[] = {0,0,0,0};
			};
		};
	};