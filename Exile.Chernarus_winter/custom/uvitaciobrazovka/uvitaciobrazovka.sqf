createDialog "RscDisplayWelcome"; 
 
disableSerialization; 
_display = findDisplay 999999; 
_text1 = _display displayCtrl 1100; 
_buttonSpoiler = _display displayctrl 2400; 
_textSpoiler = _display displayctrl 1101; 
_text2 = _display displayCtrl 1102; 

_message = ""; 
_message = _message + "<t align='center' size='8' shadow='0'></t><br />"; 
_message = _message + "<t align='center' size='2' shadow='0'>Vítejte na <a color='#ff9900'>EXILE ARMA3 SERVERU</a> Chernarus Winter!</t><br />"; 
_message = _message + "<t align='center' size='1' shadow='0'>www.http://exilearma.eu - server website</t><br />"; 
_message = _message + "<t align='center'>______________________________________________________________________________________</t><br /><br />"; 
_message = _message + "<t align='center' size='1' shadow='0'><a color='#ff9900'>Informační tabule / Information table</a></t><br /><br />";
_message = _message + "<t align='center'>Zde uvidíte: co se přidalo nebo odebralo, upravené věci či mise, ale také informace o porušování pravidel hráči!</t><br /><br />"; 
_message = _message + "<t align='center'>Here you will see: added and removed items, edited items or missions, but also information about player violations!</t><br /><br />"; 
_message = _message + "<t align='center'>______________________________________________________________________________________</t><br /><br />"; 
_message = _message + "<t align='center'>3x KICK = BAN           !!! READ RULES !!!<br />";
_message = _message + "<t align='center'>______________________________________________________________________________________</t><br /><br />"; 
_message = _message + "<t align='left'><br />"; 

_message = _message + "<t > </t><br />"; 
_message = _message + "<t ><a color='#ff0022'>   </t><br /><br />";  
_message = _message + "<t > 	-nefunkční LIFTING , TOWING a vkládání beden do všech vozidel a helin po restartu, na opravě se pracuje </t><br />"; 
_message = _message + "<t > 	-LIFTING, TOWING and loading of boxes into all vehicles and helicopters after restart, repair works</t></a><br />"; 

_message = _message + "<t > </t><br />"; 
_message = _message + "<t ><a color='#ff9900'> -> 18.3.2018  </t><<br /><br />";  
_message = _message + "<t > 	-do <a color='#ff9900'>SUPPLY DROP</a> byla přidána nová krabice se zbraněmi</t><br />"; 
_message = _message + "<t > 	-a new gun box was added to <a color='#ff9900'>SUPPLY DROP</a></t><br />"; 

_message = _message + "<t > </t><br />"; 
_message = _message + "<t ><a color='#ff9900'> -> 14.3.2018  </a></t><<br /><br />";  
_message = _message + "<t > 	-přidán nový MÓD: CSAT WINTER PACK se zimním oblečením a zbraněmi </t><br />"; 
_message = _message + "<t > 	-added new MOD: CSAT WINTER PACK with winter clothing and weapons</t><br />"; 
_message = _message + "<t >		-navýšení LOCKERu na 250k pop tabs</t><br />"; 
_message = _message + "<t > 	-increase the LOCKER to 250k pop tabs</t><br />";
_message = _message + "<t > 	-hordy zombie odebrány a spawn zombie na hráče snížen o více jak polovinu</t><br />";
_message = _message + "<t > 	-zombie hordes taken away and spawn zombies on players reduced by more than half</t><br />";
_message = _message + "<t > 	-upravené ceny některých zbraní</t><br />";
_message = _message + "<t > 	-adjusted prices for some weapons</t><br />";
_message = _message + "<t > 	-odebrán raketomet MAAWS s optikou (bugnutá optika)</t><br />";
_message = _message + "<t > 	-the MAAWS launcher with optics (bugged optic)</t><br />";
_message = _message + "<t > 	-přidána nabídka prodeje hotových betonových prvků (hardware trader)</t><br />";
_message = _message + "<t > 	-added sales offer of finished concrete elements (hardware trader)</t><br />";

