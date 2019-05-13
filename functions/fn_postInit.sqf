  #include "\a3\editor_f\Data\Scripts\dikCodes.h"
  _actualArray = (currentNamespace getVariable "fr4_units_defend");
  {
  	if (((toLower(typeOf _x)) find "jedi") >= 0) then
  	{
  		_actualArray pushBackUnique _x;
  	};
  	} forEach allUnits;
  	currentNamespace setVariable ["fr4_units_defend",_actualArray];
  	{
  		currentNamespace setVariable [format ["fr4_%1_isDefending", _x],false];
  		} forEach _actualArray;



[] spawn {
	while {alive player && !isNull player} do
	{
		if (((handgunWeapon player) find 'lightsaber') >=0 && {((currentWeapon player) find 'lightsaber') >=0} && {((count (handgunMagazine player)) != 0)}) then
		{
			_dummy = "#particlesource" createVehicle ASLToAGL getPosWorld player;
			_dummy attachTo [player,[0.1,0.3,1]];
			currentNamespace setVariable ["fr4_playingSoundObject",_dummy];
			currentNamespace setVariable ["fr4_playingSoundName","mediumhum"];
			[(currentNamespace getVariable "fr4_playingSoundObject"), (currentNamespace getVariable "fr4_playingSoundName")] remoteExec ["say3D",0];
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
SW_powerJedi_fnc_push_Client = {
	params ["_selectObject", "_newVelocity"];
	if (!(currentNamespace getVariable "fr4_playingFuerza")) then
	{
		player playActionNow 'rgr_fuerza';
		currentNamespace setVariable ["fr4_playingFuerza",true];
		[] spawn {
			sleep 1;
			currentNamespace setVariable ["fr4_playingFuerza",false];
		};
	};
	if (local _selectObject) then {
		_selectObject setVelocity _newVelocity;
	};
};
SW_powerJedi_fnc_push_Server = {
	params ["_selectObject", "_newVelocity"];

	if (local _selectObject) then {
		_selectObject setVelocity _newVelocity;
		} else {
			[_selectObject, _newVelocity] remoteExec ["SW_powerJedi_fnc_push_Client", owner _selectObject];
		};
	};
	//Add on/off button
["41st Controls","fr4_switch_sword", "Encender/Apagar Espada Laser", {_this call fr4_switch_sword}, "", [DIK_B, [false, true, true]],true] call CBA_fnc_addKeybind;
diag_log "41st PostInit Finish";