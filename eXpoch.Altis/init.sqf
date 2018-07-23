if(isServer||isDedicated)then
{
	if(isNil "server")then{//Creates a Game Logic object named "server", if it doesn't exist
	_cLogic=createCenter sideLogic;
	_grpLogic=createGroup _cLogic;
	_logicPos=[0.5,0.5,0.5];
	server=_grpLogic createUnit["LOGIC",_logicPos,[],0,""];};

	//Automatically detects size of map to set as max range for radio range checks & checks if AFAR is enabled via lobby parameters
	if((!isClass(configFile>>"CfgPatches">>"task_force_radio"))&&{(!isClass(configFile>>"CfgPatches">>"acre_main"))&&(paramsArray select 0==1)})then
	{
		r_WS=getNumber(configFile>>"CfgWorlds">>worldName>>"mapSize");
		publicVariable "r_WS";
		AFAR=1;
		publicVariable "AFAR";
	};
};


missionNamespace setVariable ["initAFAR",(compileFinal preprocessFile "AFAR\fn_initAFAR.sqf")];
missionNamespace setVariable ["Fuzz",(compileFinal preprocessFile "AFAR\fn_radioFuzz.sqf")];
missionNamespace setVariable ["Hush",(compileFinal preprocessFile "AFAR\fn_radioHush.sqf")];
missionNamespace setVariable ["rIn",(compileFinal preprocessFile "AFAR\fn_radioIn.sqf")];
missionNamespace setVariable ["rOut",(compileFinal preprocessFile "AFAR\fn_radioOut.sqf")];