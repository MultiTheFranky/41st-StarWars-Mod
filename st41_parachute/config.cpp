class CfgPatches
{
	class st41_parachute
	{
		requiredaddons[] = {"A3_Weapons_F"};
		requiredversion = 1.0;
		units[] = {"st41_B_Parachute"};
		weapons[] = {""};
		magazines[] = {""};
		url = "http://41st.es";
		version = "0.0.1";
		versionAr[] = {0,0,1};
		versionStr = "0.0.1";
	};
};
class CfgVehicles
{
	class Bag_Base;
	class st41_B_Parachute: Bag_Base
	{
		author = "Franky";
		mapSize = 0.55;
		_generalMacro = "st41_B_Parachute";
		scope = 2;
		displayName = "Clon Parachute";
		icon = "iconBackpack";
		picture = "st41\st41_parachute\data\icon.paa";
		model = "st41\st41_parachute\st41_parachute";
		backpackSimulation = "ParachuteSteerable";
		ParachuteClass = "Steerable_Parachute_F";
		maximumLoad = 0;
		mass = 120;
	};
};