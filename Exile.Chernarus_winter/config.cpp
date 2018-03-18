/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 

class CfgClans
{
	/*
		Defines the amount of pop tabs needed to register a new clan

		Default: 20,000
	*/
	registrationFee = 20000;

	/*
		A list of all characters allowed in a clan *name*

		NOTE: 
	*/
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ._-!:\\/";

	/*

		Maximum markers per clan

	*/
	maximumIcons = 20;

	/*
		Maximum number of characters on a Marker in a presistent system

		Note: MAX 255!
		
	*/
	maximumIconText = 50;

	/*

		Maximum poly markers per clan

	*/
	maximumPolys = 10;


	/* 

		Maximum points in poly
	*/
	maximumPolyNode = 10;
};

class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
	requiresConcreteMixer = 0; // Check if concrete mixer is nearby
};

class CfgCraftingRecipes
{
	
class BreachingChargeBigMomma: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Big Momma)";
	pictureItem = "Exile_Item_BreachingCharge_BigMomma";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_BigMomma"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{3, "Exile_Item_BreachingCharge_Metal"},
		{1, "Exile_Item_MobilePhone"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_ZipTie"}
	};
};

class BreachingChargeMetal: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Metal)";
	pictureItem = "Exile_Item_BreachingCharge_Metal";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Metal"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_DuctTape"},
		{1, "SatchelCharge_Remote_Mag"}
	};
};

class BreachingChargeWood: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Wood)";
	pictureItem = "Exile_Item_BreachingCharge_Wood";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Wood"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_DuctTape"},
		{1, "DemoCharge_Remote_Mag"}
	};
};

class CookBBQSandwich: Exile_AbstractCraftingRecipe
{
	name = "Cook BBQ Sandwich";
	pictureItem = "Exile_Item_BBQSandwich_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_BBQSandwich_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_BBQSandwich"}
	};
};

class CookCatFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Food";
	pictureItem = "Exile_Item_CatFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CatFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_CatFood"}
	};
};

class CookChristmasTinner: Exile_AbstractCraftingRecipe
{
	name = "Cook Christmas Tinner";
	pictureItem = "Exile_Item_ChristmasTinner_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChristmasTinner_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_ChristmasTinner"}
	};
};
class CookCoffee: Exile_AbstractCraftingRecipe
{
	name = "Brew Coffee";
	pictureItem = "Exile_Item_PlasticBottleCoffee";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleCoffee"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleFreshWater"},
		{1, "Exile_Item_InstantCoffee"}
	};
};
class CookDogFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Dog Food";
	pictureItem = "Exile_Item_DogFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_DogFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_DogFood"}
	};
};

class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
{
	name = "Cook Glorious Knakworst";
	pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GloriousKnakworst_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_GloriousKnakworst"}
	};
};

class CookMacasCheese: Exile_AbstractCraftingRecipe
{
	name = "Cook Macas Cheese";
	pictureItem = "Exile_Item_MacasCheese_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MacasCheese_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_MacasCheese"}
	};
};

class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Salt Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};

class CookSausageGravy: Exile_AbstractCraftingRecipe
{
	name = "Cook Sausage Gravy";
	pictureItem = "Exile_Item_SausageGravy_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SausageGravy_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SausageGravy"}
	};
};

class CookSurstromming: Exile_AbstractCraftingRecipe
{
	name = "Cook Surströmming";
	pictureItem = "Exile_Item_Surstromming_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Surstromming_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_Surstromming"}
	};
};

class CraftBandage: Exile_AbstractCraftingRecipe
{
	name = "Craft Bandage";
	pictureItem = "Exile_Item_Bandage";
	returnedItems[] =
	{
		{1, "Exile_Item_Bandage"}
	};
	components[] = 
	{
		{4, "Exile_Item_ToiletPaper"}
	};
};

class CraftConcreteDoorway: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Doorway";
	pictureItem = "Exile_Item_ConcreteDoorwayKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteDoorwayKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};

class CraftConcreteDrawbridge: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Drawbridge";
	pictureItem = "Exile_Item_ConcreteDrawBridgeKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteDrawBridgeKit"},
		{4, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_MetalPole"},
		{3, "Exile_Item_JunkMetal"},
		{4, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};

class CraftConcreteFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor";
	pictureItem = "Exile_Item_ConcreteFloorKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorKit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};

class CraftConcreteFloorPortSmall: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor Port (Small)";
	pictureItem = "Exile_Item_ConcreteFloorPortSmallKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorPortSmallKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor Port";
	pictureItem = "Exile_Item_ConcreteFloorPortKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorPortKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Gate";
	pictureItem = "Exile_Item_ConcreteGateKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteGateKit"},
		{4, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_MetalPole"},
		{4, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};

class CraftConcreteLadderHatch: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Ladder Hatch";
	pictureItem = "Exile_Item_ConcreteLadderHatchKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteLadderHatchKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{3, "Exile_Item_JunkMetal"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcretStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Stairs";
	pictureItem = "Exile_Item_ConcreteStairsKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteStairsKit"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcretSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Support";
	pictureItem = "Exile_Item_ConcreteSupportKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteSupportKit"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftConcreteWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Wall";
	pictureItem = "Exile_Item_ConcreteWallKit";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftFirePlace: Exile_AbstractCraftingRecipe
{
	name = "Craft Fire Place";
	pictureItem = "Exile_Item_CampFireKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_CampFireKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
};
class CraftFloodLight: Exile_AbstractCraftingRecipe
{
	name = "Craft Flood Light";
	pictureItem = "Exile_Item_FloodLightKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_FloodLightKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name = "Craft Fortification Upgrade";
	pictureItem = "Exile_Item_MetalBoard"; //<< CHANGE IT
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_FortificationUpgrade"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftHBarrier5Kit: Exile_AbstractCraftingRecipe
{
	name = "Craft H-barrier (5 Blocks)";
	pictureItem = "Exile_Item_HBarrier5Kit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Pliers"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_HBarrier5Kit"}
	};
	components[] = 
	{
		{3, "Exile_Item_SandBagsKit_Long"},
		{2, "Exile_Item_MetalWire"}
	};
};
class CraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalBoard"}
	};
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalHedgehog: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Hedgehog";
	pictureItem = "Exile_Item_MetalHedgehogKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalHedgehogKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalLadder: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Ladder";
	pictureItem = "Exile_Item_MetalLadderKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_MetalLadderKit"}
	};
	components[] =
	{
		{6, "Exile_Item_JunkMetal"}
	};
};
class CraftMetalLadderDouble: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Ladder (Double Tall)";
	pictureItem = "Exile_Item_MetalLadderDoubleKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_MetalLadderDoubleKit"}
	};
	components[] =
	{
		{2, "Exile_Item_MetalLadderKit"}
	};
};
class CraftMetalPole: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalPole"}
	};
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftPortableGenerator: Exile_AbstractCraftingRecipe
{
	name = "Craft Portable Generator";
	pictureItem = "Exile_Item_PortableGeneratorKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftRazorWireKit: Exile_AbstractCraftingRecipe
{
	name = "Craft Razor Wire Kit Kit";
	pictureItem = "Exile_Item_RazorWireKit_Long";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_RazorWireKit_Long"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class CraftRepairKitConcrete: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Repair Kit";
	pictureItem = "Exile_Item_Cement";
	requiresConcreteMixer = true;
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitConcrete"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class CraftRepairKitMetal: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Repair Kit";
	pictureItem = "Exile_Item_RepairKitMetal";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitMetal"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Grinder"
	};
};
class CraftRepairKitWood: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Repair Kit";
	pictureItem = "Exile_Item_RepairKitWood";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitWood"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox"
	};
};
class CraftSandBagsKitCorner: Exile_AbstractCraftingRecipe
{
	name = "Craft Sandbags Kit (Corner)";
	pictureItem = "Exile_Item_SandBagsKit_Corner";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Corner"}
	};
	components[] = 
	{
		{3, "Exile_Item_Sand"}
	};
};
class CraftSandBagsKitLong: Exile_AbstractCraftingRecipe
{
	name = "Craft Sand Bags Kit (Long)";
	pictureItem = "Exile_Item_SandBagsKit_Long";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Long"}
	};
	components[] = 
	{
		{6, "Exile_Item_Sand"}
	};
};
class CraftStorageCrate: Exile_AbstractCraftingRecipe
{
	name = "Craft Storage Crate";
	pictureItem = "Exile_Item_StorageCrateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_StorageCrateKit"}
	};
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"}
	};
};
class CraftWaterBarrel: Exile_AbstractCraftingRecipe
{
	name = "Craft Water Barrel";
	pictureItem = "Exile_Item_WaterBarrelKit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_WaterBarrelKit"}
	};
	components[] = 
	{
		{20, "Exile_Item_PlasticBottleEmpty"}
	};
};
class CraftWireFenceKit: Exile_AbstractCraftingRecipe
{
	name = "Craft Wire Fence Kit";
	pictureItem = "Exile_Item_WireFenceKit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_WireFenceKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"},
		{6, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor";
	pictureItem = "Exile_Item_WoodFloorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "Exile_Item_WoodPlank";
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
class CraftWoodStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Stairs";
	pictureItem = "Exile_Item_WoodStairsKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodStairsKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Support";
	pictureItem = "Exile_Item_WoodSupportKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
{
	name = "Craft 1/2 Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodSmallFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Small Floor Port";
	pictureItem = "Exile_Item_CraftWoodFloorPortSmallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortSmallKit"}
	};
	components[] = 
	{
		{7, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodLadder: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Ladder";
	pictureItem = "Exile_Item_WoodLadderKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodLadderKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};
class CraftWoodLadderHatch: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Ladder Hatch";
	pictureItem = "Exile_Item_WoodLadderHatchKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodLadderHatchKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_JunkMetal"}
	};
};
class CraftWorkBench: Exile_AbstractCraftingRecipe
{
	name = "Craft Work Bench";
	pictureItem = "Exile_Item_WorkBenchKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_WorkBenchKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodLog"}
	};
};
class EmptyFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Empty Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterEmpty";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Salt Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};
class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Fresh Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiredInteractionModelGroup = "CleanWaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Salt Water";
	pictureItem = "Exile_Item_PlasticBottleSaltWater";
	requiresOcean = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyWaterCanisterWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_WaterCanisterDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
};
class FillFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Fill Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterFull";
	requiredInteractionModelGroup = "FuelSource";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
};
class UpgradeToConcreteDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Door";
	pictureItem = "Exile_Item_ConcreteDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteDoorwayKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Floor Port";
	pictureItem = "Exile_Item_ConcreteFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorPortKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteFloorKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToConcreteGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Gate";
	pictureItem = "Exile_Item_ConcreteGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToConcreteWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Window";
	pictureItem = "Exile_Item_ConcreteWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteWindowKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
};
class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Door";
	pictureItem = "Exile_Item_WoodDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodFloorKit"},
		{2, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{4, "Exile_Item_WoodPlank"}
	};
};
class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodWallHalfKit"}
	};
};
class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
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
};
};
class CfgExileArsenal
{
	class Exile_Uniform_BambiOverall				{ quality = 1; price = 1; sellPrice = 1; };

	
	///////////////////////////////////////////////////////////////////////////////
	// CSAT Snow Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class IP_U_O_CombatUniform_SnowHex				{ quality = 2; price = 1040; };
	class IP_U_O_CombatUniform_SnowTiger			{ quality = 2; price = 1040; };
	class IP_U_O_HeliPilotCoveralls_SnowHex			{ quality = 1; price = 550; };
	class IP_U_O_OfficerUniform_SnowHex				{ quality = 1; price = 550; };
	class IP_U_O_OfficerUniform_SnowTiger			{ quality = 1; price = 550; };
	class IP_U_O_PilotCoveralls_SnowHex				{ quality = 1; price = 550; };
	
	///////////////////////////////////////////////////////////////////////////////
	// CSAT Snow Vests
	///////////////////////////////////////////////////////////////////////////////
	class IP_V_PlateCarrierGL_rgrSnowHex			{ quality = 4; price = 1750; };
	class IP_V_PlateCarrierGL_rgrSnowTiger			{ quality = 4; price = 1750; };
	class IP_V_PlateCarrierSpec_rgrSnowHex			{ quality = 3; price = 900; };
	class IP_V_PlateCarrierSpec_rgrSnowTiger		{ quality = 3; price = 900; };
	class IP_V_HarnessOGL_gryST						{ quality = 1; price = 230; };
	class IP_V_HarnessO_gryST						{ quality = 1; price = 230; };
	class IP_V_BandollierO_snw						{ quality = 1; price = 230; };
	class IP_V_TacVest_SnowHex						{ quality = 1; price = 150; };
	class IP_V_TacVest_SnowTiger					{ quality = 1; price = 150; };
		
	///////////////////////////////////////////////////////////////////////////////
	// WY Snow HeadGears
	///////////////////////////////////////////////////////////////////////////////	
	class IP_H_HelmetSpecO_SnowHex					{ quality = 3; price = 1000; };
	class IP_H_HelmetSpecO_SnowTiger				{ quality = 3; price = 1000; };
	class IP_H_Beret_02CSAT							{ quality = 1; price = 60; };
	class IP_H_Beret_02SnowTiger					{ quality = 1; price = 60; };
	class IP_H_Booniehat_HexSnow					{ quality = 1; price = 60; };
	class IP_H_Booniehat_SnowTiger					{ quality = 1; price = 60; };
	class IP_H_HelmetCrew_O_Snow					{ quality = 2; price = 600; };
	class IP_H_HelmetLeaderO_SnowHex				{ quality = 2; price = 600; };
	class IP_H_HelmetLeaderO_SnowTiger				{ quality = 2; price = 600; };
	class IP_H_CrewHelmetHeli_O_Snow				{ quality = 1; price = 650; };
	class IP_H_PilotHelmetHeli_O_Snow				{ quality = 2; price = 400; };
	class IP_H_MilCap_HexSnow						{ quality = 1; price = 80; };
	class IP_H_MilCap_SnowTiger						{ quality = 1; price = 80; };
	class IP_H_PilotHelmetFighter_O_Snow			{ quality = 6; price = 12500; };
	class IP_H_HelmetO_SnowHex						{ quality = 2; price = 400; };
	class IP_H_HelmetO_SnowTiger					{ quality = 2; price = 400; };
	
	///////////////////////////////////////////////////////////////////////////////
	// WY Snow Backpacks
	///////////////////////////////////////////////////////////////////////////////
	class IP_B_AssaultPack_SnowHex					{ quality = 1; price = 590; };
	class IP_B_AssaultPack_SnowTiger				{ quality = 1; price = 590; };
	class IP_B_Carryall_SnowHex						{ quality = 3; price = 2600; };
	class IP_B_Carryall_SnowTiger					{ quality = 3; price = 2600; };
	class IP_B_FieldPack_SnowHex					{ quality = 1; price = 620; };
	class IP_B_FieldPack_SnowTiger					{ quality = 1; price = 620; };
	class IP_B_Kitbag_SnowHex						{ quality = 2; price = 1400; };
	class IP_B_Kitbag_SnowTiger						{ quality = 2; price = 1400; };
	
	///////////////////////////////////////////////////////////////////////////////
	// WY Snow Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class WY_Snow_co_a							{ quality = 1; price = 550; };
	class WY_Snow_co_b							{ quality = 1; price = 550; };
	class WY_Snow_co_c							{ quality = 1; price = 550; };
	class WY_GhillieFull_Night					{ quality = 4; price = 2250; };
	class WY_GhillieFull_Day					{ quality = 6; price = 3550; };
	class WY_GhillieLeo							{ quality = 6; price = 3250; };
	class WY_Snow_i_a							{ quality = 2; price = 1250; };
	class WY_Snow_i_b							{ quality = 2; price = 1250; };
	class WY_Snow_i_c							{ quality = 2; price = 1050; };
	class WY_Ghillie_coverall_a					{ quality = 5; price = 3000; };
	class WY_Ghillie_coverall_b					{ quality = 5; price = 3000; };
	class WY_All_GhillieFull_Night				{ quality = 4; price = 2250; };
	class WY_All_GhillieLeo						{ quality = 5; price = 2750; };
	class WY_All_Ghillie_Coverall_b				{ quality = 5; price = 2750; };
	class WY_All_Ghillie_Coverall_a				{ quality = 6; price = 3500; };
	class WY_Snow_All_HeliPilotCoverall_a		{ quality = 1; price = 550; };
	class WY_Snow_All_HeliPilotCoverall_b		{ quality = 1; price = 600; };
	class WY_Snow_All_HeliPilotCoverall_c		{ quality = 1; price = 600; };
	class WY_Snow_All_O_clothing_a				{ quality = 1; price = 550; };
	class WY_Snow_All_O_clothing_b				{ quality = 1; price = 550; };
	class WY_Snow_All_O_clothing_c				{ quality = 2; price = 1050; };	
	///////////////////////////////////////////////////////////////////////////////
	// WY Snow Vests
	///////////////////////////////////////////////////////////////////////////////
	class WY_Vest_snow_a						{ quality = 3; price = 1200; };
	class WY_Vest_snow_b						{ quality = 3; price = 1200; };
	class WY_Vest_snow_c	                    { quality = 3; price = 1200; };
	class WY_Vest_snow_tact_a					{ quality = 1; price = 290; };
	class WY_Vest_snow_tact_b					{ quality = 1; price = 290; };
	class WY_Vest_snow_tact_c	                { quality = 1; price = 290; };

    ///////////////////////////////////////////////////////////////////////////////
	// WY Snow HeadGears
	///////////////////////////////////////////////////////////////////////////////
	class WY_Snow_Boonie_a						{ quality = 1; price = 60; };
	class WY_Snow_Boonie_b						{ quality = 1; price = 60; };
	class WY_Snow_Boonie_c	                    { quality = 1; price = 60; };
	class WY_Snow_Boonie_d						{ quality = 1; price = 60; };
	class WY_Snow_Boonie_e						{ quality = 1; price = 60; };
	class WY_Snow_Boonie_f	                    { quality = 1; price = 60; };

	class WY_Snow_Shemag_a						{ quality = 2; price = 100; };
	class WY_Snow_Shemag_b						{ quality = 2; price = 100; };
	class WY_Snow_Shemag_c	                    { quality = 2; price = 100; };
	class WY_Snow_Shemag_d						{ quality = 2; price = 100; };
	class WY_Snow_Shemag_e						{ quality = 2; price = 100; };
	class WY_Snow_Shemag_f	                    { quality = 2; price = 100; };

	class WY_Snow_PilotHelmetHeli_O				{ quality = 2; price = 400; };
	class WY_Snow_CrewtHelmetHeli_O				{ quality = 2; price = 400; };
	class WY_Snow_H_HelmetO_ocamo_a	            { quality = 2; price = 400; };
	class WY_Snow_H_HelmetO_ocamo_b				{ quality = 2; price = 400; };

	class WY_Snow_H_Watchcap_a					{ quality = 1; price = 50; };
	class WY_Snow_H_Watchcap_b	                { quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// WY Snow Backpacks
	///////////////////////////////////////////////////////////////////////////////
	class WY_Snow_Carryall_A						{ quality = 3; price = 2600; };
	class WY_Snow_Carryall_B						{ quality = 3; price = 2600; };
	class WY_Snow_Carryall_C	                    { quality = 3; price = 2600; };
	class WY_Snow_Carryall_D						{ quality = 3; price = 2600; };
	class WY_Snow_Carryall_E						{ quality = 3; price = 2600; };
	class WY_Snow_Carryall_F	                    { quality = 3; price = 2600; };

	class WY_Snow_AssoultPack_A						{ quality = 1; price = 600; };
	class WY_Snow_AssoultPack_B						{ quality = 1; price = 600; };
	class WY_Snow_AssoultPack_C	                    { quality = 1; price = 600; };
	class WY_Snow_AssoultPack_D						{ quality = 1; price = 600; };
	class WY_Snow_AssoultPack_E						{ quality = 1; price = 600; };
	
	
	///////////////////////////////////////////////////////////////////////////////
	// Civillian Clothing
	///////////////////////////////////////////////////////////////////////////////
	class U_C_Journalist 							{ quality = 1; price = 20; };
	class U_C_Poloshirt_blue 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_burgundy 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_salmon 						{ quality = 1; price = 20; };
	class U_C_Poloshirt_stripped 					{ quality = 1; price = 20; };
	class U_C_Poloshirt_tricolour 					{ quality = 1; price = 20; };
	class U_C_Poor_1 								{ quality = 1; price = 20; };
	class U_C_Poor_2 								{ quality = 1; price = 20; };
	class U_C_Poor_shorts_1 						{ quality = 1; price = 20; };
	class U_C_Scientist 							{ quality = 1; price = 20; };
	class U_OrestesBody 							{ quality = 1; price = 40; };
	class U_Rangemaster 							{ quality = 1; price = 40; };
	class U_NikosAgedBody 							{ quality = 1; price = 40; };
	class U_NikosBody 								{ quality = 1; price = 40; };
	class U_Competitor 								{ quality = 1; price = 40; };
	class U_Marshal 								{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Soldier Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_B_CombatUniform_mcam 					{ quality = 1; price = 540; };
	class U_B_CombatUniform_mcam_tshirt 			{ quality = 1; price = 540; };
	class U_B_CombatUniform_mcam_vest 				{ quality = 1; price = 540; };
	class U_B_CombatUniform_mcam_worn 				{ quality = 1; price = 540; };
	class U_B_CTRG_1 								{ quality = 1; price = 540; };
	class U_B_CTRG_2 								{ quality = 1; price = 540; };
	class U_B_CTRG_3								{ quality = 1; price = 540; };
	class U_I_CombatUniform 						{ quality = 1; price = 540; };
	class U_I_CombatUniform_shortsleeve				{ quality = 1; price = 540; };
	class U_I_CombatUniform_tshirt					{ quality = 1; price = 540; };
	class U_I_OfficerUniform						{ quality = 1; price = 540; };
	class U_O_CombatUniform_ocamo 					{ quality = 1; price = 540; };
	class U_O_CombatUniform_oucamo 					{ quality = 1; price = 540; };
	class U_O_OfficerUniform_ocamo 					{ quality = 1; price = 580; };
	class U_B_SpecopsUniform_sgg 					{ quality = 1; price = 580; };
	class U_O_SpecopsUniform_blk 					{ quality = 1; price = 580; };
	class U_O_SpecopsUniform_ocamo 					{ quality = 1; price = 580; };
	class U_I_G_Story_Protagonist_F 				{ quality = 2; price = 1000; };
	class Exile_Uniform_Woodland 					{ quality = 2; price = 1150; };
	
	//nove 12.3.2018
	class U_I_FullGhillie_lsh 						{ quality = 3; price = 1550; };
	class U_O_FullGhillie_lsh 						{ quality = 3; price = 1550; };
	class U_B_FullGhillie_lsh 						{ quality = 3; price = 1550; };
	class U_I_FullGhillie_sard 						{ quality = 3; price = 1350; };
	class U_O_FullGhillie_sard 						{ quality = 3; price = 1350; };
	class U_B_FullGhillie_sard 						{ quality = 3; price = 1350; };
	class U_I_FullGhillie_ard						{ quality = 3; price = 1150; };
	class U_O_FullGhillie_ard 						{ quality = 3; price = 1150; };
	class U_B_FullGhillie_ard 						{ quality = 3; price = 1150; };
	class U_I_C_Soldier_Camo_F 						{ quality = 2; price = 950; };
	class U_I_C_Soldier_Bandit_4_F 					{ quality = 1; price = 550; };
	class U_I_C_Soldier_Bandit_5_F 					{ quality = 1; price = 550; };

	
	///////////////////////////////////////////////////////////////////////////////
	// CUP Uniforms
	///////////////////////////////////////////////////////////////////////////////
	
	class CUP_O_TKI_Khet_Partug_01                  { quality = 1; price = 550; };
    class CUP_O_TKI_Khet_Partug_02                  { quality = 1; price = 550; };
    class CUP_O_TKI_Khet_Partug_03                  { quality = 1; price = 550; };
    class CUP_O_TKI_Khet_Partug_04                  { quality = 1; price = 550; };
    class CUP_O_TKI_Khet_Partug_05                  { quality = 1; price = 550; };
    class CUP_O_TKI_Khet_Partug_06                  { quality = 1; price = 550; };
    class CUP_O_TKI_Khet_Partug_07                  { quality = 1; price = 550; };
    class CUP_O_TKI_Khet_Partug_08                  { quality = 1; price = 550; };
    class CUP_O_TKI_Khet_Jeans_01                   { quality = 1; price = 550; };
    class CUP_O_TKI_Khet_Jeans_02                   { quality = 1; price = 550; };
    class CUP_O_TKI_Khet_Jeans_03                   { quality = 1; price = 550; };
    class CUP_O_TKI_Khet_Jeans_04                   { quality = 1; price = 550; };
    class CUP_U_C_Pilot_01                          { quality = 1; price = 550; };
    class CUP_U_C_Citizen_01                        { quality = 1; price = 550; };
    class CUP_U_C_Citizen_02                        { quality = 1; price = 550; };
    class CUP_U_C_Citizen_03                        { quality = 1; price = 550; };
    class CUP_U_C_Citizen_04                        { quality = 1; price = 550; };
    class CUP_U_C_Worker_01                         { quality = 1; price = 550; };
    class CUP_U_C_Worker_02                         { quality = 1; price = 550; };
    class CUP_U_C_Worker_03                         { quality = 1; price = 550; };
    class CUP_U_C_Worker_04                         { quality = 1; price = 550; };
    class CUP_U_C_Profiteer_01                      { quality = 1; price = 550; };
    class CUP_U_C_Profiteer_02                      { quality = 1; price = 550; };
    class CUP_U_C_Profiteer_03                      { quality = 1; price = 550; };
    class CUP_U_C_Profiteer_04                      { quality = 1; price = 550; };
    class CUP_U_C_Woodlander_01                     { quality = 1; price = 550; };
    class CUP_U_C_Woodlander_02                     { quality = 1; price = 550; };
    class CUP_U_C_Woodlander_03                     { quality = 1; price = 550; };
    class CUP_U_C_Woodlander_04                     { quality = 1; price = 550; };
    class CUP_U_C_Villager_01                       { quality = 1; price = 550; };
    class CUP_U_C_Villager_02                       { quality = 1; price = 550; };
    class CUP_U_C_Villager_03                       { quality = 1; price = 550; };
    class CUP_U_C_Villager_04                       { quality = 1; price = 550; };
    class CUP_U_B_CZ_WDL_TShirt                     { quality = 1; price = 550; };
    class CUP_U_B_GER_Tropentarn_1                  { quality = 1; price = 550; };
    class CUP_U_B_GER_Tropentarn_2                  { quality = 1; price = 550; };
    class CUP_U_B_GER_Ghillie                       { quality = 2; price = 1050; };
    class CUP_U_B_GER_Flecktarn_1                   { quality = 1; price = 550; };
    class CUP_U_B_GER_Flecktarn_2                   { quality = 1; price = 550; };
    class CUP_U_B_GER_Fleck_Ghillie                 { quality = 2; price = 1150; };
    class CUP_U_B_USMC_Officer                      { quality = 1; price = 550; };
    class CUP_U_B_USMC_PilotOverall                 { quality = 1; price = 550; };
    class CUP_U_B_USMC_Ghillie_WDL                  { quality = 2; price = 1050; };
    class CUP_U_B_USMC_MARPAT_WDL_Sleeves           { quality = 1; price = 550; };
    class CUP_U_B_USMC_MARPAT_WDL_RolledUp          { quality = 1; price = 550; };
    class CUP_U_B_USMC_MARPAT_WDL_Kneepad           { quality = 1; price = 550; };
    class CUP_U_B_USMC_MARPAT_WDL_TwoKneepads       { quality = 1; price = 550; };
    class CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad     { quality = 1; price = 550; };
    class CUP_U_B_FR_SpecOps                        { quality = 1; price = 550; };
    class CUP_U_B_FR_Scout                          { quality = 1; price = 550; };
    class CUP_U_B_FR_Scout1                         { quality = 1; price = 550; };
    class CUP_U_B_FR_Scout2                         { quality = 1; price = 550; };
    class CUP_U_B_FR_Scout3                         { quality = 1; price = 550; };
    class CUP_U_B_FR_Officer                        { quality = 1; price = 550; };
    class CUP_U_B_FR_Corpsman                       { quality = 1; price = 550; };
    class CUP_U_B_FR_DirAction                      { quality = 1; price = 550; };
    class CUP_U_B_FR_DirAction2                     { quality = 1; price = 550; };
    class CUP_U_B_FR_Light                          { quality = 1; price = 550; };
    class CUP_U_I_GUE_Flecktarn                     { quality = 1; price = 550; };
    class CUP_U_I_GUE_Flecktarn2                    { quality = 1; price = 550; };
    class CUP_U_I_GUE_Flecktarn3                    { quality = 1; price = 550; };
    class CUP_U_I_GUE_Woodland1                     { quality = 1; price = 550; };
    class CUP_U_I_Ghillie_Top                       { quality = 2; price = 1150; };
    class CUP_U_I_RACS_PilotOverall                 { quality = 1; price = 550; };
    class CUP_U_I_RACS_Desert_1                     { quality = 1; price = 550; };
    class CUP_U_I_RACS_Desert_2                     { quality = 1; price = 550; };
    class CUP_U_I_RACS_Urban_1                      { quality = 1; price = 550; };
    class CUP_U_I_RACS_Urban_2                      { quality = 1; price = 550; };
    class CUP_U_O_SLA_Officer                       { quality = 1; price = 550; };
    class CUP_U_O_SLA_Officer_Suit                  { quality = 1; price = 550; };
    class CUP_U_O_SLA_MixedCamo                     { quality = 1; price = 550; };
    class CUP_U_O_SLA_Green                         { quality = 1; price = 550; };
    class CUP_U_O_SLA_Urban                         { quality = 1; price = 550; };
    class CUP_U_O_SLA_Desert                        { quality = 1; price = 550; };
    class CUP_U_O_SLA_Overalls_Pilot                { quality = 1; price = 550; };
    class CUP_U_O_SLA_Overalls_Tank                 { quality = 1; price = 550; };
    class CUP_U_O_Partisan_TTsKO                    { quality = 1; price = 550; };
    class CUP_U_O_Partisan_TTsKO_Mixed              { quality = 1; price = 550; };
    class CUP_U_O_Partisan_VSR_Mixed1               { quality = 1; price = 550; };
    class CUP_U_O_Partisan_VSR_Mixed2               { quality = 1; price = 550; };
    class CUP_U_O_TK_Officer                        { quality = 1; price = 550; };
    class CUP_U_O_TK_MixedCamo                      { quality = 1; price = 550; };
    class CUP_U_O_TK_Green                          { quality = 1; price = 550; };
    class CUP_U_O_TK_Ghillie         				{ quality = 2; price = 1050; };
    class CUP_U_O_TK_Ghillie_Top    				{ quality = 2; price = 1150; };


	///////////////////////////////////////////////////////////////////////////////
	// WY Snow Facewear
	///////////////////////////////////////////////////////////////////////////////
	class WY_Snow_G_Combat_a						{ quality = 3; price = 350; };
	class WY_Snow_G_Combat_b						{ quality = 3; price = 350; };
	class WY_Snow_G_Combat_c	                    { quality = 3; price = 350; };
	class WY_Snow_G_Balaclava_combat_a				{ quality = 3; price = 350; };
	class WY_Snow_G_Balaclava_combat_b				{ quality = 3; price = 350; };
	class WY_Snow_G_Balaclava_combat_c	            { quality = 3; price = 350; };
	class WY_Snow_G_Balaclava	                    { quality = 3; price = 350; };

	///////////////////////////////////////////////////////////////////////////////
	// Guerilla Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_C_HunterBody_grn						{ quality = 1; price = 540; };
	class U_IG_Guerilla1_1							{ quality = 1; price = 540; };
	class U_IG_Guerilla2_1							{ quality = 1; price = 560; };
	class U_IG_Guerilla2_2							{ quality = 1; price = 540; };
	class U_IG_Guerilla2_3							{ quality = 1; price = 540; };
	class U_IG_Guerilla3_1							{ quality = 1; price = 540; };
	class U_BG_Guerilla2_1							{ quality = 1; price = 540; };
	class U_IG_Guerilla3_2							{ quality = 1; price = 540; };
	class U_BG_Guerrilla_6_1						{ quality = 1; price = 560; };
	class U_BG_Guerilla1_1							{ quality = 1; price = 540; };
	class U_BG_Guerilla2_2							{ quality = 1; price = 540; };
	class U_BG_Guerilla2_3							{ quality = 1; price = 540; };
	class U_BG_Guerilla3_1							{ quality = 1; price = 540; };
	class U_BG_leader								{ quality = 1; price = 540; };
	class U_IG_leader								{ quality = 1; price = 540; };
	class U_I_G_resistanceLeader_F					{ quality = 2; price = 1000; };
	
	//nové 13.1.2018
	class CUP_U_B_BAF_DPM_S2_UnRolled				{ quality = 2; price = 1060; };
	class CUP_U_B_BAF_DPM_S1_RolledUp				{ quality = 2; price = 1060; };
	class CUP_U_B_BAF_MTP_S2_UnRolled				{ quality = 2; price = 1060; };
	class CUP_U_B_BAF_MTP_S1_RolledUp				{ quality = 2; price = 1060; };
	class CUP_U_B_BAF_MTP_S4_UnRolled				{ quality = 2; price = 1060; };
	class CUP_U_B_BAF_MTP_S3_RolledUp				{ quality = 2; price = 1060; };
	class CUP_U_B_BAF_MTP_S5_UnRolled				{ quality = 2; price = 1060; };
	class CUP_U_B_BAF_MTP_S6_UnRolled				{ quality = 2; price = 1060; };
	class U_B_T_Soldier_F							{ quality = 1; price = 560; };
	class CUP_U_B_CDF_FST_1				 			{ quality = 1; price = 560; };
	class CUP_U_B_CDF_MNT_1							{ quality = 1; price = 560; };
	class CUP_U_B_CDF_FST_2							{ quality = 1; price = 560; };
	class CUP_U_B_CDF_MNT_2							{ quality = 1; price = 560; };
	class U_O_T_Soldier_F							{ quality = 1; price = 560; };
	class U_O_V_Soldier_Viper_hex_F					{ quality = 1; price = 560; };
	class U_O_V_Soldier_Viper_F						{ quality = 1; price = 560; };
	class U_B_CTRG_Soldier_F						{ quality = 2; price = 1060; };
	class U_B_CTRG_Soldier_2_F						{ quality = 2; price = 1060; };
	class U_B_CTRG_Soldier_3_F						{ quality = 2; price = 1060; };


	
	///////////////////////////////////////////////////////////////////////////////
	// Wet Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_I_Wetsuit								{ quality = 2; price = 880; };
	class U_O_Wetsuit								{ quality = 2; price = 880; };
	class U_B_Wetsuit								{ quality = 2; price = 880; };
	class U_B_survival_uniform						{ quality = 2; price = 880; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandolliers
	///////////////////////////////////////////////////////////////////////////////
	class V_BandollierB_blk							{ quality = 1; price = 220; };
	class V_BandollierB_cbr							{ quality = 1; price = 220; };
	class V_BandollierB_khk							{ quality = 1; price = 220; };
	class V_BandollierB_oli							{ quality = 1; price = 220; };
	class V_BandollierB_rgr							{ quality = 1; price = 220; };

	///////////////////////////////////////////////////////////////////////////////
	// Chestrigs
	///////////////////////////////////////////////////////////////////////////////
	class V_Chestrig_blk 							{ quality = 1; price = 330; };
	class V_Chestrig_khk 							{ quality = 1; price = 330; };
	class V_Chestrig_oli 							{ quality = 1; price = 330; };
	class V_Chestrig_rgr 							{ quality = 1; price = 330; };

	///////////////////////////////////////////////////////////////////////////////
	// Vests
	///////////////////////////////////////////////////////////////////////////////
	class V_Press_F									{ quality = 1; price = 110; };
	class V_Rangemaster_belt						{ quality = 1; price = 100; };
	class V_TacVest_blk								{ quality = 1; price = 150; };
	class V_TacVest_blk_POLICE						{ quality = 1; price = 150; };
	class V_TacVest_brn								{ quality = 1; price = 150; };
	class V_TacVest_camo							{ quality = 1; price = 150; };
	class V_TacVest_khk								{ quality = 1; price = 150; };
	class V_TacVest_oli								{ quality = 1; price = 150; };
	class V_TacVestCamo_khk							{ quality = 1; price = 150; };
	class V_TacVestIR_blk							{ quality = 1; price = 150; };
	class V_I_G_resistanceLeader_F					{ quality = 1; price = 250; };

	//nové 13.1.2018
	class CUP_V_RUS_6B3_1							{ quality = 3; price = 1050; };
	class CUP_V_CDF_6B3_1_Green						{ quality = 3; price = 1050; };
	class CUP_V_RUS_6B3_2							{ quality = 3; price = 1050; };
	class CUP_V_RUS_6B3_4							{ quality = 3; price = 1050; };
	class CUP_V_RUS_6B3_3							{ quality = 3; price = 1050; };
	class CUP_V_CDF_6B3_3_Green						{ quality = 3; price = 1050; };
	class CUP_V_B_GER_Vest_2						{ quality = 2; price = 550; };
	class CUP_V_B_GER_Vest_1						{ quality = 2; price = 550; };
	class CUP_V_I_RACS_Carrier_Vest_2				{ quality = 3; price = 1050; };
	class CUP_V_I_RACS_Carrier_Vest					{ quality = 3; price = 1050; };
	class CUP_V_I_RACS_Carrier_Vest_3				{ quality = 3; price = 1050; };
	class CUP_V_B_GER_Carrier_Vest_2				{ quality = 3; price = 1050; };
	class CUP_V_B_GER_Carrier_Vest					{ quality = 3; price = 1050; };
	class CUP_V_B_GER_Carrier_Vest_3				{ quality = 3; price = 1050; };
	class CUP_V_I_RACS_Carrier_Vest_wdl_2			{ quality = 4; price = 1550; };
	class CUP_V_I_RACS_Carrier_Vest_wdl				{ quality = 4; price = 1550; };
	class CUP_V_I_RACS_Carrier_Vest_wdl_3			{ quality = 4; price = 1550; };
	class CUP_V_PMC_CIRAS_Black_Veh					{ quality = 2; price = 550; };
	class CUP_V_PMC_CIRAS_Black_Empty				{ quality = 2; price = 550; };
	class CUP_V_PMC_CIRAS_Black_Grenadier			{ quality = 2; price = 550; };
	class CUP_V_PMC_CIRAS_Black_Patrol				{ quality = 2; price = 550; };
	class CUP_V_PMC_CIRAS_Black_TL					{ quality = 2; price = 550; };
	class CUP_V_PMC_IOTV_Black_AR					{ quality = 2; price = 550; };
	class CUP_V_PMC_IOTV_Black_Empty				{ quality = 2; price = 550; };
	class CUP_V_PMC_IOTV_Black_Gren					{ quality = 2; price = 550; };
	class CUP_V_PMC_IOTV_Black_Patrol				{ quality = 2; price = 550; };
	class CUP_V_PMC_IOTV_Black_TL					{ quality = 2; price = 550; };
	class CUP_V_B_MTV_Pouches						{ quality = 1; price = 350; };
	class CUP_V_B_MTV_PistolBlack					{ quality = 1; price = 350; };
	class CUP_V_B_MTV								{ quality = 1; price = 350; };
	class CUP_V_B_MTV_Mine							{ quality = 1; price = 350; };
	class CUP_V_B_MTV_LegPouch						{ quality = 1; price = 350; };
	class CUP_V_B_MTV_Marksman						{ quality = 1; price = 350; };
	class CUP_V_B_MTV_MG							{ quality = 1; price = 350; };
	class CUP_V_B_MTV_Patrol						{ quality = 1; price = 350; };
	class CUP_V_B_MTV_TL							{ quality = 1; price = 350; };
	class CUP_V_BAF_Osprey_Mk2_DPM_Grenadier		{ quality = 4; price = 1750; };
	class CUP_V_BAF_Osprey_Mk2_DPM_Medic			{ quality = 4; price = 1750; };
	class CUP_V_BAF_Osprey_Mk2_DPM_Soldier2			{ quality = 4; price = 1750; };
	class CUP_V_BAF_Osprey_Mk2_DPM_Soldier1			{ quality = 4; price = 1750; };
	class CUP_V_BAF_Osprey_Mk4_MTP_Grenadier		{ quality = 4; price = 1750; };
	class CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner	{ quality = 4; price = 1750; };
	class CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader		{ quality = 4; price = 1750; };
	class CUP_V_B_Delta_1							{ quality = 1; price = 350; };
	class CUP_V_B_Delta_2							{ quality = 1; price = 350; };
	class CUP_V_B_RRV_Medic							{ quality = 2; price = 750; };
	class CUP_V_B_RRV_Officer						{ quality = 2; price = 750; };
	class CUP_V_B_RRV_Scout							{ quality = 2; price = 750; };
	class CUP_V_B_RRV_Scout2						{ quality = 2; price = 750; };
	class CUP_V_B_RRV_Scout3						{ quality = 2; price = 750; };

	
	///////////////////////////////////////////////////////////////////////////////
	// Harnesses
	///////////////////////////////////////////////////////////////////////////////
	class V_HarnessO_brn							{ quality = 1; price = 240; };
	class V_HarnessO_gry							{ quality = 1; price = 240; };
	class V_HarnessOGL_brn							{ quality = 1; price = 230; };
	class V_HarnessOGL_gry							{ quality = 1; price = 230; };
	class V_HarnessOSpec_brn						{ quality = 1; price = 240; };
	class V_HarnessOSpec_gry						{ quality = 1; price = 240; };

	///////////////////////////////////////////////////////////////////////////////
	// Plate Carriers
	///////////////////////////////////////////////////////////////////////////////
	class V_PlateCarrier1_blk 						{ quality = 1; price = 580; };
	class V_PlateCarrier1_rgr 						{ quality = 1; price = 580; };
	class V_PlateCarrier2_rgr 						{ quality = 1; price = 600; };
	class V_PlateCarrier3_rgr 						{ quality = 1; price = 600; };
	class V_PlateCarrierGL_blk 						{ quality = 4; price = 1750; };
	class V_PlateCarrierGL_mtp 						{ quality = 4; price = 1750; };
	class V_PlateCarrierGL_rgr 						{ quality = 4; price = 1750; };
	class V_PlateCarrierH_CTRG 						{ quality = 2; price = 800; };
	class V_PlateCarrierIA1_dgtl 					{ quality = 2; price = 880; };
	class V_PlateCarrierIA2_dgtl 					{ quality = 3; price = 1000; };
	class V_PlateCarrierIAGL_dgtl 					{ quality = 4; price = 1900; };
	class V_PlateCarrierIAGL_oli 					{ quality = 4; price = 1900; };
	class V_PlateCarrierL_CTRG 						{ quality = 2; price = 600; };
	class V_PlateCarrierSpec_blk 					{ quality = 3; price = 900; };
	class V_PlateCarrierSpec_mtp 					{ quality = 3; price = 900; };
	class V_PlateCarrierSpec_rgr 					{ quality = 3; price = 900; };

	///////////////////////////////////////////////////////////////////////////////
	// Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_Cap_blk 								{ quality = 1; price = 50; };
	class H_Cap_blk_Raven 							{ quality = 1; price = 50; };
	class H_Cap_blu 								{ quality = 1; price = 50; };
	class H_Cap_brn_SPECOPS 						{ quality = 1; price = 50; };
	class H_Cap_grn 								{ quality = 1; price = 50; };
	class H_Cap_headphones 							{ quality = 1; price = 50; };
	class H_Cap_khaki_specops_UK 					{ quality = 1; price = 50; };
	class H_Cap_oli 								{ quality = 1; price = 50; };
	class H_Cap_press 								{ quality = 1; price = 50; };
	class H_Cap_red 								{ quality = 1; price = 50; };
	class H_Cap_tan 								{ quality = 1; price = 50; };
	class H_Cap_tan_specops_US 						{ quality = 1; price = 50; };
	class H_Cap_marshal						     	{ quality = 1; price = 50; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Glasses
	///////////////////////////////////////////////////////////////////////////////
	class G_Spectacles			 		{ quality = 1; price = 60; };
	class G_Spectacles_Tinted			{ quality = 1; price = 60; };
	class G_Combat			 			{ quality = 1; price = 60; };
	class G_Lowprofile			 		{ quality = 1; price = 60; };
	class G_Shades_Black			 	{ quality = 1; price = 60; };
	class G_Shades_Green			 	{ quality = 1; price = 60; };
	class G_Shades_Red			 		{ quality = 1; price = 60; };
	class G_Squares			 			{ quality = 1; price = 60; };
	class G_Squares_Tinted			 	{ quality = 1; price = 60; };
	class G_Sport_BlackWhite			{ quality = 1; price = 60; };
	class G_Sport_Blackyellow			{ quality = 1; price = 60; };
	class G_Sport_Greenblack			{ quality = 1; price = 60; };
	class G_Sport_Checkered			 	{ quality = 1; price = 60; };
	class G_Sport_Red			 		{ quality = 1; price = 60; };
	class G_Tactical_Black			 	{ quality = 1; price = 60; };
	class G_Aviator			 			{ quality = 1; price = 60; };
	class G_Lady_Mirror			 		{ quality = 1; price = 60; };
	class G_Lady_Dark			 		{ quality = 1; price = 60; };
	class G_Lady_Red			 		{ quality = 1; price = 60; };
	class G_Lady_Blue			 		{ quality = 1; price = 60; };
	class G_Diving			 			{ quality = 1; price = 60; };
	class G_B_Diving			 		{ quality = 1; price = 60; };
	class G_O_Diving			 		{ quality = 1; price = 60; };
	class G_I_Diving			 		{ quality = 1; price = 60; };
	class G_Goggles_VR			 		{ quality = 1; price = 60; };
	class G_Balaclava_blk			 	{ quality = 2; price = 100; };
	class G_Balaclava_oli			 	{ quality = 2; price = 100; };
	class G_Balaclava_combat			{ quality = 2; price = 100; };
	class G_Balaclava_lowprofile		{ quality = 2; price = 100; };
	class G_Bandanna_blk			 	{ quality = 1; price = 60; };
	class G_Bandanna_oli			 	{ quality = 1; price = 60; };
	class G_Bandanna_khk			 	{ quality = 1; price = 60; };
	class G_Bandanna_tan			 	{ quality = 1; price = 60; };
	class G_Bandanna_beast			 	{ quality = 1; price = 60; };
	class G_Bandanna_shades			 	{ quality = 1; price = 60; };
	class G_Bandanna_sport			 	{ quality = 1; price = 60; };
	class G_Bandanna_aviator			{ quality = 1; price = 60; };
	class G_Shades_Blue			 		{ quality = 1; price = 60; };
	class G_Sport_Blackred			 	{ quality = 1; price = 60; };
	class G_Tactical_Clear			 	{ quality = 1; price = 60; };
	class G_Balaclava_TI_blk_F			{ quality = 2; price = 150; };
	class G_Balaclava_TI_tna_F			{ quality = 2; price = 150; };
	class G_Balaclava_TI_G_blk_F		{ quality = 2; price = 150; };
	class G_Balaclava_TI_G_tna_F		{ quality = 2; price = 150; };
	class G_Combat_Goggles_tna_F		{ quality = 1; price = 60; };

	///////////////////////////////////////////////////////////////////////////////
	// Military Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_MilCap_blue 							{ quality = 1; price = 80; };
	class H_MilCap_dgtl 							{ quality = 1; price = 80; };
	class H_MilCap_mcamo 							{ quality = 1; price = 80; };
	class H_MilCap_ocamo 							{ quality = 1; price = 80; };
	class H_MilCap_oucamo 							{ quality = 1; price = 80; };
	class H_MilCap_rucamo 							{ quality = 1; price = 80; };

	///////////////////////////////////////////////////////////////////////////////
	// Beanies
	///////////////////////////////////////////////////////////////////////////////
	class H_Watchcap_blk 							{ quality = 1; price = 60; };
	class H_Watchcap_camo 							{ quality = 1; price = 60; };
	class H_Watchcap_khk 							{ quality = 1; price = 60; };
	class H_Watchcap_sgg 							{ quality = 1; price = 60; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandannas
	///////////////////////////////////////////////////////////////////////////////
	class H_Bandanna_camo							{ quality = 1; price = 40; };
	class H_Bandanna_cbr							{ quality = 1; price = 40; };
	class H_Bandanna_gry							{ quality = 1; price = 40; };
	class H_Bandanna_khk							{ quality = 1; price = 40; };
	class H_Bandanna_khk_hs							{ quality = 1; price = 40; };
	class H_Bandanna_mcamo							{ quality = 1; price = 40; };
	class H_Bandanna_sgg							{ quality = 1; price = 40; };
	class H_Bandanna_surfer							{ quality = 1; price = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// Boonie Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Booniehat_dgtl							{ quality = 1; price = 60; };
	class H_Booniehat_dirty							{ quality = 1; price = 60; };
	class H_Booniehat_grn							{ quality = 1; price = 60; };
	class H_Booniehat_indp							{ quality = 1; price = 60; };
	class H_Booniehat_khk							{ quality = 1; price = 60; };
	class H_Booniehat_khk_hs						{ quality = 1; price = 60; };
	class H_Booniehat_mcamo							{ quality = 1; price = 60; };
	class H_Booniehat_tan							{ quality = 1; price = 60; };

	///////////////////////////////////////////////////////////////////////////////
	// Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Hat_blue								{ quality = 1; price = 60; };
	class H_Hat_brown								{ quality = 1; price = 60; };
	class H_Hat_camo								{ quality = 1; price = 60; };
	class H_Hat_checker								{ quality = 1; price = 60; };
	class H_Hat_grey								{ quality = 1; price = 60; };
	class H_Hat_tan									{ quality = 1; price = 60; };
	class H_StrawHat								{ quality = 1; price = 60; };
	class H_StrawHat_dark							{ quality = 1; price = 60; };
	class Exile_Headgear_SantaHat					{ quality = 1; price = 100; };
	class Exile_Headgear_SafetyHelmet				{ quality = 1; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Berets
	///////////////////////////////////////////////////////////////////////////////
	class H_Beret_02								{ quality = 1; price = 60; };
	class H_Beret_blk								{ quality = 1; price = 60; };
	class H_Beret_blk_POLICE						{ quality = 1; price = 60; };
	class H_Beret_brn_SF							{ quality = 1; price = 60; };
	class H_Beret_Colonel							{ quality = 2; price = 150; };
	class H_Beret_grn								{ quality = 1; price = 60; };
	class H_Beret_grn_SF							{ quality = 1; price = 60; };
	class H_Beret_ocamo								{ quality = 1; price = 60; };
	class H_Beret_red								{ quality = 1; price = 60; };

	///////////////////////////////////////////////////////////////////////////////
	// Shemags
	///////////////////////////////////////////////////////////////////////////////
	class H_Shemag_khk								{ quality = 2; price = 100; };
	class H_Shemag_olive							{ quality = 2; price = 100; };
	class H_Shemag_olive_hs							{ quality = 2; price = 100; };
	class H_Shemag_tan								{ quality = 2; price = 100; };
	class H_ShemagOpen_khk							{ quality = 2; price = 100; };
	class H_ShemagOpen_tan							{ quality = 2; price = 100; };
	class H_TurbanO_blk								{ quality = 2; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetB_light							{ quality = 1; price = 200; };
	class H_HelmetB_light_black						{ quality = 1; price = 200; };
	class H_HelmetB_light_desert					{ quality = 1; price = 200; };
	class H_HelmetB_light_grass						{ quality = 1; price = 200; };
	class H_HelmetB_light_sand						{ quality = 1; price = 200; };
	class H_HelmetB_light_snakeskin					{ quality = 1; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetIA								{ quality = 2; price = 400; };
	class H_HelmetIA_camo							{ quality = 2; price = 400; };
	class H_HelmetIA_net							{ quality = 2; price = 400; };
	class H_HelmetB									{ quality = 2; price = 600; };
	class H_HelmetB_black							{ quality = 2; price = 600; };
	class H_HelmetB_camo							{ quality = 2; price = 800; }; // This one is awesome!
	class H_HelmetB_desert							{ quality = 2; price = 600; };
	class H_HelmetB_grass							{ quality = 2; price = 600; };
	class H_HelmetB_paint							{ quality = 2; price = 600; };
	class H_HelmetB_plain_blk						{ quality = 2; price = 600; };
	class H_HelmetB_sand							{ quality = 2; price = 600; };
	class H_HelmetB_snakeskin						{ quality = 2; price = 600; };

	//nové 25.2.2018 , 12.3.2018
	class H_HelmetO_ghex_F							{ quality = 2; price = 600; };
	class H_HelmetB_tna_F							{ quality = 2; price = 600; };
	class H_HelmetB_Enh_tna_F						{ quality = 2; price = 600; };
	class H_HelmetB_Light_tna_F						{ quality = 2; price = 600; };
	class H_HelmetCrew_O_ghex_F						{ quality = 2; price = 600; };
	
	class H_Helmet_Skate							{ quality = 1; price = 80; };
	class H_HelmetLeaderO_ghex_F					{ quality = 2; price = 600; };

		
	///////////////////////////////////////////////////////////////////////////////
	// Spec Ops Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetSpecB								{ quality = 3; price = 1000; };
	class H_HelmetSpecB_blk							{ quality = 3; price = 1000; };
	class H_HelmetSpecB_paint1						{ quality = 3; price = 1000; };
	class H_HelmetSpecB_paint2						{ quality = 3; price = 1000; };

	//nové 25.2.2018
	class H_HelmetSpecO_ghex_F						{ quality = 3; price = 1000; };
	class H_HelmetB_TI_tna_F						{ quality = 3; price = 1000; };

	///////////////////////////////////////////////////////////////////////////////
	// Super Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetO_ocamo							{ quality = 2; price = 650; };
	class H_HelmetO_oucamo							{ quality = 2; price = 650; };
	class H_HelmetSpecO_blk							{ quality = 2; price = 500; };
	class H_HelmetSpecO_ocamo						{ quality = 2; price = 500; };
	class H_HelmetLeaderO_ocamo						{ quality = 4; price = 1200; };
	class H_HelmetLeaderO_oucamo					{ quality = 4; price = 1200; };

	///////////////////////////////////////////////////////////////////////////////
	// Pointer Attachments
	///////////////////////////////////////////////////////////////////////////////
	class acc_flashlight 							{ quality = 1; price = 40; };
	class acc_pointer_IR 							{ quality = 1; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Bitpod Attachments
	///////////////////////////////////////////////////////////////////////////////
	class bipod_01_F_blk	 						{ quality = 2; price = 300; };
	class bipod_01_F_mtp	 						{ quality = 2; price = 300; };
	class bipod_01_F_snd	 						{ quality = 2; price = 300; };
	class bipod_02_F_blk	 						{ quality = 2; price = 300; };
	class bipod_02_F_hex	 						{ quality = 2; price = 300; };
	class bipod_02_F_tan	 						{ quality = 2; price = 300; };
	class bipod_03_F_blk	 						{ quality = 2; price = 300; };
	class bipod_03_F_oli	 						{ quality = 2; price = 300; };

	///////////////////////////////////////////////////////////////////////////////
	// Muzzle Attachments
	///////////////////////////////////////////////////////////////////////////////
	class CUP_muzzle_PBS4                           { quality = 3; price = 1200; };
    class CUP_muzzle_PB6P9                          { quality = 3; price = 1200; };
    class CUP_muzzle_Bizon                          { quality = 3; price = 1200; };
    class CUP_muzzle_snds_M110                      { quality = 3; price = 1400; };
    class CUP_muzzle_snds_M14                       { quality = 3; price = 1300; };
    class CUP_muzzle_snds_M9                        { quality = 3; price = 1200; };
    class CUP_muzzle_snds_MicroUzi                  { quality = 3; price = 1200; };
    class CUP_muzzle_snds_AWM                       { quality = 3; price = 1400; };
    class CUP_muzzle_snds_G36_black                 { quality = 3; price = 1200; };
    class CUP_muzzle_snds_G36_desert                { quality = 3; price = 1200; };
    class CUP_muzzle_snds_L85                       { quality = 3; price = 1200; };
    class CUP_muzzle_snds_M16_camo                  { quality = 3; price = 1300; };
    class CUP_muzzle_snds_M16                       { quality = 3; price = 1200; };
    class CUP_muzzle_snds_SCAR_L                    { quality = 3; price = 1200; };
    class CUP_muzzle_mfsup_SCAR_L                   { quality = 3; price = 1200; };
    class CUP_muzzle_snds_SCAR_H                    { quality = 3; price = 1200; };
    class CUP_muzzle_mfsup_SCAR_H                   { quality = 3; price = 1200; };
    class CUP_muzzle_snds_XM8                       { quality = 3; price = 1200; };
	class muzzle_snds_338_black 					{ quality = 3; price = 1200; };
	class muzzle_snds_338_green 					{ quality = 3; price = 1200; };
	class muzzle_snds_338_sand 						{ quality = 3; price = 1200; };
	class muzzle_snds_93mmg 						{ quality = 3; price = 1200; };
	class muzzle_snds_93mmg_tan 					{ quality = 3; price = 1200; };
	class muzzle_snds_acp 							{ quality = 2; price = 900; };
	class muzzle_snds_B 							{ quality = 2; price = 900; };
	class muzzle_snds_H 							{ quality = 2; price = 900; };
	class muzzle_snds_H_MG 							{ quality = 2; price = 900; };
	class muzzle_snds_H_SW 							{ quality = 2; price = 900; };
	class muzzle_snds_L 							{ quality = 2; price = 900; };
	class muzzle_snds_M 							{ quality = 2; price = 900; };

	//nové 25.2.2018 , 6.3.
	class muzzle_snds_B_khk_F						{ quality = 2; price = 900; };
	class muzzle_snds_B_snd_F						{ quality = 2; price = 900; };
	
	class muzzle_snds_65_TI_blk_F					{ quality = 2; price = 900; };
	class muzzle_snds_65_TI_hex_F					{ quality = 2; price = 900; };
	class muzzle_snds_65_TI_ghex_F					{ quality = 2; price = 900; };

	
	///////////////////////////////////////////////////////////////////////////////
	// UAVS
	///////////////////////////////////////////////////////////////////////////////
	//class I_UavTerminal							{ quality = 3; price = 10000; };
	//class I_UAV_01_backpack_F						{ quality = 2; price = 2000; };

	///////////////////////////////////////////////////////////////////////////////
	// Static MGs
	///////////////////////////////////////////////////////////////////////////////
	class O_HMG_01_weapon_F 						{ quality = 4; price = 6000; };
	class O_HMG_01_support_F 						{ quality = 4; price = 2000; };
	
	// Does not seem to work with HMG01, only the lower version does
	//class O_HMG_01_support_high_F 				{ quality = QUALITY_LEVEL_9000; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Optic Attachments
	///////////////////////////////////////////////////////////////////////////////
	class optic_Aco									{ quality = 1; price = 570; };
	class optic_ACO_grn								{ quality = 1; price = 570; };
	class optic_ACO_grn_smg							{ quality = 1; price = 570; };
	class optic_Aco_smg								{ quality = 1; price = 570; };
	class optic_AMS									{ quality = 5; price = 2000; };
	class optic_AMS_khk								{ quality = 5; price = 2000; };
	class optic_AMS_snd								{ quality = 5; price = 2000; };
	class optic_Arco								{ quality = 2; price = 800; };
	class optic_DMS									{ quality = 4; price = 1750; };
	class optic_Hamr								{ quality = 2; price = 700; };
	class optic_Holosight							{ quality = 1; price = 550; };
	class optic_Holosight_smg						{ quality = 1; price = 550; };
	class optic_KHS_blk								{ quality = 3; price = 1000; };
	class optic_KHS_hex								{ quality = 3; price = 1000; };
	class optic_KHS_old								{ quality = 3; price = 1000; };
	class optic_KHS_tan								{ quality = 3; price = 1000; };
	class optic_LRPS								{ quality = 6; price = 5000; };
	class optic_LRPS_tna_f							{ quality = 6; price = 5000; };
	class optic_LRPS_ghex_f							{ quality = 6; price = 5000; };
	class optic_MRCO								{ quality = 2; price = 800; };
	class optic_MRD									{ quality = 1; price = 500; };
	class optic_Nightstalker						{ quality = 6; price = 5000; };
	class optic_NVS									{ quality = 3; price = 2500; };
	class optic_SOS									{ quality = 4; price = 3050; };
	//class optic_tws									{ quality = QUALITY_LEVEL_9000; price = 1500; };
	//class optic_tws_mg								{ quality = QUALITY_LEVEL_9000; price = 1500; };
	class optic_Yorris								{ quality = 1; price = 500; };
	class CUP_optic_PSO_1                           { quality = 3; price = 1600; };
    class CUP_optic_PSO_3                           { quality = 3; price = 1800; };
    class CUP_optic_Kobra                           { quality = 2; price = 900; };
    class CUP_optic_NSPU                            { quality = 5; price = 3200; };
    class CUP_optic_PechenegScope                   { quality = 3; price = 1500; };
    class CUP_optic_MAAWS_Scope                     { quality = 6; price = 5000; };
    class CUP_optic_SMAW_Scope                      { quality = 6; price = 5000; };
    class CUP_optic_AN_PAS_13c2                     { quality = 1; price = 500; };
    class CUP_optic_LeupoldMk4                      { quality = 3; price = 2800; };
    class CUP_optic_HoloBlack                       { quality = 2; price = 700; };
    class CUP_optic_HoloWdl                         { quality = 2; price = 700; };
    class CUP_optic_HoloDesert                      { quality = 2; price = 700; };
    class CUP_optic_Eotech533                       { quality = 2; price = 800; };
    class CUP_optic_CompM4                          { quality = 1; price = 500; };
    class CUP_optic_SUSAT                           { quality = 3; price = 2250; };
    class CUP_optic_ACOG                            { quality = 2; price = 1200; };
    class CUP_optic_CWS                             { quality = 1; price = 550; };
    class CUP_optic_Leupold_VX3                     { quality = 3; price = 3000; };
    class CUP_optic_AN_PVS_10                       { quality = 5; price = 4500; };
    class CUP_optic_CompM2_Black                    { quality = 1; price = 500; };
    class CUP_optic_CompM2_Woodland                 { quality = 1; price = 500; };
    class CUP_optic_CompM2_Woodland2                { quality = 1; price = 500; };
    class CUP_optic_CompM2_Desert                   { quality = 1; price = 500; };
    class CUP_optic_RCO                             { quality = 3; price = 2600; };
    class CUP_optic_RCO_desert                      { quality = 3; price = 2600; };
    class CUP_optic_LeupoldM3LR                     { quality = 3; price = 2800; };
    class CUP_optic_LeupoldMk4_10x40_LRT_Desert     { quality = 3; price = 2900; };
    class CUP_optic_LeupoldMk4_10x40_LRT_Woodland   { quality = 3; price = 2900; };
    class CUP_optic_ElcanM145                       { quality = 3; price = 2400; };
    class CUP_optic_AN_PAS_13c1                     { quality = 1; price = 500; };
    class CUP_optic_LeupoldMk4_CQ_T                 { quality = 3; price = 2500; };
    class CUP_optic_ELCAN_SpecterDR                 { quality = 3; price = 2600; };
    class CUP_optic_LeupoldMk4_MRT_tan              { quality = 3; price = 2800; };
    class CUP_optic_SB_11_4x20_PM                   { quality = 3; price = 2800; };
    class CUP_optic_ZDDot                           { quality = 1; price = 500; };
    class CUP_optic_MRad                            { quality = 1; price = 500; };
    class CUP_optic_TrijiconRx01_desert             { quality = 1; price = 500; };
    class CUP_optic_TrijiconRx01_black              { quality = 1; price = 500; };
    class CUP_optic_AN_PVS_4                        { quality = 5; price = 3200; };
	class CUP_optic_GOSHAWK 						{ quality = 6; price = 4000; };
	
	//nové 25.2.2018
	class optic_SOS_khk_F							{ quality = 3; price = 3000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Hardware
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Rope							{ quality = 1; price = 110; };
	class Exile_Item_DuctTape						{ quality = 1; price = 400; };
	class Exile_Item_ExtensionCord					{ quality = 1; price = 40; };
	class Exile_Item_FuelCanisterEmpty				{ quality = 1; price = 40; };
	class Exile_Item_FuelCanisterFull				{ quality = 2; price = 180; };
	class Exile_Item_JunkMetal						{ quality = 2; price = 400; };
	class Exile_Item_LightBulb						{ quality = 1; price = 140; };
	class Exile_Item_MetalBoard						{ quality = 2; price = 1600; };
	class Exile_Item_MetalHedgehogKit				{ quality = 2; price = 1200; };
	class Exile_Item_SafeKit						{ quality = 2; price = 25000; };
	class Exile_Item_SafeSmallKit					{ quality = 4; price = 20000; };
	class Exile_Item_CodeLock						{ quality = 3; price = 3000; };
	class Exile_Item_Laptop						    { quality = 6; price = 150000;  sellPrice = 7500; };
	class Exile_Item_BaseCameraKit				    { quality = 6; price = 5000; };
	class Exile_Item_CamoTentKit					{ quality = 1; price = 250; };
	class Exile_Item_MetalPole						{ quality = 2; price = 1800; };
	class Exile_Item_MetalScrews					{ quality = 1; price = 450; };
	class Exile_Item_MetalWire						{ quality = 1; price = 300; };
	class Exile_Item_Cement							{ quality = 6; price = 8000; };
	class Exile_Item_Sand							{ quality = 5; price = 2000; };
	class Exile_Item_CarWheel						{ quality = 1; price = 200; };
	class Exile_Magazine_Battery				    { quality = 1; price = 200; };
	class Exile_Item_WaterCanisterEmpty		        { quality = 1; price = 200; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Hardware - Concrete materials
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_ConcreteDoorwayKit				{ quality = 6; price = 54000; sellPrice = 100; };
	class Exile_Item_ConcreteFloorKit				{ quality = 6; price = 36000; sellPrice = 100; };
	class Exile_Item_ConcreteWallKit				{ quality = 6; price = 36000; sellPrice = 100; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Food
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_EMRE							{ quality = 3; price = 100; }; //75, 60
	class Exile_Item_GloriousKnakworst				{ quality = 3; price = 40; }; //60, 30
	class Exile_Item_Surstromming					{ quality = 2; price = 35; }; //55, 25
	class Exile_Item_SausageGravy					{ quality = 2; price = 30; }; //50, 25
	class Exile_Item_Catfood						{ quality = 2; price = 25; }; //40, 40
	class Exile_Item_ChristmasTinner				{ quality = 2; price = 20; }; //40, 60
	class Exile_Item_BBQSandwich					{ quality = 2; price = 20; }; //40, 60
	class Exile_Item_MacasCheese					{ quality = 2; price = 20; }; //40, 60
	class Exile_Item_Dogfood						{ quality = 1; price = 20; }; //30, 30
	class Exile_Item_BeefParts						{ quality = 1; price = 20; }; //30, 30
	class Exile_Item_Cheathas						{ quality = 1; price = 20; }; //30, 30
	class Exile_Item_Noodles						{ quality = 1; price = 15; }; //25, 50
	class Exile_Item_SeedAstics						{ quality = 1; price = 15; }; //20, 40
	class Exile_Item_Raisins						{ quality = 1; price = 10; }; //15, 30
	class Exile_Item_Moobar							{ quality = 1; price = 10; }; //10, 30
	class Exile_Item_InstantCoffee					{ quality = 1; price = 20; }; //5, 10
	class Exile_Item_Can_Empty						{ quality = 1; price = 100; sellPrice = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Drinks
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_PlasticBottleCoffee	 		{ quality = 3; price = 70; }; //100, 60
	class Exile_Item_PowerDrink						{ quality = 3; price = 60; }; //95, 10
	class Exile_Item_PlasticBottleFreshWater 		{ quality = 2; price = 50; }; //80, 15
	class Exile_Item_Beer 							{ quality = 2; price = 50; }; //75, 30
	class Exile_Item_EnergyDrink					{ quality = 2; price = 40; }; //75, 20
	class Exile_Item_ChocolateMilk					{ quality = 2; price = 25; }; //75, 20
	class Exile_Item_MountainDupe					{ quality = 1; price = 30; }; //50, 20
	class Exile_Item_PlasticBottleEmpty				{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// First Aid
	///////////////////////////////////////////////////////////////////////////////	
	class Exile_Item_InstaDoc                       { quality = 3; price = 3250; };
	class Exile_Item_Vishpirin						{ quality = 2; price = 1300; };
	class Exile_Item_Bandage	                    { quality = 1; price = 250; };
	class Exile_Item_Heatpack	                    { quality = 1; price = 50; };

	class Exile_Item_Defibrillator					{ quality = 4; price = 7500; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Tools
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Matches 						{ quality = 1; price = 560; };
	class Exile_Item_CookingPot						{ quality = 1; price = 850; };
	class Exile_Melee_SledgeHammmer					{ quality = 3; price = 1000; };
	class Exile_Item_CanOpener						{ quality = 1; price = 650; };
	class Exile_Item_Handsaw						{ quality = 2; price = 1230; };
	class Exile_Item_Pliers							{ quality = 2; price = 850; };
	class Exile_Item_Grinder						{ quality = 2; price = 1750; };
	class Exile_Item_Foolbox						{ quality = 2; price = 1000; };
	class Exile_Item_CordlessScrewdriver			{ quality = 2; price = 1250; };
	class Exile_Item_FireExtinguisher				{ quality = 1; price = 1150; };
	class Exile_Item_Hammer							{ quality = 1; price = 1100; };
	class Exile_Item_OilCanister					{ quality = 1; price = 2250; };
	class Exile_Item_Screwdriver					{ quality = 1; price = 750; };
	class Exile_melee_Shovel						{ quality = 1; price = 1900; };
	class Exile_Item_Wrench							{ quality = 1; price = 860; };
	class Exile_Item_SleepingMat					{ quality = 1; price = 1950; };
	class Exile_Item_ToiletPaper					{ quality = 1; price = 500; };
	class Exile_Item_ZipTie							{ quality = 1; price = 750; };
	class Exile_Item_Magazine01					    { quality = 1; price = 1750; };
	class Exile_Item_Magazine02					    { quality = 1; price = 1750; };
	class Exile_Item_Magazine03					    { quality = 1; price = 1750; };
	class Exile_Item_Magazine04					    { quality = 1; price = 1750; };

	///////////////////////////////////////////////////////////////////////////////
	// Navigation
	///////////////////////////////////////////////////////////////////////////////
	class ItemWatch									{ quality = 1; price = 100; };	
	class ItemGPS									{ quality = 1; price = 100; };
	class ItemMap									{ quality = 1; price = 1000; sellPrice = 500; };
	class ItemCompass								{ quality = 1; price = 100; };
	class ItemRadio									{ quality = 1; price = 100; };
	class Binocular									{ quality = 3; price = 1000; };
	class Rangefinder								{ quality = 5; price = 2500; };
	//	class Laserdesignator							{ quality = 6; price = 750; };
	//	class Laserdesignator_02						{ quality = 6; price = 750; };
	//	class Laserdesignator_03						{ quality = 6; price = 750; };
	class NVGoggles									{ quality = 3; price = 1500; };
	class NVGoggles_INDEP							{ quality = 3; price = 1500; };
	class NVGoggles_OPFOR							{ quality = 3; price = 1500; };
	class Exile_Item_XM8							{ quality = 1; price = 200; };
	class Exile_Item_MobilePhone					{ quality = 6; price = 15000; };
	class H_PilotHelmetFighter_B					{ quality = 6; price = 12500; };

	///////////////////////////////////////////////////////////////////////////////
	// Watch out for a Walter fart! He has gas!
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Headgear_GasMask					{ quality = 3; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Rebreather
	///////////////////////////////////////////////////////////////////////////////
	class V_RebreatherB								{ quality = 2; price = 1250; };
	class V_RebreatherIA							{ quality = 2; price = 1250; };
	class V_RebreatherIR							{ quality = 2; price = 1250; };

	///////////////////////////////////////////////////////////////////////////////
	// Pilot Stuff
	///////////////////////////////////////////////////////////////////////////////
	class B_Parachute								{ quality = 1; price = 650; };
	class H_CrewHelmetHeli_B						{ quality = 1; price = 650; };
	class H_CrewHelmetHeli_I						{ quality = 1; price = 650; };
	class H_CrewHelmetHeli_O						{ quality = 1; price = 650; };
	class H_HelmetCrew_I							{ quality = 1; price = 600; };
	class H_HelmetCrew_B							{ quality = 1; price = 600; };
	class H_HelmetCrew_O							{ quality = 1; price = 600; };
	class H_PilotHelmetHeli_B						{ quality = 1; price = 600; };
	class H_PilotHelmetHeli_I						{ quality = 1; price = 600; };
	class H_PilotHelmetHeli_O						{ quality = 1; price = 600; };
	class U_B_HeliPilotCoveralls					{ quality = 1; price = 580; };
	class U_B_PilotCoveralls						{ quality = 1; price = 560; };
	class U_I_HeliPilotCoveralls					{ quality = 1; price = 560; };
	class U_I_pilotCoveralls						{ quality = 1; price = 560; };
	class U_O_PilotCoveralls						{ quality = 1; price = 560; };
	
	//nové 13.1.2018
	class H_PilotHelmetFighter_I					{ quality = 1; price = 650; };
	class H_PilotHelmetFighter_O					{ quality = 1; price = 650; };

	///////////////////////////////////////////////////////////////////////////////
	// Backpacks
	///////////////////////////////////////////////////////////////////////////////
	class B_HuntingBackpack							{ quality = 1; price = 570; };
	class B_OutdoorPack_blk							{ quality = 1; price = 580; };
	class B_OutdoorPack_blu							{ quality = 1; price = 580; };
	class B_OutdoorPack_tan							{ quality = 1; price = 580; };
	class B_AssaultPack_blk							{ quality = 1; price = 590; };
	class B_AssaultPack_cbr							{ quality = 1; price = 590; };
	class B_AssaultPack_dgtl						{ quality = 1; price = 590; };
	class B_AssaultPack_khk							{ quality = 1; price = 590; };
	class B_AssaultPack_mcamo						{ quality = 1; price = 590; };
	class B_AssaultPack_rgr							{ quality = 1; price = 590; };
	class B_AssaultPack_sgg							{ quality = 1; price = 590; };
	class B_FieldPack_blk							{ quality = 1; price = 620; };
	class B_FieldPack_cbr							{ quality = 1; price = 620; };
	class B_FieldPack_ocamo							{ quality = 1; price = 620; };
	class B_FieldPack_oucamo						{ quality = 1; price = 620; };
	class B_TacticalPack_blk						{ quality = 1; price = 650; };
	class B_TacticalPack_rgr						{ quality = 1; price = 650; };
	class B_TacticalPack_ocamo						{ quality = 1; price = 650; };
	class B_TacticalPack_mcamo						{ quality = 1; price = 650; };
	class B_TacticalPack_oli						{ quality = 1; price = 650; };
	class B_Kitbag_cbr								{ quality = 2; price = 1400; };
	class B_Kitbag_mcamo							{ quality = 2; price = 1400; };
	class B_Kitbag_sgg								{ quality = 2; price = 1400; };
	class B_Bergen_blk								{ quality = 2; price = 1400; };
	class B_Bergen_mcamo							{ quality = 2; price = 1400; };
	class B_Bergen_rgr								{ quality = 2; price = 1400; };
	class B_Bergen_sgg								{ quality = 2; price = 1400; };
	class B_Carryall_cbr							{ quality = 3; price = 2600; };
	class B_Carryall_khk							{ quality = 3; price = 2600; };
	class B_Carryall_mcamo							{ quality = 3; price = 2600; };
	class B_Carryall_ocamo							{ quality = 3; price = 2600; };
	class B_Carryall_oli							{ quality = 3; price = 2600; };
	class B_Carryall_oucamo							{ quality = 3; price = 2600; };
	class B_Bergen_tna_F							{ quality = 6; price = 3000;};
	class B_Bergen_dgtl_F							{ quality = 6; price = 3000;};
	class B_Bergen_mcamo_F							{ quality = 6; price = 3000;};
	class B_Bergen_hex_F							{ quality = 6; price = 3000;};
	
	//nové 13.1.2018
	class B_ViperLightHarness_blk_F					{ quality = 3; price = 1600; };
	class B_ViperLightHarness_hex_F					{ quality = 3; price = 1600; };
	class B_ViperLightHarness_khk_F					{ quality = 3; price = 1600; };
	class B_ViperLightHarness_oli_F					{ quality = 3; price = 1600; };
	class B_ViperLightHarness_ghex_F				{ quality = 3; price = 1600; };
	class B_ViperHarness_blk_F						{ quality = 3; price = 2600; };
	class B_ViperHarness_hex_F						{ quality = 3; price = 2600; };
	class B_ViperHarness_khk_F						{ quality = 3; price = 2600; };
	class B_ViperHarness_oli_F						{ quality = 3; price = 2600; };
	class B_ViperHarness_ghex_F						{ quality = 3; price = 2600; };
	class B_Carryall_ghex_F							{ quality = 3; price = 2600; };

	///////////////////////////////////////////////////////////////////////////////
	// Ammunition
	///////////////////////////////////////////////////////////////////////////////
	class 100Rnd_65x39_caseless_mag 				{ quality = 2; price = 200; };
	class 100Rnd_65x39_caseless_mag_Tracer 			{ quality = 2; price = 200; };
	class 10Rnd_127x54_Mag 							{ quality = 1; price = 90; };
	class 10Rnd_338_Mag 							{ quality = 3; price = 490; };
	class 10Rnd_762x54_Mag 							{ quality = 1; price = 90; };
	class 10Rnd_762x51_Mag 			    			{ quality = 1; price = 90; };
	class 10Rnd_93x64_DMR_05_Mag 					{ quality = 3; price = 490; };
	class 11Rnd_45ACP_Mag 							{ quality = 1; price = 90; };
	class 150Rnd_762x54_Box 						{ quality = 3; price = 390; };
	class 150Rnd_762x54_Box_Tracer 					{ quality = 3; price = 390; };
	class 16Rnd_9x21_Mag 							{ quality = 1; price = 90; };
	class 200Rnd_65x39_cased_Box 					{ quality = 3; price = 390; };
	class 200Rnd_65x39_cased_Box_Tracer 			{ quality = 3; price = 390; };
	class 150Rnd_93x64_Mag 							{ quality = 2; price = 290; };
	class 130Rnd_338_Mag 							{ quality = 2; price = 290; };
	class 150Rnd_762x51_Box						    { quality = 2; price = 290; };
	class 20Rnd_556x45_UW_mag 						{ quality = 1; price = 90; };
	class 20Rnd_762x51_Mag 							{ quality = 1; price = 90; };
	class 30Rnd_45ACP_Mag_SMG_01 					{ quality = 1; price = 90; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green 		{ quality = 1; price = 90; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow		{ quality = 1; price = 90; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red			{ quality = 1; price = 90; };
	class 30Rnd_556x45_Stanag 						{ quality = 1; price = 90; };
	class 30Rnd_556x45_Stanag_Tracer_Green 			{ quality = 1; price = 90; };
	class 30Rnd_556x45_Stanag_green  				{ quality = 1; price = 90; };
	class 30Rnd_556x45_Stanag_Tracer_Red 			{ quality = 1; price = 90; };
	class 30Rnd_556x45_Stanag_Tracer_Yellow 		{ quality = 1; price = 90; };
	class 30Rnd_556x45_Stanag_red 					{ quality = 1; price = 90; };
	class 30Rnd_65x39_caseless_green 				{ quality = 1; price = 90; };
	class 30Rnd_65x39_caseless_green_mag_Tracer 	{ quality = 1; price = 90; };
	class 30Rnd_65x39_caseless_mag 					{ quality = 1; price = 90; };
	class 30Rnd_65x39_caseless_mag_Tracer 			{ quality = 1; price = 90; };
	class 30Rnd_9x21_Mag 							{ quality = 1; price = 90; };
	class 30Rnd_9x21_Yellow_Mag						{ quality = 1; price = 90; };
	class 30Rnd_9x21_Green_Mag						{ quality = 1; price = 90; };
	class 30Rnd_9x21_Red_Mag						{ quality = 1; price = 90; };
	class 5Rnd_127x108_Mag 							{ quality = 6; price = 690; };
	class 6Rnd_45ACP_Cylinder 						{ quality = 1; price = 90; };
	class 6Rnd_GreenSignal_F 						{ quality = 1; price = 90; };
	class 6Rnd_RedSignal_F 							{ quality = 1; price = 90; };
	class 7Rnd_408_Mag 								{ quality = 5; price = 590; };
	class 9Rnd_45ACP_Mag 							{ quality = 1; price = 90; };
	
	//nove 13.1.2018 , 6.3.
	class 100Rnd_580x42_Mag_F						{ quality = 2; price = 290; };
	class 100Rnd_580x42_Mag_Tracer_F				{ quality = 2; price = 290; };
	class 20Rnd_650x39_Cased_Mag_F					{ quality = 1; price = 90; };
	class 10Rnd_50BW_Mag_F  						{ quality = 1; price = 90; };
	class CUP_20Rnd_762x51_L129_M					{ quality = 1; price = 90; };
		
	class 200Rnd_556x45_Box_Tracer_Red_F			{ quality = 1; price = 90; };
	class 200Rnd_556x45_Box_Tracer_F				{ quality = 1; price = 90; };
	class 16Rnd_9x21_red_Mag						{ quality = 1; price = 90; };
	class 16Rnd_9x21_yellow_Mag						{ quality = 1; price = 90; };
	class 16Rnd_9x21_green_Mag						{ quality = 1; price = 90; };
	
	
	//// Shotgun
    class CUP_20Rnd_B_AA12_Pellets                           { quality = 3; price = 100; };
    class CUP_20Rnd_B_AA12_74Slug                            { quality = 4; price = 100; };
    class CUP_20Rnd_B_AA12_HE                                { quality = 4; price = 200; };
    class CUP_8Rnd_B_Beneli_74Slug                           { quality = 2; price = 50; };
    class CUP_8Rnd_B_Saiga12_74Slug_M                        { quality = 3; price = 100; };

   
   //// Launcher
  	class CUP_1Rnd_HE_GP25_M                                 { quality = 6; price = 125; };
	class CUP_6Rnd_HE_GP25_M                                 { quality = 6; price = 800; };
	class CUP_PG7VL_M                                        { quality = 4; price = 7000; };
    class CUP_PG7VR_M                                        { quality = 4; price = 7000; };
    class CUP_OG7_M                                          { quality = 4; price = 7000; };
    class CUP_RPG18_M                                        { quality = 6; price = 7000; };
    class CUP_Strela_2_M                                     { quality = 1; price = 1000; };
    class CUP_Dragon_EP1_M                                   { quality = 1; price = 1000; };
    class CUP_Javelin_M                                      { quality = 1; price = 1000; };
    class CUP_6Rnd_HE_M203                                   { quality = 6; price = 500; };
    class CUP_6Rnd_FlareWhite_M203                           { quality = 1; price = 50; };
    class CUP_6Rnd_FlareGreen_M203                           { quality = 1; price = 50; };
    class CUP_6Rnd_FlareRed_M203                             { quality = 1; price = 50; };
    class CUP_6Rnd_FlareYellow_M203                          { quality = 1; price = 50; };
    class CUP_6Rnd_Smoke_M203                                { quality = 1; price = 50; };
    class CUP_6Rnd_SmokeRed_M203                             { quality = 1; price = 50; };
    class CUP_6Rnd_SmokeGreen_M203                           { quality = 1; price = 50; };
    class CUP_6Rnd_SmokeYellow_M203                          { quality = 1; price = 50; };
    class CUP_1Rnd_HE_M203                                   { quality = 6; price = 100; };
    class CUP_1Rnd_HEDP_M203                                 { quality = 6; price = 150; };
    class CUP_FlareWhite_M203                                { quality = 1; price = 50; };
    class CUP_FlareGreen_M203                                { quality = 1; price = 50; };
    class CUP_FlareRed_M203                                  { quality = 1; price = 50; };
    class CUP_FlareYellow_M203                               { quality = 1; price = 50; };
    class CUP_1Rnd_Smoke_M203                                { quality = 1; price = 50; };
    class CUP_1Rnd_SmokeRed_M203                             { quality = 1; price = 50; };
    class CUP_1Rnd_SmokeGreen_M203                           { quality = 1; price = 50; };
    class CUP_1Rnd_SmokeYellow_M203                          { quality = 1; price = 50; };
	
	
    //// Handgun
    class CUP_8Rnd_9x18_Makarov_M                            { quality = 1; price = 40; };
    class CUP_8Rnd_9x18_MakarovSD_M                          { quality = 1; price = 40; };
    class CUP_15Rnd_9x19_M9                                  { quality = 1; price = 40; };
    class CUP_18Rnd_9x19_Phantom                             { quality = 1; price = 40; };
    class CUP_6Rnd_45ACP_M                                   { quality = 1; price = 80; };
    class CUP_17Rnd_9x19_glock17                             { quality = 1; price = 40; };
    class CUP_7Rnd_45ACP_1911                                { quality = 1; price = 80; };
    class CUP_10Rnd_9x19_Compact                             { quality = 1; price = 40; };
	class CUP_hgun_Colt1911                                  { quality = 1; price = 100; };
    class CUP_hgun_Colt1911_snds                             { quality = 1; price = 100; };
    class CUP_hgun_Compact                                   { quality = 1; price = 100; };
    class CUP_hgun_Duty_M3X                                  { quality = 1; price = 100; };
    class CUP_hgun_Glock17                                   { quality = 1; price = 100; };
    class CUP_hgun_glock17_flashlight_snds                   { quality = 1; price = 100; };
    class CUP_hgun_glock17_snds                              { quality = 1; price = 100; };
    class CUP_hgun_glock17_flashlight                        { quality = 1; price = 100; };
    class CUP_hgun_M9                                        { quality = 1; price = 100; };
    class CUP_hgun_M9_snds                                   { quality = 1; price = 100; };
    class CUP_hgun_Makarov                                   { quality = 1; price = 100; };
    class CUP_hgun_PB6P9                                     { quality = 1; price = 100; };
    class CUP_hgun_PB6P9_snds                                { quality = 1; price = 100; };
    class CUP_hgun_MicroUzi                                  { quality = 3; price = 450; };
    class CUP_hgun_MicroUzi_snds                             { quality = 3; price = 450; };
    class CUP_hgun_Phantom_Flashlight                        { quality = 1; price = 100; };
    class CUP_hgun_Phantom_Flashlight_snds                   { quality = 1; price = 100; };
    class CUP_hgun_TaurusTracker455                          { quality = 2; price = 350; };
    class CUP_hgun_TaurusTracker455_gold                     { quality = 2; price = 2450; };
    class CUP_hgun_SA61                                      { quality = 3; price = 300; };
    class CUP_hgun_Duty                                      { quality = 1; price = 100; };
    class CUP_hgun_Phantom                                   { quality = 1; price = 100; };

    
	
	//// LMG
    class CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M     { quality = 3; price = 290; };
    class CUP_200Rnd_TE4_Red_Tracer_556x45_M249              { quality = 3; price = 390; };
    class CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249           { quality = 3; price = 390; };
    class CUP_200Rnd_TE1_Red_Tracer_556x45_M249              { quality = 3; price = 390; };
    class CUP_100Rnd_TE4_Green_Tracer_556x45_M249            { quality = 3; price = 290; };
    class CUP_100Rnd_TE4_Red_Tracer_556x45_M249              { quality = 3; price = 290; };
    class CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249           { quality = 3; price = 290; };
    class CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1          { quality = 3; price = 390; };
    class CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1            { quality = 3; price = 390; };
    class CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1         { quality = 3; price = 390; };
    class CUP_50Rnd_UK59_762x54R_Tracer                      { quality = 3; price = 175; };

    
	
	//// SMG
    class CUP_64Rnd_9x19_Bizon_M                             { quality = 1; price = 80; };
    class CUP_64Rnd_Green_Tracer_9x19_Bizon_M                { quality = 1; price = 80; };
    class CUP_64Rnd_Red_Tracer_9x19_Bizon_M                  { quality = 1; price = 80; };
    class CUP_64Rnd_White_Tracer_9x19_Bizon_M                { quality = 1; price = 80; };
    class CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M               { quality = 1; price = 80; };
    class CUP_30Rnd_9x19_EVO                                 { quality = 1; price = 40; };
    class CUP_30Rnd_9x19_UZI                                 { quality = 1; price = 40; };
    class CUP_30Rnd_9x19_MP5                                 { quality = 1; price = 40; };
    class CUP_20Rnd_B_765x17_Ball_M                          { quality = 1; price = 40; };

    
	
	//// Sniper
    class CUP_5Rnd_127x99_as50_M                             { quality = 6; price = 590; };
    class CUP_5Rnd_86x70_L115A1                              { quality = 6; price = 590; };
    class CUP_10Rnd_762x51_CZ750_Tracer                      { quality = 3; price = 390; };
    class CUP_10Rnd_762x51_CZ750                             { quality = 3; price = 390; };
    class CUP_10x_303_M                                      { quality = 1; price = 100; };
    class CUP_5Rnd_762x51_M24                                { quality = 5; price = 500; };
    class CUP_10Rnd_127x99_m107                              { quality = 6; price = 590; };
    class CUP_20Rnd_762x51_B_M110                            { quality = 5; price = 500; };
    class CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110            { quality = 5; price = 500; };
    class CUP_20Rnd_TE1_Red_Tracer_762x51_M110               { quality = 5; price = 500; };
    class CUP_20Rnd_TE1_Green_Tracer_762x51_M110             { quality = 5; price = 500; };
    class CUP_20Rnd_TE1_White_Tracer_762x51_M110             { quality = 5; price = 500; };
    class CUP_10Rnd_762x54_SVD_M                             { quality = 5; price = 550; };
    class CUP_10Rnd_9x39_SP5_VSS_M                           { quality = 6; price = 550; };
    class CUP_20Rnd_9x39_SP5_VSS_M                           { quality = 6; price = 590; };
    class CUP_5x_22_LR_17_HMR_M                              { quality = 1; price = 10; };
    class CUP_5Rnd_127x108_KSVK_M                            { quality = 6; price = 690; };
	class Exile_Magazine_10Rnd_127x99_m107                   { quality = 6; price = 590; };
	class Exile_Magazine_5Rnd_127x108_APDS_KSVK              { quality = 6; price = 790; };
	class Exile_Magazine_5Rnd_127x108_KSVK                   { quality = 6; price = 690; };
	class 5Rnd_127x108_APDS_Mag								 { quality = 6; price = 690; };

	//nové 25.2.2018
	class Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag	 { quality = 6; price = 890; };
	class Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag	 { quality = 6; price = 890; };
	
	

    //// Assault Rifle
    class CUP_30Rnd_545x39_AK_M                              { quality = 2; price = 200; };
    class CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M             { quality = 2; price = 200; };
    class CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M               { quality = 2; price = 200; };
    class CUP_30Rnd_TE1_White_Tracer_545x39_AK_M             { quality = 2; price = 200; };
    class CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M            { quality = 2; price = 200; };
    class CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M       { quality = 2; price = 250; };
    class CUP_30Rnd_762x39_AK47_M                            { quality = 2; price = 200; };
    class CUP_30Rnd_556x45_Stanag                            { quality = 2; price = 200; };
    class CUP_30Rnd_556x45_G36                               { quality = 2; price = 200; };
    class CUP_30Rnd_TE1_Red_Tracer_556x45_G36                { quality = 2; price = 200; };
    class CUP_30Rnd_TE1_Green_Tracer_556x45_G36              { quality = 2; price = 200; };
    class CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36             { quality = 2; price = 200; };
    class CUP_100Rnd_556x45_BetaCMag                         { quality = 2; price = 250; };
    class CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag          { quality = 2; price = 250; };
    class CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag        { quality = 2; price = 250; };
    class CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag       { quality = 2; price = 250; };
    class CUP_20Rnd_556x45_Stanag                            { quality = 2; price = 200; };
    class CUP_20Rnd_762x51_CZ805B                            { quality = 2; price = 200; };
    class CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B          { quality = 2; price = 200; };
    class CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B             { quality = 2; price = 200; };
    class CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B           { quality = 2; price = 200; };
    class CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B           { quality = 2; price = 200; };
    class CUP_20Rnd_762x51_DMR                               { quality = 2; price = 200; };
    class CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR             { quality = 2; price = 200; };
    class CUP_20Rnd_TE1_Red_Tracer_762x51_DMR                { quality = 2; price = 200; };
    class CUP_20Rnd_TE1_Green_Tracer_762x51_DMR              { quality = 2; price = 200; };
    class CUP_20Rnd_TE1_White_Tracer_762x51_DMR              { quality = 2; price = 200; };
    class CUP_20Rnd_762x51_FNFAL_M                           { quality = 2; price = 200; };
    class CUP_30Rnd_Sa58_M_TracerG                           { quality = 2; price = 200; };
    class CUP_30Rnd_Sa58_M_TracerR                           { quality = 2; price = 200; };
    class CUP_30Rnd_Sa58_M_TracerY                           { quality = 2; price = 200; };
    class CUP_30Rnd_Sa58_M                                   { quality = 2; price = 200; };
    class CUP_20Rnd_762x51_B_SCAR                            { quality = 2; price = 200; };
    class CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR            { quality = 2; price = 200; };
    class CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR               { quality = 2; price = 200; };
    class CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR             { quality = 2; price = 200; };
    class CUP_20Rnd_TE1_White_Tracer_762x51_SCAR             { quality = 2; price = 200; };
	
	//nové 4.3.2018
	class 150Rnd_556x45_Drum_Mag_F            				 { quality = 3; price = 390; };
	class 30Rnd_762x39_Mag_F		           				 { quality = 3; price = 390; };
	class 30Rnd_762x39_Mag_Green_F            				 { quality = 3; price = 390; };
	class 30Rnd_762x39_Mag_Tracer_F            				 { quality = 3; price = 390; };
	class 30Rnd_762x39_Mag_Tracer_Green_F            		 { quality = 3; price = 390; };
	
	// Price for bullet cam magazines is normal magazine price + 20 pop tabs per bullet
	class Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag		{ quality = 6; price = 790; };
	class Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag	{ quality = 6; price = 790; };
	class Exile_Magazine_7Rnd_408_Bullet_Cam_Mag			{ quality = 6; price = 790; };
	class Exile_Magazine_10Rnd_338_Bullet_Cam_Mag			{ quality = 6; price = 790; };
	class Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag           { quality = 6; price = 790; };
	class Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag      { quality = 6; price = 790; };
	

	///////////////////////////////////////////////////////////////////////////////
	// Flares
	///////////////////////////////////////////////////////////////////////////////
	class Chemlight_blue							{ quality = 1; price = 20; };
	class Chemlight_green							{ quality = 1; price = 20; };
	class Chemlight_red								{ quality = 1; price = 20; };
	class FlareGreen_F								{ quality = 1; price = 60; };
	class FlareRed_F								{ quality = 1; price = 60; };
	class FlareWhite_F								{ quality = 1; price = 60; };
	class FlareYellow_F								{ quality = 1; price = 60; };
	class UGL_FlareGreen_F							{ quality = 1; price = 80; };
	class UGL_FlareRed_F							{ quality = 1; price = 80; };
	class UGL_FlareWhite_F							{ quality = 1; price = 80; };
	class UGL_FlareYellow_F							{ quality = 1; price = 80; };
	class 3Rnd_UGL_FlareGreen_F						{ quality = 1; price = 50*3; };
	class 3Rnd_UGL_FlareRed_F						{ quality = 1; price = 50*3; };
	class 3Rnd_UGL_FlareWhite_F						{ quality = 1; price = 50*3; };
	class 3Rnd_UGL_FlareYellow_F					{ quality = 1; price = 50*3; };

	///////////////////////////////////////////////////////////////////////////////
	// Smokes
	///////////////////////////////////////////////////////////////////////////////
	class SmokeShell								{ quality = 1; price = 60; };
	class SmokeShellBlue							{ quality = 1; price = 60; };
	class SmokeShellGreen							{ quality = 1; price = 60; };
	class SmokeShellOrange							{ quality = 1; price = 60; };
	class SmokeShellPurple							{ quality = 1; price = 60; };
	class SmokeShellRed								{ quality = 1; price = 60; };
	class SmokeShellYellow							{ quality = 1; price = 60; };
	class 1Rnd_Smoke_Grenade_shell					{ quality = 2; price = 80; };
	class 1Rnd_SmokeBlue_Grenade_shell				{ quality = 2; price = 80; };
	class 1Rnd_SmokeGreen_Grenade_shell				{ quality = 2; price = 80; };
	class 1Rnd_SmokeOrange_Grenade_shell			{ quality = 2; price = 80; };
	class 1Rnd_SmokePurple_Grenade_shell			{ quality = 2; price = 80; };
	class 1Rnd_SmokeRed_Grenade_shell				{ quality = 2; price = 80; };
	class 1Rnd_SmokeYellow_Grenade_shell			{ quality = 2; price = 80; };
	class 3Rnd_Smoke_Grenade_shell					{ quality = 2; price = 50*3; };
	class 3Rnd_SmokeBlue_Grenade_shell				{ quality = 2; price = 50*3; };
	class 3Rnd_SmokeGreen_Grenade_shell				{ quality = 2; price = 50*3; };
	class 3Rnd_SmokeOrange_Grenade_shell			{ quality = 2; price = 50*3; };
	class 3Rnd_SmokePurple_Grenade_shell			{ quality = 2; price = 50*3; };
	class 3Rnd_SmokeRed_Grenade_shell				{ quality = 2; price = 50*3; };
	class 3Rnd_SmokeYellow_Grenade_shell			{ quality = 2; price = 50*3; };

	///////////////////////////////////////////////////////////////////////////////
	// Explosives
	///////////////////////////////////////////////////////////////////////////////
	class HandGrenade								{ quality = 2; price = 400; };
	class MiniGrenade								{ quality = 1; price = 200; };
	class B_IR_Grenade								{ quality = 1; price = 100; };
	class O_IR_Grenade								{ quality = 1; price = 100; };
	class I_IR_Grenade								{ quality = 1; price = 100; };
	class 1Rnd_HE_Grenade_shell						{ quality = 2; price = 200; };
	class 3Rnd_HE_Grenade_shell						{ quality = 2; price = 150*3; };
	class APERSBoundingMine_Range_Mag				{ quality = 3; price = 1500; };
	class APERSMine_Range_Mag						{ quality = 3; price = 1600; };
	class APERSTripMine_Wire_Mag					{ quality = 3; price = 1300; };
	class ClaymoreDirectionalMine_Remote_Mag		{ quality = 3; price = 1350; };
	class DemoCharge_Remote_Mag						{ quality = 5; price = 5000; };
	class IEDLandBig_Remote_Mag						{ quality = 2; price = 1600; };
	class IEDLandSmall_Remote_Mag					{ quality = 2; price = 1300; };
	class IEDUrbanBig_Remote_Mag					{ quality = 2; price = 1800; };
	class IEDUrbanSmall_Remote_Mag					{ quality = 2; price = 1400; };
	class SatchelCharge_Remote_Mag					{ quality = 6; price = 10000; };
	class SLAMDirectionalMine_Wire_Mag				{ quality = 3; price = 1700; };
	class ATMine_Range_Mag							{ quality = 6; price = 5500; };
	
	///////////////////////////////////////////////////////////////////////////////
	// CSAT Snow Weapons////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////
	class IP_srifle_DMR_04_SnowHex_F				{ quality = 2; price = 2000; };
	class IP_srifle_DMR_05_SnowHex_F				{ quality = 5; price = 2200; };
	class IP_srifle_DMR_03_SnowHex_F				{ quality = 3; price = 1700; };
		
	///////////////////////////////////////////////////////////////////////////////
	// WY Snow Weapons////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////

	class WY_Snow_cheytac_m200_A					{ quality = 6; price = 5000; };
	class WY_Snow_cheytac_m200_B					{ quality = 6; price = 5000; };
	class WY_Snow_Rahim_a							{ quality = 3; price = 1700; };
	class WY_Snow_Rahim_b							{ quality = 3; price = 1700; };
	class WY_Snow_Mar10_a							{ quality = 6; price = 4500; };
	class WY_Snow_Mar10_b							{ quality = 6; price = 4500; };
	class WY_Snow_MK_I_EMR_a						{ quality = 3; price = 1700; };
	class WY_Snow_MK_I_EMR_b						{ quality = 3; price = 1700; };
	class WY_Snow_MMG_01_a							{ quality = 6; price = 4100; };
	class WY_Snow_MMG_01_b							{ quality = 6; price = 4100; };
	class WY_Snow_LMG_Zafir_F_a						{ quality = 4; price = 2800; };
	class WY_Snow_LMG_Zafir_F_b						{ quality = 4; price = 2800; };
	class WY_Snow_MX_F_a							{ quality = 1; price = 600; };
	class WY_Snow_MX_F_b							{ quality = 1; price = 600; };
	class WY_Snow_MXM_F_a							{ quality = 2; price = 1700; };

	class WY_Snow_GM6_F_a							{ quality = 6; price = 5000; };
	class WY_Snow_GM6_F_b							{ quality = 6; price = 5000; };
	class WY_Snow_GM6_F_c							{ quality = 6; price = 5000; };
	class WY_Snow_MMG_02_a							{ quality = 6; price = 4200; };
	class WY_Snow_MMG_02_b							{ quality = 6; price = 4200; };
	class WY_Snow_MMG_02_c							{ quality = 6; price = 4200; };

	///////////////////////////////////////////////////////////////////////////////
	// WY Snow NV Goggles////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////

    class WY_Snow_NVGoggles							{ quality = 3; price = 1500; };

    //////////////////////////////////////////////////////////////////////////////////
    // WY ToolKIT
    //////////////////////////////////////////////////////////////////////////////////

    //class WY_ToolKit;

	

	///////////////////////////////////////////////////////////////////////////////
	// Pistols
	///////////////////////////////////////////////////////////////////////////////
	class hgun_ACPC2_F 								{ quality = 1; price = 150; };
	class hgun_P07_F 								{ quality = 1; price = 150; };
	class hgun_Pistol_heavy_01_F 					{ quality = 1; price = 180; };
	class hgun_Pistol_heavy_02_F 					{ quality = 1; price = 180; };
	class hgun_Pistol_Signal_F 						{ quality = 1; price = 200; };
	class hgun_Rook40_F 							{ quality = 1; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Sub Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class hgun_PDW2000_F 							{ quality = 1; price = 400; };
	class SMG_01_F 									{ quality = 1; price = 450; };
	class SMG_02_F 									{ quality = 1; price = 450; };
	class SMG_05_F 									{ quality = 1; price = 450; };
	class CUP_smg_bizon                             { quality = 2; price = 800; };
    class CUP_smg_bizon_snds                        { quality = 2; price = 800; };
    class CUP_smg_EVO                               { quality = 2; price = 850; };
    class CUP_smg_EVO_MRad_Flashlight               { quality = 2; price = 850; };
    class CUP_smg_EVO_MRad_Flashlight_Snds          { quality = 2; price = 850; };
    class CUP_smg_MP5SD6                            { quality = 2; price = 850; };
    class CUP_smg_MP5A5                             { quality = 2; price = 800; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MX_SW_Black_F						{ quality = 2; price = 1450; };
	class arifle_MX_SW_F							{ quality = 2; price = 1450; };
	class LMG_Mk200_F								{ quality = 3; price = 1900; };
	class LMG_Zafir_F								{ quality = 4; price = 2800; };
	class MMG_01_hex_F								{ quality = 6; price = 4100; };
	class MMG_01_tan_F								{ quality = 6; price = 4100; };
	class MMG_02_black_F							{ quality = 6; price = 4200; };
	class MMG_02_camo_F								{ quality = 6; price = 4200; };
	class MMG_02_sand_F								{ quality = 6; price = 4200; };
	class LMG_03_F								    { quality = 3; price = 1450; };
	class CUP_lmg_L7A2                              { quality = 4; price = 2900; };
    class CUP_lmg_L110A1                            { quality = 3; price = 1900; };
    class CUP_lmg_L110A1_Aim_Laser                  { quality = 3; price = 1900; };
    class CUP_lmg_M60A4                             { quality = 4; price = 2900; };
    class CUP_lmg_M240                              { quality = 4; price = 2900; };
    class CUP_lmg_M240_ElcanM143                    { quality = 4; price = 2900; };
    class CUP_lmg_M249                              { quality = 3; price = 1900; };
    class CUP_lmg_M249_para                         { quality = 3; price = 1900; };
    class CUP_lmg_M249_ElcanM145_Laser              { quality = 3; price = 1900; };
    class CUP_lmg_M249_ANPAS13c2_Laser              { quality = 3; price = 1900; };
    class CUP_lmg_Mk48_des_Aim_Laser                { quality = 3; price = 1900; };
    class CUP_lmg_Mk48_wdl_Aim_Laser                { quality = 3; price = 1900; };
    class CUP_lmg_Mk48_des                          { quality = 3; price = 1900; };
    class CUP_lmg_Mk48_wdl                          { quality = 3; price = 1900; };
    class CUP_lmg_PKM                               { quality = 3; price = 1900; };
    class CUP_lmg_Pecheneg_PScope                   { quality = 3; price = 1900; };
    class CUP_lmg_UK59                              { quality = 3; price = 1900; };
    class CUP_lmg_Pecheneg                          { quality = 3; price = 1900; };
	class CUP_lmg_minimi							{ quality = 3; price = 1900; };
	class CUP_lmg_minimi_railed						{ quality = 3; price = 1900; };
	class CUP_lmg_minimipara						{ quality = 3; price = 1900; };
	class CUP_lmg_m249_pip4							{ quality = 3; price = 1900; };

	///////////////////////////////////////////////////////////////////////////////
	// Assault Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_Katiba_C_F							{ quality = 1; price = 550; };
	class arifle_Katiba_F							{ quality = 1; price = 550; };
	class arifle_Katiba_GL_F						{ quality = 1; price = 600; };
	class arifle_Mk20_F								{ quality = 1; price = 550; };
	class arifle_Mk20_GL_F							{ quality = 1; price = 600; };
	class arifle_Mk20_GL_plain_F					{ quality = 1; price = 600; };
	class arifle_Mk20_plain_F						{ quality = 1; price = 450; };
	class arifle_Mk20C_F							{ quality = 1; price = 450; };
	class arifle_Mk20C_plain_F						{ quality = 1; price = 450; };
	class arifle_MX_Black_F							{ quality = 1; price = 450; };
	class arifle_MX_F								{ quality = 1; price = 450; };
	class arifle_MX_GL_Black_F						{ quality = 1; price = 650; };
	class arifle_MX_GL_F							{ quality = 1; price = 650; };
	class arifle_MXC_Black_F						{ quality = 1; price = 550; };
	class arifle_MXC_F								{ quality = 1; price = 550; };
	class arifle_SDAR_F								{ quality = 1; price = 550; };
	class arifle_TRG20_F							{ quality = 1; price = 550; };
	class arifle_TRG21_F							{ quality = 1; price = 550; };
	class arifle_TRG21_GL_F							{ quality = 1; price = 650; };
	class CUP_arifle_Mk16_CQC_black					{ quality = 2; price = 950; };
	class CUP_arifle_M4A3_desert					{ quality = 2; price = 950; };
	class CUP_arifle_L85A2_G      					{ quality = 2; price = 950; };
	class CUP_arifle_AK47							{ quality = 1; price = 550; };
	class CUP_arifle_AK74M							{ quality = 1; price = 550; };
	class CUP_arifle_AK74M_GL						{ quality = 2; price = 650; };
	class CUP_arifle_FNFAL 							{ quality = 2; price = 750; };
	class CUP_arifle_FNFAL5061						{ quality = 2; price = 750; };
	class CUP_arifle_FNFAL5062						{ quality = 2; price = 750; };
	class CUP_arifle_L85A2_NG						{ quality = 2; price = 750; };
	class CUP_arifle_Mk16_CQC_FG_black				{ quality = 2; price = 850; };
	class CUP_arifle_Mk16_CQC_SFG_black				{ quality = 2; price = 850; };
	class CUP_arifle_Mk16_CQC_EGLM_woodland			{ quality = 2; price = 850; };
	class CUP_arifle_Mk17_CQC_Black					{ quality = 3; price = 1050; };
	class CUP_arifle_Mk17_CQC_FG_black				{ quality = 3; price = 1050; };
	class CUP_arifle_Mk17_STD_EGLM_black			{ quality = 3; price = 1150; };
	class CUP_arifle_Mk17_STD_EGLM_woodland			{ quality = 3; price = 1150; };
	class CUP_arifle_Mk17_STD_black					{ quality = 3; price = 1150; };
	class CUP_arifle_Sa58RIS2_gl					{ quality = 2; price = 750; };
	class CUP_srifle_G22_des						{ quality = 2; price = 550; };
	class CUP_arifle_RPK74_45						{ quality = 3; price = 950; };
    class CUP_arifle_AK74                           { quality = 1; price = 550; };
    class CUP_arifle_AK107                          { quality = 2; price = 750; };
    class CUP_arifle_AK107_GL                       { quality = 2; price = 850; };
    class CUP_arifle_AKS74                          { quality = 1; price = 650; };
    class CUP_arifle_AKS74U                         { quality = 1; price = 600; };
    class CUP_arifle_AK74_GL                        { quality = 2; price = 850; };
    class CUP_arifle_AKM                            { quality = 1; price = 600; };
    class CUP_arifle_AKS                            { quality = 1; price = 600; };
    class CUP_arifle_AKS_Gold                       { quality = 1; price = 4700; };
    class CUP_arifle_RPK74                          { quality = 2; price = 900; };
    class CUP_arifle_AK107_GL_kobra                 { quality = 2; price = 1000; };
    class CUP_arifle_AK107_kobra                    { quality = 1; price = 700; };
    class CUP_arifle_AK107_GL_pso                   { quality = 2; price = 900; };
    class CUP_arifle_AK107_pso                      { quality = 3; price = 1000; };
    class CUP_arifle_AKS74UN_kobra_snds             { quality = 1; price = 600; };
    class CUP_arifle_AKS74_Goshawk                  { quality = 1; price = 700; };
    class CUP_arifle_AKS74_NSPU                     { quality = 1; price = 600; };
    class CUP_arifle_AK74_GL_kobra                  { quality = 2; price = 750; };
    class CUP_arifle_CZ805_A1_ZDDot_Laser           { quality = 1; price = 800; };
    class CUP_arifle_CZ805_GL_ZDDot_Laser           { quality = 2; price = 1200; };
    class CUP_arifle_CZ805_A2                       { quality = 1; price = 800; };
    class CUP_arifle_CZ805_A2_ZDDot_Flashlight_Snds { quality = 1; price = 800; };
    class CUP_arifle_CZ805B_GL_ACOG_Laser           { quality = 2; price = 1200; };
    class CUP_arifle_                    	        { quality = 1; price = 600; };
    class CUP_arifle_FNFAL_ANPVS4                   { quality = 1; price = 600; };
    class CUP_arifle_FNFAL_railed                   { quality = 2; price = 950; };
    class CUP_arifle_G36A                           { quality = 2; price = 800; };
    class CUP_arifle_G36A_camo                      { quality = 2; price = 850; };
    class CUP_arifle_G36K                           { quality = 2; price = 800; };
    class CUP_arifle_G36K_camo                      { quality = 2; price = 850; };
    class CUP_arifle_G36C                           { quality = 2; price = 800; };
    class CUP_arifle_G36C_camo                      { quality = 2; price = 850; };
    class CUP_arifle_MG36                           { quality = 2; price = 1100; };
    class CUP_arifle_MG36_camo                      { quality = 2; price = 1150; };
    class CUP_arifle_G36C_holo_snds                 { quality = 1; price = 700; };
    class CUP_arifle_G36C_camo_holo_snds            { quality = 1; price = 700; };
    class CUP_arifle_ksvk_PSO3                      { quality = 1; price = 600; };
    class CUP_arifle_L85A2_Holo_laser               { quality = 1; price = 600; };
    class CUP_arifle_L85A2_GL_Holo_laser            { quality = 2; price = 1200; };
    class CUP_arifle_L85A2_SUSAT_Laser              { quality = 1; price = 600; };
    class CUP_arifle_L85A2_GL_SUSAT_Laser           { quality = 2; price = 1200; };
    class CUP_arifle_L85A2_CWS_Laser                { quality = 1; price = 700; };
    class CUP_arifle_L85A2_ACOG_Laser               { quality = 1; price = 700; };
    class CUP_arifle_L85A2                          { quality = 1; price = 650; };
    class CUP_arifle_L85A2_GL                       { quality = 2; price = 1200; };
    class CUP_arifle_L85A2_GL_ACOG_Laser            { quality = 2; price = 1250; };
    class CUP_arifle_L86A2_ACOG                     { quality = 1; price = 800; };
    class CUP_arifle_L86A2                          { quality = 1; price = 650; };
    class CUP_arifle_M16A2                          { quality = 1; price = 650; };
    class CUP_arifle_M16A2_GL                       { quality = 2; price = 1150; };
    class CUP_arifle_M16A4_Aim_Laser                { quality = 1; price = 700; };
    class CUP_arifle_M16A4_ACOG_Laser               { quality = 1; price = 900; };
    class CUP_arifle_M16A4_GL                       { quality = 2; price = 1250; };
    class CUP_arifle_M16A4_GL_ACOG_Laser            { quality = 1; price = 1300; };
    class CUP_arifle_M4A1                           { quality = 1; price = 600; };
    class CUP_arifle_M4A1_camo                      { quality = 1; price = 650; };
    class CUP_arifle_M4A1_camo_Aim                  { quality = 1; price = 700; };
    class CUP_arifle_M4A3_desert_Aim_Flashlight     { quality = 1; price = 800; };
    class CUP_arifle_M4A3_desert_GL_ACOG_Laser      { quality = 2; price = 1100; };
    class CUP_arifle_M4A1_Aim                       { quality = 1; price = 600; };
    class CUP_arifle_M4A1_camo_AIM_snds             { quality = 1; price = 750; };
    class CUP_arifle_M4A1_GL_Holo_Flashlight        { quality = 2; price = 1200; };
    class CUP_arifle_M4A1_GL_ACOG_Flashlight        { quality = 2; price = 1250; };
    class CUP_arifle_M4A1_camo_GL_Holo_Flashlight   { quality = 2; price = 1300; };
    class CUP_arifle_M4A1_camo_GL_Holo_Flashlight_Snds    { quality = 2; price = 1350; };
    class CUP_arifle_M16A4_Base                     { quality = 1; price = 800; };
    class CUP_arifle_M16A4GL                        { quality = 2; price = 1250; };
    class CUP_arifle_M4A1_BUIS_GL                   { quality = 2; price = 1250; };
    class CUP_arifle_M4A1_BUIS_camo_GL              { quality = 2; price = 1250; };
    class CUP_arifle_M4A1_BUIS_desert_GL            { quality = 2; price = 1250; };
    class CUP_arifle_M4A1_black                     { quality = 1; price = 600; };
    class CUP_arifle_M4A1_desert                    { quality = 1; price = 600; };
    class CUP_arifle_Sa58P                          { quality = 1; price = 650; };
    class CUP_arifle_Sa58V                          { quality = 1; price = 650; };
    class CUP_arifle_Sa58V_ACOG_Laser               { quality = 1; price = 750; };
    class CUP_arifle_Sa58V_Aim_Laser                { quality = 1; price = 700; };
    class CUP_arifle_Mk16_CQC                       { quality = 1; price = 850; };
    class CUP_arifle_Mk16_CQC_FG_Aim_Laser_snds     { quality = 1; price = 900; };
    class CUP_arifle_Mk16_CQC_SFG_Holo              { quality = 1; price = 900; };
    class CUP_arifle_Mk16_STD_EGLM_ACOG_Laser       { quality = 1; price = 950; };
    class CUP_arifle_Mk16_STD_EGLM_ANPAS13c1_Laser_mfsup    { quality = 1; price = 950; };
    class CUP_arifle_Mk16_STD_FG_Holo_Laser         { quality = 1; price = 900; };
    class CUP_arifle_Mk16_STD_FG_LeupoldMk4CQT_Laser        { quality = 2; price = 1000; };
    class CUP_arifle_Mk17_CQC_SFG_Aim_mfsup         { quality = 2; price = 1200; };
    class CUP_arifle_Mk17_STD_FG_Aim_Laser_snds     { quality = 2; price = 1250; };
    class CUP_arifle_Mk20_SB11420_snds              { quality = 2; price = 1300; };
    class CUP_arifle_Mk17_STD_EGL_ElcanSpecter_Laser        { quality = 2; price = 1200; };
    class CUP_arifle_Mk17_STD_FG_ANPAS13c1_Laser_Snds       { quality = 2; price = 1500; };
    class CUP_arifle_XM8_Compact_Rail               { quality = 1; price = 650; };
    class CUP_arifle_XM8_Railed                     { quality = 1; price = 650; };
    class CUP_arifle_XM8_Carbine                    { quality = 1; price = 650; };
    class CUP_arifle_XM8_Carbine_FG                 { quality = 1; price = 600; };
    class CUP_arifle_XM8_Carbine_GL                 { quality = 2; price = 1250; };
    class CUP_arifle_XM8_Compact                    { quality = 1; price = 750; };
    class CUP_arifle_XM8_Compact_Holo_Flashlight    { quality = 1; price = 700; };
    class CUP_arifle_XM8_Railed_Holo_Laser_snds     { quality = 1; price = 750; };
    class CUP_arifle_xm8_SAW                        { quality = 2; price = 1550; };
    class CUP_arifle_xm8_sharpshooter               { quality = 2; price = 1700; };
    class CUP_arifle_XM8_Railed_ANPAS13c1_Laser     { quality = 2; price = 1200; };
    class CUP_arifle_XM8_Railed_ANPAS13c1_Laser_snds     { quality = 2; price = 1200; };
    class CUP_arifle_CZ805_A1                       { quality = 1; price = 650; };
    class CUP_arifle_CZ805_GL                       { quality = 2; price = 1250; };
    class CUP_arifle_CZ805_A2_Holo_Laser            { quality = 1; price = 800; };
    class CUP_arifle_CZ805_A1_Holo_Laser            { quality = 1; price = 800; };
    class CUP_arifle_CZ805_A2_Aco_Laser             { quality = 1; price = 800; };
    class CUP_arifle_CZ805_A1_Aco_Laser             { quality = 1; price = 800; };
    class CUP_arifle_CZ805_A1_MRCO_Laser            { quality = 1; price = 900; };
    class CUP_arifle_CZ805_A2_MRCO_Laser            { quality = 1; price = 900; };
    class CUP_arifle_CZ805_GL_Hamr_Laser            { quality = 2; price = 1200; };
    class CUP_arifle_CZ805_B_GL                     { quality = 2; price = 1250; };
    class CUP_arifle_CZ805_B                        { quality = 1; price = 650; };
    class CUP_arifle_Sa58P_des                      { quality = 1; price = 650; };
    class CUP_arifle_Sa58V_camo                     { quality = 1; price = 650; };
    class CUP_arifle_Sa58RIS1                       { quality = 1; price = 700; };
    class CUP_arifle_Sa58RIS1_des                   { quality = 1; price = 700; };
    class CUP_arifle_Sa58RIS2                       { quality = 1; price = 700; };
    class CUP_arifle_Sa58RIS2_camo                  { quality = 1; price = 700; };
    class CUP_arifle_Sa58RIS1_Aco_Laser             { quality = 1; price = 700; };
    class CUP_arifle_Sa58RIS2_Arco_Laser            { quality = 1; price = 800; };
    class CUP_arifle_Sa58RIS1_camo_Aco_Laser        { quality = 1; price = 700; };
    class CUP_arifle_Sa58RIS2_camo_Arco_Lase        { quality = 1; price = 800; };
    class CUP_arifle_Mk16_CQC_FG                    { quality = 1; price = 650; };
    class CUP_arifle_Mk16_CQC_SFG                   { quality = 1; price = 650; };
    class CUP_arifle_Mk16_CQC_EGLM                  { quality = 2; price = 1250; };
    class CUP_arifle_Mk16_STD                       { quality = 1; price = 650; };
    class CUP_arifle_Mk16_STD_FG                    { quality = 1; price = 650; };
    class CUP_arifle_Mk16_STD_SFG                   { quality = 1; price = 650; };
    class CUP_arifle_Mk16_STD_EGLM                  { quality = 2; price = 1250; };
    class CUP_arifle_Mk16_SV                        { quality = 1; price = 650; };
    class CUP_arifle_Mk16_CQC_EGLM_Holo_Laser_mfsup     { quality = 2; price = 1500; };
    class CUP_arifle_Mk17_CQC                       { quality = 2; price = 1650; };
    class CUP_arifle_Mk17_CQC_FG                    { quality = 2; price = 1650; };
    class CUP_arifle_Mk17_CQC_SFG                   { quality = 2; price = 1650; };
    class CUP_arifle_Mk17_CQC_EGLM                  { quality = 2; price = 1850; };
    class CUP_arifle_Mk17_STD                       { quality = 2; price = 1650; };
    class CUP_arifle_Mk17_STD_FG                    { quality = 2; price = 1650; };
    class CUP_arifle_Mk17_STD_SFG                   { quality = 2; price = 1650; };
    class CUP_arifle_Mk17_STD_EGLM                  { quality = 2; price = 1850; };
    class CUP_arifle_Mk20                           { quality = 2; price = 1600; };
    class CUP_arifle_Mk20_LeupoldMk4MRT             { quality = 2; price = 1900; };
    class CUP_sgun_AA12                             { quality = 2; price = 800; };
    class CUP_sgun_M1014                            { quality = 2; price = 800; };
    class CUP_sgun_Saiga12K                         { quality = 2; price = 800; };
	
	//nové 13.1.2018 , 4.3.2018 , 12.3.2018
	class arifle_CTARS_blk_F                 	    { quality = 2; price = 1650; };
	class arifle_CTARS_hex_F                    	{ quality = 2; price = 1650; };
	class arifle_CTARS_ghex_F                       { quality = 2; price = 1650; };
	class arifle_CTAR_blk_F                   	    { quality = 2; price = 1650; };
	class arifle_CTAR_hex_F                    		{ quality = 2; price = 1650; };
	class arifle_CTAR_ghex_F                    	{ quality = 2; price = 1650; };
	class arifle_CTAR_GL_blk_F                    	{ quality = 2; price = 1650; };
	class arifle_CTAR_GL_hex_F                    	{ quality = 2; price = 1650; };
	class arifle_CTAR_GL_ghex_F                     { quality = 2; price = 1650; };
	class srifle_DMR_07_blk_F                    	{ quality = 3; price = 2150; };
	class srifle_DMR_07_hex_F                    	{ quality = 3; price = 2150; };
	class srifle_DMR_07_ghex_F                    	{ quality = 3; price = 2150; };
	class arifle_SPAR_01_blk_F                    	{ quality = 2; price = 1650; };
	class arifle_SPAR_01_khk_F                    	{ quality = 2; price = 1650; };
	class arifle_SPAR_01_snd_F                    	{ quality = 2; price = 1650; };
	class arifle_SPAR_01_GL_blk_F                   { quality = 2; price = 1950; };
	class arifle_SPAR_01_GL_khk_F                   { quality = 2; price = 1950; };
	class arifle_SPAR_01_GL_snd_F                   { quality = 2; price = 1950; };
	class arifle_SPAR_02_blk_F                      { quality = 2; price = 1650; };
	class arifle_SPAR_02_khk_F                      { quality = 2; price = 1650; };
	class arifle_SPAR_02_snd_F                      { quality = 2; price = 1650; };
	class arifle_SPAR_03_blk_F                      { quality = 2; price = 1650; };
	class arifle_SPAR_03_khk_F                      { quality = 2; price = 1650; };
	class arifle_SPAR_03_snd_F                      { quality = 2; price = 1650; };
	class arifle_ARX_blk_F                    		{ quality = 1; price = 650; };
	class arifle_ARX_hex_F                    		{ quality = 1; price = 650; };
	class arifle_ARX_ghex_F                    		{ quality = 1; price = 650; };
	class CUP_srifle_L129A1                    		{ quality = 3; price = 2650; };
	class CUP_srifle_L129A1_HG                    	{ quality = 3; price = 2650; };
	 
	class arifle_AK12_F                 		   	{ quality = 3; price = 2650; };
	
	class arifle_MX_khk_F                    		{ quality = 1; price = 650; };

	
	///////////////////////////////////////////////////////////////////////////////
	// RocketLauncher
	///////////////////////////////////////////////////////////////////////////////
	
	class launch_RPG32_F							{ quality = 3; price = 10000; };

	
	///////////////////////////////////////////////////////////////////////////////
	// Rockets
	///////////////////////////////////////////////////////////////////////////////	

	class RPG32_F 							        { quality = 3; price = 1000; };
	
    ///////////////////////////////////////////////////////////////////////////////
    // CUP_gun
    ///////////////////////////////////////////////////////////////////////////////


	
	
    ///////////////////////////////////////////////////////////////////////////////
    // CUP_optics 
    ///////////////////////////////////////////////////////////////////////////////	
	

	
    ///////////////////////////////////////////////////////////////////////////////
    // CUP_muzzle 
    ///////////////////////////////////////////////////////////////////////////////	
	


    ///////////////////////////////////////////////////////////////////////////////
    // CUP_ammo
    ///////////////////////////////////////////////////////////////////////////////	
	
		
	
	
	///////////////////////////////////////////////////////////////////////////////
	// Sniper Rifles
	///////////////////////////////////////////////////////////////////////////////
    class CUP_srifle_AS50_SBPMII                    { quality = 6; price = 4000; };
    class CUP_srifle_AS50_AMPAS13c2                 { quality = 6; price = 4100; };
    class CUP_srifle_AWM_des                        { quality = 6; price = 4500; };
    class CUP_srifle_AWM_wdl                        { quality = 6; price = 4500; };
    class CUP_srifle_AWM_des_SBPMII                 { quality = 6; price = 4500; };
    class CUP_srifle_AWM_wdl_SBPMII                 { quality = 6; price = 4500; };
    class CUP_srifle_CZ750                          { quality = 3; price = 2500; };
    class CUP_srifle_CZ750_SOS_bipod                { quality = 4; price = 3500; };
    class CUP_srifle_DMR                            { quality = 3; price = 2900; };
    class CUP_srifle_DMR_LeupoldMk4                 { quality = 4; price = 3500; };
    class CUP_srifle_CZ550                          { quality = 3; price = 2000; };
    class CUP_srifle_LeeEnfield                     { quality = 2; price = 1500; };
    class CUP_srifle_M14                            { quality = 2; price = 1900; };
    class CUP_srifle_M15_Aim                        { quality = 2; price = 1500; };
    class CUP_srifle_Mk12SPR                        { quality = 3; price = 1900; };
    class CUP_srifle_Mk12SPR_LeupoldM3LR            { quality = 3; price = 2500; };
    class CUP_srifle_M24_des                        { quality = 4; price = 2950; };
    class CUP_srifle_M24_wdl                        { quality = 4; price = 2950; };
    class CUP_srifle_M24_ghillie                    { quality = 4; price = 2900; };
    class CUP_srifle_M24_wdl_LeupoldMk4LRT          { quality = 4; price = 3500; };
    class CUP_srifle_M24_des_LeupoldMk4LRT          { quality = 4; price = 3500; };
    class CUP_srifle_M40A3                          { quality = 4; price = 3950; };
    class CUP_srifle_M107_Base                      { quality = 6; price = 4400; };
    class CUP_srifle_M107_LeupoldVX3                { quality = 6; price = 4500; };
    class CUP_srifle_M107_ANPAS13c2                 { quality = 6; price = 4500; };
    class CUP_srifle_M110                           { quality = 4; price = 2900; };
    class CUP_srifle_M110_ANPAS13c2                 { quality = 4; price = 3500; };
    class CUP_srifle_M110_ANPVS10                   { quality = 4; price = 3500; };
    class CUP_srifle_SVD                            { quality = 3; price = 2500; };
    class CUP_srifle_SVD_des                        { quality = 3; price = 2600; };
    class CUP_srifle_SVD_Des_pso                    { quality = 3; price = 2700; };
    class CUP_srifle_SVD_pso                        { quality = 3; price = 2600; };
    class CUP_srifle_SVD_wdl_ghillie                { quality = 3; price = 2900; };
    class CUP_srifle_SVD_des_ghillie_pso            { quality = 3; price = 3000; };
    class CUP_srifle_SVD_NSPU                       { quality = 3; price = 2800; };
    class CUP_srifle_ksvk                           { quality = 6; price = 4500; };
	class Exile_weapon_ksvk                         { quality = 6; price = 4500; };
    class CUP_srifle_VSSVintorez                    { quality = 4; price = 2900; };
    class CUP_srifle_VSSVintorez_pso                { quality = 4; price = 3000; };
    class CUP_srifle_AS50                           { quality = 6; price = 4500; };
	class arifle_MXM_Black_F 						{ quality = 2; price = 1700; };
	class arifle_MXM_F 								{ quality = 2; price = 1700; };
	class srifle_DMR_01_F 							{ quality = 3; price = 2200; };
	class srifle_DMR_02_camo_F 						{ quality = 6; price = 4100; };
	class srifle_DMR_02_F 							{ quality = 6; price = 4100; };
	class srifle_DMR_02_sniper_F 					{ quality = 6; price = 4100; };
	class srifle_DMR_03_F 							{ quality = 3; price = 1700; };
	class srifle_DMR_03_khaki_F 					{ quality = 3; price = 1700; };
	class srifle_DMR_03_multicam_F 					{ quality = 3; price = 1700; };
	class srifle_DMR_03_tan_F 						{ quality = 3; price = 1700; };
	class srifle_DMR_03_woodland_F 					{ quality = 3; price = 1700; };
	class srifle_DMR_04_F 							{ quality = 2; price = 2000; };
	class srifle_DMR_04_Tan_F 						{ quality = 4; price = 1500; };
	class srifle_DMR_05_blk_F 						{ quality = 5; price = 2200; };
	class srifle_DMR_05_hex_F 						{ quality = 5; price = 2200; };
	class srifle_DMR_05_tan_f 						{ quality = 5; price = 3200; };
	class srifle_DMR_06_camo_F 						{ quality = 4; price = 3300; };
	class srifle_DMR_06_olive_F 					{ quality = 4; price = 3300; };
	class srifle_EBR_F 								{ quality = 3; price = 1900; };
	class srifle_GM6_ghex_F 						{ quality = 6; price = 5000; };
	class srifle_GM6_camo_F 						{ quality = 6; price = 5000; };
	class srifle_GM6_F 								{ quality = 6; price = 4800; };
	class srifle_LRR_camo_F 						{ quality = 6; price = 5000; };
	class srifle_LRR_tna_F 	   						{ quality = 6; price = 5000; };
	class srifle_LRR_F 								{ quality = 6; price = 4800; };
	class exile_weapon_m107							{ quality = 6; price = 4300; };
	
	//nove 12.3.2018
	class ksvk										{ quality = 6; price = 4500; };
	
		
	///////////////////////////////////////////////////////////////////////////////
	// ArmA 2 Weapons
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Weapon_AK107						{ quality = 1; price = 700; };
	class Exile_Weapon_AK107_GL						{ quality = 2; price = 1400; };
	class Exile_Weapon_AK74							{ quality = 1; price = 650; };
	class Exile_Weapon_AK74_GL						{ quality = 2; price = 1200; };
	class Exile_Weapon_AK47							{ quality = 1; price = 500; };
	class Exile_Weapon_AKM							{ quality = 1; price = 600; };
	class Exile_Weapon_AKS							{ quality = 1; price = 500; };
	class Exile_Weapon_AKS_Gold						{ quality = 1; price = 4550; };
	class Exile_Weapon_DMR							{ quality = 3; price = 2150; };
	class Exile_Weapon_LeeEnfield					{ quality = 2; price = 1250; };
	class Exile_Weapon_CZ550						{ quality = 2; price = 1400; };
	class Exile_Weapon_SVD							{ quality = 2; price = 1800; };
	class Exile_Weapon_SVDCamo						{ quality = 2; price = 850; };
	class Exile_Weapon_VSSVintorez					{ quality = 2; price = 1600; };
	class Exile_Weapon_RPK							{ quality = 1; price = 850; };
	class Exile_Weapon_PK							{ quality = 1; price = 900; };
	class Exile_Weapon_PKP							{ quality = 2; price = 1350; };
	class Exile_Weapon_Colt1911						{ quality = 1; price = 100; };
	class Exile_Weapon_Makarov						{ quality = 1; price = 100; };
	class Exile_Weapon_Taurus						{ quality = 1; price = 100; };
	class Exile_Weapon_TaurusGold					{ quality = 1; price = 2150; };
	class Exile_Weapon_M1014						{ quality = 2; price = 1000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// ArmA 2 Ammunition
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Magazine_30Rnd_762x39_AK				{ quality = 1; price = 290; };
	class Exile_Magazine_30Rnd_545x39_AK				{ quality = 1; price = 290; };
	class Exile_Magazine_30Rnd_545x39_AK_Green			{ quality = 1; price = 290; };
	class Exile_Magazine_30Rnd_545x39_AK_Red			{ quality = 1; price = 290; };
	class Exile_Magazine_30Rnd_545x39_AK_White			{ quality = 1; price = 290; };
	class Exile_Magazine_30Rnd_545x39_AK_Yellow			{ quality = 1; price = 290; };
	class Exile_Magazine_45Rnd_545x39_RPK_Green			{ quality = 1; price = 290; };
	class Exile_Magazine_75Rnd_545x39_RPK_Green			{ quality = 2; price = 390; };
	class Exile_Magazine_20Rnd_762x51_DMR				{ quality = 1; price = 290; };
	class Exile_Magazine_20Rnd_762x51_DMR_Yellow		{ quality = 1; price = 290; };
	class Exile_Magazine_20Rnd_762x51_DMR_Red			{ quality = 1; price = 290; };
	class Exile_Magazine_20Rnd_762x51_DMR_Green			{ quality = 1; price = 290; };
	class Exile_Magazine_10Rnd_303						{ quality = 1; price = 290; };
	class Exile_Magazine_100Rnd_762x54_PK_Green			{ quality = 2; price = 390; };
	class Exile_Magazine_7Rnd_45ACP						{ quality = 1; price = 290; };
	class Exile_Magazine_8Rnd_9x18						{ quality = 1; price = 290; };
	class Exile_Magazine_6Rnd_45ACP						{ quality = 1; price = 290; };
	class Exile_Magazine_5Rnd_22LR						{ quality = 1; price = 290; };
	class Exile_Magazine_10Rnd_762x54					{ quality = 1; price = 290; };
	class Exile_Magazine_10Rnd_9x39						{ quality = 1; price = 290; };
	class Exile_Magazine_20Rnd_9x39						{ quality = 1; price = 290; };
	class Exile_Magazine_8Rnd_74Slug					{ quality = 1; price = 290; };
	class Exile_Magazine_8Rnd_74Pellets					{ quality = 1; price = 290; }; // broken?
	
	
	
	///////////////////////////////////////////////////////////////////////////////
	// WY Snow Offroads
	///////////////////////////////////////////////////////////////////////////////
	class WY_Snow_Offroad_A									{ quality = 1; price = 4000; };
	class WY_Snow_Offroad_B									{ quality = 1; price = 4000; };
	class WY_Snow_Offroad_C									{ quality = 1; price = 4000; };
	class WY_Snow_Offroad_armed_D							{ quality = 3; price = 15000; };
	class WY_Snow_Offroad_armed_E							{ quality = 3; price = 15000; };
	class WY_Snow_Offroad_F									{ quality = 1; price = 4000; };

	///////////////////////////////////////////////////////////////////////////////
	// WY Snow Quadbikes
	///////////////////////////////////////////////////////////////////////////////
	class WY_Snow_Quadbike_F_A								{ quality = 1; price = 2500;};
	class WY_Snow_Quadbike_F_B								{ quality = 1; price = 2500;};
	class WY_Snow_Quadbike_F_C	    		                { quality = 1; price = 2500;};
	class WY_Snow_Quadbike_F_D								{ quality = 1; price = 2500;};
	class WY_Snow_Quadbike_F_E								{ quality = 1; price = 2500;};
	class WY_Snow_Quadbike_F_F	             		        { quality = 1; price = 2500;};
	
	///////////////////////////////////////////////////////////////////////////////
	// WY Snow Strider
	///////////////////////////////////////////////////////////////////////////////
	class WY_Snow_I_mrap_03_F_A						{ quality = 6; price = 50000; };
	class WY_Snow_I_mrap_03_F_B						{ quality = 6; price = 50000; };

	///////////////////////////////////////////////////////////////////////////////
	// WY Snow Hunters
	///////////////////////////////////////////////////////////////////////////////
	class WY_Snow_B_MRAP_01_F_A								{ quality = 5; price = 30000; };
	//class WY_Snow_B_MRAP_01_armed_F_B						{ quality = 3; price = 350;  sellPrice = 350; };
	class WY_Snow_B_MRAP_01_F_C								{ quality = 5; price = 30000; };
	class WY_Snow_B_MRAP_01_F_D								{ quality = 5; price = 30000; };
	//class WY_Snow_B_MRAP_01_armed_F_E						{ quality = 3; price = 350; sellPrice = 350; };
	//class WY_Snow_B_MRAP_01_armed_F_F						{ quality = 3; price = 350; sellPrice = 350; };

	///////////////////////////////////////////////////////////////////////////////
	// WY Snow Hemmts
	///////////////////////////////////////////////////////////////////////////////
	//class WY_Snow_B_Truck_01_fuel_F_A						{ quality = 3; price = 350; sellPrice = 350; };
	//class WY_Snow_B_Truck_01_fuel_F_B						{ quality = 3; price = 350; sellPrice = 350; };
	//class WY_Snow_B_Truck_01_ammo_F_C	                    { quality = 3; price = 350; sellPrice = 350; };
	//class WY_Snow_B_Truck_01_ammo_F_D						{ quality = 3; price = 350; sellPrice = 350; };
	class WY_Snow_B_Truck_01_mover_F_E						{ quality = 4; price = 30000; };
	class WY_Snow_B_Truck_01_mover_F_F	                    { quality = 4; price = 30000; };

	///////////////////////////////////////////////////////////////////////////////
	// WY Snow Kamaz
	///////////////////////////////////////////////////////////////////////////////
	//class WY_Snow_I_Truck_02_fuel_F_A						{ quality = 3; price = 350; sellPrice = 350; };
	//class WY_Snow_I_Truck_02_fuel_F_B						{ quality = 3; price = 350; sellPrice = 350; };
	//class WY_Snow_I_Truck_02_covered_F_C	                { quality = 3; price = 350; sellPrice = 350; };
	//class WY_Snow_I_Truck_02_covered_F_D					{ quality = 3; price = 350; sellPrice = 350; };
	class WY_Snow_I_Truck_02_transport_F_E					{ quality = 1; price = 8000; };
	class WY_Snow_I_Truck_02_transport_F_F	                { quality = 1; price = 8000; };


	///////////////////////////////////////////////////////////////////////////////
	// WY Snow Heli Light 1
	///////////////////////////////////////////////////////////////////////////////
	class WY_Snow_B_Heli_Light_01_F_A						{ quality = 2; price = 7000; };
	class WY_Snow_B_Heli_Light_01_F_B						{ quality = 2; price = 7000; };
	class WY_Snow_B_Heli_Light_01_F_C	                    { quality = 2; price = 7000; };

	///////////////////////////////////////////////////////////////////////////////
	// WY Snow Transport 1
	///////////////////////////////////////////////////////////////////////////////
	class WY_Snow_B_Heli_Transport_01_F_A					{ quality = 3; price = 30000; };
	class WY_Snow_B_Heli_Transport_01_F_B					{ quality = 3; price = 30000; };
	class WY_Snow_B_Heli_Transport_01_F_C	                { quality = 3; price = 30000; };

	///////////////////////////////////////////////////////////////////////////////
	// WY Snow Transport 3
	///////////////////////////////////////////////////////////////////////////////
	class WY_Snow_B_Heli_Transport_03_F_A					{ quality = 3; price = 40000; };
	class WY_Snow_B_Heli_Transport_03_F_B					{ quality = 3; price = 40000; };
	class WY_Snow_B_Heli_Transport_03_F_C	        	    { quality = 3; price = 40000; };

	///////////////////////////////////////////////////////////////////////////////
	// WY Snow APC WHEELED
	///////////////////////////////////////////////////////////////////////////////
	//class WY_Snow_O_APC_Wheeled_02_rcws_F_a					{ quality = 3; price = 350; sellPrice = 350; };
	//class WY_Snow_O_APC_Wheeled_02_rcws_F_b					{ quality = 3; price = 350; sellPrice = 350; };
	//class WY_Snow_O_APC_Wheeled_02_rcws_F_c	                { quality = 3; price = 350; sellPrice = 350; };

	///////////////////////////////////////////////////////////////////////////////
	// WY Snow IFRIT
	///////////////////////////////////////////////////////////////////////////////
	class WY_Snow_O_MRAP_02_base_F_a						{ quality = 5; price = 30000; };
	//class WY_Snow_O_MRAP_02_gmg_F_b							{ quality = 3; price = 350; sellPrice = 350; };
	//class WY_Snow_O_MRAP_02_gmg_F_c	                	    { quality = 3; price = 350; sellPrice = 350; };

	///////////////////////////////////////////////////////////////////////////////
	// WY Snow Heli Light 3
	///////////////////////////////////////////////////////////////////////////////
	class WY_Snow_I_Heli_light_03_unarmed_F_a				{ quality = 2; price = 19500; };
	//class WY_Snow_I_Heli_light_03_F_b						{ quality = 3; price = 350; sellPrice = 350; };
	//class WY_Snow_I_Heli_light_03_F_c	                    { quality = 3; price = 350; sellPrice = 350; };

	///////////////////////////////////////////////////////////////////////////////
	// WY Snow Heli Light 2
	///////////////////////////////////////////////////////////////////////////////
	class WY_Snow_O_Heli_Light_02_unarmed_F_a				{ quality = 2; price = 15000; };
	class WY_Snow_O_Heli_Light_02_unarmed_F_b				{ quality = 2; price = 15000; };
	//class WY_Snow_O_Heli_Light_02_F_c	                    { quality = 3; price = 350; sellPrice = 350; };	
	
	
	
	
	///////////////////////////////////////////////////////////////////////////////
	// BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_OldBike 						{ quality = 1; price = 40; };
	class Exile_Bike_MountainBike 					{ quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Black					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Blue					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Red					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_White					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Nato					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Csat					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Fia					{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Guerilla01			{ quality = 1; price = 2500; };
	class Exile_Bike_QuadBike_Guerilla02			{ quality = 1; price = 2500; };

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Police				{ quality = 1; price = 700; };
	class Exile_Boat_MotorBoat_Orange				{ quality = 1; price = 700; };
	class Exile_Boat_MotorBoat_White				{ quality = 1; price = 700; };

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_CSAT				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Digital				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Orange				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Blue				{ quality = 1; price = 500; };
	class Exile_Boat_RubberDuck_Black				{ quality = 1; price = 500; };

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class B_SDV_01_F					            { quality = 2; price = 11000; };
	class Exile_Boat_SDV_CSAT						{ quality = 2; price = 11000; };
	class Exile_Boat_SDV_Digital					{ quality = 2; price = 11000; };
	class Exile_Boat_SDV_Grey						{ quality = 2; price = 11000; };

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Green 					{ quality = 2; price = 21000; };
	class Exile_Chopper_Huey_Desert					{ quality = 2; price = 21000; };
	class Exile_Chopper_Huey_Armed_Green			{ quality = 4; price = 35000; };
	class Exile_Chopper_Huey_Armed_Desert			{ quality = 4; price = 35000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Green				{ quality = 2; price = 19500; };
	class Exile_Chopper_Hellcat_FIA					{ quality = 2; price = 19500; };

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Green			{ quality = 2; price = 7000; };
	//class B_Heli_Light_01_armed_F                   { quality = 5; price = 50000; };
	class B_Heli_Transport_01_F                     { quality = 3; price = 30000; };
	class B_Heli_Transport_01_camo_F                { quality = 3; price = 30000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Blue				{ quality = 2; price = 7000; };
	class Exile_Chopper_Hummingbird_Civillian_Red				{ quality = 2; price = 7000; };
	class Exile_Chopper_Hummingbird_Civillian_ION				{ quality = 2; price = 7000; };
	class Exile_Chopper_Hummingbird_Civillian_BlueLine			{ quality = 2; price = 7000; };
	class Exile_Chopper_Hummingbird_Civillian_Digital			{ quality = 2; price = 7000; };
	class Exile_Chopper_Hummingbird_Civillian_Elliptical		{ quality = 2; price = 7000; };
	class Exile_Chopper_Hummingbird_Civillian_Furious			{ quality = 2; price = 7000; };
	class Exile_Chopper_Hummingbird_Civillian_GrayWatcher		{ quality = 2; price = 7000; };
	class Exile_Chopper_Hummingbird_Civillian_Jeans				{ quality = 2; price = 7000; };
	class Exile_Chopper_Hummingbird_Civillian_Light				{ quality = 2; price = 7000; };
	class Exile_Chopper_Hummingbird_Civillian_Shadow			{ quality = 2; price = 7000; };
	class Exile_Chopper_Hummingbird_Civillian_Sheriff			{ quality = 2; price = 7000; };
	class Exile_Chopper_Hummingbird_Civillian_Speedy			{ quality = 2; price = 7000; };
	class Exile_Chopper_Hummingbird_Civillian_Sunset			{ quality = 2; price = 7000; };
	class Exile_Chopper_Hummingbird_Civillian_Vrana				{ quality = 2; price = 7000; };
	class Exile_Chopper_Hummingbird_Civillian_Wasp				{ quality = 2; price = 7000; };
	class Exile_Chopper_Hummingbird_Civillian_Wave				{ quality = 2; price = 7000; };
	
	
	/////////////////////////////////////////////////////////////////////////////////
	//Mozzie
	/////////////////////////////////////////////////////////////////////////////////
	//class ADK_Mozzie_Unarmed                                   { quality = 1; price = 1000; sellPrice = 0; };

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Black								{ quality = 3; price = 40000; };
	class Exile_Chopper_Huron_Green								{ quality = 3; price = 40000; };

	///////////////////////////////////////////////////////////////////////////////
	// Mohawk
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Mohawk_FIA								{ quality = 3; price = 30000; };

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_CSAT								{ quality = 2; price = 15000; };
	class Exile_Chopper_Orca_Black								{ quality = 2; price = 15000; };
	class Exile_Chopper_Orca_BlackCustom						{ quality = 2; price = 15000; };

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_CSAT						{ quality = 3; price = 14000; };
	class Exile_Chopper_Taru_Transport_Black					{ quality = 3; price = 14000; };
	                                                                                      
	class Exile_Chopper_Taru_CSAT								{ quality = 3; price = 25000; };
	class Exile_Chopper_Taru_Black								{ quality = 3; price = 25000; };
                                                                                          
	class Exile_Chopper_Taru_Covered_CSAT						{ quality = 3; price = 30000; };
	class Exile_Chopper_Taru_Covered_Black						{ quality = 3; price = 30000; };

	///////////////////////////////////////////////////////////////////////////////
	// Cessna
	///////////////////////////////////////////////////////////////////////////////
	//class Exile_Plane_Cessna									{ quality = 1; price = 16500; };

	///////////////////////////////////////////////////////////////////////////////
	// An-2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_AN2_Green									{ quality = 1; price = 17000; };
	class Exile_Plane_AN2_White									{ quality = 1; price = 17000; };
	class Exile_Plane_AN2_Stripe								{ quality = 1; price = 17000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Golf
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Golf_Red									{ quality = 1; price = 8000; };
	class Exile_Car_Golf_Black									{ quality = 1; price = 8000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Blue					 				{ quality = 1; price = 8000; };
	class Exile_Car_Ikarus_Red 									{ quality = 1; price = 8000; };
	class Exile_Car_Ikarus_Party 								{ quality = 1; price = 8000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Blue								{ quality = 1; price = 5000; };
	class Exile_Car_Ural_Open_Yellow							{ quality = 1; price = 5000; };
	class Exile_Car_Ural_Open_Worker							{ quality = 1; price = 5000; };
	class Exile_Car_Ural_Open_Military							{ quality = 1; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Blue							{ quality = 1; price = 8000; };
	class Exile_Car_Ural_Covered_Yellow							{ quality = 1; price = 8000; };
	class Exile_Car_Ural_Covered_Worker							{ quality = 1; price = 8000; };
	class Exile_Car_Ural_Covered_Military						{ quality = 1; price = 8000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// V3S
	///////////////////////////////////////////////////////////////////////////////
	//class Exile_Car_V3S_Open									{ quality = 1; price = 15000; };
	//class Exile_Car_V3S_Covered								{ quality = 1; price = 15000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUVXL
	///////////////////////////////////////////////////////////////////////////////
	//class Exile_Car_SUVXL_Black 				{ quality = 1; price = 6000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Tractor
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tractor_Red 				{ quality = 1; price = 4500; };

	///////////////////////////////////////////////////////////////////////////////
	// Tractor (Old)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_OldTractor_Red 				{ quality = 1; price = 4000; };

	///////////////////////////////////////////////////////////////////////////////
	// Tow Tractor
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_TowTractor_White			{ quality = 1; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// Octavius
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Octavius_White				{ quality = 1; price = 6000; };
	class Exile_Car_Octavius_Black				{ quality = 1; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// UAZ
	///////////////////////////////////////////////////////////////////////////////
	//class Exile_Car_UAZ_Green					{ quality = 1; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// UAZ (Open)
	///////////////////////////////////////////////////////////////////////////////
	//class Exile_Car_UAZ_Open_Green			{ quality = 1; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover
	///////////////////////////////////////////////////////////////////////////////
	//class Exile_Car_LandRover_Red 			{ quality = 1; price = 11000; };
	//class Exile_Car_LandRover_Urban 			{ quality = 1; price = 11000; };
	//class Exile_Car_LandRover_Green 			{ quality = 1; price = 11000; };
	//class Exile_Car_LandRover_Sand 			{ quality = 1; price = 11000; };
	//class Exile_Car_LandRover_Desert 			{ quality = 1; price = 11000; };

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover (Ambulance)
	///////////////////////////////////////////////////////////////////////////////
	//class Exile_Car_LandRover_Ambulance_Green		{ quality = 1; price = 12000; };
	//class Exile_Car_LandRover_Ambulance_Desert	{ quality = 1; price = 12000; };
	//class Exile_Car_LandRover_Ambulance_Sand		{ quality = 1; price = 12000; };

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Green 				{ quality = 1; price = 3200; };
	class Exile_Car_Lada_Taxi 				{ quality = 1; price = 3200; };
	class Exile_Car_Lada_Red 				{ quality = 1; price = 3200; };
	class Exile_Car_Lada_White 				{ quality = 1; price = 3200; };
	class Exile_Car_Lada_Hipster 			{ quality = 1; price = 3200; };

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Blue				{ quality = 1; price = 2800; };
	class Exile_Car_Volha_White				{ quality = 1; price = 2800; };
	class Exile_Car_Volha_Black				{ quality = 1; price = 2800; };

	///////////////////////////////////////////////////////////////////////////////
	// HEMMT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HEMMT 								{ quality = 4; price = 30000; };

	///////////////////////////////////////////////////////////////////////////////
	// Hunter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter 								{ quality = 5; price = 30000; };

	///////////////////////////////////////////////////////////////////////////////
	// Ifrit
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit 								{ quality = 5; price = 30000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Red							{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_Beige						{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_White						{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_Blue						{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_DarkRed						{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_BlueCustom					{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_Guerilla01					{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_Guerilla02					{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_Guerilla03					{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_Guerilla04					{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_Guerilla05					{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_Guerilla06					{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_Guerilla07					{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_Guerilla08					{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_Guerilla09					{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_Guerilla10					{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_Guerilla11					{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_Guerilla12					{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_Rusty1						{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_Rusty2						{ quality = 1; price = 4000; };
	class Exile_Car_Offroad_Rusty3						{ quality = 1; price = 4000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Guerilla01 			{ quality = 3; price = 15000; };
	class Exile_Car_Offroad_Armed_Guerilla02 			{ quality = 3; price = 15000; };
	class Exile_Car_Offroad_Armed_Guerilla03 			{ quality = 3; price = 15000; };
	class Exile_Car_Offroad_Armed_Guerilla04 			{ quality = 3; price = 15000; };
	class Exile_Car_Offroad_Armed_Guerilla05 			{ quality = 3; price = 15000; };
	class Exile_Car_Offroad_Armed_Guerilla06 			{ quality = 3; price = 15000; };
	class Exile_Car_Offroad_Armed_Guerilla07 			{ quality = 3; price = 15000; };
	class Exile_Car_Offroad_Armed_Guerilla08 			{ quality = 3; price = 15000; };
	class Exile_Car_Offroad_Armed_Guerilla09 			{ quality = 3; price = 15000; };
	class Exile_Car_Offroad_Armed_Guerilla10 			{ quality = 3; price = 15000; };
	class Exile_Car_Offroad_Armed_Guerilla11 			{ quality = 3; price = 15000; };
	class Exile_Car_Offroad_Armed_Guerilla12 			{ quality = 3; price = 15000; };

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Civillian 			{ quality = 2; price = 5000; };
	class Exile_Car_Offroad_Repair_Red 					{ quality = 2; price = 5000; };
	class Exile_Car_Offroad_Repair_Beige 				{ quality = 2; price = 5000; };
	class Exile_Car_Offroad_Repair_White 				{ quality = 2; price = 5000; };
	class Exile_Car_Offroad_Repair_Blue 				{ quality = 2; price = 5000; };
	class Exile_Car_Offroad_Repair_DarkRed 				{ quality = 2; price = 5000; };
	class Exile_Car_Offroad_Repair_BlueCustom 			{ quality = 2; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla01 			{ quality = 2; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla02 			{ quality = 2; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla03 			{ quality = 2; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla04 			{ quality = 2; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla05 			{ quality = 2; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla06 			{ quality = 2; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla07 			{ quality = 2; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla08 			{ quality = 2; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla09 			{ quality = 2; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla10 			{ quality = 2; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla11 			{ quality = 2; price = 5000; };
	class Exile_Car_Offroad_Repair_Guerilla12 			{ quality = 2; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Strider
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Strider 							{ quality = 6; price = 50000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Red 							{ quality = 1; price = 6000; };
	class Exile_Car_SUV_Black 							{ quality = 1; price = 6000; };
	class Exile_Car_SUV_Grey 							{ quality = 1; price = 6000; };
	class Exile_Car_SUV_Orange 							{ quality = 1; price = 6000; };

	///////////////////////////////////////////////////////////////////////////////
	// SUV (Armed)
	///////////////////////////////////////////////////////////////////////////////
	//class Exile_Car_SUV_Armed_Black 					{ quality = 6; price = 40000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// BRDM2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BRDM2_HQ 							{ quality = 6; price = 27000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// BTR40
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BTR40_MG_Green 							{ quality = 6; price = 25000; };
	class Exile_Car_BTR40_MG_Camo 							{ quality = 6; price = 25000; };
	class Exile_Car_BTR40_Green 							{ quality = 3; price = 15000; };
	class Exile_Car_BTR40_Camo 								{ quality = 3; price = 15000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// HMMWV
	///////////////////////////////////////////////////////////////////////////////
	
	//class HMMWV_M2_GPK_1 							            { quality = 6; price = 45000; };	
	class Exile_Car_HMMWV_M134_Green 							{ quality = 6; price = 33000; };
	class Exile_Car_HMMWV_M134_Desert 							{ quality = 6; price = 33000; };
	class Exile_Car_HMMWV_M2_Green 								{ quality = 6; price = 40000; };
	class Exile_Car_HMMWV_M2_Desert 							{ quality = 6; price = 40000; };
	class Exile_Car_HMMWV_MEV_Green 							{ quality = 1; price = 21000; };
	class Exile_Car_HMMWV_MEV_Desert 							{ quality = 1; price = 21000; };
	class Exile_Car_HMMWV_UNA_Green 							{ quality = 1; price = 21000; };
	class Exile_Car_HMMWV_UNA_Desert 							{ quality = 1; price = 21000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Tempest
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest 							{ quality = 3; price = 25000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Black 							{ quality = 2; price = 3000; };
	class Exile_Car_Van_White 							{ quality = 2; price = 3000; };
	class Exile_Car_Van_Red 							{ quality = 2; price = 3000; };
	class Exile_Car_Van_Guerilla01 						{ quality = 2; price = 3000; };
	class Exile_Car_Van_Guerilla02 						{ quality = 2; price = 3000; };
	class Exile_Car_Van_Guerilla03 						{ quality = 2; price = 3000; };
	class Exile_Car_Van_Guerilla04 						{ quality = 2; price = 3000; };
	class Exile_Car_Van_Guerilla05 						{ quality = 2; price = 3000; };
	class Exile_Car_Van_Guerilla06 						{ quality = 2; price = 3000; };
	class Exile_Car_Van_Guerilla07 						{ quality = 2; price = 3000; };
	class Exile_Car_Van_Guerilla08 						{ quality = 2; price = 3000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Black 						{ quality = 2; price = 5000; };
	class Exile_Car_Van_Box_White 						{ quality = 2; price = 5000; };
	class Exile_Car_Van_Box_Red 						{ quality = 2; price = 5000; };
	class Exile_Car_Van_Box_Guerilla01 					{ quality = 2; price = 5000; };
	class Exile_Car_Van_Box_Guerilla02 					{ quality = 2; price = 5000; };
	class Exile_Car_Van_Box_Guerilla03 					{ quality = 2; price = 5000; };
	class Exile_Car_Van_Box_Guerilla04 					{ quality = 2; price = 5000; };
	class Exile_Car_Van_Box_Guerilla05 					{ quality = 2; price = 5000; };
	class Exile_Car_Van_Box_Guerilla06 					{ quality = 2; price = 5000; };
	class Exile_Car_Van_Box_Guerilla07 					{ quality = 2; price = 5000; };
	class Exile_Car_Van_Box_Guerilla08 					{ quality = 2; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Black 						{ quality = 4; price = 15000; };
	class Exile_Car_Van_Fuel_White 						{ quality = 4; price = 15000; };
	class Exile_Car_Van_Fuel_Red 						{ quality = 4; price = 15000; };
	class Exile_Car_Van_Fuel_Guerilla01 				{ quality = 4; price = 15000; };
	class Exile_Car_Van_Fuel_Guerilla02 				{ quality = 4; price = 15000; };
	class Exile_Car_Van_Fuel_Guerilla03 				{ quality = 4; price = 15000; };

	///////////////////////////////////////////////////////////////////////////////
	// Zamak
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Zamak 								{ quality = 3; price = 25000; };
	class O_Truck_02_covered_F                          { quality = 2; price = 25000; };
	//class I_Truck_02_fuel_F                             { quality = 1; price = 16000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Water Scooter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_WaterScooter						{ quality = 2; price = 800; };
	
	///////////////////////////////////////////////////////////////////////////////
	// RHIB
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RHIB								{ quality = 3; price = 1500; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Ceaser BTT
	///////////////////////////////////////////////////////////////////////////////
	//class Exile_Plane_Ceasar							{ quality = 2; price = 15000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_BlackfishInfantry							{ quality = 6; price = 60000; };
	class Exile_Plane_BlackfishVehicle							{ quality = 6; price = 60000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Prowler
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_ProwlerLight							{ quality = 3; price = 22000; };
	class Exile_Car_ProwlerUnarmed							{ quality = 3; price = 22000; };
	class	B_CTRG_LSV_01_light_F							{ quality = 1; price = 12000; };
	class	B_T_LSV_01_unarmed_F							{ quality = 1; price = 15000; };
	///////////////////////////////////////////////////////////////////////////////
	// Qilin
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_QilinUnarmed						{ quality = 3; price = 15000; };
	class	O_T_LSV_02_unarmed_F  					    { quality = 1; price = 15000; };
	class	O_T_LSV_02_armed_F     					    { quality = 3; price = 30000; };
	///////////////////////////////////////////////////////////////////////////////
	// MB 4WD
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_MB4WD								{ quality = 2; price = 15000; };
	class Exile_Car_MB4WDOpen							{ quality = 2; price = 15000; };
	class CUP_BAF_Jackal2_L2A1_W                   		{ quality = 5; price = 55000; };
	class CUP_BAF_Jackal2_L2A1_D                     	{ quality = 5; price = 55000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Flags
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_FlagStolen1						{ quality = 1; price = 5000;  sellPrice = 5000;  };
	class Exile_Item_FlagStolen2						{ quality = 1; price = 10000; sellPrice = 10000; };
	class Exile_Item_FlagStolen3						{ quality = 1; price = 15000; sellPrice = 15000; };
	class Exile_Item_FlagStolen4						{ quality = 1; price = 20000; sellPrice = 20000; };
	class Exile_Item_FlagStolen5						{ quality = 1; price = 25000; sellPrice = 25000; };
	class Exile_Item_FlagStolen6						{ quality = 1; price = 30000; sellPrice = 30000; };
	class Exile_Item_FlagStolen7						{ quality = 1; price = 35000; sellPrice = 35000; };
	class Exile_Item_FlagStolen8						{ quality = 1; price = 50000; sellPrice = 50000; };
	class Exile_Item_FlagStolen9						{ quality = 1; price = 90000; sellPrice = 90000; };
	class Exile_Item_FlagStolen10						{ quality = 1; price = 150000; sellPrice = 150000; };
	
	///////////////////////////////////////////////////////////////////////////////
    //CUP_gLauncher
    ///////////////////////////////////////////////////////////////////////////////
	
	class CUP_glaunch_mk13 						    	{ quality = 3; price = 2850; };
	
		
    ///////////////////////////////////////////////////////////////////////////////
    //CUP_Launcher
    ///////////////////////////////////////////////////////////////////////////////
	class CUP_launch_Igla 						    { quality = 6; price = 35000; };
    class CUP_launch_MAAWS                          { quality = 3; price = 12500; }; 
    class CUP_launch_RPG7V                          { quality = 2; price = 7500; };
	
	class CUP_launch_M136                   	    { quality = 2; price = 9000; };
	class CUP_launch_Mk153Mod0                		{ quality = 4; price = 15000; };
	class CUP_launch_Mk153Mod0_SMAWOptics     		{ quality = 5; price = 27500; };
	class CUP_launch_FIM92Stinger                	{ quality = 6; price = 40000; };
	class CUP_launch_Metis                       	{ quality = 5; price = 25000; };
	class CUP_launch_NLAW                       	{ quality = 6; price = 40000; };
	

    ///////////////////////////////////////////////////////////////////////////////
    //CUP_Launcher_Ammo
    ///////////////////////////////////////////////////////////////////////////////
	class CUP_Igla_M                                { quality = 6; price = 10000; }; 
    class CUP_MAAWS_HEAT_M                          { quality = 3; price = 5500; };
    class CUP_PG7V_M                                { quality = 2; price = 3500; };
	
	class CUP_M136_M                                { quality = 2; price = 3500; };
	class CUP_SMAW_HEAA_M                           { quality = 4; price = 8000; };
	class CUP_SMAW_HEDP_M                           { quality = 4; price = 11000; };
	class CUP_Stinger_M                             { quality = 6; price = 15000; };
	class CUP_AT13_M                                { quality = 5; price = 10000; };
	class CUP_NLAW_M                                { quality = 6; price = 15000; };

	

	///////////////////////////////////////////////////////////////////////////////
    // CUP Wheeled Vehicle
    ///////////////////////////////////////////////////////////////////////////////
	class CUP_I_Ural_UN                             { quality = 1; price = 2000; };
	class CUP_I_Datsun_PK                           { quality = 1; price = 4000; };
	class CUP_B_LR_Special_M2_GB_W                  { quality = 3; price = 20000; };
	class CUP_B_RG31_M2_OD_USMC                     { quality = 6; price = 100000; };
    class CUP_B_Ridgback_LMG_GB_W                   { quality = 6; price = 80000; };	 
    class CUP_B_Ridgback_HMG_GB_W                   { quality = 6; price = 80000; };	 
	class CUP_I_UAZ_MG_UN	                        { quality = 1; price = 14000; }; 
    class CUP_B_HMMWV_M2_GPK_USA                    { quality = 6; price = 45000; };
    class CUP_B_HMMWV_M2_GPK_NATO_T                 { quality = 6; price = 45000; };	
    class CUP_B_HMMWV_Crows_M2_USA	                { quality = 6; price = 170000; };
    class CUP_I_SUV_Armored_ION                     { quality = 4; price = 35000; };	 
    class CUP_I_UAZ_Open_UN                         { quality = 1; price = 4000; };
    class CUP_I_UAZ_Unarmed_UN                      { quality = 1; price = 4000; };
    class CUP_O_UAZ_Militia_SLA                     { quality = 1; price = 4000; };
    class CUP_I_LR_Transport_RACS                   { quality = 1; price = 12000; };
    class CUP_I_LR_Transport_AAF                    { quality = 1; price = 12000; };
    class CUP_I_LR_Ambulance_RACS	                { quality = 1; price = 12000; };
    class CUP_I_LR_Ambulance_AAF                    { quality = 1; price = 12000; };
    class CUP_I_V3S_Covered_TKG                     { quality = 1; price = 15000; };
	class CUP_O_V3S_Open_TKM                        { quality = 1; price = 15000; };
	class CUP_B_M1030                               { quality = 1; price = 2500; };	
	class CUP_C_Golf4_camo_Civ                      { quality = 1; price = 12000; };
	class CUP_C_SUV_TK                              { quality = 1; price = 8000; };
	class CUP_C_Datsun_Covered	                    { quality = 1; price = 2200; };
	class CUP_C_Datsun_4seat	                    { quality = 1; price = 2200; };	
	class CUP_C_Skoda_Blue_CIV	                    { quality = 1; price = 2000; };	
	class CUP_B_HMMWV_Ambulance_USMC	            { quality = 1; price = 4000; };	
	class CUP_B_HMMWV_Unarmed_USMC	                { quality = 1; price = 4000; };	
	class CUP_B_MTVR_Refuel_USMC	                { quality = 4; price = 20000; };	
	class CUP_O_V3S_Refuel_TKM	                    { quality = 4; price = 20000; };
	class CUP_B_MTVR_USMC	                        { quality = 2; price = 18000; };	
	class CUP_O_V3S_Covered_TKM	                    { quality = 1; price = 18000; };	
	class CUP_I_V3S_Open_TKG	                    { quality = 1; price = 18000; };	
	class CUP_B_MTVR_Ammo_USMC	                    { quality = 6; price = 100000; };	
	class CUP_I_Ural_Reammo_UN	                    { quality = 6; price = 100000; };
	class CUP_B_T810_Reammo_CZ_WDL                  { quality = 6; price = 100000; };
	class CUP_B_T810_Refuel_CZ_WDL                  { quality = 4; price = 20000; };
	class CUP_B_T810_Repair_CZ_WDL                  { quality = 4; price = 20000; };
	class CUP_B_T810_Unarmed_CZ_WDL  			    { quality = 1; price = 18000; };
	/*
	class CUP_B_M1133_MEV_Woodland	                { quality = 4; price = 60000; };
	class CUP_B_LAV25_HQ_USMC	                    { quality = 3; price = 90000; };
	class CUP_B_Dingo_GL_CZ_Des	                    { quality = 6; price = 200000; };
	class CUP_B_Dingo_GL_CZ_Wdl	                    { quality = 6; price = 200000; };
	class B_APC_Wheeled_01_cannon_F	                { quality = 6; price = 300000; };
	class I_MRAP_03_hmg_F	                        { quality = 6; price = 235000; };
	class I_MRAP_03_gmg_F	                        { quality = 6; price = 220000; };
	class O_MRAP_02_hmg_F	                        { quality = 6; price = 200000; };
	class O_MRAP_02_gmg_F	                        { quality = 6; price = 210000; };
	class B_T_MRAP_01_gmg_F	                        { quality = 6; price = 215000; };
	class B_T_MRAP_01_hmg_F	                        { quality = 6; price = 205000; };
	class CUP_B_UAZ_SPG9_CDF	                    { quality = 5; price = 100000; };
	*/
	
	//nové 27.2.2018
	class CUP_B_BAF_Coyote_L2A1_W                   { quality = 6; price = 65000; };
	class CUP_B_Mastiff_LMG_GB_D                    { quality = 6; price = 85000; };
	class CUP_B_Mastiff_LMG_GB_W                    { quality = 6; price = 85000; };
	class B_Truck_01_box_F		                    { quality = 3; price = 25000; };	
	class B_Truck_01_covered_F		                { quality = 3; price = 25000; };
	class CUP_C_S1203_CIV                           { quality = 1; price = 2000; };
	class CUP_C_Skoda_White_CIV                     { quality = 1; price = 2000; };
	class CUP_C_S1203_Militia_CIV                   { quality = 1; price = 2000; };
	
	
	
   ///////////////////////////////////////////////////////////////////////////////
   // CUP Helicopter
   ///////////////////////////////////////////////////////////////////////////////

    class CUP_B_UH1Y_GUNSHIP_USMC                   { quality = 6; price = 60000; };
    class CUP_B_UH1Y_MEV_USMC                       { quality = 2; price = 20000; };
	class CUP_I_UH60L_Unarmed_FFV_MEV_Racs		    { quality = 2; price = 20000; };
	class CUP_I_UH60L_Unarmed_RACS				    { quality = 2; price = 20000; };   
	class CUP_B_UH60L_Unarmed_US 				    { quality = 2; price = 20000; };
	class CUP_B_CH47F_USA 					        { quality = 3; price = 25000; };
	class CUP_B_CH47F_GB 					        { quality = 3; price = 25000; };
	class CUP_B_Merlin_HC3A_Armed_GB                { quality = 4; price = 35000; };  
    class CUP_I_Mi17_UN                             { quality = 2; price = 40000; };
    class CUP_O_Mi17_TK                             { quality = 6; price = 40000; };
    class CUP_O_Mi8_SLA_1                           { quality = 2; price = 40000; };
    class CUP_O_Mi8_medevac_RU                      { quality = 2; price = 40000; }; 
    class CUP_O_Mi8_medevac_CHDKZ                   { quality = 2; price = 40000; };
    class CUP_B_CH53E_USMC                          { quality = 4; price = 50000; };
    class CUP_B_MV22_USMC                           { quality = 5; price = 70000; };
    class CUP_B_Mi171Sh_Unarmed_ACR                 { quality = 2; price = 40000; };	
    class CUP_B_UH60L_US                            { quality = 3; price = 35000; };
    class CUP_I_UH60L_RACS                          { quality = 3; price = 35000; };
    class CUP_O_Mi8_SLA_2                           { quality = 6; price = 400000; };
    class CUP_O_mi8_RU                              { quality = 6; price = 400000; };
    class CUP_B_MH60S_USMC                          { quality = 3; price = 35000; };
    class CUP_C_Mi17_Civilian_RU                    { quality = 2; price = 10000; };
	class	CUP_B_MI6T_CDF     					    { quality = 2; price = 10000; };
	//class	CUP_B_Heli_Attack_01_F     				{ quality = 6; price = 750000; };
	class CUP_B_MH60L_DAP_4x_US                     { quality = 6; price = 350000; };
	class CUP_B_MH60L_DAP_2x_US                     { quality = 6; price = 250000; };
	class CUP_B_Mi171Sh_ACR                         { quality = 6; price = 370000; };
	class CUP_B_AW159_GB                            { quality = 5; price = 300000; };
	class CUP_B_AW159_RN_Blackcat                   { quality = 5; price = 300000; };
	class CUP_O_Mi24_Mk4_AT_CSAT_T                  { quality = 6; price = 650000; };
	class B_Heli_Light_01_dynamicLoadout_F          { quality = 5; price = 225000; };
	class CUP_B_AH1Z_Dynamic_USMC                   { quality = 6; price = 650000; };
	class CUP_B_AH64D_DL_USA						{ quality = 6; price = 600000; };
	class CUP_O_Ka50_DL_RU							{ quality = 6; price = 300000; };
	class CUP_O_Mi24_V_Dynamic_RU					{ quality = 6; price = 700000; };
	class CUP_O_Mi24_P_Dynamic_RU					{ quality = 6; price = 700000; };
	
	//nové 27.2.2018 , 6.3.
	class CUP_B_SA330_Puma_HC1_BAF                  { quality = 2; price = 20000; };
	class CUP_B_SA330_Puma_HC2_BAF                  { quality = 2; price = 20000; };
	
    class CUP_I_Ka60_Blk_ION                   		{ quality = 6; price = 60000; };
    class CUP_I_Ka60_Digi_AAF                   	{ quality = 6; price = 60000; };
    class CUP_O_Ka60_Grey_RU                   		{ quality = 6; price = 60000; };
    class CUP_O_Ka60_Hex_CSAT                	    { quality = 6; price = 60000; };

 	
	///////////////////////////////////////////////////////////////////////////////
	//  CUP planes
	/////////////////////////////////////////////////////////////////////////////// 
	class CUP_B_C130J_Cargo_GB                      { quality = 1; price = 60000; };
    class CUP_I_C130J_RACS                          { quality = 1; price = 60000; };
    class CUP_C_AN2_AIRTAK_TK_CIV                   { quality = 1; price = 17000; };	
    class CUP_C_C47_CIV                             { quality = 1; price = 20000; };
    class CUP_C_B737_CIV                            { quality = 1; price = 60000; };	

	///////////////////////////////////////////////////////////////////////////////
    // CUP Tracked Vehicle
    ///////////////////////////////////////////////////////////////////////////////
    class CUP_I_M113_UN                             { quality = 5; price = 55000; };
    class CUP_I_M113_AAF                            { quality = 5; price = 55000; };
    class CUP_I_M113_Med_AAF                        { quality = 3; price = 25000; };
    class CUP_I_M113_Med_UN                         { quality = 3; price = 25000; };
	class CUP_B_AAV_Unarmed_USMC                    { quality = 3; price = 25000; };
    class CUP_O_BMP2_AMB_CSAT_T                     { quality = 6; price = 30000; };
    class CUP_I_BMP2_AMB_UN                         { quality = 6; price = 30000; };
    class CUP_O_BTR90_HQ_RU                         { quality = 6; price = 90000; };
    class CUP_O_GAZ_Vodnik_MedEvac_RU               { quality = 3; price = 36000; };
    class CUP_O_GAZ_Vodnik_PK_RU                    { quality = 4; price = 46000; };
	
	// nové 27.2.2018
	class CUP_B_FV432_Bulldog_GB_D                  { quality = 5; price = 55000; };
	class CUP_B_FV432_Bulldog_GB_W                  { quality = 5; price = 55000; };
	
	///////////////////////////////////////////////////////////////////////////////
    // Exile Zakladni Concrete staveni
    ///////////////////////////////////////////////////////////////////////////////
	
	
	
///////////////////////////////////////////////////////////////////////////////
// Extended Base Mod
//////////////////////////////////////////////////////////////////////////////
class Land_HBarrier_1_F_Kit									{ quality = 3; price = 5500;sellPrice = 2750; };
class Land_HBarrier_3_F_Kit									{ quality = 3; price = 19000;sellPrice = 9500;  };
class Land_HBarrier_5_F_Kit									{ quality = 3; price = 40000;sellPrice = 20000;  };
class Land_BagBunker_Tower_F_Kit							{ quality = 3; price = 100000;sellPrice = 50000;  };
class CamoNet_OPFOR_open_F_Kit								{ quality = 3; price = 1000; sellPrice = 500; };
class CamoNet_INDP_open_F_Kit								{ quality = 3; price = 1000;sellPrice = 500;  };
class CamoNet_BLUFOR_open_F_Kit								{ quality = 3; price = 1000;sellPrice = 500;  };
///////////////////////// V0.0.2
class Land_CncBarrier_F_Kit									{ quality = 3; price = 7500;sellPrice = 3750;  };
class Land_Stone_4m_F_Kit									{ quality = 3; price = 15000;sellPrice = 7500;  };
class Land_Stone_Gate_F_Kit									{ quality = 3; price = 15000;sellPrice = 7500;  };
class PierLadder_F_Kit										{ quality = 3; price = 15000;sellPrice = 7500;  };
class Land_WaterCooler_01_new_F_Kit							{ quality = 3; price = 10000;sellPrice = 5000;  };
///////////////////////// V0.0.3
class Land_Pallet_MilBoxes_F_Kit							{ quality = 3; price = 5000;sellPrice = 5000;  };
class Land_Cargo20_military_green_F_Kit						{ quality = 3; price = 50000;sellPrice = 25000;  };
class Land_BagFence_Corner_F_Kit							{ quality = 3; price = 10000;sellPrice = 5000;  };
class Land_BagFence_Long_F_Kit								{ quality = 3; price = 10000;sellPrice = 5000; };
class Land_HBarrierTower_F_Kit								{ quality = 3; price = 75000;sellPrice = 37500;  };
class Land_Metal_wooden_rack_F_Kit							{ quality = 3; price = 1000;sellPrice = 500;  };
class Land_BagBunker_Small_F_Kit							{ quality = 3; price = 65000;sellPrice = 32500;  };
class Land_Bunker_F_Kit										{ quality = 3; price = 750000;sellPrice = 375000;  };
class Land_HBarrierWall_corner_F_Kit						{ quality = 3; price = 50000;sellPrice = 25000;  };
class Land_HBarrierWall6_F_Kit								{ quality = 3; price = 60000;sellPrice = 30000;  };
class Land_HBarrierWall4_F_Kit								{ quality = 3; price = 40000;sellPrice = 20000;  };
class Land_RampConcrete_F_Kit								{ quality = 3; price = 55000;sellPrice = 27500;  };
///////////////////////// V0.0.4
class Land_Wall_IndCnc_4_F_Kit								{ quality = 3; price = 50000;sellPrice = 25000;  };
class Land_City2_4m_F_Kit									{ quality = 3; price = 60000;sellPrice = 30000;  };
class Land_City2_8m_F_Kit									{ quality = 3; price = 100000;sellPrice = 50000;  };
class Land_HelipadCivil_F_Kit								{ quality = 3; price = 100000;sellPrice = 50000;  };
class Land_Rack_F_Kit										{ quality = 3; price = 1000;sellPrice = 500;  };
///////////////////////// V0.1.0
class Land_City_Gate_F_Kit									{ quality = 3; price = 20000;sellPrice = 10000;  };
class Land_BarGate_F_Kit									{ quality = 3; price = 20000;sellPrice = 10000;  };
class Land_Icebox_F_Kit										{ quality = 3; price = 1000;sellPrice = 5000;  };
class Land_Sign_WarningMilitaryArea_F_Kit					{ quality = 3; price = 1000;sellPrice = 5000;  };
class Land_Mil_WallBig_4m_F_Kit								{ quality = 3; price = 60000;sellPrice = 30000;  };
class Land_Cargo_Patrol_V2_F_Kit							{ quality = 3; price = 185000;sellPrice = 92500;  };
///////////////////////// V0.1.1
class Land_Pier_small_F_Kit									{ quality = 3; price = 75000;sellPrice = 37500;  };
class Land_Wall_Tin_4_Kit									{ quality = 3; price = 20000;sellPrice = 10000;  };
///////////////////////// V0.1.2
class Land_Tank_rust_F_Kit									{ quality = 3; price = 50000;sellPrice = 25000;  };
class Land_ShelvesMetal_F_Kit								{ quality = 3; price = 1000;sellPrice = 500;  };
class Land_Cargo_Tower_V2_F_Kit								{ quality = 3; price = 750000;sellPrice = 375000;  };
class Land_FuelStation_Feed_F_Kit							{ quality = 3; price = 220000;sellPrice = 110000;  };
class Land_BagBunker_Large_F_Kit							{ quality = 3; price = 100000;sellPrice = 50000;  };
class ShootingPos_F_Kit										{ quality = 3; price = 1000;sellPrice = 500;  };
///////////////////////// V0.1.3
class Land_cargo_house_slum_F_Kit							{ quality = 3; price = 25000;sellPrice = 12500;  };
class Land_Cargo40_light_green_F_Kit						{ quality = 3; price = 130000;sellPrice = 65000;  };
class Land_Cargo_House_V2_F_Kit								{ quality = 3; price = 200000;sellPrice = 10000;  };
class Land_LampHalogen_F_Kit								{ quality = 3; price = 10000;sellPrice = 5000;  };
///////////////////////// V0.1.4
class Land_LampAirport_F_Kit								{ quality = 3; price = 15000;sellPrice = 7500;  };
class Land_CncShelter_F_Kit									{ quality = 3; price = 40000;sellPrice = 20000;  };
class Land_Wall_IndCnc_2deco_F_Kit							{ quality = 3; price = 60000;sellPrice = 30000;  };
class Land_CncWall4_F_Kit									{ quality = 3; price = 60000;sellPrice = 30000;  };
class Land_FuelStation_Shed_F_Kit							{ quality = 3; price = 65000;sellPrice = 32500;  };
class Land_Shed_Small_F_Kit									{ quality = 3; price = 55000;sellPrice = 27500;  };
class Land_Razorwire_F_Kit									{ quality = 3; price = 5000;sellPrice = 2500;  };
///////////////////////// V0.1.5
class Land_u_Addon_01_V1_F_Kit								{ quality = 3; price = 50000;sellPrice = 25000;  }; //brokenshed
class Land_Cargo20_sand_F_Kit								{ quality = 3; price = 80000;sellPrice = 40000;  };
class Land_GH_Stairs_F_Kit									{ quality = 3; price = 50000;sellPrice = 25000;  };
class Land_i_Garage_V2_F_Kit								{ quality = 3; price = 65000;sellPrice = 32500;  };
class Land_GH_Platform_F_Kit								{ quality = 3; price = 50000;sellPrice = 25000;  };
class Land_TentDome_F_Kit									{ quality = 3; price = 1000;sellPrice = 500;  };
class Land_TentHangar_V1_F_Kit								{ quality = 3; price = 350000;sellPrice = 17500;  };
///////////////////////// V0.1.6
class Land_CncWall1_F_Kit									{ quality = 3; price = 15000;sellPrice = 7500;  };
class Land_CncBarrierMedium_F_Kit							{ quality = 3; price = 15000;sellPrice = 7500;  };
class Land_Crash_barrier_F_Kit								{ quality = 3; price = 10000;sellPrice = 5000;  };
class Land_Shed_Big_F_Kit									{ quality = 3; price = 75000;sellPrice = 37500;  };
class Land_TouristShelter_01_F_Kit							{ quality = 3; price = 50000;sellPrice = 25000;  };
class Land_Water_source_F_Kit								{ quality = 3; price = 10000;sellPrice = 5000;  };
class Land_Sign_WarningMilitaryVehicles_F_Kit				{ quality = 3; price = 1000;sellPrice = 500;  };
class Land_Sign_WarningMilAreaSmall_F_Kit					{ quality = 3; price = 1000;sellPrice = 500;  };
class Land_Concrete_SmallWall_8m_F_Kit						{ quality = 3; price = 30000;sellPrice = 15000;  };
class Land_Concrete_SmallWall_4m_F_Kit						{ quality = 3; price = 20000;sellPrice = 10000;  };
///////////////////////// V0.1.7
class Land_PortableLight_double_F_Kit						{ quality = 3; price = 25000;sellPrice = 12500;  };
class Land_Radar_Small_F_Kit								{ quality = 3; price = 150000; sellPrice = 75000;  };
class Land_Cargo_addon02_V2_F_Kit							{ quality = 3; price = 20000;sellPrice = 10000;  }; //Slumplane	
class Land_TableDesk_F_Kit									{ quality = 3; price = 1000;sellPrice = 500;  };
class Land_ToiletBox_F_Kit									{ quality = 3; price = 1000;sellPrice = 500;  };
class Land_Pier_Box_F_Kit									{ quality = 3; price = 500000;sellPrice = 250000;  };
///////////////////////// V0.1.8
class Land_ChairWood_F_Kit									{ quality = 3; price = 1000;sellPrice = 500;  };
class BlockConcrete_F_Kit									{ quality = 3; price = 20000;sellPrice = 1000;  };
class Land_CargoBox_V1_F_Kit								{ quality = 3; price = 60000;sellPrice = 30000;  };
class Land_IndFnc_3_F_Kit									{ quality = 3; price = 10000;sellPrice = 5000;  };
class Land_IndFnc_9_F_Kit									{ quality = 3; price = 30000;sellPrice = 15000;  };
class Land_Sea_Wall_F_Kit									{ quality = 3; price = 20000;sellPrice = 10000;  };
class Land_i_Addon_03_V1_F_Kit								{ quality = 3; price = 50000;sellPrice = 25000;  }; //Tavern
class Land_i_Addon_03mid_V1_F_Kit							{ quality = 3; price = 50000;sellPrice = 25000;  }; //Tavernmiddle
class Land_LampStreet_F_Kit									{ quality = 3; price = 10000;sellPrice = 5000;  };
///////////////////////// V0.1.9
class Land_Dome_Big_F_Kit									{ quality = 3; price = 300000;sellPrice = 150000;  };
class Land_Hangar_F_Kit										{ quality = 3; price = 500000;sellPrice = 125500;  };
class Land_Metal_Shed_F_Kit									{ quality = 3; price = 30000;sellPrice = 15000;  };
class Land_spp_Tower_F_Kit									{ quality = 3; price = 700000;sellPrice = 375000;  };
class Land_Sun_chair_F_Kit									{ quality = 3; price = 1000;sellPrice = 500;  };
class Land_Sunshade_04_F_Kit								{ quality = 3; price = 1000;sellPrice = 500;  };
class Land_LampShabby_F_Kit									{ quality = 3; price = 10000;sellPrice = 5000;  };
///////////////////////// V0.2.0
class Land_Airport_Tower_F_Kit								{ quality = 3; price = 200000;sellPrice = 10000;  };
class Land_i_Barracks_V1_F_Kit								{ quality = 3; price = 250000;sellPrice = 12500;  };
class Land_BeachBooth_01_F_Kit								{ quality = 3; price = 1000;sellPrice = 500;  };
class Land_Castle_01_tower_F_Kit							{ quality = 3; price = 100000;sellPrice = 50000;  };
class Land_Sign_WarningUnexplodedAmmo_F_Kit					{ quality = 3; price = 1000;sellPrice = 500;  };
class Land_TTowerSmall_1_F_Kit								{ quality = 3; price = 20000;sellPrice = 10000;  };
///////////////////////// V0.2.1 Hotfix
///////////////////////// V0.2.2
class Exile_Plant_GreenBush_Kit								{ quality = 3; price = 10000;sellPrice = 5000;  };
class Land_nav_pier_m_F_Kit									{ quality = 3; price = 200000;sellPrice = 100000;  };
class Land_SharpStone_01_F_Kit								{ quality = 3; price = 26000;sellPrice = 13000;  };
class Land_SharpStone_02_F_Kit								{ quality = 3; price = 25000;sellPrice = 12500;  };
class Land_Sleeping_bag_F_Kit								{ quality = 3; price = 1000;sellPrice = 500;  };
class Land_Small_Stone_02_F_Kit								{ quality = 3; price = 23000;sellPrice = 11500;  };
class Land_SolarPanel_2_F_Kit								{ quality = 3; price = 10000;sellPrice = 5000;  };
class Land_spp_Panel_F_Kit									{ quality = 3; price = 10000;sellPrice = 5000;  };
///////////////////////// V0.2.3
class Land_CampingChair_V2_F_Kit							{ quality = 3; price = 1000;sellPrice = 500;  };
class Land_CampingChair_V1_F_Kit							{ quality = 3; price = 1000;sellPrice = 500;  };
class Land_Camping_Light_F_Kit								{ quality = 3; price = 1000;sellPrice = 500;  };
class Land_CampingTable_F_Kit								{ quality = 3; price = 1000;sellPrice = 500;  };
class MapBoard_altis_F_Kit									{ quality = 3; price = 8000;sellPrice = 4000;  };
class Land_Pavement_narrow_F_Kit							{ quality = 3; price = 5000;sellPrice = 2500;  };
class Land_Pavement_narrow_corner_F_Kit						{ quality = 3; price = 5000;sellPrice = 2500;  };
class Land_Pavement_wide_F_Kit								{ quality = 3; price = 5000;sellPrice = 2500;  };
class Land_Pavement_wide_corner_F_Kit						{ quality = 3; price = 5000;sellPrice = 2500;  };
///////////////////////// V0.2.4
class Exile_ConcreteMixer_Kit								{ quality = 3; price = 500000;sellPrice = 250000;  };
class Flag_CSAT_F_Kit										{ quality = 3; price = 5000;sellPrice = 2500;  };
class Land_GarbageContainer_closed_F_Kit					{ quality = 3; price = 3000;sellPrice = 1500;  };
class Land_Metal_rack_F_Kit									{ quality = 3; price = 1000;sellPrice = 500;  };
class Land_Sink_F_Kit										{ quality = 3; price = 1000;sellPrice = 500;  };
class	Exile_Item_BushKit_Green							{ quality = 3; price = 8000;sellPrice = 4000;  };
///////////////////////// V0.2.5
class Land_Atm_02_F_Kit										{ quality = 3; price = 100000;sellPrice = 50000;  };
///////////////////////// V0.2.6

//class Land_PillboxBunker_01_big_F_Kit						{ quality = 6; price = 150000;sellPrice = 75000;  };
class Land_BagBunker_01_small_green_F_Kit					{ quality = 3; price = 75000;sellPrice = 37500;  };
//class Land_PillboxBunker_01_rectangle_F_Kit					{ quality = 6; price = 120000;sellPrice = 60000;  };
//class Land_PillboxBunker_01_hex_F_Kit						{ quality = 6; price = 110000;sellPrice = 55000;  };
//class Land_PillboxWall_01_3m_F_Kit							{ quality = 4; price = 6000;sellPrice = 3000;  };
//class Land_PillboxWall_01_6m_F_Kit							{ quality = 4; price = 10000;sellPrice = 5000;  };
//class Land_Airport_01_controlTower_F_Kit					{ quality = 5; price = 60000;sellPrice = 3000;  };
class Land_HBarrier_01_line_3_green_F_Kit					{ quality = 3; price = 6000;sellPrice = 3000;  };
class Land_HBarrier_01_line_5_green_F_Kit					{ quality = 3; price = 8000;sellPrice = 4000;  };
class Land_HBarrier_01_tower_green_F_Kit					{ quality = 3; price = 100000;sellPrice = 50000;  }; //changed
//class Land_trench_01_forest_F_Kit							{ quality = 3; price = 9500;sellPrice = 4750;  };
//class Land_trench_01_grass_F_Kit							{ quality = 3; price = 9500;sellPrice = 4750;  };
//class Land_GarageShelter_01_F_Kit							{ quality = 2; price = 20000;sellPrice = 10000;  }; //V0.2.7
class Land_HBarrier_01_big_tower_green_F_Kit				{ quality = 3; price = 50000;sellPrice = 25000;  }; //V0.2.8
class Land_Bagbunker_01_large_green_F_Kit					{ quality = 3; price = 45000;sellPrice = 22500;  }; //V0.2.8
class Land_Bagfence_01_short_green_F_Kit					{ quality = 3; price = 2000;sellPrice = 1000;  }; //V0.2.8
class Land_Bagfence_01_long_green_F_Kit						{ quality = 3; price = 2000;sellPrice = 1000;  }; //V0.2.8
//class Land_PetroglyphWall_02_F_Kit							{ quality = 1; price = 8500;sellPrice = 4250;  }; //V0.2.8
//class Land_PetroglyphWall_01_F_Kit							{ quality = 1; price = 8500;sellPrice = 4250;  }; //V0.2.8
class Land_IRMaskingCover_02_F_Kit							{ quality = 3; price = 15000;sellPrice = 7500;  }; //V0.2.8
class Land_IRMaskingCover_01_F_Kit							{ quality = 3; price = 10000;sellPrice = 5000;  }; //V0.2.8
//class Land_Breakwater_02_F_Kit								{ quality = 3; price = 35000;sellPrice = 17500;  }; //V0.2.8
//class Land_Breakwater_01_F_Kit								{ quality = 3; price = 35000;sellPrice = 17500;  }; //V0.2.8
//class Land_BasaltWall_01_gate_F_Kit							{ quality = 3; price = 150000;sellPrice = 75000;  }; //V0.2.8
//class Land_BasaltWall_01_8m_F_Kit							{ quality = 3; price = 15000;sellPrice = 7500;  }; //V0.2.8
//class Land_BasaltWall_01_4m_F_Kit							{ quality = 3; price = 15000;sellPrice = 7500;  }; //V0.2.8
class Land_Ammobox_rounds_F_Kit								{ quality = 3; price = 2000;sellPrice = 1000;  }; //V0.2.8
class Land_Airport_01_hangar_F_Kit							{ quality = 3; price = 50000;sellPrice = 25000;  }; //V0.2.8

///////////////////////// V0.2.7
class Land_i_House_Small_03_V1_F_Kit						{ quality = 3; price = 25000;sellPrice = 12500;  };
class Land_i_House_Big_01_V2_F_Kit							{ quality = 3; price = 50000;sellPrice = 25000;  };
class Land_PlasticCase_01_medium_F_Kit						{ quality = 3; price = 1000;sellPrice = 500;  };
class Land_Research_HQ_F_Kit								{ quality = 3; price = 50000;sellPrice = 25000;  };
class Land_Research_house_V1_F_Kit							{ quality = 3; price = 40000;sellPrice = 20000;  };
///////////////////////// V0.2.8
class Land_Suitcase_F_Kit									{ quality = 3; price = 40000;sellPrice = 20000;  };
class B_Slingload_01_fuel_F_Kit								{ quality = 3; price = 70000;sellPrice = 35000;  };
class B_Slingload_01_Ammo_F_Kit								{ quality = 3; price = 70000;sellPrice = 35000;  };
};




class CfgExileCustomCode 
{
	/*
		You can overwrite every single file of our code without touching it.
		To do that, add the function name you want to overwrite plus the 
		path to your custom file here. If you wonder how this works, have a
		look at our bootstrap/fn_preInit.sqf function.

		Simply add the following scheme here:

		<Function Name of Exile> = "<New File Name>";

		Example:

		ExileClient_util_fusRoDah = "myaddon\myfunction.sqf";
	*/

	//ExileClient_gui_selectSpawnLocation_show = "Spawn\territoryspawn.sqf";
ExileClient_gui_xm8_slide = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_slide.sqf";
ExileClient_gui_xm8_show = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_show.sqf";
	
	//Spawn Selection xsSpawn
ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick = "xs\spawn\Overwrites\ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick.sqf";
ExileClient_gui_selectSpawnLocation_show = "xs\spawn\Overwrites\ExileClient_gui_selectSpawnLocation_show.sqf";
ExileClient_gui_selectSpawnLocation_zoomToMarker = "xs\spawn\Overwrites\ExileClient_gui_selectSpawnLocation_zoomToMarker.sqf";
ExileClient_gui_selectSpawnLocation_event_onListBoxSelectionChanged = "xs\spawn\Overwrites\ExileClient_gui_selectSpawnLocation_event_onListBoxSelectionChanged.sqf";
ExileServer_object_player_createBambi = "xs\spawn\Overwrites\ExileServer_object_player_createBambi.sqf";

	//Client
ExileClient_util_playerEquipment_add = "overwrites\exile_client\code\ExileClient_util_playerEquipment_add.sqf";
ExileServer_object_tree_network_chopTreeRequest = "overwrites\exile_server\code\ExileServer_object_tree_network_chopTreeRequest.sqf";	
	
	//Vehicle Protection System
ExileServer_object_vehicle_database_update = "overwrites\exile_server\code\ExileServer_object_vehicle_database_update.sqf";
ExileServer_object_vehicle_database_load = "overwrites\exile_server\code\ExileServer_object_vehicle_database_load.sqf";

	//xm8Apps - je potreba update scriptu, zatim prepisuje dafaultni veci
ExileClient_gui_xm8_slide_apps_onOpen = "xm8Apps\ExileClient_gui_xm8_slide_apps_onOpen.sqf";

	// tohle nevim
ExileClient_gui_inventory_event_onSlotDoubleClick = "custom\EnigmaPersonalVehicle\ExileClient_gui_inventory_event_onSlotDoubleClick.sqf";

	//Steal Flag Height
ExileClient_action_stealFlag_condition = "overwrites\exile_client\code\ExileClient_action_stealFlag_condition.sqf";

	//Staveni
//ExileClient_gui_constructionMode_update = "overwrites\exile_server\code\ExileClient_gui_constructionMode_update.sqf";
//ExileClient_gui_hud_event_onKeyUp = "overwrites\exile_server\code\ExileClient_gui_hud_event_onKeyUp.sqf";

	// daně u obchodníka TAXA
ExileClient_system_trading_network_purchaseItemResponse = "overwrites\exile_client\code\ExileClient_system_trading_network_purchaseItemResponse.sqf";
ExileClient_system_trading_network_purchaseVehicleResponse = "overwrites\exile_client\code\ExileClient_system_trading_network_purchaseVehicleResponse.sqf";
ExileServer_system_trading_network_purchaseItemRequest = "overwrites\exile_server\code\ExileServer_system_trading_network_purchaseItemRequest.sqf";
ExileServer_system_trading_network_purchaseVehicleRequest = "overwrites\exile_server\code\ExileServer_system_trading_network_purchaseVehicleRequest.sqf";

	//Fix outside vehicle map+radiation outside map
ExileServer_world_spawnVehicles = "fixes\ExileServer_world_spawnVehicles.sqf";	
ExileClient_system_radiation_thread_update = "fixes\ExileClient_system_radiation_thread_update.sqf";

	//Happys Revive
ExileClient_object_player_death_startBleedingOut = "custom\EnigmaRevive\ExileClient_object_player_death_startBleedingOut.sqf"; 

	//Fix Cup - filtrovani veci u tradera
ExileClient_util_gear_getCompatibleWeaponItems = "overwrites\exile_client\code\ExileClient_util_gear_getCompatibleWeaponItems.sqf";
ExileClient_util_item_getCompatibleWeaponItems = "overwrites\exile_client\code\ExileClient_util_item_getCompatibleWeaponItems.sqf";	

	//Sell crate
ExileClient_gui_wasteDumpDialog_event_onModeDropDownSelectionChanged = "CrateSell\ExileClient_gui_wasteDumpDialog_event_onModeDropDownSelectionChanged.sqf";
ExileClient_gui_wasteDumpDialog_show = "CrateSell\ExileClient_gui_wasteDumpDialog_show.sqf";
ExileServer_system_trading_network_wasteDumpRequest = "CrateSell\ExileServer_system_trading_network_wasteDumpRequest.sqf";
	
	//Snih
ExileServer_object_player_database_load = "Snow\ExileServer_object_player_database_load.sqf";
ExileClient_system_snow_thread_update = "Snow\ExileClient_system_snow_thread_update.sqf";

};
class CfgExileEnvironment
{
	class Chernarus_winter
	{
		class FireFlies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour fire flies begin to spawn
			startHour = 18;

			// At this hour fire flies stop spawning
			endHour = 6;
		};

		class Anomalies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour anomalies begin to spawn
			startHour = 19;

			// At this hour anomalies stop spawning
			endHour = 6;
		};

		class Breathing
		{
			// 1 = enabled, 0 = disabled
			enable = 1;
		};

		class Snow
		{
			// 1 = enabled, 0 = disabled
			enable = 1;

			// https://community.bistudio.com/wiki/surfaceType
			surfaces[] = {};
		};

		class Radiation 
		{
			// 1 = enabled, 0 = disabled
			enable = 1;

			/*
				Defines contaminated zones in a specific map. 
				You can define multiple zones per map. The format
				of the zones is:

				[Position ASL(!), Full Radiation Radius, Maximum Radius]

				The radius works as follows:

	            |-------------------------------------------------------|
	                                Maximum Radius
				
				|------------------------|
				  Full Radiation Radius   

				Within the full radiation radius, radiation factor is
				always at a maximum. Outside of this, it lowers down
				to no radiation smoothly.

				Radiation:

	            |------------------------|------------------------------|
	            1        1      1        1     0.75    0.5     0.25    0
			*/
			contaminatedZones[] = 
			{	
				{{12078.7,9315.97,39.4456},50,400},    // Berezino
			};
		};

		class Temperature
		{
			// Temperature in °C for the time of day, per hour
			// Add the first index to the last index, so it is 25 indizes!
			daytimeTemperature[] = {-5.00,-4.77,-3.12,-1.10,-0.24,1.78,1.40,1.00,1.46,1.65,1.50,1.30,0.00,-0.50,-1.65,-2.46,-3.00,-4.40,-4.78,-5.24,-5.10,-5.12,-5.77,-5.00,-5.00};
		
			// Temperature change in °C when it is 100% overcast
			overcast = -2;

			// Temperature change in °C when it is 100% raining
			rain = -5;

			// Temperature change in °C when it is 100% windy
			wind = -3;

			// Temperature change per 100m altitude in °C
			altitude = -0.5;

			// Difference from the daytime temperature to the water temperature
			water = -5;
		};
	};
};
class CfgExileHUD
{
	class ShortItemNames
	{
		SmokeShell[] 						= {"WHITE", 	"SMOKE"};
		1Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		3Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};

		SmokeShellBlue[] 					= {"BLUE", 		"SMOKE"};
		1Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		3Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};

		SmokeShellGreen[] 					= {"GREEN", 	"SMOKE"};
		1Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		3Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};

		SmokeShellOrange[] 					= {"ORANGE", 	"SMOKE"};
		1Rnd_SmokeOrange_Grenade_shell[]	= {"ORANGE", 	"SMOKE"};
		3Rnd_SmokeOrange_Grenade_shell[] 	= {"ORANGE", 	"SMOKE"};

		SmokeShellPurple[] 					= {"PURPLE", 	"SMOKE"};
		1Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		3Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};

		SmokeShellRed[] 					= {"RED", 		"SMOKE"};
		1Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		3Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
				
		SmokeShellYellow[] 					= {"YELLOW", 	"SMOKE"};
		1Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		3Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
				
		UGL_FlareCIR_F[] 					= {"IR", 		"FLARE"};
		3Rnd_UGL_FlareCIR_F[] 				= {"IR", 		"FLARE"};

		UGL_FlareGreen_F[] 					= {"GREEN", 	"FLARE"};
		3Rnd_UGL_FlareGreen_F[] 			= {"GREEN", 	"FLARE"};

		UGL_FlareRed_F[] 					= {"RED", 		"FLARE"};
		3Rnd_UGL_FlareRed_F[] 				= {"RED", 		"FLARE"};

		UGL_FlareWhite_F[] 					= {"WHITE", 	"FLARE"};
		3Rnd_UGL_FlareWhite_F[] 			= {"WHITE", 	"FLARE"};

		UGL_FlareYellow_F[] 				= {"YELLOW", 	"FLARE"};
		3Rnd_UGL_FlareYellow_F[] 			= {"YELLOW", 	"FLARE"};

		Chemlight_blue[] 					= {"BLUE", 		"LIGHT"};
		Chemlight_green[] 					= {"GREEN", 	"LIGHT"};
		Chemlight_red[] 					= {"RED", 		"LIGHT"};
		Chemlight_yellow[] 					= {"YELLOW", 	"LIGHT"};

		1Rnd_HE_Grenade_shell[] 			= {"40MM"};
		3Rnd_HE_Grenade_shell[] 			= {"40MM"};

		O_IR_Grenade[] 						= {"IR"};
		I_IR_Grenade[] 						= {"IR"};
		B_IR_Grenade[] 						= {"IR"};

		HandGrenade[] 						= {"RGO"};
		MiniGrenade[] 						= {"RGN"};

		Exile_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};
class CfgExileLootSettings
{
	/**
	 * Lifetime of loot in minutes. Synchronize this with
	 * the garbage collector settings of your server
	 * CfgSettings!
	 */
	lifeTime = 8;

	/**
	 * Interval in seconds when the client searches for
	 * new buildings to spawn loot in
	 */
	spawnInterval = 20;

	/**
	 * This is a percentage value to determine how many loot
	 * positions should contain loot when the system spawns loot.
	 *
	 * If a building has 20 positions defined, Exile will 
	 * spawn loot in 10 random positions of them.
	 * 
	 * This means smaller buildings spawn less loot and larger
	 * ones spawn more loot.
	 *
	 * You can also cap it at a maximum value. See below.
	 */
	maximumPositionCoverage = 30;

 	/**
 	 * Limit the number of loot positions per building. If the 
 	 * above percentage value exceeds this value, it will be capped.
 	 *
 	 * Example: Coverage is 50%. Building has 60 loot positions defined.
 	 * This results in 30 loot positions and that is too much. So we
 	 * cap this at 10
 	 */
	maximumNumberOfLootSpotsPerBuilding = 15; //original 8

	/**
	 * Exile spawns a random number of items per loot spot. This 
	 * is the upper cap for that. So 3 means it could spawn 1, 2 
	 * or 3.
	 */
	maximumNumberOfItemsPerLootSpot = 5; // original 3

	/**
	 * Radius in meter to spawn loot AROUND each player.
	 * Do NOT touch this value if you dont know what you do.
	 * The higher the number, the higher the drop rates, the
	 * easier your server will lag.
	 *
	 * 50m  = Minimum
	 * 200m = Maximum
	 */
	spawnRadius = 60;

	/**
	 * Defines the radius around trader cities where the system should
	 * not spawn loot. Set this to 0 if you want to have loot spawning
	 * in trader citites, ugh.
	 */
	minimumDistanceToTraderZones = 500;

	/**
	 * Defines the radius around territories where no loot spawns.
	 * This does not regard the actual size of a territory. So do not
	 * set this to a lower value than the maximum radius of a territory,
	 * which is 150m by default.
	 */
	minimumDistanceToTerritories = 150;
};
class CfgExileMobileXM8
{
	/**
	 * Add the 4 digit permission code here, so players can authorize
	 * your server to send them messages to their Mobile XM8 app.
	 */
	code = "MUZJ";
};
class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};
class CfgExileParty 
{
	showESP = 1;
	allow3DMarkers = 1;
};
class CfgExileRussianRoulette
{
	/*
		Minimum amount to join a session of 
		russian roulette
	*/
	buyInAmount = 100;
};
class CfgFlags 
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uids[] = {};
	};
};

class CfgGrinding
{
	// Enables code lock grinding on the server
	enableGrinding = 0;
	
	// Time it takes to grind a fresh lock in minutes
	grindDuration = 10;
	
	// Percentage chance the grinding will fail
	failChance = 35;
	
	// Percentage chance that failing will break your grinder (otherwise it will just remove a battery)
	breakChance = 20;
	
	// Notify the entire server if someone is hacking. 1 == notify, 0 == don't notify
	notifyServer = 1;
	
	// The cooldown time, in minutes, before another server side notification is sent out from a territory. This is on a per territory basis. 
	notificationCooldown = 30;
};

class CfgHacking 
{
	// Enables safe hacking on the server
	enableHacking = 1;
	
	// Time it takes to hack in minutes
	hackDuration = 10;
	
	// Percentage chance the hacking will fail
	failChance = 50;
	
	// Percentage chance the laptop will be removed on fail
	removeChance = 5;
	
	// Max attepts to hack a safe during one restart
	maxHackAttempts = 5;
	
	// Notify the entire server if someone is hacking. 1 == notify, 0 == don't notify
	notifyServer = 1;
	
	// The cooldown time, in minutes, before another server side notification is sent out from a territory. This is on a per territory basis. 
	notificationCooldown = 30;
	
	// The minimal amount of players on the server required in order to hack a safe (set to 0 to disable)
	minPlayers = 10;
	
	// How many safe hacks are allowed to be going at one time
	maxHacks = 5;
	
	// Show a map icon where the hacking is taking place
	showMapIcon = 1;
};

class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};

/**
 * Sort this by probability of occurence to speed things up a bit
 */
class CfgInteractionMenus

{
	#include "EBM\menus.hpp"
	class Car 
	{
		targetType = 2;
		target = "Car";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};
			

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
		};
	};
	
	class Tank 
	{
		targetType = 2;
		target = "Tank";
		
		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Hot-wires a vehicle
			//class Hotwire: ExileAbstractAction
			//{
			//	title = "Hotwire";
			//	condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
			//	action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			//};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
		};
	};

	class Air
	{
		target = "Air";
		targetType = 2;

		class Actions
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && ((locked ExileClientInteractionObject) != 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			class RotateLeft: ExileAbstractAction
			{
				title = "Rotate Left";	
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,-15] call ExileClient_object_vehicle_rotate";
			};

			class RotateRight: ExileAbstractAction
			{
				title = "Rotate Right";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,15] call ExileClient_object_vehicle_rotate";
			};
		};
	};

	class Safe
	{
		targetType = 2;
		target = "Exile_Container_Abstract_Safe";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Pack : ExileAbstractAction
			{
				title = "Pack";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_container_pack";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
			
			class HackLock: ExileAbstractAction
			{
				title = "Hack Lock";
				condition = "(getNumber(missionConfigFile >> 'CfgHacking' >> 'enableHacking') isEqualTo 1) && ('Exile_Item_Laptop' in (magazines player)) && ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1) && !ExilePlayerInSafezone";
				action = "['HackLock', _this select 0] call ExileClient_action_execute";
			};
		};
	};
	
	

class Laptop
{
    targetType = 2;
    target = "Exile_Construction_Laptop_Static";

    class Actions
    {
        class CameraSystem: ExileAbstractAction
        {
            title = "CCTV Access";
            condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
            action = "_this call ExileClient_gui_baseCamera_show";
        };
    };
};

	class SupplyBox
	{
		targetType = 2;
		target = "Exile_Container_SupplyBox";

		class Actions
		{
			class Mount: ExileAbstractAction
			{
				title = "Mount";
				condition = "(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_mount";
			};

			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_install";
			};

			class Unmount: ExileAbstractAction
			{
				title = "Unmount";
				condition = "!(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_unmount";
			};
		};
	};

	class Construction
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_Static";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Picks up the construction so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_move";
			};

			// Removes the construction.
			class Deconstruct: ExileAbstractAction
			{
				title = "Remove";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_deconstruct";
			};

			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};

			class Upgrade : ExileAbstractAction
			{
				title = "Upgrade";
				condition = "call ExileClient_object_construction_upgradeShow";
				action = "_this call ExileClient_object_construction_upgrade";
			};

			class MakeBoom : ExileAbstractAction
			{
				title = "Plant charge";
				condition = "call ExileClient_system_breaching_condition";
				action = "_this call ExileClient_system_breaching_action";
			};

			class Repair : ExileAbstractAction
			{
				title = "Repair";
				condition = "(!((ExileClientInteractionObject getVariable ['ExileConstructionDamage',0]) isEqualTo 0)) && (call ExileClient_util_world_isInOwnTerritory)";
				action = "_this call ExileClient_object_construction_repair";
			};
			
			class liquidate: ExileAbstractAction
            {
                title = "Liquidate";
                condition = "('Exile_Item_CordlessScrewdriver' in (magazines player)) && ((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Construction_WaterBarrel_Static') && !(call ExileClient_util_world_isInOwnTerritory)";
                action = "_this spawn ExileClient_object_container_pack";
			};
			
			class Grind : ExileAbstractAction
			{
			title = "Grind Lock";
			condition = "call ExAd_fnc_canGrindLock";
			action = "_this spawn ExAd_fnc_grindLock";
			};
			
			class RestoreLock : ExileAbstractAction
			{
			title = "Restore Lock";
			condition = "_object call ExAd_fnc_canRestoreLock";
			action = "_this spawn ExAd_fnc_restoreLock";
			};
			
			class squish: ExileAbstractAction
			{
				title = "Dismantle Hedgehog";
				condition = "('Exile_Item_grinder' in (magazines player)) && ((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Construction_MetalHedgehog_Static') && !(call ExileClient_util_world_isInOwnTerritory)";
				action = "_this spawn ExileClient_object_container_pack";
			};
		};
	};
	
	

	/*
		Tent, Storage crate etc.
	*/
	class Container
	{
		targetType = 2;
		target = "Exile_Container_Abstract";

		class Actions 
		{
			class Pack 
			{
				title = "Pack";
				condition = "!((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Container_SupplyBox')";
				action = "_this spawn ExileClient_object_container_pack";
			};
			// Picks up the container so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "(getNumber(configFile >> 'CfgVehicles' >> typeOf ExileClientInteractionObject >> 'exileIsLockable') isEqualTo 0) || ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_construction_move";
			};
		};
	};

	class Flag
	{
		targetType = 2;
		target = "Exile_Construction_Flag_Static";

		class Actions
		{
			/*
			class Manage : ExileAbstractAction
			{
				title = "Manage";
				condition = "true";
				action = "_this call ExileClient_gui_baseManagement_event_show";
			};
			*/
			class StealFlag: ExileAbstractAction
			{
				title = "Steal Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',1]) isEqualTo 0)";
				action = "['StealFlag', _this select 0] call ExileClient_action_execute";
			};
			
			class RestoreFlag: ExileAbstractAction
			{
				title = "Restore Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',0]) isEqualTo 1)";
				action = "['restoreFlagRequest', [netID ExileClientInteractionObject]] call ExileClient_system_network_send";
			};
		};
	};

	class Boat 
	{
		targetType = 2;
		target = "Ship";

		class Actions
		{
			// Locks a vehicle
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Hot-wires a vehicle
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			// Pushes a boat into look direction to move into water
			class Push: ExileAbstractAction
			{
				title = "Fus Ro Dah!";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
		};
	};

class Bikes
	{
		targetType = 2;
		target = "Bicycle";
	
		class Actions
		{
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "true";  
				action = "_this call ExileClient_object_vehicle_flip";
			};
		};
	};

        class Quads
	{
		targetType = 2;
		target = "Exile_Bike_QuadBike_Guerilla01";

		class Actions
		{
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "true";
				action = "_this call ExileClient_object_vehicle_flip";
			};
			class Pack: ExileAbstractAction
			{
				title ="Pack Quad";
				condition = "true";
				action = execVM "xm8Apps\Apps\Bike\Pack_bike.sqf";
			};
		};
    };	
	
	class Player 
	{
		targetType = 2;
		target = "Exile_Unit_Player";

		class Actions 
		{
			class Free: ExileAbstractAction
			{
				title = "Free";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_free";
			};
			
			class Search: ExileAbstractAction
			{
				title = "Search Gear";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_searchGear";
			};

				class Revive: ExileAbstractAction
			{
				title = "Perform CPR";
				condition = "(!(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['EnigmaRevivePermitted', true]) && (magazines player find 'Exile_Item_Defibrillator' >= 0))";
				action = "_this spawn Enigma_RevivePlyr";
			};
			
			class HideCorpse: ExileAbstractAction
			{
				title = "Hide Body";
				condition = "!(alive ExileClientInteractionObject) && ('Exile_melee_Shovel' isEqualTo (currentWeapon player))";
				action = "['HideBody', (_this select 0)] call ExileClient_action_execute";
			};
		};
	};
};
/**
 * Classname is used for reference
 * name is displayed in crafting requirements
 * models is used for crafting and interaction menus
 */
class CfgInteractionModels
{
	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] = 	
		{
			// Chernarus
            "misc_wellpump.p3d",
            "pumpa.p3d"
		};
	};

	class CleanWaterSource
	{
		name = "Water cooler";
		models[] = 	
		{
			"watercooler",
            // Chernarus
            "misc_wellpump.p3d",
            "pumpa.p3d"
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
			"wreck_"
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
            " brg_"			
		};
	};

	// TODO: Add https://community.bistudio.com/wikidata/images/thumb/6/60/Arma3_CfgVehicles_Land_Tank_rust_F.jpg/150px-Arma3_CfgVehicles_Land_Tank_rust_F.jpg
	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuel_tank_big.p3d",
            "fuel_tank_stairs.p3d",
            "a_fuelstation_feed.p3d",
            "ind_fuelstation_feed_ep1.p3d",
            "fuelstation_feed_pmc.p3d",
            "ind_tanksmall2.p3d",
            "ind_tanksmall.p3d",
            "wagon_tanker.p3d"
		};	
	};
};
class CfgLocker 
{
	numbersOnly = "0123456789";
	
	maxDeposit = 250000;
};

class CfgPlayer 
{
	// In minutes ammount of time it takes to go from 100 - 0 if stationary
	hungerDecay = 180;
	thirstDecay = 120;

	// Damage taken from 0 (health||thirst)/sec
	healthDecay = 5.0;

	// Health regen if over BOTH
	thirstRegen = 90;
	hungerRegen = 90;

	// IF above meet recover HP%/MIN
	recoveryPerMinute = 6;

	// Set custom aim precision coefficient for weapon sway
	// https://community.bistudio.com/wiki/Arma_3_Stamina
	// Set to -1 if you want to use Arma 3 default value
	// setCustomAimCoef
	customAimCoefficient = 0.5;

	// 0 or 1
	enableFatigue = 0;
	enableStamina = 0;

	disableMapDrawing = 1;
	
	// Use the current gradient to affect the players movement when autorunning.
	// 0 == default exile auto run
	useGradientAffectedAutoRun = 0;
};

/*
	This config will allow you to override the default poptab storage for vehicles and containers. 
	The current system takes the maxLoad of a vehicle * 10, and that gives you the max poptabs that can be stored.
	This will allow you to override that max with your own value.
	
	To override, just add the vehicle/containers classname to this class, and define its max. Look at Exile_Container_Safe_Small as an example.
*/
class CfgPoptabStorage
{
	class Exile_Container_Safe_Small { max = 500000; };	
	class Exile_Container_Safe { max = 200000; }
};	

class CfgSimulation
{
	/*
		Use Arma built in Dynamic Simulation. 
		If you have any issues with players unable to get into cars, control vehicles, fly planes, etc. try turning this off
		Options:
			0: Use Exile's built in simulation system (Same system in 1.0.3 and below)
			1: Use Dynamic Simulation
	*/
	enableDynamicSimulation = 1;
	
	/*
		Simulation distance settings
		For more information:
			https://community.bistudio.com/wiki/setDynamicSimulationDistance
			https://community.bistudio.com/wiki/setDynamicSimulationDistanceCoef
	*/
	
	// The distance, in meters, will infantry units be simulated. Default: 500m
	groupSimulationDistance = 500;
	
	// The distance, in meters, will vehicles with crew be simulated. Default: 350m
	vehicleSimulationDistance = 250;
	
	// The distance, in meters, will all vehicles without crew be simulated. Default: 250m
	emptyVehicleSimulationDistance = 250;
	
	// The distance, in meters, will static objects be simulated. This includes anything from a small tin can to a building. Default: 50m
	propSimulationDistance = 50;
	
	// Multiplies the entity activation distance by set value if the entity is moving. Default: 2
	isMovingSimulationCoef = 2;
};

class CfgSlothMachine
{
	spinCost = 100;
	Jackpot = 10100;
	
	chances[] = 
	{
		{85, ""}, 					// 85% = Nothing
		{95, "Level1"}, 			// 10% = 1pt
		{96, "Level2"}, 			// 1% = 10pt
		{97, "Level3"}, 			// 1% = 25pt
		{98, "Level4"}, 			// 1% = 50pt
		{99, "Level5"},				// 1% = 100pt
		{100, "Jackpot"} 			// 1% = Jackpot
	};

	class Prizes 
	{
		class Level1
		{
			symbol = "\exile_assets\texture\item\Exile_Item_ToiletPaper.paa";
			prize = 101;
		};

		class Level2
		{
			symbol = "\exile_assets\texture\item\Exile_Item_CockONut.paa";
			prize = 110;
		};

		class Level3
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Beer.paa";
			prize = 125;
		};

		class Level4
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Knife.paa";
			prize = 150;
		};

		class Level5
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Safe.paa";
			prize = 200;
		};
		
		class Jackpot
		{
			symbol = "\exile_assets\texture\item\Exile_Item_XmasPresent.paa";
		};
	};
};
class CfgTerritories
{
	// Base Cost / Radius
	// Level 1 is allways for Pop Tabs, >= 2 for Respect
	prices[] = 
	{
		// Purchase Price 		Radius 		Number of Objects
		{5000,					15,			35 					}, // Level 1
		{10000,					30,			70 					}, // Level 2 
		{15000,					45,			105 					}, // Level 3
		{20000,					60,			140					}, // Level 4
		{25000,					75,			175				}, // Level 5
		{30000,					90,			210				}, // Level 6
		{35000,					105,		245					}, // Level 7
		{50000,					120,		280					}, // Level 8
		{90000,					135,		400				}, // Level 9 , original 315
		{150000,				150,		700					}  // Level 10 , original 350
	};

	// A shortcut of the above maximum radius
	maximumRadius = 150;

	// The above * 2 plus coverving the 20m you can move while placing things
	minimumDistanceToOtherTerritories = 325; 

	// Maximum number of territories a player can own
	maximumNumberOfTerritoriesPerPlayer = 1;

	/**
	 * Defines the minimum distance to safe zones / trader cities where players
	 * cannot build territories
	 */
	minimumDistanceToTraderZones = 750;

	/**
	 * Defines the minimum distance to spawn zones where players
	 * cannot build territories
	 */
	minimumDistanceToSpawnZones = 250;

	// Amount of pop tabs per object to pay
	popTabAmountPerObject = 20;
};
class CfgTraderCategories 
{
	class Community
	{
		name = "Community Items";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community2
	{
		name = "Community Items 2";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community3
	{
		name = "Community Items 3";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community4
	{
		name = "Community Items 4";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community5
	{
		name = "Community Items 5";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community6
	{
		name = "Community Items 6";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community7
	{
		name = "Community Items 7";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community8
	{
		name = "Community Items 8";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community9
	{
		name = "Community Items 9";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community10
	{
		name = "Community Items 10";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class CSAT_WINTER_equipment
	{
		name = "CSAT_WINTER_equipment";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			//CSAT Snow headgear
			"IP_H_HelmetSpecO_SnowHex",
			"IP_H_HelmetSpecO_SnowTiger",
			"IP_H_Beret_02CSAT",
			"IP_H_Beret_02SnowTiger",
			"IP_H_Booniehat_HexSnow",
			"IP_H_Booniehat_SnowTiger",
			"IP_H_HelmetCrew_O_Snow",
			"IP_H_HelmetLeaderO_SnowHex",
			"IP_H_HelmetLeaderO_SnowTiger",
			"IP_H_CrewHelmetHeli_O_Snow",
			"IP_H_PilotHelmetHeli_O_Snow",
			"IP_H_MilCap_HexSnow",
			"IP_H_MilCap_SnowTiger",
			"IP_H_PilotHelmetFighter_O_Snow",
			"IP_H_HelmetO_SnowHex",
			"IP_H_HelmetO_SnowTiger",			
			
			//CSAT Snow backpack
			"IP_B_AssaultPack_SnowHex",
			"IP_B_AssaultPack_SnowTiger",
			"IP_B_Carryall_SnowHex",
			"IP_B_Carryall_SnowTiger",
			"IP_B_FieldPack_SnowHex",
			"IP_B_FieldPack_SnowTiger",
			"IP_B_Kitbag_SnowHex",
			"IP_B_Kitbag_SnowTiger",
			
			//CSAT Snow vest
			"IP_V_PlateCarrierGL_rgrSnowHex",
			"IP_V_PlateCarrierGL_rgrSnowTiger",
			"IP_V_PlateCarrierSpec_rgrSnowHex",
			"IP_V_PlateCarrierSpec_rgrSnowTiger",
			"IP_V_HarnessOGL_gryST",
			"IP_V_HarnessO_gryST",
			"IP_V_BandollierO_snw",
			"IP_V_TacVest_SnowHex",
			"IP_V_TacVest_SnowTiger",
			
			//CSAT SNOW UNIFORMS
			"IP_U_O_CombatUniform_SnowHex",
			"IP_U_O_CombatUniform_SnowTiger",
			"IP_U_O_HeliPilotCoveralls_SnowHex",
			"IP_U_O_OfficerUniform_SnowHex",
			"IP_U_O_OfficerUniform_SnowTiger",
			"IP_U_O_PilotCoveralls_SnowHex"
		};
	};
	class Uniforms
	{
		name = "Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			"WY_Snow_co_a",
			"WY_Snow_co_b",
			"WY_Snow_co_c",
			"WY_GhillieFull_Night",
			"WY_GhillieFull_Day",
			"WY_GhillieLeo",
			"WY_Snow_i_a",
			"WY_Snow_i_b",
			"WY_Snow_i_c",
			"WY_Ghillie_coverall_a",
			"WY_Ghillie_coverall_b",
			"U_C_Journalist",
			"U_C_Poloshirt_blue",
			"U_C_Poloshirt_burgundy",
			"U_C_Poloshirt_salmon",
			"U_C_Poloshirt_stripped",
			"U_C_Poloshirt_tricolour",
			"U_C_Poor_1",
			"U_C_Poor_2",
			"U_C_Poor_shorts_1",
			"U_C_Scientist",
			"U_OrestesBody",
			"U_Rangemaster",
			"U_NikosAgedBody",
			"U_NikosBody",
			"U_Competitor",
			"U_B_CombatUniform_mcam",
			"U_B_CombatUniform_mcam_tshirt",
			"U_B_CombatUniform_mcam_vest",
			"U_B_CombatUniform_mcam_worn",
			"U_B_CTRG_1",
			"U_B_CTRG_2",
			"U_B_CTRG_3",
			"U_I_CombatUniform",
			"U_I_CombatUniform_shortsleeve",
			"U_I_CombatUniform_tshirt",
			"U_I_OfficerUniform",
			"U_O_CombatUniform_ocamo",
			"U_O_CombatUniform_oucamo",
			"U_O_OfficerUniform_ocamo",
			"U_B_SpecopsUniform_sgg",
			"U_O_SpecopsUniform_blk",
			"U_O_SpecopsUniform_ocamo",
			"U_I_G_Story_Protagonist_F",
			"Exile_Uniform_Woodland",
			"U_C_HunterBody_grn",
			"U_IG_Guerilla1_1",
			"U_IG_Guerilla2_1",
			"U_IG_Guerilla2_2",
			"U_IG_Guerilla2_3",
			"U_IG_Guerilla3_1",
			"U_BG_Guerilla2_1",
			"U_IG_Guerilla3_2",
			"U_BG_Guerrilla_6_1",
			"U_BG_Guerilla1_1",
			"U_BG_Guerilla2_2",
			"U_BG_Guerilla2_3",
			"U_BG_Guerilla3_1",
			"U_BG_leader",
			"U_IG_leader",
			"U_I_G_resistanceLeader_F",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit",
			"U_B_survival_uniform",
			"U_B_HeliPilotCoveralls",
			"U_I_HeliPilotCoveralls",
			"U_B_PilotCoveralls",
			"U_I_pilotCoveralls",
			"U_O_PilotCoveralls",
			"CUP_O_TKI_Khet_Partug_01",
            "CUP_O_TKI_Khet_Partug_02",
            "CUP_O_TKI_Khet_Partug_03",
            "CUP_O_TKI_Khet_Partug_04",
            "CUP_O_TKI_Khet_Partug_05",
            "CUP_O_TKI_Khet_Partug_06",
            "CUP_O_TKI_Khet_Partug_07",
            "CUP_O_TKI_Khet_Partug_08",
            "CUP_O_TKI_Khet_Jeans_01",
            "CUP_O_TKI_Khet_Jeans_02",
            "CUP_O_TKI_Khet_Jeans_03",
            "CUP_O_TKI_Khet_Jeans_04",
            "CUP_U_C_Pilot_01",
            "CUP_U_C_Citizen_01",
            "CUP_U_C_Citizen_02",
            "CUP_U_C_Citizen_03",
            "CUP_U_C_Citizen_04",
            "CUP_U_C_Worker_01",
            "CUP_U_C_Worker_02",
            "CUP_U_C_Worker_03",
            "CUP_U_C_Worker_04",
            "CUP_U_C_Profiteer_01",
            "CUP_U_C_Profiteer_02",
            "CUP_U_C_Profiteer_03",
            "CUP_U_C_Profiteer_04",
            "CUP_U_C_Woodlander_01",
            "CUP_U_C_Woodlander_02",
            "CUP_U_C_Woodlander_03",
            "CUP_U_C_Woodlander_04",
            "CUP_U_C_Villager_01",
            "CUP_U_C_Villager_02",
            "CUP_U_C_Villager_03",
            "CUP_U_C_Villager_04",
            "CUP_U_B_CZ_WDL_TShirt",
            "CUP_U_B_GER_Tropentarn_1",
            "CUP_U_B_GER_Tropentarn_2",
            "CUP_U_B_GER_Ghillie",
            "CUP_U_B_GER_Flecktarn_1",
            "CUP_U_B_GER_Flecktarn_2",
            "CUP_U_B_GER_Fleck_Ghillie",
            "CUP_U_B_USMC_Officer",
            "CUP_U_B_USMC_PilotOverall",
            "CUP_U_B_USMC_Ghillie_WDL",
            "CUP_U_B_USMC_MARPAT_WDL_Sleeves",
            "CUP_U_B_USMC_MARPAT_WDL_RolledUp",
            "CUP_U_B_USMC_MARPAT_WDL_Kneepad",
            "CUP_U_B_USMC_MARPAT_WDL_TwoKneepads",
            "CUP_U_B_USMC_MARPAT_WDL_RollUpKneepad",
            "CUP_U_B_FR_SpecOps",
            "CUP_U_B_FR_Scout",
            "CUP_U_B_FR_Scout1",
            "CUP_U_B_FR_Scout2",
            "CUP_U_B_FR_Scout3",
            "CUP_U_B_FR_Officer",
            "CUP_U_B_FR_Corpsman",
            "CUP_U_B_FR_DirAction",
            "CUP_U_B_FR_DirAction2",
            "CUP_U_B_FR_Light",
            "CUP_U_I_GUE_Flecktarn",
            "CUP_U_I_GUE_Flecktarn2",
            "CUP_U_I_GUE_Flecktarn3",
            "CUP_U_I_GUE_Woodland1",
            "CUP_U_I_Ghillie_Top",
            "CUP_U_I_RACS_PilotOverall",
            "CUP_U_I_RACS_Desert_1",
            "CUP_U_I_RACS_Desert_2",
            "CUP_U_I_RACS_Urban_1",
            "CUP_U_I_RACS_Urban_2",
            "CUP_U_O_SLA_Officer",
            "CUP_U_O_SLA_Officer_Suit",
            "CUP_U_O_SLA_MixedCamo",
            "CUP_U_O_SLA_Green",
            "CUP_U_O_SLA_Urban",
            "CUP_U_O_SLA_Desert",
            "CUP_U_O_SLA_Overalls_Pilot",
            "CUP_U_O_SLA_Overalls_Tank",
            "CUP_U_O_Partisan_TTsKO",
            "CUP_U_O_Partisan_TTsKO_Mixed",
            "CUP_U_O_Partisan_VSR_Mixed1",
            "CUP_U_O_Partisan_VSR_Mixed2",
            "CUP_U_O_TK_Officer",
            "CUP_U_O_TK_MixedCamo",
            "CUP_U_O_TK_Green",
            "CUP_U_O_TK_Ghillie",
            "CUP_U_O_TK_Ghillie_Top",
			
			//nove 13.1.2018 , 25.2.2018 , 12.3.2018
			
			"CUP_U_B_BAF_DPM_S2_UnRolled",
			"CUP_U_B_BAF_DPM_S1_RolledUp",
			"CUP_U_B_BAF_MTP_S2_UnRolled",
			"CUP_U_B_BAF_MTP_S1_RolledUp",
			"CUP_U_B_BAF_MTP_S4_UnRolled",
			"CUP_U_B_BAF_MTP_S3_RolledUp",
			"CUP_U_B_BAF_MTP_S5_UnRolled",
			"CUP_U_B_BAF_MTP_S6_UnRolled",
			"U_B_T_Soldier_F",
			"CUP_U_B_CDF_FST_1",
			"CUP_U_B_CDF_MNT_1",
			"CUP_U_B_CDF_FST_2",
			"CUP_U_B_CDF_MNT_2",
			"U_O_T_Soldier_F",
			"U_O_V_Soldier_Viper_hex_F",
			"U_O_V_Soldier_Viper_F",
			"CUP_U_O_SLA_Officer_Suit",
			"U_B_CTRG_Soldier_F",
			"U_B_CTRG_Soldier_2_F",
			"U_B_CTRG_Soldier_3_F",
			
			"U_I_FullGhillie_lsh",
			"U_O_FullGhillie_lsh",
			"U_B_FullGhillie_lsh",
			"U_I_FullGhillie_sard",
			"U_O_FullGhillie_sard",
			"U_B_FullGhillie_sard",
			"U_I_FullGhillie_ard",
			"U_O_FullGhillie_ard",
			"U_B_FullGhillie_ard",
			"U_I_C_Soldier_Camo_F",
			"U_I_C_Soldier_Bandit_4_F",
			"U_I_C_Soldier_Bandit_5_F"
		};
	};

	class Vests
	{
		name = "Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] = 
		{
			
			"WY_Vest_snow_a",
			"WY_Vest_snow_b",
			"WY_Vest_snow_c",
			"WY_Vest_snow_tact_a",
			"WY_Vest_snow_tact_b",
			"WY_Vest_snow_tact_c",
			"V_Press_F",
			"V_Rangemaster_belt",
			"V_TacVest_blk",
			"V_TacVest_blk_POLICE",
			"V_TacVest_brn",
			"V_TacVest_camo",
			"V_TacVest_khk",
			"V_TacVest_oli",
			"V_TacVestCamo_khk",
			"V_TacVestIR_blk",
			"V_I_G_resistanceLeader_F",
			"V_BandollierB_blk",
			"V_BandollierB_cbr",
			"V_BandollierB_khk",
			"V_BandollierB_oli",
			"V_BandollierB_rgr",
			"V_Chestrig_blk",
			"V_Chestrig_khk",
			"V_Chestrig_oli",
			"V_Chestrig_rgr",
			"V_HarnessO_brn",
			"V_HarnessO_gry",
			"V_HarnessOGL_brn",
			"V_HarnessOGL_gry",
			"V_HarnessOSpec_brn",
			"V_HarnessOSpec_gry",
			"V_PlateCarrier1_blk",
			"V_PlateCarrier1_rgr",
			"V_PlateCarrier2_rgr",
			"V_PlateCarrier3_rgr",
			"V_PlateCarrierGL_blk",
			"V_PlateCarrierGL_mtp",
			"V_PlateCarrierGL_rgr",
			"V_PlateCarrierH_CTRG",
			"V_PlateCarrierIA1_dgtl",
			"V_PlateCarrierIA2_dgtl",
			"V_PlateCarrierIAGL_dgtl",
			"V_PlateCarrierIAGL_oli",
			"V_PlateCarrierL_CTRG",
			"V_PlateCarrierSpec_blk",
			"V_PlateCarrierSpec_mtp",
			"V_PlateCarrierSpec_rgr",
			
			//nove 13.1.2018
			
			"CUP_V_RUS_6B3_1",
			"CUP_V_CDF_6B3_1_Green",
			"CUP_V_RUS_6B3_2",
			"CUP_V_RUS_6B3_4",
			"CUP_V_RUS_6B3_3",
			"CUP_V_CDF_6B3_3_Green",
			"CUP_V_B_GER_Vest_2",
			"CUP_V_B_GER_Vest_1",
			"CUP_V_I_RACS_Carrier_Vest_2",
			"CUP_V_I_RACS_Carrier_Vest",
			"CUP_V_I_RACS_Carrier_Vest_3",
			"CUP_V_B_GER_Carrier_Vest_2",
			"CUP_V_B_GER_Carrier_Vest",
			"CUP_V_B_GER_Carrier_Vest_3",
			"CUP_V_I_RACS_Carrier_Vest_wdl_2",
			"CUP_V_I_RACS_Carrier_Vest_wdl",
			"CUP_V_I_RACS_Carrier_Vest_wdl_3",
			"CUP_V_PMC_CIRAS_Black_Veh",
			"CUP_V_PMC_CIRAS_Black_Empty",
			"CUP_V_PMC_CIRAS_Black_Grenadier",
			"CUP_V_PMC_CIRAS_Black_Patrol",
			"CUP_V_PMC_CIRAS_Black_TL",
			"CUP_V_PMC_IOTV_Black_AR",
			"CUP_V_PMC_IOTV_Black_Empty",
			"CUP_V_PMC_IOTV_Black_Gren",
			"CUP_V_PMC_IOTV_Black_Patrol",
			"CUP_V_PMC_IOTV_Black_TL",
			"CUP_V_B_MTV_Pouches",
			"CUP_V_B_MTV_PistolBlack",
			"CUP_V_B_MTV",
			"CUP_V_B_MTV_Mine",
			"CUP_V_B_MTV_LegPouch",
			"CUP_V_B_MTV_Marksman",
			"CUP_V_B_MTV_MG",
			"CUP_V_B_MTV_Patrol",
			"CUP_V_B_MTV_TL",
			"CUP_V_BAF_Osprey_Mk2_DPM_Grenadier",
			"CUP_V_BAF_Osprey_Mk2_DPM_Medic",
			"CUP_V_BAF_Osprey_Mk2_DPM_Soldier2",
			"CUP_V_BAF_Osprey_Mk2_DPM_Soldier1",
			"CUP_V_BAF_Osprey_Mk4_MTP_Grenadier",
			"CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner",
			"CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader",
			"CUP_V_B_Delta_1",
			"CUP_V_B_Delta_2",
			"CUP_V_B_RRV_Medic",
			"CUP_V_B_RRV_Officer",
			"CUP_V_B_RRV_Scout",
			"CUP_V_B_RRV_Scout2",
			"CUP_V_B_RRV_Scout3"
		};
	};

	class Headgear 
	{
		name = "Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			
			"WY_Snow_Boonie_a",
			"WY_Snow_Boonie_b",
			"WY_Snow_Boonie_c",
			"WY_Snow_Boonie_d",
			"WY_Snow_Boonie_e",
			"WY_Snow_Boonie_f",
			"WY_Snow_Shemag_a",
			"WY_Snow_Shemag_b",
			"WY_Snow_Shemag_c",
			"WY_Snow_Shemag_d",
			"WY_Snow_Shemag_e",
			"WY_Snow_Shemag_f",
			"WY_Snow_PilotHelmetHeli_O",
			"WY_Snow_CrewtHelmetHeli_O",
			"WY_Snow_H_HelmetO_ocamo_a",
			"WY_Snow_H_HelmetO_ocamo_b",
			"WY_Snow_H_Watchcap_a",
			"WY_Snow_H_Watchcap_b",
			"Exile_Headgear_SantaHat",
			"Exile_Headgear_SafetyHelmet",
			"H_Cap_blk",
			"H_Cap_blk_Raven",
			"H_Cap_blu",
			"H_Cap_brn_SPECOPS",
			"H_Cap_grn",
			"H_Cap_headphones",
			"H_Cap_khaki_specops_UK",
			"H_Cap_oli",
			"H_Cap_press",
			"H_Cap_red",
			"H_Cap_tan",
			"H_Cap_tan_specops_US",
			"H_Cap_marshal",
			"H_Watchcap_blk",
			"H_Watchcap_camo",
			"H_Watchcap_khk",
			"H_Watchcap_sgg",
			"H_MilCap_blue",
			"H_MilCap_dgtl",
			"H_MilCap_mcamo",
			"H_MilCap_ocamo",
			"H_MilCap_oucamo",
			"H_MilCap_rucamo",
			"H_Bandanna_camo",
			"H_Bandanna_cbr",
			"H_Bandanna_gry",
			"H_Bandanna_khk",
			"H_Bandanna_khk_hs",
			"H_Bandanna_mcamo",
			"H_Bandanna_sgg",
			"H_Bandanna_surfer",
			"H_Booniehat_dgtl",
			"H_Booniehat_dirty",
			"H_Booniehat_grn",
			"H_Booniehat_indp",
			"H_Booniehat_khk",
			"H_Booniehat_khk_hs",
			"H_Booniehat_mcamo",
			"H_Booniehat_tan",
			"H_Hat_blue",
			"H_Hat_brown",
			"H_Hat_camo",
			"H_Hat_checker",
			"H_Hat_grey",
			"H_Hat_tan",
			"H_StrawHat",
			"H_StrawHat_dark",
			"H_Beret_02",
			"H_Beret_blk",
			"H_Beret_blk_POLICE",
			"H_Beret_brn_SF",
			"H_Beret_Colonel",
			"H_Beret_grn",
			"H_Beret_grn_SF",
			"H_Beret_ocamo",
			"H_Beret_red",
			"H_Shemag_khk",
			"H_Shemag_olive",
			"H_Shemag_olive_hs",
			"H_Shemag_tan",
			"H_ShemagOpen_khk",
			"H_ShemagOpen_tan",
			"H_TurbanO_blk",
			"H_HelmetB",
			"H_HelmetB_black",
			"H_HelmetB_camo",
			"H_HelmetB_desert",
			"H_HelmetB_grass",
			"H_HelmetB_light",
			"H_HelmetB_light_black",
			"H_HelmetB_light_desert",
			"H_HelmetB_light_grass",
			"H_HelmetB_light_sand",
			"H_HelmetB_light_snakeskin",
			"H_HelmetB_paint",
			"H_HelmetB_plain_blk",
			"H_HelmetB_sand",
			"H_HelmetB_snakeskin",
			"H_HelmetCrew_B",
			"H_HelmetCrew_I",
			"H_HelmetCrew_O",
			"H_HelmetIA",
			"H_HelmetIA_camo",
			"H_HelmetIA_net",
			"H_HelmetLeaderO_ocamo",
			"H_HelmetLeaderO_oucamo",
			"H_HelmetO_ocamo",
			"H_HelmetO_oucamo",
			"H_HelmetSpecB",
			"H_HelmetSpecB_blk",
			"H_HelmetSpecB_paint1",
			"H_HelmetSpecB_paint2",
			"H_HelmetSpecO_blk",
			"H_HelmetSpecO_ocamo",
			"H_CrewHelmetHeli_B",
			"H_CrewHelmetHeli_I",
			"H_CrewHelmetHeli_O",
			"H_HelmetCrew_I",
			"H_HelmetCrew_B",
			"H_HelmetCrew_O",
			"H_PilotHelmetHeli_B",
			"H_PilotHelmetHeli_I",
			"H_PilotHelmetHeli_O",
			
			//nové 25.2.2018 , 4.3.2018 , 12.3.2018
			"H_HelmetO_ghex_F",
			"H_HelmetB_tna_F",
			"H_HelmetB_Enh_tna_F",
			"H_HelmetSpecO_ghex_F",
			"H_HelmetB_TI_tna_F",
			
			"H_HelmetB_Light_tna_F",
			"H_HelmetCrew_O_ghex_F",
			
			"H_Helmet_Skate",
			"H_HelmetLeaderO_ghex_F"
		};
	};

class Glasses 
	{
		name = "Glasses";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\Goggles_ca.paa";
		items[] =
		{
			"WY_Snow_G_Combat_a",
			"WY_Snow_G_Combat_b",
			"WY_Snow_G_Combat_c",
			"WY_Snow_G_Balaclava_combat_a",
			"WY_Snow_G_Balaclava_combat_b",
			"WY_Snow_G_Balaclava_combat_c",
			"WY_Snow_G_Balaclava",
			"G_Spectacles",
			"G_Spectacles_Tinted",
			"G_Combat",
			"G_Lowprofile",
			"G_Shades_Black",
			"G_Shades_Green",
			"G_Shades_Red",
			"G_Squares",
			"G_Squares_Tinted",
			"G_Sport_BlackWhite",
			"G_Sport_Blackyellow",
			"G_Sport_Greenblack",
			"G_Sport_Checkered",
			"G_Sport_Red",
			"G_Tactical_Black",
			"G_Aviator",
			"G_Lady_Mirror",
			"G_Lady_Dark",
			"G_Lady_Red",
			"G_Lady_Blue",
			"G_Diving",
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving",
			"G_Goggles_VR",
			"G_Balaclava_blk",
			"G_Balaclava_oli",
			"G_Balaclava_combat",
			"G_Balaclava_lowprofile",
			"G_Bandanna_blk",
			"G_Bandanna_oli",
			"G_Bandanna_khk",
			"G_Bandanna_tan",
			"G_Bandanna_beast",
			"G_Bandanna_shades",
			"G_Bandanna_sport",
			"G_Bandanna_aviator",
			"G_Shades_Blue",
			"G_Sport_Blackred",
			"G_Tactical_Clear",
			"G_Balaclava_TI_blk_F",
			"G_Balaclava_TI_tna_F",
			"G_Balaclava_TI_G_blk_F",
			"G_Balaclava_TI_G_tna_F",
			"G_Combat_Goggles_tna_F"
		};
	};
	
	class Backpacks
	{
		name = "Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] = 
		{			
			"WY_Snow_Carryall_A",
			"WY_Snow_Carryall_B",
			"WY_Snow_Carryall_C",
			"WY_Snow_Carryall_D",
			"WY_Snow_Carryall_E",
			"WY_Snow_Carryall_F",
			"WY_Snow_AssoultPack_A",
			"WY_Snow_AssoultPack_B",
			"WY_Snow_AssoultPack_C",
			"WY_Snow_AssoultPack_D",
			"WY_Snow_AssoultPack_E",
			"B_AssaultPack_blk",
			"B_AssaultPack_cbr",
			"B_AssaultPack_dgtl",
			"B_AssaultPack_khk",
			"B_AssaultPack_mcamo",
			"B_AssaultPack_rgr",
			"B_AssaultPack_sgg",
			"B_Bergen_blk",
			"B_Bergen_mcamo",
			"B_Bergen_rgr",
			"B_Bergen_sgg",
			"B_Carryall_cbr",
			"B_Carryall_khk",
			"B_Carryall_mcamo",
			"B_Carryall_ocamo",
			"B_Carryall_oli",
			"B_Carryall_oucamo",
			"B_FieldPack_blk",
			"B_FieldPack_cbr",
			"B_FieldPack_ocamo",
			"B_FieldPack_oucamo",
			"B_HuntingBackpack",
			"B_Kitbag_cbr",
			"B_Kitbag_mcamo",
			"B_Kitbag_sgg",
			"B_OutdoorPack_blk",
			"B_OutdoorPack_blu",
			"B_OutdoorPack_tan",
			"B_TacticalPack_blk",
			"B_TacticalPack_mcamo",
			"B_TacticalPack_ocamo",
			"B_TacticalPack_oli",
			"B_TacticalPack_rgr",
			"B_Bergen_tna_F",
			"B_Bergen_dgtl_F",
			"B_Bergen_hex_F",
			"B_Bergen_mcamo_F",
			
			//nove 13.1.2018
			
			"B_ViperLightHarness_blk_F",
			"B_ViperLightHarness_hex_F",
			"B_ViperLightHarness_khk_F",
			"B_ViperLightHarness_oli_F",
			"B_ViperLightHarness_ghex_F",
			"B_ViperHarness_blk_F",
			"B_ViperHarness_hex_F",
			"B_ViperHarness_khk_F",
			"B_ViperHarness_oli_F",
			"B_ViperHarness_ghex_F"			
		};
	};
	
	class PointerAttachments 
	{
		name = "Pointer Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"acc_flashlight",
			"acc_pointer_IR"
		};
	};

	class BipodAttachments 
	{
		name = "Bipod Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] = 
		{
			"bipod_01_F_blk",
			"bipod_01_F_mtp",
			"bipod_01_F_snd",
			"bipod_02_F_blk",
			"bipod_02_F_hex",
			"bipod_02_F_tan",
			"bipod_03_F_blk",
			"bipod_03_F_oli"		
		};
	};

	class MuzzleAttachments 
	{
		name = "Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] = 
		{
			"muzzle_snds_338_black",
			"muzzle_snds_338_green",
			"muzzle_snds_338_sand",
			"muzzle_snds_93mmg",
			"muzzle_snds_93mmg_tan",
			"muzzle_snds_acp",
			"muzzle_snds_B",
			"muzzle_snds_H",
			"muzzle_snds_H_MG",
			"muzzle_snds_H_SW",
			"muzzle_snds_L",
			"muzzle_snds_M",
			"CUP_muzzle_PBS4",
            "CUP_muzzle_PB6P9",
            "CUP_muzzle_Bizon",
            "CUP_muzzle_snds_M110",
            "CUP_muzzle_snds_M14",
            "CUP_muzzle_snds_M9",
            "CUP_muzzle_snds_MicroUzi",
            "CUP_muzzle_snds_AWM",
            "CUP_muzzle_snds_G36_black",
            "CUP_muzzle_snds_G36_desert",
            "CUP_muzzle_snds_L85",
            "CUP_muzzle_snds_M16_camo",
            "CUP_muzzle_snds_M16",
            "CUP_muzzle_snds_SCAR_L",
            "CUP_muzzle_mfsup_SCAR_L",
            "CUP_muzzle_snds_SCAR_H",
            "CUP_muzzle_mfsup_SCAR_H",
            "CUP_muzzle_snds_XM8",
			
			//nové 25.2.2018 , 6.3.
			"muzzle_snds_B_khk_F",
			
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_65_TI_hex_F",
			"muzzle_snds_65_TI_ghex_F"
		};
	};

	class UAVs
	{
		name = "Unmanned Aerial Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
		items[] = 
		{
			//"I_UavTerminal",
			//"I_UAV_01_backpack_F"
		};
	};

	class StaticMGs
	{
		name = "Static Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"O_HMG_01_support_F",
			//"O_HMG_01_support_high_F", // Does not seem to work with HMG01, only the lower version does
			"O_HMG_01_weapon_F"
		};
	};

	class OpticAttachments 
	{
		name = "Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] = 
		{
			"optic_Aco",
			"optic_ACO_grn",
			"optic_ACO_grn_smg",
			"optic_Aco_smg",
			"optic_AMS",
			"optic_AMS_khk",
			"optic_AMS_snd",
			"optic_Arco",
			"optic_DMS",
			"optic_Hamr",
			"optic_Holosight",
			"optic_Holosight_smg",
			"optic_KHS_blk",
			"optic_KHS_hex",
			"optic_KHS_old",
			"optic_KHS_tan",
			"optic_LRPS",
			"optic_LRPS_tna_f",
			"optic_LRPS_ghex_f",
			"optic_MRCO",
			"optic_MRD",
			"optic_Nightstalker",
			"optic_NVS",
			"optic_SOS",
			"optic_Yorris",
			"CUP_optic_PSO_1",
            "CUP_optic_PSO_3",
            "CUP_optic_Kobra",
            "CUP_optic_NSPU",
            "CUP_optic_PechenegScope",
			"CUP_optic_LeupoldMk4",
            "CUP_optic_HoloBlack",
            "CUP_optic_HoloWdl",
            "CUP_optic_HoloDesert",
            "CUP_optic_Eotech533",
            "CUP_optic_CompM4",
            "CUP_optic_SUSAT",
            "CUP_optic_ACOG",
            "CUP_optic_Leupold_VX3",
            "CUP_optic_AN_PVS_10",
            "CUP_optic_CompM2_Black",
            "CUP_optic_CompM2_Woodland",
            "CUP_optic_CompM2_Woodland2",
            "CUP_optic_CompM2_Desert",
            "CUP_optic_RCO",
            "CUP_optic_RCO_desert",
            "CUP_optic_LeupoldM3LR",
            "CUP_optic_LeupoldMk4_10x40_LRT_Desert",
            "CUP_optic_LeupoldMk4_10x40_LRT_Woodland",
            "CUP_optic_ElcanM145",
            "CUP_optic_LeupoldMk4_CQ_T",
            "CUP_optic_ELCAN_SpecterDR",
            "CUP_optic_LeupoldMk4_MRT_tan",
            "CUP_optic_SB_11_4x20_PM",
            "CUP_optic_ZDDot",
            "CUP_optic_MRad",
            "CUP_optic_TrijiconRx01_desert",
            "CUP_optic_TrijiconRx01_black",
			
			//nové 25.2.2018
			"optic_SOS_khk_F"
		};
	};

	class Hardware 
	{
		name = "Hardware";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			
			"Exile_Item_DuctTape",
			"Exile_Item_ExtensionCord",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_JunkMetal",
			"Exile_Item_LightBulb",
			"Exile_Item_MetalBoard",
			"Exile_Item_MetalPole",
			"Exile_Item_SafeKit",
			"Exile_Item_SafeSmallKit",
			"Exile_Item_CamoTentKit",
			"Exile_Item_CodeLock",
			"Exile_Item_MetalScrews",
			"Exile_Item_MetalWire",
			"Exile_Item_Laptop",
			"Exile_Item_BaseCameraKit",
			"Exile_Item_MetalHedgehogKit",
			"Exile_Item_Cement",
			"Exile_Item_Sand",
			"Exile_Item_MobilePhone",
			"Exile_Item_Carwheel",
			"Exile_Item_Rope",
			"Exile_Item_WaterCanisterEmpty",
			"Exile_Magazine_Battery"
		};
	};

	
	class Concrete_Parts 
	{
		name = "Concrete Parts";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_ConcreteDoorwayKit",
			"Exile_Item_ConcreteFloorKit",
			"Exile_Item_ConcreteWallKit"
		};
	};
	
	
	
	
	class Food 
	{
		name = "Fast Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_EMRE",		
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_Surstromming",
			"Exile_Item_SausageGravy",
			"Exile_Item_Catfood",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_BBQSandwich",
			"Exile_Item_MacasCheese",
			"Exile_Item_Dogfood",
			"Exile_Item_BeefParts",
			"Exile_Item_Cheathas",
			"Exile_Item_Noodles",
			"Exile_Item_SeedAstics",
			"Exile_Item_Raisins",
			"Exile_Item_Moobar",
			"Exile_Item_InstantCoffee"
		};
	};

	class Drinks 
	{
		name = "Drinks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_PlasticBottleCoffee",
			"Exile_Item_PowerDrink",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_Beer",
			"Exile_Item_EnergyDrink",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_MountainDupe",
			"Exile_Item_PlasticBottleEmpty"
		};
	};

	class Tools
	{
		name = "Tools";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_Matches",
			"Exile_Item_CookingPot",
			"Exile_Item_CanOpener",
			"Exile_Item_Handsaw",
			"Exile_Item_Pliers",
			"Exile_Item_Grinder",
			"Exile_Item_Foolbox",
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_Hammer",
			"Exile_Item_OilCanister",
			"Exile_Item_Screwdriver",
			"Exile_melee_Shovel",
			"Exile_Item_Wrench",
			"Exile_Item_SleepingMat",	
			"Exile_Item_ToiletPaper",			
			"Exile_Item_ZipTie",
			"Binocular",
			"Rangefinder",
			/*
			"Laserdesignator",
			"Laserdesignator_02",
			"Laserdesignator_03",
			*/
			"NVGoggles",
			"NVGoggles_INDEP",
			"NVGoggles_OPFOR",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"H_PilotHelmetFighter_B",
			"ItemRadio",
			"ItemWatch",
			"Exile_Item_XM8",
			"WY_Snow_NVGoggles"
		};
	};

	class FirstAid
	{
		name = "FirstAid";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_InstaDoc",
			"Exile_Item_Bandage",
			"Exile_Item_Vishpirin",
			"Exile_Item_Heatpack",
			"Exile_Item_Defibrillator"
		};
	};

	class Navigation
	{
		name = "Special Environment";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"B_Parachute",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR",
			"Exile_Headgear_GasMask",
			"G_Diving",
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving"			
		};
	};

	class Ammunition
	{
		name = "Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\CargoMag_ca.paa";
		items[] = 
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"11Rnd_45ACP_Mag",
			"130Rnd_338_Mag",
			"150Rnd_762x51_Box",
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box_Tracer",
			"150Rnd_93x64_Mag",
			"16Rnd_9x21_Mag",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box_Tracer",
			"20Rnd_556x45_UW_mag",
			"20Rnd_762x51_Mag",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01_tracer_green",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Yellow_Mag",
			"30Rnd_9x21_Green_Mag",
			"30Rnd_9x21_Red_Mag",
			"5Rnd_127x108_Mag",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_GreenSignal_F",
			"6Rnd_RedSignal_F",
			"7Rnd_408_Mag",
			"9Rnd_45ACP_Mag",
			"Exile_Magazine_30Rnd_762x39_AK",
			"Exile_Magazine_30Rnd_545x39_AK_Green",
			"Exile_Magazine_30Rnd_545x39_AK_Red",
			"Exile_Magazine_30Rnd_545x39_AK_White",
			"Exile_Magazine_30Rnd_545x39_AK_Yellow",
			"Exile_Magazine_45Rnd_545x39_RPK_Green",
			"Exile_Magazine_75Rnd_545x39_RPK_Green",
			"Exile_Magazine_20Rnd_762x51_DMR",
			"Exile_Magazine_20Rnd_762x51_DMR_Yellow",
			"Exile_Magazine_20Rnd_762x51_DMR_Red",
			"Exile_Magazine_20Rnd_762x51_DMR_Green",
			"Exile_Magazine_10Rnd_303",
			"Exile_Magazine_100Rnd_762x54_PK_Green",
			"Exile_Magazine_7Rnd_45ACP",
			"Exile_Magazine_8Rnd_9x18",
			"Exile_Magazine_30Rnd_545x39_AK",
			"Exile_Magazine_6Rnd_45ACP",
			"Exile_Magazine_5Rnd_22LR",
			"Exile_Magazine_10Rnd_762x54",
			"Exile_Magazine_10Rnd_9x39",
			"Exile_Magazine_20Rnd_9x39",
			"Exile_Magazine_8Rnd_74Pellets",
			"Exile_Magazine_8Rnd_74Slug",
			"Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag",
			"Exile_Magazine_7Rnd_408_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_338_Bullet_Cam_Mag",
			"CUP_5Rnd_127x99_as50_M",		
			"CUP_15Rnd_9x19_M9",		
			"CUP_64Rnd_9x19_Bizon_M",     
			"CUP_30Rnd_9x19_EVO",              
			"CUP_20Rnd_762x51_FNFAL_M",        
			"CUP_5Rnd_127x108_KSVK_M",       
			"CUP_5Rnd_86x70_L115A1",			
			"CUP_10Rnd_127x99_M107",			    
			"CUP_20Rnd_762x51_B_M110",     
			"CUP_20Rnd_762x51_DMR",                 
			"CUP_30Rnd_556x45_Stanag",                
			"CUP_5Rnd_762x51_M24",     
			"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", 	
			"CUP_20Rnd_762x51_B_SCAR",	 
			"CUP_30Rnd_9x19_MP5",
			"CUP_20Rnd_556x45_Stanag",
			"5Rnd_127x108_APDS_Mag",
			"CUP_30Rnd_556x45_G36",
			"CUP_20Rnd_B_AA12_Pellets",
            "CUP_20Rnd_B_AA12_74Slug", 
            "CUP_20Rnd_B_AA12_HE",
            "CUP_8Rnd_B_Beneli_74Slug",
            "CUP_8Rnd_B_Saiga12_74Slug_M",
            "CUP_8Rnd_9x18_Makarov_M",
            "CUP_8Rnd_9x18_MakarovSD_M",
            "CUP_15Rnd_9x19_M9",
            "CUP_18Rnd_9x19_Phantom",
            "CUP_6Rnd_45ACP_M",
            "CUP_17Rnd_9x19_glock17",
            "CUP_7Rnd_45ACP_1911",
            "CUP_10Rnd_9x19_Compact",
            "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
            "CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
            "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249",
            "CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
            "CUP_100Rnd_TE4_Green_Tracer_556x45_M249",
            "CUP_100Rnd_TE4_Red_Tracer_556x45_M249",
            "CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249",
            "CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1",
            "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1",
            "CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1",
            "CUP_50Rnd_UK59_762x54R_Tracer",
            "CUP_64Rnd_9x19_Bizon_M",
            "CUP_64Rnd_Green_Tracer_9x19_Bizon_M",
            "CUP_64Rnd_Red_Tracer_9x19_Bizon_M",
            "CUP_64Rnd_White_Tracer_9x19_Bizon_M",
            "CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M",
            "CUP_30Rnd_9x19_EVO",
            "CUP_30Rnd_9x19_UZI",
            "CUP_30Rnd_9x19_MP5",
            "CUP_20Rnd_B_765x17_Ball_M",
            "CUP_5Rnd_127x99_as50_M",
            "CUP_5Rnd_86x70_L115A1",
            "CUP_10Rnd_762x51_CZ750_Tracer",
            "CUP_10Rnd_762x51_CZ750",
            "CUP_10x_303_M",
            "CUP_5Rnd_762x51_M24",
            "CUP_10Rnd_127x99_m107",
            "CUP_20Rnd_762x51_B_M110",
            "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110",
            "CUP_20Rnd_TE1_Red_Tracer_762x51_M110",
            "CUP_20Rnd_TE1_Green_Tracer_762x51_M110",
            "CUP_20Rnd_TE1_White_Tracer_762x51_M110",
            "CUP_10Rnd_762x54_SVD_M",
            "CUP_10Rnd_9x39_SP5_VSS_M",
            "CUP_20Rnd_9x39_SP5_VSS_M",
            "CUP_5x_22_LR_17_HMR_M",        
            "CUP_30Rnd_545x39_AK_M",
            "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",
            "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",
            "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M",
            "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M",
            "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_556x45_Stanag",
            "CUP_30Rnd_556x45_G36",
            "CUP_30Rnd_TE1_Red_Tracer_556x45_G36",
            "CUP_30Rnd_TE1_Green_Tracer_556x45_G36",
            "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36",
            "CUP_100Rnd_556x45_BetaCMag",
            "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag",
            "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag",
            "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag",
            "CUP_20Rnd_556x45_Stanag",
            "CUP_20Rnd_762x51_CZ805B",
            "CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B",
            "CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B",
            "CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B",
            "CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B",
            "CUP_20Rnd_762x51_DMR",
            "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR",
            "CUP_20Rnd_TE1_Red_Tracer_762x51_DMR",
            "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR",
            "CUP_20Rnd_TE1_White_Tracer_762x51_DMR",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_30Rnd_Sa58_M_TracerG",
            "CUP_30Rnd_Sa58_M_TracerR",
            "CUP_30Rnd_Sa58_M_TracerY",
            "CUP_30Rnd_Sa58_M",
            "CUP_20Rnd_762x51_B_SCAR",
            "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR",
            "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR",
            "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR",
            "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR",
			
			//nove 13.1.02018 , 25.2.2018 , 4.3.2018 , 6.3.
			
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_Tracer_F",
			"20Rnd_650x39_Cased_Mag_F",
			"10Rnd_50BW_Mag_F",
			"CUP_20Rnd_762x51_L129_M",
			"Exile_Magazine_10Rnd_127x99_m107",
			"Exile_Magazine_5Rnd_127x108_APDS_KSVK",
			"Exile_Magazine_5Rnd_127x108_KSVK",
			"Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag",
			"Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag",
			
			"Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag",
			"CUP_20Rnd_TE1_White_Tracer_762x51_SCAR",
			
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_Green_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Tracer_Green_F",
			
			"200Rnd_556x45_Box_Tracer_Red_F",
			"200Rnd_556x45_Box_Tracer_F",
			"16Rnd_9x21_red_Mag",
			"16Rnd_9x21_yellow_Mag",
			"16Rnd_9x21_green_Mag"
		};
	};

	class Flares 
	{
		name = "Flares";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Chemlight_blue",
			"Chemlight_green",
			"Chemlight_red",
			"FlareGreen_F",
			"FlareRed_F",
			"FlareWhite_F",
			"FlareYellow_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareWhite_F",
			"UGL_FlareYellow_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareYellow_F"
		};
	};

	class Smokes 
	{
		name = "Smokes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellYellow",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell"
		};
	};	

	class Explosives
	{
		name = "Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] = 
		{
			"HandGrenade",
			"MiniGrenade",
			"B_IR_Grenade",
			"O_IR_Grenade",
			"I_IR_Grenade",
			"1Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"APERSBoundingMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSTripMine_Wire_Mag",
			"ClaymoreDirectionalMine_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"IEDLandBig_Remote_Mag",
			"IEDLandSmall_Remote_Mag",
			"IEDUrbanBig_Remote_Mag",
			"IEDUrbanSmall_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"SLAMDirectionalMine_Wire_Mag",
			"ATMine_Range_Mag"
		};
	};

	class Pistols 
	{
		name = "Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] = 
		{
			"hgun_ACPC2_F",
			"hgun_P07_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_Pistol_Signal_F",
			"hgun_Rook40_F",
			"Exile_Weapon_Colt1911",
			"Exile_Weapon_Makarov",
			"Exile_Weapon_Taurus",
			"Exile_Weapon_TaurusGold",
			"CUP_hgun_Colt1911",
            "CUP_hgun_Compact",
            "CUP_hgun_Glock17",
			"CUP_hgun_M9",
            "CUP_hgun_Makarov",
            "CUP_hgun_PB6P9",
            "CUP_hgun_MicroUzi",
            "CUP_hgun_SA61",
            "CUP_hgun_Duty",
            "CUP_hgun_Phantom"		
		};
	};

	class SubMachineGuns 
	{
		name = "Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"hgun_PDW2000_F",
			"SMG_01_F",
			"SMG_02_F",
			"SMG_05_F",
			"CUP_smg_bizon",
            "CUP_smg_EVO",
            "CUP_smg_MP5SD6",
			"CUP_smg_MP5A5"
		};
	};
	
	class WinterCAMO 
	{
		name = "WinterCAMO Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
		"WY_Snow_cheytac_m200_A",
		"WY_Snow_cheytac_m200_B",
		"WY_Snow_Rahim_a",
		"WY_Snow_Rahim_b",
		"WY_Snow_Mar10_a",
		"WY_Snow_Mar10_b",
		"WY_Snow_MK_I_EMR_a",
		"WY_Snow_MK_I_EMR_b",
		"WY_Snow_MMG_01_a",
		"WY_Snow_MMG_01_b",
		"WY_Snow_LMG_Zafir_F_a",
		"WY_Snow_LMG_Zafir_F_b",
		"WY_Snow_MX_F_a",
		"WY_Snow_MX_F_b",
		"WY_Snow_MXM_F_a",
		"WY_Snow_GM6_F_a",
		"WY_Snow_GM6_F_b"
		};
	};
	class CSAT_WINTER_weapons 
	{
		name = "CSAT Winter Weapons";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
		"IP_srifle_DMR_04_SnowHex_F",
		"IP_srifle_DMR_05_SnowHex_F",
		"IP_srifle_DMR_03_SnowHex_F"
		};
	};
	

	class LightMachineGuns 
	{
		name = "Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MX_SW_Black_F",
			"arifle_MX_SW_F",
			"LMG_Mk200_F",
			"LMG_Zafir_F",
			"LMG_03_F",
			"Exile_Weapon_RPK",
			"Exile_Weapon_PK",
			"Exile_Weapon_PKP",
			"MMG_01_hex_F",
			"MMG_01_tan_F",
			"MMG_02_black_F",
			"MMG_02_camo_F",
			"MMG_02_sand_F",
			"CUP_lmg_M240",
            "CUP_lmg_M249",
            "CUP_lmg_M249_para",
            "CUP_lmg_Mk48_wdl",
			"CUP_lmg_Mk48_des",
     		"CUP_lmg_L7A2",
			"CUP_lmg_L110A1",
			"CUP_lmg_minimi",
			"CUP_lmg_minimi_railed",
			"CUP_lmg_minimipara",
			"CUP_lmg_m249_pip4",
			
			//nove 13.1.2018
			
			"arifle_CTARS_blk_F",
			"arifle_CTARS_hex_F",
			"arifle_CTARS_ghex_F",
			"srifle_DMR_07_blk_F",
			"srifle_DMR_07_hex_F",
			"srifle_DMR_07_ghex_F"
		};
	};

	class AssaultRifles
	{
		name = "Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_Katiba_C_F",
			"arifle_Katiba_F",
			"arifle_Katiba_GL_F",
			"arifle_Mk20_F",
			"arifle_Mk20_GL_F",
			"arifle_Mk20_GL_plain_F",
			"arifle_Mk20_plain_F",
			"arifle_Mk20C_F",
			"arifle_Mk20C_plain_F",
			"arifle_MX_Black_F",
			"arifle_MX_F",
			"arifle_MX_GL_Black_F",
			"arifle_MX_GL_F",
			"arifle_MXC_Black_F",
			"arifle_MXC_F",
			"arifle_SDAR_F",
			"arifle_TRG20_F",
			"arifle_TRG21_F",
			"arifle_TRG21_GL_F",
			"Exile_Weapon_AK107",
			"Exile_Weapon_AK107_GL",
			"Exile_Weapon_AK74",
			"Exile_Weapon_AK74_GL",
			"Exile_Weapon_AK47",
			"Exile_Weapon_AKS_Gold",
			"CUP_arifle_AK107",
			"CUP_arifle_AK107_GL",
			"CUP_arifle_AK47",
			"CUP_arifle_AK74",
			"CUP_arifle_AK74_GL",
			"CUP_arifle_AK74M",
			"CUP_arifle_AK74M_GL",
			"CUP_arifle_AKM",
			"CUP_arifle_AKS",
			"CUP_arifle_CZ805_A1",
			"CUP_arifle_CZ805_GL",
			"CUP_arifle_CZ805_A2",
			"CUP_arifle_CZ805_B",
			"CUP_arifle_CZ805_B_GL",
			"CUP_arifle_FNFAL",
			"CUP_arifle_FNFAL_railed",
			"CUP_arifle_FNFAL5061",
			"CUP_arifle_FNFAL5062",
			"CUP_arifle_G36A",
			"CUP_arifle_G36C",
			"CUP_arifle_G36K",
			"CUP_arifle_G36A_camo",
			"CUP_arifle_G36C_camo",
			"CUP_arifle_G36K_camo",
			"CUP_arifle_L85A2",
			"CUP_arifle_L85A2_G",
			"CUP_arifle_L85A2_NG",
			"CUP_arifle_L85A2_GL",
			"CUP_arifle_L86A2",
			"CUP_arifle_M16A2",
			"CUP_arifle_M16A2_GL",
			"CUP_arifle_M16A4_Base",
			"CUP_arifle_M16A4_GL",
			"CUP_arifle_M4A1",
			"CUP_arifle_M4A1_black",
			"CUP_arifle_M4A1_BUIS_GL",
			"CUP_arifle_M4A1_BUIS_camo_GL",
			"CUP_arifle_M4A3_desert",
			"CUP_arifle_Mk16_CQC_black",
			"CUP_arifle_Mk16_CQC_FG_black",
			"CUP_arifle_Mk16_CQC_SFG_black",
			"CUP_arifle_Mk16_CQC_EGLM",
			"CUP_arifle_Mk16_CQC_EGLM_woodland",
			"CUP_arifle_Mk16_STD",
			"CUP_arifle_Mk17_CQC_Black",
			"CUP_arifle_Mk17_CQC_FG_black",
			"CUP_arifle_Mk17_STD_EGLM_black",
			"CUP_arifle_Mk17_STD_EGLM_woodland",
			"CUP_arifle_Mk17_STD_black",
			"CUP_arifle_Sa58P",
			"CUP_arifle_Sa58V",
			"CUP_arifle_Sa58RIS1",
			"CUP_arifle_Sa58RIS2",
			"CUP_arifle_Sa58RIS2_gl",
			"CUP_arifle_xm8_SAW",
			"CUP_arifle_XM8_Carbine_FG",
			"CUP_arifle_XM8_Compact_Rail",
			"CUP_arifle_XM8_Compact",
			"CUP_arifle_XM8_Carbine_GL",
			"CUP_arifle_XM8_Railed",
			"CUP_arifle_XM8_Carbine",
			"CUP_arifle_L86A2",
			"CUP_arifle_MG36",
			"CUP_arifle_MG36_camo",
			"CUP_arifle_RPK74_45",
			"CUP_arifle_RPK74",

			//nove 13.1.2018 , 4.3.2018 , 12.3.2018
			
			"arifle_SPAR_01_blk_F",
			"arifle_SPAR_01_khk_F",
			"arifle_SPAR_01_snd_F",
			"arifle_SPAR_01_GL_blk_F",
			"arifle_SPAR_01_GL_khk_F",
			"arifle_SPAR_01_GL_snd_F",
			"arifle_SPAR_02_blk_F",
			"arifle_SPAR_02_khk_F",
			"arifle_SPAR_02_snd_F",
			"arifle_SPAR_03_blk_F",
			"arifle_SPAR_03_khk_F",
			"arifle_SPAR_03_snd_F",
			"arifle_CTAR_blk_F",
			"arifle_CTAR_hex_F",
			"arifle_CTAR_ghex_F",
			"arifle_CTAR_GL_blk_F",
			"arifle_CTAR_GL_hex_F",
			"arifle_CTAR_GL_ghex_F",
			"arifle_ARX_blk_F",
			"arifle_ARX_hex_F",
			"arifle_ARX_ghex_F",
			"CUP_srifle_L129A1",
			"CUP_srifle_L129A1_HG",
			
			"arifle_AK12_F",
			
			"arifle_MX_khk_F"
		};
	};
	
	class Shotguns
	{
		name = "Shotguns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			
			"CUP_sgun_AA12",                                      
			"CUP_sgun_M1014",                                   
			"CUP_sgun_Saiga12K"                                   
		};
	};

	class SniperRifles
	{
		name = "Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MXM_Black_F",
			"arifle_MXM_F",
			"srifle_DMR_01_F",
			"srifle_DMR_02_camo_F",
			"srifle_DMR_02_F",
			"srifle_DMR_02_sniper_F",
			"srifle_DMR_03_F",
			"srifle_DMR_03_khaki_F",
			"srifle_DMR_03_multicam_F",
			"srifle_DMR_03_tan_F",
			"srifle_DMR_03_woodland_F",
			"srifle_DMR_04_F",
			"srifle_DMR_04_Tan_F",
			"srifle_DMR_05_blk_F",
			"srifle_DMR_05_hex_F",
			"srifle_DMR_05_tan_f",
			"srifle_DMR_06_camo_F",
			"srifle_DMR_06_olive_F",
			"srifle_EBR_F",
			"srifle_GM6_ghex_F",
			"srifle_GM6_camo_F",
			"srifle_GM6_F",
			"srifle_LRR_camo_F",
			"srifle_LRR_tna_F",
			"srifle_LRR_F",
			"Exile_Weapon_CZ550",
			"Exile_Weapon_SVD",
			"Exile_Weapon_SVDCamo",
			"Exile_Weapon_VSSVintorez",
			"Exile_Weapon_DMR",
			"Exile_Weapon_LeeEnfield",
			"CUP_srifle_AS50_SBPMII",
            "CUP_srifle_AWM_des",
            "CUP_srifle_AWM_wdl",
            "CUP_srifle_CZ750",
            "CUP_srifle_DMR",
            "CUP_srifle_CZ550",
            "CUP_srifle_M14",
            "CUP_srifle_Mk12SPR",
            "CUP_srifle_M24_des",
            "CUP_srifle_M24_wdl",
            "CUP_srifle_M24_ghillie",
            "CUP_srifle_M40A3",
            "CUP_srifle_M107_Base",
            "CUP_srifle_M110",
            "CUP_srifle_SVD",
            "CUP_srifle_ksvk",
			"exile_weapon_m107"
		};
	};

	class Bikes
	{
		name = "Bikes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Bike_OldBike",
			"Exile_Bike_MountainBike"
		};
	};

	class Cars
	{
		name = "Cars";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
		  "Exile_Bike_QuadBike_Black",
		  "Exile_Bike_QuadBike_Blue",
		  "Exile_Bike_QuadBike_Red",
		  "Exile_Car_Golf_Red",
		  "Exile_Car_Golf_Black",
		  "Exile_Car_Golf_Red",
		  "Exile_Car_Golf_Black",
		  "Exile_Car_Ural_Open_Military",
		  "Exile_Car_Ural_Covered_Military",
		  //"Exile_Car_SUVXL_Black",
		  //"Exile_Car_Tractor_Red",
		  //"Exile_Car_OldTractor_Red",
		  //"Exile_Car_TowTractor_White",
		  "Exile_Car_Octavius_White",
		  "Exile_Car_Octavius_Black",
		  //"Exile_Car_UAZ_Green",
		  //"Exile_Car_UAZ_Open_Green",
		  //"Exile_Car_LandRover_Red",
		  //"Exile_Car_LandRover_Urban",
		  //"Exile_Car_LandRover_Green",
		  //"Exile_Car_LandRover_Sand",
		  //"Exile_Car_LandRover_Desert",
		  //"Exile_Car_LandRover_Ambulance_Green",
		  //"Exile_Car_LandRover_Ambulance_Desert",
		  //"Exile_Car_LandRover_Ambulance_Sand",
		  "Exile_Car_Lada_Green",
		  "Exile_Car_Lada_Taxi",
		  "Exile_Car_Lada_White",
		  "Exile_Car_Lada_Hipster",
		  "Exile_Car_Volha_Blue",
		  "Exile_Car_Volha_White",
		  "Exile_Car_Volha_Black",
		  "Exile_Car_Hunter",
		  "Exile_Car_Ifrit",
		  "Exile_Car_Offroad_Red",
		  "Exile_Car_Offroad_Beige",
		  "Exile_Car_Offroad_Blue",
		  "Exile_Car_Offroad_DarkRed",
		  "Exile_Car_Offroad_BlueCustom",
		  "Exile_Car_Offroad_Guerilla01",
		  "Exile_Car_Offroad_Rusty1",
		  "Exile_Car_Offroad_Armed_Guerilla01",
		  "Exile_Car_Offroad_Armed_Guerilla02",
		  //"Exile_Car_Offroad_Repair_Civillian",
		  //"Exile_Car_Offroad_Repair_Red",
		  //"Exile_Car_Offroad_Repair_Beige",
		  //"Exile_Car_Offroad_Repair_DarkRed",
		  //"Exile_Car_Offroad_Repair_BlueCustom",
		  //"Exile_Car_Offroad_Repair_Guerilla01",
		  //"Exile_Car_Offroad_Repair_Guerilla02",
		  "Exile_Car_Strider",
		  "Exile_Car_SUV_Red",
		  "Exile_Car_SUV_Black",
		  "Exile_Car_SUV_Grey",
		  "Exile_Car_SUV_Orange",
		  //"Exile_Car_SUV_Armed_Black",
		  "Exile_Car_BRDM2_HQ",
		  "Exile_Car_BTR40_MG_Green",
		  "Exile_Car_BTR40_MG_Camo",
		  "Exile_Car_BTR40_Green",
		  "Exile_Car_BTR40_Camo",
		  "Exile_Car_HMMWV_M134_Green",
		  "Exile_Car_HMMWV_M134_Desert",
		  "Exile_Car_HMMWV_M2_Green",
		  "Exile_Car_HMMWV_M2_Desert",
		  "Exile_Car_HMMWV_MEV_Green",
		  "Exile_Car_HMMWV_MEV_Desert",
		  "Exile_Car_HMMWV_UNA_Green",
		  "Exile_Car_HMMWV_UNA_Desert",
		  "Exile_Car_QilinUnarmed",
		  
		  //"I_MRAP_03_hmg_F", (ifrit,strider,hunter s TK)
		  //"I_MRAP_03_gmg_F",
		  //"O_MRAP_02_hmg_F",
		  //"O_MRAP_02_gmg_F",
		  //"B_T_MRAP_01_gmg_F",
		  //"B_T_MRAP_01_hmg_F",
		  
		  		  
		  //Winter
		  "WY_Snow_Offroad_A",
		  "WY_Snow_Offroad_B",
		  "WY_Snow_Offroad_C",
		  "WY_Snow_Offroad_armed_D",
		  "WY_Snow_Offroad_F",
		  "WY_Snow_Quadbike_F_A",
	      "WY_Snow_Quadbike_F_B",
		  "WY_Snow_Quadbike_F_C",
		  "WY_Snow_Quadbike_F_D",
		  "WY_Snow_Quadbike_F_E",
		  "WY_Snow_Quadbike_F_F",
		  "WY_Snow_B_MRAP_01_F_A",
		  "WY_Snow_B_MRAP_01_F_C",
		  "WY_Snow_B_MRAP_01_F_D",
		  "WY_Snow_B_Truck_01_mover_F_E",
		  "WY_Snow_B_Truck_01_mover_F_F",
		  "WY_Snow_I_Truck_02_transport_F_E",
		  "WY_Snow_I_Truck_02_transport_F_F",
		  "WY_Snow_O_MRAP_02_base_F_a",
		  "WY_Snow_I_mrap_03_F_A",
		  "WY_Snow_I_mrap_03_F_B"
		  };
	};

	class Trucks
	{
		name = "Trucks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Car_Van_Black",
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Van_Fuel_Black",
			"Exile_Car_Van_Guerilla01",
			"Exile_Car_Van_Box_Guerilla01",
			"Exile_Car_Van_Fuel_Guerilla01",
			//"I_Truck_02_fuel_F",
			"Exile_Car_Zamak",
			"O_Truck_02_covered_F",
			"Exile_Car_Ural_Open_Worker",
			"Exile_Car_Ural_Covered_Worker",
			"CUP_B_T810_Unarmed_CZ_WDL",
			"Exile_Car_Tempest",
			"Exile_Car_HEMMT",
			"Exile_Car_Ikarus_Blue"
			//"Exile_Car_V3S_Open",
			//"Exile_Car_V3S_Covered"
			
		};
	};

	class Choppers
	{
		name = "Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Chopper_Huey_Green",
			"Exile_Chopper_Huey_Armed_Green",
			"Exile_Chopper_Huey_Desert",
			"Exile_Chopper_Huey_Armed_Desert",
			"Exile_Chopper_Huron_Black",
			"Exile_Chopper_Orca_CSAT",
			"Exile_Chopper_Orca_Black",
			"Exile_Chopper_Taru_Transport_CSAT",
			"Exile_Chopper_Taru_Transport_Black",
			"Exile_Chopper_Taru_CSAT",
			"Exile_Chopper_Taru_Black",
			"Exile_Chopper_Taru_Covered_CSAT",
			"Exile_Chopper_Taru_Covered_Black",
			"Exile_Chopper_Hummingbird_Green",
			"Exile_Chopper_Hummingbird_Civillian_Wasp",
			"Exile_Chopper_Mohawk_FIA",
			"Exile_Chopper_Hellcat_Green",
			//"O_Heli_Light_02_F",
			//"B_Heli_Light_01_armed_F",
			"B_Heli_Transport_01_F",
			"B_Heli_Transport_01_camo_F",
			//"ADK_Mozzie_Unarmed",
			
			//"CUP_B_MH60L_DAP_4x_US",
			//"CUP_B_MH60L_DAP_2x_US",
			//"CUP_B_Mi171Sh_ACR",
			//"CUP_B_AW159_GB",
			//"CUP_B_AW159_RN_Blackcat",
			
			//"CUP_O_Mi24_Mk4_AT_CSAT_T",
			//"CUP_B_AH1Z_Dynamic_USMC",
			//"CUP_O_Ka60_Grey_RU",
			//"CUP_B_AH64D_DL_USA",
			//"CUP_O_Ka50_DL_RU",
			//"CUP_O_Mi24_V_Dynamic_RU",
			//"CUP_O_Mi24_P_Dynamic_RU",
			
			//nové27.2.2018 , 6.3.
			"CUP_B_SA330_Puma_HC1_BAF",
			"CUP_B_SA330_Puma_HC2_BAF",
			
			"CUP_I_Ka60_Blk_ION",
			"CUP_I_Ka60_Digi_AAF",
			"CUP_O_Ka60_Grey_RU",
			"CUP_O_Ka60_Hex_CSAT",
			
			//winter
			"WY_Snow_B_Heli_Light_01_F_A",
			"WY_Snow_B_Heli_Light_01_F_B",
			"WY_Snow_B_Heli_Light_01_F_C",
			"WY_Snow_B_Heli_Transport_01_F_A",
			"WY_Snow_B_Heli_Transport_01_F_B",
			"WY_Snow_B_Heli_Transport_01_F_C",
			"WY_Snow_B_Heli_Transport_03_F_A",
			"WY_Snow_B_Heli_Transport_03_F_B",
			"WY_Snow_B_Heli_Transport_03_F_C",
			"WY_Snow_I_Heli_light_03_unarmed_F_a",
			"WY_Snow_O_Heli_Light_02_unarmed_F_a",
			"WY_Snow_O_Heli_Light_02_unarmed_F_b"			
			
		};
	};

	class Boats
	{
		name = "Boats";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey",
			"Exile_Boat_WaterScooter",
			"Exile_Boat_RHIB",
			"B_SDV_01_F"
		};
	};

	class Planes
	{
		name = "Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			
			"Exile_Plane_AN2_Green",
			//"Exile_Plane_Ceasar",
			"Exile_Plane_BlackfishInfantry",
			"Exile_Plane_BlackfishVehicle"
		};
	};

	class Diving 
	{
		name = "Diving";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit"
		};
	};

class Launcher 
	{
		name = "Launcher";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
         "CUP_launch_Igla",                              
         //"CUP_launch_MAAWS",                            
         "CUP_launch_RPG7V",
		 
		 "CUP_launch_M136",
		 "CUP_launch_Mk153Mod0",
		 //"CUP_launch_Mk153Mod0_SMAWOptics",
		 "CUP_launch_FIM92Stinger",
		 //"CUP_launch_Metis",
		 //"CUP_launch_NLAW",
		 
		 "CUP_glaunch_mk13"  //grenade launcher 
		 
        };
    };

    class Launcher_Ammo 
    {
        name = "Launcher_Ammo";
        icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
        items[] = 
        {  
         "CUP_Igla_M",                           
         //"CUP_MAAWS_HEAT_M",                         
         "CUP_PG7V_M",

		 "CUP_M136_M",
		 "CUP_SMAW_HEAA_M",
		 "CUP_SMAW_HEDP_M",
		 //"CUP_AT13_M",
		 "CUP_Stinger_M",
		 //"CUP_NLAW_M",
		 
		 // grenade lancher ammo
		 "CUP_6Rnd_HE_M203",
		 "CUP_6Rnd_FlareWhite_M203",
		 "CUP_6Rnd_FlareGreen_M203",
		 "CUP_6Rnd_FlareRed_M203",
		 "CUP_6Rnd_FlareYellow_M203",
		 "CUP_6Rnd_Smoke_M203",
		 "CUP_6Rnd_SmokeRed_M203",
		 "CUP_6Rnd_SmokeGreen_M203",
		 "CUP_6Rnd_SmokeYellow_M203",
		 "CUP_1Rnd_HE_M203",
		 "CUP_1Rnd_HEDP_M203",
		 "CUP_6Rnd_Smoke_M203",
		 "CUP_6Rnd_SmokeRed_M203",
		 "CUP_6Rnd_SmokeGreen_M203",
		 "CUP_6Rnd_SmokeYellow_M203"
					
		};
	};
	



    class CUP_wheel_vehicle
	{
		name = "CUP_wheel_vehicle";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
         "CUP_I_Ural_UN",                          
         "CUP_I_Datsun_PK",                          
         "CUP_B_LR_Special_M2_GB_W",                  
         "CUP_B_RG31_M2_OD_USMC",                          
         "CUP_B_Ridgback_LMG_GB_W",               
         "CUP_B_Ridgback_HMG_GB_W",                      	 
         "CUP_I_UAZ_MG_UN",	                  
         "CUP_B_HMMWV_M2_GPK_USA",    
         "CUP_B_HMMWV_M2_GPK_NATO_T",		 
         "CUP_B_HMMWV_Crows_M2_USA",	               
         "CUP_I_SUV_Armored_ION",                
         "CUP_I_UAZ_Open_UN",                      
         "CUP_I_UAZ_Unarmed_UN",               
         "CUP_O_UAZ_Militia_SLA",               
         "CUP_I_LR_Transport_RACS",                           
         "CUP_I_LR_Transport_AAF",                
         "CUP_I_LR_Ambulance_RACS",	                  
         "CUP_I_LR_Ambulance_AAF",                          
         "CUP_I_V3S_Covered_TKG",                              
         "CUP_O_V3S_Open_TKM",                     
         "CUP_B_M1030",                           
         "CUP_C_Golf4_camo_Civ",           
         "CUP_C_SUV_TK",                   
         "CUP_C_Datsun_Covered",	                          
         "CUP_C_Datsun_4seat",	                      
         "CUP_C_Skoda_Blue_CIV",	                         
         "CUP_B_HMMWV_Ambulance_USMC",	                      
         "CUP_B_HMMWV_Unarmed_USMC",	                         
         "CUP_B_MTVR_Refuel_USMC",	                   
         "CUP_O_V3S_Refuel_TKM",	                        
         "CUP_B_MTVR_USMC",	                        
         "CUP_O_V3S_Covered_TKM",	                          
         "CUP_I_V3S_Open_TKG",	                       
         "CUP_B_MTVR_Ammo_USMC",	
         "CUP_B_T810_Reammo_CZ_WDL",
         "CUP_B_T810_Refuel_CZ_WDL",
         "CUP_B_T810_Repair_CZ_WDL",		 
         "CUP_I_Ural_Reammo_UN",
		 "CUP_B_BAF_Coyote_L2A1_W",
		 "CUP_B_Mastiff_LMG_GB_D",
		 "CUP_B_Mastiff_LMG_GB_W",
		 "CUP_C_S1203_CIV",
		 "CUP_C_Skoda_White_CIV",
		 "CUP_C_S1203_Militia_CIV",
		 "CUP_B_FV432_Bulldog_GB_D",
		 "CUP_B_FV432_Bulldog_GB_W",
		 "CUP_BAF_Jackal2_L2A1_D",
  	     "CUP_BAF_Jackal2_L2A1_W",
		 //"HMMWV_M2_GPK_1",
		 "B_CTRG_LSV_01_light_F",
		 "B_T_LSV_01_unarmed_F",
		 "O_T_LSV_02_unarmed_F",
		 "O_T_LSV_02_armed_F",
		 
		 //nové 27.2.2018
		 "B_Truck_01_box_F",
		 "B_Truck_01_covered_F"
		

		 //"CUP_B_M1133_MEV_Woodland",
		 //"CUP_B_LAV25_HQ_USMC",
		 //"CUP_B_Dingo_GL_CZ_Wdl",
		 //"CUP_B_Dingo_GL_CZ_Des",
		 //"B_APC_Wheeled_01_cannon_F",
		 //"CUP_B_UAZ_SPG9_CDF"
		 
		};
	};

	class CUP_tracked_vehicle
	{
		name = "CUP_tracked_vehicle";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
         "CUP_I_M113_UN",
         "CUP_I_M113_AAF",
         "CUP_I_M113_Med_AAF",
         "CUP_I_M113_Med_UN",
		 "CUP_B_AAV_Unarmed_USMC",
         "CUP_O_BMP2_AMB_CSAT_T",
         "CUP_I_BMP2_AMB_UN",
         "CUP_O_BTR90_HQ_RU",                       
         "CUP_O_GAZ_Vodnik_MedEvac_RU",               
         "CUP_O_GAZ_Vodnik_PK_RU"       
		};
	};
	class ExtendedBaseMod

	{
		name = "ExtendedBaseMod";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
		"Land_HBarrier_1_F_Kit",
		"Land_HBarrier_3_F_Kit",
		"Land_HBarrier_5_F_Kit",
		"Land_BagBunker_Tower_F_Kit",
	
		///////////////////////// V0.0.2
		"Land_CncBarrier_F_Kit",
		"Land_Stone_4m_F_Kit",
		"Land_Stone_Gate_F_Kit",
		//"PierLadder_F_Kit",
		"Land_WaterCooler_01_new_F_Kit",
		///////////////////////// V0.0.3
		"Land_Pallet_MilBoxes_F_Kit",
		//"Land_Cargo20_military_green_F_Kit",
		"Land_BagFence_Corner_F_Kit",
		"Land_BagFence_Long_F_Kit",
		"Land_HBarrierTower_F_Kit",
		"Land_Metal_wooden_rack_F_Kit",
		"Land_BagBunker_Small_F_Kit",
		//"Land_Bunker_F_Kit",
		"Land_HBarrierWall_corner_F_Kit",
		"Land_HBarrierWall6_F_Kit",
		"Land_HBarrierWall4_F_Kit",
		"Land_RampConcrete_F_Kit",
		///////////////////////// V0.0.4
		"Land_Wall_IndCnc_4_F_Kit",
		"Land_City2_4m_F_Kit",
		"Land_City2_8m_F_Kit",
		"Land_HelipadCivil_F_Kit",
		"Land_Rack_F_Kit",
		///////////////////////// V0.1.0
		"Land_City_Gate_F_Kit",
		"Land_BarGate_F_Kit",
		"Land_Icebox_F_Kit",
		"Land_Sign_WarningMilitaryArea_F_Kit",
		"Land_Mil_WallBig_4m_F_Kit",
		//"Land_Cargo_Patrol_V2_F_Kit",
		///////////////////////// V0.1.1
		//"Land_Pier_small_F_Kit",
		"Land_Wall_Tin_4_Kit",
		///////////////////////// V0.1.2
		//"Land_Tank_rust_F_Kit",
		"Land_ShelvesMetal_F_Kit",
		//"Land_Cargo_Tower_V2_F_Kit",
		//"Land_FuelStation_Feed_F_Kit",
		"Land_BagBunker_Large_F_Kit",
		"ShootingPos_F_Kit",
		///////////////////////// V0.1.3
		"Land_cargo_house_slum_F_Kit",
		//"Land_Cargo40_light_green_F_Kit",
		//"Land_Cargo_House_V2_F_Kit",
		"Land_LampHalogen_F_Kit",
		///////////////////////// V0.1.4
		"Land_LampAirport_F_Kit",
		"Land_CncShelter_F_Kit",
		"Land_Wall_IndCnc_2deco_F_Kit",
		"Land_CncWall4_F_Kit",
		"Land_FuelStation_Shed_F_Kit",
		"Land_Shed_Small_F_Kit",		
		"Land_Razorwire_F_Kit",
		///////////////////////// V0.1.5
		"Land_u_Addon_01_V1_F_Kit", //brokenshed
		//"Land_Cargo20_sand_F_Kit",
		"Land_GH_Stairs_F_Kit",
		"Land_i_Garage_V2_F_Kit",
		"Land_GH_Platform_F_Kit",
		"Land_TentDome_F_Kit",
		//"Land_TentHangar_V1_F_Kit",
		///////////////////////// V0.1.6
		"Land_CncWall1_F_Kit",
		"Land_CncBarrierMedium_F_Kit",
		"Land_Crash_barrier_F_Kit",
		"Land_Shed_Big_F_Kit",
		"Land_TouristShelter_01_F_Kit",
		"Land_Water_source_F_Kit",
		"Land_Sign_WarningMilitaryVehicles_F_Kit",
		"Land_Sign_WarningMilAreaSmall_F_Kit",
		"Land_Concrete_SmallWall_8m_F_Kit",
		"Land_Concrete_SmallWall_4m_F_Kit",
		///////////////////////// V0.1.7
		//"Land_PortableLight_double_F_Kit",
		//"Land_Radar_Small_F_Kit",
		//"Land_Cargo_addon02_V2_F_Kit", //Slumplane
		"Land_TableDesk_F_Kit",
		"Land_ToiletBox_F_Kit",
		//"Land_Pier_Box_F_Kit",
		///////////////////////// V0.1.8
		"Land_ChairWood_F_Kit",
		"BlockConcrete_F_Kit",
		//"Land_CargoBox_V1_F_Kit",
		"Land_IndFnc_3_F_Kit",
		"Land_IndFnc_9_F_Kit",
		"Land_Sea_Wall_F_Kit",
		"Land_i_Addon_03_V1_F_Kit",
		"Land_i_Addon_03mid_V1_F_Kit",
		"Land_LampStreet_F_Kit",
		"Exile_Item_BushKit_Green",
		///////////////////////// V0.1.9
		//"Land_Dome_Big_F_Kit",
		//"Land_Hangar_F_Kit",
		"Land_Metal_Shed_F_Kit",
		//"Land_spp_Tower_F_Kit",
		"Land_Sun_chair_F_Kit",
		"Land_Sunshade_04_F_Kit",
		"Land_LampShabby_F_Kit",
		///////////////////////// V0.2.0
		//"Land_Airport_Tower_F_Kit",
		//"Land_i_Barracks_V1_F_Kit",
		"Land_BeachBooth_01_F_Kit",
		//"Land_Castle_01_tower_F_Kit",
		"Land_Sign_WarningUnexplodedAmmo_F_Kit",
		//"Land_TTowerSmall_1_F_Kit",
		///////////////////////// V0.2.1 Hotfix
		///////////////////////// V0.2.2
		"Exile_Plant_GreenBush_Kit",
		//"Land_nav_pier_m_F_Kit",
		"Land_SharpStone_01_F_Kit",
		"Land_SharpStone_02_F_Kit",
		"Land_Sleeping_bag_F_Kit",
		"Land_Small_Stone_02_F_Kit",
		"Land_SolarPanel_2_F_Kit",
		"Land_spp_Panel_F_Kit",
		///////////////////////// V0.2.3
		"Land_CampingChair_V2_F_Kit",
		"Land_CampingChair_V1_F_Kit",
		"Land_Camping_Light_F_Kit",
		"Land_CampingTable_F_Kit",
		"Land_Pavement_narrow_F_Kit",
		"Land_Pavement_narrow_corner_F_Kit",
		"Land_Pavement_wide_F_Kit",
		"Land_Pavement_wide_corner_F_Kit",
		///////////////////////// V0.2.4
		//"Exile_ConcreteMixer_Kit",
		"Land_GarbageContainer_closed_F_Kit",
		"Land_Metal_rack_F_Kit",
		"Land_Sink_F_Kit",
		///////////////////////// V0.2.5
		//"Land_Atm_02_F_Kit",
		///////////////////////// V0.2.6
		//"Land_PillboxBunker_01_big_F_Kit",
		"Land_BagBunker_01_small_green_F_Kit",
		//"Land_PillboxBunker_01_rectangle_F_Kit",
		//"Land_PillboxBunker_01_hex_F_Kit",
		//"Land_PillboxWall_01_3m_F_Kit",
		//"Land_PillboxWall_01_6m_F_Kit",
		//"Land_Airport_01_controlTower_F_Kit",
		"Land_HBarrier_01_line_3_green_F_Kit",
		"Land_HBarrier_01_line_5_green_F_Kit",
		"Land_HBarrier_01_tower_green_F_Kit", //name changed
		//"Land_trench_01_forest_F_Kit",
		//"Land_trench_01_grass_F_Kit",
		//"Land_GarageShelter_01_F_Kit", //V0.2.7
		"Land_HBarrier_01_big_tower_green_F_Kit",//V0.2.8
		"Land_Bagbunker_01_large_green_F_Kit",//V0.2.8
		"Land_Bagfence_01_short_green_F_Kit",//V0.2.8
		"Land_Bagfence_01_long_green_F_Kit",//V0.2.8
		//"Land_PetroglyphWall_02_F_Kit",//V0.2.8
		//"Land_PetroglyphWall_01_F_Kit",//V0.2.8
		"Land_IRMaskingCover_02_F_Kit",//V0.2.8
		"Land_IRMaskingCover_01_F_Kit",//V0.2.8
		//"Land_Breakwater_02_F_Kit",//V0.2.8
		//"Land_Breakwater_01_F_Kit",//V0.2.8
		//"Land_BasaltWall_01_gate_F_Kit",//V0.2.8
		//"Land_BasaltWall_01_8m_F_Kit",//V0.2.8
		//"Land_BasaltWall_01_4m_F_Kit",//V0.2.8
		//"Land_Ammobox_rounds_F_Kit",//V0.2.8
		//"Land_Airport_01_hangar_F_Kit",//V0.2.8
		///////////////////////// V0.2.7
		//"Land_i_House_Small_03_V1_F_Kit",//Bungalow
		//"Land_i_House_Big_01_V2_F_Kit",
		"Land_PlasticCase_01_medium_F_Kit"
		//"Land_Research_HQ_F_Kit",
		//"Land_Research_house_V1_F_Kit",
		///////////////////////// V0.2.8 - Some Apex buildings
		//"Land_Suitcase_F_Kit",
		//"B_Slingload_01_fuel_F_Kit",
		//"B_Slingload_01_Ammo_F_Kit"
		};
	};
	
	class CUP_Helicopters
	{
		name = "CUP_Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
         "CUP_B_UH1Y_GUNSHIP_USMC",                      
         "CUP_B_UH1Y_MEV_USMC",                       
         "CUP_I_UH60L_Unarmed_FFV_MEV_Racs",				
         "CUP_I_UH60L_Unarmed_RACS",					  
         "CUP_B_UH60L_Unarmed_US", 					 
         "CUP_B_CH47F_USA", 					     
         "CUP_B_CH47F_GB", 					       
         "CUP_B_Merlin_HC3A_Armed_GB",              
         "CUP_I_Mi17_UN",                               
         "CUP_O_Mi17_TK",                           
         "CUP_O_Mi8_SLA_1",                                
         "CUP_O_Mi8_medevac_RU",                            
         "CUP_O_Mi8_medevac_CHDKZ",                           
         "CUP_B_CH53E_USMC",                           
         "CUP_B_MV22_USMC",                             
         "CUP_B_Mi171Sh_Unarmed_ACR",                        
         "CUP_B_UH1Y_MEV_USMC",                              
         "CUP_B_UH60L_US",                             
         "CUP_I_UH60L_RACS",                             
         //"CUP_O_Mi8_SLA_2",
		 //"B_Heli_Attack_01_F", 
		 "CUP_B_MI6T_CDF",
		 "CUP_B_MH60S_USMC",         
         //"CUP_O_mi8_RU",   
         "CUP_C_Mi17_Civilian_RU", 		 
         "CUP_B_MH60S_USMC"
		 
		
		 //"CUP_B_MH60L_DAP_4x_US",
		 //"CUP_B_MH60L_DAP_2x_US",
		 //"CUP_B_Mi171Sh_ACR",
		 //"CUP_B_AW159_GB",
		 //"CUP_B_AW159_RN_Blackcat"
		};
	};
		class CUP_Planes
	{
		name = "CUP_Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
        "CUP_B_C130J_Cargo_GB",
        "CUP_I_C130J_RACS",
        "CUP_C_B737_CIV",
        "CUP_C_AN2_AIRTAK_TK_CIV",                                          
        "CUP_C_C47_CIV"
		};
	};
};

class CfgTraders
{
	/**
	 * Weapons, scopes, silencers, ammo
	 */
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
		"PointerAttachments",
		"BipodAttachments",
		"MuzzleAttachments",
		"OpticAttachments",
		"Ammunition",
		"Pistols",
		"Shotguns",
		"SubMachineGuns",
		"LightMachineGuns",
		"AssaultRifles",
		"SniperRifles",
		"WinterCAMO",
		"CSAT_WINTER_weapons"
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] = 
		{
			"Flares",
			"Smokes",
			"UAVs",
			"StaticMGs",
			"Explosives",
			"Navigation",
			"Launcher",
			"Launcher_Ammo"
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{	
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Headgear",
			"Glasses",
			"Uniforms",
			"Vests",
			"Backpacks",
			"FirstAid",
			"CSAT_WINTER_equipment"
		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Food",
			"Drinks"
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
		class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware",
			"Tools",
			"ExtendedBaseMod",
			"Concrete_parts"
                        
		};
	};
	
		
	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Cars",
			"Trucks",
			"CUP_tracked_vehicle",
			"CUP_wheel_vehicle"
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Choppers", 
			"CUP_Helicopters",
			"Planes",
			"CUP_Planes"
		};
	};

	/**
	 * Sells ships and boats
	 */ 
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats"
		};
	};

	class Exile_Trader_Diving
	{
		name = "DIVERS";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Diving"
		};
	};

	/**
	 * Sells Community Items
	 */ 
	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community"
		};
	};

	class Exile_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community2"
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community3"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community5"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community7"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	};
};
class CfgTrading 
{
	/*
	* This factor defines the difference between sales/purchase price of
	* items and vehicles. It is used if there is no sales price defined
	* in CfgExileArsenal. 
	*/
	sellPriceFactor = 0.5;
	
	rekeyPriceFactor = 0.1;

	class requiredRespect 
	{
		Level1 = 0;
		Level2 = 5000;
		Level3 = 10000;
		Level4 = 15000;
		Level5 = 20000;
		Level6 = 25000;
	};
};
class CfgVehicleCustoms
{
	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Bike_QuadBike_Blue",		100, "Blue",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"};},
			{"Exile_Bike_QuadBike_Red",			100, "Red",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"};},
			{"Exile_Bike_QuadBike_White",		100, "White",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"};},
			{"Exile_Bike_QuadBike_Nato",		150, "NATO",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"};},
			{"Exile_Bike_QuadBike_Csat",		150, "CSAT",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"};},
			{"Exile_Bike_QuadBike_Fia",			150, "FIA",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"};},
			{"Exile_Bike_QuadBike_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"};},
			{"Exile_Bike_QuadBike_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"};},
			{"Exile_Bike_QuadBike_Black",		100, "Black",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"};},
			{"Exile_Bike_QuadBike_Black",		100, "Hex",		{"\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_ghex_CO.paa","\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_wheel_ghex_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_MotorBoat_Police",		350, "Police", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"};},
			{"Exile_Boat_MotorBoat_Orange",		300, "Orange", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"};},
			{"Exile_Boat_MotorBoat_White",		300, "White",  {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_RubberDuck_CSAT",		200, "CSAT", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"};},
			{"Exile_Boat_RubberDuck_Digital",	200, "Digital",{"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"};},
			{"Exile_Boat_RubberDuck_Orange",	150, "Orange", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"};},
			{"Exile_Boat_RubberDuck_Blue",		150, "Blue", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"};},
			{"Exile_Boat_RubberDuck_Black",		150, "Black", {"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_SDV_CSAT",		200, "CSAT", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"};},
			{"Exile_Boat_SDV_Digital",	200, "Digital", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"};},
			{"Exile_Boat_SDV_Grey",		100, "Grey", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hellcat_Green", 350, "Green", 	{"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"};},
			{"Exile_Chopper_Hellcat_FIA", 	500, "FIA", 	{"\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Karts
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Kart_BluKing", 				100, "Bluking", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_RedStone", 			100, "RedStone", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},
			{"Exile_Car_Kart_Vrana", 				100, "Vrana", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Green", 				100, "Green", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Blue", 				100, "Blue", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Orange", 				100, "Orange",		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_White", 				100, "White", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Yellow", 				100, "Yellow", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Black", 				100, "Black", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};}	
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hummingbird_Civillian_Blue", 		350, "Blue", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Red", 		350, "Red", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_ION", 		350, "ION", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_BlueLine", 	350, "BlueLine", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Digital", 	350, "Digital", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Elliptical", 	350, "Elliptical", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Furious", 	350, "Furious", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_GrayWatcher", 350, "GrayWatcher",	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Jeans", 		350, "Jeans", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Light", 		350, "Light", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Shadow", 		350, "Shadow", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Sheriff", 	350, "Sheriff", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Speedy", 		350, "Speedy", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Sunset", 		350, "Sunset", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Vrana", 		350, "Vrana", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Wasp", 		350, "Wasp", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Wave", 		350, "Wave", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huron_Black", 	450, "Black", {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};},
			{"Exile_Chopper_Huron_Green", 	450, "Green", {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Orca_CSAT", 		350, "CSAT", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"};},
			{"Exile_Chopper_Orca_Black", 		350, "Black", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};},
			{"Exile_Chopper_Orca_BlackCustom", 	350, "Black Custom", 	{"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_CSAT",		500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};},
			{"Exile_Chopper_Taru_Black",	500, "BLACK", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Transport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Transport_CSAT",	500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};},
			{"Exile_Chopper_Taru_Transport_Black",	500, "Black", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Covered_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Covered_CSAT",		500, "CSAT",	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"};},
			{"Exile_Chopper_Taru_Covered_Black",	500, "Black",	{"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Hatchback_Rusty1", 			50, "Rusty White",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_01_co.paa"};},
			{"Exile_Car_Hatchback_Rusty2", 			50, "Rusty Red",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_02_co.paa"};},
			{"Exile_Car_Hatchback_Rusty3", 			50, "Rusty Yellow",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_03_co.paa"};},
			{"Exile_Car_Hatchback_Beige", 			100, "Beige",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Hatchback_Green", 			100, "Green",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Hatchback_Blue", 			100, "Blue",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Hatchback_BlueCustom", 		100, "Blue Custom",		{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Hatchback_BeigeCustom", 	100, "Beige Custom",	{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Hatchback_Yellow", 			100, "Yellow",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"};},
			{"Exile_Car_Hatchback_Grey", 			100, "Grey",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"};},
			{"Exile_Car_Hatchback_Black", 			100, "Black",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"};},
			{"Exile_Car_Hatchback_Dark", 			100, "Dark",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Hatchback_Sport_Red", 		100, "Red",		{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Blue", 		100, "Blue",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Orange", 	100, "Orange",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_White", 	100, "White",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Beige", 	100, "Beige",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Green", 	100, "Green",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Rusty1", 		50, "Rusty White",	{"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"};},
			{"Exile_Car_Offroad_Rusty2", 		50, "Rusty Red",	{"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"};},
			{"Exile_Car_Offroad_Rusty3", 		50, "Rusty Blue",	{"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"};},
			{"Exile_Car_Offroad_Red", 			500, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"Exile_Car_Offroad_Beige", 		500, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Offroad_White", 		500, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Offroad_Blue", 			500, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Offroad_DarkRed", 		500, "Dark Red",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Offroad_BlueCustom", 	500, "Blue Custom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla01", 	700, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla02", 	700, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla03", 	700, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla04", 	700, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla05", 	700, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla06", 	700, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla07", 	700, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla08", 	700, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla09", 	700, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla10", 	700, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla11", 	700, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla12", 	700, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Black", {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Light Blue", {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Orange",{"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Pink",	{"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile White",	{"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Yellow",{"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_LandRover_Red", 250, "Red", {"Exile_psycho_LRC\data\r_lr_base_co.paa","Exile_psycho_LRC\data\r_lr_special_co.paa"};},
			{"Exile_Car_LandRover_Urban", 250, "Urban", {"Exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa","Exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"};},
			{"Exile_Car_LandRover_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};},
			{"Exile_Car_LandRover_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};},
			{"Exile_Car_LandRover_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover (Ambulance)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Ambulance_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_LandRover_Ambulance_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};},
			{"Exile_Car_LandRover_Ambulance_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};},
			{"Exile_Car_LandRover_Ambulance_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Octavius
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Octavius_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Octavius_White", 250, "White", {"exile_psycho_Octavia\Data\car_body_co.paa"};},
			{"Exile_Car_Octavius_Black", 250, "Black", {"exile_psycho_Octavia\Data\car_body_bl_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huey_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};},
			{"Exile_Chopper_Huey_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Armed_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huey_Armed_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};},
			{"Exile_Chopper_Huey_Armed_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Armed_Guerilla01",	250, "Guerilla 01", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla02",	250, "Guerilla 02", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla03",	250, "Guerilla 03", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla04",	250, "Guerilla 04", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla05",	250, "Guerilla 05", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla06",	250, "Guerilla 06", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla07",	250, "Guerilla 07", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla08",	250, "Guerilla 08", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla09",	250, "Guerilla 09", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla10",	250, "Guerilla 10", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla11",	250, "Guerilla 11", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla12",	250, "Guerilla 12", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Repair_Civillian",		150, "Civillian",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Red",			150, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Beige",			150, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Offroad_Repair_White",			150, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Blue",			150, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Offroad_Repair_DarkRed",		150, "DarkRed",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Offroad_Repair_BlueCustom",		150, "BlueCustom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla01",		250, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla02",		250, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla03",		250, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla04",		250, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla05",		250, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla06",		250, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla07",		250, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla08",		250, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla09",		250, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla10",		250, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla11",		250, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla12",		250, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUV_Red", 		100, "Red",					{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Black",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"};},
			{"Exile_Car_SUV_Grey", 		100, "Grey",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"};},
			{"Exile_Car_SUV_Orange", 	100, "Orange",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Snow Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Snow_co.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Light_co.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo (Dark)",	{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Dark_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV XL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUVXL_Black", 100, "Black", {""};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Red",			100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};},
			{"Exile_Car_Van_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};},
			{"Exile_Car_Van_Guerilla03",	150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};},
			{"Exile_Car_Van_Guerilla04",	150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};},
			{"Exile_Car_Van_Guerilla05",	150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};},
			{"Exile_Car_Van_Guerilla06",	150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};},
			{"Exile_Car_Van_Guerilla07",	150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};},
			{"Exile_Car_Van_Guerilla08",	150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};},
			{"Exile_Car_Van_Black",	150, "Brown",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"};},
			{"Exile_Car_Van_Black",	150, "Olive",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Box_Black",				100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_White",				100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla04",		150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla05",		150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla06",		150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla07",		150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla08",		150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Fuel_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Tempest
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Tempest", 		200, "Green Hex",	{"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ikarus_Blue", 		200, "Blue",	{"Exile_psycho_Ikarus\Data\bus_exterior_co.paa"};},
			{"Exile_Car_Ikarus_Red", 		200, "Red",		{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};},
			{"Exile_Car_Ikarus_Party", 		500, "Party",	{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Open_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\Ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Open_Yellow",			300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};},
			{"Exile_Car_Ural_Open_Worker",			300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Open_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Covered_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Covered_Yellow",		300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};},
			{"Exile_Car_Ural_Covered_Worker",		300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Covered_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Lada_Green", 		100, "Green",	{"exile_psycho_lada\data\lada_eciv1_co.paa","exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"};},
			{"Exile_Car_Lada_Taxi", 		100, "Taxi",	{"exile_psycho_lada\data\Lada_red_CO.paa"};},
			{"Exile_Car_Lada_Red", 			100, "Red",		{"exile_psycho_lada\data\Lada_red_CO.paa"};},
			{"Exile_Car_Lada_Hipster", 		100, "Hipster",	{"exile_psycho_lada\data\lada_eciv2_co.paa","exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Volha_Blue", 		100, "Blue",	{"Exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa"};},
			{"Exile_Car_Volha_White", 		100, "White",	{"Exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa"};},
			{"Exile_Car_Volha_Black",		100, "Black",	{"Exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// HUNTER
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_Hunter",		1000, "Exile White Edition",	{"exile_assets\texture\vehicle\Exile_Hunter_Snow_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Snow_Back_co.paa"};},
			{"Exile_Car_Hunter",		1000, "Exile Hex",				{"exile_assets\texture\vehicle\Exile_Hunter_Hex_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};},
			{"Exile_Car_Hunter",		1000, "Exile Black",			{"exile_assets\texture\vehicle\Exile_Hunter_Black_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// IFRIT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_Ifrit",		1000, "Green Hex",	{"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa","\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// HMMWV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HMMWV_M2_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_M2_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_M2_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_M134_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_M134_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_M134_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_MEV_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_MEV_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_cm.paa"};},
			{"Exile_Car_HMMWV_MEV_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_cm.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_UNA_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_UNA_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_UNA_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// BTR40
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BTR40_MG_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_BTR40_MG_Green",		1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"};},
			{"Exile_Car_BTR40_MG_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"};}
		};
	};
	
	class Exile_Car_BTR40_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_BTR40_Green",			1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"};},
			{"Exile_Car_BTR40_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Golf
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Golf_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_Golf_Red",				1000, "Red",	{"exile_psycho_VWGolf\data\vwgolf_body_co.paa"};},
			{"Exile_Car_Golf_Black",			1000, "Black",	{"exile_psycho_VWGolf\data\texture\black_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// AN-2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_AN2_Abstract
	{
		skins[] = 
		{
			{"Exile_Plane_AN2_Green", 700, "Green", {"Exile_psycho_An2\data\an2_1_co.paa","Exile_psycho_An2\data\an2_2_co.paa","Exile_psycho_An2\data\an2_wings_co.paa"};},
			{"Exile_Plane_AN2_White", 700, "Red, White & Blue", {"Exile_psycho_An2\data\an2_1_a_co.paa",
		"Exile_psycho_An2\data\an2_2_a_co.paa","Exile_psycho_An2\data\an2_wings_a_co.paa"};},
			{"Exile_Plane_AN2_Stripe", 700, "Green Stripe", {"Exile_psycho_An2\data\an2_1_b_co.paa","Exile_psycho_An2\data\an2_2_b_co.paa","Exile_psycho_An2\data\an2_wings_b_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// RHIB
	///////////////////////////////////////////////////////////////////////////////
	class B_G_Boat_Transport_02_F
	{
		skins[] = 
		{
			{"Exile_Boat_RHIB",		150, "Blue", {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Water Scooter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_WaterScooter_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_WaterScooter",		150, "Blue", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Grey", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Lime", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Red", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};},
			{"Exile_Boat_WaterScooter",		150, "White", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Yellow", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Ceasar BTT
	///////////////////////////////////////////////////////////////////////////////
	class C_Plane_Civil_01_F
	{
		skins[] = 
		{
			{"Exile_Plane_Ceasar",		150, "Racing (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Racing", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Red Line (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Tribal (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Tribal", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Blue Wave (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Blue Wave", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish (Infantry Transport)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_infantry_F
	{
		skins[] = 
		{
			{"Exile_Plane_BlackfishInfantry",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish (Vehicle Transport)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_vehicle_F
	{
		skins[] = 
		{
			{"Exile_Plane_BlackfishVehicle",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Light)
	///////////////////////////////////////////////////////////////////////////////
	class B_CTRG_LSV_01_light_F
	{
		skins[] = 
		{
			{"Exile_Car_ProwlerLight",		150, "Black", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"};},
			{"Exile_Car_ProwlerLight",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerLight",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_LSV_01_unarmed_black_F
	{
		skins[] = 
		{
			{"Exile_Car_ProwlerUnarmed",		150, "Olive", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerUnarmed",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerUnarmed",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Qilin (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class O_T_LSV_02_unarmed_black_F
	{
		skins[] = 
		{
			{"Exile_Car_QilinUnarmed",		150, "Arid", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"};},
			{"Exile_Car_QilinUnarmed",		150, "Green Hex", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// MB 4WD
	///////////////////////////////////////////////////////////////////////////////
	class C_Offroad_02_unarmed_orange_F
	{
		skins[] = 
		{
			{"Exile_Car_MB4WD",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"};},
			{"Exile_Car_MB4WD",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"};}
		};
	};
	
	class I_C_Offroad_02_unarmed_F
	{
		skins[] = 
		{
			{"Exile_Car_MB4WDOpen",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Orange", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};}
		};
	};
};
class CfgVehicleTransport 
{
	class Exile_Container_SupplyBox
	{
		vehicles[] = {"Exile_Car_Van_Abstract", "Exile_Car_Offroad_Abstract", "Exile_Car_Zamak_Abstract", "Exile_Car_HEMMT_Abstract", "Exile_Car_Tempest_Abstract"};

		class Exile_Car_Van_Abstract
		{
			attachPosition[] = {0, -1.1, 0.2};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0, -4.4};
		};

		class Exile_Car_Offroad_Abstract
		{
			attachPosition[] = {0, -1.6, 0.4};
			cargoIndizes[] = {1, 2, 3, 4}; 
			detachPosition[] = {0, -4};
		};

		class Exile_Car_Zamak_Abstract
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0.03, -4.8};
		};

		class Exile_Car_HEMMT_Abstract
		{
			attachPosition[] = {0.05, -0.1, 0.3};
			cargoIndizes[] = {1, 2, 8, 9}; 
			detachPosition[] = {0.05, -6.1};
		};

		class Exile_Car_Tempest_Abstract
		{
			attachPosition[] = {0.08, -0.85, 0.4};
			cargoIndizes[] = {1, 6, 7, 9}; 
			detachPosition[] = {0.08, -6};
		};
	};
};

class CfgVirtualGarage
{
	/*
		Enable or disable virtual garage on the server
		Options:
			0: Disable virtual garage
			1: Enable virtual garage
	*/
	enableVirtualGarage = 1;	
	
	/*
		Enables or disables the ability to access virtual garage while in combat
		Options:
			0: Players cannot access virtual garage while they are in combat
			1: Players can access virtual garage when they are in combat
	*/
	canAccessGarageInCombat = 0;
	
	/*
		When enabled, this will dump any items and money from the vehicle onto the ground where the car was.
		Options:
			0: Do not clear inventory and money
			1: Clear inventory and money
	*/
	clearInventoryOnStore = 1;
	
	/*
		The maximum number of vehicles that can be stored in the VG for that territory.
		Use -1 to disable the ability to store vehicles at that level.
		Make sure to have the same number of levels here as you do in CfgTerritories!
	*/
	numberOfVehicles[] = 
	{
		1,			// Level 1
		5, 			// Level 2 
		8, 			// Level 3
		11, 		// Level 4
		13, 		// Level 5
		15, 		// Level 6
		18, 		// Level 7
		21, 		// Level 8
		25, 		// Level 9
		28 			// Level 10
	};
	
	/*
		The allowed types of vehicles that can be stored in the garage	
		Available Types: "Car", "Tank", "Plane", "Air", "Ship", "Submarine"
	*/
	allowedVehicleTypes[] = {"Car","Tank","Plane","Air","Ship","Submarine"};
};

class CfgXM8 
{
	class settings
	{
		controlID = 4070;
		appID = "App01";
		title = "Settings";
	};
	
	class healthScanner
	{
		controlID = 4120;
		appID = "App02";
		title = "Health Scanner";
	};
	
	class slothMachine
	{
		controlID = 4140;
		appID = "App03";
		title = "Sloth Machine";
	};
};

/*
	XM8 Extra apps, the Exile way of doing it
	
	Here is an example app layout:
	class XM8_App01_Button: RscExileXM8AppButton1x1
	{
	    textureNoShortcut = "";  	// Path to picture. This can be via mission file or client side PBO
	    text = "";					// The name of the app to be display on the button
	    onButtonClick = "";			// The code to fire when the app is clicked
	    resource = "";				// The name of the resource to load for the app, leave as an empty string if you just want to run code without a GUI, like BOOM or spawning a bike
	};
*/

class XM8_App01_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_settings_ca.paa";
    text = "Settings";
    onButtonClick = "['settings', 0] call ExileClient_gui_xm8_slide";
    resource = "XM8SlideSettings";
};

class XM8_App02_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_health_scanner_ca.paa";
    text = "Health Scanner";
    onButtonClick = "['healthScanner', 0] call ExileClient_gui_xm8_slide";
    resource = "XM8SlideHealthScanner";
};

class XM8_App03_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_slothMachine_ca.paa";
    text = "Sloth Machine";
    onButtonClick = "['slothMachine', 0] call ExileClient_gui_xm8_slide";
    resource = "XM8SlideSlothMachine";
};

class XM8_App04_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_boom_ca.paa";
    text = "BOOM!";
    onButtonClick = "call ExileClient_system_breaching_detonate";
    resource = "";
};

class XM8_App05_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App06_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App07_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App08_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App09_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App10_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App11_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App12_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App13_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App14_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											   BELOW IS WHERE ALL THE XM8 APP RESOURCES CAN GO
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class XM8SlideSettings: RscExileXM8Slide 
{
	idc = 4070;
	class Controls 
	{
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4071;
			text = "GO BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};

		class 8GDropDown: RscExileXM8Combo
		{
			idc = 4072;
			x = (5 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_on8GSelectionChanged";
		};

		class 8GLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Show my device in global 8G network."; 
			x = (13 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class SoundDropDown: RscExileXM8Combo
		{
			idc = 4075;
			x = (5 - 3) * (0.025);
			y = (7 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onSoundSelectionChanged";
		};

		class SoundLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Play a beep sound on notifications."; 
			x = (13 - 3) * (0.025);
			y = (7 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyEspDropDown: RscExileXM8Combo
		{
			idc = 4076;
			x = (5 - 3) * (0.025);
			y = (9 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSelectionChanged";
		};

		class PartyEspLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Color of 3D party icons and name tags."; 
			x = (13 - 3) * (0.025);
			y = (9 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyEspSlider: RscExileXM8XSliderH
		{
			idc = 4078;
			x = (5 - 3) * (0.025);
			y = (11 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onSliderPosChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSliderChanged";
		};

		class PartyEspSliderLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Opacity of 3D party icons and name tags."; 
			x = (13 - 3) * (0.025);
			y = (11 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyMarkerSlider: RscExileXM8XSliderH
		{
			idc = 4079;
			x = (5 - 3) * (0.025);
			y = (13 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onSliderPosChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyMarkerSliderChanged";
		};

		class PartyMarkerSliderLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Opacity of 3D party markers."; 
			x = (13 - 3) * (0.025);
			y = (13 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class StreamModeDropDown: RscExileXM8Combo
		{
			idc = 4077;
			x = (5 - 3) * (0.025);
			y = (15 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onStreamModeSelectionChanged";
		};

		class StreamModeLabel: RscExileXM8Text
		{
			idc = -1;
			text = "Masquerade PIN codes. Perfect for streamers."; 
			x = (13 - 3) * (0.025);
			y = (15 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};
	};
};

class XM8SlideHealthScanner: RscExileXM8Slide
{
	idc = 4120;
	class Controls 
	{
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4122;
			text = "GO BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};

		class HealthInfoControlGroup: RscExileXM8ControlsGroupNoHScrollbars
		{
			idc = -1;
			x = (5 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 30 * (0.025);
			h = 15 * (0.04);
			colorBackground[] = {0,0,0,0.25};

			class controls
			{
				class HealthInfo: RscExileXM8StructuredText
				{
					idc = 4121;
					x = 0;
					y = 0;
					w = 29 * (0.025); // minus 1!
					h = 15 * (0.04);
				};
			};
		};
	};
};

class XM8SlideSlothMachine: RscExileXM8Slide
{
	idc = 4140;
	class Controls 
	{
		class Background: RscExileXM8PictureKeepAspect
		{
			idc = -1;
			text = "\exile_assets\texture\ui\slothMachine\xm8_slothMachineBackground.paa";
			x = -3.1 * (0.025) + (0);
			y = -6 * (0.04) + (0);
			w = 40 * (0.025);
			h = 33 * (0.04);
		};
		
		class XM8SlothMachineSpinButton: RscExileXM8PictureButton
		{
			idc = 4141;
			style = 0x30;
			x = 14.3 * (0.025) + (0);
			y = 15.9 * (0.04) + (0);
			w = 5.7 * (0.025);
			h = 2 * (0.04);
			text = "\exile_assets\texture\ui\slothMachine\button_off_ca.paa";
			action = "[] call ExileClient_gui_xm8_slide_slothMachine_event_onSpinButtonClick;";
		};
		
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4148;
			text = "GO BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			sizeEx = .9 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};
		
		class PopTabsLabel: RscExileXM8StructuredText
		{
			idc = 4142;
			text = "<t align='center'><t color='#e14141'><img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>";
			x = 6.5 * (0.025) + (0);
			y = 13 * (0.04) + (0);
			w = 6 * (0.025);
			h = 2 * (0.04);
		};
		
		class JackpotLabel: RscExileXM8StructuredText
		{
			idc = 4143;
			text = "<t align='center'><t color='#e14141'></t>";
			x = 14 * (0.025) + (0);
			y = 13 * (0.04) + (0);
			w = 6 * (0.025);
			h = 2 * (0.04);
		};
		
		class WinningsLabel: RscExileXM8StructuredText
		{
			idc = 4144;
			text = "<t align='center'><t color='#e14141'>0</t>";
			x = 21.5 * (0.025) + (0);
			y = 13 * (0.04) + (0);
			w = 6 * (0.025);
			h = 2 * (0.04);
		};
		
		class Symbol01: RscExileXM8PictureKeepAspect
		{
			idc = 4145;
			text = "";
			x = 6.55 * (0.025) + (0);
			y = 4 * (0.04) + (0);
			w = 5.83 * (0.025);
			h = 5 * (0.04);
		};
		
		class Symbol02: RscExileXM8PictureKeepAspect
		{
			idc = 4146;
			text = "";
			x = 14.1 * (0.025) + (0);
			y = 4 * (0.04) + (0);
			w = 5.83 * (0.025);
			h = 5 * (0.04);
		};
		
		class Symbol03: RscExileXM8PictureKeepAspect
		{
			idc = 4147;
			text = "";
			x = 21.6 * (0.025) + (0);
			y = 4 * (0.04) + (0);
			w = 5.83 * (0.025);
			h = 5 * (0.04);
		};
	};
};