class CfgPatches {
    class BWplus_uniforms {
        units[] = {
            BWplus_Box_HeadGear,
            BWplus_Item_Cap_Green,
            BWplus_Item_Cap_Sand,
            BWplus_Item_LBG_shemagh_Green,
            BWplus_Item_LBG_shemagh_Sand,
            BWplus_Item_LCG_shemagh_Green,
            BWplus_Item_LCG_shemagh_Sand,
            BWplus_Item_LOG_shemagh_Green,
            BWplus_Item_LOG_shemagh_Sand,
            BWplus_Item_shemagh_Green,
            BWplus_Item_shemagh_Sand,
            BWplus_Item_Beret_Sani,
            BWplus_Item_Beret_Fldjgr,
            BWplus_Item_Beret_Pio,
            BWplus_Item_Beret_Frnmldr
        };
        weapons[] = {
            BWplus_Cap_Sand,
            BWplus_Cap_Green,
            BWplus_LBG_shemagh_Green,
            BWplus_LBG_shemagh_Sand,
            BWplus_LCG_shemagh_Green,
            BWplus_LCG_shemagh_Sand,
            BWplus_LOG_shemagh_Green,
            BWplus_LOG_shemagh_Sand,
            BWplus_shemagh_Green,
            BWplus_shemagh_Sand,
            BWplus_Beret_Sani,
            BWplus_Beret_Fldjgr,
            BWplus_Beret_Pio,
            BWplus_Beret_Frnmldr
        };
        requiredVersion = 0.1;
        requiredAddons[] = {BWplus_core};
        version = "1.4";
        versionStr = "1.4";
        versionAr[] = {1,4,0};
        author[] = {"EduardLaser","Ir0n1E"};
        authorUrl = "http://ntalpha.de";
        magazines[] = {};
        ammo[] = {};
    };
};
class CfgFunctions {
    class BWplus_uniforms {
        class BWplus_uniforms {
            file = "bwplus_uniforms\fnc";
            class addGlasses;
            class hasGlasses;
            class hasGlassesinItems;
            class removeGlasses;
        };
    };
};
class CfgVehicleClasses {
    class BWplus_Glasses {
        displayName = "$STR_BWplus_Glasses";
    };
};

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
};

class CfgVehicles {
    class Man;
    class CAManBase : Man {
        class AGM_SelfActions {
            class AGM_Equipment {
                class BWplus_addGoggles {
                    displayName = "$STR_BWplus_AddGoggles";
                    priority = 1.5;
                    condition = "call BWplus_uniforms_fnc_hasGlassesinItems";
                    statement = "call BWplus_uniforms_fnc_addGlasses";
                    showDisabled = 0;
                    enableInside = 1;
                };
                class BWplus_removeGoggles {
                    displayName = "$STR_BWplus_removeGoggles";
                    priority = 1;
                    condition = "call BWplus_uniforms_fnc_hasGlasses";
                    statement = "call BWplus_uniforms_fnc_removeGlasses";
                    showDisabled = 0;
                    enableInside = 1;
                };
            };
        };
    };
    class Box_NATO_Support_F;
    class BWplus_Box_HeadGear: Box_NATO_Support_F {
        author = "BW.plus";
        displayName = "$STR_BWplus_box_HeadGear";
        scope = 2;
        scopeCurator = 2;
        transportmaxmagazines = 9001;
        transportmaxbackbacks = 0;
        maximumload = 2000;
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportItems {
            MACRO_ADDITEM(BWplus_Cap_Green, 5)
            MACRO_ADDITEM(BWplus_Cap_Sand, 5)
            MACRO_ADDITEM(BBWplus_LOG_shemagh_Sand, 5)
            MACRO_ADDITEM(BWplus_LOG_shemagh_Green, 5)
            MACRO_ADDITEM(BWplus_LCG_shemagh_Sand, 5)
            MACRO_ADDITEM(BWplus_LCG_shemagh_Green, 5)
            MACRO_ADDITEM(BWplus_LBG_shemagh_Sand, 5)
            MACRO_ADDITEM(BWplus_LBG_shemagh_Green, 5)
            MACRO_ADDITEM(BWplus_shemagh_Sand, 5)
            MACRO_ADDITEM(BWplus_shemagh_Green, 5)
            MACRO_ADDITEM(BWplus_Beret_Sani, 5)
            MACRO_ADDITEM(BWplus_Beret_Fldjgr, 5)
            MACRO_ADDITEM(BWplus_Beret_Pio, 5)
            MACRO_ADDITEM(BWplus_Beret_Frnmldr, 5)
        };
    };
    
