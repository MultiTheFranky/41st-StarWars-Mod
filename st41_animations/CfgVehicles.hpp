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
	class st41_radio_helmet: Land_HelipadEmpty_F
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
	class swop_LAAT
	{
		_generalMacro = "Helicopter_Base_H";
		_mainBladeCenter = "rotor_center";
		access = 0;
		accuracy = 1.5;
		accuracyDarkNightLightsOff = 0.001;
		accuracyNightLightsOff = 0.006;
		accuracyNightLightsOn = 0.1;
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 8;
		ace_fastroping_enabled = 1;
		ace_fastroping_onCut = "ace_fastroping_fnc_onCutCommon";
		ace_fastroping_onPrepare = "ace_fastroping_fnc_onPrepareCommon";
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft","ropeOriginRight"};
		ace_interaction_bodyWidth = 3;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 8;
		afMax = 70;
		aggregateReflectors[] = {};
		aileronCoef[] = {0.6,0.8,1,1.1,1.2,1.2,0.4};
		aileronControlsSensitivityCoef = 4;
		aileronSensitivity = 0.5;
		airBrake = 1;
		airBrakeFrictionCoef = 2.4;
		airCapacity = 10;
		airFriction0[] = {100,50,12};
		airFriction1[] = {100,50,12};
		airFriction2[] = {100,50,12};
		airFrictionCoefs0[] = {0,0,0};
		airFrictionCoefs1[] = {0.1,0.05,0.006};
		airFrictionCoefs2[] = {0.001,0.0005,6e-005};
		allowTabLock = 1;
		altFullForce = 13740;
		altNoForce = 17240;
		alwaysTarget = 0;
		angleOfIndicence = "1*3.1415/180";
		animated = 1;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMax = 60;
		antiRollbarSpeedMin = 20;
		armor = 150;
		armorLights = 1;
		armorStructural = 2;
		artilleryScanner = 0;
		artilleryTarget = 0;
		attendant = 0;
		attenuationEffectType = "PlaneAttenuation";
		audible = 50;
		author = "SWOP";
		autocenter = 1;
		availableForSupportTypes[] = {"CAS_Heli","Drop","Transport"};
		backRotorForceCoef = 1.377;
		backRotorSpeed = 1.5;
		bodyFrictionCoef = 0.6777;
		brakeDistance = 65;
		cabinCloseSound[] = {"",1,1};
		cabinCloseSoundInternal[] = {"",1,1};
		cabinOpening = 0;
		cabinOpenSound[] = {"",1,1};
		cabinOpenSoundInternal[] = {"",1,1};
		cameraSmoothSpeed = 5;
		camouflage = 100;
		camShakeCoef = 0;
		canFloat = 1;
		canHideDriver = -1;
		canUseScanners = 1;
		cargoAction[] = {"SWOP_C47_StandUp1","SWOP_C47_StandUp4","passenger_boat_holdleft2","SWOP_C47_StandUp4","SWOP_C47_StandUp1","SWOP_C47_StandUp4","SWOP_C47_StandUp2","passenger_boat_holdright","SWOP_C47_StandUp1","SWOP_C47_StandUp1","SWOP_C47_StandUp2","SWOP_C47_StandUp2","SWOP_C47_StandUp4","SWOP_C47_StandUp2","SWOP_C47_StandUp4","SWOP_C47_StandUp1"};
		cargoCanEject = 1;
		cargoCompartments[] = {"Compartment3"};
		cargoDoors[] = {};
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoIsCoDriver[] = {0,0};
		cargoPreciseGetInOut[] = {0};
		cargoProxyIndexes[] = {};
		castCargoShadow = 1;
		castDriverShadow = 1;
		castGunnerShadow = 1;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 1;
		commanderCanSee = "1 + 2 + 4 + 8 + 32";
		cost = 2e+007;
		countermeasureActivationRadius = 10000;
		countsForScoreboard = 1;
		crew = "SWOP_Clonetrooper_pilot";
		crewCrashProtection = 0.25;
		crewVulnerable = 1;
		curatorInfoType = "RscDisplayAttributesVehicle";
		curatorInfoTypeEmpty = "RscDisplayAttributesVehicleEmpty";
		cyclicAsideForceCoef = 4;
		cyclicForwardForceCoef = 2;
		damageEffect = "";
		damageFull[] = {};
		damageHalf[] = {};
		damageResistance = 0.00555;
		damageTexDelay = 0;
		dammageFull[] = {};
		dammageHalf[] = {};
		destrType = "DestructWreck";
		detectSkill = 20;
		displayName = "LAAT/I";
		draconicForceXCoef = 15;
		draconicForceYCoef = 1;
		draconicForceZCoef = 1;
		draconicTorqueXCoef[] = {14,12,11.2,10.6,9.9,9.6,9.7,10.5,11,11.5,12};
		draconicTorqueYCoef[] = {0.5,1,2,2.3,3,2.6,2.4,2.2,2,1.9,1.8};
		driveOnComponent[] = {"Skids"};
		driverAction = "Driver_mid01";
		driverCanEject = 1;
		driverCanSee = 31;
		driverCompartments = "Compartment1";
		driverDoor = "";
		driverForceOptics = 0;
		driverInAction = "";
		driverLeftHandAnimName = "lever_pilot";
		driverLeftLegAnimName = "pedalL";
		driverOpticsColor[] = {1,1,1,1};
		driverOpticsEffect[] = {};
		driverOpticsModel = "";
		driverRightHandAnimName = "stick_pilot";
		driverRightLegAnimName = "pedalR";
		driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		dustEffect = "HeliDustBig";
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		editorPreview = "";
		editorSubcategory = "EdSubcat_Helicopters";
		ejectDeadCargo = 0;
		ejectDeadDriver = 0;
		ejectDeadGunner = 0;
		elevatorCoef[] = {0.2,0.39,0.51,0.6,0.68,0.75,0.8,0.85,0.9,0.74,0.3};
		elevatorControlsSensitivity = 4;
		elevatorControlsSensitivityCoef = 4;
		elevatorSensitivity = 0.9;
		emptySound[] = {"",0,1};
		enableGPS = 1;
		enableManualFire = 1;
		enableRadio = 1;
		enableSweep = 1;
		enableWatch = 0;
		engineer = 0;
		envelope[] = {0,0.01,0.2,4,6,7.6,8.4,9.2,9.4,9.6,9.7,9.8,8,1};
		epeImpulseDamageCoef = 50;
		explosionShielding = 4;
		extCameraParams[] = {-1};
		extCameraPosition[] = {0,2,-20};
		faction = "GALACTIC_REPUBLIC";
		features = "";
		featureType = 0;
		fireResistance = 10;
		flaps = 0;
		flapsFrictionCoef = 0;
		flareVelocity = 100;
		forceHideDriver = 0;
		formationTime = 10;
		formationX = 50;
		formationZ = 100;
		fuelCapacity = 5540;
		fuelConsumptionRate = 0.1;
		fuelExplosionPower = 1;
		geardowntime = 3;
		gearMinAlt = 0.5;
		gearRetracting = 0;
		gearsUpFrictionCoef = 0.5;
		gearuptime = 4.5;
		getInAction = "GetInLow";
		getInOutOnProxy = 0;
		getInRadius = 5;
		getOutAction = "GetOutLow";
		gForceShakeAttenuation = 0.5;
		ghostPreview = "";
		groupCameraPosition[] = {0,5,-30};
		gunAimDown = 0;
		gunBeg[] = {"cannon1"};
		gunEnd[] = {"konec hlavne1"};
		gunnerCanSee = 31;
		gunnerCompartments = "Compartment2";
		gunnerHasFlares = 1;
		hasDriver = 1;
		hasTerminal = 0;
		HeadAimDown = 0;
		headGforceLeaningFactor[] = {0.01,0.0025,0.01};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {"LAAT\textures\laat_fuselage_co.paa","LAAT\textures\laat_wings_co.paa"};
		hiddenUnderwaterSelections[] = {};
		hiddenUnderwaterSelectionsTextures[] = {};
		hideProxyInCombat = 0;
		hideUnitInfo = 0;
		hideWeaponsCargo = 1;
		hideWeaponsDriver = 1;
		htMax = 1800;
		htMin = 60;
		hullDamageCauseExplosion = 0;
		icon = "\laat\laat128_ca.paa";
		impactEffectSpeedLimit = 8;
		impactEffectsSea = "ImpactEffectsAir";
		incomingMissileDetectionSystem = "8 + 16";
		indirectHitCivilianCoefAI = -20;
		indirectHitEnemyCoefAI = 10;
		indirectHitFriendlyCoefAI = -20;
		indirectHitUnknownCoefAI = -0.5;
		insideDetectCoef = 0.05;
		insideSoundCoef = 0.0316228;
		irScanGround = 1;
		irScanRangeMax = 10500;
		irScanRangeMin = 100;
		irScanToEyeFactor = 4;
		irTarget = 1;
		irTargetSize = 1;
		isbackpack = 0;
		keepInEPESceneAfterDeath = 0;
		killFriendlyExpCoef = 1;
		landingAoa = "10*3.1415/180";
		landingSoundInt[] = {"landingSoundInt0",0.5,"landingSoundInt1",0.5};
		landingSoundInt0[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",1,1,100};
		landingSoundInt1[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",1,1,100};
		landingSoundOut[] = {"landingSoundOut0",0.5,"landingSoundOut1",0.5};
		landingSoundOut0[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",1.77828,1,100};
		landingSoundOut1[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",1.77828,1,100};
		landingSpeed = 0;
		laserScanner = 1;
		laserTarget = 0;
		leftDustEffects[] = {["clon_scarif_forestground1","LDustEffects"],["clon_scarif_forestground1","LDirtEffectsBig"],["clon_scarif_forestground1","LStonesEffectsBig"],["clon_scarif_travad1_detail","LDustEffectsAir"],["clon_scarif_travad1_detail","LGrassDryEffects"],["clon_scarif_travad1_detail","LDirtEffects"],["clon_scarif_whitesand","LDustEffectsAir"],["clon_scarif_whitesand","LSandEffects"],["clon_scarif_whitesand","LDirtEffects"],["clon_scarif_whitesand","LStonesEffects"]};
		liftForceCoef = 2;
		limitedSpeedCoef = 0.22;
		LockDetectionSystem = "1 + 2 + 4 + 8";
		magazines[] = {"laat_proton_torpedo","laat_proton_torpedo","400Rnd_Pomehi_Mag","400Rnd_Pomehi_Mag"};
		mainBladeCenter = "rotor_center";
		mainBladeRadius = 0.1;
		mainRotorSpeed = 1;
		mapSize = 25;
		maxBackRotorDive = 0;
		maxDetectRange = 20;
		maxFordingDepth = 0.75;
		maxGForce = 2;
		maximumLoad = 50000;
		maxMainRotorDive = 0;
		maxSmokeDamage = 0.99;
		maxSpeed = 500;
		memoryPointCM[] = {"flare_launcher1","flare_launcher2","flare_launcher3"};
		memoryPointCMDir[] = {"flare_launcher_dir1","flare_launcher_dir2","flare_launcher_dir3"};
		memoryPointDriverOptics = "PilotCamera_Pos";
		memoryPointGun[] = {"cannon1"};
		memoryPointLMissile = "RocketL";
		memoryPointLRocket = "RocketL";
		memoryPointPilot = "pilot";
		memoryPointRMissile = "RocketR";
		memoryPointRRocket = "RocketR";
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		memoryPointsGetInCargoPrecise[] = {"pos cargo"};
		memoryPointsGetInCoDriver = "pos codriver";
		memoryPointsGetInCoDriverDir = "pos codriver dir";
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsGetInDriverPrecise = "pos driver";
		memoryPointsLeftWaterEffect = "waterEffectL";
		memoryPointsRightWaterEffect = "waterEffectR";
		memoryPointSupply = "doplnovani";
		memoryPointTaskMarker = "";
		memoryPointTaskMarkerOffset[] = {0,0.3,0};
		mFact = 0;
		mfMax = 50;
		minBackRotorDive = 0;
		mineAlertIconRange = 200;
		minFireTime = 20;
		minGForce = 0.2;
		minMainRotorDive = 0;
		minSmokeDamage = 0.3;
		minTotalDamageThreshold = 0.005;
		model = "\LAAT\LAAT.p3d";
		namesound = "veh_air_plane_s";
		neutralBackRotorDive = 0;
		neutralMainRotorDive = 0;
		nightVision = 1;
		normalSpeedForwardCoef = 0.85;
		noseDownCoef = 0;
		numberPhysicalWheels = 0;
		nvScanner = 0;
		nvTarget = 0;
		obstructSoundLFRatio = 0;
		obstructSoundsWhenIn = 0.316228;
		occludeSoundLFRatio = 0.25;
		occludeSoundsWhenIn = 0.562341;
		outsideSoundFilter = 1;
		picture = "\laat\laat512_ca.paa";
		portrait = "";
		preciseGetInOut = 0;
		precision = 100;
		predictTurnPlan = 1;
		predictTurnSimul = 1.2;
		preferRoads = 0;
		radarTarget = 1;
		radarTargetSize = 0.8;
		radarType = 4;
		receiveRemoteTargets = 1;
		replaceDamaged = "";
		replaceDamagedHitpoints[] = {};
		replaceDamagedLimit = 0.9;
		reportOwnPosition = 1;
		reportRemoteTargets = 1;
		reversed = 1;
		rightDustEffects[] = {["clon_scarif_forestground1","RDustEffects"],["clon_scarif_forestground1","RDirtEffectsBig"],["clon_scarif_forestground1","RStonesEffectsBig"],["clon_scarif_travad1_detail","RDustEffectsAir"],["clon_scarif_travad1_detail","RGrassDryEffects"],["clon_scarif_travad1_detail","RDirtEffects"],["clon_scarif_whitesand","RDustEffectsAir"],["clon_scarif_whitesand","RSandEffects"],["clon_scarif_whitesand","RDirtEffects"],["clon_scarif_whitesand","RStonesEffects"]};
		rudderCoef[] = {0.2,0.5,1,1.5,1.8,2.1,2.4,2.5,2.6,2.7,2.7,0.8,0.4};
		rudderControlsSensitivityCoef = 2;
		rudderControlsSensitivityoef = 4;
		rudderInfluence = 0.866;
		scope = 2;
		scopeCurator = 2;
		secondaryExplosion = -1;
		selectionBackLights = "zadni svetlo";
		selectionClan = "clan";
		selectionDamage = "zbytek";
		selectionDashboard = "podsvit pristroju";
		selectionFireAnim = "zasleh";
		selectionHRotorMove = "main rotor blur";
		selectionHRotorStill = "main rotor static";
		selectionLeftOffset = "";
		selectionRightOffset = "";
		selectionShowDamage = "poskozeni";
		selectionVRotorMove = "tail rotor blur";
		selectionVRotorStill = "tail rotor static";
		sensitivity = 2.5;
		sensitivityEar = 0.0075;
		shadow = 1;
		showAllTargets = 2;
		showCrewAim = 0;
		shownUnderWaterSelections[] = {};
		showNVGCargo[] = {1};
		showNVGCommander = 0;
		showNVGDriver = 0;
		showNVGGunner = 0;
		side = 1;
		simulation = "helicopterrtd";
		slingLoadCargoMemoryPoints[] = {};
		slingLoadCargoMemoryPointsDir[] = {};
		slingLoadMaxCargoMass = 0;
		slingLoadMemoryPoint = "slingLoad0";
		slingLoadMinCargoMass = 0;
		slowSpeedForwardCoef = 0.3;
		SLX_XEH_DISABLED = 0;
		smokeLauncherAngle = 360;
		smokeLauncherGrenadeCount = 9;
		smokeLauncherOnTurret = 0;
		smokeLauncherVelocity = 15;
		soundArmorCrash[] = {"emptySound",0};
		soundAttenuationCargo[] = {0};
		soundBuildingCrash[] = {"emptySound",0};
		soundBushCrash[] = {"emptySound",0};
		soundCrash[] = {"",0.316228,1};
		soundCrashes[] = {"soundCrash",1};
		sounddamage[] = {"",1,1};
		soundDammage[] = {"",0.562341,1};
		soundElevation[] = {"",0.00316228,0.5};
		soundEngine[] = {"",1,1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_ext_stop",0.5,0.5,600};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_int_stop",0.316228,0.5};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_ext_start",0.5,0.5,300};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\air\Heli_Light_01\Heli_Light_01_int_start",0.316228,0.5};
		soundEnviron[] = {"a3\sounds_f\air\plane_fighter_03\noise_int",5,1};
		soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Down",0.630957,1,100};
		soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Up",0.630957,1,100};
		soundGearDown[] = {"",1,1};
		soundGearUp[] = {"",1,1};
		soundGetIn[] = {"a3\sounds_f\air\plane_fighter_03\getin",0.3,1};
		soundGetOut[] = {"a3\sounds_f\air\plane_fighter_03\getout",0.3,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",0.316228,1.5};
		soundLandCrash[] = {"",1,1};
		soundLandCrashes[] = {"soundLandCrash",1};
		soundLandingGear[] = {"",1,1};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		soundServo[] = {"",0.00316228,0.5};
		soundTurnIn[] = {"",0.000316228,1};
		soundTurnInInternal[] = {"",0.000316228,1};
		soundTurnOut[] = {"",0.000316228,1};
		soundTurnOutInternal[] = {"",0.000316228,1};
		soundWaterCrash[] = {"",0.177828,1};
		soundWaterCrashes[] = {"soundWaterCrash",1};
		soundWoodCrash[] = {"emptySound",0};
		speechPlural[] = {};
		speechSingular[] = {};
		spotableDarkNightLightsOff = 0.001;
		spotableNightLightsOff = 0.02;
		spotableNightLightsOn = 4;
		stallSpeed = 180;
		stallWarningTreshold = 0.2;
		startDuration = 20;
		steerAheadPlan = 0.7;
		steerAheadSimul = 0.5;
		supplyRadius = 5;
		tailBladeCenter = "rotor_02_center";
		tailBladeRadius = 0.5;
		tailBladeVertical = 1;
		tBody = 0;
		textPlural = "helicÃ³pteros";
		textSingular = "helicÃ³ptero";
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.1;
		threat[] = {1,1,0.7};
		thrustCoef[] = {1.16,1.15,1.14,1.14,1.13,1.12,1.1,1.07,0.99,0.2,0,0,0};
		tracksSpeed = 0;
		transportAmmo = 0;
		transportFuel = 0;
		transportMaxBackpacks = 10;
		transportMaxMagazines = 48;
		transportMaxWeapons = 12;
		transportRepair = 0;
		transportSoldier = 22;
		transportVehiclesCount = 0;
		transportVehiclesMass = 0;
		type = 2;
		typicalCargo[] = {"SWOP_Clonetrooper_pilot"};
		uavHacker = 0;
		unitInfoType = "RscOptics_CAS_Pilot";
		unitInfoTypeLite = "RscUnitInfoAirRTDBasic";
		unitInfoTypeRTD = "RscUnitInfoAirRTDFullDigital";
		unloadInCombat = 0;
		usePreciseGetInAction = 0;
		vehicleClass = "Air";
		viewCargoShadow = 1;
		viewCargoShadowAmb = 1;
		viewCargoShadowDiff = 1;
		viewDriverShadow = 1;
		viewDriverShadowAmb = 1;
		viewDriverShadowDiff = 1;
		viewGunnerShadow = 1;
		visualTarget = 1;
		visualTargetSize = 1;
		VTOLPitchInfluence = 2;
		VTOLRollInfluence = 8;
		VTOLYawInfluence = 6;
		washDownDiameter = "40.0f";
		washDownStrength = "1.0f";
		waterAngularDampingCoef = 5;
		waterDamageEngine = 0.2;
		waterEffect = "HeliWater";
		waterLeakiness = 0.08;
		waterLinearDampingCoefX = 2;
		waterLinearDampingCoefY = 5;
		waterPPInVehicle = 1;
		waterResistance = 10;
		waterResistanceCoef = 0.5;
		weapons[] = {"laat_proton_torpedo_launcher","PomehiLauncherXT"};
		weaponsGroup1 = "1 + 		2";
		weaponsGroup2 = 4;
		weaponsGroup3 = "8 + 	16 + 	32";
		weaponsGroup4 = "64 + 		128";
		weaponSlots = 0;
		wheelCircumference = 1;
		wheelSteeringSensitivity = 1.5;
		windSockExist = 0;
	};
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class st41_anim
			{
				displayName = "41st Animations";
				icon = "st41\st41_animations\data\41st_logo_small.paa";
				class st41_jedi
				{
					displayName = "Jedi";
					condition = "(((handgunWeapon _player) find 'lightsaber') >=0)";
					class st41_sword_on
					{
						displayName = "On";
						condition = "((handgunWeapon _player) find 'lightsaber') >=0 && ((count (handgunMagazine _player)) == 0)";
						exceptions[] = {};
						statement = "_player addHandgunItem ((getArray (configFile >> 'CfgWeapons' >> (handgunWeapon _player) >> 'magazines')) select 0)";
					};
					class st41_sword_off
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
						statement = "[_player] spawn {(_this select 0) playActionNow 'rgr_guardia';sleep 1;(_this select 0) playActionNow 'rgr_guardia_loop';currentNamespace setVariable ['st41_action_loop','rgr_guardia_loop'];};";
					};
					class rgr_guardia_halcon_pose
					{
						displayName = "Guardia Halcon";
						condition = "";
						exceptions[] = {};
						statement = "[_player] spawn {(_this select 0) playActionNow 'rgr_guardia_halcon';sleep 1;(_this select 0) playActionNow 'rgr_guardia_halcon_loop';currentNamespace setVariable ['st41_action_loop','rgr_guardia_halcon_loop'];};";
					};
					class rgr_guardia_baja
					{
						displayName = "Guardia Baja";
						condition = "";
						exceptions[] = {};
						statement = "[_player] spawn {(_this select 0) playActionNow 'rgr_guardiabaja';sleep 1;(_this select 0) playActionNow 'rgr_GuardiaBaja_loop';currentNamespace setVariable ['st41_action_loop','rgr_guardiabaja_loop'];};";
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
						statement = "[_player] spawn {(_this select 0) action ['SwitchWeapon', (_this select 0), (_this select 0), 299];sleep 4;(_this select 0) playActionNow 'rgr_paseoJedi';currentNamespace setVariable ['st41_action_loop','rgr_paseoJedi'];};";
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
				class st41_fusil
				{
					displayName = "Fusil";
					class st41_paseo_fusil //TODO
					{
						displayName = "Paseo Fusil";
						condition = "";
						exceptions[] = {};
						statement = "[_player] spawn {(_this select 0) action ['SwitchWeapon', (_this select 0), (_this select 0), 299];sleep 4;(_this select 0) playActionNow 'st41_paseo_fusil';currentNamespace setVariable ['st41_action_loop','st41_paseo_fusil'];};";
					};
					class st41_fusil_hombro //TODO
					{
						displayName = "Fusil sobre el hombro";
						condition = "";
						exceptions[] = {};
						statement = "[_player] spawn {(_this select 0) action ['SwitchWeapon', (_this select 0), (_this select 0), 299];sleep 4;(_this select 0) playActionNow 'st41_fusil_hombro';currentNamespace setVariable ['st41_action_loop','st41_fusil_hombro'];};";
					};
					class st41_fusil_suelo //TODO
					{
						displayName = "Fusil apoyado suelo";
						condition = "";
						exceptions[] = {};
						statement = "[ace_player, 'st41_fusilsuelo'] remoteExec ['switchMove', 0]";
					};

				};
				class st41_cancel
				{
					displayName = "Cancelar";
					icon = "st41\st41_animations\data\ui_cancel.paa";
					condition = "";
					exceptions[] = {};
					statement = "_player playActionNow 'GestureNod';[ace_player, ''] remoteExec ['switchMove', 0]; currentNamespace setVariable ['st41_action_loop',''];_player action ['SwitchWeapon', _player, _player, 1];";
				};
			};
		};
	};

};
