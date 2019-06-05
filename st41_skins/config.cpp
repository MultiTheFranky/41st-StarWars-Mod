class CfgPatches {
	class st41_skins {
		name = "st41 - Skins Mod";
		author = "Zackyr";
		url = "http://41st.es";
		units[] = {"st41_Madfly1_p1","st41_ARCLTE_p1"};
		requiredaddons[] = {"SWOP_Main"};
		weapons[] = {"st41_Lion_Vest","st41_Rex_Vest","st41_Space_Vest","st41_Sergeant_Vest","st41_Drakon_Vest","st41_Zackyr_Vest","st41_Careniar_Vest",
		,"st41_Dragonhaze_Vest","st41_Bit_Vest","st41_Eco_Vest","st41_ARC_Vest","st41_ARC_Fives_Vest","st41_ARC_Fives_Vest1","st41_ARC_Madfly_Vest",
		"st41_ARC_Madfly_Vest1","st41_ARC_Ironback_Vest","st41_ARC_Ironback_Vest1","st41_ARC_Zackyr_Vest","st41_ARC_Echo_Vest","st41_ARCDOC_Vest",
		"st41_CM_Vest","st41_DOC_Vest","st41_ARF_Helmet","Rash_Helmet","Nova_Helmet","Bit_Helmet","Rash_Helmet2","Lion_Helmet","Lion_Helmet2",
		"Fives_Helmet","Fives_Helmet2","Fives_Helmet3","Spachito_Helmet3","NecroLd_Helmet","NecroLd_Helmet1","Rex_Helmet","Rex_Helmet1","Rex_Helmet2",
		"Rex_Helmet3","Madfly_Helmet2","Madfly_Helmet2","Maqui_Helmet","Dragonhaze_Helmet","Echo_Helmet","Echo_Helmet1","Echo_Helmet2","Echo_Helmet3",
		"Drakon_Helmet","Drakon_Helmet2","Ironback_Helmet","Ironback_Helmet1","Ironback_Helmet2","Flichmon_Helmet","Stormbringer_Helmet","Stormbringer_Helmet2",
		"Zackyr_Helmet1","Zackyr_Helmet2","Zackyr_Helmet3","Zeta_Helmet1","Zass_Helmet","Zass_Helmet1","Zass_Helmet2","Zev_Helmet","Zev_Helmet4","Zev_Helmet1",
		"Ranger_Helmet","Ranger_Helmet2","Alkenh_Helmet","Kelmet_Helmet1","Chisco_Helmet","Bit_Helmet2","Careniar_Helmet","Frostmure_Helmet","st41_Sergeant_Helmet",
		"st41_Corporal_Helmet","st41_Gunner_Helmet","st41_Engineer_Helmet","st41_RTO_Helmet","st41_Heavy_Helmet","st41_Marksman_Helmet","st41_Trooper_Helmet",
		"st41_CombatMedic_Helmet","st41_Doc_Helmet","st41_Krayt_Cadet","st41_Krayt_Pilot","st41_Krayt_Idiem","KRAYTHelmet_Fives","KRAYTHelmet_Spache",
		"KRAYTHelmet_Spache1"};
		version = "0.0.1";
		versionAr[] = {0,0,1};
		versionStr = "0.0.1";
		requiredversion = 1.60;
	};
};
class CfgFactionClasses {
	class st41_clones_p1 {
		displayName = "41st - Skins";
	};
};
class CfgEditorSubcategories {
	class st41_categ_p1 {
		displayName = "41st Clones Fase 1"; //if you want to make custom subcategories under your faction like "men" or "vehicles"
	};
};

