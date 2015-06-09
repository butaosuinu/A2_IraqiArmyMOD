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
	class bk_iraq_Air
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"CAWeapons","CACharacters2","CAAir_E"};
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

class CfgMagazines{
	class Default;
	class CA_Magazine : Default {};
	class VehicleMagazine : CA_Magazine {};
	class 520Rnd_23mm_GSh23L;
	
	class BK_470Rnd_23mm_Gsh23L : 520Rnd_23mm_GSh23L {
		ace_air_fcs_drop[] = {0, 0.078, 0.326, 0.763, 1.384, 2.291, 3.503, 4.902, 6.788, 8.966, 11.616, 14.901, 18.667, 23.049, 28.161, 33.917, 40.978, 48.59, 57.658, 68.331, 79.884, 93.695, 109.004, 126.798, 146.419, 169.24, 195.344, 224.755, 258.072, 295.507, 338.298, 387.098, 442.748, 506.299, 578.148, 660.062, 754.127, 862.573, 988.416, 1133.79, 1304.58};
		ace_air_fcs_maxrange = 4500;
		ace_air_fcs_time[] = {0, 0.15, 0.29, 0.43, 0.57, 0.74, 0.93, 1.09, 1.29, 1.51, 1.72, 1.96, 2.21, 2.47, 2.75, 3.04, 3.38, 3.69, 4.05, 4.44, 4.84, 5.28, 5.71, 6.2, 6.71, 7.26, 7.86, 8.47, 9.14, 9.82, 10.57, 11.37, 12.23, 13.16, 14.16, 15.21, 16.36, 17.61, 19, 20.53, 22.23};
		ammo = "B_23mm_AA";
		count = 470;
		displayname = "23x152mm OFZT";
		displaynameshort = "HEI-T";
		maxleadspeed = 500;
	};
};
class CfgWeapons{
	class CannonCore;
	class GSh23L;

	class BK_GSh23L_Mi35 : GSh23L{
		magazines[] = {"BK_470Rnd_23mm_Gsh23L"};
	};

};

class CfgVehicles {
	class Air;
	class Helicopter: Air
	{
		class Turrets
		{
			class MainTurret;
		};
		class NewTurret;
		class HitPoints;
		class ViewOptics;
	};
	class Mi24_Base: Helicopter{};
	class Mi24_Base_CDF: Mi24_Base{};
	class UH1H_base;
	class UH1H_TK_GUE_EP1;
	class Mi171Sh_Base_EP1;
	class Mi171Sh_CZ_EP1;
	class Mi171Sh_rockets_CZ_EP1;
	class C130J_US_EP1;
	class Su25_CDF;
	class AH64D_EP1;
	class UH1Y;

	class BK_iraq_C130 : C130J_US_EP1
	{
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_US_pilot";
		typicalcargo[] = {"BK_iraq_US_pilot", "BK_iraq_US_pilot"};
		hiddenselectionstextures[] = {"ca\air2\c130j\data\c130j_body_co.paa", "ca\air_e\c130j\data\c130j_wings_co.paa"};
	};
	
	class BK_iraq_UH1H: UH1H_TK_GUE_EP1 {
		displayName = "UH-1H Iroquois";
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_US_pilot";
		typicalCargo[] = {"BK_iraq_US_pilot"};
		hiddenselections[] = {"Camo1", "Camo2", "Camo_mlod"};
		hiddenselectionstextures[] = {"\bk_iraq_Air\uh1\uh1d_iraq_co.paa", "\bk_iraq_Air\uh1\uh1d_in_iraq_co.paa", "ca\air_E\UH1H\data\default_TKA_co.paa"};
	};

