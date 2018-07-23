//INIT FUNCTION: Initializes AFAR 

//Setup Variables
r_PS="";
r_rEH=[];

//Setup Map Size
r_WS=getNumber(configFile>>"CfgWorlds">>worldName>>"mapSize");

//Setup Player Soldier Type
switch(side player)do
{
	case WEST:{r_PS="SoldierWB"};
	case EAST:{r_PS="SoldierEB"};
	case INDEPENDENT:{r_PS="SoldierGB"};
	case RESISTANCE:{r_PS="SoldierGB"};
	case CIVILIAN:{r_PS="Civilian"};
};

//Sets up channels
0 enableChannel r_glCH;
1 enableChannel r_sCH;
2 enableChannel r_cCH;
3 enableChannel r_grCH;
4 enableChannel r_vCH;
5 enableChannel r_dCH;
6 enableChannel true;
setCurrentChannel 3;

//EVENTHANDLER: If player gets rid of radio, he cannot send/recieve transmissions
player addEventHandler["Put",{
	if((_this select 2=="ItemRadio")&&{!("ItemRadio" in assignedItems player)})then
	{
		0 enableChannel false;1 enableChannel false;2 enableChannel false;3 enableChannel false;
	}else{
		0 enableChannel r_glCH;1 enableChannel r_sCH;2 enableChannel r_cCH;3 enableChannel r_grCH;5 enableChannel r_dCH;
	};
}];

//EVENTHANDLERS: Adds CAPS LOCK key as eventHandler to call rIn and rOut functions upon keyPress/keyRelease
waitUntil{!(isNull(findDisplay 46))};
kpIn=(findDisplay 46)displayAddEventHandler["KeyDown","if(_this select 1==58)then{[player]call rIn;}"];
kpOut=(findDisplay 46)displayAddEventHandler["KeyUp","if(_this select 1==58)then{[player]call rOut;}"];