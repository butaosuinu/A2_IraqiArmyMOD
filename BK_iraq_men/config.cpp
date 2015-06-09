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
	class bk_iraq_men
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
class CfgVehicleClasses
{
	class bk_iraq_commando_men
	{
		displayName = "Commando";
	};
	class bk_ISOF_menB
	{
		displayname = "ISOF(Black Ops)";
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle;
		class Man;	// External class reference
	
	class CAManBase : Man {
		class TalkTopics;	// External class reference
		
		class HitPoints {
			class HitHead;	// External class reference
			class HitBody;	// External class reference
		};
	};
	
	class SoldierEB;		// External class reference
	class SoldierWB;		// External class reference
	class SoldierGB;		// External class reference
	class FR_Assault_R;
	class FR_Assault_GL;
	class US_Soldier_Pilot_EP1;
	class USMC_Soldier_Crew;
	class US_Soldier_Sniper_EP1;
	class US_Soldier_Spotter_EP1;
	class CZ_Soldier_MG2_Dst_ACR;
	class CZ_Soldier805_DES_ACR;
	class CZ_Sharpshooter_DES_ACR;

	/************************************
			 men(General troops)
	*************************************/

	class BK_iraq_soldier_1 : CZ_Soldier805_DES_ACR{
		displayname = "Rifleman(AKM)";
		vehicleclass = "Men";
		scope = 2;
		side = 1;
		identitytypes[] = {"Language_TK_EP1", "Head_TK", "FR_Glasses"};
		languages[] = {"TK"};
		genericnames = "TakistaniMen";
		faction = "bk_iraq_army";
		model = "\Ca\Characters_ACR\acr_dst_805";
		magazines[] = {"30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "HandGrenade_East", "HandGrenade_East"};
		weapons[] = {"AK_47_M", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "HandGrenade_East"};
		respawnweapons[] = {"AK_47_M", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}
	class BK_iraq_soldier_2 : CZ_Soldier805_DES_ACR{
		displayname = "Rifleman(M16A2)";
		vehicleclass = "Men";
		scope = 2;
		side = 1;
		genericnames = "TakistaniMen";
		identitytypes[] = {"Language_TK_EP1", "Head_TK", "FR_Glasses"};
		languages[] = {"TK"};
		faction = "bk_iraq_army";
		model = "\Ca\Characters_ACR\acr_dst_805";
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "HandGrenade_West"};
		weapons[] = {"M16A2", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West"};
		respawnweapons[] = {"M16A2", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}
	class BK_iraq_soldier_3 : CZ_Soldier805_DES_ACR{
		displayname = "Rifleman(M16 ACOG)";
		vehicleclass = "Men";
		scope = 2;
		side = 1;
		identitytypes[] = {"Language_TK_EP1", "Head_TK", "FR_Glasses"};
		genericnames = "TakistaniMen";
		languages[] = {"TK"};
		faction = "bk_iraq_army";
		model = "\Ca\Characters_ACR\acr_dst_soldier";
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "HandGrenade_West"};
		weapons[] = {"m16a4_acg", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West"};
		respawnweapons[] = {"m16a4_acg", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}
	class BK_iraq_soldier_SL : BK_iraq_soldier_3{
		displayname = "Squad Leader";
		accuracy = 3.6;
		cost = 500000;
		picture = "\Ca\characters\data\Ico\i_sleader_CA";
		icon = "\Ca\characters2\data\icon\i_leader_CA";
		model = "\Ca\Characters_ACR\acr_dst_805g";
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "HandGrenade_West", "SmokeShell", "SmokeShellPurple", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_Smoke_M203", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
		weapons[] = {"M4A1_RCO_GL", "M9", "ItemGPS", "NVGoggles", "Binocular_Vector", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "SmokeShell", "SmokeShellPurple","1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_Smoke_M203", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
		respawnweapons[] = {"M4A1_RCO_GL", "M9", "ItemGPS", "NVGoggles", "Binocular_Vector", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}
	class BK_iraq_soldier_AR : CZ_Soldier_MG2_Dst_ACR{
		vehicleclass = "Men";
		scope = 2;
		side = 1;
		genericnames = "TakistaniMen";
		identitytypes[] = {"Language_TK_EP1", "Head_TK", "FR_Glasses"};
		languages[] = {"TK"};
		faction = "bk_iraq_army";
		magazines[] = {"100Rnd_556x45_M249", "100Rnd_556x45_M249", "100Rnd_556x45_M249", "100Rnd_556x45_M249", "100Rnd_556x45_M249", "HandGrenade_West", "HandGrenade_West"};
		respawnmagazines[] = {"100Rnd_556x45_M249", "100Rnd_556x45_M249", "100Rnd_556x45_M249", "HandGrenade_West"};
		respawnweapons[] = {"M249", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"M249", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}
	class BK_iraq_soldier_MG : CZ_Soldier_MG2_Dst_ACR{
		displayname ="Machinegunner(PKM)";
		vehicleclass = "Men";
		scope = 2;
		side = 1;
		genericnames = "TakistaniMen";
		identitytypes[] = {"Language_TK_EP1", "Head_TK", "FR_Glasses"};
		languages[] = {"TK"};
		faction = "bk_iraq_army";
		magazines[] = {"100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK", "HandGrenade_West", "HandGrenade_West"};
		respawnmagazines[] = {"100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK", "HandGrenade_West"};
		respawnweapons[] = {"PK", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"PK", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}
	class BK_iraq_soldier_Marksman_1 : CZ_Sharpshooter_DES_ACR{
		displayname = "Marksman(SVD)";
		vehicleclass = "Men";
		scope = 2;
		side = 1;
		genericnames = "TakistaniMen";
		identitytypes[] = {"Language_TK_EP1", "Head_TK", "FR_Glasses"};
		languages[] = {"TK"};
		faction = "bk_iraq_army";
	}
	class BK_iraq_soldier_Marksman_2 : CZ_Sharpshooter_DES_ACR{
		displayname = "Marksman";
		vehicleclass = "Men";
		scope = 2;
		side = 1;
		genericnames = "TakistaniMen";
		identitytypes[] = {"Language_TK_EP1", "Head_TK", "FR_Glasses"};
		languages[] = {"TK"};
		faction = "bk_iraq_army";
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "HandGrenade_West", "SmokeShell"};
		weapons[] = {"M4SPR", "NVGoggles", "Binocular_Vector", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "SmokeShell"};
		respawnweapons[] = {"M4SPR", "NVGoggles", "Binocular_Vector", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}
	class BK_iraq_soldier_medic : BK_iraq_soldier_1{
		displayname = "Medic";
		accuracy = 3.7;
		cost = 100000;
		attendant = true;
		picture = "\Ca\characters\data\Ico\i_Med_CA";
		icon = "\Ca\characters2\data\icon\i_medic_CA";
		namesound = "veh_Medic";
		textplural = "Medics";
		textsingular = "Medic";
		magazines[] = {"30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "HandGrenade_East", "HandGrenade_East"};
		weapons[] = {"AK_47_S", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "HandGrenade_East"};
		respawnweapons[] = {"AK_47_S", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}
	class BK_iraq_soldier_LAT : BK_iraq_soldier_1{
		displayname = "Rifleman AT";
		model = "\Ca\Characters_ACR\acr_dst_soldier";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
		textplural = "AT soldiers";
		textsingular = "AT soldier";
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "M136", "HandGrenade_West", "HandGrenade_West"};
		weapons[] = {"M16A2", "M136", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "M136","HandGrenade_West"};
		respawnweapons[] = {"M16A2", "M136","NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}
	class BK_iraq_soldier_AT : BK_iraq_soldier_LAT{
		displayname = "AT Specialist";
		magazines[] = {"30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "PG7VR", "PG7VL", "PG7VL"};
		weapons[] = {"AK_47_S", "RPG7V", "NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"30Rnd_762x39_AK47", "30Rnd_762x39_AK47", "30Rnd_762x39_AK47", , "PG7VR", "PG7VL", "PG7VL"};
		respawnweapons[] = {"AK_47_S", "RPG7V","NVGoggles", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}


	/*///////////////////////////
			ISOF units
	///////////////////////////*/

	class BK_ISOF_3c: FR_Assault_R
	{
		displayname = "Rifleman";
		scope = 2;
		side = 1;
		genericnames = "TakistaniMen";
		identitytypes[] = {"Language_TK_EP1", "Head_TK", "FR_Glasses"};
		languages[] = {"TK"};
		faction = "bk_iraq_army";
		vehicleClass = "bk_ISOF_menB";
		model = "\bk_iraq_men\FR_DirAction1.p3d";
		class Wounds {
			mat[] = {"Ca\characters2\USMC\DATA\FR_DA1.rvmat", "Ca\characters2\USMC\DATA\W1_FR_DA1.rvmat", "Ca\characters2\USMC\DATA\W2_FR_DA1.rvmat"};
			tex[] = {};
		};
	};
	class BK_ISOF_GL_3c: FR_Assault_GL
	{
		displayname = "Grenadier";
		scope = 2;
		side = 1;
		genericnames = "TakistaniMen";
		identitytypes[] = {"Language_TK_EP1", "Head_TK", "FR_Glasses"};
		languages[] = {"TK"};
		faction = "bk_iraq_army";
		vehicleClass = "bk_ISOF_menB";
		model = "\bk_iraq_men\FR_DirAction2.p3d";
		class Wounds {
			mat[] = {"Ca\characters2\USMC\DATA\FR_DA2.rvmat", "Ca\characters2\USMC\DATA\W1_FR_DA2.rvmat", "Ca\characters2\USMC\DATA\W2_FR_DA2.rvmat"};
			tex[] = {};
		};
	};
	class BK_ISOF_TL_3c: BK_ISOF_GL_3c
	{
		displayname = "Team Leader";
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		vehicleClass = "bk_ISOF_menB";
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "HandGrenade_West", "SmokeShell", "SmokeShellPurple", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_Smoke_M203", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
		weapons[] = {"M4A1_RCO_GL", "M9", "ItemGPS", "NVGoggles", "Binocular_Vector", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "SmokeShell", "SmokeShellPurple","1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_HE_M203", "1Rnd_Smoke_M203", "15Rnd_9x19_M9", "15Rnd_9x19_M9"};
		respawnweapons[] = {"M4A1_RCO_GL", "M9", "ItemGPS", "NVGoggles", "Binocular_Vector", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		icon = "\Ca\characters2\data\icon\i_leader_CA.paa";
		model = "\bk_iraq_men\FR_DirAction2.p3d";
	};
	class BK_ISOF_AR_3c: BK_ISOF_3c
	{
		displayname = "Automatic Rifleman";
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		vehicleClass = "bk_ISOF_menB";
		icon = "\Ca\characters2\data\icon\i_machinegunner_CA.paa";
		model = "\bk_iraq_men\FR_DirAction1.p3d";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		magazines[] = {"100Rnd_556x45_M249", "100Rnd_556x45_M249", "100Rnd_556x45_M249", "100Rnd_556x45_M249", "100Rnd_556x45_M249", "HandGrenade_West", "HandGrenade_West"};
		respawnmagazines[] = {"100Rnd_556x45_M249", "100Rnd_556x45_M249", "100Rnd_556x45_M249", "HandGrenade_West"};
		respawnweapons[] = {"M249_m145_EP1", "NVGoggles", "Binocular","ItemGPS", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"M249_m145_EP1", "NVGoggles","Binocular", "ItemGPS", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		textplural = "Machinegunners";
		textsingular = "Machinegunner";
		threat[] = {1, 0.1, 0.3};
		namesound = "veh_mgunner";
		class SpeechVariants {
			class Default {
				speechplural[] = {"veh_mgunners"};
				speechsingular[] = {"veh_mgunner"};
			};
			class EN: Default {
			};
			class CZ {
				speechplural[] = {"veh_mgunners_CZ"};
				speechsingular[] = {"veh_mgunner_CZ"};
			};
			class CZ_Akuzativ {
				speechplural[] = {"veh_mgunners_CZ4P"};
				speechsingular[] = {"veh_mgunner_CZ4P"};
			};
			class RU {
				speechplural[] = {"veh_mgunners_RU"};
				speechsingular[] = {"veh_mgunner_RU"};
			};
		};

	};
	class BK_ISOF_Marksman_3c: BK_ISOF_3c
	{
		displayname = "Marksman";
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		vehicleClass = "bk_ISOF_menB";
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "HandGrenade_West", "SmokeShell", "SmokeShellPurple", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		weapons[] = {"M4SPR", "Colt1911", "ItemGPS", "NVGoggles", "Binocular_Vector", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "SmokeShell", "SmokeShellPurple", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"M4SPR", "Colt1911", "ItemGPS", "NVGoggles", "Binocular_Vector", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\bk_iraq_men\FR_DirAction1.p3d";
	};
	class BK_ISOF_Marksman2_3c: BK_ISOF_3c
	{
		displayname = "Marksman(SVD)";
		scope = 2;
		side = 1;
		faction = "bk_iraq_army";
		vehicleClass = "bk_ISOF_menB";
		magazines[] = {"10Rnd_762x54_SVD", "10Rnd_762x54_SVD", "10Rnd_762x54_SVD", "10Rnd_762x54_SVD", "10Rnd_762x54_SVD", "10Rnd_762x54_SVD", "HandGrenade_West", "HandGrenade_West", "SmokeShell", "SmokeShellPurple", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		weapons[] = {"SVD", "Colt1911", "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"10Rnd_762x54_SVD", "10Rnd_762x54_SVD", "10Rnd_762x54_SVD", "HandGrenade_West", "SmokeShell", "SmokeShellPurple", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"SVD", "Colt1911", "ItemGPS", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		model = "\bk_iraq_men\FR_DirAction1.p3d";
	};
	class BK_ISOF_Medic_3c: BK_ISOF_3c
	{
		accuracy = 3.7;
		attendant = 1;
		cost = 350000;
		displayname = "Medic";
		namesound = "veh_Medic";
		scope = 2;
		side = 1;
		textplural = "Medics";
		textsingular = "Medic";
		faction = "bk_iraq_army";
		vehicleClass = "bk_ISOF_menB";
		icon = "\Ca\characters2\data\icon\i_medic_CA.paa";
		model = "\bk_iraq_men\FR_DirAction1.p3d";
		picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
		class SpeechVariants {
			class Default {
				speechplural[] = {"veh_Medics"};
				speechsingular[] = {"veh_Medic"};
				};
			class EN: Default {
			};
			class CZ {
				speechplural[] = {"veh_Medics_CZ"};
				speechsingular[] = {"veh_Medic_CZ"};
			};
			class CZ_Akuzativ {
				speechplural[] = {"veh_Medics_CZ4P"};
				speechsingular[] = {"veh_Medic_CZ4P"};
			};
			class RU {
				speechplural[] = {"veh_Medics_RU"};
				speechsingular[] = {"veh_Medic_RU"};
			};
		};
	};
	/*****************************
	          commandos
	******************************/
	class BK_iraq_commando : BK_ISOF_3c{
		vehicleClass = "bk_iraq_commando_men";
		model = "\bk_iraq_men\Commando1.p3d";
	}
	class BK_iraq_commando_LAT : BK_iraq_commando{
		displayname = "Rifleman AT";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
		textplural = "AT soldiers";
		textsingular = "AT soldier";
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "M136", "HandGrenade_West", "HandGrenade_West", "SmokeShell", "SmokeShellPurple", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		weapons[] = {"M4A1_Aim", "M136", "Colt1911", "ItemGPS", "NVGoggles", "Binocular_Vector", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "M136","HandGrenade_West", "SmokeShell", "SmokeShellPurple", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"M4A1_Aim", "M136","Colt1911", "ItemGPS", "NVGoggles", "Binocular_Vector", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}
	class BK_iraq_commando_AT : BK_iraq_commando_LAT{
		displayname = "AT Specialist(RPG-7)";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
		textplural = "AT soldiers";
		textsingular = "AT soldier";
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "PG7VR", "PG7VL", "PG7VL", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		weapons[] = {"M4A1_Aim", "RPG7V", "Colt1911", "ItemGPS", "NVGoggles", "Binocular_Vector", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", , "PG7VR", "PG7VL", "PG7VL", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"M4A1_Aim", "RPG7V","Colt1911", "ItemGPS", "NVGoggles", "Binocular_Vector", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}

	class BK_iraq_commando_GL : BK_ISOF_GL_3c{
		vehicleClass = "bk_iraq_commando_men";
		model = "\bk_iraq_men\Commando2.p3d";
	}

	class BK_iraq_commando_TL : BK_ISOF_TL_3c{
		vehicleClass = "bk_iraq_commando_men";
		model = "\bk_iraq_men\Commando2.p3d";
	}
	class BK_iraq_commando_AR : BK_ISOF_AR_3c{
		vehicleClass = "bk_iraq_commando_men";
		model = "\bk_iraq_men\Commando1.p3d";
	}
	class BK_iraq_commando_Marksman : BK_ISOF_Marksman_3c{
		vehicleClass = "bk_iraq_commando_men";
		model = "\bk_iraq_men\Commando1.p3d";
	}
	class BK_iraq_commando_Marksman2 : BK_ISOF_Marksman2_3c{
		vehicleClass = "bk_iraq_commando_men";
		model = "\bk_iraq_men\Commando1.p3d";
	}
	class BK_iraq_commando_Medic : BK_ISOF_Medic_3c{
		vehicleClass = "bk_iraq_commando_men";
		model = "\bk_iraq_men\Commando1.p3d";
	}
	class BK_iraq_commando_MG_1 : BK_iraq_commando_AR{
		displayname = "Machinegunner(PKM)";
		magazines[] = {"100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK", "HandGrenade_West", "HandGrenade_West"};
		respawnmagazines[] = {"100Rnd_762x54_PK", "100Rnd_762x54_PK", "100Rnd_762x54_PK", "HandGrenade_West"};
		respawnweapons[] = {"PK", "NVGoggles", "Binocular","ItemGPS", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"PK", "NVGoggles","Binocular", "ItemGPS", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}
	class BK_iraq_commando_RM2 : BK_iraq_commando{
		displayname = "Rifleman(M16A2)";
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "HandGrenade_West", "SmokeShell", "SmokeShellPurple", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		weapons[] = {"M16A2", "Colt1911", "ItemGPS", "NVGoggles", "Binocular_Vector", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "SmokeShell", "SmokeShellPurple", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"M16A2", "Colt1911", "ItemGPS", "NVGoggles", "Binocular_Vector", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}
	class BK_iraq_commando_RM3 : BK_iraq_commando{
		displayname = "Rifleman(M16 ACOG)";
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "HandGrenade_West", "SmokeShell", "SmokeShellPurple", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		weapons[] = {"m16a4_acg", "Colt1911", "ItemGPS", "NVGoggles", "Binocular_Vector", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "HandGrenade_West", "SmokeShell", "SmokeShellPurple", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		respawnweapons[] = {"m16a4_acg", "Colt1911", "ItemGPS", "NVGoggles", "Binocular_Vector", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}
	/*****************
		others
	******************/
	class BK_iraq_US_pilot : US_Soldier_Pilot_EP1{
		displayname = "Pilot(US style)";
		vehicleclass = "Men";
		scope = 2;
		side = 1;
		genericnames = "TakistaniMen";
		identitytypes[] = {"Language_TK_EP1", "Head_TK", "FR_Glasses"};
		languages[] = {"TK"};
		faction = "bk_iraq_army";
	};
	class BK_iraq_US_crew : USMC_Soldier_Crew{
		displayname = "Crew(US style)";
		vehicleclass = "Men";
		scope = 2;
		side = 1;
		genericnames = "TakistaniMen";
		identitytypes[] = {"Language_TK_EP1", "Head_TK", "FR_Glasses"};
		languages[] = {"TK"};
		faction = "bk_iraq_army";
	}
	class BK_iraq_sniper : US_Soldier_Sniper_EP1{
		displayname = "Sniper(M24)";
		vehicleclass = "Men";
		scope = 2;
		side = 1;
		genericnames = "TakistaniMen";
		identitytypes[] = {"Language_TK_EP1", "Head_TK", "FR_Glasses"};
		languages[] = {"TK"};
		faction = "bk_iraq_army";
		magazines[] = {"5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "HandGrenade_West", "smokeshell", "smokeshellred", "smokeshellgreen", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911"};
		weapons[] = {"M24_des_EP1", "Colt1911", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnmagazines[] = {"5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "7Rnd_45ACP_1911", "7Rnd_45ACP_1911", "HandGrenade_West", "smokeshell"};
		respawnweapons[] = {"M24_des_EP1", "Colt1911", "NVGoggles", "Binocular", "Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	}
	class BK_iraq_Spotter : US_Soldier_Spotter_EP1{
		displayname = "Spotter";
		vehicleclass = "Men";
		scope = 2;
		side = 1;
		genericnames = "TakistaniMen";
		identitytypes[] = {"Language_TK_EP1", "Head_TK", "FR_Glasses"};
		languages[] = {"TK"};
		faction = "bk_iraq_army";
	}


};