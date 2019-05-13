#include "\a3\editor_f\Data\Scripts\dikCodes.h"
currentNamespace setVariable ["fr4_getCombustible",100];
currentNamespace setVariable ["fr4_gastoCombustible",0.1];
currentNamespace setVariable ["fr4_potenciaJetpack",1];
currentNamespace setVariable ["fr4_jugadorVolando",false];
currentNamespace setVariable ["fr4_jugadorVolandoRapido",false];
currentNamespace setVariable ["fr4_gui",false];
currentNamespace setVariable ["fr4_playingSound",false];
currentNamespace setVariable ["fr4_effects",objNull];
[] spawn {
	while {alive player && !isNull player} do
	{
		if (backpack player == "SWOP_B_CloneJT12") then
		{
			if (currentNamespace getVariable "fr4_getCombustible" < 100 && ((getPos player) select 2) < 0.1) then
			{
				currentNamespace setVariable ["fr4_getCombustible",(currentNamespace getVariable "fr4_getCombustible") + (currentNamespace getVariable "fr4_gastoCombustible")];
				sleep 0.1;
			};
			if (!(currentNamespace getVariable "fr4_gui")) then
			{
				("fr4_jetpack_gui" call BIS_fnc_rscLayer) cutRsc ["fr4_jetpack_gui", "PLAIN"];
				currentNamespace setVariable ["fr4_gui",true];
			};
			((((uiNamespace getVariable "fr4_jetpack_gui") select 0) displayCtrl -1) progressSetPosition ((currentNamespace getVariable "fr4_getCombustible")/100));
			}else{
				("fr4_jetpack_gui" call BIS_fnc_rscLayer) cutText ["","PLAIN"];
				currentNamespace setVariable ["fr4_gui",false];
			};
		};
	};
	fr4_fnc_jetPackPushFunction = {
		if (backpack player != "SWOP_B_CloneJT12"
		    ||
		    currentNamespace getVariable "fr4_getCombustible" < 1
		    ||
		    !alive player
		    ||
		    player getVariable "ACE_isUnconscious") exitWith {};

	//Control de acciones
	if (inputAction "TurnRight" > 0) then
	{
		"Right" call fr4_fnc_jetPackPushCalculations;
	};
	if (inputAction "TurnLeft" > 0) then
	{
		"Left" call fr4_fnc_jetPackPushCalculations;
	};
	if (inputAction "MoveForward" > 0) then
	{
		"Forward" call fr4_fnc_jetPackPushCalculations;
	};
	if (inputAction "MoveBack" > 0) then
	{
		"Backward" call fr4_fnc_jetPackPushCalculations;
	};
	if (inputAction "TurnRight" <= 0 && inputAction "TurnLeft" <= 0 && inputAction "MoveForward" <= 0 && inputAction "MoveBack" <= 0) then
	{
		"" call fr4_fnc_jetPackPushCalculations;
	};
	_speed = speed player;
	if (_speed > 40 && !(currentNamespace getVariable "fr4_jugadorVolandoRapido") && ((getPos player) select 2) > 10) then
	{
		[] spawn {
			player playActionNow "fr4_fly_to_flyforward";
			sleep 1;
			player playActionNow "fr4_flyforward";
			currentNamespace setVariable ["fr4_jugadorVolandoRapido",true];
		};

	};
	if (_speed <= 10) then
	{
		player playActionNow "fr4_fly_static";
		currentNamespace setVariable ["fr4_jugadorVolandoRapido",false];
	};
	currentNamespace setVariable ["fr4_getCombustible",(currentNamespace getVariable "fr4_getCombustible") - (currentNamespace getVariable "fr4_gastoCombustible")];
	if (((getPos player) select 2) > 0.1 && !(currentNamespace getVariable "fr4_jugadorVolando")) then
	{
		player playActionNow "fr4_fly_static";
		currentNamespace setVariable ["fr4_jugadorVolando",true];

		"jetpack_start" call fr4_fnc_playSound;
		call fr4_fnc_engineEffectOn;
		[] spawn {
			while {alive player && !isNull player && (currentNamespace getVariable "fr4_jugadorVolando")} do
			{
				if (((getPos player) select 2) <= 0.1) exitWith
				{
					currentNamespace setVariable ["fr4_jugadorVolando",false];
					call fr4_fnc_engineEffectOff;
					format ["jetpackStop%1", (floor random 7) + 1] call fr4_fnc_playSound;
					player playActionNow 'GestureNod';
				};
				if (((getPos player) select 2) > 0.1) then
				{
					[] spawn {
						if (!(currentNamespace getVariable "fr4_playingSound")) then
						{
							"jetpack_fly" call fr4_fnc_playSound;
							currentNamespace setVariable ["fr4_playingSound",true];
							sleep 1;
							currentNamespace setVariable ["fr4_playingSound",false];
						};
					};
				};
			};
		};
	};
};

