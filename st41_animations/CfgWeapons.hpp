class CfgWeapons
{
	class swop_green_lightsaber;
	class SWOP_Clonetrooper_ARF41_helmet;
	class st41_EvanKev_Lightsaber: swop_green_lightsaber
	{
		//model = "\KA_NAP\KA_Officer_Sword.p3d"; //TODO
		//picture = "\KA_NAP\UI\KA_Officer_Sword.paa"; //TODO
		author = "Fr4nKy";
		displayname = "Lightsaber - Evan Kev";
		descriptionShort = "Sable de luz perteneciente a Evan Kev"; //TODO
	};

	class st41_Clonetrooper_ARF41_helmet_withradio: SWOP_Clonetrooper_ARF41_helmet
	{
		displayName = "Casco con Radio Larga";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 20000;
		picture = "\SWOP_clones\data\helmets\ico\ico_arf.paa";
	};
};