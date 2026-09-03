#include "UEHooker.h"

UEHooker::tProcessEventWP UEHooker::pProcessEventWP = nullptr;
UEHooker::tProcessEvent UEHooker::pOProcessEvent = nullptr;
UEHooker::tNullDecals0 UEHooker::pODecals0 = nullptr;
UEHooker::tNullDecals1 UEHooker::pODecals1 = nullptr;
UEHooker::tItemChanger UEHooker::pOItemCompare = nullptr;
std::vector<UObject*> UEHooker::m_ObjectInstances = {};
bool UEHooker::m_isLooping = false;
bool UEHooker::m_isUpdated = false;
bool UEHooker::m_isbbHater = false;
bool UEHooker::m_isCurrentPlayerFound = false;
bool UEHooker::m_isDecalHooked = false;
bool UEHooker::m_isItemsHooked = false;
bool UEHooker::m_isCracked = false;
bool UEHooker::m_bAllowCustomDecalBases = false;
void* UEHooker::m_DecalReturn00 = nullptr;
void* UEHooker::m_DecalReturn01 = nullptr;
void* UEHooker::m_ItemReturn001 = nullptr;
void* UEHooker::m_ItemReturn002 = nullptr;
void* UEHooker::m_ItemReturn003 = nullptr;
void* UEHooker::m_ItemReturn004 = nullptr;
std::vector<ABrgPawn_CustomCharaPlayer*> UEHooker::m_ActivePlayers = {};
ABrgPawn_CustomCharaPlayer* UEHooker::m_MyPlayer = nullptr;
UBrgMbObject_LoadPart* UEHooker::m_MyParts = nullptr;
std::vector<FVector> UEHooker::m_StoredLocations = {};
std::vector<ABrgPawn_EnemyBase*> UEHooker::m_Haters = {};
std::map<std::wstring, std::wstring> UEHooker::m_NewItems = {
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP031_003"), std::wstring(L"PT_ARM_WP002_002")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP006_001"), std::wstring(L"PT_ARM_WP001_0N2")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP032_003"), std::wstring(L"PT_ARM_WP053_003")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP001_001"), std::wstring(L"PT_ARM_WP024_0H4")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP025_003"), std::wstring(L"PT_ARM_WP004_002")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP020_003"), std::wstring(L"PT_ARM_WP006_002")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP019_003"), std::wstring(L"PT_ARM_WP012_002")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP003_003"), std::wstring(L"PT_ARM_WP013_002")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP026_001"), std::wstring(L"PT_ARM_WP045_002")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP011_001"), std::wstring(L"PT_ARM_WP059_005")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP005_001"), std::wstring(L"PT_ARM_WP056_005")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP040_001"), std::wstring(L"PT_ARM_WP053_002")),
	//std::pair<std::wstring, std::wstring>(std::wstring(L"PT_DIY_HEAD_017"), std::wstring(L"PT_SPE_HEAD_116")),
	//std::pair<std::wstring, std::wstring>(std::wstring(L"PT_DIY_TOPS_019"), std::wstring(L"PT_SPO_TOPS_110")),
	//std::pair<std::wstring, std::wstring>(std::wstring(L"PT_DIY_BTM_003"), std::wstring(L"PT_FAN_BTM_118")),
	//std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP006_001"), std::wstring(L"PT_ARM_WP045_0H4"))

	//PT_DIY_HEAD_017
	//PT_DIY_TOPS_019
	//PT_DIY_BTM_003
	//PT_ARM_WP006_001 PT_ARM_WP045_0H4
};
std::map<std::wstring, std::wstring> UEHooker::m_OldItems = {
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP002_002"), std::wstring(L"PT_ARM_WP031_003")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP001_0N2"), std::wstring(L"PT_ARM_WP006_001")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP053_003"), std::wstring(L"PT_ARM_WP032_003")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP024_0H4"), std::wstring(L"PT_ARM_WP001_001")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP004_002"), std::wstring(L"PT_ARM_WP025_003")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP006_002"), std::wstring(L"PT_ARM_WP020_003")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP012_002"), std::wstring(L"PT_ARM_WP019_003")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP013_002"), std::wstring(L"PT_ARM_WP003_003")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP045_002"), std::wstring(L"PT_ARM_WP026_001")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP059_005"), std::wstring(L"PT_ARM_WP011_001")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP056_005"), std::wstring(L"PT_ARM_WP005_001")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP053_002"), std::wstring(L"PT_ARM_WP040_001")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_DIY_TOPS_031"), std::wstring(L"PT_ARM_WP999_999")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_DIY_BTM_003"), std::wstring(L"PT_ARM_WP999_999")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_DIY_HEAD_017"), std::wstring(L"PT_ARM_WP999_999")),
	std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP025_001"),  std::wstring(L"PT_ARM_WP999_999")),
	//std::pair<std::wstring, std::wstring>(std::wstring(L"PT_SPE_HEAD_116"),  std::wstring(L"PT_DIY_HEAD_017")),
	//std::pair<std::wstring, std::wstring>(std::wstring(L"PT_SPO_TOPS_110"),  std::wstring(L"PT_DIY_TOPS_019")),
	//std::pair<std::wstring, std::wstring>(std::wstring(L"PT_FAN_BTM_118"),   std::wstring(L"PT_DIY_BTM_003")), 
	//std::pair<std::wstring, std::wstring>(std::wstring(L"PT_ARM_WP045_0H4"),  std::wstring(L"PT_ARM_WP006_001"))
};
std::ofstream UEHooker::mFuncLog = {};

