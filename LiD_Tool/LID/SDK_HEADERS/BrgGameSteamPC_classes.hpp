/*
#############################################################################################
# LET IT DIE (5.0.1.0) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: BrgGameSteamPC_classes.hpp
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
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class BrgGameSteamPC.BrgInGameBrowserSteamPC
// 0x0004 (0x0064 - 0x0068)
class UBrgInGameBrowserSteamPC : public UBrgInGameBrowserInterface
{
public:
	int32_t                                            m_unBrowserHandle;                             // 0x0064 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameSteamPC.BrgInGameBrowserSteamPC");
		}

		return uClassPointer;
	};

	void TerminateBrowser();
	bool UpdateStatus();
	void CloseBrowser();
	void OpenBrowser(class FString& URLAddress);
	void Initialize();
};

// Class BrgGameSteamPC.BrgLoginManagerSteamPC
// 0x0030 (0x012C - 0x015C)
class UBrgLoginManagerSteamPC : public UBrgLoginManagerInterface
{
public:
	class UBrgNetworkResponseLogins*                   mResLoginS;                                    // 0x012C (0x0008) [0x0000000000000000]               
	class UBrgNetworkResponseLogin*                    mResLogin;                                     // 0x0134 (0x0008) [0x0000000000000000]               
	class UBrgNetworkResponseLogout*                   mResLogout;                                    // 0x013C (0x0008) [0x0000000000000000]               
	class UBrgNetworkResponseRegusr*                   mResRegusr;                                    // 0x0144 (0x0008) [0x0000000000000000]               
	class UOnlineSubsystemSteamworks*                  mSteamPC_OSS;                                  // 0x014C (0x0008) [0x0000000000000000]               
	class UBrgNetworkResponseMigrations*               mResMigrations;                                // 0x0154 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameSteamPC.BrgLoginManagerSteamPC");
		}

		return uClassPointer;
	};

	class FString GetMigrationData();
	uint8_t GetMigrationState();
	bool eventStartMigration();
	void eventSteamPCSetPreSessionId(class FString psid);
	void eventSteamPCSetSessionKey(class FString skey);
	void eventSteamPCSetUserId(class FString Uid);
	bool eventSteamPCRegist();
	bool eventSteamPCIsRegistered();
	uint8_t eventSteamPCGetLoginState();
	bool eventSteamPCIsConnected();
	void SetButtonGuide();
	void DumpInfo();
	void OnLoginChange(uint8_t LocalUserNum);
	void OnConnectionStatusChange(uint8_t ConnectionStatus);
	void UpdateBootSignIn(float DeltaTime);
	void UpdateGameLoginState(float DeltaTime);
	void UpdateSteamLoginState(float DeltaTime);
	void UpdateLoginState(float DeltaTime);
	bool StartRegist();
	bool eventSteamPCStartRegist();
	bool StartLoginS(class FString Code, int32_t Size);
	bool eventSteamPCStartLoginS(class FString Code, int32_t Size);
	bool ShowLogin();
	bool eventSteamPCShowLogin();
	void SetLoginState(uint8_t st);
	void eventSteamPCSetLoginState(uint8_t st);
	bool StartConnect();
	bool CanStartConnect();
	void Terminate();
	void Initialize();
	class FString GetUserName();
	class UOnlineSubsystemSteamworks* GetOnlineSubsystemSteamworks();
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
