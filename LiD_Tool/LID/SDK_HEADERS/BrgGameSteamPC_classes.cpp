/*
#############################################################################################
# LET IT DIE (5.0.1.0) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: BrgGameSteamPC_classes.cpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK & LiD by Ant
# Links: www.github.com/itsbrank/UE3SDKGenerator, www.twitter.com/itsbrank
#############################################################################################
*/
#include "../SdkHeaders.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function BrgGameSteamPC.BrgInGameBrowserSteamPC.TerminateBrowser
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UBrgInGameBrowserSteamPC::TerminateBrowser()
{
	static UFunction* uFnTerminateBrowser = nullptr;

	if (!uFnTerminateBrowser)
	{
		uFnTerminateBrowser = UFunction::FindFunction("Function BrgGameSteamPC.BrgInGameBrowserSteamPC.TerminateBrowser");
	}

	UBrgInGameBrowserSteamPC_execTerminateBrowser_Params TerminateBrowser_Params;

	uFnTerminateBrowser->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnTerminateBrowser, &TerminateBrowser_Params, nullptr);

	uFnTerminateBrowser->FunctionFlags |= 0x400;
};

// Function BrgGameSteamPC.BrgInGameBrowserSteamPC.UpdateStatus
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UBrgInGameBrowserSteamPC::UpdateStatus()
{
	static UFunction* uFnUpdateStatus = nullptr;

	if (!uFnUpdateStatus)
	{
		uFnUpdateStatus = UFunction::FindFunction("Function BrgGameSteamPC.BrgInGameBrowserSteamPC.UpdateStatus");
	}

	UBrgInGameBrowserSteamPC_execUpdateStatus_Params UpdateStatus_Params;

	uFnUpdateStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateStatus, &UpdateStatus_Params, nullptr);

	uFnUpdateStatus->FunctionFlags |= 0x400;

	return UpdateStatus_Params.ReturnValue;
};

// Function BrgGameSteamPC.BrgInGameBrowserSteamPC.CloseBrowser
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UBrgInGameBrowserSteamPC::CloseBrowser()
{
	static UFunction* uFnCloseBrowser = nullptr;

	if (!uFnCloseBrowser)
	{
		uFnCloseBrowser = UFunction::FindFunction("Function BrgGameSteamPC.BrgInGameBrowserSteamPC.CloseBrowser");
	}

	UBrgInGameBrowserSteamPC_execCloseBrowser_Params CloseBrowser_Params;

	uFnCloseBrowser->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCloseBrowser, &CloseBrowser_Params, nullptr);

	uFnCloseBrowser->FunctionFlags |= 0x400;
};

// Function BrgGameSteamPC.BrgInGameBrowserSteamPC.OpenBrowser
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  URLAddress                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UBrgInGameBrowserSteamPC::OpenBrowser(class FString& URLAddress)
{
	static UFunction* uFnOpenBrowser = nullptr;

	if (!uFnOpenBrowser)
	{
		uFnOpenBrowser = UFunction::FindFunction("Function BrgGameSteamPC.BrgInGameBrowserSteamPC.OpenBrowser");
	}

	UBrgInGameBrowserSteamPC_execOpenBrowser_Params OpenBrowser_Params;
	memcpy_s(&OpenBrowser_Params.URLAddress, 0x10, &URLAddress, 0x10);

	uFnOpenBrowser->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnOpenBrowser, &OpenBrowser_Params, nullptr);

	uFnOpenBrowser->FunctionFlags |= 0x400;

	memcpy_s(&URLAddress, 0x10, &OpenBrowser_Params.URLAddress, 0x10);
};