//Necessary evils.
bool UEHooker::VMTHook_PE(std::string strClass)
{
	UObject* ObjectInstance = NULL;

	for (int i = 0; i < UObject::GObjObjects()->Num(); ++i)
	{
		UObject* CheckObject = UObject::GObjObjects()->At(i);
		if (CheckObject && !strcmp(CheckObject->GetFullName().c_str(), strClass.c_str()))
			ObjectInstance = CheckObject;
	}

	if (!ObjectInstance) return false;
	uintptr_t dwVTable = *(uint64_t*)(ObjectInstance); if (!dwVTable) return false;
	uintptr_t dwEntry = dwVTable + (uintptr_t)0x0218; if (!dwEntry) return false;
	uintptr_t dwOrig = dwEntry;

	DWORD dwOldProtection;
	VirtualProtect((LPVOID)dwEntry, sizeof(dwEntry), PAGE_EXECUTE_READWRITE, &dwOldProtection);
	*((uintptr_t*)dwEntry) = (uintptr_t)hkProcessEvent;
	VirtualProtect((LPVOID)dwEntry, sizeof(dwEntry), dwOldProtection, &dwOldProtection);

	if(!pOProcessEvent)
		pOProcessEvent = reinterpret_cast<UEHooker::tProcessEvent>(dwOrig);

	std::cout << "\n\t[Object Instance: 0x" << ObjectInstance
		<< "] [VFT: 0x" << (uint64_t*)dwVTable
		<< "] [origPE: 0x" << (uint64_t*)dwOrig
		<< "] [hookPE: 0x" << hkProcessEvent
		<< "]\n" << std::endl;

	return true;
}
UObject* UEHooker::GetInstanceOf(UClass* Class)
{
	UObject* ObjectInstance = NULL;

	for (int i = 0; i < UObject::GObjObjects()->Num(); ++i)
	{
		UObject* CheckObject = UObject::GObjObjects()->At(i);

		if (CheckObject && CheckObject->IsA(Class))
		{
			if (!strstr(CheckObject->GetFullName().c_str(), "Default"))
				ObjectInstance = CheckObject;
		}
	}

	return ObjectInstance;
}
void UEHooker::GetAllInstancesOf(UClass* Class)
{
	m_ObjectInstances.clear();

	for (int i = 0; i < UObject::GObjObjects()->Num(); ++i)
	{
		UObject* CheckObject = UObject::GObjObjects()->At(i);

		if (CheckObject && CheckObject->IsA(Class))
		{
			if (!strstr(CheckObject->GetFullName().c_str(), "Default"))
				m_ObjectInstances.push_back(CheckObject);
		}
	}
}
void UEHooker::hkProcessEvent(UObject* pObject, UFunction* pFunction, void* pParams, void* pResult)
{
	if (pOProcessEvent && pFunction)
	{
		//if (!strcmp(pFunction->GetFullName().c_str(), "Function BrgGame.BrgNetworkManagerCustom.OnGetResponseUpdateuserinfo"))
			//|| !strcmp(pFunction->GetFullName().c_str(), "Function BrgGame.BrgUIHUD_FloorTitle.Start"))
			//MessageBoxA(NULL, "Gotcha.", std::to_string(pFunction->Name.GetDisplayIndex()).c_str(), MB_OK);

		//if (!strcmp(pFunction->GetFullName().c_str(), "Function BrgGame.BrgSeqAct_EscalatorClosedEvent.Update"))
			//std::cout << "[Gottem] [Found the closed escalator event, " << pFunction->Name.GetDisplayIndex() << "]" << std::endl;

		//if (!strcmp(pFunction->GetFullName().c_str(), "Function BrgGame.BrgSeqAct_StartFloor.Update"))
			//std::cout << "[Gottem] [Found the start floor event, " << pFunction->Name.GetDisplayIndex() << "]" << std::endl;

		//if (!strcmp(pFunction->GetFullName().c_str(), "Function Engine.SeqAct_WaitForLevelsVisible.Update"))
			//std::cout << "[Gottem] [Found the wait for levels visible event, " << pFunction->Name.GetDisplayIndex() << "]" << std::endl;

		//if (!strcmp(pFunction->GetFullName().c_str(), "Function BrgGame.BrgSeqAct_WaitForNetworkConnection.Update"))
			//std::cout << "[Gottem] [Found the wait for network connection event, " << pFunction->Name.GetDisplayIndex() << "]" << std::endl;

		/*
		if (!strcmp(pFunction->GetFullName().c_str(), "Function GHMEngine.GHM_GameViewportClient.PostRender"))
		{
			pOProcessEvent(pObject, pFunction, pParams, pResult);
			UCanvas* pCanvas = m_MyPlayer->mGameInfoNative->mBrgHUD->Canvas;
			if (pCanvas)
			{
				pCanvas->SetDrawColor(0, 0, 0, 0xFF);
				pCanvas->SetOrigin(0, 0);

				FFontRenderInfo fi = { 0 };
				fi.bClipText = false;
				fi.bEnableShadow = true;
				fi.GlowInfo = { 0 };

				pCanvas->DrawTextW(std::wstring(L""), false, 1, 1, fi);
				pCanvas->SetDrawColor(0xFF, 0, 0, 0xFF);

				if (m_MyPlayer)
				{
					if (m_MyPlayer->mGameInfo)
					{
						auto pInfo = m_MyPlayer->mGameInfo;
						if (pInfo->mEnemyPawnArray.Num())
						{
							auto pStart = pInfo->mEnemyPawnArray;
							auto pCur = pStart;
							auto playerLoc = m_MyPlayer->Location;
							for (auto pCur : pStart)
							{
								if (!pCur) continue;

								auto pRep = pCur->PlayerReplicationInfo;
								auto name = pRep->PlayerName.ToWString();
								auto hp = pCur->Health;
								auto pos = pCur->Location;

								auto screenPos = pCanvas->Project(pos);
								if (screenPos.Z > 0) // or 1, or smth,
								{
									wchar_t buf[0x100] = { 0 };
									pCanvas->OrgX = screenPos.X;
									pCanvas->OrgY = screenPos.Y;
									pCanvas->DrawTextW(name, false, 1, 1, fi);
								}
							}
						}
					}
				}
			}

			return;
		}
		*/

		/* 13567
		if (pFunction->Name.GetDisplayIndex() == 13567)
		{
			ABrgCommonPawn_CustomChara_eventSimulationStatus_Params* pStatusParams = reinterpret_cast<ABrgCommonPawn_CustomChara_eventSimulationStatus_Params*>(pParams);
			for (auto& rItem : pStatusParams->EquipInfoArray)
			{
				auto it = m_NewItems.find(rItem.PsPart.mPtid.ToWString());
				if (it == m_NewItems.end()) continue;

				uint32_t WStrLen = it->second.length();
				memcpy((void*)rItem.PsPart.mPtid.ArrayData, it->second.c_str(), (WStrLen * 2));
				memcpy((void*)rItem.PartInfo.mDbPart.Mid.ArrayData, it->second.c_str(), (WStrLen * 2));
			}
		}
		//*/

		//
		uint32_t idx = pFunction->Name.GetDisplayIndex();
		if (idx == 13498) //|| idx == 13173 || idx == 13600 || idx == 13228) //13498 = Function BrgGame.BrgCommonPawn_CustomChara.RefreshEquipPartMesh
		{
			if (m_MyPlayer && m_MyPlayer->mCommonPawn)
			{
				m_MyPlayer->mbInvincibleScene = true;
				/*
				for (FBrgLocalItemInfo& rItem : m_MyPlayer->mCommonPawn->mDeathBag)
				{
					if (rItem.mItemType == 0 && rItem.mEnable)
					{
						auto it = m_NewItems.find(rItem.mDbPsPart.mPtid.ToWString());
						if (it == m_NewItems.end()) continue;

						uint32_t WStrLen = it->second.length();
						memcpy((void*)rItem.mDbPsPart.mPtid.ArrayData, it->second.c_str(), (WStrLen * 2));
						memcpy((void*)rItem.mDbPsPartAutoInfo.mDbPart.Mid.ArrayData, it->second.c_str(), (WStrLen * 2));

						rItem.mDbPsPart.mPtid.ArrayCount = WStrLen * 2;
						rItem.mDbPsPartAutoInfo.mDbPart.Mid.ArrayCount = WStrLen * 2;
						rItem.mDbPsPartAutoInfo.mDbPart.mLvllmt = 2;
					}
				}
				//*/
				//
				for (FBrgLocalItemInfo& rItem : m_MyPlayer->mCommonPawn->mEquipPartInfo)
				{
					if (rItem.mItemType == 0 && rItem.mEnable)
					{
						auto it = m_NewItems.find(rItem.mDbPsPart.mPtid.ToWString());
						if (it == m_NewItems.end()) continue;

						uint32_t WStrLen = it->second.length();
						memcpy((void*)rItem.mDbPsPart.mPtid.ArrayData, it->second.c_str(), (WStrLen * 2));
						memcpy((void*)rItem.mDbPsPartAutoInfo.mDbPart.Mid.ArrayData, it->second.c_str(), (WStrLen * 2));

						rItem.mDbPsPart.mPtid.ArrayCount = WStrLen * 2;
						rItem.mDbPsPartAutoInfo.mDbPart.Mid.ArrayCount = WStrLen * 2;
						rItem.mDbPsPartAutoInfo.mDbPart.mLvllmt = 2;
					}
				}
				//*/
			}
			
			pOProcessEvent(pObject, pFunction, pParams, pResult);
			return;
		}
		//*/

		//mFuncLog << "[" << pFunction->Name.GetDisplayIndex() <<  "] [" << pFunction->GetFullName() << "]\n";
		//m_MyPlayer->mRevivalTime = 5.0f;
		return pOProcessEvent(pObject, pFunction, pParams, pResult);
	}
}
void UEHooker::hkNullDecals0(void* rcx)
{	
	pODecals0(rcx);

	if (m_bAllowCustomDecalBases && rcx == &m_MyPlayer->mCommonPawn->mSkillStatus)
		if (_ReturnAddress() == m_DecalReturn00 || _ReturnAddress() == m_DecalReturn01)
			ModifyDecals(reinterpret_cast<FBrgSkillStatus*>(rcx));
}
void UEHooker::hkNullDecals1(void* rcx, void* a2, void* a3)
{
	pODecals1(rcx, a2, a3);

	if (m_bAllowCustomDecalBases && rcx == &m_MyPlayer->mCommonPawn->mSkillStatus)
		ModifyDecals(reinterpret_cast<FBrgSkillStatus*>(rcx), true);
}
void UEHooker::ModifyDecals(FBrgSkillStatus* ptr, bool isPost)
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return;

	if (!isPost && m_bAllowCustomDecalBases)
	{
		//ptr->bStalker = true;
		//ptr->bPreventDeath = true;
		//ptr->bSearchUpEnemy = true;
		//ptr->bSearchUpItem = true;
		ptr->bMoneyVacuum = true;
		ptr->bExplodeEnemyKill = true;
		ptr->bKiller7Blood = true;
		ptr->bPoisonRecovery = true;
		ptr->bFireRecovery = true;
		ptr->bBurnEat = true;
		ptr->bNoDmgCritical = true;
		//ptr->bNoDmgKillAttackUpEnable = true;
		//ptr->bForceJackalSpawn = true;
		//ptr->bHaveToSpawnPlayerEnemy = true;
		//ptr->bInvincibleRandom = true;
		//ptr->MoneyUpRate = 30.0f;
		//ptr->AbpUpRate = 30.0f;
		//ptr->ExpUpRate = 30.0f;
		//ptr->InvincibleRandomRate = 80.0f;
		ptr->CriticalAtkUpPer += 0.60f;
		ptr->CriticalUpPer += 0.60f;
		ptr->RecoveryUpRate += 2.50f;
		ptr->DashStaminaRate += -2.0f;
		ptr->AvoidStaminaRate += -2.0f;
		ptr->GuardStaminaRate += -2.0f;
		ptr->TiredSpeedRate += -2.0f;
		ptr->StaminaLifeShaveRate += -2.0f;
		ptr->EatSpeedRate += 1.00f;
		ptr->SkillMoveGaugeUpRate += 5.00f;
		ptr->CharaStatus.Luk += 5000;
	}

	if (isPost && m_bAllowCustomDecalBases) //&& ptr->bNoDmgKillAttackUpEnable)	//Rip... fuck 'em.
	{
		if (m_isCracked)
		{
			//CRACKED | NOT LEGIT AT ALL | FUCK 'EM UP SETTINGS
			ptr->bInvincibleRandom = true;
			ptr->InvincibleRandomRate = 100.0f;
			ptr->bTensionDownDisable = true;
			ptr->bBlowDownDisable = true;
			ptr->bDownDisable = true;
			ptr->bMoneyVacuum = true;
			//ptr->bPreventDeath = true;

			ptr->bArmorPiercingShot = true;
			ptr->NoDmgKillAttackUpPer = 1.0f;
			ptr->NoDmgKillAttackUpMax = 10.00f;
			ptr->ArmorPiercingShotAtkUpRate = 2.00f;
			ptr->ArmorPiercingShotTime = 0.03f;

			ptr->EatSpeedRate += 5.00f;
			//ptr->DownSpeedRate += 1.00f;
			ptr->CureFloorRate += 1.00f;
			ptr->DoppelgangerKillerRate += 0.75f;
			ptr->RecoilDownRate += 1.00f;
			ptr->GunAttackUpRate += 40.00f;
			ptr->RobHelathRate += 1.00f;

			////
			ptr->EquipNeedHpRate = 0.02f;
			ptr->EquipNeedStmRate = 0.02f;
			ptr->EquipNeedStrRate = 0.02f;
			ptr->EquipNeedDexRate = 0.02f;
			ptr->EquipNeedVitRate = 0.02f;
			ptr->EquipNeedLukRate = 0.02f;
			////

			ptr->ArmLAttackPower += 950000;
			ptr->ArmRAttackPower += 850000;
			ptr->NakedAttackPower += 850000;
			ptr->DefencePower += 85000000;
			ptr->CriticalAtkUpPer += 1.80f;
			ptr->CriticalUpPer += 0.95f;
			ptr->SpiritsUpRate += 9.80f;

			ptr->CharaStatus.Str += 5000;
			ptr->CharaStatus.Dex += 5000;
			ptr->CharaStatus.Vit += 50000;
			//ptr->CharaStatus.Grade = 7;
			ptr->CharaStatus.Luk += 5000;
		}

		else
		{	// SEMI-LEGIT
			ptr->bInvincibleRandom = true;
			ptr->InvincibleRandomRate = 0.35f;
			ptr->bArmorPiercingShot = true;
			ptr->NoDmgKillAttackUpPer = 0.25f;
			ptr->NoDmgKillAttackUpMax = 2.00f;
			ptr->ArmorPiercingShotAtkUpRate = 0.50f;
			ptr->ArmorPiercingShotTime = 5.0f;
			ptr->EatSpeedRate += 2.00f;
			ptr->DownSpeedRate += 1.00f;
			ptr->CureFloorRate += 1.00f;
			ptr->RecoilDownRate += 0.65f;
			ptr->GunAttackUpRate += 0.50f;
			ptr->RobHelathRate += 0.35f;
			ptr->DoppelgangerKillerRate += 0.30f;
			ptr->ArmLAttackPower += 500;
			ptr->ArmRAttackPower += 500;
			ptr->NakedAttackPower += 500;
			ptr->DefencePower += 2500;
			ptr->CriticalAtkUpPer += 0.80f;
			ptr->CriticalUpPer += 0.95f;
			ptr->SpiritsUpRate += 0.80f;
			//ptr->CharaStatus.Grade = 7;
			ptr->CharaStatus.Str += 100;
			ptr->CharaStatus.Dex += 100;
			ptr->CharaStatus.Vit += 100;
			ptr->CharaStatus.Luk += 5000;
		}
	}
}
void UEHooker::hkItemCompare(FString* a1, FString* a2)
{
	//VERY LOW LEVEL!! THIS WORKS PERFECTLY, BUT I WILL NEED TO FILTER IT VIA SOME RETURN ADDY'S IF I WANT TO MAKE IT PERFECT!
	//AS OF RIGHT NOW IT CHANGES _ALL_ INSTANCES OF THE ITEM, DROPS, THE SHOP, YOUR ENEMIES... THE SERVER DOES NOT LIKE SOME OF THESE THINGS!!!
	void* ret = _ReturnAddress();
	if (ret == m_ItemReturn002)
	{
		auto it = m_OldItems.find(a2->ToWString());
		if (it != m_OldItems.end())
		{
			uint32_t WStrLen = it->second.length();
			memcpy((void*)a2->ArrayData, it->second.c_str(), (WStrLen * 2));
			a2->ArrayCount = WStrLen * 2;
		}

		return pOItemCompare(a1, a2);
	}

	if (ret == m_ItemReturn003 || ret == m_ItemReturn004)
	{
		auto it = m_NewItems.find(a1->ToWString());
		auto it2 = m_OldItems.find(a2->ToWString());
		if (it != m_NewItems.end() && it2 != m_OldItems.end())
		{
			uint32_t WStrLen = it->first.length();
			memcpy((void*)a2->ArrayData, it->first.c_str(), (WStrLen * 2));
			a2->ArrayCount = WStrLen * 2;
		}

		return pOItemCompare(a1, a2);
	}
	
	if (ret != m_ItemReturn001)
	{
		/* ULTRA LOGGING
		auto it = m_NewItems.find(a1->ToWString());
		if (it != m_NewItems.end())
		{
			std::wcout.clear();
			std::wcout << L"[0_AA] [ReturnAddy: 0x" << _ReturnAddress() << "] [NameA: " << a1->ToWString() << L"] [NameB: " << a2->ToWString() << L"]" << std::endl;
		}

		it = m_NewItems.find(a2->ToWString());
		if (it != m_NewItems.end())
		{
			std::wcout.clear();
			std::wcout << L"[0_BA] [ReturnAddy: 0x" << _ReturnAddress() << "] [NameA: " << a1->ToWString() << L"] [NameB: " << a2->ToWString() << L"]" << std::endl;
		}

		it = m_OldItems.find(a1->ToWString());
		if (it != m_OldItems.end())
		{
			std::wcout.clear();
			std::wcout << L"[0_CA] [ReturnAddy: 0x" << _ReturnAddress() << "] [NameA: " << a1->ToWString() << L"] [NameB: " << a2->ToWString() << L"]" << std::endl;
		}

		it = m_OldItems.find(a2->ToWString());
		if (it != m_OldItems.end())
		{
			std::wcout.clear();
			std::wcout << L"[0_DA] [ReturnAddy: 0x" << _ReturnAddress() << "] [NameA: " << a1->ToWString() << L"] [NameB: " << a2->ToWString() << L"]" << std::endl;
		}
		//*/

		return pOItemCompare(a1, a2);
	}

	auto it = m_NewItems.find(a1->ToWString());
	if (it != m_NewItems.end())
	{
		//std::wcout.clear();  std::wcout << L"[1_AA] [ReturnAddy: 0x" << _ReturnAddress() << "] [NameA: " << a1->ToWString() << L"] [NameB: " << a2->ToWString() << L"]" << std::endl;
		
		uint32_t WStrLen = it->second.length();
		memcpy((void*)a1->ArrayData, it->second.c_str(), (WStrLen * 2));
		a1->ArrayCount = WStrLen * 2;
	}

	it = m_NewItems.find(a2->ToWString());
	if (it != m_NewItems.end())
	{
		//std::wcout.clear();  std::wcout << L"[1_BA] [ReturnAddy: 0x" << _ReturnAddress() << "] [NameA: " << a1->ToWString() << L"] [NameB: " << a2->ToWString() << L"]" << std::endl;
		
		uint32_t WStrLen = it->second.length();
		memcpy((void*)a2->ArrayData, it->second.c_str(), (WStrLen * 2));
		a2->ArrayCount = WStrLen * 2;
	}

	return pOItemCompare(a1, a2);
}
void UEHooker::UpdateEverything()
{
	if (m_isUpdated) return;

	MODULEINFO rlInfo;
	GetModuleInformation(GetCurrentProcess(), GetModuleHandleA(NULL), &rlInfo, sizeof(MODULEINFO));
	uintptr_t ulBaseAddress = reinterpret_cast<uintptr_t>(rlInfo.lpBaseOfDll);
	GObjects = reinterpret_cast<TArray<UObject*>*>(ulBaseAddress + GObjects_Offset);
	GNames = reinterpret_cast<TArray<FNameEntry*>*>(ulBaseAddress + GNames_Offset);
	pOProcessEvent = reinterpret_cast<tProcessEvent>(ulBaseAddress + ProcessEvent_Offset);

	/*/Items...  may need more than one hook.
	pOItemCompare = reinterpret_cast<tItemChanger>(ulBaseAddress + ItemCompare_Offset);
	m_ItemReturn001 = reinterpret_cast<void*>(ulBaseAddress + ItemReturn0_Offset);
	m_ItemReturn002 = reinterpret_cast<void*>(ulBaseAddress + ItemReturn1_Offset);
	m_ItemReturn003 = reinterpret_cast<void*>(ulBaseAddress + ItemReturn2_Offset);
	m_ItemReturn004 = reinterpret_cast<void*>(ulBaseAddress + ItemReturn3_Offset);
	//*/

	//Decal shenanigans
	pODecals0 = reinterpret_cast<tNullDecals0>(ulBaseAddress + DecalNull0_Offset);
	pODecals1 = reinterpret_cast<tNullDecals1>(ulBaseAddress + DecalNull1_Offset);
	m_DecalReturn00 = reinterpret_cast<void*>(ulBaseAddress + DecalReturn0_Offset);
	m_DecalReturn01 = reinterpret_cast<void*>(ulBaseAddress + DecalReturn1_Offset);
	//*/
	
	m_isUpdated = true;
}
bool UEHooker::GrabActivePlayers()
{
	if (m_isCurrentPlayerFound) return true;

	GetAllInstancesOf(ABrgPawn_CustomCharaPlayer::StaticClass());
	m_ActivePlayers.clear();

	for (UObject* pObject : m_ObjectInstances)
		if (pObject) m_ActivePlayers.push_back(reinterpret_cast<ABrgPawn_CustomCharaPlayer*>(pObject));
	
	if (m_ActivePlayers.size()) return true;
	return false;
}
bool UEHooker::SetMyPlayer()
{
	if (!m_ActivePlayers.size())
		GrabActivePlayers();

	for (auto i = 0; i != m_ActivePlayers.size(); ++i)
		std::cout << "[" << i << "] Player's info: [Stamina: " << m_ActivePlayers[i]->mStamina << "]" << std::endl;

	uint32_t IDX;
	std::cout << "[LiD] Please select your player IDX: ";
	std::cin >> IDX;

	if (IDX >= m_ActivePlayers.size())
		return false;

	m_MyPlayer = m_ActivePlayers[IDX];
	m_isCurrentPlayerFound = true;
	return true;
}
void UEHooker::PrintItemInfo(FBrgLocalItemInfo& item)
{	//ItemType == 0:Equip 1:Mushroom 2:Beast 3:Material

	std::wcout.clear();  std::wcout << L"\t[Location: 0x" << &item
		<< L"] [mItemType: " << static_cast<uint32_t>(item.mItemType)
		<< L"] [mEnable: " << item.mEnable;

	if (item.mEnable)
	{
		switch (item.mItemType)
		{
		case 0:
			std::wcout.clear();  std::wcout << L"]\n\t[PartEptId: " << item.mDbPsPart.mEptid.ToWString()
				<< L"] [PartPtId: " << item.mDbPsPart.mPtid.ToWString()
				<< L"] [PartSetupName: " << item.mDbPsPartAutoInfo.mDbName.ToWString()
				<< L"] [PartID: " << item.mDbPsPartAutoInfo.mDbPart.Mid.ToWString()
				<< L"]\n\t  [Atk: " << item.mDbPsPartAutoInfo.mDbPart.mAtk
				<< L"] [Atk0: " << item.mDbPsPartAutoInfo.mDbPart.mAtk0
				<< L"] [mAtk_c: " << item.mDbPsPartAutoInfo.mDbPart.mAtk_c
				<< L"] [Def: " << item.mDbPsPartAutoInfo.mDbPart.mDef
				<< L"] [Def0: " << item.mDbPsPartAutoInfo.mDbPart.mDef0
				<< L"] [mDef_c: " << item.mDbPsPartAutoInfo.mDbPart.mDef_c
				<< L"] [mLvllmt: " << item.mDbPsPartAutoInfo.mDbPart.mLvllmt				//This is the amt of stat required to use the item.
				<< L"] [mLvllmt_c: " << item.mDbPsPartAutoInfo.mDbPart.mLvllmt_c;
			break;

		case 1:
			std::wcout.clear();  std::wcout << L"]\n\t	[MushID: " << item.mDbMushroom.Mid.ToWString()
				<< L"] [MushDesc: " << item.mDbMushroom.mDesc.ToWString()
				<< L"] [MushRname: " << item.mDbMushroom.mR_name.ToWString()
				<< L"] [MushPriceKC: " << item.mDbMushroom.mPrice_s_money
				<< L"] [MuchCHPr: " << item.mDbMushroom.mC_recvhp
				<< L"] [MushRHPr: " << item.mDbMushroom.mR_recvhp
				<< L"] [MushCEXP: " << item.mDbMushroom.mC_exp
				<< L"] [MushREXP: " << item.mDbMushroom.mR_exp;
			break;

		case 2:
			std::wcout.clear();  std::wcout << L"]\n\t	[BeastID: " << item.mDbBeast.Mid.ToWString()
				<< L"] [BeastName: " << item.mDbBeast.mName.ToWString()
				<< L"] [BeastBname: " << item.mDbBeast.mBname.ToWString()
				<< L"] [BeastDesc: " << item.mDbBeast.mDesc.ToWString()
				<< L"] [BeastPrice: " << item.mDbBeastPrice;
			break;

		case 3:
			std::wcout.clear();  std::wcout << L"]\n\t	[itemID: " << item.mDbItem.mItemId.ToWString()
				<< L"] [itemName: " << item.mDbItem.mName.ToWString()
				<< L"] [itemDesc: " << item.mDbItem.mDesc.ToWString();
			break;
		}
	}

	std::wcout.clear();  std::wcout << "]\n" << std::endl;
}
void UEHooker::GrabFloorTreasure(ABrgPlayerCtrl_CustomChara* pCtrl, TArray<ABrgActor_Treasure*>& rTreasures)
{
	for (auto i = rTreasures.Num() - 1; i != 0; i--)
	{	//Main loop, loops through threasures, start at end to prevent use after free.
		ABrgActor_Treasure* pTreasure = rTreasures.At(i);
		if (!pTreasure)
			continue;

		uint8_t tType = pTreasure->mTreasureType; if (tType == 1) continue;
		bool bMoney = pTreasure->mDbTrBoxRewardMoney.mMoney ? true : false;

		switch (tType)
		{
		case 0:	//Money, just open red case. And parts too, we only want the money. Items too, we don't want those though, might need for blueprint? Doubt.
			if (bMoney)
			{
				SetLocationAndWait(m_MyPlayer->Location, pTreasure->Location);
				OpenCaseConfirm(pCtrl);
				Sleep(4000);
			}
			break;

		case 1:	//Mushrooms. Could start collecting the good shrooms with this if I scale this upwards.
			break;

		case 8:	//Resources on map. Can scale this upwards to the item actor to get it's name and UI because, in the UI it prints how many I have both in inventory and stash. Very useful for filtering.
			SetLocationAndWait(m_MyPlayer->Location, pTreasure->Location);
			PickUpItem(pCtrl);
			OpenCaseConfirm(pCtrl);
			Sleep(4000);
			break;

		case 9:	//Blueprint, kick box, wait, pick up item, confirm. Really need to scale this upwards to get the item display name, if it's ??? I want it, if not... NO!!!.
			SetLocationAndWait(m_MyPlayer->Location, pTreasure->Location, 2500);
			OpenCaseConfirm(pCtrl);
			Sleep(5000);	//Wait for box to open.
			PickUpItem(pCtrl);
			OpenCaseConfirm(pCtrl);
			Sleep(4000);
			break;

		case 10://Magazine / Special Items No need to scale up.
			SetLocationAndWait(m_MyPlayer->Location, pTreasure->Location);
			OpenCaseConfirm(pCtrl);
			Sleep(3000);
			break;
		}
	}
}
void UEHooker::JumpForFix(ABrgPlayerCtrl_CustomChara* pCtrl)
{
	if (!pCtrl->mInput) return;
	pCtrl->mInput->PressKey(L"Space");
	Sleep(200);
	pCtrl->mInput->ReleaseKey(L"Space");
	Sleep(2000);
	pCtrl->mInput->PressKey(L"F");
	Sleep(100);
	pCtrl->mInput->ReleaseKey(L"F");
}
void UEHooker::OpenCaseConfirm(ABrgPlayerCtrl_CustomChara* pCtrl)
{
	if (!pCtrl->mInput) return;
	pCtrl->mInput->PressKey(L"F");
	Sleep(100);
	pCtrl->mInput->ReleaseKey(L"F");
	Sleep(100);
}
void UEHooker::PickUpItem(ABrgPlayerCtrl_CustomChara* pCtrl)
{
	if (!pCtrl->mInput) return;
	pCtrl->mInput->PressShiftKey(L"LeftShift");
	Sleep(100);
	pCtrl->mInput->PressKey(L"S");
	Sleep(100);
	pCtrl->mInput->ReleaseKey(L"S");
	Sleep(100);
	pCtrl->mInput->ReleaseShiftKey(L"LeftShift");
	Sleep(100);
}
void UEHooker::SetLocationAndWait(FVector& to, FVector& from, float ms)
{
	to = from;
	Sleep(ms);
}
//*/