    class Item_Base_F;
    class BWplus_Item_Cap_Sand : Item_Base_F {
        author = "BW.plus";
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_BWplus_Cap_Sand";
        vehicleClass = "ItemsHeadgear";
        class TransportItems {
            MACRO_ADDITEM(BWplus_Cap_Sand, 1)
        };
    };
    class BWplus_Item_Cap_Green : Item_Base_F {
        author = "BW.plus";
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_BWplus_Cap_Green";
        vehicleClass = "ItemsHeadgear";
        class TransportItems {
          MACRO_ADDITEM(BWplus_Cap_Green, 1)
        };
    };
    class BWplus_Item_shemagh_Green : Item_Base_F {
        author = "BW.plus";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "BWplus_Glasses";
        displayname = "$STR_BWplus_Shemagh_Green";
        class TransportItems {
            MACRO_ADDITEM(BWplus_shemagh_Green, 1)
        };
    };
    class BWplus_Item_shemagh_Sand : BWplus_Item_shemagh_Green {
        displayname = "$STR_BWplus_Shemagh_Sand";
        class TransportItems {
            MACRO_ADDITEM(BWplus_shemagh_Sand, 1)
        };
    };
    class BWplus_Item_LOG_shemagh_Sand : BWplus_Item_shemagh_Green {
        displayname = "$STR_BWplus_LOG_Shemagh_Sand";
        class TransportItems {        
            MACRO_ADDITEM(BWplus_LOG_shemagh_Sand, 1)
        };
    };
    class BWplus_Item_LOG_shemagh_Green : BWplus_Item_shemagh_Green {
        displayname = "$STR_BWplus_LOG_Shemagh_Green";
        class TransportItems {
            MACRO_ADDITEM(BWplus_LOG_shemagh_Green, 1)
        };
    };
    class BWplus_Item_LBG_shemagh_Sand : BWplus_Item_shemagh_Green {
        displayname = "$STR_BWplus_LBG_Shemagh_Sand";
        class TransportItems {
            MACRO_ADDITEM(BWplus_LBG_shemagh_Sand, 1)
        };
    };
    class BWplus_Item_LBG_shemagh_Green : BWplus_Item_shemagh_Green {
        displayname = "$STR_BWplus_LBG_Shemagh_Green";
        class TransportItems {
            MACRO_ADDITEM(BWplus_LBG_shemagh_Green, 1)
        };
    };
    class BWplus_Item_LCG_shemagh_Sand : BWplus_Item_shemagh_Green {
        displayname = "$STR_BWplus_LCG_Shemagh_Sand";
        class TransportItems {
            MACRO_ADDITEM(BWplus_LCG_shemagh_Sand, 1)
        };
    };
    class BWplus_Item_LCG_shemagh_Green : BWplus_Item_shemagh_Green {
        displayname = "$STR_BWplus_LOG_Shemagh_Green";
        class TransportItems {
            MACRO_ADDITEM(BWplus_LCG_shemagh_Green, 1)
        };
    };
    class BWplus_Item_Beret_Sani: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_BWplus_uniforms_beretsani";
        vehicleClass = "ItemsHeadgear";

