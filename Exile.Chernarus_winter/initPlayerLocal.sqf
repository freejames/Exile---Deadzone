///////////////////////////////////////////////////////////////////////////////
// Static Objects
///////////////////////////////////////////////////////////////////////////////
#include "initServer.sqf"
[] execVM "addons\statusBar\statusBar.sqf";
if (!hasInterface || isServer) exitWith {};

///////////////////////////////////////////////////////////////////////////
// Stary Sobor Traders
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Vehicle",
	"Exile_Trader_Vehicle", 
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[6283.53,7836.63,0.00411987],
	159.107
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_VehicleCustoms",
	"Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[6297.5,7832.54,0],
	229.42
]
call ExileClient_object_trader_create;

_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 32.1428;     
_workBench setPosATL [6325.25, 7830.67, -0.170227];

_trader = 
[
    "Exile_Trader_Hardware",
	 "Exile_Trader_Hardware",
    "WhiteHead_11",
    ["InBaseMoves_sitHighUp1"],
    [0, 0, -0.5],
    170,
    _workBench
]
call ExileClient_object_trader_create;

_chair = "Land_CampingChair_V2_F" createVehicleLocal [0,0,0];
_chair setDir 305.084;
_chair setPosATL [6307.63, 7834.48, 0.00234985];

_trader = 
[
    "Exile_Trader_Armory",
	"Exile_Trader_Armory",
    "WhiteHead_11",
    ["InBaseMoves_SittingRifle1"],
    [0, -0.15, -0.45],
    180,
    _chair
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_SpecialOperations",
	"Exile_Trader_SpecialOperations",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[6309.6,7842.65,0.133179],
	83.8727
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_WasteDump",
	"Exile_Trader_WasteDump",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[6266.74,7779.61,0],
	282.656
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Food",
	"Exile_Trader_Food",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[6295.86,7811.01,0.0630493],
	31.6406
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Equipment",
	"Exile_Trader_Equipment",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[6308.98,7803.99,0.0460205],
	302.746
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Office",
	"Exile_Trader_Office",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[6305.76,7794.04,0.010437],
	302.243
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Myskyno trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Vehicle",
	"Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[1653.12,7774.89,0],
	223.676
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Hardware",
	"Exile_Trader_Hardware",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[1606.46,7802.51,0],
	138.049
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_WasteDump",
	"Exile_Trader_WasteDump",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[1604.86,7783.37,0],
	66.7483
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Food",
	"Exile_Trader_Food",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[1599.65,7798.95,0],
	92.0484
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Equipment",
	"Exile_Trader_Equipment",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[1634.32,7788.36,0],
	216.824
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Office",
	"Exile_Trader_Office",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[1641.27,7768.46,0],
	6.37294
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_VehicleCustoms",
	"Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[1649.78,7782.52,0.473389],
	217.351
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Armory",
	"Exile_Trader_Armory",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[1620.6,7771.13,0],
	1.19791
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_SpecialOperations",
	"Exile_Trader_SpecialOperations",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[1624.2,7795.21,0],
	197.274
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// NEAF - Aircraft Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Aircraft",
	"Exile_Trader_Aircraft",
    "WhiteHead_17",
    ["HubStandingUA_idle2"],
	[12076.8,12695.3,0],
	200.792
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_AircraftCustoms",
	"Exile_Trader_AircraftCustoms",
    "GreekHead_A3_07",
    ["HubStandingUC_idle1", "HubStandingUC_idle2", "HubStandingUC_idle3", "HubStandingUC_move1", "HubStandingUC_move2"],
	[12017.7,12656.4,0.0665283],
	20.6801
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_WasteDump",
	"Exile_Trader_WasteDump",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[12043.4,12650,0.611053],
	20.6801
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// VYBOR - Aircraft Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Aircraft",
	"Exile_Trader_Aircraft",
    "WhiteHead_17",
    ["HubStandingUA_idle2"],
	[4146.64,10819.4,0],
	20.792
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_AircraftCustoms",
	"Exile_Trader_AircraftCustoms",
    "GreekHead_A3_07",
    ["HubStandingUC_idle1", "HubStandingUC_idle2", "HubStandingUC_idle3", "HubStandingUC_move1", "HubStandingUC_move2"],
	[4141.3,10816.7,0],
	20.6801
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Klen Traders
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Vehicle",
	"Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[11483.6,11293.8,0.656738],
	317.813
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_VehicleCustoms",
	"Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[11478,11336.6,0.0116882],
	283.318
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Hardware",
	"Exile_Trader_Hardware",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[11488.8,11314,0.00283813],
	353.796
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Armory",
	"Exile_Trader_Armory",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[11493.5,11322,0.012207],
	179.504
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_SpecialOperations",
	"Exile_Trader_SpecialOperations",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[11508.6,11318.3,0],
	256.186
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_WasteDump",
	"Exile_Trader_WasteDump",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[11481.9,11300.3,0.563385],
	274.621
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Food",
	"Exile_Trader_Food",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[11484.9,11322,0.012207],
	176.195
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Equipment",
	"Exile_Trader_Equipment",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[11484,11314.6,0.00390625],
	356.691
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_Office",
	"Exile_Trader_Office",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[11497.2,11314.4,0.00198364],
	353.796
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Eastern Boat Trader
///////////////////////////////////////////////////////////////////////////

[
    "Exile_Trader_Boat",
	"Exile_Trader_Boat",
    "WhiteHead_17",
    ["AidlPercMstpSnonWnonDnon_G01"],
    [13625.5,6330.34,0],
	274.798
]
call ExileClient_object_trader_create;

_trader = 
[
    "Exile_Trader_WasteDump",
	"Exile_Trader_WasteDump",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
	[13616.8,6342.03,0.461071],
	182.978
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Sobor Guard 01
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_03",
	"",
    "WhiteHead_17",
    ["InBaseMoves_patrolling1"],
    [6336.71,7779.66,0],
    0
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Sobor Guard 02
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_02",
	"",
    "AfricanHead_03",
    ["InBaseMoves_patrolling1"],
    [6307.53,7824.15,0],
    171.763
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Sobor Guard 03
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_01",
	"",
    "WhiteHead_17",
    ["InBaseMoves_patrolling2"],
    [6233.12,7780.08,0],
    238.46
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Klen Guard 04
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_01",
	"",
    "WhiteHead_17",
    ["InBaseMoves_patrolling1"],
    [11481.3,11302.1,4.4599],
    330.368
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Myskyno Guard 05
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_02",
	"",
    "AfricanHead_03",
    ["InBaseMoves_patrolling1"],
    [1695.69,7731.71,0],
    253.624
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Air Guard 06
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_03",
	"",
    "WhiteHead_03",
    ["InBaseMoves_patrolling1"],
    [12044.9,12649.6,4.50923],
    16.5737
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Russian Roulette
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Trader_RussianRoulette",
    "",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],	
	[6322.97,7787.74,0],
	345.938
]
call ExileClient_object_trader_create;

[] spawn compile preprocessFileLineNumbers "addons\welcome\welcome.sqf";

waitUntil {!isNull findDisplay 46 && !isNil 'ExileClientLoadedIn' && getPlayerUID player != ''}; // wait until player is in spawned
uiSleep 1;


//uvitací obrazovka
waitUntil {!isNull findDisplay 46 && !isNil 'ExileClientLoadedIn' && getPlayerUID player != ''}; // wait until player is in spawned
uiSleep 1;

[] execVM "Custom\uvitaciobrazovka\uvitaciobrazovka.sqf";

//Snih
#include "Snow\fn_init.sqf"

waitUntil {time > 0};
enableEnvironment false;

// oznameni splatnosti trritory
waitUntil {!isNull findDisplay 46 && !isNil 'ExileClientLoadedIn' && getPlayerUID player != ''};
uiSleep 30;
execVM "splatnost_territory.sqf";