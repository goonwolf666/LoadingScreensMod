# Basic DayZ Loading-Screens Mod for v1.29
DayZ loading screens mod that uses imagesets created with [WoozyMasta's imageset-packer tool](https://github.com/WoozyMasta/imageset-packer). 
This approach avoids the washed-out alpha issues that popped up in v1.29. This is set up to select one of 12 images as a background to the server loading / queue / countdown screens.


## Instructions for creating and packing the images (longer than I like sorry):
1. Install/run DayZ Tools and mount your P drive
2. Download this repo and extract it, so you have a P:\LoadingScreensMod\config.cpp with data\ and scripts\ subfolders
3. Download the latest release of WoozyMasta's imageset-packer [found here](https://github.com/WoozyMasta/imageset-packer/releases/tag/v0.1.3) (windows PC users want the 'imageset-packer-windows-amd64.exe' release), and save imageset-packer.exe file in P:\LoadingScreenMod
5. Create your loading images as 1920x1080 png files and save them somewhere safe as 'loading1.png', 'loading2.png' (etc).
6. Make a temporary _P:\LoadingScreensMod\pics_ folder
7. Copy the **_first 6_** of your png files into there
8. Open a command prompt and go to _P:\LoadingScreensMod_ and from there, run:
```cmd
imageset-packer pack ./pics ./data -F dxt5 -q 8 -n loading_screens1
```
8. You should now have _loading_screens**1**.edds_ and _loading_screens**1**.imageset_ in your _P:\LoadingScreensMod\data_ folder
9. Delete the png files in your temporary _\pics_ folder, and repeat steps 7 and 8 for your **_next 6_** image. When you run the script snippet at stage 7 change the number on the end of the last _loading_screens_ parameter to _**2**_.
> If you want to use more than 12 images, you should be able to repeat these steps makibng sure to update the imageset _**number**_ in the -n switch
10. Open Workbench from the DayZ Tools and navigate to the EDDS files you made in _P:\LoadingScreenMod\data_. They should kinda look like:
> <img src="dayzworkbench1.jpg" width="600">
11. Now navigate to the imageset files you made in the same folder, and they might look like this:
> <img src="dayzworkbench2.jpg" width="600">
12. Double-click the 'Path' highlighted there and browse to the EDD files in the same folder. The path should update to include a GUID prefix thats required to access the texture correctly (I guess?!), and now look something like:
> <img src="dayzworkbench3.jpg" width="600">

13. Right-click the imageset you update in the workbench browser and 'Save Selection', and repeat for all other imagesets you created
14. Thats it! You can delete the temporary _\pics_ folder, then compile and test =) :shipit:


## Issues/notes:
- This was way more annoying that expected!
- Woozys imageset-packer makes a fucking IMPOSSIBLE job just annoying, blessings on him
- While that tool does an amazing job, the trick seems to be updating the texture path in workbench to get the GUID prefix
- Many thanks to Strykar and the other helpful folk who worked through these issues in the [DayZ Modders UI-UX discord](https://discord.com/channels/452035973786632194/498756118906929162)
- I am probably an idiot and there's an easier way to do this?
