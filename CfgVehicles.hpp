class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class All;
	class Logic: All
	{
		icon = "iconLogic";
		picture = "pictureLogic";
	};
	class Man;
	class Land_HelipadEmpty_F;
	class fr4_radio_helmet: Land_HelipadEmpty_F
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
	class swop_LAAT;
	class swop_LAAT: swop_LAAT
	{
		fuelCapacity = 5540;
		fuelConsumptionRate = 0.1;
	};
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class fr4_anim
			{
				displayName = "41st Animations";
				icon = "\fr4_starwars_animations\data\41st_logo_small.paa";
				class fr4_jedi
				{
					displayName = "Jedi";
					condition = "(((handgunWeapon _player) find 'lightsaber') >=0)";
					class fr4_sword_on
					{
						displayName = "On";
						condition = "((handgunWeapon _player) find 'lightsaber') >=0 && ((count (handgunMagazine _player)) == 0)";
						exceptions[] = {};
						statement = "_player addHandgunItem ((getArray (configFile >> 'CfgWeapons' >> (handgunWeapon _player) >> 'magazines')) select 0)";
					};
					class fr4_sword_off
					{
						displayName = "Off";
						condition = "((handgunWeapon _player) find 'lightsaber') >=0 && ((count (handgunMagazine _player)) > 0)";
						exceptions[] = {};
						statement = "_player removeHandgunItem (currentMagazine _player)";
					};
					class rgr_guardia_pose
					{
						displayName = "Guardia";
						condition = "";
						exceptions[] = {};
						statement = "[_player] spawn {(_this select 0) playActionNow 'rgr_guardia';sleep 1;(_this select 0) playActionNow 'rgr_guardia_loop';currentNamespace setVariable ['fr4_action_loop','rgr_guardia_loop'];};";
					};
					class rgr_guardia_halcon_pose
					{
						displayName = "Guardia Halcon";
						condition = "";
						exceptions[] = {};
						statement = "[_player] spawn {(_this select 0) playActionNow 'rgr_guardia_halcon';sleep 1;(_this select 0) playActionNow 'rgr_guardia_halcon_loop';currentNamespace setVariable ['fr4_action_loop','rgr_guardia_halcon_loop'];};";
					};
					class rgr_guardia_baja
					{
						displayName = "Guardia Baja";
						condition = "";
						exceptions[] = {};
						statement = "[_player] spawn {(_this select 0) playActionNow 'rgr_guardiabaja';sleep 1;(_this select 0) playActionNow 'rgr_GuardiaBaja_loop';currentNamespace setVariable ['fr4_action_loop','rgr_guardiabaja_loop'];};";
					};
					class rgr_encendido_chulo
					{
						displayName = "Encendido";
						condition = "";
						exceptions[] = {};
						statement = "[_player] spawn {[ace_player, 'rgr_encendido'] remoteExec ['switchMove', 0];};";
					};
					class rgr_obiwan
					{
						displayName = "Obi-Wan";
						condition = "";
						exceptions[] = {};
						statement = "[_player] spawn {[ace_player, 'rgr_obiwan_point'] remoteExec ['switchMove', 0];sleep 1;[ace_player, 'rgr_obiwan_point_loop'] remoteExec ['switchMove', 0];};";
					};
				};
				class rgr_desarmado
				{
					displayName = "Desarmado";
					class rgr_pensativo
					{
						displayName = "Pensativo";
						condition = "";
						exceptions[] = {};
						statement = "[ace_player, 'rgr_pensativo'] remoteExec ['switchMove', 0]";
					};
					class rgr_estrangulacion
					{
						displayName = "Estrangulacion";
						condition = "";
						exceptions[] = {};
						statement = "[_player] spawn {[ace_player, 'rgr_estrangulacion'] remoteExec ['switchMove', 0];};";
					};
					class rgr_choquepunch //TODO
					{
						displayName = "ChoquePunch";
						condition = "";
						exceptions[] = {};
						statement = "[_player] spawn {[ace_player, 'rgr_choquepunch'] remoteExec ['switchMove', 0];};";
					};
					class rgr_silencio //TODO
					{
						displayName = "Silencio";
						condition = "";
						exceptions[] = {};
						statement = "[_player] spawn {[ace_player, 'rgr_silencio'] remoteExec ['switchMove', 0];};";
					};
					class rgr_paseo_jedi
					{
						displayName = "Paseo Jedi";
						condition = "";
						exceptions[] = {};
						statement = "[_player] spawn {(_this select 0) action ['SwitchWeapon', (_this select 0), (_this select 0), 299];sleep 4;(_this select 0) playActionNow 'rgr_paseoJedi';currentNamespace setVariable ['fr4_action_loop','rgr_paseoJedi'];};";
					};
					class rgr_brazoscruzados
					{
						displayName = "Brazos Cruzados";
						condition = "";
						exceptions[] = {};
						statement = "[ace_player, 'rgr_brazoscruzados'] remoteExec ['switchMove', 0]";
					};
					class rgr_cinturon
					{
						displayName = "Cinturon";
						condition = "";
						exceptions[] = {};
						statement = "[ace_player, 'rgr_cinturon'] remoteExec ['switchMove', 0]";
					};
					class rgr_espera
					{
						displayName = "Espera";
						condition = "";
						exceptions[] = {};
						statement = "[ace_player, 'rgr_espera'] remoteExec ['switchMove', 0]";
					};
					class rgr_facepalm
					{
						displayName = "Facepalm";
						condition = "";
						exceptions[] = {};
						statement = "[ace_player, 'rgr_facepalm'] remoteExec ['switchMove', 0]";
					};
					class rgr_victoria
					{
						displayName = "Victoria";
						condition = "";
						exceptions[] = {};
						statement = "[ace_player, 'rgr_victoria'] remoteExec ['switchMove', 0]";
					};
					class rgr_meditar
					{
						displayName = "Meditar";
						condition = "";
						exceptions[] = {};
						statement = "[_player] spawn {[ace_player, 'rgr_meditar'] remoteExec ['switchMove', 0];sleep 1;[ace_player, 'rgr_meditar_loop'] remoteExec ['switchMove', 0];};";
					};
					class rgr_firme
					{
						displayName = "Firme";
						condition = "";
						exceptions[] = {};
						statement = "[ace_player, 'rgr_firme'] remoteExec ['switchMove', 0]";
					};
				};
				class fr4_fusil
				{
					displayName = "Fusil";
					class fr4_paseo_fusil //TODO
					{
						displayName = "Paseo Fusil";
						condition = "";
						exceptions[] = {};
						statement = "[_player] spawn {(_this select 0) action ['SwitchWeapon', (_this select 0), (_this select 0), 299];sleep 4;(_this select 0) playActionNow 'fr4_paseo_fusil';currentNamespace setVariable ['fr4_action_loop','fr4_paseo_fusil'];};";
					};
					class fr4_fusil_hombro //TODO
					{
						displayName = "Fusil sobre el hombro";
						condition = "";
						exceptions[] = {};
						statement = "[_player] spawn {(_this select 0) action ['SwitchWeapon', (_this select 0), (_this select 0), 299];sleep 4;(_this select 0) playActionNow 'fr4_fusil_hombro';currentNamespace setVariable ['fr4_action_loop','fr4_fusil_hombro'];};";
					};
					class fr4_fusil_suelo //TODO
					{
						displayName = "Fusil apoyado suelo";
						condition = "";
						exceptions[] = {};
						statement = "[ace_player, 'fr4_fusilsuelo'] remoteExec ['switchMove', 0]";
					};

				};
				class fr4_cancel
				{
					displayName = "Cancelar";
					icon = "\fr4_starwars_animations\data\ui_cancel.paa";
					condition = "";
					exceptions[] = {};
					statement = "_player playActionNow 'GestureNod';[ace_player, ''] remoteExec ['switchMove', 0]; currentNamespace setVariable ['fr4_action_loop',''];_player action ['SwitchWeapon', _player, _player, 1];";
				};
			};
		};
	};

};
