if ("ItemMap" in assignedItems player) then
{
	player unlinkItem "ItemMap";
	player playMove "Acts_carFixingWheel";
	disableSerialization;
	if(ExileClientXM8IsPowerOn) then{
	_display = (findDisplay 8457) closeDisplay 0;
	playSound ["SndXM8PowerOff", true];
	ExileClientXM8IsPowerOn = false;
};
	sleep 12;
	    _vehicleBlain = createVehicle ['Exile_Bike_QuadBike_Guerilla01',position player,[],3,'CAN_COLLIDE'];
	    _vehicleBlain enableSimulationGlobal false;
        _vehicleBlain allowDamage true;
	["ErrorTitleOnly", ["Your map got removed"]] call ExileClient_gui_toaster_addTemplateToast;


}
else
{
	["ErrorTitleOnly", ["NO MAP!"]] call ExileClient_gui_toaster_addTemplateToast;
};