_message = _message + "<t > </t><br />"; 
_message = _message + "<t ><a color='#ff9900'> -> 9-10.3.2018  </a></t><br /><br />";  
_message = _message + "<t > 	-proběhl update módu EXILE a tím přišel i WIPE celé databáze </t><br />"; 
_message = _message + "<t > 	-the EXILE mode update was updated, and WIPE came across the entire database</t><br />"; 
_message = _message + "<t > 	-kompletní informace o úpravách http://www.exilemod.com/topic/25026-104-pineapple/</t><br />"; 
_message = _message + "<t > 	-complete editing information http://www.exilemod.com/topic/25026-104-pineapple/</t><br />";
_message = _message + "<t >		-změna mapy z Chernarus Útes na Chernarus Winter/change map from Ch.Isles to Ch.Winter</t><br />"; 

_message = _message + "<t > </t><br />"; 
_message = _message + "<t ><a color='#ff9900'> -> 7.3.2018  </a></t><br /><br />";  
_message = _message + "<t > 	-bambi gear je bez zbraně/bambi gear is without weapon</t><br />";
_message = _message + "<t > 	-byla odebrána možnost spawnutí kola z inventáře/the ability to spawn a bike from the inventory was removed</t><br />"; 

_message = _message + "<t > </t><br />";
_message = _message + "<t ><a color='#ff9900'> -> 6.3.2018  </a></t><br /><br />"; 
_message = _message + "<t > 	-přidány hordy zombie/added hordes of zombie</t><br />"; 

_message = _message + "<t > </t><br />"; 
_message = _message + "<t ><a color='#ff9900'> -> 5.3.2018  </a></t><br /><br />"; 
_message = _message + "<t > 	-opravena GPS/repaired GPS</t><br />"; 
_message = _message + "<t > 	-upravena ekonomika/adjusted economy</t><br />"; 
_message = _message + "<t >    		příklad: koupíte věc, která je dostupná s repektem nad 25k a v hodnotě 10k pops, tak navíc obchodník od Vás dostane 600 bodů respektu</t><br />"; 
_message = _message + "<t > 		example: You buy a thing that is available with respect over 25k and worth 10k, and the trader will get 600 points of respect</t><br />"; 

_message = _message + "<t > </t><br />"; 
_message = _message + "<t ><a color='#ff9900'> -> 4.3.2018  </a></t><br /><br />"; 
_message = _message + "<t >		-změna mapy z Chernarus redux na Chernarus Útes/change map from Ch.redux to Ch.Isles</t><br />"; 
_message = _message + "<t >   	-přidána zbraň/add weapon - AK 12</t><br />"; 
_message = _message + "<t > 	-přidány dvě statické mise/two static missions added</t><br />"; 
_message = _message + "<t > 	-přidána dynamická patrola A10/dynamic patrol added A10</t><br />"; 

_message = _message + "<t > </t><br />"; 
_message = _message + "<t align='center'>______________________________________________________________________________________</t><br /><br />"; 
_message = _message + "<t align='center' size='1.5' shadow='0'><t color='#ff0000'>Klikmnutím na pokračovat vstoupíte do hry/By Clicking Continue will continue</t></t><br />"; 
_message = _message + "<t align='center'>______________________________________________________________________________________</t><br /><br />"; 
  
 
_text1 ctrlSetStructuredText (parseText _message); 
 
_positionText1 = ctrlPosition _text1; 
_yText1 = _positionText1 select 1; 
_hText1 = ctrlTextHeight _text1; 
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1]; 
_text1 ctrlcommit 0; 
_buttonSpoiler ctrlSetFade 1; 
_buttonSpoiler ctrlCommit 0; 
_buttonSpoiler ctrlEnable false; 
_textSpoiler ctrlSetFade 1; 
_textSpoiler ctrlCommit 0; 
_text2 ctrlSetFade 1; 
_text2 ctrlCommit 0;