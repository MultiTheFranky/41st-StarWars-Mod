class CfgFunctions {
	class st41_animations {
		tag = "st41";
		class functions	{
			file = "st41\st41_animations\functions";
			class preInit {
				preInit = 1;
			};
			class postInit {
				postInit = 1;
			};
			class startMusic {};
			class stopMusic {};
			class setRandomBackground {};
			class progressMap {};
			class openWebPage {};
			class jetPackPush {postInit = 1;};
			class preStart {
				preStart = 1;
			};
		};
	};
	class CAA {
		class Bootstrap {
			class preInitClient {
				preInit = 0;
			};
		};
	};
	class full_mission_load {
		class functions {
			file = "st41\st41_animations\functions";
			class load {};
		};
	};
	class TFAR
	{
		class Radio
		{
			file = "st41\st41_animations\tfarfunctions";
			class helmetLr {};
			class getConfigPropertyHelmet {};
		};
	};
};