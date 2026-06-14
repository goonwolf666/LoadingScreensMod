class CustomMission: MissionGameplay
{
	void CustomMission()
	{
	}
};

Mission CreateCustomMission(string path)
{
	return new CustomMission();
};


void main()
{
	
	GetGame().GetWorld().SetDate( 2025, 12, 12, 17, 10 );
	
	// Create player
	PlayerBase player = PlayerBase.Cast( ( GetGame().CreatePlayer( NULL, "SurvivorM_Mirek", "2200 10 2200", 0, "NONE") ) );// Set your gear
	player.CreateInInventory("BomberJacket_Grey");// Select player
	player.CreateInInventory("BDUPants");// Select player
	player.CreateInInventory("AthleticShoes_Blue");// Select player
	
	player.CreateInInventory("Flaregun");// Select player
	player.CreateInInventory("Ammo_FlareGreen");// Select player
	player.CreateInInventory("Extraction_FlareGreen");// Select player
	player.CreateInInventory("Extraction_FlareRed");// Select player
	player.CreateInInventory("Extraction_FlareYellow");// Select player
	player.CreateInInventory("Magnum");// Select player
	player.CreateInInventory("Ammo_357");// Select player
	
	GetGame().SelectPlayer(NULL, player);
};