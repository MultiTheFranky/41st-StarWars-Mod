  currentNamespace setVariable ["fr4_units_defend",[]];
  currentNamespace setVariable ["fr4_action_loop",""];
  currentNamespace setVariable ["fr4_playingFuerza",false];
  fr4_fnc_fired = {
   params ["_unit","_weapon","_muzzle","","_ammo","","_projectile"];
		if (isNull _projectile) then { // Fixes a locality issue with slow projectiles. Thanks to killzone kid!
			_projectile = nearestObject [_unit, _ammo];
		};
    if (_unit == player && {(currentNamespace getVariable "fr4_action_loop") != ""}) then
    {
      [] spawn {
        sleep 1;
        player playActionNow (currentNamespace getVariable "fr4_action_loop");
      };
    };
    {
      if ((_x distance _unit) >= 2500) exitWith {};
      if (toLower(_weapon) isEqualTo "put"
          ||
          {((handgunWeapon  _unitToDefendTemp) find "lightsaber") == -1}
          ||
          (((handgunWeapon _unitToDefendTemp) find 'lightsaber') >=0 && ((count (handgunMagazine _unitToDefendTemp)) == 0))) exitWith {};
      if ((side effectiveCommander (vehicle _unit)) != (side (_x))) then {
        if (toLower(_weapon) in ["throw","put"]) exitWith {};
        [_projectile,_unit,_x] spawn {
          _projectile_temp = (_this select 0);
          _unitToDefendTemp = (_this select 2);
          if (((handgunWeapon  _unitToDefendTemp) find "lightsaber") >= 0 && ([ position _unitToDefendTemp, getDir _unitToDefendTemp, 30, position (_this select 1)] call BIS_fnc_inAngleSector)) then {
            waitUntil {(_unitToDefendTemp distance (_projectile_temp)) < 5 || !alive(_projectile_temp) || (_unitToDefendTemp distance (_this select 1)) < 5};
            if (!alive(_projectile_temp)) exitWith {};
            _randomNumber = ceil(random 3);
            if (currentWeapon _unitToDefendTemp == "Throw") then
            {
              _unitToDefendTemp fire handgunWeapon _unitToDefendTemp;
            };
            if (!(currentNamespace getVariable format ["fr4_%1_isDefending", _unitToDefendTemp])) then
            {
              _unitToDefendTemp playActionNow format ["fr4_defend%1", _randomNumber];
              currentNamespace setVariable [format ["fr4_%1_isDefending", _unitToDefendTemp],true];
              [_unitToDefendTemp] spawn {
                sleep 0.1;
                currentNamespace setVariable [format ["fr4_%1_isDefending", (_this select 0)],false];
              };
            };
          };
        };
      };
      } forEach (currentNamespace getVariable "fr4_units_defend");
    };

    fr4_fnc_playSound = {
      _text = param [0, "", [""]];
      _time = param [1, 1, [1]];
      _pos = param [2, [0,0,0], [[]]];
      _dummy = "#particlesource" createVehicle ASLToAGL getPosWorld player;
      _dummy attachTo [player,_pos];
      currentNamespace setVariable ["fr4_playingSoundObject",_dummy];
      currentNamespace setVariable ["fr4_playingSoundName",_text];
      [(currentNamespace getVariable "fr4_playingSoundObject"), (currentNamespace getVariable "fr4_playingSoundName")] remoteExec ["say3D",0];
      [_dummy,_time] spawn {
        sleep (_this select 1);
        deleteVehicle (_this select 0);
      };
    };
    fr4_switch_sword = {
      if (((handgunWeapon player) find 'lightsaber') >=0 && {((currentWeapon player) find 'lightsaber') >=0}) then
      {
        if (((count (handgunMagazine player)) == 0)) then
        {
          player addHandgunItem ((getArray (configFile >> 'CfgWeapons' >> (handgunWeapon player) >> 'magazines')) select 0);
          format ["lson%1", (floor random 6)+1] call fr4_fnc_playSound;
          }else{
            player removeHandgunItem (currentMagazine player);
            format ["lsoff%1", (floor random 6)+1] call fr4_fnc_playSound;
          };
        };
      };
      diag_log "41st PreInit Finish";