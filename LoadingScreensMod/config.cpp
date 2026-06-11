class CfgPatches
{
	class LoadingScreensMod
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={"DZ_Data"};
	};
};

class CfgMods
{
    class MyLoadingScreenMod
    {
        dir = "LoadingScreensMod";
        type = "mod";
        dependencies[] = {"Game"};
        class defs
        {
            class imageSets
            {
                files[] = {
					"LoadingScreensMod/data/loading_screens1.imageset"
					//,"LoadingScreensMod/data/loading_screens2.imageset"	//you can add additional imagesets to this comma-delimited array
				};               
			};
            class gameScriptModule
            {
                value = "";
                files[] = {"LoadingScreensMod/scripts/3_game"};
				
			};
		};
	};
};
