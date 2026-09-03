#include "LIDConsole.h"

void LIDConsole::RegisterCommands()
{
	UEHooker::UpdateEverything();	//Just to grab offsets of GNames and GObjects.

	m_Commands =
	{
		std::pair<std::string, std::function<bool()>>("pInfo", std::bind(&LIDConsole::PrintInfo, this)),
		std::pair<std::string, std::function<bool()>>("zUNLOAD", std::bind(&LIDConsole::UnloadDll, this)),
		std::pair<std::string, std::function<bool()>>("DBG_TestHook", std::bind(&UEHooker::TestHook)),
		std::pair<std::string, std::function<bool()>>("bbHaters", std::bind(&UEHooker::ByeByeHaters)),
		std::pair<std::string, std::function<bool()>>("ccHaters", std::bind(&UEHooker::LetThemFight)),
		std::pair<std::string, std::function<bool()>>("vcHaters", std::bind(&UEHooker::HaterVac)),
		std::pair<std::string, std::function<bool()>>("vcCoins", std::bind(&UEHooker::GimmieCoins)),
		std::pair<std::string, std::function<bool()>>("vcScreamers", std::bind(&UEHooker::ScreamerVac)),
		std::pair<std::string, std::function<bool()>>("bbHaters_Loop", std::bind(&UEHooker::KeepThemGone)),
		std::pair<std::string, std::function<bool()>>("ComeBackBaby", std::bind(&UEHooker::ComeBackBaby)),
		std::pair<std::string, std::function<bool()>>("ComeBackBaby_2", std::bind(&UEHooker::ComeBackBab2)),
		std::pair<std::string, std::function<bool()>>("TestRun", std::bind(&UEHooker::TestRunFloor)),
		std::pair<std::string, std::function<bool()>>("FarmLoop", std::bind(&UEHooker::RunFarmLoop)),
		std::pair<std::string, std::function<bool()>>("CleanFloor", std::bind(&UEHooker::CleanUpFloor)),
		std::pair<std::string, std::function<bool()>>("Refresh", std::bind(&UEHooker::Refresh)),
		
		std::pair<std::string, std::function<bool()>>("sTreasure", std::bind(&UEHooker::SetToTreasure)),
		std::pair<std::string, std::function<bool()>>("sPTreasure", std::bind(&UEHooker::SetPickTreas)),
		std::pair<std::string, std::function<bool()>>("sLocation", std::bind(&UEHooker::SetCoordinate)),
		std::pair<std::string, std::function<bool()>>("sRotation", std::bind(&UEHooker::SetRotation)),
		std::pair<std::string, std::function<bool()>>("sNormals", std::bind(&UEHooker::SetMyNormals)),
		std::pair<std::string, std::function<bool()>>("sEsca", std::bind(&UEHooker::SetToEscalator)),
		std::pair<std::string, std::function<bool()>>("sElva", std::bind(&UEHooker::GoToElevator)),
		std::pair<std::string, std::function<bool()>>("sMSM", std::bind(&UEHooker::SetMoveSpeed)),
		std::pair<std::string, std::function<bool()>>("sWSP", std::bind(&UEHooker::SetWalkSpeed)),
		std::pair<std::string, std::function<bool()>>("sSSP", std::bind(&UEHooker::SetSprintSpeed)),
		std::pair<std::string, std::function<bool()>>("sStr", std::bind(&UEHooker::SetSTRAdjust)),
		std::pair<std::string, std::function<bool()>>("sDex", std::bind(&UEHooker::SetDEXAdjust)),
		std::pair<std::string, std::function<bool()>>("sVit", std::bind(&UEHooker::SetVITAdjust)),
		std::pair<std::string, std::function<bool()>>("sJak", std::bind(&UEHooker::SetJackalSTm)),
		std::pair<std::string, std::function<bool()>>("sJNm", std::bind(&UEHooker::SetJackalNum)),
		std::pair<std::string, std::function<bool()>>("sRTm", std::bind(&UEHooker::SetRevivalTm)),
		std::pair<std::string, std::function<bool()>>("sHate", std::bind(&UEHooker::SetHateScale)),
		//std::pair<std::string, std::function<bool()>>("pItem", std::bind(&UEHooker::MessWithItems)), Don't feel like updating... only half worked anyways...

		std::pair<std::string, std::function<bool()>>("aJak", std::bind(&UEHooker::AddClearJackal)),
		std::pair<std::string, std::function<bool()>>("tJak", std::bind(&UEHooker::ToggleJackal)),
		std::pair<std::string, std::function<bool()>>("tDur", std::bind(&UEHooker::ToggleInfDur)),
		std::pair<std::string, std::function<bool()>>("tAmm", std::bind(&UEHooker::ToggleInfAmm)),
		std::pair<std::string, std::function<bool()>>("tRst", std::bind(&UEHooker::ToggleResist)),
		std::pair<std::string, std::function<bool()>>("tInv", std::bind(&UEHooker::ToggleInvinc)),
		std::pair<std::string, std::function<bool()>>("tDbg", std::bind(&UEHooker::TryGiveDebug)),
		std::pair<std::string, std::function<bool()>>("tPLog", std::bind(&UEHooker::TogglePlyLog)),
		std::pair<std::string, std::function<bool()>>("tALog", std::bind(&UEHooker::ToggleActLog)),
		std::pair<std::string, std::function<bool()>>("tHate", std::bind(&UEHooker::SetHaterBool)),
		std::pair<std::string, std::function<bool()>>("tInfo", std::bind(&UEHooker::ToggleDbgInfo)),
		std::pair<std::string, std::function<bool()>>("tPick", std::bind(&UEHooker::TogglePickUp)),
		std::pair<std::string, std::function<bool()>>("tbFarm", std::bind(&UEHooker::ToggleFarmLp)),
		std::pair<std::string, std::function<bool()>>("tbHate", std::bind(&UEHooker::ToggleHaters)),
		std::pair<std::string, std::function<bool()>>("tDecals", std::bind(&UEHooker::ToggleDecals)),
		std::pair<std::string, std::function<bool()>>("tCrack", std::bind(&UEHooker::ToggleCracked)),

		std::pair<std::string, std::function<bool()>>("incX", std::bind(&UEHooker::IncreaseXByV)),
		std::pair<std::string, std::function<bool()>>("incY", std::bind(&UEHooker::IncreaseYByV)),
		std::pair<std::string, std::function<bool()>>("incZ", std::bind(&UEHooker::IncreaseZByV)),
		
		std::pair<std::string, std::function<bool()>>("LLoc", std::bind(&UEHooker::LoadLocation)),
		std::pair<std::string, std::function<bool()>>("SLoc", std::bind(&UEHooker::SaveLocation)),
		std::pair<std::string, std::function<bool()>>("CLoc", std::bind(&UEHooker::ClearLocations)),

		std::pair<std::string, std::function<bool()>>("Kill", std::bind(&UEHooker::KillThemAll)),
		std::pair<std::string, std::function<bool()>>("sHP", std::bind(&UEHooker::SetHP))
	};

	m_CommandDescriptions =
	{
		std::pair<std::string, std::string>("pInfo", "Prints various informations about LET IT DIE. *Testing Grounds*"),
		std::pair<std::string, std::string>("zUNLOAD", "Attempts to stop this thread and unload the cheat."),
		std::pair<std::string, std::string>("DBG_TestHook", "Attempts to hook ProcessEvent finally... for a specific packet."),
		std::pair<std::string, std::string>("ccHaters", "Allows one to teleport the haters to screamers. LET THEM FIGHT! [LOCATION]"),
		std::pair<std::string, std::string>("vcScreamers", "Allows one to teleport the screamers to oneself. Useful for farming. [LOCATION]"),
		std::pair<std::string, std::string>("vcCoins", "Allows one to teleport the coins that screamers drop to oneself. Useful with Screamers vac. [LOCATION]"),
		std::pair<std::string, std::string>("vcHaters", "Allows one to teleport the HATERS to oneself. !!BE VERY CAREFUL!!! [FLAGS | LOCATION]"),
		std::pair<std::string, std::string>("bbHaters", "We don't like them kind around here. [FLAGS | LOCATION]"),
		std::pair<std::string, std::string>("bbHaters_Loop", "*NOT WORKING* Spawns a thread that waits to banish haters on new floors. [FLAGS | LOCATION]"),
		std::pair<std::string, std::string>("ComeBackBaby", "Attempts to move the HATERS to your location. FOR BOSSES. [LOCATION]"),
		std::pair<std::string, std::string>("ComeBackBaby_2", "Attempts to unfuck the haters. FOR BOSSES. [FLAGS]"),
		std::pair<std::string, std::string>("pItem", "Prints various informations about ones inventory... !!*MESSES WITH VALUES*!!"),
		std::pair<std::string, std::string>("Refresh", "Refreshes the active player list."),
		std::pair<std::string, std::string>("TestRun", "Tests the first (few) iterations of the LiD F4RMB0T 20o0 XXL"),
		std::pair<std::string, std::string>("CleanFloor", "Allows the player to leisurely collect the rest of the floor's treasures."),
		std::pair<std::string, std::string>("FarmLoop", "Tests the actual looping of TestRun, needs work. Missing true level load bool."),
		
		std::pair<std::string, std::string>("sTreasure", "Prints the floor's treasure locations and allows one to warp to a chosen option."),
		std::pair<std::string, std::string>("sPTreasure", "Prints the floor's treasure locations, warps, and also attempts to pick up."),
		std::pair<std::string, std::string>("sLocation", "Allows one to set their location. Use with Care."),
		std::pair<std::string, std::string>("sRotation", "Allows one to set their Rotation. Use with Care."),
		std::pair<std::string, std::string>("sNormals", "Sets values to my normals, hehe."),
		std::pair<std::string, std::string>("sEsca", "Allows one to warp to a chosen escalator on the map."),
		std::pair<std::string, std::string>("sElva", "Allows one to warp to the map's elavator switch. [IDX0]"),
		std::pair<std::string, std::string>("sWSP", "Allows one to set the Move Walk Speed of the character.. (ONLY LiD:OFFLINE)"),
		std::pair<std::string, std::string>("sSSP", "Allows one to set the Move Sprint Speed of the character.. (ONLY LiD:OFFLINE)"),
		std::pair<std::string, std::string>("sMSM", "Allows one to set the Movement Speed Modifier of the character.. (ONLY LiD:OFFLINE)"),
		std::pair<std::string, std::string>("sStr", "Allows one to set the STR Adjustment Rate."),
		std::pair<std::string, std::string>("sDex", "Allows one to set the DEX Adjustment Rate."),
		std::pair<std::string, std::string>("sVit", "Allows one to set the VIT Adjustment Rate."),
		std::pair<std::string, std::string>("sJak", "Allows one to set the Jackal spawn timer."),
		std::pair<std::string, std::string>("sJNm", "Allows one to set the Jackal spawn number."),
		std::pair<std::string, std::string>("sRTm", "Allows one to set their Revival Timer. (Invincible and Undetected)"),
		std::pair<std::string, std::string>("sHate", "Allows one to set the Hate (Special Gauge) Gain Rate."),
		
		std::pair<std::string, std::string>("aJak", "Allows one to add the correct Jackal values to spawn, also clears them if they're loaded."),
		std::pair<std::string, std::string>("tJak", "Allows one to toggle the spawning of Jackals."),
		std::pair<std::string, std::string>("tDur", "Allows one to toggle the No Durablity Down flag."),
		std::pair<std::string, std::string>("tAmm", "Allows one to toggle the No Ammo Consumption flag."),
		std::pair<std::string, std::string>("tRst", "Allows one to toggle the Attribute Resistance flag. (No Poison Anymore)"),
		std::pair<std::string, std::string>("tInv", "Allows one to toggle the Invincibility Scene flag. (Only Invincible)"),
		std::pair<std::string, std::string>("tDbg", "Attempts to give oneself Debug Menu access."),
		std::pair<std::string, std::string>("tPLog", "Allows oneself to toggle their Player Event Log."),
		std::pair<std::string, std::string>("tALog", "Allows oneself to toggle their Action Play Log."),
		std::pair<std::string, std::string>("tInfo", "Allows oneself to possibly toggle some Debug Info."),
		std::pair<std::string, std::string>("tPick", "Allows oneself to possibly \"Pick Up.\""),
		std::pair<std::string, std::string>("tHate", "Allows oneself to FUCK THE HATERS UP!! :)"),
		std::pair<std::string, std::string>("tbFarm", "Allows oneself to end the skipping of grinding."),
		std::pair<std::string, std::string>("tbHate", "Allows oneself to end the banishment of haters."),
		std::pair<std::string, std::string>("tDecals", "Allows oneself to toggle their own custom decal bases."),

		std::pair<std::string, std::string>("incX", "Allows one to increase their current X coordinate by an input value."),
		std::pair<std::string, std::string>("incY", "Allows one to increase their current Y coordinate by an input value."),
		std::pair<std::string, std::string>("incZ", "Allows one to increase their current Z coordinate by an input value."),
		
		std::pair<std::string, std::string>("LLoc", "Allows one to Load a Location from their list."),
		std::pair<std::string, std::string>("SLoc", "Allows one to Save their current Location to their list."),
		std::pair<std::string, std::string>("CLoc", "Allows one to Clear their current Location list."),

		std::pair<std::string, std::string>("Kill", "Allows one to possibly kill the floor with a single flag.."),
		std::pair<std::string, std::string>("sHP", "Allows one to set their current HP. **(VISIBLE SERVER SIDE IN MOST SITUATIONS)**")
	};
}

//Commands
bool LIDConsole::PrintInfo()
{
	UEHooker::TestingGround();
	return true;
}
bool LIDConsole::UnloadDll()
{
	FreeLibraryAndExitThread(myModule, EXIT_SUCCESS);
	return true;
}
//*