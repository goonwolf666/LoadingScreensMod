# Simple Loading Screens Template mod for DayZ v1.29 :dizzy:
This is a simple DayZ loading screens template that uses imagesets created with [Strykar86's Imageset Editior](https://github.com/Strykar86/DayZ-Imageset-Editor). 
Use these instructions to convert 12 of your own 1920x1080 PNG files to imageset(s), which corrects the washed-out issue that popped up in v1.29.
The included code will randomly select a background from that imageset for your server's loading / queue / countdown screens.
With a bit of extra editing, you can easily add many more images or add backgrounds of a much higher resolution.
  
**You can subscribe to a packed version of this mod (using the included demo images) from the Steam Workshop here:**
https://steamcommunity.com/sharedfiles/filedetails/?id=3742527843

## Basic Instructions for creating your own imageset: :satellite:
1. Install/run DayZ Tools and mount your P: drive
2. Download this repo and extract the 'LoadingScreensMod' folder to P: drive, so you have:
   - A _P:\LoadingScreensMod\config.cpp_ file
   - A _P:\LoadingScreensMod\scripts\3_game\_loadingscreens.c_ file
   - A _P:\LoadingScreensMod\data_ subfolder
3. Also download:
   - The latest release of [Strykar's Imageset Editor](https://github.com/Strykar86/DayZ-Imageset-Editor/releases/tag/v1.3) to build the imageset
   - (Optional) the latest release of [Tyson's RaG-PBO-Builder](https://github.com/Tyson89/RaG-PBO-Builder) to pack your mod
4. Copy your own loading screen PNG files into the _P:\LoadingScreensMod\data_ folder, noting:
   - You can delete all the example files in there first
   - Your new files should be named from 'loading1.png' to 'loading12.png'
   - While the current code is set up for **12** screens, you can adjust this by editing line 13 of _loadingscreens.c_
   - These instructions are for 1920x1080 resolution images, but you can use higher res or multiple imagesets by editing _loadingscreens.c_
5. Create the Imageset by:
   - Running Strykar's Imageset Editor
   - Adjust the canvas size (in top menu) to **8192**
   - Click '**Import Image(s)**' and select your 12 PNG files in the _\data_ folder
   - Click '**EXPORT IMAGESET + EDDS**', and choose the _\data_ we're working in
   - Name the imageset _'loading_screens1'_
6. Confirm and cleanup:
   - If you have _loading_screens1.EDDS_ and _loading_screens1.imageset_ in your _\data_ folder, you can delete all the PNGs files
7. Pack and test:
   - Use your preferred program to pack the source in _P:\LoadingScreensMod\_ 
   - RaG's PBO Builder works well for this
   - Test the mod using DayZDiag or a local server (example bat/server files are included in the [HelpfulFiles folder](/HelpfulFiles)
   - Publish and you're done :shipit: 
 
## Issues/notes: :finnadie:
- Many thanks to Strykar and the other helpful folk who worked through these issues in the [DayZ Modders UI-UX discord](https://discord.com/channels/452035973786632194/498756118906929162)
- This uses the vanilla game layout files, which means the usual loading progress bar/queue position/count down widgets appear on the bottom of the screen.
- You can hide/show any other widgets, but you should confirm how they're referenced in the [the vanilla source](https://github.com/BohemiaInteractive/DayZ-Script-Diff/blob/c75a7824add7619616f2516402ff0f7018299a8a/scripts/3_game/dayzgame.c#L688) and the [Vanilla Layout files](/HelpfulFiles/Vanilla_Layout_Files)
- My own loading screens are on [the Steam workshop here](https://steamcommunity.com/sharedfiles/filedetails/?id=3740022109), if you want to decompile/compare go crazy
- If you wanted to use [Woozy's imageset-packer](https://github.com/WoozyMasta/imageset-packer) OR see how to do a multi-imageset version, refer to my old (more complicated) [instructions here](README_OLD.md)