        class TransportItems {
           MACRO_ADDITEM(BWplus_Beret_Sani, 1)
        };
    };
    class BWplus_Item_Beret_Fldjr: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_BWplus_uniforms_beretfldjgr";
        vehicleClass = "ItemsHeadgear";

        class TransportItems {
           MACRO_ADDITEM(BWplus_Beret_Fldjgr, 1)
        };
    };
    class BWplus_Item_Beret_Pio: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_BWplus_uniforms_beretPio";
        vehicleClass = "ItemsHeadgear";

        class TransportItems {
           MACRO_ADDITEM(BWplus_Beret_Pio, 1)
        };
    };
    class BWplus_Item_Beret_Frnmldr: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_BWplus_uniforms_beretFrnmldr";
        vehicleClass = "ItemsHeadgear";

        class TransportItems {
           MACRO_ADDITEM(BWplus_Beret_Frnmldr, 1)
        };
    };
};
class CfgGlasses {
    class None {
        BWplus_Glassestype = "None";
    };
    class BWplus_Shemagh_Green : None {
        displayname = "$STR_BWplus_Shemagh_Green";
        author = "BW.plus";
        model = "bwplus_uniforms\bwplus_LooseShemaghGreen.p3d";
        picture = "\bwplus_uniforms\data\bwplus_icon_shemagh_Green.paa";
        identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
        BWplus_Glassestype = "Shemagh";
        BWplus_Color = "Green";
        AGM_OverlayDirt = "";
        AGM_OverlayCracked = "";
        AGM_Resistance = 0;
        AGM_Protection = 0;
        AGM_DustPath = "";
    };
    class BWplus_Shemagh_Sand : BWplus_Shemagh_Green {
        displayname = "$STR_BWplus_Shemagh_Sand";
        model = "\bwplus_uniforms\bwplus_LooseShemaghSand.p3d";
        picture = "\bwplus_uniforms\data\bwplus_icon_shemagh_Sand.paa";
        BWplus_Color = "Sand";
    };
    class BWplus_LOG_Shemagh_Green : None {
        displayname = "$STR_BWplus_LOG_Shemagh_Green";
        model = "\bwplus_uniforms\bwplus_LOGLooseGreen.p3d";
        author = "BW.plus";
        identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
        picture = "\bwplus_uniforms\data\bwplus_icon_LOG_shemagh_Green.paa";
        AGM_TintAmount = "8.0*1.5";
        AGM_Color[] = {0,0,-1.5};
        AGM_Resistance = 1;
        BWplus_Glassestype = "BWA3_G_Combat_Orange";
        BWplus_Color = "Green";
    };
    class BWplus_LOG_Shemagh_Sand : BWplus_LOG_Shemagh_Green {
        displayname = "$STR_BWplus_LOG_Shemagh_Sand";
        model = "\bwplus_uniforms\bwplus_LOGlooseSand.p3d";
        picture = "\bwplus_uniforms\data\bwplus_icon_LOG_shemagh_Sand.paa";
        AGM_TintAmount = "8.0*1.5";
        AGM_Color[] = {0,0,-1.5};
        AGM_Resistance = 1;
        BWplus_Glassestype = "BWA3_G_Combat_Orange";
        BWplus_Color = "Sand";
    };
    class BWplus_LBG_Shemagh_Green : BWplus_LOG_Shemagh_Green {
        displayname = "$STR_BWplus_LBG_Shemagh_Green";
        model = "\bwplus_uniforms\bwplus_LBGLooseGreen.p3d";
        picture = "\bwplus_uniforms\data\bwplus_icon_LBG_shemagh_Green.paa";
        AGM_TintAmount = 8.0;
        AGM_Color[] = {0,0,-1};
        AGM_Resistance = 1;
        BWplus_Glassestype = "BWA3_G_Combat_Black";
        BWplus_Color = "Green";
    };
    class BWplus_LBG_Shemagh_Sand : BWplus_LOG_Shemagh_Green {
        displayname = "$STR_BWplus_LBG_Shemagh_Sand";
        model = "\bwplus_uniforms\bwplus_LBGLooseSand.p3d";
        picture = "\bwplus_uniforms\data\bwplus_icon_LBG_shemagh_Sand.paa";
        AGM_TintAmount = 8.0;
        AGM_Color[] = {0,0,-1};
        AGM_Resistance = 1;
        BWplus_Glassestype = "BWA3_G_Combat_Black";
        BWplus_Color = "Sand";
    };
    class BWplus_LCG_Shemagh_Green : BWplus_LOG_Shemagh_Green {
        displayname = "$STR_BWplus_LCG_Shemagh_Green";
        model = "\bwplus_uniforms\bwplus_LCGLooseGreen.p3d";
        picture = "\bwplus_uniforms\data\bwplus_icon_LCG_shemagh_Green.paa";
        AGM_TintAmount = 8.0;
        AGM_Color[] = {0,0,0};
        AGM_Resistance = 1;
        BWplus_Glassestype = "BWA3_G_Combat_Clear";
        BWplus_Color = "Green";
    };
    class BWplus_LCG_Shemagh_Sand : BWplus_LOG_Shemagh_Green {
        displayname = "$STR_BWplus_LCG_Shemagh_Sand";
        model = "\bwplus_uniforms\bwplus_LCGLooseSand.p3d";
        picture = "\bwplus_uniforms\data\bwplus_icon_LCG_shemagh_Sand.paa";
        AGM_TintAmount = 8.0;
        AGM_Color[] = {0,0,0};
        AGM_Resistance = 1;
        BWplus_Glassestype = "BWA3_G_Combat_Clear";
        BWplus_Color = "Sand";
    };
    class G_Shades_Black;
    class BWA3_G_Combat_Orange : G_Shades_Black {
        BWplus_Color = "LOG";
        AGM_TintAmount = "8.0*1.5";
        AGM_Color[] = {0,0,-1.5};
        AGM_Resistance = 1;
    };
    class BWA3_G_Combat_Black : G_Shades_Black {
        BWplus_Color = "LBG";
        AGM_TintAmount = 8.0;
        AGM_Color[] = {0,0,-1};
        AGM_Resistance = 1;
    };
    class BWA3_G_Combat_Clear : G_Shades_Black {
        BWplus_Color = "LCG";
        AGM_TintAmount = 8.0;
        AGM_Color[] = {0,0,0};
        AGM_Resistance = 1;
    };
};

