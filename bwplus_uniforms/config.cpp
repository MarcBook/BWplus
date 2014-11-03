////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.74
//Mon Nov 03 12:11:09 2014 : Source 'file' date Mon Nov 03 12:11:09 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class P:\bwplus_uniforms\config.bin{
class CfgPatches
{
	class BWplus_uniforms
	{
		units[] = {"BWplus_Box_Items","BWplus_Item_Cap_Green","BWplus_Item_Cap_Sand","BWplus_Item_LBG_shemagh_Green","BWplus_Item_LBG_shemagh_Sand","BWplus_Item_LCG_shemagh_Green","BWplus_Item_LCG_shemagh_Sand","BWplus_Item_LOG_shemagh_Green","BWplus_Item_LOG_shemagh_Sand","BWplus_Item_shemagh_Green","BWplus_Item_shemagh_Sand"};
		weapons[] = {"BWplus_Cap_Sand","BWplus_Cap_Green"};
		requiredVersion = 0.1;
		requiredAddons[] = {"bwa3_units"};
		version = "1.3";
		versionStr = "1.3";
		versionAr[] = {1,3,0};
		author[] = {"EduardLaser","Ir0n1E"};
		authorUrl = "http://ntalpha.de";
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgFunctions
{
	class BWplus_uniforms
	{
		class BWplus_uniforms
		{
			file = "bwplus_uniforms\fnc";
			class addGlasses;
			class hasGlasses;
			class hasGlassesinItems;
			class removeGlasses;
		};
	};
};
class CfgVehicleClasses
{
	class BWplus_Glasses
	{
		displayName = "$STR_BWplus_Glasses";
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class AGM_SelfActions
		{
			class AGM_Equipment
			{
				class BWplus_addGoggles
				{
					displayName = "$STR_BWplus_AddGoggles";
					priority = 1.5;
					condition = "call BWplus_uniforms_fnc_hasGlassesinItems";
					statement = "call BWplus_uniforms_fnc_addGlasses";
					showDisabled = 0;
					enableInside = 1;
				};
				class BWplus_removeGoggles
				{
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
	class BWplus_Box_Items: Box_NATO_Support_F
	{
		author = "BWPlus";
		displayName = "$STR_BWplus_box_Items";
		scope = 2;
		scopeCurator = 2;
		transportmaxmagazines = 9001;
		transportmaxbackbacks = 0;
		maximumload = 2000;
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_BWplus_Cap_Green
			{
				name = "BWplus_Cap_Green";
				count = 5;
			};
			class _xx_BWplus_Cap_Sand
			{
				name = "BWplus_Cap_Sand";
				count = 5;
			};
			class _xx_BWplus_LOG_shemagh_Sand
			{
				name = "BWplus_LOG_shemagh_Sand";
				count = 5;
			};
			class _xx_BWplus_LOG_shemagh_Green
			{
				name = "BWplus_LOG_shemagh_Green";
				count = 5;
			};
			class _xx_BWplus_LCG_shemagh_Sand
			{
				name = "BWplus_LCG_shemagh_Sand";
				count = 5;
			};
			class _xx_BWplus_LCG_shemagh_Green
			{
				name = "BWplus_LCG_shemagh_Green";
				count = 5;
			};
			class _xx_BWplus_LBG_shemagh_Sand
			{
				name = "BWplus_LBG_shemagh_Sand";
				count = 5;
			};
			class _xx_BWplus_LBG_shemagh_Green
			{
				name = "BWplus_LBG_shemagh_Green";
				count = 5;
			};
			class _xx_BWplus_shemagh_Sand
			{
				name = "BWplus_shemagh_Sand";
				count = 5;
			};
			class _xx_BWplus_shemagh_Green
			{
				name = "BWplus_shemagh_Green";
				count = 5;
			};
		};
	};
	class Item_Base_F;
	class BWplus_Item_Cap_Sand: Item_Base_F
	{
		author = "BWplus";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWplus_Cap_Sand";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class BWplus_Cap_Sand
			{
				name = "BWplus_Cap_Sand";
				count = 1;
			};
		};
	};
	class BWplus_Item_Cap_Green: Item_Base_F
	{
		author = "BWplus";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWplus_Cap_Green";
		vehicleClass = "ItemsHeadgear";
		class TransportItems
		{
			class BWplus_Cap_Green
			{
				name = "BWplus_Cap_Green";
				count = 1;
			};
		};
	};
	class BWplus_Item_shemagh_Green: Item_Base_F
	{
		author = "BWplus";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "BWplus_Glasses";
		displayname = "$STR_BWplus_Shemagh_Green";
		class TransportItems
		{
			class BWplus_L_shemagh_Green
			{
				name = "BWplus_shemagh_Green";
				count = 1;
			};
		};
	};
	class BWplus_Item_shemagh_Sand: BWplus_Item_shemagh_Green
	{
		displayname = "$STR_BWplus_Shemagh_Sand";
		class TransportItems
		{
			class BWplus_L_shemagh_Sand
			{
				name = "BWplus_shemagh_Sand";
				count = 1;
			};
		};
	};
	class BWplus_Item_LOG_shemagh_Sand: BWplus_Item_shemagh_Green
	{
		displayname = "$STR_BWplus_LOG_Shemagh_Sand";
		class TransportItems
		{
			class BWplus_LOG_shemagh_Sand
			{
				name = "BWplus_LOG_shemagh_Sand";
				count = 1;
			};
		};
	};
	class BWplus_Item_LOG_shemagh_Green: BWplus_Item_shemagh_Green
	{
		displayname = "$STR_BWplus_LOG_Shemagh_Green";
		class TransportItems
		{
			class BWplus_LOG_shemagh_Green
			{
				name = "BWplus_LOG_shemagh_Green";
				count = 1;
			};
		};
	};
	class BWplus_Item_LBG_shemagh_Sand: BWplus_Item_shemagh_Green
	{
		displayname = "$STR_BWplus_LBG_Shemagh_Sand";
		class TransportItems
		{
			class BWplus_LBG_shemagh_Sand
			{
				name = "BWplus_LBG_shemagh_Sand";
				count = 1;
			};
		};
	};
	class BWplus_Item_LBG_shemagh_Green: BWplus_Item_shemagh_Green
	{
		displayname = "$STR_BWplus_LBG_Shemagh_Green";
		class TransportItems
		{
			class BWplus_LBG_shemagh_Green
			{
				name = "BWplus_LBG_shemagh_Green";
				count = 1;
			};
		};
	};
	class BWplus_Item_LCG_shemagh_Sand: BWplus_Item_shemagh_Green
	{
		displayname = "$STR_BWplus_LCG_Shemagh_Sand";
		class TransportItems
		{
			class BWplus_LCG_shemagh_Sand
			{
				name = "BWplus_LCG_shemagh_Sand";
				count = 1;
			};
		};
	};
	class BWplus_Item_LCG_shemagh_Green: BWplus_Item_shemagh_Green
	{
		displayname = "$STR_BWplus_LOG_Shemagh_Green";
		class TransportItems
		{
			class BWplus_LCG_shemagh_Green
			{
				name = "BWplus_LCG_shemagh_Green";
				count = 1;
			};
		};
	};
};
class CfgGlasses
{
	class None
	{
		BWplus_Glassestype = "None";
	};
	class BWplus_Shemagh_Green: None
	{
		displayname = "$STR_BWplus_Shemagh_Green";
		author = "BWplus";
		model = "bwplus_uniforms\bwplus_LooseShemaghGreen.p3d";
		picture = "bwplus_uniforms\data\bwplus_icon_shemagh_Green.paa";
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		BWplus_Glassestype = "Shemagh";
		BWplus_Color = "Green";
		AGM_OverlayDirt = "";
		AGM_OverlayCracked = "";
		AGM_Resistance = 0;
		AGM_Protection = 0;
		AGM_DustPath = "";
	};
	class BWplus_Shemagh_Sand: BWplus_Shemagh_Green
	{
		displayname = "$STR_BWplus_Shemagh_Sand";
		model = "\bwplus_uniforms\bwplus_LooseShemaghSand.p3d";
		picture = "\bwplus_uniforms\data\bwplus_icon_shemagh_Sand.paa";
		BWplus_Color = "Sand";
	};
	class BWplus_LOG_Shemagh_Green: None
	{
		displayname = "$STR_BWplus_LOG_Shemagh_Green";
		model = "\bwplus_uniforms\bwplus_LOGLooseGreen.p3d";
		author = "BWplus";
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		picture = "\bwplus_uniforms\data\bwplus_icon_LOG_shemagh_Green.paa";
		BWplus_Glassestype = "BWA3_G_Combat_Orange";
		BWplus_Color = "Green";
		AGM_TintAmount = "8.0*1.5";
		AGM_Color[] = {0,0,-1.5};
		AGM_Resistance = 1;
	};
	class BWplus_LOG_Shemagh_Sand: BWplus_LOG_Shemagh_Green
	{
		displayname = "$STR_BWplus_LOG_Shemagh_Sand";
		model = "\bwplus_uniforms\bwplus_LOGlooseSand.p3d";
		picture = "\bwplus_uniforms\data\bwplus_icon_LOG_shemagh_Sand.paa";
		BWplus_Glassestype = "BWA3_G_Combat_Orange";
		BWplus_Color = "Sand";
		AGM_TintAmount = "8.0*1.5";
		AGM_Color[] = {0,0,-1.5};
		AGM_Resistance = 1;
	};
	class BWplus_LBG_Shemagh_Green: BWplus_LOG_Shemagh_Green
	{
		displayname = "$STR_BWplus_LBG_Shemagh_Green";
		model = "\bwplus_uniforms\bwplus_LBGLooseGreen.p3d";
		picture = "\bwplus_uniforms\data\bwplus_icon_LBG_shemagh_Green.paa";
		AGM_TintAmount = 8.0;
		AGM_Color[] = {0,0,-1};
		AGM_Resistance = 1;
		BWplus_Glassestype = "BWA3_G_Combat_Black";
		BWplus_Color = "Green";
	};
	class BWplus_LBG_Shemagh_Sand: BWplus_LOG_Shemagh_Green
	{
		displayname = "$STR_BWplus_LBG_Shemagh_Sand";
		model = "\bwplus_uniforms\bwplus_LBGLooseSand.p3d";
		picture = "\bwplus_uniforms\data\bwplus_icon_LBG_shemagh_Sand.paa";
		AGM_TintAmount = 8.0;
		AGM_Color[] = {0,0,-1};
		AGM_Resistance = 1;
		BWplus_Glassestype = "BWA3_G_Combat_Black";
		BWplus_Color = "Sand";
	};
	class BWplus_LCG_Shemagh_Green: BWplus_LOG_Shemagh_Green
	{
		displayname = "$STR_BWplus_LCG_Shemagh_Green";
		model = "\bwplus_uniforms\bwplus_LCGLooseGreen.p3d";
		picture = "\bwplus_uniforms\data\bwplus_icon_LCG_shemagh_Green.paa";
		AGM_TintAmount = 8.0;
		AGM_Color[] = {0,0,0};
		AGM_Resistance = 1;
	};
	class BWplus_LCG_Shemagh_Sand: BWplus_LOG_Shemagh_Green
	{
		displayname = "$STR_BWplus_LCG_Shemagh_Sand";
		model = "\bwplus_uniforms\bwplus_LCGLooseSand.p3d";
		picture = "\bwplus_uniforms\data\bwplus_icon_LCG_shemagh_Sand.paa";
		AGM_TintAmount = 8.0;
		AGM_Color[] = {0,0,0};
		AGM_Resistance = 1;
	};
	class G_Shades_Black;
	class BWA3_G_Combat_Orange: G_Shades_Black
	{
		BWplus_Color = "LOG";
		AGM_TintAmount = "8.0*1.5";
		AGM_Color[] = {0,0,-1.5};
		AGM_Resistance = 1;
	};
	class BWA3_G_Combat_Black: G_Shades_Black
	{
		BWplus_Color = "LBG";
		AGM_TintAmount = 8.0;
		AGM_Color[] = {0,0,-1};
		AGM_Resistance = 1;
	};
	class BWA3_G_Combat_Clear: G_Shades_Black
	{
		BWplus_Color = "LCG";
		AGM_TintAmount = 8.0;
		AGM_Color[] = {0,0,0};
		AGM_Resistance = 1;
	};
};
class cfgWeapons
{
	class H_Cap_red;
	class BWplus_Cap_Green: H_Cap_red
	{
		author = "BWplus";
		displayName = "$STR_BWplus_Cap_Green";
		picture = "\bwplus_uniforms\data\bwplus_icon_capb_green_ca.paa";
		hiddenSelectionsTextures[] = {"\bwplus_uniforms\data\bwplus_capb_green_co.paa"};
	};
	class BWplus_Cap_Sand: H_Cap_red
	{
		author = "BWplus";
		displayName = "$STR_BWplus_Cap_Sand";
		picture = "\bwplus_uniforms\data\bwplus_icon_capb_sand_ca.paa";
		hiddenSelectionsTextures[] = {"\bwplus_uniforms\data\bwplus_capb_sand_co.paa"};
	};
};
//};
