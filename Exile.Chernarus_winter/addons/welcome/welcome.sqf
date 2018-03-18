waituntil { !(isNull findDisplay 46) };
waitUntil { uiSleep 0.1; !isNil"ExileClientPlayerIsSpawned" };
waitUntil { uiSleep 0.1; (ExileClientPlayerIsSpawned isEqualTo true) };

_onScreenTime = 8; //display 8 seconds

_role1 = "Vítejte na Cz/Sk Exile serveru !!!";
_role1names = ["Welcome to Cz/Sk Exile serveru !!! "];
_role2 = "Teamspeak";
_role2names = ["91.239.202.158"];
_role3 = "Facebook";
_role3names = ["Exile Arma 3"];
_role4 = "Internetové stránky";
_role4names = ["exilearma.eu"];
_role5 = "Prispejte na provoz serveru a udrzme ho tak online.Dekujeme";
_role5names = ["Please donate our server to help us to keep it online.Thank you"];
_role6 = "Informace a pravidla najdete v XM8";
_role6names = ["Information and roules you can find in XM8"];
_role7 = "!!!!!!Neprodávat samotné cargo z vozidel!!!!!!";
_role7names = ["!!!!!!Don`t sell cargo from vehicel!!!!!!"];
_role8 = "Restart každé 4 hodiny";
_role8names = ["Restart every 4 hours"];
_role9 = "♥ Hodně štěstí ♥";
_role9names = ["♥ Enjoy ♥"];






{
sleep 2;
_memberFunction = _x select 0;
_memberNames = _x select 1;
_finalText = format ["<t size='0.70' color='#008CFF' align='right'>%1<br /></t>", _memberFunction];
_finalText = _finalText + "<t size='0.70' color='#FFFFFF' align='right'>";
{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
_finalText = _finalText + "</t>";
_onScreenTime + (((count _memberNames) - 1) * 0.9);
[
_finalText,
[safezoneX + safezoneW - 0.8,0.50], //DEFAULT: 0.5,0.35
[safezoneY + safezoneH - 0.8,0.7], //DEFAULT: 0.8,0.7
_onScreenTime,
0.5
] spawn BIS_fnc_dynamicText;
sleep (_onScreenTime);
} forEach [
//The list below should have exactly the same amount of roles as the list above
[_role1, _role1names],
[_role2, _role2names],
[_role3, _role3names],
[_role4, _role4names],
[_role5, _role5names],
[_role6, _role6names],
[_role7, _role7names]


];