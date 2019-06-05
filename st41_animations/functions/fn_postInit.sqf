  #include "\a3\editor_f\Data\Scripts\dikCodes.h"
  _actualArray = (currentNamespace getVariable "st41_units_defend");
  {
  	if (((toLower(typeOf _x)) find "jedi") >= 0) then
  	{
  		_actualArray pushBackUnique _x;
  	};
  	} forEach allUnits;
  	currentNamespace setVariable ["st41_units_defend",_actualArray];
  	{
  		currentNamespace setVariable [format ["st41_%1_isDefending", _x],false];
  		} forEach _actualArray;



  		[] spawn {
  			while {alive player && !isNull player} do
  			{
  				if (((handgunWeapon player) find 'lightsaber') >=0 && {((currentWeapon player) find 'lightsaber') >=0} && {((count (handgunMagazine player)) != 0)}) then
  				{
  					_dummy = "#particlesource" createVehicle ASLToAGL getPosWorld player;
  					_dummy attachTo [player,[0.1,0.3,1]];
  					currentNamespace setVariable ["st41_playingSoundObject",_dummy];
  					currentNamespace setVariable ["st41_playingSoundName","mediumhum"];
  					[(currentNamespace getVariable "st41_playingSoundObject"), (currentNamespace getVariable "st41_playingSoundName")] remoteExec ["say3D",0];
  					_var = 0;
  					while {(_var <= 1130) && (((handgunWeapon player) find 'lightsaber') >= 0) && ((count (handgunMagazine player)) != 0)} do
  					{
  						_var = _var + 1;
  						sleep 0.1;
  					};
  					deleteVehicle _dummy;
  				};
  			};
  		};
  		["41st Controls","st41_switch_sword", "Encender/Apagar Espada Laser", {_this call st41_switch_sword}, "", [DIK_B, [false, true, true]],true] call CBA_fnc_addKeybind;
  		true