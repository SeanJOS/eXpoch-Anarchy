//if !(hasInterface)exitWith{};
//CONFIGURATIONS:

//CHANNELS:			Channel# enableChannel [CHAT,VOICE]
//GLOBAL: 0 | SIDE: 1 | COMMAND: 2 | GROUP: 3 | VEHICLE: 4 | DIRECT: 5 | 6-15 = Custom Channels

r_CH=[2,3,4];//Channels for voice comms + radio effects  >> Default: [2,3,4]
r_glCH=[FALSE,FALSE];//VARIABLE: Global Channel Chat/Voice Allow  >> Default: [FALSE,FALSE]
r_sCH=[TRUE,FALSE];//VARIABLE: Side Channel Chat/Voice Allow  >> Default: [FALSE,TRUE]
r_cCH=[FALSE,FALSE];//VARIABLE: Command Channel Chat/Voice Allow  >> Default: [TRUE,TRUE]
r_grCH=[TRUE,TRUE];//VARIABLE: Group Channel Chat/Voice Allow  >> Default: [FALSE,TRUE]
r_vCH=[TRUE,TRUE];//VARIABLE: Vehicle Channel Chat/Voice Allow  >> Default: [TRUE,TRUE]
r_dCH=[TRUE,TRUE];//VARIABLE: Direct Channel Chat/Voice Allow  >> Default: [FALSE,TRUE]

//BRIEFING: Helpful information / instructions regarding AFAR
player createDiarySubject["Arma Radio","ArmA Radio"];
player createDiaryRecord["Arma Radio",["Instructions Manual","
<font face='PuristaMedium' size=30 shadow='5' color='#808000'>ADDON-FREE ARMA RADIO</font></size><b/><br/>Created by Phronk<br/>
<font face='PuristaMedium' size=12 color='#8E8E8E'>__________________________________</font></size><br/><br/>
<font face='PuristaMedium' size=20 color='#808000'>RADIO SETUP</font></size><br/>
    • The 'CAPS LOCK' key is the radio comms key<br/><br/>
    1. Open the in-game menu and go into 'Configure/Controls/Multiplayer'<br/><br/>
    2. Set your PUSH TO TALK or TALK ON GROUP CHANNEL key to CAPS LOCK<br/><br/>
    3. Set your 'TALK ON DIRECT CHANNEL' key to whatever you prefer<br/><br/>
    • WHISPER/SHOUT:  Adjust MICROPHONE volume slider in AUDIO settings<br/>
    • LISTEN VOLUME:  Adjust VON volume slider in AUDIO settings<br/><br/>

<font face='PuristaMedium' size=20 color='#808000'>OPERATING RADIO</font></size><br/>
• The 'CAPS LOCK' key is the radio comms key<br/><br/>
• Radio comms channels are <font color='#fffaa3'>COMMAND</font>, <font color='#b6f442'>GROUP</font>, and <font color='#f4c542'>VEHICLE</font><br/><br/>
• Radio must be equipped to send/recieve transmissions<br/><br/>
• You must be within 1050m of another friendly soldier with a radio<br/><br/>
• Radio static intensifies every 150m away from closest recieving soldier<br/><br/>
• Only squad leaders can communicate via <font color='#fffaa3'>Command Channel</font><br/><br/>
• Only squadmates can communicate via <font color='#b6f442'>Group Channel</font><br/><br/>
• Only vehicle passengers can communicate via <font color='#f4c542'>Vehicle Channel</font><br/><br/>
• Cannot speak via <font color='#ffffff'>Direct Channel</font> while underwater<br/><br/>
• Cannot communicate via radio if underwater without rebreather<br/><br/>
• Cannot communicate via radio comms channels if outside radio range<br/><br/><br/>

<font face='PuristaMedium' size=20 color='#808000'>CREDITS</font></size><br/>
    • RADIO SCRIPT:  Phronk + davidoss<br/>
    • RADIO MODEL:  Bohemia Interactive<br/>
    • RADIO AUDIO:  Bohemia Interactive"]];
	
	
	
/*Script Version: 0.2
	To Do:
	1. Radio Keybind Setup *TOP PRIORITY*
	2. Prevent people outside your Group from hearing radio bleeps/static when you talk in Group
	3. Prevent people not in your vehicle from hearing radio bleeps/static when you talk in Vehicle
	4. Prevent people not on your channel from hearing radio bleeps/static when you talk in that channel
	5. Fix players talking on radio near you silencing your radio noise if you were already talking bug
	6. Cause player's voice to cut in and out when 'almost' completely out of radio range
	7. Rewrite distance checks to use switch cases, instead of if()then{}if()then{}if()then{}

SCRIPT BY: Phronk
CONTRIBUTIONS:
	1. Davidoss optimized script by effectively using: (entities[[PS],[],true,true])inAreaArray[getPos player,8192,8192,360,false,-1];
	2. R3vo suggested if !(hasInterface)exitWith{}; at top of script
	3. rob223344 helped fix sender hearing his own radio noise
	4. Killzone_Kid helped fix server/dedicated in init.sqf globally distribute AFAR variable