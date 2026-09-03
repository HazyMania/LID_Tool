/*
#############################################################################################
# LET IT DIE (5.0.1.0) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: BrgGame_structs.hpp
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

// ScriptStruct BrgGame.BrgWorldTimeScaleManager.BrgTimeScaleAnim
// 0x0034
struct FBrgTimeScaleAnim
{
	uint8_t                                            mStatus;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              mStateTimer;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              mTimeScale;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            mAnimType;                                     // 0x000C (0x0001) [0x0000000000000000]               
	float                                              mSustainTime;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              mBeginDelayTime;                               // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              mBlendInTime;                                  // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              mBlendOutTime;                                 // 0x001C (0x0004) [0x0000000000000000]               
	float                                              mCurrentTime;                                  // 0x0020 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             mFinishAnimFunc;                               // 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgPawn_BaseNative.BrgAttackAttrParam
// 0x0008
struct FBrgAttackAttrParam
{
	uint8_t                                            Attr;                                          // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Value;                                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgPawn_BaseNative.BrgKeepDamage
// 0x0060
struct FBrgKeepDamage
{
	int32_t                                            Damage;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              TimeCnt;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              IntervalTime;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            TakeMax;                                       // 0x0010 (0x0004) [0x0000000000000000]               
	class UClass*                                      DamageType;                                    // 0x0014 (0x0008) [0x0000000000000000]               
	struct FTraceHitInfo                               DamageHitInfo;                                 // 0x001C (0x0028) [0x0000000000080000] (CPF_Component)
	class AActor*                                      DamageCauser;                                  // 0x0044 (0x0008) [0x0000000000000000]               
	TArray<struct FBrgAttackAttrParam>                 DamageAttackAttr;                              // 0x004C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bPlayMotionWait : 1;                           // 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFireType : 1;                                 // 0x005C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BrgGame.BrgPawn_BaseNative.BrgStatusAilment
// 0x0034
struct FBrgStatusAilment
{
	class FString                                      DbMsrEfcId;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      EffectName;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Type;                                          // 0x0020 (0x0001) [0x0000000000000000]               
	float                                              Value;                                         // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              SecondValue;                                   // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              KeepTimeInit;                                  // 0x002C (0x0004) [0x0000000000000000]               
	float                                              KeepTime;                                      // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPawn_BaseNative.BrgPhysMatSEStop
// 0x000C
struct FBrgPhysMatSEStop
{
	float                                              mTime;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	class UPhysicalMaterial*                           mPhysMat;                                      // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPawn_BaseNative.BrgMotionSpeedInfo
// 0x0020
struct FBrgMotionSpeedInfo
{
	unsigned long                                      bValid : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SpeedRate;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              CurrentTime;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              KeepTime;                                      // 0x000C (0x0004) [0x0000000000000000]               
	float                                              InBlendTime;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              OutBlendTime;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	struct FName                                       HandleName;                                    // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPawn_BaseNative.BrgAttackInfo
// 0x0030
struct FBrgAttackInfo
{
	class FString                                      DbAttackID;                                    // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            AttackPower;                                   // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              KnockBackPower;                                // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      DamageType;                                    // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            eHitSlowType;                                  // 0x0020 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            eAttackFiilter;                                // 0x0021 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            eAttackDirType;                                // 0x0022 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            eDamageDirType;                                // 0x0023 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            eAttackHitType;                                // 0x0024 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              EveryHitClearIntervalTime;                     // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            TakeKeepDamageMax;                             // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgPawn_BaseNative.BrgTimeScaleAnimInfo
// 0x0010
struct FBrgTimeScaleAnimInfo
{
	float                                              Rate;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InBlendTime;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              KeepTime;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              OutBlendTime;                                  // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgPawn_BaseNative.BrgAimOffsetInfo
// 0x0044
struct FBrgAimOffsetInfo
{
	unsigned long                                      mbEnable : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     mLookDir;                                      // 0x0004 (0x000C) [0x0000000000000000]               
	struct FRotator                                    mBaseRot;                                      // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     mBaseDir;                                      // 0x001C (0x000C) [0x0000000000000000]               
	struct FRotator                                    mAdjustAngle;                                  // 0x0028 (0x000C) [0x0000000000000000]               
	float                                              mUpMaxAngle;                                   // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              mDownMaxAngle;                                 // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              mLeftMaxAngle;                                 // 0x003C (0x0004) [0x0000000000000000]               
	float                                              mRightMaxAngle;                                // 0x0040 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPawn_BaseNative.BrgCharaStatus
// 0x0034
struct FBrgCharaStatus
{
	class FString                                      Type;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Grade;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            Str;                                           // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            Dex;                                           // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            Vit;                                           // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            Luk;                                           // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            Hp;                                            // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            Stamina;                                       // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            StaminaRecovery;                               // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            SkillMoveGaugeMax;                             // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCamera.BrgPostEffectOverrideParam
// 0x0010
struct FBrgPostEffectOverrideParam
{
	unsigned long                                      bValid : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIn : 1;                                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              Value;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Alpha;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Speed;                                         // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgQuestManager.QuestEvent
// 0x0034
struct FQuestEvent
{
	uint8_t                                            Id;                                            // 0x0000 (0x0001) [0x0000000000000000]               
	TArray<int32_t>                                    Ints;                                          // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<float>                                      Floats;                                        // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              Strings;                                       // 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgQuestManager.QuestTypeInfo
// 0x0030
struct FQuestTypeInfo
{
	class FString                                      Type;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<uint8_t>                                    RefEvents;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     Delegates;                                     // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgPawn_Base.BrgPawn_BoneChainEffect
// 0x0034
struct FBrgPawn_BoneChainEffect
{
	float                                              mLifeTime;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              mMoveSpeedPerSeconds;                          // 0x0004 (0x0004) [0x0000000000000000]               
	TArray<struct FName>                               mBoneChain;                                    // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mCurrentIndex;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              mCurrentMoveRate;                              // 0x001C (0x0004) [0x0000000000000000]               
	class AEmitter*                                    mEmitter;                                      // 0x0020 (0x0008) [0x0000000000000000]               
	struct FVector                                     mLastMoveDirection;                            // 0x0028 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPawn_Base.BrgPawn_DamageEffect
// 0x008C
struct FBrgPawn_DamageEffect
{
	unsigned long                                      mbCreate : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mTime;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	class UClass*                                      dmgType;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     HitPos;                                        // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     HitNormal;                                     // 0x001C (0x000C) [0x0000000000000000]               
	struct FVector                                     Momentum;                                      // 0x0028 (0x000C) [0x0000000000000000]               
	struct FTraceHitInfo                               HitInfo;                                       // 0x0034 (0x0028) [0x0000000000080000] (CPF_Component)
	unsigned long                                      mbDamageCounter : 1;                           // 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mbDamageGuard : 1;                             // 0x005C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mbDamageJustGuard : 1;                         // 0x005C (0x0004) [0x0000000000000000] [0x00000004] 
	class FString                                      mDbDamageAttackID;                             // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              AttrDamageValueArray[0x7];                     // 0x0070 (0x001C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPawn_Base.BrgUI3DStatusDispInfo
// 0x0014
struct FBrgUI3DStatusDispInfo
{
	class USkeletalMeshComponent*                      mTargetSMC;                                    // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	unsigned long                                      mIsAttachSocket : 1;                           // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       mAttachName;                                   // 0x000C (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgRandomGenerateLevelManager.BrgRandomGenerateLevelCellJoint
// 0x002C
struct FBrgRandomGenerateLevelCellJoint
{
	uint8_t                                            mStatus;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            mConnectedCellId;                              // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              mHeight;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            mGroup;                                        // 0x000C (0x0001) [0x0000000000000000]               
	struct FVector                                     mEdgeLocation;                                 // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     mNeighborUnitEdgeLocation;                     // 0x001C (0x000C) [0x0000000000000000]               
	unsigned long                                      mbSuccessCollectEdgeLocation : 1;              // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgRandomGenerateLevelManager.BrgRandomGenerateLevelCell
// 0x01C8
struct FBrgRandomGenerateLevelCell
{
	struct FBrgRandomGenerateLevelCellJoint            mJoints[0x6];                                  // 0x0000 (0x0108) [0x0000000000000000]               
	struct FName                                       mLevelName;                                    // 0x0108 (0x0008) [0x0000000000000000]               
	struct FVector                                     mLocationOffset;                               // 0x0110 (0x000C) [0x0000000000000000]               
	int32_t                                            mRotation;                                     // 0x011C (0x0004) [0x0000000000000000]               
	int32_t                                            mGridX;                                        // 0x0120 (0x0004) [0x0000000000000000]               
	int32_t                                            mGridY;                                        // 0x0124 (0x0004) [0x0000000000000000]               
	struct FVector                                     mBoundingBoxCenter;                            // 0x0128 (0x000C) [0x0000000000000000]               
	struct FVector                                     mBoundingBoxSize;                              // 0x0134 (0x000C) [0x0000000000000000]               
	int32_t                                            mTempFlags;                                    // 0x0140 (0x0004) [0x0000000000000000]               
	int32_t                                            mFlags;                                        // 0x0144 (0x0004) [0x0000000000000000]               
	unsigned long                                      mbForceActive : 1;                             // 0x0148 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            mConnectionType;                               // 0x014C (0x0001) [0x0000000000000000]               
	class ULevelStreaming*                             mpLevelStreaming;                              // 0x0150 (0x0008) [0x0000000000000000]               
	class ULevelStreaming*                             mpLevelStreamingLarge;                         // 0x0158 (0x0008) [0x0000000000000000]               
	struct FPointer                                    mpGroupParentCell;                             // 0x0160 (0x0008) [0x0000000000001000] (CPF_Native)  
	TArray<struct FPointer>                            mGroupChildCells;                              // 0x0168 (0x0010) [0x0000000000001000] (CPF_Native)  
	TArray<float>                                      mGridArrivedRates;                             // 0x0178 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int32_t>                                    mUnitDistancePairs;                            // 0x0188 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      mbActive : 1;                                  // 0x0198 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<class ABrgMoveSafeTargetPoint*>             mMoveSafeTargetPoints;                         // 0x019C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class ABrgActor_UnitIntrusionBlock*                mIntrusionBlockActor;                          // 0x01AC (0x0008) [0x0000000000000000]               
	TArray<class AActor*>                              mDuplicatedFarUnitActors;                      // 0x01B4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mbDuplicatedCell : 1;                          // 0x01C4 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_PlayerEventLog.BrgUIMenu_PlayerPositionData
// 0x0014
struct FBrgUIMenu_PlayerPositionData
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   Position;                                      // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              Rotation;                                      // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            eventLogIndex;                                 // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_PlayerEventLog.BrgUIMenu_PlayerEventData
// 0x002C
struct FBrgUIMenu_PlayerEventData
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      detailString0;                                 // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      detailString1;                                 // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            detailValue0;                                  // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            detailValue1;                                  // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_PlayerEventLog.BrgUIMenu_EnemyPositionData
// 0x0010
struct FBrgUIMenu_EnemyPositionData
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   Position;                                      // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              Rotation;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_PlayerEventLog.BrgUIMenu_EnemyPositionSet
// 0x0018
struct FBrgUIMenu_EnemyPositionSet
{
	class ABrgPawn_Base*                               mPawn;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	TArray<struct FBrgUIMenu_EnemyPositionData>        mList;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_PlayerEventLog.BrgUIMenu_EnemyPositionSet_Server
// 0x0010
struct FBrgUIMenu_EnemyPositionSet_Server
{
	TArray<struct FBrgUIMenu_EnemyPositionData>        mList;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_PlayerEventLog.BrgUIMenu_PlayerEventLog_ServerData
// 0x008C
struct FBrgUIMenu_PlayerEventLog_ServerData
{
	int32_t                                            mVersion;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            mHealth;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mHealthMax;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      mBodyId;                                       // 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              mStartEquipIds;                                // 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              mStartEquipSkillIds;                           // 0x002C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int32_t>                                    mStartEquipSkillSlots;                         // 0x003C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mGasmaskDbAssetId;                             // 0x004C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgUIMenu_PlayerPositionData>       mPositionDatas;                                // 0x005C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgUIMenu_PlayerEventData>          mEventDatas;                                   // 0x006C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgUIMenu_EnemyPositionSet_Server>  mEnemyPositionDataSet;                         // 0x007C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgPawn_EnemyBase.BrgBindPartInfo
// 0x0044
struct FBrgBindPartInfo
{
	unsigned long                                      bValid : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       SocketName;                                    // 0x0004 (0x0008) [0x0000000000000000]               
	struct FVector                                     StartPos;                                      // 0x000C (0x000C) [0x0000000000000000]               
	float                                              LineMoveRate;                                  // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              RollOpacity;                                   // 0x001C (0x0004) [0x0000000000000000]               
	class UParticleSystemComponent*                    LinePSC;                                       // 0x0020 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystemComponent*                    RollPSC;                                       // 0x0028 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	unsigned long                                      bRollEnable : 1;                               // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       MaterialName;                                  // 0x0034 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   MaterialInst;                                  // 0x003C (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgDropItemManagerStruct.BrgDropItemBaseInfo
// 0x0174
struct FBrgDropItemBaseInfo
{
	uint8_t                                            mItemType;                                     // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            mMoney;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	struct FBrgDbPsPart                                mDbPsPart;                                     // 0x0008 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbPsPart                                mCmpDbPsPart;                                  // 0x0040 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mEDbSite;                                      // 0x0078 (0x0001) [0x0000000000000000]               
	struct FBrgDbMushroomEntity                        mDbMushroomEntity;                             // 0x007C (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mMushroomCount;                                // 0x00C4 (0x0004) [0x0000000000000000]               
	struct FBrgDbBeastEntity                           mDbBeastEntity;                                // 0x00C8 (0x0074) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbItemEntity                            mDbItemEntity;                                 // 0x013C (0x0024) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mDbMagazineIndex;                              // 0x0160 (0x0004) [0x0000000000000000]               
	class UBrgDropItemBaseInfo_Auto*                   mAutoInfo;                                     // 0x0164 (0x0008) [0x0000000000000000]               
	class UBrgDropItemBaseInfo_Auto*                   mCmpAutoInfo;                                  // 0x016C (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgActor_Coin.BrgActor_Coin_Mesh
// 0x0020
struct FBrgActor_Coin_Mesh
{
	class USkeletalMeshComponent*                      mSMC;                                          // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UMaterialInstanceConstant*                   mMIC;                                          // 0x0008 (0x0008) [0x0000000000000000]               
	class USkeletalMeshComponent*                      mOutLineSMC;                                   // 0x0010 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UMaterialInstanceConstant*                   mOutlineMIC;                                   // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgActor_Coin.BrgActor_Coin_Unit
// 0x00D0
struct FBrgActor_Coin_Unit
{
	unsigned long                                      mGetMode : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mMove : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mEnd : 1;                                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              mMoveTime;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mBoneIndex;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     mLocation;                                     // 0x000C (0x000C) [0x0000000000000000]               
	struct FRotator                                    mRotation;                                     // 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     mSpeed;                                        // 0x0024 (0x000C) [0x0000000000000000]               
	struct FRotator                                    mRotSpeed;                                     // 0x0030 (0x000C) [0x0000000000000000]               
	unsigned long                                      mRotStop : 1;                                  // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mMoney;                                        // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            mLocationLogNum;                               // 0x0044 (0x0004) [0x0000000000000000]               
	struct FVector                                     mLocationLog[0x9];                             // 0x0048 (0x006C) [0x0000000000000000]               
	struct FVector                                     mGetBaseLocation;                              // 0x00B4 (0x000C) [0x0000000000000000]               
	float                                              mGetJumpPower;                                 // 0x00C0 (0x0004) [0x0000000000000000]               
	float                                              mGetLocationZ;                                 // 0x00C4 (0x0004) [0x0000000000000000]               
	float                                              mGetMoveRate;                                  // 0x00C8 (0x0004) [0x0000000000000000]               
	float                                              mGetMoveTime;                                  // 0x00CC (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgActor_Treasure.BrgTreasureMushroomThrowParam
// 0x00A0
struct FBrgTreasureMushroomThrowParam
{
	class FString                                      mMsrid;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mSpeed;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              mGravity;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	unsigned long                                      mNoCountWallBound : 1;                         // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mBoundNum;                                     // 0x001C (0x0004) [0x0000000000000000]               
	float                                              mWallBoundRate;                                // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              mBoundRate;                                    // 0x0024 (0x0004) [0x0000000000000000]               
	unsigned long                                      mSlip : 1;                                     // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mSlipBrake;                                    // 0x002C (0x0004) [0x0000000000000000]               
	struct FVector                                     mGraspRot;                                     // 0x0030 (0x000C) [0x0000000000000000]               
	struct FVector                                     mGraspTrans;                                   // 0x003C (0x000C) [0x0000000000000000]               
	float                                              mMeshHeight;                                   // 0x0048 (0x0004) [0x0000000000000000]               
	struct FVector                                     mFlyingIniRot;                                 // 0x004C (0x000C) [0x0000000000000000]               
	struct FVector                                     mFlyingVecRotMin;                              // 0x0058 (0x000C) [0x0000000000000000]               
	struct FVector                                     mFlyingVecRotMax;                              // 0x0064 (0x000C) [0x0000000000000000]               
	struct FVector                                     mSlippingIniRot;                               // 0x0070 (0x000C) [0x0000000000000000]               
	struct FVector                                     mSlippingVecRotMin;                            // 0x007C (0x000C) [0x0000000000000000]               
	struct FVector                                     mSlippingVecRotMax;                            // 0x0088 (0x000C) [0x0000000000000000]               
	float                                              mStableTransZ;                                 // 0x0094 (0x0004) [0x0000000000000000]               
	float                                              mStableRotX;                                   // 0x0098 (0x0004) [0x0000000000000000]               
	float                                              mStableRotZ;                                   // 0x009C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgActor_Treasure.BrgTreasureInitalizeParam
// 0x01F0
struct FBrgTreasureInitalizeParam
{
	struct FVector                                     mLocation;                                     // 0x0000 (0x000C) [0x0000000000000000]               
	uint8_t                                            mTreasureType;                                 // 0x000C (0x0001) [0x0000000000000000]               
	class FString                                      mApid;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mPtid;                                         // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mType;                                         // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mUsePhysics : 1;                               // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<class UBrgPartMesh*>                        mPartMeshs;                                    // 0x0044 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbMushroomEntity                        mDbMushroomEntity;                             // 0x0054 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbBeastEntity                           mDbBeastEntity;                                // 0x009C (0x0074) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbItemEntity                            mDbItemEntity;                                 // 0x0110 (0x0024) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mDbMagazineIndex;                              // 0x0134 (0x0004) [0x0000000000000000]               
	struct FVector                                     mThrowSpeed;                                   // 0x0138 (0x000C) [0x0000000000000000]               
	class ABrgPawn_Base*                               mThrowOwner;                                   // 0x0144 (0x0008) [0x0000000000000000]               
	unsigned long                                      mThrowParamValid : 1;                          // 0x014C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FBrgTreasureMushroomThrowParam              mThrowParam;                                   // 0x0150 (0x00A0) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenuPart_ItemMiniPanel.BrgUIMenu_ItemMiniPanel_Info
// 0x00CC
struct FBrgUIMenu_ItemMiniPanel_Info
{
	uint8_t                                            mInfoType;                                     // 0x0000 (0x0001) [0x0000000000000000]               
	unsigned long                                      mDisableSelect : 1;                            // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mEquipMark : 1;                                // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mNewMark : 1;                                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mVIPMark : 1;                                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mCheck : 1;                                    // 0x0004 (0x0004) [0x0000000000000000] [0x00000010] 
	uint8_t                                            mPriceType;                                    // 0x0008 (0x0001) [0x0000000000000000]               
	int32_t                                            mPrice;                                        // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            mPriceOrg;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mDiscount;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	unsigned long                                      mTimePeriodEnable : 1;                         // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint64_t                                           mTimePeriod;                                   // 0x001C (0x0008) [0x0000000000000000]               
	unsigned long                                      mBlink : 1;                                    // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mCount;                                        // 0x0028 (0x0004) [0x0000000000000000]               
	unsigned long                                      mCountRed : 1;                                 // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mPriceRed : 1;                                 // 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                            mItemType;                                     // 0x0030 (0x0001) [0x0000000000000000]               
	class FString                                      mItemImageId;                                  // 0x0034 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mItemImageState;                               // 0x0044 (0x0004) [0x0000000000000000]               
	struct FBrgUIImageWithGuide                        mEffectIcon;                                   // 0x0048 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FColor                                      mEffectBaseColor;                              // 0x0068 (0x0004) [0x0000000000000000]               
	class FString                                      mDbPart_mid;                                   // 0x006C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mEDbPartType;                                  // 0x007C (0x0001) [0x0000000000000000]               
	float                                              mGaugeRate;                                    // 0x0080 (0x0004) [0x0000000000000000]               
	uint8_t                                            mGaugeType;                                    // 0x0084 (0x0001) [0x0000000000000000]               
	struct FBrgDbPsPart                                mDbPsPart;                                     // 0x0088 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mHaveBullet : 1;                               // 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mIsLimitBreak;                                 // 0x00C4 (0x0004) [0x0000000000000000]               
	unsigned long                                      mResearchPossible : 1;                         // 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenuPart_ItemInfoPanel.BrgUIMenuPart_ItemInfoPanel_Info
// 0x0248
struct FBrgUIMenuPart_ItemInfoPanel_Info
{
	uint8_t                                            mPanelType;                                    // 0x0000 (0x0001) [0x0000000000000000]               
	struct FBrgUIMenu_ItemMiniPanel_Info               mMinipanelInfo;                                // 0x0004 (0x00CC) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDropItemBaseInfo                        mBaseInfo;                                     // 0x00D0 (0x0174) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mPageCount;                                    // 0x0244 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgDropItemManager.BrgDropItemInfo
// 0x04B4
struct FBrgDropItemInfo
{
	unsigned long                                      mbUse : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mUniqueID;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	unsigned long                                      mbDeleteRequest : 1;                           // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            mState;                                        // 0x000C (0x0001) [0x0000000000000000]               
	unsigned long                                      mIsActorTreasure : 1;                          // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      mTargetActor;                                  // 0x0014 (0x0008) [0x0000000000000000]               
	struct FVector                                     mTargetLocation;                               // 0x001C (0x000C) [0x0000000000000000]               
	struct FVector                                     mTargetLocationAdjust;                         // 0x0028 (0x000C) [0x0000000000000000]               
	TArray<class USkeletalMeshComponent*>              mTargetSkeletalMeshComponent;                  // 0x0034 (0x0010) [0x0000000004480008] (CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	uint8_t                                            mValidTargetSocketName[0x8];                   // 0x0044 (0x0008) [0x0000000000000000]               
	uint8_t                                            mTestTargetSocketName[0x8];                    // 0x004C (0x0008) [0x0000000000000000]               
	struct FName                                       mTargetSocketName;                             // 0x0054 (0x0008) [0x0000000000000000]               
	uint8_t                                            mValidTargetSocketName2[0x8];                  // 0x005C (0x0008) [0x0000000000000000]               
	uint8_t                                            mTestTargetSocketName2[0x8];                   // 0x0064 (0x0008) [0x0000000000000000]               
	struct FName                                       mTargetSocketName2;                            // 0x006C (0x0008) [0x0000000000000000]               
	struct FVector                                     mTargetSocketLocation;                         // 0x0074 (0x000C) [0x0000000000000000]               
	unsigned long                                      mEnableTargetSocketName : 1;                   // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mTargetDistanceSq;                             // 0x0084 (0x0004) [0x0000000000000000]               
	uint8_t                                            mCreateType;                                   // 0x0088 (0x0001) [0x0000000000000000]               
	class FString                                      mDatabaseID;                                   // 0x008C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mLevelUnitID;                                  // 0x009C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mTargetPointID;                                // 0x00AC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mGenerateID;                                   // 0x00BC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mCall_BrgUserData_ActionLog_GetMaterial : 1;   // 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mIsThrowItem : 1;                              // 0x00CC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mIsTreasureBox : 1;                            // 0x00CC (0x0004) [0x0000000000000000] [0x00000004] 
	class FString                                      mTreasureBoxSize;                              // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mTreasureBoxOpen : 1;                          // 0x00E0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mGetEnable : 1;                                // 0x00E0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mGetDisableToHide : 1;                         // 0x00E0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mNowVisible : 1;                               // 0x00E0 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FBrgDropItemBaseInfo                        mBaseInfo;                                     // 0x00E4 (0x0174) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgUIMenuPart_ItemInfoPanel_Info           mPanelDispInfo;                                // 0x0258 (0x0248) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mTagIndex;                                     // 0x04A0 (0x0004) [0x0000000000000000]               
	int32_t                                            mTagUniqueID;                                  // 0x04A4 (0x0004) [0x0000000000000000]               
	struct FDouble                                     mCreateTime;                                   // 0x04A8 (0x0008) [0x0000000000000000]               
	float                                              mCamera_Target_DistanceSq;                     // 0x04B0 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPawn_MiddleBossBase.BrgRagdollWeaponLoad
// 0x0084
struct FBrgRagdollWeaponLoad
{
	unsigned long                                      mbCreateStart : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mbCreateSuccess : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mbEnable : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mbLoadSuccess : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint8_t                                            mEquipArm;                                     // 0x0004 (0x0001) [0x0000000000000000]               
	class ABrgAICtrl_CustomChara*                      mAICtrl;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	class ABrgPawn_CustomCharaAI*                      mPawn;                                         // 0x0010 (0x0008) [0x0000000000000000]               
	TArray<struct FName>                               mBoneName;                                     // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mbRagdoll : 1;                                 // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mbAttach : 1;                                  // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FName                                       mAttachSocketName;                             // 0x002C (0x0008) [0x0000000000000000]               
	class FString                                      mSetPhysicsAssetName;                          // 0x0034 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mbResetPhysics : 1;                            // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      mSetSkeletalMeshName;                          // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mbSetSkeletalMesh : 1;                         // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<class FString>                              mAddAnimSetName;                               // 0x005C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mbSetAnimSet : 1;                              // 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<class FString>                              mTextureName;                                  // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mbSetTexture : 1;                              // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgPawn_MiddleBossBase.BrgLoadEffect
// 0x001C
struct FBrgLoadEffect
{
	class UParticleSystem*                             mParticle;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       mBoneName;                                     // 0x0008 (0x0008) [0x0000000000000000]               
	class UParticleSystemComponent*                    mParticleComponent;                            // 0x0010 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	unsigned long                                      mbFullTime : 1;                                // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgAICtrl_BaseNative.BrgSearchInfo
// 0x0008
struct FBrgSearchInfo
{
	float                                              Dist;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Angle;                                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgDropItemManager.BrgAddDropItemInfo
// 0x0188
struct FBrgAddDropItemInfo
{
	uint8_t                                            mItemType;                                     // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            mCreateType;                                   // 0x0001 (0x0001) [0x0000000000000000]               
	class FString                                      mDatabaseID;                                   // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mLevelUnitID;                                  // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mTargetPointID;                                // 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mGenerateID;                                   // 0x0034 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mCall_BrgUserData_ActionLog_GetMaterial : 1;   // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      mTargetActor;                                  // 0x0048 (0x0008) [0x0000000000000000]               
	uint8_t                                            mEDbSite;                                      // 0x0050 (0x0001) [0x0000000000000000]               
	struct FBrgDbPsPart                                mDbPsPart;                                     // 0x0054 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbMushroomEntity                        mDbMushroomEntity;                             // 0x008C (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbBeastEntity                           mDbBeastEntity;                                // 0x00D4 (0x0074) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbItemEntity                            mDbItemEntity;                                 // 0x0148 (0x0024) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mDbMagazineIndex;                              // 0x016C (0x0004) [0x0000000000000000]               
	int32_t                                            mMoney;                                        // 0x0170 (0x0004) [0x0000000000000000]               
	unsigned long                                      mEnableCancel : 1;                             // 0x0174 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mIsThrowItem : 1;                              // 0x0174 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mIsTreasureBox : 1;                            // 0x0174 (0x0004) [0x0000000000000000] [0x00000004] 
	class FString                                      mTreasureBoxSize;                              // 0x0178 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgActor_Spirit.BrgActor_Spirit_Unit
// 0x008C
struct FBrgActor_Spirit_Unit
{
	class UParticleSystemComponent*                    mPSC;                                          // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	unsigned long                                      mGetMode : 1;                                  // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mMove : 1;                                     // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mEnd : 1;                                      // 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              mAlpha;                                        // 0x000C (0x0004) [0x0000000000000000]               
	float                                              mMoveTime;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	struct FVector                                     mLocation;                                     // 0x0014 (0x000C) [0x0000000000000000]               
	struct FRotator                                    mRotation;                                     // 0x0020 (0x000C) [0x0000000000000000]               
	struct FRotator                                    mRotSpeed;                                     // 0x002C (0x000C) [0x0000000000000000]               
	unsigned long                                      mRotStop : 1;                                  // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mSpirit;                                       // 0x003C (0x0004) [0x0000000000000000]               
	struct FVector                                     mGetBaseLocation;                              // 0x0040 (0x000C) [0x0000000000000000]               
	float                                              mGetJumpPower;                                 // 0x004C (0x0004) [0x0000000000000000]               
	float                                              mGetLocationZ;                                 // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              mGetMoveRate;                                  // 0x0054 (0x0004) [0x0000000000000000]               
	float                                              mGetMoveTime;                                  // 0x0058 (0x0004) [0x0000000000000000]               
	unsigned long                                      mActivateSystem : 1;                           // 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     mBaseLocation;                                 // 0x0060 (0x000C) [0x0000000000000000]               
	float                                              mHAngle;                                       // 0x006C (0x0004) [0x0000000000000000]               
	float                                              mHAngleSpeed;                                  // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              mVAngle;                                       // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              mVAngleSpeed;                                  // 0x0078 (0x0004) [0x0000000000000000]               
	float                                              mDAngle;                                       // 0x007C (0x0004) [0x0000000000000000]               
	float                                              mDAngleSpeed;                                  // 0x0080 (0x0004) [0x0000000000000000]               
	float                                              mEAngle;                                       // 0x0084 (0x0004) [0x0000000000000000]               
	float                                              mEAngleSpeed;                                  // 0x0088 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgActor_Spirit.BrgActor_Spirit_RewardOption
// 0x0004
struct FBrgActor_Spirit_RewardOption
{
	unsigned long                                      m_goreKill : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_ragemoveKill : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_lowHpKill : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_beatByGun : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomCharaNative.BrgOutRangeAttackUpParam
// 0x0008
struct FBrgOutRangeAttackUpParam
{
	float                                              Dist;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              AttackUpRate;                                  // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomCharaNative.BrgLevelCheckAttackUpParam
// 0x0008
struct FBrgLevelCheckAttackUpParam
{
	int32_t                                            DeltaLevel;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              AttackUpRate;                                  // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomCharaNative.BrgSkillStatus
// 0x041C
struct FBrgSkillStatus
{
	int32_t                                            ArmLAttackPower;                               // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ArmRAttackPower;                               // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            NakedAttackPower;                              // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            DefencePower;                                  // 0x000C (0x0004) [0x0000000000000000]               
	float                                              ArmLWeaponAttrUpRate;                          // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              ArmRWeaponAttrUpRate;                          // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              ArmLCategoryAtkUpRate;                         // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              ArmRCategoryAtkUpRate;                         // 0x001C (0x0004) [0x0000000000000000]               
	float                                              DefenceAttrParamArray[0x7];                    // 0x0020 (0x001C) [0x0000000000000000]               
	struct FBrgCharaStatus                             CharaStatus;                                   // 0x003C (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bWrestlingEnable : 1;                          // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bJumpAttackEnable : 1;                         // 0x0070 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bJustGuardEnable : 1;                          // 0x0070 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bRobEnable : 1;                                // 0x0070 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDropKickEnable : 1;                           // 0x0070 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bBackAttackPowerUpEnable : 1;                  // 0x0070 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bBackAttackCounterEnable : 1;                  // 0x0070 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bJumpAttackPowerUpEnable : 1;                  // 0x0070 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bNoDmgKillAttackUpEnable : 1;                  // 0x0070 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bDmgChargeEnable : 1;                          // 0x0070 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bSelfKillEnable : 1;                           // 0x0070 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bHeadShotDisable : 1;                          // 0x0070 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bDeathBomb : 1;                                // 0x0070 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bDeathBombExplode : 1;                         // 0x0070 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bSlipDisable : 1;                              // 0x0070 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bSkillCopy : 1;                                // 0x0070 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bBloodTwice : 1;                               // 0x0070 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bDownDisable : 1;                              // 0x0070 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bBlowDownDisable : 1;                          // 0x0070 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bSearchUpEnemy : 1;                            // 0x0070 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bSearchUpItem : 1;                             // 0x0070 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bTensionDownDisable : 1;                       // 0x0070 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      bFireAreaDisable : 1;                          // 0x0070 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      bPoisonRecovery : 1;                           // 0x0070 (0x0004) [0x0000000000000000] [0x00800000] 
	unsigned long                                      bFireRecovery : 1;                             // 0x0070 (0x0004) [0x0000000000000000] [0x01000000] 
	float                                              FireRecoveryRate;                              // 0x0074 (0x0004) [0x0000000000000000]               
	unsigned long                                      bFireGuard : 1;                                // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              FireGuardRate;                                 // 0x007C (0x0004) [0x0000000000000000]               
	unsigned long                                      bFireDamageReduce : 1;                         // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              FireDamageRate;                                // 0x0084 (0x0004) [0x0000000000000000]               
	unsigned long                                      bFireRodDamageReduce : 1;                      // 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              FireRodDamageRate;                             // 0x008C (0x0004) [0x0000000000000000]               
	unsigned long                                      bStalker : 1;                                  // 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMoneyVacuum : 1;                              // 0x0090 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bStopPauseMenu : 1;                            // 0x0090 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHaveToSpawnPlayerEnemy : 1;                   // 0x0090 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bSleepDisable : 1;                             // 0x0090 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bJackalTargetDisable : 1;                      // 0x0090 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bSkillMoveDisable : 1;                         // 0x0090 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bEmptyHandsBlow : 1;                           // 0x0090 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bTargetEscapeDisable : 1;                      // 0x0090 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bPreventDeath : 1;                             // 0x0090 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bAvoidInvincible : 1;                          // 0x0090 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bForceJackalSpawn : 1;                         // 0x0090 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bAcidMonitor : 1;                              // 0x0090 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bBurnEat : 1;                                  // 0x0090 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bExplodeEnemyKill : 1;                         // 0x0090 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bDisableEyeDamageForPlayer : 1;                // 0x0090 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bDisableEyeDamageForAI : 1;                    // 0x0090 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bCircleSawMaintenance : 1;                     // 0x0090 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bCleaverMeatDrop : 1;                          // 0x0090 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bArmorPiercingShot : 1;                        // 0x0090 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bInvincibleRandom : 1;                         // 0x0090 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bKiller7Blood : 1;                             // 0x0090 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      bDisableSelfAttackSkillMoveIceHockey : 1;      // 0x0090 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      bEnableFireRodExplosion : 1;                   // 0x0090 (0x0004) [0x0000000000000000] [0x00800000] 
	unsigned long                                      bNoDmgCritical : 1;                            // 0x0090 (0x0004) [0x0000000000000000] [0x01000000] 
	unsigned long                                      bJustGuardExtend : 1;                          // 0x0090 (0x0004) [0x0000000000000000] [0x02000000] 
	unsigned long                                      bInvalidMushCloak : 1;                         // 0x0090 (0x0004) [0x0000000000000000] [0x04000000] 
	unsigned long                                      bInvalidMushNoDmg : 1;                         // 0x0090 (0x0004) [0x0000000000000000] [0x08000000] 
	unsigned long                                      bInvalidMushGroggy : 1;                        // 0x0090 (0x0004) [0x0000000000000000] [0x10000000] 
	unsigned long                                      bInvalidMushConfusion : 1;                     // 0x0090 (0x0004) [0x0000000000000000] [0x20000000] 
	unsigned long                                      bInvalidMushSlow : 1;                          // 0x0090 (0x0004) [0x0000000000000000] [0x40000000] 
	unsigned long                                      bInvalidMushRisk : 1;                          // 0x0090 (0x0004) [0x0000000000000000] [0x80000000] 
	float                                              FallDamageAdjust;                              // 0x0094 (0x0004) [0x0000000000000000]               
	float                                              ExpUpRate;                                     // 0x0098 (0x0004) [0x0000000000000000]               
	float                                              AbpUpRate;                                     // 0x009C (0x0004) [0x0000000000000000]               
	float                                              HpMaxAtkDefUpRate;                             // 0x00A0 (0x0004) [0x0000000000000000]               
	float                                              HpLowAtkDefUpRate;                             // 0x00A4 (0x0004) [0x0000000000000000]               
	float                                              HpLowAtkDefUpPer;                              // 0x00A8 (0x0004) [0x0000000000000000]               
	float                                              FloorAtkDefUpRate;                             // 0x00AC (0x0004) [0x0000000000000000]               
	float                                              TotalDiedCountAtkDefUpRate;                    // 0x00B0 (0x0004) [0x0000000000000000]               
	float                                              SkillMoveGaugeUpRate;                          // 0x00B4 (0x0004) [0x0000000000000000]               
	float                                              SkillMoveAtkUpRate;                            // 0x00B8 (0x0004) [0x0000000000000000]               
	float                                              DrainRate;                                     // 0x00BC (0x0004) [0x0000000000000000]               
	float                                              DrainRateMax;                                  // 0x00C0 (0x0004) [0x0000000000000000]               
	float                                              DrainRateNailGun;                              // 0x00C4 (0x0004) [0x0000000000000000]               
	float                                              DrainRateBattleAxe;                            // 0x00C8 (0x0004) [0x0000000000000000]               
	float                                              DrainRateClaw;                                 // 0x00CC (0x0004) [0x0000000000000000]               
	float                                              DrainRateDrill;                                // 0x00D0 (0x0004) [0x0000000000000000]               
	float                                              MoneyUpRate;                                   // 0x00D4 (0x0004) [0x0000000000000000]               
	float                                              AsiistKillRate;                                // 0x00D8 (0x0004) [0x0000000000000000]               
	float                                              SpiritsUpRate;                                 // 0x00DC (0x0004) [0x0000000000000000]               
	float                                              AtkUpJustGuardCounter;                         // 0x00E0 (0x0004) [0x0000000000000000]               
	int32_t                                            SkillMoveGaugeUpFloorStart;                    // 0x00E4 (0x0004) [0x0000000000000000]               
	float                                              DropKickRunawayRate;                           // 0x00E8 (0x0004) [0x0000000000000000]               
	float                                              AtkUpProvoke;                                  // 0x00EC (0x0004) [0x0000000000000000]               
	float                                              AtkUpProvokeBeamMachete;                       // 0x00F0 (0x0004) [0x0000000000000000]               
	float                                              AtkUpAfterDodge;                               // 0x00F4 (0x0004) [0x0000000000000000]               
	int32_t                                            EnableGravityKick;                             // 0x00F8 (0x0004) [0x0000000000000000]               
	float                                              ExplodeEnemyKillAtkMax;                        // 0x00FC (0x0004) [0x0000000000000000]               
	float                                              AtkUpSurroundedEnemy;                          // 0x0100 (0x0004) [0x0000000000000000]               
	int32_t                                            AtkUpSurroundedEnemyMin;                       // 0x0104 (0x0004) [0x0000000000000000]               
	int32_t                                            AtkUpSurroundedEnemyMax;                       // 0x0108 (0x0004) [0x0000000000000000]               
	int32_t                                            SkillMoveGaugeUpFortGuard;                     // 0x010C (0x0004) [0x0000000000000000]               
	int32_t                                            SkillMoveGaugeUpFortAssault;                   // 0x0110 (0x0004) [0x0000000000000000]               
	float                                              CriticalAtkUpPer;                              // 0x0114 (0x0004) [0x0000000000000000]               
	float                                              CriticalAtkUpPerL;                             // 0x0118 (0x0004) [0x0000000000000000]               
	float                                              CriticalAtkUpPerR;                             // 0x011C (0x0004) [0x0000000000000000]               
	int32_t                                            NaturalHealValue;                              // 0x0120 (0x0004) [0x0000000000000000]               
	float                                              CircleSawMaintenanceRate;                      // 0x0124 (0x0004) [0x0000000000000000]               
	float                                              SabreMaintenanceRate;                          // 0x0128 (0x0004) [0x0000000000000000]               
	float                                              ShotGunMaintenanceRate;                        // 0x012C (0x0004) [0x0000000000000000]               
	float                                              ClawMaintenanceRate;                           // 0x0130 (0x0004) [0x0000000000000000]               
	float                                              StunRodMaintenanceRate;                        // 0x0134 (0x0004) [0x0000000000000000]               
	float                                              ThrowingKnifeMaintenanceRate;                  // 0x0138 (0x0004) [0x0000000000000000]               
	float                                              SlashStrikeMaintenanceRate;                    // 0x013C (0x0004) [0x0000000000000000]               
	float                                              AssaultRifleBulletConsumptionRate;             // 0x0140 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponAssaultRifleHpMax;                  // 0x0144 (0x0004) [0x0000000000000000]               
	float                                              FireworksBulletConsumptionRate;                // 0x0148 (0x0004) [0x0000000000000000]               
	float                                              LessDiffusionRate;                             // 0x014C (0x0004) [0x0000000000000000]               
	float                                              LessDiffusionRateRevolver;                     // 0x0150 (0x0004) [0x0000000000000000]               
	float                                              LessDiffusionRateShotGun;                      // 0x0154 (0x0004) [0x0000000000000000]               
	float                                              ZeroPosAtkUpRate;                              // 0x0158 (0x0004) [0x0000000000000000]               
	float                                              ZeroPosDistMin;                                // 0x015C (0x0004) [0x0000000000000000]               
	float                                              ZeroPosDistMax;                                // 0x0160 (0x0004) [0x0000000000000000]               
	float                                              ZeroPosAtkUpRateRocketLauncher;                // 0x0164 (0x0004) [0x0000000000000000]               
	float                                              ZeroPosDistMinRocketLauncher;                  // 0x0168 (0x0004) [0x0000000000000000]               
	float                                              ZeroPosDistMaxRocketLauncher;                  // 0x016C (0x0004) [0x0000000000000000]               
	float                                              ArmorPiercingShotAtkUpRate;                    // 0x0170 (0x0004) [0x0000000000000000]               
	float                                              ArmorPiercingShotTime;                         // 0x0174 (0x0004) [0x0000000000000000]               
	float                                              InvincibleRandomRate;                          // 0x0178 (0x0004) [0x0000000000000000]               
	int32_t                                            SkillMoveGaugeUpFortRevenge;                   // 0x017C (0x0004) [0x0000000000000000]               
	float                                              HeadShotDamageReduceRate;                      // 0x0180 (0x0004) [0x0000000000000000]               
	float                                              SniperRifleLastShotAtkUpRate;                  // 0x0184 (0x0004) [0x0000000000000000]               
	float                                              RocketLauncherLastShotAtkUpRate;               // 0x0188 (0x0004) [0x0000000000000000]               
	int32_t                                            HomeRunRate;                                   // 0x018C (0x0004) [0x0000000000000000]               
	int32_t                                            StrikeRate;                                    // 0x0190 (0x0004) [0x0000000000000000]               
	float                                              StrikeAtkUpRate;                               // 0x0194 (0x0004) [0x0000000000000000]               
	int32_t                                            BeanBallRate;                                  // 0x0198 (0x0004) [0x0000000000000000]               
	float                                              BeanBallAtkUpRate;                             // 0x019C (0x0004) [0x0000000000000000]               
	float                                              RevolverBulletConsumptionRate;                 // 0x01A0 (0x0004) [0x0000000000000000]               
	float                                              SniperRifleBulletConsumptionRate;              // 0x01A4 (0x0004) [0x0000000000000000]               
	float                                              RocketLauncherBulletConsumptionRate;           // 0x01A8 (0x0004) [0x0000000000000000]               
	float                                              PitchingMachineBulletConsumptionRate;          // 0x01AC (0x0004) [0x0000000000000000]               
	float                                              FlameRadiationBulletConsumptionRate;           // 0x01B0 (0x0004) [0x0000000000000000]               
	float                                              ArcheryBulletConsumptionRate;                  // 0x01B4 (0x0004) [0x0000000000000000]               
	float                                              TaserGunBulletConsumptionRate;                 // 0x01B8 (0x0004) [0x0000000000000000]               
	float                                              SquareTimberFuelConsumptionRate;               // 0x01BC (0x0004) [0x0000000000000000]               
	float                                              SlashStrikeBulletConsumptionRate;              // 0x01C0 (0x0004) [0x0000000000000000]               
	float                                              ButterflyKnifeDurabilityDownRate;              // 0x01C4 (0x0004) [0x0000000000000000]               
	float                                              KatanaDurabilityDownRate;                      // 0x01C8 (0x0004) [0x0000000000000000]               
	float                                              BoxingGloveDurabilityDownRate;                 // 0x01CC (0x0004) [0x0000000000000000]               
	float                                              FireRodExplosionInterval;                      // 0x01D0 (0x0004) [0x0000000000000000]               
	float                                              FireRodExplosionAtkUp;                         // 0x01D4 (0x0004) [0x0000000000000000]               
	float                                              RevivalTimeExtend;                             // 0x01D8 (0x0004) [0x0000000000000000]               
	float                                              MushExplodeAtkRate;                            // 0x01DC (0x0004) [0x0000000000000000]               
	float                                              EatMushTimeExtend;                             // 0x01E0 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponHammer;                             // 0x01E4 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponMachete;                            // 0x01E8 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponAssaultRifle;                       // 0x01EC (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponSabre;                              // 0x01F0 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponFireworks;                          // 0x01F4 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponIron;                               // 0x01F8 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponCrossbow;                           // 0x01FC (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponKatana;                             // 0x0200 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponIceHockey;                          // 0x0204 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponCircleSaw;                          // 0x0208 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponRevolver;                           // 0x020C (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponSword;                              // 0x0210 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponChainSaw;                           // 0x0214 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponPitchingMachine;                    // 0x0218 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponKnife;                              // 0x021C (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponClaw;                               // 0x0220 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponBowling;                            // 0x0224 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponCleaver;                            // 0x0228 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponSniperRifle;                        // 0x022C (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponNailBat;                            // 0x0230 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponPecker;                             // 0x0234 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponRocketLauncher;                     // 0x0238 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponBattleAxe;                          // 0x023C (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponShotGun;                            // 0x0240 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponBike;                               // 0x0244 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponThunderRod;                         // 0x0248 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponStunRod;                            // 0x024C (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponDrill;                              // 0x0250 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponNailGun;                            // 0x0254 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponArcwelding;                         // 0x0258 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponFireRod;                            // 0x025C (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponFireBaton;                          // 0x0260 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponShovel;                             // 0x0264 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponFireRadiation;                      // 0x0268 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponThrowingKnife;                      // 0x026C (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponMorningStar;                        // 0x0270 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponArchery;                            // 0x0274 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponBoxingGlove;                        // 0x0278 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponYoyo;                               // 0x027C (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponSpear;                              // 0x0280 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponShishimai;                          // 0x0284 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponTaserGun;                           // 0x0288 (0x0004) [0x0000000000000000]               
	float                                              AtkUpWeaponSquareTimber;                       // 0x028C (0x0004) [0x0000000000000000]               
	float                                              AtkUpSkillMoveSword;                           // 0x0290 (0x0004) [0x0000000000000000]               
	float                                              AtkUpSkillMoveIceHockey;                       // 0x0294 (0x0004) [0x0000000000000000]               
	float                                              AtkUpSkillMoveBike;                            // 0x0298 (0x0004) [0x0000000000000000]               
	float                                              AtkUpSkillMoveBeamMachte;                      // 0x029C (0x0004) [0x0000000000000000]               
	float                                              AtkUpSkillMoveShotGun;                         // 0x02A0 (0x0004) [0x0000000000000000]               
	int32_t                                            StunRodSkillMoveCostDown;                      // 0x02A4 (0x0004) [0x0000000000000000]               
	float                                              NoDmgKillAttackUpPer;                          // 0x02A8 (0x0004) [0x0000000000000000]               
	float                                              NoDmgKillAttackUpMax;                          // 0x02AC (0x0004) [0x0000000000000000]               
	float                                              TargetHpHighAddDamagePer;                      // 0x02B0 (0x0004) [0x0000000000000000]               
	float                                              TargetHpHighAddDamageRate;                     // 0x02B4 (0x0004) [0x0000000000000000]               
	float                                              TargetHpLowAddDamagePer;                       // 0x02B8 (0x0004) [0x0000000000000000]               
	float                                              TargetHpLowAddDamageRate;                      // 0x02BC (0x0004) [0x0000000000000000]               
	float                                              DmgChargePer;                                  // 0x02C0 (0x0004) [0x0000000000000000]               
	float                                              ClimbCriffSpeedRate;                           // 0x02C4 (0x0004) [0x0000000000000000]               
	float                                              DashStaminaRate;                               // 0x02C8 (0x0004) [0x0000000000000000]               
	float                                              AvoidStaminaRate;                              // 0x02CC (0x0004) [0x0000000000000000]               
	float                                              GuardStaminaRate;                              // 0x02D0 (0x0004) [0x0000000000000000]               
	float                                              GuardDamageRate;                               // 0x02D4 (0x0004) [0x0000000000000000]               
	float                                              DownDamageRate;                                // 0x02D8 (0x0004) [0x0000000000000000]               
	float                                              TiredSpeedRate;                                // 0x02DC (0x0004) [0x0000000000000000]               
	float                                              BackAttackDamageUpRate;                        // 0x02E0 (0x0004) [0x0000000000000000]               
	float                                              DownAttackDamageUpRate;                        // 0x02E4 (0x0004) [0x0000000000000000]               
	float                                              HeadShotDamageUpRate;                          // 0x02E8 (0x0004) [0x0000000000000000]               
	float                                              DoubleGripAttackDamageUpRate;                  // 0x02EC (0x0004) [0x0000000000000000]               
	float                                              GroggyAccumuRate;                              // 0x02F0 (0x0004) [0x0000000000000000]               
	float                                              DownSpeedRate;                                 // 0x02F4 (0x0004) [0x0000000000000000]               
	float                                              EatSpeedRate;                                  // 0x02F8 (0x0004) [0x0000000000000000]               
	float                                              StaminaLifeShaveRate;                          // 0x02FC (0x0004) [0x0000000000000000]               
	float                                              CureFloorRate;                                 // 0x0300 (0x0004) [0x0000000000000000]               
	float                                              ReloadSpeedRate;                               // 0x0304 (0x0004) [0x0000000000000000]               
	float                                              ReloadSpeedRateCrossBow;                       // 0x0308 (0x0004) [0x0000000000000000]               
	float                                              MagazineUpRate;                                // 0x030C (0x0004) [0x0000000000000000]               
	float                                              RecoilDownRate;                                // 0x0310 (0x0004) [0x0000000000000000]               
	float                                              GunAttackUpRate;                               // 0x0314 (0x0004) [0x0000000000000000]               
	float                                              DifferGenderAttackUpRate;                      // 0x0318 (0x0004) [0x0000000000000000]               
	float                                              CriticalUpPer;                                 // 0x031C (0x0004) [0x0000000000000000]               
	float                                              CriticalUpPerYoyo;                             // 0x0320 (0x0004) [0x0000000000000000]               
	float                                              CriticalUpPerCrossBow;                         // 0x0324 (0x0004) [0x0000000000000000]               
	float                                              CriticalUpPerSabre;                            // 0x0328 (0x0004) [0x0000000000000000]               
	float                                              DoppelgangerKillerRate;                        // 0x032C (0x0004) [0x0000000000000000]               
	float                                              StelthUpRate;                                  // 0x0330 (0x0004) [0x0000000000000000]               
	int32_t                                            MaintenanceValue;                              // 0x0334 (0x0004) [0x0000000000000000]               
	float                                              MaintenanceRate;                               // 0x0338 (0x0004) [0x0000000000000000]               
	float                                              SkillMoveMaintenanceRate;                      // 0x033C (0x0004) [0x0000000000000000]               
	int32_t                                            RecoveryUpRate;                                // 0x0340 (0x0004) [0x0000000000000000]               
	float                                              FireDmgTimeReductionRate;                      // 0x0344 (0x0004) [0x0000000000000000]               
	float                                              FireDmgUpRateFireBaton;                        // 0x0348 (0x0004) [0x0000000000000000]               
	float                                              FireDmgUpRateFlameRadiation;                   // 0x034C (0x0004) [0x0000000000000000]               
	float                                              ElectDmgTimeReductionRate;                     // 0x0350 (0x0004) [0x0000000000000000]               
	float                                              MuleAttackUpRate;                              // 0x0354 (0x0004) [0x0000000000000000]               
	float                                              SandDmgTimeRate;                               // 0x0358 (0x0004) [0x0000000000000000]               
	float                                              HungrySpeedDownRate;                           // 0x035C (0x0004) [0x0000000000000000]               
	float                                              ElevetorDiscountRate;                          // 0x0360 (0x0004) [0x0000000000000000]               
	float                                              EquipNeedStrRate;                              // 0x0364 (0x0004) [0x0000000000000000]               
	float                                              EquipNeedDexRate;                              // 0x0368 (0x0004) [0x0000000000000000]               
	float                                              EquipNeedVitRate;                              // 0x036C (0x0004) [0x0000000000000000]               
	float                                              EquipNeedLukRate;                              // 0x0370 (0x0004) [0x0000000000000000]               
	float                                              EquipNeedHpRate;                               // 0x0374 (0x0004) [0x0000000000000000]               
	float                                              EquipNeedStmRate;                              // 0x0378 (0x0004) [0x0000000000000000]               
	float                                              BagSpareAtkUpRate;                             // 0x037C (0x0004) [0x0000000000000000]               
	float                                              DmgHumanRate;                                  // 0x0380 (0x0004) [0x0000000000000000]               
	float                                              DmgNonHumanRate;                               // 0x0384 (0x0004) [0x0000000000000000]               
	float                                              ComboFirstDmgRate;                             // 0x0388 (0x0004) [0x0000000000000000]               
	float                                              ComboSecondDmgRate;                            // 0x038C (0x0004) [0x0000000000000000]               
	float                                              SkillConsumAtkUp;                              // 0x0390 (0x0004) [0x0000000000000000]               
	float                                              SkillMoveSlowMotionRate;                       // 0x0394 (0x0004) [0x0000000000000000]               
	float                                              SkillMoveSlowMotionTime;                       // 0x0398 (0x0004) [0x0000000000000000]               
	float                                              SkillMovePcExcepSlowMotionRate;                // 0x039C (0x0004) [0x0000000000000000]               
	float                                              SkillMovePcExcepSlowMotionTime;                // 0x03A0 (0x0004) [0x0000000000000000]               
	float                                              RobHelathRate;                                 // 0x03A4 (0x0004) [0x0000000000000000]               
	float                                              PlayerEnemyVoiceRate;                          // 0x03A8 (0x0004) [0x0000000000000000]               
	float                                              BulletDurabilityRecoveryRate;                  // 0x03AC (0x0004) [0x0000000000000000]               
	float                                              DashDisAddExpUp;                               // 0x03B0 (0x0004) [0x0000000000000000]               
	float                                              DashDisExpUpMax;                               // 0x03B4 (0x0004) [0x0000000000000000]               
	float                                              DashDisAddMoneyUp;                             // 0x03B8 (0x0004) [0x0000000000000000]               
	float                                              DashDisMoneyUpMax;                             // 0x03BC (0x0004) [0x0000000000000000]               
	float                                              AvoidDisAddExpUp;                              // 0x03C0 (0x0004) [0x0000000000000000]               
	float                                              AvoidDisExpUpMax;                              // 0x03C4 (0x0004) [0x0000000000000000]               
	float                                              AvoidDisAddMoneyUp;                            // 0x03C8 (0x0004) [0x0000000000000000]               
	float                                              AvoidDisMoneyUpMax;                            // 0x03CC (0x0004) [0x0000000000000000]               
	float                                              GuardDisAddExpUp;                              // 0x03D0 (0x0004) [0x0000000000000000]               
	float                                              GuardDisExpUpMax;                              // 0x03D4 (0x0004) [0x0000000000000000]               
	float                                              GuardDisAddMoneyUp;                            // 0x03D8 (0x0004) [0x0000000000000000]               
	float                                              GuardDisMoneyUpMax;                            // 0x03DC (0x0004) [0x0000000000000000]               
	float                                              EmptyHandsFireProb;                            // 0x03E0 (0x0004) [0x0000000000000000]               
	float                                              EmptyHandsFirePer;                             // 0x03E4 (0x0004) [0x0000000000000000]               
	float                                              EmptyHandsElectProb;                           // 0x03E8 (0x0004) [0x0000000000000000]               
	float                                              EmptyHandsElectPer;                            // 0x03EC (0x0004) [0x0000000000000000]               
	float                                              EmptyHandsPoisonProb;                          // 0x03F0 (0x0004) [0x0000000000000000]               
	float                                              EmptyHandsPoisonPer;                           // 0x03F4 (0x0004) [0x0000000000000000]               
	float                                              EmptyHandsExpProb;                             // 0x03F8 (0x0004) [0x0000000000000000]               
	TArray<struct FBrgOutRangeAttackUpParam>           OutRangeAttackUpArray;                         // 0x03FC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgLevelCheckAttackUpParam>         LevelCheckAttackUpArray;                       // 0x040C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgActionCtrl_BossCrowley.BrgB3ThunderObject
// 0x001C
struct FBrgB3ThunderObject
{
	class ABrgProjectile_BossThunder*                  m_projectile;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     m_launch_position;                             // 0x0008 (0x000C) [0x0000000000000000]               
	float                                              m_interval;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	unsigned long                                      m_is_launch : 1;                               // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgActionCtrl_BossCrowley.BrgB3FireBallObject
// 0x0028
struct FBrgB3FireBallObject
{
	class ABrgProjectile_BossFireBall*                 m_projectile;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            m_state;                                       // 0x0008 (0x0001) [0x0000000000000000]               
	struct FVector                                     m_launch_position;                             // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     m_magnitude;                                   // 0x0018 (0x000C) [0x0000000000000000]               
	float                                              m_work_time;                                   // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPawn_MiddleBossJindie.BrgMBJ_StealthMeshChange
// 0x0014
struct FBrgMBJ_StealthMeshChange
{
	unsigned long                                      mbStealthWork : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mDeltaTime;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              mChangeTime;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            mPhase;                                        // 0x000C (0x0001) [0x0000000000000000]               
	unsigned long                                      mbStealthIn : 1;                               // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgPawn_MiddleBossJindie.BrgMBJ_CameraAimInfo
// 0x00A0
struct FBrgMBJ_CameraAimInfo
{
	struct FName                                       mBoneName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class UAnimNodeAimOffset*                          mAimOffset;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     mLaserPos;                                     // 0x0010 (0x000C) [0x0000000000000000]               
	float                                              mLaserLength;                                  // 0x001C (0x0004) [0x0000000000000000]               
	struct FVector                                     mLaserPosNow;                                  // 0x0020 (0x000C) [0x0000000000000000]               
	unsigned long                                      mLaserPosReachable : 1;                        // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mbFindTarget : 1;                              // 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FParamMoveData                              mMoveParam;                                    // 0x0030 (0x006C) [0x0000000000000000]               
	float                                              mMoveTime;                                     // 0x009C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_MiddleBossJindie.BrgMBJ_TargetMoveInfo
// 0x0020
struct FBrgMBJ_TargetMoveInfo
{
	struct FVector                                     mPos;                                          // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     mMoveDir;                                      // 0x000C (0x000C) [0x0000000000000000]               
	float                                              mDeltaTime;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              mCount;                                        // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomCharaNative.BrgCharaStatisticsData
// 0x007C
struct FBrgCharaStatisticsData
{
	int32_t                                            AttackCnt;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            AttackHitCnt;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            TakeAttack;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            SkillMoveAttackCnt;                            // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            SkillMoveAttackHitCnt;                         // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            SkillMoveTakeAttack;                           // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            AttackAverageDist;                             // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            TakeDamageCnt;                                 // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            TakeDamage;                                    // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            SkillMoveTakeDamageCnt;                        // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            SkillMoveTakeDamage;                           // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            AvoidCnt;                                      // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            AttackTiredCnt;                                // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            AvoidTiredCnt;                                 // 0x0034 (0x0004) [0x0000000000000000]               
	int32_t                                            RunTiredCnt;                                   // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            GuardInCnt;                                    // 0x003C (0x0004) [0x0000000000000000]               
	int32_t                                            GuardSuccessCnt;                               // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            JustGuardCnt;                                  // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            BackAttackCnt;                                 // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            HeadShotCnt;                                   // 0x004C (0x0004) [0x0000000000000000]               
	float                                              LiveTime;                                      // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              BattleTime;                                    // 0x0054 (0x0004) [0x0000000000000000]               
	int32_t                                            KillCnt;                                       // 0x0058 (0x0004) [0x0000000000000000]               
	int32_t                                            DiscoveredEnemy;                               // 0x005C (0x0004) [0x0000000000000000]               
	int32_t                                            RepiarCnt;                                     // 0x0060 (0x0004) [0x0000000000000000]               
	int32_t                                            EquipBreakCnt;                                 // 0x0064 (0x0004) [0x0000000000000000]               
	int32_t                                            EatCnt;                                        // 0x0068 (0x0004) [0x0000000000000000]               
	int32_t                                            MeditationCnt;                                 // 0x006C (0x0004) [0x0000000000000000]               
	int32_t                                            TakenRobCnt;                                   // 0x0070 (0x0004) [0x0000000000000000]               
	int32_t                                            PickMoney;                                     // 0x0074 (0x0004) [0x0000000000000000]               
	int32_t                                            PickSpirit;                                    // 0x0078 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomCharaNative.BrgEquipCategoryParam
// 0x0010
struct FBrgEquipCategoryParam
{
	int32_t                                            Military;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            HomeCenter;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Fantasy;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            Sport;                                         // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomCharaNative.BrgEquipStatus
// 0x01B8
struct FBrgEquipStatus
{
	int32_t                                            ArmLAttackPower;                               // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ArmRAttackPower;                               // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            DefencePower;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            ArmLAddAttackPower;                            // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            ArmRAddAttackPower;                            // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            AddDefencePower;                               // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              ArmLBreakRate;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              ArmRBreakRate;                                 // 0x001C (0x0004) [0x0000000000000000]               
	struct FBrgCharaStatus                             AddStatus;                                     // 0x0020 (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgCharaStatus                             AddRateStatus;                                 // 0x0054 (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgEquipCategoryParam                      CategoryArmLAtk;                               // 0x0088 (0x0010) [0x0000000000000000]               
	struct FBrgEquipCategoryParam                      CategoryArmRAtk;                               // 0x0098 (0x0010) [0x0000000000000000]               
	struct FBrgEquipCategoryParam                      CategoryDef;                                   // 0x00A8 (0x0010) [0x0000000000000000]               
	struct FBrgEquipCategoryParam                      CategoryArmorNum;                              // 0x00B8 (0x0010) [0x0000000000000000]               
	TArray<uint8_t>                                    ArmLAttackAttrArray;                           // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<uint8_t>                                    ArmRAttackAttrArray;                           // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              ArmLAttackAttrParamArray[0x7];                 // 0x00E8 (0x001C) [0x0000000000000000]               
	float                                              ArmRAttackAttrParamArray[0x7];                 // 0x0104 (0x001C) [0x0000000000000000]               
	float                                              DefenceAttrParamArray[0x7];                    // 0x0120 (0x001C) [0x0000000000000000]               
	unsigned long                                      bDoubleGripR : 1;                              // 0x013C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDoubleGripL : 1;                              // 0x013C (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                            eFootPartMaterialType;                         // 0x0140 (0x0001) [0x0000000000000000]               
	int32_t                                            MaintenanceValue;                              // 0x0144 (0x0004) [0x0000000000000000]               
	struct FBrgDbSkillMove                             DbArmLSkill;                                   // 0x0148 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbSkillMove                             DbArmRSkill;                                   // 0x0180 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomCharaNative.BrgQuickUseItemInfo
// 0x0028
struct FBrgQuickUseItemInfo
{
	unsigned long                                      mEnable : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            mItemType;                                     // 0x0004 (0x0001) [0x0000000000000000]               
	class FString                                      mEid;                                          // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Mid;                                           // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgActor_Bloodnium.BrgActor_Bloodnium_Unit
// 0x008C
struct FBrgActor_Bloodnium_Unit
{
	class UParticleSystemComponent*                    mPSC;                                          // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	unsigned long                                      mGetMode : 1;                                  // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mMove : 1;                                     // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mEnd : 1;                                      // 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              mAlpha;                                        // 0x000C (0x0004) [0x0000000000000000]               
	float                                              mMoveTime;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	struct FVector                                     mLocation;                                     // 0x0014 (0x000C) [0x0000000000000000]               
	struct FRotator                                    mRotation;                                     // 0x0020 (0x000C) [0x0000000000000000]               
	struct FRotator                                    mRotSpeed;                                     // 0x002C (0x000C) [0x0000000000000000]               
	unsigned long                                      mRotStop : 1;                                  // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mBloodnium;                                    // 0x003C (0x0004) [0x0000000000000000]               
	struct FVector                                     mGetBaseLocation;                              // 0x0040 (0x000C) [0x0000000000000000]               
	float                                              mGetJumpPower;                                 // 0x004C (0x0004) [0x0000000000000000]               
	float                                              mGetLocationZ;                                 // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              mGetMoveRate;                                  // 0x0054 (0x0004) [0x0000000000000000]               
	float                                              mGetMoveTime;                                  // 0x0058 (0x0004) [0x0000000000000000]               
	unsigned long                                      mActivateSystem : 1;                           // 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     mBaseLocation;                                 // 0x0060 (0x000C) [0x0000000000000000]               
	float                                              mHAngle;                                       // 0x006C (0x0004) [0x0000000000000000]               
	float                                              mHAngleSpeed;                                  // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              mVAngle;                                       // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              mVAngleSpeed;                                  // 0x0078 (0x0004) [0x0000000000000000]               
	float                                              mDAngle;                                       // 0x007C (0x0004) [0x0000000000000000]               
	float                                              mDAngleSpeed;                                  // 0x0080 (0x0004) [0x0000000000000000]               
	float                                              mEAngle;                                       // 0x0084 (0x0004) [0x0000000000000000]               
	float                                              mEAngleSpeed;                                  // 0x0088 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgActor_DailyRewardBox.BrgDailyRewardBoxColorParam
// 0x0044
struct FBrgDailyRewardBoxColorParam
{
	struct FLinearColor                                DiffuseColor;                                  // 0x0000 (0x0010) [0x0000000000000000]               
	struct FLinearColor                                ReflectionColor;                               // 0x0010 (0x0010) [0x0000000000000000]               
	struct FLinearColor                                SpecularColor;                                 // 0x0020 (0x0010) [0x0000000000000000]               
	struct FLinearColor                                EmissiveColor;                                 // 0x0030 (0x0010) [0x0000000000000000]               
	float                                              SpecularPower;                                 // 0x0040 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgActor_FacilityTimerBillboard.FacilityTimerBillboard_Disp
// 0x0034
struct FFacilityTimerBillboard_Disp
{
	uint8_t                                            mType;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      mHourString;                                   // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mMinuteString;                                 // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mString;                                       // 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgActor_Parameter.Brg_FloatParameter
// 0x000C
struct FBrg_FloatParameter
{
	struct FName                                       mName;                                         // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              mValue;                                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgActor_Parameter.Brg_IntParameter
// 0x000C
struct FBrg_IntParameter
{
	struct FName                                       mName;                                         // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mValue;                                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgActor_Parameter.Brg_VectorParameter
// 0x0014
struct FBrg_VectorParameter
{
	struct FName                                       mName;                                         // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     mValue;                                        // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgActor_Parameter.Brg_StringParameter
// 0x0018
struct FBrg_StringParameter
{
	struct FName                                       mName;                                         // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FString                                      mValue;                                        // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgActor_Treasure_ThrowItem.BrgMushroomAttackInfo
// 0x0040
struct FBrgMushroomAttackInfo
{
	struct FBrgAttackInfo                              mAttackInfo;                                   // 0x0000 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgAttackAttrParam>                 mAttackAttrArray;                              // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgActor_Treasure_ThrowItem.BrgKabutoTakeSplit_Unit
// 0x003C
struct FBrgKabutoTakeSplit_Unit
{
	unsigned long                                      mMove : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mEnd : 1;                                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mImpact : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            mBoneIndex;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     mLocation;                                     // 0x0008 (0x000C) [0x0000000000000000]               
	struct FRotator                                    mRotation;                                     // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     mSpeed;                                        // 0x0020 (0x000C) [0x0000000000000000]               
	struct FRotator                                    mRotSpeed;                                     // 0x002C (0x000C) [0x0000000000000000]               
	unsigned long                                      mRotStop : 1;                                  // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgActor_Treasure_ThrowItem.BrgThrowObjectState
// 0x00EC
struct FBrgThrowObjectState
{
	struct FVector                                     mLocation;                                     // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     mVelocity;                                     // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     mExtents;                                      // 0x0018 (0x000C) [0x0000000000000000]               
	struct FBrgTreasureMushroomThrowParam              mParam;                                        // 0x0024 (0x00A0) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mMoveType;                                     // 0x00C4 (0x0001) [0x0000000000000000]               
	uint8_t                                            mActType;                                      // 0x00C5 (0x0001) [0x0000000000000000]               
	float                                              mKarukasaStraightTime;                         // 0x00C8 (0x0004) [0x0000000000000000]               
	float                                              mKarukasaStraightTimeCounter;                  // 0x00CC (0x0004) [0x0000000000000000]               
	float                                              mKarukasaMoveAngle;                            // 0x00D0 (0x0004) [0x0000000000000000]               
	unsigned long                                      mKarukasaChangeAngleMode : 1;                  // 0x00D4 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mKarukasaTargetChangeAngle;                    // 0x00D8 (0x0004) [0x0000000000000000]               
	float                                              mKarukasaCompChangeAngle;                      // 0x00DC (0x0004) [0x0000000000000000]               
	float                                              mKarukasaChangeAngleSpeed;                     // 0x00E0 (0x0004) [0x0000000000000000]               
	float                                              mKarukasaSpeedXY;                              // 0x00E4 (0x0004) [0x0000000000000000]               
	float                                              mKarukasaSpeedZ;                               // 0x00E8 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAI_GOAP.WorldState
// 0x0020
struct FWorldState
{
	int32_t                                            Values_0;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Values_32;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Values_64;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            Values_96;                                     // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            DontCare_0;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            DontCare_32;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            DontCare_64;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            DontCare_96;                                   // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAIProbTableCtrl.BrgAIConditionData
// 0x0014
struct FBrgAIConditionData
{
	uint8_t                                            mType;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              mValue;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mAddKey;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	unsigned long                                      mbRequired : 1;                                // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mbSubKey : 1;                                  // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            mDebugDigit;                                   // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAIProbTableCtrl.BrgAIActStateData
// 0x000C
struct FBrgAIActStateData
{
	struct FName                                       mName;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	unsigned long                                      mbChangeEnable : 1;                            // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgAIProbTableCtrl.BrgAIProbData
// 0x0040
struct FBrgAIProbData
{
	class FString                                      mPnt;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<float>                                      mConditionNumTable;                            // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<float>                                      mActProbTable;                                 // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mDbTableIndex;                                 // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            mMeetCount;                                    // 0x0034 (0x0004) [0x0000000000000000]               
	int32_t                                            mKey;                                          // 0x0038 (0x0004) [0x0000000000000000]               
	unsigned long                                      mbSelectEnable : 1;                            // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgAIChangeCtrl.BrgAICtrl_StateData
// 0x000C
struct FBrgAICtrl_StateData
{
	struct FName                                       mStateName;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              mProb;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAIChangeCtrl.BrgAICtrl_ActTypeData
// 0x0014
struct FBrgAICtrl_ActTypeData
{
	int32_t                                            mActType;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	TArray<struct FBrgAICtrl_StateData>                mStateList;                                    // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenuPart_ItemInfoPanel.BrgUIMenuPart_ItemInfoPanel_DescLineInfo
// 0x0014
struct FBrgUIMenuPart_ItemInfoPanel_DescLineInfo
{
	unsigned long                                      mIsCaption : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      mString;                                       // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgAICtrl_BaseNative.BrgHateTarget
// 0x0010
struct FBrgHateTarget
{
	class ABrgPawn_BaseNative*                         Target;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              AccumuHate;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              VolatiliHate;                                  // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_Base.BrgJumpInfo
// 0x0020
struct FBrgJumpInfo
{
	struct FVector                                     StartPos;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     EndPos;                                        // 0x000C (0x000C) [0x0000000000000000]               
	float                                              MoveSpeed;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              Power;                                         // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_Bone.BrgBonePhaseAIParam
// 0x0014
struct FBrgBonePhaseAIParam
{
	int32_t                                            AttackProbability;                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            DefenseProbability;                            // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            ForwardRollAtkProb;                            // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            SpinAtkProb;                                   // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            OneStrokeAtkProb;                              // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_Bone.BrgBoneAtkDevideParam
// 0x0008
struct FBrgBoneAtkDevideParam
{
	uint8_t                                            AttackKind;                                    // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            AttackProb;                                    // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_MiddleBossGoto09.BrgMb3LotteryItem
// 0x000C
struct FBrgMb3LotteryItem
{
	int32_t                                            m_action_id;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_probability;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_sum;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_MiddleBossU10.BrgMb4LotteryItem
// 0x000C
struct FBrgMb4LotteryItem
{
	int32_t                                            m_action_id;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_probability;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_sum;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPawn_MiddleBossJindie.BrgWarpGroupChangeInfo
// 0x001C
struct FBrgWarpGroupChangeInfo
{
	int32_t                                            mUseMinLevel;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            mUseMaxLevel;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              mHpRate;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	TArray<int32_t>                                    mUseWarpGroupNum;                              // 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgPawn_MiddleBossJindie.BrgMBJ_BulletInfo
// 0x0008
struct FBrgMBJ_BulletInfo
{
	int32_t                                            mIndex;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              mAddFireDegYaw;                                // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPawn_MiddleBossJindie.BrgMBJ_SpecialWarpInfo
// 0x0018
struct FBrgMBJ_SpecialWarpInfo
{
	int32_t                                            mUseMinLevel;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            mUseMaxLevel;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	TArray<int32_t>                                    mUseWarpGroupNum;                              // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgAICtrl_BossJackson.BrgRocketTargetInfo
// 0x0010
struct FBrgRocketTargetInfo
{
	struct FVector                                     mPos;                                          // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              mAngle;                                        // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_MiddleBossHunk.BrgMBH_HitCheckData
// 0x0040
struct FBrgMBH_HitCheckData
{
	class AActor*                                      mActor;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	struct FTraceHitInfo                               mInfo;                                         // 0x0008 (0x0028) [0x0000000000080000] (CPF_Component)
	struct FVector                                     mPos;                                          // 0x0030 (0x000C) [0x0000000000000000]               
	float                                              mDist;                                         // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_MiddleBossHunk.BrgMBH_TargetSound
// 0x0024
struct FBrgMBH_TargetSound
{
	class ABrgPawn_Base*                               mPawn;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     mPos;                                          // 0x0008 (0x000C) [0x0000000000000000]               
	uint8_t                                            mLevel;                                        // 0x0014 (0x0001) [0x0000000000000000]               
	float                                              mDeltaTime;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              mInitDist;                                     // 0x001C (0x0004) [0x0000000000000000]               
	unsigned long                                      mbTarget : 1;                                  // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mbHitAttack : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mbInArena : 1;                                 // 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct BrgGame.BrgSeqAct_RandomGenerateLevel.BrgRandomGenerateLevelFixedParts
// 0x0015
struct FBrgRandomGenerateLevelFixedParts
{
	struct FName                                       mLevelName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mGridMapX;                                     // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mGridMapY;                                     // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mRotation;                                     // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            mType;                                         // 0x0014 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgSeqAct_RandomGenerateLevel.BrgRandomGenerateLevelPartsSet
// 0x0018
struct FBrgRandomGenerateLevelPartsSet
{
	TArray<struct FName>                               mCandidateLevelNames;                          // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            mUseLevelNum;                                  // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mRandomUseLevelNumRange;                       // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgRandomGenerateLevelManager.BrgRandomGenerateLevel_UnitTestGenerateSetting_Part
// 0x0010
struct FBrgRandomGenerateLevel_UnitTestGenerateSetting_Part
{
	struct FName                                       mLevelName;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            mToMainEdge;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            mFromMainEdge;                                 // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgRandomGenerateLevelManager.BrgRandomGenerateLevel_UnitTestGenerateSetting
// 0x0051
struct FBrgRandomGenerateLevel_UnitTestGenerateSetting
{
	struct FName                                       mMainUnitName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       mMainUnitKismetName;                           // 0x0008 (0x0008) [0x0000000000000000]               
	unsigned long                                      mbLoadMainUnitKismetLevel : 1;                 // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mRotation;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	TArray<struct FName>                               mDeadEndPartss;                                // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgRandomGenerateLevel_UnitTestGenerateSetting_Part> mJointPartss;                                  // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               mFarPartss;                                    // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mbIgnoreEdgeGroupSettings : 1;                 // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mRandomSeed;                                   // 0x004C (0x0004) [0x0000000000000000]               
	uint8_t                                            mSpawnType;                                    // 0x0050 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgRandomGenerateLevelManager.BrgRandomGenerateLevelGroupSetting
// 0x001C
struct FBrgRandomGenerateLevelGroupSetting
{
	struct FPointer                                    mpLevelParts;                                  // 0x0000 (0x0008) [0x0000000000001000] (CPF_Native)  
	int32_t                                            mRelativeLocationX;                            // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            mRelativeLocationRDLU;                         // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            mRelativeLocationLDRU;                         // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mRelativeRotation;                             // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              mRelativeHeight;                               // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgRandomGenerateLevelManager.BrgRandomGenerateLevelParts
// 0x006C
struct FBrgRandomGenerateLevelParts
{
	int32_t                                            mEdges[0x6];                                   // 0x0000 (0x0018) [0x0000000000000000]               
	float                                              mEdgeHeights[0x6];                             // 0x0018 (0x0018) [0x0000000000000000]               
	uint8_t                                            mEdgeGroups[0x6];                              // 0x0030 (0x0006) [0x0000000000000000]               
	unsigned long                                      mbUsed : 1;                                    // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mFlags;                                        // 0x003C (0x0004) [0x0000000000000000]               
	struct FName                                       mLevelName;                                    // 0x0040 (0x0008) [0x0000000000000000]               
	int32_t                                            mRotation;                                     // 0x0048 (0x0004) [0x0000000000000000]               
	class ULevelStreaming*                             mpLevelStreaming;                              // 0x004C (0x0008) [0x0000000000000000]               
	TArray<struct FBrgRandomGenerateLevelGroupSetting> mGroupedLevelSettings;                         // 0x0054 (0x0010) [0x0000000000001000] (CPF_Native)  
	uint8_t                                            mConnectionType;                               // 0x0064 (0x0001) [0x0000000000000000]               
	int32_t                                            mFixedEnterEdgeIndex;                          // 0x0068 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgRandomGenerateLevelManager.BrgRandomGenerateLevel_FadeApproachCameraParam
// 0x0034
struct FBrgRandomGenerateLevel_FadeApproachCameraParam
{
	class FString                                      mMeshName;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UPrimitiveComponent*>                 mComponent;                                    // 0x0010 (0x0010) [0x0000000004480008] (CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	float                                              mFadeMinDist;                                  // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              mFadeStartDist;                                // 0x0024 (0x0004) [0x0000000000000000]               
	struct FVector                                     mOriginOffset;                                 // 0x0028 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgRandomGenerateLevelManager.StoreEBB
// 0x00B0
struct FStoreEBB
{
	class UStaticMeshComponent*                        _SMC;                                          // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UTextureRenderTarget2D*                      _EscalatorNextEBBRT;                           // 0x0008 (0x0008) [0x0000000000000000]               
	struct FBrgDbFloorArea                             _DbFloorArea;                                  // 0x0010 (0x00A0) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgRandomGenerateLevelManager.BrgRandomGenerateLevelManager_MapMemory
// 0x0030
struct FBrgRandomGenerateLevelManager_MapMemory
{
	struct FName                                       mFloorID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       mAreaid;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	struct FBitArray_Mirror                            mArrivedBits;                                  // 0x0010 (0x0020) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct BrgGame.BrgRandomGenerateLevelManager.BrgRandomGenerateLevelManager_ReplaceMaterialReplacedMaterialInfo
// 0x0014
struct FBrgRandomGenerateLevelManager_ReplaceMaterialReplacedMaterialInfo
{
	class UMeshComponent*                              mTarget;                                       // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            mMaterialIndex;                                // 0x0008 (0x0004) [0x0000000000000000]               
	class UMaterialInterface*                          mOriginalMaterial;                             // 0x000C (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgRandomGenerateLevelManager.BrgRandomGenerateLevelManager_ReplaceMaterialSuffixPackageTable
// 0x0020
struct FBrgRandomGenerateLevelManager_ReplaceMaterialSuffixPackageTable
{
	class FString                                      mSuffix;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mPackageName;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgRandomGenerateLevelManager.BrgRandomGenerateLevelPairRouteLength
// 0x0018
struct FBrgRandomGenerateLevelPairRouteLength
{
	struct FName                                       mLevelNameA;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       mLevelNameB;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mMin;                                          // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mMax;                                          // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgRandomGenerateLevelManager.BrgRandomGenerateLevelUnitSettingOverrideEdgeSetting
// 0x0005
struct FBrgRandomGenerateLevelUnitSettingOverrideEdgeSetting
{
	int32_t                                            mIndex;                                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            mGroup;                                        // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgRandomGenerateLevelManager.BrgRandomGenerateLevelUnitSettingOverride
// 0x0018
struct FBrgRandomGenerateLevelUnitSettingOverride
{
	struct FName                                       mLevelName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FBrgRandomGenerateLevelUnitSettingOverrideEdgeSetting> mEdgeSettings;                                 // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgRandomGenerateLevelManager.BrgRandomGenerateLevel_Condition
// 0x0010
struct FBrgRandomGenerateLevel_Condition
{
	struct FName                                       mKey;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       mValue;                                        // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgRandomGenerateLevelManager.BrgRandomGenerateLevelConditionalReplaceUnit
// 0x0030
struct FBrgRandomGenerateLevelConditionalReplaceUnit
{
	TArray<struct FBrgRandomGenerateLevel_Condition>   mConditions;                                   // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FName                                       mSrcLevelName;                                 // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       mDstLevelName;                                 // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       mDstLevelKISName;                              // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            mDstUnitType;                                  // 0x0028 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mDstRotationOffset;                            // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgRandomGenerateLevelManager.BrgRandomGenerateLevelSettings
// 0x018C
struct FBrgRandomGenerateLevelSettings
{
	class FString                                      mAreaid;                                       // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            mGenerateEnemyNum;                             // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mGenerateMiddleBossNum;                        // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mGenerateTreasureNum;                          // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FBrgRandomGenerateLevelPartsSet             mStartPartsSet;                                // 0x001C (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FBrgRandomGenerateLevelPartsSet             mGoalPartsSet;                                 // 0x0034 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FBrgRandomGenerateLevelPartsSet             mBranchPartsSet;                               // 0x004C (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FBrgRandomGenerateLevelPartsSet             mDeadEndPartsSet;                              // 0x0064 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FBrgRandomGenerateLevelPartsSet             mCurvePartsSet;                                // 0x007C (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FBrgRandomGenerateLevelPartsSet             mStraightPartsSet;                             // 0x0094 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FBrgRandomGenerateLevelPartsSet             mRestPartsSet;                                 // 0x00AC (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FBrgRandomGenerateLevelPartsSet             mShopPartsSet;                                 // 0x00C4 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FBrgRandomGenerateLevelPartsSet             mGroupedPartsSet;                              // 0x00DC (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FBrgRandomGenerateLevelPartsSet             mFarPartsSet;                                  // 0x00F4 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FBrgRandomGenerateLevelPartsSet             mJointPartsSet;                                // 0x010C (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FBrgRandomGenerateLevelFixedParts>   mFixedLevelParts;                              // 0x0124 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              mHexagonOuterCircle;                           // 0x0134 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mHexagonInnerCircle;                           // 0x0138 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mHexagonSide;                                  // 0x013C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mMaxStraightLength;                            // 0x0140 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mMaxGenerateTestCount;                         // 0x0144 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mMinRouteLength;                               // 0x0148 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mMaxRouteLength;                               // 0x014C (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FBrgRandomGenerateLevelPairRouteLength> mPairRouteLengths;                             // 0x0150 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              mMiniMapCameraZoom;                            // 0x0160 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mUseKismetId;                                  // 0x0164 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      mbUseJointParts : 1;                           // 0x0168 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	TArray<struct FBrgRandomGenerateLevelUnitSettingOverride> mUnitSettingOverrides;                         // 0x016C (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FBrgRandomGenerateLevelConditionalReplaceUnit> mConditionalReplaceUnits;                      // 0x017C (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgRandomGenerateLevelManager.BrgLevelUnitTestFixedParts
// 0x0010
struct FBrgLevelUnitTestFixedParts
{
	struct FName                                       mLevelName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mOffsetDirection;                              // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mRotation;                                     // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgRandomGenerateLevelManager.BrgRandomGenerateLevelPendingLevelStatusChangeRequest
// 0x0010
struct FBrgRandomGenerateLevelPendingLevelStatusChangeRequest
{
	int32_t                                            mCellId;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class ULevelStreaming*                             mpLevelStreaming;                              // 0x0004 (0x0008) [0x0000000000000000]               
	unsigned long                                      mbNewStatus : 1;                               // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgAICtrl_CustomChara.BrgCellWanderTarget
// 0x0010
struct FBrgCellWanderTarget
{
	struct FVector                                     Point;                                         // 0x0000 (0x000C) [0x0000000000000000]               
	unsigned long                                      bCheck : 1;                                    // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgAICtrl_CustomChara.BrgDeathStatisticsParam
// 0x0044
struct FBrgDeathStatisticsParam
{
	int32_t                                            LiveTime;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            BattleTime;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            KillCnt;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              AtkDmgRate;                                    // 0x000C (0x0004) [0x0000000000000000]               
	float                                              AttackHitRate;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              BackAttackRate;                                // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              GuardSuccessRate;                              // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            HeadShotNum;                                   // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            EquipBreakNum;                                 // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            AttackTiredNum;                                // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            AvoidTiredNum;                                 // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            RunTiredNum;                                   // 0x002C (0x0004) [0x0000000000000000]               
	float                                              AtkDefRate;                                    // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              AtkNumSec;                                     // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              AvoidNumSec;                                   // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              AtkAverageDist;                                // 0x003C (0x0004) [0x0000000000000000]               
	float                                              EscapeNum;                                     // 0x0040 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_CustomChara.BrgAIBaseParam
// 0x0011
struct FBrgAIBaseParam
{
	float                                              Clever;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Offensive;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Defensive;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Avoid;                                         // 0x000C (0x0004) [0x0000000000000000]               
	uint8_t                                            ePersonality;                                  // 0x0010 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_CustomChara.BrgInviteEnemyInfo
// 0x000C
struct FBrgInviteEnemyInfo
{
	class ABrgPawn_EnemyBase*                          Enemy;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Dist;                                          // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_CustomChara.BrgEscapePoint
// 0x0010
struct FBrgEscapePoint
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Dist;                                          // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_FourForcemenBlackThunder.BrgRunAwayPoint
// 0x0010
struct ABrgAICtrl_FourForcemenBlackThunder_FBrgRunAwayPoint
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Dist;                                          // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_FourForcemenPaleWind.BrgRunAwayPoint
// 0x0010
struct ABrgAICtrl_FourForcemenPaleWind_FBrgRunAwayPoint
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Dist;                                          // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_FourForcemenRedNapalm.BrgRunAwayPoint
// 0x0010
struct ABrgAICtrl_FourForcemenRedNapalm_FBrgRunAwayPoint
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Dist;                                          // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_Hovering.BrgHoveringPhaseAIParam
// 0x000C
struct FBrgHoveringPhaseAIParam
{
	int32_t                                            AttackProbability;                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            PikeAtkProb;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            StrongPikeAtkProb;                             // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_Jackal.BrgTeleportPoint
// 0x0010
struct FBrgTeleportPoint
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Dist;                                          // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_MushBeastBase.BrgAICtrl_MushBeastAIRate
// 0x0010
struct FBrgAICtrl_MushBeastAIRate
{
	TArray<float>                                      mRates;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgAICtrl_MushBeastBase.BrgAICtrl_MushBeastNearTargetDist
// 0x000C
struct FBrgAICtrl_MushBeastNearTargetDist
{
	float                                              mDist;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              mHeight;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              mCheckTime;                                    // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_MushBeastBass.BrgAICtrl_MushBeastBass_SortForDistance
// 0x0008
struct FBrgAICtrl_MushBeastBass_SortForDistance
{
	int32_t                                            mIndex;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              mDistance;                                     // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_Reversal.BrgReversalPhaseAIParam
// 0x0018
struct FBrgReversalPhaseAIParam
{
	int32_t                                            AttackProbability;                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            PunchAtkProb;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            UppercutProb;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            WaveAtkProb;                                   // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            RangeAtkProb;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            GraspAtkProb;                                  // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_Reversal.BrgReversalAtkDevideParam
// 0x0008
struct FBrgReversalAtkDevideParam
{
	uint8_t                                            AttackKind;                                    // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            AttackProb;                                    // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_Scratch.BrgScratchPhaseAIParam
// 0x0014
struct FBrgScratchPhaseAIParam
{
	int32_t                                            AttackProbability;                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            DefenseProbability;                            // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            CutOffProb;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            ThurstProb;                                    // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            StrikeProb;                                    // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_Turret.BrgTurretPhaseAIParam
// 0x0018
struct FBrgTurretPhaseAIParam
{
	int32_t                                            AttackProbability;                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            DefenseProbability;                            // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            NearFlameProb;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            NearTurretProb;                                // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            MiddleGrenadeProb;                             // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MiddleTurretProb;                              // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAICtrl_Turret.BrgTurretMoveDevideParam
// 0x0008
struct FBrgTurretMoveDevideParam
{
	uint8_t                                            MoveDir;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            MoveProb;                                      // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgGameInfoNative.BrgGameInfo_CntMilliSecondInfo
// 0x001C
struct FBrgGameInfo_CntMilliSecondInfo
{
	class FString                                      mOutputName;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           mCntSecond;                                    // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            mCntMilliSecond;                               // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPawn_CustomCharaAI.BrgHunterLog
// 0x0034
struct FBrgHunterLog
{
	float                                              BattleTime;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            TakeAttackTotal;                               // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            SkillMoveTakeAttack;                           // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            DamageTotal;                                   // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            SkillMoveDamage;                               // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            TakeAttackHitCnt;                              // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            DamageHitCnt;                                  // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            EnBattleStartAttackCnt;                        // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            EnBattleStartAttackHitCnt;                     // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            PcBattleStartAttackCnt;                        // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            PcBattleStartAttackHitCnt;                     // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            EnBattleStartHp;                               // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            PcBattleStartHp;                               // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgGameInfo.BrgRGOTask
// 0x000C
struct FBrgRGOTask
{
	uint8_t                                            mType;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            mDatabaseIndex;                                // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mTargetPointIndex;                             // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Prison.BrgUIMenu_Prison_PrisonData
// 0x00B0
struct FBrgUIMenu_Prison_PrisonData
{
	struct FBrgDbUserPrison                            prison;                                        // 0x0000 (0x0080) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bUseFlg : 1;                                   // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            ConciliateState;                               // 0x0084 (0x0001) [0x0000000000000000]               
	uint64_t                                           iConditionStartTime;                           // 0x0088 (0x0008) [0x0000000000000000]               
	uint64_t                                           iConditionEndTime;                             // 0x0090 (0x0008) [0x0000000000000000]               
	int32_t                                            iConditionDay;                                 // 0x0098 (0x0004) [0x0000000000000000]               
	int32_t                                            iConditionHour;                                // 0x009C (0x0004) [0x0000000000000000]               
	int32_t                                            iConditionMinute;                              // 0x00A0 (0x0004) [0x0000000000000000]               
	int32_t                                            iConditionSecond;                              // 0x00A4 (0x0004) [0x0000000000000000]               
	float                                              fConciliateTime;                               // 0x00A8 (0x0004) [0x0000000000000000]               
	unsigned long                                      bWarFlg : 1;                                   // 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgGameInfo.BrgDebugDamageInfo
// 0x0108
struct FBrgDebugDamageInfo
{
	unsigned long                                      Enable : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            Damage;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	class UClass*                                      DamageType;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	class ABrgPawn_Base*                               DamagePawn;                                    // 0x0010 (0x0008) [0x0000000000000000]               
	class ABrgPawn_Base*                               DamageCauser;                                  // 0x0018 (0x0008) [0x0000000000000000]               
	int32_t                                            AttackPower;                                   // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              DefencePower;                                  // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              VitRate;                                       // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              EquipDefencePower;                             // 0x002C (0x0004) [0x0000000000000000]               
	float                                              EquipAddDefencePower;                          // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              BaseDefUpScale;                                // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              AilmentDefencePower;                           // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              DefenceCharacteristic;                         // 0x003C (0x0004) [0x0000000000000000]               
	float                                              BackDirAdjust;                                 // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              AvoidDmgReductionRate;                         // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              DownDamageRevision;                            // 0x0048 (0x0004) [0x0000000000000000]               
	float                                              AdjustAttackPowerParts;                        // 0x004C (0x0004) [0x0000000000000000]               
	float                                              DamageRevision;                                // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              CauserDamageRevision;                          // 0x0054 (0x0004) [0x0000000000000000]               
	float                                              CauserDamageUpRate;                            // 0x0058 (0x0004) [0x0000000000000000]               
	float                                              StatusAilmentDamageRevision;                   // 0x005C (0x0004) [0x0000000000000000]               
	float                                              JackalDamageRevision;                          // 0x0060 (0x0004) [0x0000000000000000]               
	float                                              GroggyAdjustRate;                              // 0x0064 (0x0004) [0x0000000000000000]               
	float                                              GroggyRate;                                    // 0x0068 (0x0004) [0x0000000000000000]               
	float                                              BaseDamage;                                    // 0x006C (0x0004) [0x0000000000000000]               
	float                                              AttackAttr[0x7];                               // 0x0070 (0x001C) [0x0000000000000000]               
	float                                              DefenceAttr[0x7];                              // 0x008C (0x001C) [0x0000000000000000]               
	float                                              DamageAttr[0x7];                               // 0x00A8 (0x001C) [0x0000000000000000]               
	float                                              BaseAttackPower;                               // 0x00C4 (0x0004) [0x0000000000000000]               
	float                                              AtkAdjustRate;                                 // 0x00C8 (0x0004) [0x0000000000000000]               
	class FString                                      AttackID;                                      // 0x00CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              AtkStatusRate;                                 // 0x00DC (0x0004) [0x0000000000000000]               
	float                                              AtkMotionRate;                                 // 0x00E0 (0x0004) [0x0000000000000000]               
	float                                              AtkRandRate;                                   // 0x00E4 (0x0004) [0x0000000000000000]               
	float                                              AtkCriticalRate;                               // 0x00E8 (0x0004) [0x0000000000000000]               
	float                                              TakeAttackPower;                               // 0x00EC (0x0004) [0x0000000000000000]               
	float                                              BaseAtkUpScale;                                // 0x00F0 (0x0004) [0x0000000000000000]               
	float                                              ChargeAttackRate;                              // 0x00F4 (0x0004) [0x0000000000000000]               
	float                                              WeaponPowerUpAttackRate;                       // 0x00F8 (0x0004) [0x0000000000000000]               
	float                                              NakedAtkPower;                                 // 0x00FC (0x0004) [0x0000000000000000]               
	float                                              ArmLAttackPower;                               // 0x0100 (0x0004) [0x0000000000000000]               
	float                                              ArmRAttackPower;                               // 0x0104 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUtility.MaterialScalarParameter
// 0x0014
struct FMaterialScalarParameter
{
	struct FName                                       mMaterialName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       mScalarParameterName;                          // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              mScalarParameterValue;                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenuPart_ButtonGuide.BrgUIButtonGuideUnitBaseInfo
// 0x0014
struct FBrgUIButtonGuideUnitBaseInfo
{
	uint8_t                                            mIcon;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      mName;                                         // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgGameInfo.BrgDebugFloorObject
// 0x0018
struct FBrgDebugFloorObject
{
	class FString                                      mFlrid;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mMax;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mMin;                                          // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgGameInfo.BrgDebugGaugeUp
// 0x0008
struct FBrgDebugGaugeUp
{
	float                                              GaugeUp;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              DrawTime;                                      // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAIDirector.BrgPathTestUnit
// 0x0020
struct FBrgPathTestUnit
{
	class FString                                      UnitName;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      KismetName;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgAIDirector.BrgPathTestError
// 0x0034
struct FBrgPathTestError
{
	int32_t                                            ErrorIndex;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	class ABrgAICtrl_CustomChara*                      AICtrl;                                        // 0x0004 (0x0008) [0x0000000000000000]               
	int32_t                                            StartIndex;                                    // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            TargetIndex;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	class FString                                      ErrorStr;                                      // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     ErrorPoint;                                    // 0x0024 (0x000C) [0x0000000000000000]               
	unsigned long                                      bFindPath : 1;                                 // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTimeOver : 1;                                 // 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BrgGame.BrgPawn_MushBeastBase.BrgPawn_MushBeastMushroom_Mesh
// 0x0038
struct FBrgPawn_MushBeastMushroom_Mesh
{
	class UBrgPartMesh*                                mMesh;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class UAnimNodeBlendList*                          mAnimNodeBlendList;                            // 0x0008 (0x0008) [0x0000000000000000]               
	unsigned long                                      mVisible : 1;                                  // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mAnimStartRequest : 1;                         // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              mAnimStartDelay;                               // 0x0014 (0x0004) [0x0000000000000000]               
	class FString                                      mPSPath;                                       // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UParticleSystem*                             mPSTemplate;                                   // 0x0028 (0x0008) [0x0000000000000000]               
	class UParticleSystemComponent*                    mPSComponent;                                  // 0x0030 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct BrgGame.BrgPawn_MiddleBossU10.BrgMb4LoopEffectUnit
// 0x0010
struct FBrgMb4LoopEffectUnit
{
	class UParticleSystemComponent*                    m_fx_component;                                // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              m_life_time;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              m_fade_out_time;                               // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAnimNotify_GroundEvent.BrgGroundEventSE
// 0x0004
struct FBrgGroundEventSE
{
	uint8_t                                            ePlayerSEType;                                 // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            eGeneralSEType;                                // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Padding[0x2];                                  // 0x0002 (0x0002) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAnimNotify_GroundEvent.BrgWaterEventSE
// 0x0012
struct FBrgWaterEventSE
{
	class USoundCue*                                   mSECue_Low;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   mSECue_High;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Padding[0x2];                                  // 0x0010 (0x0002) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAnimNotify_GroundEvent.BrgWaterEventEffect
// 0x0012
struct FBrgWaterEventEffect
{
	class UParticleSystem*                             mEffect_Low;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             mEffect_High;                                  // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Padding[0x2];                                  // 0x0010 (0x0002) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAnimNotify_PostEffectMaterialParam.BrgNotifyMaterialScalarParam
// 0x000C
struct FBrgNotifyMaterialScalarParam
{
	struct FName                                       mName;                                         // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              mValue;                                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgAnimNotify_PostEffectMaterialParam.BrgNotifyMaterialVectorParam
// 0x0018
struct FBrgNotifyMaterialVectorParam
{
	struct FName                                       mName;                                         // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                mValue;                                        // 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgAnimNotify_TypeEvent.BrgTypeEventSE
// 0x0012
struct FBrgTypeEventSE
{
	class USoundCue*                                   mMiddleBoss;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   mBoss;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Padding[0x2];                                  // 0x0010 (0x0002) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAnimNotify_TypeEvent.BrgTypeEventEffect
// 0x0012
struct FBrgTypeEventEffect
{
	class UParticleSystem*                             mMiddleBoss;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             mBoss;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Padding[0x2];                                  // 0x0010 (0x0002) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgAssaultFort_Manager.BrgAssaultFortEnemyInfo
// 0x000C
struct FBrgAssaultFortEnemyInfo
{
	class ABrgPawn_Base*                               EnemyPawn;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            mbDeath;                                       // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomCharaNative.BrgTotalStatus
// 0x00D0
struct FBrgTotalStatus
{
	struct FBrgCharaStatus                             CharaStatus;                                   // 0x0000 (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgCharaStatus                             AddCharaStatus;                                // 0x0034 (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            NakedAtkPower;                                 // 0x0068 (0x0004) [0x0000000000000000]               
	int32_t                                            ArmLAttackPower;                               // 0x006C (0x0004) [0x0000000000000000]               
	int32_t                                            ArmRAttackPower;                               // 0x0070 (0x0004) [0x0000000000000000]               
	int32_t                                            DefencePower;                                  // 0x0074 (0x0004) [0x0000000000000000]               
	int32_t                                            AddArmLAttackPower;                            // 0x0078 (0x0004) [0x0000000000000000]               
	int32_t                                            AddArmRAttackPower;                            // 0x007C (0x0004) [0x0000000000000000]               
	int32_t                                            AddDefencePower;                               // 0x0080 (0x0004) [0x0000000000000000]               
	int32_t                                            MaintenanceValue;                              // 0x0084 (0x0004) [0x0000000000000000]               
	float                                              MaintenanceRate;                               // 0x0088 (0x0004) [0x0000000000000000]               
	float                                              SkillMoveMaintenanceRate;                      // 0x008C (0x0004) [0x0000000000000000]               
	float                                              ExpUpRate;                                     // 0x0090 (0x0004) [0x0000000000000000]               
	float                                              AbpUpRate;                                     // 0x0094 (0x0004) [0x0000000000000000]               
	float                                              DrainRate_Skill;                               // 0x0098 (0x0004) [0x0000000000000000]               
	float                                              DrainRateMax;                                  // 0x009C (0x0004) [0x0000000000000000]               
	float                                              DrainRate_StatusAilment;                       // 0x00A0 (0x0004) [0x0000000000000000]               
	float                                              StaminaLifeShaveRate;                          // 0x00A4 (0x0004) [0x0000000000000000]               
	float                                              DamageDownRate;                                // 0x00A8 (0x0004) [0x0000000000000000]               
	float                                              AtkDamageUpRate;                               // 0x00AC (0x0004) [0x0000000000000000]               
	float                                              RiskDamageUpRate;                              // 0x00B0 (0x0004) [0x0000000000000000]               
	float                                              DefenceAttrParamArray[0x7];                    // 0x00B4 (0x001C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgBgmManager.BrgBgmEventSetting
// 0x0020
struct FBrgBgmEventSetting
{
	class FString                                      EnemyName;                                     // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class FString>                              bgmNames;                                      // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgBgmManager.BrgPlayerEnemyBgmFloorSetting
// 0x0038
struct FBrgPlayerEnemyBgmFloorSetting
{
	class FString                                      StageName;                                     // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            FloorMin;                                      // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            FloorMax;                                      // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class FString>                              JingleNames;                                   // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class FString>                              bgmNames;                                      // 0x0028 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgBgmManager.BrgBgmFloorSetting
// 0x0028
struct FBrgBgmFloorSetting
{
	class FString                                      StageName;                                     // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            FloorMin;                                      // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            FloorMax;                                      // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class FString>                              bgmNames;                                      // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgBgmManager.BrgZakoBattleBgmFloorSetting
// 0x0028
struct FBrgZakoBattleBgmFloorSetting
{
	class FString                                      StageName;                                     // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            FloorMin;                                      // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            FloorMax;                                      // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class FString>                              bgmNames;                                      // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgBgmCategoryListSequentialRadio.BrgBgmJingleList
// 0x0010
struct FBrgBgmJingleList
{
	TArray<class FString>                              mBgmNames;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgBgmCategoryListSequentialRadio.BrgBgmRandomSelectWork
// 0x0030
struct FBrgBgmRandomSelectWork
{
	TArray<class FString>                              mBgmOriginalNames;                             // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              mBgmCandidateNames;                            // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mBgmLastSelectedName;                          // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgBgmManager.BrgSpecialPlayerEnemyBgmSetting
// 0x0030
struct FBrgSpecialPlayerEnemyBgmSetting
{
	TArray<uint8_t>                                    mTargetPlayerEnemyTypes;                       // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class FString>                              JingleNames;                                   // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class FString>                              bgmNames;                                      // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgBgmManager.BrgBgmRequestCounter
// 0x0008
struct FBrgBgmRequestCounter
{
	int32_t                                            mCount;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            mMax;                                          // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCameraMode_BaseNative.CameraCheckTrace
// 0x001C
struct FCameraCheckTrace
{
	struct FRotator                                    mAdjustRot;                                    // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              mSlideWeight;                                  // 0x000C (0x0004) [0x0000000000000000]               
	struct FVector                                     mExtent;                                       // 0x0010 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCameraMode_Base.BrgCameraMode_Rotation_Limit
// 0x0010
struct FBrgCameraMode_Rotation_Limit
{
	float                                              mPitchMax;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              mPitchMin;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              mYawMax;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              mYawMin;                                       // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgChunkManagerInterface.BrgChunkManagerInterface_ChunkFloor
// 0x0024
struct FBrgChunkManagerInterface_ChunkFloor
{
	uint8_t                                            mChunk;                                        // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      mFloorID;                                      // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mAreaid;                                       // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgCommerceDialog.BrgCommerceDialogParams
// 0x0018
struct FBrgCommerceDialogParams
{
	int32_t                                            Mode;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ServiceLabel;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	TArray<class FString>                              Targets;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgCommerceDialog.BrgCommerceDialogResult
// 0x0008
struct FBrgCommerceDialogResult
{
	int32_t                                            bResult;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	unsigned long                                      Authorized : 1;                                // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgDatabase.BrgMasterLevelStatus
// 0x002C
struct FBrgMasterLevelStatus
{
	int32_t                                            Level;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              AtkUpRate;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              StaminaConsumpRate;                            // 0x0008 (0x0004) [0x0000000000000000]               
	unsigned long                                      bSkillMoveAcquire : 1;                         // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SkillMoveAtkUpRate;                            // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            SkillMoveLevel;                                // 0x0014 (0x0004) [0x0000000000000000]               
	unsigned long                                      bGoreFinishAcquire : 1;                        // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              GoreExpUpRate;                                 // 0x001C (0x0004) [0x0000000000000000]               
	float                                              GoreCoinUpRate;                                // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            ActionLevel;                                   // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              DiffusionDownRate;                             // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgDatabase.BrgDbMasterLevelStatusCache
// 0x0010
struct FBrgDbMasterLevelStatusCache
{
	TArray<struct FBrgMasterLevelStatus>               mLevelStatuss;                                 // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgDatabase.BrgFloorSetting
// 0x0014
struct FBrgFloorSetting
{
	class FString                                      flrid;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            lvl;                                           // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgDatabase.BrgDbDefAttrCached
// 0x0008
struct FBrgDbDefAttrCached
{
	int32_t                                            mType;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            mValue;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgDatabase.BrgDbAtkAttrCached
// 0x0008
struct FBrgDbAtkAttrCached
{
	int32_t                                            mType;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            mValue;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgDatabase.BrgDbParamOffsetCached
// 0x000C
struct FBrgDbParamOffsetCached
{
	struct FName                                       Mid;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            mValue;                                        // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgDatabase.BrgDbPartCached
// 0x0178
struct FBrgDbPartCached
{
	struct FName                                       Mid;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       mName;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	struct FName                                       mType;                                         // 0x0010 (0x0008) [0x0000000000000000]               
	struct FName                                       mDrcat;                                        // 0x0018 (0x0008) [0x0000000000000000]               
	struct FName                                       mSp_series;                                    // 0x0020 (0x0008) [0x0000000000000000]               
	int32_t                                            mRarity;                                       // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            mLvllmt;                                       // 0x002C (0x0004) [0x0000000000000000]               
	struct FName                                       mLvllmttp;                                     // 0x0030 (0x0008) [0x0000000000000000]               
	int32_t                                            mLvllmt_c;                                     // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            mDur;                                          // 0x003C (0x0004) [0x0000000000000000]               
	int32_t                                            mDur_c;                                        // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            mDur_shoot;                                    // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            mDur_hit;                                      // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            mDur_rage;                                     // 0x004C (0x0004) [0x0000000000000000]               
	int32_t                                            mDur_drp;                                      // 0x0050 (0x0004) [0x0000000000000000]               
	int32_t                                            mDur_drp_pe;                                   // 0x0054 (0x0004) [0x0000000000000000]               
	int32_t                                            mDur_drp_met;                                  // 0x0058 (0x0004) [0x0000000000000000]               
	int32_t                                            mDur_drp_arc;                                  // 0x005C (0x0004) [0x0000000000000000]               
	int32_t                                            mDur_drp_ams;                                  // 0x0060 (0x0004) [0x0000000000000000]               
	int32_t                                            mDur_drp_rft;                                  // 0x0064 (0x0004) [0x0000000000000000]               
	int32_t                                            mCap_drp;                                      // 0x0068 (0x0004) [0x0000000000000000]               
	int32_t                                            mCap_drp_pe;                                   // 0x006C (0x0004) [0x0000000000000000]               
	int32_t                                            mCap_drp_met;                                  // 0x0070 (0x0004) [0x0000000000000000]               
	int32_t                                            mCap_drp_arc;                                  // 0x0074 (0x0004) [0x0000000000000000]               
	int32_t                                            mCap_drp_ams;                                  // 0x0078 (0x0004) [0x0000000000000000]               
	int32_t                                            mCap_drp_rft;                                  // 0x007C (0x0004) [0x0000000000000000]               
	struct FName                                       mNextptid;                                     // 0x0080 (0x0008) [0x0000000000000000]               
	int32_t                                            mIs_consume;                                   // 0x0088 (0x0004) [0x0000000000000000]               
	TArray<struct FName>                               mAssets;                                       // 0x008C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               mFassets;                                      // 0x009C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mDef;                                          // 0x00AC (0x0004) [0x0000000000000000]               
	int32_t                                            mDef0;                                         // 0x00B0 (0x0004) [0x0000000000000000]               
	int32_t                                            mDef_c;                                        // 0x00B4 (0x0004) [0x0000000000000000]               
	TArray<struct FBrgDbDefAttrCached>                 mDefattrs;                                     // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mAtk;                                          // 0x00C8 (0x0004) [0x0000000000000000]               
	int32_t                                            mAtk0;                                         // 0x00CC (0x0004) [0x0000000000000000]               
	int32_t                                            mAtk_c;                                        // 0x00D0 (0x0004) [0x0000000000000000]               
	TArray<struct FBrgDbAtkAttrCached>                 mAtkattrs;                                     // 0x00D4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbParamOffsetCached>             mPrmofss;                                      // 0x00E4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mCapacity;                                     // 0x00F4 (0x0004) [0x0000000000000000]               
	int32_t                                            mSpare;                                        // 0x00F8 (0x0004) [0x0000000000000000]               
	int32_t                                            mMov;                                          // 0x00FC (0x0004) [0x0000000000000000]               
	struct FName                                       mEsc;                                          // 0x0100 (0x0008) [0x0000000000000000]               
	struct FName                                       mMat;                                          // 0x0108 (0x0008) [0x0000000000000000]               
	int32_t                                            mRecv;                                         // 0x0110 (0x0004) [0x0000000000000000]               
	int32_t                                            mRech;                                         // 0x0114 (0x0004) [0x0000000000000000]               
	int32_t                                            mAccu;                                         // 0x0118 (0x0004) [0x0000000000000000]               
	int32_t                                            mNoaim_accu;                                   // 0x011C (0x0004) [0x0000000000000000]               
	int32_t                                            mGrgscl;                                       // 0x0120 (0x0004) [0x0000000000000000]               
	int32_t                                            mGrgodds;                                      // 0x0124 (0x0004) [0x0000000000000000]               
	int32_t                                            mHsscl;                                        // 0x0128 (0x0004) [0x0000000000000000]               
	int32_t                                            mGrdscl;                                       // 0x012C (0x0004) [0x0000000000000000]               
	int32_t                                            mCnsstm;                                       // 0x0130 (0x0004) [0x0000000000000000]               
	struct FName                                       mSecat;                                        // 0x0134 (0x0008) [0x0000000000000000]               
	struct FName                                       mWdse;                                         // 0x013C (0x0008) [0x0000000000000000]               
	struct FName                                       mOl;                                           // 0x0144 (0x0008) [0x0000000000000000]               
	int32_t                                            mPrice_b;                                      // 0x014C (0x0004) [0x0000000000000000]               
	int32_t                                            mPrice_b_c;                                    // 0x0150 (0x0004) [0x0000000000000000]               
	int32_t                                            mInit_waiting_minute;                          // 0x0154 (0x0004) [0x0000000000000000]               
	int32_t                                            mAdd_waiting_minute;                           // 0x0158 (0x0004) [0x0000000000000000]               
	int32_t                                            mSpirit_s;                                     // 0x015C (0x0004) [0x0000000000000000]               
	int32_t                                            mSpirit_s_c;                                   // 0x0160 (0x0004) [0x0000000000000000]               
	int32_t                                            mPrice_s;                                      // 0x0164 (0x0004) [0x0000000000000000]               
	int32_t                                            mPrice_s_c;                                    // 0x0168 (0x0004) [0x0000000000000000]               
	int32_t                                            mBns;                                          // 0x016C (0x0004) [0x0000000000000000]               
	struct FName                                       mBnstp;                                        // 0x0170 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgDatabase.BrgBodyLvlPlus
// 0x0028
struct FBrgBodyLvlPlus
{
	int32_t                                            mLvl;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            mHp;                                           // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mStm;                                          // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            mStr;                                          // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            mDex;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mVit;                                          // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            mLuk;                                          // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            mBag;                                          // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            mSkill;                                        // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            mRage;                                         // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomCharaNative.BrgMeshPhysicsWeightAnim
// 0x0018
struct FBrgMeshPhysicsWeightAnim
{
	class UBrgSkeletalMeshComponent*                   Mesh;                                          // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              AnimCnt;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              AnimTime;                                      // 0x000C (0x0004) [0x0000000000000000]               
	float                                              StartValue;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              EndValue;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomCharaNative.BrgDeathBagBackupInfo
// 0x0724
struct FBrgDeathBagBackupInfo
{
	struct FBrgLocalItemInfo                           mLocalItemInfo;                                // 0x0000 (0x0718) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mSlotIndex;                                    // 0x0718 (0x0004) [0x0000000000000000]               
	uint8_t                                            mEquipSite;                                    // 0x071C (0x0001) [0x0000000000000000]               
	int32_t                                            mQuickUseSlotNo;                               // 0x0720 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomCharaNative.BrgSimuPawnStatus
// 0x001C
struct FBrgSimuPawnStatus
{
	int32_t                                            Health;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            HealthMax;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              NoDmgKillAttackUpRate;                         // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              DoppelgangerKillerRate;                        // 0x000C (0x0004) [0x0000000000000000]               
	unsigned long                                      bMuleAttackUpValid : 1;                        // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            BagSpareNum;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	unsigned long                                      bSkillDisable : 1;                             // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomCharaNative.BrgSpecialStatus
// 0x0010
struct FBrgSpecialStatus
{
	int32_t                                            ArmLAttackPower;                               // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ArmRAttackPower;                               // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            NakedAttackPower;                              // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            DefencePower;                                  // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomCharaNative.BrgMasterPointStatus
// 0x0010
struct FBrgMasterPointStatus
{
	int32_t                                            Point;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              AtkUpRate;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MinAtkUp;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              PlayerAtkUp;                                   // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomCharaNative.BrgStatusAilmentStatus
// 0x0094
struct FBrgStatusAilmentStatus
{
	int32_t                                            ArmLAttackPower;                               // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ArmRAttackPower;                               // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            NakedAttackPower;                              // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            DefencePower;                                  // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            RiskArmLAttackPower;                           // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            RiskArmRAttackPower;                           // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            RiskNakedAttackPower;                          // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            NewRiskArmLAttackPower;                        // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            NewRiskArmRAttackPower;                        // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            NewRiskNakedAttackPower;                       // 0x0024 (0x0004) [0x0000000000000000]               
	struct FBrgCharaStatus                             CharaStatus;                                   // 0x0028 (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              ExpUpRate;                                     // 0x005C (0x0004) [0x0000000000000000]               
	float                                              RecoilUpRate;                                  // 0x0060 (0x0004) [0x0000000000000000]               
	float                                              DrainRate;                                     // 0x0064 (0x0004) [0x0000000000000000]               
	float                                              StaminaLifeShaveRate;                          // 0x0068 (0x0004) [0x0000000000000000]               
	float                                              DamageDownRate;                                // 0x006C (0x0004) [0x0000000000000000]               
	float                                              AtkDamageUpRate;                               // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              RiskDamageUpRate;                              // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              DefenceAttrParamArray[0x7];                    // 0x0078 (0x001C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomCharaNative.BrgEquipResearchInfo
// 0x0018
struct FBrgEquipResearchInfo
{
	float                                              Research_Slash;                                // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Research_Blow;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Research_Shoot;                                // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Research_Head;                                 // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Research_Tops;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Research_Btms;                                 // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomCharaNative.BrgPossessionItemInfo
// 0x0728
struct FBrgPossessionItemInfo
{
	unsigned long                                      mIsDeathBag : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mDeathBagIndex;                                // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            mEDbEquipSite;                                 // 0x0008 (0x0001) [0x0000000000000000]               
	int32_t                                            mEquipWeaponSlotIndex;                         // 0x000C (0x0004) [0x0000000000000000]               
	struct FBrgLocalItemInfo                           mItemInfo;                                     // 0x0010 (0x0718) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomCharaNative.BrgEquipInfo
// 0x03EC
struct FBrgEquipInfo
{
	uint8_t                                            eSite;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	struct FBrgDbPsPart                                PsPart;                                        // 0x0004 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbPsPart_AutoSetupInfo                  PartInfo;                                      // 0x003C (0x03B0) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomCharaNative.BrgWeaponStatisticsData
// 0x002C
struct FBrgWeaponStatisticsData
{
	class FString                                      Id;                                            // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Name;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            AttackCnt;                                     // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            AttackHitCnt;                                  // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            AttackAverageDist;                             // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomChara.BrgCopySkill
// 0x00CC
struct FBrgCopySkill
{
	struct FBrgDbSkill                                 Skill;                                         // 0x0000 (0x00C4) [0x0000000000400000] (CPF_NeedCtorLink)
	class ABrgCommonPawn_CustomChara*                  Target;                                        // 0x00C4 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomChara.BrgDeathReportData
// 0x0284
struct FBrgDeathReportData
{
	class AActor*                                      KilledActor;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      KilledName;                                    // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            KilledLevel;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                            eKilledWeapon;                                 // 0x001C (0x0001) [0x0000000000000000]               
	struct FBrgDbPart                                  KilledDbPart;                                  // 0x0020 (0x0234) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            KillCnt;                                       // 0x0254 (0x0004) [0x0000000000000000]               
	int32_t                                            PickMoney;                                     // 0x0258 (0x0004) [0x0000000000000000]               
	int32_t                                            PickSpirit;                                    // 0x025C (0x0004) [0x0000000000000000]               
	uint8_t                                            ePersonality;                                  // 0x0260 (0x0001) [0x0000000000000000]               
	int32_t                                            Evaluation;                                    // 0x0264 (0x0004) [0x0000000000000000]               
	int32_t                                            Year;                                          // 0x0268 (0x0004) [0x0000000000000000]               
	int32_t                                            Month;                                         // 0x026C (0x0004) [0x0000000000000000]               
	int32_t                                            Day;                                           // 0x0270 (0x0004) [0x0000000000000000]               
	int32_t                                            Hour;                                          // 0x0274 (0x0004) [0x0000000000000000]               
	int32_t                                            Min;                                           // 0x0278 (0x0004) [0x0000000000000000]               
	int32_t                                            Sec;                                           // 0x027C (0x0004) [0x0000000000000000]               
	unsigned long                                      bGoreHeadOnly : 1;                             // 0x0280 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bGoreBoneOnly : 1;                             // 0x0280 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BrgGame.BrgCommonPawn_CustomChara.BrgBlackThunderProjectileData
// 0x0010
struct FBrgBlackThunderProjectileData
{
	unsigned long                                      mbFire : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mFireTime;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	class ABrgProjectile_BlackThunder*                 mThunder;                                      // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIHUD_QuickUse.BrgUIHUD_QuickUse_ItemUnitInfo
// 0x001C
struct FBrgUIHUD_QuickUse_ItemUnitInfo
{
	int32_t                                            mNum;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            mItemType;                                     // 0x0004 (0x0001) [0x0000000000000000]               
	class FString                                      mItemId;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mItemState;                                    // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIHUD_QuickUse.BrgUIHUD_QuickUse_ItemInfoSet
// 0x0BA8
struct FBrgUIHUD_QuickUse_ItemInfoSet
{
	int32_t                                            mUnitNum;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	struct FBrgUIHUD_QuickUse_ItemUnitInfo             mUnits[0x64];                                  // 0x0004 (0x0AF0) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mSelectUnit;                                   // 0x0AF4 (0x0004) [0x0000000000000000]               
	int32_t                                            mSelectUnitDispIndex;                          // 0x0AF8 (0x0004) [0x0000000000000000]               
	int32_t                                            mSelectUnitNormalizeIndex;                     // 0x0AFC (0x0004) [0x0000000000000000]               
	class FString                                      mSelectUnitPrevId;                             // 0x0B00 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mSelectUnitPrevState;                          // 0x0B10 (0x0004) [0x0000000000000000]               
	class FString                                      mSelectUnitId;                                 // 0x0B14 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mSelectUnitState;                              // 0x0B24 (0x0004) [0x0000000000000000]               
	class FString                                      mSelectUnitNextId;                             // 0x0B28 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mSelectUnitNextState;                          // 0x0B38 (0x0004) [0x0000000000000000]               
	struct FParamMoveData                              mSelectUnitIndexRate;                          // 0x0B3C (0x006C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCorpseBulletManager.BrgCBDamageTypeChange
// 0x000C
struct FBrgCBDamageTypeChange
{
	class ABrgPawn_Base*                               mDamageTaker;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              mCnt;                                          // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgCutscene_UncleDeathQuestion.BrgGameOver_OffscreenText
// 0x0018
struct UBrgCutscene_UncleDeathQuestion_FBrgGameOver_OffscreenText
{
	float                                              X;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Y;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	class FString                                      Str;                                           // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgDebugMenu.BrgDebugAnimNodeAccessInfo
// 0x0014
struct FBrgDebugAnimNodeAccessInfo
{
	class FString                                      mString;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mTime;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgDebugMenu.BrgDebugConnectServer
// 0x0020
struct FBrgDebugConnectServer
{
	class FString                                      Env;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      URL;                                           // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgDebugMenu.BrgDebugMenu_EquipSetting
// 0x0080
struct FBrgDebugMenu_EquipSetting
{
	class FString                                      mName;                                         // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      mBody;                                         // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      mHair;                                         // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      mArmL;                                         // 0x0030 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      mArmR;                                         // 0x0040 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      mHead;                                         // 0x0050 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      mTops;                                         // 0x0060 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      mBtm;                                          // 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgDebugMenu.BrgDebugMenu_EquipSettingSet
// 0x0010
struct FBrgDebugMenu_EquipSettingSet
{
	TArray<struct FBrgDebugMenu_EquipSetting>          mList;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgDebugMenu.BrgEquipPartInfo
// 0x00F4
struct FBrgEquipPartInfo
{
	class FString                                      mMeshPath;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mPhysicsAssetPath;                             // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mMesh_L_Path;                                  // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mPhysicsAsset_L_Path;                          // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mMesh_R_Path;                                  // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mPhysicsAsset_R_Path;                          // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mHandMeshPath;                                 // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mHandPhysicsAssetPath;                         // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mHandAnimSetPath;                              // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mHandAnimTreePath;                             // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mElbowMeshPath;                                // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mElbowPhysicsAssetPath;                        // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mElbowAnimSetPath;                             // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mElbowAnimTreePath;                            // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mLeftArmReverse : 1;                           // 0x00E0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            mWeaponType;                                   // 0x00E4 (0x0001) [0x0000000000000000]               
	int32_t                                            mMotionType;                                   // 0x00E8 (0x0004) [0x0000000000000000]               
	int32_t                                            mHandType;                                     // 0x00EC (0x0004) [0x0000000000000000]               
	int32_t                                            mAimType;                                      // 0x00F0 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgJumpPoint.JumpInfo
// 0x0018
struct FJumpInfo
{
	class AActor*                                      Dest;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     CachedVelocity;                                // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bRequireDash : 1;                              // 0x0014 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct BrgGame.BrgEffFireRodSkillMove.BrgFlameColumn
// 0x0014
struct FBrgFlameColumn
{
	class UParticleSystemComponent*                    FlamePSC;                                      // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgFortAssaultButtonManager.BrgFortAssaultButtonInfo
// 0x0004
struct FBrgFortAssaultButtonInfo
{
	int32_t                                            mDummy;                                        // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgGameEngine.BrgUIPersistentRenderTargets
// 0x0098
struct FBrgUIPersistentRenderTargets
{
	class UTextureRenderTarget2D*                      mMaskTexture;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mRenderIndexPage;                              // 0x0008 (0x0008) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mRenderMainPage;                               // 0x0010 (0x0008) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mRenderMenuPage;                               // 0x0018 (0x0008) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mRenderCursorPage;                             // 0x0020 (0x0008) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mSketchbookImageRT;                            // 0x0028 (0x0008) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mFighterImageRT;                               // 0x0030 (0x0008) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mFighterImageSubRT[0x2];                       // 0x0038 (0x0010) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mRenderBalloon;                                // 0x0048 (0x0008) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mRenderFoundation;                             // 0x0050 (0x0008) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mStampRallyRenderedTexture;                    // 0x0058 (0x0008) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mStampRallyMaskedTexture;                      // 0x0060 (0x0008) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mStampRally2RenderedTexture;                   // 0x0068 (0x0008) [0x0000000000000000]               
	class UBrgTextureRenderTarget2D_UI*                mMinimap_MapTexture;                           // 0x0070 (0x0008) [0x0000000000000000]               
	class UBrgTextureRenderTarget2D_UI*                mMinimap_RenderTargetTexture;                  // 0x0078 (0x0008) [0x0000000000000000]               
	class UBrgTextureRenderTarget2D_UI*                mMinimap_UnitArrivedRate;                      // 0x0080 (0x0008) [0x0000000000000000]               
	class UBrgTextureRenderTarget2D_UI*                mMinimap_UnitTexture;                          // 0x0088 (0x0008) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mSubtitleRenderTarget;                         // 0x0090 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgGameObjectVisibleManager.BrgAddGameObjectVisibleInfo
// 0x0008
struct FBrgAddGameObjectVisibleInfo
{
	class AActor*                                      mTargetActor;                                  // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgGameObjectVisibleManager.BrgGameObjectVisibleInfo
// 0x0080
struct FBrgGameObjectVisibleInfo
{
	unsigned long                                      mbUse : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mUniqueID;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	unsigned long                                      mbDeleteRequest : 1;                           // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      mTargetActor;                                  // 0x000C (0x0008) [0x0000000000000000]               
	struct FVector                                     mTargetLocation;                               // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     mTargetLocationAdjust;                         // 0x0020 (0x000C) [0x0000000000000000]               
	TArray<class USkeletalMeshComponent*>              mTargetSkeletalMeshComponent;                  // 0x002C (0x0010) [0x0000000004480008] (CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	uint8_t                                            mValidTargetSocketName[0x8];                   // 0x003C (0x0008) [0x0000000000000000]               
	uint8_t                                            mTestTargetSocketName[0x8];                    // 0x0044 (0x0008) [0x0000000000000000]               
	struct FName                                       mTargetSocketName;                             // 0x004C (0x0008) [0x0000000000000000]               
	uint8_t                                            mValidTargetSocketName2[0x8];                  // 0x0054 (0x0008) [0x0000000000000000]               
	uint8_t                                            mTestTargetSocketName2[0x8];                   // 0x005C (0x0008) [0x0000000000000000]               
	struct FName                                       mTargetSocketName2;                            // 0x0064 (0x0008) [0x0000000000000000]               
	struct FVector                                     mTargetSocketLocation;                         // 0x006C (0x000C) [0x0000000000000000]               
	unsigned long                                      mEnableTargetSocketName : 1;                   // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mTargetDistanceSq;                             // 0x007C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgGimmick_Gunkanyama.BrgGimmickGunkanTargetUnit
// 0x000C
struct FBrgGimmickGunkanTargetUnit
{
	class ABrgPawn_Base*                               m_target_pawn;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	unsigned long                                      m_out_moment : 1;                              // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_out : 1;                                     // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BrgGame.BrgGimmick_Gunkanyama.BrgGimmickGunkanShellingUnit
// 0x0040
struct FBrgGimmickGunkanShellingUnit
{
	uint8_t                                            m_state;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              m_first_shelling_wait_time;                    // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_shelling_interval;                           // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              m_shell_count;                                 // 0x000C (0x0004) [0x0000000000000000]               
	TArray<class ABrgProjectile_Base*>                 m_shell_array;                                 // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     m_prev_target_position;                        // 0x0020 (0x000C) [0x0000000000000000]               
	class ABrgPawn_Base*                               m_target_pawn;                                 // 0x002C (0x0008) [0x0000000000000000]               
	float                                              m_shelling_center_distance;                    // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              m_shelling_sign_se_playtime;                   // 0x0038 (0x0004) [0x0000000000000000]               
	unsigned long                                      m_shelling_se_play : 1;                        // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgGimmick_Gunkanyama.BrgGimmickGunkanHariteUnit
// 0x000C
struct FBrgGimmickGunkanHariteUnit
{
	class ABrgPawn_Harite*                             m_pawn;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              m_interval;                                    // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgGimmick_Gunkanyama.BrgGimmickGunkanGimmickEnable
// 0x0004
struct FBrgGimmickGunkanGimmickEnable
{
	unsigned long                                      m_harite_enable : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_shelling_enable : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BrgGame.BrgGimmick_Gunkanyama.BrgGimmickGunkanCheckEquip
// 0x071C
struct FBrgGimmickGunkanCheckEquip
{
	struct FBrgLocalItemInfo                           m_item_info;                                   // 0x0000 (0x0718) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      m_collect : 1;                                 // 0x0718 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgGimmick_Gunkanyama.BrgGimmickGunkanEnemyEquip
// 0x0020
struct FBrgGimmickGunkanEnemyEquip
{
	class ABrgPawn_Base*                               m_equip_pawn;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	unsigned long                                      m_is_death : 1;                                // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<struct FBrgGimmickGunkanCheckEquip>         m_equip_id_list;                               // 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      m_check : 1;                                   // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgTargetPointPlaceHarite.BrgPlaceHarite
// 0x0008
struct FBrgPlaceHarite
{
	float                                              mYaw;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      mReversalScale : 1;                            // 0x0004 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct BrgGame.BrgGimmick_Timer.GimmickTimer_CountDown
// 0x000C
struct FGimmickTimer_CountDown
{
	int32_t                                            mTime;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   mCue;                                          // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgGraphicsConfig.BrgConfig_DisplayAdapterSurveyData
// 0x0008
struct FBrgConfig_DisplayAdapterSurveyData
{
	int32_t                                            Width;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Height;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgHubCustomManager.BrgHubCustomManagerDefaultResource
// 0x0008
struct FBrgHubCustomManagerDefaultResource
{
	struct FName                                       mPackageName;                                  // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgHubCustomManager.BrgHubCustomManagerTargetMaterial
// 0x000C
struct FBrgHubCustomManagerTargetMaterial
{
	class UMeshComponent*                              mMeshComponent;                                // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            mMaterialIndex;                                // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgHubCustomManager.MakeMaterialListInPackageArg
// 0x0018
struct FMakeMaterialListInPackageArg
{
	struct FName                                       mPackageName;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      mMaterialPrefix;                               // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgHubResourceManager.BrgResouceManager_Item
// 0x0028
struct FBrgResouceManager_Item
{
	int32_t                                            Mid;                                           // 0x0000 (0x0004) [0x0000000000000000]               
	struct FName                                       mUser;                                         // 0x0004 (0x0008) [0x0000000000000000]               
	uint8_t                                            mType;                                         // 0x000C (0x0001) [0x0000000000000000]               
	class FString                                      mPath;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UObject*                                     mResource;                                     // 0x0020 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgKAsset.BrgKAssetParticleSetting
// 0x0010
struct FBrgKAssetParticleSetting
{
	class UParticleSystem*                             mParticleTemplate;                             // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       mAttachBoneOrSocketName;                       // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgKeyConfig.BrgKeyConfig_LinksSetting
// 0x0010
struct FBrgKeyConfig_LinksSetting
{
	TArray<uint8_t>                                    mSetting;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgKeyConfig.BrgKeyConfig_KeySetting
// 0x0021
struct FBrgKeyConfig_KeySetting
{
	class FString                                      mPrime;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mSecond;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mMouse;                                        // 0x0020 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgLoginManagerInterface.AccountData
// 0x0030
struct FAccountData
{
	class FString                                      uuid;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Uid;                                           // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Key;                                           // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgMbObject_LoadPart.BrgMbObject_EquipInfo
// 0x02B5
struct FBrgMbObject_EquipInfo
{
	unsigned long                                      mEnable : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UBrgPartMesh*                                mParts;                                        // 0x0004 (0x0008) [0x0000000000000000]               
	struct FName                                       mSocketName;                                   // 0x000C (0x0008) [0x0000000000000000]               
	unsigned long                                      mbTranslation : 1;                             // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            mSite;                                         // 0x0018 (0x0001) [0x0000000000000000]               
	struct FBrgDbPsPart                                mDbPsPart;                                     // 0x001C (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbPart                                  mDbPart;                                       // 0x0054 (0x0234) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbPartArm                               mDbPartArm;                                    // 0x0288 (0x002C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mDbGrip;                                       // 0x02B4 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgNetworkHistoryManager.BrgNetworkHistory
// 0x0044
struct FBrgNetworkHistory
{
	class UBrgNetworkResponseInterface*                mResponse;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            mState;                                        // 0x0008 (0x0001) [0x0000000000000000]               
	float                                              mTime;                                         // 0x000C (0x0004) [0x0000000000000000]               
	class FString                                      mApiName;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mRequestId;                                    // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mErrorCode;                                    // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FColor                                      mSuccessColor;                                 // 0x0040 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgObject_Base.BrgObjectHitInfo
// 0x0040
struct FBrgObjectHitInfo
{
	float                                              Dist;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class AActor*                                      Actor;                                         // 0x0004 (0x0008) [0x0000000000000000]               
	struct FVector                                     pos;                                           // 0x000C (0x000C) [0x0000000000000000]               
	struct FTraceHitInfo                               Info;                                          // 0x0018 (0x0028) [0x0000000000080000] (CPF_Component)
};

// ScriptStruct BrgGame.BrgObject_VomitArcPool.VomiPoolHitPawnInfo
// 0x000C
struct ABrgObject_VomitArcPool_FVomiPoolHitPawnInfo
{
	class ABrgPawn_Base*                               m_pawn;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              m_hit_length;                                  // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPaleWindMushroomManager.BrgPaleWindMushroomManager_PooledMushroom
// 0x000C
struct FBrgPaleWindMushroomManager_PooledMushroom
{
	unsigned long                                      mbUsed : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class ABrgActor_Treasure_Item*                     mMushroom;                                     // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPaleWindMushroomManager.BrgPaleWindMushroomManager_Place
// 0x0010
struct FBrgPaleWindMushroomManager_Place
{
	class ABrgPaleWindMushroomPlaceTargetPoint*        mTargetPoint;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class ABrgActor_Treasure_Item*                     mMushroom;                                     // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPaleWindMushroomManager.BrgPaleWindMushroomManager_Places
// 0x0010
struct FBrgPaleWindMushroomManager_Places
{
	TArray<struct FBrgPaleWindMushroomManager_Place>   mArr;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgPaleWindMushroomManager.BrgPaleWindMushroomManager_MushroomCounter
// 0x0018
struct FBrgPaleWindMushroomManager_MushroomCounter
{
	class FString                                      Mid;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mCounter;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mMaxUseNum;                                    // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgParticle_DamageSmokeManager.BrgDamageSmokeScriptData
// 0x0018
struct FBrgDamageSmokeScriptData
{
	unsigned long                                      mbUseFlag : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class USkeletalMeshComponent*                      mMesh;                                         // 0x0004 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	unsigned long                                      mbIsSocket : 1;                                // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       mName;                                         // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPhysicalMaterialProperty.BrgPhysMatDecal
// 0x0008
struct FBrgPhysMatDecal
{
	class UDecalMaterial*                              Explosion;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgPawn_BossBase.BrgDamagePart
// 0x0010
struct FBrgDamagePart
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Hp;                                            // 0x0008 (0x0004) [0x0000000000000000]               
	unsigned long                                      bBreak : 1;                                    // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgPawn_MiddleBossGoto09.BrgMb3SpawnEnemeyDeleteState
// 0x0010
struct FBrgMb3SpawnEnemeyDeleteState
{
	unsigned long                                      m_requested_delete : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_delete_wait_time;                            // 0x0004 (0x0004) [0x0000000000000000]               
	unsigned long                                      m_requested_kill : 1;                          // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_kill_wait_time;                              // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPawn_BossCrowley.BrgB3RodEffectObject
// 0x0028
struct FBrgB3RodEffectObject
{
	class ABrgProjectile_BossRayBase*                  m_ray_projectile;                              // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       m_joint_name;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     m_joint_position;                              // 0x0010 (0x000C) [0x0000000000000000]               
	struct FRotator                                    m_joint_rotation;                              // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPawn_MiddleBossJindie.BrgMBJ_TransMaterial
// 0x0024
struct FBrgMBJ_TransMaterial
{
	class FString                                      mFileName;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UMaterialInstanceConstant*                   mMaterial;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	unsigned long                                      mbLoad : 1;                                    // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	class UMaterialInstanceConstant*                   mBodyMaterial;                                 // 0x001C (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPawn_CustomCharaPlayer.BrgPlayerGetExp
// 0x0034
struct FBrgPlayerGetExp
{
	int32_t                                            mExp;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      mDbPtid;                                       // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mDbEptid;                                      // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mAbp;                                          // 0x0024 (0x0004) [0x0000000000000000]               
	struct FVector                                     mLocation;                                     // 0x0028 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPawn_CustomCharaPlayer.BrgHeartParam
// 0x001C
struct FBrgHeartParam
{
	struct FVector                                     BaseColor;                                     // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     EmissiveColor;                                 // 0x000C (0x000C) [0x0000000000000000]               
	float                                              EmissiveIntensity;                             // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPawn_MushBeastBase.BrgPawn_MushBeastMushroom_Define
// 0x005C
struct FBrgPawn_MushBeastMushroom_Define
{
	class FString                                      mMeshPath;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mAnimSetPath;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mAnimTreePath;                                 // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UParticleSystem*                             mParticleSystem;                               // 0x0030 (0x0008) [0x0000000000000000]               
	struct FName                                       mAttachSocketName;                             // 0x0038 (0x0008) [0x0000000000000000]               
	struct FVector                                     mTranslation;                                  // 0x0040 (0x000C) [0x0000000000000000]               
	struct FRotator                                    mRotation;                                     // 0x004C (0x000C) [0x0000000000000000]               
	float                                              mScale;                                        // 0x0058 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIManager.BrgMushbeastCaptureRange
// 0x0014
struct FBrgMushbeastCaptureRange
{
	class FString                                      mMsrid;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mRange;                                        // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPawn_MushBeastCassowary.EffectCreateData
// 0x0010
struct FEffectCreateData
{
	unsigned long                                      mbEnable : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mCreateTime;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	unsigned long                                      mbLoop : 1;                                    // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mLoopTime;                                     // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_GameOverNew.BrgGameOver_OffscreenText
// 0x0018
struct UBrgUIMenu_GameOverNew_FBrgGameOver_OffscreenText
{
	float                                              X;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Y;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	class FString                                      Str;                                           // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_GameOverNew.BrgGameOver_KCDispParamInfo
// 0x02E4
struct FBrgGameOver_KCDispParamInfo
{
	uint8_t                                            mState;                                        // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              mCounter;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mNum;                                          // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            mSubNum;                                       // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            mAddNum;                                       // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mMaxNum;                                       // 0x0014 (0x0004) [0x0000000000000000]               
	struct FParamMoveDataD                             mNumMoveData;                                  // 0x0018 (0x015C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FParamMoveDataD                             mAddNumMoveData;                               // 0x0174 (0x015C) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mIsDrawAddNumNegative : 1;                     // 0x02D0 (0x0004) [0x0000000000000000] [0x00000001] 
	class UBrgUIImage*                                 mNumberImage;                                  // 0x02D4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mAddNumberImage;                               // 0x02DC (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIDeathReportManager.BrgUIDeathReportManager_ReportData
// 0x00A4
struct FBrgUIDeathReportManager_ReportData
{
	class FString                                      mTime;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mCoin;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mExperience;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            mSoul;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            mBloodnium;                                    // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            mBlueprint;                                    // 0x0020 (0x0004) [0x0000000000000000]               
	class FString                                      mMurdererName;                                 // 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mEquipRight;                                   // 0x0034 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mEquipLeft;                                    // 0x0044 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mEquipHead;                                    // 0x0054 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mEquipBody;                                    // 0x0064 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mEquipLegs;                                    // 0x0074 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int32_t>                                    mMaterial;                                     // 0x0084 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int32_t>                                    mItem;                                         // 0x0094 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgPerceptionSoundManager.BrgPerceptionSound
// 0x001C
struct FBrgPerceptionSound
{
	class ABrgPawn_BaseNative*                         OwnerPawn;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     SoundPos;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	float                                              VolumeDist;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              KeepTime;                                      // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPhysicalMaterialProperty.BrgPlayerFootMaterial
// 0x0018
struct FBrgPlayerFootMaterial
{
	class USoundCue*                                   BareSECue;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   ShoesSECue;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   SkateSECue;                                    // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgPhysicalMaterialProperty.BrgPhysMatSE_Player
// 0x00D8
struct FBrgPhysMatSE_Player
{
	struct FBrgPlayerFootMaterial                      Walk;                                          // 0x0000 (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPlayerFootMaterial                      Dodge;                                         // 0x0018 (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPlayerFootMaterial                      Slide;                                         // 0x0030 (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPlayerFootMaterial                      Scuff;                                         // 0x0048 (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPlayerFootMaterial                      Jump;                                          // 0x0060 (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPlayerFootMaterial                      Land;                                          // 0x0078 (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPlayerFootMaterial                      Down;                                          // 0x0090 (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPlayerFootMaterial                      Knee;                                          // 0x00A8 (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPlayerFootMaterial                      StandUp;                                       // 0x00C0 (0x0018) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgPhysicalMaterialProperty.BrgPhysMatCharacterSEGroup
// 0x00D8
struct FBrgPhysMatCharacterSEGroup
{
	struct FBrgPhysMatSE_Player                        Player;                                        // 0x0000 (0x00D8) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgPhysicalMaterialProperty.BrgPhysMatSE_Weapon
// 0x0008
struct FBrgPhysMatSE_Weapon
{
	class USoundCue*                                   HitSECue;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgPhysicalMaterialProperty.BrgPhysMatWeaponSEGroup
// 0x0208
struct FBrgPhysMatWeaponSEGroup
{
	struct FBrgPhysMatSE_Weapon                        Fist;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Machete;                                       // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        ButterflyKnife;                                // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        BattleAxe;                                     // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Crossbow;                                      // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        SpikeBat;                                      // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        CircleCutter;                                  // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Flamethrower;                                  // 0x0038 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Hammer;                                        // 0x0040 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Pickaxe;                                       // 0x0048 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Katana;                                        // 0x0050 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        AssaultRifle;                                  // 0x0058 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Umbrella;                                      // 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        FireExtinguisher;                              // 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Sand;                                          // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Spear;                                         // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Shield;                                        // 0x0080 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        GasolineTank;                                  // 0x0088 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Revolver;                                      // 0x0090 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        StunRod;                                       // 0x0098 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        ShotGun;                                       // 0x00A0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Mine;                                          // 0x00A8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Claw;                                          // 0x00B0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Torch;                                         // 0x00B8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        MorningStar;                                   // 0x00C0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        SniperRifle;                                   // 0x00C8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Sabre;                                         // 0x00D0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Bottle;                                        // 0x00D8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        FireRod;                                       // 0x00E0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        BoxingGlove;                                   // 0x00E8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        PitchingMachine;                               // 0x00F0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Sword;                                         // 0x00F8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Yoyo;                                          // 0x0100 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Fireworks;                                     // 0x0108 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Archery;                                       // 0x0110 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Bike;                                          // 0x0118 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        NailGun;                                       // 0x0120 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        ChainSaw;                                      // 0x0128 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Drill;                                         // 0x0130 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Bowling;                                       // 0x0138 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        IceHockey;                                     // 0x0140 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Arcwelding;                                    // 0x0148 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Cleaver;                                       // 0x0150 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Iron;                                          // 0x0158 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        ThunderRod;                                    // 0x0160 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Shovel;                                        // 0x0168 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        FireBaton;                                     // 0x0170 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        ThrowingKnife;                                 // 0x0178 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        RocketLauncher;                                // 0x0180 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Sickle;                                        // 0x0188 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        BeamSword;                                     // 0x0190 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        BeamYoyo;                                      // 0x0198 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        BeamGun;                                       // 0x01A0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        WhiteSteelHammer;                              // 0x01A8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        WhiteSteelClaw;                                // 0x01B0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        RedNapalmGun;                                  // 0x01B8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        BlackThunderSword;                             // 0x01C0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        BlackThunderMedusa;                            // 0x01C8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        PaleWindBobsled;                               // 0x01D0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        PaleWindBobsledBullet;                         // 0x01D8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Shishimai;                                     // 0x01E0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        TaserGun;                                      // 0x01E8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        SquareTimber;                                  // 0x01F0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        Kite;                                          // 0x01F8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Weapon                        CommonMetal;                                   // 0x0200 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgPhysicalMaterialProperty.BrgPhysMatSE_Part
// 0x0008
struct FBrgPhysMatSE_Part
{
	class USoundCue*                                   DropSECue;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgPhysicalMaterialProperty.BrgPhysMatPartSEGroup
// 0x0060
struct FBrgPhysMatPartSEGroup
{
	struct FBrgPhysMatSE_Part                          HeadCloth;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Part                          HeadMetal;                                     // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Part                          BodyCloth;                                     // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Part                          BodyMetal;                                     // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Part                          WeaponWood;                                    // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Part                          WeaponMetalSword;                              // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Part                          WeaponMetalLight;                              // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Part                          WeaponMetalHeavy;                              // 0x0038 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Part                          WeaponGlass;                                   // 0x0040 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Part                          WeaponPlastic;                                 // 0x0048 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Part                          WeaponMetalSolid;                              // 0x0050 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatSE_Part                          WeaponWoodMetal;                               // 0x0058 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgPhysicalMaterialProperty.BrgPhysMatMetalSEGroup
// 0x0040
struct FBrgPhysMatMetalSEGroup
{
	class USoundCue*                                   WalkLightSECue;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   WalkHeavySECue;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   HandLightSECue;                                // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   HandHeavySECue;                                // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   DownLightSECue;                                // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   DownHeavySECue;                                // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   HitLightSECue;                                 // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   HitHeavySECue;                                 // 0x0038 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgPhysicalMaterialProperty.BrgPhysMatRubberSEGroup
// 0x0028
struct FBrgPhysMatRubberSEGroup
{
	class USoundCue*                                   WalkSECue;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   JumpSECue;                                     // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   LandSECue;                                     // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   ScuffSECue;                                    // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   SlipSECue;                                     // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgPhysicalMaterialProperty.BrgPhysMatPlasticSEGroup
// 0x0008
struct FBrgPhysMatPlasticSEGroup
{
	class USoundCue*                                   WalkSECue;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgPhysicalMaterialProperty.BrgPhysMatFleshSEGroup
// 0x0080
struct FBrgPhysMatFleshSEGroup
{
	class USoundCue*                                   WalkLightSECue;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   WalkMediumSECue;                               // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   WalkHeavySECue;                                // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   WalkHeavyWetSECue;                             // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   JumpLightSECue;                                // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   JumpMediumSECue;                               // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   JumpHeavySECue;                                // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   LandLightSECue;                                // 0x0038 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   LandMediumSECue;                               // 0x0040 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   LandHeavySECue;                                // 0x0048 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   DownLightSECue;                                // 0x0050 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   DownMediumSECue;                               // 0x0058 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   DownHeavySECue;                                // 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   HitLightSECue;                                 // 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   HitMediumSECue;                                // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   HitHeavySECue;                                 // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgPhysicalMaterialProperty.BrgPhysMatGeneralSEGroup
// 0x00F0
struct FBrgPhysMatGeneralSEGroup
{
	struct FBrgPhysMatMetalSEGroup                     MetalGroup;                                    // 0x0000 (0x0040) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatRubberSEGroup                    RubberGroup;                                   // 0x0040 (0x0028) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatPlasticSEGroup                   PlasticGroup;                                  // 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatFleshSEGroup                     FlashGroup;                                    // 0x0070 (0x0080) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgPhysicalMaterialProperty.BrgPhysMatSE
// 0x0430
struct FBrgPhysMatSE
{
	struct FBrgPhysMatCharacterSEGroup                 CharacterGroup;                                // 0x0000 (0x00D8) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatWeaponSEGroup                    WeaponGroup;                                   // 0x00D8 (0x0208) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatPartSEGroup                      PartGroup;                                     // 0x02E0 (0x0060) [0x0000000000000001] (CPF_Edit)    
	struct FBrgPhysMatGeneralSEGroup                   GeneralGroup;                                  // 0x0340 (0x00F0) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgPredictedProjectileTrajectory.PointStatus
// 0x0018
struct FPointStatus
{
	unsigned long                                      mbLive : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mDistance;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              mSpeed;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     mLocation;                                     // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgProjectile_BaseNative.BrgProjectileHitInfo
// 0x0058
struct FBrgProjectileHitInfo
{
	float                                              Dist;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class AActor*                                      Actor;                                         // 0x0004 (0x0008) [0x0000000000000000]               
	struct FVector                                     Dir;                                           // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     pos;                                           // 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     Normal;                                        // 0x0024 (0x000C) [0x0000000000000000]               
	struct FTraceHitInfo                               Info;                                          // 0x0030 (0x0028) [0x0000000000080000] (CPF_Component)
};

// ScriptStruct BrgGame.BrgProjectile_BossBirdlime.HitPawnInfo
// 0x000C
struct FHitPawnInfo
{
	class ABrgPawn_Base*                               m_pawn;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              m_hit_length;                                  // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgProjectile_BossDrill.BrgBossDrill_HitPawn
// 0x000C
struct FBrgBossDrill_HitPawn
{
	class ABrgPawn_Base*                               mHitPawn;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            mHitCount;                                     // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgProjectile_BossPieceLaser.WallHitInfo
// 0x0074
struct FWallHitInfo
{
	struct FVector                                     mPos;                                          // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     mHitDir;                                       // 0x000C (0x000C) [0x0000000000000000]               
	struct FBrgProjectileHitInfo                       mHitInfo;                                      // 0x0018 (0x0058) [0x0000000000080000] (CPF_Component)
	unsigned long                                      mCreateImpactEffect : 1;                       // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgProjectile_PoisonMist.BrgSnailPoisonInfo
// 0x000C
struct FBrgSnailPoisonInfo
{
	class ABrgPawn_Base*                               mPawn;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              mTimeCnt;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgProjectile_VomitPool.VomiPoolHitPawnInfo
// 0x000C
struct ABrgProjectile_VomitPool_FVomiPoolHitPawnInfo
{
	class ABrgPawn_Base*                               m_pawn;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              m_hit_length;                                  // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgPS3OnlineUtilityBase.BrgRankData
// 0x0030
struct FBrgRankData
{
	int32_t                                            Rank;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Score;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Date;                                          // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      UserId;                                        // 0x000C (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      UserName;                                      // 0x001C (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            Player;                                        // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgSeqAct_AreaConnect.BrgAreaEscalator
// 0x0044
struct FBrgAreaEscalator
{
	class FString                                      unitid;                                        // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            ColorIndex;                                    // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      KeyFlag;                                       // 0x0014 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      GateFlag;                                      // 0x0024 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      enableFlag;                                    // 0x0034 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgSeqAct_AreaConnectRepeatStraight.BrgFloorAreaRepeatStraight
// 0x0020
struct FBrgFloorAreaRepeatStraight
{
	class FString                                      FloorID;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      areaid;                                        // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgSeqAct_AreaConnectTemplateHead.BrgAreaConnectTempateLastArea
// 0x0030
struct FBrgAreaConnectTempateLastArea
{
	class FString                                      FloorID;                                       // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      areaid;                                        // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FBrgAreaEscalator>                   UpEscalators;                                  // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgSeqAct_AreaConnectTemplateTail.BrgAreaConnectTempateFirstArea
// 0x0030
struct FBrgAreaConnectTempateFirstArea
{
	class FString                                      FloorID;                                       // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      areaid;                                        // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FBrgAreaEscalator>                   DownEscalators;                                // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgSeqAct_AreaSetting.BrgRandomGenerateLevelInfo
// 0x0010
struct FBrgRandomGenerateLevelInfo
{
	struct FName                                       PlName;                                        // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       KismetName;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgSeqAct_AreaSetting.BrgRandomGenerateLevelFixedParts2
// 0x001D
struct FBrgRandomGenerateLevelFixedParts2
{
	struct FBrgRandomGenerateLevelInfo                 mLevelInfo;                                    // 0x0000 (0x0010) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mGridMapX;                                     // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mGridMapY;                                     // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mRotation;                                     // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            mType;                                         // 0x001C (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgSeqAct_AreaSetting.BrgRandomGenerateLevelPartsSet2
// 0x0018
struct FBrgRandomGenerateLevelPartsSet2
{
	TArray<struct FBrgRandomGenerateLevelInfo>         mCandidates;                                   // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            mUseLevelNum;                                  // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mRandomUseLevelNumRange;                       // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgSeqAct_AreaSettingRandom.BrgRandomGenerateLevelAreaCandidate
// 0x0014
struct FBrgRandomGenerateLevelAreaCandidate
{
	class FString                                      mAreaid;                                       // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            mFreq;                                         // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgSeqAct_BossPhotoMode.BossPhotoAnimationKey
// 0x0008
struct FBossPhotoAnimationKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Caliber;                                       // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgUIFade.BrgUIFadeWave
// 0x0010
struct FBrgUIFadeWave
{
	float                                              mAngle;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              mAngleSpeed;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              mOffsetSize;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              mOneLineAngleStep;                             // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgSeqAct_JudgeGamePad.SeqButtonInfo
// 0x0008
struct FSeqButtonInfo
{
	uint8_t                                            Button;                                        // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Dummy;                                         // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIHUD_SystemWindow.ScrollInfo
// 0x0020
struct FScrollInfo
{
	float                                              mBarRate;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              mBarMoveRate;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              mTotalBarHeight;                               // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            mBarLen;                                       // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            mMsgGuideLineOffsetY;                          // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mTotalMsgGuideHeight;                          // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            mBarMoveY;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            mMsgGuideSizeY;                                // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgSeqAct_ReplaceMatineeParticleEffect.BrgReplaceParticle
// 0x0010
struct FBrgReplaceParticle
{
	class UParticleSystem*                             mOrg;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             mNew;                                          // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgUIHUD_ButtonGuide.BrgUIHUD_ButtonGuide_NormalInfo
// 0x00F8
struct FBrgUIHUD_ButtonGuide_NormalInfo
{
	struct FParamMoveData                              mVisibleAlpha;                                 // 0x0000 (0x006C) [0x0000000000000000]               
	struct FParamMoveData                              mMoveDistance;                                 // 0x006C (0x006C) [0x0000000000000000]               
	unsigned long                                      mSetVisible : 1;                               // 0x00D8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mNewVisible : 1;                               // 0x00D8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mUserSetVisible : 1;                           // 0x00D8 (0x0004) [0x0000000000000000] [0x00000004] 
	class FString                                      mText;                                         // 0x00DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mType;                                         // 0x00EC (0x0001) [0x0000000000000000]               
	uint8_t                                            mIcon;                                         // 0x00ED (0x0001) [0x0000000000000000]               
	class USoundCue*                                   mFadeInSoundCue;                               // 0x00F0 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIHUD_ButtonGuide.BrgUIHUD_ButtonGuide_BigInfo
// 0x00E4
struct FBrgUIHUD_ButtonGuide_BigInfo
{
	struct FParamMoveData                              mVisibleAlpha;                                 // 0x0000 (0x006C) [0x0000000000000000]               
	unsigned long                                      mSetVisible : 1;                               // 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mNewVisible : 1;                               // 0x006C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mUserSetVisible : 1;                           // 0x006C (0x0004) [0x0000000000000000] [0x00000004] 
	struct FParamMoveData                              mBrinkAlpha;                                   // 0x0070 (0x006C) [0x0000000000000000]               
	int32_t                                            mBrinkPhase;                                   // 0x00DC (0x0004) [0x0000000000000000]               
	float                                              mBrinkCounter;                                 // 0x00E0 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIHUD_UncleDeath.BrgUIHUD_UncleDeath_PlayList
// 0x000C
struct FBrgUIHUD_UncleDeath_PlayList
{
	class USoundCue*                                   PlaySound;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Delay;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgUIHUD_UncleDeath.BrgUIHUD_UncleDeath_Info
// 0x000C
struct FBrgUIHUD_UncleDeath_Info
{
	float                                              StartX;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              StartY;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Rot;                                           // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIHUD_UncleDeath.BrgUIHUD_UncleDeath_TexData
// 0x0008
struct FBrgUIHUD_UncleDeath_TexData
{
	float                                              CenterX;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              CenterY;                                       // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgStageManager.BrgRefEscalatorUnit
// 0x0020
struct FBrgRefEscalatorUnit
{
	class FString                                      ConnectUnit;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      RefUnit;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgStageManager.BrgElevatorStopFloorInfo
// 0x003C
struct FBrgElevatorStopFloorInfo
{
	class FString                                      Id;                                            // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Name;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ShortName;                                     // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            FloorNumber;                                   // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            Cost;                                          // 0x0034 (0x0004) [0x0000000000000000]               
	unsigned long                                      CanStop : 1;                                   // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgStageManager.BrgElevatorInfo
// 0x0034
struct FBrgElevatorInfo
{
	class FString                                      Id;                                            // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Name;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ColorIndex;                                    // 0x0020 (0x0004) [0x0000000000000000]               
	TArray<struct FBrgElevatorStopFloorInfo>           StopFloors;                                    // 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_BodyFreezer.FreezerBodyInfo
// 0x0228
struct FFreezerBodyInfo
{
	struct FBrgDbChara                                 mDbBody;                                       // 0x0000 (0x0220) [0x0000000000400000] (CPF_NeedCtorLink)
	class ABrgUIActor_Chara_Freezer*                   mFreezerBody;                                  // 0x0220 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUI3DStatusManager.BrgUI3DStatusUnit
// 0x02E8
struct FBrgUI3DStatusUnit
{
	unsigned long                                      mbUse : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mbDeleteRequest : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                            mState;                                        // 0x0004 (0x0001) [0x0000000000000000]               
	class AActor*                                      mTargetActor;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	class APawn*                                       mTargetPawn;                                   // 0x0010 (0x0008) [0x0000000000000000]               
	class ABrgPawn_BaseNative*                         mTargetPawnBaseNative;                         // 0x0018 (0x0008) [0x0000000000000000]               
	class ABrgBreakableObject*                         mTargetBrkObj;                                 // 0x0020 (0x0008) [0x0000000000000000]               
	class ABrgAICtrl_BaseNative*                       mTargetAICtrlBaseNative;                       // 0x0028 (0x0008) [0x0000000000000000]               
	class USkeletalMeshComponent*                      mTargetSMC;                                    // 0x0030 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	unsigned long                                      mIsAttachSocket : 1;                           // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       mAttachName;                                   // 0x003C (0x0008) [0x0000000000000000]               
	struct FVector                                     mTargetLocation;                               // 0x0044 (0x000C) [0x0000000000000000]               
	float                                              mCamera_Target_DistanceSq;                     // 0x0050 (0x0004) [0x0000000000000000]               
	struct FVector                                     mPos;                                          // 0x0054 (0x000C) [0x0000000000000000]               
	struct FVector                                     mScreenPos;                                    // 0x0060 (0x000C) [0x0000000000000000]               
	struct FVector                                     mDrawPos1;                                     // 0x006C (0x000C) [0x0000000000000000]               
	struct FVector                                     mDrawPos2;                                     // 0x0078 (0x000C) [0x0000000000000000]               
	struct FParamMoveData                              mAlpha;                                        // 0x0084 (0x006C) [0x0000000000000000]               
	unsigned long                                      mHideFlag : 1;                                 // 0x00F0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mVisibleFlag : 1;                              // 0x00F0 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FParamMoveData                              mBaseAlpha;                                    // 0x00F4 (0x006C) [0x0000000000000000]               
	float                                              mHPBackup;                                     // 0x0160 (0x0004) [0x0000000000000000]               
	struct FParamMoveData                              mHPNowRate;                                    // 0x0164 (0x006C) [0x0000000000000000]               
	float                                              mDelayHPBackup;                                // 0x01D0 (0x0004) [0x0000000000000000]               
	struct FParamMoveData                              mDelayHPNowRate;                               // 0x01D4 (0x006C) [0x0000000000000000]               
	unsigned long                                      mDelayHP : 1;                                  // 0x0240 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mDelayHPWait;                                  // 0x0244 (0x0004) [0x0000000000000000]               
	int32_t                                            mDispLevel;                                    // 0x0248 (0x0004) [0x0000000000000000]               
	class FString                                      mDispLevelString;                              // 0x024C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mStatusBrink : 1;                              // 0x025C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FParamMoveData                              mStatusBrinkData;                              // 0x0260 (0x006C) [0x0000000000000000]               
	unsigned long                                      mUseMarkString : 1;                            // 0x02CC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mUseSpecificString : 1;                        // 0x02CC (0x0004) [0x0000000000000000] [0x00000002] 
	class FString                                      mSpecificString;                               // 0x02D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mAlarmAlpha;                                   // 0x02E0 (0x0004) [0x0000000000000000]               
	float                                              mAlarmTime;                                    // 0x02E4 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUI_ImageCache.BrgUI_ImageCahceData
// 0x0038
struct FBrgUI_ImageCahceData
{
	unsigned long                                      mIsDummy : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mIsCached : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	class FString                                      mAddress;                                      // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mTexture;                                      // 0x0014 (0x0008) [0x0000000000000000]               
	unsigned long                                      mResponse : 1;                                 // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	uint64_t                                           mRequestTime;                                  // 0x0020 (0x0008) [0x0000000000000000]               
	uint64_t                                           mDummyTime;                                    // 0x0028 (0x0008) [0x0000000000000000]               
	class UHttpRequestInterface*                       mInterface;                                    // 0x0030 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUI_ImageCache.BrgUI_ImageCahceData_LocalPhoto
// 0x0014
struct FBrgUI_ImageCahceData_LocalPhoto
{
	uint64_t                                           mCachedUTCSeconds;                             // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            mPhotoIndex;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	class UBrgUIImage*                                 mTexture;                                      // 0x000C (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUI_UtilityAnalyzeStrings.BrgUIMessageColorForContent
// 0x0020
struct FBrgUIMessageColorForContent
{
	class FString                                      mInformation;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mMail;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUI_UtilityAnalyzeStrings.BrgUIMessageWithAttribute
// 0x0024
struct FBrgUIMessageWithAttribute
{
	unsigned long                                      mIsImage : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      mMessage;                                      // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mLinkAddress;                                  // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIActor_Chara_Base.BrgUIActor_Chara_PartInfo
// 0x02E9
struct FBrgUIActor_Chara_PartInfo
{
	unsigned long                                      mEnable : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FBrgDbPart                                  mDbPart;                                       // 0x0004 (0x0234) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbPartArmType                           mDbPartArmType;                                // 0x0238 (0x0084) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbPartArm                               mDbPartArm;                                    // 0x02BC (0x002C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mDbGrip;                                       // 0x02E8 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIDropItemTagManager.BrgUIDropItemTagUnit
// 0x00AD
struct FBrgUIDropItemTagUnit
{
	unsigned long                                      mbUse : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mUniqueID;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	unsigned long                                      mbDeleteRequest : 1;                           // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	class USkeletalMeshComponent*                      mTargetMesh;                                   // 0x000C (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FName                                       mTargetSocketName;                             // 0x0014 (0x0008) [0x0000000000000000]               
	uint8_t                                            mState;                                        // 0x001C (0x0001) [0x0000000000000000]               
	float                                              mCamera_Target_DistanceSq;                     // 0x0020 (0x0004) [0x0000000000000000]               
	struct FVector                                     mLocation;                                     // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     mAdjustLocation;                               // 0x0030 (0x000C) [0x0000000000000000]               
	struct FParamMoveData                              mAlpha;                                        // 0x003C (0x006C) [0x0000000000000000]               
	unsigned long                                      mSetAlpha : 1;                                 // 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mNewAlpha : 1;                                 // 0x00A8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mVisibleFlag : 1;                              // 0x00A8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mDistanceOutlineHideFlag : 1;                  // 0x00A8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mDistanceHideFlag : 1;                         // 0x00A8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mDistanceHideDisableFlag : 1;                  // 0x00A8 (0x0004) [0x0000000000000000] [0x00000020] 
	uint8_t                                            mIcon;                                         // 0x00AC (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIEffect_Smoke.BrgUIEffect_SmokeUnit
// 0x0014
struct FBrgUIEffect_SmokeUnit
{
	class UBrgUIImage*                                 mImage;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     mLocation;                                     // 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIEffectCharaManager.BrgUIEffectCharaBlock
// 0x02C0
struct FBrgUIEffectCharaBlock
{
	uint8_t                                            mState;                                        // 0x0000 (0x0001) [0x0000000000000000]               
	unsigned long                                      mbOutRequest : 1;                              // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mStatePhase1;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	struct FParamMoveData                              mSizeX1;                                       // 0x000C (0x006C) [0x0000000000000000]               
	struct FParamMoveData                              mSizeY1;                                       // 0x0078 (0x006C) [0x0000000000000000]               
	struct FParamMoveData                              mAlpha1;                                       // 0x00E4 (0x006C) [0x0000000000000000]               
	int32_t                                            mStatePhase2;                                  // 0x0150 (0x0004) [0x0000000000000000]               
	struct FParamMoveData                              mSizeX2;                                       // 0x0154 (0x006C) [0x0000000000000000]               
	struct FParamMoveData                              mSizeY2;                                       // 0x01C0 (0x006C) [0x0000000000000000]               
	struct FParamMoveData                              mAlpha2;                                       // 0x022C (0x006C) [0x0000000000000000]               
	float                                              mBlockCenterX;                                 // 0x0298 (0x0004) [0x0000000000000000]               
	float                                              mBlockCenterY;                                 // 0x029C (0x0004) [0x0000000000000000]               
	float                                              mBlockCenterRelLeftUpX;                        // 0x02A0 (0x0004) [0x0000000000000000]               
	float                                              mBlockCenterRelLeftUpY;                        // 0x02A4 (0x0004) [0x0000000000000000]               
	float                                              mBlockCenterRelRightDownX;                     // 0x02A8 (0x0004) [0x0000000000000000]               
	float                                              mBlockCenterRelRightDownY;                     // 0x02AC (0x0004) [0x0000000000000000]               
	float                                              mImagePosX;                                    // 0x02B0 (0x0004) [0x0000000000000000]               
	float                                              mImagePosY;                                    // 0x02B4 (0x0004) [0x0000000000000000]               
	float                                              mImageSizeX;                                   // 0x02B8 (0x0004) [0x0000000000000000]               
	float                                              mImageSizeY;                                   // 0x02BC (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIEffectCharaManager.BrgUIEffectChara
// 0x1184
struct FBrgUIEffectChara
{
	unsigned long                                      mbUse : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            mState;                                        // 0x0004 (0x0001) [0x0000000000000000]               
	int32_t                                            mStatePhase;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            mStateCounter;                                 // 0x000C (0x0004) [0x0000000000000000]               
	float                                              mTimeCounter;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	unsigned long                                      mbOutRequest : 1;                              // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mbIs3D : 1;                                    // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     mPos3D;                                        // 0x0018 (0x000C) [0x0000000000000000]               
	float                                              mPosX;                                         // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              mPosY;                                         // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              mScale;                                        // 0x002C (0x0004) [0x0000000000000000]               
	float                                              mOutDelay;                                     // 0x0030 (0x0004) [0x0000000000000000]               
	class FString                                      mChara;                                        // 0x0034 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mRed;                                          // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            mGreen;                                        // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            mBlue;                                         // 0x004C (0x0004) [0x0000000000000000]               
	int32_t                                            mAlpha;                                        // 0x0050 (0x0004) [0x0000000000000000]               
	struct FBrgUIEffectCharaBlock                      mBlock[0x6];                                   // 0x0054 (0x1080) [0x0000000000000000]               
	struct FParamMoveData                              mOffsetPosY;                                   // 0x10D4 (0x006C) [0x0000000000000000]               
	struct FBrgUIFontCharInfo                          mCharaInfo;                                    // 0x1140 (0x0038) [0x0000000000000000]               
	float                                              mBlockLeftUpX;                                 // 0x1178 (0x0004) [0x0000000000000000]               
	float                                              mBlockLeftUpY;                                 // 0x117C (0x0004) [0x0000000000000000]               
	unsigned long                                      mTopLayer : 1;                                 // 0x1180 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIEffectStringManager.BrgUIEffectStringChara
// 0x0018
struct FBrgUIEffectStringChara
{
	class FString                                      mChara;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mCharaIndex;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mNextOffsetX;                                  // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIEffectStringManager.BrgUIEffectStringUnit
// 0x007C
struct FBrgUIEffectStringUnit
{
	unsigned long                                      mbUse : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            mState;                                        // 0x0004 (0x0001) [0x0000000000000000]               
	int32_t                                            mStatePhase;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              mTimeCounter;                                  // 0x000C (0x0004) [0x0000000000000000]               
	unsigned long                                      mbOutRequest : 1;                              // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            mXBasePos;                                     // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            mYBasePos;                                     // 0x0015 (0x0001) [0x0000000000000000]               
	float                                              mTotalSizeX;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              mTotalSizeY;                                   // 0x001C (0x0004) [0x0000000000000000]               
	unsigned long                                      mbIs3D : 1;                                    // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     mPos3D;                                        // 0x0024 (0x000C) [0x0000000000000000]               
	float                                              mPosX;                                         // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              mPosY;                                         // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              mScale;                                        // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              mAddSpaceX;                                    // 0x003C (0x0004) [0x0000000000000000]               
	class UBrgUIFont*                                  mFont;                                         // 0x0040 (0x0008) [0x0000000000000000]               
	class FString                                      mString;                                       // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgUIEffectStringChara>             mCharas;                                       // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mRed;                                          // 0x0068 (0x0004) [0x0000000000000000]               
	int32_t                                            mGreen;                                        // 0x006C (0x0004) [0x0000000000000000]               
	int32_t                                            mBlue;                                         // 0x0070 (0x0004) [0x0000000000000000]               
	int32_t                                            mAlpha;                                        // 0x0074 (0x0004) [0x0000000000000000]               
	unsigned long                                      mTopLayer : 1;                                 // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIFadeMask_Blood.BrgUIFadeMask_Blood_Unit
// 0x000C
struct FBrgUIFadeMask_Blood_Unit
{
	unsigned long                                      mUse : 1;                                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mDraw : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mReverse : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              mScale;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              mAngle;                                        // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIFadeMask_Blood.BrgUIFadeMask_Blood_Line
// 0x05A0
struct FBrgUIFadeMask_Blood_Line
{
	struct FBrgUIFadeMask_Blood_Unit                   mFillLineMap[0x78];                            // 0x0000 (0x05A0) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIFadeMask_SideWave.BrgUIQuestMenu_FadeMask
// 0x0008
struct FBrgUIQuestMenu_FadeMask
{
	int32_t                                            mPositionX;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            mPositionY;                                    // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIFighterStatusUtility.BrgUIFighterStatus_Param
// 0x0011
struct FBrgUIFighterStatus_Param
{
	unsigned long                                      mIsMaxLevel : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mLevel1;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mBase;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            m_Add;                                         // 0x000C (0x0004) [0x0000000000000000]               
	uint8_t                                            mCol;                                          // 0x0010 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIFighterStatusUtility.BrgUIFighterStatus
// 0x0278
struct FBrgUIFighterStatus
{
	class FString                                      mUsername;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mName;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mTypeName;                                     // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mTypeID;                                       // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mGrade;                                        // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            mLvl;                                          // 0x0044 (0x0004) [0x0000000000000000]               
	uint8_t                                            mLvlCol;                                       // 0x0048 (0x0001) [0x0000000000000000]               
	int32_t                                            mNext;                                         // 0x004C (0x0004) [0x0000000000000000]               
	uint8_t                                            mNextCol;                                      // 0x0050 (0x0001) [0x0000000000000000]               
	int32_t                                            mNowHealth;                                    // 0x0054 (0x0004) [0x0000000000000000]               
	int32_t                                            mNowHealthMax;                                 // 0x0058 (0x0004) [0x0000000000000000]               
	int32_t                                            mMoney;                                        // 0x005C (0x0004) [0x0000000000000000]               
	int32_t                                            mSpirit;                                       // 0x0060 (0x0004) [0x0000000000000000]               
	int32_t                                            mExp;                                          // 0x0064 (0x0004) [0x0000000000000000]               
	int32_t                                            mBloodnium;                                    // 0x0068 (0x0004) [0x0000000000000000]               
	uint8_t                                            mPartresearch[0x5];                            // 0x006C (0x0005) [0x0000000000000000]               
	float                                              mPartDurRate[0x5];                             // 0x0074 (0x0014) [0x0000000000000000]               
	uint8_t                                            mIsConsume[0x5];                               // 0x0088 (0x0005) [0x0000000000000000]               
	int32_t                                            mDeathBagCapacity;                             // 0x0090 (0x0004) [0x0000000000000000]               
	uint8_t                                            mDeathBagCapacityColorType;                    // 0x0094 (0x0001) [0x0000000000000000]               
	int32_t                                            mSkillCapacity;                                // 0x0098 (0x0004) [0x0000000000000000]               
	uint8_t                                            mSkillCapacityColorType;                       // 0x009C (0x0001) [0x0000000000000000]               
	int32_t                                            mRageCapacity;                                 // 0x00A0 (0x0004) [0x0000000000000000]               
	uint8_t                                            mRageCapacityColorType;                        // 0x00A4 (0x0001) [0x0000000000000000]               
	class FString                                      mSkillId[0x9];                                 // 0x00A8 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mSkillIconImage[0x9];                          // 0x0138 (0x0048) [0x0000000000000000]               
	struct FBrgUIFighterStatus_Param                   mStat[0x6];                                    // 0x0180 (0x0078) [0x0000000000000000]               
	int32_t                                            mAtkR;                                         // 0x01F8 (0x0004) [0x0000000000000000]               
	uint8_t                                            mAtkRCol;                                      // 0x01FC (0x0001) [0x0000000000000000]               
	uint8_t                                            mAtkR_Attr1;                                   // 0x01FD (0x0001) [0x0000000000000000]               
	int32_t                                            mAtkR_Attr1Param;                              // 0x0200 (0x0004) [0x0000000000000000]               
	uint8_t                                            mAtkR_Attr2;                                   // 0x0204 (0x0001) [0x0000000000000000]               
	int32_t                                            mAtkL;                                         // 0x0208 (0x0004) [0x0000000000000000]               
	uint8_t                                            mAtkLCol;                                      // 0x020C (0x0001) [0x0000000000000000]               
	uint8_t                                            mAtkL_Attr1;                                   // 0x020D (0x0001) [0x0000000000000000]               
	int32_t                                            mAtkL_Attr1Param;                              // 0x0210 (0x0004) [0x0000000000000000]               
	uint8_t                                            mAtkL_Attr2;                                   // 0x0214 (0x0001) [0x0000000000000000]               
	int32_t                                            mDef;                                          // 0x0218 (0x0004) [0x0000000000000000]               
	uint8_t                                            mDefCol;                                       // 0x021C (0x0001) [0x0000000000000000]               
	int32_t                                            mDef_AttrParam[0x7];                           // 0x0220 (0x001C) [0x0000000000000000]               
	uint8_t                                            mDef_AttrCol[0x7];                             // 0x023C (0x0007) [0x0000000000000000]               
	int32_t                                            mBattlepoint;                                  // 0x0244 (0x0004) [0x0000000000000000]               
	unsigned long                                      mLimitBreak : 1;                               // 0x0248 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mLimitBreakPreview : 1;                        // 0x0248 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FBrgBodyLvlPlus                             mBodyLvlPlus;                                  // 0x024C (0x0028) [0x0000000000000000]               
	unsigned long                                      mIsEqualNextLimitBreakLevelBag : 1;            // 0x0274 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mIsEqualNextLimitBreakLevelSkill : 1;          // 0x0274 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mIsEqualNextLimitBreakLevelRage : 1;           // 0x0274 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct BrgGame.BrgUIFreePosFocus.BrgUIFreePosFocus_SelectObjInfo
// 0x001C
struct FBrgUIFreePosFocus_SelectObjInfo
{
	unsigned long                                      mEnable : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mPosX;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mPosY;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            mSizeX;                                        // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            mSizeY;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mCenterX;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            mCenterY;                                      // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIHUD_Assault.BrgUIHUD_Assault_CutInFadeParam
// 0x0090
struct FBrgUIHUD_Assault_CutInFadeParam
{
	class UBrgUIImage*                                 mBaseImage;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	struct FParamMoveData                              mParam;                                        // 0x0008 (0x006C) [0x0000000000000000]               
	uint8_t                                            mMoveType;                                     // 0x0074 (0x0001) [0x0000000000000000]               
	float                                              mFadeInTime;                                   // 0x0078 (0x0004) [0x0000000000000000]               
	float                                              mFadeOutTime;                                  // 0x007C (0x0004) [0x0000000000000000]               
	float                                              mStartDelay;                                   // 0x0080 (0x0004) [0x0000000000000000]               
	float                                              mBeginMarginScale;                             // 0x0084 (0x0004) [0x0000000000000000]               
	float                                              mEndDrawTime;                                  // 0x0088 (0x0004) [0x0000000000000000]               
	unsigned long                                      mIsEndDraw : 1;                                // 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mIsEnd : 1;                                    // 0x008C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BrgGame.BrgUIHUD_Assault.BrgUIHUD_Assault_CutInParam
// 0x01B4
struct FBrgUIHUD_Assault_CutInParam
{
	unsigned long                                      mbEnable : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FBrgUIHUD_Assault_CutInFadeParam            mAlpha0;                                       // 0x0004 (0x0090) [0x0000000000000000]               
	struct FBrgUIHUD_Assault_CutInFadeParam            mAlpha1;                                       // 0x0094 (0x0090) [0x0000000000000000]               
	struct FBrgUIHUD_Assault_CutInFadeParam            mBase;                                         // 0x0124 (0x0090) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIHUD_BombRelease.BrgUIHUD_BombRelease_BombIconInfo
// 0x0070
struct FBrgUIHUD_BombRelease_BombIconInfo
{
	unsigned long                                      mVisible : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FParamMoveData                              mVisibleAlpha;                                 // 0x0004 (0x006C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIHUD_BossHealth.BrgUIHUD_BossHealth_TextDispInfo
// 0x008C
struct FBrgUIHUD_BossHealth_TextDispInfo
{
	class UBrgUIImage*                                 mBaseImage;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      mText;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mbStart : 1;                                   // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FParamMoveData                              mAddPosY;                                      // 0x001C (0x006C) [0x0000000000000000]               
	float                                              mMoveStartTime;                                // 0x0088 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIHUD_IconSelect.BrgUIHUD_IconSelect_BaseDirInfo
// 0x0005
struct FBrgUIHUD_IconSelect_BaseDirInfo
{
	unsigned long                                      mEnable : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mSelectDisable : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                            mIcon;                                         // 0x0004 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIHUD_IconSelect.BrgUIHUD_IconSelect_DirInfo
// 0x0170
struct FBrgUIHUD_IconSelect_DirInfo
{
	struct FBrgUIHUD_IconSelect_BaseDirInfo            mBaseInfo;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	unsigned long                                      mSelect : 1;                                   // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FParamMoveData                              mSelectAlpha;                                  // 0x000C (0x006C) [0x0000000000000000]               
	unsigned long                                      mVisible : 1;                                  // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FParamMoveData                              mVisibleAlpha;                                 // 0x007C (0x006C) [0x0000000000000000]               
	unsigned long                                      mSelectDisablePM : 1;                          // 0x00E8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FParamMoveData                              mSelectDisablePMAlpha;                         // 0x00EC (0x006C) [0x0000000000000000]               
	class UBrgUIImage*                                 mSelectFrameGuideImage;                        // 0x0158 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mCursorImage;                                  // 0x0160 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mBaseImage;                                    // 0x0168 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenuPart_Panel2.BrgUIMenuPart_PanelDispInfo2
// 0x0188
struct FBrgUIMenuPart_PanelDispInfo2
{
	uint8_t                                            mPanelType;                                    // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      mName;                                         // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDropItemBaseInfo                        mBaseInfo;                                     // 0x0014 (0x0174) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIHUD_ItemInfoDisp.BrgUIHUD_ItemInfoDisp_Panel
// 0x000C
struct FBrgUIHUD_ItemInfoDisp_Panel
{
	int32_t                                            mPanel2Index;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	class UBrgUIMenuPart_Panel2*                       mPanel2;                                       // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIHUD_Loading.BrgUIHUD_Loading_Icon
// 0x007C
struct FBrgUIHUD_Loading_Icon
{
	unsigned long                                      mVisible : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FParamMoveData                              mVisibleAlpha;                                 // 0x0004 (0x006C) [0x0000000000000000]               
	class UBrgUISprite*                                mMainSprite;                                   // 0x0070 (0x0008) [0x0000000000000000]               
	float                                              mBackPlayTime;                                 // 0x0078 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIHUD_Loading_News.DrawImageInfo
// 0x0018
struct FDrawImageInfo
{
	class UBrgUIImage*                                 mImage;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mGuide;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            mX;                                            // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mY;                                            // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIHUD_Loading_News.DrawStrInfo
// 0x003C
struct FDrawStrInfo
{
	uint8_t                                            mFontStateType;                                // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      mBannerUrl;                                    // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mBannerTime;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	unsigned long                                      mInScreen : 1;                                 // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      mStr;                                          // 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mX;                                            // 0x002C (0x0004) [0x0000000000000000]               
	float                                              mY;                                            // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              mDrawX;                                        // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              mWidth;                                        // 0x0038 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIHUD_MessageWindow.CurrentContent
// 0x0014
struct FCurrentContent
{
	class UBrgUIHUD_MessageWindowContents*             mContents;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            mState;                                        // 0x0008 (0x0001) [0x0000000000000000]               
	struct FVector2D                                   mPos;                                          // 0x000C (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIHUD_MessageWindowParts_StringFrame.BrgUIHUD_MessageWindowParts_StringFrameStringInfo
// 0x0018
struct FBrgUIHUD_MessageWindowParts_StringFrameStringInfo
{
	class FString                                      mString;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mLines;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              mHeight;                                       // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIHUD_MessageWindowParts_ValueText.IncreaseValueData
// 0x0008
struct FIncreaseValueData
{
	int32_t                                            BaseValue;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            IncreaseValue;                                 // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIHUD_PlayerStatus.BrgUIHUD_PlayerStatus_State
// 0x0080
struct FBrgUIHUD_PlayerStatus_State
{
	unsigned long                                      mVisible : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FParamMoveData                              mVisibleAlpha;                                 // 0x0004 (0x006C) [0x0000000000000000]               
	class UBrgUIImage*                                 mBaseImage;                                    // 0x0070 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mIconGuide;                                    // 0x0078 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIHUD_QuickUse.BrgUIHUD_QuickUse_UnitInfo
// 0x0158
struct FBrgUIHUD_QuickUse_UnitInfo
{
	unsigned long                                      mSelect : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FParamMoveData                              mSelectAlpha;                                  // 0x0004 (0x006C) [0x0000000000000000]               
	unsigned long                                      mDownBright : 1;                               // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FParamMoveData                              mDownBrightAlpha;                              // 0x0074 (0x006C) [0x0000000000000000]               
	unsigned long                                      mRMEFF : 1;                                    // 0x00E0 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FParamMoveData                              mRMEFFAlpha;                                   // 0x00E4 (0x006C) [0x0000000000000000]               
	unsigned long                                      mRMEFFFirst : 1;                               // 0x0150 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mRMEFFFirstCounter;                            // 0x0154 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_OfflineBootMenu.BrgUIMenu_OfflineBootMenu_TextData
// 0x0014
struct FBrgUIMenu_OfflineBootMenu_TextData
{
	class FString                                      mText;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mLeftPos;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal.BrgUIMenu_FortTerminal_ListItem
// 0x0020
struct FBrgUIMenu_FortTerminal_ListItem
{
	class FString                                      mCaption;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mIcon;                                         // 0x0010 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mGuide;                                        // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Insurance.BrgUIMenu_Insurance_PopupMenuState
// 0x00AC
struct FBrgUIMenu_Insurance_PopupMenuState
{
	uint8_t                                            mState;                                        // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            mSelectIndex;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mSelectMax;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      mText;                                         // 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mAddString1;                                   // 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mAddString2;                                   // 0x002C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FParamMoveData                              mCursorAnimation;                              // 0x003C (0x006C) [0x0000000000000000]               
	unsigned long                                      mbCancelButtonPressed : 1;                     // 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseLocalizedText : 1;                         // 0x00A8 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BrgGame.BrgUIMenu_Insurance.BrgUIMenu_Insurance_MenuState
// 0x00B4
struct FBrgUIMenu_Insurance_MenuState
{
	uint8_t                                            mState;                                        // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            mSubState;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	struct FBrgUIMenu_Insurance_PopupMenuState         mPopupMenuState;                               // 0x0008 (0x00AC) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Insurance.NumberInputState
// 0x001C
struct FNumberInputState
{
	int32_t                                            mDigitNum;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            mNums[0x4];                                    // 0x0004 (0x0010) [0x0000000000000000]               
	int32_t                                            mMaxNumber;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            mSelectDigitIndex;                             // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Insurance.BrgUIMenu_DeathMetalInfo
// 0x0014
struct FBrgUIMenu_DeathMetalInfo
{
	class FString                                      mDate;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mNum;                                          // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Insurance.BrgUIMenu_Insurance_TopMenuItem
// 0x0018
struct FBrgUIMenu_Insurance_TopMenuItem
{
	class FString                                      mCaption;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mIconImage;                                    // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIManager.BrgUIRenderToRTRequest
// 0x0044
struct FBrgUIRenderToRTRequest
{
	uint8_t                                            mType;                                         // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UTextureRenderTarget2D*                      mTextureRenderTarget;                          // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FString                                      mText;                                         // 0x000C (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FColor                                      mColor;                                        // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mScaleX;                                       // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mScaleY;                                       // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mPositionX;                                    // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mPositionY;                                    // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            mDrawBasePosX;                                 // 0x0030 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            mDrawBasePosY;                                 // 0x0031 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UBrgUIFont*                                  mFont;                                         // 0x0034 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UBrgUIImage*                                 mImage;                                        // 0x003C (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct BrgGame.BrgUIManager.BrgHUD_OffscreenText
// 0x001C
struct FBrgHUD_OffscreenText
{
	float                                              X;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Y;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	struct FColor                                      Col;                                           // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      Str;                                           // 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_SkillExchange_SkillList.BrgUIMenu_SkillExchange_SkillListResourceMushroom
// 0x0050
struct FBrgUIMenu_SkillExchange_SkillListResourceMushroom
{
	class UBrgUIImage*                                 frame;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 Base;                                          // 0x0008 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mushroomIcon;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mushroomIconGuide;                             // 0x0018 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mushroomIconGuideDest;                         // 0x0020 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mutiTextGuide;                                 // 0x0028 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 lBranketTextGuide;                             // 0x0030 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 rBranketTextGuide;                             // 0x0038 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 haveTextGuide;                                 // 0x0040 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 needTextGuide;                                 // 0x0048 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_SkillExchange_SkillList.BrgUIMenu_SkillExchange_SkillListHaveMushroom
// 0x0008
struct FBrgUIMenu_SkillExchange_SkillListHaveMushroom
{
	int32_t                                            numMyboHave;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            numOtherHave;                                  // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_SkillExchange_SkillList.BrgUIMenu_SkillExchange_SkillListHaveSkill
// 0x0018
struct FBrgUIMenu_SkillExchange_SkillListHaveSkill
{
	class FString                                      mSkillId;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mNum;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mSortKey;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_SkillExchange_SkillList.BrgUIMenu_SkillExchange_SkillListSkillDetail
// 0x0034
struct FBrgUIMenu_SkillExchange_SkillListSkillDetail
{
	class FString                                      SkillID;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            categoryFilter;                                // 0x0010 (0x0001) [0x0000000000000000]               
	int32_t                                            Cost;                                          // 0x0014 (0x0004) [0x0000000000000000]               
	uint8_t                                            costType;                                      // 0x0018 (0x0001) [0x0000000000000000]               
	uint8_t                                            costMushroom;                                  // 0x0019 (0x0001) [0x0000000000000000]               
	int32_t                                            numHave;                                       // 0x001C (0x0004) [0x0000000000000000]               
	unsigned long                                      IsEnable : 1;                                  // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      isPremium : 1;                                 // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	class UBrgUIImage_Stream*                          stickerImage;                                  // 0x0024 (0x0008) [0x0000000000000000]               
	int32_t                                            origListIndex;                                 // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            Display_priority;                              // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_SkillExchange_SkillList.BrgUIMenu_SkillExchange_SkillListSkill
// 0x0014
struct FBrgUIMenu_SkillExchange_SkillListSkill
{
	class FString                                      SkillID;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Display_priority;                              // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_SkillExchange_SkillList.BrgUIMenu_SkillExchange_SkillListFilterIcon
// 0x0028
struct FBrgUIMenu_SkillExchange_SkillListFilterIcon
{
	class UBrgUIImage*                                 Icon;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 guide;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 Base;                                          // 0x0010 (0x0008) [0x0000000000000000]               
	class FString                                      filterName;                                    // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_SkillExchange_SkillList.BrgUIMenu_SkillExchange_SkillListFilterTab
// 0x0008
struct FBrgUIMenu_SkillExchange_SkillListFilterTab
{
	class UBrgUIImage*                                 guide;                                         // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_BodyFreezer.DestinationCategoryStruct
// 0x0011
struct FDestinationCategoryStruct
{
	TArray<struct FBrgDbHunterDest>                    HunterDestination;                             // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Filter;                                        // 0x0010 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_BodyFreezer.DestinationIndicesStruct
// 0x0010
struct FDestinationIndicesStruct
{
	TArray<int32_t>                                    DestinationIndices;                            // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_BodyFreezer.DestinationAreaKnownStruct
// 0x0014
struct FDestinationAreaKnownStruct
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      known : 1;                                     // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_BodyFreezer.FreezerEquipInfo
// 0x00E8
struct FFreezerEquipInfo
{
	class FString                                      mEquipmentID;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mType;                                         // 0x0010 (0x0001) [0x0000000000000000]               
	unsigned long                                      isPremiere : 1;                                // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mPossessionIndex;                              // 0x0018 (0x0004) [0x0000000000000000]               
	struct FBrgUIMenu_ItemMiniPanel_Info               mPanelInfo;                                    // 0x001C (0x00CC) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenuPart_ItemSelect.BrgUIMenu_ItemSelect_ListInfo
// 0x0014
struct FBrgUIMenu_ItemSelect_ListInfo
{
	unsigned long                                      mEnable : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<int32_t>                                    mUnitIndices;                                  // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenuPart_ItemSelect.BrgUIMenu_ItemSelect_MaterialInfo
// 0x0018
struct FBrgUIMenu_ItemSelect_MaterialInfo
{
	class FString                                      mMateId;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mNum;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mMax;                                          // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenuPart_ItemSelect.BrgUIMenu_ItemSelect_Info
// 0x030C
struct FBrgUIMenu_ItemSelect_Info
{
	uint8_t                                            mInfoType;                                     // 0x0000 (0x0001) [0x0000000000000000]               
	unsigned long                                      mDisableSelect : 1;                            // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mEquipMark : 1;                                // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mNewMark : 1;                                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mVIPMark : 1;                                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mTimePeriodEnable : 1;                         // 0x0004 (0x0004) [0x0000000000000000] [0x00000010] 
	uint64_t                                           mTimePeriod;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	class FString                                      mBefore_ptid;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mBefore_lvl;                                   // 0x0020 (0x0004) [0x0000000000000000]               
	struct FBrgDropItemBaseInfo                        mBefore_BaseInfo;                              // 0x0024 (0x0174) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDropItemBaseInfo                        mBaseInfo;                                     // 0x0198 (0x0174) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenuPart_ItemSelect.BrgUIMenu_ItemSelect_DispAndSelectInfo
// 0x0029
struct FBrgUIMenu_ItemSelect_DispAndSelectInfo
{
	unsigned long                                      mValid : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mUseAlwaysCurrentIndex : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            mSelectIndex;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mSelectPrevIndex;                              // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            mSelectNextIndex;                              // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            mSelectUnitIndex;                              // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mSelectListIndex;                              // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            mSelectUnitScroll;                             // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                            mSortType;                                     // 0x001C (0x0001) [0x0000000000000000]               
	uint8_t                                            mDispItem;                                     // 0x001D (0x0001) [0x0000000000000000]               
	int32_t                                            mItemInfoPageCount;                            // 0x0020 (0x0004) [0x0000000000000000]               
	unsigned long                                      mDisplayList : 1;                              // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            mDispType;                                     // 0x0028 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenuPart_ItemSelect.BrgUIMenu_ItemSelect_Unit
// 0x03E8
struct FBrgUIMenu_ItemSelect_Unit
{
	unsigned long                                      mUseNewInfo : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FBrgUIMenu_ItemSelect_Info                  mInfo;                                         // 0x0004 (0x030C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgUIMenu_ItemMiniPanel_Info               mDrawInfo;                                     // 0x0310 (0x00CC) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mSelected : 1;                                 // 0x03DC (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mSortBaseParam;                                // 0x03E0 (0x0004) [0x0000000000000000]               
	unsigned long                                      mPanelCheck : 1;                               // 0x03E4 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_CoinLocker.BrgUIMenu_CoinLockerInfo
// 0x071C
struct FBrgUIMenu_CoinLockerInfo
{
	struct FBrgLocalItemInfo                           mItemInfo;                                     // 0x0000 (0x0718) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mIsDraw : 1;                                   // 0x0718 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_CoinLocker.BrgUIMenu_CoinLockerDiffInfo
// 0x0014
struct FBrgUIMenu_CoinLockerDiffInfo
{
	class FString                                      mItemId;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mState;                                        // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Config.BrgUIMenu_Option_ScrollTextInfo
// 0x0018
struct FBrgUIMenu_Option_ScrollTextInfo
{
	class UBrgUIImage*                                 mTextDrawBaseGuide;                            // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      mString;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Config.BrgUIMenu_Option_SettingUnit
// 0x005C
struct FBrgUIMenu_Option_SettingUnit
{
	uint8_t                                            mType;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	unsigned long                                      mInputReverse : 1;                             // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      mTitleText;                                    // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mParam;                                        // 0x0018 (0x0001) [0x0000000000000000]               
	class FString                                      mOnText;                                       // 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mOffText;                                      // 0x002C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mDefaultParam;                                 // 0x003C (0x0001) [0x0000000000000000]               
	uint8_t                                            mResetParam;                                   // 0x003D (0x0001) [0x0000000000000000]               
	class UBrgUIImage*                                 mDestGuide;                                    // 0x0040 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mParamGuide;                                   // 0x0048 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mBase;                                         // 0x0050 (0x0008) [0x0000000000000000]               
	float                                              mOffsetY;                                      // 0x0058 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Config_Control.BrgUIMenu_Config_ButtonCostumName
// 0x0014
struct FBrgUIMenu_Config_ButtonCostumName
{
	uint8_t                                            mConfigLink;                                   // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      mText;                                         // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Config_Control.BrgUIMenu_Config_ButtonCostumItemInfo
// 0x0030
struct FBrgUIMenu_Config_ButtonCostumItemInfo
{
	unsigned long                                      mEnableCostum : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mError : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                            mCongfigLink;                                  // 0x0004 (0x0001) [0x0000000000000000]               
	uint8_t                                            mPadDef;                                       // 0x0005 (0x0001) [0x0000000000000000]               
	uint8_t                                            mBtmImageDef;                                  // 0x0006 (0x0001) [0x0000000000000000]               
	class UBrgUIImage*                                 mBase;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mGuide;                                        // 0x0010 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mButtonGuide;                                  // 0x0018 (0x0008) [0x0000000000000000]               
	TArray<class FString>                              mTextArray;                                    // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Config_Graphic.BrgUIMenu_GraphicConfig_SettingUnit
// 0x0028
struct FBrgUIMenu_GraphicConfig_SettingUnit
{
	unsigned long                                      mInputReverse : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mInputRoop : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	class FString                                      mTitleText;                                    // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mListIndex;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	TArray<class FString>                              mSelectTextList;                               // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Config_KeyMouse.BrgUIMenu_Config_KeyCostumItemInfo
// 0x0054
struct FBrgUIMenu_Config_KeyCostumItemInfo
{
	class FString                                      mItemName;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mPlayerDef;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mUIDef;                                        // 0x0014 (0x0004) [0x0000000000000000]               
	struct FBrgKeyConfig_KeySetting                    mKeySetting;                                   // 0x0018 (0x0024) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mError[0x3];                                   // 0x003C (0x000C) [0x0000000000000000]               
	int32_t                                            mDisable[0x3];                                 // 0x0048 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_DailyRewardBox.BrgDailyRewardBoxItemInfo
// 0x0024
struct FBrgDailyRewardBoxItemInfo
{
	class FString                                      mItemId;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            meResultType;                                  // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                            meItemType;                                    // 0x0011 (0x0001) [0x0000000000000000]               
	int32_t                                            mNum;                                          // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            mLevel;                                        // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            mDuration;                                     // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            mRemain;                                       // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_DefenseReport.BrgUIMenu_DefenseReport_Info
// 0x0038
struct FBrgUIMenu_DefenseReport_Info
{
	class FString                                      mTeamname;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mTime;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mLevel;                                        // 0x0014 (0x0004) [0x0000000000000000]               
	class FString                                      mName;                                         // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mResultType;                                   // 0x0028 (0x0001) [0x0000000000000000]               
	int32_t                                            mAssaultMoney;                                 // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            mDefenseSuccessMoney;                          // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            mKillCount;                                    // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_DefenseReport.BrgUIMenu_DefenseReport_Prisoner_Info
// 0x0030
struct FBrgUIMenu_DefenseReport_Prisoner_Info
{
	class FString                                      mCriminalName;                                 // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mVictimName;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mState;                                        // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Elevator2.BrgFloorInfo
// 0x003C
struct FBrgFloorInfo
{
	class FString                                      floorName;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      FloorNumberDesc;                               // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Id;                                            // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            FloorNumber;                                   // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            FloorCost;                                     // 0x0034 (0x0004) [0x0000000000000000]               
	unsigned long                                      Selectable : 1;                                // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_ExploreResult.BrgUIMenu_ExploreResult_Drawinfo
// 0x0002
struct FBrgUIMenu_ExploreResult_Drawinfo
{
	uint8_t                                            mUseTextGuideIndex;                            // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            mUseCountGuideIndex;                           // 0x0001 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_ExploreResult.BrgUIMenu_ExploreResult_SubtitleInfo
// 0x0030
struct FBrgUIMenu_ExploreResult_SubtitleInfo
{
	uint8_t                                            mType;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	unsigned long                                      mVisibleCounter : 1;                           // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      mSubtitleInfoText;                             // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mMainCount;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              mMaxMainCount;                                 // 0x001C (0x0004) [0x0000000000000000]               
	float                                              mSubCount;                                     // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              mMaxSubCount;                                  // 0x0024 (0x0004) [0x0000000000000000]               
	unsigned long                                      mEndCntup : 1;                                 // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FBrgUIMenu_ExploreResult_Drawinfo           mGuide;                                        // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_ExploreResult.BrgUIMenu_ExploreResult_mMainTitleInfo
// 0x0024
struct FBrgUIMenu_ExploreResult_mMainTitleInfo
{
	class FString                                      mTitleText;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mGuideIndex;                                   // 0x0010 (0x0001) [0x0000000000000000]               
	TArray<struct FBrgUIMenu_ExploreResult_SubtitleInfo> mSubtitleInfo;                                 // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_FloorResult_LogDisplay.BrgUIMenu_FloorResult_LogDisplay_Text
// 0x0028
struct FBrgUIMenu_FloorResult_LogDisplay_Text
{
	class FString                                      Time;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Text;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              timeValue;                                     // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            EventIndex;                                    // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FloorResult_LogDisplay.BrgUIMenu_FloorResult_LogDisplay_HealthEvent
// 0x0009
struct FBrgUIMenu_FloorResult_LogDisplay_HealthEvent
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Health;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            ChangeType;                                    // 0x0008 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FloorResult_LogDisplay.BrgUIMenu_FloorResult_LogDisplay_Info
// 0x0010
struct FBrgUIMenu_FloorResult_LogDisplay_Info
{
	class UBrgUIImage*                                 Time;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 Text;                                          // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FloorResult_Map.BrgUIMenu_FloorResult_EnemyState
// 0x001C
struct FBrgUIMenu_FloorResult_EnemyState
{
	unsigned long                                      bSpawned : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnd : 1;                                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              fadeOutTimer;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentIndex;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     Position;                                      // 0x000C (0x000C) [0x0000000000000000]               
	float                                              Rotation;                                      // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FloorResult_Map.BrgUIMenu_FloorResult_Position_Data
// 0x002C
struct FBrgUIMenu_FloorResult_Position_Data
{
	int32_t                                            EventIndex;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Time;                                          // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     Position;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	float                                              Rotation;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x0018 (0x000C) [0x0000000000000000]               
	float                                              rotVelocity;                                   // 0x0024 (0x0004) [0x0000000000000000]               
	unsigned long                                      executed : 1;                                  // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_FloorResult_Map.BrgUIMenu_FloorResult_Icon_Appear_Data
// 0x0018
struct FBrgUIMenu_FloorResult_Icon_Appear_Data
{
	int32_t                                            EventIndex;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Time;                                          // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     Position;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	unsigned long                                      executed : 1;                                  // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_FloorResult_Map.BrgUIMenu_FloorResult_Line_Data
// 0x001C
struct FBrgUIMenu_FloorResult_Line_Data
{
	struct FVector                                     Start;                                         // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     End;                                           // 0x000C (0x000C) [0x0000000000000000]               
	float                                              Time;                                          // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FloorResult_Map.BrgUIMenu_FloorResult_Icon_Data
// 0x001C
struct FBrgUIMenu_FloorResult_Icon_Data
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	struct FVector                                     Position;                                      // 0x0004 (0x000C) [0x0000000000000000]               
	float                                              Time;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	class UBrgUIImage*                                 iconImage;                                     // 0x0014 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Fort_RaidResult.BrgUIMenu_Fort_RaidResult_CutInFadeParam
// 0x0088
struct FBrgUIMenu_Fort_RaidResult_CutInFadeParam
{
	class UBrgUIImage*                                 mBaseImage;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	struct FParamMoveData                              mParam;                                        // 0x0008 (0x006C) [0x0000000000000000]               
	uint8_t                                            mMoveType;                                     // 0x0074 (0x0001) [0x0000000000000000]               
	float                                              mFadeTime;                                     // 0x0078 (0x0004) [0x0000000000000000]               
	float                                              mBeginMarginScale;                             // 0x007C (0x0004) [0x0000000000000000]               
	float                                              mEndDrawTime;                                  // 0x0080 (0x0004) [0x0000000000000000]               
	unsigned long                                      mIsEndDraw : 1;                                // 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mIsEnd : 1;                                    // 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BrgGame.BrgUIMenu_Fort_RaidResult.BrgUIMenu_Fort_RaidResult_CutInParam
// 0x01A0
struct FBrgUIMenu_Fort_RaidResult_CutInParam
{
	class UBrgUIImage*                                 mBarImage;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	struct FBrgUIMenu_Fort_RaidResult_CutInFadeParam   mAlpha0;                                       // 0x0008 (0x0088) [0x0000000000000000]               
	struct FBrgUIMenu_Fort_RaidResult_CutInFadeParam   mAlpha1;                                       // 0x0090 (0x0088) [0x0000000000000000]               
	struct FBrgUIMenu_Fort_RaidResult_CutInFadeParam   mBase;                                         // 0x0118 (0x0088) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Fort_RaidResult.BrgUIMenu_Fort_RaidResult_CutIn
// 0x0010
struct FBrgUIMenu_Fort_RaidResult_CutIn
{
	TArray<struct FBrgUIMenu_Fort_RaidResult_CutInParam> mCutInParam;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Fort_RaidResult.BrgUIMenu_Fort_RaidResultParamCount
// 0x0024
struct FBrgUIMenu_Fort_RaidResultParamCount
{
	int32_t                                            mTargetCount;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            mMaxCount;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              mAlpha;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     mStart;                                        // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     mToEnd;                                        // 0x0018 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Fort_RaidResult.BrgUIMenu_Fort_RaidCoutInResultParam
// 0x0020
struct FBrgUIMenu_Fort_RaidCoutInResultParam
{
	float                                              mParam1;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              mParam2;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mBonus;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      mParamName;                                    // 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mIsPointType : 1;                              // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_Fort_RaidResult.BrgUIMenu_Fort_RaidCoutInResultGuide
// 0x0010
struct FBrgUIMenu_Fort_RaidCoutInResultGuide
{
	class UBrgUIImage*                                 mBaseGuide;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            mItemCount;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              mOffsetX;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FortAssault.BrgUIMenu_FortAssaultDestinationsList
// 0x003C
struct FBrgUIMenu_FortAssaultDestinationsList
{
	class FString                                      Title;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            RemainingOverallAttempts;                      // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxOverallAttempts;                            // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            ParticipationFee;                              // 0x0018 (0x0004) [0x0000000000000000]               
	TArray<struct FBrgDbFortDestOld>                   AttackEntries;                                 // 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbRescueDest>                    RescueEntries;                                 // 0x002C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_FortAssault.BrgUIMenu_FortAssaultDestinationEntry
// 0x0034
struct FBrgUIMenu_FortAssaultDestinationEntry
{
	class FString                                      TeamName;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Name;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Uid;                                           // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            Level;                                         // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            money;                                         // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            RemainingNumAttempts;                          // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            Rank;                                          // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FortAssault.BrgUIMenu_FortAssaultHostageInfo
// 0x0030
struct FBrgUIMenu_FortAssaultHostageInfo
{
	class FString                                      HostageName;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      HostageID;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            HostageUid;                                    // 0x0020 (0x0004) [0x0000000000000000]               
	uint64_t                                           HostageExpirationLimit;                        // 0x0024 (0x0008) [0x0000000000000000]               
	int32_t                                            Ransom;                                        // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FortAssault.BrgUIMenu_FortAssaultAttackEntry
// 0x0064
struct FBrgUIMenu_FortAssaultAttackEntry
{
	struct FBrgUIMenu_FortAssaultDestinationEntry      Opponent;                                      // 0x0000 (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgUIMenu_FortAssaultHostageInfo           Hostage;                                       // 0x0034 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_FortAssault.BrgUIMenu_FortAssaultTeamEntry
// 0x0024
struct FBrgUIMenu_FortAssaultTeamEntry
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgUIMenu_FortAssaultDestinationEntry> PlayerList;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Rank;                                          // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FortAssault.BrgUIMenu_FortAssaultHateInfo
// 0x0028
struct FBrgUIMenu_FortAssaultHateInfo
{
	class FString                                      OpponentTeamName;                              // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ConflictId;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            OurHate;                                       // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            OpponentHate;                                  // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_ShareMenu_OtherParam.BrgUIMenu_ShareMenu_TDMRewardParam
// 0x000C
struct FBrgUIMenu_ShareMenu_TDMRewardParam
{
	uint8_t                                            mGrade;                                        // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            mBagCount;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              mOpacity;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_ShareMenu_OtherParam.BrgUIMenu_TDMRewardList
// 0x0010
struct FBrgUIMenu_TDMRewardList
{
	TArray<struct FBrgDbMasterMysterybagContent>       mRewardList;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_ShareMenu_OtherParam.BrgUIMenu_ShareMenu_BattleRushReward
// 0x0018
struct FBrgUIMenu_ShareMenu_BattleRushReward
{
	TArray<class FString>                              mBags;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mMoney;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mSpirit;                                       // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_ShareMenu_PlayerParam.BrgUIMenu_Fort_PlayerBasicParam
// 0x0068
struct FBrgUIMenu_Fort_PlayerBasicParam
{
	class FString                                      mName;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mRank;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	uint64_t                                           mUser_modified;                                // 0x0014 (0x0008) [0x0000000000000000]               
	int32_t                                            mGold;                                         // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            mSpirit;                                       // 0x0020 (0x0004) [0x0000000000000000]               
	class FString                                      mTdm_rank;                                     // 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mTdm_point;                                    // 0x0034 (0x0004) [0x0000000000000000]               
	class FString                                      mTeamID;                                       // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mTeamname;                                     // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mEmblem;                                       // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_ShareMenu_PlayerParam.BrgUIMenu_Fort_PlayerDetailParam
// 0x0030
struct FBrgUIMenu_Fort_PlayerDetailParam
{
	int32_t                                            mFighters;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            mAbducted_fighters;                            // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mFighterLevelAverage;                          // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            mFreezer_level;                                // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            mPrison_level;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mPrison_Fighter;                               // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            mSafe_level;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            mSafe_maxHP;                                   // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            mSafe_capacity;                                // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            mTank_level;                                   // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            mTank_maxHP;                                   // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            mTank_capacity;                                // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_ShareMenu_RankingParam.FortTerminalRankingPlayerData
// 0x0028
struct FFortTerminalRankingPlayerData
{
	class FString                                      mName;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mFlagIcon;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            mRank;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            mKillCoin;                                     // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            mSpirit;                                       // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            mPoint;                                        // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_ShareMenu_RankingParam.FortTerminalRanking
// 0x0010
struct FFortTerminalRanking
{
	TArray<struct FFortTerminalRankingPlayerData>      mRanking;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_ShareMenu_RankingParam.FortTerminalRangeRanking
// 0x0020
struct FFortTerminalRangeRanking
{
	struct FFortTerminalRanking                        mRange[0x2];                                   // 0x0000 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_ShareMenu_RankingParam.FortTerminalSortRanking
// 0x0040
struct FFortTerminalSortRanking
{
	struct FFortTerminalRangeRanking                   mSort[0x2];                                    // 0x0000 (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_SubMenu_BattleRushResult.BrgUIMenu_FortBattleRush_FadeParam
// 0x0070
struct FBrgUIMenu_FortBattleRush_FadeParam
{
	uint8_t                                            mType;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	struct FParamMoveData                              mMoveData;                                     // 0x0004 (0x006C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_SubMenu_CustomBase_Contents.ContentsInfo
// 0x004C
struct FContentsInfo
{
	class FString                                      Mid;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mTitle;                                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mImgTexPath;                                   // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mOffsetX;                                      // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            mOffsetY;                                      // 0x0034 (0x0004) [0x0000000000000000]               
	int32_t                                            mPrime_KillCoin;                               // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            mPrime_DeathMetal;                             // 0x003C (0x0004) [0x0000000000000000]               
	int32_t                                            mPatternID;                                    // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            mNo;                                           // 0x0044 (0x0004) [0x0000000000000000]               
	unsigned long                                      mBuy : 1;                                      // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mNew : 1;                                      // 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mSet : 1;                                      // 0x0048 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mRead : 1;                                     // 0x0048 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_SubMenu_Facility.BrgUIMenu_FacilityStates
// 0x007C
struct FBrgUIMenu_FacilityStates
{
	class FString                                      mFacilityName;                                 // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mIconImage;                                    // 0x0010 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mIconGuide;                                    // 0x0018 (0x0008) [0x0000000000000000]               
	int32_t                                            mCurrentLevel;                                 // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            mMaxLevel;                                     // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            mSpirit;                                       // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            mParam1;                                       // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            mParam2;                                       // 0x0030 (0x0004) [0x0000000000000000]               
	class FString                                      mParam1Name;                                   // 0x0034 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mParam2Name;                                   // 0x0044 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           mPeriod;                                       // 0x0054 (0x0008) [0x0000000000000000]               
	class FString                                      mSendName;                                     // 0x005C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mWaitName;                                     // 0x006C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_SubMenu_Raid.BrgUIMenu_FortRaid_Params
// 0x0010
struct FBrgUIMenu_FortRaid_Params
{
	TArray<struct FBrgDbFortDest>                      mParam;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_SubMenu_Raid.BrgUIMenu_FortRaid_RaidLists
// 0x0020
struct FBrgUIMenu_FortRaid_RaidLists
{
	TArray<struct FBrgUIMenu_FortRaid_Params>          mRaidList;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mListName;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_SubMenu_Report.BrgUIMenu_Fort_VendettaReport
// 0x00BC
struct FBrgUIMenu_Fort_VendettaReport
{
	struct FBrgDbWarTeam                               mWinTeam;                                      // 0x0000 (0x005C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbWarTeam                               mLoseTeam;                                     // 0x005C (0x005C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mday;                                          // 0x00B8 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_SubMenu_Report.BrgUIMenu_Fort_TagList
// 0x0020
struct FBrgUIMenu_Fort_TagList
{
	class UBrgUIImage*                                 mIconImage;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mIconGuide;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	class FString                                      mTabName;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_SubMenu_Report.BrgUIMenu_FortReport_BonusDetail
// 0x0010
struct FBrgUIMenu_FortReport_BonusDetail
{
	int32_t                                            mSuccessCount;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            mTotalBnsmoney;                                // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mTotalBnsspirit;                               // 0x0008 (0x0004) [0x0000000000000000]               
	unsigned long                                      mIsGetBonus : 1;                               // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_SubMenu_WarResult.BrgUIMenu_WarResultMission
// 0x0044
struct FBrgUIMenu_WarResultMission
{
	class FString                                      mMissionName;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mMIssionParam;                                 // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mAddString1;                                   // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mAddString2;                                   // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mOpacity;                                      // 0x0040 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_SubMenu_WarResult.BrgUIMenu_WarResultParam
// 0x0060
struct FBrgUIMenu_WarResultParam
{
	struct FBrgDbWar                                   mReportParam;                                  // 0x0000 (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgUIMenu_WarResultMission>         mMissions;                                     // 0x0034 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mTotalMoney;                                   // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            mTotalSpirit;                                  // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            mTotalMedal;                                   // 0x004C (0x0004) [0x0000000000000000]               
	TArray<class FString>                              mTDMReward;                                    // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_SubMenu_WarResult.BrgUIMenu_WarResultGuides
// 0x0010
struct FBrgUIMenu_WarResultGuides
{
	class UBrgUIImage*                                 mNameGuide;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mNumGuide;                                     // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_WorldSituation.BrgUIMenu_WorldSituation_Team
// 0x0054
struct FBrgUIMenu_WorldSituation_Team
{
	class FString                                      mName;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mTeamID;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage_Stream*                          mEmblem;                                       // 0x0020 (0x0008) [0x0000000000000000]               
	struct FVector                                     mLocation;                                     // 0x0028 (0x000C) [0x0000000000000000]               
	struct FVector                                     mCurrentLocation;                              // 0x0034 (0x000C) [0x0000000000000000]               
	float                                              mRadius;                                       // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            mBaseIndex;                                    // 0x0044 (0x0004) [0x0000000000000000]               
	float                                              mBaseAngle;                                    // 0x0048 (0x0004) [0x0000000000000000]               
	float                                              mTeamAngle;                                    // 0x004C (0x0004) [0x0000000000000000]               
	float                                              mDamageTimer;                                  // 0x0050 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_WorldSituation.BrgUIMenu_WorldSituation_Particle
// 0x00F0
struct FBrgUIMenu_WorldSituation_Particle
{
	struct FParamMoveData                              mMoveParam;                                    // 0x0000 (0x006C) [0x0000000000000000]               
	struct FParamMoveData                              mAlphaParam;                                   // 0x006C (0x006C) [0x0000000000000000]               
	float                                              mShotDelayTime;                                // 0x00D8 (0x0004) [0x0000000000000000]               
	class FString                                      mTargetTeamId;                                 // 0x00DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mPaletId;                                      // 0x00EC (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_WorldSituation.BrgUIMenu_WorldSituation_ParticlePalet
// 0x0014
struct FBrgUIMenu_WorldSituation_ParticlePalet
{
	struct FColor                                      mColor;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            mAssultCount;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              mSpeed;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              mScale;                                        // 0x000C (0x0004) [0x0000000000000000]               
	float                                              mLocusScale;                                   // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_WorldSituation.BrgUIMenu_WorldSituation_Effect
// 0x0084
struct FBrgUIMenu_WorldSituation_Effect
{
	struct FParamMoveData                              mMoveParam;                                    // 0x0000 (0x006C) [0x0000000000000000]               
	class UBrgUIImage*                                 mImage;                                        // 0x006C (0x0008) [0x0000000000000000]               
	struct FVector                                     mLocation;                                     // 0x0074 (0x000C) [0x0000000000000000]               
	int32_t                                            mPaletId;                                      // 0x0080 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_FortTerminal_WorldSituation.BrgUIMenu_WorldSituation_VertexList
// 0x0010
struct FBrgUIMenu_WorldSituation_VertexList
{
	TArray<struct FBrgUIDrawVertex2D>                  mVertexList;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Simple.BrgUIMenu_Simple_Unit
// 0x0010
struct FBrgUIMenu_Simple_Unit
{
	class FString                                      mName;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_GameCenterMeijin.BrgUIMenu_GameCenterMeijinTipEntry
// 0x0038
struct FBrgUIMenu_GameCenterMeijinTipEntry
{
	class FString                                      Title;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              Description;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      FooterDescription;                             // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TipNumber;                                     // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            BackgroundIndex;                               // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_GameCenterMotherValve.BrgUIMenu_GameCenterMotherValveEntry
// 0x0024
struct FBrgUIMenu_GameCenterMotherValveEntry
{
	class FString                                      Description;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      flag;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      NewEntry : 1;                                  // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Accessible : 1;                                // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BrgGame.BrgUIMenu_GameCenterNaomi.BrgUIMenu_GameCenterNaomiQuotes
// 0x0010
struct FBrgUIMenu_GameCenterNaomiQuotes
{
	struct FName                                       QuoteAnimation;                                // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            DialogTargetIndex;                             // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            SequentialDependencyPlaybackIndex;             // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_GameCenterNaomi.QuestFilter
// 0x0010
struct FQuestFilter
{
	TArray<int32_t>                                    QuestIndices;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_GameCenterRadio.ChannelData
// 0x0020
struct FChannelData
{
	class FString                                      Id;                                            // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Name;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_ShopBase.BrgUIMenu_ShopBase_MenuInfo
// 0x000C
struct FBrgUIMenu_ShopBase_MenuInfo
{
	int32_t                                            mMenuUnitIndex;                                // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            mFromState;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mNextState;                                    // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_ShopBase.BrgUIMenu_ShopBase_DiffInfo
// 0x0014
struct FBrgUIMenu_ShopBase_DiffInfo
{
	class FString                                      mItemId;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mState;                                        // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_ShopBase.BrgUIMenu_ShopHistoryInfo
// 0x0018
struct FBrgUIMenu_ShopHistoryInfo
{
	class FString                                      mPtid;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mLvl;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mChecked;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_ItemVendingMachine.EBrgUIMenu_ItemVendingMachine_RmapInfo
// 0x0014
struct FEBrgUIMenu_ItemVendingMachine_RmapInfo
{
	unsigned long                                      mbUpdate : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<struct FBrgLocalItemInfo>                   mLocalItemInfoList;                            // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_ItemVendingMachine.EBrgUIMenu_ItemVendingMachine_Lineup
// 0x0010
struct FEBrgUIMenu_ItemVendingMachine_Lineup
{
	TArray<struct FBrgDbMasterAutomaticshopLineup>     mDbVMItems;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_MotherValve.BrgUIMenu_MotherValveEntry
// 0x0014
struct FBrgUIMenu_MotherValveEntry
{
	class FString                                      Description;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      NewEntry : 1;                                  // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Accessible : 1;                                // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BrgGame.BrgUIMenu_PartShop.BrgUIMenu_PartShopWatingPartInfo
// 0x000C
struct FBrgUIMenu_PartShopWatingPartInfo
{
	int32_t                                            mIndex;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	uint64_t                                           mWaitTime;                                     // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_PartShop.BrgUIMenu_PartShopResearchItemInfo
// 0x0374
struct FBrgUIMenu_PartShopResearchItemInfo
{
	struct FBrgDbPart                                  mDbPart;                                       // 0x0000 (0x0234) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUserPartResearch                      mDbUserPartResearch;                           // 0x0234 (0x0050) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbMasterPartResearch                    mDbMasterPartResearch;                         // 0x0284 (0x00F0) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_PartShop.BrgUIMenu_PartShopMaterialInfo
// 0x0014
struct FBrgUIMenu_PartShopMaterialInfo
{
	class FString                                      mMateId;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mNum;                                          // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_PartShop_Stamp.SkillListContentInfo
// 0x0034
struct FSkillListContentInfo
{
	class FString                                      mType;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mTypeIcon;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mTypeIconSrcGuide;                             // 0x0018 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mTypeIconDestGuide;                            // 0x0020 (0x0008) [0x0000000000000000]               
	float                                              mRate;                                         // 0x0028 (0x0004) [0x0000000000000000]               
	class UBrgUIImage*                                 mRateTextGuide;                                // 0x002C (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_PartShop_Stamp.SkillListContentsInfo
// 0x0028
struct FSkillListContentsInfo
{
	TArray<struct FSkillListContentInfo>               mContents;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mTitleText;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mTitleTextGuide;                               // 0x0020 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_PartShop_Stamp.ArrowEffectInfo
// 0x0020
struct FArrowEffectInfo
{
	class UBrgUIImage*                                 mArrow;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	unsigned long                                      mRun : 1;                                      // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mAddY;                                         // 0x000C (0x0004) [0x0000000000000000]               
	float                                              mAlpha;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              mDelay;                                        // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              mDelayCnt;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              mArrowSpeed;                                   // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_PartShop_Stamp.StampEffectInfo
// 0x005C
struct FStampEffectInfo
{
	class FString                                      mType;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mTitleText;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mTitleTextGuide;                               // 0x0020 (0x0008) [0x0000000000000000]               
	float                                              mRate;                                         // 0x0028 (0x0004) [0x0000000000000000]               
	class UBrgUIImage*                                 mRateGuide;                                    // 0x002C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mTypeIcon;                                     // 0x0034 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mTypeIconSrcGuide;                             // 0x003C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mTypeIconDestGuide;                            // 0x0044 (0x0008) [0x0000000000000000]               
	TArray<struct FArrowEffectInfo>                    mArrowEffect;                                  // 0x004C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_PresentBox_ItemList.BrgUIMenu_PresentBoxFrom
// 0x0014
struct FBrgUIMenu_PresentBoxFrom
{
	uint8_t                                            mType;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      mDetailString;                                 // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_PresentBox_ItemList.BrgUIMenu_PresentBoxKind
// 0x0015
struct FBrgUIMenu_PresentBoxKind
{
	uint8_t                                            mType;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      Mid;                                           // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mIcon;                                         // 0x0014 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_PresentBox_ItemList.BrgUIMenu_PresentBoxItem
// 0x005C
struct FBrgUIMenu_PresentBoxItem
{
	class FString                                      mRewardId;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgUIMenu_PresentBoxKind                   mKind;                                         // 0x0010 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgUIMenu_PresentBoxFrom                   mFrom;                                         // 0x0028 (0x0014) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           mTime;                                         // 0x003C (0x0008) [0x0000000000000000]               
	int32_t                                            mNum;                                          // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            mLevel;                                        // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            mDuration;                                     // 0x004C (0x0004) [0x0000000000000000]               
	int32_t                                            mRestAmmo;                                     // 0x0050 (0x0004) [0x0000000000000000]               
	int32_t                                            mSpareAmmo;                                    // 0x0054 (0x0004) [0x0000000000000000]               
	unsigned long                                      mGriled : 1;                                   // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mIsBingo : 1;                                  // 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BrgGame.BrgUIMenu_PresentBox_ItemList.IconDrawInfo
// 0x0010
struct FIconDrawInfo
{
	class UBrgUIImage*                                 mImage;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mGuide;                                        // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_PresentBox.BrgUIMenu_PresentBoxSkillSticker
// 0x0014
struct FBrgUIMenu_PresentBoxSkillSticker
{
	class FString                                      mSkillId;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mNum;                                          // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_PresentBox.BrgUIMenu_PresentBoxOperate
// 0x0011
struct FBrgUIMenu_PresentBoxOperate
{
	class FString                                      mPresentId;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mOperate;                                      // 0x0010 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_PresentBox.BrgUIMenu_PresentBoxDiffInfo
// 0x0014
struct FBrgUIMenu_PresentBoxDiffInfo
{
	class FString                                      mItemId;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mState;                                        // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_PresentBox.BrgUIMenu_PresentBoxReceive
// 0x0018
struct FBrgUIMenu_PresentBoxReceive
{
	uint8_t                                            mReceiveType;                                  // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      mEntityId;                                     // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mNum;                                          // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Prison.BrgUIMenu_Prison_MsgPopUp
// 0x0028
struct FBrgUIMenu_Prison_MsgPopUp
{
	class FString                                      sMsg;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mType;                                         // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                            mPopWindowType;                                // 0x0011 (0x0001) [0x0000000000000000]               
	uint8_t                                            mSysWindowType;                                // 0x0012 (0x0001) [0x0000000000000000]               
	uint8_t                                            mSelectActionState;                            // 0x0013 (0x0001) [0x0000000000000000]               
	int32_t                                            mPrisonSlot;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	class FString                                      mRansomUserName;                               // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Prison.drawcol
// 0x0008
struct Fdrawcol
{
	uint8_t                                            R;                                             // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            G;                                             // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            B;                                             // 0x0002 (0x0001) [0x0000000000000000]               
	uint8_t                                            A;                                             // 0x0003 (0x0001) [0x0000000000000000]               
	int32_t                                            ColIndex;                                      // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Prison.BrgUIMenu_Prison_OtherParamInfo
// 0x0014
struct FBrgUIMenu_Prison_OtherParamInfo
{
	class FString                                      mRewardBag;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mPrisonSlot;                                   // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Prison.IntVect
// 0x000C
struct FIntVect
{
	int32_t                                            X;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Y;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Z;                                             // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_ResultDrone.BrgResultDrone_AddLevel
// 0x0018
struct FBrgResultDrone_AddLevel
{
	int32_t                                            mLevel;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	class UBrgUIImage*                                 mImage;                                        // 0x0004 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mSelectGuide;                                  // 0x000C (0x0008) [0x0000000000000000]               
	int32_t                                            mOffsetY;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_ResultDrone.BrgResultDrone_Icon
// 0x0010
struct FBrgResultDrone_Icon
{
	class UBrgUIImage*                                 mImage;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mGuide;                                        // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_ResultDrone.BrgResultDrone_LBItemResource
// 0x000C
struct FBrgResultDrone_LBItemResource
{
	struct FName                                       mItemId;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            mNum;                                          // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_ResultDrone.BrgResultDrone_LevelUpCost
// 0x0014
struct FBrgResultDrone_LevelUpCost
{
	int32_t                                            mBloodnium;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	TArray<struct FBrgResultDrone_LBItemResource>      mItems;                                        // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_SelectBodyBase.BrgUIMenu_SelectBody_ResponseBodies
// 0x0068
struct FBrgUIMenu_SelectBody_ResponseBodies
{
	int32_t                                            mDataIndex;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      mBodyAssetId;                                  // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mBodyMeshPath;                                 // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mBodyPhysicsAssetPath;                         // 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mHairAssetId;                                  // 0x0034 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mGasmaskAssetId;                               // 0x0044 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mGender;                                       // 0x0054 (0x0001) [0x0000000000000000]               
	struct FLinearColor                                mBodyDiffuseColor;                             // 0x0058 (0x0010) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_SelectAdditionalBody.BrgUIMenu_AddBody_PurchaseItem
// 0x0018
struct FBrgUIMenu_AddBody_PurchaseItem
{
	class FString                                      mType;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mPrice;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mGrade;                                        // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Base.UIItemInfo
// 0x008C
struct FUIItemInfo
{
	class UBrgUIImage*                                 mImage;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      mLoadImagePath;                                // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mGuideSrc;                                     // 0x0018 (0x0008) [0x0000000000000000]               
	class FString                                      mLoadGuideSrcPath;                             // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mGuideDest;                                    // 0x0030 (0x0008) [0x0000000000000000]               
	class FString                                      mLoadGuideDestPath;                            // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mbScaleChange : 1;                             // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mbScaleCentering : 1;                          // 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              mScaleRateX;                                   // 0x004C (0x0004) [0x0000000000000000]               
	float                                              mScaleRateY;                                   // 0x0050 (0x0004) [0x0000000000000000]               
	uint8_t                                            mScaleBaseType;                                // 0x0054 (0x0001) [0x0000000000000000]               
	float                                              mGaugeRate;                                    // 0x0058 (0x0004) [0x0000000000000000]               
	unsigned long                                      mbColorSet : 1;                                // 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FColor                                      mColor;                                        // 0x0060 (0x0004) [0x0000000000000000]               
	TArray<int32_t>                                    mEtcParamInt;                                  // 0x0064 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              mEtcParamStr;                                  // 0x0074 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mAddX;                                         // 0x0084 (0x0004) [0x0000000000000000]               
	int32_t                                            mAddY;                                         // 0x0088 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Base.UITimeTextInfo
// 0x0030
struct FUITimeTextInfo
{
	class FString                                      mTexDay;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mTexHour;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mTexMinute;                                    // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Base.UITextInfo
// 0x00C8
struct FUITextInfo
{
	class UBrgUIImage*                                 mImage;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      mLoadImagePath;                                // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mGuideSrc;                                     // 0x0018 (0x0008) [0x0000000000000000]               
	class FString                                      mLoadGuideSrcPath;                             // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mGuideDest;                                    // 0x0030 (0x0008) [0x0000000000000000]               
	class FString                                      mLoadGuideDestPath;                            // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mFontType;                                     // 0x0048 (0x0004) [0x0000000000000000]               
	struct FColor                                      mColor;                                        // 0x004C (0x0004) [0x0000000000000000]               
	uint8_t                                            mAlign;                                        // 0x0050 (0x0001) [0x0000000000000000]               
	int32_t                                            mAddX;                                         // 0x0054 (0x0004) [0x0000000000000000]               
	int32_t                                            mAddY;                                         // 0x0058 (0x0004) [0x0000000000000000]               
	int32_t                                            mParamIdxNewLineY;                             // 0x005C (0x0004) [0x0000000000000000]               
	int32_t                                            mParamIdxScale;                                // 0x0060 (0x0004) [0x0000000000000000]               
	int32_t                                            mParamIdxAddX;                                 // 0x0064 (0x0004) [0x0000000000000000]               
	int32_t                                            mParamIdxAddY;                                 // 0x0068 (0x0004) [0x0000000000000000]               
	int32_t                                            mParamIdxIconAddX;                             // 0x006C (0x0004) [0x0000000000000000]               
	int32_t                                            mParamIdxIconAddY;                             // 0x0070 (0x0004) [0x0000000000000000]               
	int32_t                                            mParamIdxIconAddNextX;                         // 0x0074 (0x0004) [0x0000000000000000]               
	class FString                                      mText;                                         // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUITimeTextInfo                             mTimeText;                                     // 0x0088 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mbDrawNumber : 1;                              // 0x00B8 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mNumber;                                       // 0x00BC (0x0004) [0x0000000000000000]               
	unsigned long                                      mbDispZero : 1;                                // 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mbFigure;                                      // 0x00C4 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Base.UISketchbook_RenderItem
// 0x015C
struct FUISketchbook_RenderItem
{
	uint8_t                                            mType;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	struct FUIItemInfo                                 mItem;                                         // 0x0004 (0x008C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUITextInfo                                 mText;                                         // 0x0090 (0x00C8) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mVisible : 1;                                  // 0x0158 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Base.UISketchbook_RenderGuideList_Info
// 0x016C
struct FUISketchbook_RenderGuideList_Info
{
	struct FUISketchbook_RenderItem                    mRenderItem;                                   // 0x0000 (0x015C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mAddRow;                                       // 0x015C (0x0004) [0x0000000000000000]               
	int32_t                                            mDispRow;                                      // 0x0160 (0x0004) [0x0000000000000000]               
	int32_t                                            mRowMin;                                       // 0x0164 (0x0004) [0x0000000000000000]               
	int32_t                                            mRowMax;                                       // 0x0168 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Base.UISketchbook_RenderGuideList
// 0x0324
struct FUISketchbook_RenderGuideList
{
	TArray<class UBrgUIImage*>                         mGuideList;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FUISketchbook_RenderGuideList_Info>  mRenderItemList;                               // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUISketchbook_RenderItem                    mScrollBarImage;                               // 0x0020 (0x015C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUISketchbook_RenderItem                    mScrollBackImage;                              // 0x017C (0x015C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FUISketchbook_RenderItem>            mScrollMaskImage;                              // 0x02D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mbScrollEnable : 1;                            // 0x02E8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mbDispScroll : 1;                              // 0x02E8 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              mScrollPosY;                                   // 0x02EC (0x0004) [0x0000000000000000]               
	float                                              mScrollAddY;                                   // 0x02F0 (0x0004) [0x0000000000000000]               
	int32_t                                            mScrollIndex;                                  // 0x02F4 (0x0004) [0x0000000000000000]               
	int32_t                                            mScrollMax;                                    // 0x02F8 (0x0004) [0x0000000000000000]               
	float                                              mGuideOneHeight;                               // 0x02FC (0x0004) [0x0000000000000000]               
	float                                              mScrollBarHeightDisp;                          // 0x0300 (0x0004) [0x0000000000000000]               
	float                                              mScrollBarTop;                                 // 0x0304 (0x0004) [0x0000000000000000]               
	float                                              mScrollBarBottom;                              // 0x0308 (0x0004) [0x0000000000000000]               
	float                                              mScrollMaskTop;                                // 0x030C (0x0004) [0x0000000000000000]               
	float                                              mScrollMaskBottom;                             // 0x0310 (0x0004) [0x0000000000000000]               
	float                                              mScrollHeight;                                 // 0x0314 (0x0004) [0x0000000000000000]               
	float                                              mScrollDispHeight;                             // 0x0318 (0x0004) [0x0000000000000000]               
	float                                              mDispScrollPosY;                               // 0x031C (0x0004) [0x0000000000000000]               
	float                                              mDispScrollAddY;                               // 0x0320 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Mail_Base.BrgSketchbookMailData_Struct
// 0x0019
struct FBrgSketchbookMailData_Struct
{
	class FString                                      mMessage;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mNext;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mPrev;                                         // 0x0014 (0x0004) [0x0000000000000000]               
	uint8_t                                            mType;                                         // 0x0018 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Mail_Base.BrgSketchbookMailData
// 0x0010
struct FBrgSketchbookMailData
{
	TArray<struct FBrgSketchbookMailData_Struct>       mDatas;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_List_Base.UISketchbook_Postit
// 0x0014
struct FUISketchbook_Postit
{
	TArray<struct FUISketchbook_RenderItem>            mItem;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mbSelectEnable : 1;                            // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_List_Base.BrgUISketchbook_SelectGuide
// 0x0014
struct FBrgUISketchbook_SelectGuide
{
	int32_t                                            mIndex;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	class UBrgUIImage*                                 mOnGuide;                                      // 0x0004 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mOffGuide;                                     // 0x000C (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_List_Base.UISketchbook_Detail
// 0x0010
struct FUISketchbook_Detail
{
	TArray<struct FUISketchbook_RenderItem>            mItem;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Catalog.BrgUIMenu_Catalog_Data
// 0x0034
struct FBrgUIMenu_Catalog_Data
{
	class UBrgUIImage*                                 mImage;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mIcon;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	class FString                                      mLoadImagePath;                                // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mLoadIconPath;                                 // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mbUnRead : 1;                                  // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Catalog.BrgUIMenu_Catalog_Index
// 0x0014
struct FBrgUIMenu_Catalog_Index
{
	int32_t                                            mItemNo;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      mImageId;                                      // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Character.SketchbookFighter_Fixeds
// 0x0020
struct FSketchbookFighter_Fixeds
{
	TArray<struct FUIItemInfo>                         mItems;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FUITextInfo>                         mTexts;                                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Character.SketchbookFighter_FixedPages
// 0x0010
struct FSketchbookFighter_FixedPages
{
	TArray<struct FSketchbookFighter_Fixeds>           mFixedDetails;                                 // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Character.SketchbookFighter_TextData
// 0x001C
struct FSketchbookFighter_TextData
{
	class UBrgUIImage*                                 mGuide;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            mType;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      mText;                                         // 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Character.SketchbookFighter_Data
// 0x0240
struct FSketchbookFighter_Data
{
	class FString                                      mName;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Mid;                                           // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbChara                                 mCharacter;                                    // 0x0020 (0x0220) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Character.SketchbookFighter_BattleDatas
// 0x0290
struct FSketchbookFighter_BattleDatas
{
	class FString                                      mName;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mDate;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mResult;                                       // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mAtkDamage;                                    // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mDefDamage;                                    // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mTime;                                         // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mFloor;                                        // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbChara                                 mCharacter;                                    // 0x0070 (0x0220) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Cover.BrgUISketchbookSkillStickerData
// 0x0024
struct FBrgUISketchbookSkillStickerData
{
	struct FBrgDbPsSkill                               Data;                                          // 0x0000 (0x001C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UTexture*                                    Texture;                                       // 0x001C (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Cover.BrgUISketchbookSkillStickerImageData
// 0x002C
struct FBrgUISketchbookSkillStickerImageData
{
	struct FBrgDbEqSkill                               Data;                                          // 0x0000 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage_Stream*                          Image;                                         // 0x0020 (0x0008) [0x0000000000000000]               
	unsigned long                                      Selected : 1;                                  // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Cover.BrgUISketchbookHoldsStickerImageData
// 0x0024
struct FBrgUISketchbookHoldsStickerImageData
{
	struct FBrgDbPsSkill                               Data;                                          // 0x0000 (0x001C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage_Stream*                          Image;                                         // 0x001C (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUISkillStickerCollisionInfo.BrgUIStickerCollisionCircle
// 0x0010
struct FBrgUIStickerCollisionCircle
{
	struct FVector                                     mPosition;                                     // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              mRadius;                                       // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUISkillStickerCollisionInfo.BrgUIStickerCollisionInfo
// 0x0020
struct FBrgUIStickerCollisionInfo
{
	class FString                                      mSkillId;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgUIStickerCollisionCircle>        mCollisions;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Fighter.BrgUIMenu_Sketchbook_Contents_Fighter_Contents
// 0x0010
struct FBrgUIMenu_Sketchbook_Contents_Fighter_Contents
{
	TArray<class UBrgUIMenu_Sketchbook_Contents_Fighter_Base*> mContents;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Fighter_Base.BrgSketchbookFighterGaugeParameter
// 0x000C
struct FBrgSketchbookFighterGaugeParameter
{
	float                                              mValue;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              mMaxValue;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              mMinValue;                                     // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Fighter_Status.BrgSketchbookFighterStatusGaugeColor
// 0x0008
struct FBrgSketchbookFighterStatusGaugeColor
{
	struct FColor                                      mGaugeColor;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              mValue;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Fighter_Status.BrgSketchbookFighterStatusGauge
// 0x0018
struct FBrgSketchbookFighterStatusGauge
{
	float                                              mMinValue;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              mMaxValue;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	TArray<struct FBrgSketchbookFighterStatusGaugeColor> Params;                                        // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Fighter_Base.BrgSketchbookFighterFontSet
// 0x001C
struct FBrgSketchbookFighterFontSet
{
	int32_t                                            mFontType;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	unsigned long                                      mCentering : 1;                                // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FColor                                      mColor;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            mParamScale;                                   // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            mParamAddX;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mParamAddY;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	unsigned long                                      mRighting : 1;                                 // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Fighter_Base.BrgSketchbookFighterText
// 0x0044
struct FBrgSketchbookFighterText
{
	class FString                                      mText;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mGuideBase;                                    // 0x0010 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mGuideSrc;                                     // 0x0018 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mGuideDest;                                    // 0x0020 (0x0008) [0x0000000000000000]               
	struct FBrgSketchbookFighterFontSet                mFont;                                         // 0x0028 (0x001C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Fighter_Base.BrgSketchbookFighterDataParameter
// 0x0018
struct FBrgSketchbookFighterDataParameter
{
	class UBrgUIImage*                                 mGuide;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      mText;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Fighter_Base.BrgSketchbookFighterImage
// 0x0018
struct FBrgSketchbookFighterImage
{
	class UBrgUIImage*                                 mImage;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mGuideSrc;                                     // 0x0008 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mGuideDest;                                    // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Fighter_Base.BrgSketchbookFighterGauge
// 0x0024
struct FBrgSketchbookFighterGauge
{
	struct FBrgSketchbookFighterGaugeParameter         mParam;                                        // 0x0000 (0x000C) [0x0000000000000000]               
	struct FBrgSketchbookFighterImage                  mImage;                                        // 0x000C (0x0018) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Fighter_HunterLog.BrgUIMenu_Sketchbook_Fighter_Hunter_Data
// 0x007C
struct FBrgUIMenu_Sketchbook_Fighter_Hunter_Data
{
	class FString                                      mParam[0x7];                                   // 0x0000 (0x0070) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgSketchbookFighterGaugeParameter         mHpRate;                                       // 0x0070 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Fighter_List.FighterLevelInfo
// 0x019C
struct FFighterLevelInfo
{
	unsigned long                                      mVisible : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mItemIndex;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mOnItemIndex;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	struct FUITextInfo                                 mLvUITextInfo;                                 // 0x000C (0x00C8) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUITextInfo                                 mOnLvUITextInfo;                               // 0x00D4 (0x00C8) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Help.BrgUILayoutData
// 0x0024
struct FBrgUILayoutData
{
	int32_t                                            mLayout;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      mText;                                         // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mPhoto;                                        // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Help.BrgUITutorialInfo
// 0x0028
struct FBrgUITutorialInfo
{
	struct FName                                       mTutorialID;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      mSortID;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgUILayoutData>                    mParas;                                        // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Help.BrgUITutorialMailLineData
// 0x002C
struct FBrgUITutorialMailLineData
{
	int32_t                                            Type;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class UBrgUIImage*                                 guide;                                         // 0x0004 (0x0008) [0x0000000000000000]               
	class FString                                      mData;                                         // 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mImage;                                        // 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Help.BrgUITutorialLocalizeReplacePair
// 0x0020
struct FBrgUITutorialLocalizeReplacePair
{
	class FString                                      mTxt[0x2];                                     // 0x0000 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Help.BrgUITutorialImageReplaceInfo
// 0x0030
struct FBrgUITutorialImageReplaceInfo
{
	class FString                                      mTutorialID;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mSrc;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mDest;                                         // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Help.ScketchBook_Help_Data
// 0x000C
struct FScketchBook_Help_Data
{
	struct FName                                       mTutorialID;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	unsigned long                                      mIsRead : 1;                                   // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUITutorialBalloonInfo.BrgUIBalloonInfo
// 0x0044
struct FBrgUIBalloonInfo
{
	struct FName                                       mBalloonID;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       mTutorialID;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	class FString                                      mFlagID;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mPreFlagID;                                    // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mType;                                         // 0x0030 (0x0004) [0x0000000000000000]               
	class FString                                      mReadFlag;                                     // 0x0034 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_MasterLevel.BrgUISketchbook_MasterLevel_Info
// 0x00C4
struct FBrgUISketchbook_MasterLevel_Info
{
	struct FBrgDbPartArmType                           mArmType;                                      // 0x0000 (0x0084) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbMasterLvl                             mUserData;                                     // 0x0084 (0x001C) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mbAlreadyRead : 1;                             // 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<struct FBrgDbMasterLvlReward>               mReward;                                       // 0x00A4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterLvlRewardType>           mRewardType;                                   // 0x00B4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Memories.BrgMemories_Photo
// 0x0015
struct FBrgMemories_Photo
{
	class UBrgUIImage*                                 mImage;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            mYear;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            mMonth;                                        // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            mday;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            mErrorType;                                    // 0x0014 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Picture_Biologic.BrgUISketchbook_Beast_Info
// 0x0180
struct FBrgUISketchbook_Beast_Info
{
	struct FBrgDbBeast                                 mInfo;                                         // 0x0000 (0x00A4) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbBeastBook                             mUserInfo;                                     // 0x00A4 (0x001C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbBeastEfc                              mcEffect;                                      // 0x00C0 (0x0060) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbBeastEfc                              mrEffect;                                      // 0x0120 (0x0060) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Picture_Mushrooms.BrgUISketchbook_Mushroom_Info
// 0x0268
struct FBrgUISketchbook_Mushroom_Info
{
	struct FBrgDbMushroom                              mInfo;                                         // 0x0000 (0x014C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbMushroomBook                          mUserInfo;                                     // 0x014C (0x001C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbMushroomEfc                           mcEffect;                                      // 0x0168 (0x0080) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbMushroomEfc                           mrEffect;                                      // 0x01E8 (0x0080) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Picture_Stickers.BrgUISketchbook_Sticker_Info
// 0x00E4
struct FBrgUISketchbook_Sticker_Info
{
	struct FBrgDbSkill                                 mInfo;                                         // 0x0000 (0x00C4) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbPsSkill                               mUserInfo;                                     // 0x00C4 (0x001C) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mbNew : 1;                                     // 0x00E0 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Playlog.Sketchbook_Playlog_Item
// 0x0024
struct FSketchbook_Playlog_Item
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      Item;                                          // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Data;                                          // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Questlist.BrgUISketchbook_Quest_Info
// 0x0240
struct FBrgUISketchbook_Quest_Info
{
	struct FBrgDbUserQuest                             mUserData;                                     // 0x0000 (0x009C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbMasterQuest                           mInfo;                                         // 0x009C (0x0180) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbMasterQuestCategory                   mQuestcategory;                                // 0x021C (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mbReceived : 1;                                // 0x023C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mbFinish : 1;                                  // 0x023C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mbClear : 1;                                   // 0x023C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mbEmpty : 1;                                   // 0x023C (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Stamprally.StampLeafletImages
// 0x0010
struct FStampLeafletImages
{
	TArray<class UBrgUIImage*>                         mStampImages;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Stamprally.CloudDataPerBoss
// 0x0030
struct FCloudDataPerBoss
{
	TArray<class UBrgUIImage*>                         DestGuides;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int32_t>                                    ImagesSrcGuidesIndices;                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int32_t>                                    mBossIndex;                                    // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Stamprally.Cloud
// 0x001C
struct FCloud
{
	float                                              LastDirectionChange;                           // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              OffsetX;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              OffsetStep;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              DirectionMultiplier;                           // 0x000C (0x0004) [0x0000000000000000]               
	float                                              PreviousDirection;                             // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Opacity;                                       // 0x0014 (0x0004) [0x0000000000000000]               
	unsigned long                                      IsBossCloud : 1;                               // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Visible : 1;                                   // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Stamprally.CloudInfoPerBoss
// 0x0010
struct FCloudInfoPerBoss
{
	TArray<struct FCloud>                              Clouds;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Stamprally.StampLeaflet
// 0x0020
struct FStampLeaflet
{
	TArray<class UBrgUIImage*>                         Stamps;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int32_t>                                    StampIndices;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_Stamprally.Stamp
// 0x0010
struct FStamp
{
	int32_t                                            PosX;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            PosY;                                          // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            HazamaPosX;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Rotation;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_TalesOfBabrs.BrgUIMenu_TalesOfBarbs_Data
// 0x0038
struct FBrgUIMenu_TalesOfBarbs_Data
{
	class UBrgUIImage*                                 mImage;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mIcon;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	class FString                                      mLoadImagePath;                                // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mLoadIconPath;                                 // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mDataNo;                                       // 0x0030 (0x0004) [0x0000000000000000]               
	unsigned long                                      mbUnRead : 1;                                  // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mbDetail : 1;                                  // 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BrgGame.BrgUIMenu_Sketchbook_Contents_TalesOfBabrs.BrgUIMenu_TalesOfBarbs_Index
// 0x0014
struct FBrgUIMenu_TalesOfBarbs_Index
{
	int32_t                                            mItemNo;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      mImageId;                                      // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_SkillEquip.BrgUIMenu_SkillEquip_SkillList
// 0x0014
struct FBrgUIMenu_SkillEquip_SkillList
{
	unsigned long                                      canPut : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      SkillID;                                       // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_SkillEquip.BrgUIMenu_SkillEquip_SkillDetail
// 0x0020
struct FBrgUIMenu_SkillEquip_SkillDetail
{
	class FString                                      SkillID;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      isPremium : 1;                                 // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class UBrgUIImage_Stream*                          stickerImage;                                  // 0x0014 (0x0008) [0x0000000000000000]               
	unsigned long                                      canPut : 1;                                    // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenuPart_CommonStatus.BrgUIMenuPart_CommonStatus_DispParamInfo
// 0x02E4
struct FBrgUIMenuPart_CommonStatus_DispParamInfo
{
	uint8_t                                            mState;                                        // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              mCounter;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mNum;                                          // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            mSubNum;                                       // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            mAddNum;                                       // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            mMaxNum;                                       // 0x0014 (0x0004) [0x0000000000000000]               
	struct FParamMoveDataD                             mNumMoveData;                                  // 0x0018 (0x015C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FParamMoveDataD                             mAddNumMoveData;                               // 0x0174 (0x015C) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mIsDrawAddNumNegative : 1;                     // 0x02D0 (0x0004) [0x0000000000000000] [0x00000001] 
	class UBrgUIImage*                                 mNumberImage;                                  // 0x02D4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mAddNumberImage;                               // 0x02DC (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_SkillExchange.SkillExchange_GachaProperty
// 0x005C
struct FSkillExchange_GachaProperty
{
	class FString                                      mGachaid;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mIsDeathMetalGacha : 1;                        // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mIsBOXGacha : 1;                               // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            mCost;                                         // 0x0014 (0x0004) [0x0000000000000000]               
	uint8_t                                            mMenuIconId;                                   // 0x0018 (0x0001) [0x0000000000000000]               
	class FString                                      mMenuLabelTextId;                              // 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mConfirmTextId;                                // 0x002C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mType;                                         // 0x003C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           mInspires;                                     // 0x004C (0x0008) [0x0000000000000000]               
	uint64_t                                           mExpires;                                      // 0x0054 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_SkillExchange.SkillExchange_GachaUIInfo
// 0x0020
struct FSkillExchange_GachaUIInfo
{
	class FString                                      mText;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mBase;                                         // 0x0010 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mCursorGuide;                                  // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_SkillExchange.SkillExchange_GachaSkillInfo
// 0x00C8
struct FSkillExchange_GachaSkillInfo
{
	struct FBrgDbSkill                                 mDbSkill;                                      // 0x0000 (0x00C4) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mDisplay_priority;                             // 0x00C4 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_SkillExchange_Banner.SkillExchange_BannerUIRes
// 0x004C
struct FSkillExchange_BannerUIRes
{
	class UBrgUIImage*                                 mBannerGuide;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mTitleTextGuide;                               // 0x0008 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mCommentTextGuide;                             // 0x0010 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mRemainDayTextGuide;                           // 0x0018 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mRemainTimeLabelTextGuide;                     // 0x0020 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mRemainHourTextGuide;                          // 0x0028 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mRemainMinuteTextGuide;                        // 0x0030 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mRemainColonTextGuide;                         // 0x0038 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mBannerFrameGuide;                             // 0x0040 (0x0008) [0x0000000000000000]               
	struct FColor                                      mCommentTextColor;                             // 0x0048 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_SkillExchange_Banner.SkillExchange_BannerRemainTime
// 0x0038
struct FSkillExchange_BannerRemainTime
{
	unsigned long                                      mIsDay : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      mString;                                       // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mHourString;                                   // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mMinuteString;                                 // 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mColonVisibility : 1;                          // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_SkillExchange_Banner.SkillExchange_Banner
// 0x00C4
struct FSkillExchange_Banner
{
	unsigned long                                      mIsSet : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      mUrl;                                          // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mTitle;                                        // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mComment;                                      // 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           mExpire;                                       // 0x0034 (0x0008) [0x0000000000000000]               
	struct FSkillExchange_BannerRemainTime             mRemainTime;                                   // 0x003C (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mRemainTimeDisplay : 1;                        // 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FSkillExchange_BannerUIRes                  mUIRes;                                        // 0x0078 (0x004C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_SkillExchange_BoxGachaLineup.BrgUIMenu_SkillExchange_BoxGachaSkillDetail
// 0x0020
struct FBrgUIMenu_SkillExchange_BoxGachaSkillDetail
{
	class FString                                      SkillID;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            numHave;                                       // 0x0010 (0x0004) [0x0000000000000000]               
	unsigned long                                      IsEnable : 1;                                  // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      isPremium : 1;                                 // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	class UBrgUIImage_Stream*                          stickerImage;                                  // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_SkillExplane.BrgUIMenu_SkillExplane_SkillInfo
// 0x0068
struct FBrgUIMenu_SkillExplane_SkillInfo
{
	class FString                                      mSkillId;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mExplSkillName;                                // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mExplGrade;                                    // 0x0020 (0x0004) [0x0000000000000000]               
	TArray<class FString>                              mExplText;                                     // 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mExplHowGetText;                               // 0x0034 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mExplSkillCategoryName;                        // 0x0044 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage_Stream*                          mExplStickerImage;                             // 0x0054 (0x0008) [0x0000000000000000]               
	unsigned long                                      mExplIsPremium : 1;                            // 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mExplIsHaveGroup : 1;                          // 0x005C (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            mNumHave;                                      // 0x0060 (0x0004) [0x0000000000000000]               
	int32_t                                            mNowPage;                                      // 0x0064 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_SkillVendingMachine.BrgGetStickerInfo
// 0x0018
struct FBrgGetStickerInfo
{
	class FString                                      SkillID;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage_Stream*                          Image;                                         // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_StampMiniGame.BrgUIMenu_StampMiniGame_EffectParam
// 0x00E0
struct FBrgUIMenu_StampMiniGame_EffectParam
{
	float                                              mOffsetY;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	struct FParamMoveData                              mScale;                                        // 0x0004 (0x006C) [0x0000000000000000]               
	struct FParamMoveData                              mOpacity;                                      // 0x0070 (0x006C) [0x0000000000000000]               
	unsigned long                                      mIsPerfect : 1;                                // 0x00DC (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_StampMiniGame.BrgUIMenu_StampMiniGame_TargetParam
// 0x0009
struct FBrgUIMenu_StampMiniGame_TargetParam
{
	int32_t                                            mIndex;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              mOffsetY;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            mState;                                        // 0x0008 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_StampMiniGame.BrgUIMenu_StampMiniGame_MusicParam
// 0x000C
struct FBrgUIMenu_StampMiniGame_MusicParam
{
	int32_t                                            BPM;                                           // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              PerfectAlpha;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              GoodAlpha;                                     // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_StampMiniGame.BrgUIMenu_StampMiniGame_MusicDetailParam
// 0x0010
struct FBrgUIMenu_StampMiniGame_MusicDetailParam
{
	TArray<int32_t>                                    StopIndex;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_StampRallySheetExchanger.BrgUIMenu_StampSheetFloor_Data
// 0x0040
struct FBrgUIMenu_StampSheetFloor_Data
{
	class FString                                      floorName;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      FloorStart;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      FloorEnd;                                      // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            StartNum;                                      // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            EndNum;                                        // 0x0034 (0x0004) [0x0000000000000000]               
	class UBrgUIImage*                                 UIGuide;                                       // 0x0038 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_TengokuMenu.BrgUIMenu_TengokuMenu_Destination
// 0x0018
struct FBrgUIMenu_TengokuMenu_Destination
{
	class FString                                      mText;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mTextGuide;                                    // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_TermsOfService.TermsButtonDrawInfo
// 0x0048
struct FTermsButtonDrawInfo
{
	class FString                                      mText;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mAddOffsetY;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	class UBrgUIImage*                                 mBackground;                                   // 0x0014 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mFrame;                                        // 0x001C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mTextGuide;                                    // 0x0024 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mSrcGuide;                                     // 0x002C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mDestGuide;                                    // 0x0034 (0x0008) [0x0000000000000000]               
	int32_t                                            mItemIndex;                                    // 0x003C (0x0004) [0x0000000000000000]               
	unsigned long                                      mNotCheckDisable : 1;                          // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mCheckedAdjustScale : 1;                       // 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              mAdjustScale;                                  // 0x0044 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_TermsOfService.LineInfo
// 0x001C
struct FLineInfo
{
	class FString                                      Description;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            VirtualStartingHeightInPixels;                 // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            DescriptionHeightInPixels;                     // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              VirtualStartingRatio;                          // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_TermsOfService.TermsEntry
// 0x0024
struct FTermsEntry
{
	class FString                                      Title;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            VirtualStartingHeightInPixels;                 // 0x0010 (0x0004) [0x0000000000000000]               
	TArray<struct FLineInfo>                           Entries;                                       // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Title.ElementInfo
// 0x0038
struct FElementInfo
{
	class UBrgUIImage*                                 Image;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      Description;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LinkAddress;                                   // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            VirtualStartingHeightInPixels;                 // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            DescriptionHeightInPixels;                     // 0x002C (0x0004) [0x0000000000000000]               
	float                                              VirtualStartingRatio;                          // 0x0030 (0x0004) [0x0000000000000000]               
	unsigned long                                      IsImage : 1;                                   // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_Title.NoticeEntry
// 0x0028
struct FNoticeEntry
{
	class FString                                      Title;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            VirtualStartingHeightInPixels;                 // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            TotalHeightInPixels;                           // 0x0014 (0x0004) [0x0000000000000000]               
	TArray<struct FElementInfo>                        Entries;                                       // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenu_Title.QuickJumpEntry
// 0x0008
struct FQuickJumpEntry
{
	int32_t                                            RootIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ChildIndex;                                    // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Title.DrawMaskImagesInfo
// 0x0028
struct UBrgUIMenu_Title_FDrawMaskImagesInfo
{
	class UBrgUIImage*                                 Img;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 SrcGuide;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 DestGuide;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            OffsetX;                                       // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            OffsetY;                                       // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            UseMaskScreen;                                 // 0x0020 (0x0004) [0x0000000000000000]               
	unsigned long                                      bTraceCursor : 1;                              // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_Title.SpriteAnimInfo
// 0x0018
struct UBrgUIMenu_Title_FSpriteAnimInfo
{
	class UBrgUISprite*                                Sprite;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            StartFrameCnt;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            PlayStartFrame;                                // 0x000C (0x0004) [0x0000000000000000]               
	unsigned long                                      bLoop : 1;                                     // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LoopStart;                                     // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Title.ProductInfo
// 0x0040
struct UBrgUIMenu_Title_FProductInfo
{
	class UBrgUIImage*                                 Img;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	struct UBrgUIMenu_Title_FSpriteAnimInfo            SpriteAnim;                                    // 0x0008 (0x0018) [0x0000000000000000]               
	int32_t                                            X;                                             // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            Y;                                             // 0x0024 (0x0004) [0x0000000000000000]               
	unsigned long                                      bUseMask : 1;                                  // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            UseMaskScreen;                                 // 0x002C (0x0004) [0x0000000000000000]               
	float                                              R;                                             // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              G;                                             // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              B;                                             // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              A;                                             // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Title_Product.DrawMaskImagesInfo
// 0x0028
struct UBrgUIMenu_Title_Product_FDrawMaskImagesInfo
{
	class UBrgUIImage*                                 Img;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 SrcGuide;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 DestGuide;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            OffsetX;                                       // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            OffsetY;                                       // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            UseMaskScreen;                                 // 0x0020 (0x0004) [0x0000000000000000]               
	unsigned long                                      bTraceCursor : 1;                              // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_Title_Product.SpriteAnimInfo
// 0x001C
struct UBrgUIMenu_Title_Product_FSpriteAnimInfo
{
	class UBrgUISprite*                                Sprite;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            StartFrameCnt;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            PlayStartFrame;                                // 0x000C (0x0004) [0x0000000000000000]               
	unsigned long                                      bLoop : 1;                                     // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LoopStart;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	unsigned long                                      AutoRelease : 1;                               // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_Title_Product.ProductInfo
// 0x0050
struct UBrgUIMenu_Title_Product_FProductInfo
{
	class UBrgUIImage*                                 Img;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	struct UBrgUIMenu_Title_Product_FSpriteAnimInfo    SpriteAnim;                                    // 0x0008 (0x001C) [0x0000000000000000]               
	int32_t                                            Handle;                                        // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            X;                                             // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            Y;                                             // 0x002C (0x0004) [0x0000000000000000]               
	unsigned long                                      bUseMask : 1;                                  // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            UseMaskScreen;                                 // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              R;                                             // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              G;                                             // 0x003C (0x0004) [0x0000000000000000]               
	float                                              B;                                             // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              A;                                             // 0x0044 (0x0004) [0x0000000000000000]               
	unsigned long                                      AutoHidden : 1;                                // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DeltaCnt;                                      // 0x004C (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Title_Product.MovieInfo
// 0x004C
struct FMovieInfo
{
	class UTextureMovie*                               TexMovie;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class UMaterialInterface*                          Material;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            Handle;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            X;                                             // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            Y;                                             // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            Width;                                         // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            Height;                                        // 0x0020 (0x0004) [0x0000000000000000]               
	unsigned long                                      bUseMask : 1;                                  // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            UseMaskScreen;                                 // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            StartFrameCnt;                                 // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            PlayStartFrame;                                // 0x0030 (0x0004) [0x0000000000000000]               
	unsigned long                                      bLoop : 1;                                     // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      AutoRelease : 1;                               // 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      AutoHidden : 1;                                // 0x0034 (0x0004) [0x0000000000000000] [0x00000004] 
	class FString                                      TexMoviePath;                                  // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bSkipRender : 1;                               // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenu_Title_Product_Easter.EasterBGYLineInfo
// 0x000C
struct FEasterBGYLineInfo
{
	unsigned long                                      bWateReSpawn : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              WateReSpawnTimeCnt;                            // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Y;                                             // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_Title_Product_Easter.EasterConfigParam
// 0x0018
struct FEasterConfigParam
{
	int32_t                                            NumYLineEaster;                                // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            UnderLineEaster;                               // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              FirstRabbitSpawnSecondEaster;                  // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              NextSpawnSecondEaster;                         // 0x000C (0x0004) [0x0000000000000000]               
	float                                              LineSpawSpacingSecondEaster;                   // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              SpawnRateEaster;                               // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_VipCard.BrgVipCard_FontData
// 0x000C
struct FBrgVipCard_FontData
{
	class UBrgUIImage*                                 mImage;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	struct FColor                                      mFontColor;                                    // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenu_VipCard.BrgVipCard_TextData
// 0x0034
struct FBrgVipCard_TextData
{
	class FString                                      mText;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mbNumber : 1;                                  // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mParamIdxScale;                                // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            mParamIdxAddX;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            mParamIdxAddY;                                 // 0x001C (0x0004) [0x0000000000000000]               
	unsigned long                                      mbCentering : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<struct FBrgVipCard_FontData>                mFontData;                                     // 0x0024 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenuPart_ButtonGuide.BrgUIButtonGuideUnit
// 0x00D8
struct FBrgUIButtonGuideUnit
{
	struct FParamMoveData                              mInAlphaRate;                                  // 0x0000 (0x006C) [0x0000000000000000]               
	struct FParamMoveData                              mInPosRate;                                    // 0x006C (0x006C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenuPart_HierarchyMap.BrgUIMenuPart_HierarchyMap_EscalatorConnector
// 0x0020
struct FBrgUIMenuPart_HierarchyMap_EscalatorConnector
{
	class UBrgUIImage*                                 mImageConnector;                               // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     mPosLine;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     mPosIcon;                                      // 0x0014 (0x000C) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenuPart_HierarchyMap.BrgUIMenuPart_HierarchyMap_Indices
// 0x0010
struct FBrgUIMenuPart_HierarchyMap_Indices
{
	TArray<int32_t>                                    mList;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenuPart_HierarchyMap.BrgUIMenuPart_HierarchyMap_AreaEscalator
// 0x00A4
struct FBrgUIMenuPart_HierarchyMap_AreaEscalator
{
	int32_t                                            mFloorIndex;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            mAreaIndex;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mIndex;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	unsigned long                                      mIsUp : 1;                                     // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mFlagIndex;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	struct FBrgDbAreaConnectEscalator                  mMasterData;                                   // 0x0014 (0x0078) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mFound : 1;                                    // 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mGetOn : 1;                                    // 0x008C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mLocked : 1;                                   // 0x008C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mClosed : 1;                                   // 0x008C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mFirstTimeFade : 1;                            // 0x008C (0x0004) [0x0000000000000000] [0x00000010] 
	int32_t                                            mConnectFloorIndex;                            // 0x0090 (0x0004) [0x0000000000000000]               
	int32_t                                            mConnectAreaIndex;                             // 0x0094 (0x0004) [0x0000000000000000]               
	int32_t                                            mConnectEscIndex;                              // 0x0098 (0x0004) [0x0000000000000000]               
	int32_t                                            mEscIndex;                                     // 0x009C (0x0004) [0x0000000000000000]               
	int32_t                                            mColorIndex;                                   // 0x00A0 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenuPart_HierarchyMap.BrgUIMenuPart_HierarchyMap_Area
// 0x0080
struct FBrgUIMenuPart_HierarchyMap_Area
{
	int32_t                                            mFloorIndex;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            mIndex;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mFlagIndex;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      mAreaid;                                       // 0x000C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mFlrid;                                        // 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mFlrno;                                        // 0x002C (0x0004) [0x0000000000000000]               
	class FString                                      mElvflrid;                                     // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mElvColorIndex;                                // 0x0040 (0x0004) [0x0000000000000000]               
	TArray<struct FBrgUIMenuPart_HierarchyMap_AreaEscalator> mDescs;                                        // 0x0044 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mValidDescCount;                               // 0x0054 (0x0004) [0x0000000000000000]               
	TArray<struct FBrgUIMenuPart_HierarchyMap_AreaEscalator> mUescs;                                        // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mValidUescCount;                               // 0x0068 (0x0004) [0x0000000000000000]               
	struct FVector                                     mOfs;                                          // 0x006C (0x000C) [0x0000000000000000]               
	float                                              mFlgOfsx;                                      // 0x0078 (0x0004) [0x0000000000000000]               
	unsigned long                                      mSelected : 1;                                 // 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mUnKnown : 1;                                  // 0x007C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mFirstTime : 1;                                // 0x007C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mElevator : 1;                                 // 0x007C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mBoss : 1;                                     // 0x007C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mBossKill : 1;                                 // 0x007C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      mCorpse : 1;                                   // 0x007C (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      mShop : 1;                                     // 0x007C (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      mExistenceShop : 1;                            // 0x007C (0x0004) [0x0000000000000000] [0x00000100] 
};

// ScriptStruct BrgGame.BrgUIMenuPart_HierarchyMap.BrgUIMenuPart_HierarchyMap_Floor
// 0x0034
struct FBrgUIMenuPart_HierarchyMap_Floor
{
	int32_t                                            mIndex;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      mFlrid;                                        // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mFlrno;                                        // 0x0014 (0x0004) [0x0000000000000000]               
	unsigned long                                      mHub : 1;                                      // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mAreaOfsXMax;                                  // 0x001C (0x0004) [0x0000000000000000]               
	TArray<struct FBrgUIMenuPart_HierarchyMap_Area>    mAreas;                                        // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mHidden : 1;                                   // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mFirstTimeFade : 1;                            // 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BrgGame.BrgUIMenuPart_HierarchyMap.BrgUIMenuPart_HierarchyMap_ElevatorStopFloor
// 0x0010
struct FBrgUIMenuPart_HierarchyMap_ElevatorStopFloor
{
	int32_t                                            mFloorIndex;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            mAreaIndex;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mFlrno;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	unsigned long                                      mCanStop : 1;                                  // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMenuPart_HierarchyMap.BrgUIMenuPart_HierarchyMap_Elevator
// 0x0014
struct FBrgUIMenuPart_HierarchyMap_Elevator
{
	int32_t                                            mColorIndex;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	TArray<struct FBrgUIMenuPart_HierarchyMap_ElevatorStopFloor> mFloors;                                       // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenuPart_HierarchyMap.BrgHierarchyMapIconDescInfo
// 0x0028
struct FBrgHierarchyMapIconDescInfo
{
	class UBrgUIImage*                                 mIcon;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mIconGuide;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mTextGuide;                                    // 0x0010 (0x0008) [0x0000000000000000]               
	class FString                                      mText;                                         // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenuPart_HierarchyMap.BrgHierarchyMapHvnTreasureInfo
// 0x0018
struct FBrgHierarchyMapHvnTreasureInfo
{
	class UBrgUIImage*                                 mFloorTextGuide;                               // 0x0000 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mIconTextGuide;                                // 0x0008 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mIconGuide;                                    // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenuPart_HierarchyMap.BrgUIMenuPart_HierarchyMap_ScaleInfo
// 0x0054
struct FBrgUIMenuPart_HierarchyMap_ScaleInfo
{
	float                                              mDistV;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              mDistH;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     mOrig;                                         // 0x0008 (0x000C) [0x0000000000000000]               
	TArray<class UBrgUIImage*>                         mBgTiles;                                      // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mBgTileW;                                      // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              mBgTileH;                                      // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              mFloorGuideW;                                  // 0x002C (0x0004) [0x0000000000000000]               
	float                                              mFloorGuideH;                                  // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              mFloorGuideOfsBaseX;                           // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              mFloorGuideOfsBaseY;                           // 0x0038 (0x0004) [0x0000000000000000]               
	TArray<class UBrgUIImage*>                         mFloorGuideTiles;                              // 0x003C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mHVNBgTile;                                    // 0x004C (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenuPart_PanelManager2.BrgUIMenuPart_PanelManager2_PanelUnitInfo
// 0x000C
struct FBrgUIMenuPart_PanelManager2_PanelUnitInfo
{
	unsigned long                                      mbUseFlag : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mbFadeOutDelete : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	class UBrgUIMenuPart_Panel2*                       mPanel;                                        // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenuPart_PanelManager2.BrgUIMenuPart_PanelManager2_DescLineInfo
// 0x0014
struct FBrgUIMenuPart_PanelManager2_DescLineInfo
{
	unsigned long                                      mIsCaption : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      mString;                                       // 0x0004 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIMenuPart_PlayerStatus.BrgUIMenuPart_PlayerStatus_ParamLayerInfo
// 0x0058
struct FBrgUIMenuPart_PlayerStatus_ParamLayerInfo
{
	class UBrgUIImage*                                 mIconGuide;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	struct FBrgUIImageWithGuide                        mIconImage;                                    // 0x0008 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mGaugeImage;                                   // 0x0028 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mGaugeRImage;                                  // 0x0030 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mTextMaxImage;                                 // 0x0038 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mTextNumImage;                                 // 0x0040 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mTextParentImage;                              // 0x0048 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mTextAddNumImage;                              // 0x0050 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMenuPart_PlayerStatus.BrgUIMenuPart_PlayerStatus_OneCharaInfo
// 0x043C
struct FBrgUIMenuPart_PlayerStatus_OneCharaInfo
{
	uint8_t                                            mType;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	unsigned long                                      mVisible : 1;                                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FParamMoveData                              mAlpha;                                        // 0x0008 (0x006C) [0x0000000000000000]               
	unsigned long                                      mInfoNone : 1;                                 // 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	class ABrgUIActor_Chara_Base*                      mCharacter;                                    // 0x0078 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mPlayerImage;                                  // 0x0080 (0x0008) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mPlayerImageSubRT;                             // 0x0088 (0x0008) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mPlayerImageRT;                                // 0x0090 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mPlayerImageSub;                               // 0x0098 (0x0008) [0x0000000000000000]               
	unsigned long                                      mPlayerImageCaptureDelayEnable : 1;            // 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mPlayerImageCaptureDelay;                      // 0x00A4 (0x0004) [0x0000000000000000]               
	unsigned long                                      mPlayerImageVisible : 1;                       // 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FParamMoveData                              mPlayerImageVisibleAlpha;                      // 0x00AC (0x006C) [0x0000000000000000]               
	class ASceneCapture2DActor*                        mCaptureActor;                                 // 0x0118 (0x0008) [0x0000000000000000]               
	int32_t                                            mCapterCounter;                                // 0x0120 (0x0004) [0x0000000000000000]               
	class ATargetPoint*                                mBaseTargetPoint;                              // 0x0124 (0x0008) [0x0000000000000000]               
	struct FBrgUIFighterStatus                         mDrawInfo;                                     // 0x012C (0x0278) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mGuideImage;                                   // 0x03A4 (0x0008) [0x0000000000000000]               
	struct FVector                                     mNowPosition;                                  // 0x03AC (0x000C) [0x0000000000000000]               
	struct FParamMoveData                              mPosition;                                     // 0x03B8 (0x006C) [0x0000000000000000]               
	unsigned long                                      mNextGuideImageValid : 1;                      // 0x0424 (0x0004) [0x0000000000000000] [0x00000001] 
	class UBrgUIImage*                                 mNextGuideImage;                               // 0x0428 (0x0008) [0x0000000000000000]               
	unsigned long                                      mNextTypeValid : 1;                            // 0x0430 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            mNextType;                                     // 0x0434 (0x0001) [0x0000000000000000]               
	unsigned long                                      mbArmorSkinEnable : 1;                         // 0x0438 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct BrgGame.BrgUIMiniMapManager.BrgUIMiniMapManagerSprayObject
// 0x001C
struct FBrgUIMiniMapManagerSprayObject
{
	int32_t                                            mCellId;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            mInnerGridPosX;                                // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            mInnerGridPosY;                                // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            mLifeTime;                                     // 0x000C (0x0004) [0x0000000000000000]               
	float                                              mOffsetX;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              mOffsetY;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              mScale;                                        // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIMiniMapManager.BrgUIMiniMapCellInfo
// 0x002C
struct FBrgUIMiniMapCellInfo
{
	unsigned long                                      mIsFarCell : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       mLevelName;                                    // 0x0004 (0x0008) [0x0000000000000000]               
	struct FVector                                     mLocationOffset;                               // 0x000C (0x000C) [0x0000000000000000]               
	int32_t                                            mRotation;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	TArray<float>                                      mGridArrivedRates;                             // 0x001C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUIPopUp_Damage.BrgUIPopUp_StringInfo
// 0x029C
struct FBrgUIPopUp_StringInfo
{
	unsigned long                                      mDrawWidthValid : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mDrawWidth;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	class FString                                      mDrawString;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mChar[0x20];                                   // 0x0018 (0x0200) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mCharWidth[0x20];                              // 0x0218 (0x0080) [0x0000000000000000]               
	int32_t                                            mCharNum;                                      // 0x0298 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIPopUp_Damage.BrgUIPopUp_DamageUnit
// 0x0344
struct FBrgUIPopUp_DamageUnit
{
	unsigned long                                      mUseFlag : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FBrgUIPopUp_StringInfo                      mString;                                       // 0x0004 (0x029C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mDamageColorType;                              // 0x02A0 (0x0001) [0x0000000000000000]               
	class ABrgPawn_BaseNative*                         mTargetPawn;                                   // 0x02A4 (0x0008) [0x0000000000000000]               
	uint8_t                                            mState;                                        // 0x02AC (0x0001) [0x0000000000000000]               
	float                                              mCounter;                                      // 0x02B0 (0x0004) [0x0000000000000000]               
	struct FParamMoveData                              mVisibleAlpha;                                 // 0x02B4 (0x006C) [0x0000000000000000]               
	struct FVector                                     mPosition;                                     // 0x0320 (0x000C) [0x0000000000000000]               
	struct FVector                                     mAddPosition;                                  // 0x032C (0x000C) [0x0000000000000000]               
	int32_t                                            mNum;                                          // 0x0338 (0x0004) [0x0000000000000000]               
	float                                              m3DScale;                                      // 0x033C (0x0004) [0x0000000000000000]               
	unsigned long                                      mCritical : 1;                                 // 0x0340 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mCounterAttack : 1;                            // 0x0340 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mHeadShot : 1;                                 // 0x0340 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct BrgGame.BrgUIPopUp_Duration.BrgUIPopUp_DurationUnit
// 0x0341
struct FBrgUIPopUp_DurationUnit
{
	unsigned long                                      mUseFlag : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class ABrgPawn_BaseNative*                         mTargetPawn;                                   // 0x0004 (0x0008) [0x0000000000000000]               
	uint8_t                                            mState;                                        // 0x000C (0x0001) [0x0000000000000000]               
	float                                              mCounter;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	struct FParamMoveData                              mVisibleAlpha;                                 // 0x0014 (0x006C) [0x0000000000000000]               
	struct FVector                                     mPosition;                                     // 0x0080 (0x000C) [0x0000000000000000]               
	struct FVector                                     mAddPosition;                                  // 0x008C (0x000C) [0x0000000000000000]               
	int32_t                                            mNum;                                          // 0x0098 (0x0004) [0x0000000000000000]               
	struct FBrgUIPopUp_StringInfo                      mString;                                       // 0x009C (0x029C) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      mPaused : 1;                                   // 0x0338 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mResumeRequested : 1;                          // 0x0338 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              mAlphaTime;                                    // 0x033C (0x0004) [0x0000000000000000]               
	uint8_t                                            mColorCode;                                    // 0x0340 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIPopUp_GetExp.BrgUIPopUp_GetExpUnit
// 0x0339
struct FBrgUIPopUp_GetExpUnit
{
	unsigned long                                      mUseFlag : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class ABrgPawn_BaseNative*                         mTargetPawn;                                   // 0x0004 (0x0008) [0x0000000000000000]               
	uint8_t                                            mState;                                        // 0x000C (0x0001) [0x0000000000000000]               
	float                                              mCounter;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	struct FParamMoveData                              mVisibleAlpha;                                 // 0x0014 (0x006C) [0x0000000000000000]               
	struct FVector                                     mPosition;                                     // 0x0080 (0x000C) [0x0000000000000000]               
	struct FVector                                     mAddPosition;                                  // 0x008C (0x000C) [0x0000000000000000]               
	int32_t                                            mNum;                                          // 0x0098 (0x0004) [0x0000000000000000]               
	struct FBrgUIPopUp_StringInfo                      mString;                                       // 0x009C (0x029C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mType;                                         // 0x0338 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUIPopUp_Recovery.BrgUIPopUp_RecoveryUnit
// 0x0339
struct FBrgUIPopUp_RecoveryUnit
{
	unsigned long                                      mUseFlag : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class ABrgPawn_BaseNative*                         mTargetPawn;                                   // 0x0004 (0x0008) [0x0000000000000000]               
	uint8_t                                            mState;                                        // 0x000C (0x0001) [0x0000000000000000]               
	float                                              mCounter;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	struct FParamMoveData                              mVisibleAlpha;                                 // 0x0014 (0x006C) [0x0000000000000000]               
	struct FVector                                     mPosition;                                     // 0x0080 (0x000C) [0x0000000000000000]               
	struct FVector                                     mAddPosition;                                  // 0x008C (0x000C) [0x0000000000000000]               
	int32_t                                            mNum;                                          // 0x0098 (0x0004) [0x0000000000000000]               
	struct FBrgUIPopUp_StringInfo                      mString;                                       // 0x009C (0x029C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mSubject;                                      // 0x0338 (0x0001) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgUISkillStickerOutLineInfo.BrgUIOutLineInfo
// 0x0020
struct FBrgUIOutLineInfo
{
	class FString                                      mSkillId;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mPositions;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUserData.BrgDbUserArmorSkinLocal
// 0x0020
struct FBrgDbUserArmorSkinLocal
{
	class FString                                      mType;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mPtid;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgUserData.BrgDbUserPartResearchSet
// 0x0010
struct FBrgDbUserPartResearchSet
{
	struct FArray_Mirror                               mSet;                                          // 0x0000 (0x0010) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct BrgGame.BrgVolume_Damage.BrgDamageVolume_TargetInfo
// 0x000C
struct FBrgDamageVolume_TargetInfo
{
	class AActor*                                      TargetActor;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              TimeCnt;                                       // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgVolume_StatusAilment.BrgPoisonTarget
// 0x000C
struct FBrgPoisonTarget
{
	class ABrgPawn_Base*                               Target;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              TimeCnt;                                       // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgWarManager.BrgWarInfoData
// 0x0038
struct FBrgWarInfoData
{
	class FString                                      mTeamId0;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mTeamId1;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           mStarttime;                                    // 0x0020 (0x0008) [0x0000000000000000]               
	uint64_t                                           mPeriodTime;                                   // 0x0028 (0x0008) [0x0000000000000000]               
	uint64_t                                           mRemainTime;                                   // 0x0030 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgWarManager.BrgWarInfo
// 0x0040
struct FBrgWarInfo
{
	struct FName                                       mWarId;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	struct FBrgWarInfoData                             mData;                                         // 0x0008 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgWarMonitor.BrgWarMonitorTeamInfo
// 0x0030
struct FBrgWarMonitorTeamInfo
{
	class FString                                      Mid;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mName;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mEmblemID;                                     // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct BrgGame.BrgWarMonitor.BrgWarMonitorWarInfo
// 0x0068
struct FBrgWarMonitorWarInfo
{
	struct FBrgWarMonitorTeamInfo                      mTeam[0x2];                                    // 0x0000 (0x0060) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           mRemainTime;                                   // 0x0060 (0x0008) [0x0000000000000000]               
};

// ScriptStruct BrgGame.BrgWeapon_Base.BrgWeaponAttackIdReplaceInfo
// 0x0030
struct FBrgWeaponAttackIdReplaceInfo
{
	class FString                                      WeaponPartId;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      AttackID;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ReplaceAttackID;                               // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
