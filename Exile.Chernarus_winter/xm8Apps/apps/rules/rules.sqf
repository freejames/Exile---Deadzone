/*
	File: rules.sqf
	For exile edited by Repentz
*/
disableSerialization;
[
	"",
	0,
	0.2,
	10,
	0,
	0,
	8
] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayctrl 2400;
_textSpoiler = _display displayctrl 1101;
_text2 = _display displayCtrl 1102;

_message = "";
_message = _message + "<t align='center' size='8' shadow='0'></t><br />";
_message = _message + "<t align='center' size='2' shadow='0'>Vítejte na <a href=' ' color='#ff9900'>CZ/SK/ENG Arma 3 Exile Chernarus Isles serveru!</t><br />";
_message = _message + "______________________________________________________________________________________<br /><br />";
_message = _message + "<t align='center' size='1' shadow='0'><a href='91.239.202.158' color='#ff9900'>TS3</a>: 91.239.202.158<br />";
_message = _message + "Náš Web: <a href= 'http://exilearma.eu/index.html' color='#ff9900'>EXILE SURVIVAL</a><br />";
_message = _message + "Na našem TS3 91.239.202.158 nebo  <a href= 'https://www.facebook.com/groups/1019781011496558/' color='#ff9900'>Faceboku</a> můžete jednoduše kontaktovat adminy!</t><br /><br />";
_message = _message + "______________________________________________________________________________________<br /><br />";

