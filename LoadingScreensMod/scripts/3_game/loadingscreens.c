// =================================================================================
//  LoadingScreenHelper
//  Uses Apply(WidgetRoot,BackgroundWidget) to call a random background image AND hide any logos and modded-warning widgets.
//
//  If using multuiple imagesets, :
//    roll 1–6  → set:loading_screens1	image:loading1 … loading6
//    roll 7–12 → set:loading_screens2	image:loading7 … loading12
//	Add more imagesets using this pattern AND updating the if/else in GetImageRef()
// =================================================================================
class LoadingScreenHelper
{
    //static const int IMAGES_PER_SET = 6;	//uncomment and update this if you're using more than one imageset
    static const int TOTAL_IMAGES   = 12;	//update this if you're not using 12 images
	
    //returns the imageset name and image name depending on index int
    static string GetImageRef(int roll, out string imageName)
    {
        string setName;
        int idx;
		
		//if you're using one imageset, this will set a fixed imageset name and assign the random image number
		setName = "loading_screens1";
        idx = roll;
		
		//if you're using two imagesets, this will set the imageset based on the random number and TOTAL_IMAGES / IMAGES_PER_SET 
        /* if (roll <= IMAGES_PER_SET)
        {
            setName   = "loading_screens1";
            idx       = roll;
		}
        else
        {
            setName   = "loading_screens2";
            idx       = roll;
		} */
		
        imageName = "loading" + idx.ToString();
        return setName;
	}
	
    //pass widget owner and name, rolls a random int and applies that image ref
    static void Apply(Widget root, string backgroundWidgetName = "ImageBackground")
    {
        if (!root)
			return;
		
        int roll = Math.RandomIntInclusive(1, TOTAL_IMAGES);
		
        string imageName;
        string setName = GetImageRef(roll, imageName);
		
        ImageWidget bg;
        Class.CastTo(bg, root.FindAnyWidget(backgroundWidgetName));
        if (bg)
        {
            bg.LoadMaskTexture("");
            bg.LoadImageFile(0, "set:" + setName + " image:" + imageName);
		}
		
        //hide vanilla widgets -- comment out this whole block if you want them
        Widget logoMid     = root.FindAnyWidget("ImageLogoMid");
        Widget logoCorner  = root.FindAnyWidget("ImageLogoCorner");
        Widget moddedWarn  = root.FindAnyWidget("ModdedWarning");
        if (logoMid)    logoMid.Show(false);
        if (logoCorner) logoCorner.Show(false);
        if (moddedWarn) moddedWarn.Show(false);
	}
}

modded class LoadingScreen
{
	//loading.layout is assigned to "m_WidgetRoot" at class construction
	//loading.layout references the background widget as "ImageBackground"
	override void Show()
    {
        super.Show();
        LoadingScreenHelper.Apply(m_WidgetRoot, "ImageBackground");
	}
}

modded class LoginQueueBase
{
	//dialog_queue_position.layout is assigned to "layoutRoot" at LoginQueueBase Init()
	//dialog_queue_position.layout references the background widget as "Background"
    override void Show()
    {
        super.Show();
        LoadingScreenHelper.Apply(layoutRoot, "Background");
	}
}

modded class LoginTimeBase
{
	//dialog_login_time.layout is assigned to "layoutRoot" at LoginTimeBase Init()
	//dialog_login_time.layout references the background widget as "Background"
	override void Show()
    {
        super.Show();
        LoadingScreenHelper.Apply(layoutRoot, "Background");
	}
}