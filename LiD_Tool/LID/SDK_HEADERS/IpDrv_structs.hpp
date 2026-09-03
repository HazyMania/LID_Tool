/*
#############################################################################################
# LET IT DIE (5.0.1.0) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: IpDrv_structs.hpp
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct IpDrv.InternetLink.IpAddr
// 0x0008
struct FIpAddr
{
	int32_t                                            Addr;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Port;                                          // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpGroupsBase.McpGroupMember
// 0x0011
struct FMcpGroupMember
{
	class FString                                      MemberId;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            AcceptState;                                   // 0x0010 (0x0001) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpGroupsBase.McpGroup
// 0x0044
struct FMcpGroup
{
	class FString                                      OwnerId;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GroupID;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GroupName;                                     // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            AccessLevel;                                   // 0x0030 (0x0001) [0x0000000000000000]               
	TArray<struct FMcpGroupMember>                     Members;                                       // 0x0034 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpGroupsBase.McpGroupList
// 0x0020
struct FMcpGroupList
{
	class FString                                      RequesterId;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FMcpGroup>                           Groups;                                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpIdMappingBase.McpIdMapping
// 0x0030
struct FMcpIdMapping
{
	class FString                                      McpId;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ExternalId;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ExternalType;                                  // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpIdMappingManager.AddMappingRequest
// 0x0038
struct FAddMappingRequest
{
	class FString                                      McpId;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ExternalId;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ExternalType;                                  // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                       // 0x0030 (0x0008) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpIdMappingManager.QueryMappingRequest
// 0x0018
struct FQueryMappingRequest
{
	class FString                                      ExternalType;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                       // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpMessageBase.McpMessage
// 0x0071
struct FMcpMessage
{
	class FString                                      MessageId;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TitleId;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ToUniqueUserId;                                // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      FromUniqueUserId;                              // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      FromFriendlyName;                              // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MessageType;                                   // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ValidUntil;                                    // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            MessageCompressionType;                        // 0x0070 (0x0001) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpMessageBase.McpMessageList
// 0x0020
struct FMcpMessageList
{
	class FString                                      ToUniqueUserId;                                // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FMcpMessage>                         Messages;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpMessageBase.McpMessageContents
// 0x0020
struct FMcpMessageContents
{
	class FString                                      MessageId;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<uint8_t>                                    MessageContents;                               // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpMessageManager.McpCompressMessageRequest
// 0x0034
struct FMcpCompressMessageRequest
{
	TArray<uint8_t>                                    SourceBuffer;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<uint8_t>                                    DestBuffer;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            OutCompressedSize;                             // 0x0020 (0x0004) [0x0000000000000000]               
	class UHttpRequestInterface*                       Request;                                       // 0x0024 (0x0008) [0x0000000000000000]               
	struct FPointer                                    CompressionWorker;                             // 0x002C (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct IpDrv.McpMessageManager.McpUncompressMessageRequest
// 0x003C
struct FMcpUncompressMessageRequest
{
	class FString                                      MessageId;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<uint8_t>                                    SourceBuffer;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<uint8_t>                                    DestBuffer;                                    // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            OutUncompressedSize;                           // 0x0030 (0x0004) [0x0000000000000000]               
	struct FPointer                                    UncompressionWorker;                           // 0x0034 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct IpDrv.OnlineTitleFileDownloadBase.TitleFileWeb
// 0x0018 (0x0024 - 0x003C)
struct FTitleFileWeb : FTitleFile
{
	class FString                                      StringData;                                    // 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                   // 0x0034 (0x0008) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpUserCloudFileDownload.McpUserCloudFileInfo
// 0x0030 (0x0034 - 0x0064)
struct FMcpUserCloudFileInfo : FEmsFile
{
	class FString                                      CreationDate;                                  // 0x0034 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LastUpdateDate;                                // 0x0044 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CompressionType;                               // 0x0054 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.McpUserCloudFileDownload.McpUserCloudFilesEntry
// 0x0038
struct FMcpUserCloudFilesEntry
{
	class FString                                      UserId;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FTitleFileWeb>                       DownloadedFiles;                               // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FMcpUserCloudFileInfo>               EnumeratedFiles;                               // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequestEnumerateFiles;                     // 0x0030 (0x0008) [0x0000000000000000]               
};

// ScriptStruct IpDrv.McpUserManagerBase.McpUserStatus
// 0x0048
struct FMcpUserStatus
{
	class FString                                      McpId;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      UDID;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CountryCode;                                   // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LastActiveDate;                                // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            DaysInactive;                                  // 0x0040 (0x0004) [0x0000000000000000]               
	unsigned long                                      bIsBanned : 1;                                 // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct IpDrv.McpUserManager.RegisterUserRequest
// 0x0028
struct FRegisterUserRequest
{
	class FString                                      UDID;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      McpId;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                       // 0x0020 (0x0008) [0x0000000000000000]               
};

// ScriptStruct IpDrv.MeshBeacon.ConnectionBandwidthStats
// 0x000C
struct FConnectionBandwidthStats
{
	int32_t                                            UpstreamRate;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            DownstreamRate;                                // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            RoundtripLatency;                              // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.MeshBeacon.PlayerMember
// 0x0010
struct FPlayerMember
{
	int32_t                                            TeamNum;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Skill;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                NetId;                                         // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct IpDrv.MeshBeaconClient.ClientBandwidthTestData
// 0x0014
struct FClientBandwidthTestData
{
	uint8_t                                            TestType;                                      // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            CurrentState;                                  // 0x0001 (0x0001) [0x0000000000000000]               
	int32_t                                            NumBytesToSendTotal;                           // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            NumBytesSentTotal;                             // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            NumBytesSentLast;                              // 0x000C (0x0004) [0x0000000000000000]               
	float                                              ElapsedTestTime;                               // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.MeshBeaconClient.ClientConnectionRequest
// 0x0028
struct FClientConnectionRequest
{
	struct FUniqueNetId                                PlayerNetId;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            NatType;                                       // 0x0008 (0x0001) [0x0000000000000000]               
	unsigned long                                      bCanHostVs : 1;                                // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              GoodHostRatio;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	TArray<struct FConnectionBandwidthStats>           BandwidthHistory;                              // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MinutesSinceLastTest;                          // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.MeshBeaconHost.ClientConnectionBandwidthTestData
// 0x0028
struct FClientConnectionBandwidthTestData
{
	uint8_t                                            CurrentState;                                  // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            TestType;                                      // 0x0001 (0x0001) [0x0000000000000000]               
	int32_t                                            BytesTotalNeeded;                              // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            BytesReceived;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	struct FDouble                                     RequestTestStartTime;                          // 0x000C (0x0008) [0x0000000000000000]               
	struct FDouble                                     TestStartTime;                                 // 0x0014 (0x0008) [0x0000000000000000]               
	struct FConnectionBandwidthStats                   BandwidthStats;                                // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct IpDrv.MeshBeaconHost.ClientMeshBeaconConnection
// 0x0060
struct FClientMeshBeaconConnection
{
	struct FUniqueNetId                                PlayerNetId;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              ElapsedHeartbeatTime;                          // 0x0008 (0x0004) [0x0000000000000000]               
	struct FPointer                                    Socket;                                        // 0x000C (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	unsigned long                                      bConnectionAccepted : 1;                       // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FClientConnectionBandwidthTestData          BandwidthTest;                                 // 0x0018 (0x0028) [0x0000000000000000]               
	uint8_t                                            NatType;                                       // 0x0040 (0x0001) [0x0000000000000000]               
	unsigned long                                      bCanHostVs : 1;                                // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              GoodHostRatio;                                 // 0x0048 (0x0004) [0x0000000000000000]               
	TArray<struct FConnectionBandwidthStats>           BandwidthHistory;                              // 0x004C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MinutesSinceLastTest;                          // 0x005C (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.OnlineEventsInterfaceMcp.EventUploadConfig
// 0x001C
struct FEventUploadConfig
{
	uint8_t                                            UploadType;                                    // 0x0000 (0x0001) [0x0000000000000002] (CPF_Const)   
	class FString                                      UploadUrl;                                     // 0x0004 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	float                                              TimeOut;                                       // 0x0014 (0x0004) [0x0000000000000002] (CPF_Const)   
	unsigned long                                      bUseCompression : 1;                           // 0x0018 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
};

// ScriptStruct IpDrv.OnlineNewsInterfaceMcp.NewsCacheEntry
// 0x0034
struct FNewsCacheEntry
{
	class FString                                      NewsUrl;                                       // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            ReadState;                                     // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                            NewsType;                                      // 0x0011 (0x0001) [0x0000000000000002] (CPF_Const)   
	class FString                                      NewsItem;                                      // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              TimeOut;                                       // 0x0024 (0x0004) [0x0000000000000002] (CPF_Const)   
	unsigned long                                      bIsUnicode : 1;                                // 0x0028 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	struct FPointer                                    HttpDownloader;                                // 0x002C (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct IpDrv.OnlinePlaylistManager.ConfiguredGameSetting
// 0x002C
struct FConfiguredGameSetting
{
	int32_t                                            GameSettingId;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      GameSettingsClassName;                         // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      URL;                                           // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineGameSettings*                         GameSettings;                                  // 0x0024 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct IpDrv.OnlinePlaylistManager.InventorySwap
// 0x0018
struct FInventorySwap
{
	struct FName                                       Original;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      SwapTo;                                        // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.OnlinePlaylistManager.Playlist
// 0x008C
struct FPlaylist
{
	TArray<struct FConfiguredGameSetting>              ConfiguredGames;                               // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PlaylistId;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            LoadBalanceId;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	class FString                                      LocalizationString;                            // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int32_t>                                    ContentIds;                                    // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TeamSize;                                      // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            TeamCount;                                     // 0x003C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxPartySize;                                  // 0x0040 (0x0004) [0x0000000000000000]               
	class FString                                      Name;                                          // 0x0044 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      URL;                                           // 0x0054 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MatchType;                                     // 0x0064 (0x0004) [0x0000000000000000]               
	unsigned long                                      bDisableDedicatedServerSearches : 1;           // 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<struct FName>                               MapCycle;                                      // 0x006C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FInventorySwap>                      InventorySwaps;                                // 0x007C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.OnlinePlaylistManager.PlaylistPopulation
// 0x000C
struct FPlaylistPopulation
{
	int32_t                                            PlaylistId;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            WorldwideTotal;                                // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            RegionTotal;                                   // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.OnlineTitleFileDownloadBase.FileNameToURLMapping
// 0x0010
struct FFileNameToURLMapping
{
	struct FName                                       Filename;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       UrlMapping;                                    // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct IpDrv.OnlineTitleFileDownloadMcp.TitleFileMcp
// 0x0008 (0x0024 - 0x002C)
struct FTitleFileMcp : FTitleFile
{
	struct FPointer                                    HttpDownloader;                                // 0x0024 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct IpDrv.PartyBeacon.PlayerReservation
// 0x0024
struct FPlayerReservation
{
	struct FUniqueNetId                                NetId;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Skill;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            XpLevel;                                       // 0x000C (0x0004) [0x0000000000000000]               
	struct FDouble                                     Mu;                                            // 0x0010 (0x0008) [0x0000000000000000]               
	struct FDouble                                     Sigma;                                         // 0x0018 (0x0008) [0x0000000000000000]               
	float                                              ElapsedSessionTime;                            // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.PartyBeacon.PartyReservation
// 0x001C
struct FPartyReservation
{
	int32_t                                            TeamNum;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                PartyLeader;                                   // 0x0004 (0x0008) [0x0000000000000000]               
	TArray<struct FPlayerReservation>                  PartyMembers;                                  // 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.PartyBeaconHost.ClientBeaconConnection
// 0x0014
struct FClientBeaconConnection
{
	struct FUniqueNetId                                PartyLeader;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              ElapsedHeartbeatTime;                          // 0x0008 (0x0004) [0x0000000000000000]               
	struct FPointer                                    Socket;                                        // 0x000C (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
};

// ScriptStruct IpDrv.TitleFileDownloadCache.TitleFileCacheEntry
// 0x002C (0x0024 - 0x0050)
struct FTitleFileCacheEntry : FTitleFile
{
	class FString                                      LogicalName;                                   // 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Hash;                                          // 0x0034 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            FileOp;                                        // 0x0044 (0x0001) [0x0000000000000000]               
	struct FPointer                                    Ar;                                            // 0x0048 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
