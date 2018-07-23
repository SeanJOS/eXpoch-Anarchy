class GutSalema: Exile_AbstractCraftingRecipe
{
	name = "Gut Salema";
	pictureItem = "eXpoch_Item_Salema_Gutted";
	requiresFire = 0;
	category = "Hunting";
	returnedItems[] =
	{
		{1, "eXpoch_Item_Salema_Gutted"}
	};
	tools[] =
	{
		"Exile_Item_Knife"
	};
	components[] = 
	{
		{1, "eXpoch_Item_Salema_Raw"}
	};
};
class CookSalema: Exile_AbstractCraftingRecipe
{
	name = "Cook Salema";
	pictureItem = "eXpoch_Item_Salema_Cooked";
	requiresFire = 1;
	category = "Hunting";
	returnedItems[] =
	{
		{1, "eXpoch_Item_Salema_Cooked"}
	};
	components[] = 
	{
		{1, "eXpoch_Item_Salema_Gutted"}
	};
};
class GutMackerel: Exile_AbstractCraftingRecipe
{
	name = "Gut Mackerel";
	pictureItem = "eXpoch_Item_Mackerel_Gutted";
	requiresFire = 0;
	category = "Hunting";
	returnedItems[] =
	{
		{1, "eXpoch_Item_Mackerel_Gutted"}
	};
	tools[] =
	{
		"Exile_Item_Knife"
	};
	components[] = 
	{
		{1, "eXpoch_Item_Mackerel_Raw"}
	};
};
class CookMackerel: Exile_AbstractCraftingRecipe
{
	name = "Cook Mackerel";
	pictureItem = "eXpoch_Item_Mackerel_Cooked";
	requiresFire = 1;
	category = "Hunting";
	returnedItems[] =
	{
		{1, "eXpoch_Item_Mackerel_Cooked"}
	};
	components[] = 
	{
		{1, "eXpoch_Item_Mackerel_Gutted"}
	};
};
class GutTuna: Exile_AbstractCraftingRecipe
{
	name = "Gut Tuna";
	pictureItem = "eXpoch_Item_Tuna_Gutted";
	requiresFire = 0;
	category = "Hunting";
	returnedItems[] =
	{
		{1, "eXpoch_Item_Tuna_Gutted"}
	};
	tools[] =
	{
		"Exile_Item_Knife"
	};
	components[] = 
	{
		{1, "eXpoch_Item_Tuna_Raw"}
	};
};
class CookTuna: Exile_AbstractCraftingRecipe
{
	name = "Cook Tuna";
	pictureItem = "eXpoch_Item_Tuna_Cooked";
	requiresFire = 1;
	category = "Hunting";
	returnedItems[] =
	{
		{1, "eXpoch_Item_Tuna_Cooked"}
	};
	components[] = 
	{
		{1, "eXpoch_Item_Tuna_Gutted"}
	};
};
class GutMullet: Exile_AbstractCraftingRecipe
{
	name = "Gut Mullet";
	pictureItem = "eXpoch_Item_Mullet_Gutted";
	requiresFire = 0;
	category = "Hunting";
	returnedItems[] =
	{
		{1, "eXpoch_Item_Mullet_Gutted"}
	};
	tools[] =
	{
		"Exile_Item_Knife"
	};
	components[] = 
	{
		{1, "eXpoch_Item_Mullet_Raw"}
	};
};
class CookMullet: Exile_AbstractCraftingRecipe
{
	name = "Cook Mullet";
	pictureItem = "eXpoch_Item_Mullet_Cooked";
	requiresFire = 1;
	category = "Hunting";
	returnedItems[] =
	{
		{1, "eXpoch_Item_Mullet_Cooked"}
	};
	components[] = 
	{
		{1, "eXpoch_Item_Mullet_Gutted"}
	};
};
class GutCatShark: Exile_AbstractCraftingRecipe
{
	name = "Gut CatShark";
	pictureItem = "eXpoch_Item_CatShark_Gutted";
	requiresFire = 0;
	category = "Hunting";
	returnedItems[] =
	{
		{1, "eXpoch_Item_CatShark_Gutted"}
	};
	tools[] =
	{
		"Exile_Item_Knife"
	};
	components[] = 
	{
		{1, "eXpoch_Item_CatShark_Raw"}
	};
};
class CookCatShark: Exile_AbstractCraftingRecipe
{
	name = "Cook CatShark";
	pictureItem = "eXpoch_Item_CatShark_Cooked";
	requiresFire = 1;
	category = "Hunting";
	returnedItems[] =
	{
		{1, "eXpoch_Item_CatShark_Cooked"}
	};
	components[] = 
	{
		{1, "eXpoch_Item_CatShark_Gutted"}
	};
};
class GutOrnate: Exile_AbstractCraftingRecipe
{
	name = "Gut Ornate";
	pictureItem = "eXpoch_Item_Ornate_Gutted";
	requiresFire = 0;
	category = "Hunting";
	returnedItems[] =
	{
		{1, "eXpoch_Item_Ornate_Gutted"}
	};
	tools[] =
	{
		"Exile_Item_Knife"
	};
	components[] = 
	{
		{1, "eXpoch_Item_Ornate_Raw"}
	};
};
class CookOrnate: Exile_AbstractCraftingRecipe
{
	name = "Cook Ornate";
	pictureItem = "eXpoch_Item_Ornate_Cooked";
	requiresFire = 1;
	category = "Hunting";
	returnedItems[] =
	{
		{1, "eXpoch_Item_Ornate_Cooked"}
	};
	components[] = 
	{
		{1, "eXpoch_Item_Ornate_Gutted"}
	};
};