fr4_fnc_jetPackPushCalculations = {
	_vel = velocity player;
	_dir = direction player;
	_speed = currentNamespace getVariable "fr4_potenciaJetpack";

	if (_this == "Right") then
	{
		player setVelocity [
		(_vel select 0) + (sin (_dir + 90) * _speed / 2),
		(_vel select 1) + (cos (_dir + 90) * _speed / 2),
		_speed / 2
		];
	};
	if (_this == "Left") then
	{
		player setVelocity [
		(_vel select 0) + (sin (_dir - 90) * _speed / 2),
		(_vel select 1) + (cos (_dir - 90) * _speed / 2),
		_speed / 2
		];
	};
	if (_this == "Forward") then
	{
		player setVelocity [
		(_vel select 0) + (sin _dir * _speed / 5),
		(_vel select 1) + (cos _dir * _speed / 5),
		_speed * 2
		];
	};
	if (_this == "Backward") then
	{
		player setVelocity [
		(_vel select 0) + (sin (_dir + 180) * _speed),
		(_vel select 1) + (cos (_dir + 180) * _speed),
		_speed * 2
		];
	};
	if (_this == "") then
	{
		player setVelocity [
		(_vel select 0),
		(_vel select 1),
		_speed * 2
		];
	};
};
fr4_fnc_engineEffectOn = {
	_array = [];
	//Fuego izq
	_source01 = "#particlesource" createVehicle (getposATL player);
	_source01 setParticleClass "FR4_JetPackFire";
	_source01 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal",16,3,32,1],
	"", "Billboard", 1,(0.08 + 0.01*1),
	[-0.25, -0.15, 1.075], //POS
	[0,0, 0],//VEL
	0, 10, 1, 0.075,
	[0.1, 0.2],
	[[1, 1, 1, -1.5],[1, 1, 1, -1.5], [1, 1, 1, -0.5], [1, 1, 1, -0]],
	[3 + random 2], 1, 0, "", "", player];
	_source01 attachTo [player,[-0.25, -0.15, 1.075]];
	_array pushBack _source01;
	//Fuego der
	_source02 = "#particlesource" createVehicle (getposATL player);
	_source02 setParticleClass "FR4_JetPackFire";
	_source02 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal",16,3,32,1],
	"", "Billboard", 1,(0.08 + 0.01*1),
	[0.10, -0.15, 1.075], //POS
	[0,0, 0],//VEL
	0, 10, 1, 0.075,
	[0.1, 0.2],
	[[1, 1, 1, -1.5],[1, 1, 1, -1.5], [1, 1, 1, -0.5], [1, 1, 1, -0]],
	[3 + random 2], 1, 0, "", "", player];
	_source02 attachTo [player,[0.10, -0.15, 1.075]];
	_array pushBack _source02;
	//Humo izq
	_fum = "#particlesource" createVehicle (getPos player);
	_fum setParticleCircle [0,[0,0,0]];
	_fum setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal_02.p3d",8,0,40,1],"","Billboard",1,7,[-0.25, -0.15, 1.1],[0,0,-1],0,0.04,0.045,0.05,[1,1,1],[[0.25,0.2,0.2,0],[0,0,0,0.1],[1,1,1,0]],[1],1,0,"","",player];
	_fum setDropInterval 0.01;
	_fum attachTo [player,[-0.25, -0.15, 1.1]];
	_array pushBack _fum;
	//Humo der
	_fum2 = "#particlesource" createVehicle (getPos player);
	_fum2 setParticleCircle [0,[0,0,0]];
	_fum2 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal_02.p3d",8,0,40,1],"","Billboard",1,7,[0.10, -0.15, 1.1],[0,0,-1],0,0.04,0.045,0.05,[1,1,1],[[0.25,0.2,0.2,0],[0,0,0,0.1],[1,1,1,0]],[1],1,0,"","",player];
	_fum2 setDropInterval 0.01;
	_fum2 attachTo [player,[0.10, -0.15, 1.1]];
	_array pushBack _fum2;
	currentNamespace setVariable ["fr4_effects",_array];
};
fr4_fnc_engineEffectOff = {
	{
		deleteVehicle _x;
		} forEach (currentNamespace getVariable "fr4_effects");
	};
	fr4_fnc_swopjetpackjump = {
		_boost_man = _this select 0;
		_stanceplayer = stance _boost_man;
		_boostupsound = selectRandom ["jet1","jet2","jet3","jet4"];
		_boostlandsound = selectRandom ["jetpackStop1","jetpackStop2","jetpackStop3","jetpackStop4","jetpackStop5","jetpackStop6","jetpackStop7"];
		if (_stanceplayer == "prone") exitWith {
			titleText ["You cant use a Jetpack while prone!", "PLAIN"];
			sleep 2;
			titleText ["", "PLAIN"];
		};

		if (
		    (backpack _boost_man == "SWOP_B_IMPjetBackpack_Base") or
		    (backpack _boost_man == "SWOP_B_IMPjetackpack_Base") or
		    (backpack _boost_man == "SWOP_B_Clonejetackpack_Base") or
		    (backpack _boost_man == "SWOP_ImpSkyBackpack") or
		    (backpack _boost_man == "SWOP_ImpJumptroopBackpack") or
		    (backpack _boost_man == "SWOP_JetpackFO") or
		    (backpack _boost_man == "SWOP_mochila_bobafett") or
		    (backpack _boost_man == "SWOP_mochila_jangofett") or
		    (backpack _boost_man == "SWOP_mochila_red") or
		    (backpack _boost_man == "SWOP_mochila_black") or
		    (backpack _boost_man == "SWOP_B_CLONEDV") or
		    (backpack _boost_man == "SWOP_B_REBjetackpack_Base") or
		    (backpack _boost_man == "SWOP_B_REBjetSackpack_Base") or
		    (backpack _boost_man == "SWOP_B_REBjetMackpack_Base") or
		    (backpack _boost_man == "SWOP_B_CloneJT12_jump") or
		    (backpack _boost_man == "SWOP_B_CloneJT12") or
		    (backpack _boost_man == "SWOP_B_CloneJT12_104") or
		    (backpack _boost_man == "SWOP_B_CloneJT12_black") or
		    (backpack _boost_man == "SWOP_resistance_back_jump_b") or
		    (backpack _boost_man == "SWOP_B_REBjetDackpack_Base")

		    ) then {
	if (isTouchingGround _boost_man) then {
		if (Boost >= 50) then {
			Boost = Boost - 50;
			if (vehicle player != player) then {hint "You are in a vehicle"}else{
				{
					deleteVehicle _x;
					} forEach nearestObjects [getpos _boost_man,["Land_HelipadEmpty_F"],3];
					_SWOPSounds = "Land_HelipadEmpty_F" createVehicle getPosWorld _boost_man;
					_SWOPSounds attachTo [_boost_man, [0, 0, 0]];

					[_SWOPSounds, _boostupsound] remoteExec ["say3D", 0, false];
					[_boost_man] execVM "\SWOP_system\client_side\Func\Jump_particle.sqf";
				};
				_boost_man setvelocity [10 * (sin (getdir _boost_man )), 12 * (cos (getdir _boost_man )), 20];
				//_damage = getDammage _boost_man;
				//_boost_man setVariable [""ace_medical_allowDamage"", false];
				sleep 0.4;
				waitUntil {isTouchingGround _boost_man};
				if (vehicle player != player) then {hintSilent ""}else{
					{
						deleteVehicle _x;
						} forEach nearestObjects [getpos _boost_man,["Land_HelipadEmpty_F"],3];
						_SWOPSounds = "Land_HelipadEmpty_F" createVehicle getPosWorld _boost_man;
						_SWOPSounds attachTo [_boost_man, [0, 0, 0]];

						[_SWOPSounds, _boostlandsound] remoteExec ["say3D", 0, false];
					};
					//_boost_man setDamage _damage;
					//_boost_man setVariable ["ace_medical_allowDamage", true];

					}else{

						titleText ["Recharging...", "PLAIN"];
						sleep 2;
						titleText ["", "PLAIN"];
					};
					}else{
						if (Boost >= 50) then {
							Boost = Boost - 50;
							if (vehicle player != player) then {hint "You are in a vehicle"}else{
								{
									deleteVehicle _x;
									} forEach nearestObjects [getpos _boost_man,["Land_HelipadEmpty_F"],3];
									_SWOPSounds = "Land_HelipadEmpty_F" createVehicle getPosWorld _boost_man;
									_SWOPSounds attachTo [_boost_man, [0, 0, 0]];

									[_SWOPSounds, _boostupsound] remoteExec ["say3D", 0, false];
									[_boost_man] execVM "\SWOP_system\client_side\Func\Jump_particle.sqf";
								};
								_boost_man setvelocity [10 * (sin (getdir _boost_man )), 12 * (cos (getdir _boost_man )), 20];
								//_boost_man setVariable ["ace_medical_allowDamage", false];
								//_damage = getDammage _boost_man;
								sleep 0.75;
								waitUntil {isTouchingGround _boost_man};
								//_boost_man setDamage _damage;
								//_boost_man setVariable [""ace_medical_allowDamage"", true];
								{
									deleteVehicle _x;
									} forEach nearestObjects [getpos _boost_man,["Land_Tableware_01_fork_F"],3];
									}else{

										titleText ["Recharging...", "PLAIN"];
										sleep 2;
										titleText ["", "PLAIN"];
									};
								};
							};
						};
						["41st Controls","fr4_pushJetPack", "Propulsion de Jetpack Controlada", {_this call fr4_fnc_jetPackPushFunction}, "", [DIK_SPACE, [true, false, false]],true] call CBA_fnc_addKeybind;
						["star wars: opposition","swop_jump", "Jetpack Jump up", {[player] spawn fr4_fnc_swopjetpackjump}, "", [DIK_SPACE, [false, true, false]],true] call CBA_fnc_addKeybind;
