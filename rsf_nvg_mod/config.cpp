class CfgPatches
{
	class rsf_ngv_mod
	{
		name = "RSF NVG Adjustment Mod";
		author = "SpartanD39";
		url = "";
		version="0.8.0";
		versionStr="0.8.0";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Exp",
			"A3_Weapons_F_Enoch",
			"A3_Anims_F_Config_Sdr",
			"A3_Data_F",
			"A3_Ui_F",
			"uk3cb_baf_equipment",
			"ace_nightvision"
		};
		units[] = {};
		weapons[] = {"rsf_HMNVG_spec"};
	};
};

class CfgWeapons
{
  class NVGoggles;
  class UK3CB_BAF_HMNVS;
  class NVGogglesB_blk_F: NVGoggles {};
  class rsf_HMNVG_spec: UK3CB_BAF_HMNVS
  {
    descriptionShort = "NV/TI Monocular";
    displayName = "Head-Mounted NV System [BAF - Mod RSF]";
	ace_nightvision_border = "\uk3cb_baf_equipment\nvg\data\hmnvs_mask_4096.paa";
    model = "\uk3cb_baf_equipment\nvg\HMNVS_UP";
    modelOptics = "";
    picture = "\UK3CB_BAF_Equipment\nvg\data\ui\HMNVS_ca.paa";
	visionMode[] =
	{
		"Normal",
		"NVG",
		"TI"
	};
    class ItemInfo
    {
      modelOff = "\uk3cb_baf_equipment\nvg\HMNVS_UP.p3d";
      type = 616;
      uniformModel = "\uk3cb_baf_equipment\nvg\HMNVS_DOWN.p3d";
    };
  };
};
