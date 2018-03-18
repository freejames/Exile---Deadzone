

/**
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 * Yb9IfG8VRNOOtggqvAUNp6I0hsfGvPYY/AfLZTU1Rxc=
 */

// Edited by Phate from easy-gaming.net
 
private["_sessionId","_parameters","_treeNetId","_tree","_isTree","_treeModelNames","_treeHeight","_newDamage","_treePosition","_spawnRadius","_weaponHolders","_weaponHolder","_weaponHolderPosition"];
_sessionId = _this select 0;
_parameters = _this select 1;
_treeNetId = _parameters select 0;

// Define Wood Drop Notify Text here
_woodText = "Wood dropped in your Area!";
_woodVehicleText = "Wood was put inside your Vehicle!";
_woodVehicleFullText = "Wood dropped in your Area! Vehicle is Full!";
// Define Wood Drop Notify Text here

_tree = objectFromNetId _treeNetId;
if (!isNull _tree) then
{
    _isTree = false;
    _treeModelNames = getArray(missionconfigFile >> "CfgInteractionModels" >> "WoodSource" >> "models");
    {
        if !(((str _tree) find _x) isEqualTo -1)exitWith {_isTree = true};
    }
    forEach _treeModelNames;
    if (_isTree) then 
    {
        if (alive _tree) then
        {
            _treeHeight = _tree call ExileClient_util_model_getHeight;
            _treeHeight = _treeHeight max 1; 
            _newDamage = ((damage _tree) + (1 / (floor _treeHeight) )) min 1;
            _tree setDamage _newDamage; 
            if (_newDamage isEqualTo 1) then
            {
                _tree setDamage 999; 
            };
            _nearestTruck = (getPosATL _tree) nearEntities[["Exile_Car_Van_Black","Exile_Car_Van_Box_Black","Exile_Car_Van_Fuel_Black","Exile_Car_Van_Guerilla01","Exile_Car_Van_Box_Guerilla01","Exile_Car_Van_Fuel_Guerilla01","I_Truck_02_fuel_F","Exile_Car_Zamak","O_Truck_02_covered_F","Exile_Car_Ural_Open_Worker","Exile_Car_Ural_Covered_Worker","Exile_Car_Tempest","Exile_Car_HEMMT","Exile_Car_Ikarus_Blue","Exile_Car_V3S_Open","Exile_Car_V3S_Covered","Exile_Bike_QuadBike_Black","Exile_Bike_QuadBike_Blue","Exile_Bike_QuadBike_Red","Exile_Car_Hatchback_Beige","Exile_Car_Hatchback_Green","Exile_Car_Hatchback_Blue","Exile_Car_Hatchback_Rusty1","Exile_Car_Golf_Red","Exile_Car_Golf_Black","Exile_Car_Golf_Red","Exile_Car_Golf_Black","Exile_Car_Ural_Open_Military","Exile_Car_Ural_Covered_Military","Exile_Car_SUVXL_Black","Exile_Car_Tractor_Red","Exile_Car_OldTractor_Red","Exile_Car_TowTractor_White","Exile_Car_Octavius_White","Exile_Car_Octavius_Black","Exile_Car_UAZ_Green","Exile_Car_UAZ_Open_Green","Exile_Car_LandRover_Red","Exile_Car_LandRover_Urban","Exile_Car_LandRover_Green","Exile_Car_LandRover_Sand","Exile_Car_LandRover_Desert","Exile_Car_LandRover_Ambulance_Green","Exile_Car_LandRover_Ambulance_Desert","Exile_Car_LandRover_Ambulance_Sand","Exile_Car_Lada_Green","Exile_Car_Lada_Taxi","Exile_Car_Lada_White","Exile_Car_Lada_Hipster","Exile_Car_Volha_Blue","Exile_Car_Volha_White","Exile_Car_Volha_Black","Exile_Car_Hatchback_Sport_Red","Exile_Car_Hatchback_Sport_Blue","Exile_Car_Hatchback_Sport_Orange","Exile_Car_Hunter","Exile_Car_Ifrit","Exile_Car_Offroad_Red","Exile_Car_Offroad_Beige","Exile_Car_Offroad_Blue","Exile_Car_Offroad_DarkRed","Exile_Car_Offroad_BlueCustom","Exile_Car_Offroad_Guerilla01","Exile_Car_Offroad_Rusty1","Exile_Car_Offroad_Armed_Guerilla01","Exile_Car_Offroad_Armed_Guerilla02","Exile_Car_Offroad_Repair_Civillian","Exile_Car_Offroad_Repair_Red","Exile_Car_Offroad_Repair_Beige","Exile_Car_Offroad_Repair_DarkRed","Exile_Car_Offroad_Repair_BlueCustom","Exile_Car_Offroad_Repair_Guerilla01","Exile_Car_Offroad_Repair_Guerilla02","Exile_Car_Strider","Exile_Car_SUV_Red","Exile_Car_SUV_Black","Exile_Car_SUV_Grey","Exile_Car_SUV_Orange","Exile_Car_SUV_Armed_Black","Exile_Car_BRDM2_HQ","Exile_Car_BTR40_MG_Green","Exile_Car_BTR40_MG_Camo","Exile_Car_BTR40_Green","Exile_Car_BTR40_Camo","HMMWV_M2_GPK_1","Exile_Car_HMMWV_M134_Green","Exile_Car_HMMWV_M134_Desert","Exile_Car_HMMWV_M2_Green","Exile_Car_HMMWV_M2_Desert","Exile_Car_HMMWV_MEV_Green","Exile_Car_HMMWV_MEV_Desert","Exile_Car_HMMWV_UNA_Green","Exile_Car_HMMWV_UNA_Desert","O_Truck_02_covered_F","I_mas_cars_UAZ_Unarmed","I_mas_cars_UAZ_Med","I_mas_cars_UAZ_M2","O_mas_cars_UAZ_Unarmed","O_mas_cars_UAZ_Med","B_mas_cars_Hilux_Unarmed","B_mas_cars_Hilux_Med","B_mas_cars_Hilux_M2","B_mas_cars_LR_Unarmed","B_mas_cars_LR_Med","B_mas_cars_LR_M2","I_mas_cars_LR_soft_Unarmed","I_mas_cars_LR_soft_Med","I_mas_cars_LR_soft_M2","I_mas_cars_Ural_repair","I_mas_cars_Ural_fuel","I_mas_cars_Ural","I_mas_cars_Ural_open","O_mas_cars_Ural","O_mas_cars_Ural_open","B_mas_cars_Hilux_MG","Exile_Chopper_Huey_Green","Exile_Chopper_Huey_Armed_Green","Exile_Chopper_Huey_Desert","Exile_Chopper_Huey_Armed_Desert","Exile_Chopper_Huron_Black","Exile_Chopper_Orca_CSAT","Exile_Chopper_Orca_Black","Exile_Chopper_Taru_Transport_CSAT","Exile_Chopper_Taru_Transport_Black","Exile_Chopper_Taru_CSAT","Exile_Chopper_Taru_Black","Exile_Chopper_Taru_Covered_CSAT","Exile_Chopper_Taru_Covered_Black","Exile_Chopper_Hummingbird_Green","Exile_Chopper_Hummingbird_Civillian_Wasp","Exile_Chopper_Mohawk_FIA","Exile_Chopper_Hellcat_Green","B_Heli_Transport_01_F","B_Heli_Transport_01_camo_F","CUP_B_C130J_Cargo_GB","CUP_I_C130J_RACS","CUP_C_B737_CIV","CUP_C_AN2_AIRTAK_TK_CIV","CUP_C_C47_CIV","CUP_B_UH1Y_GUNSHIP_USMC","CUP_B_UH1Y_MEV_USMC","CUP_I_UH60L_Unarmed_FFV_MEV_Racs","CUP_I_UH60L_Unarmed_RACS","CUP_B_UH60L_Unarmed_US","CUP_B_CH47F_USA","CUP_B_CH47F_GB","CUP_B_Merlin_HC3A_Armed_GB","CUP_I_Mi17_UN","CUP_O_Mi17_TK","CUP_O_Mi8_SLA_1","CUP_O_Mi8_medevac_RU","CUP_O_Mi8_medevac_CHDKZ","CUP_B_CH53E_USMC","CUP_B_MV22_USMC","CUP_B_Mi171Sh_Unarmed_ACR","CUP_B_UH1Y_MEV_USMC","CUP_B_UH60L_US","CUP_I_UH60L_RACS","CUP_O_Mi8_SLA_2","CUP_O_mi8_RU","CUP_C_Mi17_Civilian_RU","CUP_B_MH60S_USMC","CUP_I_M113_UN","CUP_I_M113_AAF","CUP_I_M113_Med_AAF","CUP_I_M113_Med_UN","CUP_O_BMP2_AMB_CSAT_T","CUP_I_BMP2_AMB_UN","CUP_O_BTR90_HQ_RU","CUP_O_GAZ_Vodnik_MedEvac_RU","CUP_O_GAZ_Vodnik_PK_RU","CUP_I_Ural_UN","CUP_I_Datsun_PK","CUP_B_LR_Special_M2_GB_W","CUP_B_RG31_M2_OD_USMC","CUP_B_Jackal2_L2A1_GB_W","CUP_B_Ridgback_LMG_GB_W","CUP_B_Ridgback_HMG_GB_W","CUP_I_UAZ_MG_UN","CUP_B_HMMWV_M2_GPK_USA","CUP_B_HMMWV_M2_GPK_NATO_T","CUP_B_HMMWV_Crows_M2_USA","CUP_I_SUV_Armored_ION","CUP_I_UAZ_Open_UN","CUP_I_UAZ_Unarmed_UN","CUP_O_UAZ_Militia_SLA","CUP_I_LR_Transport_RACS","CUP_I_LR_Transport_AAF","CUP_I_LR_Ambulance_RACS","CUP_I_LR_Ambulance_AAF","CUP_I_V3S_Covered_TKG","CUP_O_V3S_Open_TKM","CUP_B_M1030","CUP_C_Golf4_camo_Civ","CUP_C_SUV_TK","CUP_C_Datsun_Covered","CUP_C_Datsun_4seat","CUP_C_Skoda_Blue_CIV","CUP_B_HMMWV_Ambulance_USMC","CUP_B_HMMWV_Unarmed_USMC","CUP_B_MTVR_Refuel_USMC","CUP_O_V3S_Refuel_TKM","CUP_B_MTVR_USMC","CUP_O_V3S_Covered_TKM","CUP_I_V3S_Open_TKG","CUP_B_MTVR_Ammo_USMC","CUP_B_T810_Reammo_CZ_WDL","CUP_B_T810_Refuel_CZ_WDL","CUP_B_T810_Repair_CZ_WDL","CUP_I_Ural_Reammo_UN","WY_Snow_Offroad_A","WY_Snow_Offroad_B","WY_Snow_Offroad_C","WY_Snow_Offroad_armed_D","WY_Snow_Offroad_F","WY_Snow_B_MRAP_01_F_A","WY_Snow_B_MRAP_01_F_C","WY_Snow_B_MRAP_01_F_D","WY_Snow_B_Truck_01_mover_F_E","WY_Snow_B_Truck_01_mover_F_F","WY_Snow_I_Truck_02_transport_F_E","WY_Snow_I_Truck_02_transport_F_F","WY_Snow_O_MRAP_02_base_F_a"], 10];
            _weaponHolder = objNull;
            if ((count _nearestTruck > 0)) then 
            {
                _truck = _nearestTruck select 0;
                if (_truck canAdd "Exile_Item_WoodLog") then 
                    {
                    _truck addMagazineCargoGlobal ["Exile_Item_WoodLog", 1];
                    [_sessionID, "notificationRequest", ["Success", [_woodVehicleText]]] call ExileServer_system_network_send_to;
                    }
                    else
                    {
                        _treePosition = getPosATL _tree;
                        _treePosition set[2, 0];
                        _spawnRadius = 3;
                        _weaponHolders = nearestObjects[_treePosition, ["GroundWeaponHolder"], _spawnRadius];
                        _weaponHolder = objNull;
                        if (_weaponHolders isEqualTo []) then
                        {
                            _weaponHolderPosition = [_treePosition, _spawnRadius] call ExileClient_util_math_getRandomPositionInCircle;
                            _weaponHolderPosition set [2, 0];
                            _weaponHolder = createVehicle ["GroundWeaponHolder", _weaponHolderPosition, [], 0, "CAN_COLLIDE"];
                            _weaponHolder setPosATL _weaponHolderPosition;
                        }
                        else 
                        {
                            _weaponHolder = _weaponHolders select 0;
                        };
                        _weaponHolder addMagazineCargoGlobal ["Exile_Item_WoodLog", 1];
                        [_sessionID, "notificationRequest", ["Success", [_woodVehicleFullText]]] call ExileServer_system_network_send_to;
                    };
            }
            else
            {
            _treePosition = getPosATL _tree;
            _treePosition set[2, 0];
            _spawnRadius = 3;
            _weaponHolders = nearestObjects[_treePosition, ["GroundWeaponHolder"], _spawnRadius];
            _weaponHolder = objNull;
            if (_weaponHolders isEqualTo []) then
            {
                _weaponHolderPosition = [_treePosition, _spawnRadius] call ExileClient_util_math_getRandomPositionInCircle;
                _weaponHolderPosition set [2, 0];
                _weaponHolder = createVehicle ["GroundWeaponHolder", _weaponHolderPosition, [], 0, "CAN_COLLIDE"];
                _weaponHolder setPosATL _weaponHolderPosition;
            }
            else 
            {
                _weaponHolder = _weaponHolders select 0;
            };
            _weaponHolder addMagazineCargoGlobal ["Exile_Item_WoodLog", 1];
            [_sessionID, "notificationRequest", ["Success", [_woodText]]] call ExileServer_system_network_send_to;
            };
        };
    };
};
true