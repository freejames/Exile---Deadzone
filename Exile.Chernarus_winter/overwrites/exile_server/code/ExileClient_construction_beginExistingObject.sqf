private["_previewObjectClassName"];
if (ExileClientPlayerIsInCombat) then
{
	["ErrorTitleAndText", ["Construction aborted!", "You cannot build during a combat"]] call ExileClient_gui_toaster_addTemplateToast;
}
else
{
	ExileClientConstructionObject = _this;
	ExileClientConstructionCanPlaceObject = false;
	ExileClientConstructionConfig = ("getText(_x >> 'staticObject') == ExileClientConstructionObject" configClasses(configFile >> "CfgConstruction")) select 0;
	_previewObjectClassName = getText(ExileClientConstructionConfig >> "previewObject");
	ExileClientConstructionSnapToObjectClassNames = (ExileClientConstructionConfig >> "SnapObjects") call Bis_fnc_getCfgSubClasses;
	ExileClientConstructionProcess = 2;
	ExileClientConstructionRotation = 0;
	ExileClientConstructionPitch = 0;
    ExileClientConstructionBank = 0;
	ExileClientConstructionObjectDisplayName = getText(configFile >> "CfgVehicles" >> _previewObjectClassName >> "displayName");
	ExileClientConstructionOffset = [0,	5,0];
	ExileClientConstructionMode = 1;
	ExileClientConstructionVectorMode = false;
	ExileClientConstructionIsInSelectSnapObjectMode = true;
	ExileClientConstructionSupportSnapMode = count(ExileClientConstructionSnapToObjectClassNames) > 0;
	ExileClientConstructionCurrentSnapToObject = objNull;
	{
		player reveal _x;
	}
	forEach (player nearObjects  ["Exile_Construction_Abstract_Static", 20]);
	["buildConstructionRequest", [_previewObjectClassName,ExileClientConstructionPosition]] call ExileClient_system_network_send;
};
true