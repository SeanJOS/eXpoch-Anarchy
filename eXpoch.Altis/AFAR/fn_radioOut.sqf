//FUNCTION: Ends radio transmission with a bleep
if!(currentChannel in r_CH)exitWith{};

if("ItemRadio" in assignedItems player&&alive player&&isAbleToBreathe player)then
{
	"out1"remoteExec["playSound",0];
	[player]remoteExec["Hush",0];
	
	waitUntil{!(isNull(findDisplay 46))};
	
	(findDisplay 46)DisplayRemoveEventHandler["KeyUp",kpOut];
	(findDisplay 46)DisplayRemoveEventHandler["KeyDown",kpIn];
	kpIn=(findDisplay 46)displayAddEventHandler["KeyDown","if(_this select 1==58)then{[player]call rIn;}"];
	
	{
		detach _x;
		deletevehicle _x;
	}forEach attachedObjects player;
};