//FUNCTION: Sender client-side effects for pressing radio key
//private["_n","_cN","_c","_r","_fz"];
if!(currentChannel in r_CH)exitWith{};
if("ItemRadio" in assignedItems player)then
{
	if(!isAbleToBreathe player&&surfaceIsWater getPos player)then
	{
		0 enableChannel false;1 enableChannel false;2 enableChannel false;3 enableChannel false;5 enableChannel false;
	};
	if(alive player&&isAbleToBreathe player&&incapacitatedState player=="")then
	{
		_n=(entities[[r_PS],[],true,true])inAreaArray[position player,r_WS,r_WS,360,false,-1];
		_cN=[];
		{
			if((alive _x)&&{(_x!=player)})then
			{
				_cN set[(count _cN),_x];
			};
		}forEach _n;//(_x!=player) doesnt work so we select 1, instead of 0
		if(count _cN>1)then
		{
			_c=_cN select 1;
			if((vehicle player!=player)&&{(vehicle player isKindOf "LandVehicle")||(vehicle player isKindOf "Air")||(vehicle player isKindOf "Ship_F")})then
			{
				0 enableChannel r_glCH;1 enableChannel r_sCH;2 enableChannel r_cCH;3 enableChannel r_grCH;5 enableChannel r_dCH;
				if(vehicle player distance _c>=0&&{vehicle player distance _c<150})then{hintSilent"Transmitting...";};
				if(vehicle player distance _c>150&&{vehicle player distance _c<300})then{hintSilent"Transmitting...";};
				if(vehicle player distance _c>300&&{vehicle player distance _c<450})then{hintSilent"Transmitting...";};
				if(vehicle player distance _c>450&&{vehicle player distance _c<600})then{hintSilent"Transmitting...";};
				if(vehicle player distance _c>600&&{vehicle player distance _c<750})then{hintSilent"Transmitting...";};
				if(vehicle player distance _c>750&&{vehicle player distance _c<900})then{hintSilent"Transmitting...";};
				if(vehicle player distance _c>900&&{vehicle player distance _c<1050})then{hintSilent"Transmitting...";};
				if(vehicle player distance _c>1050&&{vehicle player distance _c<2000})then{0 enableChannel false;1 enableChannel r_sCH;2 enableChannel false;3 enableChannel false;hintSilent"v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^";};
				if(vehicle player distance _c>2000)then{playSound "in2";0 enableChannel false;1 enableChannel r_sCH;2 enableChannel false;3 enableChannel false;hintSilent"-----------------------------------------------------";};
			}else{
				0 enableChannel r_glCH;1 enableChannel r_sCH;2 enableChannel r_cCH;3 enableChannel r_grCH;5 enableChannel r_dCH;
				if(player distance _c>=0&&{player distance _c<100})then{hintSilent"Transmitting...";playSound "in1";};
				if(player distance _c>150&&{player distance _c<300})then{hintSilent"Transmitting...";playSound "in1";};
				if(player distance _c>300&&{player distance _c<450})then{hintSilent"Transmitting...";playSound "in1";};
				if(player distance _c>450&&{player distance _c<600})then{hintSilent"Transmitting...";playSound "in1";};
				if(player distance _c>600&&{player distance _c<750})then{hintSilent"Transmitting...";playSound "in1";};
				if(player distance _c>750&&{player distance _c<900})then{hintSilent"Transmitting...";playSound "in1";};
				if(player distance _c>900&&{player distance _c<1050})then{hintSilent"Transmitting...";playSound "in1";};
				if(player distance _c>1050&&{player distance _c<2000})then{0 enableChannel false;1 enableChannel r_sCH;2 enableChannel false;3 enableChannel false;hintSilent"v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^v^";playSound "in1";};
				if(player distance _c>2000)then{playSound "in2";0 enableChannel false;1 enableChannel r_sCH;2 enableChannel false;3 enableChannel false;hintSilent"-----------------------------------------------------";};
			};
		}else{
			if((vehicle player!=player)&&{(vehicle player isKindOf "LandVehicle")||(vehicle player isKindOf "Air")||(vehicle player isKindOf "Ship_F")})then
			{
				0 enableChannel false;1 enableChannel r_sCH;2 enableChannel false;3 enableChannel false;4 enableChannel r_vCH;playSound "in2";hintSilent"-----------------------------------------------------";
			}else{
				0 enableChannel false;1 enableChannel r_sCH;2 enableChannel false;3 enableChannel false;4 enableChannel r_vCH;playSound "in2";hintSilent"-----------------------------------------------------";
			};
		};
		if((vehicle player!=player)&&{(vehicle player isKindOf "LandVehicle")||(vehicle player isKindOf "Air")||(vehicle player isKindOf "Ship_F")})then
		{
			_r="Land_PortableLongRangeRadio_F" createVehicleLocal getPos vehicle player;_r attachTo[vehicle player,[0,0,0.5]];_r setVectorUp[0,0,0.005];
		}else{
			_r="Land_PortableLongRangeRadio_F" createVehicleLocal getPos player;_r attachTo[player,[-0.08,0.35,0.005],"Neck"];_r setVectorUp[0,-1,0.005];
		};
		_rEH=player addEventHandler["GetInMan",{
				if(surfaceIsWater getPos player)then{
				if((vehicle player!=player)&&{(vehicle player isKindOf "LandVehicle")||(vehicle player isKindOf "Air")||(vehicle player isKindOf "Ship_F")})then{
				_fz=nearestObjects[getPosASLW vehicle player,["Land_HelipadEmpty_F"],4];_r=nearestObjects[getPosASLW vehicle player,["Land_PortableLongRangeRadio_F"],4];_fz=_fz select 0;_r=_r select 0;detach _fz;detach _r;_fz attachTo[vehicle player,[0,0,0.5]];_r attachTo[vehicle player,[0,0,0.5]];_r setVectorUp[0,-1,0.005];}else{
				_fz=nearestObjects[getPosASLW player,["Land_HelipadEmpty_F"],4];_r=nearestObjects[getPosASLW player,["Land_PortableLongRangeRadio_F"],4];_fz=_fz select 0;_r=_r select 0;detach _fz;detach _r;_fz attachTo[player,[-0.08,0.35,0.005],"Neck"];_r attachTo[player,[-0.08,0.35,0.005],"Neck"];_r setVectorUp[0,-1,0.005];};};
				if((vehicle player!=player)&&{(vehicle player isKindOf "LandVehicle")||(vehicle player isKindOf "Air")||(vehicle player isKindOf "Ship_F")})then{
				_fz=nearestObjects[getPosATL vehicle player,["Land_HelipadEmpty_F"],4];_r=nearestObjects[getPosATL vehicle player,["Land_PortableLongRangeRadio_F"],4];_fz=_fz select 0;_r=_r select 0;detach _fz;detach _r;_fz attachTo[vehicle player,[0,0,0.5]];_r attachTo[vehicle player,[0,0,0.5]];_r setVectorUp[0,-1,0.005];}else{
				_fz=nearestObjects[getPosATL player,["Land_HelipadEmpty_F"],4];_r=nearestObjects[getPosATL player,["Land_PortableLongRangeRadio_F"],4];_fz=_fz select 0;_r=_r select 0;detach _fz;detach _r;_fz attachTo[player,[-0.08,0.35,0.005],"Neck"];_r attachTo[player,[-0.08,0.35,0.005],"Neck"];_r setVectorUp[0,-1,0.005];};
		}];
		_rEH=player addEventHandler["GetOutMan",{
				if(surfaceIsWater getPos player)then{
				if((vehicle player!=player)&&{(vehicle player isKindOf "LandVehicle")||(vehicle player isKindOf "Air")||(vehicle player isKindOf "Ship_F")})then{
				_fz=nearestObjects[getPosASLW vehicle player,["Land_HelipadEmpty_F"],4];_r=nearestObjects[getPosASLW vehicle player,["Land_PortableLongRangeRadio_F"],4];_fz=_fz select 0;_r=_r select 0;detach _fz;detach _r;_fz attachTo[vehicle player,[0,0,0.5]];_r attachTo[vehicle player,[0,0,0.5]];_r setVectorUp[0,-1,0.005];}else{
				_fz=nearestObjects[getPosASLW player,["Land_HelipadEmpty_F"],4];_r=nearestObjects[getPosASLW player,["Land_PortableLongRangeRadio_F"],4];_fz=_fz select 0;_r=_r select 0;detach _fz;detach _r;_fz attachTo[player,[-0.08,0.35,0.005],"Neck"];_r attachTo[player,[-0.08,0.35,0.005],"Neck"];_r setVectorUp[0,-1,0.005];};};
				if((vehicle player!=player)&&{(vehicle player isKindOf "LandVehicle")||(vehicle player isKindOf "Air")||(vehicle player isKindOf "Ship_F")})then{
				_fz=nearestObjects[getPosATL vehicle player,["Land_HelipadEmpty_F"],4];_r=nearestObjects[getPosATL vehicle player,["Land_PortableLongRangeRadio_F"],4];_fz=_fz select 0;_r=_r select 0;detach _fz;detach _r;_fz attachTo[vehicle player,[0,0,0.5]];_r attachTo[vehicle player,[0,0,0.5]];_r setVectorUp[0,-1,0.005];}else{
				_fz=nearestObjects[getPosATL player,["Land_HelipadEmpty_F"],4];_r=nearestObjects[getPosATL player,["Land_PortableLongRangeRadio_F"],4];_fz=_fz select 0;_r=_r select 0;detach _fz;detach _r;_fz attachTo[player,[-0.08,0.35,0.005],"Neck"];_r attachTo[player,[-0.08,0.35,0.005],"Neck"];_r setVectorUp[0,-1,0.005];};
		}];
		r_rEH set[count r_rEH,_rEH];
		[player]remoteExec["Fuzz",0];
		//[player]remoteExec["Fuzz",(-1*(clientOwner))];//<-- CREDIT: rob223344
		waitUntil{!(isNull(findDisplay 46))};
		(findDisplay 46)DisplayRemoveEventHandler["KeyUp",kpOut];
		(findDisplay 46)DisplayRemoveEventHandler["KeyDown",kpIn];
		kpOut=(findDisplay 46)displayAddEventHandler["KeyUp","if(_this select 1==58)then{[player]call rOut;}"];
	};
};