//LET IT DIE Funcs
bool UEHooker::Refresh()
{
	m_isCurrentPlayerFound = false;
	GrabActivePlayers();
	return true;
}
bool UEHooker::AddClearJackal()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	if (m_MyPlayer->mGameInfoNative)
		if (m_MyPlayer->mGameInfoNative->mAIDirector)
			if (!m_MyPlayer->mGameInfoNative->mAIDirector->mJackalSpawnTypeArray.Num())
			{	//Different for Tengoku? No.
				//m_MyPlayer->mGameInfoNative->mAIDirector->mJackalSpawnTypeArray.Clear();
				m_MyPlayer->mGameInfoNative->mAIDirector->mJackalSpawnTypeArray.Add(1);
				m_MyPlayer->mGameInfoNative->mAIDirector->mJackalSpawnTypeArray.Add(2);
				m_MyPlayer->mGameInfoNative->mAIDirector->mJackalSpawnTypeArray.Add(0);
			}

	return true;
}
bool UEHooker::ClearLocations()
{
	m_StoredLocations.clear();
	return true;
}
bool UEHooker::SetToEscalator()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	TArray<ABrgRandomGenerateEscalatorTargetPoint*>& pTargets = m_MyPlayer->mGameInfoNative->mEscalatorTargetPoints;
	for (auto i = 0; i != pTargets.Num(); ++i)
	{
		ABrgRandomGenerateEscalatorTargetPoint* pTarget = pTargets[i];
		if (!pTarget) continue;

		bool bIsDown = pTarget->mType;
		std::string sIsDown = "";
		if (bIsDown)
			sIsDown = "DOWN";
		else
			sIsDown = "UP";

		std::cout << '\t' << i << " [Location:0x" << pTarget
			<< "] [Type: " << sIsDown
			<< "] [Coords: " << pTarget->Location.X << " " << pTarget->Location.Y << " " << pTarget->Location.Z
			<< "]" << std::endl;
	}

	int32_t IDX;
	std::cout << "Please enter the IDX of the Escalator you wish to warp to: ";
	std::cin >> IDX;

	if (IDX >= pTargets.Num())
		return false;

	ABrgRandomGenerateEscalatorTargetPoint* pTarget = pTargets.At(IDX);
	m_MyPlayer->Location = pTarget->Location;
	m_MyPlayer->mRevivalTime = 4.0f;
	return true;
}
bool UEHooker::TestingGround()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	std::wcout.clear(); std::wcout << L"[Info on Player] [Stamina: " << m_MyPlayer->mStamina << L"] [Name: " << m_MyPlayer->mName.ToWString()
		<< L"] \n[Coords: " << m_MyPlayer->Location.X << L" " << m_MyPlayer->Location.Y << L" " << m_MyPlayer->Location.Z
		<< L"] \n[Rotation: " << m_MyPlayer->Rotation.Pitch << L" " << m_MyPlayer->Rotation.Yaw << L" " << m_MyPlayer->Rotation.Roll
		<< L"] \n[Location: 0x" << m_MyPlayer
		<< L"] \n[mCanVisibleOnMap: " << m_MyPlayer->mCanVisibleOnMap
		<< L"] \n[mRecoveryUpRate: " << m_MyPlayer->mRecoveryUpRate
		<< L"] \n[mStaminaRate: " << m_MyPlayer->mStaminaRate
		<< L"] \n[mStaminaRecovery: " << m_MyPlayer->mStaminaRecovery
		<< L"] \n[mForceInvisibleOnMap: " << m_MyPlayer->mForceInvisibleOnMap
		<< L"]" << std::endl;
		//<< "] \n[RewardBox";

	/* Looks like both of these work and lead to a RewardBox class, if you change mNowtime to mOpenTime or just add mRemainingTime to mNowTime, the box opens.
	for (auto& rwdBox : m_MyPlayer->mGameInfoNative->mDailyRewardBoxArray)
		std::cout << "] [Location: 0x" << &rwdBox << "] [" << rwdBox->mNowTime << "] [" << rwdBox->mRemainingTime;

	std::cout << "] \n[dbRewardBoxArray";

	for (auto& rwdBox : m_MyPlayer->mGameInfoNative->mDbDailyRewardBoxArray)
		std::cout << "] [Location: 0x" << &rwdBox << "] [" << rwdBox.mCreated << "] [" << rwdBox.mOpentime;
	*/

	/* REAL ITEM ID LIST!:D
	std::cout << "]\n\t[GlobalPartInfos]" << std::endl;

	for (auto& prtInfo : m_MyPlayer->mGameInfoNative->mGlobalPartInfo->mGlobalPartInfos)
	{
		std::wcout.clear();  std::wcout << L"\t[Location: 0x" << &prtInfo << L"] [ID: " << prtInfo.mPtid.ToWString() << "]\n";
	}
	//*/

	std::cout << "[GameInfo Native Now!]" << std::endl;
	if (m_MyPlayer->mGameInfoNative)
	{
		std::cout << "\n[Enemy Infos]" << std::endl;
		for (auto& eneInfo : m_MyPlayer->mGameInfoNative->mEnemyPawnArray)
		{
			if (!eneInfo) continue;
			std::wcout.clear();  std::wcout << L"\t[Location: 0x" << eneInfo
				<< L"] [Coords: " << eneInfo->Location.X << L" " << eneInfo->Location.Y << L" " << eneInfo->Location.Z
				<< L"] [Name: " << eneInfo->mName.ToWString()
				<< L"] [stop | hide | tick: " << eneInfo->mbStoppedForCutscene
				<< L" " << eneInfo->mbStoppedForCutscene_SavedHidden
				<< L" " << eneInfo->mbStoppedForCutscene_SavedTickIsDisabled
				<< L"]" << std::endl;
		}

		/*
		std::cout << "\n[Enemy Native Infos]" << std::endl;
		for (auto& eneInfo : m_MyPlayer->mGameInfoNative->mEnemyPawnNativeArray)
		{
			if (!eneInfo) continue;
			std::wcout.clear();  std::wcout << L"\t[Location: 0x" << eneInfo
				<< L"] [Coords: " << eneInfo->Location.X << L" " << eneInfo->Location.Y << L" " << eneInfo->Location.Z
				<< L"] [Name: " << eneInfo->mName.ToWString()
				<< L"] [active: " << eneInfo->mbActive
				<< L"]" << std::endl;
		}
		//*/

		/*
		std::cout << "\n[Enemy Normal Infos]" << std::endl;
		for (auto& eneInfo : m_MyPlayer->mGameInfoNative->mNormalEnemyPawnArray)
		{
			if (!eneInfo) continue;
			std::wcout.clear();  std::wcout << L"\t[Location: 0x" << eneInfo
				<< L"] [Coords: " << eneInfo->Location.X << L" " << eneInfo->Location.Y << L" " << eneInfo->Location.Z
				<< L"] [Name: " << eneInfo->mName.ToWString()
				<< L"] [stop | hide | tick: " << eneInfo->mbStoppedForCutscene
				<< L" " << eneInfo->mbStoppedForCutscene_SavedHidden
				<< L" " << eneInfo->mbStoppedForCutscene_SavedTickIsDisabled
				<< L"]" << std::endl;
		}
		//*/

		std::cout << "\n[ElevatorSwitch Infos]" << std::endl;
		for (auto& escInfo : m_MyPlayer->mGameInfoNative->mElevator2_SwitchArray)
		{
			if (!escInfo) continue;
			std::cout << "\t[Location: 0x" << escInfo
				<< "] [State: " << static_cast<uint32_t>(escInfo->mState)
				<< "] [Coords: " << escInfo->Location.X << " " << escInfo->Location.Y << " " << escInfo->Location.Z
				<< "]" << std::endl;
		}

		std::cout << "\n[StampTable Infos]" << std::endl;
		for (auto& escInfo : m_MyPlayer->mGameInfoNative->mStampTableArray)
		{
			if (!escInfo) continue;
			std::cout << "\t[Location: 0x" << escInfo
				<< "] [State: " << static_cast<uint32_t>(escInfo->mState)
				<< "] [Coords: " << escInfo->Location.X << " " << escInfo->Location.Y << " " << escInfo->Location.Z
				<< "]" << std::endl;
		}

		/*
		std::cout << "\n[Coin Infos]" << std::endl;
		for (auto& escInfo : m_MyPlayer->mGameInfoNative->mCoinArray)
		{
			if (!escInfo) continue;
			std::cout << "\t[Location: 0x" << escInfo
				<< "] [State: " << static_cast<uint32_t>(escInfo->mState)
				<< "] [Type: " << static_cast<uint32_t>(escInfo->mType)
				<< "] [TotalMoney: " << static_cast<uint32_t>(escInfo->mTotalMoney)
				<< "] [GetNum: " << static_cast<uint32_t>(escInfo->mGetNum)
				<< "] [Coords: " << escInfo->Location.X << " " << escInfo->Location.Y << " " << escInfo->Location.Z
				<< "]" << std::endl;

			escInfo->mTotalMoney = 20000;
		}
		*/

		std::cout << "\n[Escalator Infos]" << std::endl;
		for (auto& escInfo : m_MyPlayer->mGameInfoNative->mEscalatorTargetPoints)
		{
			if (!escInfo) continue;
			bool bIsDown = escInfo->mType;
			std::string sIsDown = "";
			if (bIsDown)
				sIsDown = "DOWN";
			else
				sIsDown = "UP";


			std::cout << "\t[Location: 0x" << escInfo
				<< "] [Type: " << sIsDown
				<< "] [Coords: " << escInfo->Location.X << " " << escInfo->Location.Y << " " << escInfo->Location.Z
				<< "]" << std::endl;
		}


		std::cout << "\n[Shop Infos]" << std::endl;
		for (auto& shopInfo : m_MyPlayer->mGameInfoNative->mPartShopArray)
		{
			if (!shopInfo) continue;

			std::cout << "\t[Location: " << shopInfo->mLocation.X
				<< " " << shopInfo->mLocation.Y << " " << shopInfo->mLocation.Z
				<< "]\n\t[FloorZ: " << shopInfo->mFloorZ 
				<< "]\n\t[IdleAnimWaitTime: " << shopInfo->mIdleAnimWaitTime 
				<< "]\n\t[Counter: " << shopInfo->mCounter
				<< "]\n\t[meState: " << static_cast<int32_t>(shopInfo->meState) //EBrgSisterPartShop_State
				<< "]\n\t[meCurrentOwnerAnim: " << static_cast<int32_t>(shopInfo->meCurrentOwnerAnim) //EBrgActor_SisterPartShop_Owner_Anim
				//<< "]\n\t[mShopMeshAnim: " << static_cast<int32_t>(shopInfo->mShopMeshAnim) //EBrgActor_SisterPartShop_Anim
				<< "]" << std::endl;

			std::wcout.clear();  std::wcout << L"\n[UI Const Param: " << shopInfo->mConstParam->mName.ToWString() << L"]" << std::endl;
			for (auto& param : shopInfo->mConstParam->mParam)
			{
				std::wcout.clear(); std::wcout << L"\t[mParamName: " << param.mParamName.ToWString()
					<< L"]\n\t[mParamIntMin: " << param.mParamIntMin
					<< L"]\n\t[mParamIntMax: " << param.mParamIntMax
					<< L"]\n\t[mParamScale: " << param.mParamScale
					<< L"]\n\t[mIsMinMax: " << param.mIsMinMax
					<< L"]" << std::endl;
			}

			std::cout << "\n\t[Shop Timer Infos]" << std::endl;
			for (auto& timer : shopInfo->Timers)
			{
				std::cout << "\t\t[bLoop: " << timer.bLoop
					<< "]\n\t\t[bPaused: " << timer.bPaused
					<< "]\n\t\t[Count: " << timer.Count
					<< "]\n\t\t[Rate: " << timer.Rate
					<< "]\n\t\t[TimerTimeDilation: " << timer.TimerTimeDilation
					<< "]\n\t\t[FuncName: " << timer.FuncName.ToString()
					<< "]" << std::endl;
			}
		}

		std::cout << "\n[Sister Shop Infos]" << std::endl;
		for (auto& shopInfo : m_MyPlayer->mGameInfoNative->mSisterPartShopArray)
		{
			if (!shopInfo) continue;

			std::cout << "\t[Location: " << shopInfo->mLocation.X
				<< " " << shopInfo->mLocation.Y << " " << shopInfo->mLocation.Z
				<< "]\n\t[FloorZ: " << shopInfo->mFloorZ
				<< "]\n\t[IdleAnimWaitTime: " << shopInfo->mIdleAnimWaitTime
				<< "]\n\t[Counter: " << shopInfo->mCounter
				<< "]\n\t[meState: " << static_cast<int32_t>(shopInfo->meState) //EBrgSisterPartShop_State
				<< "]\n\t[meCurrentOwnerAnim: " << static_cast<int32_t>(shopInfo->meCurrentOwnerAnim) //EBrgActor_SisterPartShop_Owner_Anim
				<< "]\n\t[mShopMeshAnim: " << static_cast<int32_t>(shopInfo->mShopMeshAnim) //EBrgActor_SisterPartShop_Anim
				<< "]" << std::endl;

			std::wcout.clear();  std::wcout << L"\n[UI Const Param: " << shopInfo->mConstParam->mName.ToWString() << L"]" << std::endl;
			for (auto& param : shopInfo->mConstParam->mParam)
			{
				std::wcout.clear(); std::wcout << L"\t[mParamName: " << param.mParamName.ToWString()
					<< L"]\n\t[mParamIntMin: " << param.mParamIntMin
					<< L"]\n\t[mParamIntMax: " << param.mParamIntMax
					<< L"]\n\t[mParamScale: " << param.mParamScale
					<< L"]\n\t[mIsMinMax: " << param.mIsMinMax
					<< L"]" << std::endl;
			}

			std::cout << "\n\t[Sister Shop Timer Infos]" << std::endl;
			for (auto& timer : shopInfo->Timers)
			{
				std::cout << "\t\t[bLoop: " << timer.bLoop
					<< "]\n\t\t[bPaused: " << timer.bPaused
					<< "]\n\t\t[Count: " << timer.Count
					<< "]\n\t\t[Rate: " << timer.Rate
					<< "]\n\t\t[TimerTimeDilation: " << timer.TimerTimeDilation
					<< "]\n\t\t[FuncName: " << timer.FuncName.ToString()
					<< "]" << std::endl;
			}
		}

		std::cout << "\n[Game Count Stuff?]" << std::endl;
		for (auto& count : m_MyPlayer->mGameInfoNative->mCntMilliSecondInfos)
		{
			std::wcout.clear(); std::wcout << L"\t[Name: " << count.mOutputName.ToWString()
				<< L"]\n\t[mCntSecond: " << count.mCntSecond
				<< L"]\n\t[mCntMilliSecond: " << count.mCntMilliSecond
				<< L"]" << std::endl;
		}

		//
		if (m_MyPlayer->mGameInfoNative->mUserData)
		{
			std::cout << "\n[Quest Infos]" << std::endl;
			for (auto i = 0; i != m_MyPlayer->mGameInfoNative->mUserData->mDBUserQuestsAll.ArrayNum; ++i)
			{
				FBrgDbUserQuest* quest = *reinterpret_cast<FBrgDbUserQuest**>((m_MyPlayer->mGameInfoNative->mUserData->mDBUserQuestsAll.Data.Dummy) + (0x0008 * i));
				if (quest && quest->mPrgnow != -1)
				{
					std::cout << "\t[Location: 0x" << quest
						<< "] [ProgNow: " << quest->mPrgnow
						<< "] [ProgMax: " << quest->mPrgmax
						<< "]" << std::endl;

					quest->mPrgmax = quest->mPrgnow;
				}
			}
		}
		//*/

		/*
		if (m_MyPlayer->mGameInfoNative->mDatabase && m_MyPlayer->mGameInfoNative->mDatabase->mResParam)
		{
			UBrgNetworkResponseGetparams* pRes = m_MyPlayer->mGameInfoNative->mDatabase->mResParam;
			if (pRes)
			{
				//Woo! Time to dump some info.
				for (auto& rPart : pRes->mPts)
				{
					std::wcout.clear();  std::wcout << L"]\n\t[PartId: " << rPart.Mid.ToWString()
						<< L"] [Atk: " << rPart.mAtk
						<< L"] [Atk0: " << rPart.mAtk0
						<< L"] [mAtk_c: " << rPart.mAtk_c
						<< L"] [Def: " << rPart.mDef
						<< L"] [Def0: " << rPart.mDef0
						<< L"] [mDef_c: " << rPart.mDef_c
						<< L"] [mLvllmt: " << rPart.mLvllmt
						<< L"] [mLvllmt_c: " << rPart.mLvllmt_c;
				}


				std::wcout << std::endl;
				for (auto& rInt : pRes->mConst_ints)
				{
					std::wcout.clear();  std::wcout << L"]\n\t[Const_Int: " << rInt.Mid.ToWString()
						<< "] [Value: " << rInt.mValue;
				}

				std::wcout << std::endl;
				for (auto& rFloat : pRes->mConst_floats)
				{
					std::wcout.clear();  std::wcout << L"]\n\t[Const_Float: " << rFloat.Mid.ToWString()
						<< "] [Value: " << rFloat.mValue;
				}

				std::wcout << std::endl;
				for (auto& rStr : pRes->mConst_strs)
				{
					std::wcout.clear();  std::wcout << L"]\n\t[Const_Str: " << rStr.Mid.ToWString()
						<< "] [Value: " << rStr.mValue.ToWString();
				}

				std::wcout << std::endl;
			}
		}
		//*/
	}
	
	/*
	std::cout << "\n\n[GameInfo Now!]" << std::endl;
	if (m_MyPlayer->mGameInfo)
	{
		/*
		std::cout << "\n[Shop Infos]" << std::endl;
		for (auto& shopInfo : m_MyPlayer->mGameInfo->mPartShopArray)
		{
			if (!shopInfo) continue;

			std::cout << "\t[Location: " << shopInfo->mLocation.X
				<< " " << shopInfo->mLocation.Y << " " << shopInfo->mLocation.Z
				<< "]\n\t[FloorZ: " << shopInfo->mFloorZ
				<< "]\n\t[IdleAnimWaitTime: " << shopInfo->mIdleAnimWaitTime
				<< "]\n\t[Counter: " << shopInfo->mCounter
				<< "]\n\t[meState: " << static_cast<int32_t>(shopInfo->meState) //EBrgSisterPartShop_State
				<< "]\n\t[meCurrentOwnerAnim: " << static_cast<int32_t>(shopInfo->meCurrentOwnerAnim) //EBrgActor_SisterPartShop_Owner_Anim
				//<< "]\n\t[mShopMeshAnim: " << static_cast<int32_t>(shopInfo->mShopMeshAnim) //EBrgActor_SisterPartShop_Anim
				<< "]" << std::endl;

			std::wcout.clear();  std::wcout << L"\n[UI Const Param: " << shopInfo->mConstParam->mName.ToWString() << L"]" << std::endl;
			for (auto& param : shopInfo->mConstParam->mParam)
			{
				std::wcout.clear(); std::wcout << L"\t[mParamName: " << param.mParamName.ToWString()
					<< L"]\n\t[mParamIntMin: " << param.mParamIntMin
					<< L"]\n\t[mParamIntMax: " << param.mParamIntMax
					<< L"]\n\t[mParamScale: " << param.mParamScale
					<< L"]\n\t[mIsMinMax: " << param.mIsMinMax
					<< L"]" << std::endl;
			}

			std::cout << "\n\t[Shop Timer Infos]" << std::endl;
			for (auto& timer : shopInfo->Timers)
			{
				std::cout << "\t\t[bLoop: " << timer.bLoop
					<< "]\n\t\t[bPaused: " << timer.bPaused
					<< "]\n\t\t[Count: " << timer.Count
					<< "]\n\t\t[Rate: " << timer.Rate
					<< "]\n\t\t[TimerTimeDilation: " << timer.TimerTimeDilation
					<< "]\n\t\t[FuncName: " << timer.FuncName.ToString()
					<< "]" << std::endl;
			}
		}
		//*/

		/*
		std::cout << "\n[Sister Shop Infos]" << std::endl;
		for (auto& shopInfo : m_MyPlayer->mGameInfo->mSisterPartShopArray)
		{
			if (!shopInfo) continue;

			std::cout << "\t[Location: " << shopInfo->mLocation.X
				<< " " << shopInfo->mLocation.Y << " " << shopInfo->mLocation.Z
				<< "]\n\t[FloorZ: " << shopInfo->mFloorZ
				<< "]\n\t[IdleAnimWaitTime: " << shopInfo->mIdleAnimWaitTime
				<< "]\n\t[Counter: " << shopInfo->mCounter
				<< "]\n\t[meState: " << static_cast<int32_t>(shopInfo->meState) //EBrgSisterPartShop_State
				<< "]\n\t[meCurrentOwnerAnim: " << static_cast<int32_t>(shopInfo->meCurrentOwnerAnim) //EBrgActor_SisterPartShop_Owner_Anim
				<< "]\n\t[mShopMeshAnim: " << static_cast<int32_t>(shopInfo->mShopMeshAnim) //EBrgActor_SisterPartShop_Anim
				<< "]" << std::endl;

			std::wcout.clear();  std::wcout << L"\n[UI Const Param: " << shopInfo->mConstParam->mName.ToWString() << L"]" << std::endl;
			for (auto& param : shopInfo->mConstParam->mParam)
			{
				std::wcout.clear(); std::wcout << L"\t[mParamName: " << param.mParamName.ToWString()
					<< L"]\n\t[mParamIntMin: " << param.mParamIntMin
					<< L"]\n\t[mParamIntMax: " << param.mParamIntMax
					<< L"]\n\t[mParamScale: " << param.mParamScale
					<< L"]\n\t[mIsMinMax: " << param.mIsMinMax
					<< L"]" << std::endl;
			}

			std::cout << "\n\t[Sister Shop Timer Infos]" << std::endl;
			for (auto& timer : shopInfo->Timers)
			{
				std::cout << "\t\t[bLoop: " << timer.bLoop
					<< "]\n\t\t[bPaused: " << timer.bPaused
					<< "]\n\t\t[Count: " << timer.Count
					<< "]\n\t\t[Rate: " << timer.Rate
					<< "]\n\t\t[TimerTimeDilation: " << timer.TimerTimeDilation
					<< "]\n\t\t[FuncName: " << timer.FuncName.ToString()
					<< "]" << std::endl;
			}
		}
		*/

		/*
		std::cout << "\n[Game Count Stuff?]" << std::endl;
		for (auto& count : m_MyPlayer->mGameInfo->mCntMilliSecondInfos)
		{
			std::wcout.clear(); std::wcout << L"\t[Name: " << count.mOutputName.ToWString()
				<< L"]\n\t[mCntSecond: " << count.mCntSecond
				<< L"]\n\t[mCntMilliSecond: " << count.mCntMilliSecond
				<< L"]" << std::endl;
		}
		*/

	/*//
		std::cout << "\n[mSteamNetworkErrorExit: " << m_MyPlayer->mGameInfo->mSteamNetworkErrorExit
			//<< "] [mDisableDebugMenu: " << m_MyPlayer->mGameInfo->mDisableDebugMenu
			<< "]" << std::endl;

		if (m_MyPlayer->mGameInfo->mClosedAreaBattleManager)
		{
			std::cout << "\n[ClosedBattleMgr]" << std::endl;
			auto ptr = m_MyPlayer->mGameInfo->mClosedAreaBattleManager;
			std::cout << "\t[mIsClosed: " << ptr->mIsClosed
				<< "]\n\t[mNumOverlookEnemy: " << ptr->mNumOverlookEnemy
				<< "]\n\t[mNoEnemyTimer: " << ptr->mNoEnemyTimer
				<< "]" << std::endl;
		}

		if (m_MyPlayer->mGameInfo->mClosedAreaBattleEvent)
		{
			std::cout << "\n[ClosedBattleEvent]" << std::endl;
			auto ptr = m_MyPlayer->mGameInfo->mClosedAreaBattleEvent;
			std::cout << "\t[mIsOpened: " << ptr->mIsOpened
				<< "]\n\t[mIsFirstStateState: " << ptr->mIsFirstStateState
				<< "]\n\t[mIsActorPaused: " << ptr->mIsActorPaused
				<< "]\n\t[mState: " << static_cast<uint32_t>(ptr->mState)
				<< "]\n\t[mGeneralTimer: " << ptr->mGeneralTimer
				<< "]\n\t[mGeneralLoopTimer: " << ptr->mGeneralLoopTimer
				<< "]" << std::endl;
		}
	}
	//*/

	/*
	std::cout << "\n[BindingKeys Infos]" << std::endl;
	for (auto& kbind : m_MyPlayer->mPlayerCtrl->mInput->Bindings)
	{
		std::cout << "\t[Location: 0x" << &kbind
			<< "] [Name: " << kbind.Name.ToString()
			<< "] [bShift | bCtrl | balt: " << kbind.Shift << " " << kbind.Control << " " << kbind.Alt
			<< "] ";
		std::wcout.clear(); std::wcout << L"[Command: " << kbind.Command.ToWString() << L"]" << std::endl;
	}
	//*/

	if (m_MyPlayer->mGameInfoNative && m_MyPlayer->mCommonPawn && m_MyPlayer->mPlayerCtrl)
	{
		std::cout << "\n[Flags Changed"
			<< "]\n\t[DurDwnDis: " << m_MyPlayer->mDurabilityDownDisable
			<< "]\n\t[BtConDis " << m_MyPlayer->mGunBulletConsumptionDisable
			<< "]\n\t[AttInvi: " << m_MyPlayer->mAttributeInvincible
			<< "]\n\t[InvisScene: " << m_MyPlayer->mbInvincibleScene
			<< "]\n\t[mStrAdjustRate: " << m_MyPlayer->mStrAdjustRate
			<< "]\n\t[mDexAdjustRate: " << m_MyPlayer->mDexAdjustRate
			<< "]\n\t[mVitAdjustRate: " << m_MyPlayer->mVitAdjustRate
			<< "]\n\t[mEquipMawashi: " << m_MyPlayer->mGameInfoNative->mEquipMawashi
			<< "]\n\t[ActLog: " << m_MyPlayer->mGameInfoNative->mUserData->mEnableActionLog
			<< "]\n\t[PlyLog: " << m_MyPlayer->mCommonPawn->mDisablePlayerEventLog
			<< "]\n\t[mSkillStatus: " << &m_MyPlayer->mCommonPawn->mSkillStatus
			//<< "]\n\t[mMeshHide: " << m_MyPlayer->mMeshHide
			//<< "]\n\t[mObjectVisible: " << m_MyPlayer->mObjectVisible
			<< "]\n\t[mbInputEnable: " << m_MyPlayer->mPlayerCtrl->mbInputEnable
			<< "]" << std::endl;

		if (m_MyPlayer->mCommonPawn->mBodySkillStickerObject)
		{
			std::wcout.clear(); std::wcout << L"\n[Decals Equipped]\n";
			for (auto& sticker : m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mDbEqSkills)
			{
				std::wcout.clear(); std::wcout << L"\n\t[Mid: " << sticker.Mid.ToWString()
					<< L"]\n\t[mSlot: " << sticker.mSlot
					<< L"]" << std::endl;
			}
		}
	}

	/*
	if (m_MyPlayer->mGameInfoNative && m_MyPlayer->mGameInfoNative->mStageManager)
	{
		std::wcout.clear();  std::wcout << L"\n[Floor Info"
			<< L"]\n\t[ID: " << m_MyPlayer->mGameInfoNative->mStageManager->mCurrentFloor.mFlrid.ToWString()
			<< L"]\n\t[No: " << m_MyPlayer->mGameInfoNative->mStageManager->mCurrentFloor.mFlrno
			<< L"]\n\t[mAreaid: " << m_MyPlayer->mGameInfoNative->mStageManager->mCurrentFloor.mAreaid.ToWString()
			<< L"]\n\t[mUnitid: " << m_MyPlayer->mGameInfoNative->mStageManager->mCurrentFloor.mUnitid.ToWString()
			<< L"]" << std::endl;
	}
	//*/

	//mFloorTitle
	//mLoading
	//mFloorResultMenu
	//mElevatorMenu
	//
	if (m_MyPlayer->mGameInfoNative && m_MyPlayer->mGameInfoNative->mUIManager)
	{
		std::wcout.clear(); std::wcout << L"\n[UIInfos";
		UBrgUIManager* pManager = m_MyPlayer->mGameInfoNative->mUIManager;

		/*
		if (pManager->mFloorTitle)
		{
			std::wcout.clear(); std::wcout << L"]\n\t[FloorTitle_mVisible: " << pManager->mFloorTitle->mVisible
				<< L"]\n\t[FloorTitle_String: " << pManager->mFloorTitle->mString.ToWString();
		}
		if (pManager->mLoading)
		{
			std::wcout.clear(); std::wcout << L"]\n\t[Loading_mVisible: " << pManager->mLoading->mVisible
				<< L"]\n\t[Loading_mHideRequest: " << pManager->mLoading->mHideRequest;
		}
		if (pManager->mFloorResultMenu)
		{
			std::wcout.clear(); std::wcout << L"]\n\t[FloorResultMenu_mbEnd: " << pManager->mFloorResultMenu->mbEnd
				<< L"]\n\t[FloorResultMenu_mbLevelInitd: " << pManager->mFloorResultMenu->mbLevelInitialized
				<< L"]\n\t[FloorResultMenu_mMode: " << static_cast<int32_t>(pManager->mFloorResultMenu->mMode);
		}
		//*/

		/*
		if (pManager->mElevatorMenu)
		{
			std::wcout << L"]\n\t[FloorTitle_mVisible: " << pManager->mFloorTitle->mVisible
				<< L"]\n\t[FloorTitle_String: " << pManager->mFloorTitle->mString.ToWString();
		}
		//*/

		std::wcout.clear(); std::wcout << "]" << std::endl;

		/*
		if (pManager->mHUD)
			std::cout << "\n[HUD INFO"
			<< "]\n\t[bShowHUD : " << pManager->mHUD->bShowHUD
			<< "]\n\t[bShowDebugInfo : " << pManager->mHUD->bShowDebugInfo
			<< "]\n\t[bShowDirectorInfoHUD : " << pManager->mHUD->bShowDirectorInfoHUD
			<< "]\n\t[bShowDirectorInfoDebug : " << pManager->mHUD->bShowDirectorInfoDebug
			<< "]" << std::endl;
		*/

		if (pManager->mPauseMap)
		{
			std::wcout.clear(); std::wcout << L"\n[PauseMap_mIconDescVisible: " << pManager->mPauseMap->mIconDescVisible
				<< L"]\n\t[PauseMap_mbNoCoverFlag: " << pManager->mPauseMap->mbNoCoverFlag
				<< L"]\n\t[PauseMap_mbNowVisible: " << pManager->mPauseMap->mbNowVisible
				<< L"]\n\t[PauseMap_mOperationEnable: " << pManager->mPauseMap->mOperationEnable
				<< L"]" << std::endl;
		}
	}
	//*/

	//
	if (m_MyPlayer->mGameInfoNative && m_MyPlayer->mGameInfoNative->mAIDirector)
	{
		std::cout << "\n[AIDirector Shiz, Location: 0x" << m_MyPlayer->mGameInfoNative->mAIDirector
			//<< "]\n\t[EnemyDebug: " << m_MyPlayer->mGameInfoNative->mAIDirector->mShowEnemyDebugInformation
			//<< "]\n\t[NEnemyDebug: " << m_MyPlayer->mGameInfoNative->mAIDirector->mShowNormalEnemyDebugInformation
			//<< "]\n\t[MBossDebug: " << m_MyPlayer->mGameInfoNative->mAIDirector->mShowMiddleBossDebugInformation
			//<< "]\n\t[MushBeastDebug: " << m_MyPlayer->mGameInfoNative->mAIDirector->mShowMushBeastDebugInformation
			//<< "]\n\t[EneRewDebug: " << m_MyPlayer->mGameInfoNative->mAIDirector->mShowEnemyRewardDebugInformation
			//<< "]\n\t[AreaDebug: " << m_MyPlayer->mGameInfoNative->mAIDirector->mShowAreaDebugInformation
			<< "]\n\t[mbJackalSpawnCheck: " << m_MyPlayer->mGameInfoNative->mAIDirector->mbJackalSpawnCheck
			<< "]\n\t[mbJackalSpawnEnable: " << m_MyPlayer->mGameInfoNative->mAIDirector->mbJackalSpawnEnable
			<< "]\n\t[mJackalSpawnTime: " << m_MyPlayer->mGameInfoNative->mAIDirector->mJackalSpawnTime
			<< "]\n\t[mJackalSpawnNum: " << m_MyPlayer->mGameInfoNative->mAIDirector->mJackalSpawnNum
			<< "]\n\t[mJackalSpawnProb: " << m_MyPlayer->mGameInfoNative->mAIDirector->mJackalSpawnProb
			<< "]\n\t[mbJudgeAllEnemyKill: " << m_MyPlayer->mGameInfoNative->mAIDirector->mbJudgeAllEnemyKill
			<< "]\n";

		std::cout << "\n[Jackal Types] ";
		for (uint8_t jkType : m_MyPlayer->mGameInfoNative->mAIDirector->mJackalSpawnTypeArray)
			std::cout << " [" << static_cast<uint32_t>(jkType) << "]";
		std::cout << std::endl;
	}
	//*/

	//UBrgDatabase contains actually all the client's ID information. Like Part ID, Equip ID, Mastery IDs..
	//UBrgGameEngine::OpenBrgGameMessageBox();
	//m_MyPlayer->mGameInfoNative->mUIManager->mGameEngine->OpenBrgGameMessageBox(FString(std::wstring(L"Testing the message box pop. :) \n Hello from Console!")));
	//m_MyPlayer->mGameInfoNative->mUIManager->mGameEngine->bPauseOnLossOfFocus = false;

	return true;
}
bool UEHooker::MessWithItems()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	//
	std::cout << "[Inventory printing and messing ;o] [0x" << &m_MyPlayer->mCommonPawn->mDeathBag << "]" << std::endl;
	for (FBrgLocalItemInfo& rItem : m_MyPlayer->mCommonPawn->mDeathBag)
	{
		PrintItemInfo(rItem);
		if (rItem.mItemType == 0 && rItem.mEnable)
		{	//Bad Boi Stuffs - Not checked on Server? Server will just resync with valid values, no kick? LMAO - Time to cut up.
			//rItem.mDbPsPart.mGrade += 4;
			//rItem.mDbPsPart.mLvl += 20;
			//rItem.mDbPsPartAutoInfo.mDbPart.mLvllmt = 20;
			
			/*
			auto it = m_NewItems.find(rItem.mDbPsPart.mPtid.ToWString());
			if (it == m_NewItems.end()) continue;

			uint32_t WStrLen = it->second.length();
			memcpy((void*)rItem.mDbPsPart.mPtid.ArrayData, it->second.c_str(), (WStrLen * 2));
			memcpy((void*)rItem.mDbPsPartAutoInfo.mDbPart.Mid.ArrayData, it->second.c_str(), (WStrLen * 2));
			//rItem.mDbPsPartAutoInfo.mDbPart.mLvllmt = rItem.mDbPsPartAutoInfo.mDbPart.mLvllmt_c;
			//rItem.mEnable = 1;
			/*/
		}
		/*
		if (rItem.mItemType == 1)
		{
			rItem.mDbMushroom.mC_exp = 99999;
			rItem.mDbMushroom.mR_exp = 99999;
		}
		if (rItem.mItemType == 2)
			rItem.mDbBeastPrice = 99999;
		/*/
	}

	std::cout << "[Backup Deathbag] [0x" << &m_MyPlayer->mCommonPawn->mBackupDeathBag << "]" << std::endl;
	for (FBrgDeathBagBackupInfo& rItemBk : m_MyPlayer->mCommonPawn->mBackupDeathBag)
	{
		FBrgLocalItemInfo& rItem = rItemBk.mLocalItemInfo;
		PrintItemInfo(rItem);
		if (rItem.mItemType == 0 && rItem.mEnable)
		{	//Bad Boi Stuffs - Not checked on Server? Server will just resync with valid values, no kick? LMAO - Time to cut up.
			//rItem.mDbPsPart.mGrade += 4;
			//rItem.mDbPsPart.mLvl += 20;

			/*
			auto it = m_NewItems.find(rItem.mDbPsPart.mPtid.ToWString());
			if (it == m_NewItems.end()) continue;

			uint32_t WStrLen = it->second.length();
			memcpy((void*)rItem.mDbPsPart.mPtid.ArrayData, it->second.c_str(), (WStrLen * 2));
			memcpy((void*)rItem.mDbPsPartAutoInfo.mDbPart.Mid.ArrayData, it->second.c_str(), (WStrLen * 2));
			//rItem.mDbPsPartAutoInfo.mDbPart.mLvllmt = rItem.mDbPsPartAutoInfo.mDbPart.mLvllmt_c;
			//rItem.mEnable = 1;
			/*/
		}
		/*
		if (rItem.mItemType == 1)
		{
			rItem.mDbMushroom.mC_exp = 99999;
			rItem.mDbMushroom.mR_exp = 99999;
		}
		if (rItem.mItemType == 2)
			rItem.mDbBeastPrice = 99999;
		/*/
	}

	std::cout << "[Equipped Items] [0x" << &m_MyPlayer->mCommonPawn->mEquipPartInfo << "]" << std::endl;
	for (auto i = 0; i != 8; ++i)
	{
		FBrgLocalItemInfo& rItem = m_MyPlayer->mCommonPawn->mEquipPartInfo[i];
		PrintItemInfo(rItem);
		/*
		if (rItem.mItemType == 0 && rItem.mEnable)
		{
			rItem.mDbPsPart.mGrade += 4;
			rItem.mDbPsPart.mLvl += 20;
			rItem.mDbPsPartAutoInfo.mDbPart.mLvllmt = 20;
		}
		*/

		/*
		auto it = m_NewItems.find(rItem.mDbPsPart.mPtid.ToWString());
		if (it == m_NewItems.end()) continue;

		uint32_t WStrLen = it->second.length();
		memcpy((void*)rItem.mDbPsPart.mPtid.ArrayData, it->second.c_str(), (WStrLen * 2));
		memcpy((void*)rItem.mDbPsPartAutoInfo.mDbPart.Mid.ArrayData, it->second.c_str(), (WStrLen * 2));
		//rItem.mDbPsPartAutoInfo.mDbPart.mLvllmt = rItem.mDbPsPartAutoInfo.mDbPart.mLvllmt_c;
		//rItem.mEnable = 1;
		/*/

		/*
		if (rItem.mItemType == 1)
		{
			rItem.mDbMushroom.mC_exp = 99999;
			rItem.mDbMushroom.mR_exp = 99999;
		}
		if (rItem.mItemType == 2)
			rItem.mDbBeastPrice = 99999;
		/*/
	}

	if (m_MyPlayer->mGameInfoNative && m_MyPlayer->mGameInfoNative->mDatabase && m_MyPlayer->mGameInfoNative->mDatabase->mResParam)
	{
		UBrgNetworkResponseGetparams* pRes = m_MyPlayer->mGameInfoNative->mDatabase->mResParam;
		if (pRes)
		{
			for (auto& rPart : pRes->mPts)
			{
				auto it = m_NewItems.find(rPart.Mid.ToWString());
				if (it != m_NewItems.end())
				{
					if (rPart.mAtk) rPart.mAtk = 25000;
					if (rPart.mAtk0) rPart.mAtk0 = 25000;
					if (rPart.mDef) rPart.mDef = 25000;
					if (rPart.mDef0) rPart.mDef0 = 25000;
					if (rPart.mRange) rPart.mRange += 25000;
					rPart.mAccu += 1.0f;
					rPart.mLvllmt = 2;

					//uint32_t WStrLen = it->second.length();
					//memcpy((void*)rPart.Mid.ArrayData, it->second.c_str(), (WStrLen * 2));
					//rPart.Mid.ArrayCount = WStrLen * 2;
					//continue;
				}

				//
				it = m_OldItems.find(rPart.Mid.ToWString());
				if (it != m_OldItems.end())
				{
					if (rPart.mAtk) rPart.mAtk = 25000;
					if (rPart.mAtk0) rPart.mAtk0 = 25000;
					if (rPart.mDef) rPart.mDef = 25000;
					if (rPart.mDef0) rPart.mDef0 = 25000;
					if (rPart.mRange) rPart.mRange += 25000;
					rPart.mAccu += 1.0f;
					rPart.mLvllmt = 2;

					//uint32_t WStrLen = it->second.length();
					//memcpy((void*)rPart.Mid.ArrayData, it->second.c_str(), (WStrLen * 2));
					//rPart.Mid.ArrayCount = WStrLen * 2;
				}
				//*/
			}
		}
	}

	/*
	if (!m_isItemsHooked)
	{
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourAttach(&reinterpret_cast<PVOID&>(pOItemCompare), reinterpret_cast<PVOID>(hkItemCompare));
		DetourTransactionCommit();
		m_isItemsHooked = true;
	}
	//*/

	std::cout << "[hkItemCompare Location 0x" << hkItemCompare << "]" << std::endl;
	std::cout << "[pOItemCompare Location 0x" << pOItemCompare << "]" << std::endl;

	return true;
}
bool UEHooker::SetCoordinate()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;
	
	float X, Y, Z;
	std::cout << "Enter your desired coordinates in the form of X Y Z: ";
	std::cin >> X >> Y >> Z;

	m_MyPlayer->Location.X = X;
	m_MyPlayer->Location.Y = Y;
	m_MyPlayer->Location.Z = Z;
	
	return true;
}
bool UEHooker::SetToTreasure()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	TArray<ABrgActor_Treasure*>& pTreasures = m_MyPlayer->mGameInfoNative->mTreasureArray;
	for (auto i = 0; i != pTreasures.Num(); ++i)
	{
		ABrgActor_Treasure* pTreasure = pTreasures[i];
		std::wcout.clear(); std::wcout << L"\t[" << i
			<< L"] [mMeshHide: " << pTreasure->mMeshHide
			<< L"] [mDropItemVisible: " << pTreasure->mDropItemVisible
			<< L"] [mPartMeshOutlineHide: " << pTreasure->mPartMeshOutlineHide
			<< L"] [mOutlineDistanceVisible: " << pTreasure->mOutlineDistanceVisible;
			//<< L"] [trType: " << static_cast<int32_t>(pTreasure->mTreasureType);

		switch (pTreasure->mTreasureType)
		{
		case 0:
		{
			std::wcout.clear(); std::wcout << L"] [Unit: " << pTreasure->mDbTrBoxRewardMoney.mUnit.ToWString()
				//<< L"] [PntId: " << pTreasure->mDbTrBoxRewardMoney.mPntid.ToWString()
				<< L"] [sType: " << pTreasure->mDbTrBoxRewardMoney.mType.ToWString();
				//<< L"] [apiId: " << pTreasure->mDbTrBoxRewardMoney.mApid.ToWString()
				//<< L"] [GenId: " << pTreasure->mDbTrBoxRewardMoney.mGenid.ToWString();
			break;
		}

		case 1:	//Mushrooms. Could start collecting the good shrooms with this if I scale this upwards.
			break;

		case 8:
		{	//Resources on map. Can scale this upwards to the item actor to get it's name and UI because, in the UI it prints how many I have both in inventory and stash. Very useful for filtering.
			ABrgActor_Treasure_Item* pItem = reinterpret_cast<ABrgActor_Treasure_Item*>(pTreasure);
			if (pItem->mDbItemEntity.mItemId.ArrayData && *pItem->mDbItemEntity.mItemId.ArrayData)
			{
				std::wstring itemID = pItem->mDbItemEntity.mItemId.ToWString();
				std::wcout.clear(); std::wcout << L"] [mItemId: " << itemID;
			}
			//<< L"] [mName: " << pItem->mDbItem.mName.ToWString()
			//<< L"] [mDesc: " << pItem->mDbItem.mName.ToWString();
			break;
		}

		case 9:	//Blueprint, kick box, wait, pick up item, confirm. Really need to scale this upwards to get the item display name, if it's ??? I want it, if not... NO!!!.
			break;

		case 10://Magazine / Special Items No need to scale up.
			break;
		}

		std::wcout.clear(); std::wcout << L"]" << std::endl;

		//if (pTreasure->mDsbTrBoxRewardMoney.mMoney)
			//pTreasure->mDbTrBoxRewardMoney.mMoney = 20000;
	}

	int32_t IDX;
	std::cout << "Please enter the IDX of the Treasure Location you wish to warp to: ";
	std::cin >> IDX;

	if (IDX >= pTreasures.Num())
		return false;

	ABrgActor_Treasure* pTreasure = pTreasures.At(IDX);
	m_MyPlayer->Location = pTreasure->Location;
	m_MyPlayer->mRevivalTime = 60.0f;
	return true;
}
bool UEHooker::SetMyNormals()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	//m_MyPlayer->mStrAdjustRate = 15.0f;
	//m_MyPlayer->mDexAdjustRate = 15.0f;
	//m_MyPlayer->mVitAdjustRate = 8.0f;
	m_MyPlayer->mHateUpScale = 5.0f;
	m_MyPlayer->mCommonPawn->mSkillMoveGaugeRate = 5.0f;
	m_MyPlayer->mStaminaRate = 0.60f;

	m_MyPlayer->mCommonPawn->mNoDmgKillAttackUpRate = 2.0f;
	//m_MyPlayer->mCommonPawn->mbDisableRefreshEquipPart = true;

	m_MyPlayer->mGameInfoNative->mIsProduction = true;
	m_MyPlayer->mGameInfoNative->mbDebugQABuild = true;
	m_MyPlayer->mDurabilityDownDisable = true;
	m_MyPlayer->mAttributeInvincible = true;
	m_MyPlayer->mGunBulletConsumptionDisable = true;
	m_MyPlayer->mbWarpFallDamageDisable = true;
	//m_MyPlayer->mbResurrection = true;
	//m_MyPlayer->mbSuperArmor = true;
	//m_MyPlayer->mbProjectileSuperArmor = true;
	//m_MyPlayer->mbProjectileNoHit = true;
	m_MyPlayer->mCommonPawn->mbForceMasterLevelMax = true;
	m_MyPlayer->mFixedCriticalRate = 85.0f;

	if (m_MyPlayer->mGameInfoNative && m_MyPlayer->mGameInfoNative->mRandomGenerateLevelManager)
	{
		m_MyPlayer->mGameInfoNative->mRandomGenerateLevelManager->mbGenerateLevelCompleted = true;
		m_MyPlayer->mGameInfoNative->mRandomGenerateLevelManager->mbShowDebugInformation = true;
		m_MyPlayer->mGameInfoNative->mRandomGenerateLevelManager->mbForceActiveAllCell = true;
	}

	return true;
}
bool UEHooker::SetWalkSpeed()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	std::cout << "[LiD] Old Move Scale: " << m_MyPlayer->mWalkSpeedPerSecond << " Please enter your new Move Scale: ";
	std::cin >> m_MyPlayer->mWalkSpeedPerSecond;
	return true;
}
bool UEHooker::SetSprintSpeed()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	std::cout << "[LiD] Old Move Scale: " << m_MyPlayer->mStealthWalkSpeedPerSecond << " Please enter your new Move Scale: ";
	std::cin >> m_MyPlayer->mStealthWalkSpeedPerSecond;
	return true;
}
bool UEHooker::SetMoveSpeed()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	std::cout << "[LiD] Old Move Speed: " << m_MyPlayer->MovementSpeedModifier << " Please enter your new Move Speed: ";
	std::cin >> m_MyPlayer->MovementSpeedModifier;
	return true;
}
bool UEHooker::SetSTRAdjust()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	std::cout << "[LiD] Please enter your new STR Adjust Rate: ";
	std::cin >> m_MyPlayer->mStrAdjustRate;
	return true;
}
bool UEHooker::SetDEXAdjust()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;


	std::cout << "[LiD] Please enter your new DEX Adjust Rate: ";
	std::cin >> m_MyPlayer->mDexAdjustRate;
	return true;
}
bool UEHooker::SetVITAdjust()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	std::cout << "[LiD] Please enter your new VIT Adjust Rate: ";
	std::cin >> m_MyPlayer->mVitAdjustRate;
	return true;
}
bool UEHooker::SetHateScale()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	std::cout << "[LiD] Please enter your new Hate Up Scale: ";
	std::cin >> m_MyPlayer->mHateUpScale;
	return true;
}
bool UEHooker::ToggleInfDur()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	m_MyPlayer->mDurabilityDownDisable ^= 1;
	return true;
}
bool UEHooker::ToggleInfAmm()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	m_MyPlayer->mGunBulletConsumptionDisable ^= 1;
	return true;
}
bool UEHooker::ToggleResist()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	m_MyPlayer->mAttributeInvincible ^= 1;
	return true;
}
bool UEHooker::ToggleInvinc()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	m_MyPlayer->mbInvincibleScene ^= 1;
	return true;
}
bool UEHooker::ToggleActLog()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	m_MyPlayer->mGameInfoNative->mUserData->mEnableActionLog ^= 1;
	return true;
}
bool UEHooker::TogglePlyLog()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	m_MyPlayer->mCommonPawn->mDisablePlayerEventLog ^= 1;
	m_MyPlayer->mForceInvisibleOnMap ^= 1;
	m_MyPlayer->mCanVisibleOnMap ^= 1;
	return true;
}
bool UEHooker::IncreaseXByV()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	float increase;
	std::cout << "[LiD] Please enter your wanted X coordinate increase: " << std::endl;
	std::cin >> increase;

	m_MyPlayer->Location.X += increase;
	return true;
}
bool UEHooker::IncreaseYByV()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	float increase;
	std::cout << "[LiD] Please enter your wanted Y coordinate increase: " << std::endl;
	std::cin >> increase;

	m_MyPlayer->Location.Y += increase;
	return true;
}
bool UEHooker::IncreaseZByV()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	float increase;
	std::cout << "[LiD] Please enter your wanted Z coordinate increase: " << std::endl;
	std::cin >> increase;

	m_MyPlayer->Location.Z += increase;
	return true;
}
bool UEHooker::SaveLocation()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	m_StoredLocations.push_back(m_MyPlayer->Location);
	return true;
}
bool UEHooker::LoadLocation()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	std::cout << "[Stored locations]" << std::endl;
	for (auto i = 0; i != m_StoredLocations.size(); ++i)
	{
		FVector& Loc = m_StoredLocations[i];
		std::cout << "\t [" << i << "] [" << Loc.X << " " << Loc.Y << " " << Loc.Z << "]" << std::endl;
	}

	uint32_t IDX;
	std::cout << "Please select the index of the Location you wish to load: ";
	std::cin >> IDX;

	if (IDX >= m_StoredLocations.size()) return false;
		
	m_MyPlayer->Location = m_StoredLocations[IDX];
	return true;
}
bool UEHooker::TryGiveDebug()
{
	//UBrgDebugMenu* pDebugMenu = reinterpret_cast<UBrgDebugMenu*>(GetInstanceOf(UBrgDebugMenu::StaticClass()));
	//if (!pDebugMenu) return false;
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	//m_MyPlayer->mGameInfoNative->mDebugMenu = pDebugMenu;
	//m_MyPlayer->mCommonPawn->mGameInfoNative->mDebugMenu = pDebugMenu;
	m_MyPlayer->mCustomCharaPlayerCtrl->ConsoleCommand(L"DebugMenu", 0);

	if (!m_MyParts)
	{
		GetAllInstancesOf(UBrgMbObject_LoadPart::StaticClass());
		for (auto i = 0; i != m_ObjectInstances.size(); ++i)
			std::cout << "[" << i << "] Objects: 0x" << m_ObjectInstances[i] << "]" << std::endl;

		uint32_t IDX;
		std::cout << "[LiD] Please select your wanted IDX: ";
		std::cin >> IDX;

		if (IDX >= m_ObjectInstances.size())
			return false;

		m_MyParts = reinterpret_cast<UBrgMbObject_LoadPart*>(m_ObjectInstances[IDX]);
	}

	for (auto& item : m_MyParts->mPartsList)
	{
		std::wcout.clear();  std::wcout << L"]\n\t[PartEptId: " << item.mDbPsPart.mEptid.ToWString()
			<< L"] [PartPtId: " << item.mDbPsPart.mPtid.ToWString()
			<< L"] [PartID: " << item.mDbPart.Mid.ToWString()
			<< L"]\n\t  [Atk: " << item.mDbPart.mAtk
			<< L"] [Atk0: " << item.mDbPart.mAtk0
			<< L"] [mAtk_c: " << item.mDbPart.mAtk_c
			<< L"] [Def: " << item.mDbPart.mDef
			<< L"] [Def0: " << item.mDbPart.mDef0
			<< L"] [mDef_c: " << item.mDbPart.mDef_c
			<< L"] [mLvllmt: " << item.mDbPart.mLvllmt				//This is the amt of stat required to use the item.
			<< L"] [mLvllmt_c: " << item.mDbPart.mLvllmt_c;

		std::cout << "] [mSocketName: " << item.mSocketName.ToString()
			<< "]" << std::endl;
	}

	//FBrgDbEqSkill rSkill(FString(L"SKLTP_ATKUP_CRIUP_DEFDOWN"), 1, 0, 0, 0);
	//m_MyPlayer->mCommonPawn->mBodySkillStickerObject->mDbEqSkills.Add(rSkill);
	return true;
}
bool UEHooker::SetRevivalTm()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	std::cout << "[LiD] Please enter your wanted Revival Time: " << std::endl;
	std::cin >> m_MyPlayer->mRevivalTime;
	return true;
}
bool UEHooker::SetHaterBool()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	uint32_t levelOfHate ;
	std::cout << "[LiD] Please enter your level of Hate against Haters: " << std::endl;
	std::cin >> levelOfHate;

	if (levelOfHate >= 5)
		return false;

	std::vector<ABrgPawn_EnemyBase*> Haters;
	for (auto& eneInfo : m_MyPlayer->mGameInfoNative->mEnemyPawnArray)
	{
		if (lstrcmpW(eneInfo->mName.ToWString().c_str(), L"null"))
			Haters.push_back(eneInfo);
	}

	switch(levelOfHate)
	{
	case 0:
		break;

	case 1:
		for (auto& pHater : Haters)
			pHater->mbStoppedForCutscene ^= 1;

		break;

	case 2:
		for (auto& pHater : Haters)
		{
			pHater->mbStoppedForCutscene ^= 1;
			pHater->mbStoppedForCutscene_SavedHidden ^= 1;
		}

		break;

	case 3:
		for (auto& pHater : Haters)
		{
			pHater->mbStoppedForCutscene ^= 1;
			pHater->mbStoppedForCutscene_SavedHidden ^= 1;
			pHater->mbStoppedForCutscene_SavedTickIsDisabled ^= 1;
		}

	case 4:
		for (auto& pHater : Haters)
			pHater->Location = FVector(0.0f, 0.0f, 0.0f);
		break;
	}

	return true;
}
bool UEHooker::ByeByeHaters()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	m_Haters.clear();
	for (auto& eneInfo : m_MyPlayer->mGameInfoNative->mEnemyPawnArray)
	{
		if (lstrcmpW(eneInfo->mName.ToWString().c_str(), L"null"))
		{
			m_Haters.push_back(eneInfo);
			eneInfo->mbStoppedForCutscene = 1;
			eneInfo->mbStoppedForCutscene_SavedHidden = 1;
			eneInfo->mbStoppedForCutscene_SavedTickIsDisabled = 1;
			eneInfo->Location.X = 11514.12451f;
			eneInfo->Location.Y = 216411.15154f;
			eneInfo->Location.Z = -42454.54687f;
		}
	}

	return true;
}
bool UEHooker::KeepThemGone()
{	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	if (!m_isbbHater)
	{
		m_isbbHater = true;
		std::thread t(&KeepThemGone);
		t.detach(); return true;
	}

	if (!m_MyPlayer->mGameInfoNative && !m_MyPlayer->mGameInfoNative->mUIManager)
		return false;

	while (m_isbbHater)
	{
		UBrgUIManager* pManager = m_MyPlayer->mGameInfoNative->mUIManager;
		while (!pManager->mFloorResultMenu) { Sleep(50); continue; }
		while (pManager->mFloorResultMenu) { Sleep(50); continue; }
		Sleep(5000);
		ByeByeHaters();
	}

	return true;
}
bool UEHooker::ComeBackBaby()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	for (auto& hater : m_Haters)
		hater->Location = m_MyPlayer->Location;

	return true;
}
bool UEHooker::ComeBackBab2()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	for (auto& hater : m_Haters)
	{
		hater->mbStoppedForCutscene = 1;
		hater->mbStoppedForCutscene_SavedHidden = 1;
		hater->mbStoppedForCutscene_SavedTickIsDisabled = 1;
	}

	return true;
}
bool UEHooker::ToggleDbgInfo()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	m_MyPlayer->mGameInfoNative->mAIDirector->mShowEnemyDebugInformation ^= 1;
	m_MyPlayer->mGameInfoNative->mAIDirector->mShowNormalEnemyDebugInformation ^= 1;
	m_MyPlayer->mGameInfoNative->mAIDirector->mShowMiddleBossDebugInformation ^= 1;
	m_MyPlayer->mGameInfoNative->mAIDirector->mShowMushBeastDebugInformation ^= 1;
	m_MyPlayer->mGameInfoNative->mAIDirector->mShowEnemyRewardDebugInformation ^= 1;
	m_MyPlayer->mGameInfoNative->mAIDirector->mShowAreaDebugInformation ^= 1;
	m_MyPlayer->mGameInfoNative->mUIManager->mHUD->bShowDebugInfo ^= 1;
	return true;
}
bool UEHooker::TogglePickUp()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	ABrgPlayerCtrl_CustomChara* pCtrl = m_MyPlayer->mCustomCharaPlayerCtrl;
	PickUpItem(pCtrl);
	OpenCaseConfirm(pCtrl);
	return true;
}
bool UEHooker::ToggleFarmLp()
{
	m_isLooping = false;
	return true;
}
bool UEHooker::ToggleHaters()
{
	m_isbbHater = false;
	return true;
}
bool UEHooker::ToggleJackal()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	m_MyPlayer->mGameInfoNative->mAIDirector->mbJackalSpawnCheck = true;
	m_MyPlayer->mGameInfoNative->mAIDirector->mJackalSpawnProb = 100;
	return true;
}
bool UEHooker::LetThemFight()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	m_Haters.clear();
	for (auto& eneInfo : m_MyPlayer->mGameInfoNative->mEnemyPawnArray)
		if (lstrcmpW(eneInfo->mName.ToWString().c_str(), L"null"))
			m_Haters.push_back(eneInfo);

	for (auto& eneInfo : m_MyPlayer->mGameInfoNative->mEnemyPawnArray)
	{
		if (!lstrcmpW(eneInfo->mName.ToWString().c_str(), L"null"))
		{
			for (auto& hater : m_Haters)
				hater->Location = eneInfo->Location;

			break;
		}
	}

	return true;
}
bool UEHooker::SetJackalSTm()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	std::cout << "[LiD] Please enter your new Jackal Spawn Timer: ";
	std::cin >> m_MyPlayer->mGameInfoNative->mAIDirector->mJackalSpawnTime;
	return true;
}
bool UEHooker::SetJackalNum()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	std::cout << "[LiD] Please enter your new Jackal Spawn Num: ";
	std::cin >> m_MyPlayer->mGameInfoNative->mAIDirector->mJackalSpawnNum;
	return true;
}
bool UEHooker::SetPickTreas()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	TArray<ABrgActor_Treasure*>& pTreasures = m_MyPlayer->mGameInfoNative->mTreasureArray;
	for (auto i = 0; i != pTreasures.Num(); ++i)
	{
		ABrgActor_Treasure* pTreasure = pTreasures[i];
		std::wcout.clear(); std::wcout << L"\t[" << i
			<< L"] [Money: " << pTreasure->mDbTrBoxRewardMoney.mMoney
			<< L"] [trType: " << static_cast<int32_t>(pTreasure->mTreasureType)
			<< L"] [Unit: " << pTreasure->mDbTrBoxRewardMoney.mUnit.ToWString()
			<< L"] [PntId: " << pTreasure->mDbTrBoxRewardMoney.mPntid.ToWString()
			<< L"] [sType: " << pTreasure->mDbTrBoxRewardMoney.mType.ToWString()
			<< L"] [apiId: " << pTreasure->mDbTrBoxRewardMoney.mApid.ToWString()
			<< L"] [GenId: " << pTreasure->mDbTrBoxRewardMoney.mGenid.ToWString();

		if (pTreasure->mTreasureType == 8)
		{
			ABrgActor_Treasure_Item* pItem = reinterpret_cast<ABrgActor_Treasure_Item*>(pTreasure);
			if (pItem->mDbItemEntity.mItemId.ArrayData && *pItem->mDbItemEntity.mItemId.ArrayData)
			{
				std::wstring itemID = pItem->mDbItemEntity.mItemId.ToWString();
				std::wcout.clear(); std::wcout << L"] [mItemId: " << itemID;
			}
		}

		std::wcout.clear(); std::wcout << L"]" << std::endl;
	}

	int32_t IDX;
	std::cout << "Please enter the IDX of the Treasure Location you wish to warp to: ";
	std::cin >> IDX;

	if (IDX >= pTreasures.Num())
		return false;

	ABrgActor_Treasure* pTreasure = pTreasures.At(IDX);
	m_MyPlayer->Location = pTreasure->Location;

	ABrgPlayerCtrl_CustomChara* pCtrl = m_MyPlayer->mCustomCharaPlayerCtrl;

	Sleep(1000);
	switch (pTreasure->mTreasureType)
	{
	case 0:	//Money, just open red case.
		OpenCaseConfirm(pCtrl);
		break;

	case 9:	//Blueprint, kick box, wait, pick up item, confirm.
		OpenCaseConfirm(pCtrl);
		Sleep(1950);	//Wait for box to open.
		PickUpItem(pCtrl);
		OpenCaseConfirm(pCtrl);
		break;

	case 1:	//Mushrooms.
	case 8:	//Resources on map.
	case 10://Magazine / Special Items
		PickUpItem(pCtrl);
		OpenCaseConfirm(pCtrl);
		break;
	}

	return true;
}
bool UEHooker::TestRunFloor()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer() || !ByeByeHaters())
		return false;

	ABrgPlayerCtrl_CustomChara* pCtrl = m_MyPlayer->mCustomCharaPlayerCtrl; if (!pCtrl) return false;
	TArray<ABrgActor_Treasure*>& rTreasures = m_MyPlayer->mGameInfoNative->mTreasureArray;

	m_MyPlayer->mRevivalTime = 900.0f;	//No use in being seen, kek.
	GrabFloorTreasure(pCtrl, rTreasures);

	//Turn off invis and finish with a tp to first escalator on map.
	m_MyPlayer->mRevivalTime = 2.0f;

	for (ABrgRandomGenerateEscalatorTargetPoint* point : m_MyPlayer->mGameInfoNative->mEscalatorTargetPoints)
	{
		if (!point->mType)
		{
			m_MyPlayer->Location = point->Location;
			break;
		}
	}

	Sleep(1000);
	JumpForFix(pCtrl);
	return true;
}
bool UEHooker::CleanUpFloor()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer() || !ByeByeHaters())
		return false;

	m_MyPlayer->mRevivalTime = 900.0f;
	m_StoredLocations.push_back(m_MyPlayer->Location);
	
	ABrgPlayerCtrl_CustomChara* pCtrl = m_MyPlayer->mCustomCharaPlayerCtrl; if (!pCtrl) return false;
	TArray<ABrgActor_Treasure*>& rTreasures = m_MyPlayer->mGameInfoNative->mTreasureArray;
	GrabFloorTreasure(pCtrl, rTreasures);

	m_MyPlayer->mRevivalTime = 4.0f;
	m_MyPlayer->mbInvincibleScene = true;
	m_MyPlayer->Location = m_StoredLocations.at(m_StoredLocations.size() - 1);
	m_StoredLocations.pop_back();
	return true;
}
bool UEHooker::GoToElevator()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;
	
	ABrgActor_Elevator2_Switch* pTarget = nullptr;
	if(m_MyPlayer->mGameInfoNative->mElevator2_SwitchArray.Num())
		pTarget = m_MyPlayer->mGameInfoNative->mElevator2_SwitchArray.At(0);
	if (!pTarget)
		return false;
		
	FVector rLoc = pTarget->Location;
	rLoc.Z += 150.f;

	m_MyPlayer->Location = rLoc;
	return true;
}
bool UEHooker::ToggleDecals()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	//I just found decals. :)
	if (!m_isDecalHooked)
	{
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourAttach(&reinterpret_cast<PVOID&>(pODecals0), reinterpret_cast<PVOID>(hkNullDecals0));
		DetourAttach(&reinterpret_cast<PVOID&>(pODecals1), reinterpret_cast<PVOID>(hkNullDecals1));
		DetourTransactionCommit();
		m_isDecalHooked = true;
	}

	m_bAllowCustomDecalBases ^= true;
	return true;
}
bool UEHooker::ScreamerVac()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer() || !ByeByeHaters())
		return false;

	if (m_MyPlayer->mRevivalTime < 6.0f)
		m_MyPlayer->mRevivalTime = 6.0f;

	m_MyPlayer->mbInvincibleScene = true;
	std::vector<ABrgPawn_EnemyBase*> Screamers;
	for (auto& eneInfo : m_MyPlayer->mGameInfoNative->mEnemyPawnArray)
		if (!lstrcmpW(eneInfo->mName.ToWString().c_str(), L"null"))
			Screamers.push_back(eneInfo);

	for (auto& screamer : Screamers)
	{
		screamer->mbActive = true;
		screamer->mbHaveBeenActivated = true;
		screamer->mEnemyAICtrl->mbInActiveArea = true;

		screamer->Location.X = m_MyPlayer->Location.X + 200.0f;
		screamer->Location.Y = m_MyPlayer->Location.Y + 200.0f;
		screamer->Location.Z = m_MyPlayer->Location.Z + 100.0f;
	}

	return true;
}
bool UEHooker::GimmieCoins()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer() || !ByeByeHaters())
		return false;

	for (auto& coinDrop : m_MyPlayer->mGameInfoNative->mCoinArray)
	{
		coinDrop->Location = m_MyPlayer->Location;
		coinDrop->mLocation = m_MyPlayer->Location;
	}

	return true;
}
bool UEHooker::RunFarmLoop()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	//FOR NOW, ONLY START BOT WHEN IN FLOOR!
	m_isLooping = true;	//Setting it here lets us turn off the loop at any time before and after hitting the escalator.
	TestRunFloor();

	ABrgPlayerCtrl_CustomChara* pCtrl = m_MyPlayer->mCustomCharaPlayerCtrl;
	if (!pCtrl && !m_MyPlayer->mGameInfoNative && !m_MyPlayer->mGameInfoNative->mUIManager)
		return false;

	UBrgUIManager* pManager = m_MyPlayer->mGameInfoNative->mUIManager;
	while (!pManager->mFloorResultMenu) { Sleep(50); continue; }
	while (!pManager->mFloorResultMenu->mbLevelInitialized) { Sleep(50); continue; }

	Sleep(500);
	pCtrl->mInput->PressEnterKey();
	Sleep(100);
	pCtrl->mInput->ReleaseEnterKey();

	while (pManager->mFloorResultMenu) { Sleep(50); continue; }
	while (!pCtrl->mbInputEnable) { Sleep(50); continue; }
	Sleep(15000);	//Floor is initialized now, we need to find a check for this but meh. A Sleep is fine, my loads are consistent enough.
	//Maybe try to look for the "F" popup, it will be displayed whenever first entering an area after a while.

	if (m_isLooping)
	{
		std::cout << "\n\n\t\t[Success! - Looping... Cancel by running command tbFarm]\n" << std::endl;
		std::thread t(&RunFarmLoop);
		t.detach();
		return true;
	}
	
	std::cout << "\n\n\t\t[Completed This Instance! | Still looping? " << static_cast<int32_t>(m_isLooping) << "]\n" << std::endl;
	return true;
}
bool UEHooker::SetRotation()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	int32_t Pitch, Yaw, Roll;
	std::cout << "Enter your desired Rotation in the form of Pitch Yaw Roll: ";
	std::cin >> Pitch >> Yaw >> Roll;

	m_MyPlayer->Rotation.Pitch = Pitch;
	m_MyPlayer->Rotation.Yaw = Yaw;
	m_MyPlayer->Rotation.Roll = Roll;

	return true;
}
bool UEHooker::KillThemAll()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	if (m_MyPlayer->mGameInfoNative && m_MyPlayer->mGameInfoNative->mAIDirector)
		m_MyPlayer->mGameInfoNative->mAIDirector->mbJudgeAllEnemyKill = false;

	return true;
}
bool UEHooker::ClimbFloor()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	//brain think go brrrrrr
	//use WL to scan items and pick em up
	//den have to figure out how to make enemy go away for block i think
	//i can us ebbhaters but how to know when block is there even
	//so big think
	//den use esca and wait for timer, we did that part on loop and boom ez loop dat siht

	//okay so the ClosedBattleMgr and ClosedBattleEvent class' both get populated when the floor is locked, i can just do sleep timers..
	// //mIsClosed from Mgr -> 1 when locked. have to wait still, maybe a 60 second sleep here when it's true?
	// idea is to kinda, port to an up elevator, jump, F... wait like 10 seconds and see if the result screen is up
	// if its not, port to next up elevator, repeat until result screen is up
	//sleep timer bot will be sloppy but that's the last piece i really needed, it will work now kinda.. just need to code it.

	//UBrgSeqAct_EscalatorClosedEvent
	// //UBrgSeqAct_WaitForNetworkConnection
	// 
	//i thiunk i have to finalkly go after the seqevents to make this happen fluently
	//theres seqacts for everything
	//ITMT_IRON_5
	//ITMT_FIBER_5
	//ITMT_ALUMI_5
	//ITMT_OIL_5
	//ITMT_COPPER_5
	//ITMT_IRON_5


	return true;
}
bool UEHooker::HaterVac()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer() || !ByeByeHaters())
		return false;

	if (m_MyPlayer->mRevivalTime < 6.0f)
		m_MyPlayer->mRevivalTime = 6.0f;

	std::vector<ABrgPawn_EnemyBase*> Haters;
	for (auto& eneInfo : m_MyPlayer->mGameInfoNative->mEnemyPawnArray)
		if (lstrcmpW(eneInfo->mName.ToWString().c_str(), L"null"))
			Haters.push_back(eneInfo);

	for (auto& hater : Haters)
	{
		hater->mbActive = true;
		hater->mbHaveBeenActivated = true;
		hater->mEnemyAICtrl->mbInActiveArea = true;

		hater->Location.X = m_MyPlayer->Location.X + 200.0f;
		hater->Location.Y = m_MyPlayer->Location.Y + 200.0f;
		hater->Location.Z = m_MyPlayer->Location.Z + 100.0f;
	}

	return true;
}
bool UEHooker::TestHook()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	//VMTHook_PE("BrgNetworkManagerCustom Transient.BrgNetworkManagerCustom");
	//if (!VMTHook_PE("Class BrgGame.BrgNetworkManagerCustom") || !VMTHook_PE("Class BrgGame.BrgUIHUD_FloorTitle"))
		//return false;

	/*// 
	UBrgNetworkManagerCustom* pMgr = reinterpret_cast<UBrgNetworkManagerCustom*>(GetInstanceOf(UBrgNetworkManagerCustom::StaticClass()));
	if (!pMgr)
		return false;

	std::cout << "\n\t[Object Instance: 0x" << pMgr
		<< "] [VFT: 0x" << *(uint64_t**)pMgr
		<< "]\n" << std::endl;

	if (!VMTH::SwapVMT(reinterpret_cast<uint64_t**>(pMgr)))
		return false;

	VMTH::HookVMTFunction(reinterpret_cast<uint64_t**>(pMgr), reinterpret_cast<uint64_t*>(hkProcessEvent), 67);
	//*/

	//mFuncLog.open("SimStatus.txt");
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(&reinterpret_cast<PVOID&>(pOProcessEvent), reinterpret_cast<PVOID>(hkProcessEvent));
	DetourTransactionCommit();

	return true;
}
bool UEHooker::SetHP()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	uint32_t iHP;
	std::cout << "Enter your desired new health: ";
	std::cin >> iHP;

	m_MyPlayer->Health = iHP;
	return true;
}
bool UEHooker::ToggleCracked()
{
	if (!m_isCurrentPlayerFound && !SetMyPlayer())
		return false;

	m_isCracked ^= true;
	if (m_isCracked)
		std::cout << "YOU ARE NOW CRACKEERD SON!!!" << std::endl;
	else
		std::cout << "You are now a normalish boy." << std::endl;

	return true;
}
//*/


//Misc. from old project.
bool UEHooker::ToggleHUD()
{
	/*
	AT1PlayerController* pAT1PC = reinterpret_cast<AT1PlayerController*>(GetInstanceOf(AT1PlayerController::StaticClass()));
	if (pAT1PC)
	{
		pAT1PC->myHUD->ToggleHUD();
		return true;
	}
	*/

	return false;
}
//*/