_message = _message + "<t align='center' size='2' shadow='0'><t color='#ff0000'>PRAVIDLA:</t><br />";
_message = _message + "<t align='center' size='1' shadow='0'><t color='#ff9900'>Každý hráč musí znát a dodržovat pravidla serveru, vyhnete se tím banu</t><br />";
_message = _message + "<t align='left' size='1' shadow='0'><t color='#4285f4'>1. ZÁKAZ STAVĚNÍ</t><br />";
_message = _message + " Na pobřeží(neplatí od Rifyn na sever) a ve vzdálenosti do 600m od něj.<br /><br />";
_message = _message + " Podél hlavních cest(silnice) A od vzdálenostosti trader city(700m).<br /><br />";
_message = _message + " V kasárnách, na letištích, nemocnicích, požárních stanicích a místech, s vysokým lootem.<br /><br />";
_message = _message + " Na ostrově Skalisty a Utes<br /><br />";
_message = _message + " Do 1500 m od míst, kde se spawnují statické mise ( Skalistý ostrov, Čertův Hrad, Altar a ostrov Utes) a 1500 m od Přehrada Poběda.<br /><br />";
_message = _message + " Stavět v texturách pouze na vlastní zodpovědnost(Může vám zmizet safe atp.)<br /><br />";
_message = _message + " Zákaz umisťování stožárů s vlajkou do textur odkud nejde vlajka stáhnout.VLAJKA MUSÍ JÍT STÁHNOUT!<br /><br />";
_message = _message + " Zákaz stavět vlajku u vesnic ve vzdálenosti menší než 400m.<br /><br />";
_message = _message + "<t align='left' size='1' shadow='0'><t color='#4285f4'>2. SAFEZONY</t><br />";
_message = _message + " Jediné bezpečné oblasti na mapě, opuštěním SAFEZONY se účastníte přímého boje<br /><br />";
_message = _message + " V safezonách (dále jen SZ) je zakázáno trolení , lezení do cizích vozidel a manipulace s cizím vybavením.<br /><br />";
_message = _message + " Tím se rozumí, že nikdo nebude krást cizí techniku v SZ, cokoliv brát z cizí techniky ani jinak manipulovat s touto technikou!<br /><br />";
_message = _message + " V SZ si všímáte JEN TOHO CO JE VAŠE!. Tím se rozumí, že kdokoliv kdo vejde do SZ (pěšky ve vozidle nebo letecky) se svou technikou nebo vybavením a nebo s technikou a vybavením, které získal na misi nebo po zabití hráče!<br /><br />";
_message = _message + " V SZ jste NEDOTKNUTELNÍ. Ten kdo poruší toto pravidlo bude potrestán.<br /><br />";
_message = _message + " Pokud v SZ najdete nějakou věc a nikdo se k ní nehlásí ( vybavení, technika ) a prokazatelně se nikde ve vzdálenosti nepohybuje její majitel, je toto volně k dispozici.<br /><br />";
_message = _message + " Zákaz střílení z okrajů SZ a následné schování zpět do SZ.<br /><br />";
_message = _message + "<t align='left' size='1' shadow='0'><t color='#4285f4'>3. VOZIDLA</t><br />";
_message = _message + " Vozidla v safezonách se automaticky odemykají po restartech serveru !<br /><br />";
_message = _message + " Na zmizelá vozidla po restartech nebude brán ohled.<br /><br />";
_message = _message + " Vozidla zaparkovaná a zamčená (v territory) před restartem se po restartu stávají nesmrtelnými ( do odemčení ).<br /><br />";
_message = _message + " Zákaz úmyslného zanechávání zamčených vozidel na cizích základnách.<br /><br />";
_message = _message + "<t align='left' size='1' shadow='0'><t color='#4285f4'>5. CHOVÁNÍ NA SERVERU / TSku</t><br />";
_message = _message + " Na serveru se chovejte slušně a respektujte ostatní hráče, vyvarujte se zbytečných nadávek a urážek hráčů, zejména pak administrátorů.<br /><br />";
_message = _message + " Je zakázáno dělat na serveru reklamu jiným herním serverům.<br /><br />";
_message = _message + " Pokud objevíte nějakou závažnou chybu, nahlašte jí prosím administrátorům.<br /><br />";
_message = _message + " Pokud víte o někom, kdo jakkoli porušuje pravidla, neprodleně toto nahlašte administrátorům.<br /><br />";
_message = _message + "<t align='left' size='1' shadow='0'><t color='#4285f4'>6. ÚTOKY NA BÁZE</t><br />";
_message = _message + " Jsou povoleny veškeré útoky na báze.<br /><br />";
_message = _message + "<t align='left' size='1' shadow='0'><t color='#4285f4'>7. VYPRŠENÍ VLASTNICTVÍ</t><br />";
_message = _message + " Auta, helikoptéry a safy se mažou po 30 dnech bez aktivity (aktivitou se rozumí odemčení)<br /><br />";
_message = _message + "<t align='left' size='1' shadow='0'><t color='#4285f4'>8. PORUŠENÍ PRAVIDEL</t><br />";
_message = _message + " Porušení pravidel se trestá a to dle závažnosti kickem ze serveru, nebo banem.<br /><br />";
_message = _message + " Poslední slovo při řešení sporu či jiné záležitosti má vždy administrátor!<br /><br />";
_message = _message + " Administrátora musíte vždy poslechnout!<br /><br />";
_message = _message + "<t align='left' size='1' shadow='0'><t color='#4285f4'>9. Zákaz prozrazovat nick Admina ve hře (permaBAN)</t><br />";
_message = _message + "<t align='left' size='1' shadow='0'><t color='#4285f4'>10. Pravidla chatu</t><br />";
_message = _message + " Spamování<br /><br />";
_message = _message + " Obtěžování a pomlouvání jiných hráčů<br /><br />";
_message = _message + " Používání sprostých nebo vulgárních výrazů<br /><br />";
_message = _message + " Odkazování na nelegální aktivity včetně užívání drog<br /><br />";
_message = _message + " Propagování společností, webů či služeb třetích stran<br /><br />";
_message = _message + " Vyhrožování ublížením na zdraví nebo způsobením škody<br /><br />";
_message = _message + " Odkazování na obsah se sexuálním nebo násilným podtextem<br /><br />";
_message = _message + " Propagace a nabádání k násilí, rasismu nebo nenávisti<br /><br />";
_message = _message + " Urážky či posměšky na adresu jiných hráčů na základě jejich náboženské nebo sexuální orientace<br /><br />";
_message = _message + " Nerespektování,porušování soukromí,vydávání se za moderátora<br /><br />";
_message = _message + " Jsme rádi, že hrajete DEAD ZONE SERVER a chatujete s ostatními hráči, ale současně Vás nabádáme k opatrnosti při jednání s cizími osobami. Bude-li od Vás někdo požadovat sdělení osobních nebo jiných důvěrných informací, neprodleně o tom uvědomte moderátora, naši podporu nebo své rodiče.<br /><br />";
_message = _message + " Přejeme příjemnou zábavu, <a color='#8b1a64'>EXILE SURVIVAL team</a><br /><br />";



//Fill only the first text
_text1 ctrlSetStructuredText (parseText _message);

//Resize StructuredText component to display the scrollbar if needed
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlcommit 0;
//Hide second text, spoiler text and button
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;
