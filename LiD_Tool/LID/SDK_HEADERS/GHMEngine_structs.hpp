/*
#############################################################################################
# LET IT DIE (5.0.1.0) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: GHMEngine_structs.hpp
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

// ScriptStruct GHMEngine.GHM_AmbientSoundMovable.CheckpointRecord
// 0x0004
struct AGHM_AmbientSoundMovable_FCheckpointRecord
{
	unsigned long                                      bAutoPlay : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GHMEngine.GHM_AnimNodeChain.AnimChainInfo
// 0x0008
struct FAnimChainInfo
{
	float                                              BlendInTime;                                   // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LoopTime;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GHMEngine.GHM_AnimNodeRandomPartialBlend.SRandomPartialBlend
// 0x004C
struct FSRandomPartialBlend
{
	TArray<struct FName>                               BlendBones;                                    // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FName                                       animation;                                     // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              AnimationMinWeight;                            // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AnimationMaxWeight;                            // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AnimationMinRate;                              // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AnimationMaxRate;                              // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendInTime;                                   // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendOutTime;                                  // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ChoiceWeight;                                  // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      LocalSpaceBlend : 1;                           // 0x0034 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	TArray<struct FName>                               SkeletalControlsToDisable;                     // 0x0038 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned long                                      ForceEditorPreview : 1;                        // 0x0048 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct GHMEngine.GHM_AnimNodeRandomPartialBlend.SDisabledSkelControl
// 0x000C
struct FSDisabledSkelControl
{
	struct FName                                       SkelControlName;                               // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              SkelControlInitialStrength;                    // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GHMEngine.GHM_AnimNodeRootMotionTurn.TurnAnimRotationData
// 0x0018
struct FTurnAnimRotationData
{
	float                                              Angle;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Yaw;                                           // 0x0004 (0x0004) [0x0000000000000000]               
	struct FName                                       animation;                                     // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MinYaw;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxYaw;                                        // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GHMEngine.GHM_GameInfo.SpawnedPackageRecord
// 0x0008
struct FSpawnedPackageRecord
{
	int32_t                                            PackageNo;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            RemainingDamage;                               // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GHMEngine.GHM_GameInfo.BrokenObjectCheckpointRecord
// 0x003C
struct FBrokenObjectCheckpointRecord
{
	float                                              Damage;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              fPostSpawnNoDamageTime;                        // 0x0004 (0x0004) [0x0000000000000000]               
	class FString                                      LastDamageTypeName;                            // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      actorName;                                     // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bEnabled : 1;                                  // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBreakableFlag : 1;                            // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bItemDropped : 1;                              // 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	TArray<struct FSpawnedPackageRecord>               SpawnedPackageRecords;                         // 0x002C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GHMEngine.GHM_GameInfo.GHM_SkelControlDFTL_WindAnimSetting
// 0x0068
struct FGHM_SkelControlDFTL_WindAnimSetting
{
	float                                              mfFadeInSeconds;                               // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfFadeOutSeconds;                              // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfSustainSeconds;                              // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            mSpace;                                        // 0x000C (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     mvDirectionAndPower;                           // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              mfFrequency;                                   // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfAnimMin;                                     // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfAnimMax;                                     // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfAnimWaveRandomRange;                         // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      mbEnableIndependentAnim : 1;                   // 0x002C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            miAngleDiff;                                   // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfRumblePower;                                 // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      mbEnableOcclusion : 1;                         // 0x0038 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              mfOccludedPowerCoef;                           // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      mbRadial : 1;                                  // 0x0040 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FName                                       mnRadialOriginBoneName;                        // 0x0044 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     mvRadialOribinOffsetFromBone;                  // 0x004C (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              mfRadialPower;                                 // 0x0058 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     mvRadialOrigin;                                // 0x005C (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GHMEngine.GHM_BreakableObject.GHM_GHM_BreakableObject_CheckpointRecord
// 0x003C
struct FGHM_GHM_BreakableObject_CheckpointRecord
{
	struct FBrokenObjectCheckpointRecord               Content;                                       // 0x0000 (0x003C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GHMEngine.GHM_BreakableObject.BreakActor
// 0x0068
struct FBreakActor
{
	class UStaticMesh*                                 BreakMesh;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UMaterialInterface*>                  OverrideMaterials;                             // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            Type;                                          // 0x0018 (0x0001) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bAwakeOnStart : 1;                             // 0x001C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FVector                                     SpawnPhysMeshLinearVel;                        // 0x0020 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     SpawnPhysMeshAngularVel;                       // 0x002C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Offset;                                        // 0x0038 (0x000C) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bCastShadows : 1;                              // 0x0044 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              LifeSpan;                                      // 0x0048 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bRecycleScaleToZero : 1;                       // 0x004C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bCanStepUpOn : 1;                              // 0x004C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bIntercollision : 1;                           // 0x004C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      bInheritedAttach : 1;                          // 0x004C (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	unsigned long                                      bDisabledLightEnvironment : 1;                 // 0x004C (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	float                                              fFade;                                         // 0x0050 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            RBChannel;                                     // 0x0054 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FRBCollisionChannelContainer                RBCollideWithChannels;                         // 0x0058 (0x0004) [0x0000000000000002] (CPF_Const)   
	class AGHM_BreakableObject*                        SubBreakable;                                  // 0x005C (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              StartupDelay;                                  // 0x0064 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct GHMEngine.GHM_BreakableObject.BreakPackage
// 0x00D8
struct FBreakPackage
{
	class UClass*                                      TriggerDamageType;                             // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              DamageThreshold;                               // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      PropagateDamage : 1;                           // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              PostSpawnNoDamageTime;                         // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FBreakActor>                         BreakActors;                                   // 0x0014 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UClass*                                      PawnTouchType;                                 // 0x0024 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   BreakSound;                                    // 0x002C (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             ParticlesOnDestroy;                            // 0x0034 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     ParticlesTranslation;                          // 0x003C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    ParticlesRotation;                             // 0x0048 (0x000C) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             ParticlesOnDamage;                             // 0x0054 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             ParticlesAccumulation;                         // 0x005C (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             PostDestroyParticles;                          // 0x0064 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     PostDestroyParticlesTranslation;               // 0x006C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    PostDestroyParticlesRotation;                  // 0x0078 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              PostDestroyParticlesDelay;                     // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PostDestroyParticlesLifespan;                  // 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   PostDestroyParticlesBreakSound;                // 0x008C (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bPostDestroyParticlesLocalSpace : 1;           // 0x0094 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              BumpVelocityMultiplier;                        // 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            CollisionType;                                 // 0x009C (0x0001) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bGlobalCanStepOn : 1;                          // 0x00A0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bGlobalIntercollision : 1;                     // 0x00A0 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bGlobalRecycleScaleToZero : 1;                 // 0x00A0 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      bBreakOnCollision : 1;                         // 0x00A0 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	float                                              CollisionThreshold;                            // 0x00A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     BaseSpawnPhysMeshLinearVel;                    // 0x00A8 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     BaseSpawnPhysMeshAngularVel;                   // 0x00B4 (0x000C) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bPop : 1;                                      // 0x00C0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              PopScale;                                      // 0x00C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RandomSpinScale;                               // 0x00C8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bUseLocalSpace : 1;                            // 0x00CC (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UParticleSystemComponent*                    mDamageAccumulationParticles;                  // 0x00D0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct GHMEngine.GHM_Checkpoint.LevelRecord
// 0x000C
struct FLevelRecord
{
	struct FName                                       LevelName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bShouldBeLoaded : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bShouldBeVisible : 1;                          // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct GHMEngine.GHM_Checkpoint.AmbientSoundRecord
// 0x0050
struct FAmbientSoundRecord
{
	class FString                                      SoundCueNamePath;                              // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ActorNamePath;                                 // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      StartMarkerLabel;                              // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      EndMarkerLabel;                                // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     Location;                                      // 0x0040 (0x000C) [0x0000000000000000]               
	unsigned long                                      bStopWhenOwnerDestroyed : 1;                   // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GHMEngine.GHM_Checkpoint.ActorRecord
// 0x0030
struct FActorRecord
{
	class FString                                      ActorNamePath;                                 // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ActorClassPath;                                // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<uint8_t>                                    RecordData;                                    // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GHMEngine.GHM_Checkpoint.CheckpointTime
// 0x0010
struct FCheckpointTime
{
	int32_t                                            SecondsSinceMidnight;                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Day;                                           // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Month;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            Year;                                          // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct GHMEngine.GHM_CheckPointSubSystem.CheckpointEnumerationResult
// 0x001C
struct FCheckpointEnumerationResult
{
	uint8_t                                            bCheckpointFileExists;                         // 0x0000 (0x0001) [0x0000000000100000]               
	uint8_t                                            bCheckpointFileContainsData;                   // 0x0001 (0x0001) [0x0000000000100000]               
	uint8_t                                            bCheckpointFileCorrupted;                      // 0x0002 (0x0001) [0x0000000000100000]               
	struct FCheckpointTime                             CheckpointTimestamp;                           // 0x0004 (0x0010) [0x0000000000100000]               
	float                                              CheckpointDifficulty;                          // 0x0014 (0x0004) [0x0000000000100000]               
	int32_t                                            CheckpointIndex;                               // 0x0018 (0x0004) [0x0000000000100000]               
};

// ScriptStruct GHMEngine.GHM_DebugCombinationInput.CombinationBinding
// 0x0028
struct FCombinationBinding
{
	TArray<struct FName>                               Keys;                                          // 0x0000 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      Command;                                       // 0x0010 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	int32_t                                            PressedCount;                                  // 0x0020 (0x0004) [0x0000000000004000] (CPF_Config)  
	unsigned long                                      bFired : 1;                                    // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOptional : 1;                                 // 0x0024 (0x0004) [0x0000000000004000] [0x00000002] (CPF_Config)
};

// ScriptStruct GHMEngine.GHM_DebugDrawManager.GHMDebugDrawObject
// 0x00EC
struct FGHMDebugDrawObject
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	struct FVector                                     LineStart;                                     // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     LineEnd;                                       // 0x0010 (0x000C) [0x0000000000000000]               
	uint8_t                                            R;                                             // 0x001C (0x0001) [0x0000000000000000]               
	uint8_t                                            G;                                             // 0x001D (0x0001) [0x0000000000000000]               
	uint8_t                                            B;                                             // 0x001E (0x0001) [0x0000000000000000]               
	uint8_t                                            A;                                             // 0x001F (0x0001) [0x0000000000000000]               
	class FString                                      Text;                                          // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              PosX;                                          // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              PosY;                                          // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              XScale;                                        // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              YScale;                                        // 0x003C (0x0004) [0x0000000000000000]               
	unsigned long                                      CR : 1;                                        // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Position;                                      // 0x0044 (0x000C) [0x0000000000000000]               
	float                                              Size;                                          // 0x0050 (0x0004) [0x0000000000000000]               
	struct FVector                                     Center;                                        // 0x0054 (0x000C) [0x0000000000000000]               
	struct FVector                                     Extent;                                        // 0x0060 (0x000C) [0x0000000000000000]               
	struct FVector                                     AxisLoc;                                       // 0x006C (0x000C) [0x0000000000000000]               
	struct FRotator                                    AxisRot;                                       // 0x0078 (0x000C) [0x0000000000000000]               
	float                                              Scale;                                         // 0x0084 (0x0004) [0x0000000000000000]               
	struct FVector                                     Start;                                         // 0x0088 (0x000C) [0x0000000000000000]               
	struct FVector                                     End;                                           // 0x0094 (0x000C) [0x0000000000000000]               
	float                                              Radius;                                        // 0x00A0 (0x0004) [0x0000000000000000]               
	int32_t                                            Segments;                                      // 0x00A4 (0x0004) [0x0000000000000000]               
	struct FVector                                     Origin;                                        // 0x00A8 (0x000C) [0x0000000000000000]               
	struct FVector                                     Direction;                                     // 0x00B4 (0x000C) [0x0000000000000000]               
	float                                              Length;                                        // 0x00C0 (0x0004) [0x0000000000000000]               
	float                                              AngleWidth;                                    // 0x00C4 (0x0004) [0x0000000000000000]               
	float                                              AngleHeight;                                   // 0x00C8 (0x0004) [0x0000000000000000]               
	int32_t                                            NumSides;                                      // 0x00CC (0x0004) [0x0000000000000000]               
	struct FColor                                      DrawColor;                                     // 0x00D0 (0x0004) [0x0000000000000000]               
	struct FLinearColor                                PointColor;                                    // 0x00D4 (0x0010) [0x0000000000000000]               
	float                                              FixSize;                                       // 0x00E4 (0x0004) [0x0000000000000000]               
	float                                              DisplayTimer;                                  // 0x00E8 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GHMEngine.GHM_DebugMenuItemFloatArray.STFloatValue
// 0x0014
struct FSTFloatValue
{
	float                                              Value;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MinValue;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MaxValue;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            SelectColumn;                                  // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxColumn;                                     // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GHMEngine.GHM_DebugMenuItemIntArray.STIntValue
// 0x0014
struct FSTIntValue
{
	int32_t                                            Value;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            MinValue;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxValue;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            SelectColumn;                                  // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxColumn;                                     // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GHMEngine.GHM_DebugMenuItemList.DebugListChild
// 0x0018
struct FDebugListChild
{
	class FString                                      ListName;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ValueI;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              ValueF;                                        // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GHMEngine.GHM_GameInfo.SMaterialUpdate
// 0x0038
struct FSMaterialUpdate
{
	class UMaterialInstanceConstant*                   Material;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       Parameter;                                     // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              fCurrentValue;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              fDesiredValue;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              fInitialValue;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              fDuration;                                     // 0x001C (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             UpdateCompleteCallback;                        // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UObject*                                     CallbackParameter;                             // 0x0030 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GHMEngine.GHM_GameInfo.SFadeUpdate
// 0x002C
struct FSFadeUpdate
{
	class UPrimitiveComponent*                         TargetComponent;                               // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              fTargetOpacity;                                // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              fInitialOpacity;                               // 0x000C (0x0004) [0x0000000000000000]               
	float                                              fFadeDuration;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             FadeCompleteCallback;                          // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UObject*                                     CallbackParameter;                             // 0x0024 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GHMEngine.GHM_GameInfo.GHM_WindAnim
// 0x0084
struct FGHM_WindAnim
{
	uint8_t                                            mStatus;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              mfTimer;                                       // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              mfAlpha;                                       // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              mfPower;                                       // 0x000C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              mfPowerTimer;                                  // 0x0010 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              mfPowerScale;                                  // 0x0014 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              mfFrequencyScale;                              // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FGHM_SkelControlDFTL_WindAnimSetting        mSetting;                                      // 0x001C (0x0068) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GHMEngine.GHM_GameInfo.GHM_GHM_GameInfo_CheckpointRecord
// 0x0010
struct FGHM_GHM_GameInfo_CheckpointRecord
{
	TArray<struct FBrokenObjectCheckpointRecord>       BrokenAndDestroyedObjects;                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GHMEngine.GHM_HUDSub.DisplayList
// 0x0014
struct FDisplayList
{
	struct FScriptDelegate                             mDelegate;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mPriority;                                     // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GHMEngine.GHM_InterpTrackCollision.CollisionTrackKey
// 0x0005
struct FCollisionTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            Action;                                        // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GHMEngine.GHM_MaterialAnim.GHMScalarKey
// 0x0008
struct FGHMScalarKey
{
	float                                              KeyTime;                                       // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Value;                                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GHMEngine.GHM_MaterialAnim.GHMScalarParameterKey
// 0x0018
struct FGHMScalarParameterKey
{
	struct FName                                       ParamName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FGHMScalarKey>                       KeyList;                                       // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct GHMEngine.GHM_MaterialAnim.GHMVectorKey
// 0x0014
struct FGHMVectorKey
{
	float                                              KeyTime;                                       // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                Value;                                         // 0x0004 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GHMEngine.GHM_MaterialAnim.GHMVectorParameterKey
// 0x0018
struct FGHMVectorParameterKey
{
	struct FName                                       ParamName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FGHMVectorKey>                       KeyList;                                       // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct GHMEngine.GHM_MaterialAnim.GHMTextureKey
// 0x000C
struct FGHMTextureKey
{
	float                                              KeyTime;                                       // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UTexture*                                    Value;                                         // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GHMEngine.GHM_MaterialAnim.GHMTextureParameterKey
// 0x0018
struct FGHMTextureParameterKey
{
	struct FName                                       ParamName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FGHMTextureKey>                      KeyList;                                       // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct GHMEngine.GHM_MaterialAnim.GHMMaterialAnimContainer
// 0x003C
struct FGHMMaterialAnimContainer
{
	class UMaterialInstanceConstant*                   MIC;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              ChangeTime;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	TArray<struct FGHMScalarParameterKey>              ScalarParamList;                               // 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FGHMVectorParameterKey>              VectorParamList;                               // 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FGHMTextureParameterKey>             TextureParamList;                              // 0x002C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GHMEngine.GHM_MaterialAnim.GHMMaterialAnimMover
// 0x0030
struct FGHMMaterialAnimMover
{
	TArray<int32_t>                                    ScalarIndexList;                               // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int32_t>                                    VectorIndexList;                               // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int32_t>                                    TextureIndexList;                              // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GHMEngine.GHM_MemoryTrackerConfig.TrackedStat
// 0x0028
struct FTrackedStat
{
	class FString                                      sName;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            iBudget;                                       // 0x0010 (0x0004) [0x0000000000000000]               
	class FString                                      sClassName;                                    // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bCPU : 1;                                      // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bComponentSorted : 1;                          // 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct GHMEngine.GHM_PlayerController.SSoundMode_ExclusiveInfo
// 0x0018
struct FSSoundMode_ExclusiveInfo
{
	struct FName                                       m_nTargetSoundModeName;                        // 0x0000 (0x0008) [0x0000000000044001] (CPF_Edit | CPF_Config | CPF_GlobalConfig)
	TArray<struct FName>                               m_aIgnoreSoundModeName;                        // 0x0008 (0x0010) [0x0000000000444001] (CPF_Edit | CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink)
};

// ScriptStruct GHMEngine.GHM_PlayerInputRecorder.GHM_PlayerInputData
// 0x0028
struct FGHM_PlayerInputData
{
	float                                              m_fDeltaTime;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fLeftStickX;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_fLeftStickY;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              m_fRightStickX;                                // 0x000C (0x0004) [0x0000000000000000]               
	float                                              m_fRightStickY;                                // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            m_iPressed;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            m_iReleased;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            m_iOnPress;                                    // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            m_iOnRelease;                                  // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            m_iOnRepeat;                                   // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GHMEngine.GHM_SeqAct_DspFXChain.GHM_DspFXChain_EffectList
// 0x000C
struct FGHM_DspFXChain_EffectList
{
	uint8_t                                            m_EffectType;                                  // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FPointer                                    m_linkedEffect;                                // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GHMEngine.GHM_SoundMarkerStructures.GHM_SoundWithMarkers_TrackInfo
// 0x0020
struct FGHM_SoundWithMarkers_TrackInfo
{
	class USoundCue*                                   SoundCue;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              InitialVolumeMultiplier;                       // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeInTime;                                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutTime;                                   // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      Is3D : 1;                                      // 0x0014 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              SwapVolume;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            Id;                                            // 0x001C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct GHMEngine.GHM_SeqAct_PlaySoundMarker.GHM_SoundWithMarkers_ActionParams
// 0x0024
struct FGHM_SoundWithMarkers_ActionParams
{
	int32_t                                            TrackIndex;                                    // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      MarkerLabel;                                   // 0x0004 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      EndLabel;                                      // 0x0014 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct GHMEngine.GHM_SeqAct_PlaySoundMarker.GHM_SoundWithMarkers_Action
// 0x0078
struct FGHM_SoundWithMarkers_Action
{
	class FString                                      ActionName;                                    // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      MarkerLabel;                                   // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned long                                      bEnabled : 1;                                  // 0x0020 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                            ActionToPerform;                               // 0x0024 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FGHM_SoundWithMarkers_ActionParams          Parameters;                                    // 0x0028 (0x0024) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            MaxLoopCount;                                  // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      ExitLoopActionName;                            // 0x0050 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            TrackToSwitch;                                 // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      LastAction;                                    // 0x0064 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            LoopCount;                                     // 0x0074 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct GHMEngine.GHM_SoundManager.SoundClassStoredVolume
// 0x0008
struct FSoundClassStoredVolume
{
	unsigned long                                      m_Muted : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_Volume;                                      // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GHMEngine.GHM_SoundManager.TimedSoundPauseRequest
// 0x0024
struct FTimedSoundPauseRequest
{
	unsigned long                                      m_bRequestStarted : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_FadeTime;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_StoredVolume;                                // 0x0008 (0x0004) [0x0000000000000000]               
	struct FDouble                                     m_ElapsedTime;                                 // 0x000C (0x0008) [0x0000000000000000]               
	struct FDouble                                     m_StartTime;                                   // 0x0014 (0x0008) [0x0000000000000000]               
	class UAudioComponent*                             m_AudioComponent;                              // 0x001C (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct GHMEngine.GHM_SoundManager.ReverbTuningParam
// 0x0034
struct FReverbTuningParam
{
	int32_t                                            m_iReverbType;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fDensity;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_fDiffusion;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              m_fGain;                                       // 0x000C (0x0004) [0x0000000000000000]               
	float                                              m_fGainHF;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              m_fDecayTime;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              m_fDecayHFRatio;                               // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              m_fReflectionsGain;                            // 0x001C (0x0004) [0x0000000000000000]               
	float                                              m_fReflectionsDelay;                           // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              m_fLateGain;                                   // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              m_fLateDelay;                                  // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              m_fAirAbsorptionGainHF;                        // 0x002C (0x0004) [0x0000000000000000]               
	float                                              m_fRoomRolloffFactor;                          // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GHMEngine.GHM_SoundManager.BackGroundMusicInfo
// 0x0060
struct FBackGroundMusicInfo
{
	class FString                                      m_nFilename;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       m_SoundClass;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	unsigned long                                      m_bPreload : 1;                                // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bWhichBuffRead : 1;                          // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bPlay : 1;                                   // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bEnd : 1;                                    // 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bStop : 1;                                   // 0x0018 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bPause : 1;                                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bOneShot : 1;                                // 0x0018 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      m_bMatineeSkip : 1;                            // 0x0018 (0x0004) [0x0000000000000000] [0x00000080] 
	int32_t                                            m_iBgmHandle;                                  // 0x001C (0x0004) [0x0000000000000000]               
	unsigned long                                      m_bOnMemory : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fCurrentVolume;                              // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              m_fPlayTime;                                   // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              m_fFadeInStartTime;                            // 0x002C (0x0004) [0x0000000000000000]               
	float                                              m_fFadeInStopTime;                             // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              m_fFadeInTargetVolume;                         // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              m_fFadeOutStartTime;                           // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              m_fFadeOutStopTime;                            // 0x003C (0x0004) [0x0000000000000000]               
	float                                              m_fFadeOutTargetVolume;                        // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              m_fStereoBleed;                                // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              m_fLFEBleed;                                   // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            m_SoundStream[0x2];                            // 0x004C (0x0008) [0x0000000000000000]               
	int32_t                                            m_iNumframe;                                   // 0x0054 (0x0004) [0x0000000000000000]               
	int32_t                                            m_itotalSizeofFrame;                           // 0x0058 (0x0004) [0x0000000000000000]               
	float                                              m_fRearChannelVolumeMultiplier;                // 0x005C (0x0004) [0x0000000000000000]               
};

// ScriptStruct GHMEngine.GHM_SeqCond_SwitchString.SwitchStringInfo
// 0x0011
struct FSwitchStringInfo
{
	class FString                                      CompString;                                    // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            bFallThru;                                     // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GHMEngine.GHM_SkelControlDFTL.GHM_SkelControlDFTL_Particle
// 0x0054
struct FGHM_SkelControlDFTL_Particle
{
	struct FVector                                     mvPosition;                                    // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     mvVelocity;                                    // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     mvForce;                                       // 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     mvFTLCorrectionVector;                         // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     mvInitialPositionRBS;                          // 0x0030 (0x000C) [0x0000000000000000]               
	float                                              mfLength;                                      // 0x003C (0x0004) [0x0000000000000000]               
	float                                              mfMass;                                        // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              mfCurrentFriction;                             // 0x0044 (0x0004) [0x0000000000000000]               
	struct FVector                                     mvVariabilityForceDir;                         // 0x0048 (0x000C) [0x0000000000000000]               
};

// ScriptStruct GHMEngine.GHM_SkelControlDFTL.GHM_SkelControlDFTL_Sphere
// 0x0028
struct FGHM_SkelControlDFTL_Sphere
{
	struct FName                                       mnAttachedBoneName;                            // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     mvOffset;                                      // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     mvCurrentPosition;                             // 0x0014 (0x000C) [0x0000000000000000]               
	float                                              mfRadius;                                      // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfFriction;                                    // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GHMEngine.GHM_SkelControlRopeWithEffector.GHMR_Effector
// 0x0021
struct FGHMR_Effector
{
	struct FVector                                     vOffset;                                       // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     vVector;                                       // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       oAttachedBoneName;                             // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            eType;                                         // 0x0020 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GHMEngine.GHM_SkelControlTrailWithEffector.GHM_Effector
// 0x0074
struct FGHM_Effector
{
	struct FVector                                     vOffset;                                       // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     vVector1;                                      // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     vVector2;                                      // 0x0018 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     vVector3;                                      // 0x0024 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       oAttachedBoneName;                             // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            eType;                                         // 0x0038 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     vVelocity;                                     // 0x003C (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     vPosition;                                     // 0x0048 (0x000C) [0x0000000000002000] (CPF_Transient)
	uint8_t                                           UnknownData00[0xC];                               		// 0x0054 (0x000C) MISSED OFFSET
	struct FQuat                                       vOrientation;                                  // 0x0060 (0x0010) [0x0000000000002000] (CPF_Transient)
	float                                              fRestitutionFactor;                            // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GHMEngine.GHM_SkelControlTrail_SpherePlane.GHM_SCTWS_Link
// 0x0010
struct FGHM_SCTWS_Link
{
	struct FName                                       oSrcBoneName;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       oDestBoneName;                                 // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GHMEngine.GHM_SkelControlTrailFakeCloth.GHM_FakeCloth_Springs
// 0x0020
struct FGHM_FakeCloth_Springs
{
	struct FName                                       oOriginBoneName;                               // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       oDestBoneName;                                 // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              fIdleLength;                                   // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fCurrentLength;                                // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fIdleRadius;                                   // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fFactor;                                       // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GHMEngine.GHM_SkelControlTrailWithParentConstraints.ParentConstraint
// 0x0014
struct FParentConstraint
{
	float                                              mfNormalPositive;                              // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfNormalNegative;                              // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfTangentPositive;                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfTangentNegative;                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      mbInverseBoneDirection : 1;                    // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct GHMEngine.GHM_SkelControlTrailWithSprings.GHM_SCTWS_Springs
// 0x0018
struct FGHM_SCTWS_Springs
{
	float                                              fIdleDistance;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fCurrentDistance;                              // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       oSrcBoneName;                                  // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       oDestBoneName;                                 // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GHMEngine.GHM_SoundDebugUtility.StoppedSoundInfo
// 0x0020
struct FStoppedSoundInfo
{
	struct FName                                       SoundNodeWaveName;                             // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       SoundCueName;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	struct FName                                       OwnerName;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	struct FDouble                                     StoppedTime;                                   // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GHMEngine.GHM_SoundDebugUtility.SoundModeHistoryInfo
// 0x0010
struct FSoundModeHistoryInfo
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FDouble                                     Time;                                          // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GHMEngine.GHM_SoundNode_ParameterControl.SoundNodeParameterControlRanges
// 0x0010
struct FSoundNodeParameterControlRanges
{
	float                                              m_Start_0_To;                                  // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_End_0_To;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_Start_ParameterRange;                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_End_ParameterRange;                          // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GHMEngine.GHM_SplineComponent.SplineClosestPointResult
// 0x001C
struct FSplineClosestPointResult
{
	struct FVector                                     ClosestPoint;                                  // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              DistanceAlongSpline;                           // 0x000C (0x0004) [0x0000000000000000]               
	float                                              DistanceMoved;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	class AGHM_SplineActor*                            PrevSplineActor;                               // 0x0014 (0x0008) [0x0000000000000000]               
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
