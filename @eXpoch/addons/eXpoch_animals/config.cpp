class CfgPatches
{
	class eXpoch_animals
	{
		requiredAddons[] = {"A3_Data_F","A3_Ui_F","A3_Functions_F","A3_UiFonts_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		vehicles[] = {};
		author = "DonkeyPunch Community Gaming";
	};
};
class CfgMovesAnimalsBase
{
	class Default
	{
		actions = "";
		access = 3;
		file = "";
		looped = 1;
		speed = 0.5;
		disableWeapons = 1;
		enableOptics = 0;
		disableWeaponsLong = 1;
		showWeaponAim = 0;
		enableMissile = 0;
		enableBinocular = 0;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		onLandBeg = 0;
		onLandEnd = 0;
		onLadder = 0;
		canPullTrigger = 1;
		duty = -0.51;
		predictSpeedCoef = 1;
		visibleSize = 1;
		aimPrecision = 1;
		relSpeedMin = 1.0;
		relSpeedMax = 1.0;
		soundEnabled = 0;
		controlHead = 0;
		headBobMode = 0;
		headBobStrength = 0;
		soundOverride = "";
		soundEdge[] = {0.5,1};
		terminal = 0;
		limitGunMovement = 1;
		variantsPlayer[] = {};
		variantsAI[] = {""};
		equivalentTo = "";
		connectAs = "";
		variantAfter[] = {5,10,20};
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		aiming = "aimingNo";
		leaning = "aimingNo";
		untiltWeapon = "aimingNo";
		aimingBody = "aimingUpDefault";
		legs = "legsNo";
		head = "headDefault";
		leaningFactorBeg = 0;
		leaningFactorEnd = 0;
		leaningFactorZeroPoint = -1;
		leaningCorrectionAngleBeg = 0;
		leaningCorrectionAngleEnd = 0;
		interpolationSpeed = 6;
		interpolationRestart = 0;
		collisionShape = "ca\animals2\data\geom\basicColide.p3d";
		hasCollShapeSafe = 0;
		collisionShapeSafe = "";
		boundingSphere = 1;
		enableDirectControl = 1;
		enableAutoActions = 0;
		leftHandIKBeg = 0;
		leftHandIKEnd = 0;
		rightHandIKBeg = 0.0;
		rightHandIKEnd = 0;
		weaponIK = 0;
		preload = 0;
		walkcycles = 1;
		forceAim = 0;
		rightHandIKCurve[] = {};
		leftHandIKCurve[] = {};
	};
	class StandBase: Default
	{
		aiming = "aimingDefault";
		disableWeapons = 1;
		leaningFactorBeg = 1;
		leaningFactorEnd = 1;
	};
	class DefaultDie: Default
	{
		aiming = "aimingNo";
		legs = "legsNo";
		head = "headNo";
		disableWeapons = 1;
		interpolationRestart = 1;
		soundOverride = "fallbody";
		soundEdge[] = {0.45};
		soundEnabled = 0;
	};
	class ManActions
	{
		Stop = "";
		StopRelaxed = "";
		TurnL = "";
		TurnR = "";
		TurnLRelaxed = "";
		TurnRRelaxed = "";
		Default = "";
		JumpOff = "";
		ReloadMagazine = "";
		ReloadMGun = "";
		ReloadAT = "";
		ReloadMortar = "";
		ThrowGrenade = "";
		WalkF = "";
		WalkLF = "";
		WalkRF = "";
		WalkL = "";
		WalkR = "";
		WalkLB = "";
		WalkRB = "";
		WalkB = "";
		SlowF = "";
		SlowLF = "";
		SlowRF = "";
		SlowL = "";
		SlowR = "";
		SlowLB = "";
		SlowRB = "";
		SlowB = "";
		FastF = "";
		FastLF = "";
		FastRF = "";
		FastL = "";
		FastR = "";
		FastLB = "";
		FastRB = "";
		FastB = "";
		EvasiveForward = "";
		EvasiveLeft = "";
		EvasiveRight = "";
		EvasiveBack = "";
		StartSwim = "";
		StopSwim = "";
		Down = "";
		Up = "";
		PlayerStand = "";
		PlayerCrouch = "";
		PlayerProne = "";
		Lying = "";
		Stand = "";
		Combat = "";
		Crouch = "";
		CanNotMove = "";
		Civil = "";
		CivilLying = "";
		FireNotPossible = "";
		Die = "";
		WeaponOn = "";
		WeaponOff = "";
		StrokeFist = "";
		StrokeGun = "";
		SitDown = "";
		Salute = "";
		BinocOn = "";
		BinocOff = "";
		PutDown = "";
		PutDownEnd = "";
		Medic = "";
		Treated = "";
		LadderOnDown = "";
		LadderOnUp = "";
		LadderOff = "";
		LadderOffTop = "";
		LadderOffBottom = "";
		GetInLow = "";
		GetInMedium = "";
		GetInHigh = "";
		GetOutLow = "";
		GetOutMedium = "";
		GetOutHigh = "";
		TakeFlag = "";
		HandGunOn = "";
		LookAround = "";
		Eat = "";
		StopEat = "";
		Rest = "";
		StopRest = "";
	};
	class BlendAnims
	{
		aimingDefault[] = {};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
	collisionVertexPattern[] = {"1a","2a","3a","4a","5a","6a","7a","8a","9a","10a","11a","12a","13a","14a","15a","16a","17a","18a","19a","20a","21a","22a","23a","24a","25a","26a","27a","28a","29a","30a","31a","32a","33a","34a"};
	collisionGeomCompPattern[] = {1};
};
class CfgMovesCock: CfgMovesAnimalsBase
{
	primaryActionMaps[] = {"CockActions","NoActions"};
	skeletonName = "CockSkeleton";
	class States
	{
		class Cock_Stop: StandBase
		{
			variantsAI[] = {"Cock_Stop",0.5,"Cock_WalkWings",0.2,"Cock_Wings",0.3};
			duty = -1;
			file = "\Ca\animals2\Birds\chicken\Data\Anim\AnimCock\Cockstop";
			actions = "CockActions";
			collisionShape = "Ca\animals2\Birds\chicken\chicken_CollShape.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"Cock_Run",0.1,"Cock_Die",0.1,"Cock_WalkWings",0.1,"Cock_Walk",0.1,"Cock_Wings",0.1,"Cock_Eat",0.1};
		};
		class Cock_Wings: Cock_Stop
		{
			file = "\Ca\animals2\Birds\chicken\Data\Anim\AnimCock\CockWings";
			equivalentTo = "Cock_Stop";
			looped = 0;
			speed = 0.25;
			ConnectTo[] = {"Cock_Stop",0.1};
			InterpolateTo[] = {"Cock_Die",0.1};
		};
		class Cock_Eat: Cock_Stop
		{
			speed = 0.3;
			file = "\Ca\animals2\Birds\chicken\Data\Anim\AnimCock\CockEat";
			ConnectTo[] = {};
			InterpolateTo[] = {"Cock_Run",0.1,"Cock_Die",0.1,"Cock_Walk",0.1,"Cock_Stop",0.1};
		};
		class Cock_Walk: Cock_Stop
		{
			actions = "CockActions";
			duty = -0.7;
			file = "\Ca\animals2\Birds\chicken\Data\Anim\AnimCock\CockWalk";
			speed = 0.8;
			head = "headDefault";
			ConnectTo[] = {};
			InterpolateTo[] = {"Cock_Run",0.1,"Cock_Die",0.1,"Cock_Eat",0.1,"Cock_Stop",0.1};
		};
		class Cock_WalkWings: Cock_Walk
		{
			file = "\Ca\animals2\Birds\chicken\Data\Anim\AnimCock\CockWalkWings";
			equivalentTo = "Cock_Stop";
			looped = 0;
			speed = 0.25;
			ConnectTo[] = {"Cock_Stop",0.1};
			InterpolateTo[] = {"Cock_Die",0.1};
		};
		class Cock_Run: Cock_Stop
		{
			actions = "CockActions_run";
			duty = 0.6;
			file = "\Ca\animals2\Birds\chicken\Data\Anim\AnimCock\CockRunning";
			speed = 3.0;
			looped = 1;
			limitGunMovement = 1.0;
			ConnectTo[] = {};
			InterpolateTo[] = {"Cock_Die",0.1,"Cock_Walk",0.1,"Cock_Eat",0.1,"Cock_Stop",0.1};
		};
		class Cock_Die: DefaultDie
		{
			file = "\Ca\animals2\Birds\chicken\Data\Anim\AnimCock\CockDeath";
			speed = 0.1;
			actions = "NoActions";
			looped = "False";
			terminal = 1;
			collisionShape = "Ca\animals2\Birds\chicken\chicken_CollShape.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
	};
	class Actions
	{
		class NoActions: ManActions
		{
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = 0;
		};
		class CockActions: NoActions
		{
			Stop = "Cock_Stop";
			StopRelaxed = "Cock_Stop";
			TurnL = "Cock_Stop";
			TurnR = "Cock_Stop";
			TurnLRelaxed = "Cock_Stop";
			TurnRRelaxed = "Cock_Stop";
			Default = "Cock_Stop";
			JumpOff = "Cock_Stop";
			WalkF = "Cock_Eat";
			SlowF = "Cock_Walk";
			FastF = "Cock_Run";
			EvasiveForward = "Cock_Run";
			Down = "Cock_Stop";
			Up = "Cock_Stop";
			PlayerStand = "Cock_Stop";
			PlayerCrouch = "Cock_Stop";
			PlayerProne = "Cock_Stop";
			Lying = "Cock_Stop";
			Stand = "Cock_Stop";
			Combat = "Cock_Stop";
			Crouch = "Cock_Stop";
			CanNotMove = "Cock_Stop";
			Civil = "Cock_Stop";
			CivilLying = "Cock_Stop";
			FireNotPossible = "";
			Die = "Cock_Die";
			Eat = "";
			Rest = "";
			turnSpeed = 4;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = "ManPosNoWeapon";
			StartSwim = "Cock_Die";
		};
		class CockActions_run: CockActions
		{
			useFastMove = 1;
		};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"head",1,"Props",1};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {"head",0.8,"headend",0.8,"neck1",0.5,"Props",1};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
};
class CfgMovesHen: CfgMovesAnimalsBase
{
	primaryActionMaps[] = {"HenActions","NoActions"};
	skeletonName = "HenSkeleton";
	class States
	{
		class Hen_Stop: StandBase
		{
			duty = -1.0;
			file = "\CA\animals2\Birds\chicken\data\Anim\AnimHen\HenStop";
			actions = "HenActions";
			speed = 1e+010;
			collisionShape = "Ca\animals2\Birds\chicken\chicken_CollShape.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {"Hen_Die",0.1,"Hen_Walk",0.1,"Hen_Run",0.1,"Hen_Eat",0.1};
		};
		class Hen_Eat: Hen_Stop
		{
			speed = 0.3;
			file = "\CA\animals2\Birds\Chicken\data\Anim\AnimHen\HenEat";
			ConnectTo[] = {};
			InterpolateTo[] = {"Hen_Die",0.2,"Hen_Walk",0.1,"Hen_Run",0.1,"Hen_Stop",0.1};
		};
		class Hen_Walk: Hen_Stop
		{
			actions = "HenActions";
			duty = -0.7;
			file = "\CA\animals2\Birds\Chicken\data\Anim\AnimHen\HenWalk";
			speed = 0.8;
			head = "headDefault";
			ConnectTo[] = {};
			InterpolateTo[] = {"Hen_Die",0.1,"Hen_Run",0.1,"Hen_Stop",0.1,"Hen_Eat",0.1};
		};
		class Hen_Run: Hen_Stop
		{
			actions = "HenActions_Run";
			duty = -0.5;
			file = "\CA\animals2\Birds\Chicken\data\Anim\AnimHen\HenWalk";
			speed = 1.0;
			looped = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"Hen_Die",0.1,"Hen_Walk",0.1,"Hen_Stop",0.1,"Hen_Eat",0.1};
		};
		class Hen_Die: DefaultDie
		{
			file = "\CA\animals2\Birds\Chicken\data\Anim\AnimHen\HenDeath.rtm";
			speed = 0.1;
			actions = "NoActions";
			looped = "False";
			variantAfter[] = {0,0,0};
			terminal = 1;
			soundEnabled = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
	};
	class Actions
	{
		class NoActions: ManActions
		{
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = 0;
		};
		class HenActions: NoActions
		{
			Stop = "Hen_Stop";
			StopRelaxed = "Hen_Stop";
			TurnL = "Hen_Stop";
			TurnR = "Hen_Stop";
			TurnLRelaxed = "Hen_Stop";
			TurnRRelaxed = "Hen_Stop";
			Default = "Hen_Stop";
			JumpOff = "Hen_Stop";
			WalkF = "Hen_Eat";
			SlowF = "Hen_WAlk";
			FastF = "Hen_Run";
			EvasiveForward = "Hen_Run";
			Down = "Hen_Stop";
			Up = "Hen_Stop";
			PlayerStand = "Hen_Stop";
			PlayerCrouch = "Hen_Stop";
			PlayerProne = "Hen_Stop";
			Lying = "Hen_Stop";
			Stand = "Hen_Stop";
			Combat = "Hen_Stop";
			Crouch = "Hen_Stop";
			CanNotMove = "Hen_Stop";
			Civil = "Hen_Stop";
			CivilLying = "Hen_Stop";
			FireNotPossible = "Hen_Stop";
			Die = "Hen_Die";
			Eat = "";
			Rest = "";
			turnSpeed = 4;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = "ManPosNoWeapon";
			StartSwim = "Hen_Die";
		};
		class HenActions_Run: HenActions
		{
			useFastMove = 1;
		};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"head",1};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {"head",0.8,"neck1",0.7,"headEnd",0.8};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
};
class CfgMovesCow: CfgMovesAnimalsBase
{
	primaryActionMaps[] = {"CowActions","NoActions"};
	collisionVertexPattern[] = {"1a","2a","3a","4a","5a","6a","7a","8a","9a","10a","11a","12a","13a","14a","15a","16a","17a","18a","19a","20a","21a","22a","23a","24a","25a","26a","27a","28a","29a","30a","31a","32a","33a","34a","1c","2c","3c","4c","5c","6c","7c","8c"};
	skeletonName = "CowSkeleton";
	class States
	{
		class Cow_Stop: StandBase
		{
			actions = "CowActions";
			duty = -1;
			file = "\CA\animals2\Cow\data\Anim\krava_still_pose";
			speed = 1e+010;
			relSpeedMin = 0.7;
			relSpeedMax = 1.1;
			looped = 1;
			soundEnabled = 0;
			enableDirectControl = 0;
			enableBinocular = 1;
			collisionShape = "ca\animals2\cow\cow_CollShape.p3d";
			ConnectTo[] = {"Cow_idle_postavaniTOpaseni",0.02,"Cow_Eat_In",0.1};
			InterpolateTo[] = {"Cow_postavani",0.02,"Cow_idle_postavaniRozhliziSe",0.02,"Cow_idle_postavaniSklaniSe",0.02,"Cow_Walk",0.1,"Cow_Die",0.02,"Cow_TurnR",0.02,"Cow_TurnL",0.02,"Cow_Run",0.1};
		};
		class Cow_idle_paseni: Cow_Stop
		{
			file = "\Ca\animals2\Cow\data\anim\krava_idle_paseni.rtm";
			speed = 0.099668;
			ConnectTo[] = {"Cow_idle_paseniZvedneHlavu",0.02,"Cow_idle_paseniPopochazeni",0.02,"Cow_idle_paseniPopochazeniHlava",0.02,"Cow_idle_paseniTOpostavani_idletrans",0.02};
			InterpolateTo[] = {"Cow_idle_paseniTOpostavani",0.02,"Cow_Die",0.02};
		};
		class Cow_idle_postavaniTOpaseni: Cow_idle_paseni
		{
			file = "\Ca\animals2\Cow\data\anim\krava_idle_postavaniTOpaseni.rtm";
			speed = 0.6;
			looped = 0;
			ConnectTo[] = {"Cow_idle_paseniTOpostavani",0.02,"Cow_idle_paseniZvedneHlavu",0.02,"Cow_idle_paseni",0.02,"Cow_idle_paseniPopochazeni",0.02,"Cow_idle_paseniPopochazeniHlava",0.02};
			InterpolateTo[] = {"Cow_Die",0.02};
		};
		class Cow_idle_postavaniSklaniSe: Cow_idle_paseni
		{
			file = "\Ca\animals2\Cow\data\anim\krava_idle_postavaniSklaniSe.rtm";
			ConnectTo[] = {"Cow_postavani",0.02,"Cow_idle_postavaniRozhliziSe",0.02,"Cow_idle_postavaniTOpaseni",0.02};
			InterpolateTo[] = {"Cow_Stop",0.02,"Cow_Die",0.02};
		};
		class Cow_postavani: Cow_idle_paseni
		{
			file = "\Ca\animals2\Cow\data\anim\krava_idle_postavani.rtm";
			variantAfter[] = {0,0,0};
			variantsAI[] = {"Cow_postavani",0.142,"Cow_idle_postavaniSklaniSe",0.142,"Cow_idle_postavaniRozhliziSe",0.142,"Cow_idle_paseni",0.142,"Cow_idle_paseniZvedneHlavu",0.142,"Cow_idle_paseniPopochazeniHlava",0.142,"Cow_idle_paseniPopochazeni"};
			ConnectTo[] = {"Cow_idle_postavaniRozhliziSe",0.02,"Cow_idle_postavaniSklaniSe",0.02,"Cow_idle_postavaniTOpaseni",0.02};
			InterpolateTo[] = {"Cow_Stop",0.02,"Cow_Die",0.02};
		};
		class Cow_idle_postavaniRozhliziSe: Cow_idle_paseni
		{
			file = "\Ca\animals2\Cow\data\anim\krava_idle_postavaniRozhliziSe.rtm";
			ConnectTo[] = {"Cow_postavani",0.02,"Cow_idle_postavaniSklaniSe",0.02,"Cow_idle_postavaniTOpaseni",0.02};
			InterpolateTo[] = {"Cow_Stop",0.02,"Cow_Die",0.02};
		};
		class Cow_idle_paseniZvedneHlavu: Cow_idle_paseni
		{
			file = "\Ca\animals2\Cow\data\anim\krava_idle_paseniZvedneHlavu.rtm";
			speed = 0.099668;
			ConnectTo[] = {"Cow_idle_paseni",0.02,"Cow_idle_paseniPopochazeni",0.02,"Cow_idle_paseniPopochazeniHlava",0.02,"Cow_idle_paseniTOpostavani_idletrans",0.02};
			InterpolateTo[] = {"Cow_idle_paseniTOpostavani",0.02,"Cow_Die",0.02};
		};
		class Cow_idle_paseniTOpostavani: Cow_idle_paseni
		{
			file = "\Ca\animals2\Cow\data\anim\krava_idle_paseniTOpostavani.rtm";
			speed = 0.6;
			looped = 0;
			ConnectTo[] = {"Cow_Stop",0.02};
			InterpolateTo[] = {"Cow_Die",0.02};
		};
		class Cow_idle_paseniTOpostavani_idletrans: Cow_idle_paseniTOpostavani
		{
			ConnectTo[] = {"Cow_postavani",0.02,"Cow_idle_postavaniRozhliziSe",0.02,"Cow_idle_postavaniSklaniSe",0.02};
			InterpolateTo[] = {"Cow_Die",0.02};
		};
		class Cow_idle_paseniPopochazeniHlava: Cow_idle_paseni
		{
			file = "\Ca\animals2\Cow\data\anim\krava_idle_paseniPopochazeniHlava.rtm";
			ConnectTo[] = {"Cow_idle_paseniZvedneHlavu",0.02,"Cow_idle_paseni",0.02,"Cow_idle_paseniPopochazeni",0.02,"Cow_idle_paseniTOpostavani_idletrans",0.02};
			InterpolateTo[] = {"Cow_idle_paseniTOpostavani",0.02,"Cow_Die",0.02};
		};
		class Cow_idle_paseniPopochazeni: Cow_idle_paseni
		{
			file = "\Ca\animals2\Cow\data\anim\krava_idle_paseniPopochazeni.rtm";
			speed = 0.099668;
			ConnectTo[] = {"Cow_idle_paseniZvedneHlavu",0.02,"Cow_idle_paseni",0.02,"Cow_idle_paseniPopochazeniHlava",0.02,"Cow_idle_paseniTOpostavani_idletrans",0.02};
			InterpolateTo[] = {"Cow_idle_paseniTOpostavani",0.02,"Cow_Die",0.02};
		};
		class Cow_TurnL: Cow_Stop
		{
			file = "\Ca\animals2\Cow\data\anim\krava_otocka90_L.rtm";
			speed = 0.5;
			ConnectTo[] = {};
			InterpolateTo[] = {"Cow_Stop",0.02};
		};
		class Cow_TurnR: Cow_TurnL
		{
			file = "\Ca\animals2\Cow\data\anim\krava_otocka90_P.rtm";
			ConnectTo[] = {};
			InterpolateTo[] = {"Cow_Stop",0.02};
			speed = 0.5;
		};
		class Cow_Edle: Cow_Stop
		{
			file = "\CA\animals2\Cow\data\Anim\cowIdle";
			speed = 1.0;
			ConnectTo[] = {};
			InterpolateTo[] = {"Cow_Die",0.02};
		};
		class Cow_Eat_Out: Cow_Stop
		{
			file = "\CA\animals2\Cow\data\Anim\NcowEatOut";
			looped = 0;
			speed = 0.7;
			duty = 0.0;
			ConnectTo[] = {"Cow_Stop",0.1};
			InterpolateTo[] = {"Cow_Die",0.02};
		};
		class Cow_Eat_Stop: Cow_Stop
		{
			file = "\CA\animals2\Cow\data\Anim\cowEatStop";
			collisionShape = "ca\animals2\cow\cow_CollShapeEat.p3d";
			ConnectTo[] = {"Cow_Eat_IdleA",0.1,"Cow_Eat_IdleC",0.1,"Cow_Eat_IdleB",0.1,"Cow_Eat_Out",0.1};
			InterpolateTo[] = {"Cow_Die",0.02};
		};
		class Cow_Eat_IdleA: Cow_Eat_Stop
		{
			file = "\CA\animals2\Cow\data\Anim\cowEatIdleA";
			speed = 0.5;
			ConnectTo[] = {};
			InterpolateTo[] = {"Cow_Die",0.02,"Cow_Eat_Stop",0.1};
		};
		class Cow_Eat_IdleB: Cow_Eat_IdleA
		{
			file = "\CA\animals2\Cow\data\Anim\cowEatIdleB";
			ConnectTo[] = {};
			InterpolateTo[] = {"Cow_Die",0.02,"Cow_Eat_Stop",0.1};
		};
		class Cow_Eat_IdleC: Cow_Eat_IdleA
		{
			file = "\CA\animals2\Cow\data\Anim\cowEatIdleC";
			ConnectTo[] = {};
			InterpolateTo[] = {"Cow_Die",0.02,"Cow_Eat_Stop",0.1};
		};
		class Cow_Eat_In: Cow_Eat_Stop
		{
			file = "\CA\animals2\Cow\data\Anim\NcowEatIn";
			looped = 0;
			speed = 0.7;
			duty = 0.0;
			ConnectTo[] = {"Cow_Eat_Stop",0.1};
			InterpolateTo[] = {"Cow_Die",0.02};
		};
		class Cow_Walk: Cow_Stop
		{
			file = "\CA\animals2\Cow\data\Anim\krava_chuze_loop";
			speed = 1.034483;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.1;
			duty = 0.5;
			ConnectTo[] = {};
			InterpolateTo[] = {"Cow_Stop",0.1,"Cow_Die",0.05,"Cow_Run",0.1};
		};
		class Cow_Run: Cow_Stop
		{
			file = "\Ca\animals2\Cow\data\anim\krava_beh_loop.rtm";
			speed = 1.875;
			looped = 1;
			duty = 1.0;
			ConnectTo[] = {};
			InterpolateTo[] = {"Cow_Stop",0.1,"Cow_Walk",0.1,"Cow_Die",0.02};
		};
		class Cow_Die: DefaultDie
		{
			actions = "NoActions";
			file = "\CA\animals2\Cow\data\Anim\cowDeath";
			speed = 0.84;
			looped = 0;
			variantsPlayer[] = {};
			variantsAI[] = {""};
			variantAfter[] = {0,0,0};
			terminal = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
	};
	class Actions
	{
		class NoActions: ManActions
		{
			turnSpeed = 15;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = 0;
		};
		class CowActions: NoActions
		{
			Stop = "Cow_Stop";
			StopRelaxed = "Cow_postavani";
			TurnL = "Cow_TurnL";
			TurnR = "Cow_TurnR";
			TurnLRelaxed = "Cow_TurnL";
			TurnRRelaxed = "Cow_TurnR";
			Default = "Cow_Stop";
			JumpOff = "Cow_Stop";
			WalkF = "Cow_Walk";
			SlowF = "Cow_Walk";
			FastF = "Cow_Run";
			EvasiveForward = "Cow_Run";
			Down = "Cow_Stop";
			Up = "Cow_Stop";
			PlayerStand = "Cow_Stop";
			PlayerCrouch = "Cow_idle_paseni";
			PlayerProne = "Cow_Stop";
			Lying = "Cow_Stop";
			Stand = "Cow_Stop";
			Combat = "Cow_Stop";
			Crouch = "Cow_Stop";
			CanNotMove = "Cow_Stop";
			Civil = "Cow_Stop";
			CivilLying = "Cow_Stop";
			FireNotPossible = "Cow_Stop";
			Die = "Cow_Die";
			LookAround = "";
			turnSpeed = 1;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = "ManPosNoWeapon";
			StartSwim = "Cow_Stop";
		};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"head",1};
		headDefault[] = {"head",1,"neck1",1,"neck",0.8,"Spine2",0.2};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
};
class CfgMovesDog: CfgMovesAnimalsBase
{
	primaryActionMaps[] = {"DogActions","NoActions"};
	skeletonName = "DogSkeleton";
	class States
	{
		class Dog_Stop: StandBase
		{
			actions = "DogActions";
			duty = -1;
			file = "\CA\animals2\dogs\data\Anim\dogStop";
			variantsAI[] = {"Dog_Stop",0.3,"Dog_StopV1",0.3,"Dog_StopV2",0.4};
			variantAfter[] = {0,2,3};
			speed = 1e+010;
			relSpeedMin = 0.7;
			relSpeedMax = 1.1;
			looped = 1;
			collisionShape = "Ca\animals2\Dogs\Dog_CollShape.p3d";
			ConnectTo[] = {"Dog_TurnR",0.1,"Dog_StopV2",0.1,"Dog_StopV1",0.1,"Dog_TurnL",0.1,"Dog_Sprint",0.02,"Dog_Run",0.02,"Dog_Walk",0.2,"Dog_Sit1",0.1};
			InterpolateTo[] = {"Dog_TurnR",0.1,"Dog_Die",0.02,"Dog_TurnL",0.1,"Dog_Sprint",0.02,"Dog_Run",0.02,"Dog_Walk",0.2};
		};
		class Dog_TurnL: Dog_Stop
		{
			file = "\CA\animals2\Dogs\data\anim\dog_rotateL.rtm";
			speed = 1;
			ConnectTo[] = {"Dog_Stop",0.1};
			InterpolateTo[] = {"Dog_Stop",0.1};
		};
		class Dog_TurnR: Dog_TurnL
		{
			file = "\CA\animals2\Dogs\data\anim\dog_rotateR.rtm";
			ConnectTo[] = {"Dog_Stop",0.1};
			InterpolateTo[] = {"Dog_Stop",0.1};
		};
		class Dog_StopV1: Dog_Stop
		{
			file = "\CA\animals2\dogs\data\Anim\dogIDLE";
			speed = 2.14;
			variantAfter[] = {5,7,10};
			looped = 0;
			ConnectTo[] = {"Dog_Stop",0.1};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_StopV2: Dog_Stop
		{
			file = "\CA\animals2\dogs\data\Anim\dogBark";
			speed = 1;
			variantAfter[] = {1,1,1};
			looped = 0;
			ConnectTo[] = {"Dog_Stop",0.1};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_Sit1: Dog_Stop
		{
			actions = "DogSit";
			file = "\CA\animals2\dogs\data\Anim\dogSit1In";
			speed = 1.43;
			variantAfter[] = {1,1,1};
			looped = 0;
			relSpeedMin = 0.996672;
			relSpeedMax = 0.996672;
			ConnectTo[] = {"Dog_Siting",0.0};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_Siting: Dog_Stop
		{
			actions = "DogSit";
			file = "\CA\animals2\dogs\data\Anim\dogSit2Idle";
			speed = 1.58;
			variantAfter[] = {1,1,1};
			looped = 1;
			ConnectTo[] = {"Dog_Sit3",0.1};
			InterpolateTo[] = {"Dog_Die",0.02,"Dog_Sit3",0.1};
		};
		class Dog_Sit3: Dog_Stop
		{
			actions = "DogSit";
			file = "\CA\animals2\dogs\data\Anim\dogSit3Out";
			speed = 1.08;
			variantAfter[] = {1,1,1};
			looped = 0;
			relSpeedMin = 0.996672;
			relSpeedMax = 0.996672;
			ConnectTo[] = {"Dog_Stop",0.1};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_Sprint: Dog_Stop
		{
			actions = "DogSprint";
			file = "\CA\animals2\dogs\data\Anim\dogSprint";
			duty = 0.5;
			speed = 4.5;
			ConnectTo[] = {"Dog_Stop",0.02,"Dog_Run",0.02,"Dog_Walk",0.2};
			InterpolateTo[] = {"Dog_Die",0.02,"Dog_Stop",0.02,"Dog_Run",0.02,"Dog_Walk",0.2};
		};
		class Dog_Run: Dog_Stop
		{
			file = "\CA\animals2\dogs\data\Anim\dogRun";
			duty = -0.5;
			speed = 1.8;
			ConnectTo[] = {"Dog_Stop",0.02,"Dog_Sprint",0.02,"Dog_Walk",0.2};
			InterpolateTo[] = {"Dog_Die",0.02,"Dog_Stop",0.02,"Dog_Sprint",0.02,"Dog_Walk",0.2};
		};
		class Dog_Walk: Dog_Stop
		{
			duty = -0.7;
			file = "\CA\animals2\dogs\data\Anim\dogWalk";
			speed = 1.0;
			variantAfter[] = {3,10,20};
			ConnectTo[] = {"Dog_Stop",0.2,"Dog_Sprint",0.2,"Dog_Run",0.2};
			InterpolateTo[] = {"Dog_Die",0.02,"Dog_Stop",0.2,"Dog_Sprint",0.2,"Dog_Run",0.2};
		};
		class Dog_Die: DefaultDie
		{
			enableDirectControl = 0;
			actions = "NoActions";
			file = "\CA\animals2\dogs\data\Anim\dogDeath";
			speed = 1.2;
			looped = 0;
			variantsPlayer[] = {};
			variantsAI[] = {""};
			variantAfter[] = {0,0,0};
			terminal = 1;
			soundEnabled = 0;
			collisionShape = "Ca\animals2\Dogs\Dog_CollShape.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
	};
	class Actions
	{
		class NoActions: ManActions
		{
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = 0;
		};
		class DogActions: NoActions
		{
			Stop = "Dog_Stop";
			StopRelaxed = "Dog_Stop";
			TurnL = "Dog_TurnL";
			TurnR = "Dog_TurnR";
			TurnLRelaxed = "Dog_TurnL";
			TurnRRelaxed = "Dog_TurnR";
			Default = "Dog_Stop";
			JumpOff = "Dog_Stop";
			WalkF = "Dog_Walk";
			SlowF = "Dog_Run";
			FastF = "Dog_Sprint";
			EvasiveForward = "Dog_Sprint";
			Down = "Dog_Stop";
			Up = "Dog_Stop";
			PlayerStand = "Dog_Stop";
			PlayerProne = "Dog_Stop";
			PlayerCrouch = "Dog_Siting";
			Crouch = "Dog_Siting";
			Lying = "Dog_Stop";
			Stand = "Dog_Stop";
			Combat = "Dog_Stop";
			CanNotMove = "Dog_Stop";
			Civil = "Dog_Stop";
			CivilLying = "Dog_Stop";
			FireNotPossible = "Dog_StopV1";
			Die = "Dog_Die";
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = "ManPosNoWeapon";
			StartSwim = "Dog_Die";
		};
		class DogSprint: DogActions
		{
			Die = "Dog_Die";
			turnSpeed = 4;
			limitFast = 5.5;
			useFastMove = 1;
		};
		class DogSit: NoActions
		{
			Up = "Dog_Stop";
			PlayerStand = "Dog_Stop";
			Stand = "Dog_Stop";
			WalkF = "Dog_Walk";
			SlowF = "Dog_Run";
			FastF = "Dog_Sprint";
			EvasiveForward = "Dog_Sprint";
			PlayerCrouch = "Dog_Stop";
			Crouch = "Dog_Stop";
			Die = "Dog_Die";
			upDegree = "ManPosNoWeapon";
			StartSwim = "Dog_Die";
		};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"head",1,"Jaw",1,"Neck1",0.5,"Tongue1",1,"Tongue2",1};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {"head",1,"Jaw",1,"Neck1",0.5,"Tongue1",1,"Tongue2",1};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
};
class CfgMovesGoat: CfgMovesAnimalsBase
{
	primaryActionMaps[] = {"GoatActions","NoActions"};
	skeletonName = "GoatSkeleton";
	class States
	{
		class Goat_Stop: StandBase
		{
			actions = "GoatActions";
			duty = -1;
			enableDirectControl = 0;
			file = "\CA\animals2\goat\data\Anim\goat_stop.rtm";
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			speed = 1e+010;
			relSpeedMin = 0.7;
			relSpeedMax = 1.1;
			looped = 1;
			soundEnabled = 0;
			enableBinocular = 0;
			collisionShape = "Ca\animals2\Goat\goat_CollShape.p3d";
			legs = "legsDefault";
			ConnectTo[] = {"Goat_TurnL",0.1,"Goat_TurnR",0.1};
			InterpolateTo[] = {"Goat_TurnL",0.1,"Goat_TurnR",0.1,"Goat_Sprint",0.2,"Goat_Walk",0.2,"Goat_Die",0.1};
		};
		class Goat_TurnL: Goat_Stop
		{
			file = "\CA\animals2\Goat\data\Anim\Goat_rotateL.rtm";
			speed = 1;
			enableBinocular = 0;
			ConnectTo[] = {"Goat_Stop",0.1};
			InterpolateTo[] = {"Goat_Stop",0.1};
		};
		class Goat_TurnR: Goat_TurnL
		{
			file = "\CA\animals2\Goat\data\Anim\Goat_rotateR.rtm";
			enableBinocular = 0;
			ConnectTo[] = {"Goat_Stop",0.1};
			InterpolateTo[] = {"Goat_Stop",0.1};
		};
		class Goat_Walk: Goat_Stop
		{
			duty = -0.7;
			file = "\CA\animals2\goat\data\Anim\goatWalk";
			variantAfter[] = {3,10,20};
			speed = 0.5;
			enableBinocular = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"Goat_Stop",0.2,"Goat_Sprint",0.2,"Goat_Die",0.1};
		};
		class Goat_Sprint: Goat_Walk
		{
			speed = 1.2;
			enableBinocular = 0;
			actions = "GoatActions_Sprint";
			ConnectTo[] = {};
			InterpolateTo[] = {"Goat_Stop",0.2,"Goat_Walk",0.2,"Goat_Die",0.1};
		};
		class Goat_Die: DefaultDie
		{
			actions = "NoActions";
			file = "\CA\animals2\goat\data\Anim\goatDeath";
			speed = 0.625;
			looped = 0;
			variantsPlayer[] = {};
			variantsAI[] = {""};
			variantAfter[] = {0,0,0};
			terminal = 1;
			soundEnabled = 0;
			collisionShape = "Ca\animals2\Goat\goat_CollShape.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
	};
	class Actions
	{
		class NoActions: ManActions
		{
			turnSpeed = 3;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = 0;
		};
		class GoatActions: NoActions
		{
			Stop = "Goat_Stop";
			StopRelaxed = "Goat_Stop";
			TurnL = "Goat_TurnL";
			TurnR = "Goat_TurnR";
			TurnLRelaxed = "Goat_TurnL";
			TurnRRelaxed = "Goat_TurnR";
			Default = "Goat_Stop";
			JumpOff = "Goat_Stop";
			WalkF = "Goat_Walk";
			SlowF = "Goat_Walk";
			FastF = "Goat_Sprint";
			EvasiveForward = "Goat_Sprint";
			Down = "Goat_Stop";
			Up = "Goat_Stop";
			PlayerStand = "Goat_Stop";
			PlayerCrouch = "Goat_Stop";
			PlayerProne = "Goat_Stop";
			Lying = "Goat_Stop";
			Stand = "Goat_Stop";
			Combat = "Goat_Stop";
			Crouch = "Goat_Stop";
			CanNotMove = "Goat_Stop";
			Civil = "Goat_Stop";
			CivilLying = "Goat_Stop";
			FireNotPossible = "Goat_Stop";
			Die = "Goat_Die";
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = "ManPosNoWeapon";
			StartSwim = "Goat_Die";
		};
		class GoatActions_Sprint: GoatActions
		{
			useFastMove = 1;
		};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"head",1,"HeadEnd",1,"Neck2",1,"Neck1",0.6,"Neck",0.2};
		headDefault[] = {"head",1,"neck2",1,"neck1",0.6,"Spine2",0.2};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
};
class CfgMovesRabbit: CfgMovesAnimalsBase
{
	primaryActionMaps[] = {"RabbitActions","NoActions"};
	skeletonName = "RabbitSkeleton";
	class States
	{
		class Rabbit_Stop: StandBase
		{
			file = "\CA\animals2\Rabbit\data\Anim\rabbit_basicIdle";
			duty = -1;
			variantsAI[] = {"Rabbit_Stop",0.5,"Rabbit_StopV1",0.3,"Rabbit_Hop",0.2};
			speed = 1e+010;
			relSpeedMin = 1.0;
			relSpeedMax = 1.0;
			actions = "RabbitActions";
			soundEnabled = 0;
			collisionShape = "Ca\animals2\Rabbit\Rabbit_CollShape.p3d";
			ConnectTo[] = {"Rabbit_StopV1",0.1};
			InterpolateTo[] = {"Rabbit_Die3",0.1,"Rabbit_Hop",0.1,"Rabbit_Run",0.1,"Rabbit_Sprint",0.1};
		};
		class Rabbit_StopV1: Rabbit_Stop
		{
			file = "\CA\animals2\Rabbit\data\Anim\rabbit_idleLookAround";
			speed = 0.25;
			equivalentTo = "Rabbit_Stop";
			actions = "RabbitActions_idle";
			looped = 0;
			ConnectTo[] = {"Rabbit_Stop",0.1};
			InterpolateTo[] = {"Rabbit_Die1",0.1,"Rabbit_Stop",0.1};
		};
		class Rabbit_Hop: Rabbit_Stop
		{
			file = "\CA\animals2\Rabbit\data\Anim\rabbit_hop";
			duty = -0.7;
			speed = 5.0;
			ConnectTo[] = {};
			InterpolateTo[] = {"Rabbit_Die2",0.1,"Rabbit_Stop",0.1,"Rabbit_Run",0.1,"Rabbit_Sprint",0.1};
		};
		class Rabbit_Run: Rabbit_Stop
		{
			file = "\CA\animals2\Rabbit\data\Anim\rabbit_run";
			duty = 0.5;
			relSpeedMin = 0.333;
			relSpeedMax = 1.0;
			speed = 8.0;
			ConnectTo[] = {};
			InterpolateTo[] = {"Rabbit_Hop",0.1,"Rabbit_Stop",0.1,"Rabbit_Sprint",0.1,"Rabbit_Die",0.1};
		};
		class Rabbit_Sprint: Rabbit_Stop
		{
			file = "\CA\animals2\Rabbit\data\Anim\rabbit_run";
			duty = 0.6;
			relSpeedMin = 0.33777;
			relSpeedMax = 1.0;
			speed = 18.0;
			actions = "RabbitActions_Sprint";
			ConnectTo[] = {};
			InterpolateTo[] = {"Rabbit_Hop",0.1,"Rabbit_Stop",0.1,"Rabbit_Run",0.1,"Rabbit_Die",0.1};
		};
		class Rabbit_Die: DefaultDie
		{
			actions = "NoActions";
			file = "\CA\animals2\Rabbit\data\Anim\rabbit_death";
			speed = 1.4;
			looped = 0;
			variantsPlayer[] = {};
			variantsAI[] = {"Rabbit_Die",0.25,"Rabbit_Die1",0.25,"Rabbit_Die2",0.25,"Rabbit_Die3",0.25};
			variantAfter[] = {0,0,0};
			terminal = 1;
			soundOverride = "";
			soundEnabled = 0;
			collisionShape = "Ca\animals2\Rabbit\Rabbit_CollShape.p3d";
			ConnectTo[] = {"Rabbit_Death",0.1};
			InterpolateTo[] = {};
		};
		class Rabbit_Die1: Rabbit_Die
		{
			file = "\CA\animals2\Rabbit\data\Anim\rabbit_death1";
			soundOverride = "";
			terminal = 1;
			soundEnabled = 0;
			ConnectTo[] = {"Rabbit_Death",0.1};
			InterpolateTo[] = {};
		};
		class Rabbit_Die2: Rabbit_Die
		{
			file = "\CA\animals2\Rabbit\data\Anim\rabbit_death2";
			soundOverride = "";
			soundEnabled = 0;
			ConnectTo[] = {"Rabbit_Death",0.1};
			InterpolateTo[] = {};
		};
		class Rabbit_Die3: Rabbit_Die
		{
			file = "\CA\animals2\Rabbit\data\Anim\rabbit_death3";
			soundOverride = "";
			soundEnabled = 0;
			ConnectTo[] = {"Rabbit_Death",0.1};
			InterpolateTo[] = {};
		};
		class Rabbit_Death: Rabbit_Die3
		{
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
	};
	class Actions
	{
		class NoActions: ManActions
		{
			turnSpeed = 15;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = 0;
		};
		class RabbitActions: NoActions
		{
			Stop = "Rabbit_Stop";
			StopRelaxed = "Rabbit_Stop";
			TurnL = "Rabbit_Stop";
			TurnR = "Rabbit_Stop";
			TurnLRelaxed = "Rabbit_Stop";
			TurnRRelaxed = "Rabbit_Stop";
			Default = "Rabbit_Stop";
			JumpOff = "Rabbit_Stop";
			WalkF = "Rabbit_Hop";
			SlowF = "Rabbit_Run";
			FastF = "Rabbit_Sprint";
			EvasiveForward = "Rabbit_Sprint";
			Down = "Rabbit_Stop";
			Up = "Rabbit_Stop";
			PlayerStand = "Rabbit_Stop";
			PlayerCrouch = "Rabbit_Stop";
			PlayerProne = "Rabbit_Stop";
			Lying = "Rabbit_Stop";
			Stand = "Rabbit_Stop";
			Combat = "Rabbit_Stop";
			Crouch = "Rabbit_Stop";
			CanNotMove = "Rabbit_Stop";
			Civil = "Rabbit_Stop";
			CivilLying = "Rabbit_Stop";
			FireNotPossible = "Rabbit_Stop";
			Die = "Rabbit_Death";
			LookAround = "rabbit_stopV1";
			turnSpeed = 5;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = "ManPosNoWeapon";
			StartSwim = "Rabbit_Death";
		};
		class RabbitActions_Sprint: RabbitActions
		{
			usefastmove = 1;
			SlowF = "Rabbit_Run";
			WalkF = "Rabbit_Sprint";
		};
		class RabbitActions_idle: RabbitActions
		{
			Default = "Rabbit_StopV1";
			Stop = "Rabbit_StopV1";
			StopRelaxed = "Rabbit_StopV1";
			TurnL = "Rabbit_Stop";
			TurnR = "Rabbit_Stop";
			TurnLRelaxed = "Rabbit_Stop";
			TurnRRelaxed = "Rabbit_Stop";
		};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"head",1,"leftEar",1,"rightEar",1,"Neck",0.5};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {"head",1,"leftEar",1,"rightEar",1,"Neck",0.5};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
};
class CfgMovesSheep: CfgMovesAnimalsBase
{
	primaryActionMaps[] = {"SheepActions","NoActions"};
	skeletonName = "SheepSkeleton";
	class States
	{
		class Sheep_Stop: StandBase
		{
			duty = -1;
			file = "\CA\animals2\sheep\data\Anim\sheep_stop";
			actions = "SheepActions";
			speed = 1e+010;
			soundEnabled = 0;
			collisionShape = "Ca\animals2\Sheep\Sheep_CollShape.p3d";
			ConnectTo[] = {"Sheep_TurnL",0.1,"Sheep_TurnR",0.1};
			InterpolateTo[] = {"Sheep_Run",0.1,"Sheep_TurnL",0.1,"Sheep_TurnR",0.1,"Sheep_Walk",0.1,"Sheep_Eat",0.1,"Sheep_Die",0.1};
		};
		class Sheep_TurnL: Sheep_Stop
		{
			file = "\CA\animals2\Sheep\data\Anim\Sheep_rotateL.rtm";
			speed = 1;
			soundEnabled = 0;
			ConnectTo[] = {"Sheep_Stop",0.1};
			InterpolateTo[] = {"Sheep_Stop",0.1};
		};
		class Sheep_TurnR: Sheep_TurnL
		{
			file = "\CA\animals2\Sheep\data\Anim\Sheep_rotateR.rtm";
			soundEnabled = 0;
			ConnectTo[] = {"Sheep_Stop",0.1};
			InterpolateTo[] = {"Sheep_Stop",0.1};
		};
		class Sheep_Eat: Sheep_Stop
		{
			speed = 0.3;
			file = "\CA\animals2\sheep\data\Anim\sheepEat";
			ConnectTo[] = {};
			InterpolateTo[] = {"Sheep_Run",0.1,"Sheep_Walk",0.1,"Sheep_Stop",0.1,"Sheep_Die",0.1};
		};
		class Sheep_Walk: Sheep_Stop
		{
			actions = "SheepActions";
			duty = -0.7;
			file = "\CA\animals2\sheep\data\Anim\sheepWalk";
			speed = 0.8;
			head = "headDefault";
			soundEnabled = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"Sheep_Run",0.1,"Sheep_Stop",0.1,"Sheep_Eat",0.1,"Sheep_Die",0.1};
		};
		class Sheep_Run: Sheep_Stop
		{
			actions = "SheepActions_run";
			duty = -0.5;
			file = "\CA\animals2\sheep\data\Anim\sheepRun";
			speed = 1.0;
			looped = 1;
			soundEnabled = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"Sheep_Walk",0.1,"Sheep_Stop",0.1,"Sheep_Eat",0.1,"Sheep_Die",0.1};
		};
		class Sheep_Die: DefaultDie
		{
			file = "\CA\animals2\sheep\data\Anim\sheepDeath2";
			speed = 0.666;
			actions = "NoActions";
			looped = 0;
			variantsPlayer[] = {"Sheep_Die",0.5,"Sheep_Die",0.5};
			variantsAI[] = {};
			variantAfter[] = {0,0,0};
			terminal = 1;
			soundEnabled = 0;
			soundOverride = "";
			collisionShape = "Ca\animals2\Sheep\Sheep_CollShape.p3d";
			ConnectTo[] = {"Sheep_Death",0.1};
			InterpolateTo[] = {};
		};
		class Sheep_Death: Sheep_Die
		{
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
	};
	class Actions
	{
		class NoActions: ManActions
		{
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = 0;
		};
		class SheepActions: NoActions
		{
			Stop = "Sheep_Stop";
			StopRelaxed = "Sheep_Stop";
			TurnL = "Sheep_TurnL";
			TurnR = "Sheep_TurnR";
			TurnLRelaxed = "Sheep_TurnL";
			TurnRRelaxed = "Sheep_TurnR";
			Default = "Sheep_Stop";
			JumpOff = "Sheep_Stop";
			WalkF = "Sheep_Eat";
			SlowF = "Sheep_Walk";
			FastF = "Sheep_Run";
			EvasiveForward = "Sheep_Run";
			Down = "Sheep_Stop";
			Up = "Sheep_Stop";
			PlayerStand = "Sheep_Stop";
			PlayerCrouch = "Sheep_Stop";
			PlayerProne = "Sheep_Stop";
			Lying = "Sheep_Stop";
			Stand = "Sheep_Stop";
			Combat = "Sheep_Stop";
			Crouch = "Sheep_Stop";
			CanNotMove = "Sheep_Stop";
			Civil = "Sheep_Stop";
			CivilLying = "Sheep_Stop";
			FireNotPossible = "Sheep_Stop";
			Die = "Sheep_Death";
			Eat = "";
			Rest = "";
			turnSpeed = 1;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = "ManPosNoWeapon";
			StartSwim = "Sheep_Death";
		};
		class SheepActions_run: SheepActions
		{
			useFastMove = 1;
		};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"head",1};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {"head",0.8,"neck2",0.8,"neck1",0.7,"neck",0.5,"headEnd",0.8,"LeftRearEar1",0.8,"LeftRearEar2",0.8,"LeftRearEar3",0.8,"RightRearEar1",0.8,"RightRearEar2",0.8,"RightRearEar3",0.8,"LeftShoulder",0.1,"RightShoulder",0.1,"Spine2",0.2};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
};
class CfgMovesWildBoar: CfgMovesAnimalsBase
{
	primaryActionMaps[] = {"WildBoarActions","NoActions"};
	skeletonName = "WildBoarSkeleton";
	class States
	{
		class WildBoar_Stop: StandBase
		{
			duty = -1;
			actions = "WildBoarActions";
			file = "\CA\animals2\WildBoar\data\Anim\Boar_stop";
			speed = 1e+010;
			soundEnabled = 0;
			collisionShape = "Ca\animals2\WildBoar\WildBoar_CollShape.p3d";
			legs = "legsDefault";
			ConnectTo[] = {"WildBoar_TurnR",0.1,"WildBoar_TurnL",0.1};
			InterpolateTo[] = {"WildBoar_Die",0.1,"WildBoar_TurnR",0.1,"WildBoar_TurnL",0.1,"WildBoar_Eat",0.1,"WildBoar_Walk",0.1,"WildBoar_Run",0.1};
		};
		class WildBoar_TurnL: WildBoar_Stop
		{
			file = "\CA\animals2\WildBoar\data\Anim\boar_rotateL.rtm";
			speed = 1;
			ConnectTo[] = {"WildBoar_Stop",0.1};
			InterpolateTo[] = {"WildBoar_Stop",0.1};
		};
		class WildBoar_TurnR: WildBoar_TurnL
		{
			file = "\CA\animals2\WildBoar\data\Anim\boar_rotateR.rtm";
			ConnectTo[] = {"WildBoar_Stop",0.1};
			InterpolateTo[] = {"WildBoar_Stop",0.1};
		};
		class WildBoar_Eat: WildBoar_Stop
		{
			speed = 0.3;
			file = "\CA\animals2\WildBoar\data\Anim\BoarEat";
			ConnectTo[] = {};
			InterpolateTo[] = {"WildBoar_Stop",0.1,"WildBoar_Walk",0.1,"WildBoar_EatDie",0.1};
		};
		class WildBoar_Walk: WildBoar_Stop
		{
			actions = "WildBoarActions";
			duty = -0.7;
			file = "\CA\animals2\WildBoar\data\Anim\BoarWalk";
			speed = 1.5;
			head = "headDefault";
			soundEnabled = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"WildBoar_Die",0.1,"WildBoar_Stop",0.1,"WildBoar_Eat",0.1,"WildBoar_Run",0.05};
		};
		class WildBoar_Run: WildBoar_Stop
		{
			actions = "WildBoarRunActions";
			duty = -0.5;
			file = "\CA\animals2\WildBoar\data\Anim\BoarRunning";
			speed = 3.0;
			looped = 1;
			soundEnabled = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"WildBoar_Stop",0.1,"WildBoar_RunningDie",0.1,"WildBoar_Walk",0.05};
		};
		class WildBoar_Die: DefaultDie
		{
			file = "\CA\animals2\WildBoar\data\Anim\BoarWalkDeath";
			speed = 1;
			actions = "NoActions";
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			collisionShape = "Ca\animals2\WildBoar\WildBoar_CollShape.p3d";
			ConnectTo[] = {"WildBoar_Death",0.1};
			InterpolateTo[] = {};
		};
		class WildBoar_Death: WildBoar_Die
		{
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		class WildBoar_RunningDie: WildBoar_Die
		{
			file = "\CA\animals2\WildBoar\data\Anim\BoarRunningDeath.rtm";
			speed = 1;
			ConnectTo[] = {"WildBoar_Death",0.1};
			InterpolateTo[] = {};
		};
		class WildBoar_EatDie: WildBoar_Die
		{
			file = "\CA\animals2\WildBoar\data\Anim\BoarEatDeath.rtm";
			speed = 0.26;
			ConnectTo[] = {"WildBoar_Death",0.1};
			InterpolateTo[] = {};
		};
	};
	class Actions
	{
		class NoActions: ManActions
		{
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = 0;
		};
		class WildBoarActions: NoActions
		{
			Stop = "WildBoar_Stop";
			StopRelaxed = "WildBoar_Stop";
			TurnL = "WildBoar_TurnL";
			TurnR = "WildBoar_TurnR";
			TurnLRelaxed = "WildBoar_TurnL";
			TurnRRelaxed = "WildBoar_TurnR";
			Default = "WildBoar_Stop";
			JumpOff = "WildBoar_Stop";
			WalkF = "WildBoar_Eat";
			SlowF = "WildBoar_Walk";
			FastF = "WildBoar_Run";
			EvasiveForward = "WildBoar_Run";
			Down = "WildBoar_Stop";
			Up = "WildBoar_Stop";
			PlayerStand = "WildBoar_Stop";
			PlayerCrouch = "WildBoar_Stop";
			PlayerProne = "WildBoar_Stop";
			Lying = "WildBoar_Stop";
			Stand = "WildBoar_Stop";
			Combat = "WildBoar_Stop";
			Crouch = "WildBoar_Stop";
			CanNotMove = "WildBoar_Stop";
			Civil = "WildBoar_Stop";
			CivilLying = "WildBoar_Stop";
			FireNotPossible = "WildBoar_Stop";
			Die = "WildBoar_Death";
			Eat = "";
			Rest = "";
			turnSpeed = 4;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = "ManPosNoWeapon";
			StartSwim = "WildBoar_Death";
		};
		class WildBoarRunActions: WildBoarActions
		{
			useFastMove = 1;
		};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"head",1};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {"head",0.8,"neck2",0.8,"neck1",0.7,"neck",0.5,"headEnd",0.8,"LeftRearEar1",0.8,"LeftRearEar2",0.8,"LeftRearEar3",0.8,"RightRearEar1",0.8,"RightRearEar2",0.8,"RightRearEar3",0.8,"LeftShoulder",0.1,"RightShoulder",0.1,"Spine2",0.2};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
};

class CfgVehicles
{
	class CAAnimalBase;
	class WildBoar: CAAnimalBase
	{
		scope = 2;
		model = "\ca\animals2\WildBoar\WildBoar";
		displayName = "Wildabeast";
		moves = "CfgMovesWildBoar";
		wildAnimal = 1;
		humansDetectionRadius = 100;
		runDistanceMax = 10;
		minIdleTime = 10;
		maxIdleTime = 20;
		favouritezones = "(forest) * (1 - houses) * (1 - meadow) * (1 - sea)";
		class VariablesString
		{
			_sound1 = "";
			_sound2 = "";
			_sound3 = "";
		};
	};
	class Cow: CAAnimalBase
	{
		scope = 0;
		model = "\ca\animals2\cow\cow";
		displayName = "Moo Cow";
		moves = "CfgMovesCow";
		maxTurnAngularVelocity = 30;
		costTurnCoef = 1e-005;
		boneHead = "head";
		bonePrimaryWeapon = "head";
		weaponBone = "head";
		triggerAnim = "";
		wildAnimal = 0;
		humansDetectionRadius = 2;
		runDistanceMax = 10;
		minIdleTime = 20;
		maxIdleTime = 40;
		idleSpecialAnim = "";
		favouritezones = "(meadow) * (1 - forest) * (1 - houses) * (1 - sea)";
		extCameraPosition[] = {0,0.75,-3.0};
		hiddenSelections[] = {"Camo"};
		class VariablesString
		{
			_sound1 = "cow_01";
			_sound2 = "cow_02";
			_sound3 = "cow_03";
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\animals2\Cow\data\Cow.rvmat","Ca\animals2\Cow\data\W1_Cow.rvmat","Ca\animals2\Cow\data\W2_Cow.rvmat"};
		};
	};
	class Cow01: Cow
	{
		scope = 2;
		accuracy = 1000;
		model = "\ca\animals2\cow\cow";
		displayName = "Claribelle Mooer";
		hiddenSelectionsTextures[] = {"ca\animals2\cow\data\cow_co.PAA"};
	};
	class Cow02: Cow01
	{
		displayName = "Black 'Angus' Beaf";
		hiddenSelectionsTextures[] = {"ca\animals2\cow\data\cow2_co.PAA"};
	};
	class Cow03: Cow01
	{
		displayName = "Daisy 'Got Dem' Dukes";
		hiddenSelectionsTextures[] = {"ca\animals2\cow\data\cow3_co.PAA"};
	};
	class Cow04: Cow01
	{
		displayName = "Missy";
		hiddenSelectionsTextures[] = {"ca\animals2\cow\data\cow4_co.PAA"};
	};
};