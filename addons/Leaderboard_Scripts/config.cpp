class CfgPatches
{
	class IntenzLeaderboard_scripts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};

class CfgMods
{
	class IntenzLeaderboard
	{
		type = "mod";
		dependencies[] = {"Game", "World", "Mission"};
		
		class defs
		{	
			class gameScriptModule
			{
				value = "";
				files[] = {"Leaderboard_Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"Leaderboard_Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Leaderboard_Scripts/5_Mission"};
			};
		};
	};
};