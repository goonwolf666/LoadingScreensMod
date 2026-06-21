:: Simple script to test DayZ mods - requires the 'P:\singleplayer.ChernarusPlus mission' folder
:: See this guide to set that up: https://medium.com/@jkamienski/beginners-guide-to-dayz-mods-development-de3055a10d31
:: My own set up for that is at: https://github.com/goonwolf666/LoadingScreensMod/tree/main/HelpfulFiles/P_singleplayer.ChernarusPlus
::
:: Update the "-mod=" path in line 10 so it points to the folder where you packed your addon
:: If your DayZ client isnt installed in the defaut location, you'll need to update the drive name on line 8 and/or the exe path on line 9 too

C:
CD "C:\Program Files (x86)\Steam\steamapps\common\DayZ"
.\DayZDiag_x64.exe -mod=P:\LoadingScreensPacked -mission=P:\singleplayer.ChernarusPlus
