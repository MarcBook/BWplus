
class CfgPatches {
	class BWplus_vehicles {
		units[] = {"BWplus_Box_AMMOgrenade","BWplus_Box_AMMO40mm","BWplus_Box_AMMO762_20Rnd","BWplus_Box_AMMO762_10Rnd","BWplus_Box_AMMO762_10Rnd","BWplus_Box_AMMO762_120Rnd","BWplus_Box_AMMO556_100Rnd","BWplus_CamoNet_Dismantled","BWplus_Box_AMMO556","BWplus_Box_Items","BWplus_CamoNet","BWplus_merlin","BWplus_Lights","Fennek_Flecktarn_pio","Fennek_Tropentarn_pio","Fennek_Tropentarn_mg","Fennek_Flecktarn_mg","Fennek_Tropentarn_gmg","Fennek_Flecktarn_gmg","Fennek_Tropentarn_san","Fennek_Flecktarntarn_san","BWplus_crater"};
		weapons[] = {"BWplus_Item_CamoNet"};
		requiredVersion = 0.1;
		requiredAddons[] = {"bwplus","agm_core","bwa3_weapons","agm_logistics"};
	 	version = "1.3";
    	versionStr = "1.3";
    	versionAr[] = {1,3,0};
    	author[] = {"EduardLaser", "Ir0n1E"};
    	authorUrl = "http://ntalpha.de";
	};
};

class CfgVehicleClasses {
	class BWplus_Items {
		displayName = "BWplus";
	};
};

class CfgFunctions {
	class BWplus_vehicles {
    	class BWplus_vehicles {
      		file = "\BWplus_vehicles\fnc";
      		class buildCrater;
      		class buildFOB;
    		class buildCraterAbort;
    		class buildCraterCallback;
    		class buildFOBCallback;
    		class buildNet;
      		class canbuild;
      		class canbuildFOB;
      		class canbuildPio;
      		class dismantleCrater;
      		class dismantleFOB;
      		class dismantleNet;
      		class getin;
      		class hasLoadedItems;
      		class leftorright;
    		class lamps_on;
    		class lamps_off;
    		class pioFennekInit;
    		class saniFennekInit;		
    	};
  	};
};

#include <Macros.hpp>