class CfgWeapons {
    class BWA3_Beret_PzGren;
    class H_Cap_red;
    
    class BWplus_Cap_Green : H_Cap_red {
        author = "BW.plus";
        displayName = "$STR_BWplus_Cap_Green";
        picture = "\bwplus_uniforms\data\bwplus_icon_capb_green_ca.paa";
        hiddenSelectionsTextures[] = {"\bwplus_uniforms\data\bwplus_capb_green_co.paa"};
    };
    class BWplus_Cap_Sand : H_Cap_red {
        author = "BW.plus";
        displayName = "$STR_BWplus_Cap_Sand";
        picture = "\bwplus_uniforms\data\bwplus_icon_capb_sand_ca.paa";
        hiddenSelectionsTextures[] = {"\bwplus_uniforms\data\bwplus_capb_sand_co.paa"};
    };
    
    class BWplus_Beret_Sani: BWA3_Beret_PzGren {
        author = "BWA3 / BW.plus";
        displayName = "$STR_BWplus_uniforms_beretsani";
        picture = "\bwa3_units\UI\bwa3_beret_blau_x_ca.paa";
        hiddenSelectionsTextures[] = {"\bwplus_uniforms\data\bwplus_beret_san_co.paa"};
    };
    class BWplus_Beret_Fldjgr: BWA3_Beret_PzGren {
        author = "BWA3 / BW.plus";
        displayName = "$STR_BWplus_uniforms_beretfldjgr";
        picture = "\bwa3_units\UI\bwa3_beret_rot_x_ca.paa";
        hiddenSelectionsTextures[] = {"\bwplus_uniforms\data\bwplus_beret_fldjgr_co.paa"};
    };
    class BWplus_Beret_Pio: BWA3_Beret_PzGren {
        author = "BWA3 / BW.plus";
        displayName = "$STR_BWplus_uniforms_beretpio";
        picture = "\bwa3_units\UI\bwa3_beret_rot_x_ca.paa";
        hiddenSelectionsTextures[] = {"\bwplus_uniforms\data\bwplus_beret_pio_co.paa"};
    };
    class BWplus_Beret_Frnmldr: BWA3_Beret_PzGren {
        author = "BWA3 / BW.plus";
        displayName = "$STR_BWplus_uniforms_beretfrnmldr";
        picture = "\bwa3_units\UI\bwa3_beret_rot_x_ca.paa";
        hiddenSelectionsTextures[] = {"\bwplus_uniforms\data\bwplus_beret_frnmldr_co.paa"};
    };
};