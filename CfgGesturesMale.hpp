class CfgGesturesMale
{
	skeletonName = "OFP2_ManSkeleton";
	class ManActions{};
	class Actions
	{
		class NoActions
		{
			turnSpeed = 0;
			upDegree = 0;
			limitFast = 1;
			useFastMove = 0;
			stance = "ManStanceUndefined";
		};
	};
	class Default
	{
		actions = "NoActions";
		file = "";
		looped = 1;
		speed = 0.5;
		static = 0;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = 0;
		soundOverride = "";
		soundEdge[] = {0.5,1};
		terminal = 0;
		ragdoll = 0;
		equivalentTo = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		mask = "empty";
		interpolationSpeed = 6;
		interpolationRestart = 0;
		preload = 0;
		disableWeapons = 1;
		enableOptics = 0;
		showWeaponAim = 0;
		enableMissile = 1;
		enableBinocular = 1;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		canPullTrigger = 1;
		Walkcycles = 1;
		headBobMode = 0;
		headBobStrength = 0;
		leftHandIKBeg = 1;
		leftHandIKEnd = 1;
		rightHandIKBeg = 1;
		rightHandIKEnd = 1;
		leftHandIKCurve[] = {1};
		rightHandIKCurve[] = {1};
		forceAim = 0;
		boundingSphere = 0;
	};
	class States
	{
		class fr4_defend1: Default
		{
			file = "\fr4_starwars_animations\anim\gestures\starwars_defend_1.rtm";
			minPlayTime = 2;
			looped = 0;
			speed = 2;
			mask = "fr4_handsWeapon";
			disableWeapons = 1;
			disableWeaponsLong = 1;
			weaponLowered = 0;
			showWeaponAim = 0;
			showHandGun = 0;
			canPullTrigger = 0;
			canReload = 0;
			terminal = 0;
			limitGunMovement = 0;
			preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
			interpolateTo[] = {};
			boundingSphere = 0;
		};
		class fr4_defend2: Default
		{
			file = "\fr4_starwars_animations\anim\gestures\starwars_defend_2.rtm";
			minPlayTime = 2;
			looped = 0;
			speed = 2;
			mask = "fr4_handsWeapon";
			disableWeapons = 1;
			disableWeaponsLong = 1;
			weaponLowered = 0;
			showWeaponAim = 0;
			showHandGun = 0;
			canPullTrigger = 0;
			canReload = 0;
			terminal = 0;
			limitGunMovement = 0;
			preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
			interpolateTo[] = {};
			boundingSphere = 0;
		};
		class fr4_defend3: Default
		{
			file = "\fr4_starwars_animations\anim\gestures\starwars_defend_3.rtm";
			minPlayTime = 2;
			looped = 0;
			speed = 2;
			mask = "fr4_handsWeapon";
			disableWeapons = 1;
			disableWeaponsLong = 1;
			weaponLowered = 0;
			showWeaponAim = 0;
			showHandGun = 0;
			canPullTrigger = 0;
			canReload = 0;
			terminal = 0;
			limitGunMovement = 0;
			preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
			interpolateTo[] = {};
			boundingSphere = 0;
		};
		class rgr_guardia: Default
		{
			file = "\fr4_starwars_animations\anim\gestures\rgr_guardia.rtm";
			minPlayTime = 2;
			looped = 0;
			speed = 1;
			mask = "fr4_handsWeapon";
			disableWeapons = 0;
			disableWeaponsLong = 0;
			weaponLowered = 0;
			showWeaponAim = 0;
			showHandGun = 0;
			canPullTrigger = 0;
			canReload = 0;
			terminal = 0;
			limitGunMovement = 0;
			preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
			interpolateTo[] = {"rgr_guardia_loop",0.001};
			boundingSphere = 0;
		};
		class rgr_guardia_loop: Default
		{
			file = "\fr4_starwars_animations\anim\gestures\rgr_guardia_loop.rtm";
			looped = 1;
			speed = 0.00001;
			mask = "fr4_handsWeapon";
			disableWeapons = 0;
			disableWeaponsLong = 0;
			weaponLowered = 0;
			showWeaponAim = 0;
			showHandGun = 0;
			canPullTrigger = 0;
			canReload = 0;
			terminal = 0;
			limitGunMovement = 0;
			preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
			interpolateTo[] = {};
			boundingSphere = 0;
		};
		class rgr_guardia_halcon: Default
		{
			file = "\fr4_starwars_animations\anim\gestures\rgr_guardia_halcon.rtm";
			minPlayTime = 2;
			looped = 0;
			speed = 1;
			mask = "fr4_handsWeapon";
			disableWeapons = 1;
			disableWeaponsLong = 1;
			weaponLowered = 0;
			showWeaponAim = 0;
			showHandGun = 0;
			canPullTrigger = 0;
			canReload = 0;
			terminal = 0;
			limitGunMovement = 0;
			preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
			interpolateTo[] = {"rgr_guardia_loop",0.001};
			boundingSphere = 0;
		};
		class rgr_guardia_halcon_loop: Default
		{
			file = "\fr4_starwars_animations\anim\gestures\rgr_guardia_halcon_loop.rtm";
			looped = 1;
			speed = 0.00001;
			mask = "fr4_handsWeapon";
			disableWeapons = 0;
			disableWeaponsLong = 0;
			weaponLowered = 0;
			showWeaponAim = 0;
			showHandGun = 0;
			canPullTrigger = 0;
			canReload = 0;
			terminal = 0;
			limitGunMovement = 0;
			preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
			interpolateTo[] = {};
			boundingSphere = 0;
		};
		class rgr_guardiabaja: Default
		{
			file = "\fr4_starwars_animations\anim\gestures\rgr_GuardiaBaja.rtm";
			looped = 0;
			speed = 1;
			mask = "fr4_handsWeapon";
			disableWeapons = 1;
			disableWeaponsLong = 1;
			weaponLowered = 0;
			showWeaponAim = 0;
			showHandGun = 0;
			canPullTrigger = 0;
			canReload = 0;
			terminal = 0;
			limitGunMovement = 0;
			preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
			interpolateTo[] = {};
			boundingSphere = 0;
		};
		class rgr_guardiabaja_loop: Default
		{
			file = "\fr4_starwars_animations\anim\gestures\rgr_guardiabaja_loop.rtm";
			looped = 1;
			speed = 0.00001;
			mask = "fr4_handsWeapon";
			disableWeapons = 0;
			disableWeaponsLong = 0;
			weaponLowered = 0;
			showWeaponAim = 0;
			showHandGun = 0;
			canPullTrigger = 0;
			canReload = 0;
			terminal = 0;
			limitGunMovement = 0;
			preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
			interpolateTo[] = {};
			boundingSphere = 0;
		};
		class rgr_paseoJedi: Default
		{
			file = "\fr4_starwars_animations\anim\gestures\rgr_paseoJedi.rtm";
			minPlayTime = 2;
			looped = 1;
			speed = 1;
			mask = "hands";
			disableWeapons = 1;
			disableWeaponsLong = 1;
			weaponLowered = 0;
			showWeaponAim = 0;
			showHandGun = 0;
			canPullTrigger = 0;
			canReload = 0;
			terminal = 0;
			limitGunMovement = 0;
			preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
			interpolateTo[] = {};
		};
		class fr4_fly_static: Default
		{
			file = "\fr4_starwars_animations\anim\gestures\fr4_fly_static.rtm";
			looped = 1;
			speed = 0.2;
			mask = "BodyHalfDown";
			disableWeapons = 0;
			enableOptics = 1;
			disableWeaponsLong = 0;
			weaponLowered = 1;
			showWeaponAim = 1;
			showHandGun = 0;
			canPullTrigger = 1;
			canReload = 1;
			terminal = 0;
			limitGunMovement = 0;
			preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
			interpolateTo[] = {};
		};
		class fr4_fly_to_flyforward: Default
		{
			file = "\fr4_starwars_animations\anim\gestures\fr4_fly_to_flyforward.rtm";
			looped = 0;
			speed = 0.5;
			mask = "BodyHalfDownAndColumn";
			disableWeapons = 0;
			enableOptics = 1;
			disableWeaponsLong = 0;
			weaponLowered = 1;
			showWeaponAim = 1;
			showHandGun = 0;
			canPullTrigger = 1;
			canReload = 1;
			terminal = 0;
			limitGunMovement = 0;
			preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
			interpolateTo[] = {};
		};
		class fr4_flyforward: Default
		{
			file = "\fr4_starwars_animations\anim\gestures\fr4_flyforward.rtm";
			looped = 1;
			speed = 0.00001;
			mask = "BodyHalfDownAndColumn";
			disableWeapons = 0;
			enableOptics = 1;
			disableWeaponsLong = 0;
			weaponLowered = 1;
			showWeaponAim = 1;
			showHandGun = 0;
			canPullTrigger = 1;
			canReload = 1;
			terminal = 0;
			limitGunMovement = 0;
			preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
			interpolateTo[] = {};
		};
		class fr4_paseo_fusil: Default
		{
			file = "\fr4_starwars_animations\anim\gestures\fr4_paseo_fusil.rtm";
			looped = 1;
			speed = 0.000001;
			mask = "fr4_handsWeapon";
			disableWeapons = 1;
			enableOptics = 0;
			disableWeaponsLong = 1;
			weaponLowered = 1;
			showWeaponAim = 1;
			showHandGun = 0;
			canPullTrigger = 1;
			canReload = 1;
			terminal = 0;
			limitGunMovement = 0;
			preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
			interpolateTo[] = {};
		};
		class fr4_fusil_hombro: Default
		{
			file = "\fr4_starwars_animations\anim\gestures\fr4_fusil_hombro.rtm";
			looped = 1;
			speed = 0.000001;
			mask = "fr4_handsWeapon";
			disableWeapons = 1;
			enableOptics = 0;
			disableWeaponsLong = 1;
			weaponLowered = 1;
			showWeaponAim = 1;
			showHandGun = 0;
			canPullTrigger = 1;
			canReload = 1;
			terminal = 0;
			limitGunMovement = 0;
			preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
			interpolateTo[] = {};
		};
		class rgr_fuerza: Default
		{
			file = "\fr4_starwars_animations\anim\gestures\rgr_fuerza.rtm";
			looped = 1;
			speed = 1;
			mask = "fr4_handsWeapon";
			disableWeapons = 1;
			enableOptics = 0;
			disableWeaponsLong = 1;
			weaponLowered = 1;
			showWeaponAim = 1;
			showHandGun = 0;
			canPullTrigger = 1;
			canReload = 1;
			terminal = 0;
			limitGunMovement = 0;
			preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
			interpolateTo[] = {};
		};
	};
	class BlendAnims
	{
		fr4_handsWeapon[] = {"head",0.5,"neck1",0.5,"neck",0.5,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.2,"Spine1",0.3,"Spine2",0.4,"Spine3",0.5,"MaskStart"};
		BodyHalfDownAndColumn[] = {"head",0.01,"neck1",0.01,"neck",0.01,"weapon",0.01,"LeftShoulder",0.01,"LeftArm",0.01,"LeftArmRoll",0.01,"LeftForeArm",0.01,"LeftForeArmRoll",0.01,"LeftHand",0.01,"LeftHandRing",0.01,"LeftHandPinky1",0.01,"LeftHandPinky2",0.01,"LeftHandPinky3",0.01,"LeftHandRing1",0.01,"LeftHandRing2",0.01,"LeftHandRing3",0.01,"LeftHandMiddle1",0.01,"LeftHandMiddle2",0.01,"LeftHandMiddle3",0.01,"LeftHandIndex1",0.01,"LeftHandIndex2",0.01,"LeftHandIndex3",0.01,"LeftHandThumb1",0.01,"LeftHandThumb2",0.01,"LeftHandThumb3",0.01,"Spine1",0.1,"Spine2",0.2,"Spine3",0.3,"Spine",0.4,"Pelvis",0.5,"LeftLeg",1,"LeftLegRoll",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightLeg",1,"RightLegRoll",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightFoot",1,"RightToeBase",1};
		BodyHalfDown[] = {"head",0.01,"neck1",0.01,"neck",0.01,"weapon",0.01,"LeftShoulder",0.01,"LeftArm",0.01,"LeftArmRoll",0.01,"LeftForeArm",0.01,"LeftForeArmRoll",0.01,"LeftHand",0.01,"LeftHandRing",0.01,"LeftHandPinky1",0.01,"LeftHandPinky2",0.01,"LeftHandPinky3",0.01,"LeftHandRing1",0.01,"LeftHandRing2",0.01,"LeftHandRing3",0.01,"LeftHandMiddle1",0.01,"LeftHandMiddle2",0.01,"LeftHandMiddle3",0.01,"LeftHandIndex1",0.01,"LeftHandIndex2",0.01,"LeftHandIndex3",0.01,"LeftHandThumb1",0.01,"LeftHandThumb2",0.01,"LeftHandThumb3",0.01,"Spine1",0.01,"Spine2",0.01,"Spine3",0.01,"Spine",0.01,"Pelvis",0.01,"LeftLeg",0.5,"LeftLegRoll",0.5,"LeftUpLeg",0.5,"LeftUpLegRoll",0.5,"LeftFoot",0.5,"LeftToeBase",0.5,"RightLeg",0.5,"RightLegRoll",0.5,"RightUpLeg",0.5,"RightUpLegRoll",0.5,"RightFoot",0.5,"RightToeBase",0.5};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
};