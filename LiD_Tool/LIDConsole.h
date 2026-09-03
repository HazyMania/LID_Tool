#pragma once

#include "CConsole.h"
#include "Extensions/Includes.hpp"
#include "LID/SdkHeaders.hpp"
#include "UEHooker.h"

class LIDConsole : public CConsole
{
public:
	LIDConsole() {};
	virtual ~LIDConsole() {};

private:
	//Init
	void RegisterCommands();

	//Commands
	bool PrintInfo();
	bool UnloadDll();
};


//Misc LiD Notes:
/*
* Try to disable the music lost on loss of focus!
* Do treasures already spawn with known contents or are contents randomly generated upon open? **I think they do, need to find it though.
* FBrgDbUserSoul looks really interesting, contains all of the monetary info, unlocked fighter data, stamps collected... it's in BrgUserData or smthn.
* UBrgAIDirector is really interesting, I could probably force Jackal spawns with this if I wanted too. Will be really nice for farming.
* DebugSpawnJackals -- maybe?
* 
* 
* PT_ARM_WP053_0D5] [PartSetupName: Jackal Blaster D]
* PT_ARM_WP001_0N4] [PartSetupName: Beam Katana 4]
* PT_ARM_WP062_005] [PartSetupName: Classic Lion Knuckles S]
* PT_ARM_WP052_0D5] [PartSetupName: Jackal Yo-Yo D]
* PT_ARM_WP051_0D5] [PartSetupName: Jackal Sword D]
* PT_ARM_WP024_001] [PartSetupName: Striker Flail]
* 
* PT_MIL_TOPS_011] [PartSetupName: Iron Eagle Body]
* PT_MIL_BTM_011] [PartSetupName: Iron Eagle Pants]
* 
* 
* Everything is gucci... we need to hook processevent and find a load floor script for bbhaters.... drunk me forget... ban inc...
* ^ Actually for this I can just spawn a thread that looks for pManager->mFloorResultMenu, while this is init'd we're at the result screen.
* ^ Wait for it to be null'd and then bbhaters, it should work fine as all of the enemy info is actually sent WITH result screen transition.
* 
* Actually pretty huge find:
* ABrgActor_Treasure_Box
* ABrgActor_Treasure_Item
* ABrgActor_Treasure_Part
* So I'm betting the devs natively cast upwards based on the item type in the child class, mType.
* The _Box one for example has a mOpen value, that's definitely what I can check for to improve the bot instead of using sleeps everywhere that can break on lags.
* _Item will be for materials, mushrooms, and magazines. I should be able to get the Material ID from there, just for clarity at this point.
* ^ Could further expand on this doing a simple white/black list. String compares aren't too bad in today's CPU and it's a bot after all.
* ^ It'd be worthwhile to try and edit these paramters while the items are dropped, just to see if they stick when I pick them up or if they're tied to server.
* ^ I did see mention of editing the KC on the ground before pick-up to get it synced to server.
* ^ ABrgActor_Coin for dropped coins? Maybe modify the dropped coins value, not the one from chests.
* 
* Look into the decals, they're modifiers on some specific things and would be amazing if that stuff is client sided. I really wonder about the KC increase one.
* ^ This would for sure tell me what's calculated server side and what's not.
* 
* UBrgNetworkManagerCustom
* UBrgNetworkManager
* UBrgNetworkManagerInterface Following this hierarchy I'm pretty sure I can find all the packets.
* ^ I bet the items and money get synced at the same time, since whenever I return to the waiting room the items also disappear.
* ^ If I could find the packet that does this, then I could find exactly what is and isn't synced.
* ^ UBrgNetworkResponseGetParams is **NOT** all of the receives. Could easily make a packet logger for send/receive and log all the goodies. Looks like mostly JSON?
* ^^^ Wrong, but this is the main data packet from the server. Dumping this would basically let me init the game lmao.
* ^^^ The cool thing about this is that, it would look real to other players because the play log would read it too **MAYBE.**
* 
* UBrgNetworkResponseUpdateuserinfo
* ^^^ Char Update?
* 
* 
* UBrgNetworkManagerCustom <- Only class I need for packet log. Simple ProcessEvent to capture all those lovely functions in a trap and snag params.
* 
* BrgNetworkManagerCustom Transient.BrgNetworkManagerCustom
* Class BrgGame.BrgNetworkManagerCustom
* 
* One of these we need to hook ProcessEvent.
* 
* ABrgGameInfo has a LOT of debug functions.
* 
* TODO:
* Check PE Index on 3.33 patch, it should still be 67 though.
* Why is hook crashing? Can't use WINAPI? That's fine, only need to change some strings but I don't think that's it.
* Either wrong index or wrong function mask. The placement of the hook IS working, I verified correct via CE the pointer tree is correct.
* Just verify Index and the actual parameters of the hook.LikeMePlayhr\
* 
* 10240, the perfect thing is to auto fix items during the result screen we found earlier, when it's ready. ;p
* 
* GmaeInefo 
* mPartShopArray and mSisterPartShopArray
* check thnese for the impoortant fogood we may be abnlet o reset shop haha iof quersts arent cvhcelckk tjhos will be brokeeekekekekekekekeke
* 
* UGHM_MapInfoBase
* ^ Need to find map base to toggle item info there.
* 
* UBrgUIMenuPart_PauseMap It's stored in BRGUiManager
* 
* 
* 
* 
* 
* DECAL NOTES
* 
*	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mbSkillStickerNeedsUpdate = false;
	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mDbEqSkills.Add(FBrgDbEqSkill(std::wstring(L"SKLTP_ATKUP"), 0, 0, 0, 0));
	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mDbEqSkills.Add(FBrgDbEqSkill(FString(L"SKLTP_ATKUP_DEFUP"), 1, 0, 0, 0));
	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mDbEqSkills.Add(FBrgDbEqSkill(FString(L"SKLTP_CRI_ATKUP"), 2, 0, 0, 0));
	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mDbEqSkills.Add(FBrgDbEqSkill(FString(L"SKLTP_DEATH_PROOF"), 3, 0, 0, 0));
	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mDbEqSkills.Add(FBrgDbEqSkill(FString(L"SKLTP_EXPLODEENEMYKILL_DRAIN"), 4, 0, 0, 0));
	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mDbEqSkills.Add(FBrgDbEqSkill(FString(L"SKLTP_HPUP_ATKUP"), 5, 0, 0, 0));
	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mDbEqSkills.Add(FBrgDbEqSkill(FString(L"SKLTP_SEARCHITEM_MONEYUP_K7"), 6, 0, 0, 0));
	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mDbEqSkills.Add(FBrgDbEqSkill(FString(L"SKLTP_SEARCHLIFT_SPIRITUP_K7"), 7, 0, 0, 0));
	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mDbEqSkills.Add(FBrgDbEqSkill(FString(L"SKLTP_RAGE_SPDUP_ATKUP_K7"), 8, 0, 0, 0));
	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mDbEqSkills.Add(FBrgDbEqSkill(FString(L"SKLTP_STATUP_K7"), 9, 0, 0, 0));
	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mDbEqSkills.Add(FBrgDbEqSkill(FString(L"SKLTP_SPDUP_DODGEUP_NMH"), 10, 0, 0, 0));
	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mDbEqSkills.Add(FBrgDbEqSkill(FString(L"SKLTP_DISCOUNT_ALL_NMH"), 11, 0, 0, 0));
	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mDbEqSkills.Add(FBrgDbEqSkill(FString(L"SKLTP_STATUP_FASTEAT_HPCUREUP"), 12, 0, 0, 0));
	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mDbEqSkills.Add(FBrgDbEqSkill(FString(L"SKLTP_ATKUP_CRIUP_DEFDOWN"), 13, 0, 0, 0));
	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mDbEqSkills.Add(FBrgDbEqSkill(FString(L"SKLTP_DEFUP_NODMG_RANDOM"), 14, 0, 0, 0));
	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mDbEqSkills.Add(FBrgDbEqSkill(FString(L"SKLTP_DEFUP"), 15, 0, 0, 0));
	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mDbEqSkills.Add(FBrgDbEqSkill(FString(L"SKLTP_STMNUP"), 16, 0, 0, 0));
	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mbSkillStickerNeedsUpdate = false;
	//This struct gets overwritten by something, I need to debug it on a fresh account. Would be very juicy.
	//Gets overwritten by two functions at addresses 0x7FF74BF18F6F and 0x7FF74BE44848
	//Can either nop these orrr nop the actual function which is at 0x7FF74BE4D840
	//If we simply code cave 7FF74BE4D850 and return, since the function is void. There's nothing the game will do.
	//We need to get a decal and try then though, maybe different func.
	//NOTE THAT IF YOU DO THIS, REGULAR DECAL EFFECTS WILL NOT GET CHANGED/PARSED EITHER!!!
	//^^ WRONG, HAHA!! If you hook it, this is just a default init. The decals still get parsed!
	//This leads to weird behaviour if you null the functionality, so best is to let it run normally, then make your adjustments on top with a hook. :)

	//Extras, think this caused the d/c tbh. <- Banned for this. Sheesh, be careful not to ever trigger the SYS warning.
	
	//m_MyPlayer->mCommonPawn->mTotalStatus.StaminaLifeShaveRate = -80.f;
	//m_MyPlayer->mCommonPawn->mEquipResearchInfo.Research_Slash = 100.0f;
	//m_MyPlayer->mCommonPawn->mEquipResearchInfo.Research_Shoot = 100.0f;
	//m_MyPlayer->mCommonPawn->mEquipResearchInfo.Research_Blow = 100.0f;
	//m_MyPlayer->mCommonPawn->mEquipResearchInfo.Research_Head = 100.0f;
	//m_MyPlayer->mCommonPawn->mEquipResearchInfo.Research_Tops = 100.0f;
	//m_MyPlayer->mCommonPawn->mEquipResearchInfo.Research_Btms = 100.0f;
	///
*
* [PartEptId: b36eb1f1-30be-462c-a715-29c562c31868] [PartPtId: PT_SPE_HEAD_116] [PartSetupName: Travis' Sunglasses 4] [PartID: PT_SPE_HEAD_116] "Special"
  [Atk: 0] [Atk0: 0] [mAtk_c: 100] [Def: 774] [Def0: 270] [mDef_c: 108] [mLvllmt: 6000] [mLvllmt_c: 102]

[Location: 0x00007FF494C50CB4] [mItemType: 0] [mEnable: 1]
[PartEptId: 046b38d8-2da9-46c8-8f7c-f49942ce8268] [PartPtId: PT_ARM_WP024_0H4] [PartSetupName: Ouroboros] [PartID: PT_ARM_WP024_0H4]
  [Atk: 8484] [Atk0: 8059] [mAtk_c: 102] [Def: 0] [Def0: 0] [mDef_c: 100] [mLvllmt: 205] [mLvllmt_c: 102]

[Location: 0x00007FF494C513C8] [mItemType: 0] [mEnable: 1]
[PartEptId: ac64a95b-28c8-438c-84fe-1e8172a0232a] [PartPtId: PT_ARM_WP001_0N2] [PartSetupName: Beam Katana 3] [PartID: PT_ARM_WP001_0N2]
  [Atk: 527] [Atk0: 274] [mAtk_c: 105] [Def: 0] [Def0: 0] [mDef_c: 100] [mLvllmt: 88] [mLvllmt_c: 102]

[Location: 0x00007FF494C51ADC] [mItemType: 0] [mEnable: 1]
[PartEptId: 5d26d588-a412-4f27-98f5-c83e6a855ba3] [PartPtId: PT_SPO_TOPS_110] [PartSetupName: Hell Slugger Body A] [PartID: PT_SPO_TOPS_110] War Ensemble
  [Atk: 0] [Atk0: 0] [mAtk_c: 100] [Def: 2596] [Def0: 908] [mDef_c: 108] [mLvllmt: 6000] [mLvllmt_c: 102]

[Location: 0x00007FF494C521F0] [mItemType: 0] [mEnable: 1]
[PartEptId: 845151c3-caa6-4669-93a0-fcdc01d66475] [PartPtId: PT_FAN_BTM_118] [PartSetupName: Bishop's Leggings S] [PartID: PT_FAN_BTM_118] Candle Wolf
  [Atk: 0] [Atk0: 0] [mAtk_c: 100] [Def: 1633] [Def0: 571] [mDef_c: 108] [mLvllmt: 6000] [mLvllmt_c: 102]

* 
* 
* Lmao, got it working smoothly with a single hook though. :)
* I should do items the same way but I don't really have a need anymore, I'm so strong on my main haha.
* mDbEqSkills I can use this to parse the current equipped decals.
*/