class GutSnake: Exile_AbstractCraftingRecipe
{
	name = "Gut Snake";
	pictureItem = "eXpoch_SnakeMeat_EPOCH";
	requiresFire = 0;
	category = "Hunting";
	returnedItems[] =
	{
		{1, "eXpoch_SnakeMeat_EPOCH"}
	};
	tools[] =
	{
		"Exile_Item_Knife"
	};
	components[] = 
	{
		{1, "eXpoch_SnakeCarcass_EPOCH"}
	};
};

class CookRabbit: Exile_AbstractCraftingRecipe
{
	name = "Cook Rabbit";
	pictureItem = "eXpoch_CookedRabbit_EPOCH";
	requiresFire = 1;
	category = "Hunting";
	returnedItems[] =
	{
		{1, "eXpoch_CookedRabbit_EPOCH"}
	};
	components[] = 
	{
		{1, "eXpoch_RabbitCarcass_EPOCH"}
	};
};
class CookTurtle: Exile_AbstractCraftingRecipe
{
	name = "Cook Turtle";
	pictureItem = "eXpoch_CookedTurtle_EPOCH";
	requiresFire = 1;
	category = "Hunting";
	returnedItems[] =
	{
		{1, "eXpoch_CookedTurtle_EPOCH"}
	};
	components[] = 
	{
		{1, "eXpoch_TurtleCarcass_EPOCH"}
	};
};
class CookGoat: Exile_AbstractCraftingRecipe
{
	name = "Cook Goat";
	pictureItem = "eXpoch_CookedGoat_EPOCH";
	requiresFire = 1;
	category = "Hunting";
	returnedItems[] =
	{
		{1, "eXpoch_CookedGoat_EPOCH"}
	};
	components[] = 
	{
		{1, "eXpoch_GoatCarcass_EPOCH"}
	};
};
class CookDog: Exile_AbstractCraftingRecipe
{
	name = "Cook Dog";
	pictureItem = "eXpoch_CookedDog_EPOCH";
	requiresFire = 1;
	category = "Hunting";
	returnedItems[] =
	{
		{1, "eXpoch_CookedDog_EPOCH"}
	};
	components[] = 
	{
		{1, "eXpoch_DogCarcass_EPOCH"}
	};
};
class CookSheep: Exile_AbstractCraftingRecipe
{
	name = "Cook Sheep";
	pictureItem = "eXpoch_CookedSheep_EPOCH";
	requiresFire = 1;
	category = "Hunting";
	returnedItems[] =
	{
		{1, "eXpoch_CookedSheep_EPOCH"}
	};
	components[] = 
	{
		{1, "eXpoch_SheepCarcass_EPOCH"}
	};
};
class CookHen: Exile_AbstractCraftingRecipe
{
	name = "Cook Sheep";
	pictureItem = "eXpoch_CookedChicken_EPOCH";
	requiresFire = 1;
	category = "Hunting";
	returnedItems[] =
	{
		{1, "eXpoch_CookedChicken_EPOCH"}
	};
	components[] = 
	{
		{1, "eXpoch_ChickenCarcass_EPOCH"}
	};
};


