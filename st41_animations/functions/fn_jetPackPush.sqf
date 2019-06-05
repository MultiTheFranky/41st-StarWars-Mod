#include "\a3\editor_f\Data\Scripts\dikCodes.h"
currentNamespace setVariable ["st41_getCombustible",100];
currentNamespace setVariable ["st41_gastoCombustible",0.1];
currentNamespace setVariable ["st41_potenciaJetpack",1];
currentNamespace setVariable ["st41_jugadorVolando",false];
currentNamespace setVariable ["st41_jugadorVolandoRapido",false];
currentNamespace setVariable ["st41_gui",false];
currentNamespace setVariable ["st41_playingSound",false];
currentNamespace setVariable ["st41_effects",objNull];
[] spawn {
	while {alive player && !isNull player} do
	{
		if ((backpack player == "SWOP_B_IMPjetBackpack_Base") ||
		    (backpack player == "SWOP_B_IMPjetackpack_Base") ||
		    (backpack player == "SWOP_B_Clonejetackpack_Base") ||
		    (backpack player == "SWOP_ImpSkyBackpack") ||
		    (backpack player == "SWOP_ImpJumptroopBackpack") ||
		    (backpack player == "SWOP_JetpackFO") ||
		    (backpack player == "SWOP_mochila_bobafett") ||
		    (backpack player == "SWOP_mochila_jangofett") ||
		    (backpack player == "SWOP_mochila_red") ||
		    (backpack player == "SWOP_mochila_black") ||
		    (backpack player == "SWOP_B_CLONEDV") ||
		    (backpack player == "SWOP_B_REBjetackpack_Base") ||
		    (backpack player == "SWOP_B_REBjetSackpack_Base") ||
		    (backpack player == "SWOP_B_REBjetMackpack_Base") ||
		    (backpack player == "SWOP_B_CloneJT12_jump") ||
		    (backpack player == "SWOP_B_CloneJT12") ||
		    (backpack player == "SWOP_B_CloneJT12_104") ||
		    (backpack player == "SWOP_B_CloneJT12_black") ||
		    (backpack player == "SWOP_resistance_back_jump_b") ||
		    (backpack player == "SWOP_B_REBjetDackpack_Base")) then
{
	if (currentNamespace getVariable "st41_getCombustible" < 100 && ((getPos player) select 2) < 0.1) then
	{
		currentNamespace setVariable ["st41_getCombustible",(currentNamespace getVariable "st41_getCombustible") + (currentNamespace getVariable "st41_gastoCombustible")];
		sleep 0.1;
	};
	if (!(currentNamespace getVariable "st41_gui")) then
	{
		("st41_jetpack_gui" call BIS_fnc_rscLayer) cutRsc ["st41_jetpack_gui", "PLAIN"];
		currentNamespace setVariable ["st41_gui",true];
	};
	((((uiNamespace getVariable "st41_jetpack_gui") select 0) displayCtrl -1) progressSetPosition ((currentNamespace getVariable "st41_getCombustible")/100));
	}else{
		("st41_jetpack_gui" call BIS_fnc_rscLayer) cutText ["","PLAIN"];
		currentNamespace setVariable ["st41_gui",false];
	};
};
};
st41_fnc_jetPackPushFunction = {
	if ( (backpack player == "SWOP_B_IMPjetBackpack_Base") ||
	    (backpack player == "SWOP_B_IMPjetackpack_Base") ||
	    (backpack player == "SWOP_B_Clonejetackpack_Base") ||
	    (backpack player == "SWOP_ImpSkyBackpack") ||
	    (backpack player == "SWOP_ImpJumptroopBackpack") ||
	    (backpack player == "SWOP_JetpackFO") ||
	    (backpack player == "SWOP_mochila_bobafett") ||
	    (backpack player == "SWOP_mochila_jangofett") ||
	    (backpack player == "SWOP_mochila_red") ||
	    (backpack player == "SWOP_mochila_black") ||
	    (backpack player == "SWOP_B_CLONEDV") ||
	    (backpack player == "SWOP_B_REBjetackpack_Base") ||
	    (backpack player == "SWOP_B_REBjetSackpack_Base") ||
	    (backpack player == "SWOP_B_REBjetMackpack_Base") ||
	    (backpack player == "SWOP_B_CloneJT12_jump") ||
	    (backpack player == "SWOP_B_CloneJT12") ||
	    (backpack player == "SWOP_B_CloneJT12_104") ||
	    (backpack player == "SWOP_B_CloneJT12_black") ||
	    (backpack player == "SWOP_resistance_back_jump_b") ||
	    (backpack player == "SWOP_B_REBjetDackpack_Base") &&
	    (currentNamespace getVariable "st41_getCombustible" > 1) &&
	    (alive player) &&
	    (!(player getVariable "ACE_isUnconscious"))) then {
	//Control de acciones
	if (inputAction "TurnRight" > 0) then
	{
		"Right" call st41_fnc_jetPackPushCalculations;
	};
	if (inputAction "TurnLeft" > 0) then
	{
		"Left" call st41_fnc_jetPackPushCalculations;
	};
	if (inputAction "MoveForward" > 0) then
	{
		"Forward" call st41_fnc_jetPackPushCalculations;
	};
	if (inputAction "MoveBack" > 0) then
	{
		"Backward" call st41_fnc_jetPackPushCalculations;
	};
	if (inputAction "TurnRight" <= 0 && inputAction "TurnLeft" <= 0 && inputAction "MoveForward" <= 0 && inputAction "MoveBack" <= 0) then
	{
		"" call st41_fnc_jetPackPushCalculations;
	};
	_speed = speed player;
	if (_speed > 40 && !(currentNamespace getVariable "st41_jugadorVolandoRapido") && ((getPos player) select 2) > 10) then
	{
		[] spawn {
			player playActionNow "st41_fly_to_flyforward";
			sleep 1;
			player playActionNow "st41_flyforward";
			currentNamespace setVariable ["st41_jugadorVolandoRapido",true];
		};

	};
	if (_speed <= 10) then
	{
		player playActionNow "st41_fly_static";
		currentNamespace setVariable ["st41_jugadorVolandoRapido",false];
	};
	currentNamespace setVariable ["st41_getCombustible",(currentNamespace getVariable "st41_getCombustible") - (currentNamespace getVariable "st41_gastoCombustible")];
	if (((getPos player) select 2) > 0.1 && !(currentNamespace getVariable "st41_jugadorVolando")) then
	{
		player playActionNow "st41_fly_static";
		currentNamespace setVariable ["st41_jugadorVolando",true];

		"jetpack_start" call st41_fnc_playSound;
		call st41_fnc_engineEffectOn;
		[] spawn {
			while {alive player && !isNull player && (currentNamespace getVariable "st41_jugadorVolando")} do
			{
				if (((getPos player) select 2) <= 0.1) exitWith
				{
					currentNamespace setVariable ["st41_jugadorVolando",false];
					call st41_fnc_engineEffectOff;
					format ["jetpackStop%1", (floor random 7) + 1] call st41_fnc_playSound;
					player playActionNow 'GestureNod';
				};
				if (((getPos player) select 2) > 0.1) then
				{
					[] spawn {
						if (!(currentNamespace getVariable "st41_playingSound")) then
						{
							"jetpack_fly" call st41_fnc_playSound;
							currentNamespace setVariable ["st41_playingSound",true];
							sleep 1;
							currentNamespace setVariable ["st41_playingSound",false];
						};
					};
				};
			};
		};
	};
};
};

