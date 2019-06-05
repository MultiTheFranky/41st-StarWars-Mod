private ["_result", "_helmet"];
_result = [];
_helmet = headgear _this;
if (([_helmet, "tf_hasLRradio", 0] call TFAR_fnc_getConfigPropertyHelmet) == 1) then {
	if (isNil {currentNamespace getVariable "fr4_radioActual_helmet"}) then
	{
		currentNamespace setVariable ["fr4_radioActual_helmet",_helmet];
	};
	if (isNil {currentNamespace getVariable "fr4_radioActual_helmetObject"}) then
	{
		_radio_object = "fr4_radio_helmet" createVehicle ASLToAGL getPosWorld TFAR_currentUnit;
		_radio_object attachTo [TFAR_currentUnit,[0,0,1.8]];
		currentNamespace setVariable ["fr4_radioActual_helmetObject",_radio_object];
	};
	_result = [currentNamespace getVariable "fr4_radioActual_helmetObject", "radio_settings"];
};
_result