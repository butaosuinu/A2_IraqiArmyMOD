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
	class bk_IS
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
	class bk_IS
	{
		displayName = "IS(Islamic State)";
		priority = 0;
		side = 0;
	};
	class bk_IS_ind
	{
		displayName = "IS(Islamic State)";
		priority = 0;
		side = 2;
	};
};

class CfgVehicles {
	class Land;
	class LandVehicle;
	class Car;
	class LandRover_SPG9_Base_EP1;
	class LandRover_MG_Base_EP1;
	class LandRover_CZ_EP1;
	class BRDM2_Gue;
	class Ural_Base;
	class HMMWV_M1151_M2_DES_EP1;
	class MTVR_DES_EP1;
	class HMMWV_Avenger_DES_EP1;
	class HMMWV_M1035_DES_EP1;
	class HMMWV_Armored;
	class M1114_DSK_ACR;
	class hilux1_civil_1_open;
	class Offroad_DSHKM_base;

	class BK_IS_M1151_v1 : HMMWV_M1151_M2_DES_EP1
	{
		scope = 2;
		side = 0;
		faction = "bk_IS";
		vehicleclass = "Car";
		crew = "TK_INS_Soldier_EP1";
		typicalcargo[] = {"TK_INS_Soldier_EP1", "TK_INS_Soldier_EP1", "TK_INS_Soldier_EP1"};
		hiddenselections[] = {"camo", "camo1", "camo2", "camo3"};
		hiddenselectionstextures[] = {"ca\wheeled_e\hmmwv\data\hmmwv_body_canvas_1_co.paa", "ca\wheeled_e\hmmwv\data\hmmwv_hood_canvas_co.paa", "ca\wheeled_e\hmmwv\data\hmmwv_regular_1_co.paa", "\bk_IS\data\hmmwv_gpk_tower_IS_co.paa"};
	};
	class BK_IS_M1151_DSK : M1114_DSK_ACR
	{
		scope = 2;
		side = 0;
		faction = "bk_IS";
		crew = "TK_INS_Soldier_EP1";
		typicalcargo[] = {"TK_INS_Soldier_EP1", "TK_INS_Soldier_EP1", "TK_INS_Soldier_EP1"};
		hiddenselections[] = {"camo", "camo1", "camo2", "camo3"};
		hiddenselectionstextures[] = {"ca\wheeled_e\hmmwv\data\hmmwv_body_canvas_1_co.paa", "ca\wheeled_e\hmmwv\data\hmmwv_hood_canvas_co.paa", "ca\wheeled_e\hmmwv\data\hmmwv_regular_1_co.paa", "\bk_IS\data\hmmwv_gpk_tower_IS_co.paa"};
		class TransportMagazines {
			class _xx_30Rnd_556x45_Stanag {
				count = 15;
				magazine = "30Rnd_556x45_Stanag";
			};
			class _xx_30Rnd_762x39_AK47{
				count = 15;
				magazine = "30Rnd_762x39_AK47";
			};
			class _xx_HandGrenade_West {
				count = 2;
				magazine = "HandGrenade_West";
			};
			class _xx_SmokeShellGreen {
				count = 2;
				magazine = "SmokeShellGreen";
			};
			class _xx_SmokeShell {
				count = 2;
				magazine = "SmokeShell";
			};
		};
		class TransportWeapons {
			class _xx_AK_47_M {
				count = 2;
				weapon = "AK_47_M";
			};
		};
	};
	
	class BK_IS_M1114_v1 : HMMWV_Armored
	{
		scope = 2;
		side = 0;
		faction = "bk_IS";
		crew = "TK_INS_Soldier_EP1";
		typicalcargo[] = {"TK_INS_Soldier_EP1", "TK_INS_Soldier_EP1", "TK_INS_Soldier_EP1", "TK_INS_Soldier_EP1"};
		hiddenselections[] = {"Camo1", "Camo2"};
		hiddenselectionstextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa", "\ca\wheeled\hmmwv\data\hmmwv_parts_1_ca.paa"};
	};
	class BK_IS_hilux1_unarmed_1 : hilux1_civil_1_open{
		scope = 2;
		side = 0;
		displayname = "Toyota Hilux 1(unarmed)";
		faction = "bk_IS";
		crew = "TK_INS_Soldier_EP1";
		typicalcargo[] = {"TK_INS_Soldier_EP1"};
		hiddenselectionstextures[] = {"\ca\wheeled\data\coyota_trup3.paa"};
	}
	class BK_IS_hilux1_unarmed_2 : hilux1_civil_1_open{
		scope = 2;
		side = 0;
		displayname = "Toyota Hilux 2(unarmed)";
		faction = "bk_IS";
		crew = "TK_INS_Soldier_EP1";
		typicalcargo[] = {"TK_INS_Soldier_EP1"};
		hiddenselectionstextures[] = {"\bk_IS\data\coyota_trupISFLAG.paa"};
	}
	class BK_IS_hilux_DSHKM_1 : Offroad_DSHKM_base{
		scope = 2;
		side = 0;
		displayname = "Toyota Hilux 1(DShKM)";
		faction = "bk_IS";
		crew = "TK_INS_Soldier_EP1";
		typicalcargo[] = {"TK_INS_Soldier_EP1"};
		hiddenselectionstextures[] = {"\bk_IS\data\coyota_trupISFLAG.paa"};
	}
	class BK_IS_hilux_DSHKM_2 : Offroad_DSHKM_base{
		scope = 2;
		side = 0;
		displayname = "Toyota Hilux 2(DShKM)";
		faction = "bk_IS";
		crew = "TK_INS_Soldier_EP1";
		typicalcargo[] = {"TK_INS_Soldier_EP1"};
		hiddenselectionstextures[] = {"\ca\wheeled\data\coyota_trup3.paa"};
	}
};