class Gold10021010: Exile_AbstractCraftingRecipe
{
	name = "100oz Gold Breakdown";
	pictureItem = "eXpoch_ItemGoldBar10oz";
	requiresFire = 0;
	category = "Metals-N-Gems";
	returnedItems[] =
	{
		{10, "eXpoch_ItemGoldBar10oz"}
	};
	components[] =
	{
		{1,"eXpoch_ItemBriefcaseGold100oz"},
		{1, "eXpoch_ItemBriefcaseE"}
	};
};
class Gold10102100: Exile_AbstractCraftingRecipe
{
	name = "Briefcase of Gold";
	pictureItem = "eXpoch_ItemBriefcaseGold100oz";
	requiresFire = 0;
	category = "Metals-N-Gems";
	returnedItems[] =
	{
		{1, "eXpoch_ItemBriefcaseGold100oz"},
		{1, "eXpoch_ItemBriefcaseE"}
	};
	components[] =
	{
		{10,"eXpoch_ItemGoldBar10oz"}
	};
};
class Gold101210: Exile_AbstractCraftingRecipe
{
	name = "10oz of Gold";
	pictureItem = "eXpoch_ItemGoldBar10oz";
	requiresFire = 0;
	category = "Metals-N-Gems";
	returnedItems[] =
	{
		{1, "eXpoch_ItemGoldBar10oz"}
	};
	components[] =
	{
		{10,"eXpoch_ItemGoldBar"}
	};
};
class GoldOre: Exile_AbstractCraftingRecipe
{
	name = "1oz of Gold";
	pictureItem = "eXpoch_ItemGoldBar";
	requiresFire = 1;
	category = "Metals-N-Gems";
	returnedItems[] =
	{
		{1, "eXpoch_ItemGoldBar"}
	};
	components[] =
	{
		{3,"eXpoch_PartOreGold"}
	};
};
class SilverOre: Exile_AbstractCraftingRecipe
{
	name = "1oz of Silver";
	pictureItem = "eXpoch_ItemSilverBar";
	requiresFire = 1;
	category = "Metals-N-Gems";
	returnedItems[] =
	{
		{1, "eXpoch_ItemSilverBar"}
	};
	components[] =
	{
		{2,"eXpoch_PartOreSilver"}
	};
};

class CraftCorrugatedSmMetalX1: Exile_AbstractCraftingRecipe
{
	name = "Craft Small Corrugated";
	pictureItem = "eXpoch_ItemCorrugated";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "eXpoch_ItemCorrugated"}
	};
	components[] = 
	{
		{2, "eXpoch_ItemScraps"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftCorrugatedSmMetalX2: Exile_AbstractCraftingRecipe
{
	name = "Craft Small Corrugated";
	pictureItem = "eXpoch_ItemCorrugated";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "eXpoch_ItemCorrugated"}
	};
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftCorrugatedLgMetal: Exile_AbstractCraftingRecipe
{
	name = "Craft Large Corrugated";
	pictureItem = "eXpoch_ItemCorrugatedLg";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "eXpoch_ItemCorrugatedLg"}
	};
	components[] = 
	{
		{2, "eXpoch_ItemCorrugated"}
	};
	tools[] = {"Exile_Item_Grinder"};
};

