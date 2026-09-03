/*
#############################################################################################
# LET IT DIE (5.0.1.0) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: IpDrv_classes.hpp
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

#define CONST_PLAYER_MATCH                                      0
#define CONST_RANKED_MATCH                                      1
#define CONST_REC_MATCH                                         2
#define CONST_PRIVATE_MATCH                                     3
#define CONST_RANKEDPROVIDERTAG                                 ""
#define CONST_UNRANKEDPROVIDERTAG                               ""
#define CONST_RECMODEPROVIDERTAG                                ""
#define CONST_PRIVATEPROVIDERTAG                                ""

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum IpDrv.InternetLink.ELinkMode
enum class ELinkMode : uint8_t
{
	MODE_Text                                          = 0,
	MODE_Line                                          = 1,
	MODE_Binary                                        = 2,
	MODE_END                                           = 3
};

// Enum IpDrv.InternetLink.EReceiveMode
enum class EReceiveMode : uint8_t
{
	RMODE_Manual                                       = 0,
	RMODE_Event                                        = 1,
	RMODE_END                                          = 2
};

// Enum IpDrv.InternetLink.ELineMode
enum class ELineMode : uint8_t
{
	LMODE_auto                                         = 0,
	LMODE_DOS                                          = 1,
	LMODE_UNIX                                         = 2,
	LMODE_MAC                                          = 3,
	LMODE_END                                          = 4
};

// Enum IpDrv.McpGroupsBase.EMcpGroupAccessLevel
enum class EMcpGroupAccessLevel : uint8_t
{
	MGAL_Owner                                         = 0,
	MGAL_Member                                        = 1,
	MGAL_Public                                        = 2,
	MGAL_END                                           = 3
};

// Enum IpDrv.McpGroupsBase.EMcpGroupAcceptState
enum class EMcpGroupAcceptState : uint8_t
{
	MGAS_Error                                         = 0,
	MGAS_Pending                                       = 1,
	MGAS_Accepted                                      = 2,
	MGAS_END                                           = 3
};

// Enum IpDrv.McpMessageBase.EMcpMessageCompressionType
enum class EMcpMessageCompressionType : uint8_t
{
	MMCT_None                                          = 0,
	MMCT_LZO                                           = 1,
	MMCT_ZLIB                                          = 2,
	MMCT_END                                           = 3
};

// Enum IpDrv.MeshBeacon.EMeshBeaconPacketType
enum class EMeshBeaconPacketType : uint8_t
{
	MB_Packet_UnknownType                              = 0,
	MB_Packet_ClientNewConnectionRequest               = 1,
	MB_Packet_ClientBeginBandwidthTest                 = 2,
	MB_Packet_ClientCreateNewSessionResponse           = 3,
	MB_Packet_HostNewConnectionResponse                = 4,
	MB_Packet_HostBandwidthTestRequest                 = 5,
	MB_Packet_HostCompletedBandwidthTest               = 6,
	MB_Packet_HostTravelRequest                        = 7,
	MB_Packet_HostCreateNewSessionRequest              = 8,
	MB_Packet_DummyData                                = 9,
	MB_Packet_Heartbeat                                = 10,
	MB_Packet_END                                      = 11
};

// Enum IpDrv.MeshBeacon.EMeshBeaconConnectionResult
enum class EMeshBeaconConnectionResult : uint8_t
{
	MB_ConnectionResult_Succeeded                      = 0,
	MB_ConnectionResult_Duplicate                      = 1,
	MB_ConnectionResult_Timeout                        = 2,
	MB_ConnectionResult_Error                          = 3,
	MB_ConnectionResult_END                            = 4
};

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestState
enum class EMeshBeaconBandwidthTestState : uint8_t
{
	MB_BandwidthTestState_NotStarted                   = 0,
	MB_BandwidthTestState_RequestPending               = 1,
	MB_BandwidthTestState_StartPending                 = 2,
	MB_BandwidthTestState_InProgress                   = 3,
	MB_BandwidthTestState_Completed                    = 4,
	MB_BandwidthTestState_Incomplete                   = 5,
	MB_BandwidthTestState_Timeout                      = 6,
	MB_BandwidthTestState_Error                        = 7,
	MB_BandwidthTestState_END                          = 8
};

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestResult
enum class EMeshBeaconBandwidthTestResult : uint8_t
{
	MB_BandwidthTestResult_Succeeded                   = 0,
	MB_BandwidthTestResult_Timeout                     = 1,
	MB_BandwidthTestResult_Error                       = 2,
	MB_BandwidthTestResult_END                         = 3
};

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestType
enum class EMeshBeaconBandwidthTestType : uint8_t
{
	MB_BandwidthTestType_Upstream                      = 0,
	MB_BandwidthTestType_Downstream                    = 1,
	MB_BandwidthTestType_RoundtripLatency              = 2,
	MB_BandwidthTestType_END                           = 3
};

// Enum IpDrv.MeshBeaconClient.EMeshBeaconClientState
enum class EMeshBeaconClientState : uint8_t
{
	MBCS_None                                          = 0,
	MBCS_Connecting                                    = 1,
	MBCS_Connected                                     = 2,
	MBCS_ConnectionFailed                              = 3,
	MBCS_AwaitingResponse                              = 4,
	MBCS_Closed                                        = 5,
	MBCS_END                                           = 6
};

// Enum IpDrv.OnlineEventsInterfaceMcp.EEventUploadType
enum class EEventUploadType : uint8_t
{
	EUT_GenericStats                                   = 0,
	EUT_ProfileData                                    = 1,
	EUT_MatchmakingData                                = 2,
	EUT_PlaylistPopulation                             = 3,
	EUT_END                                            = 4
};

// Enum IpDrv.PartyBeacon.EReservationPacketType
enum class EReservationPacketType : uint8_t
{
	RPT_UnknownPacketType                              = 0,
	RPT_ClientReservationRequest                       = 1,
	RPT_ClientReservationUpdateRequest                 = 2,
	RPT_ClientCancellationRequest                      = 3,
	RPT_HostReservationResponse                        = 4,
	RPT_HostReservationCountUpdate                     = 5,
	RPT_HostTravelRequest                              = 6,
	RPT_HostIsReady                                    = 7,
	RPT_HostHasCancelled                               = 8,
	RPT_Heartbeat                                      = 9,
	RPT_END                                            = 10
};

// Enum IpDrv.PartyBeacon.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	PRR_GeneralError                                   = 0,
	PRR_PartyLimitReached                              = 1,
	PRR_IncorrectPlayerCount                           = 2,
	PRR_RequestTimedOut                                = 3,
	PRR_ReservationDuplicate                           = 4,
	PRR_ReservationNotFound                            = 5,
	PRR_ReservationAccepted                            = 6,
	PRR_ReservationDenied                              = 7,
	PRR_END                                            = 8
};

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientRequest
enum class EPartyBeaconClientRequest : uint8_t
{
	PBClientRequest_NewReservation                     = 0,
	PBClientRequest_UpdateReservation                  = 1,
	PBClientRequest_END                                = 2
};

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientState
enum class EPartyBeaconClientState : uint8_t
{
	PBCS_None                                          = 0,
	PBCS_Connecting                                    = 1,
	PBCS_Connected                                     = 2,
	PBCS_ConnectionFailed                              = 3,
	PBCS_AwaitingResponse                              = 4,
	PBCS_Closed                                        = 5,
	PBCS_END                                           = 6
};

// Enum IpDrv.PartyBeaconHost.EPartyBeaconHostState
enum class EPartyBeaconHostState : uint8_t
{
	PBHS_AllowReservations                             = 0,
	PBHS_DenyReservations                              = 1,
	PBHS_END                                           = 2
};

// Enum IpDrv.TcpLink.ELinkState
enum class ELinkState : uint8_t
{
	STATE_Initialized                                  = 0,
	STATE_Ready                                        = 1,
	STATE_Listening                                    = 2,
	STATE_Connecting                                   = 3,
	STATE_Connected                                    = 4,
	STATE_ListenClosePending                           = 5,
	STATE_ConnectClosePending                          = 6,
	STATE_ListenClosing                                = 7,
	STATE_ConnectClosing                               = 8,
	STATE_END                                          = 9
};

// Enum IpDrv.TitleFileDownloadCache.ETitleFileFileOp
enum class ETitleFileFileOp : uint8_t
{
	TitleFile_None                                     = 0,
	TitleFile_Save                                     = 1,
	TitleFile_Load                                     = 2,
	TitleFile_END                                      = 3
};

// Enum IpDrv.WebRequest.ERequestType
enum class ERequestType : uint8_t
{
	Request_GET                                        = 0,
	Request_POST                                       = 1,
	Request_END                                        = 2
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class IpDrv.ClientBeaconAddressResolver
// 0x000C (0x0060 - 0x006C)
class UClientBeaconAddressResolver : public UObject
{
public:
	int32_t                                            BeaconPort;                                    // 0x0060 (0x0004) [0x0000000000000000]               
	struct FName                                       BeaconName;                                    // 0x0064 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.ClientBeaconAddressResolver");
		}

		return uClassPointer;
	};

};

// Class IpDrv.HTTPDownload
// 0x0128 (0x0AA4 - 0x0BCC)
class UHTTPDownload : public UDownload
{
public:
	class FString                                      ProxyServerHost;                               // 0x0AA4 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	int32_t                                            ProxyServerPort;                               // 0x0AB4 (0x0004) [0x0000000000004000] (CPF_Config)  
	unsigned long                                      MaxRedirection : 1;                            // 0x0AB8 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	float                                              ConnectionTimeout;                             // 0x0ABC (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                           UnknownData00[0x10C];                          // 0x0AC0 (0x010C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.HTTPDownload");
		}

		return uClassPointer;
	};

};

// Class IpDrv.InternetLink
// 0x0024 (0x027C - 0x02A0)
class AInternetLink : public AInfo
{
public:
	uint8_t                                            LinkMode;                                      // 0x027C (0x0001) [0x0000000000000000]               
	uint8_t                                            InLineMode;                                    // 0x027D (0x0001) [0x0000000000000000]               
	uint8_t                                            OutLineMode;                                   // 0x027E (0x0001) [0x0000000000000000]               
	uint8_t                                            ReceiveMode;                                   // 0x027F (0x0001) [0x0000000000000000]               
	struct FPointer                                    Socket;                                        // 0x0280 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Port;                                          // 0x0288 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FPointer                                    RemoteSocket;                                  // 0x028C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FPointer                                    PrivateResolveInfo;                            // 0x0294 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            DataPending;                                   // 0x029C (0x0004) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.InternetLink");
		}

		return uClassPointer;
	};

	void eventResolveFailed();
	void eventResolved(struct FIpAddr Addr);
	void GetLocalIP(struct FIpAddr& Arg);
	bool StringToIpAddr(class FString Str, struct FIpAddr& Addr);
	class FString IpAddrToString(struct FIpAddr Arg);
	int32_t GetLastError();
	void Resolve(class FString Domain);
	bool ParseURL(class FString URL, class FString& Addr, int32_t& PortNum, class FString& LevelName, class FString& EntryName);
	bool IsDataPending();
};

// Class IpDrv.TcpLink
// 0x0034 (0x02A0 - 0x02D4)
class ATcpLink : public AInternetLink
{
public:
	uint8_t                                            LinkState;                                     // 0x02A0 (0x0001) [0x0000000000000000]               
	struct FIpAddr                                     RemoteAddr;                                    // 0x02A4 (0x0008) [0x0000000000000000]               
	class UClass*                                      AcceptClass;                                   // 0x02AC (0x0008) [0x0000000000000000]               
	TArray<uint8_t>                                    SendFIFO;                                      // 0x02B4 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      RecvBuf;                                       // 0x02C4 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TcpLink");
		}

		return uClassPointer;
	};

	void eventReceivedBinary(int32_t Count, uint8_t B);
	void eventReceivedLine(class FString Line);
	void eventReceivedText(class FString Text);
	void eventClosed();
	void eventOpened();
	void eventAccepted();
	int32_t ReadBinary(int32_t Count, uint8_t& B);
	int32_t ReadText(class FString& Str);
	int32_t SendBinary(int32_t Count, uint8_t B);
	int32_t SendText(class FString Str);
	bool IsConnected();
	bool Close();
	bool Open(struct FIpAddr Addr);
	bool Listen();
	int32_t BindPort(int32_t PortNum, unsigned long bUseNextAvailable);
};

// Class IpDrv.MCPBase
// 0x0008 (0x0060 - 0x0068)
class UMCPBase : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MCPBase");
		}

		return uClassPointer;
	};

};

// Class IpDrv.OnlineEventsInterfaceMcp
// 0x0034 (0x0068 - 0x009C)
class UOnlineEventsInterfaceMcp : public UMCPBase
{
public:
	TArray<struct FEventUploadConfig>                  EventUploadConfigs;                            // 0x0068 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	TArray<struct FPointer>                            MCPEventPostObjects;                           // 0x0078 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
	TArray<uint8_t>                                    DisabledUploadTypes;                           // 0x0088 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	unsigned long                                      bBinaryStats : 1;                              // 0x0098 (0x0004) [0x0000000000004002] [0x00000001] (CPF_Const | CPF_Config)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineEventsInterfaceMcp");
		}

		return uClassPointer;
	};

	bool UploadMatchmakingStats(struct FUniqueNetId UniqueId, class UOnlineMatchmakingStats* MMStats);
	bool UpdatePlaylistPopulation(int32_t PlaylistId, int32_t NumPlayers);
	bool UploadGameplayEventsData(struct FUniqueNetId UniqueId, TArray<uint8_t>& Payload);
	bool UploadPlayerData(struct FUniqueNetId UniqueId, class FString PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage);
};

// Class IpDrv.OnlineNewsInterfaceMcp
// 0x0034 (0x0068 - 0x009C)
class UOnlineNewsInterfaceMcp : public UMCPBase
{
public:
	TArray<struct FNewsCacheEntry>                     NewsItems;                                     // 0x0068 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadNewsDelegates;                             // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bNeedsTicking : 1;                             // 0x0088 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FScriptDelegate                             __OnReadNewsCompleted__Delegate;               // 0x008C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineNewsInterfaceMcp");
		}

		return uClassPointer;
	};

	class FString GetNews(uint8_t LocalUserNum, uint8_t NewsType);
	void ClearReadNewsCompletedDelegate(struct FScriptDelegate ReadGameNewsDelegate);
	void AddReadNewsCompletedDelegate(struct FScriptDelegate ReadNewsDelegate);
	void OnReadNewsCompleted(unsigned long bWasSuccessful, uint8_t NewsType);
	bool ReadNews(uint8_t LocalUserNum, uint8_t NewsType);
};

// Class IpDrv.OnlineTitleFileDownloadBase
// 0x0084 (0x0068 - 0x00EC)
class UOnlineTitleFileDownloadBase : public UMCPBase
{
public:
	TArray<struct FScriptDelegate>                     ReadTitleFileCompleteDelegates;                // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     RequestTitleFileListCompleteDelegates;         // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      BaseUrl;                                       // 0x0088 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      RequestFileListURL;                            // 0x0098 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      RequestFileURL;                                // 0x00A8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	float                                              TimeOut;                                       // 0x00B8 (0x0004) [0x0000000000004000] (CPF_Config)  
	TArray<struct FFileNameToURLMapping>               FilesToUrls;                                   // 0x00BC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;           // 0x00CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRequestTitleFileListComplete__Delegate;    // 0x00DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadBase");
		}

		return uClassPointer;
	};

	class FString GetUrlForFile(class FString Filename);
	void ClearRequestTitleFileListCompleteDelegate(struct FScriptDelegate RequestTitleFileListDelegate);
	void AddRequestTitleFileListCompleteDelegate(struct FScriptDelegate RequestTitleFileListDelegate);
	void OnRequestTitleFileListComplete(unsigned long bWasSuccessful, class FString ResultStr);
	void RequestTitleFileList();
	bool ClearDownloadedFile(class FString Filename);
	bool ClearDownloadedFiles();
	uint8_t GetTitleFileState(class FString Filename);
	bool GetTitleFileContents(class FString Filename, TArray<uint8_t>& FileContents);
	void ClearReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(class FString FileToRead);
	void OnReadTitleFileComplete(unsigned long bWasSuccessful, class FString Filename);
};

// Class IpDrv.OnlineTitleFileDownloadMcp
// 0x0014 (0x00EC - 0x0100)
class UOnlineTitleFileDownloadMcp : public UOnlineTitleFileDownloadBase
{
public:
	TArray<struct FTitleFileMcp>                       TitleFiles;                                    // 0x00EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            DownloadCount;                                 // 0x00FC (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadMcp");
		}

		return uClassPointer;
	};

	bool ClearDownloadedFile(class FString Filename);
	bool ClearDownloadedFiles();
	uint8_t GetTitleFileState(class FString Filename);
	bool GetTitleFileContents(class FString Filename, TArray<uint8_t>& FileContents);
	bool ReadTitleFile(class FString FileToRead);
};

// Class IpDrv.OnlineTitleFileDownloadWeb
// 0x0010 (0x00EC - 0x00FC)
class UOnlineTitleFileDownloadWeb : public UOnlineTitleFileDownloadBase
{
public:
	TArray<struct FTitleFileWeb>                       TitleFiles;                                    // 0x00EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadWeb");
		}

		return uClassPointer;
	};

	void OnFileListReceived(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bDidSucceed);
	void RequestTitleFileList();
	bool ClearDownloadedFile(class FString Filename);
	bool ClearDownloadedFiles();
	uint8_t GetTitleFileState(class FString Filename);
	bool GetTitleFileContents(class FString Filename, TArray<uint8_t>& FileContents);
	void TriggerDelegates(unsigned long bSuccess, class FString FileRead);
	void OnFileDownloadComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bDidSucceed);
	bool ReadTitleFile(class FString FileToRead);
};

// Class IpDrv.TitleFileDownloadCache
// 0x0050 (0x0068 - 0x00B8)
class UTitleFileDownloadCache : public UMCPBase
{
public:
	TArray<struct FTitleFileCacheEntry>                TitleFiles;                                    // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoadCompleteDelegates;                         // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     SaveCompleteDelegates;                         // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoadTitleFileComplete__Delegate;           // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSaveTitleFileComplete__Delegate;           // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TitleFileDownloadCache");
		}

		return uClassPointer;
	};

	bool DeleteTitleFile(class FString Filename);
	bool DeleteTitleFiles(float MaxAgeSeconds);
	bool ClearCachedFile(class FString Filename);
	bool ClearCachedFiles();
	class FString GetTitleFileLogicalName(class FString Filename);
	class FString GetTitleFileHash(class FString Filename);
	uint8_t GetTitleFileState(class FString Filename);
	bool GetTitleFileContents(class FString Filename, TArray<uint8_t>& FileContents);
	void ClearSaveTitleFileCompleteDelegate(struct FScriptDelegate SaveCompleteDelegate);
	void AddSaveTitleFileCompleteDelegate(struct FScriptDelegate SaveCompleteDelegate);
	void OnSaveTitleFileComplete(unsigned long bWasSuccessful, class FString Filename);
	bool SaveTitleFile(class FString Filename, class FString LogicalName, TArray<uint8_t> FileContents);
	void ClearLoadTitleFileCompleteDelegate(struct FScriptDelegate LoadCompleteDelegate);
	void AddLoadTitleFileCompleteDelegate(struct FScriptDelegate LoadCompleteDelegate);
	void OnLoadTitleFileComplete(unsigned long bWasSuccessful, class FString Filename);
	bool LoadTitleFile(class FString Filename);
};

// Class IpDrv.McpServiceBase
// 0x0018 (0x0060 - 0x0078)
class UMcpServiceBase : public UObject
{
public:
	class FString                                      McpConfigClassName;                            // 0x0060 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UMcpServiceConfig*                           McpConfig;                                     // 0x0070 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpServiceBase");
		}

		return uClassPointer;
	};

	class FString GetAppAccessURL();
	class FString GetBaseURL();
	void eventInit();
};

// Class IpDrv.McpMessageBase
// 0x0074 (0x0078 - 0x00EC)
class UMcpMessageBase : public UMcpServiceBase
{
public:
	class FString                                      McpMessageManagerClassName;                    // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	uint8_t                                            CompressionType;                               // 0x0088 (0x0001) [0x0000000000004000] (CPF_Config)  
	TArray<struct FMcpMessageContents>                 MessageContentsList;                           // 0x008C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FMcpMessageList>                     MessageLists;                                  // 0x009C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateMessageComplete__Delegate;           // 0x00AC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteMessageComplete__Delegate;           // 0x00BC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryMessagesComplete__Delegate;           // 0x00CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryMessageContentsComplete__Delegate;    // 0x00DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpMessageBase");
		}

		return uClassPointer;
	};

	bool CacheMessageContents(class FString MessageId, TArray<uint8_t>& MessageContents);
	void CacheMessage(struct FMcpMessage Message);
	bool GetMessageContents(class FString MessageId, TArray<uint8_t>& MessageContents);
	void OnQueryMessageContentsComplete(class FString MessageId, unsigned long bWasSuccessful, class FString Error);
	void QueryMessageContents(class FString MessageId);
	void GetMessageList(class FString ToUniqueUserId, struct FMcpMessageList& MessageList);
	void OnQueryMessagesComplete(class FString UserId, unsigned long bWasSuccessful, class FString Error);
	void QueryMessages(class FString ToUniqueUserId, class FString TitleId);
	void OnDeleteMessageComplete(class FString MessageId, unsigned long bWasSuccessful, class FString Error);
	void DeleteMessage(class FString MessageId);
	void OnCreateMessageComplete(struct FMcpMessage Message, unsigned long bWasSuccessful, class FString Error);
	void CreateMessage(class FString FromUniqueUserId, class FString FromFriendlyName, class FString MessageType, class FString TitleId, class FString PushMessage, class FString ValidUntil, TArray<class FString>& ToUniqueUserIds, TArray<uint8_t>& MessageContents);
	static class UMcpMessageBase* CreateInstance();
};

// Class IpDrv.McpMessageManager
// 0x0078 (0x00EC - 0x0164)
class UMcpMessageManager : public UMcpMessageBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x00EC (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class FString                                      CreateMessageUrl;                              // 0x00F4 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteMessageUrl;                              // 0x0104 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryMessagesUrl;                              // 0x0114 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryMessageContentsUrl;                       // 0x0124 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteAllMessagesUrl;                          // 0x0134 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FMcpCompressMessageRequest>          CompressMessageRequests;                       // 0x0144 (0x0010) [0x0000000000001000] (CPF_Native)  
	TArray<struct FMcpUncompressMessageRequest>        UncompressMessageRequests;                     // 0x0154 (0x0010) [0x0000000000001000] (CPF_Native)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpMessageManager");
		}

		return uClassPointer;
	};

	bool CacheMessageContents(class FString MessageId, TArray<uint8_t>& MessageContents);
	bool GetMessageById(class FString MessageId, struct FMcpMessage& Message);
	void CacheMessage(struct FMcpMessage Message);
	bool GetMessageContents(class FString MessageId, TArray<uint8_t>& MessageContents);
	void OnQueryMessageContentsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void QueryMessageContents(class FString MessageId);
	void GetMessageList(class FString ToUniqueUserId, struct FMcpMessageList& MessageList);
	void OnQueryMessagesRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void QueryMessages(class FString ToUniqueUserId, class FString TitleId);
	void OnDeleteMessageRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void DeleteMessage(class FString MessageId);
	void OnCreateMessageRequestComplete(class UHttpRequestInterface* CreateMessageRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void CreateMessage(class FString FromUniqueUserId, class FString FromFriendlyName, class FString MessageType, class FString TitleId, class FString PushMessage, class FString ValidUntil, TArray<class FString>& ToUniqueUserIds, TArray<uint8_t>& MessageContents);
	void eventFinishedAsyncUncompression(unsigned long bWasSuccessful, class FString MessageId, TArray<uint8_t>& UncompressedMessageContents);
	bool StartAsyncUncompression(class FString MessageId, uint8_t MessageCompressionType, TArray<uint8_t>& MessageContent);
	bool StartAsyncCompression(uint8_t MessageCompressionType, class UHttpRequestInterface* Request, TArray<uint8_t>& MessageContent);
};

// Class IpDrv.McpUserCloudFileDownload
// 0x00D0 (0x0078 - 0x0148)
class UMcpUserCloudFileDownload : public UMcpServiceBase
{
public:
	class FString                                      EnumerateCloudFilesUrl;                        // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ReadCloudFileUrl;                              // 0x0088 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      WriteCloudFileUrl;                             // 0x0098 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteCloudFileUrl;                            // 0x00A8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FMcpUserCloudFilesEntry>             UserCloudFileRequests;                         // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     EnumerateUserFilesCompleteDelegates;           // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadUserFileCompleteDelegates;                 // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteUserFileCompleteDelegates;                // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeleteUserFileCompleteDelegates;               // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;      // 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;            // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;           // 0x0128 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;          // 0x0138 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpUserCloudFileDownload");
		}

		return uClassPointer;
	};

	void ClearAllDelegates();
	void ClearDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate);
	void AddDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate);
	void CallDeleteUserFileCompleteDelegates(unsigned long bWasSuccessful, class FString UserId, class FString Filename);
	void OnDeleteUserFileComplete(unsigned long bWasSuccessful, class FString UserId, class FString Filename);
	void OnHTTPRequestDeleteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	bool DeleteUserFile(class FString UserId, class FString Filename, unsigned long bShouldCloudDelete, unsigned long bShouldLocallyDelete);
	void ClearWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate);
	void AddWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate);
	void CallWriteUserFileCompleteDelegates(unsigned long bWasSuccessful, class FString UserId, class FString Filename);
	void OnWriteUserFileComplete(unsigned long bWasSuccessful, class FString UserId, class FString Filename);
	void OnHTTPRequestWriteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void GetUserFileIndexForRequest(class UHttpRequestInterface* Request, int32_t& UserIdx, int32_t& FileIdx);
	bool WriteUserFile(class FString UserId, class FString Filename, TArray<uint8_t>& FileContents);
	void ClearReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate);
	void AddReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate);
	void CallReadUserFileCompleteDelegates(unsigned long bWasSuccessful, class FString UserId, class FString Filename);
	void OnReadUserFileComplete(unsigned long bWasSuccessful, class FString UserId, class FString Filename);
	void OnHTTPRequestReadUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	bool ReadUserFile(class FString UserId, class FString Filename);
	void GetUserFileList(class FString UserId, TArray<struct FEmsFile>& UserFiles);
	void ClearEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate);
	void AddEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate);
	void CallEnumerateUserFileCompleteDelegates(unsigned long bWasSuccessful, class FString UserId);
	void OnEnumerateUserFilesComplete(unsigned long bWasSuccessful, class FString UserId);
	void OnHTTPRequestEnumerateUserFilesComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void EnumerateUserFiles(class FString UserId);
	bool ClearFile(class FString UserId, class FString Filename);
	bool ClearFiles(class FString UserId);
	bool GetFileContents(class FString UserId, class FString Filename, TArray<uint8_t>& FileContents);
};

// Class IpDrv.MeshBeacon
// 0x0044 (0x0060 - 0x00A4)
class UMeshBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	int32_t                                            MeshBeaconPort;                                // 0x0068 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FPointer                                    Socket;                                        // 0x006C (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	unsigned long                                      bIsInTick : 1;                                 // 0x0074 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bWantsDeferredDestroy : 1;                     // 0x0074 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	unsigned long                                      bShouldTick : 1;                               // 0x0074 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              HeartbeatTimeout;                              // 0x0078 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ElapsedHeartbeatTime;                          // 0x007C (0x0004) [0x0000000000000000]               
	struct FName                                       BeaconName;                                    // 0x0080 (0x0008) [0x0000000000000000]               
	int32_t                                            SocketSendBufferSize;                          // 0x0088 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            SocketReceiveBufferSize;                       // 0x008C (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxBandwidthTestBufferSize;                    // 0x0090 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MinBandwidthTestBufferSize;                    // 0x0094 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MaxBandwidthTestSendTime;                      // 0x0098 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MaxBandwidthTestReceiveTime;                   // 0x009C (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxBandwidthHistoryEntries;                    // 0x00A0 (0x0004) [0x0000000000004000] (CPF_Config)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MeshBeacon");
		}

		return uClassPointer;
	};

	void eventDestroyBeacon();
};

// Class IpDrv.MeshBeaconClient
// 0x00CC (0x00A4 - 0x0170)
class UMeshBeaconClient : public UMeshBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                            // 0x00A4 (0x0010) [0x0000000000000002] (CPF_Const)   
	struct FClientConnectionRequest                    ClientPendingRequest;                          // 0x00B4 (0x0028) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FClientBandwidthTestData                    CurrentBandwidthTest;                          // 0x00DC (0x0014) [0x0000000000000000]               
	uint8_t                                            ClientBeaconState;                             // 0x00F0 (0x0001) [0x0000000000000000]               
	uint8_t                                            ClientBeaconRequestType;                       // 0x00F1 (0x0001) [0x0000000000000000]               
	float                                              ConnectionRequestTimeout;                      // 0x00F4 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ConnectionRequestElapsedTime;                  // 0x00F8 (0x0004) [0x0000000000000000]               
	class FString                                      ResolverClassName;                             // 0x00FC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UClass*                                      ResolverClass;                                 // 0x010C (0x0008) [0x0000000000000000]               
	class UClientBeaconAddressResolver*                Resolver;                                      // 0x0114 (0x0008) [0x0000000000000000]               
	unsigned long                                      bUsingRegisteredAddr : 1;                      // 0x011C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FScriptDelegate                             __OnConnectionRequestResult__Delegate;         // 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedBandwidthTestRequest__Delegate;    // 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedBandwidthTestResults__Delegate;    // 0x0140 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;           // 0x0150 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateNewSessionRequestReceived__Delegate; // 0x0160 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MeshBeaconClient");
		}

		return uClassPointer;
	};

	bool SendHostNewGameSessionResponse(unsigned long bSuccess, struct FName SessionName, class UClass* SearchClass, uint8_t& PlatformSpecificInfo);
	void OnCreateNewSessionRequestReceived(struct FName SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>& Players);
	void OnTravelRequestReceived(struct FName SessionName, class UClass* SearchClass, uint8_t& PlatformSpecificInfo);
	void OnReceivedBandwidthTestResults(uint8_t TestType, uint8_t TestResult, struct FConnectionBandwidthStats& BandwidthStats);
	void OnReceivedBandwidthTestRequest(uint8_t TestType);
	void OnConnectionRequestResult(uint8_t ConnectionResult);
	bool BeginBandwidthTest(uint8_t TestType, int32_t TestBufferSize);
	bool RequestConnection(unsigned long bRegisterSecureAddress, struct FOnlineGameSearchResult& DesiredHost, struct FClientConnectionRequest& ClientRequest);
	void eventDestroyBeacon();
};

// Class IpDrv.MeshBeaconHost
// 0x0080 (0x00A4 - 0x0124)
class UMeshBeaconHost : public UMeshBeacon
{
public:
	TArray<struct FClientMeshBeaconConnection>         ClientConnections;                             // 0x00A4 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        PendingPlayerConnections;                      // 0x00B4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                OwningPlayerId;                                // 0x00C4 (0x0008) [0x0000000000000002] (CPF_Const)   
	unsigned long                                      bAllowBandwidthTesting : 1;                    // 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            ConnectionBacklog;                             // 0x00D0 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FScriptDelegate                             __OnReceivedClientConnectionRequest__Delegate; // 0x00D4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStartedBandwidthTest__Delegate;            // 0x00E4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFinishedBandwidthTest__Delegate;           // 0x00F4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAllPendingPlayersConnected__Delegate;      // 0x0104 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedClientCreateNewSessionResult__Delegate;// 0x0114 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MeshBeaconHost");
		}

		return uClassPointer;
	};

	void OnReceivedClientCreateNewSessionResult(unsigned long bSucceeded, struct FName SessionName, class UClass* SearchClass, uint8_t& PlatformSpecificInfo);
	bool RequestClientCreateNewSession(struct FUniqueNetId PlayerNetId, struct FName SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>& Players);
	void TellClientsToTravel(struct FName SessionName, class UClass* SearchClass, uint8_t& PlatformSpecificInfo);
	void OnAllPendingPlayersConnected();
	bool AllPlayersConnected(TArray<struct FUniqueNetId>& Players);
	int32_t GetConnectionIndexForPlayer(struct FUniqueNetId PlayerNetId);
	void SetPendingPlayerConnections(TArray<struct FUniqueNetId>& Players);
	void OnFinishedBandwidthTest(struct FUniqueNetId PlayerNetId, uint8_t TestType, uint8_t TestResult, struct FConnectionBandwidthStats& BandwidthStats);
	void OnStartedBandwidthTest(struct FUniqueNetId PlayerNetId, uint8_t TestType);
	void OnReceivedClientConnectionRequest(struct FClientMeshBeaconConnection& NewClientConnection);
	void AllowBandwidthTesting(unsigned long bEnabled);
	void CancelPendingBandwidthTests();
	bool HasPendingBandwidthTest();
	void CancelInProgressBandwidthTests();
	bool HasInProgressBandwidthTest();
	bool RequestClientBandwidthTest(struct FUniqueNetId PlayerNetId, uint8_t TestType, int32_t TestBufferSize);
	void eventDestroyBeacon();
	bool InitHostBeacon(struct FUniqueNetId InOwningPlayerId);
};

// Class IpDrv.OnlineSubsystemCommonImpl
// 0x0024 (0x01FC - 0x0220)
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	struct FPointer                                    VoiceEngine;                                   // 0x01FC (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	int32_t                                            MaxLocalTalkers;                               // 0x0204 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxRemoteTalkers;                              // 0x0208 (0x0004) [0x0000000000004000] (CPF_Config)  
	unsigned long                                      bIsUsingSpeechRecognition : 1;                 // 0x020C (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	unsigned long                                      bUserMessageDialogOpen : 1;                    // 0x020C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUserMessageDialogResult : 1;                  // 0x020C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bErrorDialogOpen : 1;                          // 0x020C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bSigninDialogOpen : 1;                         // 0x020C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bSigninDialogResult : 1;                       // 0x020C (0x0004) [0x0000000000000000] [0x00000020] 
	class UOnlineGameInterfaceImpl*                    GameInterfaceImpl;                             // 0x0210 (0x0008) [0x0000000000000000]               
	class UOnlineAuthInterfaceImpl*                    AuthInterfaceImpl;                             // 0x0218 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineSubsystemCommonImpl");
		}

		return uClassPointer;
	};

	bool GetSigninDialogResults();
	bool IsSigninDialogOpened();
	bool IsErrorDialogOpened();
	bool GetUserMessageDialogResults();
	bool IsUserMessageDialogOpened();
	void GetRegisteredPlayers(struct FName SessionName, TArray<struct FUniqueNetId>& OutRegisteredPlayers);
	bool IsPlayerInSession(struct FName SessionName, struct FUniqueNetId PlayerID);
	class FString eventGetPlayerNicknameFromIndex(int32_t UserIndex);
};

// Class IpDrv.OnlineAuthInterfaceImpl
// 0x02C4 (0x0060 - 0x0324)
class UOnlineAuthInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_IOnlineAuthInterface;                  // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                               // 0x0068 (0x0008) [0x0000000000000000]               
	unsigned long                                      bAuthReady : 1;                                // 0x0070 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	struct FSparseArray_Mirror                         ClientAuthSessions;                            // 0x0074 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         ServerAuthSessions;                            // 0x00AC (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         PeerAuthSessions;                              // 0x00E4 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         LocalClientAuthSessions;                       // 0x011C (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         LocalServerAuthSessions;                       // 0x0154 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         LocalPeerAuthSessions;                         // 0x018C (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	TArray<struct FScriptDelegate>                     AuthReadyDelegates;                            // 0x01C4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthRequestDelegates;                    // 0x01D4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthRequestDelegates;                    // 0x01E4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthResponseDelegates;                   // 0x01F4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthResponseDelegates;                   // 0x0204 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthCompleteDelegates;                   // 0x0214 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthCompleteDelegates;                   // 0x0224 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthEndSessionRequestDelegates;          // 0x0234 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthRetryRequestDelegates;               // 0x0244 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientConnectionCloseDelegates;                // 0x0254 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerConnectionCloseDelegates;                // 0x0264 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAuthReady__Delegate;                       // 0x0274 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthRequest__Delegate;               // 0x0284 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthRequest__Delegate;               // 0x0294 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthResponse__Delegate;              // 0x02A4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthResponse__Delegate;              // 0x02B4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthComplete__Delegate;              // 0x02C4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthComplete__Delegate;              // 0x02D4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthEndSessionRequest__Delegate;     // 0x02E4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthRetryRequest__Delegate;          // 0x02F4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientConnectionClose__Delegate;           // 0x0304 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerConnectionClose__Delegate;           // 0x0314 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineAuthInterfaceImpl");
		}

		return uClassPointer;
	};

	bool GetServerAddr(int32_t& OutServerIP, int32_t& OutServerPort);
	bool GetServerUniqueId(struct FUniqueNetId& OutServerUID);
	bool FindLocalServerAuthSession(class UPlayer* ClientConnection, struct FLocalAuthSession& OutSessionInfo);
	bool FindServerAuthSession(class UPlayer* ServerConnection, struct FAuthSession& OutSessionInfo);
	bool FindLocalClientAuthSession(class UPlayer* ServerConnection, struct FLocalAuthSession& OutSessionInfo);
	bool FindClientAuthSession(class UPlayer* ClientConnection, struct FAuthSession& OutSessionInfo);
	void AllLocalServerAuthSessions(struct FLocalAuthSession& OutSessionInfo);
	void AllServerAuthSessions(struct FAuthSession& OutSessionInfo);
	void AllLocalClientAuthSessions(struct FLocalAuthSession& OutSessionInfo);
	void AllClientAuthSessions(struct FAuthSession& OutSessionInfo);
	void EndAllRemoteServerAuthSessions();
	void EndAllLocalServerAuthSessions();
	void EndRemoteServerAuthSession(struct FUniqueNetId ServerUID, int32_t ServerIP);
	void EndLocalServerAuthSession(struct FUniqueNetId ClientUID, int32_t ClientIP);
	bool VerifyServerAuthSession(struct FUniqueNetId ServerUID, int32_t ServerIP, int32_t AuthTicketUID);
	bool CreateServerAuthSession(struct FUniqueNetId ClientUID, int32_t ClientIP, int32_t ClientPort, int32_t& OutAuthTicketUID);
	void EndAllRemoteClientAuthSessions();
	void EndAllLocalClientAuthSessions();
	void EndRemoteClientAuthSession(struct FUniqueNetId ClientUID, int32_t ClientIP);
	void EndLocalClientAuthSession(struct FUniqueNetId ServerUID, int32_t ServerIP, int32_t ServerPort);
	bool VerifyClientAuthSession(struct FUniqueNetId ClientUID, int32_t ClientIP, int32_t ClientPort, int32_t AuthTicketUID);
	bool CreateClientAuthSession(struct FUniqueNetId ServerUID, int32_t ServerIP, int32_t ServerPort, unsigned long bSecure, int32_t& OutAuthTicketUID);
	bool SendServerAuthRetryRequest();
	bool SendClientAuthEndSessionRequest(class UPlayer* ClientConnection);
	bool SendServerAuthResponse(class UPlayer* ClientConnection, int32_t AuthTicketUID);
	bool SendClientAuthResponse(int32_t AuthTicketUID);
	bool SendServerAuthRequest(struct FUniqueNetId ServerUID);
	bool SendClientAuthRequest(class UPlayer* ClientConnection, struct FUniqueNetId ClientUID);
	void ClearServerConnectionCloseDelegate(struct FScriptDelegate ServerConnectionCloseDelegate);
	void AddServerConnectionCloseDelegate(struct FScriptDelegate ServerConnectionCloseDelegate);
	void OnServerConnectionClose(class UPlayer* ServerConnection);
	void ClearClientConnectionCloseDelegate(struct FScriptDelegate ClientConnectionCloseDelegate);
	void AddClientConnectionCloseDelegate(struct FScriptDelegate ClientConnectionCloseDelegate);
	void OnClientConnectionClose(class UPlayer* ClientConnection);
	void ClearServerAuthRetryRequestDelegate(struct FScriptDelegate ServerAuthRetryRequestDelegate);
	void AddServerAuthRetryRequestDelegate(struct FScriptDelegate ServerAuthRetryRequestDelegate);
	void OnServerAuthRetryRequest(class UPlayer* ClientConnection);
	void ClearClientAuthEndSessionRequestDelegate(struct FScriptDelegate ClientAuthEndSessionRequestDelegate);
	void AddClientAuthEndSessionRequestDelegate(struct FScriptDelegate ClientAuthEndSessionRequestDelegate);
	void OnClientAuthEndSessionRequest(class UPlayer* ServerConnection);
	void ClearServerAuthCompleteDelegate(struct FScriptDelegate ServerAuthCompleteDelegate);
	void AddServerAuthCompleteDelegate(struct FScriptDelegate ServerAuthCompleteDelegate);
	void OnServerAuthComplete(unsigned long bSuccess, struct FUniqueNetId ServerUID, class UPlayer* ServerConnection, class FString ExtraInfo);
	void ClearClientAuthCompleteDelegate(struct FScriptDelegate ClientAuthCompleteDelegate);
	void AddClientAuthCompleteDelegate(struct FScriptDelegate ClientAuthCompleteDelegate);
	void OnClientAuthComplete(unsigned long bSuccess, struct FUniqueNetId ClientUID, class UPlayer* ClientConnection, class FString ExtraInfo);
	void ClearServerAuthResponseDelegate(struct FScriptDelegate ServerAuthResponseDelegate);
	void AddServerAuthResponseDelegate(struct FScriptDelegate ServerAuthResponseDelegate);
	void OnServerAuthResponse(struct FUniqueNetId ServerUID, int32_t ServerIP, int32_t AuthTicketUID);
	void ClearClientAuthResponseDelegate(struct FScriptDelegate ClientAuthResponseDelegate);
	void AddClientAuthResponseDelegate(struct FScriptDelegate ClientAuthResponseDelegate);
	void OnClientAuthResponse(struct FUniqueNetId ClientUID, int32_t ClientIP, int32_t AuthTicketUID);
	void ClearServerAuthRequestDelegate(struct FScriptDelegate ServerAuthRequestDelegate);
	void AddServerAuthRequestDelegate(struct FScriptDelegate ServerAuthRequestDelegate);
	void OnServerAuthRequest(class UPlayer* ClientConnection, struct FUniqueNetId ClientUID, int32_t ClientIP, int32_t ClientPort);
	void ClearClientAuthRequestDelegate(struct FScriptDelegate ClientAuthRequestDelegate);
	void AddClientAuthRequestDelegate(struct FScriptDelegate ClientAuthRequestDelegate);
	void OnClientAuthRequest(struct FUniqueNetId ServerUID, int32_t ServerIP, int32_t ServerPort, unsigned long bSecure);
	void ClearAuthReadyDelegate(struct FScriptDelegate AuthReadyDelegate);
	void AddAuthReadyDelegate(struct FScriptDelegate AuthReadyDelegate);
	void OnAuthReady();
	bool IsReady();
};

// Class IpDrv.OnlineGameInterfaceImpl
// 0x0228 (0x0060 - 0x0288)
class UOnlineGameInterfaceImpl : public UObject
{
public:
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                               // 0x0060 (0x0008) [0x0000000000000000]               
	class UOnlineGameSettings*                         GameSettings;                                  // 0x0068 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UOnlineGameSearch*                           GameSearch;                                    // 0x0070 (0x0008) [0x0000000000000002] (CPF_Const)   
	TArray<struct FScriptDelegate>                     CreateOnlineGameCompleteDelegates;             // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     UpdateOnlineGameCompleteDelegates;             // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     DestroyOnlineGameCompleteDelegates;            // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinOnlineGameCompleteDelegates;               // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     MigrateOnlineGameCompleteDelegates;            // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinMigratedOnlineGameCompleteDelegates;       // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     RecalculateSkillRatingCompleteDelegates;       // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     StartOnlineGameCompleteDelegates;              // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     EndOnlineGameCompleteDelegates;                // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     FindOnlineGamesCompleteDelegates;              // 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     CancelFindOnlineGamesCompleteDelegates;        // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            LanBeaconState;                                // 0x0128 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            LanNonce[0x8];                                 // 0x0129 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            LanAnnouncePort;                               // 0x0134 (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	int32_t                                            LanGameUniqueId;                               // 0x0138 (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	int32_t                                            LanPacketPlatformMask;                         // 0x013C (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	float                                              LanQueryTimeLeft;                              // 0x0140 (0x0004) [0x0000000000000000]               
	float                                              LanQueryTimeout;                               // 0x0144 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FPointer                                    LanBeacon;                                     // 0x0148 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    SessionInfo;                                   // 0x0150 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;         // 0x0158 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;        // 0x0168 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;        // 0x0178 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;       // 0x0188 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;   // 0x0198 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;          // 0x01A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;          // 0x01B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;        // 0x01C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRetrievedGameSettingsForIP__Delegate;      // 0x01D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;         // 0x01E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;           // 0x01F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate; // 0x0208 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;              // 0x0218 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRecalculateSkillRatingComplete__Delegate;  // 0x0228 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMigrateOnlineGameComplete__Delegate;       // 0x0238 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinMigratedOnlineGameComplete__Delegate;  // 0x0248 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQosStatusChanged__Delegate;                // 0x0258 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;// 0x0268 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGetRoomIdFromTitleService__Delegate;       // 0x0278 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineGameInterfaceImpl");
		}

		return uClassPointer;
	};

	void RunBandwidthTest();
	bool IsAllowedToNetworkHost();
	void ClearGetRoomIdFromTitleServiceDelegate(struct FScriptDelegate InDelegate);
	void AddGetRoomIdFromTitleServiceDelegate(struct FScriptDelegate InDelegate);
	void GetRoomIdFromSessionId(class FString SessionId);
	void GetRoomIdFromTitleService(struct FQWord DataId);
	void OnGetRoomIdFromTitleService(struct FQWord RoomId);
	class FString GetRoomId();
	bool SendPlayerList(TArray<class APlayerReplicationInfo*> Players);
	void ClearGetNumberOfCurrentPlayersCompleteDelegate(struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate);
	void AddGetNumberOfCurrentPlayersCompleteDelegate(struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate);
	void OnGetNumberOfCurrentPlayersComplete(int32_t TotalPlayers);
	int32_t GetNumberOfCurrentPlayersCached();
	bool GetNumberOfCurrentPlayers();
	void ClearQosStatusChangedDelegate(struct FScriptDelegate QosStatusChangedDelegate);
	void AddQosStatusChangedDelegate(struct FScriptDelegate QosStatusChangedDelegate);
	void OnQosStatusChanged(int32_t NumComplete, int32_t NumTotal);
	bool BindPlatformSpecificSessionToSearch(uint8_t SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, uint8_t PlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfoBySessionName(struct FName SessionName, uint8_t& PlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult& DesiredGame, uint8_t& PlatformSpecificInfo);
	bool QueryNonAdvertisedData(int32_t StartAt, int32_t NumberToQuery);
	void ClearJoinMigratedOnlineGameCompleteDelegate(struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate);
	void AddJoinMigratedOnlineGameCompleteDelegate(struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate);
	void OnJoinMigratedOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool JoinMigratedOnlineGame(uint8_t PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult& DesiredGame);
	void ClearMigrateOnlineGameCompleteDelegate(struct FScriptDelegate MigrateOnlineGameCompleteDelegate);
	void AddMigrateOnlineGameCompleteDelegate(struct FScriptDelegate MigrateOnlineGameCompleteDelegate);
	void OnMigrateOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool MigrateOnlineGame(uint8_t HostingPlayerNum, struct FName SessionName);
	void ClearRecalculateSkillRatingCompleteDelegate(struct FScriptDelegate RecalculateSkillRatingGameCompleteDelegate);
	void AddRecalculateSkillRatingCompleteDelegate(struct FScriptDelegate RecalculateSkillRatingCompleteDelegate);
	void OnRecalculateSkillRatingComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool RecalculateSkillRating(struct FName SessionName, TArray<struct FUniqueNetId>& Players);
	bool AcceptGameInvite(uint8_t LocalUserNum, struct FName SessionName);
	void ClearGameInviteAcceptedDelegate(uint8_t LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate);
	void AddGameInviteAcceptedDelegate(uint8_t LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate);
	void OnGameInviteAccepted(struct FOnlineGameSearchResult& InviteResult);
	TArray<struct FOnlineArbitrationRegistrant> GetArbitratedPlayers(struct FName SessionName);
	void ClearArbitrationRegistrationCompleteDelegate(struct FScriptDelegate ArbitrationRegistrationCompleteDelegate);
	void AddArbitrationRegistrationCompleteDelegate(struct FScriptDelegate ArbitrationRegistrationCompleteDelegate);
	void OnArbitrationRegistrationComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool RegisterForArbitration(struct FName SessionName);
	void ClearEndOnlineGameCompleteDelegate(struct FScriptDelegate EndOnlineGameCompleteDelegate);
	void AddEndOnlineGameCompleteDelegate(struct FScriptDelegate EndOnlineGameCompleteDelegate);
	void OnEndOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool EndOnlineGame(struct FName SessionName);
	void ClearStartOnlineGameCompleteDelegate(struct FScriptDelegate StartOnlineGameCompleteDelegate);
	void AddStartOnlineGameCompleteDelegate(struct FScriptDelegate StartOnlineGameCompleteDelegate);
	void OnStartOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool StartOnlineGame(struct FName SessionName);
	void RetrieveGameSettingsForIP(class FString IPAddress);
	void ClearOnRetrieveGameSettingsForIPDelegate(struct FScriptDelegate RetrieveIPDelegate);
	void AddOnRetrieveGameSettingsForIPDelegate(struct FScriptDelegate NewRetrieveIPDelegate);
	void OnRetrievedGameSettingsForIP(unsigned long bSuccessful, struct FOnlineGameSearchResult& ConnectResult);
	void ClearUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful);
	bool UnregisterPlayers(struct FName SessionName, TArray<struct FUniqueNetId>& Players);
	bool UnregisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID);
	void ClearRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful);
	bool RegisterPlayers(struct FName SessionName, TArray<struct FUniqueNetId>& Players);
	bool RegisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited);
	bool GetResolvedConnectString(struct FName SessionName, class FString& ConnectInfo);
	void ClearJoinOnlineGameCompleteDelegate(struct FScriptDelegate JoinOnlineGameCompleteDelegate);
	void AddJoinOnlineGameCompleteDelegate(struct FScriptDelegate JoinOnlineGameCompleteDelegate);
	void OnJoinOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool IsCurrentRoomOwner();
	bool SetRankedReadyStatus(unsigned long bReady);
	bool IsJoinOperationInProgress();
	bool JoinOnlineGameByMatchingParams(struct FQWord RoomId, class UOnlineGameSettings*& JoinedGameSettings);
	bool JoinOnlineGame(uint8_t PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult& DesiredGame);
	bool FreeSearchResults(class UOnlineGameSearch* Search);
	void ClearCancelFindOnlineGamesCompleteDelegate(struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate);
	void AddCancelFindOnlineGamesCompleteDelegate(struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate);
	void OnCancelFindOnlineGamesComplete(unsigned long bWasSuccessful);
	bool CancelFindOnlineGames();
	void ClearFindOnlineGamesCompleteDelegate(struct FScriptDelegate FindOnlineGamesCompleteDelegate);
	void AddFindOnlineGamesCompleteDelegate(struct FScriptDelegate FindOnlineGamesCompleteDelegate);
	bool FindOnlineGames(uint8_t SearchingPlayerNum, class UOnlineGameSearch* SearchSettings);
	void ClearDestroyOnlineGameCompleteDelegate(struct FScriptDelegate DestroyOnlineGameCompleteDelegate);
	void AddDestroyOnlineGameCompleteDelegate(struct FScriptDelegate DestroyOnlineGameCompleteDelegate);
	void OnDestroyOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool DestroyOnlineGame(struct FName SessionName);
	void ClearUpdateOnlineGameCompleteDelegate(struct FScriptDelegate UpdateOnlineGameCompleteDelegate);
	void AddUpdateOnlineGameCompleteDelegate(struct FScriptDelegate UpdateOnlineGameCompleteDelegate);
	void OnUpdateOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData);
	void ClearCreateOnlineGameCompleteDelegate(struct FScriptDelegate CreateOnlineGameCompleteDelegate);
	void AddCreateOnlineGameCompleteDelegate(struct FScriptDelegate CreateOnlineGameCompleteDelegate);
	void OnCreateOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool CreateOnlineGame(uint8_t HostingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings);
	class UOnlineGameSearch* GetGameSearch();
	class UOnlineGameSettings* GetGameSettings(struct FName SessionName);
	void OnFindOnlineGamesComplete(unsigned long bWasSuccessful);
};

// Class IpDrv.OnlinePlaylistManager
// 0x00D4 (0x0060 - 0x0134)
class UOnlinePlaylistManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	TArray<struct FPlaylist>                           Playlists;                                     // 0x0068 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class FString>                              PlaylistFileNames;                             // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               DatastoresToRefresh;                           // 0x0088 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	int32_t                                            DownloadCount;                                 // 0x0098 (0x0004) [0x0000000000000000]               
	int32_t                                            SuccessfulCount;                               // 0x009C (0x0004) [0x0000000000000000]               
	int32_t                                            VersionNumber;                                 // 0x00A0 (0x0004) [0x0000000000004000] (CPF_Config)  
	TArray<struct FPlaylistPopulation>                 PopulationData;                                // 0x00A4 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	int32_t                                            WorldwideTotalPlayers;                         // 0x00B4 (0x0004) [0x0000000000000000]               
	int32_t                                            RegionTotalPlayers;                            // 0x00B8 (0x0004) [0x0000000000000000]               
	class UOnlineTitleFileInterface*                   TitleFileInterface_Object;                     // 0x00BC (0x0008) [0x0000000000002000] (CPF_Transient)
	class UOnlineTitleFileInterface*                   TitleFileInterface_Interface;                  // 0x00C4 (0x0008) [0x0000000000002000] (CPF_Transient)
	class FString                                      PopulationFileName;                            // 0x00CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              NextPlaylistPopulationUpdateTime;              // 0x00DC (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              PlaylistPopulationUpdateInterval;              // 0x00E0 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MinPlaylistIdToReport;                         // 0x00E4 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            CurrentPlaylistId;                             // 0x00E8 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FName                                       EventsInterfaceName;                           // 0x00EC (0x0008) [0x0000000000004000] (CPF_Config)  
	int32_t                                            DataCenterId;                                  // 0x00F4 (0x0004) [0x0000000000004000] (CPF_Config)  
	class FString                                      DataCenterFileName;                            // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FDouble                                     LastPlaylistDownloadTime;                      // 0x0108 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              PlaylistRefreshInterval;                       // 0x0110 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FScriptDelegate                             __OnReadPlaylistComplete__Delegate;            // 0x0114 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlaylistPopulationDataUpdated__Delegate;   // 0x0124 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlinePlaylistManager");
		}

		return uClassPointer;
	};

	void ParseDataCenterId(TArray<uint8_t>& Data);
	void OnReadDataCenterIdComplete(unsigned long bWasSuccessful, class FString Filename);
	void ReadDataCenterId();
	void eventSendPlaylistPopulationUpdate(int32_t NumPlayers);
	void GetPopulationInfoFromPlaylist(int32_t PlaylistId, int32_t& WorldwideTotal, int32_t& RegionTotal);
	void ParsePlaylistPopulationData(TArray<uint8_t>& Data);
	void OnPlaylistPopulationDataUpdated();
	void OnReadPlaylistPopulationComplete(unsigned long bWasSuccessful, class FString Filename);
	void ReadPlaylistPopulation();
	void Reset();
	void GetContentIdsFromPlaylist(int32_t PlaylistId, TArray<int32_t>& ContentIds);
	class UClass* GetInventorySwapFromPlaylist(int32_t PlaylistId, class UClass* SourceInventory);
	void GetMapCycleFromPlaylist(int32_t PlaylistId, TArray<struct FName>& MapCycle);
	class FString GetUrlFromPlaylist(int32_t PlaylistId);
	int32_t GetMatchType(int32_t PlaylistId);
	bool IsPlaylistArbitrated(int32_t PlaylistId);
	void GetLoadBalanceIdFromPlaylist(int32_t PlaylistId, int32_t& LoadBalanceId);
	void GetTeamInfoFromPlaylist(int32_t PlaylistId, int32_t& TeamSize, int32_t& TeamCount, int32_t& MaxPartySize);
	bool PlaylistSupportsDedicatedServers(int32_t PlaylistId);
	bool HasAnyGameSettings(int32_t PlaylistId);
	class UOnlineGameSettings* GetGameSettings(int32_t PlaylistId, int32_t GameSettingsId);
	void FinalizePlaylistObjects();
	void OnReadTitleFileComplete(unsigned long bWasSuccessful, class FString Filename);
	bool ShouldRefreshPlaylists();
	void DetermineFilesToDownload();
	void DownloadPlaylist();
	void OnReadPlaylistComplete(unsigned long bWasSuccessful);
};

// Class IpDrv.PartyBeacon
// 0x0038 (0x0060 - 0x0098)
class UPartyBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	int32_t                                            PartyBeaconPort;                               // 0x0068 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FPointer                                    Socket;                                        // 0x006C (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	unsigned long                                      bIsInTick : 1;                                 // 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWantsDeferredDestroy : 1;                     // 0x0074 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShouldTick : 1;                               // 0x0074 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              HeartbeatTimeout;                              // 0x0078 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ElapsedHeartbeatTime;                          // 0x007C (0x0004) [0x0000000000000000]               
	struct FName                                       BeaconName;                                    // 0x0080 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __OnDestroyComplete__Delegate;                 // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.PartyBeacon");
		}

		return uClassPointer;
	};

	void OnDestroyComplete();
	void eventDestroyBeacon();
};

// Class IpDrv.PartyBeaconClient
// 0x00A8 (0x0098 - 0x0140)
class UPartyBeaconClient : public UPartyBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                            // 0x0098 (0x0010) [0x0000000000000002] (CPF_Const)   
	struct FPartyReservation                           PendingRequest;                                // 0x00A8 (0x001C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            ClientBeaconState;                             // 0x00C4 (0x0001) [0x0000000000000000]               
	uint8_t                                            ClientBeaconRequestType;                       // 0x00C5 (0x0001) [0x0000000000000000]               
	float                                              ReservationRequestTimeout;                     // 0x00C8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ReservationRequestElapsedTime;                 // 0x00CC (0x0004) [0x0000000000000000]               
	class FString                                      ResolverClassName;                             // 0x00D0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UClass*                                      ResolverClass;                                 // 0x00E0 (0x0008) [0x0000000000000000]               
	class UClientBeaconAddressResolver*                Resolver;                                      // 0x00E8 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __OnReservationRequestComplete__Delegate;      // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReservationCountUpdated__Delegate;         // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;           // 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnHostIsReady__Delegate;                     // 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnHostHasCancelled__Delegate;                // 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.PartyBeaconClient");
		}

		return uClassPointer;
	};

	void eventDestroyBeacon();
	bool CancelReservation(struct FUniqueNetId CancellingPartyLeader);
	bool RequestReservationUpdate(struct FUniqueNetId RequestingPartyLeader, struct FOnlineGameSearchResult& DesiredHost, TArray<struct FPlayerReservation>& PlayersToAdd);
	bool RequestReservation(struct FUniqueNetId RequestingPartyLeader, struct FOnlineGameSearchResult& DesiredHost, TArray<struct FPlayerReservation>& Players);
	void OnHostHasCancelled();
	void OnHostIsReady();
	void OnTravelRequestReceived(struct FName SessionName, class UClass* SearchClass, uint8_t PlatformSpecificInfo);
	void OnReservationCountUpdated(int32_t ReservationRemaining);
	void OnReservationRequestComplete(uint8_t ReservationResult);
};

// Class IpDrv.PartyBeaconHost
// 0x007C (0x0098 - 0x0114)
class UPartyBeaconHost : public UPartyBeacon
{
public:
	TArray<struct FClientBeaconConnection>             Clients;                                       // 0x0098 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            NumTeams;                                      // 0x00A8 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumPlayersPerTeam;                             // 0x00AC (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumReservations;                               // 0x00B0 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumConsumedReservations;                       // 0x00B4 (0x0004) [0x0000000000000002] (CPF_Const)   
	TArray<struct FPartyReservation>                   Reservations;                                  // 0x00B8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FName                                       OnlineSessionName;                             // 0x00C8 (0x0008) [0x0000000000000000]               
	int32_t                                            ConnectionBacklog;                             // 0x00D0 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            ForceTeamNum;                                  // 0x00D4 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            ReservedHostTeamNum;                           // 0x00D8 (0x0004) [0x0000000000000002] (CPF_Const)   
	unsigned long                                      bBestFitTeamAssignment : 1;                    // 0x00DC (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            BeaconState;                                   // 0x00E0 (0x0001) [0x0000000000000002] (CPF_Const)   
	struct FScriptDelegate                             __OnReservationChange__Delegate;               // 0x00E4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReservationsFull__Delegate;                // 0x00F4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientCancellationReceived__Delegate;      // 0x0104 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.PartyBeaconHost");
		}

		return uClassPointer;
	};

	int32_t GetMaxAvailableTeamSize();
	void GetPartyLeaders(TArray<struct FUniqueNetId>& PartyLeaders);
	void GetPlayers(TArray<struct FUniqueNetId>& Players);
	void AppendReservationSkillsToSearch(class UOnlineGameSearch* Search);
	void eventUnregisterParty(struct FUniqueNetId PartyLeader);
	void eventUnregisterPartyMembers();
	void eventRegisterPartyMembers();
	bool AreReservationsFull();
	void TellClientsHostHasCancelled();
	void TellClientsHostIsReady();
	void TellClientsToTravel(struct FName SessionName, class UClass* SearchClass, uint8_t PlatformSpecificInfo);
	void eventDestroyBeacon();
	void OnClientCancellationReceived(struct FUniqueNetId PartyLeader);
	void OnReservationsFull();
	void OnReservationChange();
	void HandlePlayerLogout(struct FUniqueNetId PlayerID, unsigned long bMaintainParty);
	int32_t GetExistingReservation(struct FUniqueNetId& PartyLeader);
	uint8_t UpdatePartyReservationEntry(struct FUniqueNetId PartyLeader, TArray<struct FPlayerReservation>& PlayerMembers);
	uint8_t AddPartyReservationEntry(struct FUniqueNetId PartyLeader, int32_t TeamNum, unsigned long bIsHost, TArray<struct FPlayerReservation>& PlayerMembers);
	bool InitHostBeacon(int32_t InNumTeams, int32_t InNumPlayersPerTeam, int32_t InNumReservations, struct FName InSessionName, int32_t InForceTeamNum);
	void PauseReservationRequests(unsigned long bPause);
};

// Class IpDrv.TcpipConnection
// 0x0024 (0xB0D4 - 0xB0F8)
class UTcpipConnection : public UNetConnection
{
public:
	uint8_t                                           UnknownData00[0x24];                           // 0xB0D4 (0x0024) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TcpipConnection");
		}

		return uClassPointer;
	};

};

// Class IpDrv.TcpNetDriver
// 0x0020 (0x01F8 - 0x0218)
class UTcpNetDriver : public UNetDriver
{
public:
	unsigned long                                      AllowPlayerPortUnreach : 1;                    // 0x01F8 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	unsigned long                                      LogPortUnreach : 1;                            // 0x01FC (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint8_t                                           UnknownData00[0x18];                           // 0x0200 (0x0018) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TcpNetDriver");
		}

		return uClassPointer;
	};

};

// Class IpDrv.WebRequest
// 0x00E8 (0x0060 - 0x0148)
class UWebRequest : public UObject
{
public:
	class FString                                      RemoteAddr;                                    // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      URI;                                           // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      UserName;                                      // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Password;                                      // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ContentLength;                                 // 0x00A0 (0x0004) [0x0000000000000000]               
	class FString                                      ContentType;                                   // 0x00A4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            RequestType;                                   // 0x00B4 (0x0001) [0x0000000000000000]               
	struct FMap_Mirror                                 HeaderMap;                                     // 0x00B8 (0x0048) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FMap_Mirror                                 VariableMap;                                   // 0x0100 (0x0048) [0x0000000000001002] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebRequest");
		}

		return uClassPointer;
	};

	int32_t GetHexDigit(class FString D);
	void DecodeFormData(class FString Data);
	void ProcessHeaderString(class FString S);
	void Dump();
	void GetVariables(TArray<class FString>& varNames);
	class FString GetVariableNumber(class FString VariableName, int32_t Number, class FString DefaultValue);
	int32_t GetVariableCount(class FString VariableName);
	class FString GetVariable(class FString VariableName, class FString DefaultValue);
	void AddVariable(class FString VariableName, class FString Value);
	void GetHeaders(TArray<class FString>& Headers);
	class FString GetHeader(class FString HeaderName, class FString DefaultValue);
	void AddHeader(class FString HeaderName, class FString Value);
	class FString EncodeBase64(class FString Decoded);
	class FString DecodeBase64(class FString Encoded);
};

// Class IpDrv.WebResponse
// 0x0084 (0x0060 - 0x00E4)
class UWebResponse : public UObject
{
public:
	TArray<class FString>                              Headers;                                       // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMap_Mirror                                 ReplacementMap;                                // 0x0070 (0x0048) [0x0000000000001002] (CPF_Const | CPF_Native)
	class FString                                      IncludePath;                                   // 0x00B8 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class FString                                      CharSet;                                       // 0x00C8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class AWebConnection*                              Connection;                                    // 0x00D8 (0x0008) [0x0000000000000000]               
	unsigned long                                      bSentText : 1;                                 // 0x00E0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSentResponse : 1;                             // 0x00E0 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebResponse");
		}

		return uClassPointer;
	};

	bool SentResponse();
	bool SentText();
	void Redirect(class FString URL);
	void SendStandardHeaders(class FString ContentType, unsigned long bCache);
	void HTTPError(int32_t ErrorNum, class FString Data);
	void SendHeaders();
	void AddHeader(class FString Header, unsigned long bReplace);
	void HTTPHeader(class FString Header);
	void HttpResponse(class FString Header);
	void FailAuthentication(class FString Realm);
	bool SendCachedFile(class FString Filename, class FString ContentType);
	void eventSendBinary(int32_t Count, uint8_t B);
	void eventSendText(class FString Text, unsigned long bNoCRLF);
	void Dump();
	class FString GetHTTPExpiration(int32_t OffsetSeconds);
	class FString LoadParsedUHTM(class FString Filename);
	bool IncludeBinaryFile(class FString Filename);
	bool IncludeUHTM(class FString Filename);
	void ClearSubst();
	void Subst(class FString Variable, class FString Value, unsigned long bClear);
	bool FileExists(class FString Filename);
};

// Class IpDrv.OnlinePlaylistProvider
// 0x0028 (0x0094 - 0x00BC)
class UOnlinePlaylistProvider : public UUIResourceDataProvider
{
public:
	int32_t                                            PlaylistId;                                    // 0x0094 (0x0004) [0x0000000000004000] (CPF_Config)  
	TArray<struct FName>                               PlaylistGameTypeNames;                         // 0x0098 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DisplayName;                                   // 0x00A8 (0x0010) [0x000000000040C002] (CPF_Const | CPF_Config | CPF_Localized | CPF_NeedCtorLink)
	int32_t                                            Priority;                                      // 0x00B8 (0x0004) [0x0000000000004000] (CPF_Config)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlinePlaylistProvider");
		}

		return uClassPointer;
	};

};

// Class IpDrv.UIDataStore_OnlinePlaylists
// 0x0060 (0x0098 - 0x00F8)
class UUIDataStore_OnlinePlaylists : public UUIDataStore
{
public:
	class FString                                      ProviderClassName;                             // 0x0098 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UClass*                                      ProviderClass;                                 // 0x00A8 (0x0008) [0x0000000000002000] (CPF_Transient)
	TArray<class UUIResourceDataProvider*>             RankedDataProviders;                           // 0x00B0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class UUIResourceDataProvider*>             UnrankedDataProviders;                         // 0x00C0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class UUIResourceDataProvider*>             RecModeDataProviders;                          // 0x00D0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class UUIResourceDataProvider*>             PrivateDataProviders;                          // 0x00E0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class UOnlinePlaylistManager*                      PlaylistMan;                                   // 0x00F0 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.UIDataStore_OnlinePlaylists");
		}

		return uClassPointer;
	};

	int32_t eventGetMatchTypeForPlaylistId(int32_t PlaylistId);
	static class UOnlinePlaylistProvider* GetOnlinePlaylistProvider(struct FName ProviderTag, int32_t PlaylistId, int32_t& ProviderIndex);
	bool GetPlaylistProvider(struct FName ProviderTag, int32_t ProviderIndex, class UUIResourceDataProvider*& out_Provider);
	bool GetResourceProviders(struct FName ProviderTag, TArray<class UUIResourceDataProvider*>& out_Providers);
	void eventInit();
};

// Class IpDrv.WebApplication
// 0x0020 (0x0060 - 0x0080)
class UWebApplication : public UObject
{
public:
	class AWorldInfo*                                  WorldInfo;                                     // 0x0060 (0x0008) [0x0000000000000000]               
	class AWebServer*                                  WebServer;                                     // 0x0068 (0x0008) [0x0000000000000000]               
	class FString                                      Path;                                          // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebApplication");
		}

		return uClassPointer;
	};

	void PostQuery(class UWebRequest* Request, class UWebResponse* Response);
	void Query(class UWebRequest* Request, class UWebResponse* Response);
	bool PreQuery(class UWebRequest* Request, class UWebResponse* Response);
	void CleanupApp();
	void Cleanup();
	void Init();
};

// Class IpDrv.WebServer
// 0x01CC (0x02D4 - 0x04A0)
class AWebServer : public ATcpLink
{
public:
	class FString                                      ServerName;                                    // 0x02D4 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      Applications[0xA];                             // 0x02E4 (0x00A0) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ApplicationPaths[0xA];                         // 0x0384 (0x00A0) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	unsigned long                                      bEnabled : 1;                                  // 0x0424 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	int32_t                                            ListenPort;                                    // 0x0428 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxConnections;                                // 0x042C (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            DefaultApplication;                            // 0x0430 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            ExpirationSeconds;                             // 0x0434 (0x0004) [0x0000000000004000] (CPF_Config)  
	class FString                                      ServerURL;                                     // 0x0438 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UWebApplication*                             ApplicationObjects[0xA];                       // 0x0448 (0x0050) [0x0000000000000000]               
	int32_t                                            ConnectionCount;                               // 0x0498 (0x0004) [0x0000000000000000]               
	int32_t                                            ConnID;                                        // 0x049C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebServer");
		}

		return uClassPointer;
	};

	class UWebApplication* GetApplication(class FString URI, class FString& SubURI);
	void eventLostChild(class AActor* C);
	void eventGainedChild(class AActor* C);
	void eventDestroyed();
	void PostBeginPlay();
};

// Class IpDrv.HelloWeb
// 0x0000 (0x0080 - 0x0080)
class UHelloWeb : public UWebApplication
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.HelloWeb");
		}

		return uClassPointer;
	};

	void eventQuery(class UWebRequest* Request, class UWebResponse* Response);
	void Init();
};

// Class IpDrv.ImageServer
// 0x0000 (0x0080 - 0x0080)
class UImageServer : public UWebApplication
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.ImageServer");
		}

		return uClassPointer;
	};

	void eventQuery(class UWebRequest* Request, class UWebResponse* Response);
};

// Class IpDrv.McpServiceConfig
// 0x0050 (0x0060 - 0x00B0)
class UMcpServiceConfig : public UObject
{
public:
	class FString                                      Protocol;                                      // 0x0060 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      Domain;                                        // 0x0070 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      TitleId;                                       // 0x0080 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      AppKey;                                        // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      AppSecret;                                     // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpServiceConfig");
		}

		return uClassPointer;
	};

};

// Class IpDrv.McpGroupsBase
// 0x00B0 (0x0078 - 0x0128)
class UMcpGroupsBase : public UMcpServiceBase
{
public:
	class FString                                      McpGroupsManagerClassName;                     // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FMcpGroupList>                       GroupLists;                                    // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateGroupComplete__Delegate;             // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteGroupComplete__Delegate;             // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupsComplete__Delegate;             // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupMembersComplete__Delegate;       // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddGroupMembersComplete__Delegate;         // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRemoveGroupMembersComplete__Delegate;      // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteAllGroupsComplete__Delegate;         // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupInvitesComplete__Delegate;       // 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptGroupInviteComplete__Delegate;       // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpGroupsBase");
		}

		return uClassPointer;
	};

	void OnAcceptGroupInviteComplete(class FString GroupID, unsigned long bWasSuccessful, class FString Error);
	void AcceptGroupInvite(class FString UniqueUserId, class FString GroupID, unsigned long bShouldAccept);
	void GetGroupInviteList(class FString UserId, struct FMcpGroupList& InviteList);
	void OnQueryGroupInvitesComplete(unsigned long bWasSuccessful, class FString Error);
	void QueryGroupInvites(class FString UniqueUserId);
	void OnDeleteAllGroupsComplete(class FString RequesterId, unsigned long bWasSuccessful, class FString Error);
	void DeleteAllGroups(class FString OwnerId);
	void OnRemoveGroupMembersComplete(class FString GroupID, unsigned long bWasSuccessful, class FString Error);
	void RemoveGroupMembers(class FString OwnerId, class FString GroupID, TArray<class FString>& MemberIds);
	void OnAddGroupMembersComplete(class FString GroupID, unsigned long bWasSuccessful, class FString Error);
	void AddGroupMembers(class FString OwnerId, class FString GroupID, unsigned long bRequiresAcceptance, TArray<class FString>& MemberIds);
	void GetGroupMembers(class FString GroupID, TArray<struct FMcpGroupMember>& GroupMembers);
	void OnQueryGroupMembersComplete(class FString GroupID, unsigned long bWasSuccessful, class FString Error);
	void QueryGroupMembers(class FString UniqueUserId, class FString GroupID);
	void GetGroupList(class FString UserId, struct FMcpGroupList& GroupList);
	void OnQueryGroupsComplete(class FString UserId, unsigned long bWasSuccessful, class FString Error);
	void QueryGroups(class FString RequesterId);
	void OnDeleteGroupComplete(class FString GroupID, unsigned long bWasSuccessful, class FString Error);
	void DeleteGroup(class FString UniqueUserId, class FString GroupID);
	void OnCreateGroupComplete(struct FMcpGroup Group, unsigned long bWasSuccessful, class FString Error);
	void CreateGroup(class FString OwnerId, class FString GroupName);
	static class UMcpGroupsBase* CreateInstance();
};

// Class IpDrv.McpGroupsManager
// 0x00D0 (0x0128 - 0x01F8)
class UMcpGroupsManager : public UMcpGroupsBase
{
public:
	class FString                                      CreateGroupUrl;                                // 0x0128 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteGroupUrl;                                // 0x0138 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryGroupsUrl;                                // 0x0148 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryGroupMembersUrl;                          // 0x0158 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      AddGroupMembersUrl;                            // 0x0168 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      RemoveGroupMembersUrl;                         // 0x0178 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteAllGroupsUrl;                            // 0x0188 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      AcceptGroupInviteUrl;                          // 0x0198 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      RejectGroupInviteUrl;                          // 0x01A8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupsRequestComplete__Delegate;      // 0x01B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupMembersRequestComplete__Delegate;// 0x01C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddGroupMembersRequestComplete__Delegate;  // 0x01D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptGroupInviteRequestComplete__Delegate;// 0x01E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpGroupsManager");
		}

		return uClassPointer;
	};

	void CacheGroupMember(class FString MemberId, class FString GroupID, uint8_t AcceptState);
	void CacheGroup(class FString RequesterId, struct FMcpGroup Group);
	void OnAcceptGroupInviteRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void AcceptGroupInvite(class FString UniqueUserId, class FString GroupID, unsigned long bShouldAccept);
	void OnDeleteAllGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void DeleteAllGroups(class FString UniqueUserId);
	void OnRemoveGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void RemoveGroupMembers(class FString UniqueUserId, class FString GroupID, TArray<class FString>& MemberIds);
	void OnAddGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void AddGroupMembers(class FString UniqueUserId, class FString GroupID, unsigned long bRequiresAcceptance, TArray<class FString>& MemberIds);
	void GetGroupMembers(class FString GroupID, TArray<struct FMcpGroupMember>& GroupMembers);
	void OnQueryGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void QueryGroupMembers(class FString UniqueUserId, class FString GroupID);
	void GetGroupList(class FString UserId, struct FMcpGroupList& GroupList);
	void OnQueryGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void QueryGroups(class FString RequesterId);
	void OnDeleteGroupRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void DeleteGroup(class FString UniqueUserId, class FString GroupID);
	void OnCreateGroupRequestComplete(class UHttpRequestInterface* CreateGroupRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void CreateGroup(class FString UniqueUserId, class FString GroupName);
};

// Class IpDrv.McpIdMappingBase
// 0x0030 (0x0078 - 0x00A8)
class UMcpIdMappingBase : public UMcpServiceBase
{
public:
	class FString                                      McpIdMappingClassName;                         // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddMappingComplete__Delegate;              // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryMappingsComplete__Delegate;           // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpIdMappingBase");
		}

		return uClassPointer;
	};

	void GetIdMappings(class FString ExternalType, TArray<struct FMcpIdMapping>& IDMappings);
	void OnQueryMappingsComplete(class FString ExternalType, unsigned long bWasSuccessful, class FString Error);
	void QueryMappings(class FString ExternalType, TArray<class FString>& ExternalIds);
	void OnAddMappingComplete(class FString McpId, class FString ExternalId, class FString ExternalType, unsigned long bWasSuccessful, class FString Error);
	void AddMapping(class FString McpId, class FString ExternalId, class FString ExternalType);
	static class UMcpIdMappingBase* CreateInstance();
};

// Class IpDrv.McpIdMappingManager
// 0x0050 (0x00A8 - 0x00F8)
class UMcpIdMappingManager : public UMcpIdMappingBase
{
public:
	TArray<struct FMcpIdMapping>                       AccountMappings;                               // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      AddMappingUrl;                                 // 0x00B8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryMappingUrl;                               // 0x00C8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FAddMappingRequest>                  AddMappingRequests;                            // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FQueryMappingRequest>                QueryMappingRequests;                          // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpIdMappingManager");
		}

		return uClassPointer;
	};

	void GetIdMappings(class FString ExternalType, TArray<struct FMcpIdMapping>& IDMappings);
	void OnQueryMappingsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void QueryMappings(class FString ExternalType, TArray<class FString>& ExternalIds);
	void OnAddMappingRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void AddMapping(class FString McpId, class FString ExternalId, class FString ExternalType);
};

// Class IpDrv.McpUserManagerBase
// 0x0040 (0x0078 - 0x00B8)
class UMcpUserManagerBase : public UMcpServiceBase
{
public:
	class FString                                      McpUserManagerClassName;                       // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterUserComplete__Delegate;            // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryUsersComplete__Delegate;              // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteUserComplete__Delegate;              // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpUserManagerBase");
		}

		return uClassPointer;
	};

	void OnDeleteUserComplete(unsigned long bWasSuccessful, class FString Error);
	void DeleteUser(class FString McpId);
	void GetUsers(TArray<struct FMcpUserStatus>& Users);
	void OnQueryUsersComplete(unsigned long bWasSuccessful, class FString Error);
	void QueryUsers(TArray<class FString>& McpIds);
	void QueryUser(class FString McpId, unsigned long bShouldUpdateLastActive);
	void OnRegisterUserComplete(class FString McpId, class FString UDID, unsigned long bWasSuccessful, class FString Error);
	void RegisterUser(class FString UDID, class FString McpId);
	static class UMcpUserManagerBase* CreateInstance();
};

// Class IpDrv.McpUserManager
// 0x0080 (0x00B8 - 0x0138)
class UMcpUserManager : public UMcpUserManagerBase
{
public:
	TArray<struct FMcpUserStatus>                      UserStatuses;                                  // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      RegisterUserUrl;                               // 0x00C8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryUserUrl;                                  // 0x00D8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryUsersUrl;                                 // 0x00E8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteUserUrl;                                 // 0x00F8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FRegisterUserRequest>                RegisterUserRequests;                          // 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UHttpRequestInterface*>               QueryUsersRequests;                            // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UHttpRequestInterface*>               DeleteUserRequests;                            // 0x0128 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpUserManager");
		}

		return uClassPointer;
	};

	void OnDeleteUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void DeleteUser(class FString McpId);
	void GetUsers(TArray<struct FMcpUserStatus>& Users);
	void OnQueryUsersRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void QueryUsers(TArray<class FString>& McpIds);
	void OnQueryUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void QueryUser(class FString McpId, unsigned long bShouldUpdateLastActive);
	void OnRegisterUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void RegisterUser(class FString UDID, class FString McpId);
};

// Class IpDrv.WebConnection
// 0x0044 (0x02D4 - 0x0318)
class AWebConnection : public ATcpLink
{
public:
	class AWebServer*                                  WebServer;                                     // 0x02D4 (0x0008) [0x0000000000000000]               
	class FString                                      ReceivedData;                                  // 0x02DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UWebRequest*                                 Request;                                       // 0x02EC (0x0008) [0x0000000000000000]               
	class UWebResponse*                                Response;                                      // 0x02F4 (0x0008) [0x0000000000000000]               
	class UWebApplication*                             Application;                                   // 0x02FC (0x0008) [0x0000000000000000]               
	unsigned long                                      bDelayCleanup : 1;                             // 0x0304 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            RawBytesExpecting;                             // 0x0308 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxValueLength;                                // 0x030C (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxLineLength;                                 // 0x0310 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            ConnID;                                        // 0x0314 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebConnection");
		}

		return uClassPointer;
	};

	bool IsHanging();
	void Cleanup();
	void CheckRawBytes();
	void EndOfHeaders();
	void CreateResponseObject();
	void ProcessPost(class FString S);
	void ProcessGet(class FString S);
	void ProcessHead(class FString S);
	void ReceivedLine(class FString S);
	void eventReceivedText(class FString Text);
	void eventTimer();
	void eventClosed();
	void eventAccepted();
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
