class CfgPatches
{
	class st41_weapons
	{
		requiredaddons[] = {"A3_Weapons_F","SWOP_main"};
		requiredversion = 1.0;
		units[] = {""};
		weapons[] = {"st41_EvanKev_Lightsaber"};
		magazines[] = {""};
		url = "http://41st.es";
		version = "0.0.1";
		versionAr[] = {0,0,1};
		versionStr = "0.0.1";
	};
};
class CfgWeapons
{
	class swop_green_lightsaber;
	class st41_EvanKev_Lightsaber: swop_green_lightsaber
	{
		model = "\st41\st41_weapons\st41_saber.p3d"; //TODO
		//picture = "\KA_NAP\UI\KA_Officer_Sword.paa"; //TODO
		author = "Fr4nKy";
		displayname = "Lightsaber - Evan Kev";
		descriptionShort = "Sable de luz perteneciente a Evan Kev"; //TODO
	};
};