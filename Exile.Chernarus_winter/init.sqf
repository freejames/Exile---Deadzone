[] execVM "custom\EnigmaPersonalVehicle\init.sqf";

//Rearm Script
[] execVM "custom\rearm\takegive_poptab_init.sqf";
[] execVM "airpatrol.sqf"; 
[] execVM "custom\EnigmaRevive\init.sqf";
[] ExecVM "VEMFr_client\sqf\initClient.sqf"; // Client-side part of VEMFr 
[] ExecVM "scarCODE\restartWarnings\sqf\initLocal.sqf"; // scarCODE Restart Warnings
//[] execVM "GMVectorBuilding_Init.sqf";
if hasInterface then
{
    [] execVM "custom\rearm\service_point.sqf";
};
if (isServer) then {
	[] execVM "addons\Scripts\time.sqf"; // Time
};

[] execVM "R3F_LOG\init.sqf";








