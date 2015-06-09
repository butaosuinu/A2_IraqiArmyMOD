#define private		0
#define protected		1
#define public		2

#define true	1
#define false	0

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7


class CfgPatches
{
	class bk_iraq_Armored
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"CAWeapons","CACharacters2","CAAir_E","CA_ACR"};
		version = 0.1;
	};
};
class CfgFactionClasses
{
	class bk_iraq_army
	{
		displayName = "New Iraqi Army";
		priority = 0;
		side = 1;
	};
};

class CfgVehicles {
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
		class HitPoints;
		class ViewOptics;
	};
	class Tank: LandVehicle
	{
		class HitPoints;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics:NewTurret
					{
						class ViewOptics;
					};
				};
			};
		};
		class AnimationSources;
		class ViewOptics: ViewOptics{};
	};
	class M1A1: Tank
	{
		class HitPoints;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics:NewTurret
					{
						class ViewOptics;
					};
				};
			};
		};
		class AnimationSources;
		class ViewOptics: ViewOptics{};
	};
	class T72_Gue;
	class BMP2_Gue;
	class T55_TK_GUE_EP1;

	class M1A1_US_DES_EP1;
	class BVP1_TK_ACR;
	class M113_TK_EP1;
	class M113Ambul_TK_EP1;

	class BK_iraq_M1A1 : M1A1{
		scope = 2;
		side = 1;
		vehicleclass = "Armored";
		faction = "bk_iraq_army";
		crew = "BK_iraq_US_crew";
		model = "ca\Tracked_E\M1_Abrams\M1_abrams";
		hiddenselectionstextures[] = {"\CA\Tracked_E\M1_Abrams\Data\m1abrams_01_desert_co.paa", "\CA\Tracked_E\M1_Abrams\Data\m1abrams_02_desert_co.paa", "\CA\Tracked_E\M1_Abrams\Data\m1abrams_03_desert_co.paa", "\ca\tracked\data\m1abrams_mg_mount_co.paa"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
			discretedistance[] = {600, 800, 1000, 1200, 1400, 1600, 1800, 2000};
			discretedistanceinitindex = 0;
			forcehidegunner = 1;
			gunneraction = "Abrams_Gunner";
			gunnerinaction = "Abrams_Gunner";
			gunneropticseffect[] = {"TankGunnerOptics2", "OpticsBlur1", "OpticsCHAbera1"};
			gunneropticsmodel = "\ca\Weapons\2Dscope_M1gun10.p3d";
			gunneroutopticseffect[] = {};
			initelev = 0;
			magazines[] = {"20Rnd_120mmSABOT_M1A2", "20Rnd_120mmHE_M1A2", "1200Rnd_762x51_M240"};
			maxelev = 20;
			minelev = -9;
			soundservo[] = {"\ca\sounds\vehicles\servos\turret-2", 0.0316228, 1, 30};
			turretinfotype = "RscWeaponRangeZeroing";
			weapons[] = {"M256", "M240BC_veh"};
			class ViewOptics {
				initanglex = 0;
				initangley = 0;
				initfov = 0.2;
				maxanglex = 30;
				maxangley = 100;
				maxfov = 0.2;
				minanglex = -30;
				minangley = -100;
				minfov = 0.025;
			};
			class Turrets: Turrets {
				discretedistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discretedistanceinitindex = 2;
				class CommanderOptics: CommanderOptics {
					gunbeg = "gun_muzzle";
					gunend = "gun_chamber";
					gunneraction = "Abrams_CommanderOut";
					gunnerinaction = "Abrams_Commander";
					gunneropticseffect[] = {"TankCommanderOptics1"};
					gunneropticsmodel = "\ca\Tracked\optika_M1A1_commander";
					ingunnermayfire = 1;
					initelev = 0;
					initturn = 0;
					magazines[] = {"100Rnd_127x99_M2", "100Rnd_127x99_M2", "100Rnd_127x99_M2", "100Rnd_127x99_M2", "100Rnd_127x99_M2", "SmokeLauncherMag", "SmokeLauncherMag"};
					maxelev = 60;
					maxhorizontalrotspeed = 2;
					maxturn = 360;
					maxverticalrotspeed = 2;
					minelev = -25;
					minturn = -360;
					outgunnermayfire = 1;
					soundservo[] = {"\ca\sounds\vehicles\servos\turret-1", 0.01, 1, 30};
					stabilizedinaxes = "StabilizedInAxisY";
					startengine = 0;
					weapons[] = {"M2", "SmokeLauncher"};
					class ViewOptics: ViewOptics {
						initfov = 0.3;
						maxfov = 0.3;
						minfov = 0.015;
					};
				};
			};
			class OpticsIn {
				class Wide {
					gunneropticseffect[] = {};
					gunneropticsmodel = "CA\Tracked_E\gunnerOptics_M1A1";
					initanglex = 0;
					initangley = 0;
					initfov = 0.155;
					maxanglex = 30;
					maxangley = 100;
					maxfov = 0.155;
					minanglex = -30;
					minangley = -100;
					minfov = 0.155;
					thermalmode[] = {2, 3};
					visionmode[] = {"Normal", "Ti"};
					};
					class Narrow: Wide {
						gunneropticsmodel = "CA\Tracked_E\gunnerOptics_M1A1_2";
						initfov = 0.047;
						maxfov = 0.047;
						minfov = 0.047;
					};
				};
			};
		};
	};

	class BK_iraq_M1A1_v2 : M1A1_US_DES_EP1{
		scope = 0;
		side = 1;
		displayName = "M1A1 test";
		faction = "bk_iraq_army";
		crew = "BK_iraq_US_crew";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo6", "n1", "n2", "t1", "t2", "t3_l", "t3_r", "t4", "t5_notusedhere", "clan_sign", "mineprotection", "cmg_thermal", "loader_armour", "loader_tws", "arat1_l", "arat1_r", "csamm", "smk_hc"};
		hiddenselectionstextures[] = {"\CA\Tracked_E\M1_Abrams\Data\m1abrams_01_desert_co.paa", "\CA\Tracked_E\M1_Abrams\Data\m1abrams_02_desert_co.paa", "\CA\Tracked_E\M1_Abrams\Data\m1abrams_03_desert_co.paa", "\ca\tracked\data\m1abrams_mg_mount_co.paa"};
	};

	class BK_iraq_T72 : T72_Gue{
		displayName = "T-72";
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_US_crew";
		typicalCargo[] = {"BK_iraq_US_crew","BK_iraq_US_crew","BK_iraq_US_crew"};
	};
	class BK_iraq_T72_DES : T72_Gue{
		displayName = "T-72(Desert)";
		scope = 1;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_US_crew";
		typicalCargo[] = {"BK_iraq_US_crew","BK_iraq_US_crew","BK_iraq_US_crew"};
	};
	
	class BK_iraq_T55 : T55_TK_GUE_EP1{
		displayName = "T-55";
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		hiddenselections[] = {"Camo1", "Camo2"};
		hiddenselectionstextures[] = {"\bk_iraq_Armored\data\t55_body_iraq_co", "\bk_iraq_Armored\data\t55_tower_iraq_co"};
		crew = "BK_iraq_US_crew";
		typicalCargo[] = {"BK_iraq_US_crew"};
	};

	class BK_iraq_BMP1 : BVP1_TK_ACR
	{
		displayName = "BMP-1";
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		hiddenSelections[] = {"camo1","camo2","brvno"};
		hiddenSelectionsTextures[] = {"\bk_iraq_Armored\data\trup_ext0_iraq_CO.paa","\bk_iraq_Armored\data\veza0_iraq_CO.paa"};
		crew = "BK_iraq_US_crew";
		typicalCargo[] = {"BK_iraq_US_crew"};
	};

	class BK_iraq_M113 : M113_TK_EP1{
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_US_crew";
		typicalCargo[] = {"BK_iraq_US_crew"};
		hiddenselectionstextures[] = {"\bk_iraq_Armored\data\m113a3_01_iraq_co.paa"};
		typicalCargo[] = {"BK_iraq_US_crew"};
	};
	class BK_iraq_M113ambul : M113Ambul_TK_EP1{
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_US_crew";
		typicalCargo[] = {"BK_iraq_US_crew"};
		hiddenselectionstextures[] = {"\bk_iraq_Armored\data\m113a3_01_iraq_co.paa"};
		typicalCargo[] = {"BK_iraq_US_crew"};
	}
};