// Function BrgGameSteamPC.BrgInGameBrowserSteamPC.Initialize
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UBrgInGameBrowserSteamPC::Initialize()
{
	static UFunction* uFnInitialize = nullptr;

	if (!uFnInitialize)
	{
		uFnInitialize = UFunction::FindFunction("Function BrgGameSteamPC.BrgInGameBrowserSteamPC.Initialize");
	}

	UBrgInGameBrowserSteamPC_execInitialize_Params Initialize_Params;

	uFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnInitialize, &Initialize_Params, nullptr);

	uFnInitialize->FunctionFlags |= 0x400;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.GetMigrationData
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UBrgLoginManagerSteamPC::GetMigrationData()
{
	static UFunction* uFnGetMigrationData = nullptr;

	if (!uFnGetMigrationData)
	{
		uFnGetMigrationData = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.GetMigrationData");
	}

	UBrgLoginManagerSteamPC_execGetMigrationData_Params GetMigrationData_Params;

	this->ProcessEvent(uFnGetMigrationData, &GetMigrationData_Params, nullptr);

	return GetMigrationData_Params.ReturnValue;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.GetMigrationState
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

uint8_t UBrgLoginManagerSteamPC::GetMigrationState()
{
	static UFunction* uFnGetMigrationState = nullptr;

	if (!uFnGetMigrationState)
	{
		uFnGetMigrationState = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.GetMigrationState");
	}

	UBrgLoginManagerSteamPC_execGetMigrationState_Params GetMigrationState_Params;

	uFnGetMigrationState->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetMigrationState, &GetMigrationState_Params, nullptr);

	uFnGetMigrationState->FunctionFlags |= 0x400;

	return GetMigrationState_Params.ReturnValue;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.StartMigration
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UBrgLoginManagerSteamPC::eventStartMigration()
{
	static UFunction* uFnStartMigration = nullptr;

	if (!uFnStartMigration)
	{
		uFnStartMigration = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.StartMigration");
	}

	UBrgLoginManagerSteamPC_eventStartMigration_Params StartMigration_Params;

	this->ProcessEvent(uFnStartMigration, &StartMigration_Params, nullptr);

	return StartMigration_Params.ReturnValue;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCSetPreSessionId
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  psid                           (CPF_Parm | CPF_NeedCtorLink)

void UBrgLoginManagerSteamPC::eventSteamPCSetPreSessionId(class FString psid)
{
	static UFunction* uFnSteamPCSetPreSessionId = nullptr;

	if (!uFnSteamPCSetPreSessionId)
	{
		uFnSteamPCSetPreSessionId = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCSetPreSessionId");
	}

	UBrgLoginManagerSteamPC_eventSteamPCSetPreSessionId_Params SteamPCSetPreSessionId_Params;
	memcpy_s(&SteamPCSetPreSessionId_Params.psid, 0x10, &psid, 0x10);

	this->ProcessEvent(uFnSteamPCSetPreSessionId, &SteamPCSetPreSessionId_Params, nullptr);
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCSetSessionKey
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  skey                           (CPF_Parm | CPF_NeedCtorLink)

void UBrgLoginManagerSteamPC::eventSteamPCSetSessionKey(class FString skey)
{
	static UFunction* uFnSteamPCSetSessionKey = nullptr;

	if (!uFnSteamPCSetSessionKey)
	{
		uFnSteamPCSetSessionKey = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCSetSessionKey");
	}

	UBrgLoginManagerSteamPC_eventSteamPCSetSessionKey_Params SteamPCSetSessionKey_Params;
	memcpy_s(&SteamPCSetSessionKey_Params.skey, 0x10, &skey, 0x10);

	this->ProcessEvent(uFnSteamPCSetSessionKey, &SteamPCSetSessionKey_Params, nullptr);
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCSetUserId
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Uid                            (CPF_Parm | CPF_NeedCtorLink)

void UBrgLoginManagerSteamPC::eventSteamPCSetUserId(class FString Uid)
{
	static UFunction* uFnSteamPCSetUserId = nullptr;

	if (!uFnSteamPCSetUserId)
	{
		uFnSteamPCSetUserId = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCSetUserId");
	}

	UBrgLoginManagerSteamPC_eventSteamPCSetUserId_Params SteamPCSetUserId_Params;
	memcpy_s(&SteamPCSetUserId_Params.Uid, 0x10, &Uid, 0x10);

	this->ProcessEvent(uFnSteamPCSetUserId, &SteamPCSetUserId_Params, nullptr);
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCRegist
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UBrgLoginManagerSteamPC::eventSteamPCRegist()
{
	static UFunction* uFnSteamPCRegist = nullptr;

	if (!uFnSteamPCRegist)
	{
		uFnSteamPCRegist = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCRegist");
	}

	UBrgLoginManagerSteamPC_eventSteamPCRegist_Params SteamPCRegist_Params;

	this->ProcessEvent(uFnSteamPCRegist, &SteamPCRegist_Params, nullptr);

	return SteamPCRegist_Params.ReturnValue;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCIsRegistered
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UBrgLoginManagerSteamPC::eventSteamPCIsRegistered()
{
	static UFunction* uFnSteamPCIsRegistered = nullptr;

	if (!uFnSteamPCIsRegistered)
	{
		uFnSteamPCIsRegistered = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCIsRegistered");
	}

	UBrgLoginManagerSteamPC_eventSteamPCIsRegistered_Params SteamPCIsRegistered_Params;

	this->ProcessEvent(uFnSteamPCIsRegistered, &SteamPCIsRegistered_Params, nullptr);

	return SteamPCIsRegistered_Params.ReturnValue;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCGetLoginState
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

uint8_t UBrgLoginManagerSteamPC::eventSteamPCGetLoginState()
{
	static UFunction* uFnSteamPCGetLoginState = nullptr;

	if (!uFnSteamPCGetLoginState)
	{
		uFnSteamPCGetLoginState = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCGetLoginState");
	}

	UBrgLoginManagerSteamPC_eventSteamPCGetLoginState_Params SteamPCGetLoginState_Params;

	this->ProcessEvent(uFnSteamPCGetLoginState, &SteamPCGetLoginState_Params, nullptr);

	return SteamPCGetLoginState_Params.ReturnValue;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCIsConnected
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UBrgLoginManagerSteamPC::eventSteamPCIsConnected()
{
	static UFunction* uFnSteamPCIsConnected = nullptr;

	if (!uFnSteamPCIsConnected)
	{
		uFnSteamPCIsConnected = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCIsConnected");
	}

	UBrgLoginManagerSteamPC_eventSteamPCIsConnected_Params SteamPCIsConnected_Params;

	this->ProcessEvent(uFnSteamPCIsConnected, &SteamPCIsConnected_Params, nullptr);

	return SteamPCIsConnected_Params.ReturnValue;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SetButtonGuide
// [0x00080400] (FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter info:

void UBrgLoginManagerSteamPC::SetButtonGuide()
{
	static UFunction* uFnSetButtonGuide = nullptr;

	if (!uFnSetButtonGuide)
	{
		uFnSetButtonGuide = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.SetButtonGuide");
	}

	UBrgLoginManagerSteamPC_execSetButtonGuide_Params SetButtonGuide_Params;

	uFnSetButtonGuide->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetButtonGuide, &SetButtonGuide_Params, nullptr);

	uFnSetButtonGuide->FunctionFlags |= 0x400;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.DumpInfo
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UBrgLoginManagerSteamPC::DumpInfo()
{
	static UFunction* uFnDumpInfo = nullptr;

	if (!uFnDumpInfo)
	{
		uFnDumpInfo = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.DumpInfo");
	}

	UBrgLoginManagerSteamPC_execDumpInfo_Params DumpInfo_Params;

	this->ProcessEvent(uFnDumpInfo, &DumpInfo_Params, nullptr);
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.OnLoginChange
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UBrgLoginManagerSteamPC::OnLoginChange(uint8_t LocalUserNum)
{
	static UFunction* uFnOnLoginChange = nullptr;

	if (!uFnOnLoginChange)
	{
		uFnOnLoginChange = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.OnLoginChange");
	}

	UBrgLoginManagerSteamPC_execOnLoginChange_Params OnLoginChange_Params;
	memcpy_s(&OnLoginChange_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnOnLoginChange->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnOnLoginChange, &OnLoginChange_Params, nullptr);

	uFnOnLoginChange->FunctionFlags |= 0x400;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.OnConnectionStatusChange
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ConnectionStatus               (CPF_Parm)

void UBrgLoginManagerSteamPC::OnConnectionStatusChange(uint8_t ConnectionStatus)
{
	static UFunction* uFnOnConnectionStatusChange = nullptr;

	if (!uFnOnConnectionStatusChange)
	{
		uFnOnConnectionStatusChange = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.OnConnectionStatusChange");
	}

	UBrgLoginManagerSteamPC_execOnConnectionStatusChange_Params OnConnectionStatusChange_Params;
	memcpy_s(&OnConnectionStatusChange_Params.ConnectionStatus, 0x1, &ConnectionStatus, 0x1);

	this->ProcessEvent(uFnOnConnectionStatusChange, &OnConnectionStatusChange_Params, nullptr);
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.UpdateBootSignIn
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UBrgLoginManagerSteamPC::UpdateBootSignIn(float DeltaTime)
{
	static UFunction* uFnUpdateBootSignIn = nullptr;

	if (!uFnUpdateBootSignIn)
	{
		uFnUpdateBootSignIn = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.UpdateBootSignIn");
	}

	UBrgLoginManagerSteamPC_execUpdateBootSignIn_Params UpdateBootSignIn_Params;
	memcpy_s(&UpdateBootSignIn_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	uFnUpdateBootSignIn->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateBootSignIn, &UpdateBootSignIn_Params, nullptr);

	uFnUpdateBootSignIn->FunctionFlags |= 0x400;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.UpdateGameLoginState
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UBrgLoginManagerSteamPC::UpdateGameLoginState(float DeltaTime)
{
	static UFunction* uFnUpdateGameLoginState = nullptr;

	if (!uFnUpdateGameLoginState)
	{
		uFnUpdateGameLoginState = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.UpdateGameLoginState");
	}

	UBrgLoginManagerSteamPC_execUpdateGameLoginState_Params UpdateGameLoginState_Params;
	memcpy_s(&UpdateGameLoginState_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	uFnUpdateGameLoginState->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateGameLoginState, &UpdateGameLoginState_Params, nullptr);

	uFnUpdateGameLoginState->FunctionFlags |= 0x400;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.UpdateSteamLoginState
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UBrgLoginManagerSteamPC::UpdateSteamLoginState(float DeltaTime)
{
	static UFunction* uFnUpdateSteamLoginState = nullptr;

	if (!uFnUpdateSteamLoginState)
	{
		uFnUpdateSteamLoginState = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.UpdateSteamLoginState");
	}

	UBrgLoginManagerSteamPC_execUpdateSteamLoginState_Params UpdateSteamLoginState_Params;
	memcpy_s(&UpdateSteamLoginState_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	uFnUpdateSteamLoginState->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateSteamLoginState, &UpdateSteamLoginState_Params, nullptr);

	uFnUpdateSteamLoginState->FunctionFlags |= 0x400;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.UpdateLoginState
// [0x00080400] (FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UBrgLoginManagerSteamPC::UpdateLoginState(float DeltaTime)
{
	static UFunction* uFnUpdateLoginState = nullptr;

	if (!uFnUpdateLoginState)
	{
		uFnUpdateLoginState = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.UpdateLoginState");
	}

	UBrgLoginManagerSteamPC_execUpdateLoginState_Params UpdateLoginState_Params;
	memcpy_s(&UpdateLoginState_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	uFnUpdateLoginState->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateLoginState, &UpdateLoginState_Params, nullptr);

	uFnUpdateLoginState->FunctionFlags |= 0x400;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.StartRegist
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UBrgLoginManagerSteamPC::StartRegist()
{
	static UFunction* uFnStartRegist = nullptr;

	if (!uFnStartRegist)
	{
		uFnStartRegist = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.StartRegist");
	}

	UBrgLoginManagerSteamPC_execStartRegist_Params StartRegist_Params;

	this->ProcessEvent(uFnStartRegist, &StartRegist_Params, nullptr);

	return StartRegist_Params.ReturnValue;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCStartRegist
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UBrgLoginManagerSteamPC::eventSteamPCStartRegist()
{
	static UFunction* uFnSteamPCStartRegist = nullptr;

	if (!uFnSteamPCStartRegist)
	{
		uFnSteamPCStartRegist = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCStartRegist");
	}

	UBrgLoginManagerSteamPC_eventSteamPCStartRegist_Params SteamPCStartRegist_Params;

	this->ProcessEvent(uFnSteamPCStartRegist, &SteamPCStartRegist_Params, nullptr);

	return SteamPCStartRegist_Params.ReturnValue;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.StartLoginS
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Code                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Size                           (CPF_Parm)

bool UBrgLoginManagerSteamPC::StartLoginS(class FString Code, int32_t Size)
{
	static UFunction* uFnStartLoginS = nullptr;

	if (!uFnStartLoginS)
	{
		uFnStartLoginS = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.StartLoginS");
	}

	UBrgLoginManagerSteamPC_execStartLoginS_Params StartLoginS_Params;
	memcpy_s(&StartLoginS_Params.Code, 0x10, &Code, 0x10);
	memcpy_s(&StartLoginS_Params.Size, 0x4, &Size, 0x4);

	this->ProcessEvent(uFnStartLoginS, &StartLoginS_Params, nullptr);

	return StartLoginS_Params.ReturnValue;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCStartLoginS
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Code                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Size                           (CPF_Parm)

bool UBrgLoginManagerSteamPC::eventSteamPCStartLoginS(class FString Code, int32_t Size)
{
	static UFunction* uFnSteamPCStartLoginS = nullptr;

	if (!uFnSteamPCStartLoginS)
	{
		uFnSteamPCStartLoginS = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCStartLoginS");
	}

	UBrgLoginManagerSteamPC_eventSteamPCStartLoginS_Params SteamPCStartLoginS_Params;
	memcpy_s(&SteamPCStartLoginS_Params.Code, 0x10, &Code, 0x10);
	memcpy_s(&SteamPCStartLoginS_Params.Size, 0x4, &Size, 0x4);

	this->ProcessEvent(uFnSteamPCStartLoginS, &SteamPCStartLoginS_Params, nullptr);

	return SteamPCStartLoginS_Params.ReturnValue;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.ShowLogin
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UBrgLoginManagerSteamPC::ShowLogin()
{
	static UFunction* uFnShowLogin = nullptr;

	if (!uFnShowLogin)
	{
		uFnShowLogin = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.ShowLogin");
	}

	UBrgLoginManagerSteamPC_execShowLogin_Params ShowLogin_Params;

	this->ProcessEvent(uFnShowLogin, &ShowLogin_Params, nullptr);

	return ShowLogin_Params.ReturnValue;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCShowLogin
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UBrgLoginManagerSteamPC::eventSteamPCShowLogin()
{
	static UFunction* uFnSteamPCShowLogin = nullptr;

	if (!uFnSteamPCShowLogin)
	{
		uFnSteamPCShowLogin = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCShowLogin");
	}

	UBrgLoginManagerSteamPC_eventSteamPCShowLogin_Params SteamPCShowLogin_Params;

	this->ProcessEvent(uFnSteamPCShowLogin, &SteamPCShowLogin_Params, nullptr);

	return SteamPCShowLogin_Params.ReturnValue;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SetLoginState
// [0x00080002] (FUNC_RequiredAPI | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// uint8_t                        st                             (CPF_Parm)

void UBrgLoginManagerSteamPC::SetLoginState(uint8_t st)
{
	static UFunction* uFnSetLoginState = nullptr;

	if (!uFnSetLoginState)
	{
		uFnSetLoginState = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.SetLoginState");
	}

	UBrgLoginManagerSteamPC_execSetLoginState_Params SetLoginState_Params;
	memcpy_s(&SetLoginState_Params.st, 0x1, &st, 0x1);

	this->ProcessEvent(uFnSetLoginState, &SetLoginState_Params, nullptr);
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCSetLoginState
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        st                             (CPF_Parm)

void UBrgLoginManagerSteamPC::eventSteamPCSetLoginState(uint8_t st)
{
	static UFunction* uFnSteamPCSetLoginState = nullptr;

	if (!uFnSteamPCSetLoginState)
	{
		uFnSteamPCSetLoginState = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCSetLoginState");
	}

	UBrgLoginManagerSteamPC_eventSteamPCSetLoginState_Params SteamPCSetLoginState_Params;
	memcpy_s(&SteamPCSetLoginState_Params.st, 0x1, &st, 0x1);

	this->ProcessEvent(uFnSteamPCSetLoginState, &SteamPCSetLoginState_Params, nullptr);
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.StartConnect
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UBrgLoginManagerSteamPC::StartConnect()
{
	static UFunction* uFnStartConnect = nullptr;

	if (!uFnStartConnect)
	{
		uFnStartConnect = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.StartConnect");
	}

	UBrgLoginManagerSteamPC_execStartConnect_Params StartConnect_Params;

	this->ProcessEvent(uFnStartConnect, &StartConnect_Params, nullptr);

	return StartConnect_Params.ReturnValue;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.CanStartConnect
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UBrgLoginManagerSteamPC::CanStartConnect()
{
	static UFunction* uFnCanStartConnect = nullptr;

	if (!uFnCanStartConnect)
	{
		uFnCanStartConnect = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.CanStartConnect");
	}

	UBrgLoginManagerSteamPC_execCanStartConnect_Params CanStartConnect_Params;

	uFnCanStartConnect->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCanStartConnect, &CanStartConnect_Params, nullptr);

	uFnCanStartConnect->FunctionFlags |= 0x400;

	return CanStartConnect_Params.ReturnValue;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.Terminate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UBrgLoginManagerSteamPC::Terminate()
{
	static UFunction* uFnTerminate = nullptr;

	if (!uFnTerminate)
	{
		uFnTerminate = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.Terminate");
	}

	UBrgLoginManagerSteamPC_execTerminate_Params Terminate_Params;

	this->ProcessEvent(uFnTerminate, &Terminate_Params, nullptr);
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.Initialize
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UBrgLoginManagerSteamPC::Initialize()
{
	static UFunction* uFnInitialize = nullptr;

	if (!uFnInitialize)
	{
		uFnInitialize = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.Initialize");
	}

	UBrgLoginManagerSteamPC_execInitialize_Params Initialize_Params;

	this->ProcessEvent(uFnInitialize, &Initialize_Params, nullptr);
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.GetUserName
// [0x00080400] (FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UBrgLoginManagerSteamPC::GetUserName()
{
	static UFunction* uFnGetUserName = nullptr;

	if (!uFnGetUserName)
	{
		uFnGetUserName = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.GetUserName");
	}

	UBrgLoginManagerSteamPC_execGetUserName_Params GetUserName_Params;

	uFnGetUserName->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetUserName, &GetUserName_Params, nullptr);

	uFnGetUserName->FunctionFlags |= 0x400;

	return GetUserName_Params.ReturnValue;
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.GetOnlineSubsystemSteamworks
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineSubsystemSteamworks* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UOnlineSubsystemSteamworks* UBrgLoginManagerSteamPC::GetOnlineSubsystemSteamworks()
{
	static UFunction* uFnGetOnlineSubsystemSteamworks = nullptr;

	if (!uFnGetOnlineSubsystemSteamworks)
	{
		uFnGetOnlineSubsystemSteamworks = UFunction::FindFunction("Function BrgGameSteamPC.BrgLoginManagerSteamPC.GetOnlineSubsystemSteamworks");
	}

	UBrgLoginManagerSteamPC_execGetOnlineSubsystemSteamworks_Params GetOnlineSubsystemSteamworks_Params;

	this->ProcessEvent(uFnGetOnlineSubsystemSteamworks, &GetOnlineSubsystemSteamworks_Params, nullptr);

	return GetOnlineSubsystemSteamworks_Params.ReturnValue;
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