st41_fnc_jetPackPushCalculations = {
	_vel = velocity player;
	_dir = direction player;
	_speed = currentNamespace getVariable "st41_potenciaJetpack";

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
st41_fnc_engineEffectOn = {
	_array = [];
	//Fuego izq
	_source01 = "#particlesource" createVehicle (getposATL player);
	_source01 setParticleClass "st41_JetPackFire";
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
	_source02 setParticleClass "st41_JetPackFire";
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
	currentNamespace setVariable ["st41_effects",_array];
};
st41_fnc_engineEffectOff = {
	{
		deleteVehicle _x;
		} forEach (currentNamespace getVariable "st41_effects");
	};
	st41_fnc_swopjetpackjump = {
		_stanceplayer = stance player;
		_boostupsound = selectRandom ["jet1","jet2","jet3","jet4"];
		_boostlandsound = selectRandom ["jetpackStop1","jetpackStop2","jetpackStop3","jetpackStop4","jetpackStop5","jetpackStop6","jetpackStop7"];
		if (_stanceplayer == "prone") exitWith {
			titleText ["You cant use a Jetpack while prone!", "PLAIN"];
			sleep 2;
			titleText ["", "PLAIN"];
		};

		if (
		    (backpack player == "SWOP_B_IMPjetBackpack_Base") or
		    (backpack player == "SWOP_B_IMPjetackpack_Base") or
		    (backpack player == "SWOP_B_Clonejetackpack_Base") or
		    (backpack player == "SWOP_ImpSkyBackpack") or
		    (backpack player == "SWOP_ImpJumptroopBackpack") or
		    (backpack player == "SWOP_JetpackFO") or
		    (backpack player == "SWOP_mochila_bobafett") or
		    (backpack player == "SWOP_mochila_jangofett") or
		    (backpack player == "SWOP_mochila_red") or
		    (backpack player == "SWOP_mochila_black") or
		    (backpack player == "SWOP_B_CLONEDV") or
		    (backpack player == "SWOP_B_REBjetackpack_Base") or
		    (backpack player == "SWOP_B_REBjetSackpack_Base") or
		    (backpack player == "SWOP_B_REBjetMackpack_Base") or
		    (backpack player == "SWOP_B_CloneJT12_jump") or
		    (backpack player == "SWOP_B_CloneJT12") or
		    (backpack player == "SWOP_B_CloneJT12_104") or
		    (backpack player == "SWOP_B_CloneJT12_black") or
		    (backpack player == "SWOP_resistance_back_jump_b") or
		    (backpack player == "SWOP_B_REBjetDackpack_Base")

		    ) then {
	if (isTouchingGround player) then {
		if (Boost >= 50) then {
			Boost = Boost - 50;
			if (vehicle player != player) then {hint "You are in a vehicle"}else{
				{
					deleteVehicle _x;
					} forEach nearestObjects [getpos player,["Land_HelipadEmpty_F"],3];
					_SWOPSounds = "Land_HelipadEmpty_F" createVehicle getPosWorld player;
					_SWOPSounds attachTo [player, [0, 0, 0]];

					[_SWOPSounds, _boostupsound] remoteExec ["say3D", 0, false];
					[player] execVM "\SWOP_system\client_side\Func\Jump_particle.sqf";
				};
				player setvelocity [10 * (sin (getdir player )), 12 * (cos (getdir player )), 20];
				//_damage = getDammage player;
				//player setVariable [""ace_medical_allowDamage"", false];
				sleep 0.4;
				waitUntil {isTouchingGround player};
				if (vehicle player != player) then {hintSilent ""}else{
					{
						deleteVehicle _x;
						} forEach nearestObjects [getpos player,["Land_HelipadEmpty_F"],3];
						_SWOPSounds = "Land_HelipadEmpty_F" createVehicle getPosWorld player;
						_SWOPSounds attachTo [player, [0, 0, 0]];

						[_SWOPSounds, _boostlandsound] remoteExec ["say3D", 0, false];
					};
					//player setDamage _damage;
					//player setVariable ["ace_medical_allowDamage", true];

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
									} forEach nearestObjects [getpos player,["Land_HelipadEmpty_F"],3];
									_SWOPSounds = "Land_HelipadEmpty_F" createVehicle getPosWorld player;
									_SWOPSounds attachTo [player, [0, 0, 0]];

									[_SWOPSounds, _boostupsound] remoteExec ["say3D", 0, false];
									[player] execVM "\SWOP_system\client_side\Func\Jump_particle.sqf";
								};
								player setvelocity [10 * (sin (getdir player )), 12 * (cos (getdir player )), 20];
								//player setVariable ["ace_medical_allowDamage", false];
								//_damage = getDammage player;
								sleep 0.75;
								waitUntil {isTouchingGround player};
								//player setDamage _damage;
								//player setVariable [""ace_medical_allowDamage"", true];
								{
									deleteVehicle _x;
									} forEach nearestObjects [getpos player,["Land_Tableware_01_fork_F"],3];
									}else{

										titleText ["Recharging...", "PLAIN"];
										sleep 2;
										titleText ["", "PLAIN"];
									};
								};
							};
						};
						["41st Controls","st41_pushJetPack", "Propulsion de Jetpack Controlada", {_this spawn st41_fnc_jetPackPushFunction}, "", [DIK_SPACE, [true, false, false]],true] call CBA_fnc_addKeybind;
						["star wars: opposition","swop_jump", "Jetpack Jump up", {_this spawn st41_fnc_swopjetpackjump}, "", [DIK_SPACE, [false, true, false]],true] call CBA_fnc_addKeybind;