	class BK_iraq_Mi171: Mi171Sh_Base_EP1 {
		displayname = "Mi-171Sh(Rocket)";
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_US_pilot";
		typicalCargo[] = {"BK_iraq_US_pilot","BK_iraq_US_pilot","BK_iraq_US_pilot","BK_iraq_US_pilot"};
		model = "\bk_iraq_Air\Mi_171.p3d";
	};	
	class BK_iraq_Mi171_2: Mi171Sh_CZ_EP1 {
		displayname = "Mi-171Sh";
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_US_pilot";
		typicalCargo[] = {"BK_iraq_US_pilot","BK_iraq_US_pilot","BK_iraq_US_pilot","BK_iraq_US_pilot"};
		model = "\bk_iraq_Air\Mi_171.p3d";
	};	

	class BK_iraq_Mi35 : Mi24_Base_CDF
	{
		accuracy = 1000;
		displayname = "Mi-35M";
		irscanrangemax = 6000;
		irscanrangemin = 300;
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_US_pilot";
		typicalCargo[] = {"BK_iraq_US_pilot","BK_iraq_US_pilot","BK_iraq_US_pilot","BK_iraq_US_pilot"};
		gearretracting = 0;
		hiddenselectionstextures[] = {"\bk_iraq_Air\mi35\mi35m_001_iraq_co.paa", "\bk_iraq_Air\mi35\mi35m_002_iraq_co.paa"};
		model = "\ca\air_E\Mi35\mi24_v.p3d";
		magazines[] = {"40Rnd_80mm", "40Rnd_80mm", "120Rnd_CMFlareMagazine"};
		weapons[] = {"S8Launcher", "S8Launcher", "CMFlareLauncher"};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				ace_sys_missileguidance_limits[] = {20, 20, 0, 0};
				ace_sys_missileguidance_limitson = 1;
				ace_sys_missileguidance_tracker = "BK_GSh23L_Mi35";
				ace_sys_missileguidance_tracklimits[] = {30, 30};
				magazines[] = {"BK_470Rnd_23mm_Gsh23L", "12Rnd_Vikhr_KA50"};
				weapons[] = {"BK_GSh23L_Mi35", "VikhrLauncher"};
				class OpticsIn {
					class Wide {
						gunneropticseffect[] = {"TVOptics", "OpticsBlur2", "OpticsCHAbera2"};
						gunneropticsmodel = "\ca\air\optika_Ka50_gun";
						initanglex = 0;
						initangley = 0;
						initfov = "0.33333/ 3.3";
						maxanglex = 30;
						maxangley = 100;
						maxfov = "0.33333/ 3.3";
						minanglex = -30;
						minangley = -100;
						minfov = "0.33333/ 3.3";
						opticsdisplayname = "W";
						thermalmode[] = {0, 1};
						visionmode[] = {"Normal", "Ti"};
					};
					class Medium: Wide {
						gunneropticsmodel = "\ca\air\optika_Ka50_rocket";
						initfov = "0.33333/ 18";
						maxfov = "0.33333/ 18";
						minfov = "0.33333/ 18";
						opticsdisplayname = "M";
					};
					class Narrow: Wide {
						gunneropticsmodel = "\ca\air\optika_Ka50_rocket";
						initfov = "0.33333/32";
						maxfov = "0.33333/32";
						minfov = "0.33333/32";
						opticsdisplayname = "N";
					};
				};
			};
		};
	};
	class BK_iraq_Su25 : Su25_CDF{
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_US_pilot";
		typicalCargo[] = {"BK_iraq_US_pilot"};
		hiddenselectionstextures[] = {"\bk_iraq_Air\su25\su25_body1_iraq_co.paa", "\bk_iraq_Air\su25\su25_body2_iraq_co.paa"};
	};
	class BK_iraq_AH64E : AH64D_EP1
	{
		displayname = "AH-64E";
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_US_pilot";
		typicalCargo[] = {"BK_iraq_US_pilot"};
	};
	class BK_iraq_Bell412 : UH1Y{
		displayname = "Bell 412";
		scope =2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_US_pilot";
		typicalCargo[] = {"BK_iraq_US_pilot"}; 
	};
};