class CfgWeapons {
	//Vest
	class SWOP_Clonetrooper_armor_kama_antenna;
	class st41_Lion_Vest: SWOP_Clonetrooper_armor_kama_antenna {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Commander Lion Vest";
		//picture = "\st41\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\41stVestLion.paa","\st41\st41_skins\images\skins\armor\spec2_co.paa","\st41\st41_skins\images\skins\armor\spec1_co.paa","\st41\st41_skins\images\skins\armor\spec2_co.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_Rex_Vest: SWOP_Clonetrooper_armor_kama_antenna {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Lieutenant Rex Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\Vest41Rex1.paa","\st41\st41_skins\images\skins\armor\spec2_co.paa","\st41\st41_skins\images\skins\armor\spec2Rex1.paa","\st41\st41_skins\images\skins\armor\spec2_co.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_Space_Vest: SWOP_Clonetrooper_armor_kama_antenna {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Captain Space Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\Vest41Space1.paa","\st41\st41_skins\images\skins\armor\spec2_co.paa","\st41\st41_skins\images\skins\armor\spec2Space1.paa","\st41\st41_skins\images\skins\armor\spec2_co.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class SWOP_Clonetrooper_41camo1_armor_recon2;
	class st41_Sergeant_Vest: SWOP_Clonetrooper_41camo1_armor_recon2 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Sergeants Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\body41_co.paa","\st41\st41_skins\images\skins\armor\spec1_co.paa","\st41\st41_skins\images\skins\armor\spec1_co.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_Drakon_Vest: SWOP_Clonetrooper_41camo1_armor_recon2 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Sergeant Drakon Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\vest41drakon1.paa","\st41\st41_skins\images\skins\armor\spec1_co.paa","\st41\st41_skins\images\skins\armor\spec1_co.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_Zackyr_Vest: SWOP_Clonetrooper_41camo1_armor_recon2 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Sergeant Zackyr Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\vest41Zackyr1.paa","\st41\st41_skins\images\skins\armor\spec1_co.paa","\st41\st41_skins\images\skins\armor\spec1_co.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_Careniar_Vest: SWOP_Clonetrooper_41camo1_armor_recon2 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Careniar Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\vest41careniar1.paa","\st41\st41_skins\images\skins\armor\spec1_co.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_Dragonhaze_Vest: SWOP_Clonetrooper_41camo1_armor_recon2 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Dragonhaze Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\vest41dragon1.paa","\st41\st41_skins\images\skins\armor\spec1_co.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_Bit_Vest: SWOP_Clonetrooper_41camo1_armor_recon2 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Bit Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\vest41bit1.paa","\st41\st41_skins\images\skins\armor\spec1_co.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_Eco_Vest: SWOP_Clonetrooper_41camo1_armor_recon2 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Eco Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\vest41eco1.paa","\st41\st41_skins\images\skins\armor\spec1_co.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class SWOP_Clonetrooper_armor_pauldronsARC;
	class st41_ARC_Vest: SWOP_Clonetrooper_armor_pauldronsARC {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st ARC Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\41stVestLion.paa","\st41\st41_skins\images\skins\armor\spec2_co.paa","\st41\st41_skins\images\skins\armor\spec1_co.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_ARC_Fives_Vest: SWOP_Clonetrooper_armor_pauldronsARC {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st ARC Captain Fives Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\vest41Fives1.paa","\st41\st41_skins\images\skins\armor\spec2fives1.paa","\st41\st41_skins\images\skins\armor\spec1fives1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_ARC_Fives_Vest1: SWOP_Clonetrooper_armor_pauldronsARC {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st ARC 2nd Lt Fives Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\vest41Fives2.paa","\st41\st41_skins\images\skins\armor\spec2Iron1.paa","\st41\st41_skins\images\skins\armor\spec1fives2.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_ARC_Madfly_Vest: SWOP_Clonetrooper_armor_pauldronsARC {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st ARC Sergeant Madfly Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\vest41Madfly1.paa","\st41\st41_skins\images\skins\armor\spec2Madfly1.paa","\st41\st41_skins\images\skins\armor\spec1Madfly1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_ARC_Madfly_Vest1: SWOP_Clonetrooper_armor_pauldronsARC {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st ARC Captain Madfly Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\vest41Madfly2.paa","\st41\st41_skins\images\skins\armor\spec2fives1.paa","\st41\st41_skins\images\skins\armor\spec1Madfly2.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_ARC_Ironback_Vest: SWOP_Clonetrooper_armor_pauldronsARC {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st ARC Sergeant Ironback Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\vest41Iron1.paa","\st41\st41_skins\images\skins\armor\spec2Madfly1.paa","\st41\st41_skins\images\skins\armor\spec1_co.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_ARC_Ironback_Vest1: SWOP_Clonetrooper_armor_pauldronsARC {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st ARC 2nd Lt. Ironback Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\vest41Iron2.paa","\st41\st41_skins\images\skins\armor\spec2Iron1.paa","\st41\st41_skins\images\skins\armor\spec1Iron1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_ARC_Zackyr_Vest: SWOP_Clonetrooper_armor_pauldronsARC {
		author = "Zackyr";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st ARC 2nd Lt. Zackyr Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\vest41zackyr2.paa","\st41\st41_skins\images\skins\armor\spec2arc.paa","\st41\st41_skins\images\skins\armor\spec1Zackyr2.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_ARC_Echo_Vest: SWOP_Clonetrooper_armor_pauldronsARC {
		author = "Zackyr";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st ARC 2nd Lt. Echo Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\vest41echo2.paa","\st41\st41_skins\images\skins\armor\spec2arc.paa","\st41\st41_skins\images\skins\armor\spec41kamaarc.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_ARCDOC_Vest: SWOP_Clonetrooper_armor_pauldronsARC {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st ARCDOC Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\armor41ARCDOC.paa","\st41\st41_skins\images\skins\armor\spec2_co.paa","\st41\st41_skins\images\skins\armor\spec1_co.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class SWOP_Clonetrooper_41_armor;
	class st41_CM_Vest: SWOP_Clonetrooper_41_armor {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st CM Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\armor41CM.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_DOC_Vest: SWOP_Clonetrooper_41_armor {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st DOC Vest";
		//picture = "\st41\st41_skins\icons\Ico_armor.paa";
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\armor41Doc.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	//UNIFORMES
	class SWOP_Clonetrooper_41_F_combatUniform;
	class UniformItem;
	class st41_Madfly_Uniform: SWOP_Clonetrooper_41_F_combatUniform
	{
		author = "Alvi";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Sergeant Madfly Uniform";
		class ItemInfo: UniformItem
		{
			Armor = 10;
			uniformModel = "-";
			uniformClass = "st41_Madfly1_p1";
			containerClass = "Supply100";
			mass = 40;
			modelSides[] = {6};
			scope = 2;
			type = 801;
			uniformType = "Neopren";
		};
	};
//	class st41_ARCLTE_Uniform: SWOP_Clonetrooper_41_F_combatUniform
//	{
//		author = "Zackyr";
//		scope = 2;
//		scopeArsenal = 2;
//		displayName = "41st Lieutenant Uniform";
//		class ItemInfo: UniformItem
//		{
//			Armor = 10;
//			uniformModel = "-";
//			uniformClass = "st41_ARCLTE_p1";
//			containerClass = "Supply100";
//			mass = 40;
//			modelSides[] = {6};
//			scope = 2;
//			type = 801;
//			uniformType = "Neopren";
//		};
//	};
	//ARF helmet
	class SWOP_Clonetrooper_ARF_helmet;
	class st41_ARF_Helmet: SWOP_Clonetrooper_ARF_helmet {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st ARF";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\41stARF.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Rash_Helmet: SWOP_Clonetrooper_ARF_helmet {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Rash";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\rash-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Nova_Helmet: SWOP_Clonetrooper_ARF_helmet {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Trooper Nova";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\nova-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Bit_Helmet: SWOP_Clonetrooper_ARF_helmet {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Bit";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\bit-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Rash_Helmet2: SWOP_Clonetrooper_ARF_helmet {
		author = "Zackyr";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Sgt Rash";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\rash-helmet2.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	//helmet Lion
	class SWOP_Clonetrooper_helmet_p1;
	class Lion_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Captain Lion";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\lion-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Lion_Helmet2: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Commander Lion";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\lion-helmet2.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	//helmet Fives
	class Fives_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Sgt Fives";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\fives-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Fives_Helmet2: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Captain Fives";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\fives-helmet2.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Fives_Helmet3: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st 2nd Lt. Fives";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\fives-helmet3.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Spachito_Helmet3: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Squadron Commander Space";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\spachito-helmet3.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class NecroLd_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal NecroLd";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\necrold-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class NecroLd_Helmet1: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Sergeant NecroLd";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\necrold-helmet2.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Rex_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Rex";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\rex-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Rex_Helmet1: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Sgt Rex";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\rex-helmet2.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Rex_Helmet2: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Lieutenant Rex";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\rex-helmet3.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Rex_Helmet3: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Lieutenant Rex v2";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\rex-helmet4.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Madfly_Helmet2: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Sgt Madfly";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\madfly-helmet2.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Madfly_Helmet3: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Captain Madfly";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\madfly-helmet3.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Maqui_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Maqui";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\maqui-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Dragonhaze_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Dragonhaze";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\dragon-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Echo_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Echo";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\echo-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Echo_Helmet1: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Echo";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\echo-helmet2.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Echo_Helmet2: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Sergeant Echo";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\echo-helmet3.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Echo_Helmet3: SWOP_Clonetrooper_helmet_p1 {
		author = "Zackyr";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st 2nd Lt. Echo";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\echo-helmet4.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Drakon_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Drakon";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\drakon-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Drakon_Helmet2: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Sergeant Drakon";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\drakon-helmet2.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Ironback_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Ironback";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\iron-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Ironback_Helmet1: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Sgt Ironback";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\iron-helmet2.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Ironback_Helmet2: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st 2nd Lt. Ironback";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\iron-helmet3.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Flichmon_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Flichmon";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\flich-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Stormbringer_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Stormbringer";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\storm-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Stormbringer_Helmet2: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Sergeant Stormbringer";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\storm-helmet2.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Zackyr_Helmet1: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Trooper Zackyr";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\zackyr-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Zackyr_Helmet2: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Zackyr";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\zackyr-helmet2.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Zackyr_Helmet3: SWOP_Clonetrooper_helmet_p1 {
		author = "Zackyr";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st 2nd Lt. Zackyr";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\zackyr-helmet3.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Zeta_Helmet1: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Trooper Zeta";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\zeta-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Zass_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Trooper Zass";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\zass-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Zass_Helmet1: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Zass";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\zass-helmet2.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Zass_Helmet2: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Zass 2";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\zass-helmet3.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Zev_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Trooper Zev";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\zev-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Zev_Helmet4: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Sergeant Zass";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\zass-helmet4.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Zev_Helmet1: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Zev";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\zev-helmet2.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Ranger_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Trooper Ranger";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\ranger-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Ranger_Helmet2: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Ranger";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\ranger-helmet2.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Alkenh_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Trooper Alkenh";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\alkenh-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Kelmet_Helmet1: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Trooper Klemet";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\klemet-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Chisco_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Trooper Chisco";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\chisco-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Bit_Helmet2: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Bit";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\bit-helmet2.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Careniar_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal Careniar";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\careniar-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class Frostmure_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Trooper Frostmure";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\frostmure-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	//helmet Corporal
	class st41_Sergeant_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Sergeant";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\41stSergeant.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	//helmet Corporal
	class st41_Corporal_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Corporal";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\41stCorporal.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	//helmet Gunner
	class st41_Gunner_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Gunner";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\41stGunner.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	//helmet Engineer
	class st41_Engineer_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Engineer";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\41stEngineer.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	//helmet RTO
	class st41_RTO_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st RTO";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\41stRTO.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_Heavy_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Heavy";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\41stHeavy.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_Marksman_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Marksman";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\41stMarksman.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_Trooper_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Trooper";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\41stTrooper.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_CombatMedic_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Combat Medic";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\41stCombatMedic.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_Doc_Helmet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Doc";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\41stDOC.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_Krayt_Cadet: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Krayt Cadet";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\Krayt-cadet.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_Krayt_Pilot: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Krayt Pilot";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\Krayt-pilot.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class st41_Krayt_Idiem: SWOP_Clonetrooper_helmet_p1 {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Krayt Idiem";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\idiem-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	//Thunder-Platoon Pilot helmet//
	class SWOP_Clonetrooper_pilot_helmet;
	class KRAYTHelmet_Fives: SWOP_Clonetrooper_pilot_helmet {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Blue Krayt MadFly";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\madfly-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class KRAYTHelmet_Spache: SWOP_Clonetrooper_pilot_helmet {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Blue Krayt Space";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\spachito-helmet1.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
	class KRAYTHelmet_Spache1: SWOP_Clonetrooper_pilot_helmet {
		author = "Lion";
		scope = 2;
		scopeArsenal = 2;
		displayName = "41st Krayt - Squadron Leader Space";
		//picture = "\st41\st41_skins\icons\Ico_helm.paa";
		subItems[] = {"SWOP_Clones_HUD"};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\helmets\spachito-helmet2.paa"}; //like "\YourAddon\YourFolder\Helmet.paa"
	};
};
class CfgVehicles
{
	class SWOP_Clonetrooper_41_F;
	class st41_Madfly1_p1: SWOP_Clonetrooper_41_F
	{
		author = "Alvi";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "41st Captain Madfly ARC";
		faction = "st41_clones_p1";
		editorSubcategory = "st41_categ_p1";
		backpack = "";
		uniformClass = "st41_Madfly_Uniform";
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\vest41Madfly2.paa"};
		hiddenSelections[] = {"Camo1"};
	};
//	class st41_ARCLTE_p1: SWOP_Clonetrooper_41_F
//	{
//		author = "Zackyr";
//		scope = 2;
//		scopeCurator = 2;
//		scopeArsenal = 2;
//		displayName = "41st Lieutenant ARC";
//		faction = "st41_clones_p1";
//		editorSubcategory = "st41_categ_p1";
//		backpack = "";
//		uniformClass = "st41_ARCLTE_Uniform";
//		linkedItems[] = {};
//		respawnLinkedItems[] = {};
//		hiddenSelectionsTextures[] = {"\st41\st41_skins\images\skins\armor\vest41ARClte.paa"};
//		hiddenSelections[] = {"Camo1"};
//	};
};