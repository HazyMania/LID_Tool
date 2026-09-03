/*
#############################################################################################
# LET IT DIE (5.0.1.0) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: GHMEngine_classes.hpp
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

#define CONST_MaxDeviceSelectorUIDelayTime                      1
#define CONST_GHM_DebugMenuItemList_LR_Step                     4
#define CONST_DOUBLE_BUFFER_SIZE                                0
#define CONST_MP3_SAMPLESIZE                                    1
#define CONST_MP3_STRMAX                                        1

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GHMEngine.GHM_AudioDspFXChain.EGHM_AudioDspFXLevel
enum class EGHM_AudioDspFXLevel : uint8_t
{
	EGHM_AudioDspFXLevel_Bus                           = 0,
	EGHM_AudioDspFXLevel_Master                        = 1,
	EGHM_AudioDspFXLevel_END                           = 2
};

// Enum GHMEngine.GHM_BreakableObject.BreakActorType
enum class EBreakActorType : uint8_t
{
	BA_RIGIDBODY                                       = 0,
	BA_STATIC                                          = 1,
	BA_BREAKABLE                                       = 2,
	BA_END                                             = 3
};

// Enum GHMEngine.GHM_CheckPointSubSystem.ECheckpointState
enum class ECheckpointState : uint8_t
{
	Checkpoint_Default                                 = 0,
	Checkpoint_LoadingDelay                            = 1,
	Checkpoint_Load                                    = 2,
	Checkpoint_Save                                    = 3,
	Checkpoint_WriteToStorage                          = 4,
	Checkpoint_LoadGameSettings                        = 5,
	Checkpoint_SaveGameSettings                        = 6,
	Checkpoint_WaitMessage                             = 7,
	Checkpoint_WaitExternalUI                          = 8,
	Checkpoint_SaveStorageDeviceSelect                 = 9,
	Checkpoint_LoadStorageDeviceSelect                 = 10,
	Checkpoint_StorageDeviceChangeWarningDisp          = 11,
	Checkpoint_InsufficientStorageDeviceNoSaveDisp     = 12,
	Checkpoint_InvalidStorageDeviceNoSaveDisp          = 13,
	Checkpoint_StorageDeviceChangeOverwriteDisp        = 14,
	Checkpoint_SaveErrorDeviceChangeNoSaveDisp         = 15,
	Checkpoint_CorruptSaveDataNoSaveDisp               = 16,
	ECheckpointState_Max                               = 17
};

// Enum GHMEngine.GHM_CheckPointSubSystem.ESaveDataStatus
enum class ESaveDataStatus : uint8_t
{
	ESaveDataStatus_Invalid                            = 0,
	ESaveDataStatus_Corrupt                            = 1,
	ESaveDataStatus_Valid                              = 2,
	ESaveDataStatus_END                                = 3
};

// Enum GHMEngine.GHM_DebugTypes.BTNSTATE
enum class EBTNSTATE : uint8_t
{
	BTN_DOWN                                           = 0,
	BTN_UP                                             = 1,
	BTN_END                                            = 2
};

// Enum GHMEngine.GHM_DebugDrawManager.GHMDebugDrawType
enum class EGHMDebugDrawType : uint8_t
{
	GHMDebugDrawType_Line                              = 0,
	GHMDebugDrawType_Point                             = 1,
	GHMDebugDrawType_Box                               = 2,
	GHMDebugDrawType_Star                              = 3,
	GHMDebugDrawType_CoordinateSystem                  = 4,
	GHMDebugDrawType_Sphere                            = 5,
	GHMDebugDrawType_Cylinder                          = 6,
	GHMDebugDrawType_Cone                              = 7,
	GHMDebugDrawType_Text                              = 8,
	GHMDebugDrawType_END                               = 9
};

// Enum GHMEngine.GHM_DebugMenuItemBool.GDM_SWITCHTYPE
enum class EGDM_SWITCHTYPE : uint8_t
{
	SWITCHTYPE_DEF                                     = 0,
	SWITCHTYPE_TRUEONLY                                = 1,
	SWITCHTYPE_FALSEONLY                               = 2,
	SWITCHTYPE_END                                     = 3
};

// Enum GHMEngine.GHM_DebugMenuItemList.GHM_DebugMenuListType
enum class EGHM_DebugMenuListType : uint8_t
{
	GHM_DMLTYPE_INT                                    = 0,
	GHM_DMLTYPE_FLOAT                                  = 1,
	GHM_DMLTYPE_END                                    = 2
};

// Enum GHMEngine.GHM_Engine_SharedTypes.GHM_EFadeType
enum class EGHM_EFadeType : uint8_t
{
	FADE_SCALE                                         = 0,
	FADE_PARAMETER                                     = 1,
	FADE_SCREENDOOR                                    = 2,
	FADE_NONE                                          = 3,
	FADE_END                                           = 4
};

// Enum GHMEngine.GHM_GameInfo.EGHM_WindAnimState
enum class EGHM_WindAnimState : uint8_t
{
	EGHM_WindAnimState_Idle                            = 0,
	EGHM_WindAnimState_In                              = 1,
	EGHM_WindAnimState_Sustain                         = 2,
	EGHM_WindAnimState_Out                             = 3,
	EGHM_WindAnimState_END                             = 4
};

// Enum GHMEngine.GHM_InterpTrackCollision.ECollisionTrackAction
enum class ECollisionTrackAction : uint8_t
{
	ECollisionTrack_DisableCollision                   = 0,
	ECollisionTrack_EnableCollision                    = 1,
	ECollisionTrack_END                                = 2
};

// Enum GHMEngine.GHM_MaterialExpressionNormalFromSpecialMaskTexture.EGHMMaterialSpace
enum class EGHMMaterialSpace : uint8_t
{
	EGHM_MaterialNormalSpace_World                     = 0,
	EGHM_MaterialNormalSpace_View                      = 1,
	EGHM_MaterialNormalSpace_END                       = 2
};

// Enum GHMEngine.GHM_MessageBoard.GHM_MESSAGE_POS_TYPE
enum class EGHM_MESSAGE_POS_TYPE : uint8_t
{
	GHM_MESSPOSTYPE_LEFT                               = 0,
	GHM_MESSPOSTYPE_CENTER                             = 1,
	GHM_MESSPOSTYPE_RIGHT                              = 2,
	GHM_MESSPOSTYPE_END                                = 3
};

// Enum GHMEngine.GHM_MessageBoard.GHM_MESSAGE_DRAW_TYPE
enum class EGHM_MESSAGE_DRAW_TYPE : uint8_t
{
	GHM_MESSTYPE_WORD                                  = 0,
	GHM_MESSTYPE_LINE                                  = 1,
	GHM_MESSTYPE_STRING                                = 2,
	GHM_MESSTYPE_END                                   = 3
};

// Enum GHMEngine.GHM_PhysicalMaterialProperty.GHM_MaterialTypeSEList
enum class EGHM_MaterialTypeSEList : uint8_t
{
	MtSe_None                                          = 0,
	MtSe_Run                                           = 1,
	MtSe_Walk                                          = 2,
	MtSe_END                                           = 3
};

// Enum GHMEngine.GHM_PhysicalMaterialProperty.GHM_MaterialTypeEffList
enum class EGHM_MaterialTypeEffList : uint8_t
{
	MtEff_None                                         = 0,
	MtEff_Run                                          = 1,
	MtEff_Walk                                         = 2,
	MtEff_END                                          = 3
};

// Enum GHMEngine.GHM_PlayerInput.EGHM_PadDef
enum class EGHM_PadDef : uint8_t
{
	GHM_PAD_UP                                         = 0,
	GHM_PAD_DOWN                                       = 1,
	GHM_PAD_LEFT                                       = 2,
	GHM_PAD_RIGHT                                      = 3,
	GHM_PAD_A                                          = 4,
	GHM_PAD_B                                          = 5,
	GHM_PAD_X                                          = 6,
	GHM_PAD_Y                                          = 7,
	GHM_PAD_L_SHOULDER                                 = 8,
	GHM_PAD_R_SHOULDER                                 = 9,
	GHM_PAD_L_TRIGGER                                  = 10,
	GHM_PAD_R_TRIGGER                                  = 11,
	GHM_PAD_L_THUMBSTICK                               = 12,
	GHM_PAD_R_THUMBSTICK                               = 13,
	GHM_PAD_START                                      = 14,
	GHM_PAD_BACK                                       = 15,
	GHM_PAD_END                                        = 16
};

// Enum GHMEngine.GHM_PlayerInput.EBrgKey_UILinkDef
enum class EBrgKey_UILinkDef : uint8_t
{
	EBrgKey_UILinkDef_A                                = 0,
	EBrgKey_UILinkDef_B                                = 1,
	EBrgKey_UILinkDef_X                                = 2,
	EBrgKey_UILinkDef_Y                                = 3,
	EBrgKey_UILinkDef_Up                               = 4,
	EBrgKey_UILinkDef_Left                             = 5,
	EBrgKey_UILinkDef_Right                            = 6,
	EBrgKey_UILinkDef_Down                             = 7,
	EBrgKey_UILinkDef_L1                               = 8,
	EBrgKey_UILinkDef_L2                               = 9,
	EBrgKey_UILinkDef_L3                               = 10,
	EBrgKey_UILinkDef_R1                               = 11,
	EBrgKey_UILinkDef_R2                               = 12,
	EBrgKey_UILinkDef_R3                               = 13,
	EBrgKey_UILinkDef_Num                              = 14,
	EBrgKey_UILinkDef_END                              = 15
};

// Enum GHMEngine.GHM_PlayerInput.EBrgKeyConfig_KeyLinkDef
enum class EBrgKeyConfig_KeyLinkDef : uint8_t
{
	EBrgKeyConfig_KeyLinkDef_Move_Up                   = 0,
	EBrgKeyConfig_KeyLinkDef_Move_Left                 = 1,
	EBrgKeyConfig_KeyLinkDef_Move_Right                = 2,
	EBrgKeyConfig_KeyLinkDef_Move_Down                 = 3,
	EBrgKeyConfig_KeyLinkDef_Slow                      = 4,
	EBrgKeyConfig_KeyLinkDef_Dash                      = 5,
	EBrgKeyConfig_KeyLinkDef_Jump                      = 6,
	EBrgKeyConfig_KeyLinkDef_Guard                     = 7,
	EBrgKeyConfig_KeyLinkDef_Gore                      = 8,
	EBrgKeyConfig_KeyLinkDef_ChangeL                   = 9,
	EBrgKeyConfig_KeyLinkDef_ChangeR                   = 10,
	EBrgKeyConfig_KeyLinkDef_ShiftItemL                = 11,
	EBrgKeyConfig_KeyLinkDef_ShiftItemR                = 12,
	EBrgKeyConfig_KeyLinkDef_AttackL                   = 13,
	EBrgKeyConfig_KeyLinkDef_AttackL_Sub               = 14,
	EBrgKeyConfig_KeyLinkDef_AttackR                   = 15,
	EBrgKeyConfig_KeyLinkDef_AttackR_Sub               = 16,
	EBrgKeyConfig_KeyLinkDef_Inatract                  = 17,
	EBrgKeyConfig_KeyLinkDef_Eat                       = 18,
	EBrgKeyConfig_KeyLinkDef_Throw                     = 19,
	EBrgKeyConfig_KeyLinkDef_Excite                    = 20,
	EBrgKeyConfig_KeyLinkDef_Camera                    = 21,
	EBrgKeyConfig_KeyLinkDef_Target                    = 22,
	EBrgKeyConfig_KeyLinkDef_Option                    = 23,
	EBrgKeyConfig_KeyLinkDef_Map                       = 24,
	EBrgKeyConfig_KeyLinkDef_TargetChange              = 25,
	EBrgKeyConfig_KeyLinkDef_Num                       = 26,
	EBrgKeyConfig_KeyLinkDef_END                       = 27
};

// Enum GHMEngine.GHM_PlayerInput.EBrgKeyConfig_Links
enum class EBrgKeyConfig_Links : uint8_t
{
	EBrgKeyConfig_Links_Custum_A                       = 0,
	EBrgKeyConfig_Links_Custum_B                       = 1,
	EBrgKeyConfig_Links_Custum_C                       = 2,
	EBrgKeyConfig_Links_Custum_D                       = 3,
	EBrgKeyConfig_Links_Custum_E                       = 4,
	EBrgKeyConfig_Links_Custum_F                       = 5,
	EBrgKeyConfig_Links_Custum_G                       = 6,
	EBrgKeyConfig_Links_Custum_H                       = 7,
	EBrgKeyConfig_Links_Custum_I                       = 8,
	EBrgKeyConfig_Links_Custum_J                       = 9,
	EBrgKeyConfig_Links_Up                             = 10,
	EBrgKeyConfig_Links_Down                           = 11,
	EBrgKeyConfig_Links_Left                           = 12,
	EBrgKeyConfig_Links_Right                          = 13,
	EBrgKeyConfig_Links_L_THumbStick                   = 14,
	EBrgKeyConfig_Links_R_THumbStick                   = 15,
	EBrgKeyConfig_Links_END                            = 16
};

// Enum GHMEngine.GHM_PlayerInput.EGHM_MouseDef
enum class EGHM_MouseDef : uint8_t
{
	EGHM_MouseDef_ClickL                               = 0,
	EGHM_MouseDef_ClickL_Shift                         = 1,
	EGHM_MouseDef_ClickR                               = 2,
	EGHM_MouseDef_ClickR_Shift                         = 3,
	EGHM_MouseDef_ClickC                               = 4,
	EGHM_MouseDef_Wheel_Up                             = 5,
	EGHM_MouseDef_Wheel_Down                           = 6,
	EGHM_MouseDef_Move                                 = 7,
	EGHM_MouseDef_ClickEx1                             = 8,
	EGHM_MouseDef_ClickEx2                             = 9,
	EGHM_MouseDef_None                                 = 10,
	EGHM_MouseDef_END                                  = 11
};

// Enum GHMEngine.GHM_PlayerInput.EGHM_PadDefEx
enum class EGHM_PadDefEx : uint8_t
{
	GHM_PAD_EX_L_STICK_UP                              = 0,
	GHM_PAD_EX_L_STICK_DOWN                            = 1,
	GHM_PAD_EX_L_STICK_LEFT                            = 2,
	GHM_PAD_EX_L_STICK_RIGHT                           = 3,
	GHM_PAD_EX_L_STICK_SOFT                            = 4,
	GHM_PAD_EX_R_STICK_UP                              = 5,
	GHM_PAD_EX_R_STICK_DOWN                            = 6,
	GHM_PAD_EX_R_STICK_LEFT                            = 7,
	GHM_PAD_EX_R_STICK_RIGHT                           = 8,
	GHM_PAD_EX_END                                     = 9
};

// Enum GHMEngine.GHM_SeqAct_DspFXChain.EGHM_DspFX_Type
enum class EGHM_DspFX_Type : uint8_t
{
	EGHM_DspFX_Type_Tremolo                            = 0,
	EGHM_DspFX_Type_Distortion                         = 1,
	EGHM_DspFX_Type_RingModulation                     = 2,
	EGHM_DspFX_Type_Chorus                             = 3,
	EGHM_DspFX_Type_TapDelay                           = 4,
	EGHM_DspFX_Type_END                                = 5
};

// Enum GHMEngine.GHM_SeqAct_DspFXChain.EGHM_DspFXChain_In
enum class EGHM_DspFXChain_In : uint8_t
{
	EGHM_DspFXChain_In_Enable                          = 0,
	EGHM_DspFXChain_In_Disable                         = 1,
	EGHM_DspFXChain_In_ToggleEffect                    = 2,
	EGHM_DspFXChain_In_SetEffectParameter              = 3,
	EGHM_DspFXChain_In_ChainId                         = 4,
	EGHM_DspFXChain_In_END                             = 5
};

// Enum GHMEngine.GHM_SeqAct_DspFXChain.EGHM_DspFXChain_Out
enum class EGHM_DspFXChain_Out : uint8_t
{
	EGHM_DspFXChain_Out_DummyOut                       = 0,
	EGHM_DspFXChain_Out_END                            = 1
};

// Enum GHMEngine.GHM_SeqAct_DspFXChain.EGHM_DspFXChain_Vars
enum class EGHM_DspFXChain_Vars : uint8_t
{
	EGHM_DspFXChain_Vars_SelectedEffect                = 0,
	EGHM_DspFXChain_Vars_SelectedParam                 = 1,
	EGHM_DspFXChain_Vars_SelectedFloatValue            = 2,
	EGHM_DspFXChain_Vars_SelectedIntValue              = 3,
	EGHM_DspFXChain_Vars_END                           = 4
};

// Enum GHMEngine.GHM_SeqAct_PlaySoundMarker.EGHM_SoundMarkerAction_Mode
enum class EGHM_SoundMarkerAction_Mode : uint8_t
{
	EGHM_SoundMarkerAction_Mode_Automatic              = 0,
	EGHM_SoundMarkerAction_Mode_Manual                 = 1,
	EGHM_SoundMarkerAction_Mode_Hybrid                 = 2,
	EGHM_SoundMarkerAction_Mode_END                    = 3
};

// Enum GHMEngine.GHM_SeqAct_PlaySoundMarker.EGHM_SoundMarkerAction_Variable
enum class EGHM_SoundMarkerAction_Variable : uint8_t
{
	EGHM_SoundMarkerAction_Variable_SelectedTrackIndex = 0,
	EGHM_SoundMarkerAction_Variable_SelectedOffsetMarkerLabel = 1,
	EGHM_SoundMarkerAction_Variable_SelectedEndMarkerLabel = 2,
	EGHM_SoundMarkerAction_Variable_CurrentUseMode     = 3,
	EGHM_SoundMarkerAction_Variable_bIgnoreFade        = 4,
	EGHM_SoundMarkerAction_Variable_bActionStateSetter = 5,
	EGHM_SoundMarkerAction_Variable_SelectedActionName = 6,
	EGHM_SoundMarkerAction_Variable_LastMarkerFoundName = 7,
	EGHM_SoundMarkerAction_Variable_END                = 8
};

// Enum GHMEngine.GHM_SeqAct_PlaySoundMarker.EGHM_SoundMarkerAction_In
enum class EGHM_SoundMarkerAction_In : uint8_t
{
	EGHM_SoundMarkerAction_In_PerformAction            = 0,
	EGHM_SoundMarkerAction_In_SetActionState           = 1,
	EGHM_SoundMarkerAction_In_OverrideNextAction       = 2,
	EGHM_SoundMarkerAction_In_Play                     = 3,
	EGHM_SoundMarkerAction_In_Stop                     = 4,
	EGHM_SoundMarkerAction_In_FadeIn                   = 5,
	EGHM_SoundMarkerAction_In_FadeOut                  = 6,
	EGHM_SoundMarkerAction_In_Pause                    = 7,
	EGHM_SoundMarkerAction_In_UnPause                  = 8,
	EGHM_SoundMarkerAction_In_Jump                     = 9,
	EGHM_SoundMarkerAction_In_SwitchTrack              = 10,
	EGHM_SoundMarkerAction_In_MuteTrack                = 11,
	EGHM_SoundMarkerAction_In_SwapVolumes              = 12,
	EGHM_SoundMarkerAction_In_Jump_SampleAccurate      = 13,
	EGHM_SoundMarkerAction_In_SwitchTrack_SampleAccurate = 14,
	EGHM_SoundMarkerAction_In_END                      = 15
};

// Enum GHMEngine.GHM_SeqAct_PlaySoundMarker.EGHM_SoundMarkerAction_Out
enum class EGHM_SoundMarkerAction_Out : uint8_t
{
	EGHM_SoundMarkerAction_Out_Play                    = 0,
	EGHM_SoundMarkerAction_Out_Stop                    = 1,
	EGHM_SoundMarkerAction_Out_Fade                    = 2,
	EGHM_SoundMarkerAction_Out_Pause                   = 3,
	EGHM_SoundMarkerAction_Out_Jump                    = 4,
	EGHM_SoundMarkerAction_Out_Switch                  = 5,
	EGHM_SoundMarkerAction_Out_Mute                    = 6,
	EGHM_SoundMarkerAction_Out_MarkerFound             = 7,
	EGHM_SoundMarkerAction_Out_END                     = 8
};

// Enum GHMEngine.GHM_SoundManager.EParameterControl_Type
enum class EParameterControl_Type : uint8_t
{
	EParameterControl_Type_Pitch                       = 0,
	EParameterControl_Type_Volume                      = 1,
	EParameterControl_Type_Pan                         = 2,
	EParameterControl_Type_END                         = 3
};

// Enum GHMEngine.GHM_SoundManager.ESurroundFormatMode
enum class ESurroundFormatMode : uint8_t
{
	ESURROUND_FORMAT_MODE_PC                           = 0,
	ESURROUND_FORMAT_MODE_DOLBY_DIGITAL                = 1,
	ESURROUND_FORMAT_MODE_DOLBY_PROLOGIC2              = 2,
	ESURROUND_FORMAT_MODE_LPCM                         = 3,
	ESURROUND_FORMAT_MODE_DTS                          = 4,
	ESURROUND_FORMAT_MODE_END                          = 5
};

// Enum GHMEngine.GHM_SeqAct_ToggleRadioFilterForMusic.GHM_SeqAct_ToggleRadioFilterForMusic_InputCode
enum class EGHM_SeqAct_ToggleRadioFilterForMusic_InputCode : uint8_t
{
	GHM_SeqAct_ToggleRadioFilterForMusic_InputCode_On  = 0,
	GHM_SeqAct_ToggleRadioFilterForMusic_InputCode_Off = 1,
	GHM_SeqAct_ToggleRadioFilterForMusic_InputCode_Max = 2
};

// Enum GHMEngine.GHM_SkelControlRopeWithEffector.GHM_RopeEffectorType
enum class EGHM_RopeEffectorType : uint8_t
{
	GHMR_Sphere                                        = 0,
	GHMR_Plane                                         = 1,
	GHMR_END                                           = 2
};

// Enum GHMEngine.GHM_SkelControlTrailWithEffector.GHM_EffectorType
enum class EGHM_EffectorType : uint8_t
{
	GHM_Sphere                                         = 0,
	GHM_Capsule                                        = 1,
	GHM_END                                            = 2
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GHMEngine.GHM_ActorFactoryAmbientSoundMovable
// 0x0000 (0x00A4 - 0x00A4)
class UGHM_ActorFactoryAmbientSoundMovable : public UActorFactoryAmbientSoundMovable
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_ActorFactoryAmbientSoundMovable");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_AutoTestManager
// 0x0010 (0x0340 - 0x0350)
class AGHM_AutoTestManager : public AAutoTestManager
{
public:
	unsigned long                                      m_bPerfCheck : 1;                              // 0x0340 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fMemLeakCheckIntervalTimer;                  // 0x0344 (0x0004) [0x0000000000000000]               
	float                                              m_fMemLeakCheckIntervalSeconds;                // 0x0348 (0x0004) [0x0000000000000000]               
	float                                              m_fDoTimeBasedSentinelStatGatheringIntervalSeconds;// 0x034C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AutoTestManager");
		}

		return uClassPointer;
	};

	void AddGameEventToDB(struct FVector EventLocation, struct FRotator EventRotation, class FString GameEventName, class FString GameEventDesc, class FString PlayerNameOrAdditionalInfo);
	class FString GetBuildConfigurationString();
	void EndWalkthrough();
	void BeginWalkthrough(unsigned long bPerfCheck);
	bool CheckForSentinelRun();
	void DoTimeBasedSentinelStatGathering();
	void eventStartAutomatedMapTestTimer();
};

// Class GHMEngine.GHM_CapsuleComponent
// 0x0000 (0x0278 - 0x0278)
class UGHM_CapsuleComponent : public UCylinderComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_CapsuleComponent");
		}

		return uClassPointer;
	};

	bool TriangleCheck(struct FVector Position1, struct FVector Position2, struct FVector Position3);
};

// Class GHMEngine.GHM_CPUProfilerConfig
// 0x002C (0x0060 - 0x008C)
class UGHM_CPUProfilerConfig : public UObject
{
public:
	unsigned long                                      mbEnabledInputKey : 1;                         // 0x0060 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	struct FName                                       ZoomModeKey;                                   // 0x0064 (0x0008) [0x0000000000004000] (CPF_Config)  
	struct FName                                       PauseKey;                                      // 0x006C (0x0008) [0x0000000000004000] (CPF_Config)  
	struct FName                                       ToggleFirstKey;                                // 0x0074 (0x0008) [0x0000000000004000] (CPF_Config)  
	struct FName                                       ToggleSecondKey;                               // 0x007C (0x0008) [0x0000000000004000] (CPF_Config)  
	struct FName                                       SwitchThreadKey;                               // 0x0084 (0x0008) [0x0000000000004000] (CPF_Config)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_CPUProfilerConfig");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_DebugCombinationInput
// 0x0014 (0x0060 - 0x0074)
class UGHM_DebugCombinationInput : public UObject
{
public:
	unsigned long                                      mbEnabled : 1;                                 // 0x0060 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	TArray<struct FCombinationBinding>                 CombinationBindings;                           // 0x0064 (0x0010) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugCombinationInput");
		}

		return uClassPointer;
	};

	void InputClear();
	void SetEnabled(unsigned long NewState);
};

// Class GHMEngine.GHM_DebugDrawManager
// 0x0010 (0x0060 - 0x0070)
class UGHM_DebugDrawManager : public UObject
{
public:
	TArray<struct FGHMDebugDrawObject>                 mDebugDrawObjects;                             // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugDrawManager");
		}

		return uClassPointer;
	};

	void eventDrawTextW(float Time, class FString Text, float PosX, float PosY, uint8_t R, uint8_t G, uint8_t B, uint8_t A, unsigned long CR, float XScale, float YScale);
	void eventDrawCone(float Time, struct FVector Origin, struct FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, struct FColor DrawColor);
	void eventDrawCylinder(float Time, struct FVector Start, struct FVector End, float Radius, int32_t Segments, uint8_t R, uint8_t G, uint8_t B);
	void eventDrawSphere(float Time, struct FVector Center, float Radius, int32_t Segments, uint8_t R, uint8_t G, uint8_t B);
	void eventDrawCoordinateSystem(float Time, struct FVector AxisLoc, struct FRotator AxisRot, float Scale);
	void eventDrawStar(float Time, struct FVector Position, float Size, uint8_t R, uint8_t G, uint8_t B);
	void eventDrawBox(float Time, struct FVector Center, struct FVector Extent, uint8_t R, uint8_t G, uint8_t B);
	void eventDrawPoint(float Time, struct FVector Position, float Size, struct FLinearColor PointColor);
	void eventDrawLine(float Time, struct FVector LineStart, struct FVector LineEnd, uint8_t R, uint8_t G, uint8_t B);
	void DisplayDebug(class UCanvas* Canvas);
	void Tick(float DeltaTime);
	void FlushDebugDrawObjects();
};

// Class GHMEngine.GHM_DebugMenu
// 0x0060 (0x0060 - 0x00C0)
class UGHM_DebugMenu : public UObject
{
public:
	struct FVector                                     DescriptionPos;                                // 0x0060 (0x000C) [0x0000000000000000]               
	float                                              LStickX;                                       // 0x006C (0x0004) [0x0000000000000000]               
	float                                              LStickY;                                       // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              RStickX;                                       // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              RStickY;                                       // 0x0078 (0x0004) [0x0000000000000000]               
	class UGHM_DebugMenuItem*                          MenuTop;                                       // 0x007C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItem*                          MenuEnd;                                       // 0x0084 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItem*                          SelectedItem;                                  // 0x008C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItem*                          SystemMenu;                                    // 0x0094 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItem*                          PlayerMenu;                                    // 0x009C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItem*                          EnemyMenu;                                     // 0x00A4 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItem*                          CameraMenu;                                    // 0x00AC (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItem*                          LevelMenu;                                     // 0x00B4 (0x0008) [0x0000000000000000]               
	unsigned long                                      bSelect : 1;                                   // 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugMenu");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_GameEngine
// 0x0038 (0x0A7C - 0x0AB4)
class UGHM_GameEngine : public UGameEngine
{
public:
	int32_t                                            miNumberOfPawns;                               // 0x0A7C (0x0004) [0x0000000000000000]               
	int32_t                                            miBuildRevision;                               // 0x0A80 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            miResourceRevision;                            // 0x0A84 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              cfAsyncLoadingFrameLimit;                      // 0x0A88 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              TimeBetweenCIVTicks;                           // 0x0A8C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastCIVCheckTime;                              // 0x0A90 (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      bIsTickingCIV : 1;                             // 0x0A94 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FPointer                                    OverlappedCIV;                                 // 0x0A98 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UClass*                                      CheckpointSubsystemClass;                      // 0x0AA0 (0x0008) [0x0000000000000000]               
	class UGHM_CheckPointSubSystem*                    CheckpointSubsystem;                           // 0x0AA8 (0x0008) [0x0000000000000000]               
	int32_t                                            EnabledOptionalDebugInput;                     // 0x0AB0 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_GameEngine");
		}

		return uClassPointer;
	};

	static void SetSpecialMaskChannels(unsigned long Red, unsigned long Green, unsigned long Blue, unsigned long Alpha);
	bool IsDLCCorruptedForXBox360();
	static class UGHM_CheckPointSubSystem* GetCheckpointSubsystem();
	static class UClass* GetClassFromName(class FString ClassName);
	void eventPostLoadMap();
	void CheckCIV();
	void eventPostGC(unsigned long bPerformFullPurge);
	void eventPreGC(unsigned long bPerformFullPurge, unsigned long bFromKismetRequest);
	bool eventbRequestAutomaticGC();
	bool eventbForceAvoidAutomaticGC();
	bool eventbAvoidAutomaticGC();
};

// Class GHMEngine.GHM_GameInfo
// 0x0124 (0x04CC - 0x05F0)
class AGHM_GameInfo : public AGameInfo
{
public:
	TArray<struct FSMaterialUpdate>                    m_aMaterialUpdates;                            // 0x04CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FSFadeUpdate>                        m_aFadeUpdates;                                // 0x04DC (0x0010) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
	TArray<struct FBrokenObjectCheckpointRecord>       BrokenAndDestroyedObjects;                     // 0x04EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class AGHM_BreakableObject*>                m_aBreakableObjectList;                        // 0x04FC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             m_MessageBoxCloseDelegate;                     // 0x050C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UGHM_DebugDrawManager*                       m_DebugDrawManager;                            // 0x051C (0x0008) [0x0000000000000000]               
	struct FGHM_WindAnim                               m_WindAnim;                                    // 0x0524 (0x0084) [0x0000000000000000]               
	class UGHM_DebugCombinationInput*                  m_DebugCombinationInput;                       // 0x05A8 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __MaterialParameterUpdateComplete__Delegate;   // 0x05B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ScreenDoorFadeComplete__Delegate;            // 0x05C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OneParameterDelegate__Delegate;              // 0x05D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMessageBoxClose__Delegate;                 // 0x05E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_GameInfo");
		}

		return uClassPointer;
	};

	void PauseKismet(unsigned long NewFlag);
	void UpdateEnvironmentWindAnim(float DeltaTime);
	void StopEnvironmentWindAnim(float FadeOutSeconds);
	void StartEnvironmentWindAnim(struct FGHM_SkelControlDFTL_WindAnimSetting& Setting);
	static int32_t GetMessageBoxSelectIdx();
	static bool MessageBox(class FString Title, class FString Message, TArray<class FString> ButtonAliases);
	bool ShowMessageBox(class FString Title, class FString Message, TArray<class FString> ButtonAliases, struct FScriptDelegate CloseDelegate);
	void OnMessageBoxClose(int32_t SelectIdx);
	void UINotify(unsigned long bIsOpening);
	class AWorldInfo* GetStreamingPersistentWorldInfo();
	void UnregisterBreakableObject(class AGHM_BreakableObject* BreakableObject);
	void RegisterBreakableObject(class AGHM_BreakableObject* BreakableObject);
	void GHM_GHM_GameInfo_ApplyCheckpointRecord(struct FGHM_GHM_GameInfo_CheckpointRecord& Record);
	void GHM_GHM_GameInfo_CreateCheckpointRecord(struct FGHM_GHM_GameInfo_CheckpointRecord& Record);
	void AddBrokenAndDestroyedObject(struct FBrokenObjectCheckpointRecord Record);
	void ClearBrokenAndDestroyedObject();
	void UpdateScreendoorFade(float DeltaTime);
	void NativeDelegateTest(struct FScriptDelegate Delegate1, struct FScriptDelegate Delegate2);
	void OneParameterDelegate(class UObject* Parameter);
	bool StopFadeUpdate(class UPrimitiveComponent* TargetComponent);
	bool StartFadeUpdate(class UPrimitiveComponent* TargetComponent, float fTargetOpacity, float fFadeDuration, struct FScriptDelegate FadeCompleteCallback, class UObject* CallbackParameter);
	void ScreenDoorFadeComplete(class UObject* Parameter);
	void UpdateMaterialParameters(float DeltaTime);
	bool StopMaterialUpdate(class UMaterialInstanceConstant* Material, struct FName Parameter);
	bool StartMaterialUpdate(class UMaterialInstanceConstant* Material, struct FName Parameter, float fDesiredValue, float fDuration, struct FScriptDelegate UpdateCompleteCallback, class UObject* CallbackParameter);
	void MaterialParameterUpdateComplete(class UObject* Parameter);
	void eventTick(float DeltaTime);
	void eventCheckEnvironmentWind();
	void eventPostCommitMapChange();
	void eventPostBeginPlay();
};

// Class GHMEngine.GHM_GameInteraction
// 0x0000 (0x01D4 - 0x01D4)
class UGHM_GameInteraction : public UUIInteraction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_GameInteraction");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_GameViewportClient
// 0x0058 (0x01A4 - 0x01FC)
class UGHM_GameViewportClient : public UGameViewportClient
{
public:
	uint8_t                                           UnknownData00[0x48];                           // 0x01A4 (0x0048) UNKNOWN PROPERTY: MapProperty GHMEngine.GHM_GameViewportClient.CachedPlayerViewMap
	TArray<class UGHM_SeqEvent_RawButtons*>            RawButtonEvents;                               // 0x01EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_GameViewportClient");
		}

		return uClassPointer;
	};

	void DeProject(class ULocalPlayer* LP, struct FVector2D ScreenPos, struct FVector& WorldOrigin, struct FVector& WorldDirection);
	struct FVector Project(class ULocalPlayer* LP, class UCanvas* Canvas, struct FVector Location);
	void eventGameSessionEnded();
	void eventPostRender(class UCanvas* Canvas);
	void CleanRawButtonEvents();
};

// Class GHMEngine.GHM_GFxManager
// 0x0000 (0x0060 - 0x0060)
class UGHM_GFxManager : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_GFxManager");
		}

		return uClassPointer;
	};

	static void SetInputIgnore(unsigned long _bFlag);
};

// Class GHMEngine.GHM_HUD
// 0x0008 (0x05C0 - 0x05C8)
class AGHM_HUD : public AHUD
{
public:
	int32_t                                            miLocalBuildRevision;                          // 0x05C0 (0x0004) [0x0000000000000000]               
	int32_t                                            miLocalResourceRevision;                       // 0x05C4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_HUD");
		}

		return uClassPointer;
	};

	void eventPostRender();
	static void RenderTexture_Render(class UCanvas* pCanvas);
	static void SetRenderTexturePosition(int32_t Index, int32_t RenderX, int32_t RenderY);
	static void SetRenderTextureVisible(int32_t Index, unsigned long Visible);
	static void SetRenderTexture(int32_t Index, class UTexture* RenderTexture, int32_t RenderX, int32_t RenderY, int32_t RenderW, int32_t RenderH);
	void HideOnScreenDebugInfo();
	void ShowOnScreenDebugInfo();
	void DrawOnScreenDebugInfo(class UCanvas* _oCanvas);
	void Message(class APlayerReplicationInfo* PRI, class FString msg, struct FName MsgType, float Lifetime);
	void UpdateLocalRevisionNumbers();
};

// Class GHMEngine.GHM_InterpTrackCollision
// 0x0014 (0x00C0 - 0x00D4)
class UGHM_InterpTrackCollision : public UInterpTrack
{
public:
	TArray<struct FCollisionTrackKey>                  VisibilityTrack;                               // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bFireEventsWhenForwards : 1;                   // 0x00D0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bFireEventsWhenBackwards : 1;                  // 0x00D0 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bFireEventsWhenJumpingForwards : 1;            // 0x00D0 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_InterpTrackCollision");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_InterpTrackInstCollision
// 0x0008 (0x0060 - 0x0068)
class UGHM_InterpTrackInstCollision : public UInterpTrackInst
{
public:
	uint8_t                                            Action;                                        // 0x0060 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              LastUpdatePosition;                            // 0x0064 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_InterpTrackInstCollision");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_KActorSpawnable
// 0x0020 (0x03BC - 0x03DC)
class AGHM_KActorSpawnable : public AKActorSpawnable
{
public:
	uint8_t                                            FadeType;                                      // 0x03BC (0x0001) [0x0000000000000000]               
	struct FName                                       FadeParameter;                                 // 0x03C0 (0x0008) [0x0000000000000000]               
	float                                              fFadeTime;                                     // 0x03C8 (0x0004) [0x0000000000000000]               
	unsigned long                                      bFading : 1;                                   // 0x03CC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCollisionOffOnFade : 1;                       // 0x03CC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bRecycled : 1;                                 // 0x03CC (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            Index;                                         // 0x03D0 (0x0004) [0x0000000000000000]               
	class AGHM_BreakableObjectManager*                 BreakableManager;                              // 0x03D4 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_KActorSpawnable");
		}

		return uClassPointer;
	};

	void StartParameterFade();
	void eventRecycleInternal();
	void StartScreenDoorFade();
	void RecycleDelegate(class UObject* Parameter);
	void Recycle();
};

// Class GHMEngine.GHM_MapInfoBase
// 0x00E4 (0x0060 - 0x0144)
class UGHM_MapInfoBase : public UMapInfo
{
public:
	class AWorldInfo*                                  WorldInfo;                                     // 0x0060 (0x0008) [0x0000000000000000]               
	unsigned long                                      bManageBreakableObjects : 1;                   // 0x0068 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bCollisionOffOnFade : 1;                       // 0x0068 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      m_bUseGlobalShadowColor : 1;                   // 0x0068 (0x0004) [0x0000000000004001] [0x00000004] (CPF_Edit | CPF_Config)
	unsigned long                                      mbOverrideNavigationMeshGenerateParams : 1;    // 0x0068 (0x0004) [0x0000000000004001] [0x00000008] (CPF_Edit | CPF_Config)
	int32_t                                            MaxPoolSize;                                   // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxSpawnsPerFrame;                             // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxNavMeshSplitsPerFrame;                      // 0x0074 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            SoftLimit;                                     // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fFadeTimeOverride;                             // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fNavMeshDelay;                                 // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxLifespan;                                   // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fKillThreshold;                                // 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fStallThreshold;                               // 0x008C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fMaxSpawnTime;                                 // 0x0090 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      PhysicsSpawnClass;                             // 0x0094 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      StaticSpawnClass;                              // 0x009C (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AGHM_BreakableObjectManager*                 BreakableManager;                              // 0x00A4 (0x0008) [0x0000000000000000]               
	class UClass*                                      BreakableManagerClass;                         // 0x00AC (0x0008) [0x0000000000000000]               
	struct FLinearColor                                m_GlobalShadowColor;                           // 0x00B4 (0x0010) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              m_fGlobalShadowColorThreshold;                 // 0x00C4 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              m_fGlobalShadowColorEdgeFactor;                // 0x00C8 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              m_fGlobalShadowColorModAdjustScale;            // 0x00CC (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              m_fThresholdOfCosineFalloffAngle;              // 0x00D0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_iLightmassSuperSamplingFactor;               // 0x00D4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfNavMeshGen_MinPolyArea;                      // 0x00D8 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	struct FGHM_SkelControlDFTL_WindAnimSetting        mEnvironmentWindAnimSetting;                   // 0x00DC (0x0068) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_MapInfoBase");
		}

		return uClassPointer;
	};

	void InitBreakableManager();
};

// Class GHMEngine.GHM_MaterialExpressionQualitySwitch
// 0x0004 (0x0120 - 0x0124)
class UGHM_MaterialExpressionQualitySwitch : public UMaterialExpressionQualitySwitch
{
public:
	unsigned long                                      mbDebugForceLowQuality : 1;                    // 0x0120 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_MaterialExpressionQualitySwitch");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_MemoryTrackerConfig
// 0x0038 (0x0060 - 0x0098)
class UGHM_MemoryTrackerConfig : public UObject
{
public:
	TArray<struct FName>                               maTrackedClassesName;                          // 0x0060 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<int32_t>                                    maTrackedClassesBudget;                        // 0x0070 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FTrackedStat>                        maTrackedStat;                                 // 0x0080 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	int32_t                                            miRemainingMemoryBudget;                       // 0x0090 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            miMemleakCheckOnDumpingLimitFreeCPUMemoryMB;   // 0x0094 (0x0004) [0x0000000000004000] (CPF_Config)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_MemoryTrackerConfig");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_Pawn
// 0x0018 (0x05C4 - 0x05DC)
class AGHM_Pawn : public AGamePawn
{
public:
	struct FName                                       mLeftFootBoneName;                             // 0x05C4 (0x0008) [0x0000000000000000]               
	struct FName                                       mRightFootBoneName;                            // 0x05CC (0x0008) [0x0000000000000000]               
	class UPhysicalMaterial*                           mDefaultPhysicalMaterial;                      // 0x05D4 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_Pawn");
		}

		return uClassPointer;
	};

	void OnTeleport(class USeqAct_Teleport* Action);
	void PlayMaterialInteractionFromHitInfo(struct FTraceHitInfo _oHitInfo, int32_t _iSoundType, int32_t _iEffectType, struct FName _EffSocketName, struct FVector _vSoundLocation);
	void eventGHM_PlayFootStepSound(int32_t _iFootDown, int32_t _iSoundType, int32_t _iEffectType, struct FName _EffSocketName);
	class UGHM_PhysicalMaterialProperty* GetPhysicalMaterialProp(struct FTraceHitInfo& _oHitInfo);
	class UGHM_PhysicalMaterialProperty* FindPhysicalMaterialProperty(class UPhysicalMaterial* _oPhysMaterial);
	void MAT_SetSkelControlWeight(struct FName SkelControlNodeName, float SkelControlWeight);
	void eventSetSkelControlWeight(struct FName _SkelControlNodeName, float _fSkelControlWeight);
};

// Class GHMEngine.GHM_PlayerController
// 0x004C (0x07C4 - 0x0810)
class AGHM_PlayerController : public AGamePlayerController
{
public:
	class UGHM_HUDSub*                                 mHUDSub;                                       // 0x07C4 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenu*                              mDebMenu;                                      // 0x07CC (0x0008) [0x0000000000000000]               
	class UGHM_MessageBoard*                           mMessBd;                                       // 0x07D4 (0x0008) [0x0000000000000000]               
	struct FVector                                     m_vCheckpointTeleportLocation;                 // 0x07DC (0x000C) [0x0000000000000000]               
	struct FRotator                                    m_rCheckpointTeleportRotation;                 // 0x07E8 (0x000C) [0x0000000000000000]               
	class UGHM_ProfileSettings*                        ProfileSettings;                               // 0x07F4 (0x0008) [0x0000000000000000]               
	TArray<struct FSSoundMode_ExclusiveInfo>           m_arSoundModeExclusiveInfo;                    // 0x07FC (0x0010) [0x0000000000444001] (CPF_Edit | CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink)
	unsigned long                                      bIsExternalUIExecute : 1;                      // 0x080C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mbNonPCRelatedMatineSkippable : 1;             // 0x080C (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_PlayerController");
		}

		return uClassPointer;
	};

	void OnExternalUIExecute(unsigned long bIsExecute);
	void JustLoadedCheckPoint();
	void eventDestroyed();
	void eventPreBeginPlay();
	class UGHM_HUDSub* GetHUDSub();
	class UGHM_DebugMenu* GHM_GetDebugMenu();
	class UGHM_MessageBoard* GetMessBoard();
	void UnregisterPlayerDataStores();
	void RegisterCustomPlayerDataStores();
	void OnProfileWriteComplete(uint8_t LocalUserNum, unsigned long bWasSuccessful);
	void ClearSaveProfileDelegate(struct FScriptDelegate WriteProfileSettingsCompleteDelegate);
	void SaveProfile(struct FScriptDelegate WriteProfileSettingsCompleteDelegate);
	bool DebugLoadGameSettings();
	void LoadGameSettings();
	bool DebugSaveGameSettings();
	void SaveGameSettings();
	void LoadChapterPoint();
	bool DebugLoadCheckPoint(unsigned long bLoadChapterPoint);
	void LoadCheckpoint(unsigned long bLoadChapterPoint);
	void SaveChapterPoint(unsigned long bAsyncSaveKismet);
	bool DebugSaveCheckpoint(unsigned long bAsyncSaveKismet, unsigned long bCurrentIsChapterPoint);
	void SaveCheckpoint(unsigned long bAsyncSaveKismet);
	void OnCheckPoint(class UGHM_SeqAct_Checkpoint* Action);
	void NotifyLoginChangeReset();
	void RegisterLatentAction(class USeqAct_Latent* Action);
	void OnSetRichPresence(class UGHM_SeqAct_SetRichPresence* in_SeqAct);
	void ClientSetRichPresenceString(int32_t PresenceID);
	void SetRichPresenceString(int32_t StringId);
	int32_t GetRichPresenceStringSettingAndPropertyAndRichPresenceId(int32_t StringId, TArray<struct FLocalizedStringSetting>& StringSettings, TArray<struct FSettingsProperty>& Properties);
	void eventInitInputSystem(unsigned long bDevForceFeedback);
	void eventKismet_ClientPauseSound(class USoundCue* ASound, class AActor* SourceActor, unsigned long bPauseState);
	void eventKismet_ClientInitialVolSetSound(class USoundCue* ASound, class AActor* SourceActor, float inNewVolume);
	void eventKismet_ClientVolFadeOutSound(class USoundCue* ASound, class AActor* SourceActor, float FadeOutTime, unsigned long bIgnoreFade);
	void eventKismet_ClientVolFadeInSound(class USoundCue* ASound, class AActor* SourceActor, float VolumeMultiplier, float PitchMultiplier, float FadeInTime, unsigned long bSuppressSubtitles, unsigned long bSuppressSpatialization, unsigned long bIgnoreFade);
	void eventKismet_ClientStopSoundDeferred(class USoundCue* ASound, class AActor* SourceActor, float FadeOutTime);
	class UAudioComponent* eventKismet_ClientPlaySound(class USoundCue* ASound, class AActor* SourceActor, float VolumeMultiplier, float PitchMultiplier, float FadeInTime, unsigned long bSuppressSubtitles, unsigned long bSuppressSpatialization, int32_t inUserData, class FString inOffsetMarkerLabel, class FString inEndMarkerLabel);
	bool IsCurrentMatineeSkippable();
	bool IsInCinematicForSkipMatinee();
	void CancelMatinee();
	void OnSetSoundMode(class USeqAct_SetSoundMode* Action);
	void OnRegistSoundModeExclusive(class UGHM_SeqAct_RegistSoundModeExclusive* Action);
	bool IsIgnoreSoundModeChange(struct FName InSoundModeName);
	void GHMSetSoundMode(struct FName InSoundModeName, unsigned long bResetAllClassProperties, unsigned long bTopPriority);
	void RestartLevel();
	void eventPostBeginPlay();
	static bool bUsingRuntimeTool();
};

// Class GHMEngine.GHM_PlayerInput
// 0x024C (0x02C0 - 0x050C)
class UGHM_PlayerInput : public UPlayerInput
{
public:
	int32_t                                            m_iPressed;                                    // 0x02C0 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_iReleased;                                   // 0x02C4 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_iOnPress;                                    // 0x02C8 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_iOnRelease;                                  // 0x02CC (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_iOnRepeat;                                   // 0x02D0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fRepeatWaitTime;                             // 0x02D4 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              m_fTimer[0x20];                                // 0x02D8 (0x0080) [0x0000000000002000] (CPF_Transient)
	TArray<uint8_t>                                    mPadDefToKeyConfigArray;                       // 0x0358 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<uint8_t>                                    mKeyConfigToPadDefArray;                       // 0x0368 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMap_Mirror                                 mPlayerPrimeKeyToPadMap;                       // 0x0378 (0x0048) [0x0000000000001000] (CPF_Native)  
	struct FMap_Mirror                                 mPlayerSecondKeyToPadMap;                      // 0x03C0 (0x0048) [0x0000000000001000] (CPF_Native)  
	struct FMap_Mirror                                 mUIPrimeKeyToPadMap;                           // 0x0408 (0x0048) [0x0000000000001000] (CPF_Native)  
	struct FMap_Mirror                                 mUISecondKeyToPadMap;                          // 0x0450 (0x0048) [0x0000000000001000] (CPF_Native)  
	uint8_t                                            mPlayerMouseToPadList[0xA];                    // 0x0498 (0x000A) [0x0000000000001000] (CPF_Native)  
	uint8_t                                            mUIMouseToPadList[0xA];                        // 0x04A2 (0x000A) [0x0000000000001000] (CPF_Native)  
	unsigned long                                      mbWheelUp : 1;                                 // 0x04AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mbWheelDown : 1;                               // 0x04AC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mbShift : 1;                                   // 0x04AC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mbEnterEnable : 1;                             // 0x04AC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mbWalkCtrl : 1;                                // 0x04AC (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mbDisablePlayerCtrl : 1;                       // 0x04AC (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      mbDisableUICtrl : 1;                           // 0x04AC (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      mbMapCtrl : 1;                                 // 0x04AC (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      mbDisableUICtrlEx : 1;                         // 0x04AC (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      mbUseShiftMove : 1;                            // 0x04AC (0x0004) [0x0000000000000000] [0x00000200] 
	struct FMap_Mirror                                 mKeyNameIndexMap;                              // 0x04B0 (0x0048) [0x0000000000001000] (CPF_Native)  
	class FString                                      mInputText;                                    // 0x04F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mInputTextMax;                                 // 0x0508 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_PlayerInput");
		}

		return uClassPointer;
	};

	void BackInputText();
	void AddInputText(class FString Character);
	bool IsMouseLClickEnable();
	void UILStickRight();
	void UILStickLeft();
	void UILStickDown();
	void UILStickUp();
	void PlusEventCtrl(unsigned long Press, uint8_t btn);
	bool IsWheelDown();
	bool IsWheelUp();
	bool IsWalkCtrl();
	void SetWalkCtrl(unsigned long bWalk);
	void MoveRight();
	void MoveLeft();
	void MoveDown();
	void MoveUp();
	void BtnEventCtrl(unsigned long Press, unsigned long fix, int32_t pad1, int32_t pad2);
	void DoBtnUIEvent(uint8_t Link, unsigned long Press);
	void DoBtnPlayerEvent(uint8_t Link, unsigned long Press);
	void ReleaseMouseInner(uint8_t mouse);
	void PressMouseInner(uint8_t mouse);
	void KeyToBtnEvent(class FString Key, unsigned long Press);
	void ReleaseKeyInner(class FString Key);
	void PressKeyInner(class FString Key);
	void ReleaseShiftKeyInner(class FString Key);
	void PressShiftKeyInner(class FString Key);
	void ReleaseNumberKeyInner(int32_t Num);
	void PressNumberKeyInner(int32_t Num);
	void ReleaseAlphabetKeyInner(class FString S, class FString L);
	void PressAlphabetKeyInner(class FString S, class FString L);
	void Update(float fDeltaTime);
	void Release(uint8_t btn);
	void Press(uint8_t btn);
	int32_t GetBitwisePadDef(uint8_t btn);
	bool IsOnRepeat(uint8_t btn);
	bool IsOnRelease(uint8_t btn);
	bool IsOnPress(uint8_t btn);
	bool IsReleased(uint8_t btn);
	bool IsPressed(uint8_t btn);
	bool IsShift();
	void ReleaseKeyCheck();
	void PressKeyCheck();
	void PressNoEffect();
	void MouseWheelDown();
	void MouseWheelUp();
	void ReleaseMouseEx2();
	void PressMouseEx2();
	void ReleaseMouseEx1();
	void PressMouseEx1();
	void ReleaseMouseC();
	void PressMouseC();
	void ReleaseMouseR();
	void PressMouseR();
	void ReleaseMouseL();
	void PressMouseL();
	void ReleaseKey(class FString Key);
	void PressKey(class FString Key);
	void ReleaseUnderbarKey(class FString Key);
	void ReleaseMinusKey(class FString Key);
	void ReleaseEscapeKey();
	void ReleaseEnterKey();
	void ReleaseBackKey();
	void ReleaseShiftKey(class FString Key);
	void ReleaseNumberKey(int32_t Num);
	void ReleaseAlphabetKey(class FString S, class FString L);
	void PressUnderbarKey(class FString Key);
	void PressMinusKey(class FString Key);
	void PressEscapeKey();
	void PressEnterKey();
	void PressBackKey();
	void PressShiftKey(class FString Key);
	void PressNumberKey(int32_t Num);
	void PressAlphabetKey(class FString S, class FString L);
	void ReleasePadBack();
	void ReleasePadStart();
	void ReleasePadRightThumbstick();
	void ReleasePadLeftThumbstick();
	void ReleasePadRightTrigger();
	void ReleasePadLeftTrigger();
	void ReleasePadRightShoulder();
	void ReleasePadLeftShoulder();
	void ReleasePadY();
	void ReleasePadX();
	void ReleasePadB();
	void ReleasePadA();
	void ReleasePadRight();
	void ReleasePadLeft();
	void ReleasePadDown();
	void ReleasePadUp();
	void PressPadBack();
	void PressPadStart();
	void PressPadRightThumbstick();
	void PressPadLeftThumbstick();
	void PressPadRightTrigger();
	void PressPadLeftTrigger();
	void PressPadRightShoulder();
	void PressPadLeftShoulder();
	void PressPadY();
	void PressPadX();
	void PressPadB();
	void PressPadA();
	void PressPadRight();
	void PressPadLeft();
	void PressPadDown();
	void PressPadUp();
	void SetMapCtrl(unsigned long Enable);
	bool IsMapCtrl();
	void SetUIKeyCtrlDisableEx(unsigned long Disable);
	void SetUIKeyCtrlDisable(unsigned long Disable);
	bool IsUIKeyCtrlDisable();
	bool IsPlayerMoveDisable();
	void SetPlayerKeyCtrlDisable(unsigned long Disable);
	bool IsPlayerKeyCtrlDisable();
	bool IsActiveTextInput();
	void EnterEnable();
	bool IsEnterEnable();
	class FString GetInputText();
	void ClearInputText();
	void CancelTextInput();
	void EndTextInput();
	void StartTextInput(int32_t Max, class FString Text);
	uint8_t GetUIMouseFromDef(uint8_t Link);
	uint8_t GetMouseFromDef(uint8_t Link);
	class FString GetUIKeyFromDef(uint8_t Link);
	class FString GetSecondKeyFromDef(uint8_t Link);
	class FString GetPrimeKeyFromDef(uint8_t Link);
	int32_t GetKeyListMax();
	int32_t GetKeyIndex(class FString Key);
	void ClearKeySetting(unsigned long Init);
	void SetUIMouseBtnMap(uint8_t mouse, uint8_t Link);
	void SetPlayerMouseBtnMap(uint8_t mouse, uint8_t Link);
	void SetUISecondKeyBtnMap(class FString Key, uint8_t Link);
	void SetUIPrimeKeyBtnMap(class FString Key, uint8_t Link, unsigned long second);
	void SetPlayerSecondKeyBtnMap(class FString Key, uint8_t Link);
	void SetPlayerPrimeKeyBtnMap(class FString Key, uint8_t Link, unsigned long second);
	uint8_t GetKeyConfigFromBtn(uint8_t inBtn);
	uint8_t GetBtnFromKeyConfig(uint8_t Link);
	uint8_t ConvertKeyConfigToEnginePadDef(uint8_t inBtn);
	bool CheckDuplicateKeyConfig();
	void SetKeyConfig(uint8_t btn, uint8_t Link);
	void SetupKeyName(class FString Key);
	void InitKeyMap();
	void InitKeyConfig();
	void InitInputSystem();
	void eventPlayerInput(float fDeltaTime);
	bool IsCircleToAccept();
};

// Class GHMEngine.GHM_PlayerInputRecorder
// 0x005C (0x050C - 0x0568)
class UGHM_PlayerInputRecorder : public UGHM_PlayerInput
{
public:
	struct FVector                                     StartLocation;                                 // 0x050C (0x000C) [0x0000000000001000] (CPF_Native)  
	struct FRotator                                    StartRotation;                                 // 0x0518 (0x000C) [0x0000000000001000] (CPF_Native)  
	struct FVector                                     CamTargetPos;                                  // 0x0524 (0x000C) [0x0000000000001000] (CPF_Native)  
	struct FRotator                                    CamLocalRot;                                   // 0x0530 (0x000C) [0x0000000000001000] (CPF_Native)  
	struct FRotator                                    CamCurrentRot;                                 // 0x053C (0x000C) [0x0000000000001000] (CPF_Native)  
	float                                              CamCurrentDistToTarget;                        // 0x0548 (0x0004) [0x0000000000001000] (CPF_Native)  
	TArray<struct FGHM_PlayerInputData>                InputData;                                     // 0x054C (0x0010) [0x0000000000001000] (CPF_Native)  
	int32_t                                            FrameCounter;                                  // 0x055C (0x0004) [0x0000000000000000]               
	unsigned long                                      Record : 1;                                    // 0x0560 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Playback : 1;                                  // 0x0560 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      HasPlaybackData : 1;                           // 0x0560 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      RecordEnded : 1;                               // 0x0560 (0x0004) [0x0000000000000000] [0x00000008] 
	int32_t                                            SessionRecordCounter;                          // 0x0564 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_PlayerInputRecorder");
		}

		return uClassPointer;
	};

	bool LoadFromDisk(class FString Filename);
	bool SaveToDisk(class FString Filename);
	void ReplayInputs();
	void RecordInputs(float DeltaTime);
	void DeleteInputs();
	void AllocateInputs(int32_t NumInputs);
	void eventPlayerInput(float fDeltaTime);
	void StopPlayback();
	void StartPlayback();
	void StopRecording();
	void StartRecording();
	bool IsReplayingInputs();
	bool IsRecordingInputs();
	void Initialized();
};

// Class GHMEngine.GHM_SectionVolume
// 0x0010 (0x02B8 - 0x02C8)
class AGHM_SectionVolume : public ATriggerVolume
{
public:
	class FString                                      msLocationName;                                // 0x02B8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SectionVolume");
		}

		return uClassPointer;
	};

	void eventDestroyed();
	void eventUnTouch(class AActor* Other);
	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal);
};

// Class GHMEngine.GHM_SeqAct_Checkpoint
// 0x0018 (0x0170 - 0x0188)
class UGHM_SeqAct_Checkpoint : public USeqAct_Latent
{
public:
	int32_t                                            m_iCheckPointIndex;                            // 0x0170 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      m_bIsChapterPoint : 1;                         // 0x0174 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      m_bAsyncSaveKismet : 1;                        // 0x0174 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      m_bGameSettings : 1;                           // 0x0174 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      m_bResaveActorRecords : 1;                     // 0x0174 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	float                                              m_fLoadingDelayTimer;                          // 0x0178 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fAfterLoadedDelayTimer;                      // 0x017C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      m_TeleportTarget;                              // 0x0180 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_Checkpoint");
		}

		return uClassPointer;
	};

	void eventActivated();
	void eventPreActivated();
};

// Class GHMEngine.GHM_SeqAct_FrameDelay
// 0x0014 (0x0170 - 0x0184)
class UGHM_SeqAct_FrameDelay : public USeqAct_Latent
{
public:
	unsigned long                                      bDelayActive : 1;                              // 0x0170 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	unsigned long                                      bStartWillRestart : 1;                         // 0x0170 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	int32_t                                            Frames;                                        // 0x0174 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FDouble                                     LastUpdateTime;                                // 0x0178 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            RemainingFrames;                               // 0x0180 (0x0004) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_FrameDelay");
		}

		return uClassPointer;
	};

	void ResetDelayActive();
	void Reset();
};

// Class GHMEngine.GHM_SeqAct_ToggleCastShadows
// 0x0000 (0x0154 - 0x0154)
class UGHM_SeqAct_ToggleCastShadows : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_ToggleCastShadows");
		}

		return uClassPointer;
	};

	void ToggleCastShadows(TArray<class AActor*>& ActorList);
	void SetCastShadows(unsigned long bCastShadows, TArray<class AActor*>& ActorList);
	void eventActivated();
};

// Class GHMEngine.GHM_SoundMarkerStructures
// 0x0000 (0x0060 - 0x0060)
class UGHM_SoundMarkerStructures : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SoundMarkerStructures");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SubTitle_Native
// 0x0010 (0x0060 - 0x0070)
class UGHM_SubTitle_Native : public UObject
{
public:
	class FString                                      mStrSubtitleNav;                               // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SubTitle_Native");
		}

		return uClassPointer;
	};

	void UpDateSubTitle();
	void Initializ();
	static void SetSkipButtonTex(class UTexture* Tex, int32_t X, int32_t Y, int32_t W, int32_t H);
	static void SetSubtitleTex(class UTexture* Tex, int32_t X, int32_t Y, int32_t W, int32_t H);
	static void SetSubTitleMovieTex(class UTexture* Tex, int32_t psY);
	static void AttachSubtitleManager(unsigned long flag);
	static class FString GetLastSubtitleString();
};

// Class GHMEngine.GHM_AnimNodeBlendByProperty
// 0x0004 (0x01C0 - 0x01C4)
class UGHM_AnimNodeBlendByProperty : public UAnimNodeBlendByProperty
{
public:
	unsigned long                                      mbParentLinkActive : 1;                        // 0x01C0 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AnimNodeBlendByProperty");
		}

		return uClassPointer;
	};

	void ReBecomeRelevant();
};

// Class GHMEngine.GHM_AnimNodeBlendByTransition
// 0x0010 (0x0164 - 0x0174)
class UGHM_AnimNodeBlendByTransition : public UAnimNodeBlendList
{
public:
	unsigned long                                      m_bPlayingIntro : 1;                           // 0x0164 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      m_bPlayingMain : 1;                            // 0x0164 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	unsigned long                                      m_bPlayingOutro : 1;                           // 0x0164 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	unsigned long                                      m_bPlayedOutro : 1;                            // 0x0164 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	unsigned long                                      m_bWaitMainEnd : 1;                            // 0x0164 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	unsigned long                                      m_bForceMainFinishBeforeOutro : 1;             // 0x0164 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	float                                              IntroBlendTime;                                // 0x0168 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MainBlendTime;                                 // 0x016C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              OutroBlendTime;                                // 0x0170 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AnimNodeBlendByTransition");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_AnimNodeBlendDirProperty
// 0x003B (0x013D - 0x0178)
class UGHM_AnimNodeBlendDirProperty : public UAnimNodeBlendBase
{
public:
	struct FName                                       PropertyName;                                  // 0x0140 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       CachedPropertyName;                            // 0x0148 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UProperty*                                   CachedProperty;                                // 0x0150 (0x0008) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      CachedOwner;                                   // 0x0158 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              DirDegreesPerSecond;                           // 0x0160 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DirAngle;                                      // 0x0164 (0x0004) [0x0000000000000000]               
	int32_t                                            SingleAnimAtOrAboveLOD;                        // 0x0168 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    RotationOffset;                                // 0x016C (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AnimNodeBlendDirProperty");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_AnimNodeChain
// 0x0024 (0x0164 - 0x0188)
class UGHM_AnimNodeChain : public UAnimNodeBlendList
{
public:
	TArray<struct FAnimChainInfo>                      ChainInfo;                                     // 0x0164 (0x0010) [0x0000000004400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink | CPF_EditInline)
	unsigned long                                      bLoop : 1;                                     // 0x0174 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UAnimNodeSequence*                           PlayingSeqNode;                                // 0x0178 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            PendingChildIndex;                             // 0x0180 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              AnimPlayTime;                                  // 0x0184 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AnimNodeChain");
		}

		return uClassPointer;
	};

	void PlayAnimation(int32_t nodeindex, float BlendTime);
	void PlayNextAnimation(float BlendTime);
};

// Class GHMEngine.GHM_AnimNodeChainLoopProperty
// 0x0024 (0x0188 - 0x01AC)
class UGHM_AnimNodeChainLoopProperty : public UGHM_AnimNodeChain
{
public:
	struct FName                                       LoopFlagPropertyName;                          // 0x0188 (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bLoopEndWait : 1;                              // 0x0190 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FName                                       CachedPropertyName;                            // 0x0194 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UProperty*                                   CachedProperty;                                // 0x019C (0x0008) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      CachedOwner;                                   // 0x01A4 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AnimNodeChainLoopProperty");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_AnimNodeRandomPartialBlend
// 0x0044 (0x0184 - 0x01C8)
class UGHM_AnimNodeRandomPartialBlend : public UAnimNodeBlendPerBone
{
public:
	TArray<struct FSRandomPartialBlend>                PartialBlendInfo;                              // 0x0184 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            m_iChosenPartialAnim;                          // 0x0194 (0x0004) [0x0000000000000000]               
	TArray<struct FSDisabledSkelControl>               m_aDisabledSkeletalControls;                   // 0x0198 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              MinWaitingTimeBetweenAnimations;               // 0x01A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxWaitingTimeBetweenAnimations;               // 0x01AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fTimeBeforeNextAnimation;                    // 0x01B0 (0x0004) [0x0000000000000000]               
	float                                              m_fDesiredPartialAnimWeight;                   // 0x01B4 (0x0004) [0x0000000000000000]               
	float                                              m_fCurrentPartialAnimWeight;                   // 0x01B8 (0x0004) [0x0000000000000000]               
	float                                              m_fInitialPartialAnimWeight;                   // 0x01BC (0x0004) [0x0000000000000000]               
	float                                              m_fCurrentBlendTime;                           // 0x01C0 (0x0004) [0x0000000000000000]               
	unsigned long                                      m_bBlendNeeded : 1;                            // 0x01C4 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AnimNodeRandomPartialBlend");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_AnimNodeRootMotionTurn
// 0x0040 (0x0164 - 0x01A4)
class UGHM_AnimNodeRootMotionTurn : public UAnimNodeBlendList
{
public:
	float                                              m_fTargetAngle;                                // 0x0164 (0x0004) [0x0000000000000000]               
	TArray<struct FTurnAnimRotationData>               m_aAnimations;                                 // 0x0168 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FTurnAnimRotationData>               m_aAnimationsOrdered;                          // 0x0178 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            m_iRotationThreshold;                          // 0x0188 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_iRotationThresholdYaw;                       // 0x018C (0x0004) [0x0000000000000000]               
	float                                              m_fBlendInTime;                                // 0x0190 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fBlendOutTime;                               // 0x0194 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    m_rInitialRotationRate;                        // 0x0198 (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AnimNodeRootMotionTurn");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_AnimNodeSequence
// 0x001C (0x0198 - 0x01B4)
class UGHM_AnimNodeSequence : public UAnimNodeSequence
{
public:
	float                                              RootRotationMultiplierPitch;                   // 0x0198 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RootRotationMultiplierYaw;                     // 0x019C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RootRotationMultiplierRoll;                    // 0x01A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RootMotionMultiplierX;                         // 0x01A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RootMotionMultiplierY;                         // 0x01A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RootMotionMultiplierZ;                         // 0x01AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bCallOnAnimEndWhenLooping : 1;                 // 0x01B0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AnimNodeSequence");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_AnimNotifyAttachSound
// 0x0020 (0x0068 - 0x0088)
class UGHM_AnimNotifyAttachSound : public UAnimNotify
{
public:
	class USoundCue*                                   SoundCue;                                      // 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       BoneName;                                      // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bIgnoreIfActorHidden : 1;                      // 0x0078 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              PercentToPlay;                                 // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VolumeMultiplier;                              // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PitchMultiplier;                               // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AnimNotifyAttachSound");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_AnimNotifyDFTLWind
// 0x0078 (0x0068 - 0x00E0)
class UGHM_AnimNotifyDFTLWind : public UAnimNotify
{
public:
	struct FPointer                                    VfTable_IGHM_AnimNotifyOnEditorDraw;           // 0x0068 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FGHM_SkelControlDFTL_WindAnimSetting        mWindAnimSetting;                              // 0x0070 (0x0068) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      mbStopAnimation : 1;                           // 0x00D8 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              mfStopFadeOutSeconds;                          // 0x00DC (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AnimNotifyDFTLWind");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_AnimNotifyFootstep
// 0x0008 (0x006C - 0x0074)
class UGHM_AnimNotifyFootstep : public UAnimNotify_Footstep
{
public:
	struct FName                                       mEffSocketName;                                // 0x006C (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AnimNotifyFootstep");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_AnimNotifyOnEditorDraw
// 0x0000 (0x0060 - 0x0060)
class UGHM_AnimNotifyOnEditorDraw : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AnimNotifyOnEditorDraw");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SkelControlBoneChain
// 0x0009 (0x00F4 - 0x00FD)
class UGHM_SkelControlBoneChain : public USkelControlBase
{
public:
	int32_t                                            ChainLength;                                   // 0x00F4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bReverseChainOrder : 1;                        // 0x00F8 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bInvertChainBoneAxis : 1;                      // 0x00F8 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint8_t                                            ChainBoneAxis;                                 // 0x00FC (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SkelControlBoneChain");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SkelControlChainScale
// 0x000F (0x00FD - 0x010C)
class UGHM_SkelControlChainScale : public UGHM_SkelControlBoneChain
{
public:
	float                                              fMinLength;                                    // 0x0100 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fProgressFactor;                               // 0x0104 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bReverseProgress : 1;                          // 0x0108 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SkelControlChainScale");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SkelControlChainScaleToPosition
// 0x000F (0x00FD - 0x010C)
class UGHM_SkelControlChainScaleToPosition : public UGHM_SkelControlBoneChain
{
public:
	struct FVector                                     mvDestination;                                 // 0x0100 (0x000C) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SkelControlChainScaleToPosition");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SkelControlDFTL
// 0x013B (0x00FD - 0x0238)
class UGHM_SkelControlDFTL : public UGHM_SkelControlBoneChain
{
public:
	struct FName                                       mnObstacleBaseSkeletalMeshName;                // 0x0100 (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      mbGSCRootFromParentAnimComponent : 1;          // 0x0108 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      mbReset : 1;                                   // 0x0108 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      mbEnableCheckSimpleGroundObstacle : 1;         // 0x0108 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      mbShowDebugInformation : 1;                    // 0x0108 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	unsigned long                                      mbDebugForceTest : 1;                          // 0x0108 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	unsigned long                                      mbEnableWind : 1;                              // 0x0108 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	struct FGHM_WindAnim                               mWindAnim;                                     // 0x010C (0x0084) [0x0000000000002000] (CPF_Transient)
	TArray<struct FGHM_SkelControlDFTL_Particle>       maParticles;                                   // 0x0190 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FMatrix                                     mPrevLocalToWorld;                             // 0x01A0 (0x0040) [0x0000000000002000] (CPF_Transient)
	struct FName                                       mnGSCRootBoneName;                             // 0x01E0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FGHM_SkelControlDFTL_Sphere>         maObstacleSpheres;                             // 0x01E8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              mfDampingCoef;                                 // 0x01F8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfDragCoef;                                    // 0x01FC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfGSCCoef;                                     // 0x0200 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfMoveCoef;                                    // 0x0204 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfMoveSpeedLimit;                              // 0x0208 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfVariabilityForceCoef;                        // 0x020C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            mGravitySpace;                                 // 0x0210 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     mvGravity;                                     // 0x0214 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              mfFixedFPS;                                    // 0x0220 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfMassHead;                                    // 0x0224 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfMassTail;                                    // 0x0228 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfDebugForcePower;                             // 0x022C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfTestOccludedWindRayLength;                   // 0x0230 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfActualDeltaTime;                             // 0x0234 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SkelControlDFTL");
		}

		return uClassPointer;
	};

	void StopWindAnim(float FadeOutSeconds);
	void StartWindAnim(struct FGHM_SkelControlDFTL_WindAnimSetting WindAnimSetting);
};

// Class GHMEngine.GHM_SkelControlRope
// 0x0053 (0x00FD - 0x0150)
class UGHM_SkelControlRope : public UGHM_SkelControlBoneChain
{
public:
	float                                              mfIdleLength;                                  // 0x0100 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfIdleRadiusPercentage;                        // 0x0104 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfCrushingFactor;                              // 0x0108 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfStretchingFactor;                            // 0x010C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     mvConstantForce;                               // 0x0110 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              mfMinSpeed;                                    // 0x011C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfMaxSpeed;                                    // 0x0120 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mfInertyFactor;                                // 0x0124 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      mbFinalConstrain : 1;                          // 0x0128 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      mbPaused : 1;                                  // 0x0128 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bHadValidStrength : 1;                         // 0x0128 (0x0004) [0x0000000000000000] [0x00000004] 
	TArray<struct FVector>                             maBoneVelocity;                                // 0x012C (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	float                                              ThisTimstep;                                   // 0x013C (0x0004) [0x0000000000000000]               
	TArray<struct FVector>                             TrailBoneLocations;                            // 0x0140 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SkelControlRope");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SkelControlRopeWithEffector
// 0x0010 (0x0150 - 0x0160)
class UGHM_SkelControlRopeWithEffector : public UGHM_SkelControlRope
{
public:
	TArray<struct FGHMR_Effector>                      maEffectors;                                   // 0x0150 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SkelControlRopeWithEffector");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SkelControlTrailLinearPerAxisRelaxation
// 0x0018 (0x0170 - 0x0188)
class UGHM_SkelControlTrailLinearPerAxisRelaxation : public USkelControlTrail
{
public:
	struct FVector                                     TrailRelaxationAtBegin;                        // 0x0170 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     TrailRelaxationAtEnd;                          // 0x017C (0x000C) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SkelControlTrailLinearPerAxisRelaxation");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SkelControlTrailWithInertia
// 0x0024 (0x0188 - 0x01AC)
class UGHM_SkelControlTrailWithInertia : public UGHM_SkelControlTrailLinearPerAxisRelaxation
{
public:
	float                                              mfMomentumFactor;                              // 0x0188 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FVector>                             maBoneForce;                                   // 0x018C (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FVector>                             maBoneLastLocation;                            // 0x019C (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SkelControlTrailWithInertia");
		}

		return uClassPointer;
	};

	void OnTeleport(class USkeletalMeshComponent* _poSkelComp);
};

// Class GHMEngine.GHM_SkelControlTrailWithEffector
// 0x0040 (0x01AC - 0x01EC)
class UGHM_SkelControlTrailWithEffector : public UGHM_SkelControlTrailWithInertia
{
public:
	TArray<struct FGHM_Effector>                       maEffectors;                                   // 0x01AC (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            NormalAxis;                                    // 0x01BC (0x0001) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bInvertNormalAxis : 1;                         // 0x01C0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bCheckSphereVelocity : 1;                      // 0x01C0 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              fBoneLength;                                   // 0x01C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FVector>                             maContactNormal;                               // 0x01C8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FQuat>                               maBoneOrientation;                             // 0x01D8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	float                                              mfRotationAngleCorrection;                     // 0x01E8 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SkelControlTrailWithEffector");
		}

		return uClassPointer;
	};

	void OnTeleport(class USkeletalMeshComponent* _poSkelComp);
};

// Class GHMEngine.GHM_SkelControlTrail_SpherePlane
// 0x0010 (0x01EC - 0x01FC)
class UGHM_SkelControlTrail_SpherePlane : public UGHM_SkelControlTrailWithEffector
{
public:
	TArray<struct FGHM_SCTWS_Link>                     maLinks;                                       // 0x01EC (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SkelControlTrail_SpherePlane");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SkelControlTrailFakeCloth
// 0x0014 (0x01EC - 0x0200)
class UGHM_SkelControlTrailFakeCloth : public UGHM_SkelControlTrailWithEffector
{
public:
	TArray<struct FGHM_FakeCloth_Springs>              maConstrains;                                  // 0x01EC (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              fSegmentFactor;                                // 0x01FC (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SkelControlTrailFakeCloth");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SkelControlTrailWithParentConstraints
// 0x0010 (0x01EC - 0x01FC)
class UGHM_SkelControlTrailWithParentConstraints : public UGHM_SkelControlTrailWithEffector
{
public:
	TArray<struct FParentConstraint>                   maConstraints;                                 // 0x01EC (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SkelControlTrailWithParentConstraints");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SkelControlTrailWithSprings
// 0x001C (0x01EC - 0x0208)
class UGHM_SkelControlTrailWithSprings : public UGHM_SkelControlTrailWithEffector
{
public:
	TArray<struct FGHM_SCTWS_Springs>                  maSprings;                                     // 0x01EC (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              fIdleRadiusPercentage;                         // 0x01FC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fStretchingFactor;                             // 0x0200 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fCrushingFactor;                               // 0x0204 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SkelControlTrailWithSprings");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SkelControlTrailWithWind
// 0x0000 (0x01EC - 0x01EC)
class UGHM_SkelControlTrailWithWind : public UGHM_SkelControlTrailWithEffector
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SkelControlTrailWithWind");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SkeletalMeshActorMAT
// 0x0000 (0x02EC - 0x02EC)
class AGHM_SkeletalMeshActorMAT : public ASkeletalMeshActorMAT
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SkeletalMeshActorMAT");
		}

		return uClassPointer;
	};

	void MAT_SetSkelControlWeight(struct FName SkelControlNodeName, float SkelControlWeight);
	void eventSetSkelControlWeight(struct FName SkelControlNodeName, float SkelControlWeight);
};

// Class GHMEngine.GHM_KActor
// 0x0014 (0x03B8 - 0x03CC)
class AGHM_KActor : public AKActor
{
public:
	unsigned long                                      bNotified : 1;                                 // 0x03B8 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<class AActor*>                              StackedActors;                                 // 0x03BC (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_KActor");
		}

		return uClassPointer;
	};

	void StackNotify();
};

// Class GHMEngine.GHM_BreakableObject
// 0x019C (0x03CC - 0x0568)
class AGHM_BreakableObject : public AGHM_KActor
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObstacle;        // 0x03CC (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class UClass*                                      PhysicsSpawnClass;                             // 0x03D4 (0x0008) [0x0000000000000000]               
	class UClass*                                      StaticSpawnClass;                              // 0x03DC (0x0008) [0x0000000000000000]               
	class UDrawBoxComponent*                           mNavMeshBounds;                                // 0x03E4 (0x0008) [0x000000000408000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UDrawBoxComponent*                           mOldNavMeshBounds;                             // 0x03EC (0x0008) [0x000000000408200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	unsigned long                                      bSplitNavMesh : 1;                             // 0x03F4 (0x0004) [0x0000000000002002] [0x00000001] (CPF_Const | CPF_Transient)
	unsigned long                                      bItemDropped : 1;                              // 0x03F4 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	unsigned long                                      bBreakOnCollision : 1;                         // 0x03F4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bBreakableFlag : 1;                            // 0x03F4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bPopOverride : 1;                              // 0x03F4 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bEnabled : 1;                                  // 0x03F4 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	unsigned long                                      bSilent : 1;                                   // 0x03F4 (0x0004) [0x0000000000002000] [0x00000040] (CPF_Transient)
	unsigned long                                      mbManageBreakableObjects : 1;                  // 0x03F4 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      mbIsDestroyed : 1;                             // 0x03F4 (0x0004) [0x0000000000000000] [0x00000100] 
	int32_t                                            BreakOnCollisionPackageIndex;                  // 0x03F8 (0x0004) [0x0000000000000000]               
	TArray<struct FBreakPackage>                       BreakPackages;                                 // 0x03FC (0x0010) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	float                                              Damage;                                        // 0x040C (0x0004) [0x0000000000000000]               
	float                                              LifespanOverride;                              // 0x0410 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       FadeParameter;                                 // 0x0414 (0x0008) [0x0000000000000000]               
	float                                              PopScaleOverride;                              // 0x041C (0x0004) [0x0000000000000000]               
	float                                              SpinScaleOverride;                             // 0x0420 (0x0004) [0x0000000000000000]               
	class UClass*                                      m_LastDamageType;                              // 0x0424 (0x0008) [0x0000000000000000]               
	float                                              m_fPostSpawnNoDamageTime;                      // 0x042C (0x0004) [0x0000000000000000]               
	class AActor*                                      BumpActor;                                     // 0x0430 (0x0008) [0x0000000000000000]               
	TArray<struct FBreakActor>                         DeferredSpawns;                                // 0x0438 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBreakPackage                               SelectedBreakPackage;                          // 0x0448 (0x00D8) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
	class AGHM_BreakableObjectManager*                 BreakableManager;                              // 0x0520 (0x0008) [0x0000000000000000]               
	float                                              mfMaxSpawnTime;                                // 0x0528 (0x0004) [0x0000000000000000]               
	struct FDouble                                     mfSpawnDeadline;                               // 0x052C (0x0008) [0x0000000000000000]               
	struct FVector                                     Origin;                                        // 0x0534 (0x000C) [0x0000000000000000]               
	TArray<struct FSpawnedPackageRecord>               SpawnedPackageRecords;                         // 0x0540 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class AGHM_BreakableObject*                        mParent;                                       // 0x0550 (0x0008) [0x0000000000002000] (CPF_Transient)
	TArray<class AGHM_BreakableObject*>                mChildren;                                     // 0x0558 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_BreakableObject");
		}

		return uClassPointer;
	};

	void ApplyCheckpointRecordCore(struct FBrokenObjectCheckpointRecord& Record);
	void GHM_GHM_BreakableObject_ApplyCheckpointRecord(struct FGHM_GHM_BreakableObject_CheckpointRecord& Record);
	void GHM_GHM_BreakableObject_CreateCheckpointRecord(struct FGHM_GHM_BreakableObject_CheckpointRecord& Record);
	void AddSpawnedPackageRecords(int32_t InPackageNo, int32_t InRemainingDamage);
	void eventDetach(class AActor* Other);
	void eventAttach(class AActor* Other);
	void FinalTweaksRB(class AKActorSpawnable* Fragment, struct FBreakPackage BP, struct FBreakActor BA);
	void FinalTweaksStatic(class ADynamicSMActor* Fragment, struct FBreakPackage BP, struct FBreakActor BA);
	void RBInit(class AKActorSpawnable* Fragment, struct FBreakPackage BP, struct FBreakActor BA, struct FVector RBVelocity);
	void StaticInit(class ADynamicSMActor* Fragment, struct FBreakPackage BP, struct FBreakActor BA);
	void BaseInit(class ADynamicSMActor* Fragment, struct FBreakPackage BP, struct FBreakActor BA);
	void SpawnPostDestructionParticles();
	void DeleteAccumulationParticles();
	class UParticleSystemComponent* SpawnAccumulationParticles(struct FBreakPackage BP);
	void SpawnDamageParticles(struct FBreakPackage BP);
	void SpawnParticles(struct FBreakPackage BP);
	void PerformFrameSpawns();
	void SpawnPhysicsPart(struct FBreakActor BA);
	void SpawnPackage(struct FBreakPackage BP, int32_t iInitialDamage, float PostSpawnNoDamageTime);
	void eventRigidBodyCollision(class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int32_t ContactIndex, struct FCollisionImpactData& RigidCollisionData);
	void eventBump(class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal);
	void TakeDamageInner(int32_t DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser);
	void TakeDamageInnerParent(int32_t DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser);
	void eventTakeDamage(int32_t DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser);
	void EnableBreakableObject();
	void SetSplitNavMesh(unsigned long bNewValue);
	void eventPostBeginPlay();
	void eventPreBeginPlay();
	void eventDestroyed();
};

// Class GHMEngine.GHM_Checkpoint
// 0x0134 (0x0060 - 0x0194)
class UGHM_Checkpoint : public UObject
{
public:
	class FString                                      m_BaseLevelName;                               // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            m_iCheckPointIndex;                            // 0x0070 (0x0004) [0x0000000000000000]               
	int32_t                                            m_iGameSettingsIndex;                          // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              m_fDifficulty;                                 // 0x0078 (0x0004) [0x0000000000000000]               
	struct FCheckpointTime                             m_SaveTime;                                    // 0x007C (0x0010) [0x0000000000000000]               
	struct FVector                                     m_vPlayerLocation;                             // 0x008C (0x000C) [0x0000000000000000]               
	TArray<struct FLevelRecord>                        m_aLevelRecords;                               // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              m_aAudioStreamingRecords;                      // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FAmbientSoundRecord>                 m_aAmbientSoundRecords;                        // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FActorRecord>                        m_aActorRecords;                               // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FActorRecord>                        m_aGHMActorRecords;                            // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FActorRecord>                        m_aGameSettingsRecords;                        // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<uint8_t>                                    m_abKismetData;                                // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UClass*>                              m_caActorClassesToRecord;                      // 0x0108 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class UClass*>                              m_caActorClassesNotToRecord;                   // 0x0118 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class UClass*>                              m_caActorClassesToDestroy;                     // 0x0128 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class UClass*>                              m_caActorClassesNotToDestroy;                  // 0x0138 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class UClass*>                              m_caActorClassesToGameSettingsRecord;          // 0x0148 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class FString>                              m_caAmbientSoundCueClassesToRecord;            // 0x0158 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      m_DisplayName;                                 // 0x0168 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	unsigned long                                      m_bCreateComplete : 1;                         // 0x0178 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      m_bSaveComplete : 1;                           // 0x0178 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	unsigned long                                      m_bLoadComplete : 1;                           // 0x0178 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	unsigned long                                      m_bWritingToStorage : 1;                       // 0x0178 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	unsigned long                                      m_bCallSaveEvents : 1;                         // 0x0178 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	unsigned long                                      m_bCallLoadEvents : 1;                         // 0x0178 (0x0004) [0x0000000000002000] [0x00000020] (CPF_Transient)
	unsigned long                                      m_bCallResaveEvents : 1;                       // 0x0178 (0x0004) [0x0000000000002000] [0x00000040] (CPF_Transient)
	struct FPointer                                    m_pSaveDataAsyncWriter;                        // 0x017C (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FDouble                                     m_fCheckpointStartTime;                        // 0x0184 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              m_fSaveTimer;                                  // 0x018C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fLoadTimer;                                  // 0x0190 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_Checkpoint");
		}

		return uClassPointer;
	};

	void eventPostResaveCheckpoint();
	void eventResaveCheckpointWriteToStorage();
	static void Post_SeqEvent_CheckpointSaved(int32_t iCheckPointIndex);
	void eventPostSaveCheckpoint();
	static void Post_SeqEvent_CheckpointWriteToStorage(int32_t iCheckPointIndex);
	void eventCheckpointWriteToStorage();
	void eventPreSaveCheckpoint();
	static void Post_SeqEvent_CheckpointLoaded(int32_t iCheckPointIndex);
	void eventPostLoadCheckpoint();
	void eventPreLoadCheckpoint();
	bool eventCheckpointIsEmpty();
	bool CheckpointIsNewer(class UGHM_Checkpoint* OtherCheckpoint);
	static bool CheckpointTimeIsNewer(struct FCheckpointTime& lCheckpointTime, struct FCheckpointTime& OtherCheckpointTime);
};

// Class GHMEngine.GHM_CheckPointSubSystem
// 0x00B0 (0x0060 - 0x0110)
class UGHM_CheckPointSubSystem : public UObject
{
public:
	class UGHM_Checkpoint*                             m_CurrentCheckpoint;                           // 0x0060 (0x0008) [0x0000000000000000]               
	uint8_t                                            m_eCheckpointState;                            // 0x0068 (0x0001) [0x0000000000000000]               
	uint8_t                                            m_eSaveDataStatus;                             // 0x0069 (0x0001) [0x0000000000000000]               
	uint8_t                                            m_eStorageDeviceParentState;                   // 0x006A (0x0001) [0x0000000000000000]               
	uint8_t                                            m_eWaitExternalUIState;                        // 0x006B (0x0001) [0x0000000000000000]               
	struct FVector                                     m_vPlayerLocation;                             // 0x006C (0x000C) [0x0000000000000000]               
	class FString                                      SaveDataFileBaseName;                          // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Xbox360ContentFileName;                        // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              m_fLoadingDelayTimer;                          // 0x0098 (0x0004) [0x0000000000000000]               
	float                                              m_fAfterLoadedDelayTimer;                      // 0x009C (0x0004) [0x0000000000000000]               
	int32_t                                            m_iCurrentUserID;                              // 0x00A0 (0x0004) [0x0000000000000000]               
	int32_t                                            m_iCurrentDeviceID;                            // 0x00A4 (0x0004) [0x0000000000000000]               
	int32_t                                            m_iGameSettingsIndex;                          // 0x00A8 (0x0004) [0x0000000000000000]               
	unsigned long                                      m_bCurrentIsChapterPoint : 1;                  // 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bLoadChapterPoint : 1;                       // 0x00AC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bLoadGameSettings : 1;                       // 0x00AC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bSaveGameSettings : 1;                       // 0x00AC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bIsSaveDataOnMemory : 1;                     // 0x00AC (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bResaveActorRecords : 1;                     // 0x00AC (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bIgnoreSaveFailed : 1;                       // 0x00AC (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      m_bForceHideLogWindow : 1;                     // 0x00AC (0x0004) [0x0000000000004000] [0x00000080] (CPF_Config)
	unsigned long                                      m_bAsyncSaveKismet : 1;                        // 0x00AC (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      m_bShouldWriteToStorage : 1;                   // 0x00AC (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      m_bNoSave : 1;                                 // 0x00AC (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      m_bNoExternalUI : 1;                           // 0x00AC (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      m_bResultOnLoadFileOpFuncPS3 : 1;              // 0x00AC (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      m_bHasSelectedValidStorageDevice : 1;          // 0x00AC (0x0004) [0x0000000000002002] [0x00002000] (CPF_Const | CPF_Transient)
	class UGHM_Checkpoint*                             m_CheckpointOnLoadFileOpFuncPS3;               // 0x00B0 (0x0008) [0x0000000000000000]               
	float                                              m_fShowExternalUITimer;                        // 0x00B8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fWaitExternalUITimer;                        // 0x00BC (0x0004) [0x0000000000002000] (CPF_Transient)
	class FString                                      m_CheckpointClassName;                         // 0x00C0 (0x0010) [0x0000000000444002] (CPF_Const | CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink)
	int32_t                                            m_iMaxSaveDataSize;                            // 0x00D0 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            m_iMaxSaveDataSizeForDeviceSelect;             // 0x00D4 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            m_iMaxKismetDataSize;                          // 0x00D8 (0x0004) [0x0000000000000002] (CPF_Const)   
	TArray<uint8_t>                                    m_abCurrentCPArchive;                          // 0x00DC (0x0010) [0x0000000000500002] (CPF_Const | CPF_NeedCtorLink)
	TArray<uint8_t>                                    m_abRestartCPArchive;                          // 0x00EC (0x0010) [0x0000000000500002] (CPF_Const | CPF_NeedCtorLink)
	TArray<uint8_t>                                    m_SaveDataBuff;                                // 0x00FC (0x0010) [0x0000000000500002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            m_iSaveDataSize;                               // 0x010C (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_CheckPointSubSystem");
		}

		return uClassPointer;
	};

	void ForceExitSave();
	void ClearOnMemorySaveData();
	int32_t GetCheckpointIndex();
	int32_t GetGameSettingsIndex();
	bool CheckpointIsEmpty();
	void eventSaveFailed();
	bool IsLoadComplete();
	void eventJustLoadedCheckPoint();
	bool LoadGameSettingsImmediately();
	bool LoadGameSettingsRequest(float fLoadingDelayTimer);
	bool LoadRequest(unsigned long bLoadChapterPoint, unsigned long bResaveActorRecords, float fLoadingDelayTimer, float fAfterLoadedDelayTimer);
	bool eventStartLoadCheckPoint();
	bool IsSaveComplete();
	bool SaveGameSettingsImmediately(int32_t GameSettingsIndex);
	bool SaveGameSettingsRequest(int32_t GameSettingsIndex);
	bool SaveRequest(unsigned long bSaveGameSettings, int32_t SaveIndex, unsigned long bCurrentIsChapterPoint, struct FVector PlayerLocation, unsigned long bAsyncSaveKismet);
	bool eventStartSaveCheckPoint();
	void CorruptSaveDataNoSaveNotify(int32_t SelectIdx);
	bool eventCorruptSaveDataNoSaveMessage(float DeltaTime);
	void SaveErrorDeviceChangeNoSaveNotify(int32_t SelectIdx);
	bool eventSaveErrorDeviceChangeNoSaveMessage(float DeltaTime);
	void StorageDeviceChangeOverwriteMessageNotify(int32_t SelectIdx);
	bool eventStorageDeviceChangeOverwriteMessage(float DeltaTime);
	void InsufficientStorageDeviceNoSaveMessageNotify(int32_t SelectIdx);
	bool eventInsufficientStorageDeviceNoSaveMessage(float DeltaTime);
	void InvalidStorageDeviceNoSaveMessageNotify(int32_t SelectIdx);
	bool eventInvalidStorageDeviceNoSaveMessage(float DeltaTime);
	void eventStorageDeviceChangeWarningMessageNotify(int32_t SelectIdx);
	bool eventStorageDeviceChangeWarningMessage(float DeltaTime);
	void OnStorageDeviceChange();
	void ClearStorageDeviceChangeDelegate();
	void RegisterStorageDeviceChangeDelegate();
	void OnLoadDeviceSelectionComplete(unsigned long bWasSuccessful);
	bool eventLoadStorageDeviceSelect(float DeltaTime);
	void OnSaveDeviceSelectionComplete(unsigned long bWasSuccessful);
	bool eventSaveStorageDeviceSelect(float DeltaTime);
	bool eventWaitExternalUI(float DeltaTime);
	TArray<class FString> GetButtonAliasesOK();
	TArray<class FString> GetButtonAliasesYN();
	bool IsExistSaveData();
	void eventSetPlayersOnly(unsigned long Enable);
	bool eventAreStorageWritesAllowed(unsigned long bIgnoreDeviceStatus, int32_t RequiredSize);
	bool eventIsCurrentDeviceHasFreeSpaceForDeviceSelect();
	bool eventIsCurrentDeviceValid(int32_t SizeNeeded);
	bool RetryToWriteToStorage();
	bool LoadGameSettings();
	void LoadCheckpoint(float fAfterLoadedDelayTimer, unsigned long bResaveActorRecords);
	void CheckpointWriteToStorage();
	void SaveGameSettings();
	void SaveCheckpoint(unsigned long bAsyncSaveKismet, struct FVector& CheckpointLocation);
	void ResetCheckpointState();
	void eventSetCheckpointState(uint8_t eNewState, float fExternalUIDelayTimer);
	void SetSleep(unsigned long Enable);
	void eventSetNoSave(unsigned long Enable);
	void SetShouldWriteToStorage(unsigned long Enable);
	bool FindCheckpointData(struct FCheckpointEnumerationResult& EnumResult, int32_t& IsCorrupted);
	bool HasStorageDeviceBeenRemoved();
	int32_t GetCurrentDeviceID();
	void SetCurrentDeviceID(int32_t NewDeviceID, unsigned long bProfileSignedOut);
	void SetCurrentUserID(int32_t NewUserID);
	void Tick(float DeltaTime);
};

// Class GHMEngine.GHM_DebugMenuItem
// 0x0058 (0x0060 - 0x00B8)
class UGHM_DebugMenuItem : public UObject
{
public:
	class FString                                      mItemName;                                     // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     mPos;                                          // 0x0070 (0x000C) [0x0000000000000000]               
	int32_t                                            mWidth;                                        // 0x007C (0x0004) [0x0000000000000000]               
	int32_t                                            mHeight;                                       // 0x0080 (0x0004) [0x0000000000000000]               
	unsigned long                                      mExpand : 1;                                   // 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mOnCursor : 1;                                 // 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mSelected : 1;                                 // 0x0084 (0x0004) [0x0000000000000000] [0x00000004] 
	class FString                                      mDescription;                                  // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UGHM_DebugMenuItem*                          mPrev;                                         // 0x0098 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGHM_DebugMenuItem*                          mNext;                                         // 0x00A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGHM_DebugMenuItem*                          mChild;                                        // 0x00A8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGHM_DebugMenuItem*                          mParent;                                       // 0x00B0 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugMenuItem");
		}

		return uClassPointer;
	};

	void Clear();
	void LeftStick(float moveX, float moveY);
	void RightStick(float moveX, float moveY);
	void KeyLeftStickButton(uint8_t btn);
	void KeyRightStickButton(uint8_t btn);
	void KeyYButton(uint8_t btn);
	void KeyXButton(uint8_t btn);
	void KeyBButton(uint8_t btn);
	void KeyRight();
	void KeyLeft();
	void KeyDown();
	void KeyUp();
	bool IsInRectToPoint(float px, float Py);
	void DrawMenuItemChain(class UCanvas* Canvas, class UGHM_DebugMenuItem*& selectitem);
	void CalcPosNextItemAndDrawMenuItemChainFrame(class UCanvas* Canvas);
	void DrawDescription(class UCanvas* Canvas, struct FVector pos);
	void SetDescription(class FString Str);
	class FString GetDescription();
	bool DrawCursor(class UCanvas* Canvas);
	void DrawMenuItem(class UCanvas* Canvas);
	int32_t GetItemTextWidth();
	void AddChild(class UGHM_DebugMenuItem* Item);
	void AddNext(class UGHM_DebugMenuItem* Item);
	void Cancel();
	void Select();
	void SetCursor(unsigned long flag);
	void SetExpand(unsigned long flag);
	void SetHeight(int32_t Height);
	void SetWidth(int32_t Width);
	void SetPosition(struct FVector Position);
	void SetName(class FString Item);
	void SetChild(class UGHM_DebugMenuItem* Item);
	void SetParent(class UGHM_DebugMenuItem* Item);
	void SetNext(class UGHM_DebugMenuItem* Item);
	void SetPrev(class UGHM_DebugMenuItem* Item);
	bool GetCursor();
	bool GetExpand();
	int32_t GetHeight();
	int32_t GetWidth();
	struct FVector GetPosition();
	class FString GetName();
	class UGHM_DebugMenuItem* GetChild();
	class UGHM_DebugMenuItem* GetParent();
	class UGHM_DebugMenuItem* GetNext();
	class UGHM_DebugMenuItem* GetPrev();
};

// Class GHMEngine.GHM_DebugMenuItemValue
// 0x0028 (0x00B8 - 0x00E0)
class UGHM_DebugMenuItemValue : public UGHM_DebugMenuItem
{
public:
	int32_t                                            mCellWidth;                                    // 0x00B8 (0x0004) [0x0000000000000000]               
	int32_t                                            mSeparaterWidth;                               // 0x00BC (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             EFunc;                                         // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ExecFunc__Delegate;                          // 0x00D0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugMenuItemValue");
		}

		return uClassPointer;
	};

	void Clear();
	void DrawMenuItem(class UCanvas* Canvas);
	void AddExecFunc(struct FScriptDelegate dgt);
	void SetSeparaterWidth(int32_t Width);
	void SetCellWidth(int32_t Width);
	void SetWidth(int32_t Width);
	void ExecFunc();
};

// Class GHMEngine.GHM_DebugMenuItemBool
// 0x0034 (0x00E0 - 0x0114)
class UGHM_DebugMenuItemBool : public UGHM_DebugMenuItemValue
{
public:
	int32_t                                            Value;                                         // 0x00E0 (0x0004) [0x0000000000000000]               
	struct FPointer                                    EditPtr;                                       // 0x00E4 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	unsigned long                                      mNonDispSwitch : 1;                            // 0x00EC (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            mSwitchType;                                   // 0x00F0 (0x0001) [0x0000000000000000]               
	struct FScriptDelegate                             UEFunc;                                        // 0x00F4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __UnExecFunc__Delegate;                        // 0x0104 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugMenuItemBool");
		}

		return uClassPointer;
	};

	void Clear();
	void Select();
	void SetSwitchType(uint8_t Type);
	void SetDispSwitch(unsigned long tf);
	void DrawMenuItem(class UCanvas* Canvas);
	void Rev();
	void AddUnExecFunc(struct FScriptDelegate dgt);
	void UnExecFunc();
	bool ChangeNum();
	void UpdateRegistValue();
	void UnRegist();
	void Regist(int32_t& editvalue);
};

// Class GHMEngine.GHM_DebugMenuItemByte
// 0x0014 (0x00E0 - 0x00F4)
class UGHM_DebugMenuItemByte : public UGHM_DebugMenuItemValue
{
public:
	uint8_t                                            Value;                                         // 0x00E0 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinValue;                                      // 0x00E1 (0x0001) [0x0000000000000000]               
	uint8_t                                            MaxValue;                                      // 0x00E2 (0x0001) [0x0000000000000000]               
	int32_t                                            SelectColumn;                                  // 0x00E4 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxColumn;                                     // 0x00E8 (0x0004) [0x0000000000000000]               
	struct FPointer                                    EditPtr;                                       // 0x00EC (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugMenuItemByte");
		}

		return uClassPointer;
	};

	void KeyXButton(uint8_t btn);
	void KeyRight();
	void KeyLeft();
	void KeyDown();
	void KeyUp();
	void SetNum(uint8_t Num);
	void DrawMenuItem(class UCanvas* Canvas);
	void Rev();
	void UpdateRegistValue();
	void UnRegist();
	void Regist(uint8_t& editvalue);
	void ChangeNum(int32_t addnum);
	void DrawSelectedItem(class UCanvas* Canvas);
	void DrawDefaultItem(class UCanvas* Canvas);
};

// Class GHMEngine.GHM_DebugMenuItemColor
// 0x0020 (0x00E0 - 0x0100)
class UGHM_DebugMenuItemColor : public UGHM_DebugMenuItemValue
{
public:
	struct FColor                                      mDispColor;                                    // 0x00E0 (0x0004) [0x0000000000000000]               
	class UGHM_DebugMenuItemColorPicker*               ColorPicker;                                   // 0x00E4 (0x0008) [0x0000000000000000]               
	unsigned long                                      bLock : 1;                                     // 0x00EC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRealTimeValueChange : 1;                      // 0x00EC (0x0004) [0x0000000000000000] [0x00000002] 
	struct FPointer                                    EditValueColor;                                // 0x00F0 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FPointer                                    EditValueVector;                               // 0x00F8 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugMenuItemColor");
		}

		return uClassPointer;
	};

	void DrawMenuItem(class UCanvas* Canvas);
	void LeftStick(float moveX, float moveY);
	void RightStick(float moveX, float moveY);
	void KeyBButton(uint8_t btn);
	void Cancel();
	void Select();
	void RealTimeValueChange(unsigned long bRTFlag);
	void UpdateRegistValue();
	void UnRegist();
	void RegistVector(struct FVector& editvalue);
	void RegistColor(struct FColor& editvalue);
	void SetColor(struct FColor scolor);
};

// Class GHMEngine.GHM_DebugMenuItemFloat
// 0x001C (0x00E0 - 0x00FC)
class UGHM_DebugMenuItemFloat : public UGHM_DebugMenuItemValue
{
public:
	float                                              Value;                                         // 0x00E0 (0x0004) [0x0000000000000000]               
	float                                              MinValue;                                      // 0x00E4 (0x0004) [0x0000000000000000]               
	float                                              MaxValue;                                      // 0x00E8 (0x0004) [0x0000000000000000]               
	int32_t                                            SelectColumn;                                  // 0x00EC (0x0004) [0x0000000000000000]               
	int32_t                                            MaxColumn;                                     // 0x00F0 (0x0004) [0x0000000000000000]               
	struct FPointer                                    EditPtr;                                       // 0x00F4 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugMenuItemFloat");
		}

		return uClassPointer;
	};

	void KeyXButton(uint8_t btn);
	void KeyRight();
	void KeyLeft();
	void KeyDown();
	void KeyUp();
	void SetNum(float Num);
	void DrawMenuItem(class UCanvas* Canvas);
	void Rev();
	void UpdateRegistValue();
	void UnRegist();
	void Regist(float& editvalue);
	void ChangeNum(int32_t addnum);
	void DrawSelectedItem(class UCanvas* Canvas);
	void DrawDefaultItem(class UCanvas* Canvas);
};

// Class GHMEngine.GHM_DebugMenuItemFloatArray
// 0x003C (0x00E0 - 0x011C)
class UGHM_DebugMenuItemFloatArray : public UGHM_DebugMenuItemValue
{
public:
	struct FPointer                                    EditPtr;                                       // 0x00E0 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	TArray<struct FSTFloatValue>                       FloatValues;                                   // 0x00E8 (0x0010) [0x0000000000003000] (CPF_Native | CPF_Transient)
	int32_t                                            EditIndex;                                     // 0x00F8 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
	TArray<class FString>                              ParamName;                                     // 0x00FC (0x0010) [0x0000000000003000] (CPF_Native | CPF_Transient)
	unsigned long                                      IsChildNode : 1;                               // 0x010C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	int32_t                                            ReptFlag;                                      // 0x0110 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            DrawingIndex;                                  // 0x0114 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            mParamCellWidth;                               // 0x0118 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugMenuItemFloatArray");
		}

		return uClassPointer;
	};

	void LeftStick(float moveX, float moveY);
	void KeyXButton(uint8_t btn);
	void KeyRight();
	void KeyLeft();
	void KeyDown();
	void KeyUp();
	void SetNum(float Num);
	void DrawMenuItem(class UCanvas* Canvas);
	void SetParamCellWidth(int32_t Width);
	void SetParamName(int32_t Index, class FString pname);
	void Rev();
	void UpdateRegistValue();
	void UnRegist();
	void Regist(TArray<float>& editvalue);
	void ChangeNum(int32_t addnum);
	void DrawSelectedItem(class UCanvas* Canvas);
	void DrawDefaultItem(class UCanvas* Canvas);
};

// Class GHMEngine.GHM_DebugMenuItemGraph
// 0x0050 (0x00E0 - 0x0130)
class UGHM_DebugMenuItemGraph : public UGHM_DebugMenuItemValue
{
public:
	struct FVector2D                                   mWindowSize;                                   // 0x00E0 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   mWindowPosition;                               // 0x00E8 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   mGraphSize;                                    // 0x00F0 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   mXAxisMinMaxRange;                             // 0x00F8 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   mYAxisMinMaxRange;                             // 0x0100 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   mGraphPaddingInsideWindow;                     // 0x0108 (0x0008) [0x0000000000000000]               
	class FString                                      mWindowTitle;                                  // 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mMenuBarHeight;                                // 0x0120 (0x0004) [0x0000000000000000]               
	float                                              mAxisLabelHeight;                              // 0x0124 (0x0004) [0x0000000000000000]               
	struct FColor                                      mAxesColour;                                   // 0x0128 (0x0004) [0x0000000000000000]               
	unsigned long                                      mbGraphWindowVisible : 1;                      // 0x012C (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugMenuItemGraph");
		}

		return uClassPointer;
	};

	void RightStick(float moveX, float moveY);
	void DrawYAxisLabelOnGraph(class UCanvas* DrawCanvas, float YAxisValue, struct FColor LabelColor);
	void DrawXAxisLabelOnGraph(class UCanvas* DrawCanvas, float XAxisValue, struct FColor LabelColor);
	void DrawGraphWindow(class UCanvas* Canvas);
	void Select();
	void DrawMenuItem(class UCanvas* Canvas);
	void SetWindowPosition(float PositionX, float PositionY);
	void SetWindowSize(float WindowSizeX, float WindowSizeY);
	void SetWindowTitle(class FString WindowTitle);
	void SetXAxisRange(float Min, float Max);
	struct FVector2D GetYAxisRange();
	struct FVector2D GetXAxisRange();
	void SetYAxisRange(float Min, float Max);
	struct FVector2D GetGraphPointInScreenSpace(float GraphValueX, float GraphValueY);
	float GetYNegativeRangeInScreenSpace();
	float GetYPositiveRangeInScreenSpace();
	float GetXNegativeRangeInScreenSpace();
	float GetXPositiveRangeInScreenSpace();
	struct FVector2D GetGraphOriginInScreenSpace();
	struct FVector2D GetGraphSizeInScreenSpace();
	struct FVector2D GetGraphWindowSizeInScreenSpace();
	struct FVector2D GetGraphWindowOriginInScreenSpace();
};

// Class GHMEngine.GHM_DebugMenuItemInt
// 0x001C (0x00E0 - 0x00FC)
class UGHM_DebugMenuItemInt : public UGHM_DebugMenuItemValue
{
public:
	int32_t                                            Value;                                         // 0x00E0 (0x0004) [0x0000000000000000]               
	int32_t                                            MinValue;                                      // 0x00E4 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxValue;                                      // 0x00E8 (0x0004) [0x0000000000000000]               
	int32_t                                            SelectColumn;                                  // 0x00EC (0x0004) [0x0000000000000000]               
	int32_t                                            MaxColumn;                                     // 0x00F0 (0x0004) [0x0000000000000000]               
	struct FPointer                                    EditPtr;                                       // 0x00F4 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugMenuItemInt");
		}

		return uClassPointer;
	};

	void KeyXButton(uint8_t btn);
	void KeyRight();
	void KeyLeft();
	void KeyDown();
	void KeyUp();
	void SetNum(int32_t Num);
	void DrawMenuItem(class UCanvas* Canvas);
	void Rev();
	void UpdateRegistValue();
	void UnRegist();
	void Regist(int32_t& editvalue);
	void ChangeNum(int32_t addnum);
	void DrawSelectedItem(class UCanvas* Canvas);
	void DrawDefaultItem(class UCanvas* Canvas);
};

// Class GHMEngine.GHM_DebugMenuItemInt64
// 0x0028 (0x00E0 - 0x0108)
class UGHM_DebugMenuItemInt64 : public UGHM_DebugMenuItemValue
{
public:
	uint64_t                                           Value;                                         // 0x00E0 (0x0008) [0x0000000000000000]               
	uint64_t                                           MinValue;                                      // 0x00E8 (0x0008) [0x0000000000000000]               
	uint64_t                                           MaxValue;                                      // 0x00F0 (0x0008) [0x0000000000000000]               
	int32_t                                            SelectColumn;                                  // 0x00F8 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxColumn;                                     // 0x00FC (0x0004) [0x0000000000000000]               
	struct FPointer                                    EditPtr;                                       // 0x0100 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugMenuItemInt64");
		}

		return uClassPointer;
	};

	void KeyXButton(uint8_t btn);
	void KeyRight();
	void KeyLeft();
	void KeyDown();
	void KeyUp();
	void SetNum(uint64_t Num);
	void DrawMenuItem(class UCanvas* Canvas);
	void Rev();
	void UpdateRegistValue();
	void UnRegist();
	void Regist(uint64_t& editvalue);
	void ChangeNum(uint64_t addnum);
	void DrawSelectedItem(class UCanvas* Canvas);
	void DrawDefaultItem(class UCanvas* Canvas);
};

// Class GHMEngine.GHM_DebugMenuItemIntArray
// 0x003C (0x00E0 - 0x011C)
class UGHM_DebugMenuItemIntArray : public UGHM_DebugMenuItemValue
{
public:
	struct FPointer                                    EditPtr;                                       // 0x00E0 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	TArray<struct FSTIntValue>                         IntValues;                                     // 0x00E8 (0x0010) [0x0000000000003000] (CPF_Native | CPF_Transient)
	int32_t                                            EditIndex;                                     // 0x00F8 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
	TArray<class FString>                              ParamName;                                     // 0x00FC (0x0010) [0x0000000000003000] (CPF_Native | CPF_Transient)
	unsigned long                                      IsChildNode : 1;                               // 0x010C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	int32_t                                            ReptFlag;                                      // 0x0110 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            DrawingIndex;                                  // 0x0114 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            mParamCellWidth;                               // 0x0118 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugMenuItemIntArray");
		}

		return uClassPointer;
	};

	void LeftStick(float moveX, float moveY);
	void KeyXButton(uint8_t btn);
	void KeyRight();
	void KeyLeft();
	void KeyDown();
	void KeyUp();
	void SetNum(float Num);
	void DrawMenuItem(class UCanvas* Canvas);
	void SetParamCellWidth(int32_t Width);
	void SetParamName(int32_t Index, class FString pname);
	void Rev();
	void UpdateRegistValue();
	void UnRegist();
	void Regist(TArray<int32_t>& editvalue);
	void ChangeNum(int32_t addnum);
	void DrawSelectedItem(class UCanvas* Canvas);
	void DrawDefaultItem(class UCanvas* Canvas);
};

// Class GHMEngine.GHM_DebugMenuItemList
// 0x0034 (0x00E0 - 0x0114)
class UGHM_DebugMenuItemList : public UGHM_DebugMenuItemValue
{
public:
	uint8_t                                            ListType;                                      // 0x00E0 (0x0001) [0x0000000000000000]               
	TArray<struct FDebugListChild>                     ItemList;                                      // 0x00E4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            SelectIndex;                                   // 0x00F4 (0x0004) [0x0000000000000000]               
	int32_t                                            ValueI;                                        // 0x00F8 (0x0004) [0x0000000000000000]               
	float                                              ValueF;                                        // 0x00FC (0x0004) [0x0000000000000000]               
	unsigned long                                      bRealTimeValueChange : 1;                      // 0x0100 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPointer                                    EditPtrI;                                      // 0x0104 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FPointer                                    EditPtrF;                                      // 0x010C (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugMenuItemList");
		}

		return uClassPointer;
	};

	void Cancel();
	void KeyRight();
	void KeyLeft();
	void KeyDown();
	void KeyUp();
	void CreateSkeltalMeshAnimList(class USkeletalMeshComponent* SMC);
	void DrawMenuItem(class UCanvas* Canvas);
	int32_t GetSelectIndex();
	struct FName GetNameValue();
	float GetFloatValue();
	int32_t GetIntValue();
	void DelListAll();
	void DelListChild(int32_t Index);
	void DelListChildByName(class FString iname);
	void AddListChildF(class FString iname, float Value);
	void AddListChildI(class FString iname, int32_t Value);
	void ChangeListType(uint8_t Type);
	void RealTimeValueChange(unsigned long bRTFlag);
	void UpdateRegistValue();
	void ChangeValue(int32_t Num);
	void UnRegist();
	void RegistF(float& editvalue);
	void RegistI(int32_t& editvalue);
};

// Class GHMEngine.GHM_DebugMenuItemVector
// 0x0050 (0x00E0 - 0x0130)
class UGHM_DebugMenuItemVector : public UGHM_DebugMenuItemValue
{
public:
	struct FVector                                     Value;                                         // 0x00E0 (0x000C) [0x0000000000000000]               
	struct FVector                                     MinValue;                                      // 0x00EC (0x000C) [0x0000000000000000]               
	struct FVector                                     MaxValue;                                      // 0x00F8 (0x000C) [0x0000000000000000]               
	int32_t                                            SelectIndex;                                   // 0x0104 (0x0004) [0x0000000000000000]               
	int32_t                                            SelectColumn[0x3];                             // 0x0108 (0x000C) [0x0000000000000000]               
	int32_t                                            MaxColumn[0x3];                                // 0x0114 (0x000C) [0x0000000000000000]               
	struct FPointer                                    EditPtr;                                       // 0x0120 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	int32_t                                            ReptFlag;                                      // 0x0128 (0x0004) [0x0000000000000000]               
	unsigned long                                      RevType2 : 1;                                  // 0x012C (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugMenuItemVector");
		}

		return uClassPointer;
	};

	void LeftStick(float moveX, float moveY);
	void KeyXButton(uint8_t btn);
	void KeyRight();
	void KeyLeft();
	void KeyDown();
	void KeyUp();
	void SetNum(struct FVector Num);
	void DrawMenuItem(class UCanvas* Canvas);
	void Rev();
	void UpdateRegistValue();
	void UnRegist();
	void Regist(struct FVector& editvalue);
	void ChangeNum(int32_t addnum);
	void DrawSelectedItem(class UCanvas* Canvas);
	void DrawDefaultItem(class UCanvas* Canvas);
};

// Class GHMEngine.GHM_DebugMenuItemWindow
// 0x001C (0x00B8 - 0x00D4)
class UGHM_DebugMenuItemWindow : public UGHM_DebugMenuItem
{
public:
	class FString                                      mWindowName;                                   // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     mWindowPos;                                    // 0x00C8 (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugMenuItemWindow");
		}

		return uClassPointer;
	};

	void LeftStick(float moveX, float moveY);
	void RightStick(float moveX, float moveY);
	void DrawMenuItem(class UCanvas* Canvas);
	void SetWindowName(class FString wname);
};

// Class GHMEngine.GHM_DebugMenuItemColorPicker
// 0x007C (0x00D4 - 0x0150)
class UGHM_DebugMenuItemColorPicker : public UGHM_DebugMenuItemWindow
{
public:
	int32_t                                            mHue;                                          // 0x00D4 (0x0004) [0x0000000000000000]               
	uint8_t                                            mSat;                                          // 0x00D8 (0x0001) [0x0000000000000000]               
	uint8_t                                            mVal;                                          // 0x00D9 (0x0001) [0x0000000000000000]               
	uint8_t                                            mAlpha;                                        // 0x00DA (0x0001) [0x0000000000000000]               
	struct FLinearColor                                SqCLU;                                         // 0x00DC (0x0010) [0x0000000000000000]               
	struct FLinearColor                                SqCRU;                                         // 0x00EC (0x0010) [0x0000000000000000]               
	struct FLinearColor                                SqCLD;                                         // 0x00FC (0x0010) [0x0000000000000000]               
	struct FLinearColor                                SqCRD;                                         // 0x010C (0x0010) [0x0000000000000000]               
	class UGHM_DebugMenuItemByte*                      RedItem;                                       // 0x011C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemByte*                      GreenItem;                                     // 0x0124 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemByte*                      BlueItem;                                      // 0x012C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemByte*                      AlphaItem;                                     // 0x0134 (0x0008) [0x0000000000000000]               
	struct FVector                                     CursorPos;                                     // 0x013C (0x000C) [0x0000000000000000]               
	struct FColor                                      CursorCol;                                     // 0x0148 (0x0004) [0x0000000000000000]               
	unsigned long                                      mLockSVWnd : 1;                                // 0x014C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mLockHueWnd : 1;                               // 0x014C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mLockAlphaWnd : 1;                             // 0x014C (0x0004) [0x0000000000000000] [0x00000004] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugMenuItemColorPicker");
		}

		return uClassPointer;
	};

	void Select();
	void LeftStick(float moveX, float moveY);
	struct FColor GetColor();
	void SetColor(struct FColor SetColor);
	void DrawMenuItem(class UCanvas* Canvas);
	void RGB2HSV(uint8_t R, uint8_t G, uint8_t B, int32_t& H, uint8_t& S, uint8_t& V);
	void HSV2RGB(int32_t H, uint8_t S, uint8_t V, uint8_t& R, uint8_t& G, uint8_t& B);
};

// Class GHMEngine.GHM_HitCheck
// 0x0000 (0x0060 - 0x0060)
class UGHM_HitCheck : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_HitCheck");
		}

		return uClassPointer;
	};

	static bool HitCheck_Capsule_Sphere(struct FVector CapPos1, struct FVector CapPos2, float CapR, struct FVector SpherePos, float SphereR);
	static bool HitCheck_Segment_Triangle(struct FVector SegmentPos1, struct FVector LinePos2, struct FVector TrianglePos1, struct FVector TrianglePos2, struct FVector TrianglePos3, struct FVector& HitPos);
	static bool HitCheck_Capsule_Capsule(struct FVector Cap1Pos1, struct FVector Cap1Pos2, float Cap1R, struct FVector Cap2Pos1, struct FVector Cap2Pos2, float Cap2R);
	static bool HitCheck_Capsule_Triangle(struct FVector CapPos1, struct FVector CapPos2, float CapR, struct FVector TrianglePos1, struct FVector TrianglePos2, struct FVector TrianglePos3);
	static void TriangleBarycenter(struct FVector TrianglePos1, struct FVector TrianglePos2, struct FVector TrianglePos3, struct FVector Position, float& U, float& V, float& W);
	static float Segment_Triangle_MinLength(struct FVector SegmentPos1, struct FVector SegmentPos2, struct FVector TrianglePos1, struct FVector TrianglePos2, struct FVector TrianglePos3);
	static struct FVector Get_Segment_Point_MinPosition(struct FVector SegmentPos1, struct FVector SegmentPos2, struct FVector PointPos);
	static float Segment_Point_MinLength(struct FVector SegmentPos1, struct FVector SegmentPos2, struct FVector PointPos);
	static float Segment_Segment_MinLength(struct FVector SegmentAPos1, struct FVector SegmentAPos2, struct FVector SegmentBPos1, struct FVector SegmentBPos2);
	static struct FVector Get_Line_Point_MinPosition(struct FVector Point, struct FVector LinePos1, struct FVector LinePos2);
};

// Class GHMEngine.GHM_ParticleModuleCameraShake
// 0x0028 (0x006C - 0x0094)
class UGHM_ParticleModuleCameraShake : public UParticleModuleCameraBase
{
public:
	class UCameraShake*                                ShakeParams;                                   // 0x006C (0x0008) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	unsigned long                                      bDoControllerVibration : 1;                    // 0x0074 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UClass*                                      RumblePredefinedWaveForm;                      // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UForceFeedbackWaveform*                      RumbleWaveform;                                // 0x0080 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	float                                              InnerRadius;                                   // 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              OuterRadius;                                   // 0x008C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FalloffExponent;                               // 0x0090 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_ParticleModuleCameraShake");
		}

		return uClassPointer;
	};

	void eventPlayWorldCameraShake(class AActor* Owner, struct FVector Epicenter);
};

// Class GHMEngine.GHM_ParticleModuleCollisionLazy
// 0x002C (0x006C - 0x0098)
class UGHM_ParticleModuleCollisionLazy : public UParticleModuleCollisionBase
{
public:
	float                                              m_fCollsionTestIntervalSeconds;                // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FRawDistributionFloat                       m_DelayAmount;                                 // 0x0070 (0x0024) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	unsigned long                                      m_bDropDetail : 1;                             // 0x0094 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      m_bDrawDebugInformation : 1;                   // 0x0094 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      m_bAllowCollisionPawns : 1;                    // 0x0094 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_ParticleModuleCollisionLazy");
		}

		return uClassPointer;
	};

	bool eventIsTestCollision(class UGHM_ParticleModuleCollisionLazy* pThis);
	void eventOnParticleCollision(class UParticleSystemComponent* OwnerComponent, class UParticleLODLevel* LODLevel, class AActor* HitActor, struct FVector HitLocation, struct FVector HitNormal, struct FTraceHitInfo HitInfo, struct FVector MoveDirection);
};

// Class GHMEngine.GHM_ParticleModuleEffectBase
// 0x0000 (0x006C - 0x006C)
class UGHM_ParticleModuleEffectBase : public UParticleModule
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_ParticleModuleEffectBase");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_ParticleModulePointLight
// 0x009C (0x006C - 0x0108)
class UGHM_ParticleModulePointLight : public UGHM_ParticleModuleEffectBase
{
public:
	struct FRawDistributionFloat                       Brightness;                                    // 0x006C (0x0024) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      LightColor;                                    // 0x0090 (0x0024) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Radius;                                        // 0x00B4 (0x0024) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FLightingChannelContainer                   LightingChannels;                              // 0x00D8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	unsigned long                                      CastShadows : 1;                               // 0x00DC (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	unsigned long                                      bAffectCompositeShadowDirection : 1;           // 0x00DC (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	unsigned long                                      bRelativeTime : 1;                             // 0x00DC (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      bHighQualityEffect : 1;                        // 0x00DC (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	unsigned long                                      bDebugForceLowQualityEffect : 1;               // 0x00DC (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	unsigned long                                      mbIsPaused : 1;                                // 0x00DC (0x0004) [0x0000000000000000] [0x00000020] 
	struct FRawDistributionVector                      Translation;                                   // 0x00E0 (0x0024) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	float                                              MaxDistance;                                   // 0x0104 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_ParticleModulePointLight");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_ParticleModuleRadialBlur
// 0x00C8 (0x006C - 0x0134)
class UGHM_ParticleModuleRadialBlur : public UGHM_ParticleModuleEffectBase
{
public:
	class UMaterialInterface*                          Material;                                      // 0x006C (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            DepthPriorityGroup;                            // 0x0074 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MaxCullDistance;                               // 0x0078 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	unsigned long                                      bRenderAsVelocity : 1;                         // 0x007C (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	unsigned long                                      bRelativeTime : 1;                             // 0x007C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	struct FRawDistributionFloat                       BlurScale;                                     // 0x0080 (0x0024) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       BlurFalloffExponent;                           // 0x00A4 (0x0024) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       BlurOpacity;                                   // 0x00C8 (0x0024) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       DistanceFalloffExponent;                       // 0x00EC (0x0024) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      Translation;                                   // 0x0110 (0x0024) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_ParticleModuleRadialBlur");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_ParticleModuleRumble
// 0x0010 (0x006C - 0x007C)
class UGHM_ParticleModuleRumble : public UGHM_ParticleModuleEffectBase
{
public:
	class UClass*                                      RumblePredefinedWaveForm;                      // 0x006C (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UForceFeedbackWaveform*                      RumbleWaveform;                                // 0x0074 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_ParticleModuleRumble");
		}

		return uClassPointer;
	};

	void eventPlayForceFeedbackWaveform(class AActor* Owner);
};

// Class GHMEngine.GHM_ParticleModuleEventReceiverStopSpawning
// 0x0000 (0x0078 - 0x0078)
class UGHM_ParticleModuleEventReceiverStopSpawning : public UParticleModuleEventReceiverBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_ParticleModuleEventReceiverStopSpawning");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_ParticleModuleKillBox
// 0x0008 (0x00B8 - 0x00C0)
class UGHM_ParticleModuleKillBox : public UParticleModuleKillBox
{
public:
	unsigned long                                      bContinuousTest : 1;                           // 0x00B8 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bUseOpacityFade : 1;                           // 0x00B8 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              OpacityFadeSeconds;                            // 0x00BC (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_ParticleModuleKillBox");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_ParticleModuleKillSphere
// 0x0050 (0x006C - 0x00BC)
class UGHM_ParticleModuleKillSphere : public UParticleModuleKillBase
{
public:
	struct FRawDistributionVector                      Center;                                        // 0x006C (0x0024) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Radius;                                        // 0x0090 (0x0024) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	unsigned long                                      bAbsolute : 1;                                 // 0x00B4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bKillInside : 1;                               // 0x00B4 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bContinuousTest : 1;                           // 0x00B4 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      bUseOpacityFade : 1;                           // 0x00B4 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	float                                              OpacityFadeSeconds;                            // 0x00B8 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_ParticleModuleKillSphere");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_ParticleModulePlaySoundBase
// 0x0000 (0x006C - 0x006C)
class UGHM_ParticleModulePlaySoundBase : public UParticleModule
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_ParticleModulePlaySoundBase");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_ParticleModulePlaySound
// 0x001C (0x006C - 0x0088)
class UGHM_ParticleModulePlaySound : public UGHM_ParticleModulePlaySoundBase
{
public:
	class USoundCue*                                   m_SoundCueToPlay;                              // 0x006C (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_bPlayOnlyOnce;                               // 0x0074 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FDouble                                     m_LastPlayTimeStamp;                           // 0x0078 (0x0008) [0x0000000000000000]               
	float                                              m_fStopSoundFadeOutTime;                       // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      m_bStopSoundWhenParticleFinished : 1;          // 0x0084 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      m_bSoundEffectHasPlayed : 1;                   // 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_ParticleModulePlaySound");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_InterpTrackInstSkelControlWeight
// 0x0000 (0x0060 - 0x0060)
class UGHM_InterpTrackInstSkelControlWeight : public UInterpTrackInst
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_InterpTrackInstSkelControlWeight");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_InterpTrackSkelControlWeight
// 0x0008 (0x00D8 - 0x00E0)
class UGHM_InterpTrackSkelControlWeight : public UInterpTrackFloatBase
{
public:
	struct FName                                       SkelControlNodeName;                           // 0x00D8 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_InterpTrackSkelControlWeight");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_DominantPointLightMovable
// 0x0000 (0x0288 - 0x0288)
class AGHM_DominantPointLightMovable : public ADominantPointLight
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DominantPointLightMovable");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_DominantSpotLightMovable
// 0x0000 (0x0288 - 0x0288)
class AGHM_DominantSpotLightMovable : public ADominantSpotLight
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DominantSpotLightMovable");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_MaterialExpressionGlareTexture
// 0x0038 (0x00B8 - 0x00F0)
class UGHM_MaterialExpressionGlareTexture : public UMaterialExpression
{
public:
	struct FExpressionInput                            m_Coordinates;                                 // 0x00B8 (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      m_bScreenAlign : 1;                            // 0x00EC (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_MaterialExpressionGlareTexture");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_MaterialExpressionLocalPosition
// 0x0000 (0x00B8 - 0x00B8)
class UGHM_MaterialExpressionLocalPosition : public UMaterialExpression
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_MaterialExpressionLocalPosition");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_MaterialExpressionNormalFromSpecialMaskTexture
// 0x0039 (0x00B8 - 0x00F1)
class UGHM_MaterialExpressionNormalFromSpecialMaskTexture : public UMaterialExpression
{
public:
	struct FExpressionInput                            Coordinates;                                   // 0x00B8 (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      ScreenAlign : 1;                               // 0x00EC (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                            Space;                                         // 0x00F0 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_MaterialExpressionNormalFromSpecialMaskTexture");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_MaterialExpressionSpecialMaskTexture
// 0x0038 (0x00B8 - 0x00F0)
class UGHM_MaterialExpressionSpecialMaskTexture : public UMaterialExpression
{
public:
	struct FExpressionInput                            Coordinates;                                   // 0x00B8 (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      ScreenAlign : 1;                               // 0x00EC (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_MaterialExpressionSpecialMaskTexture");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_MaterialExpressionStaticSwitchParameter
// 0x0020 (0x00D8 - 0x00F8)
class UGHM_MaterialExpressionStaticSwitchParameter : public UMaterialExpressionParameter
{
public:
	int32_t                                            DefaultValue;                                  // 0x00D8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      ExtendedCaptionDisplay : 1;                    // 0x00DC (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	TArray<struct FCustomInput>                        Inputs;                                        // 0x00E0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FPointer                                    InstanceOverride;                              // 0x00F0 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_MaterialExpressionStaticSwitchParameter");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SeqAct_ControlMovie
// 0x0018 (0x0170 - 0x0188)
class UGHM_SeqAct_ControlMovie : public USeqAct_Latent
{
public:
	class FString                                      MovieName;                                     // 0x0170 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned long                                      bLoopPlay : 1;                                 // 0x0180 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bFromMemory : 1;                               // 0x0180 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      m_bWaitingFirstFrame : 1;                      // 0x0180 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	unsigned long                                      bImmediateSkip : 1;                            // 0x0180 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	int32_t                                            mStartCanImmediateSkipOffsetTime;              // 0x0184 (0x0004) [0x0000000000004000] (CPF_Config)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_ControlMovie");
		}

		return uClassPointer;
	};

	static int32_t eventGetObjClassVersion();
	void eventClearInput();
};

// Class GHMEngine.GHM_SeqAct_DspFXChain
// 0x0054 (0x0170 - 0x01C4)
class UGHM_SeqAct_DspFXChain : public USeqAct_Latent
{
public:
	unsigned long                                      m_bEnabled : 1;                                // 0x0170 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	TArray<struct FName>                               m_EffectList;                                  // 0x0174 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            m_FXChainId;                                   // 0x0184 (0x0004) [0x0000000000000000]               
	class FString                                      m_SelectedEffect;                              // 0x0188 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      m_SelectedParameter;                           // 0x0198 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              m_fParamValue;                                 // 0x01A8 (0x0004) [0x0000000000000000]               
	float                                              m_fInterpolationTime;                          // 0x01AC (0x0004) [0x0000000000000000]               
	uint8_t                                            m_Route;                                       // 0x01B0 (0x0001) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FGHM_DspFXChain_EffectList>          m_Effects;                                     // 0x01B4 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_DspFXChain");
		}

		return uClassPointer;
	};

	void eventSetParameterValue();
	void eventToggleEffect(unsigned long inOnOff);
	void eventDestroyChain();
	void eventCreateChain();
	struct FName GetEffectName(uint8_t inEffectType);
};

// Class GHMEngine.GHM_SeqAct_ObjectFade
// 0x001C (0x0170 - 0x018C)
class UGHM_SeqAct_ObjectFade : public USeqAct_Latent
{
public:
	float                                              StartOpacity;                                  // 0x0170 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TargetOpacity;                                 // 0x0174 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeDuration;                                  // 0x0178 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bDestroy : 1;                                  // 0x017C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bFadeActive : 1;                               // 0x017C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              RemainingTime;                                 // 0x0180 (0x0004) [0x0000000000000000]               
	struct FDouble                                     LastUpdateTime;                                // 0x0184 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_ObjectFade");
		}

		return uClassPointer;
	};

	void eventHideActors();
	void eventDestroyTargets();
	void eventStartFade();
};

// Class GHMEngine.GHM_SeqAct_PlayBgm
// 0x0018 (0x019C - 0x01B4)
class UGHM_SeqAct_PlayBgm : public USeqAct_PlaySound
{
public:
	struct FName                                       m_nFilename;                                   // 0x019C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       m_SoundClass;                                  // 0x01A4 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fRearChannelVolumeMultiplier;                // 0x01AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      m_bRequestPreloadEvent : 1;                    // 0x01B0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      m_bMatineeSkip : 1;                            // 0x01B0 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      m_bOneShot : 1;                                // 0x01B0 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      m_bPlayed : 1;                                 // 0x01B0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bPreLoadProcess : 1;                         // 0x01B0 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bError : 1;                                  // 0x01B0 (0x0004) [0x0000000000000000] [0x00000020] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_PlayBgm");
		}

		return uClassPointer;
	};

	void eventTriggerEventClass();
	static int32_t eventGetObjClassVersion();
};

// Class GHMEngine.GHM_SeqAct_PlaySound
// 0x0040 (0x019C - 0x01DC)
class UGHM_SeqAct_PlaySound : public USeqAct_PlaySound
{
public:
	class UAudioComponent*                             m_NewestAudioComponent;                        // 0x019C (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            m_DspFxChainId;                                // 0x01A4 (0x0004) [0x0000000000000000]               
	float                                              m_fPitchTargetValue;                           // 0x01A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fPitchChangeSpeed;                           // 0x01AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fPitchChangeTimer;                           // 0x01B0 (0x0004) [0x0000000000000000]               
	float                                              m_fPitchBeforeValue;                           // 0x01B4 (0x0004) [0x0000000000000000]               
	float                                              m_fPitchCachedTargetValue;                     // 0x01B8 (0x0004) [0x0000000000000000]               
	float                                              m_fPitchCachedChangeSpeed;                     // 0x01BC (0x0004) [0x0000000000000000]               
	unsigned long                                      m_bPitchAnimating : 1;                         // 0x01C0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bVolumeAnimating : 1;                        // 0x01C0 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_fVolumeTargetValue;                          // 0x01C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fVolumeChangeSpeed;                          // 0x01C8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fVolumeChangeTimer;                          // 0x01CC (0x0004) [0x0000000000000000]               
	float                                              m_fVolumeBeforeValue;                          // 0x01D0 (0x0004) [0x0000000000000000]               
	float                                              m_fVolumeCachedTargetValue;                    // 0x01D4 (0x0004) [0x0000000000000000]               
	float                                              m_fVolumeCachedChangeSpeed;                    // 0x01D8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_PlaySound");
		}

		return uClassPointer;
	};

	static int32_t eventGetObjClassVersion();
};

// Class GHMEngine.GHM_SeqAct_PlaySoundMarker
// 0x00B0 (0x0170 - 0x0220)
class UGHM_SeqAct_PlaySoundMarker : public USeqAct_Latent
{
public:
	class FString                                      _Identifier;                                   // 0x0170 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned long                                      bIgnoreFade : 1;                               // 0x0180 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bActionStateSetter : 1;                        // 0x0180 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	unsigned long                                      bRegisteredForMarkerCallback : 1;              // 0x0180 (0x0004) [0x0000000000000000] [0x00000004] 
	class FString                                      SelectedActionName;                            // 0x0184 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FGHM_SoundWithMarkers_TrackInfo>     SoundTrackInfoSlots;                           // 0x0194 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FGHM_SoundWithMarkers_Action>        Actions;                                       // 0x01A4 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class FString>                              ActionNames;                                   // 0x01B4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              tempNames;                                     // 0x01C4 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            SelectedTrackIndex;                            // 0x01D4 (0x0004) [0x0000000000000000]               
	class FString                                      SelectedOffsetMarkerLabel;                     // 0x01D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SelectedEndMarkerLabel;                        // 0x01E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LastMarkerFoundName;                           // 0x01F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            IndexTrackToSwitch;                            // 0x0208 (0x0004) [0x0000000000000000]               
	uint8_t                                            CurrentUseMode;                                // 0x020C (0x0001) [0x0000000000000001] (CPF_Edit)    
	class FString                                      OverrideActionName;                            // 0x0210 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_PlaySoundMarker");
		}

		return uClassPointer;
	};

	void OverrideNext(class FString inActionName, int32_t inTrackIndex, class FString inMarkerLabel, class FString inEndMarkerLabel);
	void SetActionEnabled(unsigned long inIsEnabled, class FString inActionName);
	void PerformPresetAction_Manual(class FString inActionName);
	void SetPerformMode(uint8_t inNewMode);
	void MarkerNotification(float Time, int32_t markerIndex, class FString markerName);
	void eventUnregister();
	void eventRegisterForMarkerCallback();
};

// Class GHMEngine.GHM_SeqAct_RawInput
// 0x0034 (0x0170 - 0x01A4)
class UGHM_SeqAct_RawInput : public USeqAct_Latent
{
public:
	float                                              RawJoyUp;                                      // 0x0170 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RawJoyRight;                                   // 0x0174 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RawJoyLookUp;                                  // 0x0178 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RawJoyLookRight;                               // 0x017C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LeftAnalogTrigger;                             // 0x0180 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RightAnalogTrigger;                            // 0x0184 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              JoyUpScale;                                    // 0x0188 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              JoyRightScale;                                 // 0x018C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              JoyLookUpScale;                                // 0x0190 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              JoyLookRightScale;                             // 0x0194 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LeftAnalogTriggerScale;                        // 0x0198 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RightAnalogTriggerScale;                       // 0x019C (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bEnabled : 1;                                  // 0x01A0 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_RawInput");
		}

		return uClassPointer;
	};

	static int32_t eventGetObjClassVersion();
	bool eventUpdate(float DeltaTime);
	void eventActivated();
};

// Class GHMEngine.GHM_SeqAct_ResetSkelControls
// 0x0000 (0x0154 - 0x0154)
class UGHM_SeqAct_ResetSkelControls : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_ResetSkelControls");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SeqAct_SetAudioParameter
// 0x0014 (0x0170 - 0x0184)
class UGHM_SeqAct_SetAudioParameter : public USeqAct_Latent
{
public:
	class USoundCue*                                   m_TargetSoundCue;                              // 0x0170 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_Type;                                        // 0x0178 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              m_Value;                                       // 0x017C (0x0004) [0x0000000000000000]               
	float                                              m_ConvertedValue;                              // 0x0180 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_SetAudioParameter");
		}

		return uClassPointer;
	};

	void eventSendSignal();
};

// Class GHMEngine.GHM_SeqAct_StreamInMatineeActorsTextures
// 0x0008 (0x0154 - 0x015C)
class UGHM_SeqAct_StreamInMatineeActorsTextures : public USequenceAction
{
public:
	float                                              Seconds;                                       // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FTextureGroupContainer                      CinematicTextureGroups;                        // 0x0158 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_StreamInMatineeActorsTextures");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SeqAct_ToggleAutoRevertPostProcessSettings
// 0x0000 (0x0154 - 0x0154)
class UGHM_SeqAct_ToggleAutoRevertPostProcessSettings : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_ToggleAutoRevertPostProcessSettings");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SeqAct_WaitForMovieFinish
// 0x0010 (0x0170 - 0x0180)
class UGHM_SeqAct_WaitForMovieFinish : public USeqAct_Latent
{
public:
	class FString                                      MovieName;                                     // 0x0170 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_WaitForMovieFinish");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SeqCond_CompareString
// 0x0020 (0x0138 - 0x0158)
class UGHM_SeqCond_CompareString : public USequenceCondition
{
public:
	class FString                                      ValueA;                                        // 0x0138 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      ValueB;                                        // 0x0148 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqCond_CompareString");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SeqCond_IsCircleToAccept
// 0x0000 (0x0138 - 0x0138)
class UGHM_SeqCond_IsCircleToAccept : public USequenceCondition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqCond_IsCircleToAccept");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SeqCond_SwitchString
// 0x0010 (0x0138 - 0x0148)
class UGHM_SeqCond_SwitchString : public USeqCond_SwitchBase
{
public:
	TArray<struct FSwitchStringInfo>                   ClassArray;                                    // 0x0138 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqCond_SwitchString");
		}

		return uClassPointer;
	};

	void eventRemoveValueEntry(int32_t RemoveIndex);
	void eventInsertValueEntry(int32_t InsertIndex);
	bool eventIsFallThruEnabled(int32_t ValueIndex);
	void eventVerifyDefaultCaseValue();
};

// Class GHMEngine.GHM_SeqEvent_RawButtons
// 0x0014 (0x0178 - 0x018C)
class UGHM_SeqEvent_RawButtons : public USequenceEvent
{
public:
	unsigned long                                      X : 1;                                         // 0x0178 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      Y : 1;                                         // 0x0178 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      A : 1;                                         // 0x0178 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      B : 1;                                         // 0x0178 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	unsigned long                                      LeftShoulder : 1;                              // 0x0178 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	unsigned long                                      RightShoulder : 1;                             // 0x0178 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	unsigned long                                      LeftTrigger : 1;                               // 0x0178 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	unsigned long                                      RightTrigger : 1;                              // 0x0178 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	unsigned long                                      DPad_Up : 1;                                   // 0x0178 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	unsigned long                                      DPad_Down : 1;                                 // 0x0178 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	unsigned long                                      DPad_Left : 1;                                 // 0x0178 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	unsigned long                                      DPad_Right : 1;                                // 0x0178 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	unsigned long                                      Start : 1;                                     // 0x0178 (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
	unsigned long                                      BackButton : 1;                                // 0x0178 (0x0004) [0x0000000000000001] [0x00002000] (CPF_Edit)
	unsigned long                                      LeftThumbStick : 1;                            // 0x0178 (0x0004) [0x0000000000000001] [0x00004000] (CPF_Edit)
	unsigned long                                      RightThumbStick : 1;                           // 0x0178 (0x0004) [0x0000000000000001] [0x00008000] (CPF_Edit)
	unsigned long                                      bConsumeEvent : 1;                             // 0x0178 (0x0004) [0x0000000000000001] [0x00010000] (CPF_Edit)
	uint8_t                                            PushType;                                      // 0x017C (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ControllerNumber;                              // 0x0180 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UGHM_GameViewportClient*                     CachedViewport;                                // 0x0184 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqEvent_RawButtons");
		}

		return uClassPointer;
	};

	bool eventButtonPressed(struct FName ButtonName, uint8_t EventType, int32_t ControllerId);
	static int32_t eventGetObjClassVersion();
	void eventToggled();
	void RegisterWithViewport();
	void eventRegisterEvent();
};

// Class GHMEngine.GHM_AmbientSoundMovable
// 0x0014 (0x0294 - 0x02A8)
class AGHM_AmbientSoundMovable : public AAmbientSoundMovable
{
public:
	unsigned long                                      bFadeOnToggle : 1;                             // 0x0294 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              FadeInDuration;                                // 0x0298 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeInVolumeLevel;                             // 0x029C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutDuration;                               // 0x02A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutVolumeLevel;                            // 0x02A4 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AmbientSoundMovable");
		}

		return uClassPointer;
	};

	void ApplyCheckpointRecord(struct AGHM_AmbientSoundMovable_FCheckpointRecord& Record);
	void CreateCheckpointRecord(struct AGHM_AmbientSoundMovable_FCheckpointRecord& Record);
	void OnToggle(class USeqAct_Toggle* Action);
	void StopPlaying();
	void StartPlaying();
};

// Class GHMEngine.GHM_AudioDspFX
// 0x0000 (0x0060 - 0x0060)
class UGHM_AudioDspFX : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AudioDspFX");
		}

		return uClassPointer;
	};

	bool UpdateParameter(class UGHM_AudioDspFXParameter* inDspFXParameter);
	void InitializeEffect(struct FName inEffectName, class UGHM_AudioDspFXParams* inDspFXParameters, class UGHM_AudioDspFXLibrary* inDspFXLibrary);
};

// Class GHMEngine.GHM_AudioDspFXChain
// 0x0000 (0x0060 - 0x0060)
class UGHM_AudioDspFXChain : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AudioDspFXChain");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_AudioDspFXChainTemplate
// 0x0000 (0x0060 - 0x0060)
class UGHM_AudioDspFXChainTemplate : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AudioDspFXChainTemplate");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_AudioDspFXLibrary
// 0x0000 (0x0060 - 0x0060)
class UGHM_AudioDspFXLibrary : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AudioDspFXLibrary");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_AudioDspFXManager
// 0x0000 (0x0060 - 0x0060)
class UGHM_AudioDspFXManager : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AudioDspFXManager");
		}

		return uClassPointer;
	};

	void SetEffectParameter(int32_t inDspFXChainId, int32_t inDspFxEffectIndex, class UGHM_AudioDspFXParameter* inDspFXParameter);
	void ToggleEffect(int32_t inDspFXChainId, int32_t inDspFxEffectIndex, unsigned long inDspOnOff);
	void DestroyEffectChain(int32_t inDspFXChainId);
	int32_t CreateEffectChain(TArray<struct FName> EffectsNames, uint8_t inLevel);
};

// Class GHMEngine.GHM_AudioDspFXParameter
// 0x0000 (0x0060 - 0x0060)
class UGHM_AudioDspFXParameter : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AudioDspFXParameter");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_AudioDspFXParamInterpolationRequest
// 0x0000 (0x0060 - 0x0060)
class UGHM_AudioDspFXParamInterpolationRequest : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AudioDspFXParamInterpolationRequest");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_AudioDspFXParams
// 0x0000 (0x0060 - 0x0060)
class UGHM_AudioDspFXParams : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_AudioDspFXParams");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_GameSoundHelper
// 0x0010 (0x0060 - 0x0070)
class UGHM_GameSoundHelper : public UObject
{
public:
	TArray<class UGHM_SeqAct_PlaySoundMarker*>         KismetPlaySoundWithMarkersArray;               // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_GameSoundHelper");
		}

		return uClassPointer;
	};

	class UGHM_SeqAct_PlaySoundMarker* FindPlaySoundWithMarkerInstance(class FString inSoundMarkerIdentifier);
	void SetGamePause(unsigned long flag);
	void eventGamePause(unsigned long bInSetPause);
	void eventInitialize();
	void eventUnregisterAll();
	void UnregisterPlaySoundWithMarker(class UGHM_SeqAct_PlaySoundMarker* inPlaySoundMarkerToUnRegister);
	void RegisterPlaySoundWithMarker(class UGHM_SeqAct_PlaySoundMarker* inPlaySoundMarkerToRegister);
	void ReceiveSoundMarker(float inTime, int32_t inMarkerIndex, class FString inMarkerName);
};

// Class GHMEngine.GHM_SoundCueLimitGroup
// 0x0020 (0x0060 - 0x0080)
class UGHM_SoundCueLimitGroup : public UObject
{
public:
	int32_t                                            m_LimitCount;                                  // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class USoundCue*>                           m_SoundCueList;                                // 0x0064 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UAudioComponent*                             m_OldestAudioComponent;                        // 0x0074 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            MenuID;                                        // 0x007C (0x0004) [0x0000000800000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SoundCueLimitGroup");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SoundDebugUtility
// 0x017C (0x0060 - 0x01DC)
class UGHM_SoundDebugUtility : public UObject
{
public:
	class UAudioComponent*                             m_SpatializeTestAudioComponent;                // 0x0060 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class APlayerController*                           PC;                                            // 0x0068 (0x0008) [0x0000000000000000]               
	struct FVector                                     StoredLocation;                                // 0x0070 (0x000C) [0x0000000000000000]               
	struct FMatrix                                     ListenerTransform;                             // 0x0080 (0x0040) [0x0000000000000000]               
	float                                              UpdateInterval;                                // 0x00C0 (0x0004) [0x0000000000000000]               
	TArray<class FString>                              SoundNameStrings;                              // 0x00C4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              SoundClassStrings;                             // 0x00D4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              SoundPriorityStrings;                          // 0x00E4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              SoundPlaybackTimeStrings;                      // 0x00F4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              SoundDurationStrings;                          // 0x0104 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              SoundVolumeStrings;                            // 0x0114 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              SoundVolumeMultiplierStrings;                  // 0x0124 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              SoundSpatializeStrings;                        // 0x0134 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              SoundLocationStrings;                          // 0x0144 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              SoundOwnerStrings;                             // 0x0154 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              SoundDestroyWithOwnerStrings;                  // 0x0164 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              SoundPlayCountStrings;                         // 0x0174 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FStoppedSoundInfo>                   m_StopppedSoundInfos;                          // 0x0184 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FSoundModeHistoryInfo>               m_SoundModeHistoryInfos;                       // 0x0194 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      m_bShowSoundListBackground : 1;                // 0x01A4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bShowStoppedSoundHistory : 1;                // 0x01A4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bShowSoundModeHistory : 1;                   // 0x01A4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bShowSoundModeExclusive : 1;                 // 0x01A4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bShowBgmStreamInfo : 1;                      // 0x01A4 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bShowSound2D : 1;                            // 0x01A4 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bShowSound3D : 1;                            // 0x01A4 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      m_bShowOwnerNameOnDebugView : 1;               // 0x01A4 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      m_bShowSpeakerVolumeSetting : 1;               // 0x01A4 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      m_bDisplayReverbName : 1;                      // 0x01A4 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      m_bEnableRadioFilterForMusic : 1;              // 0x01A4 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      m_bDisplayRadioFilterForMusicState : 1;        // 0x01A4 (0x0004) [0x0000000000000000] [0x00000800] 
	float                                              m_fSound2DScale;                               // 0x01A8 (0x0004) [0x0000000000000000]               
	float                                              m_fSound2DScrollX;                             // 0x01AC (0x0004) [0x0000000000000000]               
	float                                              m_fSound2DScrollY;                             // 0x01B0 (0x0004) [0x0000000000000000]               
	struct FDouble                                     SoundListLastUpdateTime;                       // 0x01B4 (0x0008) [0x0000000000000000]               
	TArray<struct FName>                               m_DisplaySoundClassList;                       // 0x01BC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              m_DisplayOwnerActorNameList;                   // 0x01CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SoundDebugUtility");
		}

		return uClassPointer;
	};

	void ResetSoundDisplay2DValues();
	void eventSetSoundCue(class USoundCue* InSoundCue);
	static class UGHM_SoundDebugUtility* Instance();
};

// Class GHMEngine.GHM_SoundManager
// 0x06FC (0x0060 - 0x075C)
class UGHM_SoundManager : public UGHM_SoundManager_Base
{
public:
	int32_t                                            AudioDebugFlags;                               // 0x0060 (0x0004) [0x0000000000000000]               
	class UGHM_GameSoundHelper*                        m_GameSoundHelper;                             // 0x0064 (0x0008) [0x0000000000000000]               
	uint8_t                                           UnknownData00[0x48];                           // 0x006C (0x0048) UNKNOWN PROPERTY: MapProperty GHMEngine.GHM_SoundManager.m_StoredSoundClassVolumes
	class FString                                      SelectedLanguage;                              // 0x00B4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UGHM_SoundCueLimitGroup*>             m_ActiveLimitGroups;                           // 0x00C4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            m_MaxPauseRequestCount;                        // 0x00D4 (0x0004) [0x0000000000000000]               
	struct FTimedSoundPauseRequest                     m_PauseRequests[0x20];                         // 0x00D8 (0x0480) [0x0000000000080000] (CPF_Component)
	unsigned long                                      m_bEnabledTweekSoundVolume : 1;                // 0x0558 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_NPCTalkModeEnable : 1;                       // 0x0558 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_fPlatformVolumeMultiplierAll;                // 0x055C (0x0004) [0x0000000000004000] (CPF_Config)  
	TArray<float>                                      m_fPlatformVolumeMultiplier1Chs;               // 0x0560 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<float>                                      m_fPlatformVolumeMultiplier2Chs;               // 0x0570 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<float>                                      m_fPlatformVolumeMultiplier4Chs;               // 0x0580 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<float>                                      m_fPlatformVolumeMultiplier6Chs;               // 0x0590 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	uint8_t                                            m_SurroundFormatMode;                          // 0x05A0 (0x0001) [0x0000000000000000]               
	TArray<struct FPointer>                            m_BGMInfo;                                     // 0x05A4 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            m_iHandleBase;                                 // 0x05B4 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FName                                       m_nBaseDir;                                    // 0x05B8 (0x0008) [0x0000000000000000]               
	struct FReverbTuningParam                          m_ReverbTuningParam;                           // 0x05C0 (0x0034) [0x0000000000000000]               
	int32_t                                            m_iListenerFollowPlayer;                       // 0x05F4 (0x0004) [0x0000000000000000]               
	int32_t                                            m_iForceBgm10Sec;                              // 0x05F8 (0x0004) [0x0000000000000000]               
	struct FName                                       m_NPCTalkModeBackSoundModeName;                // 0x05FC (0x0008) [0x0000000000000000]               
	struct FName                                       m_NarrationSoundModeName;                      // 0x0604 (0x0008) [0x0000000000000000]               
	struct FName                                       m_NarrationPadSoundModeName;                   // 0x060C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItem*                          m_DebugMenuItemSoundMenu;                      // 0x0614 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItem*                          m_DebugMenuItemSoundVolumeMultipler;           // 0x061C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloat*                     m_DebugMenuItemSoundVolumeMultiplerAll;        // 0x0624 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloatArray*                m_DebugMenuItemSoundVolumeMultipler1Chs;       // 0x062C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloatArray*                m_DebugMenuItemSoundVolumeMultipler2Chs;       // 0x0634 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloatArray*                m_DebugMenuItemSoundVolumeMultipler4Chs;       // 0x063C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloatArray*                m_DebugMenuItemSoundVolumeMultipler6Chs;       // 0x0644 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemButton*                    m_DebugMenuItemButtonDumpVolumeSetting;        // 0x064C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemButton*                    m_DebugMenuItemButtonToggleTweekSoundVolume;   // 0x0654 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItem*                          m_DebugMenuItemSoundDisplay;                   // 0x065C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemButton*                    m_DebugMenuItemButtonSoundDisplay2D;           // 0x0664 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemButton*                    m_DebugMenuItemButtonSoundDisplay3D;           // 0x066C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItem*                          m_DebugMenuItemSoundDisplayFilter;             // 0x0674 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemList*                      m_DebugMenuItemSoundDisplayFilterSoundClassList;// 0x067C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemList*                      m_DebugMenuItemSoundDisplayFilterActorList;    // 0x0684 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemButton*                    m_DebugMenuItemButtonSoundDisplayFilterSoundClassClear;// 0x068C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemButton*                    m_DebugMenuItemButtonSoundDisplayFilterResetActorList;// 0x0694 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItem*                          m_DebugMenuItemSoundDisplay2DSettings;         // 0x069C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloat*                     m_DebugMenuItemSoundDisplay2DScale;            // 0x06A4 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloat*                     m_DebugMenuItemSoundDisplay2DScrollX;          // 0x06AC (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloat*                     m_DebugMenuItemSoundDisplay2DScrollY;          // 0x06B4 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemButton*                    m_DebugMenuItemSoundDisplay2DResetValues;      // 0x06BC (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemBool*                      m_DebugMenuItemBoolListenerFollowPlayer;       // 0x06C4 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemBool*                      m_DebugMenuItemBoolForceBgm10Sec;              // 0x06CC (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemButton*                    m_DebugMenuItemReverbName;                     // 0x06D4 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemButton*                    m_DebugMenuItemReverbDump;                     // 0x06DC (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItem*                          m_DebugMenuItemReverbTuning;                   // 0x06E4 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloat*                     m_DebugMenuItemReverbTuningDensity;            // 0x06EC (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloat*                     m_DebugMenuItemReverbTuningDiffusion;          // 0x06F4 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloat*                     m_DebugMenuItemReverbTuningGain;               // 0x06FC (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloat*                     m_DebugMenuItemReverbTuningGainHF;             // 0x0704 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloat*                     m_DebugMenuItemReverbTuningDecayTime;          // 0x070C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloat*                     m_DebugMenuItemReverbTuningDecayHFRatio;       // 0x0714 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloat*                     m_DebugMenuItemReverbTuningReflectionsGain;    // 0x071C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloat*                     m_DebugMenuItemReverbTuningReflectionsDelay;   // 0x0724 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloat*                     m_DebugMenuItemReverbTuningLateGain;           // 0x072C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloat*                     m_DebugMenuItemReverbTuningLateDelay;          // 0x0734 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloat*                     m_DebugMenuItemReverbTuningAirAbsorptionGainHF;// 0x073C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemFloat*                     m_DebugMenuItemReverbTuningRoomRolloffFactor;  // 0x0744 (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemButton*                    m_DebugMenuItemEnableRadioFilterForMusic;      // 0x074C (0x0008) [0x0000000000000000]               
	class UGHM_DebugMenuItemButton*                    m_DebugMenuItemDisplayRadioFilterForMusicState;// 0x0754 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SoundManager");
		}

		return uClassPointer;
	};

	void ToggleTweekSoundVolume();
	void DumpSoundVolumeSettings();
	void eventDeleteDebugMenuItems(class UGHM_DebugMenu* DebugMenu);
	class UGHM_SoundDebugUtility* GetSoundDebugUtility();
	void ResetSoundDisplay2DValues();
	void SeeSound();
	void SeeSound2D();
	void DebugMenuExecCommand_DisplayFilterOwnerActor();
	void DebugMenuExecCommand_ResetSoundDisplayActorList();
	void DebugMenuExecCommand_ClearDisplayFilterSoundClass();
	void DebugMenuExecCommand_DisplayFilterSoundClass();
	void MyConsoleCommand(class FString Cmd);
	void ToggleDisplayRadioFilterState();
	void eventSetRadioFilterForMusicToDebugMenu(unsigned long InEnableRadioFilterForMusic);
	void SetRadioFilterForMusic(unsigned long enableRadioFilterForMusic);
	void ToggleRadioFilterForMusic();
	void DumpReverbAll();
	void ToggleDisplayReverbName();
	void ApplyReverbTuning(struct FReverbTuningParam InReverbTuningParam);
	void ApplyReverbTuningDelegate();
	void eventReverbChanged(struct FReverbTuningParam InReverbTuningParam);
	void AddDebugMenuTuningReverb(class UGHM_DebugMenu* DebugMenu);
	void AddDebugMenuDisplaySoundClassMenu(class UGHM_DebugMenu* DebugMenu);
	bool GetSoundClassList(TArray<struct FName>& OutSoundClassList);
	void AddDebugMenuItems(class UGHM_DebugMenu* DebugMenu);
	bool DspFXToggleEffect(int32_t inFxChainId, struct FName inEffectName, unsigned long inEnabled);
	bool DspFXSetParameterValue(int32_t inFxChainId, struct FName inEffectName, struct FName inParameterName, float inFloatParam, float inInterpolation);
	void DspFXDestroyChain(int32_t inFxChainId);
	int32_t DspFXCreateChain(TArray<struct FName> inEffectNames, uint8_t inLevel);
	void eventMarkerEvent(float inTime, int32_t inMarkerIndex, class FString inMarkerName);
	void SetSoundClassVolume(struct FName SoundClassName, float Volume);
	void FadeOutBgm(int32_t Handle, float FadeOutDuration, float FadeVolumeLevel);
	void FadeInBgm(int32_t Handle, float FadeInDuration, float FadeVolumeLevel);
	int32_t GetBgmUsedMemorySize();
	bool IsPlayBgmN(struct FName Filename);
	bool IsPlayBgm(int32_t Handle);
	bool IsFadingOutBgmN(struct FName Filename);
	bool IsFadingOutBgm(int32_t Handle);
	bool IsFadingInBgmN(struct FName Filename);
	bool IsFadingInBgm(int32_t Handle);
	void UnPauseBgm(int32_t Handle);
	void UnPauseBgmN(struct FName Filename);
	void PauseBgm(int32_t Handle);
	void PauseBgmN(struct FName Filename);
	void StopAllMatineeSkipBgm(float in_fadeTime);
	void StopAllBgm(float in_fadeTime);
	void StopBgm(int32_t Handle, float in_fadeTime);
	void StopBgmN(struct FName Filename, float in_fadeTime);
	void PlayBgm(int32_t Handle, float in_startVol, float in_endVol, float in_fadeTime, struct FName SoundClass, float in_RearChannelVolumeMultiplier, unsigned long m_bOneShot, unsigned long bMatineeSkip);
	void PlayBgmN(struct FName Filename, float in_startVol, float in_endVol, float in_fadeTime, struct FName SoundClass, float in_RearChannelVolumeMultiplier, unsigned long m_bOneShot, unsigned long bMatineeSkip);
	bool IsPreLoadedN(struct FName Filename);
	bool IsPreLoaded(int32_t InHandle);
	int32_t PreLoadBgm(struct FName Filename);
	class UGHM_GameSoundHelper* GetGameSoundHelper();
	void SetSoundClassToBypassUserMusic(struct FName inSoundClassName);
	void SetSoundClassToOneSoundPerActor(class FString inSoundClassName);
	void SetPropertyValueInSoundNodes(class USoundCue* InSoundCue, class AActor* owningActor, class UClass* inSoundNodeClass, struct FName inPropertyName, float inFloatValue, class FString inNodeInstanceName, uint8_t& opResult);
	float GetPropertyValueInSoundNode(class USoundCue* InSoundCue, class AActor* owningActor, class UClass* inSoundNodeClass, struct FName inPropertyName, unsigned long inGetOnlyDefaultValue, class FString inNodeInstanceName, uint8_t& opResult);
	float ScaleInRange(float inputValue, float minInputRange, float maxInputRange, float minOutputRange, float maxOutputRange, unsigned long invert);
	void EnablePadSpeaker(int32_t PadNo, unsigned long isPadSpeakerEnable);
	void SetAudioLanguage(class FString inNewLanguage, unsigned long bReloadObjects);
	class FString GetAudioLanguage();
	void SetMultiChannelMode(uint8_t inSelectedMultiChannelMode);
	uint8_t GetMultiChannelMode();
	bool IsAudioEnabled();
	void SetNPCTalkMode(unsigned long Enable, unsigned long ResetAllClassProperties);
	void SetSoundModeBody(struct FName newSoundMode, unsigned long bResetAllClassProperties, uint8_t& opResult);
	void SetSoundMode(struct FName newSoundMode, unsigned long bResetAllClassProperties, uint8_t& opResult);
	struct FName GetCurrentSoundMode();
	void FadeOutAllSounds(float FadeTime, unsigned long bShouldStopUISounds, uint8_t& opResult);
	void StopSoundsSoundClassesNotMatched(float FadeTime, TArray<class USoundClass*>& inSoundClasses, uint8_t& opResult);
	void StopSoundsSoundClassesMatched(float FadeTime, TArray<class USoundClass*>& inSoundClasses, uint8_t& opResult);
	void StopAllSounds(float FadeTime, unsigned long bShouldStopUISounds, uint8_t& opResult);
	void UnPauseAllSounds(float FadeTime, uint8_t& opResult);
	void PauseAllSounds(float FadeTime, uint8_t& opResult);
	void StopSoundsOnActor(class AActor* owningActor, float FadeTime, uint8_t& opResult);
	float SetRealtimeParameterValue(class UAudioComponent* InAudioComponent, uint8_t inParameterType, float inValue);
	void UnPauseAudioComponent(class UAudioComponent* Component, uint8_t& opResult);
	void PauseAudioComponent(class UAudioComponent* Component, uint8_t& opResult);
	void StopAudioComponent(class UAudioComponent* Component, float FadeTime, float Volume, uint8_t& opResult);
	void PlayAudioComponent(class UAudioComponent* Component, float FadeTime, float Volume, class FString inStartMarkerLabel, class FString inEndMarkerLabel, uint8_t& opResult);
	class UAudioComponent* FindAudioComponent(class USoundCue* InSoundCue, class AActor* owingActor, TArray<class UAudioComponent*>& IgnoreList);
	float SetSoundParameter(class USoundCue* InSoundCue, uint8_t inParameterType, float inValue);
	float GetVolume(class USoundCue* InSoundCue, class AActor* owningActor, uint8_t& opResult);
	void SetVolume(class USoundCue* InSoundCue, float NewVolume, class AActor* owningActor, float InterpolationTime, uint8_t& opResult);
	void UnPause(class USoundCue* InSoundCue, class AActor* owningActor, float FadeTime, uint8_t& opResult);
	void Pause(class USoundCue* InSoundCue, class AActor* owningActor, float FadeTime, uint8_t& opResult);
	void SwitchTrack(class USoundCue* inSoundCueToSwitch, class USoundCue* inNewSoundCue, class AActor* owningActor, class FString inStartMarkerLabel, class FString inEndMarkerLabel, unsigned long isSampleAccurate);
	void Jump(class USoundCue* InSoundCue, class AActor* owningActor, class FString inStartMarkerLabel, class FString inEndMarkerLabel, unsigned long isSampleAccurate);
	void Stop(class USoundCue* InSoundCue, class AActor* owningActor, float FadeTime, float fadeVolume, uint8_t& opResult);
	void PlayPadSpeaker(class USoundCue* InSoundCue, int32_t PadNo, float FadeTime, uint8_t& opResult);
	void Play(class USoundCue* InSoundCue, class AActor* owningActor, float FadeTime, unsigned long bStopWhenOwnerDestroyed, struct FVector Location, class FString inStartMarkerLabel, class FString inEndMarkerLabel, uint8_t& opResult);
	bool IsPlaying(class USoundCue* InSoundCue, class AActor* owningActor);
	void Muting(unsigned long bIsMuted, struct FName SoundClassFName);
	static class UGHM_SoundManager* Instance();
};

// Class GHMEngine.GHM_SoundNode_ParameterControl
// 0x003C (0x0074 - 0x00B0)
class UGHM_SoundNode_ParameterControl : public USoundNode
{
public:
	TArray<struct FSoundNodeParameterControlRanges>    m_PitchModRanges;                              // 0x0074 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FSoundNodeParameterControlRanges>    m_VolumeModRanges;                             // 0x0084 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FSoundNodeParameterControlRanges>    m_PanModRanges;                                // 0x0094 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              m_Current_0_To_1_Pitch;                        // 0x00A4 (0x0004) [0x0000000000000000]               
	float                                              m_Current_0_To_1_Volume;                       // 0x00A8 (0x0004) [0x0000000000000000]               
	float                                              m_Current_0_To_1_Pan;                          // 0x00AC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SoundNode_ParameterControl");
		}

		return uClassPointer;
	};

	void eventSetValue(uint8_t inType, float inValue);
	float eventGetValue(uint8_t inType);
};

// Class GHMEngine.GHM_SoundNodeADSR
// 0x0028 (0x0074 - 0x009C)
class UGHM_SoundNodeADSR : public USoundNode
{
public:
	float                                              m_fPeakLevel;                                  // 0x0074 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fSustainLevel;                               // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fAttack;                                     // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fDecay;                                      // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fHold;                                       // 0x0084 (0x0004) [0x0000000000000000]               
	float                                              m_fRelease;                                    // 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      m_bStarted : 1;                                // 0x008C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FDouble                                     m_fStartTime;                                  // 0x0090 (0x0008) [0x0000000000000000]               
	float                                              m_fElapsedTime;                                // 0x0098 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SoundNodeADSR");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SoundNodeSequence
// 0x0018 (0x0074 - 0x008C)
class UGHM_SoundNodeSequence : public USoundNode
{
public:
	unsigned long                                      bDummy : 1;                                    // 0x0074 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	TArray<unsigned long>                              HasBeenUsed;                                   // 0x0078 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            NumUsed;                                       // 0x0088 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SoundNodeSequence");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SplineActor
// 0x0018 (0x02E4 - 0x02FC)
class AGHM_SplineActor : public ASplineActor
{
public:
	float                                              mfSpeed;                                       // 0x02E4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    mOrientation;                                  // 0x02E8 (0x000C) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      mbUseShortestPath : 1;                         // 0x02F4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            miNumberOfSegmentsInSpline;                    // 0x02F8 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SplineActor");
		}

		return uClassPointer;
	};

	void UpdateSplineComponents();
};

// Class GHMEngine.GHM_SplineComponent
// 0x0004 (0x02A4 - 0x02A8)
class UGHM_SplineComponent : public USplineComponent
{
public:
	int32_t                                            miNumberOfSegments;                            // 0x02A4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SplineComponent");
		}

		return uClassPointer;
	};

	void EstimateClosestPointRelative(struct FVector TestPoint, int32_t iIterations, float fStartDistAlongSpline, float fMaxDistFromStart, struct FSplineClosestPointResult& OutResult);
	void EstimateClosestPoint(struct FVector TestPoint, int32_t iIterations, struct FSplineClosestPointResult& OutResult);
	void UpdateSplineReparamTable();
};

// Class GHMEngine.GHM_SplinePath
// 0x0044 (0x0060 - 0x00A4)
class UGHM_SplinePath : public UObject
{
public:
	class AGHM_SplineActor*                            moStartSpline;                                 // 0x0060 (0x0008) [0x0000000000000000]               
	unsigned long                                      mbLooping : 1;                                 // 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mbLoopedThisFrame : 1;                         // 0x0068 (0x0004) [0x0000000000000000] [0x00000002] 
	class AGHM_SplineActor*                            moCurrentSpline;                               // 0x006C (0x0008) [0x0000000000000000]               
	class AGHM_SplineActor*                            moNextSpline;                                  // 0x0074 (0x0008) [0x0000000000000000]               
	float                                              mfDistanceAlongCurrentSpline;                  // 0x007C (0x0004) [0x0000000000000000]               
	struct FVector                                     mCurrentPosition;                              // 0x0080 (0x000C) [0x0000000000000000]               
	struct FRotator                                    mCurrentRotation;                              // 0x008C (0x000C) [0x0000000000000000]               
	struct FVector                                     mPositionBeforeMove;                           // 0x0098 (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SplinePath");
		}

		return uClassPointer;
	};

	struct FRotator GetRotation();
	struct FVector GetLocation();
	void SetRotation(struct FRotator NewRotation);
	void SetLocation(struct FVector NewLocation);
	void eventTick(float DeltaTime);
	bool IsAtEndOfPath();
	void MoveToEnd();
	void MoveToNextSpline();
	void MoveToStart();
	void UpdateMovementAlongSpline(float DeltaTime);
	void EstimateClosestPointRelative(struct FVector TestPoint, int32_t iIterations, float fMaxMoveDistance, float fPrevDistAlongSpline, class AGHM_SplineActor* PrevClosestSplineActor, struct FSplineClosestPointResult& OutResult);
	void EstimateClosestPoint(struct FVector TestPoint, int32_t iIterations, struct FSplineClosestPointResult& ClosestPointResult);
};

// Class GHMEngine.GHM_ActorFactorySkeletalMeshMAT
// 0x0000 (0x00B4 - 0x00B4)
class UGHM_ActorFactorySkeletalMeshMAT : public UActorFactorySkeletalMeshMAT
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_ActorFactorySkeletalMeshMAT");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_StackablePhysicsActorInterface
// 0x0000 (0x0060 - 0x0060)
class UGHM_StackablePhysicsActorInterface : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_StackablePhysicsActorInterface");
		}

		return uClassPointer;
	};

	void StackNotify();
};

// Class GHMEngine.GHM_BreakableObjectManager
// 0x0068 (0x027C - 0x02E4)
class AGHM_BreakableObjectManager : public AActor
{
public:
	unsigned long                                      mbManageBreakableObjects : 1;                  // 0x027C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mbCollisionOffOnFade : 1;                      // 0x027C (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            miMaxPoolSize;                                 // 0x0280 (0x0004) [0x0000000000000000]               
	int32_t                                            miSoftLimit;                                   // 0x0284 (0x0004) [0x0000000000000000]               
	int32_t                                            miMaxSpawnsPerFrame;                           // 0x0288 (0x0004) [0x0000000000000000]               
	float                                              mfMaxLifespan;                                 // 0x028C (0x0004) [0x0000000000000000]               
	float                                              mfFadeTimeOverride;                            // 0x0290 (0x0004) [0x0000000000000000]               
	int32_t                                            miSpawnsThisFrame;                             // 0x0294 (0x0004) [0x0000000000000000]               
	int32_t                                            miNumBreakingObjects;                          // 0x0298 (0x0004) [0x0000000000000000]               
	float                                              mfKillThreshold;                               // 0x029C (0x0004) [0x0000000000000000]               
	float                                              mfStallThreshold;                              // 0x02A0 (0x0004) [0x0000000000000000]               
	float                                              mfMaxSpawnTime;                                // 0x02A4 (0x0004) [0x0000000000000000]               
	int32_t                                            miMaxNavMeshSplitsPerFrame;                    // 0x02A8 (0x0004) [0x0000000000000000]               
	class UClass*                                      PhysicsSpawnClass;                             // 0x02AC (0x0008) [0x0000000000000000]               
	class UClass*                                      StaticSpawnClass;                              // 0x02B4 (0x0008) [0x0000000000000000]               
	TArray<class AGHM_BreakableObject*>                DeferredSpawns;                                // 0x02BC (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class AGHM_BreakableObject*>                DeferredSplits;                                // 0x02CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mfNavMeshFrame;                                // 0x02DC (0x0004) [0x0000000000000000]               
	float                                              mfNavMeshDelay;                                // 0x02E0 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_BreakableObjectManager");
		}

		return uClassPointer;
	};

	int32_t RequestBreakableSpawn(int32_t iRequestedSpawns);
	void StopBreaking();
	void StartBreaking();
	void SplitNavMesh();
	void RequestNavMeshSplit(class AGHM_BreakableObject* Breakable);
	void eventTick(float DeltaTime);
	void RecycleFragment(class AGHM_KActorSpawnable* Fragment);
	void EnforceSoftLimit();
	class AGHM_KActorSpawnable* GetFreeRBFragment(struct FVector SpawnLocation, struct FRotator SpawnRotation);
};

// Class GHMEngine.GHM_SeqEvent_BreakableObjectBroken
// 0x0000 (0x0178 - 0x0178)
class UGHM_SeqEvent_BreakableObjectBroken : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqEvent_BreakableObjectBroken");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_DynamicSMActorStaticSpawnable
// 0x0000 (0x02CC - 0x02CC)
class AGHM_DynamicSMActorStaticSpawnable : public ADynamicSMActor_Spawnable
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DynamicSMActorStaticSpawnable");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_CheatManager
// 0x0000 (0x00A0 - 0x00A0)
class UGHM_CheatManager : public UGameCheatManager
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_CheatManager");
		}

		return uClassPointer;
	};

	void DisableDebug(class AGHM_DebugController* DC);
	void EnableDebug(class APlayerController* PC, class UClass* cDC);
	void StartDebug(class UClass* cDC);
	void DebugMenu();
};

// Class GHMEngine.GHM_DebugController
// 0x0024 (0x07B4 - 0x07D8)
class AGHM_DebugController : public APlayerController
{
public:
	class APlayerController*                           RootController;                                // 0x07B4 (0x0008) [0x0000000000000000]               
	class UPlayer*                                     RootPlayer;                                    // 0x07BC (0x0008) [0x0000000000000000]               
	class APawn*                                       RootPawn;                                      // 0x07C4 (0x0008) [0x0000000000000000]               
	unsigned long                                      bSwitchCamera : 1;                             // 0x07CC (0x0004) [0x0000000000000000] [0x00000001] 
	class ACamera*                                     DefCamera;                                     // 0x07D0 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugController");
		}

		return uClassPointer;
	};

	void KeyRBButton(uint8_t btn);
	void KeyLBButton(uint8_t btn);
	void KeyRTButton(uint8_t btn);
	void KeyLTButton(uint8_t btn);
	void KeyYButton(uint8_t btn);
	void KeyXButton(uint8_t btn);
	void KeyBButton(uint8_t btn);
	void KeyAButton(uint8_t btn);
	void KeyRight(uint8_t btn);
	void KeyLeft(uint8_t btn);
	void KeyDown(uint8_t btn);
	void KeyUp(uint8_t btn);
	void SwitchDefCamera();
	void SwitchRootCamera();
	void Terminate();
	void DisableDebug();
	void DebugMenu();
	void eventPostBeginPlay();
};

// Class GHMEngine.GHM_DebugMenuController
// 0x0000 (0x07D8 - 0x07D8)
class AGHM_DebugMenuController : public AGHM_DebugController
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugMenuController");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SeqEvent_CheckpointLoaded
// 0x0008 (0x0178 - 0x0180)
class UGHM_SeqEvent_CheckpointLoaded : public USequenceEvent
{
public:
	int32_t                                            CheckpointIndex;                               // 0x0178 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bReceiveAllCheckPointIndex : 1;                // 0x017C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqEvent_CheckpointLoaded");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SeqEvent_CheckpointWriteToStorage
// 0x0008 (0x0178 - 0x0180)
class UGHM_SeqEvent_CheckpointWriteToStorage : public USequenceEvent
{
public:
	int32_t                                            CheckpointIndex;                               // 0x0178 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bReceiveAllCheckPointIndex : 1;                // 0x017C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqEvent_CheckpointWriteToStorage");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SeqEvent_CheckpointSaved
// 0x0008 (0x0178 - 0x0180)
class UGHM_SeqEvent_CheckpointSaved : public USequenceEvent
{
public:
	int32_t                                            CheckpointIndex;                               // 0x0178 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bReceiveAllCheckPointIndex : 1;                // 0x017C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqEvent_CheckpointSaved");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_DebugTypes
// 0x0000 (0x0060 - 0x0060)
class UGHM_DebugTypes : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugTypes");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_DebugInput
// 0x0000 (0x02C0 - 0x02C0)
class UGHM_DebugInput : public UPlayerInput
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugInput");
		}

		return uClassPointer;
	};

	void KeyRBButton(uint8_t btn);
	void KeyLBButton(uint8_t btn);
	void KeyLTButton(uint8_t btn);
	void KeyRTButton(uint8_t btn);
	void KeyYButton(uint8_t btn);
	void KeyXButton(uint8_t btn);
	void KeyBButton(uint8_t btn);
	void KeyAButton(uint8_t btn);
	void KeyRight(uint8_t btn);
	void KeyLeft(uint8_t btn);
	void KeyDown(uint8_t btn);
	void KeyUp(uint8_t btn);
};

// Class GHMEngine.GHM_DebugMenuItemButton
// 0x0000 (0x0114 - 0x0114)
class UGHM_DebugMenuItemButton : public UGHM_DebugMenuItemBool
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugMenuItemButton");
		}

		return uClassPointer;
	};

	void Cancel();
	void Select();
	void DrawMenuItem(class UCanvas* Canvas);
};

// Class GHMEngine.GHM_DebugItemCmd
// 0x0000 (0x0114 - 0x0114)
class UGHM_DebugItemCmd : public UGHM_DebugMenuItemButton
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugItemCmd");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_DebugMenuItemValueTimeGraph
// 0x0024 (0x0130 - 0x0154)
class UGHM_DebugMenuItemValueTimeGraph : public UGHM_DebugMenuItemGraph
{
public:
	int32_t                                            mBufferCapacity;                               // 0x0130 (0x0004) [0x0000000000000000]               
	int32_t                                            mNextBufferIndex;                              // 0x0134 (0x0004) [0x0000000000000000]               
	TArray<float>                                      mValueCircularBuffer;                          // 0x0138 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FColor                                      mLineColour;                                   // 0x0148 (0x0004) [0x0000000000000000]               
	struct FColor                                      mSpikeLineColour;                              // 0x014C (0x0004) [0x0000000000000000]               
	unsigned long                                      mbAutoSizePositiveYAxis : 1;                   // 0x0150 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mbAutoSizeNegativeYAxis : 1;                   // 0x0150 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mbAutoLabelSpikes : 1;                         // 0x0150 (0x0004) [0x0000000000000000] [0x00000004] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DebugMenuItemValueTimeGraph");
		}

		return uClassPointer;
	};

	void SetAutoLabelSpikes(unsigned long bLabelSpikes);
	void SetAutoSizePositiveYAxis(unsigned long bAutoSizeNegativeYAxis);
	void SetAutoSizeNegativeYAxis(unsigned long bAutoSizeNegativeYAxis);
	void AddValue(float Value);
	int32_t GetNextIndex(int32_t Index);
	float ComputeAverageValue();
	void DrawGraphWindow(class UCanvas* Canvas);
};

// Class GHMEngine.GHM_DirectionalLightSpawnable
// 0x0000 (0x0288 - 0x0288)
class AGHM_DirectionalLightSpawnable : public ADirectionalLightToggleable
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DirectionalLightSpawnable");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_DynamicReverbVolume
// 0x0000 (0x033C - 0x033C)
class AGHM_DynamicReverbVolume : public AReverbVolume
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_DynamicReverbVolume");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_Engine_SharedTypes
// 0x0000 (0x0060 - 0x0060)
class UGHM_Engine_SharedTypes : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_Engine_SharedTypes");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_HUDSub
// 0x0024 (0x0060 - 0x0084)
class UGHM_HUDSub : public UObject
{
public:
	TArray<struct FDisplayList>                        mDisplayArray;                                 // 0x0060 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      m_bShowHUD : 1;                                // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             __DrawDisplay__Delegate;                       // 0x0074 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_HUDSub");
		}

		return uClassPointer;
	};

	bool DelDisplay(struct FScriptDelegate dgt);
	bool AddDisplay(struct FScriptDelegate dgt, int32_t prio);
	void DrawDisplayList(class UCanvas* Canvas);
	void Initialize();
	void DrawDisplay(class UCanvas* Canvas);
};

// Class GHMEngine.GHM_MaterialAnim
// 0x0064 (0x0060 - 0x00C4)
class UGHM_MaterialAnim : public UObject
{
public:
	TArray<struct FGHMMaterialAnimContainer>           AnimContainer;                                 // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class USkeletalMeshComponent*                      SkMesh;                                        // 0x0070 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        StMesh;                                        // 0x0078 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            TargetMaterialIndex;                           // 0x0080 (0x0004) [0x0000000000000000]               
	float                                              CurrentTime;                                   // 0x0084 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentContainerIndex;                         // 0x0088 (0x0004) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   CurrentMaterial;                               // 0x008C (0x0008) [0x0000000000000000]               
	struct FGHMMaterialAnimMover                       Mover;                                         // 0x0094 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_MaterialAnim");
		}

		return uClassPointer;
	};

	void SetTextureKey(int32_t matnum, struct FName ParamName, float KeyTime, class UTexture* Value);
	void ChangeTextureKey(int32_t matnum, struct FName ParamName, int32_t KeyNum, float KeyTime, class UTexture* Value);
	void SetVectorKey(int32_t matnum, struct FName ParamName, float KeyTime, struct FLinearColor Value);
	void ChangeScalarKey(int32_t matnum, struct FName ParamName, int32_t KeyNum, float KeyTime, float Value);
	void SetScalarKey(int32_t matnum, struct FName ParamName, float KeyTime, float Value);
	void SetMaterialChangeTime(int32_t matnum, float ChangeTime);
	void ResetMover();
	void InitMover(struct FGHMMaterialAnimContainer container);
	void Animate();
	void Interp();
	void SetMaterial();
	void MaterialAnimTick(float DeltaTime);
	void StopMaterialAnim();
	void PlayMaterialAnim();
	void SetTargetMaterialIndex(int32_t Idx);
	void SetTargetStaticMesh(class UStaticMeshComponent* Target);
	void SetTargetSkeletalMesh(class USkeletalMeshComponent* Target);
	void AddMaterialInstance(class UMaterialInstanceConstant* MIC);
};

// Class GHMEngine.GHM_MessageBoard
// 0x006A (0x0060 - 0x00CA)
class UGHM_MessageBoard : public UObject
{
public:
	TArray<class FString>                              mMessageList;                                  // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<float>                                      mMessSize;                                     // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mMessageFontType;                              // 0x0080 (0x0004) [0x0000000000000000]               
	struct FVector                                     mPos;                                          // 0x0084 (0x000C) [0x0000000000000000]               
	float                                              mLeftPosX;                                     // 0x0090 (0x0004) [0x0000000000000000]               
	float                                              mRightPosX;                                    // 0x0094 (0x0004) [0x0000000000000000]               
	int32_t                                            mWidth;                                        // 0x0098 (0x0004) [0x0000000000000000]               
	int32_t                                            mHeight;                                       // 0x009C (0x0004) [0x0000000000000000]               
	int32_t                                            mNowColumn;                                    // 0x00A0 (0x0004) [0x0000000000000000]               
	int32_t                                            mMaxRaw;                                       // 0x00A4 (0x0004) [0x0000000000000000]               
	int32_t                                            mNowRaw;                                       // 0x00A8 (0x0004) [0x0000000000000000]               
	struct FDouble                                     mLastDrawingTime;                              // 0x00AC (0x0008) [0x0000000000000000]               
	struct FDouble                                     mPrevDeltaTime;                                // 0x00B4 (0x0008) [0x0000000000000000]               
	float                                              mMessageSpeed;                                 // 0x00BC (0x0004) [0x0000000000000000]               
	float                                              mDisplayTimeDest;                              // 0x00C0 (0x0004) [0x0000000000000000]               
	float                                              mNowDisplayTime;                               // 0x00C4 (0x0004) [0x0000000000000000]               
	uint8_t                                            mMesDrawType;                                  // 0x00C8 (0x0001) [0x0000000000000000]               
	uint8_t                                            mMesPosType;                                   // 0x00C9 (0x0001) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_MessageBoard");
		}

		return uClassPointer;
	};

	void DrawString(class UCanvas* Canvas, int32_t col_r, int32_t col_g, int32_t col_b, unsigned long outline);
	void DrawLine(class UCanvas* Canvas, int32_t col_r, int32_t col_g, int32_t col_b, unsigned long outline);
	void DrawWord(class UCanvas* Canvas, int32_t col_r, int32_t col_g, int32_t col_b, unsigned long outline);
	void DrawDisplay(class UCanvas* Canvas);
	void SetMessagePosType(uint8_t ptype);
	void SetMessageDrawType(uint8_t dtype);
	void SetMessageSpeed(float spd);
	void ClearString();
	void AddString(class FString Message);
	void SetFontType(int32_t font_type);
	void SetDisplayRightPosX(float pos_x);
	void SetDisplayLeftPosX(float pos_x);
	void SetDisplayPosY(float pos_y);
	void SetDisplayTime(float disptime);
	void Hide();
	void Show();
	void Reset();
	void Terminate();
	void Initialize();
};

// Class GHMEngine.GHM_OnlinePlayerInterfaceNui
// 0x0000 (0x0060 - 0x0060)
class UGHM_OnlinePlayerInterfaceNui : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_OnlinePlayerInterfaceNui");
		}

		return uClassPointer;
	};

	bool ShowNuiTroubleshooterUI();
	bool ShowNuiGuideUI();
	void ClearNuiSystemGestureDelegate(struct FScriptDelegate SystemGestureDelegate);
	void AddNuiSystemGestureDelegate(struct FScriptDelegate SystemGestureDelegate);
	void OnNuiSystemGesture(int32_t TrackingID, int32_t& bProcessed);
	bool SetPlayerTrackingID(int32_t TrackingID);
};

// Class GHMEngine.GHM_PhysicalMaterialProperty
// 0x0020 (0x0060 - 0x0080)
class UGHM_PhysicalMaterialProperty : public UPhysicalMaterialPropertyBase
{
public:
	class USoundCue*                                   SE_Run;                                        // 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             Eff_Run;                                       // 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   SE_Walk;                                       // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             Eff_Walk;                                      // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_PhysicalMaterialProperty");
		}

		return uClassPointer;
	};

	class UParticleSystem* MatchEff(int32_t effType);
	class USoundCue* MatchSE(int32_t seType);
};

// Class GHMEngine.GHM_PhysicalMaterialVolume
// 0x0010 (0x02B8 - 0x02C8)
class AGHM_PhysicalMaterialVolume : public AVolume
{
public:
	class USoundCue*                                   moSE_Override;                                 // 0x02B8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             moEff_Override;                                // 0x02C0 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_PhysicalMaterialVolume");
		}

		return uClassPointer;
	};

	int32_t iGetEffectType();
	int32_t iGetSoundCueType();
};

// Class GHMEngine.GHM_ProfileSettings
// 0x0000 (0x00C4 - 0x00C4)
class UGHM_ProfileSettings : public UOnlineProfileSettings
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_ProfileSettings");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SeqAct_RegistSoundModeExclusive
// 0x0010 (0x0154 - 0x0164)
class UGHM_SeqAct_RegistSoundModeExclusive : public USequenceAction
{
public:
	TArray<struct FSSoundMode_ExclusiveInfo>           m_arSoundModeExclusiveInfo;                    // 0x0154 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_RegistSoundModeExclusive");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SeqAct_SetRichPresence
// 0x0000 (0x0154 - 0x0154)
class UGHM_SeqAct_SetRichPresence : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_SetRichPresence");
		}

		return uClassPointer;
	};

	int32_t GetRichPresenceId();
};

// Class GHMEngine.GHM_PointLightSpawnable
// 0x0000 (0x0288 - 0x0288)
class AGHM_PointLightSpawnable : public APointLightMovable
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_PointLightSpawnable");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SeqAct_GetSoundModeName
// 0x0010 (0x0154 - 0x0164)
class UGHM_SeqAct_GetSoundModeName : public USequenceAction
{
public:
	class FString                                      mSoundModeName;                                // 0x0154 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_GetSoundModeName");
		}

		return uClassPointer;
	};

	void eventActivated();
};

// Class GHMEngine.GHM_SeqAct_Message
// 0x0026 (0x0170 - 0x0196)
class UGHM_SeqAct_Message : public USeqAct_Latent
{
public:
	unsigned long                                      DisplayFlag : 1;                               // 0x0170 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DisplayTime;                                   // 0x0174 (0x0004) [0x0000000000000000]               
	float                                              MessageSpeed;                                  // 0x0178 (0x0004) [0x0000000000000000]               
	int32_t                                            MessageType;                                   // 0x017C (0x0004) [0x0000000000000000]               
	int32_t                                            MessageFontType;                               // 0x0180 (0x0004) [0x0000000000000000]               
	int32_t                                            PosType;                                       // 0x0184 (0x0004) [0x0000000000000000]               
	float                                              LeftPosX;                                      // 0x0188 (0x0004) [0x0000000000000000]               
	float                                              RightPosX;                                     // 0x018C (0x0004) [0x0000000000000000]               
	float                                              PosY;                                          // 0x0190 (0x0004) [0x0000000000000000]               
	uint8_t                                            MessageDrawType;                               // 0x0194 (0x0001) [0x0000000000000000]               
	uint8_t                                            MessagePosType;                                // 0x0195 (0x0001) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_Message");
		}

		return uClassPointer;
	};

	void eventActivated();
};

// Class GHMEngine.GHM_SeqEvent_PreLoadedBgm
// 0x0000 (0x0178 - 0x0178)
class UGHM_SeqEvent_PreLoadedBgm : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqEvent_PreLoadedBgm");
		}

		return uClassPointer;
	};

};

// Class GHMEngine.GHM_SeqAct_Section
// 0x0010 (0x0154 - 0x0164)
class UGHM_SeqAct_Section : public USequenceAction
{
public:
	class FString                                      msLocationName;                                // 0x0154 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_Section");
		}

		return uClassPointer;
	};

	void eventActivated();
};

// Class GHMEngine.GHM_SeqAct_StopSoundsFilterBySoundClasses
// 0x0014 (0x0154 - 0x0168)
class UGHM_SeqAct_StopSoundsFilterBySoundClasses : public USequenceAction
{
public:
	float                                              FadeTime;                                      // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class USoundClass*>                         SoundClasses;                                  // 0x0158 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_StopSoundsFilterBySoundClasses");
		}

		return uClassPointer;
	};

	void eventActivated();
};

// Class GHMEngine.GHM_SeqAct_ToggleRadioFilterForMusic
// 0x0000 (0x0154 - 0x0154)
class UGHM_SeqAct_ToggleRadioFilterForMusic : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_SeqAct_ToggleRadioFilterForMusic");
		}

		return uClassPointer;
	};

	static int32_t eventGetObjClassVersion();
	void SetRadioFilterForMusic(unsigned long Enable);
	void eventActivated();
};

// Class GHMEngine.GHM_TargetPoint
// 0x0008 (0x027C - 0x0284)
class AGHM_TargetPoint : public AActor
{
public:
	class USpriteComponent*                            SpriteComp;                                    // 0x027C (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GHMEngine.GHM_TargetPoint");
		}

		return uClassPointer;
	};

};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
