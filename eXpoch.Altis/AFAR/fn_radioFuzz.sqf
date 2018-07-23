//FUNCTION: Global radio noise based on distance between sender/closest reciever
if(player==_this select 0)exitWith{};//<-- CREDIT: rob223344
if("ItemRadio" in assignedItems player&&isAbleToBreathe player)then
{
	_n=(entities[[r_PS],[],true,true])inAreaArray[getPos player,r_WS,r_WS,360,false,-1];//position player
	_c=[];_v=[];_cn=count _n;_f="";
	if(_cn<=1)exitWith{};
	{
		if((alive _x)&&{(_x!=player)})then
		{
			_c set[(count _c),_x];
		};
	}forEach _n;//(_x!=player) doesnt work, so we select 1 instead of 0
	_c=_c select 1;
	//if(currentChannel==4 && player!=vehicle player)exitWith{};//Vehicle Channel Check
	//if(currentChannel==3 && group player!=group _c)exitWith{};//Group Channel Check
	//if(currentChannel==2 && leader player!=leader group player)exitWith{};//Command Channel Check
	//if(currentChannel==1 && side _c!=side player)exitWith{};//Side Channel Check
	if(currentChannel in r_CH)then
	{
		if(surfaceIsWater getPos player)then
		{
			if((vehicle player!=player)&&{(vehicle player isKindOf "LandVehicle")||(vehicle player isKindOf "Air")||(vehicle player isKindOf "Ship_F")})then
			{
				_f="Land_HelipadEmpty_F" createVehicleLocal getPosASLW vehicle player;
				_f attachTo[vehicle player,[0,0,0.5]];
			}else{
				_f="Land_HelipadEmpty_F" createVehicleLocal getPosASLW player;
				_f attachTo[player,[-0.08,0.35,0.005],"Neck"];
			};
		}else{
			if((vehicle player!=player)&&{(vehicle player isKindOf "LandVehicle")||(vehicle player isKindOf "Air")||(vehicle player isKindOf "Ship_F")})then
			{
				_f="Land_HelipadEmpty_F" createVehicleLocal getPosATL vehicle player;_f attachTo[vehicle player,[0,0,0.5]];
			}else{
				_f="Land_HelipadEmpty_F" createVehicleLocal getPosATL player;_f attachTo[player,[-0.08,0.35,0.005],"Neck"];
			};
		};
		if((vehicle player!=player)&&{(vehicle player isKindOf "LandVehicle")||(vehicle player isKindOf "Air")||(vehicle player isKindOf "Ship_F")})then
		{
			if(vehicle player distance _c>=0&&{vehicle player distance _c<150})exitWith{playSound "in1";while{!isNull _f}do{_f say2D "fuz1";sleep 5.3;};};
			if(vehicle player distance _c>150&&{vehicle player distance _c<300})exitWith{playSound "in1";while{!isNull _f}do{_f say2D "fuz2";sleep 5;};};
			if(vehicle player distance _c>300&&{vehicle player distance _c<450})exitWith{playSound "in1";while{!isNull _f}do{_f say2D "fuz3";sleep 5;};};
			if(vehicle player distance _c>450&&{vehicle player distance _c<600})exitWith{playSound "in1";while{!isNull _f}do{_f say2D "fuz4";sleep 5;};};
			if(vehicle player distance _c>600&&{vehicle player distance _c<750})exitWith{playSound "in1";while{!isNull _f}do{_f say2D "fuz5";sleep 5;};};
			if(vehicle player distance _c>750&&{vehicle player distance _c<900})exitWith{playSound "in1";while{!isNull _f}do{_f say2D "fuz6";sleep 5;};};
			if(vehicle player distance _c>900&&{vehicle player distance _c<1050})exitWith{playSound "in1";while{!isNull _f}do{_f say2D "fuz7";sleep 5;};};
			if(vehicle player distance _c>1050&&{vehicle player distance _c<1500})exitWith{playSound "in1";while{!isNull _f}do{_f say2D "fuz8";sleep 5;};};
		}else{
			if(player distance _c>=0&&{player distance _c<150})exitWith{playSound "in1";while{!isNull _f}do{_f say2D "fuz1";sleep 5.3;};};
			if(player distance _c>150&&{player distance _c<300})exitWith{playSound "in1";while{!isNull _f}do{_f say2D "fuz2";sleep 5;};};
			if(player distance _c>300&&{player distance _c<450})exitWith{playSound "in1";while{!isNull _f}do{_f say2D "fuz3";sleep 5;};};
			if(player distance _c>450&&{player distance _c<600})exitWith{playSound "in1";while{!isNull _f}do{_f say2D "fuz4";sleep 5;};};
			if(player distance _c>600&&{player distance _c<750})exitWith{playSound "in1";while{!isNull _f}do{_f say2D "fuz5";sleep 5;};};
			if(player distance _c>750&&{player distance _c<900})exitWith{playSound "in1";while{!isNull _f}do{_f say2D "fuz6";sleep 5;};};
			if(player distance _c>900&&{player distance _c<1050})exitWith{playSound "in1";while{!isNull _f}do{_f say2D "fuz7";sleep 5;};};
			if(player distance _c>1050&&{player distance _c<1500})exitWith{playSound "in1";while{!isNull _f}do{_f say2D "fuz8";sleep 5;};};
		};
	};
};