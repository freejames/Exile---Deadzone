if !((vehicle player) isEqualTo player) exitWith {};

if (typeOf cursorTarget == "Exile_Bike_QuadBike_Guerilla01") then {
    deletevehicle cursorTarget;
    player playMove "AinvPknlMstpSnonWnonDr_medic3";
    player linkItem "ItemMAP";
	uiSleep 1;
    ["SuccessTitleAndText", ["Quad packed, you got your Map back"]] call ExileClient_gui_toaster_addTemplateToast;
};