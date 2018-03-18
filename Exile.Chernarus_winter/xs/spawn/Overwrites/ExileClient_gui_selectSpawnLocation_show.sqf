/**
 * ExileClient_gui_selectSpawnLocation_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team 
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display","_spawnButton","_spawnButton2","_tipText","_tipTextList","_listBox","_listItemIndex","_numberOfSpawnPoints","_randNum","_randData","_randomSpawnIndex"];
disableSerialization;
ExileClientSpawnLocationSelectionDone = false;
ExileClientSelectedSpawnLocationMarkerName = "";
createDialog "xstremeGroundorHaloDialog";
_display = uiNamespace getVariable ["xstremeGroundorHaloDialog",displayNull];
_display displayAddEventHandler ["KeyDown", "_this call ExileClient_gui_loadingScreen_event_onKeyDown"];
_spawnButton = _display displayCtrl 1600;
_spawnButton2 = _display displayCtrl 1601;
_spawnButton ctrlEnable false;
_spawnButton2 ctrlEnable false;
_tipText = _display displayCtrl 1204;
_listBox = _display displayCtrl 1500;
lbClear _listBox;
{
	if (getMarkerType _x == "ExileSpawnZone") then
	{
		_listItemIndex = _listBox lbAdd (markerText _x);
		_listBox lbSetData [_listItemIndex, _x];
	};
}
forEach allMapMarkers;
_numberOfSpawnPoints = {getMarkerType _x == "ExileSpawnZone"} count allMapMarkers;
if (_numberOfSpawnPoints > 0) then 
{
	_randNum = floor(random _numberOfSpawnPoints);
	_randData = lbData [1500,_randNum];
	_randomSpawnIndex = _listBox lbAdd "Random";
	_listBox lbSetData [_randomSpawnIndex, _randData];
};

_tipTextList = selectRandom 
[
	"Stránky serveru [CZ/SK/ENG]Exile - Patrols,zombie,mission and more",
	"IP adresa serveru 91.134.161.74:2302",
	"Používejte Teamspeak IP: 91.239.202.158",
	"Náš Facebook strránky Exile Arma3 ",
	"Pokud se Vám server líbí a chcete, aby stále běžel, tak budeme rádi za každý příspěvek. Více na stránkách.",
	"Dodržujte pravidla, hlavně v safe zónách (u traderů)",
	"Veškerá činnost mimo SZ je povolena",
	"Cokoliv co řeknete, může být pozdeji použito proti Vám",
	"Chovejte se slušne a nenadávejte, adminovo oko Vás vidí :)",
	"Veškeré bugy, chyby, porušení pravidel či jiné DŮLEŽITÉ NÁLEŽITOSTI pište na FB"
];
_tipText ctrlSetStructuredText parseText format["<t size ='1.8 / (getResolution select 5)' valign='middle' align='right'>[ %1 ]</t>",_tipTextList];

true