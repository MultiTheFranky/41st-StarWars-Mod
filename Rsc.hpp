class RscDisplayStart: RscStandardDisplay
{
	onLoad="[2] call compile preprocessfilelinenumbers gettext (configfile >> 'CfgFunctions' >> 'init');[1201,(_this) select 0,'RscDisplayStart'] call (uinamespace getvariable 'fr4_fnc_setRandomBackground');[1202,(_this) select 0,'RscDisplayStart'] call (uinamespace getvariable 'fr4_fnc_setRandomBackground');";
	onUnload="['onUnload',_this,'RscDisplayLoading'] call (uiNamespace getVariable 'full_mission_load_fnc_load')";

	class controlsBackground
	{
		class CA_Vignette: RscVignette
		{
			colorText[]={0,0,0,1};
		};
		class Map: RscPicture
		{
			idc=999;
			text="#(argb,8,8,3)color(0,0,0,1)";
			colorText[]={1,1,1,0.1};
			x="safezoneX";
			y="safezoneY - (safezoneW * 4/3) / 4";
			w="safezoneW";
			h="safezoneW * 4/3";
		};
		class Noise: RscPicture
		{
			idc=1202;
			text="";
			colorText[]={1,1,1,0.9};
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneH";
		};
	};

	class controls
	{
		delete Text;
		delete Progress;
		delete Progress2;
		class LoadingStart: RscControlsGroup
		{
			idc = 2310;
			x = "0 * safezoneW + safezoneX";
			y = "0 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "1 * safezoneH";
			class controls
			{
				class Black: RscText
				{
					idc = 1000;
					x = "0 * safezoneW";
					y = "0 * safezoneH";
					w = "1 * safezoneW";
					h = "1 * safezoneH";
					colorBackground[] = {0,0,0,1};
				};
				class Noise: RscPicture
				{
					idc = 1201;
					text = "";
					x = "0 * safezoneW";
					y = "0 * safezoneH";
					w = "1 * safezoneW";
					h = "1 * safezoneH";
				};
				class Logo: RscPictureKeepAspect
				{
					idc = 1200;
					text = "\fr4_starwars_animations\data\41st_logo.paa";
					x = "0.25 * safezoneW";
					y = "0.3125 * safezoneH";
					w = "0.5 * safezoneW";
					h = "0.25 * safezoneH";
					onLoad = "if (395180 in getDLCs 1) then {(_this select 0) ctrlsettext '\fr4_starwars_animations\data\41st_logo.paa';};";
				};
			};
		};
	};
};
class RscDisplayLoadMission: RscStandardDisplay
{
	onLoad="['onload',_this,'RscDisplayLoading'] call (uiNamespace getVariable 'full_mission_load_fnc_load');[654,(_this) select 0,'RscDisplayLoadMission'] call (uinamespace getvariable 'fr4_fnc_setRandomBackground');[999,(_this) select 0,'RscDisplayLoadMission'] call (uinamespace getvariable 'fr4_fnc_setRandomBackground');[1201,(_this) select 0,'RscDisplayLoadMission'] call (uinamespace getvariable 'fr4_fnc_setRandomBackground');call (uiNamespace getVariable 'fr4_fnc_stopMusic');uiNamespace setVariable ['fr4_vueltaMenu',true];";
	onUnload="[""onUnload"",_this,""RscDisplayLoading""] call (uiNamespace getVariable 'full_mission_load_fnc_load')";
	class controlsBackground
	{
		class CA_Vignette: RscVignette
		{
			colorText[]={0,0,0,1};
		};
		class Map: RscPicture
		{
			idc=999;
			text="#(argb,8,8,3)color(0,0,0,1)";
			colorText[]={1,1,1,0};
			x="safezoneX";
			y="safezoneY - (safezoneW * 4/3) / 4";
			w="safezoneW";
			h="safezoneW * 4/3";
		};
		class Noise: RscPicture
		{
			idc=654;
			text="";
			colorText[]={1,1,1,1};
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneH";
		};
	};
	class controls
	{
		delete Title;
		delete Name;
		delete Briefing;
		delete Progress;
		delete Progress2;
		delete Date;
		class MapBackTop: RscText
		{
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			idc = 1000;
			h = "2.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0};
		};
		class MapName: RscText
		{
			x = "safezoneX + 0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY";
			w = "safezoneW - 0.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			idc = 1001;
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ProgressNameMap: RscStructuredText
		{
			style = 2;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			class Attributes
			{
				size = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				align = "right";
			};
			idc = 2421;
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ProgressNameMission: RscStructuredText
		{
			style = 2;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			class Attributes
			{
				size = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				align = "center";
			};
			idc = 2354;
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class MapAuthor: RscText
		{
			x = "safezoneX + 0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY + 1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			font = "RobotoCondensedLight";
			idc = 1002;
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorText[] = {1,1,1,0.5};
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class MapBackBottom: RscText
		{
			x = "safezoneX";
			y = "safezoneY + safezoneH - 2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "safezoneW";
			idc = 1003;
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.6};
		};
		class MapDescription: RscStructuredText
		{
			style = 2;
			x = 0;
			y = "safezoneY + safezoneH - 1.75 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = 1;
			class Attributes
			{
				size = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				align = "center";
			};
			idc = 1102;
			h = "1.75 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ProgressMap: RscProgress
		{
			colorBar[] = {};
			texture = "\fr4_starwars_animations\data\loadingSword.paa";
			x = "safezoneX + 0.6";
			y = "safezoneY - 0.1";
			w = "safezoneW - 0.6";
			idc = 104;
			h = "6.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ProgressMission: ProgressMap
		{
			idc = 1013;
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class LoadingStart: RscControlsGroup
		{
			idc = 2310;
			x = "0 * safezoneW + safezoneX";
			y = "0 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "1 * safezoneH";
			class controls
			{
				class Black: RscText
				{
					idc = 1000;
					x = "0 * safezoneW";
					y = "0 * safezoneH";
					w = "1 * safezoneW";
					h = "1 * safezoneH";
					colorBackground[] = {0,0,0,1};
				};
				class Noise: RscPicture
				{
					idc = 1201;
					text = "";
					x = "0 * safezoneW";
					y = "0 * safezoneH";
					w = "1 * safezoneW";
					h = "1 * safezoneH";
				};
				class Logo: RscPictureKeepAspect
				{
					idc = 1200;
					text = "\fr4_starwars_animations\data\41st_logo_big.paa";
					x = "0.25 * safezoneW";
					y = "0.3125 * safezoneH";
					w = "0.5 * safezoneW";
					h = "0.25 * safezoneH";
					onLoad = "if (395180 in getDLCs 1) then {(_this select 0) ctrlsettext '\a3\Ui_f\Data\Logos\arma3apex_white_ca.paa';};";
				};
			};
		};
	};
};
class RscDisplayLoading
{
	onLoad="['onload',_this,'RscDisplayLoading'] call (uiNamespace getVariable 'full_mission_load_fnc_load');[102,(_this) select 0,'RscDisplayLoading'] call (uinamespace getvariable 'fr4_fnc_setRandomBackground')}";
	onUnload="[""onUnload"",_this,""RscDisplayLoading""] call (uiNamespace getVariable 'full_mission_load_fnc_load');uiNamespace setVariable ['fr4_vueltaMenu',true]";

	class controlsBackground
	{
		class CA_Vignette: RscVignette
		{
			colorText[]={0,0,0,1};
		};
		class Map: RscPicture
		{
			idc=999;
			text="#(argb,8,8,3)color(0,0,0,1)";
			colorText[]={1,1,1,0.1};
			x="safezoneX";
			y="safezoneY - (safezoneW * 4/3) / 4";
			w="safezoneW";
			h="safezoneW * 4/3";
		};
		class Noise: RscPicture
		{
			idc=102;
			text="";
			colorText[]={1,1,1,0.9};
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneH";
		};
	};
};
class RscDisplayNotFreeze: RscStandardDisplay
{
	onLoad="['onload',_this,'RscDisplayNotFreeze'] call (uiNamespace getVariable 'full_mission_load_fnc_load');[102,(_this) select 0,'RscDisplayNotFreeze'] call (uinamespace getvariable 'fr4_fnc_setRandomBackground');[1201,(_this) select 0,'RscDisplayNotFreeze'] call (uinamespace getvariable 'fr4_fnc_setRandomBackground')";
	onUnload="[""onUnload"",_this,""RscDisplayNotFreeze""] call (uiNamespace getVariable 'full_mission_load_fnc_load')";

	class controlsBackground
	{
		class CA_Vignette: RscVignette
		{
			colorText[]={0,0,0,1};
		};
		class Map: RscPicture
		{
			idc=999;
			text="#(argb,8,8,3)color(1,0,0,1)";
			colorText[]={1,1,1,0.1};
			x="safezoneX";
			y="safezoneY - (safezoneW * 4/3) / 4";
			w="safezoneW";
			h="safezoneW * 4/3";
		};
		class Noise: RscPicture
		{
			idc=102;
			text="";
			colorText[]={1,1,1,0.9};
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneH";
		};
	};
	class controls
	{
		delete Progress2;
		delete Name;
		delete Date;
		delete Title;
		delete Progress;
		delete Briefing;
		delete Text;
		class MapBackTop: RscText
		{
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			idc = 1000;
			h = "2.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0};
		};
		class MapName: RscText
		{
			x = "safezoneX + 0.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "safezoneY";
			w = "safezoneW - 0.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			idc = 1001;
			h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class MapBackBottom: RscText
		{
			x = "safezoneX";
			y = "safezoneY + safezoneH - 2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "safezoneW";
			idc = 1003;
			h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.6};
		};
		class MapDescription: RscStructuredText
		{
			style = 2;
			x = 0;
			y = "safezoneY + safezoneH - 1.75 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = 1;
			class Attributes
			{
				size = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				align = "center";
			};
			idc = 1102;
			h = "1.75 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ProgressMap: RscProgress
		{
			colorBar[] = {};
			texture = "\fr4_starwars_animations\data\loadingSword.paa";
			x = "safezoneX + 0.6";
			y = "safezoneY - 0.1";
			w = "safezoneW - 0.6";
			idc = 104;
			h = "6.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ProgressMission: ProgressMap
		{
			idc = 1013;
			x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class LoadingStart: RscControlsGroup
		{
			idc = 2310;
			x = "0 * safezoneW + safezoneX";
			y = "0 * safezoneH + safezoneY";
			w = "1 * safezoneW";
			h = "1 * safezoneH";
			class controls
			{
				class Black: RscText
				{
					idc = 1000;
					x = "0 * safezoneW";
					y = "0 * safezoneH";
					w = "1 * safezoneW";
					h = "1 * safezoneH";
					colorBackground[] = {0,0,0,1};
				};
				class Noise: RscPicture
				{
					idc = 1201;
					text = "";
					x = "0 * safezoneW";
					y = "0 * safezoneH";
					w = "1 * safezoneW";
					h = "1 * safezoneH";
				};
				class Logo: RscPictureKeepAspect
				{
					idc = 1200;
					text = "\fr4_starwars_animations\data\41st_logo.paa";
					x = "0.25 * safezoneW";
					y = "0.3125 * safezoneH";
					w = "0.5 * safezoneW";
					h = "0.25 * safezoneH";
					onLoad = "if (395180 in getDLCs 1) then {(_this select 0) ctrlsettext '\a3\Ui_f\Data\Logos\arma3apex_white_ca.paa';};";
				};
			};
		};
	};
};
class RscDisplayLoadCustom: RscDisplayLoadMission
{
	onLoad="['onload',_this,'RscDisplayLoadCustom'] call (uiNamespace getVariable 'full_mission_load_fnc_load');[102,(_this) select 0,'RscDisplayLoadCustom'] call (uinamespace getvariable 'fr4_fnc_setRandomBackground')";
	onUnload="[""onUnload"",_this,""RscDisplayLoadCustom""] call (uiNamespace getVariable 'full_mission_load_fnc_load')";

	class controlsBackground
	{
		class CA_Vignette: RscVignette
		{
			colorText[]={0,0,0,1};
		};
		class Map: RscPicture
		{
			idc=999;
			text="#(argb,8,8,3)color(0,0,0,1)";
			colorText[]={1,1,1,0.1};
			x="safezoneX";
			y="safezoneY - (safezoneW * 4/3) / 4";
			w="safezoneW";
			h="safezoneW * 4/3";
		};
		class Noise: RscPicture
		{
			idc=102;
			text="";
			colorText[]={1,1,1,0.9};
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneH";
		};
	};
};
class RscDisplayMain: RscStandardDisplay
{
	onLoad = "[""onLoad"",_this,""RscDisplayMain"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay');[102,(_this) select 0,'RscDisplayMain'] call (uinamespace getvariable 'fr4_fnc_setRandomBackground');";
	onUnload = "[""onUnload"",_this,""RscDisplayMain"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay');diag_log 'DESCARGANDO MAIN DISPLAY'";
	onMouseMoving = "if (uiNamespace getVariable 'fr4_vueltaMenu') then {'vueltamenu.wav' call (uiNamespace getvariable 'fr4_fnc_startMusic');uiNamespace setVariable ['fr4_vueltaMenu',false]};";
	class controlsBackground
	{
		class CA_Vignette: RscVignette
		{
			colorText[]={0,0,0,1};
		};
		class Map: RscPicture
		{
			idc=999;
			text="#(argb,8,8,3)color(0,0,0,1)";
			colorText[]={1,1,1,0};
			x="safezoneX";
			y="safezoneY - (safezoneW * 4/3) / 4";
			w="safezoneW";
			h="safezoneW * 4/3";
		};
		class Picture : RscPicture
		{
			idc=102;
			text="";
			colorText[]={1,1,1,1};
			x="safezoneX";
			y="safezoneY";
			w="safezoneW";
			h="safezoneH";
		};
	};
	class controls {
		class CAALogo : RscPictureKeepAspect
		{
			soundClick[] = {};
			soundEnter[] = {};
			text = "\fr4_starwars_animations\data\41st_logo.paa";
			tooltip = "41st - Cuerpo de Elite - Visita http://41st.es";
		};
		class Logo : RscActivePicture
		{
			action = "'http://41st.es/' call (uiNamespace getVariable 'fr4_fnc_openWebPage')";
			soundClick[] = {};
			soundEnter[] = {};
			text = "\fr4_starwars_animations\data\41st_logo_big.paa";
			tooltip = "41st - Cuerpo de Elite - Visita http://41st.es";
		};
	};
};

class RscBackgroundLogo : RscPictureKeepAspect
{
	text = "\fr4_starwars_animations\data\41st_logo.paa";
};

class RscTitles
{
	class fr4_jetpack_gui {
		idd = -1;
		duration = 1e+010;
		onLoad = "uiNamespace setVariable ['fr4_jetpack_gui',_this];((_this select 0) displayCtrl -1) progressSetPosition 1";
		class Controls
		{
			class Progress: RscProgress
			{
				colorBar[] = {};
				texture = "\fr4_starwars_animations\data\progress_bar.paa";
				x = "safezoneX";
				y = "safezoneY + safezoneH - 0.4";
				w = "0.24";
				idc = -1;
				h = "0.08";
			};
		};
	};
	class RscDisplayMainMenuBackground
	{
		scriptName = "RscDisplayMainMenuBackground";
		scriptPath = "GUI";
		onLoad = "[""onLoad"",_this,""RscDisplayMainMenuBackground"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay');[102,(_this) select 0,'RscDisplayMainMenuBackground'] call (uinamespace getvariable 'fr4_fnc_setRandomBackground');";
		onUnload = "[""onUnload"",_this,""RscDisplayMainMenuBackground"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		idd = -1;
		fadein = 2;
		fadeout = 2;
		duration = 1e+010;
		class Controls
		{
			class Background: RscText
			{
				idc = 101;
				colorBackground[] = {0.1,0.1,0.1,1};
				x = "safezoneXAbs";
				y = "-	10";
				w = "safezoneWAbs";
				h = "2 * 	10";
			};
			class BackgroundLeft: Background
			{
				x = "-	10";
				w = "safezoneX + 	10";
			};
			class BackgroundRight: Background
			{
				x = "safezoneX + safezoneW";
				w = 10;
			};
			class Picture: RscPicture
			{
				idc = 102;
				text = "";
				x = "safezoneX";
				y = "safezoneY";
				w = "safezoneW";
				h = "safezoneH";
			};
		};
	};
	class SplashNoise
	{
		onLoad="[2] call compile preprocessfilelinenumbers gettext (configfile >> 'CfgFunctions' >> 'init'); 'introMusic.wav' call (uiNamespace getVariable 'fr4_fnc_startMusic');[1,(_this) select 0,'SplashNoise'] call (uinamespace getvariable 'fr4_fnc_setRandomBackground')";
		idd = -1;
		movingEnable = 0;
		duration = 11;
		fadein = 2;
		fadeout = 2;
		controls[] = {"BackgroundNoise"};
		class BackgroundNoise: RscPicture
		{
			idc = 1;
			text = "";
			colorText[] = {1,1,1,0.7};
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
	};
	class SplashBohemia
	{
		idd = -1;
		movingEnable = 0;
		duration = 0;
		fadein = 0;
		fadeout = 0;
		name = "";
		controls[] = {"Picture","TextPresents"};
		class Picture: RscPicture
		{
			idc = 1200;
			text = "\fr4_starwars_animations\data\41st_logo.paa";
			x = "SafeZoneX + SafeZoneW / 2 - (48 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH / 2 - (31.7 * 		(0.025 * SafezoneH)) / 2";
			w = "48 * 		(0.01875 * SafezoneH)";
			h = "24 * 		(0.025 * SafezoneH)";
		};
		class TextPresents: RscText
		{
			idc = 1000;
			text = "";
			style = 2;
			sizeEx = "0.03*SafezoneH";
			shadow = 0;
			x = "SafeZoneX + SafeZoneW / 2 - (46.5 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH - (0.505 * SafezoneH)";
			w = "48 * 		(0.01875 * SafezoneH)";
			h = "0.03 * SafezoneH";
		};
	};
	class SplashArma3
	{
		idd = -1;
		movingEnable = 0;
		duration = 3;
		fadein = 2;
		fadeout = 2;
		name = "";
		controls[] = {"Picture"};
		class Picture: RscPicture
		{
			idc = 1200;
			text = "\fr4_starwars_animations\data\41st_logo.paa";
			x = "0.5 - 10 * 		(0.01875 * SafezoneH)";
			y = "0.5 - 6 * 		(0.025 * SafezoneH)";
			w = "20 * 		(0.01875 * SafezoneH)";
			h = "10 * 		(0.025 * SafezoneH)";
		};
	};
	class SplashArma3Apex: SplashArma3
	{
		class Picture: Picture
		{
			text = "\fr4_starwars_animations\data\41st_logo.paa";
			y = "0.5 - 7 * 		(0.025 * SafezoneH)";
		};
	};
	class SplashArma3Lite
	{
		idd = -1;
		movingEnable = 0;
		duration = 3;
		fadein = 2;
		fadeout = 2;
		controls[] = {"Picture","Tagline"};
		class Picture: RscPicture
		{
			idc = 1200;
			text = "\fr4_starwars_animations\data\41st_logo_big.paa";
			x = "SafeZoneX + SafeZoneW / 2 - (20 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH / 2 - (17 * 		(0.025 * SafezoneH)) / 2";
			w = "20 * 		(0.01875 * SafezoneH)";
			h = "10 * 		(0.025 * SafezoneH)";
		};
		class Tagline: RscPicture
		{
			idc = 1201;
			text = "\fr4_starwars_animations\data\41st_logo_big.paa";
			x = "SafeZoneX + SafeZoneW / 2 - (16.1 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH / 2 - (2.9 * 		(0.025 * SafezoneH)) / 2";
			w = "16.1 * 		(0.01875 * SafezoneH)";
			h = "8.05 * 		(0.025 * SafezoneH)";
		};
	};
	class SplashTagline
	{
		idd = -1;
		movingEnable = 0;
		duration = 3;
		fadein = 2;
		fadeout = 2;
		name = "$STR_A3_SplashTagline_0";
		controls[] = {"Picture"};
		class Picture: RscPicture
		{
			idc = 1200;
			text = "\fr4_starwars_animations\data\41st_logo_big.paa";
			x = "SafeZoneX + SafeZoneW / 2 - (48 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH / 2 - (31.7 * 		(0.025 * SafezoneH)) / 2";
			w = "48 * 		(0.01875 * SafezoneH)";
			h = "24 * 		(0.025 * SafezoneH)";
		};
	};
	class SplashESRB
	{
		idd = -1;
		movingEnable = 0;
		duration = 5;
		fadein = 2;
		fadeout = 2;
		name = "$STR_A3_SplashESRB_0";
		controls[] = {"Picture"};
		class Picture: RscPicture
		{
			text = "\fr4_starwars_animations\data\41st_logo_big.paa";
			x = "SafeZoneX + SafeZoneW / 2 - (72 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH / 2 - (36 * 		(0.025 * SafezoneH)) / 2";
			w = "72 * 		(0.01875 * SafezoneH)";
			h = "36 * 		(0.025 * SafezoneH)";
		};
	};
	class SplashCopyright
	{
		idd = -1;
		movingEnable = 0;
		duration = 5;
		fadein = 2;
		fadeout = 2;
		name = "$STR_A3_SplashCopyright_0";
		controls[] = {"PictureA3Logo","PictureBIlogo","PicturePhysXLogo","LegalText"};
		class PictureA3Logo: RscPicture
		{
			idc = 1200;
			text = "";
			x = "SafeZoneX + SafeZoneW / 2 - (36 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH / 2 - (13.7 * 		(0.025 * SafezoneH)) / 2";
			w = "8 * 		(0.01875 * SafezoneH)";
			h = "4 * 		(0.025 * SafezoneH)";
		};
		class PictureBIlogo: RscPicture
		{
			idc = 1201;
			text = "\fr4_starwars_animations\data\41st_logo_big.paa";
			x = "SafeZoneX + SafeZoneW / 2 - (33 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH / 2 - (25.7 * 		(0.025 * SafezoneH)) / 2";
			w = "32 * 		(0.01875 * SafezoneH)";
			h = "16 * 		(0.025 * SafezoneH)";
		};
		class PicturePhysXLogo: RscPicture
		{
			idc = 1202;
			text = "";
			x = "SafeZoneX + SafeZoneW / 2 + (16.5 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH / 2 - (13.6 * 		(0.025 * SafezoneH)) / 2";
			w = "16 * 		(0.01875 * SafezoneH)";
			h = "4 * 		(0.025 * SafezoneH)";
		};
		class LegalText: RscStructuredText
		{
			idc = -1;
			text = "41st - Cuerpo de Elite";
			size = "0.02 * SafezoneH";
			shadow = 0;
			x = "SafeZoneX + SafeZoneW / 2 - (50 * 		(0.01875 * SafezoneH)) / 2";
			y = "SafeZoneY +	SafeZoneH - (0.38 * SafezoneH)";
			w = "50 * 		(0.01875 * SafezoneH)";
			h = "0.39 * SafezoneH";
			class Attributes
			{
				align = "center";
				shadow = 0;
			};
		};
	};
	class RscTime
	{
		idd = 1123;
		duration = 10000;
		fadein = 0;
		movingEnable = 1;
		enableSimulation = 1;
		enableDisplay = 1;
		onload = "uinamespace setvariable ['BIS_InfoTime',_this select 0]";
		onunload = "uinamespace setvariable ['BIS_InfoTime',nil]";
		class controls
		{
			class text0: RscStructuredText
			{
				idc = 112301;
				x = 0.0;
				y = 0.4;
				w = 1.0;
				h = 1.0;
				size = 0.035;
				colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				class Attributes
				{
					font = "RobotoCondensedBold";
					align = "center";
					shadow = 1;
					valign = "top";
				};
			};
		};
	};
	class RscUnitInfoUAV
	{
		idd = 1125;
		duration = 10000;
		fadein = 0;
		movingEnable = 1;
		enableSimulation = 1;
		enableDisplay = 1;
		onload = "uinamespace setvariable ['BIS_UAV_DISPLAY',_this select 0]";
		onunload = "uinamespace setvariable ['BIS_UAV_DISPLAY',nil]";
		class controls
		{
			class CA_MiniMap: RscMapControl
			{
				IDC = 112410;
				ShowCountourInterval = 0;
				x = "0.012 + SafeZoneX + 0.01";
				y = "0.016 + SafeZoneY + 0.01";
				w = "0.33 - 0.02";
				h = "0.33 - 0.02";
				colorbackground[] = {1,1,1,1};
				alphaFadeStartScale = 0.0;
				alphaFadeEndScale = 0.0;
			};
			class Locked_text_L: RscText
			{
				idc = 112401;
				style = "0x02 + 0x10";
				text = "\nL\n\nO\n\nC\n\nK\n\nE\n\nD";
				x = "SafeZoneX + 0.025";
				y = "SafeZoneY + 0.200";
				w = 0.07;
				h = 0.7;
				linespacing = 1.8;
				sizeEx = "0.024*1.3";
				font = "RobotoCondensedBold";
				colortext[] = {1,1,1,1};
				colorbackground[] = {0,0,0,0};
			};
			class Locked_frame_L: Locked_text_L
			{
				idc = 112402;
				style = 64;
			};
			class Locked_text_R: Locked_text_L
			{
				idc = 112403;
				x = "SafeZoneX + SafeZoneW - 0.025 - 0.07";
			};
			class Locked_frame_R: Locked_text_R
			{
				idc = 112404;
				style = 64;
			};
			class Speed: RscIGUIText
			{
				idc = 112411;
				style = "0x01 + 0x100";
				x = "SafeZoneX + SafeZoneW - 0.45";
				y = "SafeZoneY + SafezoneH - 0.26";
				h = 0.05;
				w = 0.3;
				sizeEx = "0.024*1.3";
				font = "RobotoCondensedBold";
				colortext[] = {1,1,1,1};
				color[] = {1,1,1,1};
			};
			class SpeedWanted: Speed
			{
				idc = 112412;
				y = "SafeZoneY + SafezoneH - 0.23";
				sizeEx = "0.024*1.2";
			};
			class AltWanted: Speed
			{
				idc = 112413;
				y = "SafeZoneY + SafezoneH - 0.16";
				sizeEx = "0.024*1.2";
			};
			class Hint_brightness: Locked_text_L
			{
				idc = 112414;
				style = "0x00 + 0x10 + 0x200 + 0x100";
				x = "SafeZoneX + 0.012";
				y = "SafeZoneY + 0.4";
				h = 0.15;
				w = 0.35;
				text = "";
				linespacing = 1;
			};
		};
	};
	class RscAAN
	{
		idd = 3000;
		fadein = 0;
		fadeout = 0;
		duration = 1e+011;
		onLoad = "uinamespace setvariable ['BIS_AAN',_this select 0]";
		onUnLoad = "uinamespace setvariable ['BIS_AAN',nil]";
		delete ControlsBackground;
		class Controls
		{
			class LogoCorner: RscPicture
			{
				x = "safezoneX + safezoneW - 7 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				y = "safezoneY + 1 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				w = "6 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				h = "3 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				colorText[] = {1,1,1,0.25};
				text = "\A3\ui_f\data\igui\rsctitles\AAN\AAN_logo_corner_ca.paa";
			};
			class BackgroundMain: RscText
			{
				x = "safezoneX";
				y = "safezoneY + safezoneH - 4.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				w = "safezoneW";
				h = "3 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				colorBackground[] = {0.29,0,0,0.6};
			};
			class Logo: RscPicture
			{
				x = "safezoneX + 0.5 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				y = "safezoneY + safezoneH - 4.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				w = "12 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				h = "3 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				text = "\A3\ui_f\data\igui\rsctitles\AAN\AAN_logo_ca.paa";
			};
			class Title: RscStructuredText
			{
				idc = 3001;
				x = "safezoneX + 10.5 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				y = "safezoneY + safezoneH - 4.25 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				w = "safezoneW - 10.5 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				h = "2.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				shadow = 0;
				class Attributes
				{
					font = "PuristaMedium";
					color = "#ffffff";
					align = "left";
					shadow = 0;
				};
			};
			class LineBlack: BackgroundMain
			{
				y = "safezoneY + safezoneH - 1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) - 2 * pixelH";
				h = "2 * pixelH";
				colorBackground[] = {0,0,0,1};
			};
			class BackgroundStripe: BackgroundMain
			{
				y = "safezoneY + safezoneH - 1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				h = "(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				colorBackground[] = {1,1,1,1};
			};
			class Stripe: RscControlsGroupNoScrollbars
			{
				x = "safezoneX";
				y = "safezoneY + safezoneH - 1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				w = "safezoneW";
				h = "(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				class Controls
				{
					class StripeText1: RscStructuredText
					{
						idc = 3002;
						x = 0;
						y = 0;
						w = "safezoneW";
						h = "(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
						shadow = 0;
						size = "0.9 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
						class Attributes
						{
							font = "PuristaLight";
							color = "#000000";
							align = "left";
							shadow = 0;
						};
					};
					class StripeText2: StripeText1
					{
						idc = 3004;
					};
				};
			};
			class StripeLeft: RscPicture
			{
				x = "safezoneX";
				y = "safezoneY + safezoneH - 1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				w = "0.5 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				h = "(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				colorText[] = {0,0,0,1};
				text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayInventory\InventoryStripe_ca.paa";
			};
			class StripeRight: StripeLeft
			{
				x = "safezoneX + safezoneW - 6.5 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				angle = 180;
			};
			class BackgroundClock: RscText
			{
				x = "safezoneX + safezoneW - 6 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				y = "safezoneY + safezoneH - 1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				w = "6 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + pixelW";
				h = "(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				colorBackground[] = {0,0,0,1};
			};
			class Clock: RscText
			{
				idc = 3003;
				x = "safezoneX + safezoneW - 6 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				y = "safezoneY + safezoneH - 1.55 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				w = "6 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				h = "(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				text = "23:32";
				font = "PuristaLight";
				sizeEx = "0.9 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			};
			class LogoClock: RscPicture
			{
				x = "safezoneX + safezoneW - 3.5 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				y = "safezoneY + safezoneH - 1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				w = "4 * 	(1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				h = "(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				text = "\A3\ui_f\data\igui\rsctitles\AAN\AAN_logo_ca.paa";
			};
		};
	};
	class RscAANnews
	{
		idd = 3001;
		fadein = 0;
		fadeout = 0;
		duration = 1e+011;
		onLoad = "uinamespace setvariable ['BIS_AAN_news',_this select 0]";
		onUnLoad = "uinamespace setvariable ['BIS_AAN_news',nil]";
		class ControlsBackground
		{
			class BackgroundLeftRed: RscText
			{
				idc = 300110;
				x = "safezoneX";
				y = "safezoneY";
				h = "safezoneH - 	(3.0 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
				w = "safezoneW * 0.5";
				colorbackground[] = {0.29,0,0,0.5};
			};
			class BackgroundLeftRedGradient: RscPicture
			{
				idc = 300111;
				x = "safezoneX";
				y = "safezoneY";
				h = "safezoneH - 	(3.0 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)))";
				w = "safezoneW * 0.5";
				colortext[] = {0.29,0,0,0.5};
				text = "A3\ui_f\data\igui\rsctitles\rscAANnews\gradient_right_gs.paa";
			};
			class BackgroundRightRed: RscText
			{
				idc = 300112;
				x = "safezoneX + safezoneW - 	(	(0.22 * safezoneH) * 3/4)";
				y = "safezoneY + safezoneH - 	(3.0 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(	(0.22 * safezoneH) + 0.08 * safezoneH)";
				h = "(	(0.22 * safezoneH) + 0.08 * safezoneH)";
				w = "(	(0.22 * safezoneH) * 3/4)";
				colorbackground[] = {0.29,0,0,0.5};
			};
			class BackgroundRightRedGradient: RscPicture
			{
				idc = 300113;
				x = "safezoneX + safezoneW - 	(	(0.22 * safezoneH) * 3/4)";
				y = "safezoneY + safezoneH - 	(3.0 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(	(0.22 * safezoneH) + 0.08 * safezoneH)";
				h = "(	(0.22 * safezoneH) + 0.08 * safezoneH)";
				w = "(	(0.22 * safezoneH) * 3/4)";
				colortext[] = {0.29,0,0,0.5};
				text = "A3\ui_f\data\igui\rsctitles\rscAANnews\gradient_left_gs.paa";
			};
		};
		class controls
		{
			class PictureL1: RscPicture
			{
				idc = 300101;
				x = "safezoneX + safezoneW * 0.02";
				y = "safezoneY + (safezoneH - 	(3.0 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - (safezoneW * 0.46 * 4/3))/2";
				w = "safezoneW * 0.46";
				h = "safezoneW * 0.46 * 4/3";
				text = "";
			};
			class PictureL2: PictureL1
			{
				idc = 300102;
			};
			class PictureL3: PictureL1
			{
				idc = 300103;
			};
			class PictureL4: PictureL1
			{
				idc = 300104;
			};
			class PictureL5: PictureL1
			{
				idc = 300105;
			};
			class PictureL6: PictureL1
			{
				idc = 300106;
			};
			class PictureR1: RscPicture
			{
				idc = 300107;
				x = "safezoneX + safezoneW - 	(	(0.22 * safezoneH) * 3/4)";
				y = "safezoneY + safezoneH - 	(3.0 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 	(0.22 * safezoneH)";
				w = "(	(0.22 * safezoneH) * 3/4)";
				h = "(0.22 * safezoneH)";
				text = "";
			};
			class TextL1: RscStructuredText
			{
				idc = 300108;
				x = "safezoneX + safezoneW * 0.02";
				y = "safezoneY + (safezoneH - 	(3.0 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - (safezoneW * 0.46 * 4/3))/2";
				w = "safezoneW * 0.46";
				h = "safezoneW * 0.46 * 4/3";
				colorText[] = {1,1,1,1};
				style = "0x00 + 0x10";
				shadow = 0;
				class Attributes
				{
					font = "RobotoCondensed";
					color = "#ffffff";
					align = "left";
					shadow = 0;
					valign = "top";
				};
			};
			class TextR1: RscStructuredText
			{
				idc = 300109;
				x = "safezoneX + safezoneW - (	(	(0.22 * safezoneH) * 3/4)) * 0.95";
				y = "safezoneY + safezoneH - 	(3.0 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - 		(1.5 * 	(1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))) - (		(	(0.22 * safezoneH) + 0.08 * safezoneH)) + 0.01";
				w = "(	(0.22 * safezoneH) * 3/4) * 0.9";
				h = "(	(0.22 * safezoneH) + 0.08 * safezoneH) - 	(0.22 * safezoneH)";
				colorText[] = {1,1,1,1};
				style = "0x00 + 0x10";
				shadow = 0;
				size = "(0.025) * safezoneH";
				class Attributes
				{
					font = "RobotoCondensed";
					color = "#ffffff";
					align = "left";
					shadow = 0;
					valign = "top";
				};
			};
		};
	};
	class RscInfoText
	{
		idd = 3100;
		fadein = 0;
		fadeout = 0;
		duration = 1e+011;
		onLoad = "uinamespace setvariable ['BIS_InfoText',_this select 0]";
		onUnLoad = "uinamespace setvariable ['BIS_InfoText',nil]";
		class Controls
		{
			class InfoText: RscText
			{
				idc = 3101;
				style = "0x01 + 0x10 + 0x200 + 0x100";
				font = "RobotoCondensedBold";
				x = "(profilenamespace getvariable [""IGUI_GRID_MISSION_X"",		(safezoneX + safezoneW - 21 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_MISSION_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				w = "(20 * 			(			((safezoneW / safezoneH) min 1.2) / 40))";
				h = "(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
				colorText[] = {1,1,1,1};
				colorBackground[] = {0,0,0,0};
				text = "";
				lineSpacing = 1;
				sizeEx = 0.045;
				fixedWidth = 1;
			};
		};
	};
	class RscDynamicText
	{
		idd = -1;
		movingEnable = 1;
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		onload = "uinamespace setvariable ['BIS_dynamicText',_this select 0];";
		class controls
		{
			class Text: RscStructuredText
			{
				idc = 9999;
				style = "1 + 16";
				text = "";
				x = 0;
				y = 0.45;
				w = 1;
				h = 10000;
				colorText[] = {1,1,1,1};
				colorBackground[] = {0,0,0,0};
				size = "(0.05 / 1.17647) * safezoneH";
				sizeEx = 0.4;
				class Attributes: Attributes
				{
					color = "#ffffff";
					align = "center";
					shadow = 0;
					valign = "top";
				};
			};
		};
	};
	class RscCinemaBorder: RscDisplayBackgroundStripes
	{
		idd = -1;
		movingEnable = 0;
		enableSimulation = 1;
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		onload = "uinamespace setvariable ['RscCinemaBorder',_this select 0];";
		class controlsBackground
		{
			class Background1: RscBackgroundStripeTop
			{
				idc = 100001;
				colorBackground[] = {0,0,0,1};
			};
			class Background2: RscBackgroundStripeBottom
			{
				idc = 100002;
				colorBackground[] = {0,0,0,1};
			};
		};
	};
	class RscMissionScreen
	{
		idd = -1;
		movingEnable = 1;
		duration = 1e+011;
		fadein = 0;
		fadeout = 1;
		onload = "uinamespace setvariable ['BIS_RscMissionScreen',_this select 0];";
		class controls
		{
			class Picture_0: RscPicture
			{
				idc = 1100;
				text = "";
				x = "safezoneX";
				y = "safezoneY";
				w = "safezoneW";
				h = "safezoneH";
				autoplay = 1;
				loops = 1;
			};
			class Picture_1: Picture_0
			{
				idc = 1101;
			};
			class Picture_2: Picture_0
			{
				idc = 1102;
			};
			class Picture_3: Picture_0
			{
				idc = 1103;
			};
			class Picture_4: Picture_0
			{
				idc = 1104;
			};
			class Picture_5: Picture_0
			{
				idc = 1105;
			};
			class Picture_6: Picture_0
			{
				idc = 1106;
			};
			class Picture_7: Picture_0
			{
				idc = 1107;
			};
			class Picture_8: Picture_0
			{
				idc = 1108;
			};
			class Picture_9: Picture_0
			{
				idc = 1109;
			};
			class Picture_10: Picture_0
			{
				idc = 1110;
			};
			class Picture_11: Picture_0
			{
				idc = 1111;
			};
			class Picture_12: Picture_0
			{
				idc = 1112;
			};
			class Picture_13: Picture_0
			{
				idc = 1113;
			};
			class Picture_14: Picture_0
			{
				idc = 1114;
			};
			class Picture_15: Picture_0
			{
				idc = 1115;
			};
			class Picture_16: Picture_0
			{
				idc = 1116;
			};
			class Picture_17: Picture_0
			{
				idc = 1117;
			};
			class Picture_18: Picture_0
			{
				idc = 1118;
			};
			class Picture_19: Picture_0
			{
				idc = 1119;
			};
			class Picture_20: Picture_0
			{
				idc = 1120;
			};
			class Picture_21: Picture_0
			{
				idc = 1121;
			};
			class Picture_22: Picture_0
			{
				idc = 1122;
			};
			class Picture_23: Picture_0
			{
				idc = 1123;
			};
			class Picture_24: Picture_0
			{
				idc = 1124;
			};
			class Picture_25: Picture_0
			{
				idc = 1125;
			};
			class Picture_26: Picture_0
			{
				idc = 1126;
			};
			class Picture_27: Picture_0
			{
				idc = 1127;
			};
			class Picture_28: Picture_0
			{
				idc = 1128;
			};
			class Picture_29: Picture_0
			{
				idc = 1129;
			};
			class Picture_30: Picture_0
			{
				idc = 1130;
			};
			class Picture_31: Picture_0
			{
				idc = 1131;
			};
			class Picture_32: Picture_0
			{
				idc = 1132;
			};
			class Picture_33: Picture_0
			{
				idc = 1133;
			};
			class Picture_34: Picture_0
			{
				idc = 1134;
			};
			class Picture_35: Picture_0
			{
				idc = 1135;
			};
			class Picture_36: Picture_0
			{
				idc = 1136;
			};
			class Picture_37: Picture_0
			{
				idc = 1137;
			};
			class Picture_38: Picture_0
			{
				idc = 1138;
			};
			class Picture_39: Picture_0
			{
				idc = 1139;
			};
			class Picture_40: Picture_0
			{
				idc = 1140;
			};
			class Picture_41: Picture_0
			{
				idc = 1141;
			};
			class Picture_42: Picture_0
			{
				idc = 1142;
			};
			class Picture_43: Picture_0
			{
				idc = 1143;
			};
			class Picture_44: Picture_0
			{
				idc = 1144;
			};
			class Picture_45: Picture_0
			{
				idc = 1145;
			};
			class Picture_46: Picture_0
			{
				idc = 1146;
			};
			class Picture_47: Picture_0
			{
				idc = 1147;
			};
			class Picture_48: Picture_0
			{
				idc = 1148;
			};
			class Picture_49: Picture_0
			{
				idc = 1149;
			};
			class Picture_50: Picture_0
			{
				idc = 1150;
			};
			class PictureShadow_0: Picture_0
			{
				idc = 1200;
				shadow = 2;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc = 1201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc = 1202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc = 1203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc = 1204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc = 1205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc = 1206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc = 1207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc = 1208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc = 1209;
			};
			class Text_0: RscStructuredText
			{
				idc = 1300;
				text = "";
				x = "safezoneX";
				y = "safezoneY";
				w = "safezoneW";
				h = "safezoneH";
			};
			class Text_1: Text_0
			{
				idc = 1301;
			};
			class Text_2: Text_0
			{
				idc = 1302;
			};
			class Text_3: Text_0
			{
				idc = 1303;
			};
			class Text_4: Text_0
			{
				idc = 1304;
			};
			class Text_5: Text_0
			{
				idc = 1305;
			};
			class Text_6: Text_0
			{
				idc = 1306;
			};
			class Text_7: Text_0
			{
				idc = 1307;
			};
			class Text_8: Text_0
			{
				idc = 1308;
			};
			class Text_9: Text_0
			{
				idc = 1309;
			};
		};
	};
	class RscCommonBackground
	{
		idd = 4000;
		duration = 1e+011;
		fadein = 0;
		movingEnable = 0;
		onload = "uinamespace setvariable ['RscCommonBackground',_this select 0]";
		class controlsBackground
		{
			class Vignette: RscVignette
			{
				idc = 114998;
			};
			class TileGroup: RscControlsGroupNoScrollbars
			{
				idc = 115099;
				x = "safezoneXAbs";
				y = "safezoneY";
				w = "safezoneWAbs";
				h = "safezoneH";
				class Controls
				{
					class Background: RscText
					{
						idc = 114999;
						x = 0;
						y = 0;
						w = "safezoneWAbs";
						h = "safezoneH";
						colorBackground[] = {0,0,0,0.5};
					};
				};
			};
			class BcgCommon: RscBackgroundGUI
			{
				idc = 11000;
				backgroundType = 0;
				x = "(uinamespace getvariable 'RscBackground_X')";
				y = "(uinamespace getvariable 'RscBackground_Y')";
				w = "(uinamespace getvariable 'RscBackground_W')";
				h = "(uinamespace getvariable 'RscBackground_H')";
			};
			class BcgCommonLeft: RscBackgroundGUILeft
			{
				idc = 11200;
				backgroundType = 0;
				x = "(uinamespace getvariable 'RscBackground_X')";
				y = "(uinamespace getvariable 'RscBackground_Y')";
				w = "(uinamespace getvariable 'RscBackground_W')";
				h = "(uinamespace getvariable 'RscBackground_H')";
			};
			class BcgCommonRight: RscBackgroundGUIRight
			{
				idc = 11201;
				backgroundType = 0;
				x = "(uinamespace getvariable 'RscBackground_X')";
				y = "(uinamespace getvariable 'RscBackground_Y')";
				w = "(uinamespace getvariable 'RscBackground_W')";
				h = "(uinamespace getvariable 'RscBackground_H')";
			};
			class BcgCommonBottom: RscBackgroundGUIBottom
			{
				idc = 11001;
				backgroundType = 0;
				x = "(uinamespace getvariable 'RscBackground_X')";
				y = "(uinamespace getvariable 'RscBackground_Y') +  		(uinamespace getvariable 'RscBackground_H') 	 - (1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
				w = "(uinamespace getvariable 'RscBackground_W')";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class BcgCommonTop: RscBackgroundGUITop
			{
				idc = 11002;
				backgroundType = 0;
				x = "(uinamespace getvariable 'RscBackground_X')";
				y = "(uinamespace getvariable 'RscBackground_Y')";
				w = "(uinamespace getvariable 'RscBackground_W')";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
		};
	};
	class RscClouds
	{
		idd = 4000;
		duration = 1e+011;
		fadein = 0;
		movingEnable = 0;
		onLoad = "uinamespace setvariable ['hsim_RscClouds',_this select 0]";
		class controls
		{
			class Picture_0: RscPicture
			{
				idc = 1200;
				text = "";
				x = 0;
				y = 0;
				w = 0;
				h = 0;
				autoplay = 1;
				loops = 1;
			};
			class Picture_1: Picture_0
			{
				idc = 1201;
			};
			class Picture_2: Picture_0
			{
				idc = 1202;
			};
			class Picture_3: Picture_0
			{
				idc = 1203;
			};
			class Picture_4: Picture_0
			{
				idc = 1204;
			};
			class Picture_5: Picture_0
			{
				idc = 1205;
			};
			class Picture_6: Picture_0
			{
				idc = 1206;
			};
			class Picture_7: Picture_0
			{
				idc = 1207;
			};
			class Picture_8: Picture_0
			{
				idc = 1208;
			};
			class Picture_9: Picture_0
			{
				idc = 1209;
			};
			class Picture_10: Picture_0
			{
				idc = 1210;
			};
			class Picture_11: Picture_0
			{
				idc = 1211;
			};
			class Picture_12: Picture_0
			{
				idc = 1212;
			};
			class Picture_13: Picture_0
			{
				idc = 1213;
			};
			class Picture_14: Picture_0
			{
				idc = 1214;
			};
			class Picture_15: Picture_0
			{
				idc = 1215;
			};
			class Picture_16: Picture_0
			{
				idc = 1216;
			};
			class Picture_17: Picture_0
			{
				idc = 1217;
			};
			class Picture_18: Picture_0
			{
				idc = 1218;
			};
			class Picture_19: Picture_0
			{
				idc = 1219;
			};
			class Picture_20: Picture_0
			{
				idc = 1220;
			};
			class Picture_21: Picture_0
			{
				idc = 1221;
			};
			class Picture_22: Picture_0
			{
				idc = 1222;
			};
			class Picture_23: Picture_0
			{
				idc = 1223;
			};
			class Picture_24: Picture_0
			{
				idc = 1224;
			};
			class Picture_25: Picture_0
			{
				idc = 1225;
			};
			class Picture_26: Picture_0
			{
				idc = 1226;
			};
			class Picture_27: Picture_0
			{
				idc = 1227;
			};
			class Picture_28: Picture_0
			{
				idc = 1228;
			};
			class Picture_29: Picture_0
			{
				idc = 1229;
			};
			class Picture_30: Picture_0
			{
				idc = 1230;
			};
			class Picture_31: Picture_0
			{
				idc = 1231;
			};
			class Picture_32: Picture_0
			{
				idc = 1232;
			};
			class Picture_33: Picture_0
			{
				idc = 1233;
			};
			class Picture_34: Picture_0
			{
				idc = 1234;
			};
			class Picture_35: Picture_0
			{
				idc = 1235;
			};
			class Picture_36: Picture_0
			{
				idc = 1236;
			};
			class Picture_37: Picture_0
			{
				idc = 1237;
			};
			class Picture_38: Picture_0
			{
				idc = 1238;
			};
			class Picture_39: Picture_0
			{
				idc = 1239;
			};
			class Picture_40: Picture_0
			{
				idc = 1240;
			};
			class Picture_41: Picture_0
			{
				idc = 1241;
			};
			class Picture_42: Picture_0
			{
				idc = 1242;
			};
			class Picture_43: Picture_0
			{
				idc = 1243;
			};
			class Picture_44: Picture_0
			{
				idc = 1244;
			};
			class Picture_45: Picture_0
			{
				idc = 1245;
			};
			class Picture_46: Picture_0
			{
				idc = 1246;
			};
			class Picture_47: Picture_0
			{
				idc = 1247;
			};
			class Picture_48: Picture_0
			{
				idc = 1248;
			};
			class Picture_49: Picture_0
			{
				idc = 1249;
			};
			class Picture_50: Picture_0
			{
				idc = 1250;
			};
			class Picture_51: Picture_0
			{
				idc = 1251;
			};
			class Picture_52: Picture_0
			{
				idc = 1252;
			};
			class Picture_53: Picture_0
			{
				idc = 1253;
			};
			class Picture_54: Picture_0
			{
				idc = 1254;
			};
			class Picture_55: Picture_0
			{
				idc = 1255;
			};
			class Picture_56: Picture_0
			{
				idc = 1256;
			};
			class Picture_57: Picture_0
			{
				idc = 1257;
			};
			class Picture_58: Picture_0
			{
				idc = 1258;
			};
			class Picture_59: Picture_0
			{
				idc = 1259;
			};
			class Picture_60: Picture_0
			{
				idc = 1260;
			};
			class Picture_61: Picture_0
			{
				idc = 1261;
			};
			class Picture_62: Picture_0
			{
				idc = 1262;
			};
			class Picture_63: Picture_0
			{
				idc = 1263;
			};
			class Picture_64: Picture_0
			{
				idc = 1264;
			};
			class Picture_65: Picture_0
			{
				idc = 1265;
			};
			class Picture_66: Picture_0
			{
				idc = 1266;
			};
			class Picture_67: Picture_0
			{
				idc = 1267;
			};
			class Picture_68: Picture_0
			{
				idc = 1268;
			};
			class Picture_69: Picture_0
			{
				idc = 1269;
			};
			class Picture_70: Picture_0
			{
				idc = 1270;
			};
			class Picture_71: Picture_0
			{
				idc = 1271;
			};
			class Picture_72: Picture_0
			{
				idc = 1272;
			};
			class Picture_73: Picture_0
			{
				idc = 1273;
			};
			class Picture_74: Picture_0
			{
				idc = 1274;
			};
			class Picture_75: Picture_0
			{
				idc = 1275;
			};
			class Picture_76: Picture_0
			{
				idc = 1276;
			};
			class Picture_77: Picture_0
			{
				idc = 1277;
			};
			class Picture_78: Picture_0
			{
				idc = 1278;
			};
			class Picture_79: Picture_0
			{
				idc = 1279;
			};
			class Picture_80: Picture_0
			{
				idc = 1280;
			};
			class Picture_81: Picture_0
			{
				idc = 1281;
			};
			class Picture_82: Picture_0
			{
				idc = 1282;
			};
			class Picture_83: Picture_0
			{
				idc = 1283;
			};
			class Picture_84: Picture_0
			{
				idc = 1284;
			};
			class Picture_85: Picture_0
			{
				idc = 1285;
			};
			class Picture_86: Picture_0
			{
				idc = 1286;
			};
			class Picture_87: Picture_0
			{
				idc = 1287;
			};
			class Picture_88: Picture_0
			{
				idc = 1288;
			};
			class Picture_89: Picture_0
			{
				idc = 1289;
			};
			class Picture_90: Picture_0
			{
				idc = 1290;
			};
			class Picture_91: Picture_0
			{
				idc = 1291;
			};
			class Picture_92: Picture_0
			{
				idc = 1292;
			};
			class Picture_93: Picture_0
			{
				idc = 1293;
			};
			class Picture_94: Picture_0
			{
				idc = 1294;
			};
			class Picture_95: Picture_0
			{
				idc = 1295;
			};
			class Picture_96: Picture_0
			{
				idc = 1296;
			};
			class Picture_97: Picture_0
			{
				idc = 1297;
			};
			class Picture_98: Picture_0
			{
				idc = 1298;
			};
			class Picture_99: Picture_0
			{
				idc = 1299;
			};
		};
	};
	class RscTitleCommon: RscDisplayCommon
	{
		onload = "uinamespace setvariable ['Hsim_RscTitleCommon',_this select 0];";
		onunload = "uinamespace setvariable ['Hsim_RscTitleCommon',nil];";
	};
	class RscCredits
	{
		idd = 999;
		movingEnable = 1;
		duration = 1e+011;
		fadein = 0;
		class controls
		{
			class Text_0: RscText
			{
				idc = 1000;
				text = "";
				x = -3;
				y = -3;
			};
			class Text_1: Text_0
			{
				idc = 1001;
			};
			class Text_2: Text_0
			{
				idc = 1002;
			};
			class Text_3: Text_0
			{
				idc = 1003;
			};
			class Text_4: Text_0
			{
				idc = 1004;
			};
			class Text_5: Text_0
			{
				idc = 1005;
			};
			class Text_6: Text_0
			{
				idc = 1006;
			};
			class Text_7: Text_0
			{
				idc = 1007;
			};
			class Text_8: Text_0
			{
				idc = 1008;
			};
			class Text_9: Text_0
			{
				idc = 1009;
			};
			class Text_10: Text_0
			{
				idc = 1010;
			};
			class Text_11: Text_0
			{
				idc = 1011;
			};
			class Text_12: Text_0
			{
				idc = 1012;
			};
			class Text_13: Text_0
			{
				idc = 1013;
			};
			class Text_14: Text_0
			{
				idc = 1014;
			};
			class Text_15: Text_0
			{
				idc = 1015;
			};
			class Text_16: Text_0
			{
				idc = 1016;
			};
			class Text_17: Text_0
			{
				idc = 1017;
			};
			class Text_18: Text_0
			{
				idc = 1018;
			};
			class Text_19: Text_0
			{
				idc = 1019;
			};
			class Text_20: Text_0
			{
				idc = 1020;
			};
			class Text_21: Text_0
			{
				idc = 1021;
			};
			class Text_22: Text_0
			{
				idc = 1022;
			};
			class Text_23: Text_0
			{
				idc = 1023;
			};
			class Text_24: Text_0
			{
				idc = 1024;
			};
			class Text_25: Text_0
			{
				idc = 1025;
			};
			class Text_26: Text_0
			{
				idc = 1026;
			};
			class Text_27: Text_0
			{
				idc = 1027;
			};
			class Text_28: Text_0
			{
				idc = 1028;
			};
			class Text_29: Text_0
			{
				idc = 1029;
			};
			class Text_30: Text_0
			{
				idc = 1030;
			};
			class Text_31: Text_0
			{
				idc = 1031;
			};
			class Text_32: Text_0
			{
				idc = 1032;
			};
			class Text_33: Text_0
			{
				idc = 1033;
			};
			class Text_34: Text_0
			{
				idc = 1034;
			};
			class Text_35: Text_0
			{
				idc = 1035;
			};
			class Text_36: Text_0
			{
				idc = 1036;
			};
			class Text_37: Text_0
			{
				idc = 1037;
			};
			class Text_38: Text_0
			{
				idc = 1038;
			};
			class Text_39: Text_0
			{
				idc = 1039;
			};
			class Text_40: Text_0
			{
				idc = 1040;
			};
			class Text_41: Text_0
			{
				idc = 1041;
			};
			class Text_42: Text_0
			{
				idc = 1042;
			};
			class Text_43: Text_0
			{
				idc = 1043;
			};
			class Text_44: Text_0
			{
				idc = 1044;
			};
			class Text_45: Text_0
			{
				idc = 1045;
			};
			class Text_46: Text_0
			{
				idc = 1046;
			};
			class Text_47: Text_0
			{
				idc = 1047;
			};
			class Text_48: Text_0
			{
				idc = 1048;
			};
			class Text_49: Text_0
			{
				idc = 1049;
			};
			class Text_50: Text_0
			{
				idc = 1050;
			};
			class Text_51: Text_0
			{
				idc = 1051;
			};
			class Text_52: Text_0
			{
				idc = 1052;
			};
			class Text_53: Text_0
			{
				idc = 1053;
			};
			class Text_54: Text_0
			{
				idc = 1054;
			};
			class Text_55: Text_0
			{
				idc = 1055;
			};
			class Text_56: Text_0
			{
				idc = 1056;
			};
			class Text_57: Text_0
			{
				idc = 1057;
			};
			class Text_58: Text_0
			{
				idc = 1058;
			};
			class Text_59: Text_0
			{
				idc = 1059;
			};
			class Text_60: Text_0
			{
				idc = 1060;
			};
			class Text_61: Text_0
			{
				idc = 1061;
			};
			class Text_62: Text_0
			{
				idc = 1062;
			};
			class Text_63: Text_0
			{
				idc = 1063;
			};
			class Text_64: Text_0
			{
				idc = 1064;
			};
			class Text_65: Text_0
			{
				idc = 1065;
			};
			class Text_66: Text_0
			{
				idc = 1066;
			};
			class Text_67: Text_0
			{
				idc = 1067;
			};
			class Text_68: Text_0
			{
				idc = 1068;
			};
			class Text_69: Text_0
			{
				idc = 1069;
			};
			class Text_70: Text_0
			{
				idc = 1070;
			};
			class Text_71: Text_0
			{
				idc = 1071;
			};
			class Text_72: Text_0
			{
				idc = 1072;
			};
			class Text_73: Text_0
			{
				idc = 1073;
			};
			class Text_74: Text_0
			{
				idc = 1074;
			};
			class Text_75: Text_0
			{
				idc = 1075;
			};
			class Text_76: Text_0
			{
				idc = 1076;
			};
			class Text_77: Text_0
			{
				idc = 1077;
			};
			class Text_78: Text_0
			{
				idc = 1078;
			};
			class Text_79: Text_0
			{
				idc = 1079;
			};
			class Text_80: Text_0
			{
				idc = 1080;
			};
			class Text_81: Text_0
			{
				idc = 1081;
			};
			class Text_82: Text_0
			{
				idc = 1082;
			};
			class Text_83: Text_0
			{
				idc = 1083;
			};
			class Text_84: Text_0
			{
				idc = 1084;
			};
			class Text_85: Text_0
			{
				idc = 1085;
			};
			class Text_86: Text_0
			{
				idc = 1086;
			};
			class Text_87: Text_0
			{
				idc = 1087;
			};
			class Text_88: Text_0
			{
				idc = 1088;
			};
			class Text_89: Text_0
			{
				idc = 1089;
			};
			class Text_90: Text_0
			{
				idc = 1090;
			};
			class Text_91: Text_0
			{
				idc = 1091;
			};
			class Text_92: Text_0
			{
				idc = 1092;
			};
			class Text_93: Text_0
			{
				idc = 1093;
			};
			class Text_94: Text_0
			{
				idc = 1094;
			};
			class Text_95: Text_0
			{
				idc = 1095;
			};
			class Text_96: Text_0
			{
				idc = 1096;
			};
			class Text_97: Text_0
			{
				idc = 1097;
			};
			class Text_98: Text_0
			{
				idc = 1098;
			};
			class Text_99: Text_0
			{
				idc = 1099;
			};
			class StructuredText_0: RscStructuredText
			{
				idc = 1100;
				text = "";
				x = -3;
				y = -3;
			};
			class StructuredText_1: StructuredText_0
			{
				idc = 1101;
			};
			class StructuredText_2: StructuredText_0
			{
				idc = 1102;
			};
			class StructuredText_3: StructuredText_0
			{
				idc = 1103;
			};
			class StructuredText_4: StructuredText_0
			{
				idc = 1104;
			};
			class StructuredText_5: StructuredText_0
			{
				idc = 1105;
			};
			class StructuredText_6: StructuredText_0
			{
				idc = 1106;
			};
			class StructuredText_7: StructuredText_0
			{
				idc = 1107;
			};
			class StructuredText_8: StructuredText_0
			{
				idc = 1108;
			};
			class StructuredText_9: StructuredText_0
			{
				idc = 1109;
			};
			class StructuredText_10: StructuredText_0
			{
				idc = 1110;
			};
			class StructuredText_11: StructuredText_0
			{
				idc = 1111;
			};
			class StructuredText_12: StructuredText_0
			{
				idc = 1112;
			};
			class StructuredText_13: StructuredText_0
			{
				idc = 1113;
			};
			class StructuredText_14: StructuredText_0
			{
				idc = 1114;
			};
			class StructuredText_15: StructuredText_0
			{
				idc = 1115;
			};
			class StructuredText_16: StructuredText_0
			{
				idc = 1116;
			};
			class StructuredText_17: StructuredText_0
			{
				idc = 1117;
			};
			class StructuredText_18: StructuredText_0
			{
				idc = 1118;
			};
			class StructuredText_19: StructuredText_0
			{
				idc = 1119;
			};
			class StructuredText_20: StructuredText_0
			{
				idc = 1120;
			};
			class StructuredText_21: StructuredText_0
			{
				idc = 1121;
			};
			class StructuredText_22: StructuredText_0
			{
				idc = 1122;
			};
			class StructuredText_23: StructuredText_0
			{
				idc = 1123;
			};
			class StructuredText_24: StructuredText_0
			{
				idc = 1124;
			};
			class StructuredText_25: StructuredText_0
			{
				idc = 1125;
			};
			class StructuredText_26: StructuredText_0
			{
				idc = 1126;
			};
			class StructuredText_27: StructuredText_0
			{
				idc = 1127;
			};
			class StructuredText_28: StructuredText_0
			{
				idc = 1128;
			};
			class StructuredText_29: StructuredText_0
			{
				idc = 1129;
			};
			class StructuredText_30: StructuredText_0
			{
				idc = 1130;
			};
			class StructuredText_31: StructuredText_0
			{
				idc = 1131;
			};
			class StructuredText_32: StructuredText_0
			{
				idc = 1132;
			};
			class StructuredText_33: StructuredText_0
			{
				idc = 1133;
			};
			class StructuredText_34: StructuredText_0
			{
				idc = 1134;
			};
			class StructuredText_35: StructuredText_0
			{
				idc = 1135;
			};
			class StructuredText_36: StructuredText_0
			{
				idc = 1136;
			};
			class StructuredText_37: StructuredText_0
			{
				idc = 1137;
			};
			class StructuredText_38: StructuredText_0
			{
				idc = 1138;
			};
			class StructuredText_39: StructuredText_0
			{
				idc = 1139;
			};
			class StructuredText_40: StructuredText_0
			{
				idc = 1140;
			};
			class StructuredText_41: StructuredText_0
			{
				idc = 1141;
			};
			class StructuredText_42: StructuredText_0
			{
				idc = 1142;
			};
			class StructuredText_43: StructuredText_0
			{
				idc = 1143;
			};
			class StructuredText_44: StructuredText_0
			{
				idc = 1144;
			};
			class StructuredText_45: StructuredText_0
			{
				idc = 1145;
			};
			class StructuredText_46: StructuredText_0
			{
				idc = 1146;
			};
			class StructuredText_47: StructuredText_0
			{
				idc = 1147;
			};
			class StructuredText_48: StructuredText_0
			{
				idc = 1148;
			};
			class StructuredText_49: StructuredText_0
			{
				idc = 1149;
			};
			class StructuredText_50: StructuredText_0
			{
				idc = 1150;
			};
			class StructuredText_51: StructuredText_0
			{
				idc = 1151;
			};
			class StructuredText_52: StructuredText_0
			{
				idc = 1152;
			};
			class StructuredText_53: StructuredText_0
			{
				idc = 1153;
			};
			class StructuredText_54: StructuredText_0
			{
				idc = 1154;
			};
			class StructuredText_55: StructuredText_0
			{
				idc = 1155;
			};
			class StructuredText_56: StructuredText_0
			{
				idc = 1156;
			};
			class StructuredText_57: StructuredText_0
			{
				idc = 1157;
			};
			class StructuredText_58: StructuredText_0
			{
				idc = 1158;
			};
			class StructuredText_59: StructuredText_0
			{
				idc = 1159;
			};
			class StructuredText_60: StructuredText_0
			{
				idc = 1160;
			};
			class StructuredText_61: StructuredText_0
			{
				idc = 1161;
			};
			class StructuredText_62: StructuredText_0
			{
				idc = 1162;
			};
			class StructuredText_63: StructuredText_0
			{
				idc = 1163;
			};
			class StructuredText_64: StructuredText_0
			{
				idc = 1164;
			};
			class StructuredText_65: StructuredText_0
			{
				idc = 1165;
			};
			class StructuredText_66: StructuredText_0
			{
				idc = 1166;
			};
			class StructuredText_67: StructuredText_0
			{
				idc = 1167;
			};
			class StructuredText_68: StructuredText_0
			{
				idc = 1168;
			};
			class StructuredText_69: StructuredText_0
			{
				idc = 1169;
			};
			class StructuredText_70: StructuredText_0
			{
				idc = 1170;
			};
			class StructuredText_71: StructuredText_0
			{
				idc = 1171;
			};
			class StructuredText_72: StructuredText_0
			{
				idc = 1172;
			};
			class StructuredText_73: StructuredText_0
			{
				idc = 1173;
			};
			class StructuredText_74: StructuredText_0
			{
				idc = 1174;
			};
			class StructuredText_75: StructuredText_0
			{
				idc = 1175;
			};
			class StructuredText_76: StructuredText_0
			{
				idc = 1176;
			};
			class StructuredText_77: StructuredText_0
			{
				idc = 1177;
			};
			class StructuredText_78: StructuredText_0
			{
				idc = 1178;
			};
			class StructuredText_79: StructuredText_0
			{
				idc = 1179;
			};
			class StructuredText_80: StructuredText_0
			{
				idc = 1180;
			};
			class StructuredText_81: StructuredText_0
			{
				idc = 1181;
			};
			class StructuredText_82: StructuredText_0
			{
				idc = 1182;
			};
			class StructuredText_83: StructuredText_0
			{
				idc = 1183;
			};
			class StructuredText_84: StructuredText_0
			{
				idc = 1184;
			};
			class StructuredText_85: StructuredText_0
			{
				idc = 1185;
			};
			class StructuredText_86: StructuredText_0
			{
				idc = 1186;
			};
			class StructuredText_87: StructuredText_0
			{
				idc = 1187;
			};
			class StructuredText_88: StructuredText_0
			{
				idc = 1188;
			};
			class StructuredText_89: StructuredText_0
			{
				idc = 1189;
			};
			class StructuredText_90: StructuredText_0
			{
				idc = 1190;
			};
			class StructuredText_91: StructuredText_0
			{
				idc = 1191;
			};
			class StructuredText_92: StructuredText_0
			{
				idc = 1192;
			};
			class StructuredText_93: StructuredText_0
			{
				idc = 1193;
			};
			class StructuredText_94: StructuredText_0
			{
				idc = 1194;
			};
			class StructuredText_95: StructuredText_0
			{
				idc = 1195;
			};
			class StructuredText_96: StructuredText_0
			{
				idc = 1196;
			};
			class StructuredText_97: StructuredText_0
			{
				idc = 1197;
			};
			class StructuredText_98: StructuredText_0
			{
				idc = 1198;
			};
			class StructuredText_99: StructuredText_0
			{
				idc = 1199;
			};
			class Picture_0: RscPicture
			{
				idc = 1200;
				text = "";
				x = -3;
				y = -3;
				autoplay = 1;
				loops = 1;
			};
			class Picture_1: Picture_0
			{
				idc = 1201;
			};
			class Picture_2: Picture_0
			{
				idc = 1202;
			};
			class Picture_3: Picture_0
			{
				idc = 1203;
			};
			class Picture_4: Picture_0
			{
				idc = 1204;
			};
			class Picture_5: Picture_0
			{
				idc = 1205;
			};
			class Picture_6: Picture_0
			{
				idc = 1206;
			};
			class Picture_7: Picture_0
			{
				idc = 1207;
			};
			class Picture_8: Picture_0
			{
				idc = 1208;
			};
			class Picture_9: Picture_0
			{
				idc = 1209;
			};
			class Picture_10: Picture_0
			{
				idc = 1210;
			};
			class Picture_11: Picture_0
			{
				idc = 1211;
			};
			class Picture_12: Picture_0
			{
				idc = 1212;
			};
			class Picture_13: Picture_0
			{
				idc = 1213;
			};
			class Picture_14: Picture_0
			{
				idc = 1214;
			};
			class Picture_15: Picture_0
			{
				idc = 1215;
			};
			class Picture_16: Picture_0
			{
				idc = 1216;
			};
			class Picture_17: Picture_0
			{
				idc = 1217;
			};
			class Picture_18: Picture_0
			{
				idc = 1218;
			};
			class Picture_19: Picture_0
			{
				idc = 1219;
			};
			class Picture_20: Picture_0
			{
				idc = 1220;
			};
			class Picture_21: Picture_0
			{
				idc = 1221;
			};
			class Picture_22: Picture_0
			{
				idc = 1222;
			};
			class Picture_23: Picture_0
			{
				idc = 1223;
			};
			class Picture_24: Picture_0
			{
				idc = 1224;
			};
			class Picture_25: Picture_0
			{
				idc = 1225;
			};
			class Picture_26: Picture_0
			{
				idc = 1226;
			};
			class Picture_27: Picture_0
			{
				idc = 1227;
			};
			class Picture_28: Picture_0
			{
				idc = 1228;
			};
			class Picture_29: Picture_0
			{
				idc = 1229;
			};
			class Picture_30: Picture_0
			{
				idc = 1230;
			};
			class Picture_31: Picture_0
			{
				idc = 1231;
			};
			class Picture_32: Picture_0
			{
				idc = 1232;
			};
			class Picture_33: Picture_0
			{
				idc = 1233;
			};
			class Picture_34: Picture_0
			{
				idc = 1234;
			};
			class Picture_35: Picture_0
			{
				idc = 1235;
			};
			class Picture_36: Picture_0
			{
				idc = 1236;
			};
			class Picture_37: Picture_0
			{
				idc = 1237;
			};
			class Picture_38: Picture_0
			{
				idc = 1238;
			};
			class Picture_39: Picture_0
			{
				idc = 1239;
			};
			class Picture_40: Picture_0
			{
				idc = 1240;
			};
			class Picture_41: Picture_0
			{
				idc = 1241;
			};
			class Picture_42: Picture_0
			{
				idc = 1242;
			};
			class Picture_43: Picture_0
			{
				idc = 1243;
			};
			class Picture_44: Picture_0
			{
				idc = 1244;
			};
			class Picture_45: Picture_0
			{
				idc = 1245;
			};
			class Picture_46: Picture_0
			{
				idc = 1246;
			};
			class Picture_47: Picture_0
			{
				idc = 1247;
			};
			class Picture_48: Picture_0
			{
				idc = 1248;
			};
			class Picture_49: Picture_0
			{
				idc = 1249;
			};
			class Picture_50: Picture_0
			{
				idc = 1250;
			};
			class Picture_51: Picture_0
			{
				idc = 1251;
			};
			class Picture_52: Picture_0
			{
				idc = 1252;
			};
			class Picture_53: Picture_0
			{
				idc = 1253;
			};
			class Picture_54: Picture_0
			{
				idc = 1254;
			};
			class Picture_55: Picture_0
			{
				idc = 1255;
			};
			class Picture_56: Picture_0
			{
				idc = 1256;
			};
			class Picture_57: Picture_0
			{
				idc = 1257;
			};
			class Picture_58: Picture_0
			{
				idc = 1258;
			};
			class Picture_59: Picture_0
			{
				idc = 1259;
			};
			class Picture_60: Picture_0
			{
				idc = 1260;
			};
			class Picture_61: Picture_0
			{
				idc = 1261;
			};
			class Picture_62: Picture_0
			{
				idc = 1262;
			};
			class Picture_63: Picture_0
			{
				idc = 1263;
			};
			class Picture_64: Picture_0
			{
				idc = 1264;
			};
			class Picture_65: Picture_0
			{
				idc = 1265;
			};
			class Picture_66: Picture_0
			{
				idc = 1266;
			};
			class Picture_67: Picture_0
			{
				idc = 1267;
			};
			class Picture_68: Picture_0
			{
				idc = 1268;
			};
			class Picture_69: Picture_0
			{
				idc = 1269;
			};
			class Picture_70: Picture_0
			{
				idc = 1270;
			};
			class Picture_71: Picture_0
			{
				idc = 1271;
			};
			class Picture_72: Picture_0
			{
				idc = 1272;
			};
			class Picture_73: Picture_0
			{
				idc = 1273;
			};
			class Picture_74: Picture_0
			{
				idc = 1274;
			};
			class Picture_75: Picture_0
			{
				idc = 1275;
			};
			class Picture_76: Picture_0
			{
				idc = 1276;
			};
			class Picture_77: Picture_0
			{
				idc = 1277;
			};
			class Picture_78: Picture_0
			{
				idc = 1278;
			};
			class Picture_79: Picture_0
			{
				idc = 1279;
			};
			class Picture_80: Picture_0
			{
				idc = 1280;
			};
			class Picture_81: Picture_0
			{
				idc = 1281;
			};
			class Picture_82: Picture_0
			{
				idc = 1282;
			};
			class Picture_83: Picture_0
			{
				idc = 1283;
			};
			class Picture_84: Picture_0
			{
				idc = 1284;
			};
			class Picture_85: Picture_0
			{
				idc = 1285;
			};
			class Picture_86: Picture_0
			{
				idc = 1286;
			};
			class Picture_87: Picture_0
			{
				idc = 1287;
			};
			class Picture_88: Picture_0
			{
				idc = 1288;
			};
			class Picture_89: Picture_0
			{
				idc = 1289;
			};
			class Picture_90: Picture_0
			{
				idc = 1290;
			};
			class Picture_91: Picture_0
			{
				idc = 1291;
			};
			class Picture_92: Picture_0
			{
				idc = 1292;
			};
			class Picture_93: Picture_0
			{
				idc = 1293;
			};
			class Picture_94: Picture_0
			{
				idc = 1294;
			};
			class Picture_95: Picture_0
			{
				idc = 1295;
			};
			class Picture_96: Picture_0
			{
				idc = 1296;
			};
			class Picture_97: Picture_0
			{
				idc = 1297;
			};
			class Picture_98: Picture_0
			{
				idc = 1298;
			};
			class Picture_99: Picture_0
			{
				idc = 1299;
			};
			class PictureKeepAspect_0: RscPictureKeepAspect
			{
				idc = 1300;
				text = "";
				x = -3;
				y = -3;
			};
			class PictureKeepAspect_1: PictureKeepAspect_0
			{
				idc = 1301;
			};
			class PictureKeepAspect_2: PictureKeepAspect_0
			{
				idc = 1302;
			};
			class PictureKeepAspect_3: PictureKeepAspect_0
			{
				idc = 1303;
			};
			class PictureKeepAspect_4: PictureKeepAspect_0
			{
				idc = 1304;
			};
			class PictureKeepAspect_5: PictureKeepAspect_0
			{
				idc = 1305;
			};
			class PictureKeepAspect_6: PictureKeepAspect_0
			{
				idc = 1306;
			};
			class PictureKeepAspect_7: PictureKeepAspect_0
			{
				idc = 1307;
			};
			class PictureKeepAspect_8: PictureKeepAspect_0
			{
				idc = 1308;
			};
			class PictureKeepAspect_9: PictureKeepAspect_0
			{
				idc = 1309;
			};
			class PictureKeepAspect_10: PictureKeepAspect_0
			{
				idc = 1310;
			};
			class PictureKeepAspect_11: PictureKeepAspect_0
			{
				idc = 1311;
			};
			class PictureKeepAspect_12: PictureKeepAspect_0
			{
				idc = 1312;
			};
			class PictureKeepAspect_13: PictureKeepAspect_0
			{
				idc = 1313;
			};
			class PictureKeepAspect_14: PictureKeepAspect_0
			{
				idc = 1314;
			};
			class PictureKeepAspect_15: PictureKeepAspect_0
			{
				idc = 1315;
			};
			class PictureKeepAspect_16: PictureKeepAspect_0
			{
				idc = 1316;
			};
			class PictureKeepAspect_17: PictureKeepAspect_0
			{
				idc = 1317;
			};
			class PictureKeepAspect_18: PictureKeepAspect_0
			{
				idc = 1318;
			};
			class PictureKeepAspect_19: PictureKeepAspect_0
			{
				idc = 1319;
			};
			class PictureKeepAspect_20: PictureKeepAspect_0
			{
				idc = 1320;
			};
			class PictureKeepAspect_21: PictureKeepAspect_0
			{
				idc = 1321;
			};
			class PictureKeepAspect_22: PictureKeepAspect_0
			{
				idc = 1322;
			};
			class PictureKeepAspect_23: PictureKeepAspect_0
			{
				idc = 1323;
			};
			class PictureKeepAspect_24: PictureKeepAspect_0
			{
				idc = 1324;
			};
			class PictureKeepAspect_25: PictureKeepAspect_0
			{
				idc = 1325;
			};
			class PictureKeepAspect_26: PictureKeepAspect_0
			{
				idc = 1326;
			};
			class PictureKeepAspect_27: PictureKeepAspect_0
			{
				idc = 1327;
			};
			class PictureKeepAspect_28: PictureKeepAspect_0
			{
				idc = 1328;
			};
			class PictureKeepAspect_29: PictureKeepAspect_0
			{
				idc = 1329;
			};
			class PictureKeepAspect_30: PictureKeepAspect_0
			{
				idc = 1330;
			};
			class PictureKeepAspect_31: PictureKeepAspect_0
			{
				idc = 1331;
			};
			class PictureKeepAspect_32: PictureKeepAspect_0
			{
				idc = 1332;
			};
			class PictureKeepAspect_33: PictureKeepAspect_0
			{
				idc = 1333;
			};
			class PictureKeepAspect_34: PictureKeepAspect_0
			{
				idc = 1334;
			};
			class PictureKeepAspect_35: PictureKeepAspect_0
			{
				idc = 1335;
			};
			class PictureKeepAspect_36: PictureKeepAspect_0
			{
				idc = 1336;
			};
			class PictureKeepAspect_37: PictureKeepAspect_0
			{
				idc = 1337;
			};
			class PictureKeepAspect_38: PictureKeepAspect_0
			{
				idc = 1338;
			};
			class PictureKeepAspect_39: PictureKeepAspect_0
			{
				idc = 1339;
			};
			class PictureKeepAspect_40: PictureKeepAspect_0
			{
				idc = 1340;
			};
			class PictureKeepAspect_41: PictureKeepAspect_0
			{
				idc = 1341;
			};
			class PictureKeepAspect_42: PictureKeepAspect_0
			{
				idc = 1342;
			};
			class PictureKeepAspect_43: PictureKeepAspect_0
			{
				idc = 1343;
			};
			class PictureKeepAspect_44: PictureKeepAspect_0
			{
				idc = 1344;
			};
			class PictureKeepAspect_45: PictureKeepAspect_0
			{
				idc = 1345;
			};
			class PictureKeepAspect_46: PictureKeepAspect_0
			{
				idc = 1346;
			};
			class PictureKeepAspect_47: PictureKeepAspect_0
			{
				idc = 1347;
			};
			class PictureKeepAspect_48: PictureKeepAspect_0
			{
				idc = 1348;
			};
			class PictureKeepAspect_49: PictureKeepAspect_0
			{
				idc = 1349;
			};
			class PictureKeepAspect_50: PictureKeepAspect_0
			{
				idc = 1350;
			};
			class PictureKeepAspect_51: PictureKeepAspect_0
			{
				idc = 1351;
			};
			class PictureKeepAspect_52: PictureKeepAspect_0
			{
				idc = 1352;
			};
			class PictureKeepAspect_53: PictureKeepAspect_0
			{
				idc = 1353;
			};
			class PictureKeepAspect_54: PictureKeepAspect_0
			{
				idc = 1354;
			};
			class PictureKeepAspect_55: PictureKeepAspect_0
			{
				idc = 1355;
			};
			class PictureKeepAspect_56: PictureKeepAspect_0
			{
				idc = 1356;
			};
			class PictureKeepAspect_57: PictureKeepAspect_0
			{
				idc = 1357;
			};
			class PictureKeepAspect_58: PictureKeepAspect_0
			{
				idc = 1358;
			};
			class PictureKeepAspect_59: PictureKeepAspect_0
			{
				idc = 1359;
			};
			class PictureKeepAspect_60: PictureKeepAspect_0
			{
				idc = 1360;
			};
			class PictureKeepAspect_61: PictureKeepAspect_0
			{
				idc = 1361;
			};
			class PictureKeepAspect_62: PictureKeepAspect_0
			{
				idc = 1362;
			};
			class PictureKeepAspect_63: PictureKeepAspect_0
			{
				idc = 1363;
			};
			class PictureKeepAspect_64: PictureKeepAspect_0
			{
				idc = 1364;
			};
			class PictureKeepAspect_65: PictureKeepAspect_0
			{
				idc = 1365;
			};
			class PictureKeepAspect_66: PictureKeepAspect_0
			{
				idc = 1366;
			};
			class PictureKeepAspect_67: PictureKeepAspect_0
			{
				idc = 1367;
			};
			class PictureKeepAspect_68: PictureKeepAspect_0
			{
				idc = 1368;
			};
			class PictureKeepAspect_69: PictureKeepAspect_0
			{
				idc = 1369;
			};
			class PictureKeepAspect_70: PictureKeepAspect_0
			{
				idc = 1370;
			};
			class PictureKeepAspect_71: PictureKeepAspect_0
			{
				idc = 1371;
			};
			class PictureKeepAspect_72: PictureKeepAspect_0
			{
				idc = 1372;
			};
			class PictureKeepAspect_73: PictureKeepAspect_0
			{
				idc = 1373;
			};
			class PictureKeepAspect_74: PictureKeepAspect_0
			{
				idc = 1374;
			};
			class PictureKeepAspect_75: PictureKeepAspect_0
			{
				idc = 1375;
			};
			class PictureKeepAspect_76: PictureKeepAspect_0
			{
				idc = 1376;
			};
			class PictureKeepAspect_77: PictureKeepAspect_0
			{
				idc = 1377;
			};
			class PictureKeepAspect_78: PictureKeepAspect_0
			{
				idc = 1378;
			};
			class PictureKeepAspect_79: PictureKeepAspect_0
			{
				idc = 1379;
			};
			class PictureKeepAspect_80: PictureKeepAspect_0
			{
				idc = 1380;
			};
			class PictureKeepAspect_81: PictureKeepAspect_0
			{
				idc = 1381;
			};
			class PictureKeepAspect_82: PictureKeepAspect_0
			{
				idc = 1382;
			};
			class PictureKeepAspect_83: PictureKeepAspect_0
			{
				idc = 1383;
			};
			class PictureKeepAspect_84: PictureKeepAspect_0
			{
				idc = 1384;
			};
			class PictureKeepAspect_85: PictureKeepAspect_0
			{
				idc = 1385;
			};
			class PictureKeepAspect_86: PictureKeepAspect_0
			{
				idc = 1386;
			};
			class PictureKeepAspect_87: PictureKeepAspect_0
			{
				idc = 1387;
			};
			class PictureKeepAspect_88: PictureKeepAspect_0
			{
				idc = 1388;
			};
			class PictureKeepAspect_89: PictureKeepAspect_0
			{
				idc = 1389;
			};
			class PictureKeepAspect_90: PictureKeepAspect_0
			{
				idc = 1390;
			};
			class PictureKeepAspect_91: PictureKeepAspect_0
			{
				idc = 1391;
			};
			class PictureKeepAspect_92: PictureKeepAspect_0
			{
				idc = 1392;
			};
			class PictureKeepAspect_93: PictureKeepAspect_0
			{
				idc = 1393;
			};
			class PictureKeepAspect_94: PictureKeepAspect_0
			{
				idc = 1394;
			};
			class PictureKeepAspect_95: PictureKeepAspect_0
			{
				idc = 1395;
			};
			class PictureKeepAspect_96: PictureKeepAspect_0
			{
				idc = 1396;
			};
			class PictureKeepAspect_97: PictureKeepAspect_0
			{
				idc = 1397;
			};
			class PictureKeepAspect_98: PictureKeepAspect_0
			{
				idc = 1398;
			};
			class PictureKeepAspect_99: PictureKeepAspect_0
			{
				idc = 1399;
			};
			class TextCredits_0: RscStructuredText
			{
				idc = 9000;
				text = "";
				x = -3;
				y = -3;
				size = "(safezoneH*0.028)";
			};
			class TextCredits_1: TextCredits_0
			{
				idc = 9001;
			};
			class TextCredits_2: TextCredits_0
			{
				idc = 9002;
			};
			class TextCredits_3: TextCredits_0
			{
				idc = 9003;
			};
			class TextCredits_4: TextCredits_0
			{
				idc = 9004;
			};
			class TextCredits_5: TextCredits_0
			{
				idc = 9005;
			};
			class TextCredits_6: TextCredits_0
			{
				idc = 9006;
			};
			class TextCredits_7: TextCredits_0
			{
				idc = 9007;
			};
			class TextCredits_8: TextCredits_0
			{
				idc = 9008;
			};
			class TextCredits_9: TextCredits_0
			{
				idc = 9009;
			};
			class TextCredits_10: TextCredits_0
			{
				idc = 9010;
			};
			class TextCredits_11: TextCredits_0
			{
				idc = 9011;
			};
			class TextCredits_12: TextCredits_0
			{
				idc = 9012;
			};
			class TextCredits_13: TextCredits_0
			{
				idc = 9013;
			};
			class TextCredits_14: TextCredits_0
			{
				idc = 9014;
			};
			class TextCredits_15: TextCredits_0
			{
				idc = 9015;
			};
			class TextCredits_16: TextCredits_0
			{
				idc = 9016;
			};
			class TextCredits_17: TextCredits_0
			{
				idc = 9017;
			};
			class TextCredits_18: TextCredits_0
			{
				idc = 9018;
			};
			class TextCredits_19: TextCredits_0
			{
				idc = 9019;
			};
			class TextCredits_20: TextCredits_0
			{
				idc = 9020;
			};
			class TextCredits_21: TextCredits_0
			{
				idc = 9021;
			};
			class TextCredits_22: TextCredits_0
			{
				idc = 9022;
			};
			class TextCredits_23: TextCredits_0
			{
				idc = 9023;
			};
			class TextCredits_24: TextCredits_0
			{
				idc = 9024;
			};
			class TextCredits_25: TextCredits_0
			{
				idc = 9025;
			};
			class TextCredits_26: TextCredits_0
			{
				idc = 9026;
			};
			class TextCredits_27: TextCredits_0
			{
				idc = 9027;
			};
			class TextCredits_28: TextCredits_0
			{
				idc = 9028;
			};
			class TextCredits_29: TextCredits_0
			{
				idc = 9029;
			};
			class TextCredits_30: TextCredits_0
			{
				idc = 9030;
			};
			class TextCredits_31: TextCredits_0
			{
				idc = 9031;
			};
			class TextCredits_32: TextCredits_0
			{
				idc = 9032;
			};
			class TextCredits_33: TextCredits_0
			{
				idc = 9033;
			};
			class TextCredits_34: TextCredits_0
			{
				idc = 9034;
			};
			class TextCredits_35: TextCredits_0
			{
				idc = 9035;
			};
			class TextCredits_36: TextCredits_0
			{
				idc = 9036;
			};
			class TextCredits_37: TextCredits_0
			{
				idc = 9037;
			};
			class TextCredits_38: TextCredits_0
			{
				idc = 9038;
			};
			class TextCredits_39: TextCredits_0
			{
				idc = 9039;
			};
			class TextCredits_40: TextCredits_0
			{
				idc = 9040;
			};
			class TextCredits_41: TextCredits_0
			{
				idc = 9041;
			};
			class TextCredits_42: TextCredits_0
			{
				idc = 9042;
			};
			class TextCredits_43: TextCredits_0
			{
				idc = 9043;
			};
			class TextCredits_44: TextCredits_0
			{
				idc = 9044;
			};
			class TextCredits_45: TextCredits_0
			{
				idc = 9045;
			};
			class TextCredits_46: TextCredits_0
			{
				idc = 9046;
			};
			class TextCredits_47: TextCredits_0
			{
				idc = 9047;
			};
			class TextCredits_48: TextCredits_0
			{
				idc = 9048;
			};
			class TextCredits_49: TextCredits_0
			{
				idc = 9049;
			};
			class TextCredits_50: TextCredits_0
			{
				idc = 9050;
			};
			class TextCredits_51: TextCredits_0
			{
				idc = 9051;
			};
			class TextCredits_52: TextCredits_0
			{
				idc = 9052;
			};
			class TextCredits_53: TextCredits_0
			{
				idc = 9053;
			};
			class TextCredits_54: TextCredits_0
			{
				idc = 9054;
			};
			class TextCredits_55: TextCredits_0
			{
				idc = 9055;
			};
			class TextCredits_56: TextCredits_0
			{
				idc = 9056;
			};
			class TextCredits_57: TextCredits_0
			{
				idc = 9057;
			};
			class TextCredits_58: TextCredits_0
			{
				idc = 9058;
			};
			class TextCredits_59: TextCredits_0
			{
				idc = 9059;
			};
			class TextCredits_60: TextCredits_0
			{
				idc = 9060;
			};
			class TextCredits_61: TextCredits_0
			{
				idc = 9061;
			};
			class TextCredits_62: TextCredits_0
			{
				idc = 9062;
			};
			class TextCredits_63: TextCredits_0
			{
				idc = 9063;
			};
			class TextCredits_64: TextCredits_0
			{
				idc = 9064;
			};
			class TextCredits_65: TextCredits_0
			{
				idc = 9065;
			};
			class TextCredits_66: TextCredits_0
			{
				idc = 9066;
			};
			class TextCredits_67: TextCredits_0
			{
				idc = 9067;
			};
			class TextCredits_68: TextCredits_0
			{
				idc = 9068;
			};
			class TextCredits_69: TextCredits_0
			{
				idc = 9069;
			};
			class TextCredits_70: TextCredits_0
			{
				idc = 9070;
			};
			class TextCredits_71: TextCredits_0
			{
				idc = 9071;
			};
			class TextCredits_72: TextCredits_0
			{
				idc = 9072;
			};
			class TextCredits_73: TextCredits_0
			{
				idc = 9073;
			};
			class TextCredits_74: TextCredits_0
			{
				idc = 9074;
			};
			class TextCredits_75: TextCredits_0
			{
				idc = 9075;
			};
			class TextCredits_76: TextCredits_0
			{
				idc = 9076;
			};
			class TextCredits_77: TextCredits_0
			{
				idc = 9077;
			};
			class TextCredits_78: TextCredits_0
			{
				idc = 9078;
			};
			class TextCredits_79: TextCredits_0
			{
				idc = 9079;
			};
			class TextCredits_80: TextCredits_0
			{
				idc = 9080;
			};
			class TextCredits_81: TextCredits_0
			{
				idc = 9081;
			};
			class TextCredits_82: TextCredits_0
			{
				idc = 9082;
			};
			class TextCredits_83: TextCredits_0
			{
				idc = 9083;
			};
			class TextCredits_84: TextCredits_0
			{
				idc = 9084;
			};
			class TextCredits_85: TextCredits_0
			{
				idc = 9085;
			};
			class TextCredits_86: TextCredits_0
			{
				idc = 9086;
			};
			class TextCredits_87: TextCredits_0
			{
				idc = 9087;
			};
			class TextCredits_88: TextCredits_0
			{
				idc = 9088;
			};
			class TextCredits_89: TextCredits_0
			{
				idc = 9089;
			};
			class TextCredits_90: TextCredits_0
			{
				idc = 9090;
			};
			class TextCredits_91: TextCredits_0
			{
				idc = 9091;
			};
			class TextCredits_92: TextCredits_0
			{
				idc = 9092;
			};
			class TextCredits_93: TextCredits_0
			{
				idc = 9093;
			};
			class TextCredits_94: TextCredits_0
			{
				idc = 9094;
			};
			class TextCredits_95: TextCredits_0
			{
				idc = 9095;
			};
			class TextCredits_96: TextCredits_0
			{
				idc = 9096;
			};
			class TextCredits_97: TextCredits_0
			{
				idc = 9097;
			};
			class TextCredits_98: TextCredits_0
			{
				idc = 9098;
			};
			class TextCredits_99: TextCredits_0
			{
				idc = 9099;
			};
		};
	};
	class RscE3_US_CORE_P2_01
	{
		idd = 3000;
		duration = 50;
		fadein = 0;
		movingEnable = 0;
		onload = "uinamespace setvariable ['RscE3',_this select 0]";
		class controlsBackground
		{
			class Background: RscText
			{
				idc = 999;
				colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",0.6};
				x = "safezoneX";
				y = "safezoneY";
				w = "safezoneW";
				h = "safezoneH";
			};
			class Cloud0: RscPicture
			{
				idc = 2000;
			};
			class Cloud1: Cloud0
			{
				idc = 2001;
			};
			class Cloud2: Cloud0
			{
				idc = 2002;
			};
			class Cloud3: Cloud0
			{
				idc = 2003;
			};
			class Cloud4: Cloud0
			{
				idc = 2004;
			};
		};
		class controls
		{
			class RscPicture_1200: RscPicture
			{
				idc = 1200;
				text = "A3\ui_f\data\tut\icons\checkboxes\active.paa";
				x = "8 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "3.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				shadow = 2;
			};
			class RscText_1000: RscText
			{
				idc = 1000;
				text = "Pre-flight";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "3.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "20 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscPicture_1201: RscPicture_1200
			{
				idc = 1201;
				text = "A3\ui_f\data\tut\icons\checkboxes\ok.paa";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "4.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscText_1001: RscText
			{
				idc = 1001;
				text = "Detailed Environment";
				x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "4.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscPicture_1202: RscPicture_1200
			{
				idc = 1202;
				text = "A3\ui_f\data\tut\icons\checkboxes\ok.paa";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "5.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscPicture_1203: RscPicture_1200
			{
				idc = 1203;
				text = "A3\ui_f\data\tut\icons\checkboxes\ok.paa";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "6.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscText_1002: RscText
			{
				idc = 1002;
				text = "Interactive Objects ";
				x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "5.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscText_1003: RscText
			{
				idc = 1003;
				text = "Ambient Characters ";
				x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "6.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscPicture_1204: RscPicture_1200
			{
				idc = 1204;
				text = "A3\ui_f\data\tut\icons\checkboxes\active.paa";
				x = "8 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "8 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscPicture_1205: RscPicture_1200
			{
				idc = 1205;
				text = "A3\ui_f\data\tut\icons\checkboxes\ok.paa";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "9 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscPicture_1206: RscPicture_1200
			{
				idc = 1206;
				text = "A3\ui_f\data\tut\icons\checkboxes\ok.paa";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "10 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscPicture_1207: RscPicture_1200
			{
				idc = 1207;
				text = "A3\ui_f\data\tut\icons\checkboxes\ok.paa";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "11 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscText_1004: RscText
			{
				idc = 1004;
				text = "Start-up ";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "8 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "20 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscText_1005: RscText
			{
				idc = 1005;
				text = "Optional ";
				x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "9 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscText_1006: RscText
			{
				idc = 1006;
				text = "Authentic ";
				x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "10 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscText_1007: RscText
			{
				idc = 1007;
				text = "Visual ";
				x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "11 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscPicture_1208: RscPicture_1200
			{
				idc = 1208;
				text = "A3\ui_f\data\tut\icons\checkboxes\active.paa";
				x = "8 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "12.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscPicture_1209: RscPicture_1200
			{
				idc = 1209;
				text = "A3\ui_f\data\tut\icons\checkboxes\ok.paa";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "13.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscPicture_1210: RscPicture_1200
			{
				idc = 1210;
				text = "A3\ui_f\data\tut\icons\checkboxes\ok.paa";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "14.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscPicture_1211: RscPicture_1200
			{
				idc = 1211;
				text = "A3\ui_f\data\tut\icons\checkboxes\ok.paa";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "15.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "1 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscText_1008: RscText
			{
				idc = 1008;
				text = "Take off ";
				x = "9.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "12.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "20 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscText_1009: RscText
			{
				idc = 1009;
				text = "Flight-dynamics ";
				x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "13.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscText_1010: RscText
			{
				idc = 1010;
				text = "Variables ";
				x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "14.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class RscText_1011: RscText
			{
				idc = 1011;
				text = "Models ";
				x = "11 * 			(		((safezoneW / safezoneH) min 1.2) / 32) + 			(safezoneX)";
				y = "15.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 		(		((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "19 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "1 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
		};
	};
	class RscE3_E3_PiP: RscE3_US_CORE_P2_01
	{
		class controls: controls
		{
			class RscText_1000: RscText_1000
			{
				text = "Picture in picture ";
			};
			class RscText_1001: RscText_1001
			{
				text = "Brand new Render-to-Texture technology ";
			};
			class RscText_1002: RscText_1002
			{
				text = "Real-time 'video' from the game world ";
			};
			class RscText_1003: RscText_1003
			{
				text = "Functional mirrors and displays ";
			};
			class RscText_1004: RscText_1004
			{
				text = "Forward-looking Infrared ";
			};
			class RscText_1005: RscText_1005
			{
				text = "Thermal Imaging technology ";
			};
			class RscText_1006: RscText_1006
			{
				text = "Identify heat signatures ";
			};
			class RscText_1007: RscText_1007
			{
				text = "People, vehicles, ambient life, and more ";
			};
			delete RscText_1008;
			delete RscText_1009;
			delete RscText_1010;
			delete RscText_1011;
			class RscPicture_1200: RscPicture_1200{};
			class RscPicture_1201: RscPicture_1201{};
			class RscPicture_1202: RscPicture_1202{};
			class RscPicture_1203: RscPicture_1203{};
			class RscPicture_1204: RscPicture_1204{};
			class RscPicture_1205: RscPicture_1205{};
			class RscPicture_1206: RscPicture_1206{};
			class RscPicture_1207: RscPicture_1207{};
			delete RscPicture_1208;
			delete RscPicture_1209;
			delete RscPicture_1210;
			delete RscPicture_1211;
		};
	};
	class RscE3_E3_Slingload: RscE3_E3_PiP
	{
		class controls: controls
		{
			class RscText_1000: RscText_1000
			{
				text = "Sling-load ";
			};
			class RscText_1001: RscText_1001
			{
				text = "Attach external loads to helicopters ";
			};
			class RscText_1002: RscText_1002
			{
				text = "Pendulum effect on the helicopter flight model ";
			};
			class RscText_1003: RscText_1003
			{
				text = "People, vehicles, cargo - a wide range of gameplay opportunities ";
			};
			delete RscText_1004;
			delete RscText_1005;
			delete RscText_1006;
			delete RscText_1007;
			class RscPicture_1200: RscPicture_1200{};
			class RscPicture_1201: RscPicture_1201{};
			class RscPicture_1202: RscPicture_1202{};
			class RscPicture_1203: RscPicture_1203{};
			delete RscPicture_1204;
			delete RscPicture_1205;
			delete RscPicture_1206;
			delete RscPicture_1207;
		};
	};
	class RscTitleStructuredText
	{
		idd = -1;
		movingEnable = 1;
		duration = 10;
		fadein = 0.5;
		onload = "uinamespace setvariable ['RscTitleStructuredText',_this select 0];";
		class controls
		{
			class Text: RscStructuredText
			{
				idc = 9999;
				x = "(profilenamespace getvariable [""IGUI_GRID_CHAT_X"",		(safezoneX + 1 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CHAT_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) + 3 * 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
				w = "(profilenamespace getvariable [""IGUI_GRID_CHAT_W"",		(20 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				h = "3 * 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
				class Attributes: Attributes
				{
					align = "center";
				};
			};
		};
	};
	class RscPIP
	{
		idd = -1;
		duration = 1e+011;
		fadein = 0;
		onLoad = "uinamespace setvariable ['RscPIP',_this select 0];";
		onUnload = "uinamespace setvariable ['RscPIP',nil];";
		class controlsBackground
		{
			class PIP: RscPicture
			{
				IDC = 2300;
				x = "(safezoneX + safezoneW - 6.8 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) + (	0.5 * 	0.67 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
				y = "(7 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))) + (	0.5 * 	0.67 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
				w = "(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) - (2 * 	0.5 * 	0.67 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
				h = "(				(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32))) - (2 * 	0.5 * 	0.67 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			};
		};
		class controls
		{
			delete CA_MinimapFrame;
			class Static_00: RscPicture
			{
				IDC = 2400;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_00_ca.paa";
				x = 0;
				y = 0;
				w = 0;
				h = 0;
			};
			class Static_01: Static_00
			{
				IDC = 2401;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_01_ca.paa";
			};
			class Static_02: Static_00
			{
				IDC = 2402;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_02_ca.paa";
			};
			class Static_03: Static_00
			{
				IDC = 2403;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_03_ca.paa";
			};
			class Static_04: Static_00
			{
				IDC = 2404;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_04_ca.paa";
			};
			class Static_05: Static_00
			{
				IDC = 2405;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_05_ca.paa";
			};
			class Static_06: Static_00
			{
				IDC = 2406;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_06_ca.paa";
			};
			class Static_07: Static_00
			{
				IDC = 2407;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_07_ca.paa";
			};
			class Static_08: Static_00
			{
				IDC = 2408;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_08_ca.paa";
			};
			class Static_09: Static_00
			{
				IDC = 2409;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_09_ca.paa";
			};
			class Static_10: Static_00
			{
				IDC = 2410;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_10_ca.paa";
			};
			class Static_11: Static_00
			{
				IDC = 2411;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_11_ca.paa";
			};
			class Static_12: Static_00
			{
				IDC = 2412;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_12_ca.paa";
			};
			class TL: RscPicture
			{
				text = "A3\ui_f\data\GUI\Rsc\RscMiniMapSmall\GPS_TL_ca.paa";
				x = "(safezoneX + safezoneW - 6.8 * 						(		((safezoneW / safezoneH) min 1.2) / 32))";
				y = "(7 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2)))";
				w = "0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class T: RscPicture
			{
				text = "A3\ui_f\data\GUI\Rsc\RscMiniMapSmall\GPS_T_ca.paa";
				x = "(safezoneX + safezoneW - 6.8 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) + (	0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
				y = "(7 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2)))";
				w = "(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) - (2 * 	0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
				h = "0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class TR: RscPicture
			{
				text = "A3\ui_f\data\GUI\Rsc\RscMiniMapSmall\GPS_TR_ca.paa";
				x = "(safezoneX + safezoneW - 6.8 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) + 				(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) - (	0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
				y = "(7 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2)))";
				w = "0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class R: RscPicture
			{
				text = "A3\ui_f\data\GUI\Rsc\RscMiniMapSmall\GPS_R_ca.paa";
				x = "(safezoneX + safezoneW - 6.8 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) + 				(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) - (	0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
				y = "(7 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))) + (	0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
				w = "0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "(				(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32))) - (2 * 	0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			};
			class BR: RscPicture
			{
				text = "A3\ui_f\data\GUI\Rsc\RscMiniMapSmall\GPS_BR_ca.paa";
				x = "(safezoneX + safezoneW - 6.8 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) + 				(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) - (	0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
				y = "(7 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))) + 		(				(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32))) - (	0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
				w = "0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class B: RscPicture
			{
				text = "A3\ui_f\data\GUI\Rsc\RscMiniMapSmall\GPS_B_ca.paa";
				x = "(safezoneX + safezoneW - 6.8 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) + (	0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
				y = "(7 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))) + 		(				(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32))) - (	0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
				w = "(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32)) - (2 * 	0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32))";
				h = "0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class BL: RscPicture
			{
				text = "A3\ui_f\data\GUI\Rsc\RscMiniMapSmall\GPS_BL_ca.paa";
				x = "(safezoneX + safezoneW - 6.8 * 						(		((safezoneW / safezoneH) min 1.2) / 32))";
				y = "(7 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))) + 		(				(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32))) - (	0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
				w = "0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			};
			class L: RscPicture
			{
				text = "A3\ui_f\data\GUI\Rsc\RscMiniMapSmall\GPS_L_ca.paa";
				x = "(safezoneX + safezoneW - 6.8 * 						(		((safezoneW / safezoneH) min 1.2) / 32))";
				y = "(7 * 						(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 			(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))) + (	0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
				w = "0.5 * 			(		((safezoneW / safezoneH) min 1.2) / 32)";
				h = "(				(6 * 						(		((safezoneW / safezoneH) min 1.2) / 32))) - (2 * 	0.5 * 			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20))";
			};
		};
	};
	class RscGroupIndicator
	{
		idd = 1166;
		movingEnable = 1;
		enableSimulation = 1;
		enableDisplay = 1;
		onLoad = "['Init',_this] call (uinamespace getvariable 'bis_fnc_groupIndicator')";
		onUnload = "['Exit',_this] call (uinamespace getvariable 'bis_fnc_groupIndicator')";
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		class Controls
		{
			class MiniMap: RscMapControl
			{
				idc = 116601;
				w = 0.15;
				h = 0.2;
				x = "(profilenamespace getvariable ['IGUI_GRID_GPS_X',		(safezoneX + safezoneW - 11 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "(profilenamespace getvariable ['IGUI_GRID_GPS_Y',		(safezoneY + safezoneH - 20.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				style = 0;
				type = 101;
				font = "RobotoCondensed";
				sizeEx = 0;
				maxSatelliteAlpha = 0;
				colorBackground[] = {0,0,0,0};
				colorLevels[] = {0,0,0,0};
				colorSea[] = {0,0,0,0};
				colorForest[] = {0,0,0,0};
				colorRocks[] = {0,0,0,0};
				colorCountlines[] = {0,0,0,0};
				colorMainCountlines[] = {0,0,0,0};
				colorCountlinesWater[] = {0,0,0,0};
				colorMainCountlinesWater[] = {0,0,0,0};
				colorPowerLines[] = {0,0,0,0};
				colorRailWay[] = {0,0,0,0};
				colorForestBorder[] = {0,0,0,0};
				colorRocksBorder[] = {0,0,0,0};
				colorNames[] = {0,0,0,0};
				colorInactive[] = {0,0,0,0};
				colorOutside[] = {0,0,0,0};
				colorText[] = {0,0,0,0};
				colorGrid[] = {0,0,0,0};
				colorGridMap[] = {0,0,0,0};
				ShowCountourInterval = 0;
				shadow = 0;
				text = "";
				alphaFadeStartScale = 0;
				alphaFadeEndScale = 0;
				sizeExLabel = 0;
				sizeExGrid = 0;
				sizeExUnits = 0;
				sizeExNames = 0;
				sizeExInfo = 0;
				sizeExLevel = 0;
				stickX[] = {0,{"Gamma",0,0}};
				stickY[] = {0,{"Gamma",0,0}};
				ptsPerSquareSea = 0;
				ptsPerSquareTxt = 0;
				ptsPerSquareCLn = 0;
				ptsPerSquareExp = 0;
				ptsPerSquareCost = 0;
				ptsPerSquareFor = 0;
				ptsPerSquareForEdge = 0;
				ptsPerSquareRoad = 0;
				ptsPerSquareObj = 0;
				class Task: Task
				{
					icon = "";
					iconCreated = "";
					iconCanceled = "";
					iconDone = "";
					iconFailed = "";
					color[] = {0,0,0,0};
					colorCreated[] = {0,0,0,0};
					colorCanceled[] = {0,0,0,0};
					colorDone[] = {0,0,0,0};
					colorFailed[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
				class NAME
				{
					icon = "";
					color[] = {0,0,0,0};
					size = 0;
					importance = 0;
					coefMin = 0;
					coefMax = 0;
				};
			};
		};
	};
	class RscFunctionError
	{
		idd = 500;
		duration = 5;
		fadein = 0;
		movingEnable = 0;
		onload = "uinamespace setvariable ['RscFunctionError',_this select 0]";
		class Controls
		{
			class Error: RscStructuredText
			{
				font = "RobotoCondensedBold";
				sizeEx = "(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) * 0.55";
				idc = 1100;
				x = "-6.20841e-009 * safezoneW + safezoneX";
				y = "0.95 * safezoneH + safezoneY";
				w = "1 * safezoneW";
				h = "0.05 * safezoneH";
				colorBackground[] = {0,0,0,0.8};
			};
			class Icon: RscPicture
			{
				idc = 1200;
				text = "A3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_functions_ca.paa";
				x = "0.96875 * safezoneW + safezoneX";
				y = "0.95 * safezoneH + safezoneY";
				w = "0.03125 * safezoneW";
				h = "0.05 * safezoneH";
				colorText[] = {1,0.5,0,1};
			};
		};
	};
	class RscHealthTextures
	{
		idd = -1;
		duration = 1e+011;
		fadein = 0;
		fadeout = 1;
		onload = "uinamespace setvariable ['RscHealthTextures',_this select 0]";
		class controls
		{
			class Flame_1: RscPicture
			{
				idc = 1201;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire01_CA.paa";
				x = 0;
				y = 0;
				w = 0;
				h = 0;
			};
			class Flame_2: Flame_1
			{
				idc = 1202;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire02_CA.paa";
			};
			class Flame_3: Flame_1
			{
				idc = 1203;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire03_CA.paa";
			};
			class Flame_4: Flame_1
			{
				idc = 1204;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire04_CA.paa";
			};
			class Flame_5: Flame_1
			{
				idc = 1205;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire05_CA.paa";
			};
			class Flame_6: Flame_1
			{
				idc = 1206;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire06_CA.paa";
			};
			class Flame_7: Flame_1
			{
				idc = 1207;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire07_CA.paa";
			};
			class Flame_8: Flame_1
			{
				idc = 1208;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire08_CA.paa";
			};
			class Flame_9: Flame_1
			{
				idc = 1209;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire09_CA.paa";
			};
			class Flame_10: Flame_1
			{
				idc = 1210;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\Fire10_CA.paa";
			};
			class Blood_1: Flame_1
			{
				idc = 1211;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\blood_lower_ca.paa";
			};
			class Blood_2: Flame_1
			{
				idc = 1212;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\blood_middle_ca.paa";
			};
			class Blood_3: Flame_1
			{
				idc = 1213;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\blood_upper_ca.paa";
			};
			class Dust_1: Flame_1
			{
				idc = 1214;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_lower_ca.paa";
			};
			class Dust_2: Flame_1
			{
				idc = 1215;
				text = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
			};
		};
	};
	class RscTilesGroup
	{
		scriptName = "RscTilesGroup";
		scriptPath = "IGUI";
		onLoad = "[""onLoad"",_this,""RscTilesGroup"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscTilesGroup"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		idd = -1;
		duration = 1e+011;
		fadein = 0;
		class controls
		{
			class Group_00: RscControlsGroup
			{
				idc = 1000;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1100;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1200;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_01: RscControlsGroup
			{
				idc = 1001;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1101;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1201;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_02: RscControlsGroup
			{
				idc = 1002;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1102;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1202;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_03: RscControlsGroup
			{
				idc = 1003;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1103;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1203;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_04: RscControlsGroup
			{
				idc = 1004;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1104;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1204;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_05: RscControlsGroup
			{
				idc = 1005;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1105;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1205;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_06: RscControlsGroup
			{
				idc = 1006;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1106;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1206;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_07: RscControlsGroup
			{
				idc = 1007;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1107;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1207;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_08: RscControlsGroup
			{
				idc = 1008;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1108;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1208;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_09: RscControlsGroup
			{
				idc = 1009;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1109;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1209;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_10: RscControlsGroup
			{
				idc = 1010;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1110;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1210;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_11: RscControlsGroup
			{
				idc = 1011;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1111;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1211;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_12: RscControlsGroup
			{
				idc = 1012;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1112;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1212;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_13: RscControlsGroup
			{
				idc = 1013;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1113;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1213;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_14: RscControlsGroup
			{
				idc = 1014;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1114;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1214;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_15: RscControlsGroup
			{
				idc = 1015;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1115;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1215;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_16: RscControlsGroup
			{
				idc = 1016;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1116;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1216;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_17: RscControlsGroup
			{
				idc = 1017;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1117;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1217;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_18: RscControlsGroup
			{
				idc = 1018;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1118;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1218;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_19: RscControlsGroup
			{
				idc = 1019;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1119;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1219;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_20: RscControlsGroup
			{
				idc = 1020;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1120;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1220;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_21: RscControlsGroup
			{
				idc = 1021;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1121;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1221;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_22: RscControlsGroup
			{
				idc = 1022;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1122;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1222;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_23: RscControlsGroup
			{
				idc = 1023;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1123;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1223;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_24: RscControlsGroup
			{
				idc = 1024;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1124;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1224;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_25: RscControlsGroup
			{
				idc = 1025;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1125;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1225;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_26: RscControlsGroup
			{
				idc = 1026;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1126;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1226;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_27: RscControlsGroup
			{
				idc = 1027;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1127;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1227;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_28: RscControlsGroup
			{
				idc = 1028;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1128;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1228;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_29: RscControlsGroup
			{
				idc = 1029;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1129;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1229;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_30: RscControlsGroup
			{
				idc = 1030;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1130;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1230;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_31: RscControlsGroup
			{
				idc = 1031;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1131;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1231;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_32: RscControlsGroup
			{
				idc = 1032;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1132;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1232;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_33: RscControlsGroup
			{
				idc = 1033;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1133;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1233;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_34: RscControlsGroup
			{
				idc = 1034;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1134;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1234;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_35: RscControlsGroup
			{
				idc = 1035;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1135;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1235;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_36: RscControlsGroup
			{
				idc = 1036;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1136;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1236;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_37: RscControlsGroup
			{
				idc = 1037;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1137;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1237;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_38: RscControlsGroup
			{
				idc = 1038;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1138;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1238;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_39: RscControlsGroup
			{
				idc = 1039;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1139;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1239;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_40: RscControlsGroup
			{
				idc = 1040;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1140;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1240;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_41: RscControlsGroup
			{
				idc = 1041;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1141;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1241;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_42: RscControlsGroup
			{
				idc = 1042;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1142;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1242;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_43: RscControlsGroup
			{
				idc = 1043;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1143;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1243;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_44: RscControlsGroup
			{
				idc = 1044;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1144;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1244;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_45: RscControlsGroup
			{
				idc = 1045;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1145;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1245;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_46: RscControlsGroup
			{
				idc = 1046;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1146;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1246;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_47: RscControlsGroup
			{
				idc = 1047;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1147;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1247;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_48: RscControlsGroup
			{
				idc = 1048;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1148;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1248;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_49: RscControlsGroup
			{
				idc = 1049;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1149;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1249;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_50: RscControlsGroup
			{
				idc = 1050;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1150;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1250;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_51: RscControlsGroup
			{
				idc = 1051;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1151;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1251;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_52: RscControlsGroup
			{
				idc = 1052;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1152;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1252;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_53: RscControlsGroup
			{
				idc = 1053;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1153;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1253;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_54: RscControlsGroup
			{
				idc = 1054;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1154;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1254;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_55: RscControlsGroup
			{
				idc = 1055;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1155;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1255;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_56: RscControlsGroup
			{
				idc = 1056;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1156;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1256;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_57: RscControlsGroup
			{
				idc = 1057;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1157;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1257;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_58: RscControlsGroup
			{
				idc = 1058;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1158;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1258;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_59: RscControlsGroup
			{
				idc = 1059;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1159;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1259;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_60: RscControlsGroup
			{
				idc = 1060;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1160;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1260;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_61: RscControlsGroup
			{
				idc = 1061;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1161;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1261;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_62: RscControlsGroup
			{
				idc = 1062;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1162;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1262;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_63: RscControlsGroup
			{
				idc = 1063;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1163;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1263;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_64: RscControlsGroup
			{
				idc = 1064;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1164;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1264;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_65: RscControlsGroup
			{
				idc = 1065;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1165;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1265;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_66: RscControlsGroup
			{
				idc = 1066;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1166;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1266;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_67: RscControlsGroup
			{
				idc = 1067;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1167;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1267;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_68: RscControlsGroup
			{
				idc = 1068;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1168;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1268;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_69: RscControlsGroup
			{
				idc = 1069;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1169;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1269;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_70: RscControlsGroup
			{
				idc = 1070;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1170;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1270;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_71: RscControlsGroup
			{
				idc = 1071;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1171;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1271;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_72: RscControlsGroup
			{
				idc = 1072;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1172;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1272;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_73: RscControlsGroup
			{
				idc = 1073;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1173;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1273;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_74: RscControlsGroup
			{
				idc = 1074;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1174;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1274;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_75: RscControlsGroup
			{
				idc = 1075;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1175;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1275;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_76: RscControlsGroup
			{
				idc = 1076;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1176;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1276;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_77: RscControlsGroup
			{
				idc = 1077;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1177;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1277;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_78: RscControlsGroup
			{
				idc = 1078;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1178;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1278;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_79: RscControlsGroup
			{
				idc = 1079;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1179;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1279;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_80: RscControlsGroup
			{
				idc = 1080;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1180;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1280;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_81: RscControlsGroup
			{
				idc = 1081;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1181;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1281;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_82: RscControlsGroup
			{
				idc = 1082;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1182;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1282;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_83: RscControlsGroup
			{
				idc = 1083;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1183;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1283;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_84: RscControlsGroup
			{
				idc = 1084;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1184;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1284;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_85: RscControlsGroup
			{
				idc = 1085;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1185;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1285;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_86: RscControlsGroup
			{
				idc = 1086;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1186;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1286;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_87: RscControlsGroup
			{
				idc = 1087;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1187;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1287;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_88: RscControlsGroup
			{
				idc = 1088;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1188;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1288;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_89: RscControlsGroup
			{
				idc = 1089;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1189;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1289;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_90: RscControlsGroup
			{
				idc = 1090;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1190;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1290;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_91: RscControlsGroup
			{
				idc = 1091;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1191;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1291;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_92: RscControlsGroup
			{
				idc = 1092;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1192;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1292;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_93: RscControlsGroup
			{
				idc = 1093;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1193;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1293;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_94: RscControlsGroup
			{
				idc = 1094;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1194;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1294;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_95: RscControlsGroup
			{
				idc = 1095;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1195;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1295;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_96: RscControlsGroup
			{
				idc = 1096;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1196;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1296;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_97: RscControlsGroup
			{
				idc = 1097;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1197;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1297;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_98: RscControlsGroup
			{
				idc = 1098;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1198;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1298;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
			class Group_99: RscControlsGroup
			{
				idc = 1099;
				class VScrollbar: VScrollbar
				{
					width = 0;
				};
				class HScrollbar: HScrollbar
				{
					height = 0;
				};
				class controls
				{
					class StructuredText: RscStructuredText
					{
						idc = 1199;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
					class RscPicture: RscPicture
					{
						idc = 1299;
						x = 0;
						y = 0;
						w = 0;
						h = 0;
					};
				};
			};
		};
	};
	class RscEstablishingShot
	{
		idd = -1;
		duration = 1e+011;
		fadeIn = 0;
		scriptName = "RscEstablishingShot";
		scriptPath = "GUI";
		onLoad = "[""onLoad"",_this,""RscEstablishingShot"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscEstablishingShot"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		effectTilesAlpha = 0.15;
		class controlsBackground
		{
			class Vignette: RscVignette
			{
				idc = 114998;
			};
			class TileGroup: RscControlsGroupNoScrollbars
			{
				idc = 115099;
				x = "safezoneXAbs";
				y = "safezoneY";
				w = "safezoneWAbs";
				h = "safezoneH";
				class Controls
				{
					class Background: RscText
					{
						idc = 114999;
						x = 0;
						y = 0;
						w = "safezoneWAbs";
						h = "safezoneH";
						colorBackground[] = {0,0,0,0.5};
					};
				};
			};
			class SITREP: RscStructuredText
			{
				IDC = 2500;
				x = 0;
				y = 0;
				w = 0;
				h = 0;
			};
		};
	};
	class RscSpectator
	{
		scriptName = "RscSpectator";
		scriptPath = "IGUI";
		onLoad = "[""onLoad"",_this,""RscSpectator"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscSpectator"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		idd = 3000;
		duration = 1e+011;
		fadein = 0;
		movingEnable = 0;
		class ControlsBackground
		{
			class Map: RscMapControl
			{
				x = -1;
				y = -1;
				w = 0;
				h = 0;
			};
		};
		class Controls
		{
			class PlayerIcon: RscPicture
			{
				shadow = 2;
				idc = 1200;
				text = "\A3\ui_f\data\igui\cfg\cursors\select_ca.paa";
				x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
				y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class Player: RscControlsGroup
			{
				x = "safezoneX + safezoneW - 16 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				idc = 2300;
				y = "17 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "7.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				class controls
				{
					class PlayerNameBackground: RscText
					{
						colorBackground[] = {0,0,0,1};
						idc = 1000;
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class PlayerName: RscText
					{
						idc = 1002;
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class PlayerGroup: RscText
					{
						font = "RobotoCondensedLight";
						style = 1;
						idc = 1001;
						x = "9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorText[] = {1,1,1,0.5};
						sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class PlayerDescription: RscStructuredText
					{
						idc = 1100;
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "15 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0,0,0,0.5};
					};
				};
			};
		};
	};
	class RscStatic
	{
		idd = -1;
		duration = 1;
		fadeIn = 0;
		name = "$STR_A3_RscStatic_0";
		scriptName = "RscStatic";
		scriptPath = "IGUI";
		onLoad = "[""onLoad"",_this,""RscStatic"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscStatic"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		class controls
		{
			class Static_00: RscPicture
			{
				IDC = 2400;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_00_ca.paa";
				x = 0;
				y = 0;
				w = 0;
				h = 0;
			};
			class Static_01: Static_00
			{
				IDC = 2401;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_01_ca.paa";
			};
			class Static_02: Static_00
			{
				IDC = 2402;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_02_ca.paa";
			};
			class Static_03: Static_00
			{
				IDC = 2403;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_03_ca.paa";
			};
			class Static_04: Static_00
			{
				IDC = 2404;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_04_ca.paa";
			};
			class Static_05: Static_00
			{
				IDC = 2405;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_05_ca.paa";
			};
			class Static_06: Static_00
			{
				IDC = 2406;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_06_ca.paa";
			};
			class Static_07: Static_00
			{
				IDC = 2407;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_07_ca.paa";
			};
			class Static_08: Static_00
			{
				IDC = 2408;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_08_ca.paa";
			};
			class Static_09: Static_00
			{
				IDC = 2409;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_09_ca.paa";
			};
			class Static_10: Static_00
			{
				IDC = 2410;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_10_ca.paa";
			};
			class Static_11: Static_00
			{
				IDC = 2411;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_11_ca.paa";
			};
			class Static_12: Static_00
			{
				IDC = 2412;
				text = "a3\ui_f\data\igui\rsctitles\static\feedstatic_12_ca.paa";
			};
		};
	};
	class RscInterlacing
	{
		idd = -1;
		duration = 1e+011;
		fadeIn = 0;
		name = "$STR_A3_RscInterlacing_0";
		class controls
		{
			class Interlacing: RscInterlacingScreen{};
		};
	};
	class RscNoise
	{
		idd = -1;
		duration = 1e+011;
		fadeIn = 0;
		name = "$STR_A3_RscNoise_0";
		scriptName = "RscNoise";
		scriptPath = "IGUI";
		onLoad = "[""onLoad"",_this,""RscNoise"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscNoise"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		class controls
		{
			class Noise: RscPicture
			{
				idc = 1200;
				text = "#(ai,1024,512,9)perlinNoise(256,256,0,1)";
				x = "safeZoneXAbs";
				y = "safeZoneY";
				w = "safeZoneWAbs";
				h = "safeZoneH";
				colorText[] = {1,1,1,1};
			};
		};
	};
	class RscMissionEnd
	{
		idd = -1;
		duration = "11+2";
		fadeIn = 0.2;
		scriptName = "RscDisplayDebriefing";
		scriptPath = "GUI";
		onLoad = "[""onLoad"",_this,""RscDisplayDebriefing"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscDisplayDebriefing"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		class controls
		{
			class Title: RscText
			{
				style = 2;
				idc = 20600;
				text = "$STR_A3_Mission_Completed_title";
				x = "9.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
				w = "21 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				colorBackground[] = {0,0,0,1};
				sizeEx = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class Picture: RscPictureKeepAspect
			{
				idc = 20793;
				x = "18 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
				w = "4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				colorText[] = {0,0.3,0.6,1};
			};
			class Subtitle: RscText
			{
				style = 2;
				idc = 20601;
				x = "10.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "12.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
				w = "19 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				colorBackground[] = {0,0,0,1};
				sizeEx = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class Sides: RscControlsGroupNoScrollbars
			{
				idc = 21899;
				x = "12.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "5.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
				w = "15 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				class controls
				{
					class Side1: RscStructuredText
					{
						idc = 20696;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0,0,0,0};
					};
					class Side2: RscStructuredText
					{
						idc = 20697;
						x = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0,0,0,0};
					};
					class Side3: RscStructuredText
					{
						idc = 20698;
						x = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0,0,0,0};
					};
					class Side4: RscStructuredText
					{
						idc = 20699;
						x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0,0,0,0};
					};
					class Side5: RscStructuredText
					{
						idc = 20700;
						x = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0,0,0,0};
					};
				};
			};
		};
	};
	class RscNotification
	{
		scriptName = "RscNotification";
		scriptPath = "IGUI";
		onLoad = "[""onLoad"",_this,""RscNotification"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscNotification"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		idd = 3000;
		duration = 1e+011;
		fadein = 0;
		movingEnable = 0;
		class Controls
		{
			class NotificationArea: RscNotificationArea{};
		};
	};
	class RscCommMenuItems
	{
		idd = -1;
		duration = 1e+011;
		fadeIn = 0;
		scriptName = "RscCommMenuItems";
		scriptPath = "IGUI";
		onLoad = "[""onLoad"",_this,""RscCommMenuItems"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscCommMenuItems"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		class controls
		{
			class RscCommMenuItems: RscControlsGroupNoScrollbars
			{
				idc = 2300;
				x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_COMM_X"",		(0 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + safezoneX)])";
				y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_COMM_Y"",		(5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + safezoneY)])";
				w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "15 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				class controls
				{
					class Slot1Background: RscText
					{
						colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
						idc = 1000;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot1: RscPictureKeepAspect
					{
						colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
						idc = 1200;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot1Text: RscText
					{
						colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
						style = 2;
						shadow = 0;
						idc = 1010;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						sizeEx = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot2Background: Slot1Background
					{
						idc = 1001;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot2: Slot1
					{
						idc = 1201;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot2Text: Slot1Text
					{
						idc = 1210;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot3Background: Slot1Background
					{
						idc = 1002;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot3: Slot1
					{
						idc = 1202;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot3Text: Slot1Text
					{
						idc = 1211;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot4Background: Slot1Background
					{
						idc = 1003;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot4: Slot1
					{
						idc = 1203;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot4Text: Slot1Text
					{
						idc = 1212;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot5Background: Slot1Background
					{
						idc = 1004;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot5: Slot1
					{
						idc = 1204;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot5Text: Slot1Text
					{
						idc = 1213;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot6Background: Slot1Background
					{
						idc = 1005;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "7.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot6: Slot1
					{
						idc = 1205;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "7.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot6Text: Slot1Text
					{
						idc = 1214;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "7.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot7Background: Slot1Background
					{
						idc = 1006;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot7: Slot1
					{
						idc = 1206;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot7Text: Slot1Text
					{
						idc = 1215;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot8Background: Slot1Background
					{
						idc = 1007;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "10.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot8: Slot1
					{
						idc = 1207;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "10.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot8Text: Slot1Text
					{
						idc = 1216;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "10.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot9Background: Slot1Background
					{
						idc = 1008;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "12 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot9: Slot1
					{
						idc = 1208;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "12 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot9Text: Slot1Text
					{
						idc = 1217;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "12 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot0Background: Slot1Background
					{
						idc = 1009;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "13.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot0: Slot1
					{
						idc = 1209;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "13.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Slot0Text: Slot1Text
					{
						idc = 1218;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "13.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
			};
		};
	};
	class RscRespawnCounter
	{
		scriptName = "RscRespawnCounter";
		scriptPath = "IGUI";
		onLoad = "[""onLoad"",_this,""RscRespawnCounter"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscRespawnCounter"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		idd = 3000;
		duration = 1e+011;
		fadein = 0;
		movingEnable = 0;
		class Controls
		{
			class MPTable: RscText
			{
				colorBackground[] = {0,0,0,0};
				idc = 1000;
				x = 0.025;
				y = 0.08;
				w = 0.95;
				h = 0.78;
			};
			class TitleBackground: RscText
			{
				colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
				idc = 1002;
				x = "13.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "22.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
				w = "13 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class Title: RscText
			{
				idc = 1001;
				x = "13.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "22.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
				w = "13 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				colorBackground[] = {0,0,0,0.5};
			};
			class PlayerRespawnTime: RscText
			{
				idc = 1003;
				text = "00:00.000";
				x = "16.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "22.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
				w = "7 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				sizeEx = "1.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class Description: RscStructuredText
			{
				colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
				idc = 1100;
				x = "13.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "24.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
				w = "13 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
		};
	};
	class RscFiringDrillTime
	{
		scriptName = "RscFiringDrillTime";
		scriptPath = "IGUI";
		onLoad = "[""onLoad"",_this,""RscFiringDrillTime"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscFiringDrillTime"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		idd = -1;
		duration = 1e+010;
		fadein = 0;
		class Controls
		{
			class Time: RscControlsGroupNoScrollbars
			{
				x = "(profilenamespace getvariable [""IGUI_GRID_MISSION_X"",		(safezoneX + safezoneW - 21 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) + 		(20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "(profilenamespace getvariable [""IGUI_GRID_MISSION_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				idc = 2300;
				w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				class controls
				{
					class Current: RscStructuredText
					{
						idc = 1104;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0,0,0,0};
					};
					class CurrentBackground: RscStructuredText
					{
						colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
						idc = 1100;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "7.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Bonus: RscStructuredText
					{
						idc = 1103;
						x = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0,0,0,0};
					};
					class Penalty: RscStructuredText
					{
						idc = 1105;
						x = "5.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "2.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0,0,0,0};
					};
					class Best: RscStructuredText
					{
						colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
						idc = 1101;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "7.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Previous: RscStructuredText
					{
						colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
						idc = 1102;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "7.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
			};
		};
	};
	class RscFiringDrillCheckpoint
	{
		scriptName = "RscFiringDrillCheckpoint";
		scriptPath = "IGUI";
		onLoad = "[""onLoad"",_this,""RscFiringDrillCheckpoint"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscFiringDrillCheckpoint"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		idd = -1;
		duration = 1e+010;
		fadein = 0;
		class Controls
		{
			class Checkpoint: RscControlsGroupNoScrollbars
			{
				idc = 2300;
				x = "(profilenamespace getvariable [""IGUI_GRID_MISSION_X"",		(safezoneX + safezoneW - 21 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) + 		(20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				y = "(profilenamespace getvariable [""IGUI_GRID_MISSION_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) + 3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				w = "8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				class controls
				{
					class CheckpointBackground: RscText
					{
						colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
						idc = 1000;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class CheckpointPicture: RscPictureKeepAspect
					{
						colorText[] = {0,0,0,0.5};
						idc = 1200;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class CheckpointText: RscText
					{
						style = 2;
						idc = 1004;
						x = "0 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class TargetBackground: RscText
					{
						colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
						idc = 1001;
						x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class TargetPicture: RscPictureKeepAspect
					{
						colorText[] = {0,0,0,0.5};
						idc = 1203;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class TargetTextTotal: RscText
					{
						style = 2;
						idc = 1005;
						x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0,0,0,0};
					};
					class TargetTextCurrent: RscText
					{
						style = 2;
						idc = 1006;
						x = "2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "-0.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0,0,0,0};
						sizeEx = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class StanceBackground: RscText
					{
						colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
						idc = 1002;
						x = "4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class StancePicture: RscPictureKeepAspect
					{
						colorText[] = {0,0,0,1};
						idc = 1201;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						x = "4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class WeaponBackground: RscText
					{
						colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
						idc = 1003;
						x = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class WeaponPicture: RscPictureKeepAspect
					{
						colorText[] = {0,0,0,1};
						idc = 1202;
						text = "#(argb,8,8,3)color(0,0,0,0)";
						x = "6 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
			};
		};
	};
	class RscAdvancedHint
	{
		idd = -1;
		duration = 1e+010;
		fadeIn = 0;
		scriptName = "RscAdvancedHint";
		scriptPath = "IGUI";
		onLoad = "[""onLoad"",_this,""RscAdvancedHint"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscAdvancedHint"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		class controls
		{
			class HintGroup: RscHintGroup{};
		};
	};
	class RscMPProgress
	{
		idd = -1;
		duration = 1e+011;
		fadeIn = 0;
		scriptName = "RscMissionStatus";
		scriptPath = "IGUI";
		onLoad = "[""onLoad"",_this,""RscMissionStatus"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscMissionStatus"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		class controls
		{
			class MPProgress: RscMissionStatus{};
		};
	};
	class RscUnitPlay
	{
		idd = -1;
		movingEnable = 1;
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		onload = "uinamespace setvariable ['RscUnitPlay',_this select 0];";
		class controls
		{
			class Map: RscMapControlEmpty
			{
				idc = 1000;
				x = 10;
				y = 10;
				w = 0;
				h = 0;
			};
		};
	};
	class RscProcedureVisualization
	{
		idd = 455546;
		fadein = 0;
		fadeout = 0;
		duration = 1e+011;
		scriptName = "RscProcedureVisualization";
		scriptPath = "IGUI";
		onLoad = "[""onLoad"",_this,""RscProcedureVisualization"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscProcedureVisualization"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		class Controls
		{
			class Progress: RscText
			{
				colorBackground[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				idc = 68374;
				x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_MISSION_X"",		(safezoneX + safezoneW - 21 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "4.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_MISSION_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "0.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class Text: RscText
			{
				style = 2;
				shadow = 0;
				colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",0.7};
				idc = 68375;
				x = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_MISSION_X"",		(safezoneX + safezoneW - 21 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "3.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_MISSION_Y"",		(safezoneY + safezoneH - 10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "0.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				colorText[] = {1,1,1,1};
				sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
		};
	};
	class RscRevive
	{
		scriptName = "RscRevive";
		scriptPath = "GUI";
		onLoad = "[""onLoad"",_this,""RscRevive"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscRevive"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		idd = 3000;
		duration = 1e+011;
		fadein = 0;
		movingEnable = 0;
		class Controls
		{
			class ReviveBar: RscText
			{
				x = "safeZoneX";
				w = "safeZoneW";
				idc = 4820;
				y = "17.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class ReviveDeath: RscPicture
			{
				idc = 5019;
				x = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "19 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class ReviveMedikitProgress: RscPicture
			{
				idc = 5018;
				x = "21.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "19.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class ReviveMedikit: RscPicture
			{
				idc = 5017;
				x = "28 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "19.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class ReviveKeyBackground: RscStructuredText
			{
				idc = 4920;
				x = "18.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "19 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class ReviveProgressBackground: RscStructuredText
			{
				idc = 4817;
				x = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "19 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class ReviveProgress: RscProgress
			{
				idc = 4818;
				x = "12.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "19.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "15.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class ReviveKeyProgress: RscText
			{
				idc = 4819;
				x = "18.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "19.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class ReviveKey: RscStructuredText
			{
				idc = 4921;
				x = "18.3 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "18.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "3.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				colorBackground[] = {0,0,0,0};
			};
			class ReviveRespawn: RscControlsGroupNoScrollbars
			{
				y = "safezoneY + 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				idc = 6117;
				x = "11.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				w = "16.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "3.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				class Controls
				{
					class ReviveInfo: RscStructuredText
					{
						idc = 4919;
						x = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0,0,0,0};
					};
					class ReviveCountdown: RscStructuredText
					{
						idc = 4918;
						x = "0.1 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "2.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0,0,0,0};
					};
				};
			};
			class ReviveText: RscStructuredText
			{
				idc = 4917;
				x = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "18.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				colorBackground[] = {0,0,0,0};
			};
			class ReviveText2: RscStructuredText
			{
				idc = 6118;
				x = "12 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y = "18.9 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				colorBackground[] = {0,0,0,0};
			};
		};
	};
	class RscHvtPhase
	{
		idd = 60491;
		fadein = 0.5;
		fadeout = 0.5;
		duration = 1e+011;
		scriptName = "RscHvtPhase";
		scriptPath = "IGUI";
		onLoad = "[""onLoad"",_this,""RscHvtPhase"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscHvtPhase"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		class Controls
		{
			class Persistent: RscText
			{
				x = "safeZoneX";
				style = 2;
				shadow = 0;
				idc = 6610;
				y = "5.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "1.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				colorText[] = {1,1,1,1};
				colorBackground[] = {0,0,0,0.7};
				sizeEx = "1.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class Dynamic: RscText
			{
				x = "safeZoneX + 1.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 0.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				shadow = 0;
				idc = 6611;
				y = "5.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				colorText[] = {1,1,1,1};
				colorBackground[] = {0,0,0,0.7};
				sizeEx = "1.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class Download: RscControlsGroupNoScrollbars
			{
				x = "safeZoneX + 1.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 0.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				idc = 7910;
				y = "8.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "15.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				class controls
				{
					class DownloadContent: RscText
					{
						idc = 6613;
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "15.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0.3,0.3,0.3,0.7};
					};
					class DownloadTitle: RscText
					{
						shadow = 0;
						idc = 6612;
						text = "DOWNLOADING...";
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "8.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0,0,0,0.7};
						sizeEx = "1.15 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Multiplier: RscText
					{
						style = 2;
						idc = 6614;
						text = "2x";
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "2.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorText[] = {1,1,1,0.5};
						colorBackground[] = {0,0,0,0.7};
						sizeEx = "1.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class ProgressBar: RscProgress
					{
						idc = 6620;
						x = "2.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "11.1339 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.775 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0.8,0.5,0,0.7};
					};
					class DownloadSpeed: RscText
					{
						style = 2;
						idc = 6621;
						text = "5.67 / 8.09 TB";
						x = "3.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "8.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorText[] = {1,1,1,0.7};
						sizeEx = "1.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class RangeBackground: RscText
					{
						idc = 6615;
						x = "13.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "2.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0,0,0,0.5};
					};
					class Range: RscPictureKeepAspect
					{
						idc = 6810;
						text = "a3\Ui_f\data\IGUI\RscTitles\RscHvtPhase\JAC_A3_Signal_4_ca.paa";
						x = "13.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "2.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
			};
			class Timer: RscText
			{
				style = 2;
				shadow = 0;
				x = "safeZoneX + 1.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 0.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				idc = 6616;
				text = "12:36";
				y = "11.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				colorText[] = {1,1,1,1};
				colorBackground[] = {0,0,0,0.7};
				sizeEx = "1.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class CarrierPicture: RscPictureKeepAspect
			{
				x = "safeZoneX";
				idc = 6811;
				text = "#(argb,8,8,3)color(1,1,1,1)";
				y = "4.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "1.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "1.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
		};
	};
	class RscPhaseRules
	{
		idd = 4712346;
		duration = 1e+011;
		scriptName = "RscPhaseRules";
		scriptPath = "IGUI";
		onLoad = "[""onLoad"",_this,""RscPhaseRules"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscPhaseRules"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		class Controls
		{
			class PhaseRules: RscControlsGroupNoScrollbars
			{
				y = "0.5 - ((17 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) / 2)";
				idc = 10431;
				x = "4 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
				w = "15.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "17 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				class Controls
				{
					class Phase1Number: RscText
					{
						style = 2;
						shadow = 0;
						idc = 9131;
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						sizeEx = "1.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Phase1Text: RscText
					{
						shadow = 0;
						idc = 9132;
						x = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						sizeEx = "1.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Phase1Info: RscStructuredText
					{
						idc = 9137;
						x = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "3.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Phase2Number: RscText
					{
						style = 2;
						shadow = 0;
						idc = 9134;
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "6.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						sizeEx = "1.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Phase2Text: RscText
					{
						shadow = 0;
						idc = 9133;
						x = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "6.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						sizeEx = "1.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Phase2Info: RscStructuredText
					{
						idc = 9138;
						x = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "9.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Phase3Number: RscText
					{
						style = 2;
						shadow = 0;
						idc = 9136;
						x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "12.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						sizeEx = "1.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Phase3Text: RscText
					{
						shadow = 0;
						idc = 9135;
						x = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "12.05 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						sizeEx = "1.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class Phase3Info: RscStructuredText
					{
						idc = 9139;
						x = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "15.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "14 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
				};
			};
		};
	};
	class RscEGProgress
	{
		idd = 60992;
		fadein = 0.1;
		fadeout = 0.1;
		duration = 1e+011;
		scriptName = "RscEGProgress";
		scriptPath = "IGUI";
		onLoad = "[""onLoad"",_this,""RscEGProgress"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		onUnload = "[""onUnload"",_this,""RscEGProgress"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
		class Controls
		{
			class Download: RscControlsGroupNoScrollbars
			{
				x = "safeZoneX + 1.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 0.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				idc = 9376;
				y = "10.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
				w = "14.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "3.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				class controls
				{
					class Title: RscText
					{
						style = 0;
						shadow = 0;
						fade = 1;
						idc = 9174;
						text = "DOWNLOADING...";
						x = "3.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "10.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0,0,0,0.5};
						sizeEx = "1.0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class ProgressBarBackground: RscText
					{
						fade = 1;
						idc = 9173;
						x = "2.35 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "2.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "11.72 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "0.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0,0,0,0.5};
					};
					class ProgressBar: RscProgress
					{
						fade = 1;
						idc = 9180;
						x = "2.44 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "2.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "11.55 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "0.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0.8,0.5,0,1};
					};
					class ObjectiveBackground: RscPictureKeepAspect
					{
						fade = 1;
						idc = 9370;
						text = "A3\Ui_f\data\IGUI\Cfg\simpleTasks\background1_ca.paa";
						x = "0.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.9 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorText[] = {0,0,0,0.5};
						colorBackground[] = {0,0,0,0.75};
					};
					class ObjectiveBackgroundColoured: RscPictureKeepAspect
					{
						fade = 1;
						idc = 9375;
						text = "A3\Ui_f\data\IGUI\Cfg\simpleTasks\background1_ca.paa";
						x = "0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorText[] = {0,0,1,0.5};
					};
					class ObjectiveLetter: RscText
					{
						fade = 1;
						style = 2;
						shadow = 0;
						idc = 9171;
						text = "A";
						x = "0.7 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.47 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						sizeEx = "1.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					};
					class DownloadIconBackground: RscText
					{
						fade = 1;
						idc = 9170;
						x = "2.35 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "1.4339 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "1.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0,0,0,0.5};
					};
					class DownloadIcon: RscPictureKeepAspect
					{
						fade = 1;
						idc = 9374;
						text = "A3\Ui_f\data\IGUI\RscTitles\RscEGProgress\DownloadIcon_ca.paa";
						x = "2.6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "0.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorText[] = {0.8,0.5,0,1};
					};
					class ActivityBackground: RscText
					{
						fade = 1;
						idc = 9172;
						x = "1.1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "0.6339 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "0.57514 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorBackground[] = {0,0,0,0.5};
					};
					class Activity: RscPictureKeepAspect
					{
						fade = 1;
						idc = 9372;
						text = "A3\Ui_f\data\IGUI\Cfg\simpleTasks\types\Attack_ca.paa";
						x = "1.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						y = "0.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						w = "0.4 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
						h = "0.4 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
						colorText[] = {0.8,0.5,0,1};
					};
				};
			};
		};
	};
	class RscTitleDisplayEmpty: RscDisplayEmpty
	{
		fadeIn = 0;
		fadeOut = 0;
		duration = 1e+011;
		onLoad = "uiNamespace setVariable ['RscTitleDisplayEmpty',_this select 0]";
	};
	class RscCameraPIP
	{
		idd = -1;
		duration = 1e+011;
		fadein = 0;
		onLoad = "uinamespace setvariable ['RscCameraPIP', _this select 0];";
		onUnload = "uinamespace setvariable ['RscCameraPIP', nil];";
		class controlsBackground
		{
			class PIP: RscPicture
			{
				IDC = 2300;
				x = "safezoneX + 0.15 * safezoneW";
				y = "safezoneY + 0.05 * safezoneH";
				w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			};
			class NoPIP: RscPicture
			{
				IDC = 2301;
				x = "safezoneX + 0.15 * safezoneW";
				y = "safezoneY + 0.05 * safezoneH";
				w = "16 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
				h = "10 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				text = "#(rgb,8,8,3)color(1,1,1,1)";
			};
		};
		class controls{};
	};
};
class CfgWrapperUI
{
	class Colors
	{
		color1[] = {0,0,0,0.0};
		color2[] = {0,0,0,0.2};
		color3[] = {0,0,0,0.4};
		color4[] = {0,0,0,0.6};
		color5[] = {0,0,0,0.8};
	};
	class Background
	{
		texture = "#(argb,8,8,3)color(1,1,1,1)";
	};
	class TitleBar
	{
		texture = "#(argb,8,8,3)color(1,1,1,1)";
	};
	class GroupBox
	{
		alpha = 0.2;
	};
	class GroupBox2
	{
		alpha = 0.5;
		texture = "#(argb,8,8,3)color(1,1,1,1)";
	};
	class ListBox
	{
		arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
		thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
		boxLeft = "#(argb,8,8,3)color(0,0,0,0)";
		boxRight = "#(argb,8,8,3)color(0,0,0,0)";
		boxHorz = "#(argb,8,8,3)color(0,0,0,0)";
		line = "#(argb,8,8,3)color(0,0,0,0)";
	};
	class Button
	{
		color1[] = {0.0,0.0,0.0,1.0};
		color2[] = {0.2,0.2,0.2,1.0};
		color3[] = {0.5,0.5,0.5,1.0};
		color4[] = {0.6,0.6,0.6,1.0};
		color5[] = {0.8,0.8,0.8,1.0};
	};
	class Slider
	{
		arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
		thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
	};
	class Cursors
	{
		class Arrow
		{
			texture = "\fr4_starwars_animations\data\cursor.paa";
			width = 32;
			height = 32;
			hotspotX = 0.1875;
			hotspotY = 0.03125;
			color[] = {1,1,1,1};
		};
		class Track
		{
			texture = "\A3\ui_f\data\gui\cfg\cursors\track_gs.paa";
		};
		class Move
		{
			texture = "\A3\ui_f\data\gui\cfg\cursors\move_gs.paa";
		};
		class Scroll
		{
			texture = "\A3\ui_f\data\gui\cfg\cursors\scroll_gs.paa";
		};
		class Rotate
		{
			texture = "\A3\ui_f\data\gui\cfg\cursors\rotate_gs.paa";
		};
		class Track3D
		{
			texture = "\A3\ui_f\data\gui\cfg\cursors\track3D_gs.paa";
			width = 32;
			height = 32;
			hotspotX = 0.0;
			hotspotY = 0.0;
		};
		class Move3D
		{
			texture = "\A3\ui_f\data\gui\cfg\cursors\move3D_gs.paa";
			width = 32;
			height = 32;
			hotspotX = 0.0;
			hotspotY = 0.0;
		};
		class Rotate3D
		{
			texture = "\A3\ui_f\data\gui\cfg\cursors\rotate3D_gs.paa";
			width = 32;
			height = 32;
			hotspotX = 0.0;
			hotspotY = 0.0;
		};
		class Raise3D
		{
			texture = "\A3\ui_f\data\gui\cfg\cursors\raise3D_gs.paa";
			width = 32;
			height = 32;
			hotspotX = 0.0;
			hotspotY = 0.0;
		};
		class Wait
		{
			texture = "\A3\ui_f\data\gui\cfg\cursors\wait_gs.paa";
			color[] = {0.7,0.7,0.7,1};
		};
		class HC_move: Track
		{
			texture = "\A3\ui_f\data\gui\cfg\cursors\hc_move_gs.paa";
			color[] = {0.0,0.6,0.0,1};
		};
		class HC_overFriendly: Track
		{
			texture = "\A3\ui_f\data\gui\cfg\cursors\hc_overFriendly_gs.paa";
			color[] = {0.0,0.6,0.0,1};
		};
		class HC_overEnemy: Track
		{
			texture = "\A3\ui_f\data\gui\cfg\cursors\hc_overEnemy_gs.paa";
		};
		class HC_overMission: Track
		{
			texture = "\A3\ui_f\data\gui\cfg\cursors\hc_overMission_gs.paa";
			color[] = {0.85,0.4,0.0,1};
		};
		class HC_unsel: Track
		{
			texture = "\A3\ui_f\data\gui\cfg\cursors\hc_unsel_gs.paa";
		};
	};
};
class DLCActionNotification: RscControlsGroup
{
};
class RscDisplayPurchaseNotification
{
	idd = 170;
	movingEnable = 0;
	enableDisplay = 1;
	scriptName = "RscDisplayPurchaseNotification";
	scriptPath = "GUI";
	onLoad = "[""onLoad"",_this,""RscDisplayPurchaseNotification"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayPurchaseNotification"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
};
class RscDisplayMission: RscDisplayEmpty
{
	scriptName = "RscDisplayMission";
	scriptPath = "GUI";
	onLoad = "[""onLoad"",_this,""RscDisplayMission"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayMission"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class controls: controls
	{
		class CA_Vignette: CA_Vignette{};
		class BcgWIP: RscWIP
		{
			idc = 11400;
		};
	};
};
class RscDisplayDebug
{
	idd = 56;
	movingEnable = 1;
	scriptName = "RscDisplayDebug";
	scriptPath = "GUI";
	onLoad = "[""onLoad"",_this,""RscDisplayDebug"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayDebug"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	scriptIsInternal = 1;
	class controlsBackground
	{
		class Background: RscText
		{
			x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "2.1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY";
			w = "30 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "safezoneH - 4.2 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			colorBackground[] = {0,0,0,0.7};
		};
		class Title: RscText
		{
			x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY";
			w = "30 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			colorBackground[] = {0,0,0,1};
			moving = 1;
		};
	};
	class Controls
	{
		delete Background1;
		delete Background2;
		delete Title;
		delete G_But;
		delete G_Log;
		delete Text_Script1;
		delete B_Script1;
		delete B_Script2;
		delete B_Script3;
		delete B_Script4;
		delete B_Script5;
		class CA_Title: RscStructuredText
		{
			y = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY";
			idc = 11838;
			text = "$STR_UI_DEBUG_TITLE";
			x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			w = "9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
		class CA_Version: RscEdit
		{
			style = "0x01 + 0x200";
			y = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY";
			font = "EtelkaMonospacePro";
			idc = 12146;
			x = "25.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			w = "5.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			sizeEx = "0.55 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
		class CA_Player: RscEdit
		{
			style = 512;
			font = "RobotoCondensedBold";
			y = "1.25 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY";
			idc = 12145;
			x = "18.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			w = "7 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			sizeEx = "0.55 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
		class G_Expression: RscControlsGroup
		{
			y = "2 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY";
			h = "3 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + (safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			idc = 13035;
			x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			w = "25 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			class controls
			{
				delete B_Apply;
				class SearchExpression: RscEdit
				{
					idc = 161;
					font = "EtelkaMonospacePro";
					x = "12.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "11 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					sizeEx = "0.53 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class SearchButtonExpression: RscButtonSearch
				{
					idc = 162;
					x = "23.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class HistoryExpression: RscCombo
				{
					idc = 163;
					font = "EtelkaMonospacePro";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "12 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					sizeEx = "0.53 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class TextExpression: RscText
				{
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					idc = 11736;
					text = "$STR_UI_DEBUG_EXPRESSION";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "23.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class ValueExpression: RscEdit
				{
					idc = 101;
					style = 16;
					autocomplete = "scripting";
					shadow = 0;
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + (safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
					font = "EtelkaMonospacePro";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "1.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "24 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					colorBackground[] = {0,0,0,0};
					sizeEx = "0.53 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
			};
		};
		class G_Watch: G_Expression
		{
			idc = 13038;
			x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "4.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "25 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "6.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			class controls
			{
				class ValueExp1: RscEdit
				{
					idc = 121;
					autocomplete = "scripting";
					shadow = 0;
					font = "EtelkaMonospacePro";
					x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "23.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					sizeEx = "0.53 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class ValueRes1: RscEdit
				{
					idc = 141;
					autocomplete = "scripting";
					lineSpacing = 1;
					style = 16;
					shadow = 0;
					font = "EtelkaMonospacePro";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "24 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					colorBackground[] = {0,0,0,0.75};
					sizeEx = "0.53 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class ValueExp2: ValueExp1
				{
					idc = 122;
					x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "2 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "23.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class ValueRes2: ValueRes1
				{
					idc = 142;
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "2.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "24 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class ValueExp3: ValueExp1
				{
					idc = 123;
					x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "3.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "23.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class ValueRes3: ValueRes1
				{
					idc = 143;
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "4 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "24 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class ValueExp4: ValueExp1
				{
					idc = 124;
					x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "23.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class ValueRes4: ValueRes1
				{
					idc = 144;
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "5.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "24 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class TextVar1: RscText
				{
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					idc = 11737;
					text = "$STR_UI_DEBUG_1";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.500001 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class TextVar2: TextVar1
				{
					idc = 11738;
					text = "$STR_UI_DEBUG_2";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "2 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class TextVar3: TextVar1
				{
					idc = 11739;
					text = "$STR_UI_DEBUG_3";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "3.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class TextVar4: TextVar1
				{
					idc = 11740;
					text = "$STR_UI_DEBUG_4";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class TextWatch: RscText
				{
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					idc = 11741;
					text = "$STR_UI_DEBUG_WATCH";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "11.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
			};
		};
		class B_Apply: RscButtonMenu
		{
			idc = 102;
			shortcuts[] = {"0x00050000 + 2","512 + 0x1C","512 + 0x9C"};
			text = "$STR_UI_DEBUG_BUT_APPLY";
			x = "21 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "18 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "4.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			tooltip = "Ctrl + Enter";
		};
		class B_OK: RscButtonMenu
		{
			idc = 1;
			default = 1;
			shortcuts[] = {"0x00050000 + 0",28,57,156};
			text = "$STR_DISP_OK";
			x = "26 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "18 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			tooltip = "Enter";
		};
		class B_Cancel: RscButtonMenu
		{
			idc = 2;
			shortcuts[] = {"0x00050000 + 1"};
			text = "$STR_DISP_CANCEL";
			x = "1 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "18 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "9.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			tooltip = "Escape";
		};
		class B_Camera: RscButtonMenu
		{
			action = "cameraOn spawn bis_fnc_cameraOld;";
			onButtonClick = "(ctrlParent (_this select 0)) closeDisplay 2";
			text = "<img image='\A3\ui_f\data\igui\cfg\islandmap\iconcamera_ca.paa' size='0.7' /> Camera";
			shortcuts[] = {"512 + 0x12"};
			idc = 13155;
			x = "11 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "18 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "4.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			tooltip = "Ctrl + E";
		};
		class B_CameraNew: RscButtonMenu
		{
			action = "[] call bis_fnc_camera;";
			onButtonClick = "(ctrlParent (_this select 0)) closeDisplay 2";
			shortcuts[] = {"512 + 0x12"};
			idc = 13142;
			text = "Splendid Cam";
			x = "16 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "18 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "4.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			tooltip = "Ctrl + E";
		};
		class FrameLog: RscFrame
		{
			idc = 12537;
			x = "11.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "11.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "14 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "6 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
		class ValueLogFilter: RscEdit
		{
			idc = 152;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			x = "11.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "11.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "14 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
		class ValueLog: RscListBox
		{
			idc = 103;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			x = "11.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "12 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "14 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "5.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
		class B_Clear: RscButtonMenu
		{
			idc = 151;
			size = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			x = -10;
			y = -10;
			w = 0;
			h = 0;
			text = "Clear";
		};
		class G_Diag: RscControlsGroup
		{
			y = "2 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + safezoneY";
			h = "9.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + (safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			idc = 13036;
			x = "25.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			w = "5.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			class controls
			{
				class DiagListSearch: RscEdit
				{
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					idc = 12238;
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "4.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class DiagList: RscTree
				{
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					h = "7.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + (safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
					idcSearch = 12238;
					disableSearchHighlight = 1;
					colorLines[] = {0,0,0,0};
					idc = 12236;
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "4.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
				};
				class DiagButton: RscButtonMenu
				{
					y = "8 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + (safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
					shortcuts[] = {"512 + 0x14"};
					idc = 13138;
					text = "Toggle";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					w = "4.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					tooltip = "Ctrl + T";
				};
				class DiagFrame: RscFrame
				{
					h = "8.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + (safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
					idc = 12535;
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "4.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
				};
			};
		};
		class G_Draw: RscControlsGroup
		{
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			idc = 13039;
			x = "25.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "11 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "5.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "7 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			class controls
			{
				class DrawText: RscText
				{
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					idc = 11748;
					text = "diag_drawmode";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "4.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class DrawList: RscTree
				{
					sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
					colorLines[] = {0,0,0,0};
					idc = 12237;
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "4.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class DrawButton: RscButtonMenu
				{
					shortcuts[] = {"512 + 0x20"};
					idc = 13139;
					text = "Draw";
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "5.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "4.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					tooltip = "Ctrl + D";
				};
				class DrawFrame: RscFrame
				{
					idc = 12536;
					x = "0.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "4.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "6 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
			};
		};
		class G_Design: RscControlsGroup
		{
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			idc = 13037;
			x = "1.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "11.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "8 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "6 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			class controls
			{
				class DesignHTML: RscHTML
				{
					idc = 11735;
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "0 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "7.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "1.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
				};
				class CreateJIRAIssue: RscButtonMenu
				{
					shortcuts[] = {"512 + 0x24"};
					idc = 13143;
					text = "REPORT ISSUE";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "2 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "7.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					colorBackground[] = {0.12549,0.313726,0.505882,1};
					tooltip = "Ctrl + J";
				};
				class DebugFlow: RscButtonMenu
				{
					onButtonClick = "diag_debugfsm bis_fnc_missionFlow_fsm";
					shortcuts[] = {"512 + 0x32"};
					style = 0;
					idc = 13140;
					text = "FSM";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "3 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "3.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					tooltip = "Ctrl + M";
				};
				class DebugCapture: DebugFlow
				{
					action = "diag_captureFrame 30";
					onButtonClick = "(ctrlParent (_this select 0)) closeDisplay 2";
					shortcuts[] = {"512 + 0x19"};
					idc = 13164;
					text = "Capture";
					x = "4 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "3 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "3.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					tooltip = "Ctrl + P";
				};
				class DebugGUI: DebugFlow
				{
					action = "[] spawn (uinamespace getvariable 'BIS_fnc_GUIeditor');";
					onButtonClick = "(ctrlParent (_this select 0)) closeDisplay 2";
					shortcuts[] = {"512 + 0x16"};
					idc = 13144;
					text = "GUI";
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "4 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "3.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					tooltip = "Ctrl + U";
				};
				class DebugAnim: DebugFlow
				{
					onButtonClick = "[] call (uinamespace getvariable 'bis_fnc_animVIewer'); (ctrlParent (_this select 0)) closeDisplay 2";
					shortcuts[] = {"512 + 0x1E"};
					idc = 13141;
					text = "Anim";
					x = "4 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "4 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "3.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					tooltip = "Ctrl + A";
				};
				class DebugConfig: DebugFlow
				{
					action = "[] call (uinamespace getvariable 'bis_fnc_configviewer');";
					onButtonClick = "(ctrlParent (_this select 0)) closeDisplay 2";
					text = "<img image='\A3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_config_ca.paa' size='0.7' /> Config";
					shortcuts[] = {"512 + 0x22"};
					idc = 13154;
					x = "0 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "3.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					tooltip = "Ctrl + G";
				};
				class DebugFunctions: DebugFlow
				{
					action = "[] call (uinamespace getvariable 'bis_fnc_help');";
					onButtonClick = "(ctrlParent (_this select 0)) closeDisplay 2";
					text = "<img image='\A3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_functions_ca.paa' size='0.7' /> Fnc";
					shortcuts[] = {"512 + 0x21"};
					idc = 13145;
					x = "4 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					y = "5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					w = "3.9 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
					h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
					tooltip = "Ctrl + F";
				};
			};
		};
		class ButtonScript1: RscButtonMenu
		{
			action = "_nil = [] execvm '\A3\@debug\debug1.sqf';";
			shortcuts[] = {"512 + 0x02"};
			class Attributes
			{
				font = "RobotoCondensedLight";
				color = "#E5E5E5";
				align = "center";
				shadow = "false";
			};
			idc = 13157;
			text = "1";
			x = "9.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "11.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "2 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			tooltip = "Ctrl + 1 (\A3\@debug\debug1.sqf)";
		};
		class ButtonScript2: ButtonScript1
		{
			action = "_nil = [] execvm '\A3\@debug\debug2.sqf';";
			shortcuts[] = {"512 + 0x03"};
			idc = 13158;
			text = "2";
			x = "9.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "12.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "2 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			tooltip = "Ctrl + 2 (\A3\@debug\debug2.sqf)";
		};
		class ButtonScript3: ButtonScript1
		{
			action = "_nil = [] execvm '\A3\@debug\debug3.sqf';";
			shortcuts[] = {"512 + 0x04"};
			idc = 13159;
			text = "3";
			x = "9.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "13.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "2 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			tooltip = "Ctrl + 3 (\A3\@debug\debug3.sqf)";
		};
		class ButtonScript4: ButtonScript1
		{
			action = "_nil = [] execvm '\A3\@debug\debug4.sqf';";
			shortcuts[] = {"512 + 0x05"};
			idc = 13160;
			text = "4";
			x = "9.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "14.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "2 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			tooltip = "Ctrl + 4 (\A3\@debug\debug4.sqf)";
		};
		class ButtonScript5: ButtonScript1
		{
			action = "_nil = [] execvm '\A3\@debug\debug5.sqf';";
			shortcuts[] = {"512 + 0x06"};
			idc = 13161;
			text = "5";
			x = "9.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "15.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "2 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			tooltip = "Ctrl + 5 (\A3\@debug\debug5.sqf)";
		};
		class ButtonScript6: ButtonScript1
		{
			action = "_nil = [] execvm '\A3\@debug\debug6.sqf';";
			shortcuts[] = {"512 + 0x07"};
			idc = 13163;
			text = "6";
			x = "9.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 				((safezoneW / safezoneH) min 1.2))/2)";
			y = "16.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + safezoneH - 				(		((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "2 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "0.9 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			tooltip = "Ctrl + 6 (\A3\@debug\debug6.sqf)";
		};
	};
};
class RscDisplayDebugPublic
{
	idd = 316000;
	movingEnable = 1;
	enableSimulation = 0;
	scriptName = "RscDisplayDebugPublic";
	scriptPath = "GUI";
	onLoad = "[""onLoad"",_this,""RscDisplayDebugPublic"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayDebugPublic"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class controlsBackground{};
	class Controls
	{
		class DebugConsole: RscDebugConsole
		{
			x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "22 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "21.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonCancel: RscButtonMenuCancel
		{
			x = "9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y = "23.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "7.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};