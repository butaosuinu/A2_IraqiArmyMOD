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
	class bk_iraq_static
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
class CfgVehicles{
	class Land;
	class LandVehicle;
	class Man;	// External class reference
	class StaticWeapon;
	class Stinger_Pod;
	class M252;
	class MK19_TriPod;
	class M2StaticMG;
	class M2HD_mini_TriPod;
	class ZU23_CDF;
	class D30_CDF;
	class DSHKM_CDF;
	class DSHkM_Mini_TriPod_CDF;

	class BK_iraq_M2static : M2StaticMG{
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_commando";
		typicalcargo[] = {"BK_iraq_commando"};
	}
	class BK_iraq_M2_mini_tripod : M2HD_mini_TriPod{
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_commando";
		typicalcargo[] = {"BK_iraq_commando"};
	}
	class BK_iraq_Mk19_tripod : MK19_TriPod{
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_commando";
		typicalcargo[] = {"BK_iraq_commando"};
	}
	class BK_iraq_M252 : M252{
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_commando";
		typicalcargo[] = {"BK_iraq_commando"};
	};
	class BK_iraq_Stinger_Pod : Stinger_Pod{
		displayName = "FIM-92F Stinger";
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_commando";
		typicalcargo[] = {"BK_iraq_commando"};
	}
	class BK_iraq_D30 : D30_CDF{
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_commando";
		typicalcargo[] = {"BK_iraq_commando"};
	}
	class BK_iraq_ZU23 : ZU23_CDF{
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_commando";
		typicalcargo[] = {"BK_iraq_commando"};
	}
	class BK_iraq_DSHKM : DSHKM_CDF{
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_commando";
		typicalcargo[] = {"BK_iraq_commando"};
	}
	class BK_iraq_DSHKM_mini_tripod : DSHkM_Mini_TriPod_CDF{
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		crew = "BK_iraq_commando";
		typicalcargo[] = {"BK_iraq_commando"};
	}
};