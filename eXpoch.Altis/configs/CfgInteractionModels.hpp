	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] = 	
		{
			"barrelwater_f", 
			"barrelwater_grey_f",
			"waterbarrel_f",
			"watertank_f",
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f",

			// Namalsk
			"wellpump",
			"Land_jhad_stand_water",
			"Land_Jbad_Misc_Well_L",
			"Land_jbad_Fridge",
			"Land_jbad_reservoir",
			"Land_jbad_teapot",
			"Land_KBud",
			
			//Tanoa
			"watertank_01_f",
			"watertank_02_f",
			"watertank_03_f",
			"watertank_04_f",
			
			//DonkeyPunch add chernarus water sources
			"pumpa",
			"misc_wellpump"
		};
	};

	class CleanWaterSource
	{
		name = "Water cooler";
		models[] = 	
		{
			"watercooler"
		};
	};

	class WorkBench
	{
		name = "Work Bench";
		models[] = 
		{
			"workstand_f.p3d"
		};
	};

	class ShippingContainerSource
	{
		name = "Shipping Containers";
		models[] = 
		{
			// Arma 3
			"CargoBox_V1_F",
			"Cargo20_blue_F",
			"Cargo20_brick_red_F",
			"Cargo20_cyan_F",
			"Cargo20_grey_F",
			"Cargo20_light_blue_F",
			"Cargo20_light_green_F",
			"Cargo20_military_green_F",
			"Cargo20_military_ruins_F",
			"Cargo20_orange_F",
			"Cargo20_red_F",
			"Cargo20_sand_F",
			"Cargo20_white_F",
			"Cargo20_yellow_F",
			"Cargo40_blue_F",
			"Cargo40_brick_red_F",
			"Cargo40_cyan_F",
			"Cargo40_grey_F",
			"Cargo40_light_blue_F",
			"Cargo40_light_green_F",
			"Cargo40_military_green_F",
			"Cargo40_orange_F",
			"Cargo40_red_F",
			"Cargo40_sand_F",
			"Cargo40_white_F",
			"Cargo40_yellow_F",

			// Namalsk
			"nam_container.p3d",
			"misc_cargo1d.p3d",
			"misc_cargo1b.p3d",
			"misc_cargo1bo.p3d",
			"misc_cargo2c.p3d",
			"misc_cargo1ao.p3d",
			
			//Tanoa
			"Land_ContainerLine_01_F",
			"Land_ContainerLine_02_F",
			"Land_ContainerLine_03_F",

			// Also allow wrecks
			"wreck_",
			"hiluxt",
			"shed_m02"
/*			
			"wreck_bmp2_f.p3d",
			"wreck_brdm2_f.p3d",
			"wreck_car2_f.p3d",
			"wreck_car3_f.p3d",
			"wreck_car_f.p3d",
			"wreck_cardismantled_f.p3d",
			"wreck_hmmwv_f.p3d",
			"wreck_hunter_f.p3d",
			"wreck_offroad2_f.p3d",
			"wreck_offroad_f.p3d",
			"wreck_skodovka_f.p3d",
			"wreck_slammer_f.p3d",
			"wreck_slammer_hull_f.p3d",
			"wreck_slammer_turret_f.p3d",
			"wreck_t72_hull_f.p3d",
			"wreck_t72_turret_f.p3d",
			"wreck_truck_dropside_f.p3d",
			"wreck_truck_f.p3d",
			"wreck_uaz_f.p3d",
			"wreck_ural_f.p3d"
			"wreck_van_f.p3d",
			*/


			// TODO: Ask community for CUP/AiA model names	
		};
	};

	class WoodSource
	{
		name = "Trees";
		models[] = 
		{
			" t_",
			" bo_t_",

			// A2 trees
            " str_",
            " Smrk_",
            " les_",
            " brg_",
			
			//chernarus wood sources
			"drevo_hr"
		};
	};

	// TODO: Add https://community.bistudio.com/wikidata/images/thumb/6/60/Arma3_CfgVehicles_Land_Tank_rust_F.jpg/150px-Arma3_CfgVehicles_Land_Tank_rust_F.jpg
	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuelstation_feed_f.p3d",
			"metalbarrel_f.p3d",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d",
			//Tanoa
			"fuelstation_01_pump_f.p3d",
			"fuelstation_02_pump_f.p3d",
			//Chernarus fuel pumps
			"fuel_tank_stairs.p3d",
			"a_fuelstation_feed.p3d",
			"fuel_tank_small.p3d"
		};	
	};
	
	class RockSource
	{
		name = "Mining Rocks";
		models[] = 
		{
			//Cherno
			"r2_rockwall.p3d",
			"r2_boulder1.p3d",
			"r2_boulder2.p3d",
			"r2_rock1.p3d"
		};
	};
	
	class Animals
	{
		name = "Fishing and Animals";
		models[] = 	
		{
			"rabbit_f.p3d",
			"hen_f.p3d",
			"cock_f.p3d",
			"goat_f.p3d",
			"sheep_f.p3d",
			"snake_f.p3d",
			"turtle_f.p3d",
			"fin_f.p3d",
			"pastor_f.p3d",
			"salema_porgy_f.p3d",
			"ornate_f.p3d",
			"mackerel_f.p3d",
			"tuna_f.p3d",
			"mullet_f.p3d",
			"catshark_f.p3d"
		};
		class rabbit_f
		{
			returnItem[] = {"eXpoch_RabbitCarcass_EPOCH"};
			respect = 5;
		};
		class hen_f
		{
			returnItem[] = {"eXpoch_ChickenCarcass_EPOCH"};
			respect = 5;
		};
		class cock_f
		{
			returnItem[] = {"eXpoch_ChickenCarcass_EPOCH"};
			respect = 5;
		};
		class goat_f
		{
			returnItem[] = {"eXpoch_GoatCarcass_EPOCH"};
			respect = 5;
		};
		class sheep_f
		{
			returnItem[] = {"eXpoch_SheepCarcass_EPOCH"};
			respect = 5;
		};
		class snake_f
		{
			returnItem[] = {"eXpoch_SnakeCarcass_EPOCH"};
			respect = 5;
		};
		class turtle_f
		{
			returnItem[] = {"eXpoch_TurtleCarcass_EPOCH"};
			respect = 5;
		};
		class fin_f
		{
			returnItem[] = {"eXpoch_DogCarcass_EPOCH"};
			respect = -50;
		};
		class pastor_f
		{
			returnItem[] = {"eXpoch_DogCarcass_EPOCH"};
			respect = -50;
		};
		class salema_porgy_f
		{
			returnItem[] = {"eXpoch_Item_Salema_Raw"};
			respect = 5;
		};
		class ornate_f
		{
			returnItem[] = {"eXpoch_Item_Ornate_Raw"};
			respect = 5;
		};
		class mackerel_f
		{
			returnItem[] = {"eXpoch_Item_Mackerel_Raw"};
			respect = 5;
		};
		class tuna_f
		{
			returnItem[] = {"eXpoch_ItemTuna"};
			respect = 5;
		};
		class mullet_f
		{
			returnItem[] = {"eXpoch_Item_Mullet_Raw"};
			respect = 5;
		};
		class catshark_f
		{
			returnItem[] = {"eXpoch_Item_CatShark_Raw"};
			respect = 5;
		};
	};

	class AmbientLoot
	{
		name = "Ambient Loot Objects";
		models[] = 	
		{
			//Cherno
			"popelnice.p3d",
			"misc_postbox.p3d",
			"kontejner.p3d",
			"garbage_paleta.p3d",
			"t_malus1s.p3d",
			"t_pyrus2s.p3d",
			"p_helianthus.p3d",
			"garbagebin_01_f.p3d",
			"garbagecontainer_closed_f.p3d",
			"garbagecontainer_open_f.p3d",
			"cratesshabby_f.p3d",
			"tyres_f.p3d",
			"junkpile_f.p3d",
			"sacks_heap_f.p3d",
			"sacks_goods_f.p3d",
			"crateswooden.p3d",
			"garbagebags_f.p3d",
			//Tanoa
			"garbageheap_01_f.p3d",
			"garbageheap_03_f.p3d",
			"garbageheap_04_f.p3d"
			
		};
		// "garbage", "garbagebins", "bush", "wooden"
		popelnice[] = 
		{
			"Dump Garbage Can",  //Action Name
			"destroy",	//Damage type - hide / destroy
			"A3\Sounds_F\structures\doors\MetalOldDoors\MetalOldDoorsSqueak_1.wss", //Sound file 1
			"A3\Sounds_F\environment\animals\scared_animal2.wss" //sound file 2
		};
		misc_postbox[] = 
		{
			"Open MailBox",  //Action Name
			"destroy",	//Damage type - hide / destroy
			"A3\Sounds_F\structures\doors\MetalOldDoors\MetalOldDoorsSqueak_1.wss", //Sound file 1
			"A3\Sounds_F\environment\animals\scared_animal2.wss" //sound file 2
		};
		kontejner[] = 
		{
			"Dumpster Dive",  //Action Name
			"destroy",	//Damage type - hide / destroy
			"A3\Sounds_F\structures\doors\MetalOldDoors\MetalOldDoorsSqueak_1.wss", //Sound file 1
			"A3\Sounds_F\environment\animals\scared_animal2.wss" //sound file 2
		};
		garbage_paleta[] = 
		{
			"Dumpster Dive",  //Action Name
			"destroy",	//Damage type - hide / destroy
			"A3\Sounds_F\structures\doors\MetalOldDoors\MetalOldDoorsSqueak_1.wss", //Sound file 1
			"A3\Sounds_F\environment\animals\scared_animal2.wss" //sound file 2
		};
		garbagecontainer_closed_f[] =
		{
			"Dumpster Dive",  //Action Name
			"destroy",	//Damage type - hide / destroy
			"A3\Sounds_F\structures\doors\MetalOldDoors\MetalOldDoorsSqueak_1.wss", //Sound file 1
			"A3\Sounds_F\environment\animals\scared_animal2.wss" //sound file 2
		};
		garbagecontainer_open_f[] =
		{
			"Dumpster Dive",  //Action Name
			"destroy",	//Damage type - hide / destroy
			"A3\Sounds_F\structures\doors\MetalOldDoors\MetalOldDoorsSqueak_1.wss", //Sound file 1
			"A3\Sounds_F\environment\animals\scared_animal2.wss" //sound file 2
		};
		garbagebin_01_f[] =
		{
			"Dump Trashbin",  //Action Name
			"destroy",	//Damage type - hide / destroy
			"A3\Sounds_F\structures\doors\MetalOldDoors\MetalOldDoorsSqueak_1.wss", //Sound file 1
			"A3\Sounds_F\environment\animals\scared_animal2.wss" //sound file 2
		};
		junkpile_f[] =
		{
			"Loot Junkpile",  //Action Name
			"hide",	//Damage type - hide / destroy
			"", //Sound file 1
			"A3\Sounds_F\environment\animals\scared_animal2.wss" //sound file 2
		};
		sacks_heap_f[] =
		{
			"Ravage Heap",  //Action Name
			"destroy",	//Damage type - hide / destroy
			"", //Sound file 1
			"A3\Sounds_F\environment\animals\scared_animal2.wss" //sound file 2
		};
		sacks_goods_f[] =
		{
			"Ravage Sacks",  //Action Name
			"destroy",	//Damage type - hide / destroy
			"", //Sound file 1
			"A3\Sounds_F\environment\animals\scared_animal2.wss" //sound file 2
		};
		cratesshabby_f[] =
		{
			"Bust Crate(s)",  //Action Name
			"hide",	//Damage type - hide / destroy
			"A3\Sounds_F\environment\sfx\falling_trees\falling_broadleaf_tree_big.wss", //Sound file 1
			"" //sound file 2
		};
		crateswooden[] =
		{
			"Bust Crate(s)",  //Action Name
			"hide",	//Damage type - hide / destroy
			"A3\Sounds_F\environment\sfx\falling_trees\falling_broadleaf_tree_big.wss", //Sound file 1
			"" //sound file 2
		};
		garbagebags_f[] =
		{
			"Search Trash",  //Action Name
			"destroy",	//Damage type - hide / destroy
			"A3\Sounds_F\environment\animals\scared_animal2.wss", //Sound file 1
			"" //sound file 2
		};
		garbageheap_01_f[] =
		{
			"Search Trash",  //Action Name
			"destroy",	//Damage type - hide / destroy
			"A3\Sounds_F\environment\animals\scared_animal2.wss", //Sound file 1
			"" //sound file 2
		};
		garbageheap_03_f[] =
		{
			"Search Trash",  //Action Name
			"destroy",	//Damage type - hide / destroy
			"A3\Sounds_F\environment\animals\scared_animal2.wss", //Sound file 1
			"" //sound file 2
		};
		garbageheap_04_f[] =
		{
			"Search Trash",  //Action Name
			"destroy",	//Damage type - hide / destroy
			"A3\Sounds_F\environment\animals\scared_animal2.wss", //Sound file 1
			"" //sound file 2
		};
		tyres_f[] =
		{
			"Burn Rubber",  //Action Name
			"burn",	//Damage type - hide / destroy
			"", //Sound file 1
			"A3\Sounds_F\environment\animals\scared_animal2.wss" //sound file 2
		};
		/*
		t_malus1s[] = 
		{
			"Pick Apples",
			"destroy",
			"",
			""
		};
		t_pyrus2s[] = 
		{
			"Pick Pears",
			"destroy",
			"",
			""
		};
		p_helianthus[] =
		{
			"Gather Sunflower Seeds",
			"destroy",
			"",
			""
		};
		*/
	};