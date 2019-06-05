class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Acts_AidlPercMstpSloWWpstDnon_warmup_1_loop;
		class AmovPercMstpSnonWnonDnon;
		class CutSceneAnimationBase: AmovPercMstpSnonWnonDnon
		{
			enableDirectControl = 1;
			showWeaponAim = 0;
			relSpeedMin = 1;
			relSpeedMax = 1;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			enableOptics = 0;
			head = "headNo";
			enableBinocular = 0;
			headBobMode = 5;
			headBobStrength = -1;
			forceAim = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {};
			actions = "NoActions";
		};
		class CutSceneAnimationBaseConPistola: Acts_AidlPercMstpSloWWpstDnon_warmup_1_loop
		{
		};
		class rgr_obiwan_point: CutSceneAnimationBaseConPistola
		{
			file = "st41\st41_animations\anim\cutscenes\rgr_obiwan_point.rtm";
			speed = 1;
			actions = "PistolStandActions";
			ConnectTo[] = {"rgr_obiwan_point_loop",0.01};
			InterpolateTo[] = {};
		};
		class rgr_obiwan_point_loop: CutSceneAnimationBaseConPistola
		{
			file = "st41\st41_animations\anim\cutscenes\rgr_obiwan_point_loop.rtm";
			speed = 1e-10;
			actions = "PistolStandActions";
			ConnectTo[] = {"AmovPercMstpSrasWpstDnon",0.01};
			InterpolateTo[] = {};
		};
		class rgr_pensativo: CutSceneAnimationBase
		{
			file = "st41\st41_animations\anim\cutscenes\rgr_pensativo.rtm";
			speed = 1e-10;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.01};
			InterpolateTo[] = {};
		};
		class rgr_brazoscruzados: CutSceneAnimationBase
		{
			file = "st41\st41_animations\anim\cutscenes\rgr_brazoscruzados.rtm";
			speed = 1e-10;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.01};
			InterpolateTo[] = {};
		};
		class rgr_cinturon: CutSceneAnimationBase
		{
			file = "st41\st41_animations\anim\cutscenes\rgr_Cinturon.rtm";
			speed = 1e-10;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.01};
			InterpolateTo[] = {};
		};
		class rgr_espera: CutSceneAnimationBase
		{
			file = "st41\st41_animations\anim\cutscenes\rgr_Espera.rtm";
			speed = 1e-10;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.01};
			InterpolateTo[] = {};
		};
		class rgr_facepalm: CutSceneAnimationBase
		{
			file = "st41\st41_animations\anim\cutscenes\rgr_Facepalm.rtm";
			speed = 1e-10;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.01};
			InterpolateTo[] = {};
		};
		class rgr_victoria: CutSceneAnimationBase
		{
			file = "st41\st41_animations\anim\cutscenes\rgr_Victoria.rtm";
			speed = 1e-10;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.01};
			InterpolateTo[] = {};
		};
		class rgr_meditar: CutSceneAnimationBase
		{
			file = "st41\st41_animations\anim\cutscenes\rgr_meditar.rtm";
			speed = 1;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.01};
			InterpolateTo[] = {};
		};
		class rgr_meditar_loop: CutSceneAnimationBase
		{
			file = "st41\st41_animations\anim\cutscenes\rgr_meditar_loop.rtm";
			speed = 1e-10;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.01};
			InterpolateTo[] = {};
		};
		class rgr_estrangulacion: CutSceneAnimationBase
		{
			file = "st41\st41_animations\anim\cutscenes\rgr_Estrangulacion.rtm";
			speed = 1e-10;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.01};
			InterpolateTo[] = {};
		};
		class rgr_encendido: CutSceneAnimationBaseConPistola
		{
			file = "st41\st41_animations\anim\cutscenes\rgr_EncendidoChulo.rtm";
			speed = 1e-10;
			actions = "NoActions";
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.01};
			InterpolateTo[] = {};
		};
		class rgr_firme: CutSceneAnimationBase
		{
			file = "st41\st41_animations\anim\cutscenes\rgr_firme.rtm";
			speed = 1e-10;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01};
		};
		class st41_fusilsuelo: CutSceneAnimationBaseConPistola
		{
			file = "st41\st41_animations\anim\cutscenes\st41_fusil_suelo.rtm";
			speed = 1e-10;
			actions = "NoActions";
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.01};
			InterpolateTo[] = {};
		};
		class rgr_silencio: CutSceneAnimationBaseConPistola
		{
			file = "st41\st41_animations\anim\cutscenes\rgr_silencio.rtm";
			speed = 1e-10;
			actions = "NoActions";
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.01};
			InterpolateTo[] = {};
		};
		class rgr_choquepunch: CutSceneAnimationBaseConPistola
		{
			file = "st41\st41_animations\anim\cutscenes\rgr_choquepunch.rtm";
			speed = 1e-10;
			actions = "NoActions";
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.01};
			InterpolateTo[] = {};
		};
	};
};