:: Simple script to test DayZ mods - requires a simple P:\singleplayer.ChernarusPlus mission folder
:: See this guide to set that up: https://medium.com/@jkamienski/beginners-guide-to-dayz-mods-development-de3055a10d31
:: My own set up for that is at: https://github.com/goonwolf666/LoadingScreensMod/tree/main/HelpfulFiles/P_singleplayer.ChernarusPlus

C:
CD "C:\Program Files (x86)\Steam\steamapps\common\DayZ"

:: Update the "-mod=" path below to the folder where you packed your addon:
.\DayZDiag_x64.exe -mod=P:\LoadingScreensPacked -mission=P:\singleplayer.ChernarusPlus
