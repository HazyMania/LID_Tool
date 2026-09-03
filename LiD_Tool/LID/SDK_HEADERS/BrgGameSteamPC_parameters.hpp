/*
#############################################################################################
# LET IT DIE (5.0.1.0) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: BrgGameSteamPC_parameters.hpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK & LiD by Ant
# Links: www.github.com/itsbrank/UE3SDKGenerator, www.twitter.com/itsbrank
#############################################################################################
*/
#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

/*
# ========================================================================================= #
# Function Parameters
# ========================================================================================= #
*/

// Function BrgGameSteamPC.BrgInGameBrowserSteamPC.TerminateBrowser
// [0x00020400] 
struct UBrgInGameBrowserSteamPC_execTerminateBrowser_Params
{
};

// Function BrgGameSteamPC.BrgInGameBrowserSteamPC.UpdateStatus
// [0x00020400] 
struct UBrgInGameBrowserSteamPC_execUpdateStatus_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function BrgGameSteamPC.BrgInGameBrowserSteamPC.CloseBrowser
// [0x00020400] 
struct UBrgInGameBrowserSteamPC_execCloseBrowser_Params
{
};

// Function BrgGameSteamPC.BrgInGameBrowserSteamPC.OpenBrowser
// [0x00420400] 
struct UBrgInGameBrowserSteamPC_execOpenBrowser_Params
{
	class FString                                      URLAddress;                                       		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function BrgGameSteamPC.BrgInGameBrowserSteamPC.Initialize
// [0x00020400] 
struct UBrgInGameBrowserSteamPC_execInitialize_Params
{
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.GetMigrationData
// [0x00020002] 
struct UBrgLoginManagerSteamPC_execGetMigrationData_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.GetMigrationState
// [0x00020400] 
struct UBrgLoginManagerSteamPC_execGetMigrationState_Params
{
	uint8_t                                            ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.StartMigration
// [0x00020802] 
struct UBrgLoginManagerSteamPC_eventStartMigration_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCSetPreSessionId
// [0x00020802] 
struct UBrgLoginManagerSteamPC_eventSteamPCSetPreSessionId_Params
{
	class FString                                      psid;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCSetSessionKey
// [0x00020802] 
struct UBrgLoginManagerSteamPC_eventSteamPCSetSessionKey_Params
{
	class FString                                      skey;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCSetUserId
// [0x00020802] 
struct UBrgLoginManagerSteamPC_eventSteamPCSetUserId_Params
{
	class FString                                      Uid;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCRegist
// [0x00020802] 
struct UBrgLoginManagerSteamPC_eventSteamPCRegist_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCIsRegistered
// [0x00020802] 
struct UBrgLoginManagerSteamPC_eventSteamPCIsRegistered_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCGetLoginState
// [0x00020802] 
struct UBrgLoginManagerSteamPC_eventSteamPCGetLoginState_Params
{
	uint8_t                                            ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCIsConnected
// [0x00020802] 
struct UBrgLoginManagerSteamPC_eventSteamPCIsConnected_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SetButtonGuide
// [0x00080400] 
struct UBrgLoginManagerSteamPC_execSetButtonGuide_Params
{
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.DumpInfo
// [0x00040003] 
struct UBrgLoginManagerSteamPC_execDumpInfo_Params
{
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.OnLoginChange
// [0x00040401] 
struct UBrgLoginManagerSteamPC_execOnLoginChange_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.OnConnectionStatusChange
// [0x00040003] 
struct UBrgLoginManagerSteamPC_execOnConnectionStatusChange_Params
{
	uint8_t                                            ConnectionStatus;                                 		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.UpdateBootSignIn
// [0x00040401] 
struct UBrgLoginManagerSteamPC_execUpdateBootSignIn_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.UpdateGameLoginState
// [0x00040401] 
struct UBrgLoginManagerSteamPC_execUpdateGameLoginState_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.UpdateSteamLoginState
// [0x00040401] 
struct UBrgLoginManagerSteamPC_execUpdateSteamLoginState_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.UpdateLoginState
// [0x00080400] 
struct UBrgLoginManagerSteamPC_execUpdateLoginState_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.StartRegist
// [0x00040003] 
struct UBrgLoginManagerSteamPC_execStartRegist_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCStartRegist
// [0x00020802] 
struct UBrgLoginManagerSteamPC_eventSteamPCStartRegist_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.StartLoginS
// [0x00040003] 
struct UBrgLoginManagerSteamPC_execStartLoginS_Params
{
	class FString                                      Code;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Size;                                             		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            agreement;                                        		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCStartLoginS
// [0x00020802] 
struct UBrgLoginManagerSteamPC_eventSteamPCStartLoginS_Params
{
	class FString                                      Code;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Size;                                             		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.ShowLogin
// [0x00020002] 
struct UBrgLoginManagerSteamPC_execShowLogin_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCShowLogin
// [0x00020802] 
struct UBrgLoginManagerSteamPC_eventSteamPCShowLogin_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SetLoginState
// [0x00080002] 
struct UBrgLoginManagerSteamPC_execSetLoginState_Params
{
	uint8_t                                            st;                                               		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.SteamPCSetLoginState
// [0x00020802] 
struct UBrgLoginManagerSteamPC_eventSteamPCSetLoginState_Params
{
	uint8_t                                            st;                                               		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.StartConnect
// [0x00020002] 
struct UBrgLoginManagerSteamPC_execStartConnect_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.CanStartConnect
// [0x00020400] 
struct UBrgLoginManagerSteamPC_execCanStartConnect_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.Terminate
// [0x00020002] 
struct UBrgLoginManagerSteamPC_execTerminate_Params
{
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.Initialize
// [0x00020002] 
struct UBrgLoginManagerSteamPC_execInitialize_Params
{
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.GetUserName
// [0x00080400] 
struct UBrgLoginManagerSteamPC_execGetUserName_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function BrgGameSteamPC.BrgLoginManagerSteamPC.GetOnlineSubsystemSteamworks
// [0x00020002] 
struct UBrgLoginManagerSteamPC_execGetOnlineSubsystemSteamworks_Params
{
	class UOnlineSubsystemSteamworks*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
