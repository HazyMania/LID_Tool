/*
#############################################################################################
# LET IT DIE (5.0.1.0) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: GHMEngine_parameters.hpp
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

// Function GHMEngine.GHM_AutoTestManager.AddGameEventToDB
// [0x00020400] 
struct AGHM_AutoTestManager_execAddGameEventToDB_Params
{
	struct FVector                                     EventLocation;                                    		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    EventRotation;                                    		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	class FString                                      GameEventName;                                    		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      GameEventDesc;                                    		// 0x0028 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      PlayerNameOrAdditionalInfo;                       		// 0x0038 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_AutoTestManager.GetBuildConfigurationString
// [0x00020400] 
struct AGHM_AutoTestManager_execGetBuildConfigurationString_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_AutoTestManager.EndWalkthrough
// [0x00020002] 
struct AGHM_AutoTestManager_execEndWalkthrough_Params
{
};

// Function GHMEngine.GHM_AutoTestManager.BeginWalkthrough
// [0x00020002] 
struct AGHM_AutoTestManager_execBeginWalkthrough_Params
{
	bool                                               bPerfCheck : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_AutoTestManager.CheckForSentinelRun
// [0x00020002] 
struct AGHM_AutoTestManager_execCheckForSentinelRun_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_AutoTestManager.DoTimeBasedSentinelStatGathering
// [0x00820002] 
struct AGHM_AutoTestManager_execDoTimeBasedSentinelStatGathering_Params
{
	// class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
	// struct FVector                                     ViewLocation;                                     		// 0x0008 (0x000C) [0x0000000000000000]               
	// struct FRotator                                    ViewRotation;                                     		// 0x0014 (0x000C) [0x0000000000000000]               
};

// Function GHMEngine.GHM_AutoTestManager.StartAutomatedMapTestTimer
// [0x00020800] 
struct AGHM_AutoTestManager_eventStartAutomatedMapTestTimer_Params
{
};

// Function GHMEngine.GHM_CapsuleComponent.TriangleCheck
// [0x00020400] 
struct UGHM_CapsuleComponent_execTriangleCheck_Params
{
	struct FVector                                     Position1;                                        		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Position2;                                        		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Position3;                                        		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugCombinationInput.InputClear
// [0x00020400] 
struct UGHM_DebugCombinationInput_execInputClear_Params
{
};

// Function GHMEngine.GHM_DebugCombinationInput.SetEnabled
// [0x00020002] 
struct UGHM_DebugCombinationInput_execSetEnabled_Params
{
	bool                                               NewState : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_DebugDrawManager.DrawText
// [0x00024800] 
struct UGHM_DebugDrawManager_eventDrawTextW_Params
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Text;                                             		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              PosX;                                             		// 0x0014 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              PosY;                                             		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            R;                                                		// 0x001C (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            G;                                                		// 0x001D (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            B;                                                		// 0x001E (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            A;                                                		// 0x001F (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               CR : 1;                                           		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              XScale;                                           		// 0x0024 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              YScale;                                           		// 0x0028 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_DebugDrawManager.DrawCone
// [0x00020800] 
struct UGHM_DebugDrawManager_eventDrawCone_Params
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Origin;                                           		// 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Direction;                                        		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              Length;                                           		// 0x001C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              AngleWidth;                                       		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              AngleHeight;                                      		// 0x0024 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumSides;                                         		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FColor                                      DrawColor;                                        		// 0x002C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugDrawManager.DrawCylinder
// [0x00020800] 
struct UGHM_DebugDrawManager_eventDrawCylinder_Params
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Start;                                            		// 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     End;                                              		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              Radius;                                           		// 0x001C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Segments;                                         		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            R;                                                		// 0x0024 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            G;                                                		// 0x0025 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            B;                                                		// 0x0026 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugDrawManager.DrawSphere
// [0x00020800] 
struct UGHM_DebugDrawManager_eventDrawSphere_Params
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Center;                                           		// 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              Radius;                                           		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Segments;                                         		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            R;                                                		// 0x0018 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            G;                                                		// 0x0019 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            B;                                                		// 0x001A (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugDrawManager.DrawCoordinateSystem
// [0x00020800] 
struct UGHM_DebugDrawManager_eventDrawCoordinateSystem_Params
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     AxisLoc;                                          		// 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    AxisRot;                                          		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              Scale;                                            		// 0x001C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugDrawManager.DrawStar
// [0x00020800] 
struct UGHM_DebugDrawManager_eventDrawStar_Params
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Position;                                         		// 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              Size;                                             		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            R;                                                		// 0x0014 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            G;                                                		// 0x0015 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            B;                                                		// 0x0016 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugDrawManager.DrawBox
// [0x00020800] 
struct UGHM_DebugDrawManager_eventDrawBox_Params
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Center;                                           		// 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Extent;                                           		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            R;                                                		// 0x001C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            G;                                                		// 0x001D (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            B;                                                		// 0x001E (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugDrawManager.DrawPoint
// [0x00020800] 
struct UGHM_DebugDrawManager_eventDrawPoint_Params
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Position;                                         		// 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              Size;                                             		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FLinearColor                                PointColor;                                       		// 0x0014 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugDrawManager.DrawLine
// [0x00020800] 
struct UGHM_DebugDrawManager_eventDrawLine_Params
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     LineStart;                                        		// 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     LineEnd;                                          		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            R;                                                		// 0x001C (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            G;                                                		// 0x001D (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            B;                                                		// 0x001E (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugDrawManager.DisplayDebug
// [0x00020000] 
struct UGHM_DebugDrawManager_execDisplayDebug_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugDrawManager.Tick
// [0x00020000] 
struct UGHM_DebugDrawManager_execTick_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugDrawManager.FlushDebugDrawObjects
// [0x00020002] 
struct UGHM_DebugDrawManager_execFlushDebugDrawObjects_Params
{
};

// Function GHMEngine.GHM_GameEngine.SetSpecialMaskChannels
// [0x00022400] 
struct UGHM_GameEngine_execSetSpecialMaskChannels_Params
{
	bool                                               Red : 1;                                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               Green : 1;                                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               Blue : 1;                                         		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               Alpha : 1;                                        		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_GameEngine.IsDLCCorruptedForXBox360
// [0x00020002] 
struct UGHM_GameEngine_execIsDLCCorruptedForXBox360_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]               
	// int32_t                                            BundleIndex;                                      		// 0x0008 (0x0004) [0x0000000000000000]               
	// class UOnlineSubsystem*                            OnlineSub;                                        		// 0x000C (0x0008) [0x0000000000000000]               
	// class UOnlineContentInterface*                     ContentInt;                                       		// 0x0014 (0x0010) [0x0000000000000000]               
	// class ULocalPlayer*                                TempLocalPlayer;                                  		// 0x0024 (0x0008) [0x0000000000000000]               
	// TArray<struct FOnlineContent>                      UserBundles;                                      		// 0x002C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_GameEngine.GetCheckpointSubsystem
// [0x00022401] 
struct UGHM_GameEngine_execGetCheckpointSubsystem_Params
{
	class UGHM_CheckPointSubSystem*                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_GameEngine.GetClassFromName
// [0x00022401] 
struct UGHM_GameEngine_execGetClassFromName_Params
{
	class FString                                      ClassName;                                        		// 0x0000 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	class UClass*                                      ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_GameEngine.PostLoadMap
// [0x00020802] 
struct UGHM_GameEngine_eventPostLoadMap_Params
{
	// class AGHM_GameInfo*                               GI;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_GameEngine.CheckCIV
// [0x00020401] 
struct UGHM_GameEngine_execCheckCIV_Params
{
};

// Function GHMEngine.GHM_GameEngine.PostGC
// [0x00020800] 
struct UGHM_GameEngine_eventPostGC_Params
{
	bool                                               bPerformFullPurge : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_GameEngine.PreGC
// [0x00020800] 
struct UGHM_GameEngine_eventPreGC_Params
{
	bool                                               bPerformFullPurge : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               bFromKismetRequest : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_GameEngine.bRequestAutomaticGC
// [0x00020802] 
struct UGHM_GameEngine_eventbRequestAutomaticGC_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            iPreviousNumberOfPawn;                            		// 0x0004 (0x0004) [0x0000000000000000]               
	// class APawn*                                       P;                                                		// 0x0008 (0x0008) [0x0000000000000000]               
	// class AWorldInfo*                                  WI;                                               		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_GameEngine.bForceAvoidAutomaticGC
// [0x00020802] 
struct UGHM_GameEngine_eventbForceAvoidAutomaticGC_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_GameEngine.bAvoidAutomaticGC
// [0x00020802] 
struct UGHM_GameEngine_eventbAvoidAutomaticGC_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_GameInfo.PauseKismet
// [0x00020400] 
struct AGHM_GameInfo_execPauseKismet_Params
{
	bool                                               NewFlag : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_GameInfo.UpdateEnvironmentWindAnim
// [0x00040401] 
struct AGHM_GameInfo_execUpdateEnvironmentWindAnim_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_GameInfo.StopEnvironmentWindAnim
// [0x00040401] 
struct AGHM_GameInfo_execStopEnvironmentWindAnim_Params
{
	float                                              FadeOutSeconds;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_GameInfo.StartEnvironmentWindAnim
// [0x00440401] 
struct AGHM_GameInfo_execStartEnvironmentWindAnim_Params
{
	struct FGHM_SkelControlDFTL_WindAnimSetting        Setting;                                          		// 0x0000 (0x0068) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_GameInfo.GetMessageBoxSelectIdx
// [0x00042401] 
struct AGHM_GameInfo_execGetMessageBoxSelectIdx_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_GameInfo.MessageBox
// [0x00042401] 
struct AGHM_GameInfo_execMessageBox_Params
{
	class FString                                      Title;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class FString>                              ButtonAliases;                                    		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_GameInfo.ShowMessageBox
// [0x00020002] 
struct AGHM_GameInfo_execShowMessageBox_Params
{
	class FString                                      Title;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	TArray<class FString>                              ButtonAliases;                                    		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             CloseDelegate;                                    		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_GameInfo.OnMessageBoxClose
// [0x00120000] 
struct AGHM_GameInfo_execOnMessageBoxClose_Params
{
	int32_t                                            SelectIdx;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_GameInfo.UINotify
// [0x00020002] 
struct AGHM_GameInfo_execUINotify_Params
{
	bool                                               bIsOpening : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_GameInfo.GetStreamingPersistentWorldInfo
// [0x00020400] 
struct AGHM_GameInfo_execGetStreamingPersistentWorldInfo_Params
{
	class AWorldInfo*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_GameInfo.UnregisterBreakableObject
// [0x00020002] 
struct AGHM_GameInfo_execUnregisterBreakableObject_Params
{
	class AGHM_BreakableObject*                        BreakableObject;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_GameInfo.RegisterBreakableObject
// [0x00020002] 
struct AGHM_GameInfo_execRegisterBreakableObject_Params
{
	class AGHM_BreakableObject*                        BreakableObject;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_GameInfo.GHM_GHM_GameInfo_ApplyCheckpointRecord
// [0x00C20002] 
struct AGHM_GameInfo_execGHM_GHM_GameInfo_ApplyCheckpointRecord_Params
{
	struct FGHM_GHM_GameInfo_CheckpointRecord          Record;                                           		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// class AGHM_BreakableObject*                        BreakableObject;                                  		// 0x0010 (0x0008) [0x0000000000000000]               
	// struct FBrokenObjectCheckpointRecord               TmpRecord;                                        		// 0x0018 (0x003C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_GameInfo.GHM_GHM_GameInfo_CreateCheckpointRecord
// [0x00420002] 
struct AGHM_GameInfo_execGHM_GHM_GameInfo_CreateCheckpointRecord_Params
{
	struct FGHM_GHM_GameInfo_CheckpointRecord          Record;                                           		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_GameInfo.AddBrokenAndDestroyedObject
// [0x00820002] 
struct AGHM_GameInfo_execAddBrokenAndDestroyedObject_Params
{
	struct FBrokenObjectCheckpointRecord               Record;                                           		// 0x0000 (0x003C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// struct FBrokenObjectCheckpointRecord               TmpRecord;                                        		// 0x003C (0x003C) [0x0000000000400000] (CPF_NeedCtorLink)
	// bool                                               bAlreadyExist : 1;                                		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GHMEngine.GHM_GameInfo.ClearBrokenAndDestroyedObject
// [0x00020002] 
struct AGHM_GameInfo_execClearBrokenAndDestroyedObject_Params
{
};

// Function GHMEngine.GHM_GameInfo.UpdateScreendoorFade
// [0x00020002] 
struct AGHM_GameInfo_execUpdateScreendoorFade_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// float                                              fTempValue;                                       		// 0x0004 (0x0004) [0x0000000000000000]               
	// float                                              fDelta;                                           		// 0x0008 (0x0004) [0x0000000000000000]               
	// int32_t                                            iIndex;                                           		// 0x000C (0x0004) [0x0000000000000000]               
	// struct FScriptDelegate                             Callback;                                         		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                             BadCallback;                                      		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_GameInfo.NativeDelegateTest
// [0x00020400] 
struct AGHM_GameInfo_execNativeDelegateTest_Params
{
	struct FScriptDelegate                             Delegate1;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Delegate2;                                        		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_GameInfo.OneParameterDelegate
// [0x00124000] 
struct AGHM_GameInfo_execOneParameterDelegate_Params
{
	class UObject*                                     Parameter;                                        		// 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_GameInfo.StopFadeUpdate
// [0x00020002] 
struct AGHM_GameInfo_execStopFadeUpdate_Params
{
	class UPrimitiveComponent*                         TargetComponent;                                  		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            iUpdate;                                          		// 0x000C (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_GameInfo.StartFadeUpdate
// [0x00824002] 
struct AGHM_GameInfo_execStartFadeUpdate_Params
{
	class UPrimitiveComponent*                         TargetComponent;                                  		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	float                                              fTargetOpacity;                                   		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              fFadeDuration;                                    		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FadeCompleteCallback;                             		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class UObject*                                     CallbackParameter;                                		// 0x0020 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FSFadeUpdate                                NewUpdate;                                        		// 0x002C (0x002C) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            iUpdate;                                          		// 0x0058 (0x0004) [0x0000000000000000]               
	// int32_t                                            iFound;                                           		// 0x005C (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_GameInfo.ScreenDoorFadeComplete
// [0x00124000] 
struct AGHM_GameInfo_execScreenDoorFadeComplete_Params
{
	class UObject*                                     Parameter;                                        		// 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_GameInfo.UpdateMaterialParameters
// [0x00020002] 
struct AGHM_GameInfo_execUpdateMaterialParameters_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// float                                              fTempValue;                                       		// 0x0004 (0x0004) [0x0000000000000000]               
	// float                                              fDelta;                                           		// 0x0008 (0x0004) [0x0000000000000000]               
	// int32_t                                            iMat;                                             		// 0x000C (0x0004) [0x0000000000000000]               
	// struct FScriptDelegate                             Callback;                                         		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_GameInfo.StopMaterialUpdate
// [0x00020002] 
struct AGHM_GameInfo_execStopMaterialUpdate_Params
{
	class UMaterialInstanceConstant*                   Material;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Parameter;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            iUpdate;                                          		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_GameInfo.StartMaterialUpdate
// [0x00824002] 
struct AGHM_GameInfo_execStartMaterialUpdate_Params
{
	class UMaterialInstanceConstant*                   Material;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Parameter;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              fDesiredValue;                                    		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              fDuration;                                        		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             UpdateCompleteCallback;                           		// 0x0018 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class UObject*                                     CallbackParameter;                                		// 0x0028 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FSMaterialUpdate                            NewUpdate;                                        		// 0x0034 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	// float                                              fCurrent;                                         		// 0x006C (0x0004) [0x0000000000000000]               
	// int32_t                                            iUpdate;                                          		// 0x0070 (0x0004) [0x0000000000000000]               
	// int32_t                                            iFound;                                           		// 0x0074 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_GameInfo.MaterialParameterUpdateComplete
// [0x00124000] 
struct AGHM_GameInfo_execMaterialParameterUpdateComplete_Params
{
	class UObject*                                     Parameter;                                        		// 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_GameInfo.Tick
// [0x00020802] 
struct AGHM_GameInfo_eventTick_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_GameInfo.CheckEnvironmentWind
// [0x00020802] 
struct AGHM_GameInfo_eventCheckEnvironmentWind_Params
{
	// class UGHM_MapInfoBase*                            MapInfo;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_GameInfo.PostCommitMapChange
// [0x00020802] 
struct AGHM_GameInfo_eventPostCommitMapChange_Params
{
};

// Function GHMEngine.GHM_GameInfo.PostBeginPlay
// [0x00020802] 
struct AGHM_GameInfo_eventPostBeginPlay_Params
{
};

// Function GHMEngine.GHM_GameViewportClient.DeProject
// [0x00420401] 
struct UGHM_GameViewportClient_execDeProject_Params
{
	class ULocalPlayer*                                LP;                                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   ScreenPos;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     WorldOrigin;                                      		// 0x0010 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     WorldDirection;                                   		// 0x001C (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_GameViewportClient.Project
// [0x00020401] 
struct UGHM_GameViewportClient_execProject_Params
{
	class ULocalPlayer*                                LP;                                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UCanvas*                                     Canvas;                                           		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      		// 0x001C (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_GameViewportClient.GameSessionEnded
// [0x00020802] 
struct UGHM_GameViewportClient_eventGameSessionEnded_Params
{
};

// Function GHMEngine.GHM_GameViewportClient.PostRender
// [0x00020802] 
struct UGHM_GameViewportClient_eventPostRender_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class APlayerController*                           PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]               
	// class AGHM_PlayerController*                       GHM_PC;                                           		// 0x0010 (0x0008) [0x0000000000000000]               
	// class AGHM_DebugMenuController*                    GHM_DMC;                                          		// 0x0018 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_GameViewportClient.CleanRawButtonEvents
// [0x00020400] 
struct UGHM_GameViewportClient_execCleanRawButtonEvents_Params
{
};

// Function GHMEngine.GHM_GFxManager.SetInputIgnore
// [0x00022400] 
struct UGHM_GFxManager_execSetInputIgnore_Params
{
	bool                                               _bFlag : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_HUD.PostRender
// [0x00020802] 
struct AGHM_HUD_eventPostRender_Params
{
};

// Function GHMEngine.GHM_HUD.RenderTexture_Render
// [0x00042401] 
struct AGHM_HUD_execRenderTexture_Render_Params
{
	class UCanvas*                                     pCanvas;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_HUD.SetRenderTexturePosition
// [0x00022400] 
struct AGHM_HUD_execSetRenderTexturePosition_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            RenderX;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            RenderY;                                          		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_HUD.SetRenderTextureVisible
// [0x00022400] 
struct AGHM_HUD_execSetRenderTextureVisible_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               Visible : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_HUD.SetRenderTexture
// [0x00026400] 
struct AGHM_HUD_execSetRenderTexture_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UTexture*                                    RenderTexture;                                    		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            RenderX;                                          		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            RenderY;                                          		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            RenderW;                                          		// 0x0014 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            RenderH;                                          		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_HUD.HideOnScreenDebugInfo
// [0x00020202] 
struct AGHM_HUD_execHideOnScreenDebugInfo_Params
{
};

// Function GHMEngine.GHM_HUD.ShowOnScreenDebugInfo
// [0x00020202] 
struct AGHM_HUD_execShowOnScreenDebugInfo_Params
{
};

// Function GHMEngine.GHM_HUD.DrawOnScreenDebugInfo
// [0x00020002] 
struct AGHM_HUD_execDrawOnScreenDebugInfo_Params
{
	class UCanvas*                                     _oCanvas;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      Str;                                              		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UGHM_GameEngine*                             oGameEngine;                                      		// 0x0018 (0x0008) [0x0000000000000000]               
	// class AGHM_GameInfo*                               oGameInfo;                                        		// 0x0020 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_HUD.Message
// [0x00024002] 
struct AGHM_HUD_execMessage_Params
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      msg;                                              		// 0x0008 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	struct FName                                       MsgType;                                          		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Lifetime;                                         		// 0x0020 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_HUD.UpdateLocalRevisionNumbers
// [0x00020400] 
struct AGHM_HUD_execUpdateLocalRevisionNumbers_Params
{
};

// Function GHMEngine.GHM_KActorSpawnable.StartParameterFade
// [0x00020102] 
struct AGHM_KActorSpawnable_execStartParameterFade_Params
{
	// class UMaterialInstanceConstant*                   MIC;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x0008 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_KActorSpawnable.RecycleInternal
// [0x00020902] 
struct AGHM_KActorSpawnable_eventRecycleInternal_Params
{
};

// Function GHMEngine.GHM_KActorSpawnable.StartScreenDoorFade
// [0x00020102] 
struct AGHM_KActorSpawnable_execStartScreenDoorFade_Params
{
};

// Function GHMEngine.GHM_KActorSpawnable.RecycleDelegate
// [0x00024002] 
struct AGHM_KActorSpawnable_execRecycleDelegate_Params
{
	class UObject*                                     Parameter;                                        		// 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_KActorSpawnable.Recycle
// [0x00020102] 
struct AGHM_KActorSpawnable_execRecycle_Params
{
};

// Function GHMEngine.GHM_MapInfoBase.InitBreakableManager
// [0x00020002] 
struct UGHM_MapInfoBase_execInitBreakableManager_Params
{
};

// Function GHMEngine.GHM_Pawn.OnTeleport
// [0x00820102] 
struct AGHM_Pawn_execOnTeleport_Params
{
	class USeqAct_Teleport*                            Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// struct FSkelControlListHead                        LH;                                               		// 0x0008 (0x0014) [0x0000000000400000] (CPF_NeedCtorLink)
	// class USkelControlBase*                            NextSkelControl;                                  		// 0x001C (0x0008) [0x0000000000000000]               
	// class UGHM_SkelControlTrailWithInertia*            PhysicSkelControl;                                		// 0x0024 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_Pawn.PlayMaterialInteractionFromHitInfo
// [0x00820002] 
struct AGHM_Pawn_execPlayMaterialInteractionFromHitInfo_Params
{
	struct FTraceHitInfo                               _oHitInfo;                                        		// 0x0000 (0x0028) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            _iSoundType;                                      		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            _iEffectType;                                     		// 0x002C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       _EffSocketName;                                   		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _vSoundLocation;                                  		// 0x0038 (0x000C) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            I;                                                		// 0x0044 (0x0004) [0x0000000000000000]               
	// int32_t                                            iLength;                                          		// 0x0048 (0x0004) [0x0000000000000000]               
	// class AGHM_PhysicalMaterialVolume*                 oVolume;                                          		// 0x004C (0x0008) [0x0000000000000000]               
	// class UGHM_PhysicalMaterialProperty*               MaterialProp;                                     		// 0x0054 (0x0008) [0x0000000000000000]               
	// struct FVector                                     vEffSocketLoc;                                    		// 0x005C (0x000C) [0x0000000000000000]               
	// struct FRotator                                    EffSocketRot;                                     		// 0x0068 (0x000C) [0x0000000000000000]               
	// class USoundCue*                                   oSoundCue;                                        		// 0x0074 (0x0008) [0x0000000000000000]               
	// class UParticleSystem*                             oParticleEffect;                                  		// 0x007C (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_Pawn.GHM_PlayFootStepSound
// [0x00820802] 
struct AGHM_Pawn_eventGHM_PlayFootStepSound_Params
{
	int32_t                                            _iFootDown;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            _iSoundType;                                      		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            _iEffectType;                                     		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       _EffSocketName;                                   		// 0x000C (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class AActor*                                      TraceActor;                                       		// 0x0014 (0x0008) [0x0000000000000000]               
	// struct FVector                                     out_HitLocation;                                  		// 0x001C (0x000C) [0x0000000000000000]               
	// struct FVector                                     out_HitNormal;                                    		// 0x0028 (0x000C) [0x0000000000000000]               
	// struct FTraceHitInfo                               oHitInfo;                                         		// 0x0034 (0x0028) [0x0000000000000000]               
	// struct FVector                                     vTraceStart;                                      		// 0x005C (0x000C) [0x0000000000000000]               
	// struct FVector                                     vTraceEnd;                                        		// 0x0068 (0x000C) [0x0000000000000000]               
	// struct FVector                                     vTraceExtent;                                     		// 0x0074 (0x000C) [0x0000000000000000]               
};

// Function GHMEngine.GHM_Pawn.GetPhysicalMaterialProp
// [0x00420002] 
struct AGHM_Pawn_execGetPhysicalMaterialProp_Params
{
	struct FTraceHitInfo                               _oHitInfo;                                        		// 0x0000 (0x0028) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UGHM_PhysicalMaterialProperty*               ReturnValue;                                      		// 0x0028 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UPhysicalMaterial*                           ParentPhysMaterial;                               		// 0x0030 (0x0008) [0x0000000000000000]               
	// int32_t                                            iNumElements;                                     		// 0x0038 (0x0004) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x003C (0x0004) [0x0000000000000000]               
	// class UMeshComponent*                              HitMesh;                                          		// 0x0040 (0x0008) [0x0000000004000000] (CPF_EditInline)
};

// Function GHMEngine.GHM_Pawn.FindPhysicalMaterialProperty
// [0x00020002] 
struct AGHM_Pawn_execFindPhysicalMaterialProperty_Params
{
	class UPhysicalMaterial*                           _oPhysMaterial;                                   		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGHM_PhysicalMaterialProperty*               ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UGHM_PhysicalMaterialProperty*               oPhysMaterialProp;                                		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_Pawn.MAT_SetSkelControlWeight
// [0x00020400] 
struct AGHM_Pawn_execMAT_SetSkelControlWeight_Params
{
	struct FName                                       SkelControlNodeName;                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              SkelControlWeight;                                		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_Pawn.SetSkelControlWeight
// [0x00020802] 
struct AGHM_Pawn_eventSetSkelControlWeight_Params
{
	struct FName                                       _SkelControlNodeName;                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              _fSkelControlWeight;                              		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerController.OnExternalUIExecute
// [0x00020002] 
struct AGHM_PlayerController_execOnExternalUIExecute_Params
{
	bool                                               bIsExecute : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_PlayerController.JustLoadedCheckPoint
// [0x00020002] 
struct AGHM_PlayerController_execJustLoadedCheckPoint_Params
{
};

// Function GHMEngine.GHM_PlayerController.Destroyed
// [0x00020802] 
struct AGHM_PlayerController_eventDestroyed_Params
{
};

// Function GHMEngine.GHM_PlayerController.PreBeginPlay
// [0x00020802] 
struct AGHM_PlayerController_eventPreBeginPlay_Params
{
};

// Function GHMEngine.GHM_PlayerController.GetHUDSub
// [0x00020003] 
struct AGHM_PlayerController_execGetHUDSub_Params
{
	class UGHM_HUDSub*                                 ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerController.GHM_GetDebugMenu
// [0x00020003] 
struct AGHM_PlayerController_execGHM_GetDebugMenu_Params
{
	class UGHM_DebugMenu*                              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerController.GetMessBoard
// [0x00020003] 
struct AGHM_PlayerController_execGetMessBoard_Params
{
	class UGHM_MessageBoard*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerController.UnregisterPlayerDataStores
// [0x00020102] 
struct AGHM_PlayerController_execUnregisterPlayerDataStores_Params
{
	// class ULocalPlayer*                                LP;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_PlayerController.RegisterCustomPlayerDataStores
// [0x00080102] 
struct AGHM_PlayerController_execRegisterCustomPlayerDataStores_Params
{
	// class ULocalPlayer*                                LP;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_PlayerController.OnProfileWriteComplete
// [0x00020002] 
struct AGHM_PlayerController_execOnProfileWriteComplete_Params
{
	uint8_t                                            LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_PlayerController.ClearSaveProfileDelegate
// [0x00020002] 
struct AGHM_PlayerController_execClearSaveProfileDelegate_Params
{
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UOnlinePlayerInterface*                      PlayerInt;                                        		// 0x0010 (0x0010) [0x0000000000000000]               
	// int32_t                                            ControllerId;                                     		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_PlayerController.SaveProfile
// [0x00024002] 
struct AGHM_PlayerController_execSaveProfile_Params
{
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0000 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	// class UOnlinePlayerInterface*                      PlayerInt;                                        		// 0x0010 (0x0010) [0x0000000000000000]               
	// int32_t                                            ControllerId;                                     		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_PlayerController.DebugLoadGameSettings
// [0x00020002] 
struct AGHM_PlayerController_execDebugLoadGameSettings_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UGHM_CheckPointSubSystem*                    CheckpointSub;                                    		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_PlayerController.LoadGameSettings
// [0x00020202] 
struct AGHM_PlayerController_execLoadGameSettings_Params
{
};

// Function GHMEngine.GHM_PlayerController.DebugSaveGameSettings
// [0x00020002] 
struct AGHM_PlayerController_execDebugSaveGameSettings_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UGHM_CheckPointSubSystem*                    CheckpointSub;                                    		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_PlayerController.SaveGameSettings
// [0x00020202] 
struct AGHM_PlayerController_execSaveGameSettings_Params
{
};

// Function GHMEngine.GHM_PlayerController.LoadChapterPoint
// [0x00020202] 
struct AGHM_PlayerController_execLoadChapterPoint_Params
{
};

// Function GHMEngine.GHM_PlayerController.DebugLoadCheckPoint
// [0x00024002] 
struct AGHM_PlayerController_execDebugLoadCheckPoint_Params
{
	bool                                               bLoadChapterPoint : 1;                            		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UGHM_CheckPointSubSystem*                    CheckpointSub;                                    		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_PlayerController.LoadCheckpoint
// [0x00024202] 
struct AGHM_PlayerController_execLoadCheckpoint_Params
{
	bool                                               bLoadChapterPoint : 1;                            		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_PlayerController.SaveChapterPoint
// [0x00024202] 
struct AGHM_PlayerController_execSaveChapterPoint_Params
{
	bool                                               bAsyncSaveKismet : 1;                             		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_PlayerController.DebugSaveCheckpoint
// [0x00024002] 
struct AGHM_PlayerController_execDebugSaveCheckpoint_Params
{
	bool                                               bAsyncSaveKismet : 1;                             		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               bCurrentIsChapterPoint : 1;                       		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UGHM_CheckPointSubSystem*                    CheckpointSub;                                    		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_PlayerController.SaveCheckpoint
// [0x00024202] 
struct AGHM_PlayerController_execSaveCheckpoint_Params
{
	bool                                               bAsyncSaveKismet : 1;                             		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_PlayerController.OnCheckPoint
// [0x00020002] 
struct AGHM_PlayerController_execOnCheckPoint_Params
{
	class UGHM_SeqAct_Checkpoint*                      Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class UGHM_CheckPointSubSystem*                    CheckpointSub;                                    		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_PlayerController.NotifyLoginChangeReset
// [0x00020000] 
struct AGHM_PlayerController_execNotifyLoginChangeReset_Params
{
};

// Function GHMEngine.GHM_PlayerController.RegisterLatentAction
// [0x00020000] 
struct AGHM_PlayerController_execRegisterLatentAction_Params
{
	class USeqAct_Latent*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerController.OnSetRichPresence
// [0x00020102] 
struct AGHM_PlayerController_execOnSetRichPresence_Params
{
	class UGHM_SeqAct_SetRichPresence*                 in_SeqAct;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerController.ClientSetRichPresenceString
// [0x010201C2] 
struct AGHM_PlayerController_execClientSetRichPresenceString_Params
{
	int32_t                                            PresenceID;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerController.SetRichPresenceString
// [0x00020102] 
struct AGHM_PlayerController_execSetRichPresenceString_Params
{
	int32_t                                            StringId;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class ULocalPlayer*                                LP;                                               		// 0x0004 (0x0008) [0x0000000000000000]               
	// TArray<struct FLocalizedStringSetting>             StringSettings;                                   		// 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<struct FSettingsProperty>                   Properties;                                       		// 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            PresenceID;                                       		// 0x002C (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_PlayerController.GetRichPresenceStringSettingAndPropertyAndRichPresenceId
// [0x00420002] 
struct AGHM_PlayerController_execGetRichPresenceStringSettingAndPropertyAndRichPresenceId_Params
{
	int32_t                                            StringId;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	TArray<struct FLocalizedStringSetting>             StringSettings;                                   		// 0x0004 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	TArray<struct FSettingsProperty>                   Properties;                                       		// 0x0014 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerController.InitInputSystem
// [0x00024802] 
struct AGHM_PlayerController_eventInitInputSystem_Params
{
	bool                                               bDevForceFeedback : 1;                            		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// class ULocalPlayer*                                LP;                                               		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_PlayerController.Kismet_ClientPauseSound
// [0x010209C2] 
struct AGHM_PlayerController_eventKismet_ClientPauseSound_Params
{
	class USoundCue*                                   ASound;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      SourceActor;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bPauseState : 1;                                  		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_PlayerController.Kismet_ClientInitialVolSetSound
// [0x010209C2] 
struct AGHM_PlayerController_eventKismet_ClientInitialVolSetSound_Params
{
	class USoundCue*                                   ASound;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      SourceActor;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              inNewVolume;                                      		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerController.Kismet_ClientVolFadeOutSound
// [0x010209C2] 
struct AGHM_PlayerController_eventKismet_ClientVolFadeOutSound_Params
{
	class USoundCue*                                   ASound;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      SourceActor;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              FadeOutTime;                                      		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               bIgnoreFade : 1;                                  		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// float                                              fInterpolationTime;                               		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_PlayerController.Kismet_ClientVolFadeInSound
// [0x010209C2] 
struct AGHM_PlayerController_eventKismet_ClientVolFadeInSound_Params
{
	class USoundCue*                                   ASound;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      SourceActor;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              VolumeMultiplier;                                 		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PitchMultiplier;                                  		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              FadeInTime;                                       		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               bSuppressSubtitles : 1;                           		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               bSuppressSpatialization : 1;                      		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               bIgnoreFade : 1;                                  		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// float                                              fInterpolationTime;                               		// 0x0028 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_PlayerController.Kismet_ClientStopSoundDeferred
// [0x010209C2] 
struct AGHM_PlayerController_eventKismet_ClientStopSoundDeferred_Params
{
	class USoundCue*                                   ASound;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      SourceActor;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              FadeOutTime;                                      		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class UAudioComponent*                             AC;                                               		// 0x0014 (0x0008) [0x0000000004000000] (CPF_EditInline)
	// class UAudioComponent*                             CheckAC;                                          		// 0x001C (0x0008) [0x0000000004000000] (CPF_EditInline)
};

// Function GHMEngine.GHM_PlayerController.Kismet_ClientPlaySound
// [0x010249C2] 
struct AGHM_PlayerController_eventKismet_ClientPlaySound_Params
{
	class USoundCue*                                   ASound;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      SourceActor;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              VolumeMultiplier;                                 		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PitchMultiplier;                                  		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              FadeInTime;                                       		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               bSuppressSubtitles : 1;                           		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               bSuppressSpatialization : 1;                      		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int32_t                                            inUserData;                                       		// 0x0024 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class FString                                      inOffsetMarkerLabel;                              		// 0x0028 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      inEndMarkerLabel;                                 		// 0x0038 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class UAudioComponent*                             ReturnValue;                                      		// 0x0048 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
	// class UAudioComponent*                             AC;                                               		// 0x0050 (0x0008) [0x0000000004000000] (CPF_EditInline)
};

// Function GHMEngine.GHM_PlayerController.IsCurrentMatineeSkippable
// [0x00020002] 
struct AGHM_PlayerController_execIsCurrentMatineeSkippable_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// TArray<class USequenceObject*>                     aAllMatinees;                                     		// 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class USeqAct_Interp*                              Matinee;                                          		// 0x0014 (0x0008) [0x0000000000000000]               
	// class USequence*                                   GameSeq;                                          		// 0x001C (0x0008) [0x0000000000000000]               
	// int32_t                                            Idx;                                              		// 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                            GroupIdx;                                         		// 0x0028 (0x0004) [0x0000000000000000]               
	// float                                              fRightBeforeEndTime;                              		// 0x002C (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_PlayerController.IsInCinematicForSkipMatinee
// [0x00020002] 
struct AGHM_PlayerController_execIsInCinematicForSkipMatinee_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerController.CancelMatinee
// [0x00020002] 
struct AGHM_PlayerController_execCancelMatinee_Params
{
	// TArray<class USequenceObject*>                     aAllMatinees;                                     		// 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class USeqAct_Interp*                              Matinee;                                          		// 0x0010 (0x0008) [0x0000000000000000]               
	// class USequence*                                   GameSeq;                                          		// 0x0018 (0x0008) [0x0000000000000000]               
	// int32_t                                            Idx;                                              		// 0x0020 (0x0004) [0x0000000000000000]               
	// int32_t                                            GroupIdx;                                         		// 0x0024 (0x0004) [0x0000000000000000]               
	// float                                              fRightBeforeEndTime;                              		// 0x0028 (0x0004) [0x0000000000000000]               
	// bool                                               bMatineeWasCancelled : 1;                         		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GHMEngine.GHM_PlayerController.OnSetSoundMode
// [0x00020002] 
struct AGHM_PlayerController_execOnSetSoundMode_Params
{
	class USeqAct_SetSoundMode*                        Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class UAudioDevice*                                Audio;                                            		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_PlayerController.OnRegistSoundModeExclusive
// [0x00820002] 
struct AGHM_PlayerController_execOnRegistSoundModeExclusive_Params
{
	class UGHM_SeqAct_RegistSoundModeExclusive*        Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// struct FSSoundMode_ExclusiveInfo                   SEI;                                              		// 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FName                                       ignoreSoundModeName;                              		// 0x0020 (0x0008) [0x0000000000000000]               
	// int32_t                                            Index;                                            		// 0x0028 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_PlayerController.IsIgnoreSoundModeChange
// [0x00020002] 
struct AGHM_PlayerController_execIsIgnoreSoundModeChange_Params
{
	struct FName                                       InSoundModeName;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UAudioDevice*                                Audio;                                            		// 0x000C (0x0008) [0x0000000000000000]               
	// int32_t                                            Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            indexsub;                                         		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_PlayerController.GHMSetSoundMode
// [0x00024102] 
struct AGHM_PlayerController_execGHMSetSoundMode_Params
{
	struct FName                                       InSoundModeName;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bResetAllClassProperties : 1;                     		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               bTopPriority : 1;                                 		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_PlayerController.RestartLevel
// [0x00020202] 
struct AGHM_PlayerController_execRestartLevel_Params
{
};

// Function GHMEngine.GHM_PlayerController.PostBeginPlay
// [0x00020902] 
struct AGHM_PlayerController_eventPostBeginPlay_Params
{
};

// Function GHMEngine.GHM_PlayerController.bUsingRuntimeTool
// [0x00022401] 
struct AGHM_PlayerController_execbUsingRuntimeTool_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.BackInputText
// [0x00040401] 
struct UGHM_PlayerInput_execBackInputText_Params
{
};

// Function GHMEngine.GHM_PlayerInput.AddInputText
// [0x00040401] 
struct UGHM_PlayerInput_execAddInputText_Params
{
	class FString                                      Character;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.IsMouseLClickEnable
// [0x00020400] 
struct UGHM_PlayerInput_execIsMouseLClickEnable_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.UILStickRight
// [0x00020400] 
struct UGHM_PlayerInput_execUILStickRight_Params
{
};

// Function GHMEngine.GHM_PlayerInput.UILStickLeft
// [0x00020400] 
struct UGHM_PlayerInput_execUILStickLeft_Params
{
};

// Function GHMEngine.GHM_PlayerInput.UILStickDown
// [0x00020400] 
struct UGHM_PlayerInput_execUILStickDown_Params
{
};

// Function GHMEngine.GHM_PlayerInput.UILStickUp
// [0x00020400] 
struct UGHM_PlayerInput_execUILStickUp_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PlusEventCtrl
// [0x00020400] 
struct UGHM_PlayerInput_execPlusEventCtrl_Params
{
	bool                                               Press : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint8_t                                            btn;                                              		// 0x0004 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerInput.IsWheelDown
// [0x00020400] 
struct UGHM_PlayerInput_execIsWheelDown_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.IsWheelUp
// [0x00020400] 
struct UGHM_PlayerInput_execIsWheelUp_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.IsWalkCtrl
// [0x00020400] 
struct UGHM_PlayerInput_execIsWalkCtrl_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.SetWalkCtrl
// [0x00020400] 
struct UGHM_PlayerInput_execSetWalkCtrl_Params
{
	bool                                               bWalk : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_PlayerInput.MoveRight
// [0x00020400] 
struct UGHM_PlayerInput_execMoveRight_Params
{
};

// Function GHMEngine.GHM_PlayerInput.MoveLeft
// [0x00020400] 
struct UGHM_PlayerInput_execMoveLeft_Params
{
};

// Function GHMEngine.GHM_PlayerInput.MoveDown
// [0x00020400] 
struct UGHM_PlayerInput_execMoveDown_Params
{
};

// Function GHMEngine.GHM_PlayerInput.MoveUp
// [0x00020400] 
struct UGHM_PlayerInput_execMoveUp_Params
{
};

// Function GHMEngine.GHM_PlayerInput.BtnEventCtrl
// [0x00044401] 
struct UGHM_PlayerInput_execBtnEventCtrl_Params
{
	bool                                               Press : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               fix : 1;                                          		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int32_t                                            pad1;                                             		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            pad2;                                             		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_PlayerInput.DoBtnUIEvent
// [0x00040401] 
struct UGHM_PlayerInput_execDoBtnUIEvent_Params
{
	uint8_t                                            Link;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               Press : 1;                                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_PlayerInput.DoBtnPlayerEvent
// [0x00040401] 
struct UGHM_PlayerInput_execDoBtnPlayerEvent_Params
{
	uint8_t                                            Link;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               Press : 1;                                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_PlayerInput.ReleaseMouseInner
// [0x00020400] 
struct UGHM_PlayerInput_execReleaseMouseInner_Params
{
	uint8_t                                            mouse;                                            		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerInput.PressMouseInner
// [0x00020400] 
struct UGHM_PlayerInput_execPressMouseInner_Params
{
	uint8_t                                            mouse;                                            		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerInput.KeyToBtnEvent
// [0x00040401] 
struct UGHM_PlayerInput_execKeyToBtnEvent_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               Press : 1;                                        		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_PlayerInput.ReleaseKeyInner
// [0x00020400] 
struct UGHM_PlayerInput_execReleaseKeyInner_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.PressKeyInner
// [0x00020400] 
struct UGHM_PlayerInput_execPressKeyInner_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.ReleaseShiftKeyInner
// [0x00020400] 
struct UGHM_PlayerInput_execReleaseShiftKeyInner_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.PressShiftKeyInner
// [0x00020400] 
struct UGHM_PlayerInput_execPressShiftKeyInner_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.ReleaseNumberKeyInner
// [0x00040401] 
struct UGHM_PlayerInput_execReleaseNumberKeyInner_Params
{
	int32_t                                            Num;                                              		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerInput.PressNumberKeyInner
// [0x00040401] 
struct UGHM_PlayerInput_execPressNumberKeyInner_Params
{
	int32_t                                            Num;                                              		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerInput.ReleaseAlphabetKeyInner
// [0x00020400] 
struct UGHM_PlayerInput_execReleaseAlphabetKeyInner_Params
{
	class FString                                      S;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      L;                                                		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.PressAlphabetKeyInner
// [0x00020400] 
struct UGHM_PlayerInput_execPressAlphabetKeyInner_Params
{
	class FString                                      S;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      L;                                                		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.Update
// [0x00020400] 
struct UGHM_PlayerInput_execUpdate_Params
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerInput.Release
// [0x00020400] 
struct UGHM_PlayerInput_execRelease_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerInput.Press
// [0x00020400] 
struct UGHM_PlayerInput_execPress_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerInput.GetBitwisePadDef
// [0x00020400] 
struct UGHM_PlayerInput_execGetBitwisePadDef_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.IsOnRepeat
// [0x00020400] 
struct UGHM_PlayerInput_execIsOnRepeat_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.IsOnRelease
// [0x00020400] 
struct UGHM_PlayerInput_execIsOnRelease_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.IsOnPress
// [0x00020400] 
struct UGHM_PlayerInput_execIsOnPress_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.IsReleased
// [0x00020400] 
struct UGHM_PlayerInput_execIsReleased_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.IsPressed
// [0x00020400] 
struct UGHM_PlayerInput_execIsPressed_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.IsShift
// [0x00020002] 
struct UGHM_PlayerInput_execIsShift_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.ReleaseKeyCheck
// [0x00020202] 
struct UGHM_PlayerInput_execReleaseKeyCheck_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressKeyCheck
// [0x00020202] 
struct UGHM_PlayerInput_execPressKeyCheck_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressNoEffect
// [0x00020200] 
struct UGHM_PlayerInput_execPressNoEffect_Params
{
};

// Function GHMEngine.GHM_PlayerInput.MouseWheelDown
// [0x00020202] 
struct UGHM_PlayerInput_execMouseWheelDown_Params
{
};

// Function GHMEngine.GHM_PlayerInput.MouseWheelUp
// [0x00020202] 
struct UGHM_PlayerInput_execMouseWheelUp_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleaseMouseEx2
// [0x00020202] 
struct UGHM_PlayerInput_execReleaseMouseEx2_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressMouseEx2
// [0x00020202] 
struct UGHM_PlayerInput_execPressMouseEx2_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleaseMouseEx1
// [0x00020202] 
struct UGHM_PlayerInput_execReleaseMouseEx1_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressMouseEx1
// [0x00020202] 
struct UGHM_PlayerInput_execPressMouseEx1_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleaseMouseC
// [0x00020202] 
struct UGHM_PlayerInput_execReleaseMouseC_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressMouseC
// [0x00020202] 
struct UGHM_PlayerInput_execPressMouseC_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleaseMouseR
// [0x00020202] 
struct UGHM_PlayerInput_execReleaseMouseR_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressMouseR
// [0x00020202] 
struct UGHM_PlayerInput_execPressMouseR_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleaseMouseL
// [0x00020202] 
struct UGHM_PlayerInput_execReleaseMouseL_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressMouseL
// [0x00020202] 
struct UGHM_PlayerInput_execPressMouseL_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleaseKey
// [0x00020202] 
struct UGHM_PlayerInput_execReleaseKey_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.PressKey
// [0x00020202] 
struct UGHM_PlayerInput_execPressKey_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.ReleaseUnderbarKey
// [0x00020202] 
struct UGHM_PlayerInput_execReleaseUnderbarKey_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.ReleaseMinusKey
// [0x00020202] 
struct UGHM_PlayerInput_execReleaseMinusKey_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.ReleaseEscapeKey
// [0x00020202] 
struct UGHM_PlayerInput_execReleaseEscapeKey_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleaseEnterKey
// [0x00020202] 
struct UGHM_PlayerInput_execReleaseEnterKey_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleaseBackKey
// [0x00020202] 
struct UGHM_PlayerInput_execReleaseBackKey_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleaseShiftKey
// [0x00020202] 
struct UGHM_PlayerInput_execReleaseShiftKey_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.ReleaseNumberKey
// [0x00020202] 
struct UGHM_PlayerInput_execReleaseNumberKey_Params
{
	int32_t                                            Num;                                              		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerInput.ReleaseAlphabetKey
// [0x00020202] 
struct UGHM_PlayerInput_execReleaseAlphabetKey_Params
{
	class FString                                      S;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      L;                                                		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.PressUnderbarKey
// [0x00020202] 
struct UGHM_PlayerInput_execPressUnderbarKey_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.PressMinusKey
// [0x00020202] 
struct UGHM_PlayerInput_execPressMinusKey_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.PressEscapeKey
// [0x00020202] 
struct UGHM_PlayerInput_execPressEscapeKey_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressEnterKey
// [0x00020202] 
struct UGHM_PlayerInput_execPressEnterKey_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressBackKey
// [0x00020202] 
struct UGHM_PlayerInput_execPressBackKey_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressShiftKey
// [0x00020202] 
struct UGHM_PlayerInput_execPressShiftKey_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.PressNumberKey
// [0x00020202] 
struct UGHM_PlayerInput_execPressNumberKey_Params
{
	int32_t                                            Num;                                              		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerInput.PressAlphabetKey
// [0x00020202] 
struct UGHM_PlayerInput_execPressAlphabetKey_Params
{
	class FString                                      S;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      L;                                                		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadBack
// [0x00020202] 
struct UGHM_PlayerInput_execReleasePadBack_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadStart
// [0x00020202] 
struct UGHM_PlayerInput_execReleasePadStart_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadRightThumbstick
// [0x00020202] 
struct UGHM_PlayerInput_execReleasePadRightThumbstick_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadLeftThumbstick
// [0x00020202] 
struct UGHM_PlayerInput_execReleasePadLeftThumbstick_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadRightTrigger
// [0x00020202] 
struct UGHM_PlayerInput_execReleasePadRightTrigger_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadLeftTrigger
// [0x00020202] 
struct UGHM_PlayerInput_execReleasePadLeftTrigger_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadRightShoulder
// [0x00020202] 
struct UGHM_PlayerInput_execReleasePadRightShoulder_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadLeftShoulder
// [0x00020202] 
struct UGHM_PlayerInput_execReleasePadLeftShoulder_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadY
// [0x00020202] 
struct UGHM_PlayerInput_execReleasePadY_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadX
// [0x00020202] 
struct UGHM_PlayerInput_execReleasePadX_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadB
// [0x00020202] 
struct UGHM_PlayerInput_execReleasePadB_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadA
// [0x00020202] 
struct UGHM_PlayerInput_execReleasePadA_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadRight
// [0x00020202] 
struct UGHM_PlayerInput_execReleasePadRight_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadLeft
// [0x00020202] 
struct UGHM_PlayerInput_execReleasePadLeft_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadDown
// [0x00020202] 
struct UGHM_PlayerInput_execReleasePadDown_Params
{
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadUp
// [0x00020202] 
struct UGHM_PlayerInput_execReleasePadUp_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressPadBack
// [0x00020202] 
struct UGHM_PlayerInput_execPressPadBack_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressPadStart
// [0x00020202] 
struct UGHM_PlayerInput_execPressPadStart_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressPadRightThumbstick
// [0x00020202] 
struct UGHM_PlayerInput_execPressPadRightThumbstick_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressPadLeftThumbstick
// [0x00020202] 
struct UGHM_PlayerInput_execPressPadLeftThumbstick_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressPadRightTrigger
// [0x00020202] 
struct UGHM_PlayerInput_execPressPadRightTrigger_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressPadLeftTrigger
// [0x00020202] 
struct UGHM_PlayerInput_execPressPadLeftTrigger_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressPadRightShoulder
// [0x00020202] 
struct UGHM_PlayerInput_execPressPadRightShoulder_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressPadLeftShoulder
// [0x00020202] 
struct UGHM_PlayerInput_execPressPadLeftShoulder_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressPadY
// [0x00020202] 
struct UGHM_PlayerInput_execPressPadY_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressPadX
// [0x00020202] 
struct UGHM_PlayerInput_execPressPadX_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressPadB
// [0x00020202] 
struct UGHM_PlayerInput_execPressPadB_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressPadA
// [0x00020202] 
struct UGHM_PlayerInput_execPressPadA_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressPadRight
// [0x00020202] 
struct UGHM_PlayerInput_execPressPadRight_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressPadLeft
// [0x00020202] 
struct UGHM_PlayerInput_execPressPadLeft_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressPadDown
// [0x00020202] 
struct UGHM_PlayerInput_execPressPadDown_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PressPadUp
// [0x00020202] 
struct UGHM_PlayerInput_execPressPadUp_Params
{
};

// Function GHMEngine.GHM_PlayerInput.SetMapCtrl
// [0x00020400] 
struct UGHM_PlayerInput_execSetMapCtrl_Params
{
	bool                                               Enable : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_PlayerInput.IsMapCtrl
// [0x00020400] 
struct UGHM_PlayerInput_execIsMapCtrl_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.SetUIKeyCtrlDisableEx
// [0x00020400] 
struct UGHM_PlayerInput_execSetUIKeyCtrlDisableEx_Params
{
	bool                                               Disable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_PlayerInput.SetUIKeyCtrlDisable
// [0x00020400] 
struct UGHM_PlayerInput_execSetUIKeyCtrlDisable_Params
{
	bool                                               Disable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_PlayerInput.IsUIKeyCtrlDisable
// [0x00020400] 
struct UGHM_PlayerInput_execIsUIKeyCtrlDisable_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.IsPlayerMoveDisable
// [0x00020400] 
struct UGHM_PlayerInput_execIsPlayerMoveDisable_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.SetPlayerKeyCtrlDisable
// [0x00020400] 
struct UGHM_PlayerInput_execSetPlayerKeyCtrlDisable_Params
{
	bool                                               Disable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_PlayerInput.IsPlayerKeyCtrlDisable
// [0x00020400] 
struct UGHM_PlayerInput_execIsPlayerKeyCtrlDisable_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.IsActiveTextInput
// [0x00020400] 
struct UGHM_PlayerInput_execIsActiveTextInput_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.EnterEnable
// [0x00020002] 
struct UGHM_PlayerInput_execEnterEnable_Params
{
};

// Function GHMEngine.GHM_PlayerInput.IsEnterEnable
// [0x00020002] 
struct UGHM_PlayerInput_execIsEnterEnable_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.GetInputText
// [0x00020002] 
struct UGHM_PlayerInput_execGetInputText_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.ClearInputText
// [0x00020002] 
struct UGHM_PlayerInput_execClearInputText_Params
{
};

// Function GHMEngine.GHM_PlayerInput.CancelTextInput
// [0x00020002] 
struct UGHM_PlayerInput_execCancelTextInput_Params
{
};

// Function GHMEngine.GHM_PlayerInput.EndTextInput
// [0x00020002] 
struct UGHM_PlayerInput_execEndTextInput_Params
{
};

// Function GHMEngine.GHM_PlayerInput.StartTextInput
// [0x00024002] 
struct UGHM_PlayerInput_execStartTextInput_Params
{
	int32_t                                            Max;                                              		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class FString                                      Text;                                             		// 0x0004 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.GetUIMouseFromDef
// [0x00020400] 
struct UGHM_PlayerInput_execGetUIMouseFromDef_Params
{
	uint8_t                                            Link;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.GetMouseFromDef
// [0x00020400] 
struct UGHM_PlayerInput_execGetMouseFromDef_Params
{
	uint8_t                                            Link;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.GetUIKeyFromDef
// [0x00020400] 
struct UGHM_PlayerInput_execGetUIKeyFromDef_Params
{
	uint8_t                                            Link;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.GetSecondKeyFromDef
// [0x00020400] 
struct UGHM_PlayerInput_execGetSecondKeyFromDef_Params
{
	uint8_t                                            Link;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.GetPrimeKeyFromDef
// [0x00020400] 
struct UGHM_PlayerInput_execGetPrimeKeyFromDef_Params
{
	uint8_t                                            Link;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.GetKeyListMax
// [0x00020400] 
struct UGHM_PlayerInput_execGetKeyListMax_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.GetKeyIndex
// [0x00020400] 
struct UGHM_PlayerInput_execGetKeyIndex_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.ClearKeySetting
// [0x00024400] 
struct UGHM_PlayerInput_execClearKeySetting_Params
{
	bool                                               Init : 1;                                         		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_PlayerInput.SetUIMouseBtnMap
// [0x00020400] 
struct UGHM_PlayerInput_execSetUIMouseBtnMap_Params
{
	uint8_t                                            mouse;                                            		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Link;                                             		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerInput.SetPlayerMouseBtnMap
// [0x00020400] 
struct UGHM_PlayerInput_execSetPlayerMouseBtnMap_Params
{
	uint8_t                                            mouse;                                            		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Link;                                             		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerInput.SetUISecondKeyBtnMap
// [0x00020400] 
struct UGHM_PlayerInput_execSetUISecondKeyBtnMap_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            Link;                                             		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerInput.SetUIPrimeKeyBtnMap
// [0x00024400] 
struct UGHM_PlayerInput_execSetUIPrimeKeyBtnMap_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            Link;                                             		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               second : 1;                                       		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_PlayerInput.SetPlayerSecondKeyBtnMap
// [0x00020400] 
struct UGHM_PlayerInput_execSetPlayerSecondKeyBtnMap_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            Link;                                             		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerInput.SetPlayerPrimeKeyBtnMap
// [0x00024400] 
struct UGHM_PlayerInput_execSetPlayerPrimeKeyBtnMap_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            Link;                                             		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               second : 1;                                       		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_PlayerInput.GetKeyConfigFromBtn
// [0x00020400] 
struct UGHM_PlayerInput_execGetKeyConfigFromBtn_Params
{
	uint8_t                                            inBtn;                                            		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.GetBtnFromKeyConfig
// [0x00020400] 
struct UGHM_PlayerInput_execGetBtnFromKeyConfig_Params
{
	uint8_t                                            Link;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.ConvertKeyConfigToEnginePadDef
// [0x00020400] 
struct UGHM_PlayerInput_execConvertKeyConfigToEnginePadDef_Params
{
	uint8_t                                            inBtn;                                            		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.CheckDuplicateKeyConfig
// [0x00020400] 
struct UGHM_PlayerInput_execCheckDuplicateKeyConfig_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInput.SetKeyConfig
// [0x00020400] 
struct UGHM_PlayerInput_execSetKeyConfig_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Link;                                             		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerInput.SetupKeyName
// [0x00040401] 
struct UGHM_PlayerInput_execSetupKeyName_Params
{
	class FString                                      Key;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_PlayerInput.InitKeyMap
// [0x00040401] 
struct UGHM_PlayerInput_execInitKeyMap_Params
{
};

// Function GHMEngine.GHM_PlayerInput.InitKeyConfig
// [0x00020400] 
struct UGHM_PlayerInput_execInitKeyConfig_Params
{
};

// Function GHMEngine.GHM_PlayerInput.InitInputSystem
// [0x00020400] 
struct UGHM_PlayerInput_execInitInputSystem_Params
{
};

// Function GHMEngine.GHM_PlayerInput.PlayerInput
// [0x00020802] 
struct UGHM_PlayerInput_eventPlayerInput_Params
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerInput.IsCircleToAccept
// [0x00020400] 
struct UGHM_PlayerInput_execIsCircleToAccept_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInputRecorder.LoadFromDisk
// [0x00020401] 
struct UGHM_PlayerInputRecorder_execLoadFromDisk_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInputRecorder.SaveToDisk
// [0x00020401] 
struct UGHM_PlayerInputRecorder_execSaveToDisk_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInputRecorder.ReplayInputs
// [0x00020401] 
struct UGHM_PlayerInputRecorder_execReplayInputs_Params
{
};

// Function GHMEngine.GHM_PlayerInputRecorder.RecordInputs
// [0x00020401] 
struct UGHM_PlayerInputRecorder_execRecordInputs_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerInputRecorder.DeleteInputs
// [0x00020401] 
struct UGHM_PlayerInputRecorder_execDeleteInputs_Params
{
};

// Function GHMEngine.GHM_PlayerInputRecorder.AllocateInputs
// [0x00020401] 
struct UGHM_PlayerInputRecorder_execAllocateInputs_Params
{
	int32_t                                            NumInputs;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerInputRecorder.PlayerInput
// [0x00020802] 
struct UGHM_PlayerInputRecorder_eventPlayerInput_Params
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_PlayerInputRecorder.StopPlayback
// [0x00020002] 
struct UGHM_PlayerInputRecorder_execStopPlayback_Params
{
};

// Function GHMEngine.GHM_PlayerInputRecorder.StartPlayback
// [0x00020002] 
struct UGHM_PlayerInputRecorder_execStartPlayback_Params
{
};

// Function GHMEngine.GHM_PlayerInputRecorder.StopRecording
// [0x00020002] 
struct UGHM_PlayerInputRecorder_execStopRecording_Params
{
};

// Function GHMEngine.GHM_PlayerInputRecorder.StartRecording
// [0x00020002] 
struct UGHM_PlayerInputRecorder_execStartRecording_Params
{
};

// Function GHMEngine.GHM_PlayerInputRecorder.IsReplayingInputs
// [0x00020002] 
struct UGHM_PlayerInputRecorder_execIsReplayingInputs_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInputRecorder.IsRecordingInputs
// [0x00020002] 
struct UGHM_PlayerInputRecorder_execIsRecordingInputs_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PlayerInputRecorder.Initialized
// [0x00020002] 
struct UGHM_PlayerInputRecorder_execInitialized_Params
{
};

// Function GHMEngine.GHM_SectionVolume.Destroyed
// [0x00020800] 
struct AGHM_SectionVolume_eventDestroyed_Params
{
};

// Function GHMEngine.GHM_SectionVolume.UnTouch
// [0x00020800] 
struct AGHM_SectionVolume_eventUnTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SectionVolume.Touch
// [0x00020802] 
struct AGHM_SectionVolume_eventTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
	// class APlayerController*                           PC;                                               		// 0x0028 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_SeqAct_Checkpoint.Activated
// [0x00020802] 
struct UGHM_SeqAct_Checkpoint_eventActivated_Params
{
	// class AGHM_PlayerController*                       PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_SeqAct_Checkpoint.PreActivated
// [0x00020800] 
struct UGHM_SeqAct_Checkpoint_eventPreActivated_Params
{
};

// Function GHMEngine.GHM_SeqAct_FrameDelay.ResetDelayActive
// [0x00020400] 
struct UGHM_SeqAct_FrameDelay_execResetDelayActive_Params
{
};

// Function GHMEngine.GHM_SeqAct_FrameDelay.Reset
// [0x00020002] 
struct UGHM_SeqAct_FrameDelay_execReset_Params
{
};

// Function GHMEngine.GHM_SeqAct_ToggleCastShadows.ToggleCastShadows
// [0x00420400] 
struct UGHM_SeqAct_ToggleCastShadows_execToggleCastShadows_Params
{
	TArray<class AActor*>                              ActorList;                                        		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_SeqAct_ToggleCastShadows.SetCastShadows
// [0x00420400] 
struct UGHM_SeqAct_ToggleCastShadows_execSetCastShadows_Params
{
	TArray<class AActor*>                              ActorList;                                        		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               bCastShadows : 1;                                 		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_SeqAct_ToggleCastShadows.Activated
// [0x00820802] 
struct UGHM_SeqAct_ToggleCastShadows_eventActivated_Params
{
	// class UObject*                                     Obj;                                              		// 0x0000 (0x0008) [0x0000000000000000]               
	// class USequenceVariable*                           ObjVar;                                           		// 0x0008 (0x0008) [0x0000000000000000]               
	// class USeqVar_ObjectList*                          ObjList;                                          		// 0x0010 (0x0008) [0x0000000000000000]               
	// struct FSeqVarLink                                 SVL;                                              		// 0x0018 (0x0058) [0x0000000000400000] (CPF_NeedCtorLink)
	// TArray<class AActor*>                              ActorList;                                        		// 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_SubTitle_Native.UpDateSubTitle
// [0x00020000] 
struct UGHM_SubTitle_Native_execUpDateSubTitle_Params
{
};

// Function GHMEngine.GHM_SubTitle_Native.Initializ
// [0x00020002] 
struct UGHM_SubTitle_Native_execInitializ_Params
{
};

// Function GHMEngine.GHM_SubTitle_Native.SetSkipButtonTex
// [0x00022400] 
struct UGHM_SubTitle_Native_execSetSkipButtonTex_Params
{
	class UTexture*                                    Tex;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            X;                                                		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Y;                                                		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            W;                                                		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            H;                                                		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SubTitle_Native.SetSubtitleTex
// [0x00022400] 
struct UGHM_SubTitle_Native_execSetSubtitleTex_Params
{
	class UTexture*                                    Tex;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            X;                                                		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Y;                                                		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            W;                                                		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            H;                                                		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SubTitle_Native.SetSubTitleMovieTex
// [0x00022400] 
struct UGHM_SubTitle_Native_execSetSubTitleMovieTex_Params
{
	class UTexture*                                    Tex;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            psY;                                              		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SubTitle_Native.AttachSubtitleManager
// [0x00022400] 
struct UGHM_SubTitle_Native_execAttachSubtitleManager_Params
{
	bool                                               flag : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_SubTitle_Native.GetLastSubtitleString
// [0x00022400] 
struct UGHM_SubTitle_Native_execGetLastSubtitleString_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_AnimNodeBlendByProperty.ReBecomeRelevant
// [0x00020400] 
struct UGHM_AnimNodeBlendByProperty_execReBecomeRelevant_Params
{
};

// Function GHMEngine.GHM_AnimNodeChain.PlayAnimation
// [0x00020400] 
struct UGHM_AnimNodeChain_execPlayAnimation_Params
{
	int32_t                                            nodeindex;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              BlendTime;                                        		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_AnimNodeChain.PlayNextAnimation
// [0x00020400] 
struct UGHM_AnimNodeChain_execPlayNextAnimation_Params
{
	float                                              BlendTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SkelControlDFTL.StopWindAnim
// [0x00020400] 
struct UGHM_SkelControlDFTL_execStopWindAnim_Params
{
	float                                              FadeOutSeconds;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SkelControlDFTL.StartWindAnim
// [0x00020400] 
struct UGHM_SkelControlDFTL_execStartWindAnim_Params
{
	struct FGHM_SkelControlDFTL_WindAnimSetting        WindAnimSetting;                                  		// 0x0000 (0x0068) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SkelControlTrailWithInertia.OnTeleport
// [0x00020400] 
struct UGHM_SkelControlTrailWithInertia_execOnTeleport_Params
{
	class USkeletalMeshComponent*                      _poSkelComp;                                      		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function GHMEngine.GHM_SkelControlTrailWithEffector.OnTeleport
// [0x00020400] 
struct UGHM_SkelControlTrailWithEffector_execOnTeleport_Params
{
	class USkeletalMeshComponent*                      _poSkelComp;                                      		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function GHMEngine.GHM_SkeletalMeshActorMAT.MAT_SetSkelControlWeight
// [0x00020400] 
struct AGHM_SkeletalMeshActorMAT_execMAT_SetSkelControlWeight_Params
{
	struct FName                                       SkelControlNodeName;                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              SkelControlWeight;                                		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SkeletalMeshActorMAT.SetSkelControlWeight
// [0x00020802] 
struct AGHM_SkeletalMeshActorMAT_eventSetSkelControlWeight_Params
{
	struct FName                                       SkelControlNodeName;                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              SkelControlWeight;                                		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_KActor.StackNotify
// [0x00020102] 
struct AGHM_KActor_execStackNotify_Params
{
	// class AActor*                                      tempActor;                                        		// 0x0000 (0x0008) [0x0000000000000000]               
	// class AKActor*                                     TempKActor;                                       		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UGHM_StackablePhysicsActorInterface*         Stackable;                                        		// 0x0010 (0x0010) [0x0000000000000000]               
};

// Function GHMEngine.GHM_BreakableObject.ApplyCheckpointRecordCore
// [0x00C20002] 
struct AGHM_BreakableObject_execApplyCheckpointRecordCore_Params
{
	struct FBrokenObjectCheckpointRecord               Record;                                           		// 0x0000 (0x003C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	// struct FSpawnedPackageRecord                       SPR;                                              		// 0x003C (0x0008) [0x0000000000000000]               
	// bool                                               bSaveSilent : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GHMEngine.GHM_BreakableObject.GHM_GHM_BreakableObject_ApplyCheckpointRecord
// [0x00420002] 
struct AGHM_BreakableObject_execGHM_GHM_BreakableObject_ApplyCheckpointRecord_Params
{
	struct FGHM_GHM_BreakableObject_CheckpointRecord   Record;                                           		// 0x0000 (0x003C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_BreakableObject.GHM_GHM_BreakableObject_CreateCheckpointRecord
// [0x00420002] 
struct AGHM_BreakableObject_execGHM_GHM_BreakableObject_CreateCheckpointRecord_Params
{
	struct FGHM_GHM_BreakableObject_CheckpointRecord   Record;                                           		// 0x0000 (0x003C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_BreakableObject.AddSpawnedPackageRecords
// [0x00820002] 
struct AGHM_BreakableObject_execAddSpawnedPackageRecords_Params
{
	int32_t                                            InPackageNo;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            InRemainingDamage;                                		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// struct FSpawnedPackageRecord                       SPR;                                              		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_BreakableObject.Detach
// [0x00020800] 
struct AGHM_BreakableObject_eventDetach_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_BreakableObject.Attach
// [0x00020800] 
struct AGHM_BreakableObject_eventAttach_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_BreakableObject.FinalTweaksRB
// [0x00020000] 
struct AGHM_BreakableObject_execFinalTweaksRB_Params
{
	class AKActorSpawnable*                            Fragment;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBreakPackage                               BP;                                               		// 0x0008 (0x00D8) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FBreakActor                                 BA;                                               		// 0x00E0 (0x0068) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_BreakableObject.FinalTweaksStatic
// [0x00020000] 
struct AGHM_BreakableObject_execFinalTweaksStatic_Params
{
	class ADynamicSMActor*                             Fragment;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBreakPackage                               BP;                                               		// 0x0008 (0x00D8) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FBreakActor                                 BA;                                               		// 0x00E0 (0x0068) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_BreakableObject.RBInit
// [0x00020002] 
struct AGHM_BreakableObject_execRBInit_Params
{
	class AKActorSpawnable*                            Fragment;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBreakPackage                               BP;                                               		// 0x0008 (0x00D8) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FBreakActor                                 BA;                                               		// 0x00E0 (0x0068) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FVector                                     RBVelocity;                                       		// 0x0148 (0x000C) [0x0000000000000080] (CPF_Parm)    
	// class AGHM_KActorSpawnable*                        KAS;                                              		// 0x0154 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_BreakableObject.StaticInit
// [0x00020002] 
struct AGHM_BreakableObject_execStaticInit_Params
{
	class ADynamicSMActor*                             Fragment;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBreakPackage                               BP;                                               		// 0x0008 (0x00D8) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FBreakActor                                 BA;                                               		// 0x00E0 (0x0068) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_BreakableObject.BaseInit
// [0x00020002] 
struct AGHM_BreakableObject_execBaseInit_Params
{
	class ADynamicSMActor*                             Fragment;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBreakPackage                               BP;                                               		// 0x0008 (0x00D8) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FBreakActor                                 BA;                                               		// 0x00E0 (0x0068) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            iMaterial;                                        		// 0x0148 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_BreakableObject.SpawnPostDestructionParticles
// [0x00020002] 
struct AGHM_BreakableObject_execSpawnPostDestructionParticles_Params
{
	// class AEmitter*                                    Effect;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_BreakableObject.DeleteAccumulationParticles
// [0x00020002] 
struct AGHM_BreakableObject_execDeleteAccumulationParticles_Params
{
};

// Function GHMEngine.GHM_BreakableObject.SpawnAccumulationParticles
// [0x00020002] 
struct AGHM_BreakableObject_execSpawnAccumulationParticles_Params
{
	struct FBreakPackage                               BP;                                               		// 0x0000 (0x00D8) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UParticleSystemComponent*                    ReturnValue;                                      		// 0x00D8 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GHMEngine.GHM_BreakableObject.SpawnDamageParticles
// [0x00020002] 
struct AGHM_BreakableObject_execSpawnDamageParticles_Params
{
	struct FBreakPackage                               BP;                                               		// 0x0000 (0x00D8) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_BreakableObject.SpawnParticles
// [0x00020002] 
struct AGHM_BreakableObject_execSpawnParticles_Params
{
	struct FBreakPackage                               BP;                                               		// 0x0000 (0x00D8) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_BreakableObject.PerformFrameSpawns
// [0x00020002] 
struct AGHM_BreakableObject_execPerformFrameSpawns_Params
{
	// int32_t                                            iSpawnPermission;                                 		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_BreakableObject.SpawnPhysicsPart
// [0x00820002] 
struct AGHM_BreakableObject_execSpawnPhysicsPart_Params
{
	struct FBreakActor                                 BA;                                               		// 0x0000 (0x0068) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class AKActorSpawnable*                            PhysMesh;                                         		// 0x0068 (0x0008) [0x0000000000000000]               
	// struct FVector                                     BaseLinearVelocity;                               		// 0x0070 (0x000C) [0x0000000000000000]               
	// struct FBoxSphereBounds                            Bounds;                                           		// 0x007C (0x001C) [0x0000000000000000]               
	// class AActor*                                      SpawnedActor;                                     		// 0x0098 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_BreakableObject.SpawnPackage
// [0x00824002] 
struct AGHM_BreakableObject_execSpawnPackage_Params
{
	struct FBreakPackage                               BP;                                               		// 0x0000 (0x00D8) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            iInitialDamage;                                   		// 0x00D8 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              PostSpawnNoDamageTime;                            		// 0x00DC (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	// class ADynamicSMActor_Spawnable*                   StatMesh;                                         		// 0x00E0 (0x0008) [0x0000000000000000]               
	// class AGHM_BreakableObject*                        BreakableMesh;                                    		// 0x00E8 (0x0008) [0x0000000000000000]               
	// struct FBreakActor                                 BA;                                               		// 0x00F0 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FVector                                     spawn_location;                                   		// 0x0158 (0x000C) [0x0000000000000000]               
	// class AActor*                                      SpawnedActor;                                     		// 0x0164 (0x0008) [0x0000000000000000]               
	// class AActor*                                      TempBaseActor;                                    		// 0x016C (0x0008) [0x0000000000000000]               
	// class USkeletalMeshComponent*                      TempBaseSkelComp;                                 		// 0x0174 (0x0008) [0x0000000004000000] (CPF_EditInline)
	// struct FName                                       TempBaseBoneName;                                 		// 0x017C (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_BreakableObject.RigidBodyCollision
// [0x00420802] 
struct AGHM_BreakableObject_eventRigidBodyCollision_Params
{
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	class UPrimitiveComponent*                         OtherComponent;                                   		// 0x0008 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	struct FCollisionImpactData                        RigidCollisionData;                               		// 0x0010 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ContactIndex;                                     		// 0x0038 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_BreakableObject.Bump
// [0x00820802] 
struct AGHM_BreakableObject_eventBump_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	// struct FBreakPackage                               tbp;                                              		// 0x001C (0x00D8) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_BreakableObject.TakeDamageInner
// [0x00824002] 
struct AGHM_BreakableObject_execTakeDamageInner_Params
{
	int32_t                                            DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     		// 0x0054 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	// struct FBreakPackage                               tbp;                                              		// 0x005C (0x00D8) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            iRemainingDamage;                                 		// 0x0134 (0x0004) [0x0000000000000000]               
	// int32_t                                            PackageNo;                                        		// 0x0138 (0x0004) [0x0000000000000000]               
	// float                                              lDamageRate;                                      		// 0x013C (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_BreakableObject.TakeDamageInnerParent
// [0x00024002] 
struct AGHM_BreakableObject_execTakeDamageInnerParent_Params
{
	int32_t                                            DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     		// 0x0054 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	// int32_t                                            iChild;                                           		// 0x005C (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_BreakableObject.TakeDamage
// [0x00824802] 
struct AGHM_BreakableObject_eventTakeDamage_Params
{
	int32_t                                            DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     		// 0x0054 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	// int32_t                                            iChild;                                           		// 0x005C (0x0004) [0x0000000000000000]               
	// struct FBreakPackage                               tbp;                                              		// 0x0060 (0x00D8) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_BreakableObject.EnableBreakableObject
// [0x00020002] 
struct AGHM_BreakableObject_execEnableBreakableObject_Params
{
};

// Function GHMEngine.GHM_BreakableObject.SetSplitNavMesh
// [0x00020401] 
struct AGHM_BreakableObject_execSetSplitNavMesh_Params
{
	bool                                               bNewValue : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_BreakableObject.PostBeginPlay
// [0x00020902] 
struct AGHM_BreakableObject_eventPostBeginPlay_Params
{
	// class UGHM_MapInfoBase*                            MapInfo;                                          		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_BreakableObject.PreBeginPlay
// [0x00020802] 
struct AGHM_BreakableObject_eventPreBeginPlay_Params
{
	// int32_t                                            iChild;                                           		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_BreakableObject.Destroyed
// [0x00820902] 
struct AGHM_BreakableObject_eventDestroyed_Params
{
	// struct FGHM_GHM_BreakableObject_CheckpointRecord   CR;                                               		// 0x0000 (0x003C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_Checkpoint.PostResaveCheckpoint
// [0x00020802] 
struct UGHM_Checkpoint_eventPostResaveCheckpoint_Params
{
};

// Function GHMEngine.GHM_Checkpoint.ResaveCheckpointWriteToStorage
// [0x00020802] 
struct UGHM_Checkpoint_eventResaveCheckpointWriteToStorage_Params
{
};

// Function GHMEngine.GHM_Checkpoint.Post_SeqEvent_CheckpointSaved
// [0x00022002] 
struct UGHM_Checkpoint_execPost_SeqEvent_CheckpointSaved_Params
{
	int32_t                                            iCheckPointIndex;                                 		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class AGHM_PlayerController*                       PC;                                               		// 0x0004 (0x0008) [0x0000000000000000]               
	// TArray<class USequenceObject*>                     AllCheckpointEvents;                              		// 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class USequence*                                   GameSeq;                                          		// 0x001C (0x0008) [0x0000000000000000]               
	// class UGHM_SeqEvent_CheckpointSaved*               CheckpointSavedEvent;                             		// 0x0024 (0x0008) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x002C (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_Checkpoint.PostSaveCheckpoint
// [0x00020802] 
struct UGHM_Checkpoint_eventPostSaveCheckpoint_Params
{
	// class AGHM_PlayerController*                       PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_Checkpoint.Post_SeqEvent_CheckpointWriteToStorage
// [0x00022002] 
struct UGHM_Checkpoint_execPost_SeqEvent_CheckpointWriteToStorage_Params
{
	int32_t                                            iCheckPointIndex;                                 		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class AGHM_PlayerController*                       PC;                                               		// 0x0004 (0x0008) [0x0000000000000000]               
	// class USequence*                                   GameSeq;                                          		// 0x000C (0x0008) [0x0000000000000000]               
	// TArray<class USequenceObject*>                     AllCheckpointEvents;                              		// 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UGHM_SeqEvent_CheckpointWriteToStorage*      CheckpointWriteToStorageEvent;                    		// 0x0024 (0x0008) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x002C (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_Checkpoint.CheckpointWriteToStorage
// [0x00020802] 
struct UGHM_Checkpoint_eventCheckpointWriteToStorage_Params
{
};

// Function GHMEngine.GHM_Checkpoint.PreSaveCheckpoint
// [0x00020802] 
struct UGHM_Checkpoint_eventPreSaveCheckpoint_Params
{
};

// Function GHMEngine.GHM_Checkpoint.Post_SeqEvent_CheckpointLoaded
// [0x00022002] 
struct UGHM_Checkpoint_execPost_SeqEvent_CheckpointLoaded_Params
{
	int32_t                                            iCheckPointIndex;                                 		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class AGHM_PlayerController*                       PC;                                               		// 0x0004 (0x0008) [0x0000000000000000]               
	// class USequence*                                   GameSeq;                                          		// 0x000C (0x0008) [0x0000000000000000]               
	// TArray<class USequenceObject*>                     AllCheckpointEvents;                              		// 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UGHM_SeqEvent_CheckpointLoaded*              CheckpointLoadedEvent;                            		// 0x0024 (0x0008) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x002C (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_Checkpoint.PostLoadCheckpoint
// [0x00020802] 
struct UGHM_Checkpoint_eventPostLoadCheckpoint_Params
{
	// class AGHM_PlayerController*                       PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
	// class AKActor*                                     KA;                                               		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_Checkpoint.PreLoadCheckpoint
// [0x00020802] 
struct UGHM_Checkpoint_eventPreLoadCheckpoint_Params
{
};

// Function GHMEngine.GHM_Checkpoint.CheckpointIsEmpty
// [0x00020803] 
struct UGHM_Checkpoint_eventCheckpointIsEmpty_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_Checkpoint.CheckpointIsNewer
// [0x00020003] 
struct UGHM_Checkpoint_execCheckpointIsNewer_Params
{
	class UGHM_Checkpoint*                             OtherCheckpoint;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// bool                                               bResult : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GHMEngine.GHM_Checkpoint.CheckpointTimeIsNewer
// [0x00422003] 
struct UGHM_Checkpoint_execCheckpointTimeIsNewer_Params
{
	struct FCheckpointTime                             lCheckpointTime;                                  		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FCheckpointTime                             OtherCheckpointTime;                              		// 0x0010 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// bool                                               bResult : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GHMEngine.GHM_CheckPointSubSystem.ForceExitSave
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execForceExitSave_Params
{
};

// Function GHMEngine.GHM_CheckPointSubSystem.ClearOnMemorySaveData
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execClearOnMemorySaveData_Params
{
};

// Function GHMEngine.GHM_CheckPointSubSystem.GetCheckpointIndex
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execGetCheckpointIndex_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.GetGameSettingsIndex
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execGetGameSettingsIndex_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.CheckpointIsEmpty
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execCheckpointIsEmpty_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.SaveFailed
// [0x00020802] 
struct UGHM_CheckPointSubSystem_eventSaveFailed_Params
{
};

// Function GHMEngine.GHM_CheckPointSubSystem.IsLoadComplete
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execIsLoadComplete_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.JustLoadedCheckPoint
// [0x00020802] 
struct UGHM_CheckPointSubSystem_eventJustLoadedCheckPoint_Params
{
	// class AGHM_PlayerController*                       PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_CheckPointSubSystem.LoadGameSettingsImmediately
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execLoadGameSettingsImmediately_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.LoadGameSettingsRequest
// [0x00024002] 
struct UGHM_CheckPointSubSystem_execLoadGameSettingsRequest_Params
{
	float                                              fLoadingDelayTimer;                               		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.LoadRequest
// [0x00024002] 
struct UGHM_CheckPointSubSystem_execLoadRequest_Params
{
	bool                                               bLoadChapterPoint : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               bResaveActorRecords : 1;                          		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	float                                              fLoadingDelayTimer;                               		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              fAfterLoadedDelayTimer;                           		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.StartLoadCheckPoint
// [0x00020802] 
struct UGHM_CheckPointSubSystem_eventStartLoadCheckPoint_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.IsSaveComplete
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execIsSaveComplete_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.SaveGameSettingsImmediately
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execSaveGameSettingsImmediately_Params
{
	int32_t                                            GameSettingsIndex;                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.SaveGameSettingsRequest
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execSaveGameSettingsRequest_Params
{
	int32_t                                            GameSettingsIndex;                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.SaveRequest
// [0x00024002] 
struct UGHM_CheckPointSubSystem_execSaveRequest_Params
{
	bool                                               bSaveGameSettings : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int32_t                                            SaveIndex;                                        		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               bCurrentIsChapterPoint : 1;                       		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     PlayerLocation;                                   		// 0x000C (0x000C) [0x0000000000000092] (CPF_Const | CPF_OptionalParm | CPF_Parm)
	bool                                               bAsyncSaveKismet : 1;                             		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.StartSaveCheckPoint
// [0x00020802] 
struct UGHM_CheckPointSubSystem_eventStartSaveCheckPoint_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.CorruptSaveDataNoSaveNotify
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execCorruptSaveDataNoSaveNotify_Params
{
	int32_t                                            SelectIdx;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_CheckPointSubSystem.CorruptSaveDataNoSaveMessage
// [0x00020802] 
struct UGHM_CheckPointSubSystem_eventCorruptSaveDataNoSaveMessage_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.SaveErrorDeviceChangeNoSaveNotify
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execSaveErrorDeviceChangeNoSaveNotify_Params
{
	int32_t                                            SelectIdx;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_CheckPointSubSystem.SaveErrorDeviceChangeNoSaveMessage
// [0x00020802] 
struct UGHM_CheckPointSubSystem_eventSaveErrorDeviceChangeNoSaveMessage_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// TArray<class FString>                              ButtonAliases;                                    		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_CheckPointSubSystem.StorageDeviceChangeOverwriteMessageNotify
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execStorageDeviceChangeOverwriteMessageNotify_Params
{
	int32_t                                            SelectIdx;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_CheckPointSubSystem.StorageDeviceChangeOverwriteMessage
// [0x00020802] 
struct UGHM_CheckPointSubSystem_eventStorageDeviceChangeOverwriteMessage_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// TArray<class FString>                              ButtonAliases;                                    		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_CheckPointSubSystem.InsufficientStorageDeviceNoSaveMessageNotify
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execInsufficientStorageDeviceNoSaveMessageNotify_Params
{
	int32_t                                            SelectIdx;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_CheckPointSubSystem.InsufficientStorageDeviceNoSaveMessage
// [0x00020802] 
struct UGHM_CheckPointSubSystem_eventInsufficientStorageDeviceNoSaveMessage_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// TArray<class FString>                              ButtonAliases;                                    		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_CheckPointSubSystem.InvalidStorageDeviceNoSaveMessageNotify
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execInvalidStorageDeviceNoSaveMessageNotify_Params
{
	int32_t                                            SelectIdx;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_CheckPointSubSystem.InvalidStorageDeviceNoSaveMessage
// [0x00020802] 
struct UGHM_CheckPointSubSystem_eventInvalidStorageDeviceNoSaveMessage_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// TArray<class FString>                              ButtonAliases;                                    		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_CheckPointSubSystem.StorageDeviceChangeWarningMessageNotify
// [0x00020802] 
struct UGHM_CheckPointSubSystem_eventStorageDeviceChangeWarningMessageNotify_Params
{
	int32_t                                            SelectIdx;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_CheckPointSubSystem.StorageDeviceChangeWarningMessage
// [0x00020802] 
struct UGHM_CheckPointSubSystem_eventStorageDeviceChangeWarningMessage_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.OnStorageDeviceChange
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execOnStorageDeviceChange_Params
{
};

// Function GHMEngine.GHM_CheckPointSubSystem.ClearStorageDeviceChangeDelegate
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execClearStorageDeviceChangeDelegate_Params
{
};

// Function GHMEngine.GHM_CheckPointSubSystem.RegisterStorageDeviceChangeDelegate
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execRegisterStorageDeviceChangeDelegate_Params
{
};

// Function GHMEngine.GHM_CheckPointSubSystem.OnLoadDeviceSelectionComplete
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execOnLoadDeviceSelectionComplete_Params
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0004 (0x0008) [0x0000000000000000]               
	// class UOnlinePlayerInterfaceEx*                    PlayerIntEx;                                      		// 0x000C (0x0010) [0x0000000000000000]               
	// class FString                                      UnusedDeviceName;                                 		// 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            DeviceID;                                         		// 0x002C (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_CheckPointSubSystem.LoadStorageDeviceSelect
// [0x00020802] 
struct UGHM_CheckPointSubSystem_eventLoadStorageDeviceSelect_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UOnlinePlayerInterfaceEx*                    PlayerIntEx;                                      		// 0x0010 (0x0010) [0x0000000000000000]               
};

// Function GHMEngine.GHM_CheckPointSubSystem.OnSaveDeviceSelectionComplete
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execOnSaveDeviceSelectionComplete_Params
{
	bool                                               bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0004 (0x0008) [0x0000000000000000]               
	// class UOnlinePlayerInterfaceEx*                    PlayerIntEx;                                      		// 0x000C (0x0010) [0x0000000000000000]               
	// class FString                                      UnusedDeviceName;                                 		// 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            DeviceID;                                         		// 0x002C (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_CheckPointSubSystem.SaveStorageDeviceSelect
// [0x00020802] 
struct UGHM_CheckPointSubSystem_eventSaveStorageDeviceSelect_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UOnlinePlayerInterfaceEx*                    PlayerIntEx;                                      		// 0x0010 (0x0010) [0x0000000000000000]               
};

// Function GHMEngine.GHM_CheckPointSubSystem.WaitExternalUI
// [0x00020802] 
struct UGHM_CheckPointSubSystem_eventWaitExternalUI_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.GetButtonAliasesOK
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execGetButtonAliasesOK_Params
{
	TArray<class FString>                              ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// TArray<class FString>                              ButtonAliases;                                    		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_CheckPointSubSystem.GetButtonAliasesYN
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execGetButtonAliasesYN_Params
{
	TArray<class FString>                              ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// TArray<class FString>                              ButtonAliases;                                    		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_CheckPointSubSystem.IsExistSaveData
// [0x00020400] 
struct UGHM_CheckPointSubSystem_execIsExistSaveData_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.SetPlayersOnly
// [0x00020802] 
struct UGHM_CheckPointSubSystem_eventSetPlayersOnly_Params
{
	bool                                               Enable : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class AWorldInfo*                                  WI;                                               		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_CheckPointSubSystem.AreStorageWritesAllowed
// [0x00024802] 
struct UGHM_CheckPointSubSystem_eventAreStorageWritesAllowed_Params
{
	bool                                               bIgnoreDeviceStatus : 1;                          		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            RequiredSize;                                     		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.IsCurrentDeviceHasFreeSpaceForDeviceSelect
// [0x00020802] 
struct UGHM_CheckPointSubSystem_eventIsCurrentDeviceHasFreeSpaceForDeviceSelect_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.IsCurrentDeviceValid
// [0x00024802] 
struct UGHM_CheckPointSubSystem_eventIsCurrentDeviceValid_Params
{
	int32_t                                            SizeNeeded;                                       		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0008 (0x0008) [0x0000000000000000]               
	// bool                                               bResult : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GHMEngine.GHM_CheckPointSubSystem.RetryToWriteToStorage
// [0x00080400] 
struct UGHM_CheckPointSubSystem_execRetryToWriteToStorage_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.LoadGameSettings
// [0x00080400] 
struct UGHM_CheckPointSubSystem_execLoadGameSettings_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.LoadCheckpoint
// [0x00080400] 
struct UGHM_CheckPointSubSystem_execLoadCheckpoint_Params
{
	float                                              fAfterLoadedDelayTimer;                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               bResaveActorRecords : 1;                          		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.CheckpointWriteToStorage
// [0x00080400] 
struct UGHM_CheckPointSubSystem_execCheckpointWriteToStorage_Params
{
};

// Function GHMEngine.GHM_CheckPointSubSystem.SaveGameSettings
// [0x00080400] 
struct UGHM_CheckPointSubSystem_execSaveGameSettings_Params
{
};

// Function GHMEngine.GHM_CheckPointSubSystem.SaveCheckpoint
// [0x00480400] 
struct UGHM_CheckPointSubSystem_execSaveCheckpoint_Params
{
	struct FVector                                     CheckpointLocation;                               		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	bool                                               bAsyncSaveKismet : 1;                             		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.ResetCheckpointState
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execResetCheckpointState_Params
{
};

// Function GHMEngine.GHM_CheckPointSubSystem.SetCheckpointState
// [0x00024802] 
struct UGHM_CheckPointSubSystem_eventSetCheckpointState_Params
{
	uint8_t                                            eNewState;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              fExternalUIDelayTimer;                            		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.SetSleep
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execSetSleep_Params
{
	bool                                               Enable : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.SetNoSave
// [0x00020802] 
struct UGHM_CheckPointSubSystem_eventSetNoSave_Params
{
	bool                                               Enable : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.SetShouldWriteToStorage
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execSetShouldWriteToStorage_Params
{
	bool                                               Enable : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.FindCheckpointData
// [0x00424401] 
struct UGHM_CheckPointSubSystem_execFindCheckpointData_Params
{
	struct FCheckpointEnumerationResult                EnumResult;                                       		// 0x0000 (0x001C) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	int32_t                                            IsCorrupted;                                      		// 0x001C (0x0004) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.HasStorageDeviceBeenRemoved
// [0x00020401] 
struct UGHM_CheckPointSubSystem_execHasStorageDeviceBeenRemoved_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.GetCurrentDeviceID
// [0x00020401] 
struct UGHM_CheckPointSubSystem_execGetCurrentDeviceID_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.SetCurrentDeviceID
// [0x00024401] 
struct UGHM_CheckPointSubSystem_execSetCurrentDeviceID_Params
{
	int32_t                                            NewDeviceID;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               bProfileSignedOut : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_CheckPointSubSystem.SetCurrentUserID
// [0x00020002] 
struct UGHM_CheckPointSubSystem_execSetCurrentUserID_Params
{
	int32_t                                            NewUserID;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_CheckPointSubSystem.Tick
// [0x00020400] 
struct UGHM_CheckPointSubSystem_execTick_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItem.Clear
// [0x00020002] 
struct UGHM_DebugMenuItem_execClear_Params
{
};

// Function GHMEngine.GHM_DebugMenuItem.LeftStick
// [0x00020000] 
struct UGHM_DebugMenuItem_execLeftStick_Params
{
	float                                              moveX;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              moveY;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItem.RightStick
// [0x00020000] 
struct UGHM_DebugMenuItem_execRightStick_Params
{
	float                                              moveX;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              moveY;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItem.KeyLeftStickButton
// [0x00020000] 
struct UGHM_DebugMenuItem_execKeyLeftStickButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItem.KeyRightStickButton
// [0x00020000] 
struct UGHM_DebugMenuItem_execKeyRightStickButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItem.KeyYButton
// [0x00020000] 
struct UGHM_DebugMenuItem_execKeyYButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItem.KeyXButton
// [0x00020000] 
struct UGHM_DebugMenuItem_execKeyXButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItem.KeyBButton
// [0x00020000] 
struct UGHM_DebugMenuItem_execKeyBButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItem.KeyRight
// [0x00020000] 
struct UGHM_DebugMenuItem_execKeyRight_Params
{
};

// Function GHMEngine.GHM_DebugMenuItem.KeyLeft
// [0x00020000] 
struct UGHM_DebugMenuItem_execKeyLeft_Params
{
};

// Function GHMEngine.GHM_DebugMenuItem.KeyDown
// [0x00020000] 
struct UGHM_DebugMenuItem_execKeyDown_Params
{
};

// Function GHMEngine.GHM_DebugMenuItem.KeyUp
// [0x00020000] 
struct UGHM_DebugMenuItem_execKeyUp_Params
{
};

// Function GHMEngine.GHM_DebugMenuItem.IsInRectToPoint
// [0x00020003] 
struct UGHM_DebugMenuItem_execIsInRectToPoint_Params
{
	float                                              px;                                               		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Py;                                               		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItem.DrawMenuItemChain
// [0x00C20002] 
struct UGHM_DebugMenuItem_execDrawMenuItemChain_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGHM_DebugMenuItem*                          selectitem;                                       		// 0x0008 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// class UGHM_DebugMenuItem*                          tmpitem;                                          		// 0x0010 (0x0008) [0x0000000000000000]               
	// struct FVector                                     pos;                                              		// 0x0018 (0x000C) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItem.CalcPosNextItemAndDrawMenuItemChainFrame
// [0x00840003] 
struct UGHM_DebugMenuItem_execCalcPosNextItemAndDrawMenuItemChainFrame_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class UGHM_DebugMenuItem*                          tmpitem;                                          		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UGHM_DebugMenuItem*                          LastItem;                                         		// 0x0010 (0x0008) [0x0000000000000000]               
	// struct FVector                                     pos;                                              		// 0x0018 (0x000C) [0x0000000000000000]               
	// float                                              W;                                                		// 0x0024 (0x0004) [0x0000000000000000]               
	// float                                              H;                                                		// 0x0028 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItem.DrawDescription
// [0x00020002] 
struct UGHM_DebugMenuItem_execDrawDescription_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     pos;                                              		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItem.SetDescription
// [0x00020002] 
struct UGHM_DebugMenuItem_execSetDescription_Params
{
	class FString                                      Str;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_DebugMenuItem.GetDescription
// [0x00020002] 
struct UGHM_DebugMenuItem_execGetDescription_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_DebugMenuItem.DrawCursor
// [0x00020002] 
struct UGHM_DebugMenuItem_execDrawCursor_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItem.DrawMenuItem
// [0x00020002] 
struct UGHM_DebugMenuItem_execDrawMenuItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItem.GetItemTextWidth
// [0x00020400] 
struct UGHM_DebugMenuItem_execGetItemTextWidth_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItem.AddChild
// [0x00020401] 
struct UGHM_DebugMenuItem_execAddChild_Params
{
	class UGHM_DebugMenuItem*                          Item;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItem.AddNext
// [0x00020401] 
struct UGHM_DebugMenuItem_execAddNext_Params
{
	class UGHM_DebugMenuItem*                          Item;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItem.Cancel
// [0x00020400] 
struct UGHM_DebugMenuItem_execCancel_Params
{
};

// Function GHMEngine.GHM_DebugMenuItem.Select
// [0x00020400] 
struct UGHM_DebugMenuItem_execSelect_Params
{
};

// Function GHMEngine.GHM_DebugMenuItem.SetCursor
// [0x00020401] 
struct UGHM_DebugMenuItem_execSetCursor_Params
{
	bool                                               flag : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_DebugMenuItem.SetExpand
// [0x00020401] 
struct UGHM_DebugMenuItem_execSetExpand_Params
{
	bool                                               flag : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_DebugMenuItem.SetHeight
// [0x00020401] 
struct UGHM_DebugMenuItem_execSetHeight_Params
{
	int32_t                                            Height;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItem.SetWidth
// [0x00020400] 
struct UGHM_DebugMenuItem_execSetWidth_Params
{
	int32_t                                            Width;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItem.SetPosition
// [0x00020401] 
struct UGHM_DebugMenuItem_execSetPosition_Params
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItem.SetName
// [0x00020401] 
struct UGHM_DebugMenuItem_execSetName_Params
{
	class FString                                      Item;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_DebugMenuItem.SetChild
// [0x00020401] 
struct UGHM_DebugMenuItem_execSetChild_Params
{
	class UGHM_DebugMenuItem*                          Item;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItem.SetParent
// [0x00020401] 
struct UGHM_DebugMenuItem_execSetParent_Params
{
	class UGHM_DebugMenuItem*                          Item;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItem.SetNext
// [0x00020401] 
struct UGHM_DebugMenuItem_execSetNext_Params
{
	class UGHM_DebugMenuItem*                          Item;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItem.SetPrev
// [0x00020401] 
struct UGHM_DebugMenuItem_execSetPrev_Params
{
	class UGHM_DebugMenuItem*                          Item;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItem.GetCursor
// [0x00020401] 
struct UGHM_DebugMenuItem_execGetCursor_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItem.GetExpand
// [0x00020401] 
struct UGHM_DebugMenuItem_execGetExpand_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItem.GetHeight
// [0x00020401] 
struct UGHM_DebugMenuItem_execGetHeight_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItem.GetWidth
// [0x00020401] 
struct UGHM_DebugMenuItem_execGetWidth_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItem.GetPosition
// [0x00020401] 
struct UGHM_DebugMenuItem_execGetPosition_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItem.GetName
// [0x00020401] 
struct UGHM_DebugMenuItem_execGetName_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_DebugMenuItem.GetChild
// [0x00020401] 
struct UGHM_DebugMenuItem_execGetChild_Params
{
	class UGHM_DebugMenuItem*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItem.GetParent
// [0x00020401] 
struct UGHM_DebugMenuItem_execGetParent_Params
{
	class UGHM_DebugMenuItem*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItem.GetNext
// [0x00020401] 
struct UGHM_DebugMenuItem_execGetNext_Params
{
	class UGHM_DebugMenuItem*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItem.GetPrev
// [0x00020401] 
struct UGHM_DebugMenuItem_execGetPrev_Params
{
	class UGHM_DebugMenuItem*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItemValue.Clear
// [0x00020002] 
struct UGHM_DebugMenuItemValue_execClear_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemValue.DrawMenuItem
// [0x00020002] 
struct UGHM_DebugMenuItemValue_execDrawMenuItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemValue.AddExecFunc
// [0x00020002] 
struct UGHM_DebugMenuItemValue_execAddExecFunc_Params
{
	struct FScriptDelegate                             dgt;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_DebugMenuItemValue.SetSeparaterWidth
// [0x00020401] 
struct UGHM_DebugMenuItemValue_execSetSeparaterWidth_Params
{
	int32_t                                            Width;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemValue.SetCellWidth
// [0x00020401] 
struct UGHM_DebugMenuItemValue_execSetCellWidth_Params
{
	int32_t                                            Width;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemValue.SetWidth
// [0x00020400] 
struct UGHM_DebugMenuItemValue_execSetWidth_Params
{
	int32_t                                            Width;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemValue.ExecFunc
// [0x00120000] 
struct UGHM_DebugMenuItemValue_execExecFunc_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemBool.Clear
// [0x00020002] 
struct UGHM_DebugMenuItemBool_execClear_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemBool.Select
// [0x00020002] 
struct UGHM_DebugMenuItemBool_execSelect_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemBool.SetSwitchType
// [0x00020003] 
struct UGHM_DebugMenuItemBool_execSetSwitchType_Params
{
	uint8_t                                            Type;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemBool.SetDispSwitch
// [0x00020003] 
struct UGHM_DebugMenuItemBool_execSetDispSwitch_Params
{
	bool                                               tf : 1;                                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_DebugMenuItemBool.DrawMenuItem
// [0x00020002] 
struct UGHM_DebugMenuItemBool_execDrawMenuItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// float                                              XL;                                               		// 0x0008 (0x0004) [0x0000000000000000]               
	// float                                              YL;                                               		// 0x000C (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemBool.Rev
// [0x00020000] 
struct UGHM_DebugMenuItemBool_execRev_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemBool.AddUnExecFunc
// [0x00020002] 
struct UGHM_DebugMenuItemBool_execAddUnExecFunc_Params
{
	struct FScriptDelegate                             dgt;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_DebugMenuItemBool.UnExecFunc
// [0x00120000] 
struct UGHM_DebugMenuItemBool_execUnExecFunc_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemBool.ChangeNum
// [0x00020400] 
struct UGHM_DebugMenuItemBool_execChangeNum_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItemBool.UpdateRegistValue
// [0x00020400] 
struct UGHM_DebugMenuItemBool_execUpdateRegistValue_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemBool.UnRegist
// [0x00020400] 
struct UGHM_DebugMenuItemBool_execUnRegist_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemBool.Regist
// [0x00424400] 
struct UGHM_DebugMenuItemBool_execRegist_Params
{
	int32_t                                            editvalue;                                        		// 0x0000 (0x0004) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_DebugMenuItemByte.KeyXButton
// [0x00020000] 
struct UGHM_DebugMenuItemByte_execKeyXButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemByte.KeyRight
// [0x00020002] 
struct UGHM_DebugMenuItemByte_execKeyRight_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemByte.KeyLeft
// [0x00020002] 
struct UGHM_DebugMenuItemByte_execKeyLeft_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemByte.KeyDown
// [0x00020002] 
struct UGHM_DebugMenuItemByte_execKeyDown_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemByte.KeyUp
// [0x00020002] 
struct UGHM_DebugMenuItemByte_execKeyUp_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemByte.SetNum
// [0x00020002] 
struct UGHM_DebugMenuItemByte_execSetNum_Params
{
	uint8_t                                            Num;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemByte.DrawMenuItem
// [0x00020002] 
struct UGHM_DebugMenuItemByte_execDrawMenuItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      buf;                                              		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_DebugMenuItemByte.Rev
// [0x00020400] 
struct UGHM_DebugMenuItemByte_execRev_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemByte.UpdateRegistValue
// [0x00020400] 
struct UGHM_DebugMenuItemByte_execUpdateRegistValue_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemByte.UnRegist
// [0x00020400] 
struct UGHM_DebugMenuItemByte_execUnRegist_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemByte.Regist
// [0x00424400] 
struct UGHM_DebugMenuItemByte_execRegist_Params
{
	uint8_t                                            editvalue;                                        		// 0x0000 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_DebugMenuItemByte.ChangeNum
// [0x00020400] 
struct UGHM_DebugMenuItemByte_execChangeNum_Params
{
	int32_t                                            addnum;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemByte.DrawSelectedItem
// [0x00020400] 
struct UGHM_DebugMenuItemByte_execDrawSelectedItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemByte.DrawDefaultItem
// [0x00020400] 
struct UGHM_DebugMenuItemByte_execDrawDefaultItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemColor.DrawMenuItem
// [0x00820002] 
struct UGHM_DebugMenuItemColor_execDrawMenuItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// struct FVector                                     debsel_pos;                                       		// 0x0008 (0x000C) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemColor.LeftStick
// [0x00020002] 
struct UGHM_DebugMenuItemColor_execLeftStick_Params
{
	float                                              moveX;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              moveY;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemColor.RightStick
// [0x00020002] 
struct UGHM_DebugMenuItemColor_execRightStick_Params
{
	float                                              moveX;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              moveY;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemColor.KeyBButton
// [0x00020002] 
struct UGHM_DebugMenuItemColor_execKeyBButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemColor.Cancel
// [0x00020002] 
struct UGHM_DebugMenuItemColor_execCancel_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemColor.Select
// [0x00020002] 
struct UGHM_DebugMenuItemColor_execSelect_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemColor.RealTimeValueChange
// [0x00020003] 
struct UGHM_DebugMenuItemColor_execRealTimeValueChange_Params
{
	bool                                               bRTFlag : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_DebugMenuItemColor.UpdateRegistValue
// [0x00020400] 
struct UGHM_DebugMenuItemColor_execUpdateRegistValue_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemColor.UnRegist
// [0x00020400] 
struct UGHM_DebugMenuItemColor_execUnRegist_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemColor.RegistVector
// [0x00424400] 
struct UGHM_DebugMenuItemColor_execRegistVector_Params
{
	struct FVector                                     editvalue;                                        		// 0x0000 (0x000C) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_DebugMenuItemColor.RegistColor
// [0x00424400] 
struct UGHM_DebugMenuItemColor_execRegistColor_Params
{
	struct FColor                                      editvalue;                                        		// 0x0000 (0x0004) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_DebugMenuItemColor.SetColor
// [0x00020400] 
struct UGHM_DebugMenuItemColor_execSetColor_Params
{
	struct FColor                                      scolor;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemFloat.KeyXButton
// [0x00020002] 
struct UGHM_DebugMenuItemFloat_execKeyXButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemFloat.KeyRight
// [0x00020002] 
struct UGHM_DebugMenuItemFloat_execKeyRight_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemFloat.KeyLeft
// [0x00020002] 
struct UGHM_DebugMenuItemFloat_execKeyLeft_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemFloat.KeyDown
// [0x00020002] 
struct UGHM_DebugMenuItemFloat_execKeyDown_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemFloat.KeyUp
// [0x00020002] 
struct UGHM_DebugMenuItemFloat_execKeyUp_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemFloat.SetNum
// [0x00020002] 
struct UGHM_DebugMenuItemFloat_execSetNum_Params
{
	float                                              Num;                                              		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemFloat.DrawMenuItem
// [0x00020002] 
struct UGHM_DebugMenuItemFloat_execDrawMenuItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      buf;                                              		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_DebugMenuItemFloat.Rev
// [0x00020400] 
struct UGHM_DebugMenuItemFloat_execRev_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemFloat.UpdateRegistValue
// [0x00020400] 
struct UGHM_DebugMenuItemFloat_execUpdateRegistValue_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemFloat.UnRegist
// [0x00020400] 
struct UGHM_DebugMenuItemFloat_execUnRegist_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemFloat.Regist
// [0x00424400] 
struct UGHM_DebugMenuItemFloat_execRegist_Params
{
	float                                              editvalue;                                        		// 0x0000 (0x0004) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_DebugMenuItemFloat.ChangeNum
// [0x00020400] 
struct UGHM_DebugMenuItemFloat_execChangeNum_Params
{
	int32_t                                            addnum;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemFloat.DrawSelectedItem
// [0x00020400] 
struct UGHM_DebugMenuItemFloat_execDrawSelectedItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemFloat.DrawDefaultItem
// [0x00020400] 
struct UGHM_DebugMenuItemFloat_execDrawDefaultItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.LeftStick
// [0x00020002] 
struct UGHM_DebugMenuItemFloatArray_execLeftStick_Params
{
	float                                              moveX;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              moveY;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.KeyXButton
// [0x00020002] 
struct UGHM_DebugMenuItemFloatArray_execKeyXButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.KeyRight
// [0x00020002] 
struct UGHM_DebugMenuItemFloatArray_execKeyRight_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.KeyLeft
// [0x00020002] 
struct UGHM_DebugMenuItemFloatArray_execKeyLeft_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.KeyDown
// [0x00020002] 
struct UGHM_DebugMenuItemFloatArray_execKeyDown_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.KeyUp
// [0x00020002] 
struct UGHM_DebugMenuItemFloatArray_execKeyUp_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.SetNum
// [0x00020000] 
struct UGHM_DebugMenuItemFloatArray_execSetNum_Params
{
	float                                              Num;                                              		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.DrawMenuItem
// [0x00020002] 
struct UGHM_DebugMenuItemFloatArray_execDrawMenuItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      buf;                                              		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            maxcols;                                          		// 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                            Rows;                                             		// 0x0020 (0x0004) [0x0000000000000000]               
	// int32_t                                            cols;                                             		// 0x0024 (0x0004) [0x0000000000000000]               
	// float                                              sx;                                               		// 0x0028 (0x0004) [0x0000000000000000]               
	// float                                              sy;                                               		// 0x002C (0x0004) [0x0000000000000000]               
	// float                                              ey;                                               		// 0x0030 (0x0004) [0x0000000000000000]               
	// int32_t                                            currow;                                           		// 0x0034 (0x0004) [0x0000000000000000]               
	// int32_t                                            curcol;                                           		// 0x0038 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.SetParamCellWidth
// [0x00020002] 
struct UGHM_DebugMenuItemFloatArray_execSetParamCellWidth_Params
{
	int32_t                                            Width;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.SetParamName
// [0x00020002] 
struct UGHM_DebugMenuItemFloatArray_execSetParamName_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      pname;                                            		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.Rev
// [0x00020400] 
struct UGHM_DebugMenuItemFloatArray_execRev_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.UpdateRegistValue
// [0x00020400] 
struct UGHM_DebugMenuItemFloatArray_execUpdateRegistValue_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.UnRegist
// [0x00020400] 
struct UGHM_DebugMenuItemFloatArray_execUnRegist_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.Regist
// [0x00424400] 
struct UGHM_DebugMenuItemFloatArray_execRegist_Params
{
	TArray<float>                                      editvalue;                                        		// 0x0000 (0x0010) [0x0000000000400190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.ChangeNum
// [0x00020400] 
struct UGHM_DebugMenuItemFloatArray_execChangeNum_Params
{
	int32_t                                            addnum;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.DrawSelectedItem
// [0x00020400] 
struct UGHM_DebugMenuItemFloatArray_execDrawSelectedItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.DrawDefaultItem
// [0x00020400] 
struct UGHM_DebugMenuItemFloatArray_execDrawDefaultItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemGraph.RightStick
// [0x00020002] 
struct UGHM_DebugMenuItemGraph_execRightStick_Params
{
	float                                              moveX;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              moveY;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemGraph.DrawYAxisLabelOnGraph
// [0x00820002] 
struct UGHM_DebugMenuItemGraph_execDrawYAxisLabelOnGraph_Params
{
	class UCanvas*                                     DrawCanvas;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              YAxisValue;                                       		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FColor                                      LabelColor;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	// struct FVector2D                                   GraphPointInScreenSpace;                          		// 0x0010 (0x0008) [0x0000000000000000]               
	// struct FVector2D                                   LabelLineStart;                                   		// 0x0018 (0x0008) [0x0000000000000000]               
	// struct FVector2D                                   LabelLineEnd;                                     		// 0x0020 (0x0008) [0x0000000000000000]               
	// struct FVector2D                                   LabelTextPosition;                                		// 0x0028 (0x0008) [0x0000000000000000]               
	// float                                              LabelHalfHeight;                                  		// 0x0030 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemGraph.DrawXAxisLabelOnGraph
// [0x00820002] 
struct UGHM_DebugMenuItemGraph_execDrawXAxisLabelOnGraph_Params
{
	class UCanvas*                                     DrawCanvas;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              XAxisValue;                                       		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FColor                                      LabelColor;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	// struct FVector2D                                   GraphPointInScreenSpace;                          		// 0x0010 (0x0008) [0x0000000000000000]               
	// struct FVector2D                                   LabelLineStart;                                   		// 0x0018 (0x0008) [0x0000000000000000]               
	// struct FVector2D                                   LabelLineEnd;                                     		// 0x0020 (0x0008) [0x0000000000000000]               
	// struct FVector2D                                   LabelTextPosition;                                		// 0x0028 (0x0008) [0x0000000000000000]               
	// float                                              LabelHalfHeight;                                  		// 0x0030 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemGraph.DrawGraphWindow
// [0x00820002] 
struct UGHM_DebugMenuItemGraph_execDrawGraphWindow_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// struct FVector2D                                   XAxisStartInScreenSpace;                          		// 0x0008 (0x0008) [0x0000000000000000]               
	// struct FVector2D                                   XAxisEndInScreenSpace;                            		// 0x0010 (0x0008) [0x0000000000000000]               
	// struct FVector2D                                   YAxisStartInScreenSpace;                          		// 0x0018 (0x0008) [0x0000000000000000]               
	// struct FVector2D                                   YAxisEndInScreenSpace;                            		// 0x0020 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemGraph.Select
// [0x00020002] 
struct UGHM_DebugMenuItemGraph_execSelect_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemGraph.DrawMenuItem
// [0x00020002] 
struct UGHM_DebugMenuItemGraph_execDrawMenuItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemGraph.SetWindowPosition
// [0x00020002] 
struct UGHM_DebugMenuItemGraph_execSetWindowPosition_Params
{
	float                                              PositionX;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PositionY;                                        		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemGraph.SetWindowSize
// [0x00020002] 
struct UGHM_DebugMenuItemGraph_execSetWindowSize_Params
{
	float                                              WindowSizeX;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              WindowSizeY;                                      		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemGraph.SetWindowTitle
// [0x00020002] 
struct UGHM_DebugMenuItemGraph_execSetWindowTitle_Params
{
	class FString                                      WindowTitle;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_DebugMenuItemGraph.SetXAxisRange
// [0x00020002] 
struct UGHM_DebugMenuItemGraph_execSetXAxisRange_Params
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Max;                                              		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetYAxisRange
// [0x00020002] 
struct UGHM_DebugMenuItemGraph_execGetYAxisRange_Params
{
	struct FVector2D                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetXAxisRange
// [0x00020002] 
struct UGHM_DebugMenuItemGraph_execGetXAxisRange_Params
{
	struct FVector2D                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItemGraph.SetYAxisRange
// [0x00020002] 
struct UGHM_DebugMenuItemGraph_execSetYAxisRange_Params
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Max;                                              		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetGraphPointInScreenSpace
// [0x00820002] 
struct UGHM_DebugMenuItemGraph_execGetGraphPointInScreenSpace_Params
{
	float                                              GraphValueX;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              GraphValueY;                                      		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FVector2D                                   GraphPointInScreenSpace;                          		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetYNegativeRangeInScreenSpace
// [0x00820002] 
struct UGHM_DebugMenuItemGraph_execGetYNegativeRangeInScreenSpace_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// float                                              YAxisNegativeRangeProportion;                     		// 0x0004 (0x0004) [0x0000000000000000]               
	// float                                              YAxisNegativeRangeInScreenSpace;                  		// 0x0008 (0x0004) [0x0000000000000000]               
	// struct FVector2D                                   GraphWindowSize;                                  		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetYPositiveRangeInScreenSpace
// [0x00820002] 
struct UGHM_DebugMenuItemGraph_execGetYPositiveRangeInScreenSpace_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// float                                              YAxisPositiveRangeProportion;                     		// 0x0004 (0x0004) [0x0000000000000000]               
	// float                                              YAxisPositiveRangeInScreenSpace;                  		// 0x0008 (0x0004) [0x0000000000000000]               
	// struct FVector2D                                   GraphWindowSize;                                  		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetXNegativeRangeInScreenSpace
// [0x00820002] 
struct UGHM_DebugMenuItemGraph_execGetXNegativeRangeInScreenSpace_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// float                                              XAxisNegativeRangeProportion;                     		// 0x0004 (0x0004) [0x0000000000000000]               
	// float                                              XAxisNegativeRangeInScreenSpace;                  		// 0x0008 (0x0004) [0x0000000000000000]               
	// struct FVector2D                                   GraphWindowSize;                                  		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetXPositiveRangeInScreenSpace
// [0x00820002] 
struct UGHM_DebugMenuItemGraph_execGetXPositiveRangeInScreenSpace_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// float                                              XAxisPositiveRangeProportion;                     		// 0x0004 (0x0004) [0x0000000000000000]               
	// float                                              XAxisPositiveRangeInScreenSpace;                  		// 0x0008 (0x0004) [0x0000000000000000]               
	// struct FVector2D                                   GraphWindowSize;                                  		// 0x000C (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetGraphOriginInScreenSpace
// [0x00820002] 
struct UGHM_DebugMenuItemGraph_execGetGraphOriginInScreenSpace_Params
{
	struct FVector2D                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FVector2D                                   GraphWindowOrigin;                                		// 0x0008 (0x0008) [0x0000000000000000]               
	// struct FVector2D                                   OriginInScreenSpace;                              		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetGraphSizeInScreenSpace
// [0x00020002] 
struct UGHM_DebugMenuItemGraph_execGetGraphSizeInScreenSpace_Params
{
	struct FVector2D                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetGraphWindowSizeInScreenSpace
// [0x00020002] 
struct UGHM_DebugMenuItemGraph_execGetGraphWindowSizeInScreenSpace_Params
{
	struct FVector2D                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetGraphWindowOriginInScreenSpace
// [0x00020002] 
struct UGHM_DebugMenuItemGraph_execGetGraphWindowOriginInScreenSpace_Params
{
	struct FVector2D                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItemInt.KeyXButton
// [0x00020002] 
struct UGHM_DebugMenuItemInt_execKeyXButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemInt.KeyRight
// [0x00020002] 
struct UGHM_DebugMenuItemInt_execKeyRight_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemInt.KeyLeft
// [0x00020002] 
struct UGHM_DebugMenuItemInt_execKeyLeft_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemInt.KeyDown
// [0x00020002] 
struct UGHM_DebugMenuItemInt_execKeyDown_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemInt.KeyUp
// [0x00020002] 
struct UGHM_DebugMenuItemInt_execKeyUp_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemInt.SetNum
// [0x00020002] 
struct UGHM_DebugMenuItemInt_execSetNum_Params
{
	int32_t                                            Num;                                              		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemInt.DrawMenuItem
// [0x00020002] 
struct UGHM_DebugMenuItemInt_execDrawMenuItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      buf;                                              		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_DebugMenuItemInt.Rev
// [0x00020400] 
struct UGHM_DebugMenuItemInt_execRev_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemInt.UpdateRegistValue
// [0x00020400] 
struct UGHM_DebugMenuItemInt_execUpdateRegistValue_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemInt.UnRegist
// [0x00020400] 
struct UGHM_DebugMenuItemInt_execUnRegist_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemInt.Regist
// [0x00424400] 
struct UGHM_DebugMenuItemInt_execRegist_Params
{
	int32_t                                            editvalue;                                        		// 0x0000 (0x0004) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_DebugMenuItemInt.ChangeNum
// [0x00020400] 
struct UGHM_DebugMenuItemInt_execChangeNum_Params
{
	int32_t                                            addnum;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemInt.DrawSelectedItem
// [0x00020400] 
struct UGHM_DebugMenuItemInt_execDrawSelectedItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemInt.DrawDefaultItem
// [0x00020400] 
struct UGHM_DebugMenuItemInt_execDrawDefaultItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemInt64.KeyXButton
// [0x00020002] 
struct UGHM_DebugMenuItemInt64_execKeyXButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemInt64.KeyRight
// [0x00020002] 
struct UGHM_DebugMenuItemInt64_execKeyRight_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemInt64.KeyLeft
// [0x00020002] 
struct UGHM_DebugMenuItemInt64_execKeyLeft_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemInt64.KeyDown
// [0x00020002] 
struct UGHM_DebugMenuItemInt64_execKeyDown_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemInt64.KeyUp
// [0x00020002] 
struct UGHM_DebugMenuItemInt64_execKeyUp_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemInt64.SetNum
// [0x00020002] 
struct UGHM_DebugMenuItemInt64_execSetNum_Params
{
	uint64_t                                           Num;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemInt64.DrawMenuItem
// [0x00020002] 
struct UGHM_DebugMenuItemInt64_execDrawMenuItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      buf;                                              		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_DebugMenuItemInt64.Rev
// [0x00020400] 
struct UGHM_DebugMenuItemInt64_execRev_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemInt64.UpdateRegistValue
// [0x00020400] 
struct UGHM_DebugMenuItemInt64_execUpdateRegistValue_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemInt64.UnRegist
// [0x00020400] 
struct UGHM_DebugMenuItemInt64_execUnRegist_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemInt64.Regist
// [0x00424400] 
struct UGHM_DebugMenuItemInt64_execRegist_Params
{
	uint64_t                                           editvalue;                                        		// 0x0000 (0x0008) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_DebugMenuItemInt64.ChangeNum
// [0x00020400] 
struct UGHM_DebugMenuItemInt64_execChangeNum_Params
{
	uint64_t                                           addnum;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemInt64.DrawSelectedItem
// [0x00020400] 
struct UGHM_DebugMenuItemInt64_execDrawSelectedItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemInt64.DrawDefaultItem
// [0x00020400] 
struct UGHM_DebugMenuItemInt64_execDrawDefaultItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.LeftStick
// [0x00020002] 
struct UGHM_DebugMenuItemIntArray_execLeftStick_Params
{
	float                                              moveX;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              moveY;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.KeyXButton
// [0x00020002] 
struct UGHM_DebugMenuItemIntArray_execKeyXButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.KeyRight
// [0x00020002] 
struct UGHM_DebugMenuItemIntArray_execKeyRight_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.KeyLeft
// [0x00020002] 
struct UGHM_DebugMenuItemIntArray_execKeyLeft_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.KeyDown
// [0x00020002] 
struct UGHM_DebugMenuItemIntArray_execKeyDown_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.KeyUp
// [0x00020002] 
struct UGHM_DebugMenuItemIntArray_execKeyUp_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.SetNum
// [0x00020000] 
struct UGHM_DebugMenuItemIntArray_execSetNum_Params
{
	float                                              Num;                                              		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.DrawMenuItem
// [0x00020002] 
struct UGHM_DebugMenuItemIntArray_execDrawMenuItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class FString                                      buf;                                              		// 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            maxcols;                                          		// 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                            Rows;                                             		// 0x0020 (0x0004) [0x0000000000000000]               
	// int32_t                                            cols;                                             		// 0x0024 (0x0004) [0x0000000000000000]               
	// float                                              sx;                                               		// 0x0028 (0x0004) [0x0000000000000000]               
	// float                                              sy;                                               		// 0x002C (0x0004) [0x0000000000000000]               
	// float                                              ey;                                               		// 0x0030 (0x0004) [0x0000000000000000]               
	// int32_t                                            currow;                                           		// 0x0034 (0x0004) [0x0000000000000000]               
	// int32_t                                            curcol;                                           		// 0x0038 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.SetParamCellWidth
// [0x00020002] 
struct UGHM_DebugMenuItemIntArray_execSetParamCellWidth_Params
{
	int32_t                                            Width;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.SetParamName
// [0x00020002] 
struct UGHM_DebugMenuItemIntArray_execSetParamName_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      pname;                                            		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.Rev
// [0x00020400] 
struct UGHM_DebugMenuItemIntArray_execRev_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.UpdateRegistValue
// [0x00020400] 
struct UGHM_DebugMenuItemIntArray_execUpdateRegistValue_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.UnRegist
// [0x00020400] 
struct UGHM_DebugMenuItemIntArray_execUnRegist_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.Regist
// [0x00424400] 
struct UGHM_DebugMenuItemIntArray_execRegist_Params
{
	TArray<int32_t>                                    editvalue;                                        		// 0x0000 (0x0010) [0x0000000000400190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.ChangeNum
// [0x00020400] 
struct UGHM_DebugMenuItemIntArray_execChangeNum_Params
{
	int32_t                                            addnum;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.DrawSelectedItem
// [0x00020400] 
struct UGHM_DebugMenuItemIntArray_execDrawSelectedItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.DrawDefaultItem
// [0x00020400] 
struct UGHM_DebugMenuItemIntArray_execDrawDefaultItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemList.Cancel
// [0x00020002] 
struct UGHM_DebugMenuItemList_execCancel_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemList.KeyRight
// [0x00020002] 
struct UGHM_DebugMenuItemList_execKeyRight_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemList.KeyLeft
// [0x00020002] 
struct UGHM_DebugMenuItemList_execKeyLeft_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemList.KeyDown
// [0x00020002] 
struct UGHM_DebugMenuItemList_execKeyDown_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemList.KeyUp
// [0x00020002] 
struct UGHM_DebugMenuItemList_execKeyUp_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemList.CreateSkeltalMeshAnimList
// [0x00020003] 
struct UGHM_DebugMenuItemList_execCreateSkeltalMeshAnimList_Params
{
	class USkeletalMeshComponent*                      SMC;                                              		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	// int32_t                                            animsetnum;                                       		// 0x0008 (0x0004) [0x0000000000000000]               
	// int32_t                                            seqnum;                                           		// 0x000C (0x0004) [0x0000000000000000]               
	// int32_t                                            I;                                                		// 0x0010 (0x0004) [0x0000000000000000]               
	// int32_t                                            D;                                                		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            Cnt;                                              		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemList.DrawMenuItem
// [0x00020002] 
struct UGHM_DebugMenuItemList_execDrawMenuItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            I;                                                		// 0x0008 (0x0004) [0x0000000000000000]               
	// int32_t                                            maxcols;                                          		// 0x000C (0x0004) [0x0000000000000000]               
	// int32_t                                            Rows;                                             		// 0x0010 (0x0004) [0x0000000000000000]               
	// int32_t                                            cols;                                             		// 0x0014 (0x0004) [0x0000000000000000]               
	// float                                              sx;                                               		// 0x0018 (0x0004) [0x0000000000000000]               
	// float                                              sy;                                               		// 0x001C (0x0004) [0x0000000000000000]               
	// float                                              ey;                                               		// 0x0020 (0x0004) [0x0000000000000000]               
	// int32_t                                            currow;                                           		// 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                            curcol;                                           		// 0x0028 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemList.GetSelectIndex
// [0x00020003] 
struct UGHM_DebugMenuItemList_execGetSelectIndex_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItemList.GetNameValue
// [0x00020003] 
struct UGHM_DebugMenuItemList_execGetNameValue_Params
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItemList.GetFloatValue
// [0x00020003] 
struct UGHM_DebugMenuItemList_execGetFloatValue_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItemList.GetIntValue
// [0x00020003] 
struct UGHM_DebugMenuItemList_execGetIntValue_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItemList.DelListAll
// [0x00020003] 
struct UGHM_DebugMenuItemList_execDelListAll_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemList.DelListChild
// [0x00020003] 
struct UGHM_DebugMenuItemList_execDelListChild_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemList.DelListChildByName
// [0x00020003] 
struct UGHM_DebugMenuItemList_execDelListChildByName_Params
{
	class FString                                      iname;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0010 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemList.AddListChildF
// [0x00020003] 
struct UGHM_DebugMenuItemList_execAddListChildF_Params
{
	class FString                                      iname;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              Value;                                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            addnum;                                           		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemList.AddListChildI
// [0x00020003] 
struct UGHM_DebugMenuItemList_execAddListChildI_Params
{
	class FString                                      iname;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Value;                                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            addnum;                                           		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemList.ChangeListType
// [0x00020003] 
struct UGHM_DebugMenuItemList_execChangeListType_Params
{
	uint8_t                                            Type;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemList.RealTimeValueChange
// [0x00020003] 
struct UGHM_DebugMenuItemList_execRealTimeValueChange_Params
{
	bool                                               bRTFlag : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_DebugMenuItemList.UpdateRegistValue
// [0x00020400] 
struct UGHM_DebugMenuItemList_execUpdateRegistValue_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemList.ChangeValue
// [0x00020400] 
struct UGHM_DebugMenuItemList_execChangeValue_Params
{
	int32_t                                            Num;                                              		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemList.UnRegist
// [0x00020400] 
struct UGHM_DebugMenuItemList_execUnRegist_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemList.RegistF
// [0x00424400] 
struct UGHM_DebugMenuItemList_execRegistF_Params
{
	float                                              editvalue;                                        		// 0x0000 (0x0004) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_DebugMenuItemList.RegistI
// [0x00424400] 
struct UGHM_DebugMenuItemList_execRegistI_Params
{
	int32_t                                            editvalue;                                        		// 0x0000 (0x0004) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_DebugMenuItemVector.LeftStick
// [0x00020002] 
struct UGHM_DebugMenuItemVector_execLeftStick_Params
{
	float                                              moveX;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              moveY;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemVector.KeyXButton
// [0x00020002] 
struct UGHM_DebugMenuItemVector_execKeyXButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemVector.KeyRight
// [0x00020002] 
struct UGHM_DebugMenuItemVector_execKeyRight_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemVector.KeyLeft
// [0x00020002] 
struct UGHM_DebugMenuItemVector_execKeyLeft_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemVector.KeyDown
// [0x00020002] 
struct UGHM_DebugMenuItemVector_execKeyDown_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemVector.KeyUp
// [0x00020002] 
struct UGHM_DebugMenuItemVector_execKeyUp_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemVector.SetNum
// [0x00020002] 
struct UGHM_DebugMenuItemVector_execSetNum_Params
{
	struct FVector                                     Num;                                              		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemVector.DrawMenuItem
// [0x00020002] 
struct UGHM_DebugMenuItemVector_execDrawMenuItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemVector.Rev
// [0x00020400] 
struct UGHM_DebugMenuItemVector_execRev_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemVector.UpdateRegistValue
// [0x00020400] 
struct UGHM_DebugMenuItemVector_execUpdateRegistValue_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemVector.UnRegist
// [0x00020400] 
struct UGHM_DebugMenuItemVector_execUnRegist_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemVector.Regist
// [0x00424400] 
struct UGHM_DebugMenuItemVector_execRegist_Params
{
	struct FVector                                     editvalue;                                        		// 0x0000 (0x000C) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_DebugMenuItemVector.ChangeNum
// [0x00020400] 
struct UGHM_DebugMenuItemVector_execChangeNum_Params
{
	int32_t                                            addnum;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemVector.DrawSelectedItem
// [0x00020400] 
struct UGHM_DebugMenuItemVector_execDrawSelectedItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemVector.DrawDefaultItem
// [0x00020400] 
struct UGHM_DebugMenuItemVector_execDrawDefaultItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemWindow.LeftStick
// [0x00020000] 
struct UGHM_DebugMenuItemWindow_execLeftStick_Params
{
	float                                              moveX;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              moveY;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemWindow.RightStick
// [0x00020002] 
struct UGHM_DebugMenuItemWindow_execRightStick_Params
{
	float                                              moveX;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              moveY;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemWindow.DrawMenuItem
// [0x00020002] 
struct UGHM_DebugMenuItemWindow_execDrawMenuItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// float                                              wposx;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
	// float                                              wposy;                                            		// 0x000C (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemWindow.SetWindowName
// [0x00020003] 
struct UGHM_DebugMenuItemWindow_execSetWindowName_Params
{
	class FString                                      wname;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_DebugMenuItemColorPicker.Select
// [0x00020002] 
struct UGHM_DebugMenuItemColorPicker_execSelect_Params
{
	// float                                              wposx;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	// float                                              wposy;                                            		// 0x0004 (0x0004) [0x0000000000000000]               
	// float                                              dposx;                                            		// 0x0008 (0x0004) [0x0000000000000000]               
	// float                                              dposy;                                            		// 0x000C (0x0004) [0x0000000000000000]               
	// float                                              rcurposx;                                         		// 0x0010 (0x0004) [0x0000000000000000]               
	// float                                              rcurposy;                                         		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemColorPicker.LeftStick
// [0x00020002] 
struct UGHM_DebugMenuItemColorPicker_execLeftStick_Params
{
	float                                              moveX;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              moveY;                                            		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemColorPicker.GetColor
// [0x00820003] 
struct UGHM_DebugMenuItemColorPicker_execGetColor_Params
{
	struct FColor                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FColor                                      RGB;                                              		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemColorPicker.SetColor
// [0x00020003] 
struct UGHM_DebugMenuItemColorPicker_execSetColor_Params
{
	struct FColor                                      SetColor;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemColorPicker.DrawMenuItem
// [0x00820002] 
struct UGHM_DebugMenuItemColorPicker_execDrawMenuItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// uint8_t                                            tempR;                                            		// 0x0008 (0x0001) [0x0000000000000000]               
	// uint8_t                                            tempG;                                            		// 0x0009 (0x0001) [0x0000000000000000]               
	// uint8_t                                            tempB;                                            		// 0x000A (0x0001) [0x0000000000000000]               
	// struct FColor                                      drawcol;                                          		// 0x000C (0x0004) [0x0000000000000000]               
	// int32_t                                            X;                                                		// 0x0010 (0x0004) [0x0000000000000000]               
	// int32_t                                            Y;                                                		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            divx;                                             		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            divy;                                             		// 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                            colx;                                             		// 0x0020 (0x0004) [0x0000000000000000]               
	// int32_t                                            coly;                                             		// 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                            colx2;                                            		// 0x0028 (0x0004) [0x0000000000000000]               
	// int32_t                                            coly2;                                            		// 0x002C (0x0004) [0x0000000000000000]               
	// int32_t                                            svdivsize;                                        		// 0x0030 (0x0004) [0x0000000000000000]               
	// int32_t                                            huedivsize;                                       		// 0x0034 (0x0004) [0x0000000000000000]               
	// float                                              wposx;                                            		// 0x0038 (0x0004) [0x0000000000000000]               
	// float                                              wposy;                                            		// 0x003C (0x0004) [0x0000000000000000]               
	// float                                              dposx;                                            		// 0x0040 (0x0004) [0x0000000000000000]               
	// float                                              dposy;                                            		// 0x0044 (0x0004) [0x0000000000000000]               
	// float                                              rcurposx;                                         		// 0x0048 (0x0004) [0x0000000000000000]               
	// float                                              rcurposy;                                         		// 0x004C (0x0004) [0x0000000000000000]               
	// struct FVector                                     subitempos;                                       		// 0x0050 (0x000C) [0x0000000000000000]               
	// float                                              realhue;                                          		// 0x005C (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemColorPicker.RGB2HSV
// [0x00420401] 
struct UGHM_DebugMenuItemColorPicker_execRGB2HSV_Params
{
	uint8_t                                            R;                                                		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            G;                                                		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            B;                                                		// 0x0002 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            H;                                                		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint8_t                                            S;                                                		// 0x0008 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint8_t                                            V;                                                		// 0x0009 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_DebugMenuItemColorPicker.HSV2RGB
// [0x00420401] 
struct UGHM_DebugMenuItemColorPicker_execHSV2RGB_Params
{
	int32_t                                            H;                                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            S;                                                		// 0x0004 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            V;                                                		// 0x0005 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            R;                                                		// 0x0006 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint8_t                                            G;                                                		// 0x0007 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint8_t                                            B;                                                		// 0x0008 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_HitCheck.HitCheck_Capsule_Sphere
// [0x00022401] 
struct UGHM_HitCheck_execHitCheck_Capsule_Sphere_Params
{
	struct FVector                                     CapPos1;                                          		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     CapPos2;                                          		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              CapR;                                             		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     SpherePos;                                        		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              SphereR;                                          		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_HitCheck.HitCheck_Segment_Triangle
// [0x00422401] 
struct UGHM_HitCheck_execHitCheck_Segment_Triangle_Params
{
	struct FVector                                     SegmentPos1;                                      		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     LinePos2;                                         		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     TrianglePos1;                                     		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     TrianglePos2;                                     		// 0x0024 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     TrianglePos3;                                     		// 0x0030 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitPos;                                           		// 0x003C (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_HitCheck.HitCheck_Capsule_Capsule
// [0x00022401] 
struct UGHM_HitCheck_execHitCheck_Capsule_Capsule_Params
{
	struct FVector                                     Cap1Pos1;                                         		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Cap1Pos2;                                         		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              Cap1R;                                            		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Cap2Pos1;                                         		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Cap2Pos2;                                         		// 0x0028 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              Cap2R;                                            		// 0x0034 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0038 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_HitCheck.HitCheck_Capsule_Triangle
// [0x00022401] 
struct UGHM_HitCheck_execHitCheck_Capsule_Triangle_Params
{
	struct FVector                                     CapPos1;                                          		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     CapPos2;                                          		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              CapR;                                             		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     TrianglePos1;                                     		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     TrianglePos2;                                     		// 0x0028 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     TrianglePos3;                                     		// 0x0034 (0x000C) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_HitCheck.TriangleBarycenter
// [0x00422401] 
struct UGHM_HitCheck_execTriangleBarycenter_Params
{
	struct FVector                                     TrianglePos1;                                     		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     TrianglePos2;                                     		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     TrianglePos3;                                     		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Position;                                         		// 0x0024 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              U;                                                		// 0x0030 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              V;                                                		// 0x0034 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              W;                                                		// 0x0038 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_HitCheck.Segment_Triangle_MinLength
// [0x00022401] 
struct UGHM_HitCheck_execSegment_Triangle_MinLength_Params
{
	struct FVector                                     SegmentPos1;                                      		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     SegmentPos2;                                      		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     TrianglePos1;                                     		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     TrianglePos2;                                     		// 0x0024 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     TrianglePos3;                                     		// 0x0030 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x003C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_HitCheck.Get_Segment_Point_MinPosition
// [0x00022401] 
struct UGHM_HitCheck_execGet_Segment_Point_MinPosition_Params
{
	struct FVector                                     SegmentPos1;                                      		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     SegmentPos2;                                      		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     PointPos;                                         		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      		// 0x0024 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_HitCheck.Segment_Point_MinLength
// [0x00022401] 
struct UGHM_HitCheck_execSegment_Point_MinLength_Params
{
	struct FVector                                     SegmentPos1;                                      		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     SegmentPos2;                                      		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     PointPos;                                         		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_HitCheck.Segment_Segment_MinLength
// [0x00022401] 
struct UGHM_HitCheck_execSegment_Segment_MinLength_Params
{
	struct FVector                                     SegmentAPos1;                                     		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     SegmentAPos2;                                     		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     SegmentBPos1;                                     		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     SegmentBPos2;                                     		// 0x0024 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0030 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_HitCheck.Get_Line_Point_MinPosition
// [0x00022401] 
struct UGHM_HitCheck_execGet_Line_Point_MinPosition_Params
{
	struct FVector                                     Point;                                            		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     LinePos1;                                         		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     LinePos2;                                         		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      		// 0x0024 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_ParticleModuleCameraShake.PlayWorldCameraShake
// [0x00020802] 
struct UGHM_ParticleModuleCameraShake_eventPlayWorldCameraShake_Params
{
	class AActor*                                      Owner;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Epicenter;                                        		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	// class APlayerController*                           PC;                                               		// 0x0014 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_ParticleModuleCollisionLazy.IsTestCollision
// [0x00020800] 
struct UGHM_ParticleModuleCollisionLazy_eventIsTestCollision_Params
{
	class UGHM_ParticleModuleCollisionLazy*            pThis;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_ParticleModuleCollisionLazy.OnParticleCollision
// [0x00020800] 
struct UGHM_ParticleModuleCollisionLazy_eventOnParticleCollision_Params
{
	class UParticleSystemComponent*                    OwnerComponent;                                   		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	class UParticleLODLevel*                           LODLevel;                                         		// 0x0008 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	class AActor*                                      HitActor;                                         		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x0024 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0030 (0x0028) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     MoveDirection;                                    		// 0x0058 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_ParticleModuleRumble.PlayForceFeedbackWaveform
// [0x00020802] 
struct UGHM_ParticleModuleRumble_eventPlayForceFeedbackWaveform_Params
{
	class AActor*                                      Owner;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class APlayerController*                           PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_SeqAct_ControlMovie.GetObjClassVersion
// [0x00022802] 
struct UGHM_SeqAct_ControlMovie_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SeqAct_ControlMovie.ClearInput
// [0x00020800] 
struct UGHM_SeqAct_ControlMovie_eventClearInput_Params
{
};

// Function GHMEngine.GHM_SeqAct_DspFXChain.SetParameterValue
// [0x00020802] 
struct UGHM_SeqAct_DspFXChain_eventSetParameterValue_Params
{
	// int32_t                                            iChooseParam;                                     		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_SeqAct_DspFXChain.ToggleEffect
// [0x00020802] 
struct UGHM_SeqAct_DspFXChain_eventToggleEffect_Params
{
	bool                                               inOnOff : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_SeqAct_DspFXChain.DestroyChain
// [0x00020802] 
struct UGHM_SeqAct_DspFXChain_eventDestroyChain_Params
{
};

// Function GHMEngine.GHM_SeqAct_DspFXChain.CreateChain
// [0x00020802] 
struct UGHM_SeqAct_DspFXChain_eventCreateChain_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
	// struct FName                                       EffectName;                                       		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_SeqAct_DspFXChain.GetEffectName
// [0x00020002] 
struct UGHM_SeqAct_DspFXChain_execGetEffectName_Params
{
	uint8_t                                            inEffectType;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SeqAct_ObjectFade.HideActors
// [0x00020802] 
struct UGHM_SeqAct_ObjectFade_eventHideActors_Params
{
	// class UObject*                                     TempObject;                                       		// 0x0000 (0x0008) [0x0000000000000000]               
	// class AActor*                                      tempActor;                                        		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UPrimitiveComponent*                         TempComponent;                                    		// 0x0010 (0x0008) [0x0000000004000000] (CPF_EditInline)
};

// Function GHMEngine.GHM_SeqAct_ObjectFade.DestroyTargets
// [0x00020802] 
struct UGHM_SeqAct_ObjectFade_eventDestroyTargets_Params
{
	// class UObject*                                     TempObject;                                       		// 0x0000 (0x0008) [0x0000000000000000]               
	// class AActor*                                      tempActor;                                        		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_SeqAct_ObjectFade.StartFade
// [0x00020802] 
struct UGHM_SeqAct_ObjectFade_eventStartFade_Params
{
	// class UObject*                                     TempObject;                                       		// 0x0000 (0x0008) [0x0000000000000000]               
	// class AActor*                                      tempActor;                                        		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UPrimitiveComponent*                         TempComponent;                                    		// 0x0010 (0x0008) [0x0000000004000000] (CPF_EditInline)
};

// Function GHMEngine.GHM_SeqAct_PlayBgm.TriggerEventClass
// [0x00020802] 
struct UGHM_SeqAct_PlayBgm_eventTriggerEventClass_Params
{
};

// Function GHMEngine.GHM_SeqAct_PlayBgm.GetObjClassVersion
// [0x00022802] 
struct UGHM_SeqAct_PlayBgm_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SeqAct_PlaySound.GetObjClassVersion
// [0x00022802] 
struct UGHM_SeqAct_PlaySound_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SeqAct_PlaySoundMarker.OverrideNext
// [0x00024400] 
struct UGHM_SeqAct_PlaySoundMarker_execOverrideNext_Params
{
	class FString                                      inActionName;                                     		// 0x0000 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            inTrackIndex;                                     		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class FString                                      inMarkerLabel;                                    		// 0x0014 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      inEndMarkerLabel;                                 		// 0x0024 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_SeqAct_PlaySoundMarker.SetActionEnabled
// [0x00020400] 
struct UGHM_SeqAct_PlaySoundMarker_execSetActionEnabled_Params
{
	bool                                               inIsEnabled : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      inActionName;                                     		// 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_SeqAct_PlaySoundMarker.PerformPresetAction_Manual
// [0x00020400] 
struct UGHM_SeqAct_PlaySoundMarker_execPerformPresetAction_Manual_Params
{
	class FString                                      inActionName;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_SeqAct_PlaySoundMarker.SetPerformMode
// [0x00020400] 
struct UGHM_SeqAct_PlaySoundMarker_execSetPerformMode_Params
{
	uint8_t                                            inNewMode;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SeqAct_PlaySoundMarker.MarkerNotification
// [0x00020400] 
struct UGHM_SeqAct_PlaySoundMarker_execMarkerNotification_Params
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            markerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      markerName;                                       		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_SeqAct_PlaySoundMarker.Unregister
// [0x00020802] 
struct UGHM_SeqAct_PlaySoundMarker_eventUnregister_Params
{
};

// Function GHMEngine.GHM_SeqAct_PlaySoundMarker.RegisterForMarkerCallback
// [0x00020802] 
struct UGHM_SeqAct_PlaySoundMarker_eventRegisterForMarkerCallback_Params
{
};

// Function GHMEngine.GHM_SeqAct_RawInput.GetObjClassVersion
// [0x00022802] 
struct UGHM_SeqAct_RawInput_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SeqAct_RawInput.Update
// [0x00020802] 
struct UGHM_SeqAct_RawInput_eventUpdate_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class APlayerController*                           PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_SeqAct_RawInput.Activated
// [0x00020802] 
struct UGHM_SeqAct_RawInput_eventActivated_Params
{
};

// Function GHMEngine.GHM_SeqAct_SetAudioParameter.SendSignal
// [0x00020802] 
struct UGHM_SeqAct_SetAudioParameter_eventSendSignal_Params
{
};

// Function GHMEngine.GHM_SeqCond_SwitchString.RemoveValueEntry
// [0x00020802] 
struct UGHM_SeqCond_SwitchString_eventRemoveValueEntry_Params
{
	int32_t                                            RemoveIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SeqCond_SwitchString.InsertValueEntry
// [0x00020802] 
struct UGHM_SeqCond_SwitchString_eventInsertValueEntry_Params
{
	int32_t                                            InsertIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SeqCond_SwitchString.IsFallThruEnabled
// [0x00020802] 
struct UGHM_SeqCond_SwitchString_eventIsFallThruEnabled_Params
{
	int32_t                                            ValueIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SeqCond_SwitchString.VerifyDefaultCaseValue
// [0x00020802] 
struct UGHM_SeqCond_SwitchString_eventVerifyDefaultCaseValue_Params
{
};

// Function GHMEngine.GHM_SeqEvent_RawButtons.ButtonPressed
// [0x00020802] 
struct UGHM_SeqEvent_RawButtons_eventButtonPressed_Params
{
	struct FName                                       ButtonName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            EventType;                                        		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ControllerId;                                     		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            OutputIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]               
	// TArray<int32_t>                                    ActivateIndices;                                  		// 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_SeqEvent_RawButtons.GetObjClassVersion
// [0x00022802] 
struct UGHM_SeqEvent_RawButtons_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SeqEvent_RawButtons.Toggled
// [0x00020802] 
struct UGHM_SeqEvent_RawButtons_eventToggled_Params
{
};

// Function GHMEngine.GHM_SeqEvent_RawButtons.RegisterWithViewport
// [0x00020002] 
struct UGHM_SeqEvent_RawButtons_execRegisterWithViewport_Params
{
	// class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_SeqEvent_RawButtons.RegisterEvent
// [0x00020802] 
struct UGHM_SeqEvent_RawButtons_eventRegisterEvent_Params
{
	// class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_AmbientSoundMovable.ApplyCheckpointRecord
// [0x00420002] 
struct AGHM_AmbientSoundMovable_execApplyCheckpointRecord_Params
{
	struct AGHM_AmbientSoundMovable_FCheckpointRecord  Record;                                           		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_AmbientSoundMovable.CreateCheckpointRecord
// [0x00420002] 
struct AGHM_AmbientSoundMovable_execCreateCheckpointRecord_Params
{
	struct AGHM_AmbientSoundMovable_FCheckpointRecord  Record;                                           		// 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_AmbientSoundMovable.OnToggle
// [0x00020102] 
struct AGHM_AmbientSoundMovable_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_AmbientSoundMovable.StopPlaying
// [0x00020002] 
struct AGHM_AmbientSoundMovable_execStopPlaying_Params
{
};

// Function GHMEngine.GHM_AmbientSoundMovable.StartPlaying
// [0x00020002] 
struct AGHM_AmbientSoundMovable_execStartPlaying_Params
{
};

// Function GHMEngine.GHM_AudioDspFX.UpdateParameter
// [0x00020400] 
struct UGHM_AudioDspFX_execUpdateParameter_Params
{
	class UGHM_AudioDspFXParameter*                    inDspFXParameter;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_AudioDspFX.InitializeEffect
// [0x00020400] 
struct UGHM_AudioDspFX_execInitializeEffect_Params
{
	struct FName                                       inEffectName;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGHM_AudioDspFXParams*                       inDspFXParameters;                                		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGHM_AudioDspFXLibrary*                      inDspFXLibrary;                                   		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_AudioDspFXManager.SetEffectParameter
// [0x00020400] 
struct UGHM_AudioDspFXManager_execSetEffectParameter_Params
{
	int32_t                                            inDspFXChainId;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            inDspFxEffectIndex;                               		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UGHM_AudioDspFXParameter*                    inDspFXParameter;                                 		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_AudioDspFXManager.ToggleEffect
// [0x00020400] 
struct UGHM_AudioDspFXManager_execToggleEffect_Params
{
	int32_t                                            inDspFXChainId;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            inDspFxEffectIndex;                               		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               inDspOnOff : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_AudioDspFXManager.DestroyEffectChain
// [0x00020400] 
struct UGHM_AudioDspFXManager_execDestroyEffectChain_Params
{
	int32_t                                            inDspFXChainId;                                   		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_AudioDspFXManager.CreateEffectChain
// [0x00020400] 
struct UGHM_AudioDspFXManager_execCreateEffectChain_Params
{
	TArray<struct FName>                               EffectsNames;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            inLevel;                                          		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_GameSoundHelper.FindPlaySoundWithMarkerInstance
// [0x00020002] 
struct UGHM_GameSoundHelper_execFindPlaySoundWithMarkerInstance_Params
{
	class FString                                      inSoundMarkerIdentifier;                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGHM_SeqAct_PlaySoundMarker*                 ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_GameSoundHelper.SetGamePause
// [0x00020000] 
struct UGHM_GameSoundHelper_execSetGamePause_Params
{
	bool                                               flag : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_GameSoundHelper.GamePause
// [0x00020802] 
struct UGHM_GameSoundHelper_eventGamePause_Params
{
	bool                                               bInSetPause : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_GameSoundHelper.Initialize
// [0x00020800] 
struct UGHM_GameSoundHelper_eventInitialize_Params
{
};

// Function GHMEngine.GHM_GameSoundHelper.UnregisterAll
// [0x00020802] 
struct UGHM_GameSoundHelper_eventUnregisterAll_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_GameSoundHelper.UnregisterPlaySoundWithMarker
// [0x00020002] 
struct UGHM_GameSoundHelper_execUnregisterPlaySoundWithMarker_Params
{
	class UGHM_SeqAct_PlaySoundMarker*                 inPlaySoundMarkerToUnRegister;                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_GameSoundHelper.RegisterPlaySoundWithMarker
// [0x00020002] 
struct UGHM_GameSoundHelper_execRegisterPlaySoundWithMarker_Params
{
	class UGHM_SeqAct_PlaySoundMarker*                 inPlaySoundMarkerToRegister;                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_GameSoundHelper.ReceiveSoundMarker
// [0x00020002] 
struct UGHM_GameSoundHelper_execReceiveSoundMarker_Params
{
	float                                              inTime;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            inMarkerIndex;                                    		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      inMarkerName;                                     		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_SoundDebugUtility.ResetSoundDisplay2DValues
// [0x00020002] 
struct UGHM_SoundDebugUtility_execResetSoundDisplay2DValues_Params
{
};

// Function GHMEngine.GHM_SoundDebugUtility.SetSoundCue
// [0x00020802] 
struct UGHM_SoundDebugUtility_eventSetSoundCue_Params
{
	class USoundCue*                                   InSoundCue;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundDebugUtility.Instance
// [0x00022401] 
struct UGHM_SoundDebugUtility_execInstance_Params
{
	class UGHM_SoundDebugUtility*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.ToggleTweekSoundVolume
// [0x00020202] 
struct UGHM_SoundManager_execToggleTweekSoundVolume_Params
{
};

// Function GHMEngine.GHM_SoundManager.DumpSoundVolumeSettings
// [0x00020600] 
struct UGHM_SoundManager_execDumpSoundVolumeSettings_Params
{
};

// Function GHMEngine.GHM_SoundManager.DeleteDebugMenuItems
// [0x00020800] 
struct UGHM_SoundManager_eventDeleteDebugMenuItems_Params
{
	class UGHM_DebugMenu*                              DebugMenu;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.GetSoundDebugUtility
// [0x00020400] 
struct UGHM_SoundManager_execGetSoundDebugUtility_Params
{
	class UGHM_SoundDebugUtility*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.ResetSoundDisplay2DValues
// [0x00020202] 
struct UGHM_SoundManager_execResetSoundDisplay2DValues_Params
{
};

// Function GHMEngine.GHM_SoundManager.SeeSound
// [0x00020202] 
struct UGHM_SoundManager_execSeeSound_Params
{
};

// Function GHMEngine.GHM_SoundManager.SeeSound2D
// [0x00020202] 
struct UGHM_SoundManager_execSeeSound2D_Params
{
};

// Function GHMEngine.GHM_SoundManager.DebugMenuExecCommand_DisplayFilterOwnerActor
// [0x00020002] 
struct UGHM_SoundManager_execDebugMenuExecCommand_DisplayFilterOwnerActor_Params
{
	// int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	// class FString                                      SelectedActorName;                                		// 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_SoundManager.DebugMenuExecCommand_ResetSoundDisplayActorList
// [0x00020002] 
struct UGHM_SoundManager_execDebugMenuExecCommand_ResetSoundDisplayActorList_Params
{
	// class APawn*                                       iPawn;                                            		// 0x0000 (0x0008) [0x0000000000000000]               
	// class AAmbientSound*                               iAmbient;                                         		// 0x0008 (0x0008) [0x0000000000000000]               
	// TArray<struct FName>                               ActorNameList;                                    		// 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            Index;                                            		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_SoundManager.DebugMenuExecCommand_ClearDisplayFilterSoundClass
// [0x00020002] 
struct UGHM_SoundManager_execDebugMenuExecCommand_ClearDisplayFilterSoundClass_Params
{
};

// Function GHMEngine.GHM_SoundManager.DebugMenuExecCommand_DisplayFilterSoundClass
// [0x00020002] 
struct UGHM_SoundManager_execDebugMenuExecCommand_DisplayFilterSoundClass_Params
{
	// int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]               
	// class FString                                      SelectedSoundClassName;                           		// 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_SoundManager.MyConsoleCommand
// [0x00020002] 
struct UGHM_SoundManager_execMyConsoleCommand_Params
{
	class FString                                      Cmd;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_SoundManager.ToggleDisplayRadioFilterState
// [0x00020202] 
struct UGHM_SoundManager_execToggleDisplayRadioFilterState_Params
{
};

// Function GHMEngine.GHM_SoundManager.SetRadioFilterForMusicToDebugMenu
// [0x00020802] 
struct UGHM_SoundManager_eventSetRadioFilterForMusicToDebugMenu_Params
{
	bool                                               InEnableRadioFilterForMusic : 1;                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_SoundManager.SetRadioFilterForMusic
// [0x00020400] 
struct UGHM_SoundManager_execSetRadioFilterForMusic_Params
{
	bool                                               enableRadioFilterForMusic : 1;                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_SoundManager.ToggleRadioFilterForMusic
// [0x00020202] 
struct UGHM_SoundManager_execToggleRadioFilterForMusic_Params
{
	// bool                                               enableRadioFilter : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GHMEngine.GHM_SoundManager.DumpReverbAll
// [0x00020400] 
struct UGHM_SoundManager_execDumpReverbAll_Params
{
};

// Function GHMEngine.GHM_SoundManager.ToggleDisplayReverbName
// [0x00020202] 
struct UGHM_SoundManager_execToggleDisplayReverbName_Params
{
};

// Function GHMEngine.GHM_SoundManager.ApplyReverbTuning
// [0x00020400] 
struct UGHM_SoundManager_execApplyReverbTuning_Params
{
	struct FReverbTuningParam                          InReverbTuningParam;                              		// 0x0000 (0x0034) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.ApplyReverbTuningDelegate
// [0x00020002] 
struct UGHM_SoundManager_execApplyReverbTuningDelegate_Params
{
};

// Function GHMEngine.GHM_SoundManager.ReverbChanged
// [0x00020802] 
struct UGHM_SoundManager_eventReverbChanged_Params
{
	struct FReverbTuningParam                          InReverbTuningParam;                              		// 0x0000 (0x0034) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.AddDebugMenuTuningReverb
// [0x00020000] 
struct UGHM_SoundManager_execAddDebugMenuTuningReverb_Params
{
	class UGHM_DebugMenu*                              DebugMenu;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.AddDebugMenuDisplaySoundClassMenu
// [0x00020000] 
struct UGHM_SoundManager_execAddDebugMenuDisplaySoundClassMenu_Params
{
	class UGHM_DebugMenu*                              DebugMenu;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.GetSoundClassList
// [0x00420400] 
struct UGHM_SoundManager_execGetSoundClassList_Params
{
	TArray<struct FName>                               OutSoundClassList;                                		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.AddDebugMenuItems
// [0x00020000] 
struct UGHM_SoundManager_execAddDebugMenuItems_Params
{
	class UGHM_DebugMenu*                              DebugMenu;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.DspFXToggleEffect
// [0x00020401] 
struct UGHM_SoundManager_execDspFXToggleEffect_Params
{
	int32_t                                            inFxChainId;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       inEffectName;                                     		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               inEnabled : 1;                                    		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.DspFXSetParameterValue
// [0x00024401] 
struct UGHM_SoundManager_execDspFXSetParameterValue_Params
{
	int32_t                                            inFxChainId;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       inEffectName;                                     		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       inParameterName;                                  		// 0x000C (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              inFloatParam;                                     		// 0x0014 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              inInterpolation;                                  		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.DspFXDestroyChain
// [0x00020401] 
struct UGHM_SoundManager_execDspFXDestroyChain_Params
{
	int32_t                                            inFxChainId;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.DspFXCreateChain
// [0x00024401] 
struct UGHM_SoundManager_execDspFXCreateChain_Params
{
	TArray<struct FName>                               inEffectNames;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            inLevel;                                          		// 0x0010 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.MarkerEvent
// [0x00020802] 
struct UGHM_SoundManager_eventMarkerEvent_Params
{
	float                                              inTime;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            inMarkerIndex;                                    		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      inMarkerName;                                     		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_SoundManager.SetSoundClassVolume
// [0x00020400] 
struct UGHM_SoundManager_execSetSoundClassVolume_Params
{
	struct FName                                       SoundClassName;                                   		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Volume;                                           		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.FadeOutBgm
// [0x00020401] 
struct UGHM_SoundManager_execFadeOutBgm_Params
{
	int32_t                                            Handle;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              FadeOutDuration;                                  		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              FadeVolumeLevel;                                  		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.FadeInBgm
// [0x00020401] 
struct UGHM_SoundManager_execFadeInBgm_Params
{
	int32_t                                            Handle;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              FadeInDuration;                                   		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              FadeVolumeLevel;                                  		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.GetBgmUsedMemorySize
// [0x00020401] 
struct UGHM_SoundManager_execGetBgmUsedMemorySize_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.IsPlayBgmN
// [0x00020401] 
struct UGHM_SoundManager_execIsPlayBgmN_Params
{
	struct FName                                       Filename;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.IsPlayBgm
// [0x00020401] 
struct UGHM_SoundManager_execIsPlayBgm_Params
{
	int32_t                                            Handle;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.IsFadingOutBgmN
// [0x00020401] 
struct UGHM_SoundManager_execIsFadingOutBgmN_Params
{
	struct FName                                       Filename;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.IsFadingOutBgm
// [0x00020401] 
struct UGHM_SoundManager_execIsFadingOutBgm_Params
{
	int32_t                                            Handle;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.IsFadingInBgmN
// [0x00020401] 
struct UGHM_SoundManager_execIsFadingInBgmN_Params
{
	struct FName                                       Filename;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.IsFadingInBgm
// [0x00020401] 
struct UGHM_SoundManager_execIsFadingInBgm_Params
{
	int32_t                                            Handle;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.UnPauseBgm
// [0x00020401] 
struct UGHM_SoundManager_execUnPauseBgm_Params
{
	int32_t                                            Handle;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.UnPauseBgmN
// [0x00020401] 
struct UGHM_SoundManager_execUnPauseBgmN_Params
{
	struct FName                                       Filename;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.PauseBgm
// [0x00020401] 
struct UGHM_SoundManager_execPauseBgm_Params
{
	int32_t                                            Handle;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.PauseBgmN
// [0x00020401] 
struct UGHM_SoundManager_execPauseBgmN_Params
{
	struct FName                                       Filename;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.StopAllMatineeSkipBgm
// [0x00020401] 
struct UGHM_SoundManager_execStopAllMatineeSkipBgm_Params
{
	float                                              in_fadeTime;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.StopAllBgm
// [0x00020401] 
struct UGHM_SoundManager_execStopAllBgm_Params
{
	float                                              in_fadeTime;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.StopBgm
// [0x00020401] 
struct UGHM_SoundManager_execStopBgm_Params
{
	int32_t                                            Handle;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              in_fadeTime;                                      		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.StopBgmN
// [0x00020401] 
struct UGHM_SoundManager_execStopBgmN_Params
{
	struct FName                                       Filename;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              in_fadeTime;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.PlayBgm
// [0x00024401] 
struct UGHM_SoundManager_execPlayBgm_Params
{
	int32_t                                            Handle;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              in_startVol;                                      		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              in_endVol;                                        		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              in_fadeTime;                                      		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SoundClass;                                       		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              in_RearChannelVolumeMultiplier;                   		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               m_bOneShot : 1;                                   		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               bMatineeSkip : 1;                                 		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_SoundManager.PlayBgmN
// [0x00024401] 
struct UGHM_SoundManager_execPlayBgmN_Params
{
	struct FName                                       Filename;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              in_startVol;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              in_endVol;                                        		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              in_fadeTime;                                      		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SoundClass;                                       		// 0x0014 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              in_RearChannelVolumeMultiplier;                   		// 0x001C (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               m_bOneShot : 1;                                   		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               bMatineeSkip : 1;                                 		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_SoundManager.IsPreLoadedN
// [0x00020401] 
struct UGHM_SoundManager_execIsPreLoadedN_Params
{
	struct FName                                       Filename;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.IsPreLoaded
// [0x00020401] 
struct UGHM_SoundManager_execIsPreLoaded_Params
{
	int32_t                                            InHandle;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.PreLoadBgm
// [0x00020401] 
struct UGHM_SoundManager_execPreLoadBgm_Params
{
	struct FName                                       Filename;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.GetGameSoundHelper
// [0x00020401] 
struct UGHM_SoundManager_execGetGameSoundHelper_Params
{
	class UGHM_GameSoundHelper*                        ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.SetSoundClassToBypassUserMusic
// [0x00020401] 
struct UGHM_SoundManager_execSetSoundClassToBypassUserMusic_Params
{
	struct FName                                       inSoundClassName;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.SetSoundClassToOneSoundPerActor
// [0x00020401] 
struct UGHM_SoundManager_execSetSoundClassToOneSoundPerActor_Params
{
	class FString                                      inSoundClassName;                                 		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_SoundManager.SetPropertyValueInSoundNodes
// [0x00424401] 
struct UGHM_SoundManager_execSetPropertyValueInSoundNodes_Params
{
	class USoundCue*                                   InSoundCue;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      owningActor;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      inSoundNodeClass;                                 		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       inPropertyName;                                   		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              inFloatValue;                                     		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      inNodeInstanceName;                               		// 0x0024 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            opResult;                                         		// 0x0034 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SoundManager.GetPropertyValueInSoundNode
// [0x00424401] 
struct UGHM_SoundManager_execGetPropertyValueInSoundNode_Params
{
	class USoundCue*                                   InSoundCue;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      owningActor;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      inSoundNodeClass;                                 		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       inPropertyName;                                   		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               inGetOnlyDefaultValue : 1;                        		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      inNodeInstanceName;                               		// 0x0024 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            opResult;                                         		// 0x0034 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      		// 0x0038 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.ScaleInRange
// [0x00020400] 
struct UGHM_SoundManager_execScaleInRange_Params
{
	float                                              inputValue;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              minInputRange;                                    		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              maxInputRange;                                    		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              minOutputRange;                                   		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              maxOutputRange;                                   		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               invert : 1;                                       		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.EnablePadSpeaker
// [0x00020400] 
struct UGHM_SoundManager_execEnablePadSpeaker_Params
{
	int32_t                                            PadNo;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               isPadSpeakerEnable : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_SoundManager.SetAudioLanguage
// [0x00024400] 
struct UGHM_SoundManager_execSetAudioLanguage_Params
{
	class FString                                      inNewLanguage;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               bReloadObjects : 1;                               		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_SoundManager.GetAudioLanguage
// [0x00020400] 
struct UGHM_SoundManager_execGetAudioLanguage_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_SoundManager.SetMultiChannelMode
// [0x00020401] 
struct UGHM_SoundManager_execSetMultiChannelMode_Params
{
	uint8_t                                            inSelectedMultiChannelMode;                       		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundManager.GetMultiChannelMode
// [0x00020401] 
struct UGHM_SoundManager_execGetMultiChannelMode_Params
{
	uint8_t                                            ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.IsAudioEnabled
// [0x00020401] 
struct UGHM_SoundManager_execIsAudioEnabled_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.SetNPCTalkMode
// [0x00024401] 
struct UGHM_SoundManager_execSetNPCTalkMode_Params
{
	bool                                               Enable : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ResetAllClassProperties : 1;                      		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_SoundManager.SetSoundModeBody
// [0x00444401] 
struct UGHM_SoundManager_execSetSoundModeBody_Params
{
	struct FName                                       newSoundMode;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bResetAllClassProperties : 1;                     		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            opResult;                                         		// 0x000C (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SoundManager.SetSoundMode
// [0x00424401] 
struct UGHM_SoundManager_execSetSoundMode_Params
{
	struct FName                                       newSoundMode;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bResetAllClassProperties : 1;                     		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            opResult;                                         		// 0x000C (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SoundManager.GetCurrentSoundMode
// [0x00020401] 
struct UGHM_SoundManager_execGetCurrentSoundMode_Params
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.FadeOutAllSounds
// [0x00424401] 
struct UGHM_SoundManager_execFadeOutAllSounds_Params
{
	float                                              FadeTime;                                         		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               bShouldStopUISounds : 1;                          		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            opResult;                                         		// 0x0008 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SoundManager.StopSoundsSoundClassesNotMatched
// [0x00424401] 
struct UGHM_SoundManager_execStopSoundsSoundClassesNotMatched_Params
{
	float                                              FadeTime;                                         		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	TArray<class USoundClass*>                         inSoundClasses;                                   		// 0x0004 (0x0010) [0x0000000000400192] (CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint8_t                                            opResult;                                         		// 0x0014 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SoundManager.StopSoundsSoundClassesMatched
// [0x00424401] 
struct UGHM_SoundManager_execStopSoundsSoundClassesMatched_Params
{
	float                                              FadeTime;                                         		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	TArray<class USoundClass*>                         inSoundClasses;                                   		// 0x0004 (0x0010) [0x0000000000400192] (CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint8_t                                            opResult;                                         		// 0x0014 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SoundManager.StopAllSounds
// [0x00424401] 
struct UGHM_SoundManager_execStopAllSounds_Params
{
	float                                              FadeTime;                                         		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               bShouldStopUISounds : 1;                          		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            opResult;                                         		// 0x0008 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SoundManager.UnPauseAllSounds
// [0x00424401] 
struct UGHM_SoundManager_execUnPauseAllSounds_Params
{
	float                                              FadeTime;                                         		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            opResult;                                         		// 0x0004 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SoundManager.PauseAllSounds
// [0x00424401] 
struct UGHM_SoundManager_execPauseAllSounds_Params
{
	float                                              FadeTime;                                         		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            opResult;                                         		// 0x0004 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SoundManager.StopSoundsOnActor
// [0x00424401] 
struct UGHM_SoundManager_execStopSoundsOnActor_Params
{
	class AActor*                                      owningActor;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            opResult;                                         		// 0x000C (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SoundManager.SetRealtimeParameterValue
// [0x00020401] 
struct UGHM_SoundManager_execSetRealtimeParameterValue_Params
{
	class UAudioComponent*                             InAudioComponent;                                 		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	uint8_t                                            inParameterType;                                  		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              inValue;                                          		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.UnPauseAudioComponent
// [0x00424400] 
struct UGHM_SoundManager_execUnPauseAudioComponent_Params
{
	class UAudioComponent*                             Component;                                        		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	uint8_t                                            opResult;                                         		// 0x0008 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SoundManager.PauseAudioComponent
// [0x00424400] 
struct UGHM_SoundManager_execPauseAudioComponent_Params
{
	class UAudioComponent*                             Component;                                        		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	uint8_t                                            opResult;                                         		// 0x0008 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SoundManager.StopAudioComponent
// [0x00424400] 
struct UGHM_SoundManager_execStopAudioComponent_Params
{
	class UAudioComponent*                             Component;                                        		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              Volume;                                           		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            opResult;                                         		// 0x0010 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SoundManager.PlayAudioComponent
// [0x00424400] 
struct UGHM_SoundManager_execPlayAudioComponent_Params
{
	class UAudioComponent*                             Component;                                        		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              Volume;                                           		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class FString                                      inStartMarkerLabel;                               		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      inEndMarkerLabel;                                 		// 0x0020 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            opResult;                                         		// 0x0030 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SoundManager.FindAudioComponent
// [0x00424401] 
struct UGHM_SoundManager_execFindAudioComponent_Params
{
	class USoundCue*                                   InSoundCue;                                       		// 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      owingActor;                                       		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	TArray<class UAudioComponent*>                     IgnoreList;                                       		// 0x0010 (0x0010) [0x0000000004400190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink | CPF_EditInline)
	class UAudioComponent*                             ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GHMEngine.GHM_SoundManager.SetSoundParameter
// [0x00020401] 
struct UGHM_SoundManager_execSetSoundParameter_Params
{
	class USoundCue*                                   InSoundCue;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            inParameterType;                                  		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              inValue;                                          		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.GetVolume
// [0x00424400] 
struct UGHM_SoundManager_execGetVolume_Params
{
	class USoundCue*                                   InSoundCue;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      owningActor;                                      		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            opResult;                                         		// 0x0010 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.SetVolume
// [0x00424400] 
struct UGHM_SoundManager_execSetVolume_Params
{
	class USoundCue*                                   InSoundCue;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              NewVolume;                                        		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      owningActor;                                      		// 0x000C (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              InterpolationTime;                                		// 0x0014 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            opResult;                                         		// 0x0018 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SoundManager.UnPause
// [0x00424401] 
struct UGHM_SoundManager_execUnPause_Params
{
	class USoundCue*                                   InSoundCue;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      owningActor;                                      		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              FadeTime;                                         		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            opResult;                                         		// 0x0014 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SoundManager.Pause
// [0x00424401] 
struct UGHM_SoundManager_execPause_Params
{
	class USoundCue*                                   InSoundCue;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      owningActor;                                      		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              FadeTime;                                         		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            opResult;                                         		// 0x0014 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SoundManager.SwitchTrack
// [0x00024401] 
struct UGHM_SoundManager_execSwitchTrack_Params
{
	class USoundCue*                                   inSoundCueToSwitch;                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class USoundCue*                                   inNewSoundCue;                                    		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      owningActor;                                      		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      inStartMarkerLabel;                               		// 0x0018 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      inEndMarkerLabel;                                 		// 0x0028 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               isSampleAccurate : 1;                             		// 0x0038 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_SoundManager.Jump
// [0x00024401] 
struct UGHM_SoundManager_execJump_Params
{
	class USoundCue*                                   InSoundCue;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      owningActor;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      inStartMarkerLabel;                               		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      inEndMarkerLabel;                                 		// 0x0020 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               isSampleAccurate : 1;                             		// 0x0030 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_SoundManager.Stop
// [0x00424401] 
struct UGHM_SoundManager_execStop_Params
{
	class USoundCue*                                   InSoundCue;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      owningActor;                                      		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              FadeTime;                                         		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            opResult;                                         		// 0x0014 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	float                                              fadeVolume;                                       		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_SoundManager.PlayPadSpeaker
// [0x00424400] 
struct UGHM_SoundManager_execPlayPadSpeaker_Params
{
	class USoundCue*                                   InSoundCue;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            PadNo;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              FadeTime;                                         		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            opResult;                                         		// 0x0010 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SoundManager.Play
// [0x00424400] 
struct UGHM_SoundManager_execPlay_Params
{
	class USoundCue*                                   InSoundCue;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      owningActor;                                      		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              FadeTime;                                         		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               bStopWhenOwnerDestroyed : 1;                      		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     Location;                                         		// 0x0018 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class FString                                      inStartMarkerLabel;                               		// 0x0024 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      inEndMarkerLabel;                                 		// 0x0034 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            opResult;                                         		// 0x0044 (0x0001) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SoundManager.IsPlaying
// [0x00024401] 
struct UGHM_SoundManager_execIsPlaying_Params
{
	class USoundCue*                                   InSoundCue;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      owningActor;                                      		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundManager.Muting
// [0x00024401] 
struct UGHM_SoundManager_execMuting_Params
{
	bool                                               bIsMuted : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FName                                       SoundClassFName;                                  		// 0x0004 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GHMEngine.GHM_SoundManager.Instance
// [0x00022401] 
struct UGHM_SoundManager_execInstance_Params
{
	class UGHM_SoundManager*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SoundNode_ParameterControl.SetValue
// [0x00020802] 
struct UGHM_SoundNode_ParameterControl_eventSetValue_Params
{
	uint8_t                                            inType;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              inValue;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SoundNode_ParameterControl.GetValue
// [0x00020802] 
struct UGHM_SoundNode_ParameterControl_eventGetValue_Params
{
	uint8_t                                            inType;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SplineActor.UpdateSplineComponents
// [0x00020400] 
struct AGHM_SplineActor_execUpdateSplineComponents_Params
{
};

// Function GHMEngine.GHM_SplineComponent.EstimateClosestPointRelative
// [0x00420400] 
struct UGHM_SplineComponent_execEstimateClosestPointRelative_Params
{
	struct FVector                                     TestPoint;                                        		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            iIterations;                                      		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              fStartDistAlongSpline;                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              fMaxDistFromStart;                                		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FSplineClosestPointResult                   OutResult;                                        		// 0x0018 (0x001C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SplineComponent.EstimateClosestPoint
// [0x00420400] 
struct UGHM_SplineComponent_execEstimateClosestPoint_Params
{
	struct FVector                                     TestPoint;                                        		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            iIterations;                                      		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FSplineClosestPointResult                   OutResult;                                        		// 0x0010 (0x001C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SplineComponent.UpdateSplineReparamTable
// [0x00020400] 
struct UGHM_SplineComponent_execUpdateSplineReparamTable_Params
{
};

// Function GHMEngine.GHM_SplinePath.GetRotation
// [0x00020002] 
struct UGHM_SplinePath_execGetRotation_Params
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SplinePath.GetLocation
// [0x00020002] 
struct UGHM_SplinePath_execGetLocation_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SplinePath.SetRotation
// [0x00020002] 
struct UGHM_SplinePath_execSetRotation_Params
{
	struct FRotator                                    NewRotation;                                      		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SplinePath.SetLocation
// [0x00020002] 
struct UGHM_SplinePath_execSetLocation_Params
{
	struct FVector                                     NewLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SplinePath.Tick
// [0x00020802] 
struct UGHM_SplinePath_eventTick_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_SplinePath.IsAtEndOfPath
// [0x00020002] 
struct UGHM_SplinePath_execIsAtEndOfPath_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// bool                                               bNoSplinesRemaining : 1;                          		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// bool                                               bWalkedAllOfCurrentSpline : 1;                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                              CurrentSplineLength;                              		// 0x000C (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_SplinePath.MoveToEnd
// [0x00820002] 
struct UGHM_SplinePath_execMoveToEnd_Params
{
	// class AGHM_SplineActor*                            LastSplineActor;                                  		// 0x0000 (0x0008) [0x0000000000000000]               
	// class AGHM_SplineActor*                            PrevSplineActor;                                  		// 0x0008 (0x0008) [0x0000000000000000]               
	// class UGHM_SplineComponent*                        LastSplineComponent;                              		// 0x0010 (0x0008) [0x0000000004000000] (CPF_EditInline)
	// float                                              fLastSplineLength;                                		// 0x0018 (0x0004) [0x0000000000000000]               
	// struct FVector                                     LocationAtEndOfSpline;                            		// 0x001C (0x000C) [0x0000000000000000]               
	// struct FRotator                                    RotationAtEndOfSpline;                            		// 0x0028 (0x000C) [0x0000000000000000]               
};

// Function GHMEngine.GHM_SplinePath.MoveToNextSpline
// [0x00020002] 
struct UGHM_SplinePath_execMoveToNextSpline_Params
{
	// bool                                               bSplinesRemaining : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GHMEngine.GHM_SplinePath.MoveToStart
// [0x00820002] 
struct UGHM_SplinePath_execMoveToStart_Params
{
	// struct FRotator                                    RotationFromSplineTangent;                        		// 0x0000 (0x000C) [0x0000000000000000]               
	// struct FRotator                                    RotationFromSplineOrientation;                    		// 0x000C (0x000C) [0x0000000000000000]               
};

// Function GHMEngine.GHM_SplinePath.UpdateMovementAlongSpline
// [0x00820002] 
struct UGHM_SplinePath_execUpdateMovementAlongSpline_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// float                                              NormalisedDistanceAlongSpline;                    		// 0x0004 (0x0004) [0x0000000000000000]               
	// class USplineComponent*                            CurrentSplineComponent;                           		// 0x0008 (0x0008) [0x0000000004000000] (CPF_EditInline)
	// float                                              DistanceToMoveThisFrame;                          		// 0x0010 (0x0004) [0x0000000000000000]               
	// float                                              CurrentSplineLength;                              		// 0x0014 (0x0004) [0x0000000000000000]               
	// float                                              CurrentSpeed;                                     		// 0x0018 (0x0004) [0x0000000000000000]               
	// float                                              RemainingDistance;                                		// 0x001C (0x0004) [0x0000000000000000]               
	// struct FVector                                     NewLocationAlongSpline;                           		// 0x0020 (0x000C) [0x0000000000000000]               
	// struct FRotator                                    RotationFromSplineTangent;                        		// 0x002C (0x000C) [0x0000000000000000]               
	// struct FRotator                                    RotationFromSplineOrientation;                    		// 0x0038 (0x000C) [0x0000000000000000]               
	// struct FQuat                                       CurrentSplineOrientationInRadians;                		// 0x0050 (0x0010) [0x0000000000000000]               
	// struct FQuat                                       NextSplineOrientationInRadians;                   		// 0x0060 (0x0010) [0x0000000000000000]               
	// struct FQuat                                       SlerpedOrientation;                               		// 0x0070 (0x0010) [0x0000000000000000]               
};

// Function GHMEngine.GHM_SplinePath.EstimateClosestPointRelative
// [0x00420400] 
struct UGHM_SplinePath_execEstimateClosestPointRelative_Params
{
	struct FVector                                     TestPoint;                                        		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            iIterations;                                      		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              fMaxMoveDistance;                                 		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              fPrevDistAlongSpline;                             		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AGHM_SplineActor*                            PrevClosestSplineActor;                           		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FSplineClosestPointResult                   OutResult;                                        		// 0x0020 (0x001C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_SplinePath.EstimateClosestPoint
// [0x00420400] 
struct UGHM_SplinePath_execEstimateClosestPoint_Params
{
	struct FVector                                     TestPoint;                                        		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            iIterations;                                      		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FSplineClosestPointResult                   ClosestPointResult;                               		// 0x0010 (0x001C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_StackablePhysicsActorInterface.StackNotify
// [0x00020100] 
struct UGHM_StackablePhysicsActorInterface_execStackNotify_Params
{
};

// Function GHMEngine.GHM_BreakableObjectManager.RequestBreakableSpawn
// [0x00020002] 
struct AGHM_BreakableObjectManager_execRequestBreakableSpawn_Params
{
	int32_t                                            iRequestedSpawns;                                 		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            iAllowedSpawns;                                   		// 0x0008 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_BreakableObjectManager.StopBreaking
// [0x00020002] 
struct AGHM_BreakableObjectManager_execStopBreaking_Params
{
};

// Function GHMEngine.GHM_BreakableObjectManager.StartBreaking
// [0x00020002] 
struct AGHM_BreakableObjectManager_execStartBreaking_Params
{
};

// Function GHMEngine.GHM_BreakableObjectManager.SplitNavMesh
// [0x00020002] 
struct AGHM_BreakableObjectManager_execSplitNavMesh_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
	// int32_t                                            NumToSplit;                                       		// 0x0004 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_BreakableObjectManager.RequestNavMeshSplit
// [0x00020002] 
struct AGHM_BreakableObjectManager_execRequestNavMeshSplit_Params
{
	class AGHM_BreakableObject*                        Breakable;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_BreakableObjectManager.Tick
// [0x00020802] 
struct AGHM_BreakableObjectManager_eventTick_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_BreakableObjectManager.RecycleFragment
// [0x00020002] 
struct AGHM_BreakableObjectManager_execRecycleFragment_Params
{
	class AGHM_KActorSpawnable*                        Fragment;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_BreakableObjectManager.EnforceSoftLimit
// [0x00020000] 
struct AGHM_BreakableObjectManager_execEnforceSoftLimit_Params
{
};

// Function GHMEngine.GHM_BreakableObjectManager.GetFreeRBFragment
// [0x00020002] 
struct AGHM_BreakableObjectManager_execGetFreeRBFragment_Params
{
	struct FVector                                     SpawnLocation;                                    		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    SpawnRotation;                                    		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	class AGHM_KActorSpawnable*                        ReturnValue;                                      		// 0x0018 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AGHM_KActorSpawnable*                        Fragment;                                         		// 0x0020 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_CheatManager.DisableDebug
// [0x00020002] 
struct UGHM_CheatManager_execDisableDebug_Params
{
	class AGHM_DebugController*                        DC;                                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_CheatManager.EnableDebug
// [0x00020002] 
struct UGHM_CheatManager_execEnableDebug_Params
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      cDC;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class AGHM_DebugController*                        DCRef;                                            		// 0x0010 (0x0008) [0x0000000000000000]               
	// class AGHM_DebugController*                        DC;                                               		// 0x0018 (0x0008) [0x0000000000000000]               
	// class UPlayer*                                     RootPlayer;                                       		// 0x0020 (0x0008) [0x0000000000000000]               
	// class APawn*                                       RootPawn;                                         		// 0x0028 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_CheatManager.StartDebug
// [0x00020002] 
struct UGHM_CheatManager_execStartDebug_Params
{
	class UClass*                                      cDC;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class APlayerController*                           PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]               
	// class AGHM_DebugController*                        DC;                                               		// 0x0010 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_CheatManager.DebugMenu
// [0x00020202] 
struct UGHM_CheatManager_execDebugMenu_Params
{
};

// Function GHMEngine.GHM_DebugController.KeyRBButton
// [0x00020000] 
struct AGHM_DebugController_execKeyRBButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugController.KeyLBButton
// [0x00020000] 
struct AGHM_DebugController_execKeyLBButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugController.KeyRTButton
// [0x00020000] 
struct AGHM_DebugController_execKeyRTButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugController.KeyLTButton
// [0x00020000] 
struct AGHM_DebugController_execKeyLTButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugController.KeyYButton
// [0x00020000] 
struct AGHM_DebugController_execKeyYButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugController.KeyXButton
// [0x00020000] 
struct AGHM_DebugController_execKeyXButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugController.KeyBButton
// [0x00020000] 
struct AGHM_DebugController_execKeyBButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugController.KeyAButton
// [0x00020000] 
struct AGHM_DebugController_execKeyAButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugController.KeyRight
// [0x00020000] 
struct AGHM_DebugController_execKeyRight_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugController.KeyLeft
// [0x00020000] 
struct AGHM_DebugController_execKeyLeft_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugController.KeyDown
// [0x00020000] 
struct AGHM_DebugController_execKeyDown_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugController.KeyUp
// [0x00020000] 
struct AGHM_DebugController_execKeyUp_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugController.SwitchDefCamera
// [0x00020002] 
struct AGHM_DebugController_execSwitchDefCamera_Params
{
};

// Function GHMEngine.GHM_DebugController.SwitchRootCamera
// [0x00020002] 
struct AGHM_DebugController_execSwitchRootCamera_Params
{
};

// Function GHMEngine.GHM_DebugController.Terminate
// [0x00020002] 
struct AGHM_DebugController_execTerminate_Params
{
};

// Function GHMEngine.GHM_DebugController.DisableDebug
// [0x00020203] 
struct AGHM_DebugController_execDisableDebug_Params
{
	// class UGHM_CheatManager*                           CM;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugController.DebugMenu
// [0x00020203] 
struct AGHM_DebugController_execDebugMenu_Params
{
};

// Function GHMEngine.GHM_DebugController.PostBeginPlay
// [0x00020902] 
struct AGHM_DebugController_eventPostBeginPlay_Params
{
};

// Function GHMEngine.GHM_DebugInput.KeyRBButton
// [0x00020202] 
struct UGHM_DebugInput_execKeyRBButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugInput.KeyLBButton
// [0x00020202] 
struct UGHM_DebugInput_execKeyLBButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugInput.KeyLTButton
// [0x00020202] 
struct UGHM_DebugInput_execKeyLTButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugInput.KeyRTButton
// [0x00020202] 
struct UGHM_DebugInput_execKeyRTButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugInput.KeyYButton
// [0x00020202] 
struct UGHM_DebugInput_execKeyYButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugInput.KeyXButton
// [0x00020202] 
struct UGHM_DebugInput_execKeyXButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugInput.KeyBButton
// [0x00020202] 
struct UGHM_DebugInput_execKeyBButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugInput.KeyAButton
// [0x00020202] 
struct UGHM_DebugInput_execKeyAButton_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugInput.KeyRight
// [0x00020202] 
struct UGHM_DebugInput_execKeyRight_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugInput.KeyLeft
// [0x00020202] 
struct UGHM_DebugInput_execKeyLeft_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugInput.KeyDown
// [0x00020202] 
struct UGHM_DebugInput_execKeyDown_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugInput.KeyUp
// [0x00020202] 
struct UGHM_DebugInput_execKeyUp_Params
{
	uint8_t                                            btn;                                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemButton.Cancel
// [0x00020002] 
struct UGHM_DebugMenuItemButton_execCancel_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemButton.Select
// [0x00020002] 
struct UGHM_DebugMenuItemButton_execSelect_Params
{
};

// Function GHMEngine.GHM_DebugMenuItemButton.DrawMenuItem
// [0x00020002] 
struct UGHM_DebugMenuItemButton_execDrawMenuItem_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.SetAutoLabelSpikes
// [0x00020002] 
struct UGHM_DebugMenuItemValueTimeGraph_execSetAutoLabelSpikes_Params
{
	bool                                               bLabelSpikes : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.SetAutoSizePositiveYAxis
// [0x00020002] 
struct UGHM_DebugMenuItemValueTimeGraph_execSetAutoSizePositiveYAxis_Params
{
	bool                                               bAutoSizeNegativeYAxis : 1;                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.SetAutoSizeNegativeYAxis
// [0x00020002] 
struct UGHM_DebugMenuItemValueTimeGraph_execSetAutoSizeNegativeYAxis_Params
{
	bool                                               bAutoSizeNegativeYAxis : 1;                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.AddValue
// [0x00820002] 
struct UGHM_DebugMenuItemValueTimeGraph_execAddValue_Params
{
	float                                              Value;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// struct FVector2D                                   YAxisRange;                                       		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.GetNextIndex
// [0x00020002] 
struct UGHM_DebugMenuItemValueTimeGraph_execGetNextIndex_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.ComputeAverageValue
// [0x00020002] 
struct UGHM_DebugMenuItemValueTimeGraph_execComputeAverageValue_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            I;                                                		// 0x0004 (0x0004) [0x0000000000000000]               
	// float                                              AverageValue;                                     		// 0x0008 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.DrawGraphWindow
// [0x00820002] 
struct UGHM_DebugMenuItemValueTimeGraph_execDrawGraphWindow_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            I;                                                		// 0x0008 (0x0004) [0x0000000000000000]               
	// int32_t                                            Index;                                            		// 0x000C (0x0004) [0x0000000000000000]               
	// float                                              AverageValue;                                     		// 0x0010 (0x0004) [0x0000000000000000]               
	// float                                              DistanceToAverage;                                		// 0x0014 (0x0004) [0x0000000000000000]               
	// float                                              ThresholdForSpike;                                		// 0x0018 (0x0004) [0x0000000000000000]               
	// bool                                               bPreviousSpike : 1;                               		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector2D                                   PrevGraphSpacePoint;                              		// 0x0020 (0x0008) [0x0000000000000000]               
	// struct FVector2D                                   CurrentGraphSpacePoint;                           		// 0x0028 (0x0008) [0x0000000000000000]               
	// struct FVector2D                                   PrevScreenSpacePoint;                             		// 0x0030 (0x0008) [0x0000000000000000]               
	// struct FVector2D                                   CurrentScreenSpacePoint;                          		// 0x0038 (0x0008) [0x0000000000000000]               
	// struct FColor                                      LineColour;                                       		// 0x0040 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_HUDSub.DelDisplay
// [0x00020003] 
struct UGHM_HUDSub_execDelDisplay_Params
{
	struct FScriptDelegate                             dgt;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            I;                                                		// 0x0014 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_HUDSub.AddDisplay
// [0x00024003] 
struct UGHM_HUDSub_execAddDisplay_Params
{
	struct FScriptDelegate                             dgt;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            prio;                                             		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_HUDSub.DrawDisplayList
// [0x00820003] 
struct UGHM_HUDSub_execDrawDisplayList_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            I;                                                		// 0x0008 (0x0004) [0x0000000000000000]               
	// bool                                               bFoundNoneDelegate : 1;                           		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FDisplayList                                D;                                                		// 0x0010 (0x0014) [0x0000000000400000] (CPF_NeedCtorLink)
	// struct FScriptDelegate                             df;                                               		// 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_HUDSub.Initialize
// [0x00020001] 
struct UGHM_HUDSub_execInitialize_Params
{
};

// Function GHMEngine.GHM_HUDSub.DrawDisplay
// [0x00120000] 
struct UGHM_HUDSub_execDrawDisplay_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_MaterialAnim.SetTextureKey
// [0x00020000] 
struct UGHM_MaterialAnim_execSetTextureKey_Params
{
	int32_t                                            matnum;                                           		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	struct FName                                       ParamName;                                        		// 0x0004 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	float                                              KeyTime;                                          		// 0x000C (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	class UTexture*                                    Value;                                            		// 0x0010 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function GHMEngine.GHM_MaterialAnim.ChangeTextureKey
// [0x00020002] 
struct UGHM_MaterialAnim_execChangeTextureKey_Params
{
	int32_t                                            matnum;                                           		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	struct FName                                       ParamName;                                        		// 0x0004 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	int32_t                                            KeyNum;                                           		// 0x000C (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	float                                              KeyTime;                                          		// 0x0010 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	class UTexture*                                    Value;                                            		// 0x0014 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	// int32_t                                            I;                                                		// 0x001C (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_MaterialAnim.SetVectorKey
// [0x00020002] 
struct UGHM_MaterialAnim_execSetVectorKey_Params
{
	int32_t                                            matnum;                                           		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	struct FName                                       ParamName;                                        		// 0x0004 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	float                                              KeyTime;                                          		// 0x000C (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	struct FLinearColor                                Value;                                            		// 0x0010 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
	// int32_t                                            I;                                                		// 0x0020 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_MaterialAnim.ChangeScalarKey
// [0x00020002] 
struct UGHM_MaterialAnim_execChangeScalarKey_Params
{
	int32_t                                            matnum;                                           		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	struct FName                                       ParamName;                                        		// 0x0004 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	int32_t                                            KeyNum;                                           		// 0x000C (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	float                                              KeyTime;                                          		// 0x0010 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	float                                              Value;                                            		// 0x0014 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_MaterialAnim.SetScalarKey
// [0x00020002] 
struct UGHM_MaterialAnim_execSetScalarKey_Params
{
	int32_t                                            matnum;                                           		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	struct FName                                       ParamName;                                        		// 0x0004 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	float                                              KeyTime;                                          		// 0x000C (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	float                                              Value;                                            		// 0x0010 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	// int32_t                                            I;                                                		// 0x0014 (0x0004) [0x0000000000000000]               
	// int32_t                                            Len;                                              		// 0x0018 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_MaterialAnim.SetMaterialChangeTime
// [0x00020002] 
struct UGHM_MaterialAnim_execSetMaterialChangeTime_Params
{
	int32_t                                            matnum;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ChangeTime;                                       		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_MaterialAnim.ResetMover
// [0x00040003] 
struct UGHM_MaterialAnim_execResetMover_Params
{
};

// Function GHMEngine.GHM_MaterialAnim.InitMover
// [0x00040003] 
struct UGHM_MaterialAnim_execInitMover_Params
{
	struct FGHMMaterialAnimContainer                   container;                                        		// 0x0000 (0x003C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_MaterialAnim.Animate
// [0x00040003] 
struct UGHM_MaterialAnim_execAnimate_Params
{
};

// Function GHMEngine.GHM_MaterialAnim.Interp
// [0x00840003] 
struct UGHM_MaterialAnim_execInterp_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
	// struct FGHMScalarParameterKey                      Key;                                              		// 0x0004 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	// float                                              Index;                                            		// 0x001C (0x0004) [0x0000000000000000]               
	// float                                              CurrentValue;                                     		// 0x0020 (0x0004) [0x0000000000000000]               
	// float                                              NextValue;                                        		// 0x0024 (0x0004) [0x0000000000000000]               
	// float                                              nexttime;                                         		// 0x0028 (0x0004) [0x0000000000000000]               
	// float                                              nowtime;                                          		// 0x002C (0x0004) [0x0000000000000000]               
	// float                                              nowvalue;                                         		// 0x0030 (0x0004) [0x0000000000000000]               
	// float                                              Alpha;                                            		// 0x0034 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_MaterialAnim.SetMaterial
// [0x00840003] 
struct UGHM_MaterialAnim_execSetMaterial_Params
{
	// struct FGHMTextureParameterKey                     NowTexKey;                                        		// 0x0000 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_MaterialAnim.MaterialAnimTick
// [0x00020002] 
struct UGHM_MaterialAnim_execMaterialAnimTick_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_MaterialAnim.StopMaterialAnim
// [0x00020000] 
struct UGHM_MaterialAnim_execStopMaterialAnim_Params
{
};

// Function GHMEngine.GHM_MaterialAnim.PlayMaterialAnim
// [0x00020002] 
struct UGHM_MaterialAnim_execPlayMaterialAnim_Params
{
};

// Function GHMEngine.GHM_MaterialAnim.SetTargetMaterialIndex
// [0x00020002] 
struct UGHM_MaterialAnim_execSetTargetMaterialIndex_Params
{
	int32_t                                            Idx;                                              		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_MaterialAnim.SetTargetStaticMesh
// [0x00020002] 
struct UGHM_MaterialAnim_execSetTargetStaticMesh_Params
{
	class UStaticMeshComponent*                        Target;                                           		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function GHMEngine.GHM_MaterialAnim.SetTargetSkeletalMesh
// [0x00020002] 
struct UGHM_MaterialAnim_execSetTargetSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      Target;                                           		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function GHMEngine.GHM_MaterialAnim.AddMaterialInstance
// [0x00020002] 
struct UGHM_MaterialAnim_execAddMaterialInstance_Params
{
	class UMaterialInstanceConstant*                   MIC;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                            I;                                                		// 0x0008 (0x0004) [0x0000000000000000]               
	// int32_t                                            Num;                                              		// 0x000C (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_MessageBoard.DrawString
// [0x00024002] 
struct UGHM_MessageBoard_execDrawString_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            col_r;                                            		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            col_g;                                            		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            col_b;                                            		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               outline : 1;                                      		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            jj;                                               		// 0x001C (0x0004) [0x0000000000000000]               
	// class FString                                      setstr;                                           		// 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      chkstr;                                           		// 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// float                                              spos_x;                                           		// 0x0040 (0x0004) [0x0000000000000000]               
	// float                                              spos_y;                                           		// 0x0044 (0x0004) [0x0000000000000000]               
	// float                                              size_x;                                           		// 0x0048 (0x0004) [0x0000000000000000]               
	// float                                              size_y;                                           		// 0x004C (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_MessageBoard.DrawLine
// [0x00024002] 
struct UGHM_MessageBoard_execDrawLine_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            col_r;                                            		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            col_g;                                            		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            col_b;                                            		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               outline : 1;                                      		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
	// class AWorldInfo*                                  winfo;                                            		// 0x001C (0x0008) [0x0000000000000000]               
	// float                                              localDeltaTime;                                   		// 0x0024 (0x0004) [0x0000000000000000]               
	// int32_t                                            jj;                                               		// 0x0028 (0x0004) [0x0000000000000000]               
	// class FString                                      setstr;                                           		// 0x002C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      chkstr;                                           		// 0x003C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// float                                              spos_x;                                           		// 0x004C (0x0004) [0x0000000000000000]               
	// float                                              spos_y;                                           		// 0x0050 (0x0004) [0x0000000000000000]               
	// float                                              size_x;                                           		// 0x0054 (0x0004) [0x0000000000000000]               
	// float                                              size_y;                                           		// 0x0058 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_MessageBoard.DrawWord
// [0x00024002] 
struct UGHM_MessageBoard_execDrawWord_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            col_r;                                            		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            col_g;                                            		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            col_b;                                            		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               outline : 1;                                      		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	// int32_t                                            I;                                                		// 0x0018 (0x0004) [0x0000000000000000]               
	// class FString                                      viewstr;                                          		// 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class AWorldInfo*                                  winfo;                                            		// 0x002C (0x0008) [0x0000000000000000]               
	// float                                              localDeltaTime;                                   		// 0x0034 (0x0004) [0x0000000000000000]               
	// int32_t                                            jj;                                               		// 0x0038 (0x0004) [0x0000000000000000]               
	// class FString                                      setstr;                                           		// 0x003C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      chkstr;                                           		// 0x004C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// float                                              spos_x;                                           		// 0x005C (0x0004) [0x0000000000000000]               
	// float                                              spos_y;                                           		// 0x0060 (0x0004) [0x0000000000000000]               
	// float                                              size_x;                                           		// 0x0064 (0x0004) [0x0000000000000000]               
	// float                                              size_y;                                           		// 0x0068 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_MessageBoard.DrawDisplay
// [0x00080003] 
struct UGHM_MessageBoard_execDrawDisplay_Params
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// class UFont*                                       OldFont;                                          		// 0x0008 (0x0008) [0x0000000000000000]               
	// class AWorldInfo*                                  winfo;                                            		// 0x0010 (0x0008) [0x0000000000000000]               
	// float                                              calltime;                                         		// 0x0018 (0x0004) [0x0000000000000000]               
	// int32_t                                            ii;                                               		// 0x001C (0x0004) [0x0000000000000000]               
	// int32_t                                            jj;                                               		// 0x0020 (0x0004) [0x0000000000000000]               
	// class FString                                      chkstr;                                           		// 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      onestr;                                           		// 0x0034 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// float                                              size_x;                                           		// 0x0044 (0x0004) [0x0000000000000000]               
	// float                                              tmp_size_x;                                       		// 0x0048 (0x0004) [0x0000000000000000]               
	// float                                              tmp_size_y;                                       		// 0x004C (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_MessageBoard.SetMessagePosType
// [0x00020003] 
struct UGHM_MessageBoard_execSetMessagePosType_Params
{
	uint8_t                                            ptype;                                            		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_MessageBoard.SetMessageDrawType
// [0x00020003] 
struct UGHM_MessageBoard_execSetMessageDrawType_Params
{
	uint8_t                                            dtype;                                            		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_MessageBoard.SetMessageSpeed
// [0x00020003] 
struct UGHM_MessageBoard_execSetMessageSpeed_Params
{
	float                                              spd;                                              		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_MessageBoard.ClearString
// [0x00020003] 
struct UGHM_MessageBoard_execClearString_Params
{
};

// Function GHMEngine.GHM_MessageBoard.AddString
// [0x00020003] 
struct UGHM_MessageBoard_execAddString_Params
{
	class FString                                      Message;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                            spos;                                             		// 0x0010 (0x0004) [0x0000000000000000]               
	// class FString                                      chkstr;                                           		// 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      SplitStr;                                         		// 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// class FString                                      setstr;                                           		// 0x0034 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	// int32_t                                            line_num;                                         		// 0x0044 (0x0004) [0x0000000000000000]               
	// int32_t                                            line_max;                                         		// 0x0048 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_MessageBoard.SetFontType
// [0x00020003] 
struct UGHM_MessageBoard_execSetFontType_Params
{
	int32_t                                            font_type;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_MessageBoard.SetDisplayRightPosX
// [0x00020003] 
struct UGHM_MessageBoard_execSetDisplayRightPosX_Params
{
	float                                              pos_x;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_MessageBoard.SetDisplayLeftPosX
// [0x00020003] 
struct UGHM_MessageBoard_execSetDisplayLeftPosX_Params
{
	float                                              pos_x;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_MessageBoard.SetDisplayPosY
// [0x00020003] 
struct UGHM_MessageBoard_execSetDisplayPosY_Params
{
	float                                              pos_y;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_MessageBoard.SetDisplayTime
// [0x00020003] 
struct UGHM_MessageBoard_execSetDisplayTime_Params
{
	float                                              disptime;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GHMEngine.GHM_MessageBoard.Hide
// [0x00020003] 
struct UGHM_MessageBoard_execHide_Params
{
};

// Function GHMEngine.GHM_MessageBoard.Show
// [0x00020003] 
struct UGHM_MessageBoard_execShow_Params
{
};

// Function GHMEngine.GHM_MessageBoard.Reset
// [0x00020003] 
struct UGHM_MessageBoard_execReset_Params
{
	// class AWorldInfo*                                  winfo;                                            		// 0x0000 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_MessageBoard.Terminate
// [0x00020002] 
struct UGHM_MessageBoard_execTerminate_Params
{
};

// Function GHMEngine.GHM_MessageBoard.Initialize
// [0x00020000] 
struct UGHM_MessageBoard_execInitialize_Params
{
};

// Function GHMEngine.GHM_OnlinePlayerInterfaceNui.ShowNuiTroubleshooterUI
// [0x00020000] 
struct UGHM_OnlinePlayerInterfaceNui_execShowNuiTroubleshooterUI_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_OnlinePlayerInterfaceNui.ShowNuiGuideUI
// [0x00020000] 
struct UGHM_OnlinePlayerInterfaceNui_execShowNuiGuideUI_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_OnlinePlayerInterfaceNui.ClearNuiSystemGestureDelegate
// [0x00020000] 
struct UGHM_OnlinePlayerInterfaceNui_execClearNuiSystemGestureDelegate_Params
{
	struct FScriptDelegate                             SystemGestureDelegate;                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_OnlinePlayerInterfaceNui.AddNuiSystemGestureDelegate
// [0x00020000] 
struct UGHM_OnlinePlayerInterfaceNui_execAddNuiSystemGestureDelegate_Params
{
	struct FScriptDelegate                             SystemGestureDelegate;                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GHMEngine.GHM_OnlinePlayerInterfaceNui.OnNuiSystemGesture
// [0x00520000] 
struct UGHM_OnlinePlayerInterfaceNui_execOnNuiSystemGesture_Params
{
	int32_t                                            TrackingID;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            bProcessed;                                       		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GHMEngine.GHM_OnlinePlayerInterfaceNui.SetPlayerTrackingID
// [0x00020000] 
struct UGHM_OnlinePlayerInterfaceNui_execSetPlayerTrackingID_Params
{
	int32_t                                            TrackingID;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PhysicalMaterialProperty.MatchEff
// [0x00020002] 
struct UGHM_PhysicalMaterialProperty_execMatchEff_Params
{
	int32_t                                            effType;                                          		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UParticleSystem*                             ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PhysicalMaterialProperty.MatchSE
// [0x00020002] 
struct UGHM_PhysicalMaterialProperty_execMatchSE_Params
{
	int32_t                                            seType;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class USoundCue*                                   ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PhysicalMaterialVolume.iGetEffectType
// [0x00020000] 
struct AGHM_PhysicalMaterialVolume_execiGetEffectType_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_PhysicalMaterialVolume.iGetSoundCueType
// [0x00020000] 
struct AGHM_PhysicalMaterialVolume_execiGetSoundCueType_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SeqAct_SetRichPresence.GetRichPresenceId
// [0x00020002] 
struct UGHM_SeqAct_SetRichPresence_execGetRichPresenceId_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SeqAct_GetSoundModeName.Activated
// [0x00020802] 
struct UGHM_SeqAct_GetSoundModeName_eventActivated_Params
{
};

// Function GHMEngine.GHM_SeqAct_Message.Activated
// [0x00020802] 
struct UGHM_SeqAct_Message_eventActivated_Params
{
	// int32_t                                            I;                                                		// 0x0000 (0x0004) [0x0000000000000000]               
};

// Function GHMEngine.GHM_SeqAct_Section.Activated
// [0x00020802] 
struct UGHM_SeqAct_Section_eventActivated_Params
{
	// class AWorldInfo*                                  WI;                                               		// 0x0000 (0x0008) [0x0000000000000000]               
	// class APlayerController*                           PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_SeqAct_StopSoundsFilterBySoundClasses.Activated
// [0x00020802] 
struct UGHM_SeqAct_StopSoundsFilterBySoundClasses_eventActivated_Params
{
};

// Function GHMEngine.GHM_SeqAct_ToggleRadioFilterForMusic.GetObjClassVersion
// [0x00022802] 
struct UGHM_SeqAct_ToggleRadioFilterForMusic_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GHMEngine.GHM_SeqAct_ToggleRadioFilterForMusic.SetRadioFilterForMusic
// [0x00040003] 
struct UGHM_SeqAct_ToggleRadioFilterForMusic_execSetRadioFilterForMusic_Params
{
	bool                                               Enable : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UGHM_SoundManager*                           SoundManager;                                     		// 0x0004 (0x0008) [0x0000000000000000]               
};

// Function GHMEngine.GHM_SeqAct_ToggleRadioFilterForMusic.Activated
// [0x00020802] 
struct UGHM_SeqAct_ToggleRadioFilterForMusic_eventActivated_Params
{
	// int32_t                                            inputCode;                                        		// 0x0000 (0x0004) [0x0000000000000000]               
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
