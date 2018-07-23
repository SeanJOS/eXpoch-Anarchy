_AttackArray = ["ryanzombies\sounds\attack1.ogg", "ryanzombies\sounds\attack2.ogg", "ryanzombies\sounds\attack3.ogg", "ryanzombies\sounds\attack4.ogg", "ryanzombies\sounds\attack5.ogg"];
_JumpArray = ["ryanzombies\sounds\jump1.ogg", "ryanzombies\sounds\jump2.ogg", "ryanzombies\sounds\jump3.ogg", "ryanzombies\sounds\jump4.ogg", "ryanzombies\sounds\jump5.ogg", "ryanzombies\sounds\jump6.ogg"];
_CrawlerHitArray = ["ryanzombies\sounds\crawler_hit1.ogg", "ryanzombies\sounds\crawler_hit2.ogg"];
_EatingArray = ["ryanzombies\sounds\eat1.ogg", "ryanzombies\sounds\eat2.ogg", "ryanzombies\sounds\eat3.ogg", "ryanzombies\sounds\eat4.ogg", "ryanzombies\sounds\eat5.ogg"];


_JumpArray = ["ryanzombies\sounds\jump1.ogg", "ryanzombies\sounds\jump2.ogg", "ryanzombies\sounds\jump3.ogg", "ryanzombies\sounds\jump4.ogg", "ryanzombies\sounds\jump5.ogg", "ryanzombies\sounds\jump6.ogg"]; 
     _Jump = selectRandom _JumpArray; 
     playsound3d [format ["%1",_Jump], player]; 
     player setVariable ["ryanlastzombiepouncesound",time]; 
    };

	
	
_ScreamArray = ["ryanzombiesscream1", "ryanzombiesscream2", "ryanzombiesscream3", "ryanzombiesscream4", "ryanzombiesscream5", "ryanzombiesscream6", "ryanzombiesscream7", "ryanzombiesscream8", "ryanzombiesscream9"];


player addaction ["Attack", {
	player switchMove "AwopPercMstpSgthWnonDnon_throw";
	_AttackArray = ["ryanzombies\sounds\attack1.ogg", "ryanzombies\sounds\attack2.ogg", "ryanzombies\sounds\attack3.ogg", "ryanzombies\sounds\attack4.ogg", "ryanzombies\sounds\attack5.ogg"];
	_Attack = selectRandom _AttackArray;
	_victim = objNull;
	_nearestObjects = nearestObjects[player,["Exile_Unit_Player","eXpoch_Female_Prisoner_F","eXpoch_Male_Prisoner_F"],5];
	if!(_nearestObjects isEqualTo [])then{_victim = _nearestObjects select 0;};
	playsound3d [format ["%1",_Attack], _victim, false, getPosASL player, 1, 0.8];
	_ScreamArray = ["ryanzombiesscream1", "ryanzombiesscream2", "ryanzombiesscream3", "ryanzombiesscream4", "ryanzombiesscream5", "ryanzombiesscream6", "ryanzombiesscream7", "ryanzombiesscream8", "ryanzombiesscream9"];
	_Scream = selectRandom _ScreamArray;
	[_victim, format ["%1",_Scream]] remoteExecCall ["say3d"];

}];
player addaction ["Taunt", {
	_JumpArray = ["ryanzombies\sounds\jump1.ogg", "ryanzombies\sounds\jump2.ogg", "ryanzombies\sounds\jump3.ogg", "ryanzombies\sounds\jump4.ogg", "ryanzombies\sounds\jump5.ogg", "ryanzombies\sounds\jump6.ogg"]; 
     _Jump = selectRandom _JumpArray; 
     playsound3d [format ["%1",_Jump], player]; 

}];
player addaction ["Eat", {
	player playmovenow "AinvPercMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon";
	playsound3d ["ryanzombies\sounds\zombie_bite.ogg", player, false, getPosASL player, 1, 1]
	
}];
