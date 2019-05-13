_randomNum = (floor random 7) + 1;
diag_log format ["Rsc: %1 IDC: %2 Numero Seleccionado: %3", (_this select 2),(_this select 0), _randomNum];
_return = format ["\fr4_starwars_animations\data\41st_background_%1.paa", _randomNum];
_ctrlBackGround = (_this select 1) displayctrl (_this select 0);
_ctrlBackGround ctrlsettext _return;