class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "Exile_Item_WoodPlank";
	category = "eXile Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodPlank"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftWoodPlankX: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "eXpoch_PartPlankPack";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "eXpoch_PartPlankPack"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};

class CraftPlywoodPackX: Exile_AbstractCraftingRecipe
{
	name = "Craft Plywood Pack";
	pictureItem = "eXpoch_ItemPlywoodPack";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "eXpoch_ItemPlywoodPack"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};


class CraftStudWallX1: Exile_AbstractCraftingRecipe
{
	name = "Craft Stud Wall";
	pictureItem = "eXpoch_KitStudWall";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "eXpoch_KitStudWall"}
	};
	components[] = 
	{
		{4, "eXpoch_PartPlankPack"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftStudWallX2: Exile_AbstractCraftingRecipe
{
	name = "Craft Stud Wall";
	pictureItem = "eXpoch_KitStudWall";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "eXpoch_KitStudWall"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};

class CraftWoodHalfWallX1: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Half-Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	components[] = 
	{
		{1, "eXpoch_KitStudWall"},
		{2, "eXpoch_PartPlankPack"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftWoodHalfWallX2: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Half-Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	components[] = 
	{
		{1, "eXpoch_KitStudWall"},
		{2, "Exile_Item_WoodPlank"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};

class CraftPlywoodWallX: Exile_AbstractCraftingRecipe
{
	name = "Craft Plywood Wall";
	pictureItem = "eXpoch_KitLargeWoodWall";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "eXpoch_KitLargeWoodWall"}
	};
	components[] = 
	{
		{1, "eXpoch_KitStudWall"},
		{2, "eXpoch_ItemPlywoodPack"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftPlywoodWallDoorwayX1: Exile_AbstractCraftingRecipe
{
	name = "Craft Plywood Wall Doorway";
	pictureItem = "eXpoch_KitLargeWoodWallDoorway";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "eXpoch_KitLargeWoodWallDoorway"}
	};
	components[] = 
	{
		{1, "eXpoch_KitLargeWoodWall"},
		{2, "eXpoch_PartPlankPack"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftPlywoodWallDoorwayX2: Exile_AbstractCraftingRecipe
{
	name = "Craft Plywood Wall Doorway";
	pictureItem = "eXpoch_KitLargeWoodWallDoorway";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "eXpoch_KitLargeWoodWallDoorway"}
	};
	components[] = 
	{
		{1, "eXpoch_KitLargeWoodWall"},
		{2, "Exile_Item_WoodPlank"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftPlywoodWallDoorX1: Exile_AbstractCraftingRecipe
{
	name = "Craft Plywood Wall Door";
	pictureItem = "eXpoch_KitLargeWoodWallwDoor";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "eXpoch_KitLargeWoodWallwDoor"}
	};
	components[] = 
	{
		{1, "eXpoch_KitLargeWoodWallDoorway"},
		{1, "eXpoch_PartPlankPack"},
		{1, "eXpoch_ItemPlywoodPack"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftPlywoodWallDoorX2: Exile_AbstractCraftingRecipe
{
	name = "Craft Plywood Wall Door";
	pictureItem = "eXpoch_KitLargeWoodWallwDoor";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "eXpoch_KitLargeWoodWallwDoor"}
	};
	components[] = 
	{
		{1, "eXpoch_KitLargeWoodWallDoorway"},
		{1, "Exile_Item_WoodPlank"},
		{1, "eXpoch_ItemPlywoodPack"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};

class CraftCorrugatedWallX: Exile_AbstractCraftingRecipe
{
	name = "Craft Corrugated Wall";
	pictureItem = "eXpoch_KitLargeCorrugatedWall";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "eXpoch_KitLargeCorrugatedWall"}
	};
	components[] = 
	{
		{1, "eXpoch_KitLargeWoodWall"},
		{2, "eXpoch_ItemCorrugatedLg"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftCorrugatedWallDoorwayX1: Exile_AbstractCraftingRecipe
{
	name = "Craft Corrugated Wall Doorway";
	pictureItem = "eXpoch_KitLargeCorrugatedWallDoorway";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "eXpoch_KitLargeCorrugatedWallDoorway"}
	};
	components[] = 
	{
		{1, "eXpoch_KitLargeCorrugatedWall"},
		{2, "eXpoch_PartPlankPack"}
	};
	tools[] = {"Exile_Item_Handsaw","Exile_Item_Grinder"};
};
class CraftCorrugatedWallDoorwayX2: Exile_AbstractCraftingRecipe
{
	name = "Craft Corrugated Wall Doorway";
	pictureItem = "eXpoch_KitLargeCorrugatedWallDoorway";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "eXpoch_KitLargeCorrugatedWallDoorway"}
	};
	components[] = 
	{
		{1, "eXpoch_KitLargeCorrugatedWall"},
		{2, "Exile_Item_WoodPlank"}
	};
	tools[] = {"Exile_Item_Handsaw","Exile_Item_Grinder"};
};
class CraftCorrugatedWallDoorX1: Exile_AbstractCraftingRecipe
{
	name = "Craft Corrugated Wall Door";
	pictureItem = "eXpoch_KitLargeCorrugatedWallwDoor";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "eXpoch_KitLargeCorrugatedWallwDoor"}
	};
	components[] = 
	{
		{1, "eXpoch_KitLargeCorrugatedWallDoorway"},
		{1, "eXpoch_PartPlankPack"},
		{1, "eXpoch_ItemCorrugatedLg"}
	};
	tools[] = {"Exile_Item_Handsaw","Exile_Item_Grinder"};
};
class CraftCorrugatedWallDoorX2: Exile_AbstractCraftingRecipe
{
	name = "Craft Corrugated Wall Door";
	pictureItem = "eXpoch_KitLargeCorrugatedWallwDoor";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "eXpoch_KitLargeCorrugatedWallwDoor"}
	};
	components[] = 
	{
		{1, "eXpoch_KitLargeCorrugatedWallDoorway"},
		{1, "Exile_Item_WoodPlank"},
		{1, "eXpoch_ItemCorrugatedLg"}
	};
	tools[] = {"Exile_Item_Handsaw","Exile_Item_Grinder"};
};

class CraftWoodFullWallX1: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Full-Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{1, "eXpoch_KitLargeWoodWall"},
		{2, "Exile_Item_WoodPlank"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftWoodFullWallX2: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Full-Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{1, "eXpoch_KitLargeWoodWall"},
		{2, "eXpoch_PartPlankPack"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};

class CraftWoodFullWallDoorWayX1: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Full-Wall w Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{1, "Exile_Item_WoodPlank"},
		{1, "eXpoch_ItemPlywoodPack"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftWoodFullWallDoorWayX2: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Full-Wall w Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{1, "eXpoch_PartPlankPack"},
		{1, "eXpoch_ItemPlywoodPack"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};

class CraftWoodFullWallGateX1: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Full-Wall w Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{2, "eXpoch_PartPlankPack"},
		{2, "eXpoch_ItemPlywoodPack"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftWoodFullWallGateX2: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Full-Wall w Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{2, "Exile_Item_WoodPlank"},
		{2, "eXpoch_ItemPlywoodPack"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};

class CraftWoodFullWallWindowX1: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Full-Wall w Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{2, "eXpoch_PartPlankPack"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftWoodFullWallWindowX2: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Full-Wall w Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	category = "eXpoch Buildables";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{2, "Exile_Item_WoodPlank"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};