class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class eventHandlers {
		 	Init = "(_this select 0) execVM ""BWplus\init.sqf"";";
		};
		class AGM_SelfActions {
			class BWplus_Core {
				displayName = "BWplus >>";
		    	priority = 0.1;
  			    condition = "";
			    statement = "";
			    showDisabled = 0; 
	      		icon = "BWplus\UI\bwplus_shovel_menu.paa";
	      		subMenu[] = {"BWplus_Core", 1};
		      	class BWplus_BuildCrater {
				    displayName = "$STR_BWplus_Vehicles_buildCrate";
			    	priority = 1.5;
	  			    condition = "not (player getVariable 'BWplus_building') and {[player] call BWplus_vehicles_fnc_canbuild}";
				    statement = "[false] call BWplus_vehicles_fnc_buildCrater";
		      		icon = "BWplus\UI\bwplus_shovel_menu.paa";
		      		showDisabled = 1; 
		      	};
				class BWplus_BuildCraterBig {
				    displayName = "$STR_BWplus_Vehicles_buildCrateNet";
			    	priority = 1;
	  			    condition = "not (player getVariable 'BWplus_building') and {[player] call BWplus_vehicles_fnc_canbuildPio}";
				    statement = "[true] call BWplus_vehicles_fnc_buildCrater";
		      		icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
		      		showDisabled = 1; 
	      		};
	      	};
      	};
	};

	
	class Box_NATO_Support_F;
	class BWplus_Box_Exp: Box_NATO_Support_F {
    	author = "BWPlus";
	    displayName = "$STR_BWplus_Vehicles_box_exp";
    	scope = 2;
    	scopeCurator = 2;
    	transportmaxmagazines = 9001;
    	transportmaxbackbacks = 0;
    	maximumload = 2000;
    	class TransportMagazines  {
        	MACRO_ADDMAGAZINE(APERSBoundingMine_Range_Mag,10)
        	MACRO_ADDMAGAZINE(ATMine_Range_Mag,5)
        	MACRO_ADDMAGAZINE(SatchelCharge_Remote_Mag,5)
        	MACRO_ADDMAGAZINE(ClaymoreDirectionalMine_Remote_Mag,5)
        	MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,10)
		};
		class TransportItems {
			MACRO_ADDITEM(AGM_M26_Clacker,2)
			MACRO_ADDITEM(AGM_Clacker,2)
			MACRO_ADDITEM(AGM_DefusalKit,2)
		};
	};
	class BWplus_Box_Items: BWplus_Box_Exp {
    	author = "BWPlus";
	    displayName = "$STR_BWplus_Vehicles_box_items";
	    scope = 2;
    	scopeCurator = 2;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {
			MACRO_ADDITEM(BWplus_Item_CamoNet,10)
			MACRO_ADDITEM(BWplus_Shovel,10)
		};
	};
	class BWplus_Box_AMMO556: BWplus_Box_Exp {
		author = "BWPlus";
	    displayName = "$STR_BWplus_Vehicles_box_556";
	    scope = 2;
    	scopeCurator = 2;
		transportmaxmagazines = 150;
		maximumload = 2000;
		transportmaxbackbacks = 0;
		class TransportItems {};
		class TransportWeapons {};
		class TransportMagazines  {
			MACRO_ADDMAGAZINE(BWA3_30Rnd_556x45_G36,100)
		};
	};
	class BWplus_Box_AMMO556_100Rnd: BWplus_Box_Exp {
		author = "BWPlus";
	    displayName = "$STR_BWplus_Vehicles_box_100_Rnd_556";
	    scope = 2;
    	scopeCurator = 2;
		transportmaxmagazines = 100;
		maximumload = 2000;
		transportmaxbackbacks = 0;
		class TransportItems {};
		class TransportWeapons {};
		class TransportMagazines  {
			MACRO_ADDMAGAZINE(BWA3_100Rnd_556x45_G36_Tracer,15)
			MACRO_ADDMAGAZINE(BWA3_100Rnd_556x45_G36,15)
		};
	};
	class BWplus_Box_AMMO762_120Rnd: BWplus_Box_Exp {
		author = "BWPlus";
	    displayName = "$STR_BWplus_Vehicles_box_120Rnd_762";
	    scope = 2;
    	scopeCurator = 2;
		transportmaxmagazines = 50;
		maximumload = 2000;
		transportmaxbackbacks = 0;
		class TransportItems {};
		class TransportWeapons {};
		class TransportMagazines  {
			MACRO_ADDMAGAZINE(BWA3_120Rnd_762x51,25)
		};
	};
	class BWplus_Box_AMMO762_10Rnd: BWplus_Box_Exp {
		author = "BWPlus";
	    displayName = "$STR_BWplus_Vehicles_box_10Rnd_762";
	    scope = 2;
    	scopeCurator = 2;
		transportmaxmagazines = 120;
		maximumload = 2000;
		transportmaxbackbacks = 0;
		class TransportItems {};
		class TransportWeapons {};
		class TransportMagazines  {
			MACRO_ADDMAGAZINE(BWA3_10Rnd_762x51_G28,100)
		};
	};
	class BWplus_Box_AMMO762_20Rnd: BWplus_Box_Exp {
		author = "BWPlus";
	    displayName = "$STR_BWplus_Vehicles_box_20Rnd_762";
	    scope = 2;
    	scopeCurator = 2;
		transportmaxmagazines = 100;
		maximumload = 2000;
		transportmaxbackbacks = 0;
		class TransportItems {};
		class TransportWeapons {};
		class TransportMagazines  {
			MACRO_ADDMAGAZINE(BWA3_20Rnd_762x51_G28,50)
		};
	};

	class BWplus_Box_AMMO40mm: BWplus_Box_Exp {
		author = "BWPlus";
	    displayName = "$STR_BWplus_Vehicles_box_40mm";
	    scope = 2;
    	scopeCurator = 2;
		transportmaxmagazines = 100;
		maximumload = 2000;
		transportmaxbackbacks = 0;
		class TransportItems {};
		class TransportWeapons {};
		class TransportMagazines  {
			MACRO_ADDMAGAZINE(1rnd_HE_Grenade_shell,20)
			MACRO_ADDMAGAZINE(1rnd_SmokeRed_Grenade_shell,15)
			MACRO_ADDMAGAZINE(1rnd_SmokeGreen_Grenade_shell,15)
		};
	};
	class BWplus_Box_AMMOgrenade: BWplus_Box_Exp {
		author = "BWPlus";
	    displayName = "$STR_BWplus_Vehicles_box_Grenade";
	    scope = 2;
    	scopeCurator = 2;
		transportmaxmagazines = 100;
		maximumload = 2000;
		transportmaxbackbacks = 0;
		class TransportItems {};
		class TransportWeapons {};
		class TransportMagazines  {
			MACRO_ADDMAGAZINE(BWA3_DM51A1,20)
			MACRO_ADDMAGAZINE(BWA3_DM32_Orange,10)
			MACRO_ADDMAGAZINE(BWA3_DM32_Yellow,10)
		};
	};

	class I_MRAP_03_hmg_F;
	class I_MRAP_03_gmg_F;
	//class I_MRAP_03_F;
	class I_Heli_Transport_02_F;
	class MRAP_03_base_F;
	
	class BWplus_Merlin: I_Heli_Transport_02_F {
		displayName = "Merlin";
		author = "EduardLaser, Ir0n1E";
		side = 1;
		faction = "BWA3_Faction";
		crew = "BWA3_crew_fleck";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"bwplus_vehicles\data\mohawk\mhawk1.paa","BWplus_vehicles\data\mohawk\mhawk2.paa","BWplus_vehicles\data\mohawk\mhawk3.paa"};
		class TransportMagazines {
			MACRO_ADDMAGAZINE(BWA3_30Rnd_556x45_G36,10)
			MACRO_ADDMAGAZINE(BWA3_200Rnd_556x45,5)
			MACRO_ADDMAGAZINE(BWA3_DM51A1,5)
			MACRO_ADDMAGAZINE(BWA3_DM32_Orange,5)
			MACRO_ADDMAGAZINE(1rnd_HE_Grenade_shell,5)
			MACRO_ADDMAGAZINE(BWA3_10Rnd_762x51_G28,5)
			MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,2)
		};
		class TransportItems { 
			MACRO_ADDITEM(ToolKit,1)
			MACRO_ADDITEM(Rangefinder,1)
		};
		class TransportBackpacks {
			MACRO_ADDBACKPACK(BWA3_AssaultPack_Medic,2)
		};
		class TransportWeapons {
			MACRO_ADDWEAPON(BWA3_G36K,2)
		};
	};
 	class I_MRAP_03_F: MRAP_03_base_F {
 		class AGM_Actions;
 	};

	class Fennek_Flecktarn_pio: I_MRAP_03_F {
		displayName = "$STR_BWplus_Vehicles_Fennek_pio";
		author = "EduardLaser, Ir0n1E";
		side = 1;
		faction = "BWA3_Faction";
		vehicleClass = "BWA3_VehClass_Wheeled_Fleck";
		crew = "BWplus_Pioneer_Flecktarn";
		typicalCargo[] = {"BWA3_Rifleman_Fleck", "BWA3_Rifleman_Fleck"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"BWplus_vehicles\data\Fleck\piofleck.paa","BWplus_vehicles\data\Fleck\fleck2.paa"};
		transportMaxBackpacks = 3;
		transportMaxWeapons = 20;
		AGM_Vehicle_Cargo = 8;

		class eventHandlers {
			Init = "_this call BWplus_vehicles_fnc_pioFennekInit";
		 	getin = "_this call BWplus_vehicles_fnc_getin";
		};
		class TransportMagazines {
			class _xx_BWA3_DM32_Orange {
				magazine = "BWA3_DM32_Orange";
				count = 6;
			};
		};
		class TransportItems {
			MACRO_ADDITEM(ToolKit,1)
			MACRO_ADDITEM(BWA3_Vector,1)
			MACRO_ADDITEM(BWA3_ItemKestrel,1)
			MACRO_ADDITEM(BWA3_ItemNavipad,1)
			MACRO_ADDITEM(AGM_UAVBattery,1)
			MACRO_ADDITEM(BWplus_Shovel,1)
			MACRO_ADDITEM(BWplus_Item_CamoNet,2)
		};
		class TransportBackpacks {
			MACRO_ADDBACKPACK(BWA3_AssaultPack_Medic,1)   
		};
		class TransportWeapons {};
		class AGM_Actions: AGM_Actions {
			MACRO_ACTIONFOB
		};
		class UserActions {
			MACRO_OPENDOOR
		};
	};
    
    class Fennek_Flecktarn_mg: I_MRAP_03_hmg_F {
		displayName = "Fennek Kal.50";
		author = "EduardLaser, Ir0n1E";
		side = 1;
		faction = "BWA3_Faction";
		vehicleClass = "BWA3_VehClass_Wheeled_Fleck";
		crew = "BWA3_Rifleman_Fleck";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"BWplus_vehicles\data\Fleck\fleck.paa","BWplus_vehicles\data\Fleck\fleck2.paa"};
		class eventHandlers {
			Init = "(_this select 0) setVariable [""left_door_open"",false,true];(_this select 0) setVariable [""right_door_open"",false,true];";
		};
		class TransportMagazines {
			MACRO_ADDMAGAZINE(BWA3_30Rnd_556x45_G36,10)
			MACRO_ADDMAGAZINE(BWA3_200Rnd_556x45,5)
			MACRO_ADDMAGAZINE(BWA3_DM51A1,5)
			MACRO_ADDMAGAZINE(BWA3_DM32_Orange,5)
			MACRO_ADDMAGAZINE(1rnd_HE_Grenade_shell,5)
			MACRO_ADDMAGAZINE(BWA3_10Rnd_762x51_G28,5)
		};
		class TransportItems { 
			MACRO_ADDITEM(ToolKit,1)
			MACRO_ADDITEM(Rangefinder,1)
		};
		class TransportBackpacks {
			MACRO_ADDBACKPACK(BWA3_AssaultPack_Medic,1)
		};
		class TransportWeapons {
			MACRO_ADDWEAPON(BWA3_Pzf3_Loaded,2)
		};
	};	
	class Fennek_Flecktarn_gmg: I_MRAP_03_gmg_F {
		displayName = "Fennek GMG";
		author = "EduardLaser, Ir0n1E";
		side = 1;
		faction = "BWA3_Faction";
		vehicleClass = "BWA3_VehClass_Wheeled_Fleck";
		crew = "BWA3_Rifleman_Fleck";
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"BWplus_vehicles\data\Fleck\fleck.paa","BWplus_vehicles\data\Fleck\fleck2.paa"};
		class eventHandlers {
			Init = "_this call BWplus_vehicles_fnc_saniFennecInit";
		 	getin = "_this call BWplus_vehicles_fnc_getin";
		};
		class TransportMagazines {
			MACRO_ADDMAGAZINE(BWA3_30Rnd_556x45_G36,10)
			MACRO_ADDMAGAZINE(BWA3_200Rnd_556x45,5)
			MACRO_ADDMAGAZINE(BWA3_DM51A1,5)
			MACRO_ADDMAGAZINE(BWA3_DM32_Orange,5)
			MACRO_ADDMAGAZINE(1rnd_HE_Grenade_shell,5)
			MACRO_ADDMAGAZINE(BWA3_10Rnd_762x51_G28,5)
		};
		class TransportItems { 
			MACRO_ADDITEM(ToolKit,1)
			MACRO_ADDITEM(Rangefinder,1)
		};
		class TransportBackpacks {
			MACRO_ADDBACKPACK(BWA3_AssaultPack_Medic,1)   
		};
		class TransportWeapons {
			MACRO_ADDWEAPON(BWA3_Pzf3_Loaded,2)
		};
	};
	class Fennek_Flecktarn_san: I_MRAP_03_F {
		displayName = "$STR_BWplus_Vehicles_Fennek_medic";
		author = "EduardLaser, Ir0n1E";
		side = 1;
		faction = "BWA3_Faction";
		crew = "BWA3_CombatLifeSaver_Fleck";
		vehicleClass = "BWA3_VehClass_Wheeled_Fleck";
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"BWplus_vehicles\data\Fleck\sanfleck.paa","BWplus_vehicles\data\Fleck\fleck2.paa"};
		AGM_Vehicle_Cargo = 6;
		transportMaxBackpacks = 4;
		transportMaxWeapons = 20;
		class eventHandlers {
		 	Init = "(_this select 0) setVariable [""AGM_IsMedic"", true,true];(_this select 0) setVariable [""left_door_open"",false,true];(_this select 0) setVariable [""right_door_open"",false,true];";
		 	//(_this select 0) execVM ""BWplus\scripts\sani.sqf"";";
		 	getin = "_this call BWplus_vehicles_fnc_getin";
		};
		class TransportMagazines {
			MACRO_ADDMAGAZINE(BWA3_DM51A1,3)
			MACRO_ADDMAGAZINE(BWA3_DM32_Orange,6)
			MACRO_ADDMAGAZINE(BWA3_30Rnd_556x45_G36,10)
        };
        class TransportBackpacks {
			MACRO_ADDBACKPACK(BWA3_AssaultPack_Medic,1);  
		};
		class TransportItems {
			MACRO_ADDITEM(ToolKit,1)
		};
		class TransportWeapons {};	
		class UserActions {
			MACRO_OPENDOOR
		};
	};

	class Fennek_Tropen_pio: Fennek_Flecktarn_pio {
		displayName = "$STR_BWplus_Vehicles_Fennek_pio";
		author = "EduardLaser, Ir0n1E";
		vehicleClass = "BWA3_VehClass_Wheeled_Tropen";
		crew = "BWplus_Pioneer_Tropentarn";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"BWplus_vehicles\data\Tropen\piotrop.paa","BWplus_vehicles\data\Tropen\trop2.paa"};
	};
	class Fennek_Tropen_mg: Fennek_Flecktarn_mg {
		displayName = "Fennek Kal.50";
		author = "EduardLaser, Ir0n1E";
		vehicleClass = "BWA3_VehClass_Wheeled_Tropen";
		crew = "BWA3_Rifleman_Tropen";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"BWplus_vehicles\data\Tropen\trop.paa","BWplus_vehicles\data\Tropen\trop2.paa"};
	};	
    class Fennek_Tropen_gmg: Fennek_Flecktarn_gmg {
		displayName = "Fennek GMG";
		author = "EduardLaser, Ir0n1E";
		vehicleClass = "BWA3_VehClass_Wheeled_Tropen";
		crew = "BWA3_Rifleman_Tropen";
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"BWplus_vehicles\data\Tropen\trop.paa","BWplus_vehicles\data\Tropen\trop2.paa"};
	};
	class Fennek_Tropen_san: Fennek_Flecktarn_san {
		displayName = "$STR_BWplus_Vehicles_Fennek_medic";
		author = "EduardLaser, Ir0n1E";
		vehicleClass = "BWA3_VehClass_Wheeled_Tropen";
		crew = "BWA3_CombatLifeSaver_Tropen";
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"BWplus_vehicles\data\Tropen\santrop.paa","BWplus_vehicles\data\Tropen\trop2.paa"};
	};
	class Land_PortableLight_double_F;
	class craterlong;
	class CamoNet_INDP_F;
	class item_base_F;

	class BWplus_CamoNet_Dismantled: Item_Base_F {
		displayName = "$STR_BWplus_Vehicles_Net_Dismanteled";
		author = "BWplus";
		vehicleClass = "BWplus_Items";
		icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
		scope = 2;
		scopeCurator = 2;
		class TransportItems {
			MACRO_ADDITEM(BWplus_item_CamoNet, 1)
		};
		class AGM_Actions {
	    	class BWplus_buildNet {
				displayName = "$STR_BWplus_Vehicles_buildNet";
			    icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
			    distance = 8; 
			    condition = "player getvariable 'BWplus_pio'";
			    statement = "[AGM_Interaction_Target,player] call BWplus_vehicles_fnc_buildNet";
			    priority = 3;
    			showDisabled = 0;
	      	};
		};
	};
	class BWplus_CamoNet: CamoNet_INDP_F {
		displayName = "$STR_BWplus_Vehicles_Net";
		descriptionShort = "$STR_BWplus_Vehicles_Net";
		author = "BWplus";
		vehicleClass = "BWplus_Items";
		faction = "Default";
		icon = "\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
		scope = 2;
		scopeCurator = 2;
		class eventHandlers {
		 	Init = "_this execVM ""BWplus_vehicles\init_CamoNet.sqf"";";
		};
		/* Not working
		class AGM_Actions {
	    	class BWplus_DismantleNet {
				displayName = "$STR_BWplus_Vehicles_DismanteleNet";
			    icon = "BWplus\UI\bwplus_shovel_menu.paa";
			    distance = 10; 
			    condition = "player getvariable 'BWplus_pio'";
			    statement = "[AGM_Interaction_Target,player] call BWplus_vehicles_fnc_dismentleNet";
			    priority = 3;
	      	};
		};
		*/
	};

	class BWplus_crater: craterlong {
		displayName = "$STR_BWplus_Vehicles_Crater";
		author = "BWplus";
		icon = "iconObject_circle";
		mapSize = 0.7;
		accuracy = 0.2;
		vehicleClass = "BWplus_Items";
		faction = "Default";
		destrType = "DesturctNo";
		scope = 2;
		scopeCurator = 2;
		class eventHandlers {
		 	Init = "_this execVM ""BWplus_vehicles\init_Crater.sqf"";";
		};
		class AGM_Actions {
	    	class BWplus_DismantleCrater {
				displayName = "$STR_BWplus_Vehicles_DismanteleCrate";
			    icon = "BWplus\UI\bwplus_shovel_menu.paa";
			    distance = 4; 
			    condition = "(((AGM_Interaction_Target getVariable ""BWplus_builder"") == player) or (player getvariable ""BWplus_pio""))";
			    statement = "[AGM_Interaction_Target,player] call BWplus_vehicles_fnc_dismantlecrater";
			    priority = 3;
	      	};
		};
	};
	class BWplus_Lights: Land_PortableLight_double_F {
		displayName = "$STR_BWplus_Vehicles_Lights";
		author = "BWplus";
		AGM_Size = 1;
		icon = "\BWplus_vehicles\ui\bwplus_lamp_ca.paa";
		picture = "\BWplus_vehicles\ui\bwplus_lamp_ca.paa";
		mapSize = 0.7;
		accuracy = 0.2;
		vehicleClass = "BWplus_Items";
		destrType = "DesturctNo";
		scope = 2;
		class eventHandlers {
		 	Init = "(_this select 0) execVM ""BWplus_vehicles\init_lights.sqf"";";
		};
		class AGM_Actions {
			MACRO_DRAGABLE
			MACRO_LOADABLE
	    	class BWplus_Lamps_on {
				displayName = "$STR_BWplus_Vehicles_LightsOn";
			    icon = "BWplus_vehicles\UI\bwplus_lamp_ca.paa";
			    priority = 0.5;
			    distance = 5;
			    condition = "!(AGM_Interaction_Target getVariable ""BWplus_lamp_on"")";
			    statement = "[AGM_Interaction_Target, ""BWplus_vehicles_fnc_lamps_on"",nil,true] spawn BIS_fnc_MP";
	      	};
			class BWplus_Lamps_off {
			    displayName = "$STR_BWplus_Vehicles_LightsOff";
			    icon = "BWplus_vehicles\UI\bwplus_lamp_ca.paa";
			    priority = 0.5;
		    	distance = 5;
			    condition = "(AGM_Interaction_Target getVariable ""BWplus_lamp_on"")";
			    statement = "[AGM_Interaction_Target, ""BWplus_vehicles_fnc_lamps_off"",nil,true] spawn BIS_fnc_MP";
		    };	
		};
	};
};