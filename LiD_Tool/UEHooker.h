#pragma once
#include "pch.hpp"
#include "VMTH.h"
#include <detours.h>

class UEHooker
{
private:
	typedef void(__stdcall* tProcessEventWP)(UFunction*, void*, void*);
	typedef void(*tProcessEvent)(UObject* pObject, UFunction* pFunc, void* pParams, void* pResult);
	typedef void(*tNullDecals0)(void* rcx);
	typedef void(*tNullDecals1)(void* rcx, void* a2, void* a3);
	typedef void(*tItemChanger)(FString* a1, FString* a2);
	static bool m_isUpdated;
	static bool m_isCurrentPlayerFound;
	static bool m_isLooping;
	static bool m_isbbHater;
	static bool m_isDecalHooked;
	static bool m_bAllowCustomDecalBases;
	static bool m_isItemsHooked;
	static bool m_isCracked;
	static void* m_DecalReturn00;
	static void* m_DecalReturn01;
	static void* m_ItemReturn001;
	static void* m_ItemReturn002;
	static void* m_ItemReturn003;
	static void* m_ItemReturn004;
	static tProcessEventWP pProcessEventWP;
	static tProcessEvent pOProcessEvent;
	static tNullDecals0 pODecals0;
	static tNullDecals1 pODecals1;
	static tItemChanger pOItemCompare;
	static std::vector<UObject*> m_ObjectInstances;
	static std::vector<ABrgPawn_CustomCharaPlayer*> m_ActivePlayers;
	static ABrgPawn_CustomCharaPlayer* m_MyPlayer;
	static UBrgMbObject_LoadPart* m_MyParts;
	static std::vector<FVector> m_StoredLocations;
	static std::map<std::wstring, std::wstring> m_NewItems;
	static std::map<std::wstring, std::wstring> m_OldItems;
	static std::list<std::wstring> m_MaterialWhiteList;
	static std::vector<ABrgPawn_EnemyBase*> m_Haters;
	static std::ofstream mFuncLog;

	static bool GrabActivePlayers();
	static UObject* GetInstanceOf(UClass* Class);
	static void GetAllInstancesOf(UClass* Class);
	static bool SetMyPlayer();
	static void PrintItemInfo(FBrgLocalItemInfo& item);
	static bool VMTHook_PE(std::string strClass);
	static void hkProcessEvent(UObject* pObject, UFunction* pFunction, void* pParms, void* pResult);
	static void hkNullDecals0(void* rcx);
	static void hkNullDecals1(void* rcx, void* a2, void* a3);
	static void hkItemCompare(FString* a1, FString* a2);
	static void ModifyDecals(FBrgSkillStatus* ptr, bool isPost = false);
	static void GrabFloorTreasure(ABrgPlayerCtrl_CustomChara* pCtrl, TArray<ABrgActor_Treasure*>& rTreasures);
	static void OpenCaseConfirm(ABrgPlayerCtrl_CustomChara* pCtrl);
	static void JumpForFix(ABrgPlayerCtrl_CustomChara* pCtrl);
	static void PickUpItem(ABrgPlayerCtrl_CustomChara* pCtrl);
	static void SetLocationAndWait(FVector& to, FVector& from, float ms = 2000);

public:
	//Misc from old project.
	static bool ToggleHUD();

	//LID System Related
	static void UpdateEverything();
	static bool Refresh();
	
	//LID Cheat Related
	static bool AddClearJackal();
	static bool ClearLocations();
	static bool SetToEscalator();
	static bool TestingGround();
	static bool MessWithItems();
	static bool SetCoordinate();
	static bool SetToTreasure();
	static bool ToggleDbgInfo();
	static bool SetMyNormals();
	static bool SetMoveSpeed();
	static bool SetWalkSpeed();
	static bool SetSprintSpeed();
	static bool SetSTRAdjust();
	static bool SetDEXAdjust();
	static bool SetVITAdjust();
	static bool SetHateScale();
	static bool ToggleInfDur();
	static bool ToggleInfAmm();
	static bool ToggleResist();
	static bool ToggleInvinc();
	static bool IncreaseXByV();
	static bool IncreaseYByV();
	static bool IncreaseZByV();
	static bool SaveLocation();
	static bool LoadLocation();
	static bool TryGiveDebug();
	static bool SetRevivalTm();
	static bool ToggleActLog();
	static bool TogglePlyLog();
	static bool SetHaterBool();
	static bool ByeByeHaters();
	static bool KeepThemGone();
	static bool ComeBackBaby();
	static bool ComeBackBab2();
	static bool TogglePickUp();
	static bool ToggleFarmLp();
	static bool ToggleHaters();
	static bool ToggleJackal();
	static bool LetThemFight();
	static bool SetJackalSTm();
	static bool SetJackalNum();
	static bool SetPickTreas();
	static bool TestRunFloor();
	static bool CleanUpFloor();
	static bool GoToElevator();
	static bool ToggleDecals();
	static bool ScreamerVac();
	static bool GimmieCoins();
	static bool RunFarmLoop();
	static bool SetRotation();
	static bool KillThemAll();
	static bool ClimbFloor();
	static bool HaterVac();
	static bool TestHook();
	static bool ToggleCracked();

	//DANGEROUS!!! DO NOT USE UNLESS KNOW WHAT DOING!!
	static bool SetHP();
};