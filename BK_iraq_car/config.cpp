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
	class bk_iraq_car
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

	class BK_iraq_MTVR : MTVR_DES_EP1
	{
		scope = 2;
		side = 1;
		vehicleclass = "Car";
		faction = "bk_iraq_army";
		crew = "BK_iraq_commando";
		typicalcargo[] = {"BK_iraq_commando", "BK_iraq_commando", "BK_iraq_commando"};
	};

	class BK_iraq_Avenger : HMMWV_Avenger_DES_EP1
	{
		scope = 2;
		side = 1;
		vehicleclass = "Car";
		faction = "bk_iraq_army";
		crew = "BK_iraq_commando";
		typicalcargo[] = {"BK_iraq_commando", "BK_iraq_commando", "BK_iraq_commando"};
	};

	class BK_iraq_M1035 : HMMWV_M1035_DES_EP1
	{
		scope = 2;
		side = 1;
		vehicleclass = "Car";
		faction = "bk_iraq_army";
		crew = "BK_iraq_commando";
		typicalcargo[] = {"BK_iraq_commando", "BK_iraq_commando", "BK_iraq_commando"};
	};

	class BK_iraq_M1151_v1 : HMMWV_M1151_M2_DES_EP1
	{
		displayName = "M1151 HMMWV (M2)";
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_commando";
		vehicleclass = "Car";
		typicalcargo[] = {"BK_iraq_commando", "BK_iraq_commando", "BK_iraq_commando"};
		hiddenselections[] = {"camo", "camo1", "camo2", "camo3"};
		hiddenselectionstextures[] = {"\bk_iraq_car\data\hmmwv_body_canvas_iraq_co.paa", "\bk_iraq_car\data\hmmwv_hood_canvas_iraq_co.paa", "\bk_iraq_car\data\hmmwv_regular_iraq_co.paa", "\bk_iraq_car\data\hmmwv_gpk_tower_iraq_co.paa"};
	};
	class BK_iraq_M1151_DSK1 : M1114_DSK_ACR
	{
		displayName = "M1151 HMMWV (DshKM)";
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_commando";
		typicalcargo[] = {"BK_iraq_commando", "BK_iraq_commando", "BK_iraq_commando"};
		hiddenselections[] = {"camo", "camo1", "camo2", "camo3"};
		hiddenselectionstextures[] = {"\bk_iraq_car\data\hmmwv_body_canvas_iraq_co.paa", "\bk_iraq_car\data\hmmwv_hood_canvas_iraq_co.paa", "\bk_iraq_car\data\hmmwv_regular_iraq_co.paa", "\bk_iraq_car\data\hmmwv_gpk_tower_iraq_co.paa"};
		class TransportMagazines {
			class _xx_30Rnd_556x45_Stanag {
				count = 15;
				magazine = "30Rnd_556x45_Stanag";
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
			class _xx_M16A2 {
				count = 2;
				weapon = "M16A2";
			};
		};
	};

	class BK_iraq_M1114_v1 : HMMWV_Armored
	{
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_commando";
		typicalcargo[] = {"BK_iraq_commando", "BK_iraq_commando", "BK_iraq_commando", "BK_iraq_commando"};
		hiddenselections[] = {"Camo1", "Camo2"};
		hiddenselectionstextures[] = {"\bk_iraq_car\data\hmmwv_body_iraq_co.paa", "\ca\wheeled_e\hmmwv\data\hmmwv_parts_1_ca.paa"};
	};
};
