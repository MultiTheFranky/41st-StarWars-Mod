/*
 	Name: TFAR_fnc_getVehicleSide

 	Author(s):
		NKey

 	Description:
		Returns the side of the vehicle, based on the vehicle model and not who has captured it.
		Also takes into account a variable on the vehicle (tf_side)

 	Parameters:
		OBJECT: vehicle

 	Returns:
		SIDE: side of vehicle

 	Example:
		_vehicleSide = (vehicle player) call TFAR_fnc_getVehicleSide;
*/
private ["_result", "_side"];
_side = _this getVariable "tf_side";
if !(isNil "_side") then {
	switch(_side) do {
		case "west": {
			_result = west;
		};
		case "east": {
			_result = east;
		};
		default {
			_result = resistance;
		};
	};
} else {
	if (!isNil(currentNamespace getVariable "fr4_radioActual_helmet")) then
	{
		_result = west;
	}else{
		_result = (getNumber(configFile >> "CfgVehicles" >> typeOf(_this) >> "side")) call BIS_fnc_sideType;
	};
};
if (isNil "_result") then
{
	_result = west;
};
_result