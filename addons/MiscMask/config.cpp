class CfgPatches
{
	class Darkness_Misc_Mask
	{
		units[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgGlasses
{
	class G_Bandanna_aviator;
	class G_Bandanna_sport;
	class G_Bandanna_shades;
	class G_Bandanna_blk;
	class G_Balaclava_oli;
	class Balaclava_Joker: G_Balaclava_oli
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Balaclava (Joker)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Balaclavas\Joker.paa"
		};
	};
	class Bandanna_Aviator_Calavera: G_Bandanna_aviator
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Aviator/Calavera)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\Calavera.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
	};
	class SHD_WD2: G_Bandanna_aviator
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Aviator/Watch_Dogs 2)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\WD2.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
	};
	class SHD_Skull: G_Bandanna_aviator
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Aviator/Skull)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\Skull.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
	};
	class SHD_Gas: G_Bandanna_sport
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Sport/Respirator)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\gas.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_2_ca.paa"
		};
	};
	class SHD_Anarchy: G_Bandanna_sport
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Sport/Anarchy)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\anrch.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
		};
	};
	class SHD_Bloods: G_Bandanna_shades
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Shades/Bloods)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\bloods.paa",
			"\a3\characters_f\heads\glasses\data\joeyx_red_ca.paa"
		};
	};
	class SHD_Crips: G_Bandanna_shades
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Shades/Crips)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\crips.paa",
			"\a3\characters_f\heads\glasses\data\joeyx_blue_ca.paa"
		};
	};
	class NSHD_Calavera: G_Bandanna_blk
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Calavera)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\Calavera.paa"
		};
	};
	class NSHD_Ahegao: G_Bandanna_blk
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Ahegao)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\Ahegao.paa"
		};
	};
	class NSHD_Shark: G_Bandanna_blk
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Shark)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\Shark.paa"
		};
	};
	class NSHD_Shrek: G_Bandanna_blk
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Shrek)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\Shrek.paa"
		};
	};
	class NSHD_Skull: G_Bandanna_blk
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Skull)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\Skull.paa"
		};
	};
	class NSHD_Diamonds: G_Bandanna_blk
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Diamonds)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\dmnd.paa"
		};
	};
	class NSHD_WD1: G_Bandanna_blk
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Watch_Dogs)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\WD1.paa"
		};
	};
	class NSHD_WD2: G_Bandanna_blk
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Watch_Dogs 2)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\WD2.paa"
		};
	};
	class NSHD_SrmXLV: G_Bandanna_blk
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Supreme X Louis Vuitton)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\srmXlv.paa"
		};
	};
	class NSHD_Gas: G_Bandanna_blk
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Respirator)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\gas.paa"
		};
	};
	class NSHD_LV: G_Bandanna_blk
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Louis Vuitton)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\LV.paa"
		};
	};
	class NSHD_Bloods: G_Bandanna_blk
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Bloods)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\bloods.paa"
		};
	};
	class NSHD_Anarchy: G_Bandanna_blk
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Anarchy)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\anrch.paa"
		};
	};
	class NSHD_Stache: G_Bandanna_blk
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Moustache)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\moustache.paa"
		};
	};
	class NSHD_Crips: G_Bandanna_blk
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Crips)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\crips.paa"
		};
	};
	class NSHD_Joy: G_Bandanna_blk
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Cursed)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\cursed.paa"
		};
	};
	class NSHD_TAZ90: G_Bandanna_blk
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Swiss TAZ90)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\TAZ90.paa"
		};
	};
	class NSHD_TAZ07: G_Bandanna_blk
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Swiss TAZ07)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\TAZ07.paa"
		};
	};
	class NSHD_MCAM: G_Bandanna_blk
	{
		author="ChasedByDarkness";
		scope=2;
		picture="\MiscMask\UI\Logo.paa";
		displayName="Bandana (Multicam)";
		hiddenSelectionsTextures[]=
		{
			"\MiscMask\data\Bandanas\MCAM.paa"
		};
	};
};
